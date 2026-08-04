// Type: Characters.HumanSetupMeshes
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSetupMeshes.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupMeshes.cs
// --------------------------------

// Characters.HumanSetupMeshes$$.ctor
// il2cpp: void Characters_HumanSetupMeshes___ctor (Characters_HumanSetupMeshes_o* __this, Characters_HumanSetup_o* setup, const MethodInfo* method);
// 0x42e7ba0

void Characters_HumanSetupMeshes___ctor
               (Characters_HumanSetupMeshes_o *__this,Characters_HumanSetup_o *setup,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  
  if (g_data_057adead == '\0') {
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Costumes/Prefabs/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Face/Prefabs/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Prefabs/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Weapons/Prefabs/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Accessories/Prefabs/");
    g_data_057adead = '\x01';
    method = extraout_RDX;
  }
  pSVar1 = "Human/Parts/Costumes/Prefabs/";
  (__this->fields).CostumesPath = "Human/Parts/Costumes/Prefabs/";
  il2cpp_runtime_helper_022b4080(&(__this->fields).CostumesPath,pSVar1,method);
  (__this->fields).AccessoriesPath = "Human/Parts/Accessories/Prefabs/";
  il2cpp_runtime_helper_022b4080(&(__this->fields).AccessoriesPath);
  (__this->fields).HairsPath = "Human/Parts/Hairs/Prefabs/";
  il2cpp_runtime_helper_022b4080(&(__this->fields).HairsPath);
  (__this->fields).WeaponsPath = "Human/Parts/Weapons/Prefabs/";
  il2cpp_runtime_helper_022b4080(&(__this->fields).WeaponsPath);
  (__this->fields).FacePath = "Human/Parts/Face/Prefabs/";
  il2cpp_runtime_helper_022b4080(&(__this->fields).FacePath);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setup = setup;
  il2cpp_runtime_helper_022b4080(&__this->fields,setup);
  return;
}


// Characters.HumanSetupMeshes$$GetBootsMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBootsMesh (Characters_HumanSetupMeshes_o* __this, int32_t boots, const MethodInfo* method);
// 0x42f0c40

System_String_o *
Characters_HumanSetupMeshes__GetBootsMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t boots,MethodInfo *method)

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = boots;
  if (g_data_057adeae == '\0') {
    il2cpp_runtime_helper_023445d0(&"character_leg_");
    g_data_057adeae = '\x01';
  }
  pSVar1 = (__this->fields).CostumesPath;
  str2 = System_Int32__ToString((int32_t)&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_3af7150(pSVar1,"character_leg_",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupMeshes$$GetHandMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHandMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x42f0b70

System_String_o *
Characters_HumanSetupMeshes__GetHandMesh
          (Characters_HumanSetupMeshes_o *__this,bool_conflict left,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  char cVar2;
  undefined8 *puVar3;
  ulong uVar4;
  System_String_o *str2;
  System_String_o *pSVar5;
  Characters_HumanSetupMeshes_o *pCVar6;
  bool_conflict bStack_24;
  Characters_HumanSetupMeshes_o *pCStack_20;
  
  cVar2 = (char)left;
  pCVar6 = __this;
  if (g_data_057adeaf == '\0') {
    pCStack_20 = (Characters_HumanSetupMeshes_o *)0x42f0b8d;
    il2cpp_runtime_helper_023445d0(&"_ts");
    pCStack_20 = (Characters_HumanSetupMeshes_o *)0x42f0b99;
    il2cpp_runtime_helper_023445d0(&"_empty");
    pCStack_20 = (Characters_HumanSetupMeshes_o *)0x42f0ba5;
    il2cpp_runtime_helper_023445d0(&"character_hand_l");
    pCStack_20 = (Characters_HumanSetupMeshes_o *)0x42f0bb1;
    il2cpp_runtime_helper_023445d0(&"character_hand_r");
    pCStack_20 = (Characters_HumanSetupMeshes_o *)0x42f0bbd;
    il2cpp_runtime_helper_023445d0(&"_0");
    pCVar6 = (Characters_HumanSetupMeshes_o *)&"_ah_0";
    pCStack_20 = (Characters_HumanSetupMeshes_o *)0x42f0bc9;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeaf = '\x01';
  }
  if (cVar2 == '\0') {
    puVar3 = &"character_hand_r";
    pCVar1 = (__this->fields)._setup;
  }
  else {
    puVar3 = &"character_hand_l";
    pCVar1 = (__this->fields)._setup;
  }
  if (pCVar1 == (Characters_HumanSetup_o *)0x0) {
    pCStack_20 = (Characters_HumanSetupMeshes_o *)0x42f0c3b;
    il2cpp_runtime_helper_022b2c90();
    bStack_24 = left;
    pCStack_20 = __this;
    if (g_data_057adeae == '\0') {
      il2cpp_runtime_helper_023445d0(&"character_leg_");
      g_data_057adeae = '\x01';
    }
    pSVar5 = (pCVar6->fields).CostumesPath;
    str2 = System_Int32__ToString((int32_t)&bStack_24,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_3af7150(pSVar5,"character_leg_",str2,(MethodInfo *)0x0);
    return pSVar5;
  }
  pSVar5 = (System_String_o *)*puVar3;
  uVar4 = (ulong)(pCVar1->fields).Weapon;
  if (uVar4 < 4) {
    pCStack_20 = (Characters_HumanSetupMeshes_o *)0x42f0c22;
    pSVar5 = System_String__Concat_3ae5ba0
                       (pSVar5,*(System_String_o **)(&g_data_0524f3a0)[uVar4],(MethodInfo *)0x0);
  }
  pSVar5 = System_String__Concat_3ae5ba0((__this->fields).CostumesPath,pSVar5,(MethodInfo *)0x0);
  return pSVar5;
}


// Characters.HumanSetupMeshes$$GetArmMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetArmMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x42f0720

System_String_o *
Characters_HumanSetupMeshes__GetArmMesh
          (Characters_HumanSetupMeshes_o *__this,bool_conflict left,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  System_String_c *str0;
  bool_conflict bVar2;
  undefined8 *puVar3;
  System_String_Fields SVar4;
  System_String_o *__this_00;
  System_String_o *pSVar5;
  System_String_Fields SVar6;
  UnityEngine_Transform_array *value;
  System_String_Fields SVar7;
  System_String_Fields __this_01;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Transform_o *pUVar8;
  System_String_Fields __this_03;
  UnityEngine_Transform_o *value_00;
  System_String_o *extraout_RAX;
  undefined8 *puVar9;
  System_String_o *unaff_RBP;
  undefined4 uVar10;
  undefined4 in_register_00000034;
  MethodInfo_255A0F0 *name;
  MethodInfo_255A0F0 *__this_04;
  System_String_Fields SVar11;
  undefined1 auVar12 [16];
  undefined4 uStack_6c;
  System_String_Fields SStack_68;
  undefined8 uStack_60;
  System_String_Fields SStack_58;
  System_String_o *pSStack_50;
  undefined8 uStack_48;
  Characters_HumanSetupMeshes_o *pCStack_40;
  
  name = (MethodInfo_255A0F0 *)CONCAT44(in_register_00000034,left);
  SVar11 = (System_String_Fields)__this;
  if (g_data_057adeb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"_arm_L");
    il2cpp_runtime_helper_023445d0(&"_uniform");
    il2cpp_runtime_helper_023445d0(&"_arm_R");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"_casual_arm_AH_R");
    il2cpp_runtime_helper_023445d0(&"_casual_arm_AH_L");
    il2cpp_runtime_helper_023445d0(&"player");
    il2cpp_runtime_helper_023445d0(&"Uniform");
    SVar11 = (System_String_Fields)&"_casual";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb0 = '\x01';
  }
  pSVar5 = "player";
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
    if (((pCVar1->fields).Weapon | 2U) == 3) {
      puVar3 = &"_casual_arm_AH_R";
      puVar9 = &"_casual_arm_AH_L";
label_042f086b:
      if ((char)left == '\0') {
        puVar9 = puVar3;
      }
      pSVar5 = System_String__Concat_3af7150
                         ((__this->fields).CostumesPath,pSVar5,(System_String_o *)*puVar9,(MethodInfo *)0x0);
      return pSVar5;
    }
    SVar11 = (System_String_Fields)(pCVar1->fields).CurrentCostume;
    unaff_RBP = pSVar5;
    if ((SVar11 != (System_String_Fields)0x0) &&
       (name = "Type",
       SVar4 = (System_String_Fields)
               (**(code **)(*(long *)SVar11 + 0x1a8))
                         (SVar11,"Type",*(undefined8 *)(*(long *)SVar11 + 0x1b0)),
       SVar4 != (System_String_Fields)0x0)) {
      name = *(MethodInfo_255A0F0 **)(*(long *)SVar4 + 0x1d0);
      __this_00 = (System_String_o *)(**(code **)(*(long *)SVar4 + 0x1c8))();
      SVar11 = SVar4;
      if (__this_00 != (System_String_o *)0x0) {
        bVar2 = System_String__StartsWith(__this_00,"Uniform",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          puVar9 = &"_casual";
        }
        else {
          puVar9 = &"_uniform";
        }
        pSVar5 = System_String__Concat_3ae5ba0(pSVar5,(System_String_o *)*puVar9,(MethodInfo *)0x0);
        puVar3 = &"_arm_R";
        puVar9 = (undefined8 *)&"_arm_L";
        goto label_042f086b;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_04 = name;
  pCStack_40 = __this;
  if (g_data_057adea1 == '\0') {
    uStack_48 = 0x42f08b4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRenderer);
    uStack_48 = 0x42f08c0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    uStack_48 = 0x42f08cc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    uStack_48 = 0x42f08d8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    uStack_48 = 0x42f08e4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    uStack_48 = 0x42f08f0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    g_data_057adea1 = '\x01';
  }
  SVar4._stringLength = 0;
  SVar4._firstChar = 0;
  SVar4._6_2_ = 0;
  if (*(System_String_Fields *)((long)SVar11 + 0x160) != (System_String_Fields)0x0) {
    uStack_48 = 0x42f0917;
    SVar6 = (System_String_Fields)
            UnityEngine_GameObject__GetComponent_object_
                      ((UnityEngine_GameObject_o *)*(System_String_Fields *)((long)SVar11 + 0x160),
                       MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      uStack_48 = 0x42f0932;
      il2cpp_runtime_helper_02337ed0();
    }
    __this_04 = (MethodInfo_255A0F0 *)0x0;
    uStack_48 = 0x42f093e;
    SVar4 = SVar6;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)SVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      SVar4 = *(System_String_Fields *)((long)SVar11 + 0x160);
      if (SVar4 == (System_String_Fields)0x0) goto label_042f0b43;
      uStack_48 = 0x42f0961;
      __this_04 = MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRenderer;
      SVar6 = (System_String_Fields)
              UnityEngine_GameObject__AddComponent_object_
                        ((UnityEngine_GameObject_o *)SVar4,(MethodInfo_255A020 *)MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRenderer);
    }
    if (SVar6 != (System_String_Fields)0x0) {
      uStack_48 = 0x42f0977;
      value = UnityEngine_SkinnedMeshRenderer__get_bones
                        ((UnityEngine_SkinnedMeshRenderer_o *)SVar6,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        uStack_48 = 0x42f0992;
        il2cpp_runtime_helper_02337ed0();
      }
      SVar11 = *(System_String_Fields *)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        uStack_48 = 0x42f09b8;
        il2cpp_runtime_helper_02337ed0();
      }
      uStack_48 = 0x42f09d2;
      SVar4 = SVar11;
      SVar7 = (System_String_Fields)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        ((System_String_o *)SVar11,(System_String_o *)name,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      __this_04 = name;
      if (SVar7 != (System_String_Fields)0x0) {
        uStack_48 = 0x42f09e7;
        __this_04 = MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer;
        __this_01 = (System_String_Fields)
                    UnityEngine_GameObject__GetComponent_object_
                              ((UnityEngine_GameObject_o *)SVar7,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRenderer);
        SVar4 = SVar7;
        if (__this_01 != (System_String_Fields)0x0) {
          __this_04 = (MethodInfo_255A0F0 *)0x0;
          uStack_48 = 0x42f09fd;
          SVar4 = __this_01;
          __this_02 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
            uStack_48 = 0x42f0a10;
            pUVar8 = UnityEngine_GameObject__get_transform(__this_02,(MethodInfo *)0x0);
            __this_04 = (MethodInfo_255A0F0 *)0x0;
            uStack_48 = 0x42f0a1d;
            SVar4 = SVar6;
            SVar7 = (System_String_Fields)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)SVar6,(MethodInfo *)0x0);
            if (SVar7 != (System_String_Fields)0x0) {
              __this_04 = (MethodInfo_255A0F0 *)0x0;
              uStack_48 = 0x42f0a30;
              __this_03 = (System_String_Fields)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar7,(MethodInfo *)0x0);
              SVar4 = SVar7;
              if (__this_03 != (System_String_Fields)0x0) {
                __this_04 = (MethodInfo_255A0F0 *)0x0;
                uStack_48 = 0x42f0a43;
                value_00 = UnityEngine_Transform__get_parent
                                     ((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
                SVar4 = __this_03;
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  uStack_48 = 0x42f0a59;
                  UnityEngine_Transform__set_parent(pUVar8,value_00,(MethodInfo *)0x0);
                  __this_04 = (MethodInfo_255A0F0 *)0x0;
                  uStack_48 = 0x42f0a63;
                  SVar4 = __this_01;
                  pUVar8 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                  if (g_data_057a65d5 == '\0') {
                    SVar4 = (System_String_Fields)&TypeInfo_Vector3;
                    uStack_48 = 0x42f0a7b;
                    il2cpp_runtime_helper_023445d0();
                    g_data_057a65d5 = '\x01';
                  }
                  SVar11._stringLength = 0;
                  SVar11._firstChar = 0;
                  SVar11._6_2_ = 0;
                  if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                    uStack_48 = 0x42f0ab0;
                    UnityEngine_Transform__set_localPosition
                              (pUVar8,(UnityEngine_Vector3_o)
                                      **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0
                              );
                    __this_04 = (MethodInfo_255A0F0 *)0x0;
                    uStack_48 = 0x42f0aba;
                    SVar4 = __this_01;
                    pUVar8 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                    if (g_data_057a6932 == '\0') {
                      SVar4 = (System_String_Fields)&TypeInfo_Vector3;
                      uStack_48 = 0x42f0ad2;
                      il2cpp_runtime_helper_023445d0();
                      g_data_057a6932 = '\x01';
                    }
                    SVar11._stringLength = 0;
                    SVar11._firstChar = 0;
                    SVar11._6_2_ = 0;
                    if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                      uStack_48 = 0x42f0afd;
                      UnityEngine_Transform__set_localScale
                                (pUVar8,(UnityEngine_Vector3_o)
                                        *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                                 (MethodInfo *)0x0);
                      uStack_48 = 0x42f0b0a;
                      UnityEngine_SkinnedMeshRenderer__set_bones
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_01,value,(MethodInfo *)0x0);
                      uStack_48 = 0x42f0b19;
                      UnityEngine_SkinnedMeshRenderer__set_quality
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_01,4,(MethodInfo *)0x0);
                      uStack_48 = 0x42f0b23;
                      pUVar8 = UnityEngine_SkinnedMeshRenderer__get_rootBone
                                         ((UnityEngine_SkinnedMeshRenderer_o *)SVar6,(MethodInfo *)0x0);
                      uStack_48 = 0x42f0b30;
                      UnityEngine_SkinnedMeshRenderer__set_rootBone
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_01,pUVar8,(MethodInfo *)0x0);
                      pSVar5 = (System_String_o *)
                               UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                      return pSVar5;
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
label_042f0b43:
  uStack_48 = 0x42f0b48;
  auVar12 = il2cpp_runtime_helper_022b2c90();
  uStack_48 = auVar12._0_8_;
  if (__this_04 != (MethodInfo_255A0F0 *)0x0) {
    UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)__this_04,auVar12._8_8_,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  pSStack_50 = (System_String_o *)0x42f0b69;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  uVar10 = SUB84(__this_04,0);
  SVar6 = SVar4;
  SStack_58 = SVar11;
  pSStack_50 = unaff_RBP;
  if (g_data_057adeaf == '\0') {
    SStack_68._stringLength = 0x42f0b8d;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"_ts");
    SStack_68._stringLength = 0x42f0b99;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"_empty");
    SStack_68._stringLength = 0x42f0ba5;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"character_hand_l");
    SStack_68._stringLength = 0x42f0bb1;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"character_hand_r");
    SStack_68._stringLength = 0x42f0bbd;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    il2cpp_runtime_helper_023445d0(&"_0");
    SVar6 = (System_String_Fields)&"_ah_0";
    SStack_68._stringLength = 0x42f0bc9;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adeaf = '\x01';
  }
  if ((char)__this_04 == '\0') {
    puVar9 = &"character_hand_r";
    SVar11 = *(System_String_Fields *)((long)SVar4 + 0x10);
  }
  else {
    puVar9 = &"character_hand_l";
    SVar11 = *(System_String_Fields *)((long)SVar4 + 0x10);
  }
  if (SVar11 == (System_String_Fields)0x0) {
    SStack_68._stringLength = 0x42f0c3b;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    il2cpp_runtime_helper_022b2c90();
    uStack_6c = uVar10;
    SStack_68 = SVar4;
    if (g_data_057adeae == '\0') {
      il2cpp_runtime_helper_023445d0(&"character_leg_");
      g_data_057adeae = '\x01';
    }
    str0 = ((System_String_o *)((long)SVar6 + 0x18))->klass;
    pSVar5 = System_Int32__ToString((int32_t)&uStack_6c,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_3af7150((System_String_o *)str0,"character_leg_",pSVar5,(MethodInfo *)0x0);
    return pSVar5;
  }
  pSVar5 = (System_String_o *)*puVar9;
  if ((ulong)(long)*(int *)((long)SVar11 + 0x1d0) < 4) {
    SStack_68._stringLength = 0x42f0c22;
    SStack_68._firstChar = 0;
    SStack_68._6_2_ = 0;
    pSVar5 = System_String__Concat_3ae5ba0
                       (pSVar5,*(System_String_o **)(&g_data_0524f3a0)[*(int *)((long)SVar11 + 0x1d0)],
                        (MethodInfo *)0x0);
  }
  pSVar5 = System_String__Concat_3ae5ba0
                     ((System_String_o *)((System_String_o *)((long)SVar4 + 0x18))->klass,pSVar5,
                      (MethodInfo *)0x0);
  return pSVar5;
}


// Characters.HumanSetupMeshes$$Get3dmgMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__Get3dmgMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x42ee410

System_String_o *
Characters_HumanSetupMeshes__Get3dmgMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Settings_HumanCustomSet_o *pSVar3;
  UnityEngine_Object_o *x;
  Utility_Color255_c *reference;
  char *pcVar4;
  void *pvVar5;
  code *vtableDispatch;
  System_String_Fields SVar6;
  Il2CppMethodPointer pIVar7;
  undefined4 uVar8;
  char cVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  int32_t type;
  undefined8 *puVar12;
  System_String_o *pSVar13;
  UnityEngine_Transform_o *pUVar14;
  UnityEngine_Transform_o *p;
  System_String_o *extraout_RAX;
  System_String_o *extraout_RAX_00;
  undefined8 *puVar15;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  Settings_ColorSetting_o *pSVar16;
  System_Object_array *pSVar17;
  Utility_Color255_o *x_00;
  Utility_Color255_o *x_01;
  Utility_Color255_o *pUVar18;
  Utility_Color255_o *pUVar19;
  UnityEngine_Texture_o *value;
  undefined4 extraout_var_01;
  System_String_o *pSVar20;
  UnityEngine_Material_o *pUVar21;
  UnityEngine_GameObject_o *pUVar22;
  ulong uVar23;
  undefined **ppuVar24;
  System_String_c *method_00;
  System_String_c *x_02;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  System_String_o *extraout_RAX_01;
  undefined4 in_ECX;
  int iVar25;
  int32_t type_00;
  Characters_HumanSetup_o *__this_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar26;
  System_String_c *pSVar27;
  long *plVar28;
  System_String_o **ppSVar29;
  Characters_HumanSetup_o *pCVar30;
  Characters_HumanSetup_o *pCVar31;
  Utility_Color255_o *x_03;
  System_String_c *pSVar32;
  System_String_c **ppSVar33;
  System_String_c **str1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar34;
  MethodInfo *in_R8;
  long *unaff_R12;
  float fVar35;
  float fVar37;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar36 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar38;
  UnityEngine_Color_o UVar39;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  Utility_Color255_o *pUStack_238;
  Characters_HumanSetup_o *pCStack_230;
  float fStack_224;
  float fStack_220;
  float fStack_21c;
  float fStack_218;
  float fStack_214;
  float fStack_210;
  float fStack_20c;
  float fStack_208;
  float fStack_204;
  float fStack_200;
  float fStack_1fc;
  float fStack_1f8;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  undefined4 uStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  undefined1 auStack_1c0 [8];
  float fStack_1b8;
  float fStack_1b4;
  undefined1 auStack_1b0 [8];
  float fStack_1a8;
  float fStack_1a4;
  undefined1 auStack_198 [8];
  float fStack_190;
  float fStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  float fStack_170;
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  System_Object_array *pSStack_158;
  undefined1 auStack_150 [8];
  float fStack_148;
  float fStack_144;
  undefined8 uStack_140;
  undefined8 uStack_138;
  undefined1 auStack_130 [16];
  undefined1 auStack_120 [16];
  undefined1 auStack_110 [16];
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined8 uStack_d0;
  undefined8 uStack_c8;
  float fStack_c0;
  float fStack_bc;
  float fStack_b8;
  float fStack_b4;
  float fStack_b0;
  float fStack_ac;
  float fStack_a8;
  float fStack_a4;
  Characters_HumanSetup_o *pCStack_98;
  long *plStack_90;
  undefined8 extraout_XMM0_Qb_01;
  
  plVar28 = (long *)__this;
  if (g_data_057adeb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"3dmg_2");
    il2cpp_runtime_helper_023445d0(&"3dmg_3");
    plVar28 = &"3dmg";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb1 = '\x01';
  }
  pCVar30 = (__this->fields)._setup;
  if (pCVar30 != (Characters_HumanSetup_o *)0x0) {
    iVar25 = (pCVar30->fields).Weapon;
    if (iVar25 == 3) {
      puVar12 = &"3dmg_3";
    }
    else {
      puVar12 = &"3dmg";
      if (iVar25 == 1) {
        puVar12 = &"3dmg_2";
      }
    }
    pSVar13 = System_String__Concat_3ae5ba0
                        ((__this->fields).AccessoriesPath,(System_String_o *)*puVar12,(MethodInfo *)0x0);
    return pSVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar19 = (Utility_Color255_o *)0x0;
  if ((Characters_HumanSetup_o *)method != (Characters_HumanSetup_o *)0x0) {
    cVar9 = (char)in_ECX;
    pUVar19 = (Utility_Color255_o *)0x0;
    plVar28 = (long *)method;
    pUVar14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)method,(MethodInfo *)0x0);
    if (__this_00 != (Characters_HumanSetup_o *)0x0) {
      pUVar19 = (Utility_Color255_o *)0x0;
      plVar28 = (long *)__this_00;
      p = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar14,p,(MethodInfo *)0x0);
        pUVar19 = (Utility_Color255_o *)0x0;
        plVar28 = (long *)method;
        pUVar14 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)method,(MethodInfo *)0x0);
        if (g_data_057a65d5 == '\0') {
          plVar28 = &TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
          unaff_R12 = &TypeInfo_Vector3;
          in_XMM1_Dc = 0;
          in_XMM1_Dd = 0;
          UnityEngine_Transform__set_localPosition
                    (pUVar14,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                     (MethodInfo *)0x0);
          pUVar19 = (Utility_Color255_o *)0x0;
          plVar28 = (long *)method;
          pUVar14 = UnityEngine_GameObject__get_transform
                              ((UnityEngine_GameObject_o *)method,(MethodInfo *)0x0);
          if (g_data_057a6843 == '\0') {
            plVar28 = &TypeInfo_Quaternion;
            il2cpp_runtime_helper_023445d0();
            g_data_057a6843 = '\x01';
          }
          if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
            in_XMM1_Dc = 0;
            in_XMM1_Dd = 0;
            UnityEngine_Transform__set_localRotation
                      (pUVar14,(UnityEngine_Quaternion_o)
                               **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),(MethodInfo *)0x0);
            if (cVar9 == '\0') {
              return extraout_RAX;
            }
            pUVar19 = (Utility_Color255_o *)0x0;
            pUVar14 = UnityEngine_GameObject__get_transform
                                ((UnityEngine_GameObject_o *)method,(MethodInfo *)0x0);
            if (g_data_057a6932 == '\0') {
              plVar28 = &TypeInfo_Vector3;
              il2cpp_runtime_helper_023445d0();
              g_data_057a6932 = '\x01';
              method = (MethodInfo *)plVar28;
            }
            plVar28 = (long *)method;
            if (pUVar14 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localScale
                        (pUVar14,(UnityEngine_Vector3_o)
                                 *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),
                         (MethodInfo *)0x0);
              return extraout_RAX_00;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar29 = (System_String_o **)plVar28;
  if (g_data_057adeb2 == '\0') {
    ppSVar29 = &"3dmg_belt";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb2 = '\x01';
  }
  lVar2 = (((Characters_HumanSetup_o *)plVar28)->fields).m_CachedPtr;
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 0x1d0) | 2) != 3) {
      pSVar13 = System_String__Concat_3ae5ba0
                          ((System_String_o *)(((Characters_HumanSetup_o *)plVar28)->fields)._mount_chest,
                           "3dmg_belt",(MethodInfo *)0x0);
      return pSVar13;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  cVar9 = (char)pUVar19;
  pCVar30 = (Characters_HumanSetup_o *)ppSVar29;
  if (g_data_057adeb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"char_gun_mag_l");
    il2cpp_runtime_helper_023445d0(&"char_gun_mag_r");
    il2cpp_runtime_helper_023445d0(&"scabbard_L");
    pCVar30 = (Characters_HumanSetup_o *)&"scabbard_R";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb3 = '\x01';
  }
  lVar2 = (((Characters_HumanSetup_o *)ppSVar29)->fields).m_CachedPtr;
  if (lVar2 != 0) {
    if ((*(uint *)(lVar2 + 0x1d0) | 2) == 3) {
      puVar15 = &"char_gun_mag_r";
      puVar12 = &"char_gun_mag_l";
    }
    else {
      puVar15 = &"scabbard_R";
      puVar12 = (undefined8 *)&"scabbard_L";
    }
    if (cVar9 == '\0') {
      puVar12 = puVar15;
    }
    pSVar13 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(((Characters_HumanSetup_o *)ppSVar29)->fields)._mount_chest,
                         (System_String_o *)*puVar12,(MethodInfo *)0x0);
    return pSVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  cVar9 = (char)pUVar19;
  pCVar31 = pCVar30;
  if (g_data_057adeb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"blade_R");
    il2cpp_runtime_helper_023445d0(&"blade_L");
    il2cpp_runtime_helper_023445d0(&"character_gun_r_0");
    il2cpp_runtime_helper_023445d0(&"thunderspear_r");
    il2cpp_runtime_helper_023445d0(&"apg_R");
    il2cpp_runtime_helper_023445d0(&"thunderspear_l");
    il2cpp_runtime_helper_023445d0(&"character_gun_l_0");
    pCVar31 = (Characters_HumanSetup_o *)&"apg_L";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb4 = '\x01';
  }
  lVar2 = (pCVar30->fields).m_CachedPtr;
  if (lVar2 != 0) {
    iVar25 = *(int *)(lVar2 + 0x1d0);
    if (iVar25 == 1) {
      puVar15 = &"character_gun_r_0";
      puVar12 = &"character_gun_l_0";
    }
    else if (iVar25 == 3) {
      puVar15 = &"apg_R";
      puVar12 = &"apg_L";
    }
    else {
      puVar12 = (undefined8 *)&"blade_L";
      if (iVar25 == 2) {
        puVar12 = (undefined8 *)&"thunderspear_l";
      }
      puVar15 = &"blade_R";
      if (iVar25 == 2) {
        puVar15 = &"thunderspear_r";
      }
    }
    if (cVar9 == '\0') {
      puVar12 = puVar15;
    }
    pSVar13 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pCVar30->fields)._mount_gas_l,(System_String_o *)*puVar12,
                         (MethodInfo *)0x0);
    return pSVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  cVar9 = (char)in_ECX;
  pCStack_230 = pCVar31;
  pCStack_98 = pCVar30;
  plStack_90 = unaff_R12;
  if (g_data_057ade94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&"_PulseSpeed");
    il2cpp_runtime_helper_023445d0(&"_FlowSpeed");
    il2cpp_runtime_helper_023445d0(&"_TexturePreserve");
    il2cpp_runtime_helper_023445d0(&"_FlowStrength");
    il2cpp_runtime_helper_023445d0(&"Custom/CharacterEffectShader");
    il2cpp_runtime_helper_023445d0(&"_EmissionFromTexture");
    il2cpp_runtime_helper_023445d0(&"_SecondaryScroll");
    il2cpp_runtime_helper_023445d0(&"_QualityLevel");
    il2cpp_runtime_helper_023445d0(&"_IsHair");
    il2cpp_runtime_helper_023445d0(&"_Color");
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    il2cpp_runtime_helper_023445d0(&"_CullMode");
    il2cpp_runtime_helper_023445d0(&"_EMISSION");
    il2cpp_runtime_helper_023445d0(&"_NeonColor");
    il2cpp_runtime_helper_023445d0(&"_OutlineThickness");
    il2cpp_runtime_helper_023445d0(&"_DetailSpeed");
    il2cpp_runtime_helper_023445d0(&"_StyleMode");
    il2cpp_runtime_helper_023445d0(&"_GlowIntensity");
    il2cpp_runtime_helper_023445d0(&"_EdgeSpark");
    il2cpp_runtime_helper_023445d0(&"_StyleStrength");
    il2cpp_runtime_helper_023445d0(&"_OutlinePower");
    il2cpp_runtime_helper_023445d0(&"_PulseAmount");
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    il2cpp_runtime_helper_023445d0(&"_DetailScale");
    il2cpp_runtime_helper_023445d0(&"_GlowColor");
    g_data_057ade94 = '\x01';
  }
  pUStack_238 = (Utility_Color255_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar26 = (MethodInfo *)0x0;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (type_00 == 0) {
    return (System_String_o *)CONCAT44(extraout_var,bVar10);
  }
  if ((char)bVar10 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var,bVar10);
  }
  bVar10 = Characters_HumanSetup__CanUseCharacterEffects(pCStack_230,pMVar26);
  if ((char)bVar10 == '\0') {
    return (System_String_o *)CONCAT44(extraout_var_00,bVar10);
  }
  if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar18 = (Utility_Color255_o *)auStack_198;
  PatreonEffects_CharacterEffectPresets__GetPreset
            ((PatreonEffects_CharacterEffectPreset_o *)pUVar18,type_00,(MethodInfo *)0x0);
  pSVar3 = (pCStack_230->fields).CustomSet;
  if (((pSVar3 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar16 = (pSVar3->fields).HairColor, pSVar16 == (Settings_ColorSetting_o *)0x0)) ||
     (pUVar18 = (pSVar16->fields)._value, pUVar18 == (Utility_Color255_o *)0x0)) {
label_042ef756:
    il2cpp_runtime_helper_022b2c90();
    pUVar19 = pUVar18;
  }
  else {
    fStack_1fc = (float)auStack_198._4_4_;
    fStack_200 = fStack_190;
    fStack_1c4 = fStack_18c;
    fStack_1c8 = fStack_188;
    fStack_1cc = fStack_184;
    fStack_1d0 = fStack_180;
    fStack_1d4 = fStack_17c;
    fStack_204 = fStack_178;
    fStack_208 = fStack_174;
    fStack_20c = fStack_170;
    fStack_210 = fStack_16c;
    fStack_1d8 = fStack_168;
    fStack_214 = fStack_164;
    fStack_218 = fStack_160;
    UVar39 = Utility_Color255__ToColor(pUVar18,(MethodInfo *)0x0);
    uStack_d0 = UVar39.fields._0_8_;
    auStack_e0._8_4_ = in_XMM1_Dc;
    auStack_e0._0_8_ = UVar39.fields._8_8_;
    auStack_e0._12_4_ = in_XMM1_Dd;
    pSVar3 = (pCStack_230->fields).CustomSet;
    if (pSVar3 == (Settings_HumanCustomSet_o *)0x0) goto label_042ef756;
    if (cVar9 == '\0') {
      pSVar16 = (pSVar3->fields).BladeEffectColor;
      if (pSVar16 != (Settings_ColorSetting_o *)0x0) goto label_042eebbf;
      goto label_042ef756;
    }
    pSVar16 = (pSVar3->fields).HairEffectColor;
    if (pSVar16 == (Settings_ColorSetting_o *)0x0) goto label_042ef756;
label_042eebbf:
    pUVar18 = (pSVar16->fields)._value;
    if (pUVar18 == (Utility_Color255_o *)0x0) goto label_042ef756;
    uStack_c8 = extraout_XMM0_Qb;
    UVar39 = Utility_Color255__ToColor(pUVar18,(MethodInfo *)0x0);
    uStack_140 = UVar39.fields._0_8_;
    fStack_148 = (float)in_XMM1_Dc;
    auStack_150 = (undefined1  [8])UVar39.fields._8_8_;
    fStack_144 = (float)in_XMM1_Dd;
    if (cVar9 != '\0') {
      _auStack_1b0 = ZEXT812(0x3e4ccccd);
      fStack_1a4 = 0.0;
      _auStack_1c0 = ZEXT812(0x3ee66666);
      fStack_1b4 = 0.0;
      if (pUVar19 != (Utility_Color255_o *)0x0) goto label_042eec3f;
      goto label_042ef756;
    }
    _auStack_1b0 = ZEXT812(0x3eb33333);
    fStack_1a4 = 0.0;
    _auStack_1c0 = ZEXT812(0x3f19999a);
    fStack_1b4 = 0.0;
    if (pUVar19 == (Utility_Color255_o *)0x0) goto label_042ef756;
label_042eec3f:
    uStack_138 = extraout_XMM0_Qb_00;
    pSVar17 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)pUVar19,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pUVar18 = pUVar19;
    if (pSVar17 == (System_Object_array *)0x0) goto label_042ef756;
    if (cVar9 == '\0') {
      fStack_21c = 0.0;
      fStack_220 = 2.0;
      iVar25 = (int)pSVar17->max_length;
    }
    else {
      fStack_21c = 1.0;
      fStack_220 = 0.0;
      iVar25 = (int)pSVar17->max_length;
    }
    if (iVar25 < 1) {
      return (System_String_o *)pSVar17;
    }
    fVar38 = 1.0;
    if ((float)auStack_150._4_4_ <= 1.0) {
      fVar38 = (float)auStack_150._4_4_;
    }
    fVar38 = (float)(-(uint)(0.0 <= (float)auStack_150._4_4_) & (uint)fVar38);
    fStack_c0 = (float)auStack_1b0._0_4_ * (1.0 - (float)uStack_140) + (float)uStack_140;
    fStack_bc = (float)auStack_1b0._0_4_ * (1.0 - uStack_140._4_4_) + uStack_140._4_4_;
    fStack_b8 = fStack_1a8 * (0.0 - (float)uStack_138) + (float)uStack_138;
    fStack_b4 = fStack_1a4 * (0.0 - uStack_138._4_4_) + uStack_138._4_4_;
    auStack_1b0._4_4_ = (float)auStack_1b0._0_4_ * (1.0 - (float)auStack_150._4_4_) + (float)auStack_150._4_4_
    ;
    auStack_1b0._0_4_ = (float)auStack_1b0._0_4_ * (1.0 - (float)auStack_150._0_4_) + (float)auStack_150._0_4_
    ;
    fStack_1a8 = fStack_1a8 * (0.0 - fStack_148) + fStack_148;
    fStack_1a4 = fStack_1a4 * (0.0 - fStack_144) + fStack_144;
    fStack_b0 = (1.0 - (float)uStack_140) * (float)auStack_1c0._0_4_ + (float)uStack_140;
    fStack_ac = (1.0 - uStack_140._4_4_) * (float)auStack_1c0._0_4_ + uStack_140._4_4_;
    fStack_a8 = (0.0 - (float)uStack_138) * fStack_1b8 + (float)uStack_138;
    fStack_a4 = (0.0 - uStack_138._4_4_) * fStack_1b4 + uStack_138._4_4_;
    auStack_1c0._4_4_ = (float)auStack_1c0._0_4_ * (1.0 - (float)auStack_150._4_4_) + (float)auStack_150._4_4_
    ;
    auStack_1c0._0_4_ = (float)auStack_1c0._0_4_ * (1.0 - (float)auStack_150._0_4_) + (float)auStack_150._0_4_
    ;
    fStack_1b8 = fStack_1b8 * (0.0 - fStack_148) + fStack_148;
    fStack_1b4 = fStack_1b4 * (0.0 - fStack_144) + fStack_144;
    fStack_1e0 = (float)(int)auStack_198._0_4_;
    fVar35 = fStack_208 * 0.7;
    fVar37 = 1.0;
    if (fVar35 <= 1.0) {
      fVar37 = fVar35;
    }
    auStack_100 = ZEXT416(-(uint)(0.0 <= fVar35) & (uint)fVar37);
    fVar35 = fStack_204 * 0.95;
    fVar37 = 1.5;
    if (fVar35 <= 1.5) {
      fVar37 = fVar35;
    }
    auStack_110 = ZEXT416(~-(uint)(0.5 <= fVar35) & 0x3f000000 | (uint)fVar37 & -(uint)(0.5 <= fVar35));
    fStack_1e4 = fStack_214 * 1.25 * fVar38;
    fStack_1ec = fStack_1fc * 1.15 * fVar38;
    fStack_224 = fStack_218 * fVar38;
    fStack_1f0 = fStack_1fc * 0.45 * fVar38;
    fVar35 = fStack_208 + 0.22;
    fVar37 = 1.0;
    if (fVar35 <= 1.0) {
      fVar37 = fVar35;
    }
    auStack_120 = ZEXT416(-(uint)(0.0 <= fVar35) & (uint)fVar37);
    fVar35 = fStack_204 + 0.14;
    fVar37 = 1.5;
    if (fVar35 <= 1.5) {
      fVar37 = fVar35;
    }
    auStack_130 = ZEXT416(~-(uint)(0.5 <= fVar35) & 0x3f000000 | (uint)fVar37 & -(uint)(0.5 <= fVar35));
    fStack_1e8 = fStack_20c * 1.15;
    fStack_1f4 = fStack_210 * 1.1;
    fStack_1f8 = fStack_200 * 0.9;
    auStack_f0 = ZEXT416((uint)(fVar38 * fStack_214));
    uVar23 = 0;
    uStack_1dc = in_ECX;
    pSStack_158 = pSVar17;
    if (iVar25 != 0) {
      do {
        x_03 = (Utility_Color255_o *)pSStack_158->m_Items[uVar23];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar19 = x_03;
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)x_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          pUVar18 = pUVar19;
          if (x_03 == (Utility_Color255_o *)0x0) goto label_042ef756;
          x_00 = (Utility_Color255_o *)
                 UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_03,(MethodInfo *)0x0);
          x_01 = (Utility_Color255_o *)UnityEngine_Shader__Find("Custom/CharacterEffectShader",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar19 = x_00;
          bVar10 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar19 = x_01;
            bVar10 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar10 == '\0') {
              pUStack_238 = (Utility_Color255_o *)0x0;
              pSVar34 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (pCStack_230->fields)._effectMaterialCache;
              pUVar18 = (Utility_Color255_o *)0x0;
              if (pSVar34 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_042ef756;
              bVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                 (pSVar34,(Il2CppObject *)x_03,(Il2CppObject **)&pUStack_238,MethodInfo_Boolean_TryGetValue);
              pUVar19 = pUStack_238;
              if ((char)bVar10 == '\0') {
label_042ef058:
                pUVar19 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor
                          ((UnityEngine_Material_o *)pUVar19,(UnityEngine_Shader_o *)x_01,(MethodInfo *)0x0);
                pSVar34 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (pCStack_230->fields)._effectMaterialCache;
                pUVar18 = (Utility_Color255_o *)0x0;
                pUStack_238 = pUVar19;
                if (pSVar34 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_042ef756;
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar34,(Il2CppObject *)x_03,(Il2CppObject *)pUVar19,MethodInfo_Void_set_Item);
label_042ef0ad:
                pUVar18 = x_03;
                UnityEngine_Renderer__set_material
                          ((UnityEngine_Renderer_o *)x_03,(UnityEngine_Material_o *)pUStack_238,
                           (MethodInfo *)0x0);
              }
              else {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar10 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar10 == '\0') goto label_042ef058;
                pUVar18 = (Utility_Color255_o *)
                          UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_03,(MethodInfo *)0x0)
                ;
                pUVar19 = pUStack_238;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar10 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)pUVar19,
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') goto label_042ef0ad;
              }
              uVar8 = uStack_1dc;
              if (x_00 == (Utility_Color255_o *)0x0) goto label_042ef756;
              bVar10 = UnityEngine_Material__HasProperty_4dcb5b0
                                 ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0);
              pUVar19 = pUStack_238;
              if ((char)bVar10 != '\0') {
                pUVar18 = x_00;
                value = UnityEngine_Material__GetTexture
                                  ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0);
                if (pUVar19 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetTexture
                          ((UnityEngine_Material_o *)pUVar19,"_MainTex",value,(MethodInfo *)0x0);
              }
              if ((char)uVar8 == '\0') {
                pUVar18 = x_00;
                bVar10 = UnityEngine_Material__HasProperty_4dcb5b0
                                   ((UnityEngine_Material_o *)x_00,"_Color",(MethodInfo *)0x0);
                pUVar19 = pUStack_238;
                if ((char)bVar10 == '\0') {
                  if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                  fVar38 = (float)g_data_00d19fc0;
                  fVar37 = g_data_00d19fc0._4_4_;
                  auVar36 = _DAT_00d19fc0;
                }
                else {
                  UVar39 = UnityEngine_Material__GetColor
                                     ((UnityEngine_Material_o *)x_00,"_Color",(MethodInfo *)0x0);
                  fVar38 = UVar39.fields.b;
                  fVar37 = UVar39.fields.a;
                  auVar36._0_8_ = UVar39.fields._0_8_;
                  auVar36._8_8_ = extraout_XMM0_Qb_01;
                  pUVar18 = x_00;
                  if (pUVar19 == (Utility_Color255_o *)0x0) goto label_042ef756;
                }
              }
              else {
                pUVar18 = pUStack_238;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                auVar36._8_8_ = uStack_c8;
                auVar36._0_8_ = uStack_d0;
                pUVar19 = pUStack_238;
                fVar38 = (float)auStack_e0._0_4_;
                fVar37 = (float)auStack_e0._4_4_;
              }
              UVar39.fields._0_8_ = auVar36._0_8_;
              UVar39.fields.a = fVar37;
              UVar39.fields.b = fVar38;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUVar19,"_Color",UVar39,(MethodInfo *)0x0);
              auVar36 = _auStack_150;
              pUVar18 = pUStack_238;
              if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_00.fields.b = (float)auStack_150._0_4_;
              value_00.fields.a = (float)auStack_150._4_4_;
              value_00.fields.r = (float)uStack_140;
              value_00.fields.g = uStack_140._4_4_;
              _auStack_150 = auVar36;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_238,"_NeonColor",value_00,(MethodInfo *)0x0);
              auVar36 = _auStack_1b0;
              pUVar18 = pUStack_238;
              if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_01.fields.g = fStack_bc;
              value_01.fields.r = fStack_c0;
              value_01.fields.b = (float)auStack_1b0._0_4_;
              value_01.fields.a = (float)auStack_1b0._4_4_;
              _auStack_1b0 = auVar36;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_238,"_GlowColor",value_01,(MethodInfo *)0x0);
              auVar36 = _auStack_1c0;
              pUVar18 = pUStack_238;
              if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_02.fields.g = fStack_ac;
              value_02.fields.r = fStack_b0;
              value_02.fields.b = (float)auStack_1c0._0_4_;
              value_02.fields.a = (float)auStack_1c0._4_4_;
              _auStack_1c0 = auVar36;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_238,"_OutlineColor",value_02,(MethodInfo *)0x0);
              pUVar18 = pUStack_238;
              if ((((pUStack_238 == (Utility_Color255_o *)0x0) ||
                   (UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pUStack_238,"_GlowIntensity",fStack_1fc,(MethodInfo *)0x0
                              ), pUVar18 = pUStack_238, pUStack_238 == (Utility_Color255_o *)0x0)) ||
                  ((UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pUStack_238,"_OutlineThickness",fStack_200,(MethodInfo *)0x0
                              ), pUVar18 = pUStack_238, pUStack_238 == (Utility_Color255_o *)0x0 ||
                   ((UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_238,"_OutlinePower",fStack_1c4,
                                (MethodInfo *)0x0), pUVar18 = pUStack_238,
                    pUStack_238 == (Utility_Color255_o *)0x0 ||
                    (UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_238,"_PulseSpeed",fStack_1c8,
                                (MethodInfo *)0x0), pUVar18 = pUStack_238,
                    pUStack_238 == (Utility_Color255_o *)0x0)))))) ||
                 ((UnityEngine_Material__SetFloat
                             ((UnityEngine_Material_o *)pUStack_238,"_PulseAmount",fStack_1cc,(MethodInfo *)0x0)
                  , pUVar18 = pUStack_238, pUStack_238 == (Utility_Color255_o *)0x0 ||
                  (((((((UnityEngine_Material__SetFloat
                                   ((UnityEngine_Material_o *)pUStack_238,"_FlowSpeed",fStack_1d0,
                                    (MethodInfo *)0x0), pUVar18 = pUStack_238,
                        pUStack_238 == (Utility_Color255_o *)0x0 ||
                        (UnityEngine_Material__SetFloat
                                   ((UnityEngine_Material_o *)pUStack_238,"_FlowStrength",fStack_1d4,
                                    (MethodInfo *)0x0), pUVar18 = pUStack_238,
                        pUStack_238 == (Utility_Color255_o *)0x0)) ||
                       (UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_238,"_TexturePreserve",fStack_204,
                                   (MethodInfo *)0x0), pUVar18 = pUStack_238,
                       pUStack_238 == (Utility_Color255_o *)0x0)) ||
                      ((UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_238,"_EmissionFromTexture",fStack_208,
                                   (MethodInfo *)0x0), pUVar18 = pUStack_238,
                       pUStack_238 == (Utility_Color255_o *)0x0 ||
                       (UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_238,"_DetailScale",fStack_20c,
                                   (MethodInfo *)0x0), pUVar18 = pUStack_238,
                       pUStack_238 == (Utility_Color255_o *)0x0)))) ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_238,"_DetailSpeed",fStack_210,
                                 (MethodInfo *)0x0), pUVar18 = pUStack_238,
                     pUStack_238 == (Utility_Color255_o *)0x0)) ||
                    ((UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_238,"_SecondaryScroll",fStack_1d8,
                                 (MethodInfo *)0x0), pUVar18 = pUStack_238,
                     pUStack_238 == (Utility_Color255_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_238,"_EdgeSpark",fStack_214,
                                 (MethodInfo *)0x0), pUVar18 = pUStack_238,
                     pUStack_238 == (Utility_Color255_o *)0x0)))) ||
                   ((UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_238,"_StyleMode",fStack_1e0,
                                (MethodInfo *)0x0), pUVar18 = pUStack_238,
                    pUStack_238 == (Utility_Color255_o *)0x0 ||
                    ((UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_238,"_StyleStrength",fStack_218,
                                 (MethodInfo *)0x0), pUVar18 = pUStack_238,
                     pUStack_238 == (Utility_Color255_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_238,"_IsHair",fStack_21c,
                                 (MethodInfo *)0x0), pUVar18 = pUStack_238,
                     pUStack_238 == (Utility_Color255_o *)0x0)))))))))) goto label_042ef756;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_238,"_CullMode",fStack_220,(MethodInfo *)0x0);
              lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
              fVar38 = 2.0;
              if (lVar2 != 0) {
                lVar2 = *(long *)(lVar2 + 0x20);
                if (lVar2 == 0) goto label_042ef756;
                iVar25 = *(int *)(lVar2 + 0x14);
                fVar38 = 0.0;
                if (1 < iVar25) {
                  fVar38 = *(float *)(&g_data_00d1d3c8 + (ulong)(iVar25 < 3) * 4);
                }
              }
              pUVar18 = pUStack_238;
              if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_238,"_QualityLevel",fVar38,(MethodInfo *)0x0);
              pUVar18 = pUStack_238;
              if ((char)uVar8 == '\0') {
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_238,"_EmissionFromTexture",(float)auStack_100._0_4_,
                           (MethodInfo *)0x0);
                pUVar18 = (Utility_Color255_o *)0x0;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_238,"_TexturePreserve",(float)auStack_110._0_4_,
                           (MethodInfo *)0x0);
                pUVar18 = (Utility_Color255_o *)0x0;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_238,"_EdgeSpark",fStack_1e4,(MethodInfo *)0x0);
                pUVar18 = (Utility_Color255_o *)0x0;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_238,"_GlowIntensity",fStack_1ec,(MethodInfo *)0x0);
                pSVar13 = "_StyleStrength";
                pUVar18 = (Utility_Color255_o *)0x0;
                fVar38 = fStack_224;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
              }
              else {
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_238,"_GlowIntensity",fStack_1f0,(MethodInfo *)0x0);
                pUVar18 = (Utility_Color255_o *)0x0;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_238,"_EmissionFromTexture",(float)auStack_120._0_4_,
                           (MethodInfo *)0x0);
                pUVar18 = (Utility_Color255_o *)0x0;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_238,"_TexturePreserve",(float)auStack_130._0_4_,
                           (MethodInfo *)0x0);
                pUVar18 = (Utility_Color255_o *)0x0;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_238,"_DetailScale",fStack_1e8,(MethodInfo *)0x0);
                pUVar18 = (Utility_Color255_o *)0x0;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_238,"_DetailSpeed",fStack_1f4,(MethodInfo *)0x0);
                pUVar18 = (Utility_Color255_o *)0x0;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_238,"_OutlineThickness",fStack_1f8,(MethodInfo *)0x0);
                pUVar18 = (Utility_Color255_o *)0x0;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_238,"_StyleStrength",fStack_224,(MethodInfo *)0x0);
                pUVar18 = (Utility_Color255_o *)0x0;
                if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
                pSVar13 = "_EdgeSpark";
                fVar38 = (float)auStack_f0._0_4_;
              }
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_238,pSVar13,fVar38,(MethodInfo *)0x0);
              pUVar18 = (Utility_Color255_o *)0x0;
              if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__EnableKeyword
                        ((UnityEngine_Material_o *)pUStack_238,"_EMISSION",(MethodInfo *)0x0);
              pUVar18 = (Utility_Color255_o *)0x0;
              if (pUStack_238 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__set_globalIlluminationFlags
                        ((UnityEngine_Material_o *)pUStack_238,1,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_material
                        ((UnityEngine_Renderer_o *)x_03,(UnityEngine_Material_o *)pUStack_238,
                         (MethodInfo *)0x0);
              pUVar19 = x_03;
            }
          }
        }
        uVar23 = uVar23 + 1;
        uVar1 = (uint)pSStack_158->max_length;
        if ((long)(int)uVar1 <= (long)uVar23) {
          return (System_String_o *)pSStack_158;
        }
      } while (uVar23 < uVar1);
    }
  }
  pSVar13 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ade91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    g_data_057ade91 = '\x01';
  }
  if (*(char *)&pUVar19[0xf].monitor != '\0') {
    return pSVar13;
  }
  x = pUVar19[7].monitor;
  if (g_data_057adea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (System_String_c *)0x0;
  bVar10 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
  }
  if (pUVar19[0xb].monitor != (Characters_HumanSetupMeshes_o *)0x0) {
    pSVar13 = Characters_HumanSetupMeshes__GetCapeMesh(pUVar19[0xb].monitor,(MethodInfo *)method_00);
    method_00 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar10 = System_String__op_Inequality(pSVar13,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_01,bVar10);
    }
    if (*(Characters_HumanSetupTextures_o **)&pUVar19[0xb].fields != (Characters_HumanSetupTextures_o *)0x0) {
      reference = pUVar19[0xb].klass;
      pSVar20 = Characters_HumanSetupTextures__GetBrandTexture
                          (*(Characters_HumanSetupTextures_o **)&pUVar19[0xb].fields,(MethodInfo *)method_00);
      pMVar26 = extraout_RDX;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar26 = extraout_RDX_00;
      }
      pUVar21 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar20,0,pMVar26);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar22 = ClothFactory__GetCape((UnityEngine_GameObject_o *)reference,pSVar13,pUVar21,(MethodInfo *)0x0)
      ;
      pUVar19[7].monitor = pUVar22;
      pSVar13 = (System_String_o *)il2cpp_runtime_helper_022b4080(&pUVar19[7].monitor,pUVar22);
      return pSVar13;
    }
  }
  pSVar32 = (System_String_c *)0x0;
  il2cpp_runtime_helper_022b2c90();
  ppSVar29 = (System_String_o **)pSVar32;
  if (g_data_057adebc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppSVar29 = &"character_cape_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebc = '\x01';
  }
  pcVar4 = (pSVar32->_1).name;
  if (((pcVar4 != (char *)0x0) && (lVar2 = *(long *)(pcVar4 + 0x1c8), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x70), lVar2 != 0)) {
    if (*(int *)(lVar2 + 0x14) == 0) {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar13 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pSVar32->_1).namespaze,"character_cape_0",(MethodInfo *)0x0);
    return pSVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar32 = (System_String_c *)ppSVar29;
  if (g_data_057adec3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_g");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_sc");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_mp");
    pSVar32 = (System_String_c *)&"Brand/aottg_hero_brand_ts";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec3 = '\x01';
  }
  pcVar4 = (((System_String_c *)ppSVar29)->_1).name;
  if (((pcVar4 != (char *)0x0) && (lVar2 = *(long *)(pcVar4 + 0x1c8), lVar2 != 0)) &&
     (lVar2 = *(long *)(lVar2 + 0x78), lVar2 != 0)) {
    uVar23 = (ulong)*(int *)(lVar2 + 0x14);
    ppuVar24 = &g_data_0524f380 + uVar23;
    if (3 < uVar23) {
      ppuVar24 = (undefined **)(g_data_057b9c00 + 0xb8);
    }
    return *(System_String_o **)*ppuVar24;
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar33 = (System_String_c **)pSVar32;
  if (g_data_057adeba == '\0') {
    ppSVar33 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeba = '\x01';
  }
  pcVar4 = (pSVar32->_1).name;
  if (((pcVar4 != (char *)0x0) &&
      (ppSVar33 = *(System_String_c ***)(pcVar4 + 0x1e0),
      (System_String_c *)ppSVar33 != (System_String_c *)0x0)) &&
     (pvVar5 = (((System_String_c *)ppSVar33)->_1).image, method_00 = "Texture",
     plVar28 = (long *)(**(code **)((long)pvVar5 + 0x1a8))
                                 (ppSVar33,"Texture",*(undefined8 *)((long)pvVar5 + 0x1b0)),
     plVar28 != (long *)0x0)) {
    pSVar13 = (System_String_o *)(**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
    bVar10 = System_String__op_Equality
                       (pSVar13,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pSVar13 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)&(pSVar32->_1).byval_arg.bits,pSVar13,(MethodInfo *)0x0);
      return pSVar13;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  str1 = ppSVar33;
  if (g_data_057adec5 == '\0') {
    str1 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec5 = '\x01';
  }
  pcVar4 = (((System_String_c *)ppSVar33)->_1).name;
  if (((pcVar4 != (char *)0x0) &&
      (str1 = *(System_String_c ***)(pcVar4 + 0x1e0), (System_String_c *)str1 != (System_String_c *)0x0)) &&
     (pvVar5 = (((System_String_c *)str1)->_1).image, method_00 = "Texture",
     plVar28 = (long *)(**(code **)((long)pvVar5 + 0x1a8))
                                 (str1,"Texture",*(undefined8 *)((long)pvVar5 + 0x1b0)),
     plVar28 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar28 + 0x1c8);
    pSVar13 = (System_String_o *)
              (*vtableDispatch)(plVar28,*(undefined8 *)(*plVar28 + 0x1d0),vtableDispatch);
    return pSVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Textures/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Materials/HumanHairMat");
    il2cpp_runtime_helper_023445d0(&"Tex");
    g_data_057adea8 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042efb9d;
label_042efc58:
    il2cpp_runtime_helper_02337ed0();
    pSVar34 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar34 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efdd6;
label_042efc74:
    method_00 = (System_String_c *)str1;
    bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar34,(Il2CppObject *)str1,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar10 != '\0') {
label_042efd96:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar13 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,MethodInfo_Material_get_Item);
        return pSVar13;
      }
      goto label_042efdd6;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar21 = (UnityEngine_Material_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar13,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    method_00 = (System_String_c *)
                System_String__Concat_3af7150
                          ("Human/Parts/Hairs/Textures/",(System_String_o *)str1,"Tex",(MethodInfo *)0x0);
    pSVar32 = (System_String_c *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar13,(System_String_o *)method_00,0,(MethodInfo *)0x0);
    if ((pSVar32 == (System_String_c *)0x0) || (method_00 = TypeInfo_Texture2D, (pSVar32->_1).image == TypeInfo_Texture2D)
       ) {
      if (pUVar21 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(pUVar21,(UnityEngine_Texture_o *)pSVar32,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = pSVar32;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          method_00 = (System_String_c *)str1;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,(Il2CppObject *)pUVar21,
                     MethodInfo_Void_set_Item);
          goto label_042efd96;
        }
      }
      goto label_042efdd6;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042efc58;
label_042efb9d:
    pSVar34 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar34 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efc74;
label_042efdd6:
    pSVar32 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  ppSVar33 = (System_String_c **)pSVar32;
  if (g_data_057adebb == '\0') {
    ppSVar33 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  SVar6 = *(System_String_Fields *)&(pSVar32->_1).name;
  if ((SVar6 != (System_String_Fields)0x0) &&
     (ppSVar33 = *(System_String_c ***)((long)SVar6 + 0x1e0),
     (System_String_c *)ppSVar33 != (System_String_c *)0x0)) {
    pSVar27 = (((System_String_c *)ppSVar33)->_1).image;
    method_00 = "Cloth";
    cVar9 = (*(code *)pSVar27[1]._1.name)(ppSVar33,"Cloth",pSVar27[1]._1.namespaze);
    if (cVar9 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    SVar6 = *(System_String_Fields *)&(pSVar32->_1).name;
    if ((SVar6 != (System_String_Fields)0x0) &&
       (ppSVar33 = *(System_String_c ***)((long)SVar6 + 0x1e0),
       (System_String_c *)ppSVar33 != (System_String_c *)0x0)) {
      pSVar13 = *(System_String_o **)&(pSVar32->_1).byval_arg.bits;
      pSVar32 = (((System_String_c *)ppSVar33)->_1).image;
      method_00 = "Cloth";
      plVar28 = (long *)(*(pSVar32->vtable)._7_CompareTo.methodPtr)
                                  (ppSVar33,"Cloth",(pSVar32->vtable)._7_CompareTo.method);
      if (plVar28 != (long *)0x0) {
        pSVar20 = (System_String_o *)
                  (**(code **)(*plVar28 + 0x1c8))(plVar28,*(undefined8 *)(*plVar28 + 0x1d0));
        pSVar13 = System_String__Concat_3ae5ba0(pSVar13,pSVar20,(MethodInfo *)0x0);
        return pSVar13;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar32 = (System_String_c *)ppSVar33;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSVar32 = (System_String_c *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pIVar7 = (((System_String_c *)ppSVar33)->vtable)._9_GetTypeCode.methodPtr;
  if (pIVar7 == (Il2CppMethodPointer)0x0) {
    pSVar27 = (System_String_c *)0x0;
  }
  else {
    lVar2 = *(long *)(pIVar7 + 0xd0);
    if (lVar2 == 0) {
label_042f006e:
      pSVar13 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pSVar13 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pSVar32->vtable)._9_GetTypeCode.methodPtr != (Il2CppMethodPointer)0x0) {
        pSVar27 = pSVar32;
        bVar10 = Characters_HumanSetup__CanUseCharacterEffects
                           ((Characters_HumanSetup_o *)pSVar32,(MethodInfo *)method_00);
        pSVar13 = (System_String_o *)CONCAT44(extraout_var_03,bVar10);
        if ((char)bVar10 != '\0') {
          pIVar7 = (pSVar32->vtable)._9_GetTypeCode.methodPtr;
          if ((pIVar7 != (Il2CppMethodPointer)0x0) && (lVar2 = *(long *)(pIVar7 + 0xd0), lVar2 != 0)) {
            pSVar27 = *(System_String_c **)(lVar2 + 0x18);
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               ((System_String_o *)pSVar27,(MethodInfo *)0x0);
            pIVar7 = (pSVar32->vtable)._9_GetTypeCode.methodPtr;
            if ((pIVar7 != (Il2CppMethodPointer)0x0) && (lVar2 = *(long *)(pIVar7 + 0xe0), lVar2 != 0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               (*(System_String_o **)(lVar2 + 0x18),(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar32,
                         *(UnityEngine_GameObject_o **)&(pSVar32->_2).interfaces_count,iVar11,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar32,
                         *(UnityEngine_GameObject_o **)&(pSVar32->_2).naturalAligment,iVar11,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar32,(UnityEngine_GameObject_o *)pSVar32->static_fields
                         ,type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar32,(UnityEngine_GameObject_o *)pSVar32->rgctx_data,
                         type,0,in_R8);
              return extraout_RAX_01;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar13 = System_String__Concat_3ae5ba0
                              (*(System_String_o **)&(pSVar27->_1).this_arg.bits,"char_eyes",
                               (MethodInfo *)0x0);
          return pSVar13;
        }
      }
      return pSVar13;
    }
    pSVar27 = *(System_String_c **)(lVar2 + 0x18);
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    pSVar32 = pSVar27;
    iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                       ((System_String_o *)pSVar27,(MethodInfo *)0x0);
    if (iVar11 == 0) {
      pIVar7 = (((System_String_c *)ppSVar33)->vtable)._9_GetTypeCode.methodPtr;
      if ((pIVar7 == (Il2CppMethodPointer)0x0) || (lVar2 = *(long *)(pIVar7 + 0xe0), lVar2 == 0))
      goto label_042f006e;
      pSVar13 = *(System_String_o **)(lVar2 + 0x18);
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar27 = (System_String_c *)0x0;
      iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar13,(MethodInfo *)0x0);
      if (iVar11 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar10 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var_02,bVar10);
    }
    x_02 = (System_String_c *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)ppSVar33,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    pSVar32 = x_02;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar27 = (System_String_c *)CONCAT71((int7)((ulong)pSVar27 >> 8),1);
    if ((char)bVar10 != '\0') {
      if (x_02 == (System_String_c *)0x0) goto label_042f006e;
      if (*(char *)&(x_02->_1).typeMetadataHandle != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (System_String_o *)((ulong)pSVar27 & 0xffffffff);
}


// Characters.HumanSetupMeshes$$GetBeltMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBeltMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x42ee610

System_String_o *
Characters_HumanSetupMeshes__GetBeltMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Utility_Color255_c *reference;
  char *pcVar3;
  long lVar4;
  void *pvVar5;
  code *vtableDispatch;
  System_String_Fields SVar6;
  Il2CppMethodPointer pIVar7;
  undefined4 uVar8;
  char cVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  int32_t type;
  System_String_o *pSVar12;
  undefined8 *puVar13;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  Settings_ColorSetting_o *pSVar14;
  _union_14 _Var15;
  MethodInfo *x;
  MethodInfo *pMVar16;
  MethodInfo *pMVar17;
  MethodInfo *__this_00;
  UnityEngine_Texture_o *value;
  undefined4 extraout_var_01;
  System_String_o *pSVar18;
  UnityEngine_Material_o *pUVar19;
  Il2CppRGCTXData *pIVar20;
  ulong uVar21;
  undefined **ppuVar22;
  long *plVar23;
  System_String_c *method_00;
  System_String_c *x_00;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  System_String_o *extraout_RAX;
  undefined4 in_ECX;
  int iVar24;
  undefined8 *puVar25;
  int32_t type_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_String_c *pSVar26;
  System_String_o **ppSVar27;
  Characters_HumanSetup_o *pCVar28;
  Characters_HumanSetup_o *pCVar29;
  MethodInfo *x_01;
  System_String_c *pSVar30;
  System_String_c **ppSVar31;
  System_String_c **str1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar32;
  MethodInfo *in_R8;
  float fVar33;
  float fVar35;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar34 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar36;
  UnityEngine_Color_o UVar37;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  MethodInfo *pMStack_208;
  Characters_HumanSetup_o *pCStack_200;
  float fStack_1f4;
  float fStack_1f0;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  undefined4 uStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  undefined1 auStack_190 [8];
  float fStack_188;
  float fStack_184;
  undefined1 auStack_180 [8];
  float fStack_178;
  float fStack_174;
  undefined1 auStack_168 [8];
  float fStack_160;
  float fStack_15c;
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  _union_13 _Stack_130;
  _union_14 _Stack_128;
  undefined1 auStack_120 [8];
  float fStack_118;
  float fStack_114;
  undefined8 uStack_110;
  undefined8 uStack_108;
  undefined1 auStack_100 [16];
  undefined1 auStack_f0 [16];
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined8 uStack_a0;
  undefined8 uStack_98;
  float fStack_90;
  float fStack_8c;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  Characters_HumanSetup_o *pCStack_68;
  undefined8 extraout_XMM0_Qb_01;
  
  ppSVar27 = (System_String_o **)__this;
  if (g_data_057adeb2 == '\0') {
    ppSVar27 = &"3dmg_belt";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb2 = '\x01';
  }
  pCVar28 = (__this->fields)._setup;
  if (pCVar28 != (Characters_HumanSetup_o *)0x0) {
    if (((pCVar28->fields).Weapon | 2U) != 3) {
      pSVar12 = System_String__Concat_3ae5ba0((__this->fields).AccessoriesPath,"3dmg_belt",(MethodInfo *)0x0)
      ;
      return pSVar12;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  cVar9 = (char)method;
  pCVar28 = (Characters_HumanSetup_o *)ppSVar27;
  if (g_data_057adeb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"char_gun_mag_l");
    il2cpp_runtime_helper_023445d0(&"char_gun_mag_r");
    il2cpp_runtime_helper_023445d0(&"scabbard_L");
    pCVar28 = (Characters_HumanSetup_o *)&"scabbard_R";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb3 = '\x01';
  }
  pCVar29 = (Characters_HumanSetup_o *)(((Characters_HumanSetup_o *)ppSVar27)->fields).m_CachedPtr;
  if (pCVar29 != (Characters_HumanSetup_o *)0x0) {
    if (((pCVar29->fields).Weapon | 2U) == 3) {
      puVar13 = &"char_gun_mag_r";
      puVar25 = &"char_gun_mag_l";
    }
    else {
      puVar13 = &"scabbard_R";
      puVar25 = (undefined8 *)&"scabbard_L";
    }
    if (cVar9 == '\0') {
      puVar25 = puVar13;
    }
    pSVar12 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(((Characters_HumanSetup_o *)ppSVar27)->fields)._mount_chest,
                         (System_String_o *)*puVar25,(MethodInfo *)0x0);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  cVar9 = (char)method;
  pCVar29 = pCVar28;
  if (g_data_057adeb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"blade_R");
    il2cpp_runtime_helper_023445d0(&"blade_L");
    il2cpp_runtime_helper_023445d0(&"character_gun_r_0");
    il2cpp_runtime_helper_023445d0(&"thunderspear_r");
    il2cpp_runtime_helper_023445d0(&"apg_R");
    il2cpp_runtime_helper_023445d0(&"thunderspear_l");
    il2cpp_runtime_helper_023445d0(&"character_gun_l_0");
    pCVar29 = (Characters_HumanSetup_o *)&"apg_L";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb4 = '\x01';
  }
  pCVar1 = (Characters_HumanSetup_o *)(pCVar28->fields).m_CachedPtr;
  if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
    iVar24 = (pCVar1->fields).Weapon;
    if (iVar24 == 1) {
      puVar13 = &"character_gun_r_0";
      puVar25 = &"character_gun_l_0";
    }
    else if (iVar24 == 3) {
      puVar13 = &"apg_R";
      puVar25 = &"apg_L";
    }
    else {
      puVar25 = (undefined8 *)&"blade_L";
      if (iVar24 == 2) {
        puVar25 = (undefined8 *)&"thunderspear_l";
      }
      puVar13 = &"blade_R";
      if (iVar24 == 2) {
        puVar13 = &"thunderspear_r";
      }
    }
    if (cVar9 == '\0') {
      puVar25 = puVar13;
    }
    pSVar12 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pCVar28->fields)._mount_gas_l,(System_String_o *)*puVar25,
                         (MethodInfo *)0x0);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  cVar9 = (char)in_ECX;
  pCStack_200 = pCVar29;
  pCStack_68 = pCVar28;
  if (g_data_057ade94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&"_PulseSpeed");
    il2cpp_runtime_helper_023445d0(&"_FlowSpeed");
    il2cpp_runtime_helper_023445d0(&"_TexturePreserve");
    il2cpp_runtime_helper_023445d0(&"_FlowStrength");
    il2cpp_runtime_helper_023445d0(&"Custom/CharacterEffectShader");
    il2cpp_runtime_helper_023445d0(&"_EmissionFromTexture");
    il2cpp_runtime_helper_023445d0(&"_SecondaryScroll");
    il2cpp_runtime_helper_023445d0(&"_QualityLevel");
    il2cpp_runtime_helper_023445d0(&"_IsHair");
    il2cpp_runtime_helper_023445d0(&"_Color");
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    il2cpp_runtime_helper_023445d0(&"_CullMode");
    il2cpp_runtime_helper_023445d0(&"_EMISSION");
    il2cpp_runtime_helper_023445d0(&"_NeonColor");
    il2cpp_runtime_helper_023445d0(&"_OutlineThickness");
    il2cpp_runtime_helper_023445d0(&"_DetailSpeed");
    il2cpp_runtime_helper_023445d0(&"_StyleMode");
    il2cpp_runtime_helper_023445d0(&"_GlowIntensity");
    il2cpp_runtime_helper_023445d0(&"_EdgeSpark");
    il2cpp_runtime_helper_023445d0(&"_StyleStrength");
    il2cpp_runtime_helper_023445d0(&"_OutlinePower");
    il2cpp_runtime_helper_023445d0(&"_PulseAmount");
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    il2cpp_runtime_helper_023445d0(&"_DetailScale");
    il2cpp_runtime_helper_023445d0(&"_GlowColor");
    g_data_057ade94 = '\x01';
  }
  pMStack_208 = (MethodInfo *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar17 = (MethodInfo *)0x0;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)method,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (type_00 == 0) {
    return (System_String_o *)CONCAT44(extraout_var,bVar10);
  }
  if ((char)bVar10 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var,bVar10);
  }
  bVar10 = Characters_HumanSetup__CanUseCharacterEffects(pCStack_200,pMVar17);
  if ((char)bVar10 == '\0') {
    return (System_String_o *)CONCAT44(extraout_var_00,bVar10);
  }
  if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar17 = (MethodInfo *)auStack_168;
  PatreonEffects_CharacterEffectPresets__GetPreset
            ((PatreonEffects_CharacterEffectPreset_o *)pMVar17,type_00,(MethodInfo *)0x0);
  pSVar2 = (pCStack_200->fields).CustomSet;
  if (((pSVar2 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar14 = (pSVar2->fields).HairColor, pSVar14 == (Settings_ColorSetting_o *)0x0)) ||
     (pMVar17 = (MethodInfo *)(pSVar14->fields)._value, pMVar17 == (MethodInfo *)0x0)) {
label_042ef756:
    il2cpp_runtime_helper_022b2c90();
    method = pMVar17;
  }
  else {
    fStack_1cc = (float)auStack_168._4_4_;
    fStack_1d0 = fStack_160;
    fStack_194 = fStack_15c;
    fStack_198 = fStack_158;
    fStack_19c = fStack_154;
    fStack_1a0 = fStack_150;
    fStack_1a4 = fStack_14c;
    fStack_1d4 = fStack_148;
    fStack_1d8 = fStack_144;
    fStack_1dc = fStack_140;
    fStack_1e0 = fStack_13c;
    fStack_1a8 = fStack_138;
    fStack_1e4 = fStack_134;
    fStack_1e8 = (float)_Stack_130._0_4_;
    UVar37 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar17,(MethodInfo *)0x0);
    uStack_a0 = UVar37.fields._0_8_;
    auStack_b0._8_4_ = in_XMM1_Dc;
    auStack_b0._0_8_ = UVar37.fields._8_8_;
    auStack_b0._12_4_ = in_XMM1_Dd;
    pSVar2 = (pCStack_200->fields).CustomSet;
    if (pSVar2 == (Settings_HumanCustomSet_o *)0x0) goto label_042ef756;
    if (cVar9 == '\0') {
      pSVar14 = (pSVar2->fields).BladeEffectColor;
      if (pSVar14 != (Settings_ColorSetting_o *)0x0) goto label_042eebbf;
      goto label_042ef756;
    }
    pSVar14 = (pSVar2->fields).HairEffectColor;
    if (pSVar14 == (Settings_ColorSetting_o *)0x0) goto label_042ef756;
label_042eebbf:
    pMVar17 = (MethodInfo *)(pSVar14->fields)._value;
    if (pMVar17 == (MethodInfo *)0x0) goto label_042ef756;
    uStack_98 = extraout_XMM0_Qb;
    UVar37 = Utility_Color255__ToColor((Utility_Color255_o *)pMVar17,(MethodInfo *)0x0);
    uStack_110 = UVar37.fields._0_8_;
    fStack_118 = (float)in_XMM1_Dc;
    auStack_120 = (undefined1  [8])UVar37.fields._8_8_;
    fStack_114 = (float)in_XMM1_Dd;
    if (cVar9 != '\0') {
      _auStack_180 = ZEXT812(0x3e4ccccd);
      fStack_174 = 0.0;
      _auStack_190 = ZEXT812(0x3ee66666);
      fStack_184 = 0.0;
      if (method != (MethodInfo *)0x0) goto label_042eec3f;
      goto label_042ef756;
    }
    _auStack_180 = ZEXT812(0x3eb33333);
    fStack_174 = 0.0;
    _auStack_190 = ZEXT812(0x3f19999a);
    fStack_184 = 0.0;
    if (method == (MethodInfo *)0x0) goto label_042ef756;
label_042eec3f:
    uStack_108 = extraout_XMM0_Qb_00;
    _Var15.genericMethod =
         UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                   ((UnityEngine_GameObject_o *)method,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pMVar17 = method;
    if (_Var15.genericMethod == (System_Object_array *)0x0) goto label_042ef756;
    if (cVar9 == '\0') {
      fStack_1ec = 0.0;
      fStack_1f0 = 2.0;
      iVar24 = (int)*(il2cpp_array_size_t *)((long)_Var15.genericMethod + 0x18);
    }
    else {
      fStack_1ec = 1.0;
      fStack_1f0 = 0.0;
      iVar24 = (int)*(il2cpp_array_size_t *)((long)_Var15.genericMethod + 0x18);
    }
    if (iVar24 < 1) {
      return _Var15.genericMethod;
    }
    fVar36 = 1.0;
    if ((float)auStack_120._4_4_ <= 1.0) {
      fVar36 = (float)auStack_120._4_4_;
    }
    fVar36 = (float)(-(uint)(0.0 <= (float)auStack_120._4_4_) & (uint)fVar36);
    fStack_90 = (float)auStack_180._0_4_ * (1.0 - (float)uStack_110) + (float)uStack_110;
    fStack_8c = (float)auStack_180._0_4_ * (1.0 - uStack_110._4_4_) + uStack_110._4_4_;
    fStack_88 = fStack_178 * (0.0 - (float)uStack_108) + (float)uStack_108;
    fStack_84 = fStack_174 * (0.0 - uStack_108._4_4_) + uStack_108._4_4_;
    auStack_180._4_4_ = (float)auStack_180._0_4_ * (1.0 - (float)auStack_120._4_4_) + (float)auStack_120._4_4_
    ;
    auStack_180._0_4_ = (float)auStack_180._0_4_ * (1.0 - (float)auStack_120._0_4_) + (float)auStack_120._0_4_
    ;
    fStack_178 = fStack_178 * (0.0 - fStack_118) + fStack_118;
    fStack_174 = fStack_174 * (0.0 - fStack_114) + fStack_114;
    fStack_80 = (1.0 - (float)uStack_110) * (float)auStack_190._0_4_ + (float)uStack_110;
    fStack_7c = (1.0 - uStack_110._4_4_) * (float)auStack_190._0_4_ + uStack_110._4_4_;
    fStack_78 = (0.0 - (float)uStack_108) * fStack_188 + (float)uStack_108;
    fStack_74 = (0.0 - uStack_108._4_4_) * fStack_184 + uStack_108._4_4_;
    auStack_190._4_4_ = (float)auStack_190._0_4_ * (1.0 - (float)auStack_120._4_4_) + (float)auStack_120._4_4_
    ;
    auStack_190._0_4_ = (float)auStack_190._0_4_ * (1.0 - (float)auStack_120._0_4_) + (float)auStack_120._0_4_
    ;
    fStack_188 = fStack_188 * (0.0 - fStack_118) + fStack_118;
    fStack_184 = fStack_184 * (0.0 - fStack_114) + fStack_114;
    fStack_1b0 = (float)(int)auStack_168._0_4_;
    fVar33 = fStack_1d8 * 0.7;
    fVar35 = 1.0;
    if (fVar33 <= 1.0) {
      fVar35 = fVar33;
    }
    auStack_d0 = ZEXT416(-(uint)(0.0 <= fVar33) & (uint)fVar35);
    fVar33 = fStack_1d4 * 0.95;
    fVar35 = 1.5;
    if (fVar33 <= 1.5) {
      fVar35 = fVar33;
    }
    auStack_e0 = ZEXT416(~-(uint)(0.5 <= fVar33) & 0x3f000000 | (uint)fVar35 & -(uint)(0.5 <= fVar33));
    fStack_1b4 = fStack_1e4 * 1.25 * fVar36;
    fStack_1bc = fStack_1cc * 1.15 * fVar36;
    fStack_1f4 = fStack_1e8 * fVar36;
    fStack_1c0 = fStack_1cc * 0.45 * fVar36;
    fVar33 = fStack_1d8 + 0.22;
    fVar35 = 1.0;
    if (fVar33 <= 1.0) {
      fVar35 = fVar33;
    }
    auStack_f0 = ZEXT416(-(uint)(0.0 <= fVar33) & (uint)fVar35);
    fVar33 = fStack_1d4 + 0.14;
    fVar35 = 1.5;
    if (fVar33 <= 1.5) {
      fVar35 = fVar33;
    }
    auStack_100 = ZEXT416(~-(uint)(0.5 <= fVar33) & 0x3f000000 | (uint)fVar35 & -(uint)(0.5 <= fVar33));
    fStack_1b8 = fStack_1dc * 1.15;
    fStack_1c4 = fStack_1e0 * 1.1;
    fStack_1c8 = fStack_1d0 * 0.9;
    auStack_c0 = ZEXT416((uint)(fVar36 * fStack_1e4));
    uVar21 = 0;
    uStack_1ac = in_ECX;
    _Stack_128.genericMethod = _Var15.genericMethod;
    if (iVar24 != 0) {
      do {
        x_01 = *(MethodInfo **)((long)_Stack_128.genericMethod + uVar21 * 8 + 0x20);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method = x_01;
        bVar10 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          pMVar17 = method;
          if (x_01 == (MethodInfo *)0x0) goto label_042ef756;
          x = (MethodInfo *)
              UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_01,(MethodInfo *)0x0);
          pMVar16 = (MethodInfo *)UnityEngine_Shader__Find("Custom/CharacterEffectShader",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          method = x;
          bVar10 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar10 == '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            method = pMVar16;
            bVar10 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)pMVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
            ;
            if ((char)bVar10 == '\0') {
              pMStack_208 = (MethodInfo *)0x0;
              pSVar32 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (pCStack_200->fields)._effectMaterialCache;
              pMVar17 = (MethodInfo *)0x0;
              if (pSVar32 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_042ef756;
              bVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                 (pSVar32,(Il2CppObject *)x_01,(Il2CppObject **)&pMStack_208,MethodInfo_Boolean_TryGetValue);
              pMVar17 = pMStack_208;
              if ((char)bVar10 == '\0') {
label_042ef058:
                __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor
                          ((UnityEngine_Material_o *)__this_00,(UnityEngine_Shader_o *)pMVar16,
                           (MethodInfo *)0x0);
                pSVar32 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (pCStack_200->fields)._effectMaterialCache;
                pMVar17 = (MethodInfo *)0x0;
                pMStack_208 = __this_00;
                if (pSVar32 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_042ef756;
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar32,(Il2CppObject *)x_01,(Il2CppObject *)__this_00,MethodInfo_Void_set_Item);
label_042ef0ad:
                pMVar17 = x_01;
                UnityEngine_Renderer__set_material
                          ((UnityEngine_Renderer_o *)x_01,(UnityEngine_Material_o *)pMStack_208,
                           (MethodInfo *)0x0);
              }
              else {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar10 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pMVar17,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar10 == '\0') goto label_042ef058;
                pMVar17 = (MethodInfo *)
                          UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_01,(MethodInfo *)0x0)
                ;
                pMVar16 = pMStack_208;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar10 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pMVar17,(UnityEngine_Object_o *)pMVar16,
                                    (MethodInfo *)0x0);
                if ((char)bVar10 != '\0') goto label_042ef0ad;
              }
              uVar8 = uStack_1ac;
              if (x == (MethodInfo *)0x0) goto label_042ef756;
              bVar10 = UnityEngine_Material__HasProperty_4dcb5b0
                                 ((UnityEngine_Material_o *)x,"_MainTex",(MethodInfo *)0x0);
              pMVar16 = pMStack_208;
              if ((char)bVar10 != '\0') {
                pMVar17 = x;
                value = UnityEngine_Material__GetTexture
                                  ((UnityEngine_Material_o *)x,"_MainTex",(MethodInfo *)0x0);
                if (pMVar16 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetTexture
                          ((UnityEngine_Material_o *)pMVar16,"_MainTex",value,(MethodInfo *)0x0);
              }
              if ((char)uVar8 == '\0') {
                pMVar17 = x;
                bVar10 = UnityEngine_Material__HasProperty_4dcb5b0
                                   ((UnityEngine_Material_o *)x,"_Color",(MethodInfo *)0x0);
                pMVar16 = pMStack_208;
                if ((char)bVar10 == '\0') {
                  if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                  fVar36 = (float)g_data_00d19fc0;
                  fVar35 = g_data_00d19fc0._4_4_;
                  auVar34 = _DAT_00d19fc0;
                }
                else {
                  UVar37 = UnityEngine_Material__GetColor
                                     ((UnityEngine_Material_o *)x,"_Color",(MethodInfo *)0x0);
                  fVar36 = UVar37.fields.b;
                  fVar35 = UVar37.fields.a;
                  auVar34._0_8_ = UVar37.fields._0_8_;
                  auVar34._8_8_ = extraout_XMM0_Qb_01;
                  pMVar17 = x;
                  if (pMVar16 == (MethodInfo *)0x0) goto label_042ef756;
                }
              }
              else {
                pMVar17 = pMStack_208;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                auVar34._8_8_ = uStack_98;
                auVar34._0_8_ = uStack_a0;
                pMVar16 = pMStack_208;
                fVar36 = (float)auStack_b0._0_4_;
                fVar35 = (float)auStack_b0._4_4_;
              }
              UVar37.fields._0_8_ = auVar34._0_8_;
              UVar37.fields.a = fVar35;
              UVar37.fields.b = fVar36;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pMVar16,"_Color",UVar37,(MethodInfo *)0x0);
              auVar34 = _auStack_120;
              pMVar17 = pMStack_208;
              if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
              value_00.fields.b = (float)auStack_120._0_4_;
              value_00.fields.a = (float)auStack_120._4_4_;
              value_00.fields.r = (float)uStack_110;
              value_00.fields.g = uStack_110._4_4_;
              _auStack_120 = auVar34;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pMStack_208,"_NeonColor",value_00,(MethodInfo *)0x0);
              auVar34 = _auStack_180;
              pMVar17 = pMStack_208;
              if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
              value_01.fields.g = fStack_8c;
              value_01.fields.r = fStack_90;
              value_01.fields.b = (float)auStack_180._0_4_;
              value_01.fields.a = (float)auStack_180._4_4_;
              _auStack_180 = auVar34;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pMStack_208,"_GlowColor",value_01,(MethodInfo *)0x0);
              auVar34 = _auStack_190;
              pMVar17 = pMStack_208;
              if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
              value_02.fields.g = fStack_7c;
              value_02.fields.r = fStack_80;
              value_02.fields.b = (float)auStack_190._0_4_;
              value_02.fields.a = (float)auStack_190._4_4_;
              _auStack_190 = auVar34;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pMStack_208,"_OutlineColor",value_02,(MethodInfo *)0x0);
              pMVar17 = pMStack_208;
              if ((((pMStack_208 == (MethodInfo *)0x0) ||
                   (UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pMStack_208,"_GlowIntensity",fStack_1cc,(MethodInfo *)0x0
                              ), pMVar17 = pMStack_208, pMStack_208 == (MethodInfo *)0x0)) ||
                  ((UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pMStack_208,"_OutlineThickness",fStack_1d0,(MethodInfo *)0x0
                              ), pMVar17 = pMStack_208, pMStack_208 == (MethodInfo *)0x0 ||
                   ((UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pMStack_208,"_OutlinePower",fStack_194,
                                (MethodInfo *)0x0), pMVar17 = pMStack_208, pMStack_208 == (MethodInfo *)0x0 ||
                    (UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pMStack_208,"_PulseSpeed",fStack_198,
                                (MethodInfo *)0x0), pMVar17 = pMStack_208, pMStack_208 == (MethodInfo *)0x0)))
                   ))) || ((UnityEngine_Material__SetFloat
                                      ((UnityEngine_Material_o *)pMStack_208,"_PulseAmount",fStack_19c,
                                       (MethodInfo *)0x0), pMVar17 = pMStack_208,
                           pMStack_208 == (MethodInfo *)0x0 ||
                           (((((((UnityEngine_Material__SetFloat
                                            ((UnityEngine_Material_o *)pMStack_208,"_FlowSpeed",fStack_1a0,
                                             (MethodInfo *)0x0), pMVar17 = pMStack_208,
                                 pMStack_208 == (MethodInfo *)0x0 ||
                                 (UnityEngine_Material__SetFloat
                                            ((UnityEngine_Material_o *)pMStack_208,"_FlowStrength",fStack_1a4,
                                             (MethodInfo *)0x0), pMVar17 = pMStack_208,
                                 pMStack_208 == (MethodInfo *)0x0)) ||
                                (UnityEngine_Material__SetFloat
                                           ((UnityEngine_Material_o *)pMStack_208,"_TexturePreserve",fStack_1d4,
                                            (MethodInfo *)0x0), pMVar17 = pMStack_208,
                                pMStack_208 == (MethodInfo *)0x0)) ||
                               ((UnityEngine_Material__SetFloat
                                           ((UnityEngine_Material_o *)pMStack_208,"_EmissionFromTexture",fStack_1d8,
                                            (MethodInfo *)0x0), pMVar17 = pMStack_208,
                                pMStack_208 == (MethodInfo *)0x0 ||
                                (UnityEngine_Material__SetFloat
                                           ((UnityEngine_Material_o *)pMStack_208,"_DetailScale",fStack_1dc,
                                            (MethodInfo *)0x0), pMVar17 = pMStack_208,
                                pMStack_208 == (MethodInfo *)0x0)))) ||
                              (UnityEngine_Material__SetFloat
                                         ((UnityEngine_Material_o *)pMStack_208,"_DetailSpeed",fStack_1e0,
                                          (MethodInfo *)0x0), pMVar17 = pMStack_208,
                              pMStack_208 == (MethodInfo *)0x0)) ||
                             ((UnityEngine_Material__SetFloat
                                         ((UnityEngine_Material_o *)pMStack_208,"_SecondaryScroll",fStack_1a8,
                                          (MethodInfo *)0x0), pMVar17 = pMStack_208,
                              pMStack_208 == (MethodInfo *)0x0 ||
                              (UnityEngine_Material__SetFloat
                                         ((UnityEngine_Material_o *)pMStack_208,"_EdgeSpark",fStack_1e4,
                                          (MethodInfo *)0x0), pMVar17 = pMStack_208,
                              pMStack_208 == (MethodInfo *)0x0)))) ||
                            ((UnityEngine_Material__SetFloat
                                        ((UnityEngine_Material_o *)pMStack_208,"_StyleMode",fStack_1b0,
                                         (MethodInfo *)0x0), pMVar17 = pMStack_208,
                             pMStack_208 == (MethodInfo *)0x0 ||
                             ((UnityEngine_Material__SetFloat
                                         ((UnityEngine_Material_o *)pMStack_208,"_StyleStrength",fStack_1e8,
                                          (MethodInfo *)0x0), pMVar17 = pMStack_208,
                              pMStack_208 == (MethodInfo *)0x0 ||
                              (UnityEngine_Material__SetFloat
                                         ((UnityEngine_Material_o *)pMStack_208,"_IsHair",fStack_1ec,
                                          (MethodInfo *)0x0), pMVar17 = pMStack_208,
                              pMStack_208 == (MethodInfo *)0x0)))))))))) goto label_042ef756;
              pMVar17 = pMStack_208;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pMStack_208,"_CullMode",fStack_1f0,(MethodInfo *)0x0);
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
              fVar36 = 2.0;
              if (lVar4 != 0) {
                lVar4 = *(long *)(lVar4 + 0x20);
                if (lVar4 == 0) goto label_042ef756;
                iVar24 = *(int *)(lVar4 + 0x14);
                fVar36 = 0.0;
                if (1 < iVar24) {
                  fVar36 = *(float *)(&g_data_00d1d3c8 + (ulong)(iVar24 < 3) * 4);
                }
              }
              pMVar17 = pMStack_208;
              if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pMStack_208,"_QualityLevel",fVar36,(MethodInfo *)0x0);
              if ((char)uVar8 == '\0') {
                pMVar17 = pMStack_208;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pMStack_208,"_EmissionFromTexture",(float)auStack_d0._0_4_,
                           (MethodInfo *)0x0);
                pMVar17 = (MethodInfo *)0x0;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pMStack_208,"_TexturePreserve",(float)auStack_e0._0_4_,
                           (MethodInfo *)0x0);
                pMVar17 = (MethodInfo *)0x0;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pMStack_208,"_EdgeSpark",fStack_1b4,(MethodInfo *)0x0);
                pMVar17 = (MethodInfo *)0x0;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pMStack_208,"_GlowIntensity",fStack_1bc,(MethodInfo *)0x0);
                pSVar12 = "_StyleStrength";
                pMVar17 = (MethodInfo *)0x0;
                fVar36 = fStack_1f4;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
              }
              else {
                pMVar17 = pMStack_208;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pMStack_208,"_GlowIntensity",fStack_1c0,(MethodInfo *)0x0);
                pMVar17 = (MethodInfo *)0x0;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pMStack_208,"_EmissionFromTexture",(float)auStack_f0._0_4_,
                           (MethodInfo *)0x0);
                pMVar17 = (MethodInfo *)0x0;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pMStack_208,"_TexturePreserve",(float)auStack_100._0_4_,
                           (MethodInfo *)0x0);
                pMVar17 = (MethodInfo *)0x0;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pMStack_208,"_DetailScale",fStack_1b8,(MethodInfo *)0x0);
                pMVar17 = (MethodInfo *)0x0;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pMStack_208,"_DetailSpeed",fStack_1c4,(MethodInfo *)0x0);
                pMVar17 = (MethodInfo *)0x0;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pMStack_208,"_OutlineThickness",fStack_1c8,(MethodInfo *)0x0);
                pMVar17 = (MethodInfo *)0x0;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pMStack_208,"_StyleStrength",fStack_1f4,(MethodInfo *)0x0);
                pMVar17 = (MethodInfo *)0x0;
                if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
                pSVar12 = "_EdgeSpark";
                fVar36 = (float)auStack_c0._0_4_;
              }
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pMStack_208,pSVar12,fVar36,(MethodInfo *)0x0);
              pMVar17 = (MethodInfo *)0x0;
              if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
              UnityEngine_Material__EnableKeyword
                        ((UnityEngine_Material_o *)pMStack_208,"_EMISSION",(MethodInfo *)0x0);
              pMVar17 = (MethodInfo *)0x0;
              if (pMStack_208 == (MethodInfo *)0x0) goto label_042ef756;
              UnityEngine_Material__set_globalIlluminationFlags
                        ((UnityEngine_Material_o *)pMStack_208,1,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_material
                        ((UnityEngine_Renderer_o *)x_01,(UnityEngine_Material_o *)pMStack_208,
                         (MethodInfo *)0x0);
              method = x_01;
            }
          }
        }
        uVar21 = uVar21 + 1;
        if ((long)(int)*(uint *)((long)_Stack_128.genericMethod + 0x18) <= (long)uVar21) {
          return _Stack_128.genericMethod;
        }
      } while (uVar21 < *(uint *)((long)_Stack_128.genericMethod + 0x18));
    }
  }
  pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ade91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    g_data_057ade91 = '\x01';
  }
  if (*(char *)&method[5].parameters != '\0') {
    return pSVar12;
  }
  pIVar20 = method[2].field7_0x38.rgctx_data;
  if (g_data_057adea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (System_String_c *)0x0;
  bVar10 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)pIVar20,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pIVar20,(MethodInfo *)0x0);
  }
  if ((Characters_HumanSetupMeshes_o *)method[4].virtualMethodPointer != (Characters_HumanSetupMeshes_o *)0x0)
  {
    pSVar12 = Characters_HumanSetupMeshes__GetCapeMesh
                        ((Characters_HumanSetupMeshes_o *)method[4].virtualMethodPointer,
                         (MethodInfo *)method_00);
    method_00 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar10 = System_String__op_Inequality(pSVar12,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_01,bVar10);
    }
    if (*(Characters_HumanSetupTextures_o **)&method[4].invoker_method !=
        (Characters_HumanSetupTextures_o *)0x0) {
      reference = (Utility_Color255_c *)method[4].methodPointer;
      pSVar18 = Characters_HumanSetupTextures__GetBrandTexture
                          (*(Characters_HumanSetupTextures_o **)&method[4].invoker_method,
                           (MethodInfo *)method_00);
      pMVar17 = extraout_RDX;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar17 = extraout_RDX_00;
      }
      pUVar19 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar18,0,pMVar17);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar20 = (Il2CppRGCTXData *)
                ClothFactory__GetCape((UnityEngine_GameObject_o *)reference,pSVar12,pUVar19,(MethodInfo *)0x0)
      ;
      method[2].field7_0x38.rgctx_data = pIVar20;
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b4080(&method[2].field7_0x38,pIVar20);
      return pSVar12;
    }
  }
  pSVar30 = (System_String_c *)0x0;
  il2cpp_runtime_helper_022b2c90();
  ppSVar27 = (System_String_o **)pSVar30;
  if (g_data_057adebc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppSVar27 = &"character_cape_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebc = '\x01';
  }
  pcVar3 = (pSVar30->_1).name;
  if (((pcVar3 != (char *)0x0) && (lVar4 = *(long *)(pcVar3 + 0x1c8), lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x70), lVar4 != 0)) {
    if (*(int *)(lVar4 + 0x14) == 0) {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar12 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pSVar30->_1).namespaze,"character_cape_0",(MethodInfo *)0x0);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar30 = (System_String_c *)ppSVar27;
  if (g_data_057adec3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_g");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_sc");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_mp");
    pSVar30 = (System_String_c *)&"Brand/aottg_hero_brand_ts";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec3 = '\x01';
  }
  pcVar3 = (((System_String_c *)ppSVar27)->_1).name;
  if (((pcVar3 != (char *)0x0) && (lVar4 = *(long *)(pcVar3 + 0x1c8), lVar4 != 0)) &&
     (lVar4 = *(long *)(lVar4 + 0x78), lVar4 != 0)) {
    uVar21 = (ulong)*(int *)(lVar4 + 0x14);
    ppuVar22 = &g_data_0524f380 + uVar21;
    if (3 < uVar21) {
      ppuVar22 = (undefined **)(g_data_057b9c00 + 0xb8);
    }
    return *(System_String_o **)*ppuVar22;
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar31 = (System_String_c **)pSVar30;
  if (g_data_057adeba == '\0') {
    ppSVar31 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeba = '\x01';
  }
  pcVar3 = (pSVar30->_1).name;
  if (((pcVar3 != (char *)0x0) &&
      (ppSVar31 = *(System_String_c ***)(pcVar3 + 0x1e0),
      (System_String_c *)ppSVar31 != (System_String_c *)0x0)) &&
     (pvVar5 = (((System_String_c *)ppSVar31)->_1).image, method_00 = "Texture",
     plVar23 = (long *)(**(code **)((long)pvVar5 + 0x1a8))
                                 (ppSVar31,"Texture",*(undefined8 *)((long)pvVar5 + 0x1b0)),
     plVar23 != (long *)0x0)) {
    pSVar12 = (System_String_o *)(**(code **)(*plVar23 + 0x1c8))(plVar23,*(undefined8 *)(*plVar23 + 0x1d0));
    bVar10 = System_String__op_Equality
                       (pSVar12,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pSVar12 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)&(pSVar30->_1).byval_arg.bits,pSVar12,(MethodInfo *)0x0);
      return pSVar12;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  str1 = ppSVar31;
  if (g_data_057adec5 == '\0') {
    str1 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec5 = '\x01';
  }
  pcVar3 = (((System_String_c *)ppSVar31)->_1).name;
  if (((pcVar3 != (char *)0x0) &&
      (str1 = *(System_String_c ***)(pcVar3 + 0x1e0), (System_String_c *)str1 != (System_String_c *)0x0)) &&
     (pvVar5 = (((System_String_c *)str1)->_1).image, method_00 = "Texture",
     plVar23 = (long *)(**(code **)((long)pvVar5 + 0x1a8))
                                 (str1,"Texture",*(undefined8 *)((long)pvVar5 + 0x1b0)),
     plVar23 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar23 + 0x1c8);
    pSVar12 = (System_String_o *)
              (*vtableDispatch)(plVar23,*(undefined8 *)(*plVar23 + 0x1d0),vtableDispatch);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Textures/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Materials/HumanHairMat");
    il2cpp_runtime_helper_023445d0(&"Tex");
    g_data_057adea8 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042efb9d;
label_042efc58:
    il2cpp_runtime_helper_02337ed0();
    pSVar32 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar32 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efdd6;
label_042efc74:
    method_00 = (System_String_c *)str1;
    bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar32,(Il2CppObject *)str1,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar10 != '\0') {
label_042efd96:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar12 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,MethodInfo_Material_get_Item);
        return pSVar12;
      }
      goto label_042efdd6;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar19 = (UnityEngine_Material_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar12,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    method_00 = (System_String_c *)
                System_String__Concat_3af7150
                          ("Human/Parts/Hairs/Textures/",(System_String_o *)str1,"Tex",(MethodInfo *)0x0);
    pSVar30 = (System_String_c *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar12,(System_String_o *)method_00,0,(MethodInfo *)0x0);
    if ((pSVar30 == (System_String_c *)0x0) || (method_00 = TypeInfo_Texture2D, (pSVar30->_1).image == TypeInfo_Texture2D)
       ) {
      if (pUVar19 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(pUVar19,(UnityEngine_Texture_o *)pSVar30,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = pSVar30;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          method_00 = (System_String_c *)str1;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,(Il2CppObject *)pUVar19,
                     MethodInfo_Void_set_Item);
          goto label_042efd96;
        }
      }
      goto label_042efdd6;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042efc58;
label_042efb9d:
    pSVar32 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar32 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efc74;
label_042efdd6:
    pSVar30 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  ppSVar31 = (System_String_c **)pSVar30;
  if (g_data_057adebb == '\0') {
    ppSVar31 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  SVar6 = *(System_String_Fields *)&(pSVar30->_1).name;
  if ((SVar6 != (System_String_Fields)0x0) &&
     (ppSVar31 = *(System_String_c ***)((long)SVar6 + 0x1e0),
     (System_String_c *)ppSVar31 != (System_String_c *)0x0)) {
    pSVar26 = (((System_String_c *)ppSVar31)->_1).image;
    method_00 = "Cloth";
    cVar9 = (*(code *)pSVar26[1]._1.name)(ppSVar31,"Cloth",pSVar26[1]._1.namespaze);
    if (cVar9 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    SVar6 = *(System_String_Fields *)&(pSVar30->_1).name;
    if ((SVar6 != (System_String_Fields)0x0) &&
       (ppSVar31 = *(System_String_c ***)((long)SVar6 + 0x1e0),
       (System_String_c *)ppSVar31 != (System_String_c *)0x0)) {
      pSVar12 = *(System_String_o **)&(pSVar30->_1).byval_arg.bits;
      pSVar30 = (((System_String_c *)ppSVar31)->_1).image;
      method_00 = "Cloth";
      plVar23 = (long *)(*(pSVar30->vtable)._7_CompareTo.methodPtr)
                                  (ppSVar31,"Cloth",(pSVar30->vtable)._7_CompareTo.method);
      if (plVar23 != (long *)0x0) {
        pSVar18 = (System_String_o *)
                  (**(code **)(*plVar23 + 0x1c8))(plVar23,*(undefined8 *)(*plVar23 + 0x1d0));
        pSVar12 = System_String__Concat_3ae5ba0(pSVar12,pSVar18,(MethodInfo *)0x0);
        return pSVar12;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar30 = (System_String_c *)ppSVar31;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSVar30 = (System_String_c *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pIVar7 = (((System_String_c *)ppSVar31)->vtable)._9_GetTypeCode.methodPtr;
  if (pIVar7 == (Il2CppMethodPointer)0x0) {
    pSVar26 = (System_String_c *)0x0;
  }
  else {
    lVar4 = *(long *)(pIVar7 + 0xd0);
    if (lVar4 == 0) {
label_042f006e:
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pSVar30->vtable)._9_GetTypeCode.methodPtr != (Il2CppMethodPointer)0x0) {
        pSVar26 = pSVar30;
        bVar10 = Characters_HumanSetup__CanUseCharacterEffects
                           ((Characters_HumanSetup_o *)pSVar30,(MethodInfo *)method_00);
        pSVar12 = (System_String_o *)CONCAT44(extraout_var_03,bVar10);
        if ((char)bVar10 != '\0') {
          pIVar7 = (pSVar30->vtable)._9_GetTypeCode.methodPtr;
          if ((pIVar7 != (Il2CppMethodPointer)0x0) && (lVar4 = *(long *)(pIVar7 + 0xd0), lVar4 != 0)) {
            pSVar26 = *(System_String_c **)(lVar4 + 0x18);
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               ((System_String_o *)pSVar26,(MethodInfo *)0x0);
            pIVar7 = (pSVar30->vtable)._9_GetTypeCode.methodPtr;
            if ((pIVar7 != (Il2CppMethodPointer)0x0) && (lVar4 = *(long *)(pIVar7 + 0xe0), lVar4 != 0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               (*(System_String_o **)(lVar4 + 0x18),(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar30,
                         *(UnityEngine_GameObject_o **)&(pSVar30->_2).interfaces_count,iVar11,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar30,
                         *(UnityEngine_GameObject_o **)&(pSVar30->_2).naturalAligment,iVar11,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar30,(UnityEngine_GameObject_o *)pSVar30->static_fields
                         ,type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar30,(UnityEngine_GameObject_o *)pSVar30->rgctx_data,
                         type,0,in_R8);
              return extraout_RAX;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar12 = System_String__Concat_3ae5ba0
                              (*(System_String_o **)&(pSVar26->_1).this_arg.bits,"char_eyes",
                               (MethodInfo *)0x0);
          return pSVar12;
        }
      }
      return pSVar12;
    }
    pSVar26 = *(System_String_c **)(lVar4 + 0x18);
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    pSVar30 = pSVar26;
    iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                       ((System_String_o *)pSVar26,(MethodInfo *)0x0);
    if (iVar11 == 0) {
      pIVar7 = (((System_String_c *)ppSVar31)->vtable)._9_GetTypeCode.methodPtr;
      if ((pIVar7 == (Il2CppMethodPointer)0x0) || (lVar4 = *(long *)(pIVar7 + 0xe0), lVar4 == 0))
      goto label_042f006e;
      pSVar12 = *(System_String_o **)(lVar4 + 0x18);
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar26 = (System_String_c *)0x0;
      iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar12,(MethodInfo *)0x0);
      if (iVar11 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar10 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var_02,bVar10);
    }
    x_00 = (System_String_c *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)ppSVar31,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    pSVar30 = x_00;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar26 = (System_String_c *)CONCAT71((int7)((ulong)pSVar26 >> 8),1);
    if ((char)bVar10 != '\0') {
      if (x_00 == (System_String_c *)0x0) goto label_042f006e;
      if (*(char *)&(x_00->_1).typeMetadataHandle != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (System_String_o *)((ulong)pSVar26 & 0xffffffff);
}


// Characters.HumanSetupMeshes$$GetGasMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetGasMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x42ee680

System_String_o *
Characters_HumanSetupMeshes__GetGasMesh
          (Characters_HumanSetupMeshes_o *__this,bool_conflict left,MethodInfo *method)

{
  uint uVar1;
  Characters_HumanSetup_o *pCVar2;
  Settings_HumanCustomSet_o *pSVar3;
  UnityEngine_Object_o *x;
  Utility_Color255_c *reference;
  char *pcVar4;
  long lVar5;
  void *pvVar6;
  code *vtableDispatch;
  System_String_Fields SVar7;
  Il2CppMethodPointer pIVar8;
  undefined4 uVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  int32_t type;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  Settings_ColorSetting_o *pSVar15;
  System_Object_array *pSVar16;
  Utility_Color255_o *x_00;
  Utility_Color255_o *x_01;
  Utility_Color255_o *pUVar17;
  Utility_Color255_o *pUVar18;
  UnityEngine_Texture_o *value;
  undefined4 extraout_var_01;
  System_String_o *pSVar19;
  UnityEngine_Material_o *pUVar20;
  UnityEngine_GameObject_o *pUVar21;
  ulong uVar22;
  undefined **ppuVar23;
  long *plVar24;
  System_String_c *method_00;
  System_String_c *x_02;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  System_String_o *extraout_RAX;
  undefined4 in_ECX;
  int iVar25;
  undefined8 *puVar26;
  int32_t type_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar27;
  System_String_c *pSVar28;
  undefined4 in_register_00000034;
  Characters_HumanSetup_o *pCVar29;
  Characters_HumanSetup_o *pCVar30;
  Utility_Color255_o *x_03;
  System_String_o **ppSVar31;
  System_String_c *pSVar32;
  System_String_c **ppSVar33;
  System_String_c **str1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar34;
  MethodInfo *in_R8;
  float fVar35;
  float fVar37;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar36 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar38;
  UnityEngine_Color_o UVar39;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  Utility_Color255_o *pUStack_200;
  Characters_HumanSetup_o *pCStack_1f8;
  float fStack_1ec;
  float fStack_1e8;
  float fStack_1e4;
  float fStack_1e0;
  float fStack_1dc;
  float fStack_1d8;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  undefined4 uStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  float fStack_18c;
  undefined1 auStack_188 [8];
  float fStack_180;
  float fStack_17c;
  undefined1 auStack_178 [8];
  float fStack_170;
  float fStack_16c;
  undefined1 auStack_160 [8];
  float fStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  float fStack_148;
  float fStack_144;
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  System_Object_array *pSStack_120;
  undefined1 auStack_118 [8];
  float fStack_110;
  float fStack_10c;
  undefined8 uStack_108;
  undefined8 uStack_100;
  undefined1 auStack_f8 [16];
  undefined1 auStack_e8 [16];
  undefined1 auStack_d8 [16];
  undefined1 auStack_c8 [16];
  undefined1 auStack_b8 [16];
  undefined1 auStack_a8 [16];
  undefined8 uStack_98;
  undefined8 uStack_90;
  float fStack_88;
  float fStack_84;
  float fStack_80;
  float fStack_7c;
  float fStack_78;
  float fStack_74;
  float fStack_70;
  float fStack_6c;
  Characters_HumanSetup_o *pCStack_60;
  undefined8 extraout_XMM0_Qb_01;
  
  pUVar18 = (Utility_Color255_o *)CONCAT44(in_register_00000034,left);
  pCVar29 = (Characters_HumanSetup_o *)__this;
  if (g_data_057adeb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"char_gun_mag_l");
    il2cpp_runtime_helper_023445d0(&"char_gun_mag_r");
    il2cpp_runtime_helper_023445d0(&"scabbard_L");
    pCVar29 = (Characters_HumanSetup_o *)&"scabbard_R";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb3 = '\x01';
  }
  pCVar30 = (__this->fields)._setup;
  if (pCVar30 != (Characters_HumanSetup_o *)0x0) {
    if (((pCVar30->fields).Weapon | 2U) == 3) {
      puVar13 = &"char_gun_mag_r";
      puVar26 = &"char_gun_mag_l";
    }
    else {
      puVar13 = &"scabbard_R";
      puVar26 = (undefined8 *)&"scabbard_L";
    }
    if ((char)left == '\0') {
      puVar26 = puVar13;
    }
    pSVar14 = System_String__Concat_3ae5ba0
                        ((__this->fields).AccessoriesPath,(System_String_o *)*puVar26,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  cVar10 = (char)pUVar18;
  pCVar30 = pCVar29;
  if (g_data_057adeb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"blade_R");
    il2cpp_runtime_helper_023445d0(&"blade_L");
    il2cpp_runtime_helper_023445d0(&"character_gun_r_0");
    il2cpp_runtime_helper_023445d0(&"thunderspear_r");
    il2cpp_runtime_helper_023445d0(&"apg_R");
    il2cpp_runtime_helper_023445d0(&"thunderspear_l");
    il2cpp_runtime_helper_023445d0(&"character_gun_l_0");
    pCVar30 = (Characters_HumanSetup_o *)&"apg_L";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb4 = '\x01';
  }
  pCVar2 = (Characters_HumanSetup_o *)(pCVar29->fields).m_CachedPtr;
  if (pCVar2 != (Characters_HumanSetup_o *)0x0) {
    iVar25 = (pCVar2->fields).Weapon;
    if (iVar25 == 1) {
      puVar13 = &"character_gun_r_0";
      puVar26 = &"character_gun_l_0";
    }
    else if (iVar25 == 3) {
      puVar13 = &"apg_R";
      puVar26 = &"apg_L";
    }
    else {
      puVar26 = (undefined8 *)&"blade_L";
      if (iVar25 == 2) {
        puVar26 = (undefined8 *)&"thunderspear_l";
      }
      puVar13 = &"blade_R";
      if (iVar25 == 2) {
        puVar13 = &"thunderspear_r";
      }
    }
    if (cVar10 == '\0') {
      puVar26 = puVar13;
    }
    pSVar14 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pCVar29->fields)._mount_gas_l,(System_String_o *)*puVar26,
                         (MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  cVar10 = (char)in_ECX;
  pCStack_1f8 = pCVar30;
  pCStack_60 = pCVar29;
  if (g_data_057ade94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&"_PulseSpeed");
    il2cpp_runtime_helper_023445d0(&"_FlowSpeed");
    il2cpp_runtime_helper_023445d0(&"_TexturePreserve");
    il2cpp_runtime_helper_023445d0(&"_FlowStrength");
    il2cpp_runtime_helper_023445d0(&"Custom/CharacterEffectShader");
    il2cpp_runtime_helper_023445d0(&"_EmissionFromTexture");
    il2cpp_runtime_helper_023445d0(&"_SecondaryScroll");
    il2cpp_runtime_helper_023445d0(&"_QualityLevel");
    il2cpp_runtime_helper_023445d0(&"_IsHair");
    il2cpp_runtime_helper_023445d0(&"_Color");
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    il2cpp_runtime_helper_023445d0(&"_CullMode");
    il2cpp_runtime_helper_023445d0(&"_EMISSION");
    il2cpp_runtime_helper_023445d0(&"_NeonColor");
    il2cpp_runtime_helper_023445d0(&"_OutlineThickness");
    il2cpp_runtime_helper_023445d0(&"_DetailSpeed");
    il2cpp_runtime_helper_023445d0(&"_StyleMode");
    il2cpp_runtime_helper_023445d0(&"_GlowIntensity");
    il2cpp_runtime_helper_023445d0(&"_EdgeSpark");
    il2cpp_runtime_helper_023445d0(&"_StyleStrength");
    il2cpp_runtime_helper_023445d0(&"_OutlinePower");
    il2cpp_runtime_helper_023445d0(&"_PulseAmount");
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    il2cpp_runtime_helper_023445d0(&"_DetailScale");
    il2cpp_runtime_helper_023445d0(&"_GlowColor");
    g_data_057ade94 = '\x01';
  }
  pUStack_200 = (Utility_Color255_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar27 = (MethodInfo *)0x0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (type_00 == 0) {
    return (System_String_o *)CONCAT44(extraout_var,bVar11);
  }
  if ((char)bVar11 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var,bVar11);
  }
  bVar11 = Characters_HumanSetup__CanUseCharacterEffects(pCStack_1f8,pMVar27);
  if ((char)bVar11 == '\0') {
    return (System_String_o *)CONCAT44(extraout_var_00,bVar11);
  }
  if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar17 = (Utility_Color255_o *)auStack_160;
  PatreonEffects_CharacterEffectPresets__GetPreset
            ((PatreonEffects_CharacterEffectPreset_o *)pUVar17,type_00,(MethodInfo *)0x0);
  pSVar3 = (pCStack_1f8->fields).CustomSet;
  if (((pSVar3 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar15 = (pSVar3->fields).HairColor, pSVar15 == (Settings_ColorSetting_o *)0x0)) ||
     (pUVar17 = (pSVar15->fields)._value, pUVar17 == (Utility_Color255_o *)0x0)) {
label_042ef756:
    il2cpp_runtime_helper_022b2c90();
    pUVar18 = pUVar17;
  }
  else {
    fStack_1c4 = (float)auStack_160._4_4_;
    fStack_1c8 = fStack_158;
    fStack_18c = fStack_154;
    fStack_190 = fStack_150;
    fStack_194 = fStack_14c;
    fStack_198 = fStack_148;
    fStack_19c = fStack_144;
    fStack_1cc = fStack_140;
    fStack_1d0 = fStack_13c;
    fStack_1d4 = fStack_138;
    fStack_1d8 = fStack_134;
    fStack_1a0 = fStack_130;
    fStack_1dc = fStack_12c;
    fStack_1e0 = fStack_128;
    UVar39 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0);
    uStack_98 = UVar39.fields._0_8_;
    auStack_a8._8_4_ = in_XMM1_Dc;
    auStack_a8._0_8_ = UVar39.fields._8_8_;
    auStack_a8._12_4_ = in_XMM1_Dd;
    pSVar3 = (pCStack_1f8->fields).CustomSet;
    if (pSVar3 == (Settings_HumanCustomSet_o *)0x0) goto label_042ef756;
    if (cVar10 == '\0') {
      pSVar15 = (pSVar3->fields).BladeEffectColor;
      if (pSVar15 != (Settings_ColorSetting_o *)0x0) goto label_042eebbf;
      goto label_042ef756;
    }
    pSVar15 = (pSVar3->fields).HairEffectColor;
    if (pSVar15 == (Settings_ColorSetting_o *)0x0) goto label_042ef756;
label_042eebbf:
    pUVar17 = (pSVar15->fields)._value;
    if (pUVar17 == (Utility_Color255_o *)0x0) goto label_042ef756;
    uStack_90 = extraout_XMM0_Qb;
    UVar39 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0);
    uStack_108 = UVar39.fields._0_8_;
    fStack_110 = (float)in_XMM1_Dc;
    auStack_118 = (undefined1  [8])UVar39.fields._8_8_;
    fStack_10c = (float)in_XMM1_Dd;
    if (cVar10 != '\0') {
      _auStack_178 = ZEXT812(0x3e4ccccd);
      fStack_16c = 0.0;
      _auStack_188 = ZEXT812(0x3ee66666);
      fStack_17c = 0.0;
      if (pUVar18 != (Utility_Color255_o *)0x0) goto label_042eec3f;
      goto label_042ef756;
    }
    _auStack_178 = ZEXT812(0x3eb33333);
    fStack_16c = 0.0;
    _auStack_188 = ZEXT812(0x3f19999a);
    fStack_17c = 0.0;
    if (pUVar18 == (Utility_Color255_o *)0x0) goto label_042ef756;
label_042eec3f:
    uStack_100 = extraout_XMM0_Qb_00;
    pSVar16 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)pUVar18,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pUVar17 = pUVar18;
    if (pSVar16 == (System_Object_array *)0x0) goto label_042ef756;
    if (cVar10 == '\0') {
      fStack_1e4 = 0.0;
      fStack_1e8 = 2.0;
      iVar25 = (int)pSVar16->max_length;
    }
    else {
      fStack_1e4 = 1.0;
      fStack_1e8 = 0.0;
      iVar25 = (int)pSVar16->max_length;
    }
    if (iVar25 < 1) {
      return (System_String_o *)pSVar16;
    }
    fVar38 = 1.0;
    if ((float)auStack_118._4_4_ <= 1.0) {
      fVar38 = (float)auStack_118._4_4_;
    }
    fVar38 = (float)(-(uint)(0.0 <= (float)auStack_118._4_4_) & (uint)fVar38);
    fStack_88 = (float)auStack_178._0_4_ * (1.0 - (float)uStack_108) + (float)uStack_108;
    fStack_84 = (float)auStack_178._0_4_ * (1.0 - uStack_108._4_4_) + uStack_108._4_4_;
    fStack_80 = fStack_170 * (0.0 - (float)uStack_100) + (float)uStack_100;
    fStack_7c = fStack_16c * (0.0 - uStack_100._4_4_) + uStack_100._4_4_;
    auStack_178._4_4_ = (float)auStack_178._0_4_ * (1.0 - (float)auStack_118._4_4_) + (float)auStack_118._4_4_
    ;
    auStack_178._0_4_ = (float)auStack_178._0_4_ * (1.0 - (float)auStack_118._0_4_) + (float)auStack_118._0_4_
    ;
    fStack_170 = fStack_170 * (0.0 - fStack_110) + fStack_110;
    fStack_16c = fStack_16c * (0.0 - fStack_10c) + fStack_10c;
    fStack_78 = (1.0 - (float)uStack_108) * (float)auStack_188._0_4_ + (float)uStack_108;
    fStack_74 = (1.0 - uStack_108._4_4_) * (float)auStack_188._0_4_ + uStack_108._4_4_;
    fStack_70 = (0.0 - (float)uStack_100) * fStack_180 + (float)uStack_100;
    fStack_6c = (0.0 - uStack_100._4_4_) * fStack_17c + uStack_100._4_4_;
    auStack_188._4_4_ = (float)auStack_188._0_4_ * (1.0 - (float)auStack_118._4_4_) + (float)auStack_118._4_4_
    ;
    auStack_188._0_4_ = (float)auStack_188._0_4_ * (1.0 - (float)auStack_118._0_4_) + (float)auStack_118._0_4_
    ;
    fStack_180 = fStack_180 * (0.0 - fStack_110) + fStack_110;
    fStack_17c = fStack_17c * (0.0 - fStack_10c) + fStack_10c;
    fStack_1a8 = (float)(int)auStack_160._0_4_;
    fVar35 = fStack_1d0 * 0.7;
    fVar37 = 1.0;
    if (fVar35 <= 1.0) {
      fVar37 = fVar35;
    }
    auStack_c8 = ZEXT416(-(uint)(0.0 <= fVar35) & (uint)fVar37);
    fVar35 = fStack_1cc * 0.95;
    fVar37 = 1.5;
    if (fVar35 <= 1.5) {
      fVar37 = fVar35;
    }
    auStack_d8 = ZEXT416(~-(uint)(0.5 <= fVar35) & 0x3f000000 | (uint)fVar37 & -(uint)(0.5 <= fVar35));
    fStack_1ac = fStack_1dc * 1.25 * fVar38;
    fStack_1b4 = fStack_1c4 * 1.15 * fVar38;
    fStack_1ec = fStack_1e0 * fVar38;
    fStack_1b8 = fStack_1c4 * 0.45 * fVar38;
    fVar35 = fStack_1d0 + 0.22;
    fVar37 = 1.0;
    if (fVar35 <= 1.0) {
      fVar37 = fVar35;
    }
    auStack_e8 = ZEXT416(-(uint)(0.0 <= fVar35) & (uint)fVar37);
    fVar35 = fStack_1cc + 0.14;
    fVar37 = 1.5;
    if (fVar35 <= 1.5) {
      fVar37 = fVar35;
    }
    auStack_f8 = ZEXT416(~-(uint)(0.5 <= fVar35) & 0x3f000000 | (uint)fVar37 & -(uint)(0.5 <= fVar35));
    fStack_1b0 = fStack_1d4 * 1.15;
    fStack_1bc = fStack_1d8 * 1.1;
    fStack_1c0 = fStack_1c8 * 0.9;
    auStack_b8 = ZEXT416((uint)(fVar38 * fStack_1dc));
    uVar22 = 0;
    uStack_1a4 = in_ECX;
    pSStack_120 = pSVar16;
    if (iVar25 != 0) {
      do {
        x_03 = (Utility_Color255_o *)pSStack_120->m_Items[uVar22];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar18 = x_03;
        bVar11 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)x_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          pUVar17 = pUVar18;
          if (x_03 == (Utility_Color255_o *)0x0) goto label_042ef756;
          x_00 = (Utility_Color255_o *)
                 UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_03,(MethodInfo *)0x0);
          x_01 = (Utility_Color255_o *)UnityEngine_Shader__Find("Custom/CharacterEffectShader",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar18 = x_00;
          bVar11 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar18 = x_01;
            bVar11 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              pUStack_200 = (Utility_Color255_o *)0x0;
              pSVar34 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (pCStack_1f8->fields)._effectMaterialCache;
              pUVar17 = (Utility_Color255_o *)0x0;
              if (pSVar34 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_042ef756;
              bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                 (pSVar34,(Il2CppObject *)x_03,(Il2CppObject **)&pUStack_200,MethodInfo_Boolean_TryGetValue);
              pUVar18 = pUStack_200;
              if ((char)bVar11 == '\0') {
label_042ef058:
                pUVar18 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor
                          ((UnityEngine_Material_o *)pUVar18,(UnityEngine_Shader_o *)x_01,(MethodInfo *)0x0);
                pSVar34 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (pCStack_1f8->fields)._effectMaterialCache;
                pUVar17 = (Utility_Color255_o *)0x0;
                pUStack_200 = pUVar18;
                if (pSVar34 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_042ef756;
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar34,(Il2CppObject *)x_03,(Il2CppObject *)pUVar18,MethodInfo_Void_set_Item);
label_042ef0ad:
                pUVar17 = x_03;
                UnityEngine_Renderer__set_material
                          ((UnityEngine_Renderer_o *)x_03,(UnityEngine_Material_o *)pUStack_200,
                           (MethodInfo *)0x0);
              }
              else {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 == '\0') goto label_042ef058;
                pUVar17 = (Utility_Color255_o *)
                          UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_03,(MethodInfo *)0x0)
                ;
                pUVar18 = pUStack_200;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)pUVar18,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') goto label_042ef0ad;
              }
              uVar9 = uStack_1a4;
              if (x_00 == (Utility_Color255_o *)0x0) goto label_042ef756;
              bVar11 = UnityEngine_Material__HasProperty_4dcb5b0
                                 ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0);
              pUVar18 = pUStack_200;
              if ((char)bVar11 != '\0') {
                pUVar17 = x_00;
                value = UnityEngine_Material__GetTexture
                                  ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0);
                if (pUVar18 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetTexture
                          ((UnityEngine_Material_o *)pUVar18,"_MainTex",value,(MethodInfo *)0x0);
              }
              if ((char)uVar9 == '\0') {
                pUVar17 = x_00;
                bVar11 = UnityEngine_Material__HasProperty_4dcb5b0
                                   ((UnityEngine_Material_o *)x_00,"_Color",(MethodInfo *)0x0);
                pUVar18 = pUStack_200;
                if ((char)bVar11 == '\0') {
                  if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                  fVar38 = (float)g_data_00d19fc0;
                  fVar37 = g_data_00d19fc0._4_4_;
                  auVar36 = _DAT_00d19fc0;
                }
                else {
                  UVar39 = UnityEngine_Material__GetColor
                                     ((UnityEngine_Material_o *)x_00,"_Color",(MethodInfo *)0x0);
                  fVar38 = UVar39.fields.b;
                  fVar37 = UVar39.fields.a;
                  auVar36._0_8_ = UVar39.fields._0_8_;
                  auVar36._8_8_ = extraout_XMM0_Qb_01;
                  pUVar17 = x_00;
                  if (pUVar18 == (Utility_Color255_o *)0x0) goto label_042ef756;
                }
              }
              else {
                pUVar17 = pUStack_200;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                auVar36._8_8_ = uStack_90;
                auVar36._0_8_ = uStack_98;
                pUVar18 = pUStack_200;
                fVar38 = (float)auStack_a8._0_4_;
                fVar37 = (float)auStack_a8._4_4_;
              }
              UVar39.fields._0_8_ = auVar36._0_8_;
              UVar39.fields.a = fVar37;
              UVar39.fields.b = fVar38;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUVar18,"_Color",UVar39,(MethodInfo *)0x0);
              auVar36 = _auStack_118;
              pUVar17 = pUStack_200;
              if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_00.fields.b = (float)auStack_118._0_4_;
              value_00.fields.a = (float)auStack_118._4_4_;
              value_00.fields.r = (float)uStack_108;
              value_00.fields.g = uStack_108._4_4_;
              _auStack_118 = auVar36;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_200,"_NeonColor",value_00,(MethodInfo *)0x0);
              auVar36 = _auStack_178;
              pUVar17 = pUStack_200;
              if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_01.fields.g = fStack_84;
              value_01.fields.r = fStack_88;
              value_01.fields.b = (float)auStack_178._0_4_;
              value_01.fields.a = (float)auStack_178._4_4_;
              _auStack_178 = auVar36;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_200,"_GlowColor",value_01,(MethodInfo *)0x0);
              auVar36 = _auStack_188;
              pUVar17 = pUStack_200;
              if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_02.fields.g = fStack_74;
              value_02.fields.r = fStack_78;
              value_02.fields.b = (float)auStack_188._0_4_;
              value_02.fields.a = (float)auStack_188._4_4_;
              _auStack_188 = auVar36;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_200,"_OutlineColor",value_02,(MethodInfo *)0x0);
              pUVar17 = pUStack_200;
              if ((((pUStack_200 == (Utility_Color255_o *)0x0) ||
                   (UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pUStack_200,"_GlowIntensity",fStack_1c4,(MethodInfo *)0x0
                              ), pUVar17 = pUStack_200, pUStack_200 == (Utility_Color255_o *)0x0)) ||
                  ((UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pUStack_200,"_OutlineThickness",fStack_1c8,(MethodInfo *)0x0
                              ), pUVar17 = pUStack_200, pUStack_200 == (Utility_Color255_o *)0x0 ||
                   ((UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_200,"_OutlinePower",fStack_18c,
                                (MethodInfo *)0x0), pUVar17 = pUStack_200,
                    pUStack_200 == (Utility_Color255_o *)0x0 ||
                    (UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_200,"_PulseSpeed",fStack_190,
                                (MethodInfo *)0x0), pUVar17 = pUStack_200,
                    pUStack_200 == (Utility_Color255_o *)0x0)))))) ||
                 ((UnityEngine_Material__SetFloat
                             ((UnityEngine_Material_o *)pUStack_200,"_PulseAmount",fStack_194,(MethodInfo *)0x0)
                  , pUVar17 = pUStack_200, pUStack_200 == (Utility_Color255_o *)0x0 ||
                  (((((((UnityEngine_Material__SetFloat
                                   ((UnityEngine_Material_o *)pUStack_200,"_FlowSpeed",fStack_198,
                                    (MethodInfo *)0x0), pUVar17 = pUStack_200,
                        pUStack_200 == (Utility_Color255_o *)0x0 ||
                        (UnityEngine_Material__SetFloat
                                   ((UnityEngine_Material_o *)pUStack_200,"_FlowStrength",fStack_19c,
                                    (MethodInfo *)0x0), pUVar17 = pUStack_200,
                        pUStack_200 == (Utility_Color255_o *)0x0)) ||
                       (UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_200,"_TexturePreserve",fStack_1cc,
                                   (MethodInfo *)0x0), pUVar17 = pUStack_200,
                       pUStack_200 == (Utility_Color255_o *)0x0)) ||
                      ((UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_200,"_EmissionFromTexture",fStack_1d0,
                                   (MethodInfo *)0x0), pUVar17 = pUStack_200,
                       pUStack_200 == (Utility_Color255_o *)0x0 ||
                       (UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_200,"_DetailScale",fStack_1d4,
                                   (MethodInfo *)0x0), pUVar17 = pUStack_200,
                       pUStack_200 == (Utility_Color255_o *)0x0)))) ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_200,"_DetailSpeed",fStack_1d8,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_200,
                     pUStack_200 == (Utility_Color255_o *)0x0)) ||
                    ((UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_200,"_SecondaryScroll",fStack_1a0,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_200,
                     pUStack_200 == (Utility_Color255_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_200,"_EdgeSpark",fStack_1dc,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_200,
                     pUStack_200 == (Utility_Color255_o *)0x0)))) ||
                   ((UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_200,"_StyleMode",fStack_1a8,
                                (MethodInfo *)0x0), pUVar17 = pUStack_200,
                    pUStack_200 == (Utility_Color255_o *)0x0 ||
                    ((UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_200,"_StyleStrength",fStack_1e0,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_200,
                     pUStack_200 == (Utility_Color255_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_200,"_IsHair",fStack_1e4,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_200,
                     pUStack_200 == (Utility_Color255_o *)0x0)))))))))) goto label_042ef756;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_200,"_CullMode",fStack_1e8,(MethodInfo *)0x0);
              lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
              fVar38 = 2.0;
              if (lVar5 != 0) {
                lVar5 = *(long *)(lVar5 + 0x20);
                if (lVar5 == 0) goto label_042ef756;
                iVar25 = *(int *)(lVar5 + 0x14);
                fVar38 = 0.0;
                if (1 < iVar25) {
                  fVar38 = *(float *)(&g_data_00d1d3c8 + (ulong)(iVar25 < 3) * 4);
                }
              }
              pUVar17 = pUStack_200;
              if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_200,"_QualityLevel",fVar38,(MethodInfo *)0x0);
              pUVar17 = pUStack_200;
              if ((char)uVar9 == '\0') {
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_200,"_EmissionFromTexture",(float)auStack_c8._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_200,"_TexturePreserve",(float)auStack_d8._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_200,"_EdgeSpark",fStack_1ac,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_200,"_GlowIntensity",fStack_1b4,(MethodInfo *)0x0);
                pSVar14 = "_StyleStrength";
                pUVar17 = (Utility_Color255_o *)0x0;
                fVar38 = fStack_1ec;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
              }
              else {
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_200,"_GlowIntensity",fStack_1b8,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_200,"_EmissionFromTexture",(float)auStack_e8._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_200,"_TexturePreserve",(float)auStack_f8._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_200,"_DetailScale",fStack_1b0,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_200,"_DetailSpeed",fStack_1bc,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_200,"_OutlineThickness",fStack_1c0,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_200,"_StyleStrength",fStack_1ec,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
                pSVar14 = "_EdgeSpark";
                fVar38 = (float)auStack_b8._0_4_;
              }
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_200,pSVar14,fVar38,(MethodInfo *)0x0);
              pUVar17 = (Utility_Color255_o *)0x0;
              if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__EnableKeyword
                        ((UnityEngine_Material_o *)pUStack_200,"_EMISSION",(MethodInfo *)0x0);
              pUVar17 = (Utility_Color255_o *)0x0;
              if (pUStack_200 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__set_globalIlluminationFlags
                        ((UnityEngine_Material_o *)pUStack_200,1,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_material
                        ((UnityEngine_Renderer_o *)x_03,(UnityEngine_Material_o *)pUStack_200,
                         (MethodInfo *)0x0);
              pUVar18 = x_03;
            }
          }
        }
        uVar22 = uVar22 + 1;
        uVar1 = (uint)pSStack_120->max_length;
        if ((long)(int)uVar1 <= (long)uVar22) {
          return (System_String_o *)pSStack_120;
        }
      } while (uVar22 < uVar1);
    }
  }
  pSVar14 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ade91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    g_data_057ade91 = '\x01';
  }
  if (*(char *)&pUVar18[0xf].monitor != '\0') {
    return pSVar14;
  }
  x = pUVar18[7].monitor;
  if (g_data_057adea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (System_String_c *)0x0;
  bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
  }
  if (pUVar18[0xb].monitor != (Characters_HumanSetupMeshes_o *)0x0) {
    pSVar14 = Characters_HumanSetupMeshes__GetCapeMesh(pUVar18[0xb].monitor,(MethodInfo *)method_00);
    method_00 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar11 = System_String__op_Inequality(pSVar14,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_01,bVar11);
    }
    if (*(Characters_HumanSetupTextures_o **)&pUVar18[0xb].fields != (Characters_HumanSetupTextures_o *)0x0) {
      reference = pUVar18[0xb].klass;
      pSVar19 = Characters_HumanSetupTextures__GetBrandTexture
                          (*(Characters_HumanSetupTextures_o **)&pUVar18[0xb].fields,(MethodInfo *)method_00);
      pMVar27 = extraout_RDX;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar27 = extraout_RDX_00;
      }
      pUVar20 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar19,0,pMVar27);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar21 = ClothFactory__GetCape((UnityEngine_GameObject_o *)reference,pSVar14,pUVar20,(MethodInfo *)0x0)
      ;
      pUVar18[7].monitor = pUVar21;
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_022b4080(&pUVar18[7].monitor,pUVar21);
      return pSVar14;
    }
  }
  pSVar32 = (System_String_c *)0x0;
  il2cpp_runtime_helper_022b2c90();
  ppSVar31 = (System_String_o **)pSVar32;
  if (g_data_057adebc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppSVar31 = &"character_cape_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebc = '\x01';
  }
  pcVar4 = (pSVar32->_1).name;
  if (((pcVar4 != (char *)0x0) && (lVar5 = *(long *)(pcVar4 + 0x1c8), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x70), lVar5 != 0)) {
    if (*(int *)(lVar5 + 0x14) == 0) {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar14 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pSVar32->_1).namespaze,"character_cape_0",(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar32 = (System_String_c *)ppSVar31;
  if (g_data_057adec3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_g");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_sc");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_mp");
    pSVar32 = (System_String_c *)&"Brand/aottg_hero_brand_ts";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec3 = '\x01';
  }
  pcVar4 = (((System_String_c *)ppSVar31)->_1).name;
  if (((pcVar4 != (char *)0x0) && (lVar5 = *(long *)(pcVar4 + 0x1c8), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x78), lVar5 != 0)) {
    uVar22 = (ulong)*(int *)(lVar5 + 0x14);
    ppuVar23 = &g_data_0524f380 + uVar22;
    if (3 < uVar22) {
      ppuVar23 = (undefined **)(g_data_057b9c00 + 0xb8);
    }
    return *(System_String_o **)*ppuVar23;
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar33 = (System_String_c **)pSVar32;
  if (g_data_057adeba == '\0') {
    ppSVar33 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeba = '\x01';
  }
  pcVar4 = (pSVar32->_1).name;
  if (((pcVar4 != (char *)0x0) &&
      (ppSVar33 = *(System_String_c ***)(pcVar4 + 0x1e0),
      (System_String_c *)ppSVar33 != (System_String_c *)0x0)) &&
     (pvVar6 = (((System_String_c *)ppSVar33)->_1).image, method_00 = "Texture",
     plVar24 = (long *)(**(code **)((long)pvVar6 + 0x1a8))
                                 (ppSVar33,"Texture",*(undefined8 *)((long)pvVar6 + 0x1b0)),
     plVar24 != (long *)0x0)) {
    pSVar14 = (System_String_o *)(**(code **)(*plVar24 + 0x1c8))(plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
    bVar11 = System_String__op_Equality
                       (pSVar14,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      pSVar14 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)&(pSVar32->_1).byval_arg.bits,pSVar14,(MethodInfo *)0x0);
      return pSVar14;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  str1 = ppSVar33;
  if (g_data_057adec5 == '\0') {
    str1 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec5 = '\x01';
  }
  pcVar4 = (((System_String_c *)ppSVar33)->_1).name;
  if (((pcVar4 != (char *)0x0) &&
      (str1 = *(System_String_c ***)(pcVar4 + 0x1e0), (System_String_c *)str1 != (System_String_c *)0x0)) &&
     (pvVar6 = (((System_String_c *)str1)->_1).image, method_00 = "Texture",
     plVar24 = (long *)(**(code **)((long)pvVar6 + 0x1a8))
                                 (str1,"Texture",*(undefined8 *)((long)pvVar6 + 0x1b0)),
     plVar24 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar24 + 0x1c8);
    pSVar14 = (System_String_o *)
              (*vtableDispatch)(plVar24,*(undefined8 *)(*plVar24 + 0x1d0),vtableDispatch);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Textures/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Materials/HumanHairMat");
    il2cpp_runtime_helper_023445d0(&"Tex");
    g_data_057adea8 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042efb9d;
label_042efc58:
    il2cpp_runtime_helper_02337ed0();
    pSVar34 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar34 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efdd6;
label_042efc74:
    method_00 = (System_String_c *)str1;
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar34,(Il2CppObject *)str1,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 != '\0') {
label_042efd96:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar14 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,MethodInfo_Material_get_Item);
        return pSVar14;
      }
      goto label_042efdd6;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar20 = (UnityEngine_Material_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar14,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    method_00 = (System_String_c *)
                System_String__Concat_3af7150
                          ("Human/Parts/Hairs/Textures/",(System_String_o *)str1,"Tex",(MethodInfo *)0x0);
    pSVar32 = (System_String_c *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar14,(System_String_o *)method_00,0,(MethodInfo *)0x0);
    if ((pSVar32 == (System_String_c *)0x0) || (method_00 = TypeInfo_Texture2D, (pSVar32->_1).image == TypeInfo_Texture2D)
       ) {
      if (pUVar20 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(pUVar20,(UnityEngine_Texture_o *)pSVar32,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = pSVar32;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          method_00 = (System_String_c *)str1;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,(Il2CppObject *)pUVar20,
                     MethodInfo_Void_set_Item);
          goto label_042efd96;
        }
      }
      goto label_042efdd6;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042efc58;
label_042efb9d:
    pSVar34 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar34 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efc74;
label_042efdd6:
    pSVar32 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  ppSVar33 = (System_String_c **)pSVar32;
  if (g_data_057adebb == '\0') {
    ppSVar33 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  SVar7 = *(System_String_Fields *)&(pSVar32->_1).name;
  if ((SVar7 != (System_String_Fields)0x0) &&
     (ppSVar33 = *(System_String_c ***)((long)SVar7 + 0x1e0),
     (System_String_c *)ppSVar33 != (System_String_c *)0x0)) {
    pSVar28 = (((System_String_c *)ppSVar33)->_1).image;
    method_00 = "Cloth";
    cVar10 = (*(code *)pSVar28[1]._1.name)(ppSVar33,"Cloth",pSVar28[1]._1.namespaze);
    if (cVar10 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    SVar7 = *(System_String_Fields *)&(pSVar32->_1).name;
    if ((SVar7 != (System_String_Fields)0x0) &&
       (ppSVar33 = *(System_String_c ***)((long)SVar7 + 0x1e0),
       (System_String_c *)ppSVar33 != (System_String_c *)0x0)) {
      pSVar14 = *(System_String_o **)&(pSVar32->_1).byval_arg.bits;
      pSVar32 = (((System_String_c *)ppSVar33)->_1).image;
      method_00 = "Cloth";
      plVar24 = (long *)(*(pSVar32->vtable)._7_CompareTo.methodPtr)
                                  (ppSVar33,"Cloth",(pSVar32->vtable)._7_CompareTo.method);
      if (plVar24 != (long *)0x0) {
        pSVar19 = (System_String_o *)
                  (**(code **)(*plVar24 + 0x1c8))(plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
        pSVar14 = System_String__Concat_3ae5ba0(pSVar14,pSVar19,(MethodInfo *)0x0);
        return pSVar14;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar32 = (System_String_c *)ppSVar33;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSVar32 = (System_String_c *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pIVar8 = (((System_String_c *)ppSVar33)->vtable)._9_GetTypeCode.methodPtr;
  if (pIVar8 == (Il2CppMethodPointer)0x0) {
    pSVar28 = (System_String_c *)0x0;
  }
  else {
    lVar5 = *(long *)(pIVar8 + 0xd0);
    if (lVar5 == 0) {
label_042f006e:
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pSVar32->vtable)._9_GetTypeCode.methodPtr != (Il2CppMethodPointer)0x0) {
        pSVar28 = pSVar32;
        bVar11 = Characters_HumanSetup__CanUseCharacterEffects
                           ((Characters_HumanSetup_o *)pSVar32,(MethodInfo *)method_00);
        pSVar14 = (System_String_o *)CONCAT44(extraout_var_03,bVar11);
        if ((char)bVar11 != '\0') {
          pIVar8 = (pSVar32->vtable)._9_GetTypeCode.methodPtr;
          if ((pIVar8 != (Il2CppMethodPointer)0x0) && (lVar5 = *(long *)(pIVar8 + 0xd0), lVar5 != 0)) {
            pSVar28 = *(System_String_c **)(lVar5 + 0x18);
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar12 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               ((System_String_o *)pSVar28,(MethodInfo *)0x0);
            pIVar8 = (pSVar32->vtable)._9_GetTypeCode.methodPtr;
            if ((pIVar8 != (Il2CppMethodPointer)0x0) && (lVar5 = *(long *)(pIVar8 + 0xe0), lVar5 != 0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               (*(System_String_o **)(lVar5 + 0x18),(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar32,
                         *(UnityEngine_GameObject_o **)&(pSVar32->_2).interfaces_count,iVar12,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar32,
                         *(UnityEngine_GameObject_o **)&(pSVar32->_2).naturalAligment,iVar12,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar32,(UnityEngine_GameObject_o *)pSVar32->static_fields
                         ,type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar32,(UnityEngine_GameObject_o *)pSVar32->rgctx_data,
                         type,0,in_R8);
              return extraout_RAX;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar14 = System_String__Concat_3ae5ba0
                              (*(System_String_o **)&(pSVar28->_1).this_arg.bits,"char_eyes",
                               (MethodInfo *)0x0);
          return pSVar14;
        }
      }
      return pSVar14;
    }
    pSVar28 = *(System_String_c **)(lVar5 + 0x18);
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    pSVar32 = pSVar28;
    iVar12 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                       ((System_String_o *)pSVar28,(MethodInfo *)0x0);
    if (iVar12 == 0) {
      pIVar8 = (((System_String_c *)ppSVar33)->vtable)._9_GetTypeCode.methodPtr;
      if ((pIVar8 == (Il2CppMethodPointer)0x0) || (lVar5 = *(long *)(pIVar8 + 0xe0), lVar5 == 0))
      goto label_042f006e;
      pSVar14 = *(System_String_o **)(lVar5 + 0x18);
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar28 = (System_String_c *)0x0;
      iVar12 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar14,(MethodInfo *)0x0);
      if (iVar12 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar11 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var_02,bVar11);
    }
    x_02 = (System_String_c *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)ppSVar33,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    pSVar32 = x_02;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar28 = (System_String_c *)CONCAT71((int7)((ulong)pSVar28 >> 8),1);
    if ((char)bVar11 != '\0') {
      if (x_02 == (System_String_c *)0x0) goto label_042f006e;
      if (*(char *)&(x_02->_1).typeMetadataHandle != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (System_String_o *)((ulong)pSVar28 & 0xffffffff);
}


// Characters.HumanSetupMeshes$$GetWeaponMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetWeaponMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x42ee720

System_String_o *
Characters_HumanSetupMeshes__GetWeaponMesh
          (Characters_HumanSetupMeshes_o *__this,bool_conflict left,MethodInfo *method)

{
  uint uVar1;
  Characters_HumanSetup_o *pCVar2;
  Settings_HumanCustomSet_o *pSVar3;
  UnityEngine_Object_o *x;
  Utility_Color255_c *reference;
  char *pcVar4;
  long lVar5;
  void *pvVar6;
  code *vtableDispatch;
  System_String_Fields SVar7;
  Il2CppMethodPointer pIVar8;
  undefined4 uVar9;
  char cVar10;
  bool_conflict bVar11;
  int32_t iVar12;
  int32_t type;
  undefined8 *puVar13;
  System_String_o *pSVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  Settings_ColorSetting_o *pSVar15;
  System_Object_array *pSVar16;
  Utility_Color255_o *x_00;
  Utility_Color255_o *x_01;
  Utility_Color255_o *pUVar17;
  Utility_Color255_o *pUVar18;
  UnityEngine_Texture_o *value;
  undefined4 extraout_var_01;
  System_String_o *pSVar19;
  UnityEngine_Material_o *pUVar20;
  UnityEngine_GameObject_o *pUVar21;
  ulong uVar22;
  undefined **ppuVar23;
  long *plVar24;
  System_String_c *method_00;
  System_String_c *x_02;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  System_String_o *extraout_RAX;
  undefined4 in_ECX;
  int iVar25;
  undefined8 *puVar26;
  int32_t type_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar27;
  System_String_c *pSVar28;
  undefined4 in_register_00000034;
  Characters_HumanSetup_o *pCVar29;
  Utility_Color255_o *x_03;
  System_String_o **ppSVar30;
  System_String_c *pSVar31;
  System_String_c **ppSVar32;
  System_String_c **str1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar33;
  MethodInfo *in_R8;
  float fVar34;
  float fVar36;
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar35 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar37;
  UnityEngine_Color_o UVar38;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  Utility_Color255_o *pUStack_1e8;
  Characters_HumanSetup_o *pCStack_1e0;
  float fStack_1d4;
  float fStack_1d0;
  float fStack_1cc;
  float fStack_1c8;
  float fStack_1c4;
  float fStack_1c0;
  float fStack_1bc;
  float fStack_1b8;
  float fStack_1b4;
  float fStack_1b0;
  float fStack_1ac;
  float fStack_1a8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  float fStack_198;
  float fStack_194;
  float fStack_190;
  undefined4 uStack_18c;
  float fStack_188;
  float fStack_184;
  float fStack_180;
  float fStack_17c;
  float fStack_178;
  float fStack_174;
  undefined1 auStack_170 [8];
  float fStack_168;
  float fStack_164;
  undefined1 auStack_160 [8];
  float fStack_158;
  float fStack_154;
  undefined1 auStack_148 [8];
  float fStack_140;
  float fStack_13c;
  float fStack_138;
  float fStack_134;
  float fStack_130;
  float fStack_12c;
  float fStack_128;
  float fStack_124;
  float fStack_120;
  float fStack_11c;
  float fStack_118;
  float fStack_114;
  float fStack_110;
  System_Object_array *pSStack_108;
  undefined1 auStack_100 [8];
  float fStack_f8;
  float fStack_f4;
  undefined8 uStack_f0;
  undefined8 uStack_e8;
  undefined1 auStack_e0 [16];
  undefined1 auStack_d0 [16];
  undefined1 auStack_c0 [16];
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [16];
  undefined1 auStack_90 [16];
  undefined8 uStack_80;
  undefined8 uStack_78;
  float fStack_70;
  float fStack_6c;
  float fStack_68;
  float fStack_64;
  float fStack_60;
  float fStack_5c;
  float fStack_58;
  float fStack_54;
  Characters_HumanSetupMeshes_o *pCStack_48;
  undefined8 extraout_XMM0_Qb_01;
  
  pUVar18 = (Utility_Color255_o *)CONCAT44(in_register_00000034,left);
  pCVar29 = (Characters_HumanSetup_o *)__this;
  if (g_data_057adeb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"blade_R");
    il2cpp_runtime_helper_023445d0(&"blade_L");
    il2cpp_runtime_helper_023445d0(&"character_gun_r_0");
    il2cpp_runtime_helper_023445d0(&"thunderspear_r");
    il2cpp_runtime_helper_023445d0(&"apg_R");
    il2cpp_runtime_helper_023445d0(&"thunderspear_l");
    il2cpp_runtime_helper_023445d0(&"character_gun_l_0");
    pCVar29 = (Characters_HumanSetup_o *)&"apg_L";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb4 = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (pCVar2 != (Characters_HumanSetup_o *)0x0) {
    iVar25 = (pCVar2->fields).Weapon;
    if (iVar25 == 1) {
      puVar26 = &"character_gun_r_0";
      puVar13 = &"character_gun_l_0";
    }
    else if (iVar25 == 3) {
      puVar26 = &"apg_R";
      puVar13 = &"apg_L";
    }
    else {
      puVar13 = (undefined8 *)&"blade_L";
      if (iVar25 == 2) {
        puVar13 = (undefined8 *)&"thunderspear_l";
      }
      puVar26 = &"blade_R";
      if (iVar25 == 2) {
        puVar26 = &"thunderspear_r";
      }
    }
    if ((char)left == '\0') {
      puVar13 = puVar26;
    }
    pSVar14 = System_String__Concat_3ae5ba0
                        ((__this->fields).WeaponsPath,(System_String_o *)*puVar13,(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  cVar10 = (char)in_ECX;
  pCStack_1e0 = pCVar29;
  pCStack_48 = __this;
  if (g_data_057ade94 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Color255_get_Value);
    il2cpp_runtime_helper_023445d0(&"_PulseSpeed");
    il2cpp_runtime_helper_023445d0(&"_FlowSpeed");
    il2cpp_runtime_helper_023445d0(&"_TexturePreserve");
    il2cpp_runtime_helper_023445d0(&"_FlowStrength");
    il2cpp_runtime_helper_023445d0(&"Custom/CharacterEffectShader");
    il2cpp_runtime_helper_023445d0(&"_EmissionFromTexture");
    il2cpp_runtime_helper_023445d0(&"_SecondaryScroll");
    il2cpp_runtime_helper_023445d0(&"_QualityLevel");
    il2cpp_runtime_helper_023445d0(&"_IsHair");
    il2cpp_runtime_helper_023445d0(&"_Color");
    il2cpp_runtime_helper_023445d0(&"_MainTex");
    il2cpp_runtime_helper_023445d0(&"_CullMode");
    il2cpp_runtime_helper_023445d0(&"_EMISSION");
    il2cpp_runtime_helper_023445d0(&"_NeonColor");
    il2cpp_runtime_helper_023445d0(&"_OutlineThickness");
    il2cpp_runtime_helper_023445d0(&"_DetailSpeed");
    il2cpp_runtime_helper_023445d0(&"_StyleMode");
    il2cpp_runtime_helper_023445d0(&"_GlowIntensity");
    il2cpp_runtime_helper_023445d0(&"_EdgeSpark");
    il2cpp_runtime_helper_023445d0(&"_StyleStrength");
    il2cpp_runtime_helper_023445d0(&"_OutlinePower");
    il2cpp_runtime_helper_023445d0(&"_PulseAmount");
    il2cpp_runtime_helper_023445d0(&"_OutlineColor");
    il2cpp_runtime_helper_023445d0(&"_DetailScale");
    il2cpp_runtime_helper_023445d0(&"_GlowColor");
    g_data_057ade94 = '\x01';
  }
  pUStack_1e8 = (Utility_Color255_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar27 = (MethodInfo *)0x0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (type_00 == 0) {
    return (System_String_o *)CONCAT44(extraout_var,bVar11);
  }
  if ((char)bVar11 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var,bVar11);
  }
  bVar11 = Characters_HumanSetup__CanUseCharacterEffects(pCStack_1e0,pMVar27);
  if ((char)bVar11 == '\0') {
    return (System_String_o *)CONCAT44(extraout_var_00,bVar11);
  }
  if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar17 = (Utility_Color255_o *)auStack_148;
  PatreonEffects_CharacterEffectPresets__GetPreset
            ((PatreonEffects_CharacterEffectPreset_o *)pUVar17,type_00,(MethodInfo *)0x0);
  pSVar3 = (pCStack_1e0->fields).CustomSet;
  if (((pSVar3 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar15 = (pSVar3->fields).HairColor, pSVar15 == (Settings_ColorSetting_o *)0x0)) ||
     (pUVar17 = (pSVar15->fields)._value, pUVar17 == (Utility_Color255_o *)0x0)) {
label_042ef756:
    il2cpp_runtime_helper_022b2c90();
    pUVar18 = pUVar17;
  }
  else {
    fStack_1ac = (float)auStack_148._4_4_;
    fStack_1b0 = fStack_140;
    fStack_174 = fStack_13c;
    fStack_178 = fStack_138;
    fStack_17c = fStack_134;
    fStack_180 = fStack_130;
    fStack_184 = fStack_12c;
    fStack_1b4 = fStack_128;
    fStack_1b8 = fStack_124;
    fStack_1bc = fStack_120;
    fStack_1c0 = fStack_11c;
    fStack_188 = fStack_118;
    fStack_1c4 = fStack_114;
    fStack_1c8 = fStack_110;
    UVar38 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0);
    uStack_80 = UVar38.fields._0_8_;
    auStack_90._8_4_ = in_XMM1_Dc;
    auStack_90._0_8_ = UVar38.fields._8_8_;
    auStack_90._12_4_ = in_XMM1_Dd;
    pSVar3 = (pCStack_1e0->fields).CustomSet;
    if (pSVar3 == (Settings_HumanCustomSet_o *)0x0) goto label_042ef756;
    if (cVar10 == '\0') {
      pSVar15 = (pSVar3->fields).BladeEffectColor;
      if (pSVar15 != (Settings_ColorSetting_o *)0x0) goto label_042eebbf;
      goto label_042ef756;
    }
    pSVar15 = (pSVar3->fields).HairEffectColor;
    if (pSVar15 == (Settings_ColorSetting_o *)0x0) goto label_042ef756;
label_042eebbf:
    pUVar17 = (pSVar15->fields)._value;
    if (pUVar17 == (Utility_Color255_o *)0x0) goto label_042ef756;
    uStack_78 = extraout_XMM0_Qb;
    UVar38 = Utility_Color255__ToColor(pUVar17,(MethodInfo *)0x0);
    uStack_f0 = UVar38.fields._0_8_;
    fStack_f8 = (float)in_XMM1_Dc;
    auStack_100 = (undefined1  [8])UVar38.fields._8_8_;
    fStack_f4 = (float)in_XMM1_Dd;
    if (cVar10 != '\0') {
      _auStack_160 = ZEXT812(0x3e4ccccd);
      fStack_154 = 0.0;
      _auStack_170 = ZEXT812(0x3ee66666);
      fStack_164 = 0.0;
      if (pUVar18 != (Utility_Color255_o *)0x0) goto label_042eec3f;
      goto label_042ef756;
    }
    _auStack_160 = ZEXT812(0x3eb33333);
    fStack_154 = 0.0;
    _auStack_170 = ZEXT812(0x3f19999a);
    fStack_164 = 0.0;
    if (pUVar18 == (Utility_Color255_o *)0x0) goto label_042ef756;
label_042eec3f:
    uStack_e8 = extraout_XMM0_Qb_00;
    pSVar16 = UnityEngine_GameObject__GetComponentsInChildren_object__255ab00
                        ((UnityEngine_GameObject_o *)pUVar18,MethodInfo_Renderer_GetComponentsInChildren_Renderer);
    pUVar17 = pUVar18;
    if (pSVar16 == (System_Object_array *)0x0) goto label_042ef756;
    if (cVar10 == '\0') {
      fStack_1cc = 0.0;
      fStack_1d0 = 2.0;
      iVar25 = (int)pSVar16->max_length;
    }
    else {
      fStack_1cc = 1.0;
      fStack_1d0 = 0.0;
      iVar25 = (int)pSVar16->max_length;
    }
    if (iVar25 < 1) {
      return (System_String_o *)pSVar16;
    }
    fVar37 = 1.0;
    if ((float)auStack_100._4_4_ <= 1.0) {
      fVar37 = (float)auStack_100._4_4_;
    }
    fVar37 = (float)(-(uint)(0.0 <= (float)auStack_100._4_4_) & (uint)fVar37);
    fStack_70 = (float)auStack_160._0_4_ * (1.0 - (float)uStack_f0) + (float)uStack_f0;
    fStack_6c = (float)auStack_160._0_4_ * (1.0 - uStack_f0._4_4_) + uStack_f0._4_4_;
    fStack_68 = fStack_158 * (0.0 - (float)uStack_e8) + (float)uStack_e8;
    fStack_64 = fStack_154 * (0.0 - uStack_e8._4_4_) + uStack_e8._4_4_;
    auStack_160._4_4_ = (float)auStack_160._0_4_ * (1.0 - (float)auStack_100._4_4_) + (float)auStack_100._4_4_
    ;
    auStack_160._0_4_ = (float)auStack_160._0_4_ * (1.0 - (float)auStack_100._0_4_) + (float)auStack_100._0_4_
    ;
    fStack_158 = fStack_158 * (0.0 - fStack_f8) + fStack_f8;
    fStack_154 = fStack_154 * (0.0 - fStack_f4) + fStack_f4;
    fStack_60 = (1.0 - (float)uStack_f0) * (float)auStack_170._0_4_ + (float)uStack_f0;
    fStack_5c = (1.0 - uStack_f0._4_4_) * (float)auStack_170._0_4_ + uStack_f0._4_4_;
    fStack_58 = (0.0 - (float)uStack_e8) * fStack_168 + (float)uStack_e8;
    fStack_54 = (0.0 - uStack_e8._4_4_) * fStack_164 + uStack_e8._4_4_;
    auStack_170._4_4_ = (float)auStack_170._0_4_ * (1.0 - (float)auStack_100._4_4_) + (float)auStack_100._4_4_
    ;
    auStack_170._0_4_ = (float)auStack_170._0_4_ * (1.0 - (float)auStack_100._0_4_) + (float)auStack_100._0_4_
    ;
    fStack_168 = fStack_168 * (0.0 - fStack_f8) + fStack_f8;
    fStack_164 = fStack_164 * (0.0 - fStack_f4) + fStack_f4;
    fStack_190 = (float)(int)auStack_148._0_4_;
    fVar34 = fStack_1b8 * 0.7;
    fVar36 = 1.0;
    if (fVar34 <= 1.0) {
      fVar36 = fVar34;
    }
    auStack_b0 = ZEXT416(-(uint)(0.0 <= fVar34) & (uint)fVar36);
    fVar34 = fStack_1b4 * 0.95;
    fVar36 = 1.5;
    if (fVar34 <= 1.5) {
      fVar36 = fVar34;
    }
    auStack_c0 = ZEXT416(~-(uint)(0.5 <= fVar34) & 0x3f000000 | (uint)fVar36 & -(uint)(0.5 <= fVar34));
    fStack_194 = fStack_1c4 * 1.25 * fVar37;
    fStack_19c = fStack_1ac * 1.15 * fVar37;
    fStack_1d4 = fStack_1c8 * fVar37;
    fStack_1a0 = fStack_1ac * 0.45 * fVar37;
    fVar34 = fStack_1b8 + 0.22;
    fVar36 = 1.0;
    if (fVar34 <= 1.0) {
      fVar36 = fVar34;
    }
    auStack_d0 = ZEXT416(-(uint)(0.0 <= fVar34) & (uint)fVar36);
    fVar34 = fStack_1b4 + 0.14;
    fVar36 = 1.5;
    if (fVar34 <= 1.5) {
      fVar36 = fVar34;
    }
    auStack_e0 = ZEXT416(~-(uint)(0.5 <= fVar34) & 0x3f000000 | (uint)fVar36 & -(uint)(0.5 <= fVar34));
    fStack_198 = fStack_1bc * 1.15;
    fStack_1a4 = fStack_1c0 * 1.1;
    fStack_1a8 = fStack_1b0 * 0.9;
    auStack_a0 = ZEXT416((uint)(fVar37 * fStack_1c4));
    uVar22 = 0;
    uStack_18c = in_ECX;
    pSStack_108 = pSVar16;
    if (iVar25 != 0) {
      do {
        x_03 = (Utility_Color255_o *)pSStack_108->m_Items[uVar22];
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar18 = x_03;
        bVar11 = UnityEngine_Object__op_Equality
                           ((UnityEngine_Object_o *)x_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          pUVar17 = pUVar18;
          if (x_03 == (Utility_Color255_o *)0x0) goto label_042ef756;
          x_00 = (Utility_Color255_o *)
                 UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_03,(MethodInfo *)0x0);
          x_01 = (Utility_Color255_o *)UnityEngine_Shader__Find("Custom/CharacterEffectShader",(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pUVar18 = x_00;
          bVar11 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pUVar18 = x_01;
            bVar11 = UnityEngine_Object__op_Equality
                               ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar11 == '\0') {
              pUStack_1e8 = (Utility_Color255_o *)0x0;
              pSVar33 = (System_Collections_Generic_Dictionary_object__object__o *)
                        (pCStack_1e0->fields)._effectMaterialCache;
              pUVar17 = (Utility_Color255_o *)0x0;
              if (pSVar33 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_042ef756;
              bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                 (pSVar33,(Il2CppObject *)x_03,(Il2CppObject **)&pUStack_1e8,MethodInfo_Boolean_TryGetValue);
              pUVar18 = pUStack_1e8;
              if ((char)bVar11 == '\0') {
label_042ef058:
                pUVar18 = (Utility_Color255_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Material);
                UnityEngine_Material___ctor
                          ((UnityEngine_Material_o *)pUVar18,(UnityEngine_Shader_o *)x_01,(MethodInfo *)0x0);
                pSVar33 = (System_Collections_Generic_Dictionary_object__object__o *)
                          (pCStack_1e0->fields)._effectMaterialCache;
                pUVar17 = (Utility_Color255_o *)0x0;
                pUStack_1e8 = pUVar18;
                if (pSVar33 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                goto label_042ef756;
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar33,(Il2CppObject *)x_03,(Il2CppObject *)pUVar18,MethodInfo_Void_set_Item);
label_042ef0ad:
                pUVar17 = x_03;
                UnityEngine_Renderer__set_material
                          ((UnityEngine_Renderer_o *)x_03,(UnityEngine_Material_o *)pUStack_1e8,
                           (MethodInfo *)0x0);
              }
              else {
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pUVar18,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 == '\0') goto label_042ef058;
                pUVar17 = (Utility_Color255_o *)
                          UnityEngine_Renderer__get_material((UnityEngine_Renderer_o *)x_03,(MethodInfo *)0x0)
                ;
                pUVar18 = pUStack_1e8;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pUVar17,(UnityEngine_Object_o *)pUVar18,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') goto label_042ef0ad;
              }
              uVar9 = uStack_18c;
              if (x_00 == (Utility_Color255_o *)0x0) goto label_042ef756;
              bVar11 = UnityEngine_Material__HasProperty_4dcb5b0
                                 ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0);
              pUVar18 = pUStack_1e8;
              if ((char)bVar11 != '\0') {
                pUVar17 = x_00;
                value = UnityEngine_Material__GetTexture
                                  ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0);
                if (pUVar18 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetTexture
                          ((UnityEngine_Material_o *)pUVar18,"_MainTex",value,(MethodInfo *)0x0);
              }
              if ((char)uVar9 == '\0') {
                pUVar17 = x_00;
                bVar11 = UnityEngine_Material__HasProperty_4dcb5b0
                                   ((UnityEngine_Material_o *)x_00,"_Color",(MethodInfo *)0x0);
                pUVar18 = pUStack_1e8;
                if ((char)bVar11 == '\0') {
                  if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                  fVar37 = (float)g_data_00d19fc0;
                  fVar36 = g_data_00d19fc0._4_4_;
                  auVar35 = _DAT_00d19fc0;
                }
                else {
                  UVar38 = UnityEngine_Material__GetColor
                                     ((UnityEngine_Material_o *)x_00,"_Color",(MethodInfo *)0x0);
                  fVar37 = UVar38.fields.b;
                  fVar36 = UVar38.fields.a;
                  auVar35._0_8_ = UVar38.fields._0_8_;
                  auVar35._8_8_ = extraout_XMM0_Qb_01;
                  pUVar17 = x_00;
                  if (pUVar18 == (Utility_Color255_o *)0x0) goto label_042ef756;
                }
              }
              else {
                pUVar17 = pUStack_1e8;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                auVar35._8_8_ = uStack_78;
                auVar35._0_8_ = uStack_80;
                pUVar18 = pUStack_1e8;
                fVar37 = (float)auStack_90._0_4_;
                fVar36 = (float)auStack_90._4_4_;
              }
              UVar38.fields._0_8_ = auVar35._0_8_;
              UVar38.fields.a = fVar36;
              UVar38.fields.b = fVar37;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUVar18,"_Color",UVar38,(MethodInfo *)0x0);
              auVar35 = _auStack_100;
              pUVar17 = pUStack_1e8;
              if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_00.fields.b = (float)auStack_100._0_4_;
              value_00.fields.a = (float)auStack_100._4_4_;
              value_00.fields.r = (float)uStack_f0;
              value_00.fields.g = uStack_f0._4_4_;
              _auStack_100 = auVar35;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_1e8,"_NeonColor",value_00,(MethodInfo *)0x0);
              auVar35 = _auStack_160;
              pUVar17 = pUStack_1e8;
              if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_01.fields.g = fStack_6c;
              value_01.fields.r = fStack_70;
              value_01.fields.b = (float)auStack_160._0_4_;
              value_01.fields.a = (float)auStack_160._4_4_;
              _auStack_160 = auVar35;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_1e8,"_GlowColor",value_01,(MethodInfo *)0x0);
              auVar35 = _auStack_170;
              pUVar17 = pUStack_1e8;
              if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
              value_02.fields.g = fStack_5c;
              value_02.fields.r = fStack_60;
              value_02.fields.b = (float)auStack_170._0_4_;
              value_02.fields.a = (float)auStack_170._4_4_;
              _auStack_170 = auVar35;
              UnityEngine_Material__SetColor
                        ((UnityEngine_Material_o *)pUStack_1e8,"_OutlineColor",value_02,(MethodInfo *)0x0);
              pUVar17 = pUStack_1e8;
              if ((((pUStack_1e8 == (Utility_Color255_o *)0x0) ||
                   (UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pUStack_1e8,"_GlowIntensity",fStack_1ac,(MethodInfo *)0x0
                              ), pUVar17 = pUStack_1e8, pUStack_1e8 == (Utility_Color255_o *)0x0)) ||
                  ((UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)pUStack_1e8,"_OutlineThickness",fStack_1b0,(MethodInfo *)0x0
                              ), pUVar17 = pUStack_1e8, pUStack_1e8 == (Utility_Color255_o *)0x0 ||
                   ((UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_1e8,"_OutlinePower",fStack_174,
                                (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                    pUStack_1e8 == (Utility_Color255_o *)0x0 ||
                    (UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_1e8,"_PulseSpeed",fStack_178,
                                (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                    pUStack_1e8 == (Utility_Color255_o *)0x0)))))) ||
                 ((UnityEngine_Material__SetFloat
                             ((UnityEngine_Material_o *)pUStack_1e8,"_PulseAmount",fStack_17c,(MethodInfo *)0x0)
                  , pUVar17 = pUStack_1e8, pUStack_1e8 == (Utility_Color255_o *)0x0 ||
                  (((((((UnityEngine_Material__SetFloat
                                   ((UnityEngine_Material_o *)pUStack_1e8,"_FlowSpeed",fStack_180,
                                    (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                        pUStack_1e8 == (Utility_Color255_o *)0x0 ||
                        (UnityEngine_Material__SetFloat
                                   ((UnityEngine_Material_o *)pUStack_1e8,"_FlowStrength",fStack_184,
                                    (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                        pUStack_1e8 == (Utility_Color255_o *)0x0)) ||
                       (UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_1e8,"_TexturePreserve",fStack_1b4,
                                   (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                       pUStack_1e8 == (Utility_Color255_o *)0x0)) ||
                      ((UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_1e8,"_EmissionFromTexture",fStack_1b8,
                                   (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                       pUStack_1e8 == (Utility_Color255_o *)0x0 ||
                       (UnityEngine_Material__SetFloat
                                  ((UnityEngine_Material_o *)pUStack_1e8,"_DetailScale",fStack_1bc,
                                   (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                       pUStack_1e8 == (Utility_Color255_o *)0x0)))) ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_1e8,"_DetailSpeed",fStack_1c0,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                     pUStack_1e8 == (Utility_Color255_o *)0x0)) ||
                    ((UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_1e8,"_SecondaryScroll",fStack_188,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                     pUStack_1e8 == (Utility_Color255_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_1e8,"_EdgeSpark",fStack_1c4,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                     pUStack_1e8 == (Utility_Color255_o *)0x0)))) ||
                   ((UnityEngine_Material__SetFloat
                               ((UnityEngine_Material_o *)pUStack_1e8,"_StyleMode",fStack_190,
                                (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                    pUStack_1e8 == (Utility_Color255_o *)0x0 ||
                    ((UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_1e8,"_StyleStrength",fStack_1c8,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                     pUStack_1e8 == (Utility_Color255_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)pUStack_1e8,"_IsHair",fStack_1cc,
                                 (MethodInfo *)0x0), pUVar17 = pUStack_1e8,
                     pUStack_1e8 == (Utility_Color255_o *)0x0)))))))))) goto label_042ef756;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_1e8,"_CullMode",fStack_1d0,(MethodInfo *)0x0);
              lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
              fVar37 = 2.0;
              if (lVar5 != 0) {
                lVar5 = *(long *)(lVar5 + 0x20);
                if (lVar5 == 0) goto label_042ef756;
                iVar25 = *(int *)(lVar5 + 0x14);
                fVar37 = 0.0;
                if (1 < iVar25) {
                  fVar37 = *(float *)(&g_data_00d1d3c8 + (ulong)(iVar25 < 3) * 4);
                }
              }
              pUVar17 = pUStack_1e8;
              if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_1e8,"_QualityLevel",fVar37,(MethodInfo *)0x0);
              pUVar17 = pUStack_1e8;
              if ((char)uVar9 == '\0') {
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_1e8,"_EmissionFromTexture",(float)auStack_b0._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_1e8,"_TexturePreserve",(float)auStack_c0._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_1e8,"_EdgeSpark",fStack_194,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_1e8,"_GlowIntensity",fStack_19c,(MethodInfo *)0x0);
                pSVar14 = "_StyleStrength";
                pUVar17 = (Utility_Color255_o *)0x0;
                fVar37 = fStack_1d4;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
              }
              else {
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_1e8,"_GlowIntensity",fStack_1a0,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_1e8,"_EmissionFromTexture",(float)auStack_d0._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_1e8,"_TexturePreserve",(float)auStack_e0._0_4_,
                           (MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_1e8,"_DetailScale",fStack_198,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_1e8,"_DetailSpeed",fStack_1a4,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_1e8,"_OutlineThickness",fStack_1a8,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                UnityEngine_Material__SetFloat
                          ((UnityEngine_Material_o *)pUStack_1e8,"_StyleStrength",fStack_1d4,(MethodInfo *)0x0);
                pUVar17 = (Utility_Color255_o *)0x0;
                if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
                pSVar14 = "_EdgeSpark";
                fVar37 = (float)auStack_a0._0_4_;
              }
              UnityEngine_Material__SetFloat
                        ((UnityEngine_Material_o *)pUStack_1e8,pSVar14,fVar37,(MethodInfo *)0x0);
              pUVar17 = (Utility_Color255_o *)0x0;
              if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__EnableKeyword
                        ((UnityEngine_Material_o *)pUStack_1e8,"_EMISSION",(MethodInfo *)0x0);
              pUVar17 = (Utility_Color255_o *)0x0;
              if (pUStack_1e8 == (Utility_Color255_o *)0x0) goto label_042ef756;
              UnityEngine_Material__set_globalIlluminationFlags
                        ((UnityEngine_Material_o *)pUStack_1e8,1,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_material
                        ((UnityEngine_Renderer_o *)x_03,(UnityEngine_Material_o *)pUStack_1e8,
                         (MethodInfo *)0x0);
              pUVar18 = x_03;
            }
          }
        }
        uVar22 = uVar22 + 1;
        uVar1 = (uint)pSStack_108->max_length;
        if ((long)(int)uVar1 <= (long)uVar22) {
          return (System_String_o *)pSStack_108;
        }
      } while (uVar22 < uVar1);
    }
  }
  pSVar14 = (System_String_o *)il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ade91 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ClothFactory);
    pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    g_data_057ade91 = '\x01';
  }
  if (*(char *)&pUVar18[0xf].monitor != '\0') {
    return pSVar14;
  }
  x = pUVar18[7].monitor;
  if (g_data_057adea2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adea2 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (System_String_c *)0x0;
  bVar11 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    UnityEngine_Object__Destroy_4e01c60(x,(MethodInfo *)0x0);
  }
  if (pUVar18[0xb].monitor != (Characters_HumanSetupMeshes_o *)0x0) {
    pSVar14 = Characters_HumanSetupMeshes__GetCapeMesh(pUVar18[0xb].monitor,(MethodInfo *)method_00);
    method_00 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    bVar11 = System_String__op_Inequality(pSVar14,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_01,bVar11);
    }
    if (*(Characters_HumanSetupTextures_o **)&pUVar18[0xb].fields != (Characters_HumanSetupTextures_o *)0x0) {
      reference = pUVar18[0xb].klass;
      pSVar19 = Characters_HumanSetupTextures__GetBrandTexture
                          (*(Characters_HumanSetupTextures_o **)&pUVar18[0xb].fields,(MethodInfo *)method_00);
      pMVar27 = extraout_RDX;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar27 = extraout_RDX_00;
      }
      pUVar20 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar19,0,pMVar27);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar21 = ClothFactory__GetCape((UnityEngine_GameObject_o *)reference,pSVar14,pUVar20,(MethodInfo *)0x0)
      ;
      pUVar18[7].monitor = pUVar21;
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_022b4080(&pUVar18[7].monitor,pUVar21);
      return pSVar14;
    }
  }
  pSVar31 = (System_String_c *)0x0;
  il2cpp_runtime_helper_022b2c90();
  ppSVar30 = (System_String_o **)pSVar31;
  if (g_data_057adebc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppSVar30 = &"character_cape_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebc = '\x01';
  }
  pcVar4 = (pSVar31->_1).name;
  if (((pcVar4 != (char *)0x0) && (lVar5 = *(long *)(pcVar4 + 0x1c8), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x70), lVar5 != 0)) {
    if (*(int *)(lVar5 + 0x14) == 0) {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar14 = System_String__Concat_3ae5ba0
                        ((System_String_o *)(pSVar31->_1).namespaze,"character_cape_0",(MethodInfo *)0x0);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar31 = (System_String_c *)ppSVar30;
  if (g_data_057adec3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_g");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_sc");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_mp");
    pSVar31 = (System_String_c *)&"Brand/aottg_hero_brand_ts";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec3 = '\x01';
  }
  pcVar4 = (((System_String_c *)ppSVar30)->_1).name;
  if (((pcVar4 != (char *)0x0) && (lVar5 = *(long *)(pcVar4 + 0x1c8), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x78), lVar5 != 0)) {
    uVar22 = (ulong)*(int *)(lVar5 + 0x14);
    ppuVar23 = &g_data_0524f380 + uVar22;
    if (3 < uVar22) {
      ppuVar23 = (undefined **)(g_data_057b9c00 + 0xb8);
    }
    return *(System_String_o **)*ppuVar23;
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar32 = (System_String_c **)pSVar31;
  if (g_data_057adeba == '\0') {
    ppSVar32 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeba = '\x01';
  }
  pcVar4 = (pSVar31->_1).name;
  if (((pcVar4 != (char *)0x0) &&
      (ppSVar32 = *(System_String_c ***)(pcVar4 + 0x1e0),
      (System_String_c *)ppSVar32 != (System_String_c *)0x0)) &&
     (pvVar6 = (((System_String_c *)ppSVar32)->_1).image, method_00 = "Texture",
     plVar24 = (long *)(**(code **)((long)pvVar6 + 0x1a8))
                                 (ppSVar32,"Texture",*(undefined8 *)((long)pvVar6 + 0x1b0)),
     plVar24 != (long *)0x0)) {
    pSVar14 = (System_String_o *)(**(code **)(*plVar24 + 0x1c8))(plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
    bVar11 = System_String__op_Equality
                       (pSVar14,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      pSVar14 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)&(pSVar31->_1).byval_arg.bits,pSVar14,(MethodInfo *)0x0);
      return pSVar14;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  str1 = ppSVar32;
  if (g_data_057adec5 == '\0') {
    str1 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec5 = '\x01';
  }
  pcVar4 = (((System_String_c *)ppSVar32)->_1).name;
  if (((pcVar4 != (char *)0x0) &&
      (str1 = *(System_String_c ***)(pcVar4 + 0x1e0), (System_String_c *)str1 != (System_String_c *)0x0)) &&
     (pvVar6 = (((System_String_c *)str1)->_1).image, method_00 = "Texture",
     plVar24 = (long *)(**(code **)((long)pvVar6 + 0x1a8))
                                 (str1,"Texture",*(undefined8 *)((long)pvVar6 + 0x1b0)),
     plVar24 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar24 + 0x1c8);
    pSVar14 = (System_String_o *)
              (*vtableDispatch)(plVar24,*(undefined8 *)(*plVar24 + 0x1d0),vtableDispatch);
    return pSVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Textures/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Materials/HumanHairMat");
    il2cpp_runtime_helper_023445d0(&"Tex");
    g_data_057adea8 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042efb9d;
label_042efc58:
    il2cpp_runtime_helper_02337ed0();
    pSVar33 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar33 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efdd6;
label_042efc74:
    method_00 = (System_String_c *)str1;
    bVar11 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (pSVar33,(Il2CppObject *)str1,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar11 != '\0') {
label_042efd96:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar14 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,MethodInfo_Material_get_Item);
        return pSVar14;
      }
      goto label_042efdd6;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar20 = (UnityEngine_Material_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar14,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar14 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    method_00 = (System_String_c *)
                System_String__Concat_3af7150
                          ("Human/Parts/Hairs/Textures/",(System_String_o *)str1,"Tex",(MethodInfo *)0x0);
    pSVar31 = (System_String_c *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar14,(System_String_o *)method_00,0,(MethodInfo *)0x0);
    if ((pSVar31 == (System_String_c *)0x0) || (method_00 = TypeInfo_Texture2D, (pSVar31->_1).image == TypeInfo_Texture2D)
       ) {
      if (pUVar20 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(pUVar20,(UnityEngine_Texture_o *)pSVar31,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = pSVar31;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          method_00 = (System_String_c *)str1;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1,(Il2CppObject *)pUVar20,
                     MethodInfo_Void_set_Item);
          goto label_042efd96;
        }
      }
      goto label_042efdd6;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042efc58;
label_042efb9d:
    pSVar33 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (pSVar33 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efc74;
label_042efdd6:
    pSVar31 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  ppSVar32 = (System_String_c **)pSVar31;
  if (g_data_057adebb == '\0') {
    ppSVar32 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  SVar7 = *(System_String_Fields *)&(pSVar31->_1).name;
  if ((SVar7 != (System_String_Fields)0x0) &&
     (ppSVar32 = *(System_String_c ***)((long)SVar7 + 0x1e0),
     (System_String_c *)ppSVar32 != (System_String_c *)0x0)) {
    pSVar28 = (((System_String_c *)ppSVar32)->_1).image;
    method_00 = "Cloth";
    cVar10 = (*(code *)pSVar28[1]._1.name)(ppSVar32,"Cloth",pSVar28[1]._1.namespaze);
    if (cVar10 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    SVar7 = *(System_String_Fields *)&(pSVar31->_1).name;
    if ((SVar7 != (System_String_Fields)0x0) &&
       (ppSVar32 = *(System_String_c ***)((long)SVar7 + 0x1e0),
       (System_String_c *)ppSVar32 != (System_String_c *)0x0)) {
      pSVar14 = *(System_String_o **)&(pSVar31->_1).byval_arg.bits;
      pSVar31 = (((System_String_c *)ppSVar32)->_1).image;
      method_00 = "Cloth";
      plVar24 = (long *)(*(pSVar31->vtable)._7_CompareTo.methodPtr)
                                  (ppSVar32,"Cloth",(pSVar31->vtable)._7_CompareTo.method);
      if (plVar24 != (long *)0x0) {
        pSVar19 = (System_String_o *)
                  (**(code **)(*plVar24 + 0x1c8))(plVar24,*(undefined8 *)(*plVar24 + 0x1d0));
        pSVar14 = System_String__Concat_3ae5ba0(pSVar14,pSVar19,(MethodInfo *)0x0);
        return pSVar14;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar31 = (System_String_c *)ppSVar32;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSVar31 = (System_String_c *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pIVar8 = (((System_String_c *)ppSVar32)->vtable)._9_GetTypeCode.methodPtr;
  if (pIVar8 == (Il2CppMethodPointer)0x0) {
    pSVar28 = (System_String_c *)0x0;
  }
  else {
    lVar5 = *(long *)(pIVar8 + 0xd0);
    if (lVar5 == 0) {
label_042f006e:
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pSVar31->vtable)._9_GetTypeCode.methodPtr != (Il2CppMethodPointer)0x0) {
        pSVar28 = pSVar31;
        bVar11 = Characters_HumanSetup__CanUseCharacterEffects
                           ((Characters_HumanSetup_o *)pSVar31,(MethodInfo *)method_00);
        pSVar14 = (System_String_o *)CONCAT44(extraout_var_03,bVar11);
        if ((char)bVar11 != '\0') {
          pIVar8 = (pSVar31->vtable)._9_GetTypeCode.methodPtr;
          if ((pIVar8 != (Il2CppMethodPointer)0x0) && (lVar5 = *(long *)(pIVar8 + 0xd0), lVar5 != 0)) {
            pSVar28 = *(System_String_c **)(lVar5 + 0x18);
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar12 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               ((System_String_o *)pSVar28,(MethodInfo *)0x0);
            pIVar8 = (pSVar31->vtable)._9_GetTypeCode.methodPtr;
            if ((pIVar8 != (Il2CppMethodPointer)0x0) && (lVar5 = *(long *)(pIVar8 + 0xe0), lVar5 != 0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               (*(System_String_o **)(lVar5 + 0x18),(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar31,
                         *(UnityEngine_GameObject_o **)&(pSVar31->_2).interfaces_count,iVar12,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar31,
                         *(UnityEngine_GameObject_o **)&(pSVar31->_2).naturalAligment,iVar12,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar31,(UnityEngine_GameObject_o *)pSVar31->static_fields
                         ,type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar31,(UnityEngine_GameObject_o *)pSVar31->rgctx_data,
                         type,0,in_R8);
              return extraout_RAX;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar14 = System_String__Concat_3ae5ba0
                              (*(System_String_o **)&(pSVar28->_1).this_arg.bits,"char_eyes",
                               (MethodInfo *)0x0);
          return pSVar14;
        }
      }
      return pSVar14;
    }
    pSVar28 = *(System_String_c **)(lVar5 + 0x18);
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    pSVar31 = pSVar28;
    iVar12 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                       ((System_String_o *)pSVar28,(MethodInfo *)0x0);
    if (iVar12 == 0) {
      pIVar8 = (((System_String_c *)ppSVar32)->vtable)._9_GetTypeCode.methodPtr;
      if ((pIVar8 == (Il2CppMethodPointer)0x0) || (lVar5 = *(long *)(pIVar8 + 0xe0), lVar5 == 0))
      goto label_042f006e;
      pSVar14 = *(System_String_o **)(lVar5 + 0x18);
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar28 = (System_String_c *)0x0;
      iVar12 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar14,(MethodInfo *)0x0);
      if (iVar12 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar11 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var_02,bVar11);
    }
    x_02 = (System_String_c *)
           UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)ppSVar32,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (System_String_c *)0x0;
    pSVar31 = x_02;
    bVar11 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar28 = (System_String_c *)CONCAT71((int7)((ulong)pSVar28 >> 8),1);
    if ((char)bVar11 != '\0') {
      if (x_02 == (System_String_c *)0x0) goto label_042f006e;
      if (*(char *)&(x_02->_1).typeMetadataHandle != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (System_String_o *)((ulong)pSVar28 & 0xffffffff);
}


// Characters.HumanSetupMeshes$$GetBodyMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBodyMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x42f10b0

System_String_o *
Characters_HumanSetupMeshes__GetBodyMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  Characters_HumanSetupMeshes_o *pCVar6;
  System_String_o *pSVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  Characters_HumanSetupMeshes_o *__this_00;
  UnityEngine_Material_o *__this_01;
  UnityEngine_MonoBehaviour_o *__this_02;
  UnityEngine_MonoBehaviour_c *pUVar10;
  System_Collections_Generic_Dictionary_object__object__o *pSVar11;
  System_String_o *extraout_RAX;
  System_Collections_Generic_HashSet_object__o *__this_03;
  char cVar12;
  Il2CppClass *pIVar13;
  MethodInfo *pMVar14;
  Characters_HumanSetupMeshes_o *pCVar15;
  Characters_HumanSetupMeshes_o *pCVar16;
  uint16_t local_1a;
  
  pCVar15 = __this;
  if (g_data_057adeb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Char_Last_Char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"_F");
    il2cpp_runtime_helper_023445d0(&"_uniform");
    il2cpp_runtime_helper_023445d0(&"_M");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"player");
    il2cpp_runtime_helper_023445d0(&"Uniform");
    pCVar15 = (Characters_HumanSetupMeshes_o *)&"_casual";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb5 = '\x01';
  }
  pCVar16 = "player";
  local_1a = 0;
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (pCVar15 = (Characters_HumanSetupMeshes_o *)(pCVar1->fields).CurrentCostume,
      pCVar15 != (Characters_HumanSetupMeshes_o *)0x0)) &&
     (method = "Type",
     pCVar6 = (Characters_HumanSetupMeshes_o *)
              (*pCVar15->klass[1]._1.this_arg.data)
                        (pCVar15,"Type",*(undefined8 *)&pCVar15->klass[1]._1.this_arg.bits),
     pCVar6 != (Characters_HumanSetupMeshes_o *)0x0)) {
    method = (MethodInfo *)pCVar6->klass[1]._1.parent;
    pSVar7 = (System_String_o *)(*(code *)pCVar6->klass[1]._1.declaringType)();
    pCVar15 = pCVar6;
    if (pSVar7 != (System_String_o *)0x0) {
      bVar5 = System_String__StartsWith(pSVar7,"Uniform",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        puVar8 = &"_casual";
      }
      else {
        puVar8 = &"_uniform";
      }
      method = (MethodInfo *)*puVar8;
      pSVar9 = System_String__Concat_3ae5ba0
                         ((System_String_o *)pCVar16,(System_String_o *)method,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._setup;
      pCVar15 = pCVar16;
      if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
          (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
         (pSVar3 = (pSVar2->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
        if ((pSVar3->fields)._value == 0) {
          puVar8 = &"_M";
        }
        else {
          puVar8 = &"_F";
        }
        pSVar9 = System_String__Concat_3ae5ba0(pSVar9,(System_String_o *)*puVar8,(MethodInfo *)0x0);
        local_1a = System_Linq_Enumerable__Last_char_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,MethodInfo_Char_Last_Char);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = System_Char__ToString((uint16_t)&local_1a,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat_3ae5ba0(pSVar9,pSVar7,(MethodInfo *)0x0);
        pSVar7 = System_String__Concat_3ae5ba0((__this->fields).CostumesPath,pSVar7,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar13 = (Il2CppClass *)method;
  pCVar16 = pCVar15;
  if (g_data_057adeb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"character_brand_arm_r_0");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"character_brand_chest_f_0");
    il2cpp_runtime_helper_023445d0(&"character_brand_chest_m_0");
    il2cpp_runtime_helper_023445d0(&"character_brand_back_m_0");
    il2cpp_runtime_helper_023445d0(&"Uniform");
    il2cpp_runtime_helper_023445d0(&"character_brand_back_f_0");
    pCVar16 = (Characters_HumanSetupMeshes_o *)&"character_brand_arm_l_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb6 = '\x01';
  }
  cVar12 = (char)pIVar13;
  pCVar1 = (pCVar15->fields)._setup;
  if ((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
     (pCVar16 = (Characters_HumanSetupMeshes_o *)(pCVar1->fields).CurrentCostume,
     pCVar16 == (Characters_HumanSetupMeshes_o *)0x0)) goto label_042f1475;
  pMVar14 = "Type";
  pCVar6 = (Characters_HumanSetupMeshes_o *)
           (*pCVar16->klass[1]._1.this_arg.data)
                     (pCVar16,"Type",*(undefined8 *)&pCVar16->klass[1]._1.this_arg.bits);
  cVar12 = (char)pMVar14;
  if (pCVar6 == (Characters_HumanSetupMeshes_o *)0x0) goto label_042f1475;
  cVar12 = (char)pCVar6->klass[1]._1.parent;
  __this_00 = (Characters_HumanSetupMeshes_o *)(*(code *)pCVar6->klass[1]._1.declaringType)();
  pCVar16 = pCVar6;
  if (__this_00 == (Characters_HumanSetupMeshes_o *)0x0) goto label_042f1475;
  pSVar7 = "Uniform";
  bVar5 = System_String__StartsWith((System_String_o *)__this_00,"Uniform",(MethodInfo *)0x0);
  cVar12 = (char)pSVar7;
  if ((char)bVar5 == '\0') {
switchD_042f13af_default:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pCVar16 = __this_00;
  switch((int)method) {
  case 1:
    pSVar7 = (pCVar15->fields).CostumesPath;
    puVar8 = &"character_brand_arm_l_0";
    goto label_042f1464;
  case 2:
    pSVar7 = (pCVar15->fields).CostumesPath;
    puVar8 = &"character_brand_arm_r_0";
label_042f1464:
    pSVar7 = System_String__Concat_3ae5ba0(pSVar7,(System_String_o *)*puVar8,(MethodInfo *)0x0);
    return pSVar7;
  case 3:
    pCVar1 = (pCVar15->fields)._setup;
    if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
        (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      pSVar7 = (pCVar15->fields).CostumesPath;
      if ((pSVar3->fields)._value == 0) {
        puVar8 = &"character_brand_chest_m_0";
      }
      else {
        puVar8 = &"character_brand_chest_f_0";
      }
      goto label_042f1464;
    }
    break;
  case 4:
    pCVar1 = (pCVar15->fields)._setup;
    if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
        (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      pSVar7 = (pCVar15->fields).CostumesPath;
      if ((pSVar3->fields)._value == 0) {
        puVar8 = &"character_brand_back_m_0";
      }
      else {
        puVar8 = &"character_brand_back_f_0";
      }
      goto label_042f1464;
    }
    break;
  default:
    goto switchD_042f13af_default;
  }
label_042f1475:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Face/Materials/");
    il2cpp_runtime_helper_023445d0(&"HumanFaceMat");
    il2cpp_runtime_helper_023445d0(&"HumanFaceUntiledMat");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Face/Textures/");
    g_data_057adea9 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042f1574;
label_042f14ad:
    pSVar11 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042f14ad;
label_042f1574:
    il2cpp_runtime_helper_02337ed0();
    pSVar11 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar11,(Il2CppObject *)pCVar16,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
      if (cVar12 == '\0') {
        puVar8 = &"HumanFaceMat";
      }
      else {
        puVar8 = &"HumanFaceUntiledMat";
      }
      pSVar7 = (System_String_o *)*puVar8;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      pSVar7 = System_String__Concat_3ae5ba0("Human/Parts/Face/Materials/",pSVar7,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (UnityEngine_Material_o *)
                  ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar9,pSVar7,1,MethodInfo_Material_InstantiateAsset_Material);
      pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      pSVar9 = System_String__Concat_3ae5ba0("Human/Parts/Face/Textures/",(System_String_o *)pCVar16,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_MonoBehaviour_o *)
                  ApplicationManagers_ResourceManager__LoadAsset(pSVar7,pSVar9,0,(MethodInfo *)0x0);
      if ((__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) &&
         ((UnityEngine_Texture_c *)__this_02->klass != TypeInfo_Texture2D)) goto label_042f1712;
      if (__this_01 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(__this_01,(UnityEngine_Texture_o *)__this_02,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
        if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar11,(Il2CppObject *)pCVar16,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
          goto label_042f16cf;
        }
      }
    }
    else {
label_042f16cf:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
      if (pSVar11 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar7 = (System_String_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar11,(Il2CppObject *)pCVar16,MethodInfo_Material_get_Item);
        return pSVar7;
      }
    }
  }
  __this_02 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_022b2c90();
label_042f1712:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adea3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Renderer_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Renderer_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Fire2");
    il2cpp_runtime_helper_023445d0(&"Lightning1");
    il2cpp_runtime_helper_023445d0(&"Fire1");
    g_data_057adea3 = '\x01';
  }
  pUVar10 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (pUVar10 != (UnityEngine_MonoBehaviour_c *)0x0) {
    if (*(int *)&(pUVar10->_1).namespaze != 0) {
      (pUVar10->_1).byval_arg.data = "Fire1";
      il2cpp_runtime_helper_022b4080(&(pUVar10->_1).byval_arg);
      if (1 < *(uint *)&(pUVar10->_1).namespaze) {
        *(undefined8 *)&(pUVar10->_1).byval_arg.bits = "Fire2";
        il2cpp_runtime_helper_022b4080(&(pUVar10->_1).byval_arg.bits);
        if (2 < *(uint *)&(pUVar10->_1).namespaze) {
          (pUVar10->_1).this_arg.data = "Lightning1";
          il2cpp_runtime_helper_022b4080(&(pUVar10->_1).this_arg);
          __this_02[0xd].klass = pUVar10;
          il2cpp_runtime_helper_022b4080(__this_02 + 0xd,pUVar10);
          pSVar11 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Renderer_Material);
          System_Collections_Generic_Dictionary_object__object____ctor(pSVar11,MethodInfo_Dictionary_2_UnityEngine_Renderer_UnityEngine_Material);
          __this_02[0xf].fields.m_CachedPtr = (intptr_t)pSVar11;
          il2cpp_runtime_helper_022b4080(&__this_02[0xf].fields);
          UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
          return extraout_RAX;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    g_data_057adea4 = '\x01';
  }
  __this_03 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_03,MethodInfo_HashSet_1_System_String);
  lVar4 = *(long *)(TypeInfo_HumanSetup + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar4 + 0x40) = __this_03;
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_022b4080(lVar4 + 0x40,__this_03);
  return pSVar7;
}


// Characters.HumanSetupMeshes$$GetBrandMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBrandMesh (Characters_HumanSetupMeshes_o* __this, int32_t brand, const MethodInfo* method);
// 0x42f12a0

System_String_o *
Characters_HumanSetupMeshes__GetBrandMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t brand,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  long lVar4;
  bool_conflict bVar5;
  Characters_HumanSetupMeshes_o *pCVar6;
  Characters_HumanSetupMeshes_o *__this_00;
  undefined8 *puVar7;
  UnityEngine_Material_o *__this_01;
  System_String_o *pSVar8;
  UnityEngine_MonoBehaviour_o *__this_02;
  UnityEngine_MonoBehaviour_c *pUVar9;
  System_Collections_Generic_Dictionary_object__object__o *pSVar10;
  System_String_o *extraout_RAX;
  System_Collections_Generic_HashSet_object__o *__this_03;
  System_String_o *pSVar11;
  char cVar12;
  undefined8 uVar13;
  Characters_HumanSetupMeshes_o *pCVar14;
  
  cVar12 = (char)brand;
  pCVar14 = __this;
  if (g_data_057adeb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"character_brand_arm_r_0");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"character_brand_chest_f_0");
    il2cpp_runtime_helper_023445d0(&"character_brand_chest_m_0");
    il2cpp_runtime_helper_023445d0(&"character_brand_back_m_0");
    il2cpp_runtime_helper_023445d0(&"Uniform");
    il2cpp_runtime_helper_023445d0(&"character_brand_back_f_0");
    pCVar14 = (Characters_HumanSetupMeshes_o *)&"character_brand_arm_l_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb6 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
     (pCVar14 = (Characters_HumanSetupMeshes_o *)(pCVar1->fields).CurrentCostume,
     pCVar14 == (Characters_HumanSetupMeshes_o *)0x0)) goto label_042f1475;
  uVar13 = "Type";
  pCVar6 = (Characters_HumanSetupMeshes_o *)
           (*(((System_String_c *)pCVar14->klass)->vtable)._7_CompareTo.methodPtr)
                     (pCVar14,"Type",(((System_String_c *)pCVar14->klass)->vtable)._7_CompareTo.method);
  cVar12 = (char)uVar13;
  if (pCVar6 == (Characters_HumanSetupMeshes_o *)0x0) goto label_042f1475;
  cVar12 = (char)(((System_String_c *)pCVar6->klass)->vtable)._9_GetTypeCode.method;
  __this_00 = (Characters_HumanSetupMeshes_o *)
              (*(((System_String_c *)pCVar6->klass)->vtable)._9_GetTypeCode.methodPtr)();
  pCVar14 = pCVar6;
  if (__this_00 == (Characters_HumanSetupMeshes_o *)0x0) goto label_042f1475;
  pSVar11 = "Uniform";
  bVar5 = System_String__StartsWith((System_String_o *)__this_00,"Uniform",(MethodInfo *)0x0);
  cVar12 = (char)pSVar11;
  if ((char)bVar5 == '\0') {
switchD_042f13af_default:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pCVar14 = __this_00;
  switch(brand) {
  case 1:
    pSVar11 = (__this->fields).CostumesPath;
    puVar7 = &"character_brand_arm_l_0";
    goto label_042f1464;
  case 2:
    pSVar11 = (__this->fields).CostumesPath;
    puVar7 = &"character_brand_arm_r_0";
label_042f1464:
    pSVar11 = System_String__Concat_3ae5ba0(pSVar11,(System_String_o *)*puVar7,(MethodInfo *)0x0);
    return pSVar11;
  case 3:
    pCVar1 = (__this->fields)._setup;
    if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
        (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      pSVar11 = (__this->fields).CostumesPath;
      if ((pSVar3->fields)._value == 0) {
        puVar7 = &"character_brand_chest_m_0";
      }
      else {
        puVar7 = &"character_brand_chest_f_0";
      }
      goto label_042f1464;
    }
    break;
  case 4:
    pCVar1 = (__this->fields)._setup;
    if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
        (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      pSVar11 = (__this->fields).CostumesPath;
      if ((pSVar3->fields)._value == 0) {
        puVar7 = &"character_brand_back_m_0";
      }
      else {
        puVar7 = &"character_brand_back_f_0";
      }
      goto label_042f1464;
    }
    break;
  default:
    goto switchD_042f13af_default;
  }
label_042f1475:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Face/Materials/");
    il2cpp_runtime_helper_023445d0(&"HumanFaceMat");
    il2cpp_runtime_helper_023445d0(&"HumanFaceUntiledMat");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Face/Textures/");
    g_data_057adea9 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042f1574;
label_042f14ad:
    pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042f14ad;
label_042f1574:
    il2cpp_runtime_helper_02337ed0();
    pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar10,(Il2CppObject *)pCVar14,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar5 == '\0') {
      if (cVar12 == '\0') {
        puVar7 = &"HumanFaceMat";
      }
      else {
        puVar7 = &"HumanFaceUntiledMat";
      }
      pSVar11 = (System_String_o *)*puVar7;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      pSVar11 = System_String__Concat_3ae5ba0("Human/Parts/Face/Materials/",pSVar11,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (UnityEngine_Material_o *)
                  ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar8,pSVar11,1,MethodInfo_Material_InstantiateAsset_Material)
      ;
      pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      pSVar8 = System_String__Concat_3ae5ba0("Human/Parts/Face/Textures/",(System_String_o *)pCVar14,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_MonoBehaviour_o *)
                  ApplicationManagers_ResourceManager__LoadAsset(pSVar11,pSVar8,0,(MethodInfo *)0x0);
      if ((__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) &&
         ((UnityEngine_Texture_c *)__this_02->klass != TypeInfo_Texture2D)) goto label_042f1712;
      if (__this_01 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(__this_01,(UnityEngine_Texture_o *)__this_02,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
        if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar10,(Il2CppObject *)pCVar14,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
          goto label_042f16cf;
        }
      }
    }
    else {
label_042f16cf:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar10 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
      if (pSVar10 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar11 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar10,(Il2CppObject *)pCVar14,MethodInfo_Material_get_Item);
        return pSVar11;
      }
    }
  }
  __this_02 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_022b2c90();
label_042f1712:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adea3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Renderer_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Renderer_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Fire2");
    il2cpp_runtime_helper_023445d0(&"Lightning1");
    il2cpp_runtime_helper_023445d0(&"Fire1");
    g_data_057adea3 = '\x01';
  }
  pUVar9 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (pUVar9 != (UnityEngine_MonoBehaviour_c *)0x0) {
    if (*(int *)&(pUVar9->_1).namespaze != 0) {
      (pUVar9->_1).byval_arg.data = "Fire1";
      il2cpp_runtime_helper_022b4080(&(pUVar9->_1).byval_arg);
      if (1 < *(uint *)&(pUVar9->_1).namespaze) {
        *(undefined8 *)&(pUVar9->_1).byval_arg.bits = "Fire2";
        il2cpp_runtime_helper_022b4080(&(pUVar9->_1).byval_arg.bits);
        if (2 < *(uint *)&(pUVar9->_1).namespaze) {
          (pUVar9->_1).this_arg.data = "Lightning1";
          il2cpp_runtime_helper_022b4080(&(pUVar9->_1).this_arg);
          __this_02[0xd].klass = pUVar9;
          il2cpp_runtime_helper_022b4080(__this_02 + 0xd,pUVar9);
          pSVar10 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Renderer_Material);
          System_Collections_Generic_Dictionary_object__object____ctor(pSVar10,MethodInfo_Dictionary_2_UnityEngine_Renderer_UnityEngine_Material);
          __this_02[0xf].fields.m_CachedPtr = (intptr_t)pSVar10;
          il2cpp_runtime_helper_022b4080(&__this_02[0xf].fields);
          UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
          return extraout_RAX;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    g_data_057adea4 = '\x01';
  }
  __this_03 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_03,MethodInfo_HashSet_1_System_String);
  lVar4 = *(long *)(TypeInfo_HumanSetup + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar4 + 0x40) = __this_03;
  pSVar11 = (System_String_o *)il2cpp_runtime_helper_022b4080(lVar4 + 0x40,__this_03);
  return pSVar11;
}


// Characters.HumanSetupMeshes$$GetEyeMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetEyeMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x42f01a0

System_String_o *
Characters_HumanSetupMeshes__GetEyeMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057adeb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"char_eyes");
    g_data_057adeb7 = '\x01';
  }
  pSVar1 = System_String__Concat_3ae5ba0((__this->fields).FacePath,"char_eyes",(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupMeshes$$GetFaceMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetFaceMesh (Characters_HumanSetupMeshes_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x42f02f0

System_String_o *
Characters_HumanSetupMeshes__GetFaceMesh
          (Characters_HumanSetupMeshes_o *__this,System_String_o *prefab,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (g_data_057adeb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"char_face");
    g_data_057adeb8 = '\x01';
  }
  bVar1 = System_String__op_Inequality
                    (prefab,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    prefab = "char_face";
  }
  pSVar2 = System_String__Concat_3ae5ba0((__this->fields).FacePath,prefab,(MethodInfo *)0x0);
  return pSVar2;
}


// Characters.HumanSetupMeshes$$GetGlassMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetGlassMesh (Characters_HumanSetupMeshes_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x42f0360

System_String_o *
Characters_HumanSetupMeshes__GetGlassMesh
          (Characters_HumanSetupMeshes_o *__this,System_String_o *prefab,MethodInfo *method)

{
  int32_t destPos;
  int iVar1;
  bool bVar2;
  bool_conflict bVar3;
  MethodInfo *dest;
  MethodInfo *src;
  undefined8 uVar4;
  undefined4 extraout_var;
  MethodInfo *method_00;
  undefined8 in_RCX;
  
  if (g_data_057adeb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"char_glasses");
    g_data_057adeb9 = '\x01';
  }
  bVar3 = System_String__op_Inequality
                    (prefab,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  src = (MethodInfo *)(__this->fields).FacePath;
  if ((char)bVar3 == '\0') {
    prefab = (System_String_o *)"char_glasses";
  }
  if ((src == (MethodInfo *)0x0) || (((System_String_Fields *)&src->invoker_method)->_stringLength == 0)) {
    bVar2 = true;
  }
  else {
    bVar2 = false;
  }
  if (((MethodInfo *)prefab == (MethodInfo *)0x0) || (*(int *)&((MethodInfo *)prefab)->invoker_method == 0)) {
    method_00 = (MethodInfo *)CONCAT71((int7)((ulong)in_RCX >> 8),1);
  }
  else {
    method_00 = (MethodInfo *)0x0;
  }
  if (bVar2) {
    if ((char)method_00 == '\0') {
      return (System_String_o *)(MethodInfo *)prefab;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if ((char)method_00 == '\0') {
    if ((src == (MethodInfo *)0x0) || ((MethodInfo *)prefab == (MethodInfo *)0x0)) {
      uVar4 = il2cpp_runtime_helper_022b2c90(src,prefab,0);
      if (src == (MethodInfo *)prefab) {
        return (System_String_o *)CONCAT71((int7)((ulong)uVar4 >> 8),1);
      }
      if (((src != (MethodInfo *)0x0) && ((MethodInfo *)prefab != (MethodInfo *)0x0)) &&
         (iVar1 = ((System_String_Fields *)&src->invoker_method)->_stringLength,
         iVar1 == ((System_String_Fields *)&((MethodInfo *)prefab)->invoker_method)->_stringLength)) {
        bVar3 = System_SpanHelpers__SequenceEqual
                          ((uint8_t *)&((System_String_Fields *)&src->invoker_method)->_firstChar,
                           (uint8_t *)
                           &((System_String_Fields *)&((MethodInfo *)prefab)->invoker_method)->_firstChar,
                           (long)iVar1 * 2,(MethodInfo *)0x0);
        return (System_String_o *)CONCAT44(extraout_var,bVar3);
      }
      return (System_String_o *)0x0;
    }
    destPos = ((System_String_Fields *)&src->invoker_method)->_stringLength;
    dest = (MethodInfo *)
           il2cpp_runtime_helper_023020c0(*(int *)&((MethodInfo *)prefab)->invoker_method + destPos,(MethodInfo *)prefab);
    System_String__FillStringChecked((System_String_o *)dest,0,(System_String_o *)src,method_00);
    System_String__FillStringChecked((System_String_o *)dest,destPos,prefab,method_00);
    src = dest;
  }
  return (System_String_o *)src;
}


// Characters.HumanSetupMeshes$$GetHairMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHairMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x42efa30

System_String_o *
Characters_HumanSetupMeshes__GetHairMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  void *pvVar2;
  char *pcVar3;
  code *vtableDispatch;
  System_String_Fields SVar4;
  Il2CppMethodPointer pIVar5;
  long lVar6;
  char cVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  int32_t type;
  long *plVar10;
  System_String_o *pSVar11;
  UnityEngine_Material_o *__this_00;
  System_String_c *pSVar12;
  System_String_o *str1;
  System_String_c *x;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX;
  System_String_c *pSVar13;
  System_String_c **ppSVar14;
  System_String_c **str1_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  MethodInfo *in_R8;
  
  ppSVar14 = (System_String_c **)__this;
  if (g_data_057adeba == '\0') {
    ppSVar14 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeba = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (ppSVar14 = (System_String_c **)(pCVar1->fields).CurrentHair,
      (System_String_c *)ppSVar14 != (System_String_c *)0x0)) &&
     (pvVar2 = (((System_String_c *)ppSVar14)->_1).image, method = (MethodInfo *)"Texture",
     plVar10 = (long *)(**(code **)((long)pvVar2 + 0x1a8))
                                 (ppSVar14,"Texture",*(undefined8 *)((long)pvVar2 + 0x1b0)),
     plVar10 != (long *)0x0)) {
    pSVar11 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
    bVar8 = System_String__op_Equality
                      (pSVar11,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      pSVar11 = System_String__Concat_3ae5ba0((__this->fields).HairsPath,pSVar11,(MethodInfo *)0x0);
      return pSVar11;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  str1_00 = ppSVar14;
  if (g_data_057adec5 == '\0') {
    str1_00 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec5 = '\x01';
  }
  pcVar3 = (((System_String_c *)ppSVar14)->_1).name;
  if (((pcVar3 != (char *)0x0) &&
      (str1_00 = *(System_String_c ***)(pcVar3 + 0x1e0), (System_String_c *)str1_00 != (System_String_c *)0x0)
      ) && (pvVar2 = (((System_String_c *)str1_00)->_1).image, method = (MethodInfo *)"Texture",
           plVar10 = (long *)(**(code **)((long)pvVar2 + 0x1a8))
                                       (str1_00,"Texture",*(undefined8 *)((long)pvVar2 + 0x1b0)),
           plVar10 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar10 + 0x1c8);
    pSVar11 = (System_String_o *)
              (*vtableDispatch)(plVar10,*(undefined8 *)(*plVar10 + 0x1d0),vtableDispatch);
    return pSVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Textures/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Materials/HumanHairMat");
    il2cpp_runtime_helper_023445d0(&"Tex");
    g_data_057adea8 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042efb9d;
label_042efc58:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efdd6;
label_042efc74:
    method = (MethodInfo *)str1_00;
    bVar8 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (__this_01,(Il2CppObject *)str1_00,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar8 != '\0') {
label_042efd96:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar11 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1_00,MethodInfo_Material_get_Item);
        return pSVar11;
      }
      goto label_042efdd6;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (UnityEngine_Material_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          (pSVar11,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    method = (MethodInfo *)
             System_String__Concat_3af7150
                       ("Human/Parts/Hairs/Textures/",(System_String_o *)str1_00,"Tex",(MethodInfo *)0x0);
    pSVar12 = (System_String_c *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar11,(System_String_o *)method,0,(MethodInfo *)0x0);
    if ((pSVar12 == (System_String_c *)0x0) ||
       (method = (MethodInfo *)TypeInfo_Texture2D, (pSVar12->_1).image == TypeInfo_Texture2D)) {
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(__this_00,(UnityEngine_Texture_o *)pSVar12,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)pSVar12;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          method = (MethodInfo *)str1_00;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1_00,(Il2CppObject *)__this_00,
                     MethodInfo_Void_set_Item);
          goto label_042efd96;
        }
      }
      goto label_042efdd6;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042efc58;
label_042efb9d:
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efc74;
label_042efdd6:
    pSVar12 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  ppSVar14 = (System_String_c **)pSVar12;
  if (g_data_057adebb == '\0') {
    ppSVar14 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  SVar4 = *(System_String_Fields *)&(pSVar12->_1).name;
  if ((SVar4 != (System_String_Fields)0x0) &&
     (ppSVar14 = *(System_String_c ***)((long)SVar4 + 0x1e0),
     (System_String_c *)ppSVar14 != (System_String_c *)0x0)) {
    pSVar13 = (((System_String_c *)ppSVar14)->_1).image;
    method = (MethodInfo *)"Cloth";
    cVar7 = (*(code *)pSVar13[1]._1.name)(ppSVar14,"Cloth",pSVar13[1]._1.namespaze);
    if (cVar7 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    SVar4 = *(System_String_Fields *)&(pSVar12->_1).name;
    if ((SVar4 != (System_String_Fields)0x0) &&
       (ppSVar14 = *(System_String_c ***)((long)SVar4 + 0x1e0),
       (System_String_c *)ppSVar14 != (System_String_c *)0x0)) {
      pSVar11 = *(System_String_o **)&(pSVar12->_1).byval_arg.bits;
      pSVar12 = (((System_String_c *)ppSVar14)->_1).image;
      method = (MethodInfo *)"Cloth";
      plVar10 = (long *)(*(pSVar12->vtable)._7_CompareTo.methodPtr)
                                  (ppSVar14,"Cloth",(pSVar12->vtable)._7_CompareTo.method);
      if (plVar10 != (long *)0x0) {
        str1 = (System_String_o *)(**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
        pSVar11 = System_String__Concat_3ae5ba0(pSVar11,str1,(MethodInfo *)0x0);
        return pSVar11;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = (System_String_c *)ppSVar14;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSVar12 = (System_String_c *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pIVar5 = (((System_String_c *)ppSVar14)->vtable)._9_GetTypeCode.methodPtr;
  if (pIVar5 == (Il2CppMethodPointer)0x0) {
    pSVar13 = (System_String_c *)0x0;
  }
  else {
    lVar6 = *(long *)(pIVar5 + 0xd0);
    if (lVar6 == 0) {
label_042f006e:
      pSVar11 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pSVar12->vtable)._9_GetTypeCode.methodPtr != (Il2CppMethodPointer)0x0) {
        pSVar13 = pSVar12;
        bVar8 = Characters_HumanSetup__CanUseCharacterEffects((Characters_HumanSetup_o *)pSVar12,method);
        pSVar11 = (System_String_o *)CONCAT44(extraout_var_00,bVar8);
        if ((char)bVar8 != '\0') {
          pIVar5 = (pSVar12->vtable)._9_GetTypeCode.methodPtr;
          if ((pIVar5 != (Il2CppMethodPointer)0x0) && (lVar6 = *(long *)(pIVar5 + 0xd0), lVar6 != 0)) {
            pSVar13 = *(System_String_c **)(lVar6 + 0x18);
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar9 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                              ((System_String_o *)pSVar13,(MethodInfo *)0x0);
            pIVar5 = (pSVar12->vtable)._9_GetTypeCode.methodPtr;
            if ((pIVar5 != (Il2CppMethodPointer)0x0) && (lVar6 = *(long *)(pIVar5 + 0xe0), lVar6 != 0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               (*(System_String_o **)(lVar6 + 0x18),(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar12,
                         *(UnityEngine_GameObject_o **)&(pSVar12->_2).interfaces_count,iVar9,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar12,
                         *(UnityEngine_GameObject_o **)&(pSVar12->_2).naturalAligment,iVar9,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar12,(UnityEngine_GameObject_o *)pSVar12->static_fields
                         ,type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar12,(UnityEngine_GameObject_o *)pSVar12->rgctx_data,
                         type,0,in_R8);
              return extraout_RAX;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar11 = System_String__Concat_3ae5ba0
                              (*(System_String_o **)&(pSVar13->_1).this_arg.bits,"char_eyes",
                               (MethodInfo *)0x0);
          return pSVar11;
        }
      }
      return pSVar11;
    }
    pSVar13 = *(System_String_c **)(lVar6 + 0x18);
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar12 = pSVar13;
    iVar9 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                      ((System_String_o *)pSVar13,(MethodInfo *)0x0);
    if (iVar9 == 0) {
      pIVar5 = (((System_String_c *)ppSVar14)->vtable)._9_GetTypeCode.methodPtr;
      if ((pIVar5 == (Il2CppMethodPointer)0x0) || (lVar6 = *(long *)(pIVar5 + 0xe0), lVar6 == 0))
      goto label_042f006e;
      pSVar11 = *(System_String_o **)(lVar6 + 0x18);
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = (System_String_c *)0x0;
      iVar9 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar11,(MethodInfo *)0x0);
      if (iVar9 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar8 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var,bVar8);
    }
    x = (System_String_c *)
        UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)ppSVar14,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar12 = x;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar13 = (System_String_c *)CONCAT71((int7)((ulong)pSVar13 >> 8),1);
    if ((char)bVar8 != '\0') {
      if (x == (System_String_c *)0x0) goto label_042f006e;
      if (*(char *)&(x->_1).typeMetadataHandle != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (System_String_o *)((ulong)pSVar13 & 0xffffffff);
}


// Characters.HumanSetupMeshes$$GetHairClothMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHairClothMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x42efdf0

System_String_o *
Characters_HumanSetupMeshes__GetHairClothMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  char cVar3;
  int32_t iVar4;
  bool_conflict bVar5;
  int32_t type;
  long *plVar6;
  System_String_o *str1;
  System_String_o *pSVar7;
  Characters_HumanSetup_o *x;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX;
  Characters_HumanSetup_o *pCVar8;
  MethodInfo **__this_00;
  Characters_HumanSetup_o *pCVar9;
  MethodInfo *in_R8;
  
  __this_00 = (MethodInfo **)__this;
  if (g_data_057adebb == '\0') {
    __this_00 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  pCVar9 = (__this->fields)._setup;
  if ((pCVar9 != (Characters_HumanSetup_o *)0x0) &&
     (__this_00 = (MethodInfo **)(pCVar9->fields).CurrentHair,
     (Characters_HumanSetup_o *)__this_00 != (Characters_HumanSetup_o *)0x0)) {
    method = "Cloth";
    cVar3 = (*(code *)((System_String_c *)((Characters_HumanSetup_o *)__this_00)->klass)[1]._1.name)
                      (__this_00,"Cloth",
                       ((System_String_c *)((Characters_HumanSetup_o *)__this_00)->klass)[1]._1.namespaze);
    if (cVar3 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pCVar9 = (__this->fields)._setup;
    if ((pCVar9 != (Characters_HumanSetup_o *)0x0) &&
       (__this_00 = (MethodInfo **)(pCVar9->fields).CurrentHair,
       (Characters_HumanSetup_o *)__this_00 != (Characters_HumanSetup_o *)0x0)) {
      pSVar7 = (__this->fields).HairsPath;
      method = "Cloth";
      plVar6 = (long *)(*(((System_String_c *)((Characters_HumanSetup_o *)__this_00)->klass)->vtable).
                         _7_CompareTo.methodPtr)
                                 (__this_00,"Cloth",
                                  (((System_String_c *)((Characters_HumanSetup_o *)__this_00)->klass)->vtable)
                                  ._7_CompareTo.method);
      if (plVar6 != (long *)0x0) {
        str1 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
        pSVar7 = System_String__Concat_3ae5ba0(pSVar7,str1,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar9 = (Characters_HumanSetup_o *)__this_00;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pCVar9 = (Characters_HumanSetup_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pSVar1 = (((Characters_HumanSetup_o *)__this_00)->fields).CustomSet;
  if (pSVar1 == (Settings_HumanCustomSet_o *)0x0) {
    pCVar8 = (Characters_HumanSetup_o *)0x0;
  }
  else {
    pSVar2 = (pSVar1->fields).HairEffect;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) {
label_042f006e:
      pSVar7 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pCVar9->fields).CustomSet != (Settings_HumanCustomSet_o *)0x0) {
        pCVar8 = pCVar9;
        bVar5 = Characters_HumanSetup__CanUseCharacterEffects(pCVar9,method);
        pSVar7 = (System_String_o *)CONCAT44(extraout_var_00,bVar5);
        if ((char)bVar5 != '\0') {
          pSVar1 = (pCVar9->fields).CustomSet;
          if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
             (pSVar2 = (pSVar1->fields).HairEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) {
            pCVar8 = (Characters_HumanSetup_o *)(pSVar2->fields)._value;
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar4 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                              ((System_String_o *)pCVar8,(MethodInfo *)0x0);
            pSVar1 = (pCVar9->fields).CustomSet;
            if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
               (pSVar2 = (pSVar1->fields).BladeEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               ((pSVar2->fields)._value,(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        (pCVar9,(pCVar9->fields)._part_hair,iVar4,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        (pCVar9,(pCVar9->fields)._part_hair_1,iVar4,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        (pCVar9,(pCVar9->fields)._part_blade_l,type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        (pCVar9,(pCVar9->fields)._part_blade_r,type,0,in_R8);
              return extraout_RAX;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar7 = System_String__Concat_3ae5ba0
                             ((System_String_o *)(pCVar8->fields)._mount_gas_r,"char_eyes",(MethodInfo *)0x0)
          ;
          return pSVar7;
        }
      }
      return pSVar7;
    }
    pCVar8 = (Characters_HumanSetup_o *)(pSVar2->fields)._value;
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pCVar9 = pCVar8;
    iVar4 = PatreonEffects_CharacterEffectPresets__ParseOrDefault((System_String_o *)pCVar8,(MethodInfo *)0x0)
    ;
    if (iVar4 == 0) {
      pSVar1 = (((Characters_HumanSetup_o *)__this_00)->fields).CustomSet;
      if ((pSVar1 == (Settings_HumanCustomSet_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).BladeEffect, pSVar2 == (Settings_StringSetting_o *)0x0))
      goto label_042f006e;
      pSVar7 = (pSVar2->fields)._value;
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar8 = (Characters_HumanSetup_o *)0x0;
      iVar4 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar7,(MethodInfo *)0x0);
      if (iVar4 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar5 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var,bVar5);
    }
    x = (Characters_HumanSetup_o *)
        UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_00,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pCVar9 = x;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pCVar8 = (Characters_HumanSetup_o *)CONCAT71((int7)((ulong)pCVar8 >> 8),1);
    if ((char)bVar5 != '\0') {
      if (x == (Characters_HumanSetup_o *)0x0) goto label_042f006e;
      if (*(char *)&(x->fields)._mount_ts_r != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (System_String_o *)((ulong)pCVar8 & 0xffffffff);
}


// Characters.HumanSetupMeshes$$GetCapeMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetCapeMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x42ef8f0

System_String_o *
Characters_HumanSetupMeshes__GetCapeMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  char *pcVar4;
  long lVar5;
  void *pvVar6;
  code *vtableDispatch;
  System_String_Fields SVar7;
  Il2CppMethodPointer pIVar8;
  char cVar9;
  bool_conflict bVar10;
  int32_t iVar11;
  int32_t type;
  System_String_o *pSVar12;
  ulong uVar13;
  undefined **ppuVar14;
  long *plVar15;
  UnityEngine_Material_o *__this_00;
  System_String_o *str1;
  System_String_c *x;
  Photon_Realtime_Player_o *player;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_String_o *extraout_RAX;
  System_String_c *pSVar16;
  System_String_o **ppSVar17;
  System_String_c *pSVar18;
  System_String_c **ppSVar19;
  System_String_c **str1_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  MethodInfo *in_R8;
  
  ppSVar17 = (System_String_o **)__this;
  if (g_data_057adebc == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    ppSVar17 = &"character_cape_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebc = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).Cape, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == 0) {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar12 = System_String__Concat_3ae5ba0((__this->fields).CostumesPath,"character_cape_0",(MethodInfo *)0x0);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar18 = (System_String_c *)ppSVar17;
  if (g_data_057adec3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_g");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_sc");
    il2cpp_runtime_helper_023445d0(&"Brand/aottg_hero_brand_mp");
    pSVar18 = (System_String_c *)&"Brand/aottg_hero_brand_ts";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec3 = '\x01';
  }
  pcVar4 = (((System_String_c *)ppSVar17)->_1).name;
  if (((pcVar4 != (char *)0x0) && (lVar5 = *(long *)(pcVar4 + 0x1c8), lVar5 != 0)) &&
     (lVar5 = *(long *)(lVar5 + 0x78), lVar5 != 0)) {
    uVar13 = (ulong)*(int *)(lVar5 + 0x14);
    ppuVar14 = &g_data_0524f380 + uVar13;
    if (3 < uVar13) {
      ppuVar14 = (undefined **)(g_data_057b9c00 + 0xb8);
    }
    return *(System_String_o **)*ppuVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  ppSVar19 = (System_String_c **)pSVar18;
  if (g_data_057adeba == '\0') {
    ppSVar19 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeba = '\x01';
  }
  pcVar4 = (pSVar18->_1).name;
  if (((pcVar4 != (char *)0x0) &&
      (ppSVar19 = *(System_String_c ***)(pcVar4 + 0x1e0),
      (System_String_c *)ppSVar19 != (System_String_c *)0x0)) &&
     (pvVar6 = (((System_String_c *)ppSVar19)->_1).image, method = (MethodInfo *)"Texture",
     plVar15 = (long *)(**(code **)((long)pvVar6 + 0x1a8))
                                 (ppSVar19,"Texture",*(undefined8 *)((long)pvVar6 + 0x1b0)),
     plVar15 != (long *)0x0)) {
    pSVar12 = (System_String_o *)(**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
    bVar10 = System_String__op_Equality
                       (pSVar12,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      pSVar12 = System_String__Concat_3ae5ba0
                          (*(System_String_o **)&(pSVar18->_1).byval_arg.bits,pSVar12,(MethodInfo *)0x0);
      return pSVar12;
    }
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  il2cpp_runtime_helper_022b2c90();
  str1_00 = ppSVar19;
  if (g_data_057adec5 == '\0') {
    str1_00 = &"Texture";
    il2cpp_runtime_helper_023445d0();
    g_data_057adec5 = '\x01';
  }
  pcVar4 = (((System_String_c *)ppSVar19)->_1).name;
  if (((pcVar4 != (char *)0x0) &&
      (str1_00 = *(System_String_c ***)(pcVar4 + 0x1e0), (System_String_c *)str1_00 != (System_String_c *)0x0)
      ) && (pvVar6 = (((System_String_c *)str1_00)->_1).image, method = (MethodInfo *)"Texture",
           plVar15 = (long *)(**(code **)((long)pvVar6 + 0x1a8))
                                       (str1_00,"Texture",*(undefined8 *)((long)pvVar6 + 0x1b0)),
           plVar15 != (long *)0x0)) {
    vtableDispatch = *(code **)(*plVar15 + 0x1c8);
    pSVar12 = (System_String_o *)
              (*vtableDispatch)(plVar15,*(undefined8 *)(*plVar15 + 0x1d0),vtableDispatch);
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Textures/");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Hairs/Materials/HumanHairMat");
    il2cpp_runtime_helper_023445d0(&"Tex");
    g_data_057adea8 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042efb9d;
label_042efc58:
    il2cpp_runtime_helper_02337ed0();
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (__this_01 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efdd6;
label_042efc74:
    method = (MethodInfo *)str1_00;
    bVar10 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                       (__this_01,(Il2CppObject *)str1_00,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar10 != '\0') {
label_042efd96:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8) !=
          (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar12 = (System_String_o *)
                  System_Collections_Generic_Dictionary_object__object___get_Item
                            ((System_Collections_Generic_Dictionary_object__object__o *)
                             **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1_00,MethodInfo_Material_get_Item);
        return pSVar12;
      }
      goto label_042efdd6;
    }
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (UnityEngine_Material_o *)
                ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          (pSVar12,"Human/Parts/Hairs/Materials/HumanHairMat",1,MethodInfo_Material_InstantiateAsset_Material);
    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    method = (MethodInfo *)
             System_String__Concat_3af7150
                       ("Human/Parts/Hairs/Textures/",(System_String_o *)str1_00,"Tex",(MethodInfo *)0x0);
    pSVar18 = (System_String_c *)
              ApplicationManagers_ResourceManager__LoadAsset
                        (pSVar12,(System_String_o *)method,0,(MethodInfo *)0x0);
    if ((pSVar18 == (System_String_c *)0x0) ||
       (method = (MethodInfo *)TypeInfo_Texture2D, (pSVar18->_1).image == TypeInfo_Texture2D)) {
      if (__this_00 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(__this_00,(UnityEngine_Texture_o *)pSVar18,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method = (MethodInfo *)pSVar18;
        if ((System_Collections_Generic_Dictionary_object__object__o *)**(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8)
            != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          method = (MethodInfo *)str1_00;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_HumanSetupMaterials + 0xb8),(Il2CppObject *)str1_00,(Il2CppObject *)__this_00,
                     MethodInfo_Void_set_Item);
          goto label_042efd96;
        }
      }
      goto label_042efdd6;
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042efc58;
label_042efb9d:
    __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)**(long **)(TypeInfo_HumanSetupMaterials + 0xb8);
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_042efc74;
label_042efdd6:
    pSVar18 = (System_String_c *)il2cpp_runtime_helper_022b2c90();
  }
  il2cpp_runtime_helper_022b2fd0();
  ppSVar19 = (System_String_c **)pSVar18;
  if (g_data_057adebb == '\0') {
    ppSVar19 = &"Cloth";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebb = '\x01';
  }
  SVar7 = *(System_String_Fields *)&(pSVar18->_1).name;
  if ((SVar7 != (System_String_Fields)0x0) &&
     (ppSVar19 = *(System_String_c ***)((long)SVar7 + 0x1e0),
     (System_String_c *)ppSVar19 != (System_String_c *)0x0)) {
    pSVar16 = (((System_String_c *)ppSVar19)->_1).image;
    method = (MethodInfo *)"Cloth";
    cVar9 = (*(code *)pSVar16[1]._1.name)(ppSVar19,"Cloth",pSVar16[1]._1.namespaze);
    if (cVar9 == '\0') {
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    SVar7 = *(System_String_Fields *)&(pSVar18->_1).name;
    if ((SVar7 != (System_String_Fields)0x0) &&
       (ppSVar19 = *(System_String_c ***)((long)SVar7 + 0x1e0),
       (System_String_c *)ppSVar19 != (System_String_c *)0x0)) {
      pSVar12 = *(System_String_o **)&(pSVar18->_1).byval_arg.bits;
      pSVar18 = (((System_String_c *)ppSVar19)->_1).image;
      method = (MethodInfo *)"Cloth";
      plVar15 = (long *)(*(pSVar18->vtable)._7_CompareTo.methodPtr)
                                  (ppSVar19,"Cloth",(pSVar18->vtable)._7_CompareTo.method);
      if (plVar15 != (long *)0x0) {
        str1 = (System_String_o *)(**(code **)(*plVar15 + 0x1c8))(plVar15,*(undefined8 *)(*plVar15 + 0x1d0));
        pSVar12 = System_String__Concat_3ae5ba0(pSVar12,str1,(MethodInfo *)0x0);
        return pSVar12;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar18 = (System_String_c *)ppSVar19;
  if (g_data_057ade93 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    pSVar18 = (System_String_c *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ade93 = '\x01';
  }
  pIVar8 = (((System_String_c *)ppSVar19)->vtable)._9_GetTypeCode.methodPtr;
  if (pIVar8 == (Il2CppMethodPointer)0x0) {
    pSVar16 = (System_String_c *)0x0;
  }
  else {
    lVar5 = *(long *)(pIVar8 + 0xd0);
    if (lVar5 == 0) {
label_042f006e:
      pSVar12 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
      if (g_data_057ade95 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CharacterEffectPresets);
        pSVar12 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        g_data_057ade95 = '\x01';
      }
      if ((pSVar18->vtable)._9_GetTypeCode.methodPtr != (Il2CppMethodPointer)0x0) {
        pSVar16 = pSVar18;
        bVar10 = Characters_HumanSetup__CanUseCharacterEffects((Characters_HumanSetup_o *)pSVar18,method);
        pSVar12 = (System_String_o *)CONCAT44(extraout_var_00,bVar10);
        if ((char)bVar10 != '\0') {
          pIVar8 = (pSVar18->vtable)._9_GetTypeCode.methodPtr;
          if ((pIVar8 != (Il2CppMethodPointer)0x0) && (lVar5 = *(long *)(pIVar8 + 0xd0), lVar5 != 0)) {
            pSVar16 = *(System_String_c **)(lVar5 + 0x18);
            if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               ((System_String_o *)pSVar16,(MethodInfo *)0x0);
            pIVar8 = (pSVar18->vtable)._9_GetTypeCode.methodPtr;
            if ((pIVar8 != (Il2CppMethodPointer)0x0) && (lVar5 = *(long *)(pIVar8 + 0xe0), lVar5 != 0)) {
              type = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                               (*(System_String_o **)(lVar5 + 0x18),(MethodInfo *)0x0);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar18,
                         *(UnityEngine_GameObject_o **)&(pSVar18->_2).interfaces_count,iVar11,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar18,
                         *(UnityEngine_GameObject_o **)&(pSVar18->_2).naturalAligment,iVar11,1,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar18,(UnityEngine_GameObject_o *)pSVar18->static_fields
                         ,type,0,in_R8);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        ((Characters_HumanSetup_o *)pSVar18,(UnityEngine_GameObject_o *)pSVar18->rgctx_data,
                         type,0,in_R8);
              return extraout_RAX;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adeb7 == '\0') {
            il2cpp_runtime_helper_023445d0(&"char_eyes");
            g_data_057adeb7 = '\x01';
          }
          pSVar12 = System_String__Concat_3ae5ba0
                              (*(System_String_o **)&(pSVar16->_1).this_arg.bits,"char_eyes",
                               (MethodInfo *)0x0);
          return pSVar12;
        }
      }
      return pSVar12;
    }
    pSVar16 = *(System_String_c **)(lVar5 + 0x18);
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar18 = pSVar16;
    iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                       ((System_String_o *)pSVar16,(MethodInfo *)0x0);
    if (iVar11 == 0) {
      pIVar8 = (((System_String_c *)ppSVar19)->vtable)._9_GetTypeCode.methodPtr;
      if ((pIVar8 == (Il2CppMethodPointer)0x0) || (lVar5 = *(long *)(pIVar8 + 0xe0), lVar5 == 0))
      goto label_042f006e;
      pSVar12 = *(System_String_o **)(lVar5 + 0x18);
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_String_c *)0x0;
      iVar11 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar12,(MethodInfo *)0x0);
      if (iVar11 == 0) goto label_042f0060;
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
label_042f002a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar10 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var,bVar10);
    }
    x = (System_String_c *)
        UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)ppSVar19,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pSVar18 = x;
    bVar10 = UnityEngine_Object__op_Inequality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    pSVar16 = (System_String_c *)CONCAT71((int7)((ulong)pSVar16 >> 8),1);
    if ((char)bVar10 != '\0') {
      if (x == (System_String_c *)0x0) goto label_042f006e;
      if (*(char *)&(x->_1).typeMetadataHandle != '\0') goto label_042f002a;
    }
  }
label_042f0060:
  return (System_String_o *)((ulong)pSVar16 & 0xffffffff);
}


// Characters.HumanSetupMeshes$$GetChestMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetChestMesh (Characters_HumanSetupMeshes_o* __this, int32_t chest, const MethodInfo* method);
// 0x42f0ca0

System_String_o *
Characters_HumanSetupMeshes__GetChestMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t chest,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  long lVar4;
  char cVar5;
  bool_conflict bVar6;
  Characters_HumanSetupMeshes_o *pCVar7;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  Characters_HumanSetupMeshes_o *pCVar10;
  System_String_o *pSVar11;
  Characters_HumanSetupMeshes_o *__this_00;
  UnityEngine_Material_o *__this_01;
  UnityEngine_MonoBehaviour_o *__this_02;
  UnityEngine_MonoBehaviour_c *pUVar12;
  System_Collections_Generic_Dictionary_object__object__o *pSVar13;
  System_String_o *extraout_RAX;
  System_Collections_Generic_HashSet_object__o *__this_03;
  Il2CppClass *pIVar14;
  Il2CppClass *str1;
  MethodInfo *pMVar15;
  Characters_HumanSetupMeshes_o *pCVar16;
  System_String_o **ppSVar17;
  uint16_t uStack_4a;
  Characters_HumanSetupMeshes_o *pCStack_48;
  
  pIVar14 = (Il2CppClass *)(ulong)(uint)chest;
  pCVar16 = __this;
  if (g_data_057adebd == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"body_blade_keeper_f_0");
    il2cpp_runtime_helper_023445d0(&"mikasa_asset_uni_0");
    il2cpp_runtime_helper_023445d0(&"Holster");
    il2cpp_runtime_helper_023445d0(&"Hoodie");
    il2cpp_runtime_helper_023445d0(&"char_cap_uni");
    il2cpp_runtime_helper_023445d0(&"body_blade_keeper_m_0");
    il2cpp_runtime_helper_023445d0(&"Scarf");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"Uniform");
    il2cpp_runtime_helper_023445d0(&"char_cap_cas");
    pCVar16 = (Characters_HumanSetupMeshes_o *)&"mikasa_asset_cas_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adebd = '\x01';
  }
  if (chest == 3) {
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pCVar16 = (Characters_HumanSetupMeshes_o *)(pCVar1->fields).CurrentCostume,
       pCVar16 != (Characters_HumanSetupMeshes_o *)0x0)) {
      pIVar14 = (Il2CppClass *)"Scarf";
      cVar5 = (*pCVar16->klass[2]._1.gc_desc)(pCVar16,"Scarf",pCVar16->klass[2]._1.name);
      if (cVar5 == '\0') goto label_042f0f69;
      pCVar1 = (__this->fields)._setup;
      if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
          (pCVar16 = (Characters_HumanSetupMeshes_o *)(pCVar1->fields).CurrentCostume,
          pCVar16 != (Characters_HumanSetupMeshes_o *)0x0)) &&
         (pIVar14 = (Il2CppClass *)"Type",
         pCVar7 = (Characters_HumanSetupMeshes_o *)
                  (*pCVar16->klass[1]._1.this_arg.data)
                            (pCVar16,"Type",*(undefined8 *)&pCVar16->klass[1]._1.this_arg.bits),
         pCVar7 != (Characters_HumanSetupMeshes_o *)0x0)) {
        pIVar14 = pCVar7->klass[1]._1.parent;
        pSVar8 = (System_String_o *)(*(code *)pCVar7->klass[1]._1.declaringType)();
        pCVar16 = pCVar7;
        if (pSVar8 != (System_String_o *)0x0) {
          bVar6 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
          pSVar8 = (__this->fields).CostumesPath;
          if ((char)bVar6 == '\0') {
            puVar9 = &"mikasa_asset_cas_0";
          }
          else {
            puVar9 = &"mikasa_asset_uni_0";
          }
          goto label_042f0fa1;
        }
      }
    }
  }
  else if (chest == 2) {
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pCVar16 = (Characters_HumanSetupMeshes_o *)(pCVar1->fields).CurrentCostume,
       pCVar16 != (Characters_HumanSetupMeshes_o *)0x0)) {
      pIVar14 = (Il2CppClass *)"Holster";
      cVar5 = (*pCVar16->klass[2]._1.gc_desc)(pCVar16,"Holster",pCVar16->klass[2]._1.name);
      if (cVar5 == '\0') goto label_042f0f69;
      pCVar1 = (__this->fields)._setup;
      if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
          (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
         (pSVar3 = (pSVar2->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
        pSVar8 = (__this->fields).AccessoriesPath;
        if ((pSVar3->fields)._value == 0) {
          puVar9 = &"body_blade_keeper_m_0";
        }
        else {
          puVar9 = &"body_blade_keeper_f_0";
        }
label_042f0fa1:
        pSVar8 = System_String__Concat_3ae5ba0(pSVar8,(System_String_o *)*puVar9,(MethodInfo *)0x0);
        return pSVar8;
      }
    }
  }
  else {
    if (chest != 1) {
label_042f0f69:
      return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pCVar16 = (Characters_HumanSetupMeshes_o *)(pCVar1->fields).CurrentCostume,
       pCVar16 != (Characters_HumanSetupMeshes_o *)0x0)) {
      pIVar14 = (Il2CppClass *)"Hoodie";
      cVar5 = (*pCVar16->klass[2]._1.gc_desc)(pCVar16,"Hoodie",pCVar16->klass[2]._1.name);
      if (cVar5 == '\0') goto label_042f0f69;
      pCVar1 = (__this->fields)._setup;
      if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
          (pCVar16 = (Characters_HumanSetupMeshes_o *)(pCVar1->fields).CurrentCostume,
          pCVar16 != (Characters_HumanSetupMeshes_o *)0x0)) &&
         (pIVar14 = (Il2CppClass *)"Type",
         pCVar7 = (Characters_HumanSetupMeshes_o *)
                  (*pCVar16->klass[1]._1.this_arg.data)
                            (pCVar16,"Type",*(undefined8 *)&pCVar16->klass[1]._1.this_arg.bits),
         pCVar7 != (Characters_HumanSetupMeshes_o *)0x0)) {
        pIVar14 = pCVar7->klass[1]._1.parent;
        pSVar8 = (System_String_o *)(*(code *)pCVar7->klass[1]._1.declaringType)();
        pCVar16 = pCVar7;
        if (pSVar8 != (System_String_o *)0x0) {
          bVar6 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
          pSVar8 = (__this->fields).AccessoriesPath;
          if ((char)bVar6 == '\0') {
            puVar9 = &"char_cap_cas";
          }
          else {
            puVar9 = &"char_cap_uni";
          }
          goto label_042f0fa1;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  str1 = pIVar14;
  ppSVar17 = (System_String_o **)pCVar16;
  if (g_data_057adeca == '\0') {
    il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_annie_cap_causal");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"Misc/aottg_hero_annie_cap_uniform");
    ppSVar17 = &"Uniform";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeca = '\x01';
  }
  if ((int)pIVar14 != 1) {
    puVar9 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
label_042f10a0:
    return (System_String_o *)*puVar9;
  }
  pCVar1 = (pCVar16->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (ppSVar17 = (System_String_o **)(pCVar1->fields).CurrentCostume,
      (Characters_HumanSetupMeshes_o *)ppSVar17 != (Characters_HumanSetupMeshes_o *)0x0)) &&
     (str1 = (Il2CppClass *)"Type",
     pCVar7 = (Characters_HumanSetupMeshes_o *)
              (*(((SimpleJSONFixed_JSONNode_c *)((Characters_HumanSetupMeshes_o *)ppSVar17)->klass)->vtable).
                _7_get_Item.methodPtr)
                        (ppSVar17,"Type",
                         (((SimpleJSONFixed_JSONNode_c *)((Characters_HumanSetupMeshes_o *)ppSVar17)->klass)->
                         vtable)._7_get_Item.method), pCVar7 != (Characters_HumanSetupMeshes_o *)0x0)) {
    str1 = pCVar7->klass[1]._1.parent;
    pSVar8 = (System_String_o *)(*(code *)pCVar7->klass[1]._1.declaringType)();
    ppSVar17 = (System_String_o **)pCVar7;
    if (pSVar8 != (System_String_o *)0x0) {
      bVar6 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        puVar9 = &"Misc/aottg_hero_annie_cap_causal";
      }
      else {
        puVar9 = &"Misc/aottg_hero_annie_cap_uniform";
      }
      goto label_042f10a0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar7 = (Characters_HumanSetupMeshes_o *)ppSVar17;
  pCStack_48 = pCVar16;
  if (g_data_057adeb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Char_Last_Char);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"_F");
    il2cpp_runtime_helper_023445d0(&"_uniform");
    il2cpp_runtime_helper_023445d0(&"_M");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"player");
    il2cpp_runtime_helper_023445d0(&"Uniform");
    pCVar7 = (Characters_HumanSetupMeshes_o *)&"_casual";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb5 = '\x01';
  }
  pCVar16 = "player";
  uStack_4a = 0;
  pCVar1 = (((Characters_HumanSetupMeshes_o *)ppSVar17)->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (pCVar7 = (Characters_HumanSetupMeshes_o *)(pCVar1->fields).CurrentCostume,
      pCVar7 != (Characters_HumanSetupMeshes_o *)0x0)) &&
     (str1 = (Il2CppClass *)"Type",
     pCVar10 = (Characters_HumanSetupMeshes_o *)
               (*(((SimpleJSONFixed_JSONNode_c *)pCVar7->klass)->vtable)._7_get_Item.methodPtr)
                         (pCVar7,"Type",
                          (((SimpleJSONFixed_JSONNode_c *)pCVar7->klass)->vtable)._7_get_Item.method),
     pCVar10 != (Characters_HumanSetupMeshes_o *)0x0)) {
    str1 = pCVar10->klass[1]._1.parent;
    pSVar8 = (System_String_o *)(*(code *)pCVar10->klass[1]._1.declaringType)();
    pCVar7 = pCVar10;
    if (pSVar8 != (System_String_o *)0x0) {
      bVar6 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        puVar9 = &"_casual";
      }
      else {
        puVar9 = &"_uniform";
      }
      str1 = (Il2CppClass *)*puVar9;
      pSVar11 = System_String__Concat_3ae5ba0
                          ((System_String_o *)pCVar16,(System_String_o *)str1,(MethodInfo *)0x0);
      pCVar1 = (((Characters_HumanSetupMeshes_o *)ppSVar17)->fields)._setup;
      pCVar7 = pCVar16;
      if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
          (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
         (pSVar3 = (pSVar2->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
        if ((pSVar3->fields)._value == 0) {
          puVar9 = &"_M";
        }
        else {
          puVar9 = &"_F";
        }
        pSVar11 = System_String__Concat_3ae5ba0(pSVar11,(System_String_o *)*puVar9,(MethodInfo *)0x0);
        uStack_4a = System_Linq_Enumerable__Last_char_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,MethodInfo_Char_Last_Char);
        if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = System_Char__ToString((uint16_t)&uStack_4a,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat_3ae5ba0(pSVar11,pSVar8,(MethodInfo *)0x0);
        pSVar8 = System_String__Concat_3ae5ba0
                           ((((Characters_HumanSetupMeshes_o *)ppSVar17)->fields).CostumesPath,pSVar8,
                            (MethodInfo *)0x0);
        return pSVar8;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar14 = str1;
  pCVar16 = pCVar7;
  if (g_data_057adeb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&"character_brand_arm_r_0");
    il2cpp_runtime_helper_023445d0(&"Type");
    il2cpp_runtime_helper_023445d0(&"character_brand_chest_f_0");
    il2cpp_runtime_helper_023445d0(&"character_brand_chest_m_0");
    il2cpp_runtime_helper_023445d0(&"character_brand_back_m_0");
    il2cpp_runtime_helper_023445d0(&"Uniform");
    il2cpp_runtime_helper_023445d0(&"character_brand_back_f_0");
    pCVar16 = (Characters_HumanSetupMeshes_o *)&"character_brand_arm_l_0";
    il2cpp_runtime_helper_023445d0();
    g_data_057adeb6 = '\x01';
  }
  cVar5 = (char)pIVar14;
  pCVar1 = (pCVar7->fields)._setup;
  if ((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
     (pCVar16 = (Characters_HumanSetupMeshes_o *)(pCVar1->fields).CurrentCostume,
     pCVar16 == (Characters_HumanSetupMeshes_o *)0x0)) goto label_042f1475;
  pMVar15 = "Type";
  pCVar10 = (Characters_HumanSetupMeshes_o *)
            (*pCVar16->klass[1]._1.this_arg.data)
                      (pCVar16,"Type",*(undefined8 *)&pCVar16->klass[1]._1.this_arg.bits);
  cVar5 = (char)pMVar15;
  if (pCVar10 == (Characters_HumanSetupMeshes_o *)0x0) goto label_042f1475;
  cVar5 = (char)pCVar10->klass[1]._1.parent;
  __this_00 = (Characters_HumanSetupMeshes_o *)(*(code *)pCVar10->klass[1]._1.declaringType)();
  pCVar16 = pCVar10;
  if (__this_00 == (Characters_HumanSetupMeshes_o *)0x0) goto label_042f1475;
  pSVar8 = "Uniform";
  bVar6 = System_String__StartsWith((System_String_o *)__this_00,"Uniform",(MethodInfo *)0x0);
  cVar5 = (char)pSVar8;
  if ((char)bVar6 == '\0') {
switchD_042f13af_default:
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pCVar16 = __this_00;
  switch((int)str1) {
  case 1:
    pSVar8 = (pCVar7->fields).CostumesPath;
    puVar9 = &"character_brand_arm_l_0";
    goto label_042f1464;
  case 2:
    pSVar8 = (pCVar7->fields).CostumesPath;
    puVar9 = &"character_brand_arm_r_0";
label_042f1464:
    pSVar8 = System_String__Concat_3ae5ba0(pSVar8,(System_String_o *)*puVar9,(MethodInfo *)0x0);
    return pSVar8;
  case 3:
    pCVar1 = (pCVar7->fields)._setup;
    if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
        (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      pSVar8 = (pCVar7->fields).CostumesPath;
      if ((pSVar3->fields)._value == 0) {
        puVar9 = &"character_brand_chest_m_0";
      }
      else {
        puVar9 = &"character_brand_chest_f_0";
      }
      goto label_042f1464;
    }
    break;
  case 4:
    pCVar1 = (pCVar7->fields)._setup;
    if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
        (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      pSVar8 = (pCVar7->fields).CostumesPath;
      if ((pSVar3->fields)._value == 0) {
        puVar9 = &"character_brand_back_m_0";
      }
      else {
        puVar9 = &"character_brand_back_f_0";
      }
      goto label_042f1464;
    }
    break;
  default:
    goto switchD_042f13af_default;
  }
label_042f1475:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetupMaterials);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Material_InstantiateAsset_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Face/Materials/");
    il2cpp_runtime_helper_023445d0(&"HumanFaceMat");
    il2cpp_runtime_helper_023445d0(&"HumanFaceUntiledMat");
    il2cpp_runtime_helper_023445d0(&"Human/Parts/Face/Textures/");
    g_data_057adea9 = '\x01';
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) goto label_042f1574;
label_042f14ad:
    pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  else {
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) != 0) goto label_042f14ad;
label_042f1574:
    il2cpp_runtime_helper_02337ed0();
    pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
               (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
  }
  if (pSVar13 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar6 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar13,(Il2CppObject *)pCVar16,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar6 == '\0') {
      if (cVar5 == '\0') {
        puVar9 = &"HumanFaceMat";
      }
      else {
        puVar9 = &"HumanFaceUntiledMat";
      }
      pSVar8 = (System_String_o *)*puVar9;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      pSVar8 = System_String__Concat_3ae5ba0("Human/Parts/Face/Materials/",pSVar8,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = (UnityEngine_Material_o *)
                  ApplicationManagers_ResourceManager__InstantiateAsset_object_(pSVar11,pSVar8,1,MethodInfo_Material_InstantiateAsset_Material)
      ;
      pSVar8 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      pSVar11 = System_String__Concat_3ae5ba0("Human/Parts/Face/Textures/",(System_String_o *)pCVar16,(MethodInfo *)0x0);
      __this_02 = (UnityEngine_MonoBehaviour_o *)
                  ApplicationManagers_ResourceManager__LoadAsset(pSVar8,pSVar11,0,(MethodInfo *)0x0);
      if ((__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) &&
         ((UnityEngine_Texture_c *)__this_02->klass != TypeInfo_Texture2D)) goto label_042f1712;
      if (__this_01 != (UnityEngine_Material_o *)0x0) {
        UnityEngine_Material__set_mainTexture(__this_01,(UnityEngine_Texture_o *)__this_02,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                   (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
        if (pSVar13 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (pSVar13,(Il2CppObject *)pCVar16,(Il2CppObject *)__this_01,MethodInfo_Void_set_Item);
          goto label_042f16cf;
        }
      }
    }
    else {
label_042f16cf:
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar13 = *(System_Collections_Generic_Dictionary_object__object__o **)
                 (*(long *)(TypeInfo_HumanSetupMaterials + 0xb8) + 0x10);
      if (pSVar13 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pSVar8 = (System_String_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar13,(Il2CppObject *)pCVar16,MethodInfo_Material_get_Item);
        return pSVar8;
      }
    }
  }
  __this_02 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_022b2c90();
label_042f1712:
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adea3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_UnityEngine_Renderer_UnityEngine_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_Renderer_Material);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Fire2");
    il2cpp_runtime_helper_023445d0(&"Lightning1");
    il2cpp_runtime_helper_023445d0(&"Fire1");
    g_data_057adea3 = '\x01';
  }
  pUVar12 = (UnityEngine_MonoBehaviour_c *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,3);
  if (pUVar12 != (UnityEngine_MonoBehaviour_c *)0x0) {
    if (*(int *)&(pUVar12->_1).namespaze != 0) {
      (pUVar12->_1).byval_arg.data = "Fire1";
      il2cpp_runtime_helper_022b4080(&(pUVar12->_1).byval_arg);
      if (1 < *(uint *)&(pUVar12->_1).namespaze) {
        *(undefined8 *)&(pUVar12->_1).byval_arg.bits = "Fire2";
        il2cpp_runtime_helper_022b4080(&(pUVar12->_1).byval_arg.bits);
        if (2 < *(uint *)&(pUVar12->_1).namespaze) {
          (pUVar12->_1).this_arg.data = "Lightning1";
          il2cpp_runtime_helper_022b4080(&(pUVar12->_1).this_arg);
          __this_02[0xd].klass = pUVar12;
          il2cpp_runtime_helper_022b4080(__this_02 + 0xd,pUVar12);
          pSVar13 = (System_Collections_Generic_Dictionary_object__object__o *)
                    il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_Renderer_Material);
          System_Collections_Generic_Dictionary_object__object____ctor(pSVar13,MethodInfo_Dictionary_2_UnityEngine_Renderer_UnityEngine_Material);
          __this_02[0xf].fields.m_CachedPtr = (intptr_t)pSVar13;
          il2cpp_runtime_helper_022b4080(&__this_02[0xf].fields);
          UnityEngine_MonoBehaviour___ctor(__this_02,(MethodInfo *)0x0);
          return extraout_RAX;
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adea4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanSetup);
    g_data_057adea4 = '\x01';
  }
  __this_03 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_03,MethodInfo_HashSet_1_System_String);
  lVar4 = *(long *)(TypeInfo_HumanSetup + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar4 + 0x40) = __this_03;
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_022b4080(lVar4 + 0x40,__this_03);
  return pSVar8;
}


