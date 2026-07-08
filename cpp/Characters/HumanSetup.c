// Type: Characters.HumanSetup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HumanSetup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Setup/HumanSetup.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HumanSetup$$Init
// il2cpp: void Characters_HumanSetup__Init (const MethodInfo* method);
// 0x3fda7f0

void Characters_HumanSetup__Init(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_00;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_01;
  SimpleJSONFixed_JSONNode_Enumerator_o __this_02;
  char cVar2;
  undefined4 uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  undefined8 uVar7;
  long *plVar8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar9;
  Il2CppMethodPointer pIVar10;
  Il2CppMethodPointer pIVar11;
  InvokerMethod pIVar12;
  char *pcVar13;
  Il2CppClass *pIVar14;
  Il2CppType *pIVar15;
  Il2CppType **ppIVar16;
  _union_13 _Var17;
  _union_14 _Var18;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  Il2CppType **local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (DAT_05704118 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_JSONNode_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&"HatCount");
    il2cpp_init_method_metadata(&"FaceCount");
    il2cpp_init_method_metadata(&"GlassCount");
    il2cpp_init_method_metadata(&"HeadCount");
    il2cpp_init_method_metadata(&"Costume");
    il2cpp_init_method_metadata(&"EyeCount");
    il2cpp_init_method_metadata(&"BackCount");
    il2cpp_init_method_metadata(&"Male");
    il2cpp_init_method_metadata(&"Female");
    il2cpp_init_method_metadata(&"CostumeInfo");
    il2cpp_init_method_metadata(&"Hair");
    il2cpp_init_method_metadata(&"UniqueItem");
    DAT_05704118 = '\x01';
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x18);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = ApplicationManagers_ResourceManager__TryLoadText(pSVar5,"CostumeInfo",(MethodInfo *)0x0);
  pSVar6 = SimpleJSONFixed_JSON__Parse(pSVar5,(MethodInfo *)0x0);
  if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    uVar7 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar6,"Costume",(pSVar6->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
      il2cpp_init_class();
    }
    **(undefined8 **)(TypeInfo_HumanSetup + 0xb8) = uVar7;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_HumanSetup + 0xb8),uVar7);
    uVar7 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar6,"Hair",(pSVar6->klass->vtable)._7_get_Item.method);
    lVar1 = *(long *)(TypeInfo_HumanSetup + 0xb8);
    *(undefined8 *)(lVar1 + 8) = uVar7;
    il2cpp_runtime_glue(lVar1 + 8,uVar7);
    plVar8 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar6,"EyeCount",(pSVar6->klass->vtable)._7_get_Item.method);
    if (plVar8 != (long *)0x0) {
      uVar3 = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
      *(undefined4 *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x18) = uVar3;
      plVar8 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar6,"FaceCount",(pSVar6->klass->vtable)._7_get_Item.method);
      if (plVar8 != (long *)0x0) {
        uVar3 = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
        *(undefined4 *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x1c) = uVar3;
        plVar8 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar6,"GlassCount",(pSVar6->klass->vtable)._7_get_Item.method);
        if (plVar8 != (long *)0x0) {
          uVar3 = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
          *(undefined4 *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x20) = uVar3;
          plVar8 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar6,"BackCount",(pSVar6->klass->vtable)._7_get_Item.method
                                     );
          if (plVar8 != (long *)0x0) {
            uVar3 = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
            *(undefined4 *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x34) = uVar3;
            plVar8 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar6,"HatCount",
                                        (pSVar6->klass->vtable)._7_get_Item.method);
            if (plVar8 != (long *)0x0) {
              uVar3 = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
              *(undefined4 *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x3c) = uVar3;
              plVar8 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                         (pSVar6,"HeadCount",
                                          (pSVar6->klass->vtable)._7_get_Item.method);
              if (plVar8 != (long *)0x0) {
                uVar3 = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
                plVar8 = *(long **)(TypeInfo_HumanSetup + 0xb8);
                *(undefined4 *)(plVar8 + 7) = uVar3;
                plVar8 = (long *)*plVar8;
                if ((plVar8 != (long *)0x0) &&
                   (plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                               (plVar8,"Male",*(undefined8 *)(*plVar8 + 0x1b0)
                                               ), plVar8 != (long *)0x0)) {
                  uVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
                  plVar8 = *(long **)(TypeInfo_HumanSetup + 0xb8);
                  *(undefined4 *)((long)plVar8 + 0x24) = uVar3;
                  plVar8 = (long *)*plVar8;
                  if ((plVar8 != (long *)0x0) &&
                     (plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                                 (plVar8,"Female",
                                                  *(undefined8 *)(*plVar8 + 0x1b0)),
                     plVar8 != (long *)0x0)) {
                    uVar3 = (**(code **)(*plVar8 + 0x1e8))(plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
                    lVar1 = *(long *)(TypeInfo_HumanSetup + 0xb8);
                    *(undefined4 *)(lVar1 + 0x28) = uVar3;
                    plVar8 = *(long **)(lVar1 + 8);
                    if ((plVar8 != (long *)0x0) &&
                       (plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                                   (plVar8,"Male",
                                                    *(undefined8 *)(*plVar8 + 0x1b0)),
                       plVar8 != (long *)0x0)) {
                      uVar3 = (**(code **)(*plVar8 + 0x1e8))
                                        (plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
                      lVar1 = *(long *)(TypeInfo_HumanSetup + 0xb8);
                      *(undefined4 *)(lVar1 + 0x2c) = uVar3;
                      plVar8 = *(long **)(lVar1 + 8);
                      if ((plVar8 != (long *)0x0) &&
                         (plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                                     (plVar8,"Female",
                                                      *(undefined8 *)(*plVar8 + 0x1b0)),
                         plVar8 != (long *)0x0)) {
                        uVar3 = (**(code **)(*plVar8 + 0x1e8))
                                          (plVar8,*(undefined8 *)(*plVar8 + 0x1f0));
                        *(undefined4 *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x30) = uVar3;
                        plVar8 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                                   (pSVar6,"UniqueItem",
                                                    (pSVar6->klass->vtable)._7_get_Item.method);
                        if ((plVar8 != (long *)0x0) &&
                           (plVar8 = (long *)(**(code **)(*plVar8 + 0x408))
                                                       (plVar8,*(undefined8 *)(*plVar8 + 0x410)),
                           plVar8 != (long *)0x0)) {
                          (**(code **)(*plVar8 + 0x338))
                                    (&local_78,plVar8,*(undefined8 *)(*plVar8 + 0x340));
                          __this_00.fields.m_Object.fields._dictionary =
                               (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIStack_70;
                          __this_00.fields._0_8_ = local_78;
                          __this_00.fields.m_Object.fields._8_8_ = local_68;
                          __this_00.fields.m_Object.fields._current.fields.key =
                               (Il2CppObject *)pcStack_60;
                          __this_00.fields.m_Object.fields._current.fields.value =
                               (Il2CppObject *)local_58;
                          __this_00.fields.m_Object.fields._32_8_ = pIStack_50;
                          __this_00.fields.m_Array.fields._list =
                               (System_Collections_Generic_List_T__o *)local_48;
                          __this_00.fields.m_Array.fields._8_8_ = _Stack_40.rgctx_data;
                          __this_00.fields.m_Array.fields._current = local_38.genericMethod;
                          bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                            (__this_00,(MethodInfo *)&stack0xffffffffffffff38);
                          cVar2 = (char)bVar4;
                          pIVar10 = local_78;
                          pIVar11 = pIStack_70;
                          pIVar12 = local_68;
                          pcVar13 = pcStack_60;
                          pIVar14 = local_58;
                          pIVar15 = pIStack_50;
                          ppIVar16 = local_48;
                          _Var17 = _Stack_40;
                          _Var18 = local_38;
                          while( true ) {
                            if (cVar2 == '\0') {
                              if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                                il2cpp_init_class();
                              }
                              return;
                            }
                            __this_01.fields.m_Object.fields._dictionary =
                                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar11;
                            __this_01.fields._0_8_ = pIVar10;
                            __this_01.fields.m_Object.fields._8_8_ = pIVar12;
                            __this_01.fields.m_Object.fields._current.fields.key =
                                 (Il2CppObject *)pcVar13;
                            __this_01.fields.m_Object.fields._current.fields.value =
                                 (Il2CppObject *)pIVar14;
                            __this_01.fields.m_Object.fields._32_8_ = pIVar15;
                            __this_01.fields.m_Array.fields._list =
                                 (System_Collections_Generic_List_T__o *)ppIVar16;
                            __this_01.fields.m_Array.fields._8_8_ = _Var17.rgctx_data;
                            __this_01.fields.m_Array.fields._current = _Var18.genericMethod;
                            SVar9 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                              (__this_01,(MethodInfo *)&stack0xffffffffffffff38);
                            if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            __this = *(System_Collections_Generic_HashSet_object__o **)
                                      (*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
                            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit
                                               (SVar9.fields.value,(MethodInfo *)0x0);
                            if (__this == (System_Collections_Generic_HashSet_object__o *)0x0)
                            break;
                            System_Collections_Generic_HashSet<object>__Add
                                      (__this,(Il2CppObject *)pSVar5,MethodInfo_Boolean_Add);
                            __this_02.fields.m_Object.fields._dictionary =
                                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar11;
                            __this_02.fields._0_8_ = pIVar10;
                            __this_02.fields.m_Object.fields._8_8_ = pIVar12;
                            __this_02.fields.m_Object.fields._current.fields.key =
                                 (Il2CppObject *)pcVar13;
                            __this_02.fields.m_Object.fields._current.fields.value =
                                 (Il2CppObject *)pIVar14;
                            __this_02.fields.m_Object.fields._32_8_ = pIVar15;
                            __this_02.fields.m_Array.fields._list =
                                 (System_Collections_Generic_List_T__o *)ppIVar16;
                            __this_02.fields.m_Array.fields._8_8_ = _Var17.rgctx_data;
                            __this_02.fields.m_Array.fields._current = _Var18.genericMethod;
                            bVar4 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                              (__this_02,(MethodInfo *)&stack0xffffffffffffff38);
                            cVar2 = (char)bVar4;
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


// Characters.HumanSetup$$Awake
// il2cpp: void Characters_HumanSetup__Awake (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fdae60

void Characters_HumanSetup__Awake(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Characters_HumanSetupTextures_o *__this_00;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  undefined1 auVar4 [16];
  
  if (DAT_05704119 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMeshes);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupTextures);
    il2cpp_init_method_metadata(&"spine/chest/shoulder_L/upper_arm_L/forearm_L");
    il2cpp_init_method_metadata(&"spine/chest/shoulder_R/upper_arm_R/forearm_R");
    il2cpp_init_method_metadata(&"spine/chest/shoulder_R/upper_arm_R/forearm_R/hand_R");
    il2cpp_init_method_metadata(&"spine");
    il2cpp_init_method_metadata(&"spine/chest/neck/head");
    il2cpp_init_method_metadata(&"char_head");
    il2cpp_init_method_metadata(&"spine/chest/shoulder_L/upper_arm_L/forearm_L/hand_L");
    il2cpp_init_method_metadata(&"Armature/Core/Controller_Body/hip");
    il2cpp_init_method_metadata(&"character_leg");
    il2cpp_init_method_metadata(&"spine/chest");
    il2cpp_init_method_metadata(&"thigh_L");
    il2cpp_init_method_metadata(&"thigh_R");
    il2cpp_init_method_metadata(&"character_chest");
    DAT_05704119 = '\x01';
  }
  auVar4 = il2cpp_runtime_glue(TypeInfo_HumanSetupMeshes);
  Characters_HumanSetupMeshes___ctor(auVar4._0_8_,__this,auVar4._8_8_);
  (__this->fields)._meshes = auVar4._0_8_;
  il2cpp_runtime_glue(&(__this->fields)._meshes);
  __this_00 = (Characters_HumanSetupTextures_o *)il2cpp_runtime_glue(TypeInfo_HumanSetupTextures);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._setup = __this;
  il2cpp_runtime_glue(&__this_00->fields,__this);
  (__this->fields)._textures = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._textures);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Armature/Core/Controller_Body/hip",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      __this_01 = UnityEngine_Transform__Find(pUVar1,"spine/chest/neck/head",(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        pUVar2 = UnityEngine_Transform__Find(__this_01,"char_head",(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
          (__this->fields)._part_head = pUVar3;
          il2cpp_runtime_glue(&(__this->fields)._part_head);
          pUVar2 = UnityEngine_Component__get_transform
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            pUVar2 = UnityEngine_Transform__Find(pUVar2,"character_leg",(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
              pUVar3 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
              (__this->fields)._part_leg = pUVar3;
              il2cpp_runtime_glue(&(__this->fields)._part_leg);
              pUVar2 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                pUVar2 = UnityEngine_Transform__Find(pUVar2,"character_chest",(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
                  pUVar3 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar2,(MethodInfo *)0x0);
                  (__this->fields)._part_chest = pUVar3;
                  il2cpp_runtime_glue(&(__this->fields)._part_chest,pUVar3);
                  pUVar1 = UnityEngine_Transform__Find(pUVar1,"spine/chest",(MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
                    pUVar3 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar1,(MethodInfo *)0x0);
                    (__this->fields)._mount_back = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_back);
                    pUVar3 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                    (__this->fields)._mount_hat = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_hat);
                    pUVar3 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
                    (__this->fields)._mount_head_decor = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_head_decor,pUVar3);
                    pUVar3 = Characters_HumanSetup__CreateMount(__this,"spine/chest",method_00);
                    (__this->fields)._mount_chest = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_chest,pUVar3);
                    pUVar3 = Characters_HumanSetup__CreateMount(__this,"spine/chest",method_01);
                    (__this->fields)._mount_3dmg = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_3dmg,pUVar3);
                    pUVar3 = Characters_HumanSetup__CreateMount(__this,"spine",method_02);
                    (__this->fields)._mount_gas_l = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_gas_l,pUVar3);
                    pUVar3 = Characters_HumanSetup__CreateMount(__this,"spine",method_03);
                    (__this->fields)._mount_gas_r = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_gas_r,pUVar3);
                    pUVar3 = Characters_HumanSetup__CreateMount(__this,"thigh_L",method_04);
                    (__this->fields)._mount_gun_mag_l = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_gun_mag_l,pUVar3);
                    pUVar3 = Characters_HumanSetup__CreateMount(__this,"thigh_R",method_05);
                    (__this->fields)._mount_gun_mag_r = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_gun_mag_r,pUVar3);
                    pUVar3 = Characters_HumanSetup__CreateMount(__this,"spine/chest/shoulder_L/upper_arm_L/forearm_L/hand_L",method_06);
                    (__this->fields)._mount_weapon_l = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_weapon_l,pUVar3);
                    pUVar3 = Characters_HumanSetup__CreateMount(__this,"spine/chest/shoulder_R/upper_arm_R/forearm_R/hand_R",method_07);
                    (__this->fields)._mount_weapon_r = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_weapon_r,pUVar3);
                    pUVar3 = Characters_HumanSetup__CreateMount(__this,"spine/chest/shoulder_L/upper_arm_L/forearm_L",method_08);
                    (__this->fields)._mount_ts_l = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_ts_l,pUVar3);
                    pUVar3 = Characters_HumanSetup__CreateMount(__this,"spine/chest/shoulder_R/upper_arm_R/forearm_R",method_09);
                    (__this->fields)._mount_ts_r = pUVar3;
                    il2cpp_runtime_glue(&(__this->fields)._mount_ts_r,pUVar3);
                    (__this->fields)._mount_cloth = (__this->fields)._part_leg;
                    il2cpp_runtime_glue(&(__this->fields)._mount_cloth);
                    return;
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


// Characters.HumanSetup$$GetCostumeCount
// il2cpp: int32_t Characters_HumanSetup__GetCostumeCount (bool male, const MethodInfo* method);
// 0x3fdb560

int32_t Characters_HumanSetup__GetCostumeCount(bool_conflict male,MethodInfo *method)

{
  int iVar1;
  code *vtable_dispatch;
  int32_t iVar2;
  undefined8 *puVar3;
  long *plVar4;
  
  if (DAT_0570411a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    il2cpp_init_method_metadata(&"Male");
    il2cpp_init_method_metadata(&"Female");
    DAT_0570411a = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSetup + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSetup + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar4 = (long *)**(undefined8 **)(TypeInfo_HumanSetup + 0xb8);
  }
  else {
    plVar4 = (long *)**(undefined8 **)(TypeInfo_HumanSetup + 0xb8);
  }
  if (plVar4 != (long *)0x0) {
    if ((char)male == '\0') {
      puVar3 = &"Female";
    }
    else {
      puVar3 = &"Male";
    }
    plVar4 = (long *)(**(code **)(*plVar4 + 0x1a8))(plVar4,*puVar3,*(undefined8 *)(*plVar4 + 0x1b0))
    ;
    if ((plVar4 != (long *)0x0) &&
       (plVar4 = (long *)(**(code **)(*plVar4 + 0x408))(plVar4,*(undefined8 *)(*plVar4 + 0x410)),
       plVar4 != (long *)0x0)) {
      vtable_dispatch = *(code **)(*plVar4 + 0x1e8);
      iVar2 = (*vtable_dispatch)
                        (plVar4,*(undefined8 *)(*plVar4 + 0x1f0),vtable_dispatch);
      return iVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$GetHairCount
// il2cpp: int32_t Characters_HumanSetup__GetHairCount (const MethodInfo* method);
// 0x3fdb660

int32_t Characters_HumanSetup__GetHairCount(MethodInfo *method)

{
  int iVar1;
  code *vtable_dispatch;
  int32_t iVar2;
  long *plVar3;
  
  if (DAT_0570411b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    DAT_0570411b = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSetup + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanSetup + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    plVar3 = *(long **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 8);
  }
  else {
    plVar3 = *(long **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 8);
  }
  if ((plVar3 != (long *)0x0) &&
     (plVar3 = (long *)(**(code **)(*plVar3 + 0x408))(plVar3,*(undefined8 *)(*plVar3 + 0x410)),
     plVar3 != (long *)0x0)) {
    vtable_dispatch = *(code **)(*plVar3 + 0x1e8);
    iVar2 = (*vtable_dispatch)(plVar3,*(undefined8 *)(*plVar3 + 0x1f0),vtable_dispatch);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$Copy
// il2cpp: void Characters_HumanSetup__Copy (Characters_HumanSetup_o* __this, Settings_InGameCharacterSettings_o* settings, const MethodInfo* method);
// 0x3fdb700

void Characters_HumanSetup__Copy
               (Characters_HumanSetup_o *__this,Settings_InGameCharacterSettings_o *settings,
               MethodInfo *method)

{
  byte bVar1;
  int index;
  int iVar2;
  long lVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_ListSetting_T__o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  System_String_o *a;
  Il2CppClass *pIVar8;
  int32_t iVar9;
  bool_conflict bVar10;
  Settings_HumanCustomSet_o *pSVar11;
  
  if (DAT_0570411c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&MethodInfo_Int32_GetCount);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_GetItemAt);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570411c = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
  if (((((lVar3 == 0) || (settings == (Settings_InGameCharacterSettings_o *)0x0)) ||
       (pSVar4 = (settings->fields).CustomSet, pSVar4 == (Settings_IntSetting_o *)0x0)) ||
      ((pSVar5 = (settings->fields).Costume, pSVar5 == (Settings_IntSetting_o *)0x0 ||
       (*(long *)(lVar3 + 0x28) == 0)))) ||
     (pSVar6 = *(Settings_ListSetting_T__o **)(*(long *)(lVar3 + 0x28) + 0x28),
     pSVar6 == (Settings_ListSetting_T__o *)0x0)) goto LAB_03fdba3d;
  lVar3 = *(long *)(lVar3 + 0x20);
  index = (pSVar4->fields)._value;
  iVar2 = (pSVar5->fields)._value;
  iVar9 = Settings_ListSetting<object>__GetCount(pSVar6,MethodInfo_Int32_GetCount);
  if (index < iVar9) {
    if (iVar2 == 2) {
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if (lVar3 == 0) goto LAB_03fdba3d;
      lVar3 = *(long *)(lVar3 + 0x38);
    }
    else if (iVar2 == 1) {
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if (lVar3 == 0) goto LAB_03fdba3d;
      lVar3 = *(long *)(lVar3 + 0x30);
    }
    else {
      lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
      if (lVar3 == 0) goto LAB_03fdba3d;
      lVar3 = *(long *)(lVar3 + 0x28);
    }
    if ((lVar3 == 0) ||
       (*(Settings_ListSetting_T__o **)(lVar3 + 0x28) == (Settings_ListSetting_T__o *)0x0))
    goto LAB_03fdba3d;
    pSVar11 = (Settings_HumanCustomSet_o *)
              Settings_ListSetting<object>__GetItemAt
                        (*(Settings_ListSetting_T__o **)(lVar3 + 0x28),index,MethodInfo_BaseSetting_GetItemAt);
    if (pSVar11 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fdb858;
LAB_03fdb8de:
    pIVar8 = TypeInfo_HumanCustomSet;
    bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
    if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
       ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
LAB_03fdba42:
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar11);
    }
    (__this->fields).CustomSet = pSVar11;
    if (((pSVar11->klass->_2).naturalAligment < bVar1) ||
       ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar8)) goto LAB_03fdba42;
  }
  else {
    if ((lVar3 == 0) ||
       (pSVar6 = *(Settings_ListSetting_T__o **)(lVar3 + 0x28),
       pSVar6 == (Settings_ListSetting_T__o *)0x0)) goto LAB_03fdba3d;
    pSVar11 = (Settings_HumanCustomSet_o *)
              Settings_ListSetting<object>__GetItemAt(pSVar6,index - iVar9,MethodInfo_BaseSetting_GetItemAt);
    if (pSVar11 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fdb8de;
LAB_03fdb858:
    (__this->fields).CustomSet = pSVar11;
  }
  il2cpp_runtime_glue(&(__this->fields).CustomSet,pSVar11);
  pSVar7 = (settings->fields).Loadout;
  if (pSVar7 != (Settings_StringSetting_o *)0x0) {
    a = (pSVar7->fields)._value;
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar9 = 0;
    bVar10 = System_String__op_Equality
                       (a,(System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),
                        (MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar10 = System_String__op_Equality
                         (a,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8),
                          (MethodInfo *)0x0);
      iVar9 = 1;
      if ((char)bVar10 == '\0') {
        if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar10 = System_String__op_Equality
                           (a,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x18),
                            (MethodInfo *)0x0);
        iVar9 = 3;
        if ((char)bVar10 == '\0') {
          if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar10 = System_String__op_Equality
                             (a,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),
                              (MethodInfo *)0x0);
          iVar9 = 2;
          if ((char)bVar10 == '\0') {
            return;
          }
        }
      }
    }
    (__this->fields).Weapon = iVar9;
    return;
  }
LAB_03fdba3d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$Load
// il2cpp: void Characters_HumanSetup__Load (Characters_HumanSetup_o* __this, Settings_HumanCustomSet_o* customSet, int32_t weapon, bool isDeadBody, const MethodInfo* method);
// 0x3fdba50

void Characters_HumanSetup__Load
               (Characters_HumanSetup_o *__this,Settings_HumanCustomSet_o *customSet,int32_t weapon,
               bool_conflict isDeadBody,MethodInfo *method)

{
  Settings_HumanCustomSet_o **ppSVar1;
  int iVar2;
  int iVar3;
  Settings_HumanCustomSet_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_IntSetting_o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  bool_conflict bVar8;
  int32_t iVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  System_String_o *pSVar14;
  MethodInfo *method_00;
  
  if (DAT_0570411d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DebugConsole);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Warning: hair does not exist in CostumeInfo JSON");
    il2cpp_init_method_metadata(&"Warning: costume does not exist in CostumeInfo JSON.");
    il2cpp_init_method_metadata(&"Male");
    il2cpp_init_method_metadata(&"HairF");
    il2cpp_init_method_metadata(&"Female");
    il2cpp_init_method_metadata(&"HairM");
    DAT_0570411d = '\x01';
  }
  ppSVar1 = &(__this->fields).CustomSet;
  (__this->fields).CustomSet = customSet;
  il2cpp_runtime_glue(ppSVar1);
  (__this->fields).Weapon = weapon;
  *(char *)&(__this->fields).IsDeadBody = (char)isDeadBody;
  pSVar4 = (__this->fields).CustomSet;
  if (((pSVar4 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar5 = (pSVar4->fields).Sex, pSVar5 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar6 = (pSVar4->fields).Costume, pSVar6 == (Settings_IntSetting_o *)0x0)) goto LAB_03fdbe9b;
  iVar2 = (pSVar5->fields)._value;
  iVar3 = (pSVar6->fields)._value;
  if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
    il2cpp_init_class();
    lVar11 = *(long *)(TypeInfo_HumanSetup + 0xb8);
    if (iVar2 == 0) goto LAB_03fdbbf2;
LAB_03fdbb7d:
    if (*(int *)(lVar11 + 0x28) <= iVar3) {
      if ((*ppSVar1 == (Settings_HumanCustomSet_o *)0x0) ||
         (pSVar5 = ((*ppSVar1)->fields).Costume, pSVar5 == (Settings_IntSetting_o *)0x0))
      goto LAB_03fdbe9b;
      Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar5,0,MethodInfo_Void_set_Value);
    }
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar12 = (long *)**(long **)(TypeInfo_HumanSetup + 0xb8);
    if (plVar12 == (long *)0x0) goto LAB_03fdbe9b;
    puVar10 = &"Female";
  }
  else {
    lVar11 = *(long *)(TypeInfo_HumanSetup + 0xb8);
    if (iVar2 != 0) goto LAB_03fdbb7d;
LAB_03fdbbf2:
    if (*(int *)(lVar11 + 0x24) <= iVar3) {
      if ((*ppSVar1 == (Settings_HumanCustomSet_o *)0x0) ||
         (pSVar5 = ((*ppSVar1)->fields).Costume, pSVar5 == (Settings_IntSetting_o *)0x0))
      goto LAB_03fdbe9b;
      Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar5,0,MethodInfo_Void_set_Value);
    }
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
      il2cpp_init_class();
    }
    plVar12 = (long *)**(long **)(TypeInfo_HumanSetup + 0xb8);
    if (plVar12 == (long *)0x0) goto LAB_03fdbe9b;
    puVar10 = &"Male";
  }
  plVar12 = (long *)(**(code **)(*plVar12 + 0x1a8))
                              (plVar12,*puVar10,*(undefined8 *)(*plVar12 + 0x1b0));
  if (((*ppSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar5 = ((*ppSVar1)->fields).Costume, pSVar5 != (Settings_IntSetting_o *)0x0)) &&
     (plVar12 != (long *)0x0)) {
    pSVar13 = (SimpleJSONFixed_JSONNode_o *)
              (**(code **)(*plVar12 + 0x188))
                        (plVar12,(pSVar5->fields)._value,*(undefined8 *)(*plVar12 + 400));
    (__this->fields).CurrentCostume = pSVar13;
    il2cpp_runtime_glue(&(__this->fields).CurrentCostume,pSVar13);
    if (((*ppSVar1 == (Settings_HumanCustomSet_o *)0x0) ||
        (pSVar7 = ((*ppSVar1)->fields).Hair, pSVar7 == (Settings_StringSetting_o *)0x0)) ||
       (pSVar14 = (pSVar7->fields)._value, pSVar14 == (System_String_o *)0x0)) goto LAB_03fdbe9b;
    bVar8 = System_String__StartsWith(pSVar14,"HairM",(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      bVar8 = System_String__StartsWith(pSVar14,"HairF",(MethodInfo *)0x0);
      if ((char)bVar8 == '\0') goto LAB_03fdbdd4;
      if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar12 = *(long **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 8);
      if (plVar12 == (long *)0x0) goto LAB_03fdbe9b;
      puVar10 = &"Female";
    }
    else {
      if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
        il2cpp_init_class();
      }
      plVar12 = *(long **)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 8);
      if (plVar12 == (long *)0x0) goto LAB_03fdbe9b;
      puVar10 = &"Male";
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x1a8))
                                (plVar12,*puVar10,*(undefined8 *)(*plVar12 + 0x1b0));
    pSVar14 = System_String__Substring(pSVar14,5,(MethodInfo *)0x0);
    iVar9 = System_Int32__Parse(pSVar14,(MethodInfo *)0x0);
    if (plVar12 != (long *)0x0) {
      pSVar13 = (SimpleJSONFixed_JSONNode_o *)
                (**(code **)(*plVar12 + 0x188))(plVar12,iVar9,*(undefined8 *)(*plVar12 + 400));
      (__this->fields).CurrentHair = pSVar13;
      il2cpp_runtime_glue(&(__this->fields).CurrentHair);
LAB_03fdbdd4:
      pSVar13 = (__this->fields).CurrentCostume;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar8 = SimpleJSONFixed_JSONNode__op_Equality(pSVar13,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_DebugConsole__Log("Warning: costume does not exist in CostumeInfo JSON.",0,(MethodInfo *)0x0);
      }
      pSVar13 = (__this->fields).CurrentHair;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = (MethodInfo *)0x0;
      bVar8 = SimpleJSONFixed_JSONNode__op_Equality(pSVar13,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (*(int *)(TypeInfo_DebugConsole + 0xe4) == 0) {
          il2cpp_init_class();
        }
        method_00 = (MethodInfo *)0x0;
        ApplicationManagers_DebugConsole__Log("Warning: hair does not exist in CostumeInfo JSON",0,(MethodInfo *)0x0);
      }
      Characters_HumanSetup__DeleteParts(__this,method_00);
      Characters_HumanSetup__CreateParts(__this,method_00);
      return;
    }
  }
LAB_03fdbe9b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$DeleteDie
// il2cpp: void Characters_HumanSetup__DeleteDie (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fdd340

void Characters_HumanSetup__DeleteDie(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if (DAT_0570411e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    DAT_0570411e = '\x01';
  }
  if (*(char *)((long)&(__this->fields).IsDeadBody + 1) != '\0') {
    return;
  }
  Characters_HumanSetup__DeleteParts(__this,method);
  pSVar2 = UnityEngine_Component__GetComponentsInChildren<object>
                     ((UnityEngine_Component_o *)__this,MethodInfo_Renderer___GetComponentsInChildren_Renderer);
  if (pSVar2 != (System_Object_array *)0x0) {
    uVar1 = (uint)pSVar2->max_length;
    if (0 < (int)uVar1) {
      uVar3 = 0;
      do {
        if (uVar1 <= uVar3) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        if ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Renderer_o *)0x0)
        goto LAB_03fdd3d8;
        UnityEngine_Renderer__set_enabled
                  ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3],0,(MethodInfo *)0x0);
        uVar3 = uVar3 + 1;
        uVar1 = (uint)pSVar2->max_length;
      } while ((int)uVar3 < (int)uVar1);
    }
    *(undefined1 *)((long)&(__this->fields).IsDeadBody + 1) = 1;
    return;
  }
LAB_03fdd3d8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateParts
// il2cpp: void Characters_HumanSetup__CreateParts (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fdd060

void Characters_HumanSetup__CreateParts(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Characters_HumanSetupTextures_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  System_String_o *mainTexture;
  MethodInfo *method_00;
  System_String_o *colorTexture;
  System_String_o *pantsTexture;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *in_R8;
  UnityEngine_Color_o shirt;
  UnityEngine_Color_o straps;
  UnityEngine_Color_o pants;
  UnityEngine_Color_o jacket;
  UnityEngine_Color_o boots;
  
  if (DAT_0570411f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    DAT_0570411f = '\x01';
  }
  pCVar1 = (__this->fields)._textures;
  if (pCVar1 != (Characters_HumanSetupTextures_o *)0x0) {
    mainTexture = Characters_HumanSetupTextures__GetBodyMainTexture(pCVar1,method);
    pCVar1 = (__this->fields)._textures;
    if (pCVar1 != (Characters_HumanSetupTextures_o *)0x0) {
      method_00 = (MethodInfo *)Characters_HumanSetupTextures__GetBodyMaskTexture(pCVar1,method);
      pCVar1 = (__this->fields)._textures;
      if (pCVar1 != (Characters_HumanSetupTextures_o *)0x0) {
        colorTexture = Characters_HumanSetupTextures__GetBodyColorTexture(pCVar1,method);
        pCVar1 = (__this->fields)._textures;
        if (pCVar1 != (Characters_HumanSetupTextures_o *)0x0) {
          pantsTexture = Characters_HumanSetupTextures__GetBodyPantsTexture(pCVar1,method);
          pSVar2 = (__this->fields).CustomSet;
          if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
              (pSVar3 = (pSVar2->fields).ShirtColor, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
             (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
            shirt = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).CustomSet;
            if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
               (pSVar3 = (pSVar2->fields).StrapsColor, pSVar3 != (Settings_ColorSetting_o *)0x0)) {
              pUVar4 = (pSVar3->fields)._value;
              if (pUVar4 != (Utility_Color255_o *)0x0) {
                straps = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                pSVar2 = (__this->fields).CustomSet;
                if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                   (pSVar3 = (pSVar2->fields).PantsColor, pSVar3 != (Settings_ColorSetting_o *)0x0))
                {
                  pUVar4 = (pSVar3->fields)._value;
                  if (pUVar4 != (Utility_Color255_o *)0x0) {
                    pants = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                    pSVar2 = (__this->fields).CustomSet;
                    if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                       (pSVar3 = (pSVar2->fields).JacketColor,
                       pSVar3 != (Settings_ColorSetting_o *)0x0)) {
                      pUVar4 = (pSVar3->fields)._value;
                      if (pUVar4 != (Utility_Color255_o *)0x0) {
                        jacket = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                        pSVar2 = (__this->fields).CustomSet;
                        if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                           (pSVar3 = (pSVar2->fields).BootsColor,
                           pSVar3 != (Settings_ColorSetting_o *)0x0)) {
                          pUVar4 = (pSVar3->fields)._value;
                          if (pUVar4 != (Utility_Color255_o *)0x0) {
                            boots = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                            if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                              il2cpp_init_class();
                            }
                            method_01 = (MethodInfo *)
                                        Characters_HumanSetupMaterials__GetCostumeMaterial
                                                  (mainTexture,(System_String_o *)method_00,
                                                   colorTexture,pantsTexture,shirt,straps,pants,
                                                   jacket,boots,in_R8);
                            Characters_HumanSetup__CreateHair(__this,method_00);
                            Characters_HumanSetup__CreateEye(__this,method_00);
                            Characters_HumanSetup__CreateFace(__this,method_00);
                            Characters_HumanSetup__CreateGlass(__this,method_00);
                            Characters_HumanSetup__CreateUpperBody
                                      (__this,(UnityEngine_Material_o *)method_01,method_02);
                            Characters_HumanSetup__CreateArms
                                      (__this,(UnityEngine_Material_o *)method_01,method_03);
                            Characters_HumanSetup__CreateLowerBody
                                      (__this,(UnityEngine_Material_o *)method_01,method_04);
                            Characters_HumanSetup__Create3dmg(__this,method_01);
                            Characters_HumanSetup__CreateWeapon(__this,method_01);
                            Characters_HumanSetup__CreateBack(__this,method_01);
                            Characters_HumanSetup__CreateHat(__this,method_01);
                            Characters_HumanSetup__CreateHead(__this,method_01);
                            return;
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


// Characters.HumanSetup$$DeleteParts
// il2cpp: void Characters_HumanSetup__DeleteParts (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fdbea0

void Characters_HumanSetup__DeleteParts(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  bool_conflict bVar3;
  UnityEngine_Object_o *x;
  UnityEngine_Object_o *pUVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  Il2CppRGCTXData *pIVar6;
  _union_229680 _Var7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *pSVar9;
  undefined1 local_58 [16];
  _union_229680 local_48;
  Il2CppObject *pIStack_40;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__c *local_38;
  
  if (DAT_05704120 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_UnityEngine);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_UnityEngine_Renderer_UnityEngine);
    il2cpp_init_method_metadata(&MethodInfo_Material_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704120 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._effectMaterialCache;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
LAB_03fdcfc0:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__GetEnumerator
            ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,pSVar2,
             MethodInfo_Dictionary_2_TKey_TValue__Enumerator_UnityEngine);
  pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)local_58._0_8_;
  pIVar6 = (Il2CppRGCTXData *)local_58._8_8_;
  _Var7 = local_48;
  pIVar8 = pIStack_40;
  pSVar9 = local_38;
  while (__this_00.fields._8_8_ = pIVar6, __this_00.fields._dictionary = pSVar5,
        __this_00.fields._current.fields.key = _Var7.genericMethod,
        __this_00.fields._current.fields.value = pIVar8, __this_00.fields._32_8_ = pSVar9,
        bVar3 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                          (__this_00,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78),
        (char)bVar3 != '\0') {
    il2cpp_glue_032bf890(&stack0xffffffffffffff78);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Object__Destroy(x,(MethodInfo *)0x0);
    }
  }
  __this_01.fields._8_8_ = pIVar6;
  __this_01.fields._dictionary = pSVar5;
  __this_01.fields._current.fields.key = _Var7.genericMethod;
  __this_01.fields._current.fields.value = pIVar8;
  __this_01.fields._32_8_ = pSVar9;
  System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
            (__this_01,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)
           (__this->fields)._effectMaterialCache;
  if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_03fdcfc0;
  System_Collections_Generic_Dictionary<object__object>__Clear(pSVar2,MethodInfo_Void_Clear);
  if ((char)(__this->fields).IsDeadBody != '\0') goto LAB_03fdc103;
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hair_1;
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_cape;
    if (DAT_05704134 != '\0') goto LAB_03fdc08d;
LAB_03fdcf34:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_cape;
    if (DAT_05704134 == '\0') goto LAB_03fdcf34;
LAB_03fdc08d:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_chest_3;
    if (DAT_05704134 != '\0') goto LAB_03fdc0c6;
LAB_03fdcf92:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_chest_3;
    if (DAT_05704134 == '\0') goto LAB_03fdcf92;
LAB_03fdc0c6:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
  }
LAB_03fdc103:
  pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_eye;
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_face;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_face;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_glass;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_glass;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hair;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hair;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_upper_body;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_upper_body;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_arm_l;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_arm_l;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_arm_r;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_arm_r;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hand_l;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hand_l;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hand_r;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hand_r;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_1;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_1;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_2;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_2;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_3;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_3;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_4;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_4;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_chest_1;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_chest_1;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_chest_2;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_chest_2;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_3dmg;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_3dmg;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_belt;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_belt;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_gas_l;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_gas_l;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_gas_r;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_gas_r;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_blade_l;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_blade_l;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_blade_r;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_blade_r;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_back;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_back;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hat;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hat;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_head_decor;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_head_decor;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar4,(MethodInfo *)0x0);
  }
  return;
}


// Characters.HumanSetup$$Create3dmg
// il2cpp: void Characters_HumanSetup__Create3dmg (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fe00b0

void Characters_HumanSetup__Create3dmg(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  int iVar2;
  Characters_HumanSetupTextures_o *pCVar3;
  Characters_HumanSetupMeshes_o *pCVar4;
  bool_conflict bVar5;
  undefined8 *puVar6;
  UnityEngine_Material_o *value;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Renderer_o *__this_00;
  Characters_HumanSetup_o *pCVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *pMVar10;
  UnityEngine_Object_o *pUVar11;
  MethodInfo *method_00;
  System_String_o *pSVar12;
  MethodInfo *in_R8;
  
  if (DAT_05704121 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    DAT_05704121 = '\x01';
    pUVar11 = (UnityEngine_Object_o *)(__this->fields)._part_3dmg;
    if (DAT_05704134 != '\0') goto LAB_03fe00df;
LAB_03fe02a6:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar11 = (UnityEngine_Object_o *)(__this->fields)._part_3dmg;
    if (DAT_05704134 == '\0') goto LAB_03fe02a6;
LAB_03fe00df:
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar11 = (UnityEngine_Object_o *)(__this->fields)._part_belt;
    if (DAT_05704134 == '\0') goto LAB_03fe030b;
LAB_03fe011f:
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar11,(MethodInfo *)0x0);
    pUVar11 = (UnityEngine_Object_o *)(__this->fields)._part_belt;
    if (DAT_05704134 != '\0') goto LAB_03fe011f;
LAB_03fe030b:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar11 = (UnityEngine_Object_o *)(__this->fields)._part_gas_l;
    if (DAT_05704134 == '\0') goto LAB_03fe0369;
LAB_03fe0158:
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar11,(MethodInfo *)0x0);
    pUVar11 = (UnityEngine_Object_o *)(__this->fields)._part_gas_l;
    if (DAT_05704134 != '\0') goto LAB_03fe0158;
LAB_03fe0369:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    pUVar11 = (UnityEngine_Object_o *)(__this->fields)._part_gas_r;
    if (DAT_05704134 == '\0') goto LAB_03fe03c7;
LAB_03fe0191:
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar11,(MethodInfo *)0x0);
    pUVar11 = (UnityEngine_Object_o *)(__this->fields)._part_gas_r;
    if (DAT_05704134 != '\0') goto LAB_03fe0191;
LAB_03fe03c7:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar10 = extraout_RDX;
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar11,(MethodInfo *)0x0);
    pMVar10 = extraout_RDX_00;
  }
  pCVar3 = (__this->fields)._textures;
  if (pCVar3 != (Characters_HumanSetupTextures_o *)0x0) {
    if (DAT_05704154 == '\0') {
      il2cpp_init_method_metadata(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_init_method_metadata(&"Misc/aottg_hero_AHSS_3dmg");
      il2cpp_init_method_metadata(&"Misc/aottg_hero_APG_3dmg");
      DAT_05704154 = '\x01';
      pMVar10 = extraout_RDX_01;
    }
    pCVar9 = (pCVar3->fields)._setup;
    if (pCVar9 != (Characters_HumanSetup_o *)0x0) {
      iVar2 = (pCVar9->fields).Weapon;
      if (iVar2 == 3) {
        puVar6 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar6 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar2 == 1) {
          puVar6 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar12 = (System_String_o *)*puVar6;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar10 = extraout_RDX_02;
      }
      method_00 = (MethodInfo *)0x0;
      value = Characters_HumanSetupMaterials__GetPartMaterial(pSVar12,0,pMVar10);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar4 = (__this->fields)._meshes;
      if (pCVar4 != (Characters_HumanSetupMeshes_o *)0x0) {
        pCVar9 = (Characters_HumanSetup_o *)&(__this->fields)._part_3dmg;
        pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
        pSVar7 = Characters_HumanSetupMeshes__Get3dmgMesh(pCVar4,method_00);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar8 = (UnityEngine_GameObject_o *)
                 ApplicationManagers_ResourceManager__InstantiateAsset<object>
                           (pSVar12,pSVar7,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
        (__this->fields)._part_3dmg = pUVar8;
        il2cpp_runtime_glue(pCVar9,pUVar8);
        Characters_HumanSetup__AttachToMount
                  (pCVar9,(__this->fields)._part_3dmg,(__this->fields)._mount_3dmg,0,in_R8);
        pUVar8 = (__this->fields)._part_3dmg;
        if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
           (__this_00 = (UnityEngine_Renderer_o *)
                        UnityEngine_GameObject__GetComponentInChildren<object>(pUVar8,MethodInfo_Renderer_GetComponentInChildren_Renderer),
           __this_00 != (UnityEngine_Renderer_o *)0x0)) {
          UnityEngine_Renderer__set_material(__this_00,value,(MethodInfo *)0x0);
          pCVar4 = (__this->fields)._meshes;
          if (pCVar4 != (Characters_HumanSetupMeshes_o *)0x0) {
            if (DAT_05704144 == '\0') {
              il2cpp_init_method_metadata(&"3dmg_belt");
              DAT_05704144 = '\x01';
            }
            pCVar9 = (pCVar4->fields)._setup;
            if (pCVar9 != (Characters_HumanSetup_o *)0x0) {
              if (((pCVar9->fields).Weapon | 2U) == 3) {
                pSVar12 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
                pSVar7 = pSVar12;
              }
              else {
                pSVar7 = System_String__Concat
                                   ((pCVar4->fields).AccessoriesPath,"3dmg_belt",(MethodInfo *)0x0)
                ;
                pSVar12 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
              }
              bVar5 = System_String__op_Inequality(pSVar7,pSVar12,(MethodInfo *)0x0);
              pMVar10 = extraout_RDX_03;
              if ((char)bVar5 != '\0') {
                if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                ppUVar1 = &(__this->fields)._part_belt;
                pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pUVar8 = (UnityEngine_GameObject_o *)
                         ApplicationManagers_ResourceManager__InstantiateAsset<object>
                                   (pSVar12,pSVar7,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                *ppUVar1 = pUVar8;
                il2cpp_runtime_glue(ppUVar1,pUVar8);
                if ((*ppUVar1 == (UnityEngine_GameObject_o *)0x0) ||
                   (pCVar9 = (Characters_HumanSetup_o *)
                             UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_Renderer_GetComponent_Renderer),
                   pCVar9 == (Characters_HumanSetup_o *)0x0)) goto LAB_03fe0829;
                UnityEngine_Renderer__set_material
                          ((UnityEngine_Renderer_o *)pCVar9,value,(MethodInfo *)0x0);
                Characters_HumanSetup__AttachToMount
                          (pCVar9,(__this->fields)._part_belt,(__this->fields)._mount_3dmg,0,in_R8);
                pMVar10 = extraout_RDX_04;
              }
              if ((__this->fields).Weapon == 3) {
                return;
              }
              if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                il2cpp_init_class();
                pMVar10 = extraout_RDX_05;
              }
              pCVar4 = (__this->fields)._meshes;
              if (pCVar4 != (Characters_HumanSetupMeshes_o *)0x0) {
                ppUVar1 = &(__this->fields)._part_gas_l;
                pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                pSVar7 = Characters_HumanSetupMeshes__GetGasMesh(pCVar4,1,pMVar10);
                if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pUVar8 = (UnityEngine_GameObject_o *)
                         ApplicationManagers_ResourceManager__InstantiateAsset<object>
                                   (pSVar12,pSVar7,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                *ppUVar1 = pUVar8;
                il2cpp_runtime_glue(ppUVar1,pUVar8);
                if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                   (pCVar9 = (Characters_HumanSetup_o *)
                             UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_Renderer_GetComponent_Renderer),
                   pCVar9 != (Characters_HumanSetup_o *)0x0)) {
                  UnityEngine_Renderer__set_material
                            ((UnityEngine_Renderer_o *)pCVar9,value,(MethodInfo *)0x0);
                  Characters_HumanSetup__AttachToMount
                            (pCVar9,(__this->fields)._part_gas_l,
                             (&(__this->fields)._mount_gas_l)
                             [(ulong)((__this->fields).Weapon == 1) * 2],0,in_R8);
                  pMVar10 = extraout_RDX_06;
                  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
                    il2cpp_init_class();
                    pMVar10 = extraout_RDX_07;
                  }
                  pCVar4 = (__this->fields)._meshes;
                  if (pCVar4 != (Characters_HumanSetupMeshes_o *)0x0) {
                    ppUVar1 = &(__this->fields)._part_gas_r;
                    pSVar12 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
                    pSVar7 = Characters_HumanSetupMeshes__GetGasMesh(pCVar4,0,pMVar10);
                    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
                      il2cpp_init_class();
                    }
                    pUVar8 = (UnityEngine_GameObject_o *)
                             ApplicationManagers_ResourceManager__InstantiateAsset<object>
                                       (pSVar12,pSVar7,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
                    *ppUVar1 = pUVar8;
                    il2cpp_runtime_glue(ppUVar1,pUVar8);
                    if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                       (pCVar9 = (Characters_HumanSetup_o *)
                                 UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_Renderer_GetComponent_Renderer)
                       , pCVar9 != (Characters_HumanSetup_o *)0x0)) {
                      UnityEngine_Renderer__set_material
                                ((UnityEngine_Renderer_o *)pCVar9,value,(MethodInfo *)0x0);
                      Characters_HumanSetup__AttachToMount
                                (pCVar9,(__this->fields)._part_gas_r,
                                 (&(__this->fields)._mount_gas_r)
                                 [(ulong)((__this->fields).Weapon == 1) * 2],0,in_R8);
                      return;
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
LAB_03fe0829:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateWeapon
// il2cpp: void Characters_HumanSetup__CreateWeapon (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fe0830

void Characters_HumanSetup__CreateWeapon(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  int iVar2;
  Characters_HumanSetupTextures_o *pCVar3;
  System_String_o *pSVar4;
  Settings_HumanCustomSet_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Characters_HumanSetupMeshes_o *pCVar7;
  bool_conflict bVar8;
  int32_t type;
  undefined8 *puVar9;
  UnityEngine_Material_o *value;
  Characters_HumanSetup_o *pCVar10;
  UnityEngine_GameObject_o *pUVar11;
  UnityEngine_Object_o *pUVar12;
  MeleeWeaponTrail_o *pMVar13;
  UnityEngine_Renderer_o *pUVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *pMVar15;
  MethodInfo *in_R8;
  
  if (DAT_05704122 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEffectPresets);
    il2cpp_init_method_metadata(&MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWea);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"thunderspear");
    DAT_05704122 = '\x01';
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_blade_l;
    if (DAT_05704134 == '\0') goto LAB_03fe09e1;
LAB_03fe085f:
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_blade_l;
    if (DAT_05704134 != '\0') goto LAB_03fe085f;
LAB_03fe09e1:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_blade_r;
    if (DAT_05704134 != '\0') goto LAB_03fe089e;
LAB_03fe0a44:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar12,(MethodInfo *)0x0);
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_blade_r;
    if (DAT_05704134 == '\0') goto LAB_03fe0a44;
LAB_03fe089e:
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar15 = extraout_RDX;
  if ((char)bVar8 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar12,(MethodInfo *)0x0);
    pMVar15 = extraout_RDX_00;
  }
  pCVar3 = (__this->fields)._textures;
  if (pCVar3 != (Characters_HumanSetupTextures_o *)0x0) {
    if (DAT_05704154 == '\0') {
      il2cpp_init_method_metadata(&"Misc/AOTTG_HERO_3DMG");
      il2cpp_init_method_metadata(&"Misc/aottg_hero_AHSS_3dmg");
      il2cpp_init_method_metadata(&"Misc/aottg_hero_APG_3dmg");
      DAT_05704154 = '\x01';
      pMVar15 = extraout_RDX_01;
    }
    pCVar10 = (pCVar3->fields)._setup;
    if (pCVar10 != (Characters_HumanSetup_o *)0x0) {
      iVar2 = (pCVar10->fields).Weapon;
      if (iVar2 == 3) {
        puVar9 = &"Misc/aottg_hero_APG_3dmg";
      }
      else {
        puVar9 = &"Misc/AOTTG_HERO_3DMG";
        if (iVar2 == 1) {
          puVar9 = &"Misc/aottg_hero_AHSS_3dmg";
        }
      }
      pSVar4 = (System_String_o *)*puVar9;
      iVar2 = (__this->fields).Weapon;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar15 = extraout_RDX_02;
      }
      value = Characters_HumanSetupMaterials__GetPartMaterial(pSVar4,(uint)(iVar2 == 3),pMVar15);
      pSVar5 = (__this->fields).CustomSet;
      if ((pSVar5 != (Settings_HumanCustomSet_o *)0x0) &&
         (pSVar6 = (pSVar5->fields).BladeEffect, pSVar6 != (Settings_StringSetting_o *)0x0)) {
        pSVar4 = (pSVar6->fields)._value;
        if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
          il2cpp_init_class();
        }
        type = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar4,(MethodInfo *)0x0);
        pCVar7 = (__this->fields)._meshes;
        if (pCVar7 != (Characters_HumanSetupMeshes_o *)0x0) {
          pCVar10 = (Characters_HumanSetup_o *)
                    Characters_HumanSetupMeshes__GetWeaponMesh(pCVar7,1,method_00);
          bVar8 = System_String__op_Inequality
                            ((System_String_o *)pCVar10,
                             (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                             (MethodInfo *)0x0);
          pMVar15 = extraout_RDX_03;
          if ((char)bVar8 != '\0') {
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_init_class();
            }
            ppUVar1 = &(__this->fields)._part_blade_l;
            pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pUVar11 = (UnityEngine_GameObject_o *)
                      ApplicationManagers_ResourceManager__InstantiateAsset<object>
                                (pSVar4,(System_String_o *)pCVar10,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            *ppUVar1 = pUVar11;
            il2cpp_runtime_glue(ppUVar1,pUVar11);
            if (pCVar10 == (Characters_HumanSetup_o *)0x0) goto LAB_03fe0e8f;
            bVar8 = System_String__Contains
                              ((System_String_o *)pCVar10,"thunderspear",(MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              Characters_HumanSetup__AttachToMount
                        (pCVar10,*ppUVar1,(__this->fields)._mount_weapon_l,0,in_R8);
              pUVar11 = (__this->fields)._part_blade_l;
              if ((pUVar11 == (UnityEngine_GameObject_o *)0x0) ||
                 (pUVar14 = (UnityEngine_Renderer_o *)
                            UnityEngine_GameObject__GetComponentInChildren<object>
                                      (pUVar11,MethodInfo_Renderer_GetComponentInChildren_Renderer),
                 pUVar14 == (UnityEngine_Renderer_o *)0x0)) goto LAB_03fe0e8f;
              UnityEngine_Renderer__set_material(pUVar14,value,(MethodInfo *)0x0);
            }
            else {
              Characters_HumanSetup__AttachToMount
                        (pCVar10,*ppUVar1,(__this->fields)._mount_ts_l,0,in_R8);
            }
            Characters_HumanSetup__ApplyCharacterEffectToPart
                      (__this,(__this->fields)._part_blade_l,type,0,in_R8);
            pUVar11 = (__this->fields)._part_blade_l;
            if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto LAB_03fe0e8f;
            pUVar12 = (UnityEngine_Object_o *)
                      UnityEngine_GameObject__GetComponentInChildren<object>(pUVar11,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWea);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar8 = UnityEngine_Object__op_Inequality
                              (pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            pMVar15 = extraout_RDX_04;
            if ((char)bVar8 != '\0') {
              if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto LAB_03fe0e8f;
              pMVar13 = (MeleeWeaponTrail_o *)
                        UnityEngine_GameObject__GetComponentInChildren<object>
                                  (*ppUVar1,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWea);
              (__this->fields).LeftTrail = pMVar13;
              il2cpp_runtime_glue(&(__this->fields).LeftTrail);
              pMVar13 = (__this->fields).LeftTrail;
              if (pMVar13 == (MeleeWeaponTrail_o *)0x0) goto LAB_03fe0e8f;
              *(undefined1 *)&(pMVar13->fields)._emit = 0;
              pMVar15 = extraout_RDX_05;
            }
          }
          pCVar7 = (__this->fields)._meshes;
          if (pCVar7 != (Characters_HumanSetupMeshes_o *)0x0) {
            pCVar10 = (Characters_HumanSetup_o *)
                      Characters_HumanSetupMeshes__GetWeaponMesh(pCVar7,0,pMVar15);
            bVar8 = System_String__op_Inequality
                              ((System_String_o *)pCVar10,
                               (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                               (MethodInfo *)0x0);
            if ((char)bVar8 == '\0') {
              return;
            }
            if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
              il2cpp_init_class();
            }
            ppUVar1 = &(__this->fields)._part_blade_r;
            pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
            if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pUVar11 = (UnityEngine_GameObject_o *)
                      ApplicationManagers_ResourceManager__InstantiateAsset<object>
                                (pSVar4,(System_String_o *)pCVar10,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
            *ppUVar1 = pUVar11;
            il2cpp_runtime_glue(ppUVar1,pUVar11);
            if (pCVar10 != (Characters_HumanSetup_o *)0x0) {
              bVar8 = System_String__Contains
                                ((System_String_o *)pCVar10,"thunderspear",(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                Characters_HumanSetup__AttachToMount
                          (pCVar10,*ppUVar1,(__this->fields)._mount_weapon_r,0,in_R8);
                pUVar11 = (__this->fields)._part_blade_r;
                if ((pUVar11 == (UnityEngine_GameObject_o *)0x0) ||
                   (pUVar14 = (UnityEngine_Renderer_o *)
                              UnityEngine_GameObject__GetComponentInChildren<object>
                                        (pUVar11,MethodInfo_Renderer_GetComponentInChildren_Renderer),
                   pUVar14 == (UnityEngine_Renderer_o *)0x0)) goto LAB_03fe0e8f;
                UnityEngine_Renderer__set_material(pUVar14,value,(MethodInfo *)0x0);
              }
              else {
                Characters_HumanSetup__AttachToMount
                          (pCVar10,*ppUVar1,(__this->fields)._mount_ts_r,0,in_R8);
              }
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        (__this,(__this->fields)._part_blade_r,type,0,in_R8);
              pUVar11 = (__this->fields)._part_blade_r;
              if (pUVar11 != (UnityEngine_GameObject_o *)0x0) {
                pUVar12 = (UnityEngine_Object_o *)
                          UnityEngine_GameObject__GetComponentInChildren<object>
                                    (pUVar11,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWea);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar8 = UnityEngine_Object__op_Inequality
                                  (pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  return;
                }
                if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                  pMVar13 = (MeleeWeaponTrail_o *)
                            UnityEngine_GameObject__GetComponentInChildren<object>
                                      (*ppUVar1,MethodInfo_MeleeWeaponTrail_GetComponentInChildren_MeleeWea);
                  (__this->fields).RightTrail = pMVar13;
                  il2cpp_runtime_glue(&(__this->fields).RightTrail,pMVar13);
                  pMVar13 = (__this->fields).RightTrail;
                  if (pMVar13 != (MeleeWeaponTrail_o *)0x0) {
                    *(undefined1 *)&(pMVar13->fields)._emit = 0;
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03fe0e8f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateCape
// il2cpp: void Characters_HumanSetup__CreateCape (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fe2ea0

void Characters_HumanSetup__CreateCape(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Characters_HumanSetupMeshes_o *__this_00;
  Characters_HumanSetupTextures_o *__this_01;
  bool_conflict bVar1;
  System_String_o *a;
  System_String_o *texture;
  UnityEngine_Material_o *material;
  UnityEngine_GameObject_o *pUVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar3;
  UnityEngine_GameObject_o **ppUVar4;
  
  if (DAT_05704123 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ClothFactory);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    DAT_05704123 = '\x01';
  }
  if ((char)(__this->fields).IsDeadBody != '\0') {
    return;
  }
  x = (UnityEngine_Object_o *)(__this->fields)._part_cape;
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar3 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar3 = (MethodInfo *)0x0;
    UnityEngine_Object__Destroy(x,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._meshes;
  if (__this_00 != (Characters_HumanSetupMeshes_o *)0x0) {
    a = Characters_HumanSetupMeshes__GetCapeMesh(__this_00,pMVar3);
    pMVar3 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    bVar1 = System_String__op_Inequality(a,(System_String_o *)pMVar3,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    __this_01 = (__this->fields)._textures;
    if (__this_01 != (Characters_HumanSetupTextures_o *)0x0) {
      pUVar2 = (__this->fields)._mount_cloth;
      texture = Characters_HumanSetupTextures__GetBrandTexture(__this_01,pMVar3);
      pMVar3 = extraout_RDX;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar3 = extraout_RDX_00;
      }
      ppUVar4 = &(__this->fields)._part_cape;
      material = Characters_HumanSetupMaterials__GetPartMaterial(texture,0,pMVar3);
      if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar2 = ClothFactory__GetCape(pUVar2,a,material,(MethodInfo *)0x0);
      *ppUVar4 = pUVar2;
      il2cpp_runtime_glue(ppUVar4,pUVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateHair
// il2cpp: void Characters_HumanSetup__CreateHair (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fddcc0

void Characters_HumanSetup__CreateHair(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Characters_HumanSetupMeshes_o *pCVar5;
  Characters_HumanSetupTextures_o *pCVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  Settings_ColorSetting_o *pSVar8;
  Utility_Color255_o *pUVar9;
  bool_conflict bVar10;
  int32_t type;
  System_String_o *pSVar11;
  UnityEngine_GameObject_o *pUVar12;
  System_Object_array *pSVar13;
  long *plVar14;
  UnityEngine_Material_o *pUVar15;
  System_String_o *pSVar16;
  UnityEngine_Object_o *pUVar17;
  MethodInfo *pMVar18;
  Characters_HumanSetup_o *pCVar19;
  MethodInfo *in_R8;
  uint uVar20;
  UnityEngine_Color_o UVar21;
  
  if (DAT_05704124 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEffectPresets);
    il2cpp_init_method_metadata(&TypeInfo_ClothFactory);
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&"IgnoreColor");
    DAT_05704124 = '\x01';
    pUVar17 = (UnityEngine_Object_o *)(__this->fields)._part_hair;
    if (DAT_05704134 != '\0') goto LAB_03fddcf3;
LAB_03fde08d:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar17 = (UnityEngine_Object_o *)(__this->fields)._part_hair;
    if (DAT_05704134 == '\0') goto LAB_03fde08d;
LAB_03fddcf3:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar10 = UnityEngine_Object__op_Inequality(pUVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    if ((char)(__this->fields).IsDeadBody == '\0') goto LAB_03fde0ed;
LAB_03fddd2e:
    pSVar3 = (__this->fields).CustomSet;
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar17,(MethodInfo *)0x0);
    if ((char)(__this->fields).IsDeadBody != '\0') goto LAB_03fddd2e;
LAB_03fde0ed:
    pUVar12 = (__this->fields)._part_hair_1;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ClothFactory__DisposeObject(pUVar12,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).CustomSet;
  }
  if ((pSVar3 != (Settings_HumanCustomSet_o *)0x0) &&
     (pSVar4 = (pSVar3->fields).HairEffect, pSVar4 != (Settings_StringSetting_o *)0x0)) {
    pSVar11 = (pSVar4->fields)._value;
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar18 = (MethodInfo *)0x0;
    type = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar11,(MethodInfo *)0x0);
    pCVar5 = (__this->fields)._meshes;
    if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
      pSVar11 = Characters_HumanSetupMeshes__GetHairMesh(pCVar5,pMVar18);
      pMVar18 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      bVar10 = System_String__op_Inequality(pSVar11,(System_String_o *)pMVar18,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pCVar19 = (Characters_HumanSetup_o *)&(__this->fields)._part_hair;
        pSVar16 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pUVar12 = (UnityEngine_GameObject_o *)
                  ApplicationManagers_ResourceManager__InstantiateAsset<object>
                            (pSVar16,pSVar11,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
        (__this->fields)._part_hair = pUVar12;
        il2cpp_runtime_glue(pCVar19,pUVar12);
        Characters_HumanSetup__AttachToMount
                  (pCVar19,(__this->fields)._part_hair,(__this->fields)._part_head,0,in_R8);
        pUVar12 = (__this->fields)._part_hair;
        if ((pUVar12 == (UnityEngine_GameObject_o *)0x0) ||
           (pSVar13 = UnityEngine_GameObject__GetComponentsInChildren<object>(pUVar12,MethodInfo_Renderer___GetComponentsInChildren_Renderer),
           pSVar13 == (System_Object_array *)0x0)) goto LAB_03fde2fd;
        iVar1 = (int)pSVar13->max_length;
        if (0 < iVar1) {
          uVar20 = 0;
          if (iVar1 != 0) {
            do {
              pCVar6 = (__this->fields)._textures;
              if (pCVar6 == (Characters_HumanSetupTextures_o *)0x0) goto LAB_03fde2fd;
              pUVar17 = (UnityEngine_Object_o *)pSVar13->m_Items[(int)uVar20];
              if (DAT_05704157 == '\0') {
                il2cpp_init_method_metadata(&"Texture");
                DAT_05704157 = '\x01';
              }
              pCVar19 = (pCVar6->fields)._setup;
              if (((pCVar19 == (Characters_HumanSetup_o *)0x0) ||
                  (pSVar7 = (pCVar19->fields).CurrentHair,
                  pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
                 (plVar14 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                              (pSVar7,"Texture",
                                               (pSVar7->klass->vtable)._7_get_Item.method),
                 plVar14 == (long *)0x0)) goto LAB_03fde2fd;
              pMVar18 = *(MethodInfo **)(*plVar14 + 0x1d0);
              pSVar11 = (System_String_o *)(**(code **)(*plVar14 + 0x1c8))(plVar14);
              if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pUVar15 = Characters_HumanSetupMaterials__GetHairMaterial(pSVar11,pMVar18);
              if (pUVar17 == (UnityEngine_Object_o *)0x0) goto LAB_03fde2fd;
              UnityEngine_Renderer__set_material
                        ((UnityEngine_Renderer_o *)pUVar17,pUVar15,(MethodInfo *)0x0);
              pSVar11 = UnityEngine_Object__get_name(pUVar17,(MethodInfo *)0x0);
              if (pSVar11 == (System_String_o *)0x0) goto LAB_03fde2fd;
              bVar10 = System_String__Contains(pSVar11,"IgnoreColor",(MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                pUVar15 = UnityEngine_Renderer__get_material
                                    ((UnityEngine_Renderer_o *)pUVar17,(MethodInfo *)0x0);
                pSVar3 = (__this->fields).CustomSet;
                if (((pSVar3 == (Settings_HumanCustomSet_o *)0x0) ||
                    (pSVar8 = (pSVar3->fields).HairColor, pSVar8 == (Settings_ColorSetting_o *)0x0))
                   || ((pUVar9 = (pSVar8->fields)._value, pUVar9 == (Utility_Color255_o *)0x0 ||
                       (UVar21 = Utility_Color255__ToColor(pUVar9,(MethodInfo *)0x0),
                       pUVar15 == (UnityEngine_Material_o *)0x0)))) goto LAB_03fde2fd;
                UnityEngine_Material__set_color(pUVar15,UVar21,(MethodInfo *)0x0);
              }
              uVar20 = uVar20 + 1;
              uVar2 = (uint)pSVar13->max_length;
              if ((int)uVar2 <= (int)uVar20) goto LAB_03fde12d;
            } while (uVar20 < uVar2);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_03fde12d:
        pMVar18 = (MethodInfo *)(__this->fields)._part_hair;
        Characters_HumanSetup__ApplyCharacterEffectToPart
                  (__this,(UnityEngine_GameObject_o *)pMVar18,type,1,in_R8);
      }
      pCVar5 = (__this->fields)._meshes;
      if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
        pSVar11 = Characters_HumanSetupMeshes__GetHairClothMesh(pCVar5,pMVar18);
        bVar10 = System_String__op_Inequality
                           (pSVar11,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                            (MethodInfo *)0x0);
        if (((char)bVar10 == '\0') || ((char)(__this->fields).IsDeadBody != '\0')) {
          return;
        }
        pCVar6 = (__this->fields)._textures;
        if (pCVar6 != (Characters_HumanSetupTextures_o *)0x0) {
          if (DAT_05704157 == '\0') {
            il2cpp_init_method_metadata(&"Texture");
            DAT_05704157 = '\x01';
          }
          pCVar19 = (pCVar6->fields)._setup;
          if (((pCVar19 != (Characters_HumanSetup_o *)0x0) &&
              (pSVar7 = (pCVar19->fields).CurrentHair, pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0))
             && (plVar14 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                             (pSVar7,"Texture",
                                              (pSVar7->klass->vtable)._7_get_Item.method),
                plVar14 != (long *)0x0)) {
            pMVar18 = *(MethodInfo **)(*plVar14 + 0x1d0);
            pSVar16 = (System_String_o *)(**(code **)(*plVar14 + 0x1c8))(plVar14);
            if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pUVar15 = Characters_HumanSetupMaterials__GetHairMaterial(pSVar16,pMVar18);
            pSVar3 = (__this->fields).CustomSet;
            if (((pSVar3 != (Settings_HumanCustomSet_o *)0x0) &&
                (pSVar8 = (pSVar3->fields).HairColor, pSVar8 != (Settings_ColorSetting_o *)0x0)) &&
               (pUVar9 = (pSVar8->fields)._value, pUVar9 != (Utility_Color255_o *)0x0)) {
              pUVar12 = (__this->fields)._mount_cloth;
              UVar21 = Utility_Color255__ToColor(pUVar9,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pUVar12 = ClothFactory__GetHair(pUVar12,pSVar11,pUVar15,UVar21,(MethodInfo *)0x0);
              (__this->fields)._part_hair_1 = pUVar12;
              il2cpp_runtime_glue(&(__this->fields)._part_hair_1,pUVar12);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        (__this,(__this->fields)._part_hair_1,type,1,in_R8);
              return;
            }
          }
        }
      }
    }
  }
LAB_03fde2fd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CanUseCharacterEffects
// il2cpp: bool Characters_HumanSetup__CanUseCharacterEffects (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fe3610

bool_conflict
Characters_HumanSetup__CanUseCharacterEffects(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *raw;
  int32_t iVar3;
  bool_conflict bVar4;
  bool_conflict bVar5;
  UnityEngine_Object_o *x;
  Photon_Realtime_Player_o *player;
  System_String_o *raw_00;
  
  if (DAT_05704125 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEffectPresets);
    il2cpp_init_method_metadata(&MethodInfo_PhotonView_GetComponent_PhotonView);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704125 = '\x01';
  }
  pSVar1 = (__this->fields).CustomSet;
  if (pSVar1 == (Settings_HumanCustomSet_o *)0x0) {
    bVar5 = 0;
  }
  else {
    pSVar2 = (pSVar1->fields).HairEffect;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) {
LAB_03fe37ae:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    raw_00 = (pSVar2->fields)._value;
    if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
      il2cpp_init_class();
    }
    iVar3 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(raw_00,(MethodInfo *)0x0);
    if (iVar3 == 0) {
      pSVar1 = (__this->fields).CustomSet;
      if ((pSVar1 == (Settings_HumanCustomSet_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).BladeEffect, pSVar2 == (Settings_StringSetting_o *)0x0))
      goto LAB_03fe37ae;
      raw = (pSVar2->fields)._value;
      if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
        il2cpp_init_class();
      }
      raw_00 = (System_String_o *)0x0;
      iVar3 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(raw,(MethodInfo *)0x0);
      if (iVar3 == 0) {
        return 0;
      }
    }
    if (*(int *)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 8) == 4) {
LAB_03fe376a:
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar5 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return bVar5;
    }
    x = (UnityEngine_Object_o *)
        UnityEngine_Component__GetComponent<object>((UnityEngine_Component_o *)__this,MethodInfo_PhotonView_GetComponent_PhotonView);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    bVar5 = (bool_conflict)CONCAT71((int7)((ulong)raw_00 >> 8),1);
    if ((char)bVar4 != '\0') {
      if (x == (UnityEngine_Object_o *)0x0) goto LAB_03fe37ae;
      if (*(char *)&x[4].monitor != '\0') goto LAB_03fe376a;
    }
  }
  return bVar5;
}


// Characters.HumanSetup$$ApplyCharacterEffectToPart
// il2cpp: void Characters_HumanSetup__ApplyCharacterEffectToPart (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* part, int32_t type, bool isHair, const MethodInfo* method);
// 0x3fe1f60

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void Characters_HumanSetup__ApplyCharacterEffectToPart
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *part,int32_t type,
               bool_conflict isHair,MethodInfo *method)

{
  uint uVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_object__object__o *pSVar5;
  long lVar6;
  bool_conflict bVar7;
  bool_conflict bVar8;
  System_Object_array *pSVar9;
  UnityEngine_Object_o *x_00;
  UnityEngine_Object_o *pUVar10;
  UnityEngine_Object_o *pUVar11;
  UnityEngine_Texture_o *value;
  int iVar12;
  MethodInfo *method_00;
  System_String_o *name;
  ulong uVar13;
  char cVar14;
  float fVar15;
  float fVar19;
  undefined1 auVar16 [12];
  undefined1 auVar17 [12];
  undefined8 extraout_XMM0_Qb;
  undefined8 extraout_XMM0_Qb_00;
  undefined1 auVar18 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  float fVar20;
  UnityEngine_Color_o UVar21;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  UnityEngine_Object_o *local_1d0;
  Characters_HumanSetup_o *local_1c8;
  float local_1bc;
  float local_1b8;
  float local_1b4;
  float local_1b0;
  float local_1ac;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  float local_188;
  float local_184;
  float local_180;
  float local_17c;
  float local_178;
  bool_conflict local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined1 local_158 [8];
  float fStack_150;
  float fStack_14c;
  undefined1 local_148 [8];
  float fStack_140;
  float fStack_13c;
  PatreonEffects_CharacterEffectPreset_o local_130;
  System_Object_array *local_f0;
  undefined1 local_e8 [8];
  float fStack_e0;
  float fStack_dc;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined1 local_c8 [16];
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined8 local_68;
  undefined8 uStack_60;
  float local_58;
  float fStack_54;
  float fStack_50;
  float fStack_4c;
  float local_48;
  float fStack_44;
  float fStack_40;
  float fStack_3c;
  undefined8 extraout_XMM0_Qb_01;
  
  local_1c8 = __this;
  if (DAT_05704126 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEffectPresets);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&MethodInfo_Renderer___GetComponentsInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&"_PulseSpeed");
    il2cpp_init_method_metadata(&"_FlowSpeed");
    il2cpp_init_method_metadata(&"_TexturePreserve");
    il2cpp_init_method_metadata(&"_FlowStrength");
    il2cpp_init_method_metadata(&"Custom/CharacterEffectShader");
    il2cpp_init_method_metadata(&"_EmissionFromTexture");
    il2cpp_init_method_metadata(&"_SecondaryScroll");
    il2cpp_init_method_metadata(&"_QualityLevel");
    il2cpp_init_method_metadata(&"_IsHair");
    il2cpp_init_method_metadata(&"_Color");
    il2cpp_init_method_metadata(&"_MainTex");
    il2cpp_init_method_metadata(&"_CullMode");
    il2cpp_init_method_metadata(&"_EMISSION");
    il2cpp_init_method_metadata(&"_NeonColor");
    il2cpp_init_method_metadata(&"_OutlineThickness");
    il2cpp_init_method_metadata(&"_DetailSpeed");
    il2cpp_init_method_metadata(&"_StyleMode");
    il2cpp_init_method_metadata(&"_GlowIntensity");
    il2cpp_init_method_metadata(&"_EdgeSpark");
    il2cpp_init_method_metadata(&"_StyleStrength");
    il2cpp_init_method_metadata(&"_OutlinePower");
    il2cpp_init_method_metadata(&"_PulseAmount");
    il2cpp_init_method_metadata(&"_OutlineColor");
    il2cpp_init_method_metadata(&"_DetailScale");
    il2cpp_init_method_metadata(&"_GlowColor");
    DAT_05704126 = '\x01';
  }
  local_1d0 = (UnityEngine_Object_o *)0x0;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)part,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((type == 0) || ((char)bVar7 != '\0')) ||
     (bVar7 = Characters_HumanSetup__CanUseCharacterEffects(local_1c8,method_00),
     (char)bVar7 == '\0')) {
                    /* WARNING: Read-only address (ram,0x00ccd980) is written */
    return;
  }
  if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
    il2cpp_init_class();
  }
  PatreonEffects_CharacterEffectPresets__GetPreset(&local_130,type,(MethodInfo *)0x0);
  pSVar2 = (local_1c8->fields).CustomSet;
  if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).HairColor, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
     (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
    local_194 = local_130.fields.GlowIntensity;
    local_198 = local_130.fields.OutlineThickness;
    local_15c = local_130.fields.OutlinePower;
    local_160 = local_130.fields.PulseSpeed;
    local_164 = local_130.fields.PulseAmount;
    local_168 = local_130.fields.FlowSpeed;
    local_16c = local_130.fields.FlowStrength;
    local_19c = local_130.fields.TexturePreserve;
    local_1a0 = local_130.fields.EmissionFromTexture;
    local_1a4 = local_130.fields.DetailScale;
    local_1a8 = local_130.fields.DetailSpeed;
    local_170 = local_130.fields.SecondaryScroll;
    local_1ac = local_130.fields.EdgeSpark;
    local_1b0 = local_130.fields.StyleStrength;
    UVar21 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
    local_68 = UVar21.fields._0_8_;
    local_78._8_4_ = in_XMM1_Dc;
    local_78._0_8_ = UVar21.fields._8_8_;
    local_78._12_4_ = in_XMM1_Dd;
    pSVar2 = (local_1c8->fields).CustomSet;
    if (pSVar2 != (Settings_HumanCustomSet_o *)0x0) {
      cVar14 = (char)isHair;
      if (cVar14 == '\0') {
        pSVar3 = (pSVar2->fields).BladeEffectColor;
      }
      else {
        pSVar3 = (pSVar2->fields).HairEffectColor;
      }
      if ((pSVar3 != (Settings_ColorSetting_o *)0x0) &&
         (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
        uStack_60 = extraout_XMM0_Qb;
        UVar21 = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
        local_d8 = UVar21.fields._0_8_;
        fStack_e0 = (float)in_XMM1_Dc;
        local_e8 = (undefined1  [8])UVar21.fields._8_8_;
        fStack_dc = (float)in_XMM1_Dd;
        if (cVar14 == '\0') {
          auVar16 = ZEXT812(0x3eb33333);
          auVar17 = ZEXT812(0x3f19999a);
        }
        else {
          auVar16 = ZEXT812(0x3e4ccccd);
          auVar17 = ZEXT812(0x3ee66666);
        }
        fStack_13c = 0.0;
        _local_148 = auVar16;
        fStack_14c = 0.0;
        _local_158 = auVar17;
        if ((part != (UnityEngine_GameObject_o *)0x0) &&
           (uStack_d0 = extraout_XMM0_Qb_00,
           pSVar9 = UnityEngine_GameObject__GetComponentsInChildren<object>(part,MethodInfo_Renderer___GetComponentsInChildren_Renderer),
           pSVar9 != (System_Object_array *)0x0)) {
          if (cVar14 == '\0') {
            local_1b4 = 0.0;
            local_1b8 = 2.0;
            iVar12 = (int)pSVar9->max_length;
          }
          else {
            local_1b4 = 1.0;
            local_1b8 = 0.0;
            iVar12 = (int)pSVar9->max_length;
          }
          if (iVar12 < 1) {
            return;
          }
          fVar20 = 1.0;
          if ((float)local_e8._4_4_ <= 1.0) {
            fVar20 = (float)local_e8._4_4_;
          }
          fVar20 = (float)(-(uint)(0.0 <= (float)local_e8._4_4_) & (uint)fVar20);
          local_58 = (float)local_148._0_4_ * (1.0 - (float)local_d8) + (float)local_d8;
          fStack_54 = (float)local_148._0_4_ * (1.0 - local_d8._4_4_) + local_d8._4_4_;
          fStack_50 = fStack_140 * (0.0 - (float)uStack_d0) + (float)uStack_d0;
          fStack_4c = fStack_13c * (0.0 - uStack_d0._4_4_) + uStack_d0._4_4_;
          local_148._4_4_ =
               (float)local_148._0_4_ * (1.0 - (float)local_e8._4_4_) + (float)local_e8._4_4_;
          local_148._0_4_ =
               (float)local_148._0_4_ * (1.0 - (float)local_e8._0_4_) + (float)local_e8._0_4_;
          fStack_140 = fStack_140 * (0.0 - fStack_e0) + fStack_e0;
          fStack_13c = fStack_13c * (0.0 - fStack_dc) + fStack_dc;
          local_48 = (1.0 - (float)local_d8) * (float)local_158._0_4_ + (float)local_d8;
          fStack_44 = (1.0 - local_d8._4_4_) * (float)local_158._0_4_ + local_d8._4_4_;
          fStack_40 = (0.0 - (float)uStack_d0) * fStack_150 + (float)uStack_d0;
          fStack_3c = (0.0 - uStack_d0._4_4_) * fStack_14c + uStack_d0._4_4_;
          local_158._4_4_ =
               (float)local_158._0_4_ * (1.0 - (float)local_e8._4_4_) + (float)local_e8._4_4_;
          local_158._0_4_ =
               (float)local_158._0_4_ * (1.0 - (float)local_e8._0_4_) + (float)local_e8._0_4_;
          fStack_150 = fStack_150 * (0.0 - fStack_e0) + fStack_e0;
          fStack_14c = fStack_14c * (0.0 - fStack_dc) + fStack_dc;
          local_178 = (float)local_130.fields.StyleMode;
          fVar15 = local_1a0 * 0.7;
          fVar19 = 1.0;
          if (fVar15 <= 1.0) {
            fVar19 = fVar15;
          }
          local_98 = ZEXT416(-(uint)(0.0 <= fVar15) & (uint)fVar19);
          fVar15 = local_19c * 0.95;
          fVar19 = 1.5;
          if (fVar15 <= 1.5) {
            fVar19 = fVar15;
          }
          local_a8 = ZEXT416(~-(uint)(0.5 <= fVar15) & 0x3f000000 |
                             (uint)fVar19 & -(uint)(0.5 <= fVar15));
          local_17c = local_1ac * 1.25 * fVar20;
          local_184 = local_194 * 1.15 * fVar20;
          local_1bc = local_1b0 * fVar20;
          local_188 = local_194 * 0.45 * fVar20;
          fVar15 = local_1a0 + 0.22;
          fVar19 = 1.0;
          if (fVar15 <= 1.0) {
            fVar19 = fVar15;
          }
          local_b8 = ZEXT416(-(uint)(0.0 <= fVar15) & (uint)fVar19);
          fVar15 = local_19c + 0.14;
          fVar19 = 1.5;
          if (fVar15 <= 1.5) {
            fVar19 = fVar15;
          }
          local_c8 = ZEXT416(~-(uint)(0.5 <= fVar15) & 0x3f000000 |
                             (uint)fVar19 & -(uint)(0.5 <= fVar15));
          local_180 = local_1a4 * 1.15;
          local_18c = local_1a8 * 1.1;
          local_190 = local_198 * 0.9;
          local_88 = ZEXT416((uint)(fVar20 * local_1ac));
          uVar13 = 0;
          local_174 = isHair;
          local_f0 = pSVar9;
          if (iVar12 != 0) {
            do {
              x = (UnityEngine_Object_o *)local_f0->m_Items[uVar13];
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar7 = UnityEngine_Object__op_Equality
                                (x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                if (x == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                x_00 = (UnityEngine_Object_o *)
                       UnityEngine_Renderer__get_material
                                 ((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
                pUVar10 = (UnityEngine_Object_o *)
                          UnityEngine_Shader__Find("Custom/CharacterEffectShader",(MethodInfo *)0x0);
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                bVar7 = UnityEngine_Object__op_Equality
                                  (x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if ((char)bVar7 == '\0') {
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_init_class();
                  }
                  bVar7 = UnityEngine_Object__op_Equality
                                    (pUVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                  if ((char)bVar7 == '\0') {
                    local_1d0 = (UnityEngine_Object_o *)0x0;
                    pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (local_1c8->fields)._effectMaterialCache;
                    if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                    goto LAB_03fe2e96;
                    bVar7 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                                      (pSVar5,(Il2CppObject *)x,(Il2CppObject **)&local_1d0,
                                       MethodInfo_Boolean_TryGetValue);
                    pUVar11 = local_1d0;
                    if ((char)bVar7 == '\0') {
LAB_03fe2798:
                      pUVar11 = (UnityEngine_Object_o *)il2cpp_runtime_glue(TypeInfo_Material);
                      UnityEngine_Material___ctor
                                ((UnityEngine_Material_o *)pUVar11,(UnityEngine_Shader_o *)pUVar10,
                                 (MethodInfo *)0x0);
                      pSVar5 = (System_Collections_Generic_Dictionary_object__object__o *)
                               (local_1c8->fields)._effectMaterialCache;
                      local_1d0 = pUVar11;
                      if (pSVar5 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
                      goto LAB_03fe2e96;
                      System_Collections_Generic_Dictionary<object__object>__set_Item
                                (pSVar5,(Il2CppObject *)x,(Il2CppObject *)pUVar11,MethodInfo_Void_set_Item);
LAB_03fe27ed:
                      UnityEngine_Renderer__set_material
                                ((UnityEngine_Renderer_o *)x,(UnityEngine_Material_o *)local_1d0,
                                 (MethodInfo *)0x0);
                    }
                    else {
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      bVar7 = UnityEngine_Object__op_Inequality
                                        (pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                      if ((char)bVar7 == '\0') goto LAB_03fe2798;
                      pUVar11 = (UnityEngine_Object_o *)
                                UnityEngine_Renderer__get_material
                                          ((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
                      pUVar10 = local_1d0;
                      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                        il2cpp_init_class();
                      }
                      bVar7 = UnityEngine_Object__op_Inequality(pUVar11,pUVar10,(MethodInfo *)0x0);
                      if ((char)bVar7 != '\0') goto LAB_03fe27ed;
                    }
                    bVar7 = local_174;
                    if (x_00 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                    bVar8 = UnityEngine_Material__HasProperty
                                      ((UnityEngine_Material_o *)x_00,"_MainTex",(MethodInfo *)0x0
                                      );
                    pUVar10 = local_1d0;
                    if ((char)bVar8 != '\0') {
                      value = UnityEngine_Material__GetTexture
                                        ((UnityEngine_Material_o *)x_00,"_MainTex",
                                         (MethodInfo *)0x0);
                      if (pUVar10 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                      UnityEngine_Material__SetTexture
                                ((UnityEngine_Material_o *)pUVar10,"_MainTex",value,
                                 (MethodInfo *)0x0);
                    }
                    if ((char)bVar7 == '\0') {
                      bVar8 = UnityEngine_Material__HasProperty
                                        ((UnityEngine_Material_o *)x_00,"_Color",
                                         (MethodInfo *)0x0);
                      pUVar10 = local_1d0;
                      if ((char)bVar8 == '\0') {
                        if (local_1d0 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                        fVar20 = (float)DAT_00ccd980;
                        fVar19 = DAT_00ccd980._4_4_;
                        auVar18 = _DAT_00ccd980;
                      }
                      else {
                        UVar21 = UnityEngine_Material__GetColor
                                           ((UnityEngine_Material_o *)x_00,"_Color",
                                            (MethodInfo *)0x0);
                        fVar20 = UVar21.fields.b;
                        fVar19 = UVar21.fields.a;
                        auVar18._0_8_ = UVar21.fields._0_8_;
                        auVar18._8_8_ = extraout_XMM0_Qb_01;
                        if (pUVar10 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                      }
                    }
                    else {
                      if (local_1d0 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                      auVar18._8_8_ = uStack_60;
                      auVar18._0_8_ = local_68;
                      pUVar10 = local_1d0;
                      fVar20 = (float)local_78._0_4_;
                      fVar19 = (float)local_78._4_4_;
                    }
                    UVar21.fields._0_8_ = auVar18._0_8_;
                    UVar21.fields.a = fVar19;
                    UVar21.fields.b = fVar20;
                    UnityEngine_Material__SetColor
                              ((UnityEngine_Material_o *)pUVar10,"_Color",UVar21,
                               (MethodInfo *)0x0);
                    auVar18 = _local_e8;
                    if (local_1d0 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                    value_00.fields.b = (float)local_e8._0_4_;
                    value_00.fields.a = (float)local_e8._4_4_;
                    value_00.fields.r = (float)local_d8;
                    value_00.fields.g = local_d8._4_4_;
                    _local_e8 = auVar18;
                    UnityEngine_Material__SetColor
                              ((UnityEngine_Material_o *)local_1d0,"_NeonColor",value_00,
                               (MethodInfo *)0x0);
                    auVar18 = _local_148;
                    if (local_1d0 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                    value_01.fields.g = fStack_54;
                    value_01.fields.r = local_58;
                    value_01.fields.b = (float)local_148._0_4_;
                    value_01.fields.a = (float)local_148._4_4_;
                    _local_148 = auVar18;
                    UnityEngine_Material__SetColor
                              ((UnityEngine_Material_o *)local_1d0,"_GlowColor",value_01,
                               (MethodInfo *)0x0);
                    auVar18 = _local_158;
                    if (local_1d0 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                    value_02.fields.g = fStack_44;
                    value_02.fields.r = local_48;
                    value_02.fields.b = (float)local_158._0_4_;
                    value_02.fields.a = (float)local_158._4_4_;
                    _local_158 = auVar18;
                    UnityEngine_Material__SetColor
                              ((UnityEngine_Material_o *)local_1d0,"_OutlineColor",value_02,
                               (MethodInfo *)0x0);
                    if ((((((((local_1d0 == (UnityEngine_Object_o *)0x0) ||
                             (UnityEngine_Material__SetFloat
                                        ((UnityEngine_Material_o *)local_1d0,"_GlowIntensity",local_194,
                                         (MethodInfo *)0x0),
                             local_1d0 == (UnityEngine_Object_o *)0x0)) ||
                            (UnityEngine_Material__SetFloat
                                       ((UnityEngine_Material_o *)local_1d0,"_OutlineThickness",local_198,
                                        (MethodInfo *)0x0), local_1d0 == (UnityEngine_Object_o *)0x0
                            )) || ((UnityEngine_Material__SetFloat
                                              ((UnityEngine_Material_o *)local_1d0,"_OutlinePower",
                                               local_15c,(MethodInfo *)0x0),
                                   local_1d0 == (UnityEngine_Object_o *)0x0 ||
                                   (UnityEngine_Material__SetFloat
                                              ((UnityEngine_Material_o *)local_1d0,"_PulseSpeed",
                                               local_160,(MethodInfo *)0x0),
                                   local_1d0 == (UnityEngine_Object_o *)0x0)))) ||
                          (UnityEngine_Material__SetFloat
                                     ((UnityEngine_Material_o *)local_1d0,"_PulseAmount",local_164,
                                      (MethodInfo *)0x0), local_1d0 == (UnityEngine_Object_o *)0x0))
                         || (((UnityEngine_Material__SetFloat
                                         ((UnityEngine_Material_o *)local_1d0,"_FlowSpeed",local_168
                                          ,(MethodInfo *)0x0),
                              local_1d0 == (UnityEngine_Object_o *)0x0 ||
                              (UnityEngine_Material__SetFloat
                                         ((UnityEngine_Material_o *)local_1d0,"_FlowStrength",local_16c
                                          ,(MethodInfo *)0x0),
                              local_1d0 == (UnityEngine_Object_o *)0x0)) ||
                             ((UnityEngine_Material__SetFloat
                                         ((UnityEngine_Material_o *)local_1d0,"_TexturePreserve",local_19c
                                          ,(MethodInfo *)0x0),
                              local_1d0 == (UnityEngine_Object_o *)0x0 ||
                              (((UnityEngine_Material__SetFloat
                                           ((UnityEngine_Material_o *)local_1d0,"_EmissionFromTexture",
                                            local_1a0,(MethodInfo *)0x0),
                                local_1d0 == (UnityEngine_Object_o *)0x0 ||
                                (UnityEngine_Material__SetFloat
                                           ((UnityEngine_Material_o *)local_1d0,"_DetailScale",
                                            local_1a4,(MethodInfo *)0x0),
                                local_1d0 == (UnityEngine_Object_o *)0x0)) ||
                               (UnityEngine_Material__SetFloat
                                          ((UnityEngine_Material_o *)local_1d0,"_DetailSpeed",
                                           local_1a8,(MethodInfo *)0x0),
                               local_1d0 == (UnityEngine_Object_o *)0x0)))))))) ||
                        ((UnityEngine_Material__SetFloat
                                    ((UnityEngine_Material_o *)local_1d0,"_SecondaryScroll",local_170,
                                     (MethodInfo *)0x0), local_1d0 == (UnityEngine_Object_o *)0x0 ||
                         (UnityEngine_Material__SetFloat
                                    ((UnityEngine_Material_o *)local_1d0,"_EdgeSpark",local_1ac,
                                     (MethodInfo *)0x0), local_1d0 == (UnityEngine_Object_o *)0x0)))
                        ) || ((UnityEngine_Material__SetFloat
                                         ((UnityEngine_Material_o *)local_1d0,"_StyleMode",local_178
                                          ,(MethodInfo *)0x0),
                              local_1d0 == (UnityEngine_Object_o *)0x0 ||
                              ((UnityEngine_Material__SetFloat
                                          ((UnityEngine_Material_o *)local_1d0,"_StyleStrength",
                                           local_1b0,(MethodInfo *)0x0),
                               local_1d0 == (UnityEngine_Object_o *)0x0 ||
                               (UnityEngine_Material__SetFloat
                                          ((UnityEngine_Material_o *)local_1d0,"_IsHair",
                                           local_1b4,(MethodInfo *)0x0),
                               local_1d0 == (UnityEngine_Object_o *)0x0)))))) goto LAB_03fe2e96;
                    UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)local_1d0,"_CullMode",local_1b8,
                               (MethodInfo *)0x0);
                    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x18);
                    fVar20 = 2.0;
                    if (lVar6 != 0) {
                      lVar6 = *(long *)(lVar6 + 0x20);
                      if (lVar6 == 0) goto LAB_03fe2e96;
                      iVar12 = *(int *)(lVar6 + 0x14);
                      fVar20 = 0.0;
                      if (1 < iVar12) {
                        fVar20 = *(float *)(&DAT_00cd0d30 + (ulong)(iVar12 < 3) * 4);
                      }
                    }
                    if (local_1d0 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                    UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)local_1d0,"_QualityLevel",fVar20,
                               (MethodInfo *)0x0);
                    if ((char)bVar7 == '\0') {
                      if (local_1d0 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                      UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)local_1d0,"_EmissionFromTexture",
                                 (float)local_98._0_4_,(MethodInfo *)0x0);
                      if (local_1d0 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                      UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)local_1d0,"_TexturePreserve",
                                 (float)local_a8._0_4_,(MethodInfo *)0x0);
                      if (((local_1d0 == (UnityEngine_Object_o *)0x0) ||
                          (UnityEngine_Material__SetFloat
                                     ((UnityEngine_Material_o *)local_1d0,"_EdgeSpark",local_17c,
                                      (MethodInfo *)0x0), local_1d0 == (UnityEngine_Object_o *)0x0))
                         || (UnityEngine_Material__SetFloat
                                       ((UnityEngine_Material_o *)local_1d0,"_GlowIntensity",local_184,
                                        (MethodInfo *)0x0), name = "_StyleStrength", fVar20 = local_1bc,
                            local_1d0 == (UnityEngine_Object_o *)0x0)) goto LAB_03fe2e96;
                    }
                    else {
                      if ((local_1d0 == (UnityEngine_Object_o *)0x0) ||
                         (UnityEngine_Material__SetFloat
                                    ((UnityEngine_Material_o *)local_1d0,"_GlowIntensity",local_188,
                                     (MethodInfo *)0x0), local_1d0 == (UnityEngine_Object_o *)0x0))
                      goto LAB_03fe2e96;
                      UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)local_1d0,"_EmissionFromTexture",
                                 (float)local_b8._0_4_,(MethodInfo *)0x0);
                      if (local_1d0 == (UnityEngine_Object_o *)0x0) goto LAB_03fe2e96;
                      UnityEngine_Material__SetFloat
                                ((UnityEngine_Material_o *)local_1d0,"_TexturePreserve",
                                 (float)local_c8._0_4_,(MethodInfo *)0x0);
                      if (((local_1d0 == (UnityEngine_Object_o *)0x0) ||
                          (UnityEngine_Material__SetFloat
                                     ((UnityEngine_Material_o *)local_1d0,"_DetailScale",local_180,
                                      (MethodInfo *)0x0), local_1d0 == (UnityEngine_Object_o *)0x0))
                         || ((UnityEngine_Material__SetFloat
                                        ((UnityEngine_Material_o *)local_1d0,"_DetailSpeed",local_18c,
                                         (MethodInfo *)0x0),
                             local_1d0 == (UnityEngine_Object_o *)0x0 ||
                             ((UnityEngine_Material__SetFloat
                                         ((UnityEngine_Material_o *)local_1d0,"_OutlineThickness",local_190
                                          ,(MethodInfo *)0x0),
                              local_1d0 == (UnityEngine_Object_o *)0x0 ||
                              (UnityEngine_Material__SetFloat
                                         ((UnityEngine_Material_o *)local_1d0,"_StyleStrength",local_1bc
                                          ,(MethodInfo *)0x0),
                              local_1d0 == (UnityEngine_Object_o *)0x0)))))) goto LAB_03fe2e96;
                      name = "_EdgeSpark";
                      fVar20 = (float)local_88._0_4_;
                    }
                    UnityEngine_Material__SetFloat
                              ((UnityEngine_Material_o *)local_1d0,name,fVar20,(MethodInfo *)0x0);
                    if ((local_1d0 == (UnityEngine_Object_o *)0x0) ||
                       (UnityEngine_Material__EnableKeyword
                                  ((UnityEngine_Material_o *)local_1d0,"_EMISSION",
                                   (MethodInfo *)0x0), local_1d0 == (UnityEngine_Object_o *)0x0))
                    goto LAB_03fe2e96;
                    UnityEngine_Material__set_globalIlluminationFlags
                              ((UnityEngine_Material_o *)local_1d0,1,(MethodInfo *)0x0);
                    UnityEngine_Renderer__set_material
                              ((UnityEngine_Renderer_o *)x,(UnityEngine_Material_o *)local_1d0,
                               (MethodInfo *)0x0);
                  }
                }
              }
              uVar13 = uVar13 + 1;
              uVar1 = (uint)local_f0->max_length;
              if ((long)(int)uVar1 <= (long)uVar13) {
                return;
              }
            } while (uVar13 < uVar1);
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
    }
  }
LAB_03fe2e96:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$ReapplyCharacterEffectsToExistingParts
// il2cpp: void Characters_HumanSetup__ReapplyCharacterEffectsToExistingParts (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fe37c0

void Characters_HumanSetup__ReapplyCharacterEffectsToExistingParts
               (Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *raw;
  bool_conflict bVar3;
  int32_t type;
  int32_t type_00;
  MethodInfo *in_R8;
  
  if (DAT_05704127 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEffectPresets);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05704127 = '\x01';
  }
  if ((__this->fields).CustomSet != (Settings_HumanCustomSet_o *)0x0) {
    bVar3 = Characters_HumanSetup__CanUseCharacterEffects(__this,method);
    if ((char)bVar3 != '\0') {
      pSVar1 = (__this->fields).CustomSet;
      if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).HairEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) {
        raw = (pSVar2->fields)._value;
        if (*(int *)(TypeInfo_CharacterEffectPresets + 0xe4) == 0) {
          il2cpp_init_class();
        }
        type = PatreonEffects_CharacterEffectPresets__ParseOrDefault(raw,(MethodInfo *)0x0);
        pSVar1 = (__this->fields).CustomSet;
        if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
           (pSVar2 = (pSVar1->fields).BladeEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) {
          type_00 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                              ((pSVar2->fields)._value,(MethodInfo *)0x0);
          Characters_HumanSetup__ApplyCharacterEffectToPart
                    (__this,(__this->fields)._part_hair,type,1,in_R8);
          Characters_HumanSetup__ApplyCharacterEffectToPart
                    (__this,(__this->fields)._part_hair_1,type,1,in_R8);
          Characters_HumanSetup__ApplyCharacterEffectToPart
                    (__this,(__this->fields)._part_blade_l,type_00,0,in_R8);
          Characters_HumanSetup__ApplyCharacterEffectToPart
                    (__this,(__this->fields)._part_blade_r,type_00,0,in_R8);
          return;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Characters.HumanSetup$$CreateEye
// il2cpp: void Characters_HumanSetup__CreateEye (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fde310

void Characters_HumanSetup__CreateEye(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  Characters_HumanSetupMeshes_o *pCVar2;
  System_String_o *path;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool_conflict bVar5;
  System_String_o *name;
  UnityEngine_GameObject_o *pUVar6;
  Characters_HumanSetup_o *__this_00;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  
  if (DAT_05704128 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Eye");
    DAT_05704128 = '\x01';
    x = (UnityEngine_Object_o *)(__this->fields)._part_eye;
  }
  else {
    x = (UnityEngine_Object_o *)(__this->fields)._part_eye;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    iVar1 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(x,(MethodInfo *)0x0);
    iVar1 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pCVar2 = (__this->fields)._meshes;
  }
  else {
    pCVar2 = (__this->fields)._meshes;
  }
  if (pCVar2 != (Characters_HumanSetupMeshes_o *)0x0) {
    path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (DAT_05704149 == '\0') {
      il2cpp_init_method_metadata(&"char_eyes");
      DAT_05704149 = '\x01';
    }
    __this_00 = (Characters_HumanSetup_o *)&(__this->fields)._part_eye;
    name = System_String__Concat((pCVar2->fields).FacePath,"char_eyes",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar6 = (UnityEngine_GameObject_o *)
             ApplicationManagers_ResourceManager__InstantiateAsset<object>(path,name,1,MethodInfo_GameObject_InstantiateAsset_GameObject)
    ;
    (__this->fields)._part_eye = pUVar6;
    il2cpp_runtime_glue(__this_00,pUVar6);
    Characters_HumanSetup__AttachToMount
              (__this_00,(__this->fields)._part_eye,(__this->fields)._part_head,0,in_R8);
    pSVar3 = (__this->fields).CustomSet;
    if ((pSVar3 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar4 = (pSVar3->fields).Eye, pSVar4 != (Settings_IntSetting_o *)0x0)) {
      Characters_HumanSetup__SetFacialTexture
                (__this_00,(__this->fields)._part_eye,"Eye",(pSVar4->fields)._value,0,in_R9);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateFace
// il2cpp: void Characters_HumanSetup__CreateFace (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fde560

void Characters_HumanSetup__CreateFace(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Characters_HumanSetupMeshes_o *pCVar4;
  System_String_o *path;
  bool_conflict bVar5;
  uint uVar6;
  int32_t id;
  Characters_HumanSetup_o *__this_01;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *pUVar8;
  long lVar9;
  Characters_HumanSetup_o *__this_02;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  
  if (DAT_05704129 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Face");
    DAT_05704129 = '\x01';
    x = (UnityEngine_Object_o *)(__this->fields)._part_face;
  }
  else {
    x = (UnityEngine_Object_o *)(__this->fields)._part_face;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(x,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Face, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar7 = (pSVar3->fields)._value, pSVar7 != (System_String_o *)0x0)) {
    __this_01 = (Characters_HumanSetup_o *)System_String__Substring(pSVar7,4,(MethodInfo *)0x0);
    bVar5 = System_String__op_Inequality
                      ((System_String_o *)__this_01,"None",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pSVar2 = (__this->fields).CustomSet;
    if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).Face, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      pSVar7 = (pSVar3->fields)._value;
      if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                   (*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        uVar6 = System_Collections_Generic_HashSet<object>__Contains
                          (__this_00,(Il2CppObject *)pSVar7,MethodInfo_Boolean_Contains);
        if ((char)uVar6 == '\0') {
          pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
          iVar1 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pCVar4 = (__this->fields)._meshes;
        }
        else {
          pCVar4 = (__this->fields)._meshes;
        }
        if (pCVar4 != (Characters_HumanSetupMeshes_o *)0x0) {
          path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
          if (DAT_0570414a == '\0') {
            il2cpp_init_method_metadata(&"char_face");
            DAT_0570414a = '\x01';
          }
          bVar5 = System_String__op_Inequality
                            (pSVar7,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                             (MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            pSVar7 = "char_face";
          }
          __this_02 = (Characters_HumanSetup_o *)&(__this->fields)._part_face;
          pSVar7 = System_String__Concat((pCVar4->fields).FacePath,pSVar7,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar8 = (UnityEngine_GameObject_o *)
                   ApplicationManagers_ResourceManager__InstantiateAsset<object>
                             (path,pSVar7,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          (__this->fields)._part_face = pUVar8;
          il2cpp_runtime_glue(__this_02,pUVar8);
          lVar9 = 0x148;
          if ((char)uVar6 != '\0') {
            lVar9 = 0x78;
          }
          Characters_HumanSetup__AttachToMount
                    (__this_02,(__this->fields)._part_face,
                     *(UnityEngine_GameObject_o **)((long)&__this->klass + lVar9),uVar6 & 0xff,in_R8
                    );
          pUVar8 = (__this->fields)._part_face;
          id = System_Int32__Parse((System_String_o *)__this_01,(MethodInfo *)0x0);
          Characters_HumanSetup__SetFacialTexture
                    (__this_01,pUVar8,"Face",id,uVar6 & 0xff,in_R9);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateGlass
// il2cpp: void Characters_HumanSetup__CreateGlass (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fde8f0

void Characters_HumanSetup__CreateGlass(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Characters_HumanSetupMeshes_o *pCVar4;
  System_String_o *path;
  bool_conflict bVar5;
  uint uVar6;
  int32_t id;
  Characters_HumanSetup_o *__this_01;
  System_String_o *pSVar7;
  UnityEngine_GameObject_o *pUVar8;
  long lVar9;
  Characters_HumanSetup_o *__this_02;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  
  if (DAT_0570412a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Glass");
    DAT_0570412a = '\x01';
    x = (UnityEngine_Object_o *)(__this->fields)._part_glass;
  }
  else {
    x = (UnityEngine_Object_o *)(__this->fields)._part_glass;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(x,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Glass, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar7 = (pSVar3->fields)._value, pSVar7 != (System_String_o *)0x0)) {
    __this_01 = (Characters_HumanSetup_o *)System_String__Substring(pSVar7,5,(MethodInfo *)0x0);
    bVar5 = System_String__op_Inequality
                      ((System_String_o *)__this_01,"None",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return;
    }
    pSVar2 = (__this->fields).CustomSet;
    if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).Glass, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      pSVar7 = (pSVar3->fields)._value;
      if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                   (*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x40);
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        uVar6 = System_Collections_Generic_HashSet<object>__Contains
                          (__this_00,(Il2CppObject *)pSVar7,MethodInfo_Boolean_Contains);
        if ((char)uVar6 == '\0') {
          pSVar7 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
          iVar1 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pCVar4 = (__this->fields)._meshes;
        }
        else {
          pCVar4 = (__this->fields)._meshes;
        }
        if (pCVar4 != (Characters_HumanSetupMeshes_o *)0x0) {
          path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
          if (DAT_0570414b == '\0') {
            il2cpp_init_method_metadata(&"char_glasses");
            DAT_0570414b = '\x01';
          }
          bVar5 = System_String__op_Inequality
                            (pSVar7,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                             (MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            pSVar7 = "char_glasses";
          }
          __this_02 = (Characters_HumanSetup_o *)&(__this->fields)._part_glass;
          pSVar7 = System_String__Concat((pCVar4->fields).FacePath,pSVar7,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pUVar8 = (UnityEngine_GameObject_o *)
                   ApplicationManagers_ResourceManager__InstantiateAsset<object>
                             (path,pSVar7,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
          (__this->fields)._part_glass = pUVar8;
          il2cpp_runtime_glue(__this_02,pUVar8);
          lVar9 = 0x148;
          if ((char)uVar6 != '\0') {
            lVar9 = 0x78;
          }
          Characters_HumanSetup__AttachToMount
                    (__this_02,(__this->fields)._part_glass,
                     *(UnityEngine_GameObject_o **)((long)&__this->klass + lVar9),uVar6 & 0xff,in_R8
                    );
          pUVar8 = (__this->fields)._part_glass;
          id = System_Int32__Parse((System_String_o *)__this_01,(MethodInfo *)0x0);
          Characters_HumanSetup__SetFacialTexture
                    (__this_01,pUVar8,"Glass",id,uVar6 & 0xff,in_R9);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateBack
// il2cpp: void Characters_HumanSetup__CreateBack (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fe0ea0

void Characters_HumanSetup__CreateBack(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int iVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *path;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Object_o *pUVar7;
  UnityEngine_Object_c *pUVar8;
  Characters_HumanSetup_o *__this_00;
  MethodInfo *in_R8;
  
  if (DAT_0570412b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_EZSoftBone_GetComponentInChildren_EZSoftBone);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupPrefabs);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"None");
    DAT_0570412b = '\x01';
    pUVar7 = (UnityEngine_Object_o *)(__this->fields)._part_back;
    if (DAT_05704134 == '\0') goto LAB_03fe1169;
LAB_03fe0ecd:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar7 = (UnityEngine_Object_o *)(__this->fields)._part_back;
    if (DAT_05704134 != '\0') goto LAB_03fe0ecd;
LAB_03fe1169:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar7,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Back, pSVar3 == (Settings_StringSetting_o *)0x0)) ||
     (pSVar5 = (pSVar3->fields)._value, pSVar5 == (System_String_o *)0x0)) goto LAB_03fe11ee;
  pSVar5 = System_String__Substring(pSVar5,4,(MethodInfo *)0x0);
  bVar4 = System_String__op_Inequality(pSVar5,"None",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
  if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704150 == '\0') goto LAB_03fe11b0;
LAB_03fe0fb4:
    iVar1 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
  }
  else {
    if (DAT_05704150 != '\0') goto LAB_03fe0fb4;
LAB_03fe11b0:
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupPrefabs);
    il2cpp_init_method_metadata(&"Back/Back");
    DAT_05704150 = '\x01';
    iVar1 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  __this_00 = (Characters_HumanSetup_o *)&(__this->fields)._part_back;
  pSVar5 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Back/Back",pSVar5,
                      (MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar6 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>(path,pSVar5,1,MethodInfo_GameObject_InstantiateAsset_GameObject)
  ;
  (__this->fields)._part_back = pUVar6;
  il2cpp_runtime_glue(__this_00,pUVar6);
  Characters_HumanSetup__AttachToMount
            (__this_00,(__this->fields)._part_back,(__this->fields)._mount_back,1,in_R8);
  pUVar6 = (__this->fields)._part_back;
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    pUVar7 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponentInChildren<object>(pUVar6,MethodInfo_EZSoftBone_GetComponentInChildren_EZSoftBone);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Inequality(pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (pUVar7 == (UnityEngine_Object_o *)0x0) goto LAB_03fe11ee;
      pUVar8 = pUVar7[7].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar8,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        pUVar8 = (UnityEngine_Object_c *)
                 UnityEngine_Component__get_transform
                           ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        pUVar7[7].klass = pUVar8;
        il2cpp_runtime_glue(pUVar7 + 7,pUVar8);
        return;
      }
    }
    return;
  }
LAB_03fe11ee:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateHead
// il2cpp: void Characters_HumanSetup__CreateHead (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fe14b0

void Characters_HumanSetup__CreateHead(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *path;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  Characters_HumanSetup_o *__this_00;
  MethodInfo *in_R8;
  
  if (DAT_0570412c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"None");
    DAT_0570412c = '\x01';
    x = (UnityEngine_Object_o *)(__this->fields)._part_head_decor;
  }
  else {
    x = (UnityEngine_Object_o *)(__this->fields)._part_head_decor;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(x,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Head, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar5 = (pSVar3->fields)._value, pSVar5 != (System_String_o *)0x0)) {
    pSVar5 = System_String__Substring(pSVar5,4,(MethodInfo *)0x0);
    bVar4 = System_String__op_Inequality(pSVar5,"None",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05704152 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HumanSetupPrefabs);
        il2cpp_init_method_metadata(&"Head/Head");
        DAT_05704152 = '\x01';
        iVar1 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      __this_00 = (Characters_HumanSetup_o *)&(__this->fields)._part_head_decor;
      pSVar5 = System_String__Concat
                         ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Head/Head",
                          pSVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar6 = (UnityEngine_GameObject_o *)
               ApplicationManagers_ResourceManager__InstantiateAsset<object>
                         (path,pSVar5,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      (__this->fields)._part_head_decor = pUVar6;
      il2cpp_runtime_glue(__this_00,pUVar6);
      Characters_HumanSetup__AttachToMount
                (__this_00,(__this->fields)._part_head_decor,(__this->fields)._mount_head_decor,1,
                 in_R8);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateHat
// il2cpp: void Characters_HumanSetup__CreateHat (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fe1200

void Characters_HumanSetup__CreateHat(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *path;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  Characters_HumanSetup_o *__this_00;
  MethodInfo *in_R8;
  
  if (DAT_0570412d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"None");
    DAT_0570412d = '\x01';
    x = (UnityEngine_Object_o *)(__this->fields)._part_hat;
  }
  else {
    x = (UnityEngine_Object_o *)(__this->fields)._part_hat;
  }
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(x,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Hat, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar5 = (pSVar3->fields)._value, pSVar5 != (System_String_o *)0x0)) {
    pSVar5 = System_String__Substring(pSVar5,3,(MethodInfo *)0x0);
    bVar4 = System_String__op_Inequality(pSVar5,"None",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_HumanSetupPrefabs + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05704151 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_HumanSetupPrefabs);
        il2cpp_init_method_metadata(&"Hat/Hat");
        DAT_05704151 = '\x01';
        iVar1 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_HumanSetupPrefabs + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      __this_00 = (Characters_HumanSetup_o *)&(__this->fields)._part_hat;
      pSVar5 = System_String__Concat
                         ((System_String_o *)**(undefined8 **)(TypeInfo_HumanSetupPrefabs + 0xb8),"Hat/Hat",
                          pSVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar6 = (UnityEngine_GameObject_o *)
               ApplicationManagers_ResourceManager__InstantiateAsset<object>
                         (path,pSVar5,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      (__this->fields)._part_hat = pUVar6;
      il2cpp_runtime_glue(__this_00,pUVar6);
      Characters_HumanSetup__AttachToMount
                (__this_00,(__this->fields)._part_hat,(__this->fields)._mount_hat,1,in_R8);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateArms
// il2cpp: void Characters_HumanSetup__CreateArms (Characters_HumanSetup_o* __this, UnityEngine_Material_o* bodyMaterial, const MethodInfo* method);
// 0x3fdf8e0

void Characters_HumanSetup__CreateArms
               (Characters_HumanSetup_o *__this,UnityEngine_Material_o *bodyMaterial,
               MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetupTextures_o *pCVar2;
  Characters_HumanSetup_o *pCVar3;
  Settings_HumanCustomSet_o *pSVar4;
  Settings_ColorSetting_o *pSVar5;
  Utility_Color255_o *__this_00;
  Characters_HumanSetupMeshes_o *pCVar6;
  bool_conflict bVar7;
  undefined8 *puVar8;
  UnityEngine_Material_o *value;
  System_String_o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Renderer_o *pUVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  UnityEngine_Object_o *pUVar12;
  UnityEngine_Color_o color;
  
  if (DAT_0570412e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    DAT_0570412e = '\x01';
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_arm_l;
    if (DAT_05704134 == '\0') goto LAB_03fdfac8;
LAB_03fdf915:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_arm_l;
    if (DAT_05704134 != '\0') goto LAB_03fdf915;
LAB_03fdfac8:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_hand_l;
    if (DAT_05704134 != '\0') goto LAB_03fdf955;
LAB_03fdfb2d:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar12,(MethodInfo *)0x0);
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_hand_l;
    if (DAT_05704134 == '\0') goto LAB_03fdfb2d;
LAB_03fdf955:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_arm_r;
    if (DAT_05704134 != '\0') goto LAB_03fdf98e;
LAB_03fdfb8b:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar12,(MethodInfo *)0x0);
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_arm_r;
    if (DAT_05704134 == '\0') goto LAB_03fdfb8b;
LAB_03fdf98e:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_hand_r;
    if (DAT_05704134 != '\0') goto LAB_03fdf9c7;
LAB_03fdfbe9:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar12,(MethodInfo *)0x0);
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_hand_r;
    if (DAT_05704134 == '\0') goto LAB_03fdfbe9;
LAB_03fdf9c7:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar12,(MethodInfo *)0x0);
  }
  pCVar2 = (__this->fields)._textures;
  if (pCVar2 == (Characters_HumanSetupTextures_o *)0x0) goto LAB_03fdfe61;
  if (DAT_05704156 == '\0') {
    il2cpp_init_method_metadata(&"Skin/skin_blades");
    il2cpp_init_method_metadata(&"Skin/skin_TS");
    il2cpp_init_method_metadata(&"Skin/skin_AHSS");
    DAT_05704156 = '\x01';
  }
  pCVar3 = (pCVar2->fields)._setup;
  if (pCVar3 == (Characters_HumanSetup_o *)0x0) goto LAB_03fdfe61;
  iVar1 = (pCVar3->fields).Weapon;
  if (iVar1 == 1) {
LAB_03fdfc20:
    puVar8 = &"Skin/skin_AHSS";
    pSVar4 = (__this->fields).CustomSet;
  }
  else if (iVar1 == 2) {
    puVar8 = &"Skin/skin_TS";
    pSVar4 = (__this->fields).CustomSet;
  }
  else {
    if (iVar1 == 3) goto LAB_03fdfc20;
    puVar8 = &"Skin/skin_blades";
    pSVar4 = (__this->fields).CustomSet;
  }
  if (((pSVar4 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar5 = (pSVar4->fields).SkinColor, pSVar5 != (Settings_ColorSetting_o *)0x0)) &&
     (__this_00 = (pSVar5->fields)._value, __this_00 != (Utility_Color255_o *)0x0)) {
    pSVar9 = (System_String_o *)*puVar8;
    method_08 = (MethodInfo *)0x0;
    color = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = Characters_HumanSetupMaterials__GetSkinMaterial(pSVar9,color,method_08);
    pCVar6 = (__this->fields)._meshes;
    if (pCVar6 != (Characters_HumanSetupMeshes_o *)0x0) {
      pSVar9 = Characters_HumanSetupMeshes__GetArmMesh(pCVar6,1,method_00);
      pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,method_01);
      (__this->fields)._part_arm_l = pUVar10;
      il2cpp_runtime_glue(&(__this->fields)._part_arm_l,pUVar10);
      pUVar10 = (__this->fields)._part_arm_l;
      if ((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar11 = (UnityEngine_Renderer_o *)
                    UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
         pUVar11 != (UnityEngine_Renderer_o *)0x0)) {
        UnityEngine_Renderer__set_material(pUVar11,bodyMaterial,(MethodInfo *)0x0);
        pCVar6 = (__this->fields)._meshes;
        if (pCVar6 != (Characters_HumanSetupMeshes_o *)0x0) {
          pSVar9 = Characters_HumanSetupMeshes__GetHandMesh(pCVar6,1,method_02);
          pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,method_03);
          (__this->fields)._part_hand_l = pUVar10;
          il2cpp_runtime_glue(&(__this->fields)._part_hand_l,pUVar10);
          pUVar10 = (__this->fields)._part_hand_l;
          if ((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar11 = (UnityEngine_Renderer_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
             pUVar11 != (UnityEngine_Renderer_o *)0x0)) {
            UnityEngine_Renderer__set_material(pUVar11,value,(MethodInfo *)0x0);
            pCVar6 = (__this->fields)._meshes;
            if (pCVar6 != (Characters_HumanSetupMeshes_o *)0x0) {
              pSVar9 = Characters_HumanSetupMeshes__GetArmMesh(pCVar6,0,method_04);
              pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,method_05);
              (__this->fields)._part_arm_r = pUVar10;
              il2cpp_runtime_glue(&(__this->fields)._part_arm_r,pUVar10);
              pUVar10 = (__this->fields)._part_arm_r;
              if ((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar11 = (UnityEngine_Renderer_o *)
                            UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
                 pUVar11 != (UnityEngine_Renderer_o *)0x0)) {
                UnityEngine_Renderer__set_material(pUVar11,bodyMaterial,(MethodInfo *)0x0);
                pCVar6 = (__this->fields)._meshes;
                if (pCVar6 != (Characters_HumanSetupMeshes_o *)0x0) {
                  pSVar9 = Characters_HumanSetupMeshes__GetHandMesh(pCVar6,0,method_06);
                  pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,method_07);
                  (__this->fields)._part_hand_r = pUVar10;
                  il2cpp_runtime_glue(&(__this->fields)._part_hand_r,pUVar10);
                  pUVar10 = (__this->fields)._part_hand_r;
                  if ((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar11 = (UnityEngine_Renderer_o *)
                                UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
                     pUVar11 != (UnityEngine_Renderer_o *)0x0)) {
                    UnityEngine_Renderer__set_material(pUVar11,value,(MethodInfo *)0x0);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
LAB_03fdfe61:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$SetMaterial
// il2cpp: void Characters_HumanSetup__SetMaterial (Characters_HumanSetup_o* __this, UnityEngine_Renderer_o* renderer, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x3fe4290

void Characters_HumanSetup__SetMaterial
               (Characters_HumanSetup_o *__this,UnityEngine_Renderer_o *renderer,
               UnityEngine_Material_o *material,MethodInfo *method)

{
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__set_material(renderer,material,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateLowerBody
// il2cpp: void Characters_HumanSetup__CreateLowerBody (Characters_HumanSetup_o* __this, UnityEngine_Material_o* bodyMaterial, const MethodInfo* method);
// 0x3fdfe70

void Characters_HumanSetup__CreateLowerBody
               (Characters_HumanSetup_o *__this,UnityEngine_Material_o *bodyMaterial,
               MethodInfo *method)

{
  int iVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Characters_HumanSetupMeshes_o *pCVar4;
  System_String_o *path;
  UnityEngine_GameObject_o *pUVar5;
  System_String_o *str2;
  System_String_o *pSVar6;
  UnityEngine_Object_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_SkinnedMeshRenderer_o *__this_02;
  UnityEngine_SkinnedMeshRenderer_o *__this_03;
  UnityEngine_Mesh_o *value;
  UnityEngine_Renderer_o *__this_04;
  int32_t local_2c;
  
  if (DAT_0570412f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_0570412f = '\x01';
    iVar1 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = (__this->fields).CustomSet;
  }
  else {
    pSVar2 = (__this->fields).CustomSet;
  }
  if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Boots, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
     (pCVar4 = (__this->fields)._meshes, pCVar4 != (Characters_HumanSetupMeshes_o *)0x0)) {
    path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    local_2c = (pSVar3->fields)._value;
    if (DAT_05704140 == '\0') {
      il2cpp_init_method_metadata(&"character_leg_");
      DAT_05704140 = '\x01';
    }
    pSVar6 = (pCVar4->fields).CostumesPath;
    str2 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
    pSVar6 = System_String__Concat(pSVar6,"character_leg_",str2,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = ApplicationManagers_ResourceManager__LoadAsset(path,pSVar6,1,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      if (__this_00->klass != TypeInfo_GameObject) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(__this_00);
      }
      __this_01 = UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._part_leg;
      if (((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
          (__this_02 = (UnityEngine_SkinnedMeshRenderer_o *)
                       UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend),
          __this_01 != (UnityEngine_Transform_o *)0x0)) &&
         ((__this_03 = (UnityEngine_SkinnedMeshRenderer_o *)
                       UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)__this_01,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend),
          __this_03 != (UnityEngine_SkinnedMeshRenderer_o *)0x0 &&
          (value = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_03,(MethodInfo *)0x0),
          __this_02 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)))) {
        UnityEngine_SkinnedMeshRenderer__set_sharedMesh(__this_02,value,(MethodInfo *)0x0);
        pUVar5 = (__this->fields)._part_leg;
        if ((pUVar5 != (UnityEngine_GameObject_o *)0x0) &&
           (__this_04 = (UnityEngine_Renderer_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend),
           __this_04 != (UnityEngine_Renderer_o *)0x0)) {
          UnityEngine_Renderer__set_material(__this_04,bodyMaterial,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateUpperBody
// il2cpp: void Characters_HumanSetup__CreateUpperBody (Characters_HumanSetup_o* __this, UnityEngine_Material_o* bodyMaterial, const MethodInfo* method);
// 0x3fdec80

void Characters_HumanSetup__CreateUpperBody
               (Characters_HumanSetup_o *__this,UnityEngine_Material_o *bodyMaterial,
               MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetupMeshes_o *pCVar2;
  System_String_o *pSVar3;
  Characters_HumanSetupTextures_o *pCVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  Settings_HumanCustomSet_o *pSVar6;
  Settings_ColorSetting_o *pSVar7;
  Utility_Color255_o *__this_00;
  bool_conflict bVar8;
  System_String_o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Renderer_o *pUVar11;
  UnityEngine_Material_o *pUVar12;
  MethodInfo *pMVar13;
  long *plVar14;
  undefined8 *puVar15;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  UnityEngine_Object_o *pUVar16;
  Characters_HumanSetup_o *pCVar17;
  MethodInfo *in_R8;
  UnityEngine_Color_o color;
  
  if (DAT_05704130 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ClothFactory);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_Color255_get_Value);
    il2cpp_init_method_metadata(&"Type");
    il2cpp_init_method_metadata(&"Uniform");
    DAT_05704130 = '\x01';
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_upper_body;
    if (DAT_05704134 == '\0') goto LAB_03fdf583;
LAB_03fdecb6:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_upper_body;
    if (DAT_05704134 != '\0') goto LAB_03fdecb6;
LAB_03fdf583:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_brand_1;
    if (DAT_05704134 != '\0') goto LAB_03fdecf6;
LAB_03fdf5e7:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar16,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_brand_1;
    if (DAT_05704134 == '\0') goto LAB_03fdf5e7;
LAB_03fdecf6:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_brand_2;
    if (DAT_05704134 != '\0') goto LAB_03fded2f;
LAB_03fdf644:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar16,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_brand_2;
    if (DAT_05704134 == '\0') goto LAB_03fdf644;
LAB_03fded2f:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_brand_3;
    if (DAT_05704134 != '\0') goto LAB_03fded68;
LAB_03fdf6a1:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar16,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_brand_3;
    if (DAT_05704134 == '\0') goto LAB_03fdf6a1;
LAB_03fded68:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_brand_4;
    if (DAT_05704134 != '\0') goto LAB_03fdeda1;
LAB_03fdf6fe:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar16,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_brand_4;
    if (DAT_05704134 == '\0') goto LAB_03fdf6fe;
LAB_03fdeda1:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_chest_1;
    if (DAT_05704134 != '\0') goto LAB_03fdedda;
LAB_03fdf75b:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar16,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_chest_1;
    if (DAT_05704134 == '\0') goto LAB_03fdf75b;
LAB_03fdedda:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar8 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_chest_2;
    if (DAT_05704134 != '\0') goto LAB_03fdee13;
LAB_03fdf7b8:
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(pUVar16,(MethodInfo *)0x0);
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_chest_2;
    if (DAT_05704134 == '\0') goto LAB_03fdf7b8;
LAB_03fdee13:
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pMVar13 = (MethodInfo *)0x0;
  bVar8 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar13 = (MethodInfo *)0x0;
    UnityEngine_Object__Destroy(pUVar16,(MethodInfo *)0x0);
  }
  if ((char)(__this->fields).IsDeadBody == '\0') {
    pUVar16 = (UnityEngine_Object_o *)(__this->fields)._part_chest_3;
    if (DAT_05704134 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05704134 = '\x01';
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar13 = (MethodInfo *)0x0;
    bVar8 = UnityEngine_Object__op_Inequality(pUVar16,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pMVar13 = (MethodInfo *)0x0;
      UnityEngine_Object__Destroy(pUVar16,(MethodInfo *)0x0);
    }
  }
  Characters_HumanSetup__CreateCape(__this,pMVar13);
  pCVar2 = (__this->fields)._meshes;
  if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto LAB_03fdf8d0;
  pSVar9 = Characters_HumanSetupMeshes__GetChestMesh(pCVar2,1,method_00);
  bVar8 = System_String__op_Inequality
                    (pSVar9,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  pMVar13 = extraout_RDX;
  if ((char)bVar8 != '\0') {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar17 = (Characters_HumanSetup_o *)&(__this->fields)._part_chest_1;
    pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar10 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        (pSVar3,pSVar9,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    (__this->fields)._part_chest_1 = pUVar10;
    il2cpp_runtime_glue(pCVar17,pUVar10);
    Characters_HumanSetup__AttachToMount
              (pCVar17,(__this->fields)._part_chest_1,(__this->fields)._mount_chest,0,in_R8);
    pUVar10 = (__this->fields)._part_chest_1;
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto LAB_03fdf8d0;
    pUVar11 = (UnityEngine_Renderer_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer);
    pCVar4 = (__this->fields)._textures;
    if (pCVar4 == (Characters_HumanSetupTextures_o *)0x0) goto LAB_03fdf8d0;
    pSVar9 = Characters_HumanSetupTextures__GetChestTexture(pCVar4,1,method_01);
    pMVar13 = extraout_RDX_00;
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar13 = extraout_RDX_01;
    }
    pUVar12 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar9,0,pMVar13);
    if (pUVar11 == (UnityEngine_Renderer_o *)0x0) goto LAB_03fdf8d0;
    UnityEngine_Renderer__set_material(pUVar11,pUVar12,(MethodInfo *)0x0);
    pMVar13 = extraout_RDX_02;
  }
  pCVar2 = (__this->fields)._meshes;
  if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto LAB_03fdf8d0;
  pSVar9 = Characters_HumanSetupMeshes__GetChestMesh(pCVar2,2,pMVar13);
  bVar8 = System_String__op_Inequality
                    (pSVar9,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  pMVar13 = extraout_RDX_03;
  if ((char)bVar8 != '\0') {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar17 = (Characters_HumanSetup_o *)&(__this->fields)._part_chest_2;
    pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar10 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        (pSVar3,pSVar9,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
    (__this->fields)._part_chest_2 = pUVar10;
    il2cpp_runtime_glue(pCVar17,pUVar10);
    Characters_HumanSetup__AttachToMount
              (pCVar17,(__this->fields)._part_chest_2,(__this->fields)._mount_chest,0,in_R8);
    pUVar10 = (__this->fields)._part_chest_2;
    if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar11 = (UnityEngine_Renderer_o *)
                  UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
       pUVar11 == (UnityEngine_Renderer_o *)0x0)) goto LAB_03fdf8d0;
    UnityEngine_Renderer__set_material(pUVar11,bodyMaterial,(MethodInfo *)0x0);
    pMVar13 = extraout_RDX_04;
  }
  pCVar2 = (__this->fields)._meshes;
  if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto LAB_03fdf8d0;
  pSVar9 = Characters_HumanSetupMeshes__GetChestMesh(pCVar2,3,pMVar13);
  pMVar13 = (MethodInfo *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  bVar8 = System_String__op_Inequality(pSVar9,(System_String_o *)pMVar13,(MethodInfo *)0x0);
  if (((char)bVar8 != '\0') && ((char)(__this->fields).IsDeadBody == '\0')) {
    pUVar10 = (__this->fields)._mount_cloth;
    if (*(int *)(TypeInfo_ClothFactory + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar13 = (MethodInfo *)ClothFactory__GetCape(pUVar10,pSVar9,bodyMaterial,(MethodInfo *)0x0);
    (__this->fields)._part_chest_3 = (UnityEngine_GameObject_o *)pMVar13;
    il2cpp_runtime_glue(&(__this->fields)._part_chest_3);
  }
  pCVar2 = (__this->fields)._meshes;
  if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto LAB_03fdf8d0;
  pSVar9 = Characters_HumanSetupMeshes__GetBodyMesh(pCVar2,pMVar13);
  pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,method_02);
  (__this->fields)._part_upper_body = pUVar10;
  il2cpp_runtime_glue(&(__this->fields)._part_upper_body,pUVar10);
  pUVar10 = (__this->fields)._part_upper_body;
  if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar11 = (UnityEngine_Renderer_o *)
                UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
     pUVar11 == (UnityEngine_Renderer_o *)0x0)) goto LAB_03fdf8d0;
  UnityEngine_Renderer__set_material(pUVar11,bodyMaterial,(MethodInfo *)0x0);
  pCVar4 = (__this->fields)._textures;
  if (pCVar4 == (Characters_HumanSetupTextures_o *)0x0) goto LAB_03fdf8d0;
  pSVar9 = Characters_HumanSetupTextures__GetBrandTexture(pCVar4,(MethodInfo *)bodyMaterial);
  pMVar13 = extraout_RDX_05;
  if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar13 = extraout_RDX_06;
  }
  pUVar12 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar9,0,pMVar13);
  pSVar5 = (__this->fields).CurrentCostume;
  if (((pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
      (plVar14 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar5,"Type",(pSVar5->klass->vtable)._7_get_Item.method),
      plVar14 == (long *)0x0)) ||
     (pSVar9 = (System_String_o *)
               (**(code **)(*plVar14 + 0x1c8))(plVar14,*(undefined8 *)(*plVar14 + 0x1d0)),
     pSVar9 == (System_String_o *)0x0)) goto LAB_03fdf8d0;
  bVar8 = System_String__StartsWith(pSVar9,"Uniform",(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pCVar2 = (__this->fields)._meshes;
    if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto LAB_03fdf8d0;
    pSVar9 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar2,1,method_03);
    pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,method_04);
    (__this->fields)._part_brand_1 = pUVar10;
    il2cpp_runtime_glue(&(__this->fields)._part_brand_1,pUVar10);
    pUVar10 = (__this->fields)._part_brand_1;
    if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar11 = (UnityEngine_Renderer_o *)
                  UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
       pUVar11 == (UnityEngine_Renderer_o *)0x0)) goto LAB_03fdf8d0;
    UnityEngine_Renderer__set_material(pUVar11,pUVar12,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._meshes;
    if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto LAB_03fdf8d0;
    pSVar9 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar2,2,method_05);
    pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,method_06);
    (__this->fields)._part_brand_2 = pUVar10;
    il2cpp_runtime_glue(&(__this->fields)._part_brand_2,pUVar10);
    pUVar10 = (__this->fields)._part_brand_2;
    if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar11 = (UnityEngine_Renderer_o *)
                  UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
       pUVar11 == (UnityEngine_Renderer_o *)0x0)) goto LAB_03fdf8d0;
    UnityEngine_Renderer__set_material(pUVar11,pUVar12,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._meshes;
    if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto LAB_03fdf8d0;
    pSVar9 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar2,3,method_07);
    pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,method_08);
    (__this->fields)._part_brand_3 = pUVar10;
    il2cpp_runtime_glue(&(__this->fields)._part_brand_3,pUVar10);
    pUVar10 = (__this->fields)._part_brand_3;
    if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar11 = (UnityEngine_Renderer_o *)
                  UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
       pUVar11 == (UnityEngine_Renderer_o *)0x0)) goto LAB_03fdf8d0;
    UnityEngine_Renderer__set_material(pUVar11,pUVar12,(MethodInfo *)0x0);
    pCVar2 = (__this->fields)._meshes;
    if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto LAB_03fdf8d0;
    pSVar9 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar2,4,method_09);
    pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,method_10);
    (__this->fields)._part_brand_4 = pUVar10;
    il2cpp_runtime_glue(&(__this->fields)._part_brand_4,pUVar10);
    pUVar10 = (__this->fields)._part_brand_4;
    if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar11 = (UnityEngine_Renderer_o *)
                  UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
       pUVar11 == (UnityEngine_Renderer_o *)0x0)) goto LAB_03fdf8d0;
    UnityEngine_Renderer__set_material(pUVar11,pUVar12,(MethodInfo *)0x0);
  }
  pCVar4 = (__this->fields)._textures;
  if (pCVar4 == (Characters_HumanSetupTextures_o *)0x0) goto LAB_03fdf8d0;
  if (DAT_05704156 == '\0') {
    il2cpp_init_method_metadata(&"Skin/skin_blades");
    il2cpp_init_method_metadata(&"Skin/skin_TS");
    il2cpp_init_method_metadata(&"Skin/skin_AHSS");
    DAT_05704156 = '\x01';
  }
  pCVar17 = (pCVar4->fields)._setup;
  if (pCVar17 == (Characters_HumanSetup_o *)0x0) goto LAB_03fdf8d0;
  iVar1 = (pCVar17->fields).Weapon;
  if (iVar1 == 1) {
LAB_03fdf7ee:
    puVar15 = &"Skin/skin_AHSS";
    pSVar6 = (__this->fields).CustomSet;
  }
  else if (iVar1 == 2) {
    puVar15 = &"Skin/skin_TS";
    pSVar6 = (__this->fields).CustomSet;
  }
  else {
    if (iVar1 == 3) goto LAB_03fdf7ee;
    puVar15 = &"Skin/skin_blades";
    pSVar6 = (__this->fields).CustomSet;
  }
  if (((pSVar6 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar7 = (pSVar6->fields).SkinColor, pSVar7 != (Settings_ColorSetting_o *)0x0)) &&
     (__this_00 = (pSVar7->fields)._value, __this_00 != (Utility_Color255_o *)0x0)) {
    pSVar9 = (System_String_o *)*puVar15;
    pMVar13 = (MethodInfo *)0x0;
    color = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pUVar12 = Characters_HumanSetupMaterials__GetSkinMaterial(pSVar9,color,pMVar13);
    pUVar10 = (__this->fields)._part_head;
    if ((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar11 = (UnityEngine_Renderer_o *)
                  UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
       pUVar11 != (UnityEngine_Renderer_o *)0x0)) {
      UnityEngine_Renderer__set_material(pUVar11,pUVar12,(MethodInfo *)0x0);
      pUVar10 = (__this->fields)._part_chest;
      if ((pUVar10 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar11 = (UnityEngine_Renderer_o *)
                    UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Renderer_GetComponent_Renderer),
         pUVar11 != (UnityEngine_Renderer_o *)0x0)) {
        UnityEngine_Renderer__set_material(pUVar11,pUVar12,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03fdf8d0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$SetFacialTexture
// il2cpp: void Characters_HumanSetup__SetFacialTexture (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* go, System_String_o* type, int32_t id, bool unique, const MethodInfo* method);
// 0x3fe3920

void Characters_HumanSetup__SetFacialTexture
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *go,System_String_o *type,
               int32_t id,bool_conflict unique,MethodInfo *method)

{
  UnityEngine_Renderer_o *__this_00;
  System_String_o *pSVar1;
  UnityEngine_Material_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined1 local_24 [4];
  
  if (DAT_05704131 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponentInChildren_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetupMaterials);
    il2cpp_init_method_metadata(&TypeInfo_MaterialCache);
    DAT_05704131 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this_00 = (UnityEngine_Renderer_o *)
                UnityEngine_GameObject__GetComponentInChildren<object>(go,MethodInfo_Renderer_GetComponentInChildren_Renderer);
    if (id < 0) {
      if (*(int *)(TypeInfo_MaterialCache + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_material
                  (__this_00,*(UnityEngine_Material_o **)(*(long *)(TypeInfo_MaterialCache + 0xb8) + 0x10),
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pSVar1 = System_Int32__ToString((int32_t)local_24,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat(type,pSVar1,(MethodInfo *)0x0);
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_HumanSetupMaterials + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      value = Characters_HumanSetupMaterials__GetFaceMaterial(pSVar1,unique & 0xff,method_00);
      if (__this_00 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_material(__this_00,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$CreateMount
// il2cpp: UnityEngine_GameObject_o* Characters_HumanSetup__CreateMount (Characters_HumanSetup_o* __this, System_String_o* transformPath, const MethodInfo* method);
// 0x3fdb400

UnityEngine_GameObject_o *
Characters_HumanSetup__CreateMount
          (Characters_HumanSetup_o *__this,System_String_o *transformPath,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_String_o *n;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o UVar4;
  
  if (DAT_05704132 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&"Armature/Core/Controller_Body/hip/");
    DAT_05704132 = '\x01';
  }
  __this_00 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
  UnityEngine_GameObject___ctor(__this_00,(MethodInfo *)0x0);
  n = System_String__Concat("Armature/Core/Controller_Body/hip/",transformPath,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UVar3 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position(pUVar2,UVar3,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        UVar4 = UnityEngine_Transform__get_rotation(pUVar1,(MethodInfo *)0x0);
        UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(UVar4,(MethodInfo *)0x0);
        euler.fields.x = UVar3.fields.x * 57.29578;
        euler.fields.y = UVar3.fields.y * 57.29578;
        euler.fields.z = UVar3.fields.z * 57.29578;
        UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        UVar3.fields.y = UVar3.fields.y * 0.017453292;
        UVar3.fields.x = 4.712389;
        UVar3.fields.z = 0.0;
        UVar4 = UnityEngine_Quaternion__Internal_FromEulerRad(UVar3,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_rotation(pUVar2,UVar4,(MethodInfo *)0x0);
          pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          pUVar1 = UnityEngine_Transform__Find(pUVar1,n,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_parent(pUVar2,pUVar1,(MethodInfo *)0x0);
            return __this_00;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$GenerateCloth
// il2cpp: UnityEngine_GameObject_o* Characters_HumanSetup__GenerateCloth (Characters_HumanSetup_o* __this, System_String_o* cloth, const MethodInfo* method);
// 0x3fe3fd0

UnityEngine_GameObject_o *
Characters_HumanSetup__GenerateCloth
          (Characters_HumanSetup_o *__this,System_String_o *cloth,MethodInfo *method)

{
  System_String_o *path;
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_array *value;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  
  if (DAT_05704133 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRend);
    il2cpp_init_method_metadata(&MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    DAT_05704133 = '\x01';
  }
  pUVar2 = (__this->fields)._mount_cloth;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent<object>(pUVar2,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      pUVar2 = (__this->fields)._mount_cloth;
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto LAB_03fe4283;
      x = (UnityEngine_Object_o *)UnityEngine_GameObject__AddComponent<object>(pUVar2,MethodInfo_SkinnedMeshRenderer_AddComponent_SkinnedMeshRend);
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      value = UnityEngine_SkinnedMeshRenderer__get_bones
                        ((UnityEngine_SkinnedMeshRenderer_o *)x,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pUVar2 = (UnityEngine_GameObject_o *)
               ApplicationManagers_ResourceManager__InstantiateAsset<object>
                         (path,cloth,1,MethodInfo_GameObject_InstantiateAsset_GameObject);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = (UnityEngine_Component_o *)
                    UnityEngine_GameObject__GetComponent<object>(pUVar2,MethodInfo_SkinnedMeshRenderer_GetComponent_SkinnedMeshRend);
        if (__this_00 != (UnityEngine_Component_o *)0x0) {
          pUVar2 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_parent(pUVar3,pUVar4,(MethodInfo *)0x0);
                  pUVar3 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
                  if (DAT_056fdd15 == '\0') {
                    il2cpp_init_method_metadata(&TypeInfo_Vector3);
                    DAT_056fdd15 = '\x01';
                  }
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localPosition
                              (pUVar3,(UnityEngine_Vector3_o)
                                      **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                               (MethodInfo *)0x0);
                    pUVar3 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
                    if (DAT_056fe077 == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_Vector3);
                      DAT_056fe077 = '\x01';
                    }
                    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                      UnityEngine_Transform__set_localScale
                                (pUVar3,(UnityEngine_Vector3_o)
                                        *(UnityEngine_Vector3_Fields *)
                                         (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),(MethodInfo *)0x0);
                      UnityEngine_SkinnedMeshRenderer__set_bones
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,value,
                                 (MethodInfo *)0x0);
                      UnityEngine_SkinnedMeshRenderer__set_quality
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,4,(MethodInfo *)0x0)
                      ;
                      pUVar3 = UnityEngine_SkinnedMeshRenderer__get_rootBone
                                         ((UnityEngine_SkinnedMeshRenderer_o *)x,(MethodInfo *)0x0);
                      UnityEngine_SkinnedMeshRenderer__set_rootBone
                                ((UnityEngine_SkinnedMeshRenderer_o *)__this_00,pUVar3,
                                 (MethodInfo *)0x0);
                      pUVar2 = UnityEngine_Component__get_gameObject(__this_00,(MethodInfo *)0x0);
                      return pUVar2;
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
LAB_03fe4283:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$AttachToMount
// il2cpp: void Characters_HumanSetup__AttachToMount (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* obj, UnityEngine_GameObject_o* mount, bool setScale, const MethodInfo* method);
// 0x3fe1be0

void Characters_HumanSetup__AttachToMount
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *obj,
               UnityEngine_GameObject_o *mount,bool_conflict setScale,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *p;
  
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
    if (mount != (UnityEngine_GameObject_o *)0x0) {
      p = UnityEngine_GameObject__get_transform(mount,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar1,p,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar1,(UnityEngine_Vector3_o)
                            **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0
                    );
          pUVar1 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
          if (DAT_056fde1e == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Quaternion);
            DAT_056fde1e = '\x01';
          }
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation
                      (pUVar1,(UnityEngine_Quaternion_o)
                              **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                       (MethodInfo *)0x0);
            if ((char)setScale == '\0') {
              return;
            }
            pUVar1 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
            if (DAT_056fe077 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Vector3);
              DAT_056fe077 = '\x01';
            }
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localScale
                        (pUVar1,(UnityEngine_Vector3_o)
                                *(UnityEngine_Vector3_Fields *)
                                 (*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc),(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$DestroyIfExists
// il2cpp: void Characters_HumanSetup__DestroyIfExists (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x3fe1760

void Characters_HumanSetup__DestroyIfExists
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704134 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704134 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.HumanSetup$$.ctor
// il2cpp: void Characters_HumanSetup___ctor (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x3fe4e60

void Characters_HumanSetup___ctor(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05704135 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_UnityEngine_Renderer_UnityEngine_Ma);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_Renderer__Material);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Fire2");
    il2cpp_init_method_metadata(&"Lightning1");
    il2cpp_init_method_metadata(&"Fire1");
    DAT_05704135 = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,3);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "Fire1";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "Fire2";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        if (2 < (uint)pSVar1->max_length) {
          pSVar1->m_Items[2] = "Lightning1";
          il2cpp_runtime_glue(pSVar1->m_Items + 2);
          (__this->fields).TierEffects = pSVar1;
          il2cpp_runtime_glue(&(__this->fields).TierEffects,pSVar1);
          __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                      il2cpp_runtime_glue(TypeInfo_Dictionary_Renderer__Material);
          System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_UnityEngine_Renderer_UnityEngine_Ma);
          (__this->fields)._effectMaterialCache =
               (System_Collections_Generic_Dictionary_Renderer__Material__o *)__this_00;
          il2cpp_runtime_glue(&(__this->fields)._effectMaterialCache);
          UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetup$$.cctor
// il2cpp: void Characters_HumanSetup___cctor (const MethodInfo* method);
// 0x3fe4fb0

void Characters_HumanSetup___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05704136 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    DAT_05704136 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_HumanSetup + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x40) = __this;
  il2cpp_runtime_glue(lVar1 + 0x40,__this);
  return;
}


