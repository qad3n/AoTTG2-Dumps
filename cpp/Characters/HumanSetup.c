// Type: Characters.HumanSetup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/HumanSetup.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetup.cs
// --------------------------------

// Characters.HumanSetup$$get_HasWeapon
// il2cpp: bool Characters_HumanSetup__get_HasWeapon (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfb5b0

bool Characters_HumanSetup__get_HasWeapon(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  return (__this->fields).Weapon - 6U < 0xfffffffe;
}


// Characters.HumanSetup$$get_HasODM
// il2cpp: bool Characters_HumanSetup__get_HasODM (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfb5c0

bool Characters_HumanSetup__get_HasODM(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  return (__this->fields).Weapon != 5;
}


// Characters.HumanSetup$$get_HasCloak
// il2cpp: bool Characters_HumanSetup__get_HasCloak (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfb5d0

bool Characters_HumanSetup__get_HasCloak(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547657 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547657 = '\x01';
  }
  pSVar1 = (__this->fields).CustomSet;
  if (pSVar1 == (Settings_HumanCustomSet_o *)0x0) {
    return false;
  }
  pSVar2 = (pSVar1->fields).Cape;
  if (pSVar2 == (Settings_IntSetting_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pSVar2->fields)._value == 2;
}


// Characters.HumanSetup$$get_IsHooded
// il2cpp: bool Characters_HumanSetup__get_IsHooded (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfb620
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfb62d: cmp byte ptr [rip + 0x194c023], 0
// asm:   0x5bfb634: je 0x5bfb660
// asm:   0x5bfb642: jmp 0x5bfb6a6

bool Characters_HumanSetup__get_IsHooded(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547658 = '\x01';
  }
  if (Il2CppMethodInitialized_07547657 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547657 = '\x01';
    pSVar1 = (__this->fields).CustomSet;
  }
  else {
    pSVar1 = (__this->fields).CustomSet;
  }
  if (pSVar1 == (Settings_HumanCustomSet_o *)0x0) {
    return false;
  }
  pSVar2 = (pSVar1->fields).Cape;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar2->fields)._value != 2) {
      return false;
    }
    pSVar3 = (pSVar1->fields).HoodUp;
    if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
      return (pSVar3->fields)._value != false;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$Init
// il2cpp: void Characters_HumanSetup__Init (const MethodInfo* method);
// 0x5bfb6b0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfbc1c: mov r14, rsp
// asm:   0x5bfbc1f: lea r13, [rip + 0x167e45a]  ; TypeInfo_SimpleJSONFixed_JSONNode
// asm:   0x5bfbc26: lea rbp, [rip + 0x1695aeb]  ; MethodInfo_System_Collections_Generic_HashSet_string_Add
// asm:   0x5bfbc2d: nop dword ptr [rax]

void Characters_HumanSetup__Init(MethodInfo *method)

{
  Characters_HumanSetup_StaticFields *pCVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONArray_o *pSVar7;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07547659 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_JSONNode_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"HatCount");
    il2cpp_codegen_initialize_runtime_metadata(&"FaceCount");
    il2cpp_codegen_initialize_runtime_metadata(&"GlassCount");
    il2cpp_codegen_initialize_runtime_metadata(&"HeadCount");
    il2cpp_codegen_initialize_runtime_metadata(&"Costume");
    il2cpp_codegen_initialize_runtime_metadata(&"EyeCount");
    il2cpp_codegen_initialize_runtime_metadata(&"BackCount");
    il2cpp_codegen_initialize_runtime_metadata(&"Male");
    il2cpp_codegen_initialize_runtime_metadata(&"Female");
    il2cpp_codegen_initialize_runtime_metadata(&"CostumeInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Hair");
    il2cpp_codegen_initialize_runtime_metadata(&"UniqueItem");
    Il2CppMethodInitialized_07547659 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar4 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar4 = ApplicationManagers_ResourceManager__TryLoadText(pSVar4,"CostumeInfo",(MethodInfo *)0x0);
  pSVar5 = SimpleJSONFixed_JSON__Parse(pSVar4,(MethodInfo *)0x0);
  if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,"Costume",(pSVar5->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo = pSVar6;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo);
    pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,"Hair",(pSVar5->klass->vtable)._7_get_Item.method);
    pCVar1 = TypeInfo_Characters_HumanSetup->static_fields;
    pCVar1->HairInfo = pSVar6;
    Il2CppCodeGenWriteBarrier(&pCVar1->HairInfo);
    pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,"EyeCount",(pSVar5->klass->vtable)._7_get_Item.method);
    if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      iVar3 = (*(pSVar6->klass->vtable)._35_get_AsInt.methodPtr)
                        (pSVar6,(pSVar6->klass->vtable)._35_get_AsInt.method);
      TypeInfo_Characters_HumanSetup->static_fields->EyeCount = iVar3;
      pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,"FaceCount",(pSVar5->klass->vtable)._7_get_Item.method);
      if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        iVar3 = (*(pSVar6->klass->vtable)._35_get_AsInt.methodPtr)
                          (pSVar6,(pSVar6->klass->vtable)._35_get_AsInt.method);
        TypeInfo_Characters_HumanSetup->static_fields->FaceCount = iVar3;
        pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar5,"GlassCount",(pSVar5->klass->vtable)._7_get_Item.method);
        if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          iVar3 = (*(pSVar6->klass->vtable)._35_get_AsInt.methodPtr)
                            (pSVar6,(pSVar6->klass->vtable)._35_get_AsInt.method);
          TypeInfo_Characters_HumanSetup->static_fields->GlassCount = iVar3;
          pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar5,"BackCount",(pSVar5->klass->vtable)._7_get_Item.method);
          if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            iVar3 = (*(pSVar6->klass->vtable)._35_get_AsInt.methodPtr)
                              (pSVar6,(pSVar6->klass->vtable)._35_get_AsInt.method);
            TypeInfo_Characters_HumanSetup->static_fields->BackCount = iVar3;
            pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,"HatCount",(pSVar5->klass->vtable)._7_get_Item.method);
            if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              iVar3 = (*(pSVar6->klass->vtable)._35_get_AsInt.methodPtr)
                                (pSVar6,(pSVar6->klass->vtable)._35_get_AsInt.method);
              TypeInfo_Characters_HumanSetup->static_fields->HatCount = iVar3;
              pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar5,"HeadCount",(pSVar5->klass->vtable)._7_get_Item.method);
              if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                iVar3 = (*(pSVar6->klass->vtable)._35_get_AsInt.methodPtr)
                                  (pSVar6,(pSVar6->klass->vtable)._35_get_AsInt.method);
                pCVar1 = TypeInfo_Characters_HumanSetup->static_fields;
                pCVar1->HeadCount = iVar3;
                pSVar6 = pCVar1->CostumeInfo;
                if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                   (pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar6,"Male",
                                        (pSVar6->klass->vtable)._7_get_Item.method),
                   pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
                  iVar3 = (*(pSVar6->klass->vtable)._11_get_Count.methodPtr)
                                    (pSVar6,*(MethodInfo **)((long)&(pSVar6->klass->vtable)._11_get_Count + 8)
                                    );
                  pCVar1 = TypeInfo_Characters_HumanSetup->static_fields;
                  pCVar1->CostumeMCount = iVar3;
                  pSVar6 = pCVar1->CostumeInfo;
                  if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                     (pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                         (pSVar6,"Female",
                                          (pSVar6->klass->vtable)._7_get_Item.method),
                     pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
                    iVar3 = (*(pSVar6->klass->vtable)._11_get_Count.methodPtr)
                                      (pSVar6,*(MethodInfo **)
                                               ((long)&(pSVar6->klass->vtable)._11_get_Count + 8));
                    pCVar1 = TypeInfo_Characters_HumanSetup->static_fields;
                    pCVar1->CostumeFCount = iVar3;
                    pSVar6 = pCVar1->HairInfo;
                    if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                       (pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar6,"Male",
                                            (pSVar6->klass->vtable)._7_get_Item.method),
                       pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
                      iVar3 = (*(pSVar6->klass->vtable)._11_get_Count.methodPtr)
                                        (pSVar6,(pSVar6->klass->vtable)._11_get_Count.method);
                      pCVar1 = TypeInfo_Characters_HumanSetup->static_fields;
                      pCVar1->HairMCount = iVar3;
                      pSVar6 = pCVar1->HairInfo;
                      if ((pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                         (pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                             (pSVar6,"Female",
                                              (pSVar6->klass->vtable)._7_get_Item.method),
                         pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
                        iVar3 = (*(pSVar6->klass->vtable)._11_get_Count.methodPtr)
                                          (pSVar6,(pSVar6->klass->vtable)._11_get_Count.method);
                        TypeInfo_Characters_HumanSetup->static_fields->HairFCount = iVar3;
                        pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar5,"UniqueItem",
                                            (pSVar5->klass->vtable)._7_get_Item.method);
                        if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
                          pSVar7 = (*(pSVar5->klass->vtable)._45_get_AsArray.methodPtr)
                                             (pSVar5,(pSVar5->klass->vtable)._45_get_AsArray.method);
                          if (pSVar7 != (SimpleJSONFixed_JSONArray_o *)0x0) {
                            (**(code **)((long)pSVar7->klass + 0x338))
                                      (&local_78,pSVar7,*(undefined8 *)((long)pSVar7->klass + 0x340));
                            bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,
                                               (MethodInfo *)0x0);
                            if (bVar2) {
                              do {
                                SVar8 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,
                                                   (MethodInfo *)0x0);
                                if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_Characters_HumanSetup);
                                }
                                __this = (System_Collections_Generic_HashSet_object__o *)
                                         TypeInfo_Characters_HumanSetup->static_fields->UniqueItems;
                                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                                }
                                pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_5763740
                                                   (SVar8.fields.value,(MethodInfo *)0x0);
                                if (__this == (System_Collections_Generic_HashSet_object__o *)0x0)
                                goto label_05bfbcca;
                                System_Collections_Generic_HashSet_object___Add
                                          (__this,(Il2CppObject *)pSVar4,
                                           (MethodInfo_4FB4450 *)
                                           MethodInfo_System_Collections_Generic_HashSet_string_Add);
                                bVar2 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,
                                                   (MethodInfo *)0x0);
                              } while (bVar2);
                            }
                            if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0)
                            {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
                            }
                            Characters_HumanSetupMaterials__Init((MethodInfo *)0x0);
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
label_05bfbcca:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$Awake
// il2cpp: void Characters_HumanSetup__Awake (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfbcd0

void Characters_HumanSetup__Awake(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  undefined1 auVar2 [16];
  undefined1 auVar3 [16];
  UnityEngine_Bounds_o *pUVar4;
  Characters_HumanSetupMeshes_o *__this_00;
  Characters_HumanSetupTextures_o *__this_01;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_MeshFilter_o *__this_02;
  UnityEngine_Mesh_o *__this_03;
  UnityEngine_Vector3_StaticFields *pUVar9;
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
  float fVar10;
  undefined4 extraout_XMM0_Db;
  undefined4 extraout_XMM0_Db_00;
  undefined4 extraout_XMM0_Db_01;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  float fVar11;
  undefined4 in_XMM1_Db;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined1 auVar14 [16];
  UnityEngine_Vector3_o UVar15;
  undefined1 auStack_50 [12];
  float fStack_44;
  UnityEngine_Bounds_o UStack_38;
  
  if (Il2CppMethodInitialized_0754765a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_MeshFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMeshes);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupTextures);
    il2cpp_codegen_initialize_runtime_metadata(&"spine/chest/shoulder_L/upper_arm_L/forearm_L");
    il2cpp_codegen_initialize_runtime_metadata(&"spine/chest/shoulder_R/upper_arm_R/forearm_R");
    il2cpp_codegen_initialize_runtime_metadata(&"spine/chest/shoulder_R/upper_arm_R/forearm_R/hand_R");
    il2cpp_codegen_initialize_runtime_metadata(&"spine");
    il2cpp_codegen_initialize_runtime_metadata(&"spine/chest/neck/head");
    il2cpp_codegen_initialize_runtime_metadata(&"char_head");
    il2cpp_codegen_initialize_runtime_metadata(&"spine/chest/shoulder_L/upper_arm_L/forearm_L/hand_L");
    il2cpp_codegen_initialize_runtime_metadata(&"Armature/Core/Controller_Body/hip");
    il2cpp_codegen_initialize_runtime_metadata(&"character_leg");
    il2cpp_codegen_initialize_runtime_metadata(&"spine/chest");
    il2cpp_codegen_initialize_runtime_metadata(&"thigh_L");
    il2cpp_codegen_initialize_runtime_metadata(&"thigh_R");
    il2cpp_codegen_initialize_runtime_metadata(&"character_chest");
    Il2CppMethodInitialized_0754765a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanSetupMeshes);
  Characters_HumanSetupMeshes___ctor(__this_00,__this,(MethodInfo *)0x0);
  (__this->fields)._meshes = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._meshes);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanSetupTextures);
  Characters_HumanSetupTextures___ctor(__this_01,__this,(MethodInfo *)0x0);
  (__this->fields)._textures = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._textures);
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
       (pUVar5 = UnityEngine_Transform__Find(pUVar5,"Armature/Core/Controller_Body/hip",(MethodInfo *)0x0),
       pUVar5 == (UnityEngine_Transform_o *)0x0)) ||
      (pUVar6 = UnityEngine_Transform__Find(pUVar5,"spine/chest/neck/head",(MethodInfo *)0x0),
      pUVar6 == (UnityEngine_Transform_o *)0x0)) ||
     (pUVar7 = UnityEngine_Transform__Find(pUVar6,"char_head",(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05bfc640;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  (__this->fields)._part_head = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._part_head);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar7 = UnityEngine_Transform__Find(pUVar7,"character_leg",(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05bfc640;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  (__this->fields)._part_leg = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._part_leg);
  pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar7 == (UnityEngine_Transform_o *)0x0) ||
     (pUVar7 = UnityEngine_Transform__Find(pUVar7,"character_chest",(MethodInfo *)0x0),
     pUVar7 == (UnityEngine_Transform_o *)0x0)) goto label_05bfc640;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
  (__this->fields)._part_chest = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._part_chest);
  pUVar5 = UnityEngine_Transform__Find(pUVar5,"spine/chest",(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Transform_o *)0x0) goto label_05bfc640;
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
  (__this->fields)._mount_back = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_back);
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
  (__this->fields)._mount_hat = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_hat);
  pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
  (__this->fields)._mount_head_decor = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_head_decor);
  pUVar8 = Characters_HumanSetup__CreateMount(__this,"spine/chest",method_00);
  (__this->fields)._mount_chest = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_chest);
  pUVar8 = Characters_HumanSetup__CreateMount(__this,"spine/chest",method_01);
  (__this->fields)._mount_3dmg = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_3dmg);
  pUVar8 = Characters_HumanSetup__CreateMount(__this,"spine",method_02);
  (__this->fields)._mount_gas_l = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_gas_l);
  pUVar8 = Characters_HumanSetup__CreateMount(__this,"spine",method_03);
  (__this->fields)._mount_gas_r = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_gas_r);
  pUVar8 = Characters_HumanSetup__CreateMount(__this,"thigh_L",method_04);
  (__this->fields)._mount_gun_mag_l = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_gun_mag_l);
  pUVar8 = Characters_HumanSetup__CreateMount(__this,"thigh_R",method_05);
  (__this->fields)._mount_gun_mag_r = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_gun_mag_r);
  pUVar8 = Characters_HumanSetup__CreateMount(__this,"spine/chest/shoulder_L/upper_arm_L/forearm_L/hand_L",method_06);
  (__this->fields)._mount_weapon_l = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_weapon_l);
  pUVar8 = Characters_HumanSetup__CreateMount(__this,"spine/chest/shoulder_R/upper_arm_R/forearm_R/hand_R",method_07);
  (__this->fields)._mount_weapon_r = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_weapon_r);
  pUVar8 = Characters_HumanSetup__CreateMount(__this,"spine/chest/shoulder_L/upper_arm_L/forearm_L",method_08);
  (__this->fields)._mount_ts_l = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_ts_l);
  pUVar8 = Characters_HumanSetup__CreateMount(__this,"spine/chest/shoulder_R/upper_arm_R/forearm_R",method_09);
  (__this->fields)._mount_ts_r = pUVar8;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_ts_r);
  (__this->fields)._mount_cloth = (__this->fields)._part_leg;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_cloth);
  pUVar8 = (__this->fields)._part_head;
  if (((pUVar8 == (UnityEngine_GameObject_o *)0x0) ||
      (__this_02 = UnityEngine_GameObject__GetComponent_object_
                             (pUVar8,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_MeshFilter),
      __this_02 == (UnityEngine_MeshFilter_o *)0x0)) ||
     (__this_03 = UnityEngine_MeshFilter__get_sharedMesh(__this_02,(MethodInfo *)0x0),
     __this_03 == (UnityEngine_Mesh_o *)0x0)) goto label_05bfc640;
  UnityEngine_Mesh__get_bounds(&UStack_38,__this_03,(MethodInfo *)0x0);
  pUVar4 = &(__this->fields)._headBounds;
  (pUVar4->fields).m_Extents.fields.y = UStack_38.fields.m_Extents.fields.y;
  (pUVar4->fields).m_Extents.fields.z = UStack_38.fields.m_Extents.fields.z;
  pUVar4 = &(__this->fields)._headBounds;
  (pUVar4->fields).m_Center.fields.x = UStack_38.fields.m_Center.fields.x;
  (pUVar4->fields).m_Center.fields.y = UStack_38.fields.m_Center.fields.y;
  *(undefined8 *)&(__this->fields)._headBounds.fields.m_Center.fields.z = UStack_38.fields._8_8_;
  pUVar8 = (__this->fields)._part_head;
  if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_05bfc640;
  pUVar5 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar6 == (UnityEngine_Transform_o *)0x0) ||
     (UVar15 = UnityEngine_Transform__get_forward(pUVar6,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05bfc640;
  UVar15 = UnityEngine_Transform__InverseTransformDirection(pUVar5,UVar15,(MethodInfo *)0x0);
  fVar11 = UVar15.fields.z;
  unique0x10000398 = extraout_XMM0_Dc;
  unique0x10000390 = UVar15.fields._0_8_;
  unique0x1000039c = extraout_XMM0_Dd;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    in_XMM1_Db = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    auStack_50._0_4_ = 0.0;
    auStack_50._4_4_ = 0.0;
    if (g_data_0753e729 == '\0') goto label_05bfc530;
label_05bfc21c:
    auStack_50._0_4_ = 0.0;
    auStack_50._4_4_ = 0.0;
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    auStack_50._0_4_ = 0.0;
    auStack_50._4_4_ = 0.0;
    if (g_data_0753e729 != '\0') goto label_05bfc21c;
label_05bfc530:
    auStack_50._0_4_ = 0.0;
    auStack_50._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    in_XMM1_Db = 0;
    g_data_0753e729 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    in_XMM1_Db = 0;
  }
  fVar10 = fVar11 * fVar11 + fStack_44 * fStack_44 + (float)auStack_50._8_4_ * (float)auStack_50._8_4_;
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
    uVar12 = 0;
    in_XMM1_Db = extraout_XMM0_Db;
    if (1e-05 < fVar10) goto label_05bfc292;
label_05bfc266:
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar11 = (pUVar9->zeroVector).fields.z;
    uVar12 = 0;
  }
  else {
    fVar10 = SQRT(fVar10);
    uVar12 = in_XMM1_Db;
    if (fVar10 <= 1e-05) goto label_05bfc266;
label_05bfc292:
    fVar11 = fVar11 / fVar10;
    auVar14._4_4_ = fVar10;
    auVar14._0_4_ = fVar10;
    auVar14._8_4_ = in_XMM1_Db;
    auVar14._12_4_ = in_XMM1_Db;
    auVar14 = divps(stack0xffffffffffffffb8,auVar14);
    auStack_50._0_4_ = auVar14._0_4_;
    auStack_50._4_4_ = auVar14._4_4_;
    pUVar9 = (UnityEngine_Vector3_StaticFields *)auStack_50;
  }
  fVar10 = (pUVar9->zeroVector).fields.y;
  (__this->fields)._hairClipForward.fields.x = (pUVar9->zeroVector).fields.x;
  (__this->fields)._hairClipForward.fields.y = fVar10;
  (__this->fields)._hairClipForward.fields.z = fVar11;
  pUVar8 = (__this->fields)._part_head;
  if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_05bfc640;
  pUVar5 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((pUVar6 == (UnityEngine_Transform_o *)0x0) ||
     (UVar15 = UnityEngine_Transform__get_right(pUVar6,(MethodInfo *)0x0),
     pUVar5 == (UnityEngine_Transform_o *)0x0)) goto label_05bfc640;
  UVar15 = UnityEngine_Transform__InverseTransformDirection(pUVar5,UVar15,(MethodInfo *)0x0);
  fVar11 = UVar15.fields.z;
  unique0x100003bc = extraout_XMM0_Dc_00;
  unique0x100003b4 = UVar15.fields._0_8_;
  unique0x100003c0 = extraout_XMM0_Dd_00;
  if (Il2CppMethodInitialized_0753e72d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    uVar12 = 0;
    Il2CppMethodInitialized_0753e72d = '\x01';
    auStack_50._0_4_ = 0.0;
    auStack_50._4_4_ = 0.0;
    if (g_data_0753e729 == '\0') goto label_05bfc59f;
label_05bfc33c:
    auStack_50._0_4_ = 0.0;
    auStack_50._4_4_ = 0.0;
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  else {
    auStack_50._0_4_ = 0.0;
    auStack_50._4_4_ = 0.0;
    if (g_data_0753e729 != '\0') goto label_05bfc33c;
label_05bfc59f:
    auStack_50._0_4_ = 0.0;
    auStack_50._4_4_ = 0.0;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    uVar12 = 0;
    g_data_0753e729 = '\x01';
    uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
    uVar12 = 0;
  }
  fVar10 = fVar11 * fVar11 + fStack_44 * fStack_44 + (float)auStack_50._8_4_ * (float)auStack_50._8_4_;
  if (fVar10 < 0.0) {
    fVar10 = sqrtf(fVar10);
    uVar13 = 0;
    uVar12 = extraout_XMM0_Db_00;
    if (1e-05 < fVar10) goto label_05bfc3ab;
label_05bfc37f:
    pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
    fVar11 = (pUVar9->zeroVector).fields.z;
    uVar13 = 0;
  }
  else {
    fVar10 = SQRT(fVar10);
    uVar13 = uVar12;
    if (fVar10 <= 1e-05) goto label_05bfc37f;
label_05bfc3ab:
    fVar11 = fVar11 / fVar10;
    auVar3._4_4_ = fVar10;
    auVar3._0_4_ = fVar10;
    auVar3._8_4_ = uVar12;
    auVar3._12_4_ = uVar12;
    auVar14 = divps(stack0xffffffffffffffb8,auVar3);
    auStack_50._0_4_ = auVar14._0_4_;
    auStack_50._4_4_ = auVar14._4_4_;
    pUVar9 = (UnityEngine_Vector3_StaticFields *)auStack_50;
  }
  fVar10 = (pUVar9->zeroVector).fields.y;
  (__this->fields)._hairClipRight.fields.x = (pUVar9->zeroVector).fields.x;
  (__this->fields)._hairClipRight.fields.y = fVar10;
  (__this->fields)._hairClipRight.fields.z = fVar11;
  pUVar8 = (__this->fields)._part_head;
  if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if ((pUVar6 != (UnityEngine_Transform_o *)0x0) &&
       (UVar15 = UnityEngine_Transform__get_up(pUVar6,(MethodInfo *)0x0),
       pUVar5 != (UnityEngine_Transform_o *)0x0)) {
      UVar15 = UnityEngine_Transform__InverseTransformDirection(pUVar5,UVar15,(MethodInfo *)0x0);
      fVar11 = UVar15.fields.z;
      unique0x100003e0 = extraout_XMM0_Dc_01;
      unique0x100003d8 = UVar15.fields._0_8_;
      unique0x100003e4 = extraout_XMM0_Dd_01;
      if (Il2CppMethodInitialized_0753e72d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        uVar13 = 0;
        Il2CppMethodInitialized_0753e72d = '\x01';
        auStack_50._0_4_ = 0.0;
        auStack_50._4_4_ = 0.0;
      }
      else {
        auStack_50._0_4_ = 0.0;
        auStack_50._4_4_ = 0.0;
      }
      if (g_data_0753e729 == '\0') {
        auStack_50._0_4_ = 0.0;
        auStack_50._4_4_ = 0.0;
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
        uVar13 = 0;
        g_data_0753e729 = '\x01';
        uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
      }
      else {
        auStack_50._0_4_ = 0.0;
        auStack_50._4_4_ = 0.0;
        uVar1 = (((Il2CppClass *)TypeInfo_System_Math)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        uVar13 = 0;
      }
      fVar10 = fVar11 * fVar11 + fStack_44 * fStack_44 + (float)auStack_50._8_4_ * (float)auStack_50._8_4_;
      if (fVar10 < 0.0) {
        fVar10 = sqrtf(fVar10);
        uVar13 = extraout_XMM0_Db_01;
      }
      else {
        fVar10 = SQRT(fVar10);
      }
      if (1e-05 < fVar10) {
        fVar11 = fVar11 / fVar10;
        auVar2._4_4_ = fVar10;
        auVar2._0_4_ = fVar10;
        auVar2._8_4_ = uVar13;
        auVar2._12_4_ = uVar13;
        auVar14 = divps(unique0x10000b5a,auVar2);
        auStack_50._0_4_ = auVar14._0_4_;
        auStack_50._4_4_ = auVar14._4_4_;
        pUVar9 = (UnityEngine_Vector3_StaticFields *)auStack_50;
      }
      else {
        pUVar9 = TypeInfo_UnityEngine_Vector3->static_fields;
        fVar11 = (pUVar9->zeroVector).fields.z;
      }
      fVar10 = (pUVar9->zeroVector).fields.y;
      (__this->fields)._hairClipUp.fields.x = (pUVar9->zeroVector).fields.x;
      (__this->fields)._hairClipUp.fields.y = fVar10;
      (__this->fields)._hairClipUp.fields.z = fVar11;
      return;
    }
  }
label_05bfc640:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$LateUpdate
// il2cpp: void Characters_HumanSetup__LateUpdate (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfc7d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfc7f2: jmp 0x5bfc865

void Characters_HumanSetup__LateUpdate(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547658 = '\x01';
    if (Il2CppMethodInitialized_07547657 == '\0') goto label_05bfc810;
label_05bfc7e6:
    pSVar1 = (__this->fields).CustomSet;
  }
  else {
    if (Il2CppMethodInitialized_07547657 != '\0') goto label_05bfc7e6;
label_05bfc810:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547657 = '\x01';
    pSVar1 = (__this->fields).CustomSet;
  }
  if (pSVar1 != (Settings_HumanCustomSet_o *)0x0) {
    pSVar2 = (pSVar1->fields).Cape;
    if (pSVar2 == (Settings_IntSetting_o *)0x0) {
label_05bfc870:
      ThrowNullReferenceException();
    }
    if ((pSVar2->fields)._value == 2) {
      pSVar3 = (pSVar1->fields).HoodUp;
      if (pSVar3 == (Settings_BoolSetting_o *)0x0) goto label_05bfc870;
      if ((((pSVar3->fields)._value != false) && ((__this->fields).IsDeadBody == false)) &&
         ((__this->fields).Deleted == false)) {
        Characters_HumanSetup__UpdateHairClipPlane(__this,method);
        return;
      }
    }
  }
  return;
}


// Characters.HumanSetup$$RefreshHairMaterials
// il2cpp: void Characters_HumanSetup__RefreshHairMaterials (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfcf30
// eh: try 0x5bfd103..0x5bfd312 -> pad 0x5bfd348 (+27 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bfd364..0x5bfd369 -> pad 0x5bfd38e cleanup
// eh: try 0x5bfd391..0x5bfd39b -> pad 0x5bfd3a3 catch (...) [compiler noexcept guard]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfcfdb: jmp 0x5bfd067
// asm:   0x5bfd15b: jmp 0x5bfd16e
// asm:   0x5bfd312: jmp 0x5bfd348
// asm:   0x5bfd314: jmp 0x5bfd348
// asm:   0x5bfd316: jmp 0x5bfd348
// asm:   0x5bfd318: jmp 0x5bfd348
// asm:   0x5bfd31a: jmp 0x5bfd348
// asm:   0x5bfd31c: jmp 0x5bfd348
// asm:   0x5bfd31e: jmp 0x5bfd348
// asm:   0x5bfd320: jmp 0x5bfd348
// asm:   0x5bfd322: jmp 0x5bfd348
// asm:   0x5bfd324: jmp 0x5bfd348
// asm:   0x5bfd326: jmp 0x5bfd348
// asm:   0x5bfd328: jmp 0x5bfd348
// asm:   0x5bfd32a: jmp 0x5bfd348
// asm:   0x5bfd32c: jmp 0x5bfd348
// asm:   0x5bfd32e: jmp 0x5bfd348
// asm:   0x5bfd330: jmp 0x5bfd348
// asm:   0x5bfd332: jmp 0x5bfd348
// asm:   0x5bfd334: jmp 0x5bfd348
// asm:   0x5bfd336: jmp 0x5bfd348
// asm:   0x5bfd338: jmp 0x5bfd348
// asm:   0x5bfd33a: jmp 0x5bfd348
// asm:   0x5bfd33c: jmp 0x5bfd348
// asm:   0x5bfd33e: jmp 0x5bfd348
// asm:   0x5bfd340: jmp 0x5bfd348
// asm:   0x5bfd342: jmp 0x5bfd348
// asm:   0x5bfd344: jmp 0x5bfd348
// asm:   0x5bfd346: jmp 0x5bfd348
// asm:   0x5bfd348: mov rbx, rax
// asm:   0x5bfd34b: cmp edx, 1
// asm:   0x5bfd34e: mov rbp, qword ptr [rsp]
// asm:   0x5bfd352: jne 0x5bfd391
// asm:   0x5bfd354: mov rdi, rbx
// asm:   0x5bfd357: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bfd35c: mov rbx, qword ptr [rax]
// asm:   0x5bfd35f: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5bfd364: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bfd369: lea rax, [rip + 0x1691560]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x5bfd370: mov rsi, qword ptr [rax]
// asm:   0x5bfd373: lea rdi, [rsp + 0x10]
// asm:   0x5bfd378: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5bfd37d: test rbx, rbx
// asm:   0x5bfd380: je 0x5bfd2dd
// asm:   0x5bfd386: mov rdi, rbx
// asm:   0x5bfd389: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bfd38e: mov rbx, rax
// asm:   0x5bfd391: lea rdi, [rsp + 0x30]
// asm:   0x5bfd396: call 0x2fd8f80  ; il2cpp_runtime_helper_02fd8f80()
// asm:   0x5bfd39b: mov rdi, rbx
// asm:   0x5bfd39e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bfd3a3: mov rdi, rax
// asm:   0x5bfd3a6: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_HumanSetup__RefreshHairMaterials(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  System_Collections_Generic_List_Renderer__o *__this_00;
  UnityEngine_Object_o *x;
  bool bVar5;
  int32_t value;
  System_String_o **ppSVar6;
  UnityEngine_Object_o *x_00;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_Object_o *pUVar8;
  System_String_o *pSVar9;
  System_String_array *value_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar10;
  undefined1 local_68 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_60;
  UnityEngine_Object_o *local_58;
  undefined1 local_48 [16];
  UnityEngine_Object_o *local_38;
  
  if (Il2CppMethodInitialized_0754765b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Universal Render Pipeline/Lit");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG/Hair");
    Il2CppMethodInitialized_0754765b = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_58 = (UnityEngine_Object_o *)0x0;
  if (Il2CppMethodInitialized_07547658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547658 = '\x01';
    if (Il2CppMethodInitialized_07547657 == '\0') goto label_05bfcffc;
label_05bfcfc8:
    pSVar2 = (__this->fields).CustomSet;
  }
  else {
    if (Il2CppMethodInitialized_07547657 != '\0') goto label_05bfcfc8;
label_05bfcffc:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547657 = '\x01';
    pSVar2 = (__this->fields).CustomSet;
  }
  ppSVar6 = &"Universal Render Pipeline/Lit";
  if (pSVar2 != (Settings_HumanCustomSet_o *)0x0) {
    ppSVar6 = &"Universal Render Pipeline/Lit";
    pSVar3 = (pSVar2->fields).Cape;
    if (pSVar3 == (Settings_IntSetting_o *)0x0) goto label_05bfd308;
    if ((pSVar3->fields)._value == 2) {
      pSVar4 = (pSVar2->fields).HoodUp;
      if (pSVar4 == (Settings_BoolSetting_o *)0x0) goto label_05bfd308;
      if ((pSVar4->fields)._value != false) {
        if ((__this->fields).IsDeadBody == false) {
          ppSVar6 = &"AoTTG/Hair";
        }
        else {
          ppSVar6 = &"Universal Render Pipeline/Lit";
        }
      }
    }
  }
  x_00 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(*ppSVar6,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar10 = (MethodInfo *)0x0;
  bVar5 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    __this_00 = (__this->fields)._hairRenderers;
    if (__this_00 == (System_Collections_Generic_List_Renderer__o *)0x0) {
label_05bfd308:
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_58 = local_38;
    local_68 = (undefined1  [8])local_48._0_8_;
    pSStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_48._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
label_05bfd100:
    bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                       (MethodInfo_4C45C50 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    x = local_58;
    if (bVar5) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if (x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar7 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
        uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        pUVar7 = (UnityEngine_Material_o *)0x0;
        uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar5) {
        if (pUVar7 == (UnityEngine_Material_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar8 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(pUVar7,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar5) {
          pUVar8 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(pUVar7,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar5 = UnityEngine_Object__op_Equality(pUVar8,x_00,(MethodInfo *)0x0);
          if (!bVar5) {
            pUVar8 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(pUVar7,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_Object_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar9 = UnityEngine_Object__get_name(pUVar8,(MethodInfo *)0x0);
            bVar5 = System_String__op_Inequality(pSVar9,"Universal Render Pipeline/Lit",(MethodInfo *)0x0);
            pMVar10 = extraout_RDX;
            if (bVar5) {
              pUVar8 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(pUVar7,(MethodInfo *)0x0);
              if (pUVar8 == (UnityEngine_Object_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar9 = UnityEngine_Object__get_name(pUVar8,(MethodInfo *)0x0);
              bVar5 = System_String__op_Inequality(pSVar9,"AoTTG/Hair",(MethodInfo *)0x0);
              pMVar10 = extraout_RDX_00;
              if (bVar5) goto label_05bfd100;
            }
            pUVar7 = Characters_HumanSetup__OwnInstance(__this,(UnityEngine_Renderer_o *)x,pMVar10);
            if (pUVar7 == (UnityEngine_Material_o *)0x0) {
              ThrowNullReferenceException();
            }
            value = UnityEngine_Material__get_renderQueue(pUVar7,(MethodInfo *)0x0);
            value_00 = UnityEngine_Material__get_shaderKeywords(pUVar7,(MethodInfo *)0x0);
            UnityEngine_Material__set_shader(pUVar7,(UnityEngine_Shader_o *)x_00,(MethodInfo *)0x0);
            UnityEngine_Material__set_shaderKeywords(pUVar7,value_00,(MethodInfo *)0x0);
            UnityEngine_Material__set_renderQueue(pUVar7,value,(MethodInfo *)0x0);
          }
        }
      }
      goto label_05bfd100;
    }
    pMVar10 = MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
  }
  Characters_HumanSetup__UpdateHairClipPlane(__this,pMVar10);
  return;
}


// Characters.HumanSetup$$UpdateHairClipPlane
// il2cpp: void Characters_HumanSetup__UpdateHairClipPlane (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfc880
// eh: try 0x5bfca04..0x5bfce69 -> pad 0x5bfced1 (+30 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5bfceb1..0x5bfceb6 -> pad 0x5bfceb8 cleanup
// eh: try 0x5bfcebb..0x5bfcec5 -> pad 0x5bfcf28 catch (...) [compiler noexcept guard]
// eh: try 0x5bfcee9..0x5bfceee -> pad 0x5bfcf13 cleanup
// eh: try 0x5bfcf16..0x5bfcf20 -> pad 0x5bfcf28 catch (...) [compiler noexcept guard]
// asm: 66 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfc928: jmp 0x5bfc9a1
// asm:   0x5bfce69: jmp 0x5bfce99
// asm:   0x5bfce6b: jmp 0x5bfce99
// asm:   0x5bfce6d: jmp 0x5bfce99
// asm:   0x5bfce6f: jmp 0x5bfce99
// asm:   0x5bfce71: jmp 0x5bfce99
// asm:   0x5bfce73: jmp 0x5bfce99
// asm:   0x5bfce75: jmp 0x5bfce99
// asm:   0x5bfce77: jmp 0x5bfce99
// asm:   0x5bfce79: jmp 0x5bfce99
// asm:   0x5bfce7b: jmp 0x5bfce99
// asm:   0x5bfce7d: jmp 0x5bfce99
// asm:   0x5bfce7f: jmp 0x5bfce99
// asm:   0x5bfce81: jmp 0x5bfce99
// asm:   0x5bfce83: jmp 0x5bfce99
// asm:   0x5bfce85: jmp 0x5bfce99
// asm:   0x5bfce87: jmp 0x5bfce99
// asm:   0x5bfce89: jmp 0x5bfce99
// asm:   0x5bfce8b: jmp 0x5bfce99
// asm:   0x5bfce8d: jmp 0x5bfce99
// asm:   0x5bfce8f: jmp 0x5bfce99
// asm:   0x5bfce91: jmp 0x5bfce99
// asm:   0x5bfce93: jmp 0x5bfce99
// asm:   0x5bfce95: jmp 0x5bfce99
// asm:   0x5bfce97: jmp 0x5bfce99
// asm:   0x5bfce99: mov rbx, rax
// asm:   0x5bfce9c: cmp edx, 1
// asm:   0x5bfce9f: jne 0x5bfcebb
// asm:   0x5bfcea1: mov rdi, rbx
// asm:   0x5bfcea4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bfcea9: mov rbx, qword ptr [rax]
// asm:   0x5bfceac: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5bfceb1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bfceb6: jmp 0x5bfceee
// asm:   0x5bfceb8: mov rbx, rax
// asm:   0x5bfcebb: lea rdi, [rsp + 0x30]
// asm:   0x5bfcec0: call 0x2fd8fe0  ; il2cpp_runtime_helper_02fd8fe0()
// asm:   0x5bfcec5: jmp 0x5bfcf20
// asm:   0x5bfcec7: jmp 0x5bfced1
// asm:   0x5bfcec9: jmp 0x5bfced1
// asm:   0x5bfcecb: jmp 0x5bfced1
// asm:   0x5bfcecd: jmp 0x5bfced1
// asm:   0x5bfcecf: jmp 0x5bfced1
// asm:   0x5bfced1: mov rbx, rax
// asm:   0x5bfced4: cmp edx, 1
// asm:   0x5bfced7: jne 0x5bfcf16
// asm:   0x5bfced9: mov rdi, rbx
// asm:   0x5bfcedc: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5bfcee1: mov rbx, qword ptr [rax]
// asm:   0x5bfcee4: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5bfcee9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5bfceee: lea rax, [rip + 0x16919db]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x5bfcef5: mov rsi, qword ptr [rax]
// asm:   0x5bfcef8: lea rdi, [rsp + 0x10]
// asm:   0x5bfcefd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5bfcf02: test rbx, rbx
// asm:   0x5bfcf05: je 0x5bfce2f
// asm:   0x5bfcf0b: mov rdi, rbx
// asm:   0x5bfcf0e: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5bfcf13: mov rbx, rax
// asm:   0x5bfcf16: lea rdi, [rsp + 0x30]
// asm:   0x5bfcf1b: call 0x2fd8fb0  ; il2cpp_runtime_helper_02fd8fb0()
// asm:   0x5bfcf20: mov rdi, rbx
// asm:   0x5bfcf23: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5bfcf28: mov rdi, rax
// asm:   0x5bfcf2b: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_HumanSetup__UpdateHairClipPlane(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_MaterialPropertyBlock_o **targetAddress;
  ulong uVar1;
  ulong uVar2;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  System_Collections_Generic_List_Renderer__o *pSVar6;
  Il2CppObject *pIVar7;
  bool bVar8;
  UnityEngine_GameObject_o *__this_00;
  undefined8 extraout_RAX;
  UnityEngine_MaterialPropertyBlock_o *pUVar9;
  MethodInfo *method_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 uVar10;
  undefined4 uVar11;
  UnityEngine_Vector4_o UVar12;
  UnityEngine_Vector4_o value;
  UnityEngine_Vector4_o value_00;
  UnityEngine_Vector4_o value_01;
  UnityEngine_Vector3_o normal;
  UnityEngine_Vector3_o normal_00;
  System_Collections_Generic_List_Enumerator_object__o local_f8;
  undefined1 local_d8 [16];
  UnityEngine_Object_o *local_c8;
  ulong local_c0;
  undefined1 local_b8 [16];
  undefined1 local_a8 [16];
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined1 local_58 [16];
  undefined1 local_48 [16];
  
  if (Il2CppMethodInitialized_0754765c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_MaterialPropertyBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754765c = '\x01';
  }
  local_f8.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.fields._index = 0;
  local_f8.fields._version = 0;
  local_f8.fields._current = (Il2CppObject *)0x0;
  if (Il2CppMethodInitialized_07547658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547658 = '\x01';
    if (Il2CppMethodInitialized_07547657 == '\0') goto label_05bfc946;
label_05bfc91b:
    pSVar3 = (__this->fields).CustomSet;
  }
  else {
    if (Il2CppMethodInitialized_07547657 != '\0') goto label_05bfc91b;
label_05bfc946:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547657 = '\x01';
    pSVar3 = (__this->fields).CustomSet;
  }
  if (pSVar3 != (Settings_HumanCustomSet_o *)0x0) {
    pSVar4 = (pSVar3->fields).Cape;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05bfce46;
    if ((pSVar4->fields)._value == 2) {
      pSVar5 = (pSVar3->fields).HoodUp;
      if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto label_05bfce46;
      if (((pSVar5->fields)._value != false) && ((__this->fields).IsDeadBody == false)) {
        pSVar6 = (__this->fields)._hairRenderers;
        if (pSVar6 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_05bfce46;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_d8,
                   (System_Collections_Generic_List_object__o *)pSVar6,
                   (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
        local_f8.fields._current = (Il2CppObject *)local_c8;
        local_f8.fields._list = (System_Collections_Generic_List_T__o *)local_d8._0_8_;
        local_f8.fields._index = local_d8._8_4_;
        local_f8.fields._version = local_d8._12_4_;
        local_d8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        targetAddress = &(__this->fields)._hairClipProperties;
        local_68 = ZEXT816(0);
        local_c0 = 0;
        local_78 = ZEXT816(0);
        local_88 = ZEXT816(0);
        local_98 = ZEXT816(0);
        local_a8 = ZEXT816(0);
        local_b8 = ZEXT816(0);
        local_48 = ZEXT816(0);
        local_58 = ZEXT816(0);
        local_d8._8_8_ = &local_f8;
        while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&local_f8,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext),
              pIVar7 = local_f8.fields._current, bVar8) {
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar8 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar8) {
            if ((UnityEngine_Object_o *)pIVar7 == (UnityEngine_Object_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar8 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)pIVar7,(MethodInfo *)0x0);
            if ((bVar8) &&
               (bVar8 = UnityEngine_Renderer__get_forceRenderingOff
                                  ((UnityEngine_Renderer_o *)pIVar7,(MethodInfo *)0x0), !bVar8)) {
              __this_00 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pIVar7,(MethodInfo *)0x0);
              if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
                ThrowNullReferenceException();
              }
              method_00 = (MethodInfo *)0x0;
              bVar8 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
              if (bVar8) {
                if ((local_c0 & 1) == 0) {
                  uVar10 = 0;
                  uVar11 = 0;
                  UVar12 = Characters_HumanSetup__GetHairClipPlane
                                     (__this,(UnityEngine_Vector3_o)(__this->fields)._hairClipForward.fields,
                                      (__this->fields)._hoodieHairClipOffset,method_00);
                  local_48._8_4_ = extraout_XMM0_Dc;
                  local_48._0_8_ = UVar12.fields._0_8_;
                  local_48._12_4_ = extraout_XMM0_Dd;
                  local_58._8_4_ = uVar10;
                  local_58._0_8_ = UVar12.fields._8_8_;
                  local_58._12_4_ = uVar11;
                  uVar10 = 0;
                  uVar11 = 0;
                  UVar12 = Characters_HumanSetup__GetHairClipPlane
                                     (__this,(UnityEngine_Vector3_o)(__this->fields)._hairClipRight.fields,
                                      -(__this->fields)._hoodieHairClipWidth,method_00);
                  local_78._8_4_ = extraout_XMM0_Dc_00;
                  local_78._0_8_ = UVar12.fields._0_8_;
                  local_78._12_4_ = extraout_XMM0_Dd_00;
                  local_68._8_4_ = uVar10;
                  local_68._0_8_ = UVar12.fields._8_8_;
                  local_68._12_4_ = uVar11;
                  uVar1._0_4_ = (__this->fields)._hairClipRight.fields.x;
                  uVar1._4_4_ = (__this->fields)._hairClipRight.fields.y;
                  uVar10 = 0x80000000;
                  uVar11 = 0x80000000;
                  normal.fields.z = -(__this->fields)._hairClipRight.fields.z;
                  normal.fields.x = (float)(int)(uVar1 ^ 0x8000000080000000);
                  normal.fields.y = (float)(int)((uVar1 ^ 0x8000000080000000) >> 0x20);
                  UVar12 = Characters_HumanSetup__GetHairClipPlane
                                     (__this,normal,-(__this->fields)._hoodieHairClipWidth,method_00);
                  local_98._8_4_ = extraout_XMM0_Dc_01;
                  local_98._0_8_ = UVar12.fields._0_8_;
                  local_98._12_4_ = extraout_XMM0_Dd_01;
                  local_88._8_4_ = uVar10;
                  local_88._0_8_ = UVar12.fields._8_8_;
                  local_88._12_4_ = uVar11;
                  uVar2._0_4_ = (__this->fields)._hairClipUp.fields.x;
                  uVar2._4_4_ = (__this->fields)._hairClipUp.fields.y;
                  uVar10 = 0x80000000;
                  uVar11 = 0x80000000;
                  normal_00.fields.z = -(__this->fields)._hairClipUp.fields.z;
                  normal_00.fields.x = (float)(int)(uVar2 ^ 0x8000000080000000);
                  normal_00.fields.y = (float)(int)((uVar2 ^ 0x8000000080000000) >> 0x20);
                  UVar12 = Characters_HumanSetup__GetHairClipPlane
                                     (__this,normal_00,-(__this->fields)._hoodieHairClipTop,method_00);
                  local_b8._8_4_ = extraout_XMM0_Dc_02;
                  local_b8._0_8_ = UVar12.fields._0_8_;
                  local_b8._12_4_ = extraout_XMM0_Dd_02;
                  local_a8._8_4_ = uVar10;
                  local_a8._0_8_ = UVar12.fields._8_8_;
                  local_a8._12_4_ = uVar11;
                  local_c0 = CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
                  if (*targetAddress == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                    pUVar9 = il2cpp_codegen_object_new
                                       ((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
                    UnityEngine_MaterialPropertyBlock___ctor(pUVar9,(MethodInfo *)0x0);
                    *targetAddress = pUVar9;
                    Il2CppCodeGenWriteBarrier(targetAddress);
                  }
                }
                UnityEngine_Renderer__GetPropertyBlock
                          ((UnityEngine_Renderer_o *)pIVar7,*targetAddress,(MethodInfo *)0x0);
                pUVar9 = *targetAddress;
                if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
                }
                if (pUVar9 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                  ThrowNullReferenceException();
                }
                UVar12.fields.z = (float)local_58._0_4_;
                UVar12.fields.w = (float)local_58._4_4_;
                UVar12.fields.x = (float)local_48._0_4_;
                UVar12.fields.y = (float)local_48._4_4_;
                UnityEngine_MaterialPropertyBlock__SetVector_68d8740
                          (pUVar9,TypeInfo_Characters_HumanSetup->static_fields->HairClipPlaneId,UVar12,
                           (MethodInfo *)0x0);
                if (*targetAddress == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                  ThrowNullReferenceException();
                }
                value.fields.z = (float)local_68._0_4_;
                value.fields.w = (float)local_68._4_4_;
                value.fields.x = (float)local_78._0_4_;
                value.fields.y = (float)local_78._4_4_;
                UnityEngine_MaterialPropertyBlock__SetVector_68d8740
                          (*targetAddress,TypeInfo_Characters_HumanSetup->static_fields->HairClipLeftPlaneId,
                           value,(MethodInfo *)0x0);
                if (*targetAddress == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                  ThrowNullReferenceException();
                }
                value_00.fields.z = (float)local_88._0_4_;
                value_00.fields.w = (float)local_88._4_4_;
                value_00.fields.x = (float)local_98._0_4_;
                value_00.fields.y = (float)local_98._4_4_;
                UnityEngine_MaterialPropertyBlock__SetVector_68d8740
                          (*targetAddress,TypeInfo_Characters_HumanSetup->static_fields->HairClipRightPlaneId,
                           value_00,(MethodInfo *)0x0);
                if (*targetAddress == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                  ThrowNullReferenceException();
                }
                value_01.fields.z = (float)local_a8._0_4_;
                value_01.fields.w = (float)local_a8._4_4_;
                value_01.fields.x = (float)local_b8._0_4_;
                value_01.fields.y = (float)local_b8._4_4_;
                UnityEngine_MaterialPropertyBlock__SetVector_68d8740
                          (*targetAddress,TypeInfo_Characters_HumanSetup->static_fields->HairClipTopPlaneId,
                           value_01,(MethodInfo *)0x0);
                UnityEngine_Renderer__SetPropertyBlock
                          ((UnityEngine_Renderer_o *)pIVar7,*targetAddress,(MethodInfo *)0x0);
              }
            }
          }
        }
        goto label_05bfce1b;
      }
    }
  }
  pSVar6 = (__this->fields)._hairRenderers;
  if (pSVar6 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_d8,
               (System_Collections_Generic_List_object__o *)pSVar6,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_f8.fields._current = (Il2CppObject *)local_c8;
    local_f8.fields._list = (System_Collections_Generic_List_T__o *)local_d8._0_8_;
    local_f8.fields._index = local_d8._8_4_;
    local_f8.fields._version = local_d8._12_4_;
    local_d8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_d8._8_8_ = &local_f8;
    while (bVar8 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             (&local_f8,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext),
          pIVar7 = local_f8.fields._current, bVar8) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar8) {
        if ((UnityEngine_Object_o *)pIVar7 == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar8 = UnityEngine_Renderer__HasPropertyBlock((UnityEngine_Renderer_o *)pIVar7,(MethodInfo *)0x0);
        if (bVar8) {
          UnityEngine_Renderer__SetPropertyBlock
                    ((UnityEngine_Renderer_o *)pIVar7,(UnityEngine_MaterialPropertyBlock_o *)0x0,
                     (MethodInfo *)0x0);
        }
      }
    }
label_05bfce1b:
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&local_f8,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
    return;
  }
label_05bfce46:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$GetHairClipPlane
// il2cpp: UnityEngine_Vector4_o Characters_HumanSetup__GetHairClipPlane (Characters_HumanSetup_o* __this, UnityEngine_Vector3_o normal, float offset, const MethodInfo* method);
// 0x5bfd470

UnityEngine_Vector4_o
Characters_HumanSetup__GetHairClipPlane
          (Characters_HumanSetup_o *__this,UnityEngine_Vector3_o normal,float offset,MethodInfo *method)

{
  float fVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Bounds_o *pUVar6;
  UnityEngine_Transform_o *__this_01;
  float fVar7;
  float fVar8;
  UnityEngine_Vector4_o UVar9;
  float local_118;
  float fStack_114;
  float local_f8;
  float fStack_f4;
  float local_e8;
  float fStack_e4;
  UnityEngine_Matrix4x4_Fields local_c8;
  UnityEngine_Matrix4x4_o local_88;
  UnityEngine_Matrix4x4_Fields local_40;
  
  fVar7 = normal.fields.z;
  __this_00 = (__this->fields)._part_head;
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = &(__this->fields)._headBounds;
    uVar2 = (pUVar6->fields).m_Extents.fields.x;
    uVar4 = (pUVar6->fields).m_Extents.fields.y;
    fVar8 = (__this->fields)._headBounds.fields.m_Extents.fields.z;
    pUVar6 = &(__this->fields)._headBounds;
    uVar3 = (pUVar6->fields).m_Center.fields.x;
    uVar5 = (pUVar6->fields).m_Center.fields.y;
    fVar1 = (__this->fields)._headBounds.fields.m_Center.fields.z;
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      local_118 = normal.fields.x;
      fStack_114 = normal.fields.y;
      fVar8 = ((float)uVar2 * ABS(local_118) + ABS(fStack_114) * (float)uVar4 + fVar8 * ABS(fVar7)) * offset;
      fVar8 = ((float)uVar3 + fVar8 * local_118) * local_118 +
              ((float)uVar5 + fStack_114 * fVar8) * fStack_114 + (fVar1 + fVar8 * fVar7) * fVar7;
      UnityEngine_Transform__get_worldToLocalMatrix
                ((UnityEngine_Matrix4x4_o *)&local_40,__this_01,(MethodInfo *)0x0);
      local_c8.m03 = local_40.m03;
      local_c8.m13 = local_40.m13;
      local_c8.m23 = local_40.m23;
      local_c8.m33 = local_40.m33;
      local_c8.m02 = local_40.m02;
      local_c8.m12 = local_40.m12;
      local_c8.m22 = local_40.m22;
      local_c8.m32 = local_40.m32;
      local_c8.m01 = local_40.m01;
      local_c8.m11 = local_40.m11;
      local_c8.m21 = local_40.m21;
      local_c8.m31 = local_40.m31;
      local_c8.m00 = local_40.m00;
      local_c8.m10 = local_40.m10;
      local_c8.m20 = local_40.m20;
      local_c8.m30 = local_40.m30;
      UnityEngine_Matrix4x4__Internal_Transpose
                (&local_88,(UnityEngine_Matrix4x4_o *)&local_c8,(MethodInfo *)0x0);
      UVar9.fields.x =
           (fVar7 * local_88.fields.m02 + fStack_114 * local_88.fields.m01 + local_118 * local_88.fields.m00)
           - fVar8 * local_88.fields.m03;
      UVar9.fields.y =
           (fVar7 * local_88.fields.m12 + fStack_114 * local_88.fields.m11 + local_118 * local_88.fields.m10)
           - fVar8 * local_88.fields.m13;
      UVar9.fields.w =
           (fVar7 * local_88.fields.m32 + fStack_114 * local_88.fields.m31 + local_118 * local_88.fields.m30)
           - fVar8 * local_88.fields.m33;
      UVar9.fields.z =
           (fVar7 * local_88.fields.m22 + fStack_114 * local_88.fields.m21 + local_118 * local_88.fields.m20)
           - fVar8 * local_88.fields.m23;
      return (UnityEngine_Vector4_o)UVar9.fields;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$GetCostumeCount
// il2cpp: int32_t Characters_HumanSetup__GetCostumeCount (bool male, const MethodInfo* method);
// 0x5bfd640

int32_t Characters_HumanSetup__GetCostumeCount(bool male,MethodInfo *method)

{
  uint32_t uVar1;
  code *vtableDispatch;
  int32_t iVar2;
  System_String_o **ppSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  long *plVar5;
  
  if (Il2CppMethodInitialized_0754765d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&"Male");
    il2cpp_codegen_initialize_runtime_metadata(&"Female");
    Il2CppMethodInitialized_0754765d = '\x01';
  }
  uVar1 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
  if (male) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    pSVar4 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05bfd721;
    ppSVar3 = &"Male";
  }
  else {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    pSVar4 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
    if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05bfd721;
    ppSVar3 = &"Female";
  }
  pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar4,*ppSVar3,(pSVar4->klass->vtable)._7_get_Item.method);
  if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar5 = (long *)(*(pSVar4->klass->vtable)._45_get_AsArray.methodPtr)
                               (pSVar4,*(MethodInfo **)((long)&(pSVar4->klass->vtable)._45_get_AsArray + 8));
    if (plVar5 != (long *)0x0) {
      vtableDispatch = *(code **)(*plVar5 + 0x1e8);
      iVar2 = (*vtableDispatch)(plVar5,*(undefined8 *)(*plVar5 + 0x1f0),vtableDispatch);
      return iVar2;
    }
  }
label_05bfd721:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$GetHairCount
// il2cpp: int32_t Characters_HumanSetup__GetHairCount (const MethodInfo* method);
// 0x5bfd730
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfd75d: jmp 0x5bfd7c9

int32_t Characters_HumanSetup__GetHairCount(MethodInfo *method)

{
  uint32_t uVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  int32_t iVar3;
  SimpleJSONFixed_JSONArray_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754765e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    Il2CppMethodInitialized_0754765e = '\x01';
    uVar1 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    pSVar2 = TypeInfo_Characters_HumanSetup->static_fields->HairInfo;
  }
  else {
    pSVar2 = *(SimpleJSONFixed_JSONNode_o **)
              ((long)((Il2CppClass *)TypeInfo_Characters_HumanSetup)->static_fields + 8);
  }
  if ((pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar4 = (*(pSVar2->klass->vtable)._45_get_AsArray.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._45_get_AsArray.method),
     pSVar4 == (SimpleJSONFixed_JSONArray_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar3 = (*(pSVar4->klass->vtable)._11_get_Count.methodPtr)
                    (pSVar4,(pSVar4->klass->vtable)._11_get_Count.method);
  return iVar3;
}


// Characters.HumanSetup$$Copy
// il2cpp: void Characters_HumanSetup__Copy (Characters_HumanSetup_o* __this, Settings_InGameCharacterSettings_o* settings, const MethodInfo* method);
// 0x5bfd7d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfd9e0: lea rdi, [r14 + 0x1c8]

void Characters_HumanSetup__Copy
               (Characters_HumanSetup_o *__this,Settings_InGameCharacterSettings_o *settings,
               MethodInfo *method)

{
  byte bVar1;
  int index;
  int iVar2;
  Settings_HumanCustomSettings_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  Settings_ListSetting_T__o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  System_String_o *loadout;
  Settings_HumanCustomSet_c *pSVar8;
  int32_t iVar9;
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar10;
  Settings_HumanCustomSet_o *pSVar11;
  
  if (Il2CppMethodInitialized_0754765f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754765f = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if (((((pSVar3 == (Settings_HumanCustomSettings_o *)0x0) ||
        (settings == (Settings_InGameCharacterSettings_o *)0x0)) ||
       (pSVar4 = (settings->fields).CustomSet, pSVar4 == (Settings_IntSetting_o *)0x0)) ||
      ((pSVar5 = (settings->fields).Costume, pSVar5 == (Settings_IntSetting_o *)0x0 ||
       (pSVar10 = (pSVar3->fields).Costume1Sets,
       pSVar10 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)))) ||
     (pSVar6 = (pSVar10->fields).Sets, pSVar6 == (Settings_ListSetting_T__o *)0x0)) goto label_05bfda34;
  pSVar10 = (pSVar3->fields).CustomSets;
  index = (pSVar4->fields)._value;
  iVar2 = (pSVar5->fields)._value;
  iVar9 = Settings_ListSetting_object___GetCount
                    (pSVar6,(MethodInfo_515DE80 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
  if (index < iVar9) {
    if (iVar2 == 2) {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if (pSVar3 == (Settings_HumanCustomSettings_o *)0x0) goto label_05bfda34;
      pSVar10 = (pSVar3->fields).Costume3Sets;
    }
    else if (iVar2 == 1) {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if (pSVar3 == (Settings_HumanCustomSettings_o *)0x0) goto label_05bfda34;
      pSVar10 = (pSVar3->fields).Costume2Sets;
    }
    else {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if (pSVar3 == (Settings_HumanCustomSettings_o *)0x0) goto label_05bfda34;
      pSVar10 = (pSVar3->fields).Costume1Sets;
    }
    if ((pSVar10 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) ||
       (pSVar6 = (pSVar10->fields).Sets, pSVar6 == (Settings_ListSetting_T__o *)0x0)) goto label_05bfda34;
    pSVar11 = (Settings_HumanCustomSet_o *)
              Settings_ListSetting_object___GetItemAt
                        (pSVar6,index,
                         (MethodInfo_515DEA0 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
    if (pSVar11 == (Settings_HumanCustomSet_o *)0x0) goto label_05bfd914;
label_05bfd992:
    pSVar8 = TypeInfo_Settings_HumanCustomSet;
    bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
    if (((pSVar11->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
        (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
label_05bfda39:
      il2cpp_codegen_raise_invalid_cast_exception(pSVar11);
    }
    (__this->fields).CustomSet = pSVar11;
    if (((pSVar11->klass->_2).typeHierarchyDepth < bVar1) ||
       ((pSVar11->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)pSVar8)) goto label_05bfda39;
  }
  else {
    if ((pSVar10 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) ||
       (pSVar6 = (pSVar10->fields).Sets, pSVar6 == (Settings_ListSetting_T__o *)0x0)) goto label_05bfda34;
    pSVar11 = (Settings_HumanCustomSet_o *)
              Settings_ListSetting_object___GetItemAt
                        (pSVar6,index - iVar9,
                         (MethodInfo_515DEA0 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
    if (pSVar11 != (Settings_HumanCustomSet_o *)0x0) goto label_05bfd992;
label_05bfd914:
    (__this->fields).CustomSet = (Settings_HumanCustomSet_o *)0x0;
  }
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomSet);
  pSVar7 = (settings->fields).Loadout;
  if (pSVar7 != (Settings_StringSetting_o *)0x0) {
    loadout = (pSVar7->fields)._value;
    if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
    }
    iVar9 = GameManagers_HumanLoadout__ToWeapon(loadout,(MethodInfo *)0x0);
    (__this->fields).Weapon = iVar9;
    return;
  }
label_05bfda34:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$Load
// il2cpp: void Characters_HumanSetup__Load (Characters_HumanSetup_o* __this, Settings_HumanCustomSet_o* customSet, int32_t weapon, bool isDeadBody, const MethodInfo* method);
// 0x5be97a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5be9910: jmp 0x5be9d04
// asm:   0x5be9968: jmp 0x5be9d04

void Characters_HumanSetup__Load
               (Characters_HumanSetup_o *__this,Settings_HumanCustomSet_o *customSet,int32_t weapon,
               bool isDeadBody,MethodInfo *method)

{
  Settings_HumanCustomSet_o **targetAddress;
  int iVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  bool bVar6;
  int32_t iVar7;
  System_String_o **ppSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  Characters_BaseCharacter_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547660 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_DebugConsole);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_set_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Warning: hair does not exist in CostumeInfo JSON");
    il2cpp_codegen_initialize_runtime_metadata(&"Warning: costume does not exist in CostumeInfo JSON.");
    il2cpp_codegen_initialize_runtime_metadata(&"Male");
    il2cpp_codegen_initialize_runtime_metadata(&"HairF");
    il2cpp_codegen_initialize_runtime_metadata(&"Female");
    il2cpp_codegen_initialize_runtime_metadata(&"HairM");
    Il2CppMethodInitialized_07547660 = '\x01';
  }
  targetAddress = &(__this->fields).CustomSet;
  (__this->fields).CustomSet = customSet;
  Il2CppCodeGenWriteBarrier(targetAddress);
  (__this->fields).Weapon = weapon;
  (__this->fields).IsDeadBody = isDeadBody;
  pSVar2 = (__this->fields).CustomSet;
  if ((pSVar2 == (Settings_HumanCustomSet_o *)0x0) ||
     (pSVar3 = (pSVar2->fields).Sex, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_05be9d04;
  pSVar4 = (pSVar2->fields).Costume;
  if ((pSVar3->fields)._value == 0) {
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05be9d04;
    iVar1 = (pSVar4->fields)._value;
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      if (TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount <= iVar1) goto label_05be99fb;
label_05be9948:
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor != 0) goto label_05be9955;
label_05be9a35:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      pSVar9 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
    }
    else {
      if (iVar1 < TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount) goto label_05be9948;
label_05be99fb:
      if ((*targetAddress == (Settings_HumanCustomSet_o *)0x0) ||
         (pSVar3 = ((*targetAddress)->fields).Costume, pSVar3 == (Settings_IntSetting_o *)0x0))
      goto label_05be9d04;
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar3,0,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) goto label_05be9a35;
label_05be9955:
      pSVar9 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
    }
    if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05be9d04;
    ppSVar8 = &"Male";
  }
  else {
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05be9d04;
    iVar1 = (pSVar4->fields)._value;
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      if (TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount <= iVar1) goto label_05be9985;
label_05be98f0:
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor != 0) goto label_05be98fd;
label_05be99bf:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      pSVar9 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
    }
    else {
      if (iVar1 < TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount) goto label_05be98f0;
label_05be9985:
      if ((*targetAddress == (Settings_HumanCustomSet_o *)0x0) ||
         (pSVar3 = ((*targetAddress)->fields).Costume, pSVar3 == (Settings_IntSetting_o *)0x0))
      goto label_05be9d04;
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar3,0,
                 (MethodInfo_42DA160 *)MethodInfo_Settings_TypedSetting_int_set_Value);
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) goto label_05be99bf;
label_05be98fd:
      pSVar9 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
    }
    if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05be9d04;
    ppSVar8 = &"Female";
  }
  pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar9,*ppSVar8,(pSVar9->klass->vtable)._7_get_Item.method);
  if (((*targetAddress == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar3 = ((*targetAddress)->fields).Costume, pSVar3 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05be9d04;
  pSVar9 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)
                     (pSVar9,(pSVar3->fields)._value,
                      *(MethodInfo **)((long)&(pSVar9->klass->vtable)._5_get_Item + 8));
  (__this->fields).CurrentCostume = pSVar9;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentCostume);
  if (((*targetAddress == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar5 = ((*targetAddress)->fields).Hair, pSVar5 == (Settings_StringSetting_o *)0x0)) ||
     (pSVar10 = (pSVar5->fields)._value, pSVar10 == (System_String_o *)0x0)) goto label_05be9d04;
  bVar6 = System_String__StartsWith(pSVar10,"HairM",(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    pSVar9 = TypeInfo_Characters_HumanSetup->static_fields->HairInfo;
    if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05be9d04;
    ppSVar8 = &"Male";
label_05be9b84:
    pSVar9 = (*(pSVar9->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar9,*ppSVar8,(pSVar9->klass->vtable)._7_get_Item.method);
    pSVar10 = System_String__Substring(pSVar10,5,(MethodInfo *)0x0);
    iVar7 = System_Int32__Parse(pSVar10,(MethodInfo *)0x0);
    if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05be9d04;
    pSVar9 = (*(pSVar9->klass->vtable)._5_get_Item.methodPtr)
                       (pSVar9,iVar7,(pSVar9->klass->vtable)._5_get_Item.method);
    (__this->fields).CurrentHair = pSVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentHair);
  }
  else {
    bVar6 = System_String__StartsWith(pSVar10,"HairF",(MethodInfo *)0x0);
    if (bVar6) {
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      pSVar9 = TypeInfo_Characters_HumanSetup->static_fields->HairInfo;
      if (pSVar9 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05be9d04;
      ppSVar8 = &"Female";
      goto label_05be9b84;
    }
  }
  pSVar9 = (__this->fields).CurrentCostume;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    ApplicationManagers_DebugConsole__Log("Warning: costume does not exist in CostumeInfo JSON.",false,(MethodInfo *)0x0);
  }
  pSVar9 = (__this->fields).CurrentHair;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  method_00 = (MethodInfo *)0x0;
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    method_00 = (MethodInfo *)0x0;
    ApplicationManagers_DebugConsole__Log("Warning: hair does not exist in CostumeInfo JSON",false,(MethodInfo *)0x0);
  }
  Characters_HumanSetup__DeleteParts(__this,method_00);
  Characters_HumanSetup__CreateParts(__this,method_00);
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__RefreshRenderers(__this_00,(MethodInfo *)0x0);
    return;
  }
label_05be9d04:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$DeleteDie
// il2cpp: void Characters_HumanSetup__DeleteDie (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfebe0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfec3f: nop 

void Characters_HumanSetup__DeleteDie(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_07547661 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    Il2CppMethodInitialized_07547661 = '\x01';
  }
  if ((__this->fields).Deleted != false) {
    return;
  }
  Characters_HumanSetup__DeleteParts(__this,method);
  pSVar2 = UnityEngine_Component__GetComponentsInChildren_object__34b11b0
                     ((UnityEngine_Component_o *)__this,
                      (MethodInfo_34B11B0 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer)
  ;
  if (pSVar2 == (System_Object_array *)0x0) {
label_05bfec72:
    ThrowNullReferenceException();
  }
  uVar1 = (uint)pSVar2->max_length;
  if (0 < (int)uVar1) {
    uVar3 = 0;
    do {
      if (uVar1 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      if ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_Renderer_o *)0x0)
      goto label_05bfec72;
      UnityEngine_Renderer__set_enabled
                ((UnityEngine_Renderer_o *)pSVar2->m_Items[(int)uVar3],false,(MethodInfo *)0x0);
      uVar3 = uVar3 + 1;
      uVar1 = (uint)pSVar2->max_length;
    } while ((int)uVar3 < (int)uVar1);
  }
  (__this->fields).Deleted = true;
  return;
}


// Characters.HumanSetup$$CreateParts
// il2cpp: void Characters_HumanSetup__CreateParts (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfe8b0

void Characters_HumanSetup__CreateParts(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Characters_HumanSetupTextures_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  System_String_o *mainTexture;
  System_String_o *maskTexture;
  System_String_o *colorTexture;
  System_String_o *pantsTexture;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_Color_o shirt;
  UnityEngine_Color_o straps;
  UnityEngine_Color_o pants;
  UnityEngine_Color_o jacket;
  UnityEngine_Color_o boots;
  
  if (Il2CppMethodInitialized_07547662 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_07547662 = '\x01';
  }
  pCVar1 = (__this->fields)._textures;
  if (pCVar1 != (Characters_HumanSetupTextures_o *)0x0) {
    mainTexture = Characters_HumanSetupTextures__GetBodyMainTexture(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._textures;
    if (pCVar1 != (Characters_HumanSetupTextures_o *)0x0) {
      maskTexture = Characters_HumanSetupTextures__GetBodyMaskTexture(pCVar1,(MethodInfo *)0x0);
      pCVar1 = (__this->fields)._textures;
      if (pCVar1 != (Characters_HumanSetupTextures_o *)0x0) {
        colorTexture = Characters_HumanSetupTextures__GetBodyColorTexture(pCVar1,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._textures;
        if (pCVar1 != (Characters_HumanSetupTextures_o *)0x0) {
          pantsTexture = Characters_HumanSetupTextures__GetBodyPantsTexture(pCVar1,(MethodInfo *)0x0);
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
                   (pSVar3 = (pSVar2->fields).PantsColor, pSVar3 != (Settings_ColorSetting_o *)0x0)) {
                  pUVar4 = (pSVar3->fields)._value;
                  if (pUVar4 != (Utility_Color255_o *)0x0) {
                    pants = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                    pSVar2 = (__this->fields).CustomSet;
                    if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                       (pSVar3 = (pSVar2->fields).JacketColor, pSVar3 != (Settings_ColorSetting_o *)0x0)) {
                      pUVar4 = (pSVar3->fields)._value;
                      if (pUVar4 != (Utility_Color255_o *)0x0) {
                        jacket = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                        pSVar2 = (__this->fields).CustomSet;
                        if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                           (pSVar3 = (pSVar2->fields).BootsColor, pSVar3 != (Settings_ColorSetting_o *)0x0)) {
                          pUVar4 = (pSVar3->fields)._value;
                          if (pUVar4 != (Utility_Color255_o *)0x0) {
                            boots = Utility_Color255__ToColor(pUVar4,(MethodInfo *)0x0);
                            if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0)
                            {
                              il2cpp_codegen_runtime_class_init
                                        ((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
                            }
                            method_00 = (MethodInfo *)
                                        Characters_HumanSetupMaterials__GetCostumeMaterial
                                                  (mainTexture,maskTexture,colorTexture,pantsTexture,shirt,
                                                   straps,pants,jacket,boots,(MethodInfo *)0x0);
                            if (Il2CppMethodInitialized_07547664 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                              Il2CppMethodInitialized_07547664 = '\x01';
                            }
                            __this_00 = (System_Collections_Generic_HashSet_object__o *)
                                        (__this->fields)._ownedMaterials;
                            if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                              method_04 = method_00;
                              System_Collections_Generic_HashSet_object___Add
                                        (__this_00,(Il2CppObject *)method_00,
                                         (MethodInfo_4FB4450 *)
                                         MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                              Characters_HumanSetup__CreateHair(__this,method_04);
                              Characters_HumanSetup__CreateEye(__this,method_04);
                              Characters_HumanSetup__CreateFace(__this,method_04);
                              Characters_HumanSetup__CreateGlass(__this,method_04);
                              Characters_HumanSetup__CreateUpperBody
                                        (__this,(UnityEngine_Material_o *)method_00,method_01);
                              Characters_HumanSetup__CreateArms
                                        (__this,(UnityEngine_Material_o *)method_00,method_02);
                              Characters_HumanSetup__CreateLowerBody
                                        (__this,(UnityEngine_Material_o *)method_00,method_03);
                              Characters_HumanSetup__Create3dmg(__this,method_00);
                              Characters_HumanSetup__CreateWeapon(__this,method_00);
                              Characters_HumanSetup__CreateBack(__this,method_00);
                              Characters_HumanSetup__CreateHat(__this,method_00);
                              Characters_HumanSetup__CreateHead(__this,method_00);
                              Characters_HumanSetup__UpdateCloakVisibility(__this,method_00);
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
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$DeleteParts
// il2cpp: void Characters_HumanSetup__DeleteParts (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfda50

void Characters_HumanSetup__DeleteParts(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  uint32_t uVar2;
  System_Collections_Generic_List_Renderer__o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  UnityEngine_Object_o *pUVar4;
  bool bVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547663 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Clear);
    Il2CppMethodInitialized_07547663 = '\x01';
  }
  pSVar3 = (__this->fields)._hairRenderers;
  if (pSVar3 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    length = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < length) {
      method = (MethodInfo *)0x0;
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
    }
    Characters_HumanSetup__DestroyOwnedMaterials(__this,method);
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (__this->fields)._effectMaterialCache;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      method_00 = MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_Clear;
      System_Collections_Generic_Dictionary_object__object___Clear
                (__this_00,
                 (MethodInfo_4AAD690 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_Clear);
      Characters_HumanSetup__DisposeCloth(__this,method_00);
      pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_eye;
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_face;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_face;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_glass;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_glass;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hair;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hair;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_upper_body;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_upper_body;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_arm_l;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_arm_l;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_arm_r;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_arm_r;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hand_l;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hand_l;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hand_r;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hand_r;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_1;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_1;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_2;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_2;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_3;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_3;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_4;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_brand_4;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_chest_1;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_chest_1;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_chest_2;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_chest_2;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_3dmg;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_3dmg;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_belt;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_belt;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_gas_l;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_gas_l;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_gas_r;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_gas_r;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_blade_l;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_blade_l;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_blade_r;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_blade_r;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_back;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_back;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hat;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_hat;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_head_decor;
      }
      else {
        pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_head_decor;
      }
      if (Il2CppMethodInitialized_0754767f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_0754767f = '\x01';
        uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar2 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0(pUVar4,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$OnDestroy
// il2cpp: void Characters_HumanSetup__OnDestroy (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c029f0

void Characters_HumanSetup__OnDestroy(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Characters_HumanSetup__DisposeCloth(__this,method);
  Characters_HumanSetup__DestroyOwnedMaterials(__this,method);
  return;
}


// Characters.HumanSetup$$Own
// il2cpp: UnityEngine_Material_o* Characters_HumanSetup__Own (Characters_HumanSetup_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5bfec80

UnityEngine_Material_o *
Characters_HumanSetup__Own
          (Characters_HumanSetup_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_07547664 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
    Il2CppMethodInitialized_07547664 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            (__this_00,(Il2CppObject *)material,
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
  return material;
}


// Characters.HumanSetup$$OwnInstance
// il2cpp: UnityEngine_Material_o* Characters_HumanSetup__OwnInstance (Characters_HumanSetup_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x5bfd3b0

UnityEngine_Material_o *
Characters_HumanSetup__OwnInstance
          (Characters_HumanSetup_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  UnityEngine_Material_o *y;
  UnityEngine_Material_o *x;
  
  if (Il2CppMethodInitialized_07547665 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547665 = '\x01';
  }
  if (renderer == (UnityEngine_Renderer_o *)0x0) {
label_05bfd466:
    ThrowNullReferenceException();
  }
  y = UnityEngine_Renderer__get_sharedMaterial(renderer,(MethodInfo *)0x0);
  x = UnityEngine_Renderer__get_material(renderer,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
  if (!bVar1) {
    if (Il2CppMethodInitialized_07547664 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
      Il2CppMethodInitialized_07547664 = '\x01';
    }
    __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
    if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05bfd466;
    System_Collections_Generic_HashSet_object___Add
              (__this_00,(Il2CppObject *)x,
               (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
  }
  return x;
}


// Characters.HumanSetup$$DestroyOwnedMaterials
// il2cpp: void Characters_HumanSetup__DestroyOwnedMaterials (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c02620
// eh: try 0x5c026ed..0x5c02735 -> pad 0x5c02779 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c02795..0x5c0279a -> pad 0x5c027b9 cleanup
// eh: try 0x5c027bc..0x5c027c6 -> pad 0x5c027ce catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0272e: jmp 0x5c026e0
// asm:   0x5c02777: jmp 0x5c0277d
// asm:   0x5c02779: jmp 0x5c0277d
// asm:   0x5c0277b: jmp 0x5c0277d
// asm:   0x5c0277d: mov rbx, rax
// asm:   0x5c02780: cmp edx, 1
// asm:   0x5c02783: jne 0x5c027bc
// asm:   0x5c02785: mov rdi, rbx
// asm:   0x5c02788: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c0278d: mov rbx, qword ptr [rax]
// asm:   0x5c02790: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5c02795: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c0279a: lea rax, [rip + 0x168bcc7]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_Dispose
// asm:   0x5c027a1: mov rsi, qword ptr [rax]
// asm:   0x5c027a4: mov rdi, rsp
// asm:   0x5c027a7: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5c027ac: test rbx, rbx
// asm:   0x5c027af: je 0x5c02749
// asm:   0x5c027b1: mov rdi, rbx
// asm:   0x5c027b4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c027b9: mov rbx, rax
// asm:   0x5c027bc: lea rdi, [rsp + 0x20]
// asm:   0x5c027c1: call 0x2fd9010  ; il2cpp_runtime_helper_02fd9010()
// asm:   0x5c027c6: mov rdi, rbx
// asm:   0x5c027c9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c027ce: mov rdi, rax
// asm:   0x5c027d1: call 0x2ab61e0  ; __clang_call_terminate()

void Characters_HumanSetup__DestroyOwnedMaterials(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Il2CppObject *x;
  bool bVar2;
  System_Collections_Generic_HashSet_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07547666 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Material_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547666 = '\x01';
  }
  local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              (&local_58,pSVar1,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_Material_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&local_58,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_MoveNext);
      x = local_58.fields._current;
      if (!bVar2) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (&local_58,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_Dispose
              );
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear
                (pSVar1,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Clear);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$DisposeCloth
// il2cpp: void Characters_HumanSetup__DisposeCloth (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c027e0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c02833: lea r14, [rbx + 0x130]
// asm:   0x5c0283a: cmp byte ptr [rip + 0x1944e27], 0
// asm:   0x5c02841: jne 0x5c02856
// asm:   0x5c0295f: jmp 0x5c02856

void Characters_HumanSetup__DisposeCloth(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_GameObject_o **ppUVar2;
  
  if (Il2CppMethodInitialized_07547667 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    Il2CppMethodInitialized_07547667 = '\x01';
  }
  if ((__this->fields).IsDeadBody != false) {
    return;
  }
  if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
  }
  if (Il2CppMethodInitialized_07547668 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    Il2CppMethodInitialized_07547668 = '\x01';
  }
  ppUVar2 = &(__this->fields)._part_hair_1;
  pUVar1 = *ppUVar2;
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  ClothFactory__DisposeObject(pUVar1,(MethodInfo *)0x0);
  (__this->fields)._part_hair_1 = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(ppUVar2);
  ppUVar2 = &(__this->fields)._part_cape;
  if (Il2CppMethodInitialized_07547668 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    Il2CppMethodInitialized_07547668 = '\x01';
  }
  pUVar1 = *ppUVar2;
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  ClothFactory__DisposeObject(pUVar1,(MethodInfo *)0x0);
  (__this->fields)._part_cape = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(ppUVar2);
  ppUVar2 = &(__this->fields)._part_chest_3;
  if (Il2CppMethodInitialized_07547668 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    Il2CppMethodInitialized_07547668 = '\x01';
  }
  pUVar1 = *ppUVar2;
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  ClothFactory__DisposeObject(pUVar1,(MethodInfo *)0x0);
  *ppUVar2 = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(ppUVar2);
  return;
}


// Characters.HumanSetup$$DisposeClothPart
// il2cpp: void Characters_HumanSetup__DisposeClothPart (UnityEngine_GameObject_o** part, const MethodInfo* method);
// 0x5c02a10

void Characters_HumanSetup__DisposeClothPart(UnityEngine_GameObject_o **part,MethodInfo *method)

{
  UnityEngine_GameObject_o *cachedObject;
  
  if (Il2CppMethodInitialized_07547668 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    Il2CppMethodInitialized_07547668 = '\x01';
  }
  cachedObject = *part;
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  ClothFactory__DisposeObject(cachedObject,(MethodInfo *)0x0);
  *part = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(part);
  return;
}


// Characters.HumanSetup$$Create3dmg
// il2cpp: void Characters_HumanSetup__Create3dmg (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c00f50

void Characters_HumanSetup__Create3dmg(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  uint32_t uVar2;
  Characters_HumanSetupTextures_o *__this_00;
  Characters_HumanSetupMeshes_o *pCVar3;
  Settings_HumanCustomSet_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  bool bVar6;
  System_String_o *pSVar7;
  UnityEngine_Material_o *value;
  System_String_o *pSVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Renderer_o *__this_01;
  Characters_HumanSetup_o *pCVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar11;
  UnityEngine_Object_o *pUVar12;
  
  if (Il2CppMethodInitialized_07547669 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547669 = '\x01';
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_3dmg;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05c00f80;
label_05c01100:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_3dmg;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c01100;
label_05c00f80:
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar12,(MethodInfo *)0x0);
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_belt;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05c00fc1;
label_05c01166:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_belt;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c01166;
label_05c00fc1:
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar12,(MethodInfo *)0x0);
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_gas_l;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05c00ffb;
label_05c011c5:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_gas_l;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c011c5;
label_05c00ffb:
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar12,(MethodInfo *)0x0);
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_gas_r;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05c01035;
label_05c01224:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar12 = (UnityEngine_Object_o *)(__this->fields)._part_gas_r;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c01224;
label_05c01035:
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar12,(MethodInfo *)0x0);
  }
  if ((__this->fields).Weapon == 5) {
    return;
  }
  __this_00 = (__this->fields)._textures;
  if (__this_00 != (Characters_HumanSetupTextures_o *)0x0) {
    pSVar7 = Characters_HumanSetupTextures__Get3dmgTexture(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    value = Characters_HumanSetupMaterials__GetPartMaterial(pSVar7,false,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pCVar3 = (__this->fields)._meshes;
    if (pCVar3 != (Characters_HumanSetupMeshes_o *)0x0) {
      ppUVar1 = &(__this->fields)._part_3dmg;
      pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      pSVar8 = Characters_HumanSetupMeshes__Get3dmgMesh(pCVar3,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pMVar11 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
      pUVar9 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (pSVar7,pSVar8,true,false,
                          (MethodInfo_3665790 *)
                          MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      (__this->fields)._part_3dmg = pUVar9;
      pCVar10 = (Characters_HumanSetup_o *)ppUVar1;
      Il2CppCodeGenWriteBarrier(ppUVar1);
      Characters_HumanSetup__AttachToMount
                (pCVar10,(__this->fields)._part_3dmg,(__this->fields)._mount_3dmg,false,pMVar11);
      pUVar9 = (__this->fields)._part_3dmg;
      if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
         (__this_01 = UnityEngine_GameObject__GetComponentInChildren_object_
                                (pUVar9,(MethodInfo_353B8D0 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer),
         __this_01 != (UnityEngine_Renderer_o *)0x0)) {
        UnityEngine_Renderer__set_material(__this_01,value,(MethodInfo *)0x0);
        pSVar4 = (__this->fields).CustomSet;
        if ((pSVar4 != (Settings_HumanCustomSet_o *)0x0) &&
           (pSVar5 = (pSVar4->fields).Cape, pSVar5 != (Settings_IntSetting_o *)0x0)) {
          if (((pSVar5->fields)._value == 2) && (((__this->fields).Weapon | 2U) == 3)) {
            if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05c016a2;
            UnityEngine_GameObject__SetActive(*ppUVar1,false,(MethodInfo *)0x0);
          }
          pCVar3 = (__this->fields)._meshes;
          if (pCVar3 != (Characters_HumanSetupMeshes_o *)0x0) {
            pSVar7 = Characters_HumanSetupMeshes__GetBeltMesh(pCVar3,(MethodInfo *)0x0);
            bVar6 = System_String__op_Inequality
                              (pSVar7,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                               (MethodInfo *)0x0);
            pMVar11 = extraout_RDX;
            if (bVar6) {
              if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
              }
              ppUVar1 = &(__this->fields)._part_belt;
              pSVar8 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
              if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)
                ;
              }
              pMVar11 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
              pUVar9 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                 (pSVar8,pSVar7,true,false,
                                  (MethodInfo_3665790 *)
                                  MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
              *ppUVar1 = pUVar9;
              Il2CppCodeGenWriteBarrier(ppUVar1);
              if ((*ppUVar1 == (UnityEngine_GameObject_o *)0x0) ||
                 (pCVar10 = (Characters_HumanSetup_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      (*ppUVar1,(MethodInfo_353B730 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                 pCVar10 == (Characters_HumanSetup_o *)0x0)) goto label_05c016a2;
              UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pCVar10,value,(MethodInfo *)0x0);
              Characters_HumanSetup__AttachToMount
                        (pCVar10,(__this->fields)._part_belt,(__this->fields)._mount_3dmg,false,pMVar11);
              pMVar11 = extraout_RDX_00;
            }
            if ((__this->fields).Weapon - 3U < 2) {
label_05c01684:
              Characters_HumanSetup__ScaleGearForCloak(__this,(__this->fields)._part_3dmg,pMVar11);
              return;
            }
            if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
            }
            pCVar3 = (__this->fields)._meshes;
            if (pCVar3 != (Characters_HumanSetupMeshes_o *)0x0) {
              ppUVar1 = &(__this->fields)._part_gas_l;
              pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
              pSVar8 = Characters_HumanSetupMeshes__GetGasMesh(pCVar3,true,(MethodInfo *)0x0);
              if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)
                ;
              }
              pMVar11 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
              pUVar9 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                 (pSVar7,pSVar8,true,false,
                                  (MethodInfo_3665790 *)
                                  MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
              *ppUVar1 = pUVar9;
              Il2CppCodeGenWriteBarrier(ppUVar1);
              if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                 (pCVar10 = (Characters_HumanSetup_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      (*ppUVar1,(MethodInfo_353B730 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                 pCVar10 != (Characters_HumanSetup_o *)0x0)) {
                UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pCVar10,value,(MethodInfo *)0x0);
                Characters_HumanSetup__AttachToMount
                          (pCVar10,(__this->fields)._part_gas_l,
                           (&(__this->fields)._mount_gas_l)[(ulong)((__this->fields).Weapon == 1) * 2],false,
                           pMVar11);
                if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                }
                pCVar3 = (__this->fields)._meshes;
                if (pCVar3 != (Characters_HumanSetupMeshes_o *)0x0) {
                  ppUVar1 = &(__this->fields)._part_gas_r;
                  pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
                  pSVar8 = Characters_HumanSetupMeshes__GetGasMesh(pCVar3,false,(MethodInfo *)0x0);
                  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                  }
                  pMVar11 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
                  pUVar9 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                     (pSVar7,pSVar8,true,false,
                                      (MethodInfo_3665790 *)
                                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                     );
                  *ppUVar1 = pUVar9;
                  Il2CppCodeGenWriteBarrier(ppUVar1);
                  if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                     (pCVar10 = (Characters_HumanSetup_o *)
                                UnityEngine_GameObject__GetComponent_object_
                                          (*ppUVar1,(MethodInfo_353B730 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                     pCVar10 != (Characters_HumanSetup_o *)0x0)) {
                    UnityEngine_Renderer__set_material
                              ((UnityEngine_Renderer_o *)pCVar10,value,(MethodInfo *)0x0);
                    Characters_HumanSetup__AttachToMount
                              (pCVar10,(__this->fields)._part_gas_r,
                               (&(__this->fields)._mount_gas_r)[(ulong)((__this->fields).Weapon == 1) * 2],
                               false,pMVar11);
                    pMVar11 = extraout_RDX_01;
                    goto label_05c01684;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_05c016a2:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$ScaleGearForCloak
// il2cpp: void Characters_HumanSetup__ScaleGearForCloak (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* gear, const MethodInfo* method);
// 0x5c02be0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c02c0f: jmp 0x5c02e4b

void Characters_HumanSetup__ScaleGearForCloak
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *gear,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  bool bVar3;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar5;
  UnityEngine_Vector3_o UVar6;
  UnityEngine_Vector3_o UVar7;
  UnityEngine_Vector3_o value;
  UnityEngine_Bounds_o UStack_60;
  float fStack_48;
  float fStack_44;
  undefined1 auStack_38 [24];
  
  if (Il2CppMethodInitialized_0754766a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer_71ab090);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754766a = '\x01';
    if (Il2CppMethodInitialized_07547657 != '\0') goto label_05c02c03;
label_05c02c3c:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547657 = '\x01';
    pSVar1 = (__this->fields).CustomSet;
  }
  else {
    if (Il2CppMethodInitialized_07547657 == '\0') goto label_05c02c3c;
label_05c02c03:
    pSVar1 = (__this->fields).CustomSet;
  }
  if (pSVar1 == (Settings_HumanCustomSet_o *)0x0) {
    return;
  }
  pSVar2 = (pSVar1->fields).Cape;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar2->fields)._value != 2) {
      return;
    }
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)gear,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return;
    }
    if (gear != (UnityEngine_GameObject_o *)0x0) {
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                    (gear,true,
                     (MethodInfo_353B9A0 *)
                     MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer_71ab090);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (x == (UnityEngine_Object_o *)0x0) goto label_05c02e57;
        pUVar4 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        UnityEngine_Renderer__get_localBounds(&UStack_60,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c02e57;
        UVar6 = UnityEngine_Transform__TransformPoint(pUVar4,UStack_60.fields.m_Center,(MethodInfo *)0x0);
        fVar5 = UVar6.fields.z;
        fStack_48 = UVar6.fields.x;
        fStack_44 = UVar6.fields.y;
      }
      else {
        pUVar4 = UnityEngine_GameObject__get_transform(gear,(MethodInfo *)0x0);
        if (pUVar4 == (UnityEngine_Transform_o *)0x0) goto label_05c02e57;
        UVar6 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
        fVar5 = UVar6.fields.z;
        fStack_48 = UVar6.fields.x;
        fStack_44 = UVar6.fields.y;
      }
      pUVar4 = UnityEngine_GameObject__get_transform(gear,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UVar6 = UnityEngine_Transform__get_localScale(pUVar4,(MethodInfo *)0x0);
        UVar7.fields.x = UVar6.fields.x * 0.5;
        UVar7.fields.y = UVar6.fields.y * 0.5;
        UVar7.fields.z = UVar6.fields.z * 0.5;
        UnityEngine_Transform__set_localScale(pUVar4,UVar7,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar3) {
          return;
        }
        pUVar4 = UnityEngine_GameObject__get_transform(gear,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          UVar6 = UnityEngine_Transform__get_position(pUVar4,(MethodInfo *)0x0);
          auStack_38._8_4_ = extraout_XMM0_Dc;
          auStack_38._0_8_ = UVar6.fields._0_8_;
          auStack_38._12_4_ = extraout_XMM0_Dd;
          if (x != (UnityEngine_Object_o *)0x0) {
            __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            UnityEngine_Renderer__get_localBounds(&UStack_60,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_Transform_o *)0x0) {
              UVar7 = UnityEngine_Transform__TransformPoint
                                (__this_00,UStack_60.fields.m_Center,(MethodInfo *)0x0);
              value.fields.x = (float)auStack_38._0_4_ + (fStack_48 - UVar7.fields.x);
              value.fields.y = (float)auStack_38._4_4_ + (fStack_44 - UVar7.fields.y);
              value.fields.z = UVar6.fields.z + (fVar5 - UVar7.fields.z);
              UnityEngine_Transform__set_position(pUVar4,value,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_05c02e57:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateWeapon
// il2cpp: void Characters_HumanSetup__CreateWeapon (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c016b0

void Characters_HumanSetup__CreateWeapon(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  uint32_t uVar2;
  int iVar3;
  Characters_HumanSetupTextures_o *__this_00;
  Settings_HumanCustomSet_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Characters_HumanSetupMeshes_o *pCVar6;
  bool bVar7;
  int32_t type;
  System_String_o *pSVar8;
  UnityEngine_Material_o *value;
  Characters_HumanSetup_o *pCVar9;
  UnityEngine_GameObject_o *pUVar10;
  MeleeWeaponTrail_o *pMVar11;
  UnityEngine_Renderer_o *pUVar12;
  UnityEngine_Object_o *pUVar13;
  MethodInfo *pMVar14;
  
  if (Il2CppMethodInitialized_0754766b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectPresets);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_MeleeWeaponTrail);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"thunderspear");
    Il2CppMethodInitialized_0754766b = '\x01';
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_blade_l;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c01977;
label_05c016df:
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_blade_l;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05c016df;
label_05c01977:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_blade_r;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c019da;
label_05c0171e:
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_blade_r;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05c0171e;
label_05c019da:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._textures;
  if (__this_00 != (Characters_HumanSetupTextures_o *)0x0) {
    pSVar8 = Characters_HumanSetupTextures__Get3dmgTexture(__this_00,(MethodInfo *)0x0);
    iVar3 = (__this->fields).Weapon;
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    value = Characters_HumanSetupMaterials__GetPartMaterial(pSVar8,iVar3 == 3,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).CustomSet;
    if ((pSVar4 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar5 = (pSVar4->fields).BladeEffect, pSVar5 != (Settings_StringSetting_o *)0x0)) {
      pSVar8 = (pSVar5->fields)._value;
      if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
      }
      type = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar8,(MethodInfo *)0x0);
      pCVar6 = (__this->fields)._meshes;
      if (pCVar6 != (Characters_HumanSetupMeshes_o *)0x0) {
        pCVar9 = (Characters_HumanSetup_o *)
                 Characters_HumanSetupMeshes__GetWeaponMesh(pCVar6,true,(MethodInfo *)0x0);
        bVar7 = System_String__op_Inequality
                          ((System_String_o *)pCVar9,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8)
                           ,(MethodInfo *)0x0);
        if (bVar7) {
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          ppUVar1 = &(__this->fields)._part_blade_l;
          pSVar8 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pMVar14 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
          pUVar10 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar8,(System_String_o *)pCVar9,true,false,
                               (MethodInfo_3665790 *)
                               MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
          *ppUVar1 = pUVar10;
          Il2CppCodeGenWriteBarrier(ppUVar1);
          if (pCVar9 == (Characters_HumanSetup_o *)0x0) goto label_05c01ccf;
          bVar7 = System_String__Contains((System_String_o *)pCVar9,"thunderspear",(MethodInfo *)0x0);
          if (bVar7) {
            Characters_HumanSetup__AttachToMount(pCVar9,*ppUVar1,(__this->fields)._mount_ts_l,false,pMVar14);
          }
          else {
            Characters_HumanSetup__AttachToMount
                      (pCVar9,*ppUVar1,(__this->fields)._mount_weapon_l,false,pMVar14);
            pUVar10 = (__this->fields)._part_blade_l;
            if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
               (pUVar12 = UnityEngine_GameObject__GetComponentInChildren_object_
                                    (pUVar10,(MethodInfo_353B8D0 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer
                                    ), pUVar12 == (UnityEngine_Renderer_o *)0x0)) goto label_05c01ccf;
            UnityEngine_Renderer__set_material(pUVar12,value,(MethodInfo *)0x0);
          }
          Characters_HumanSetup__ApplyCharacterEffectToPart
                    (__this,(__this->fields)._part_blade_l,type,false,pMVar14);
          pUVar10 = (__this->fields)._part_blade_l;
          if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_05c01ccf;
          pMVar11 = UnityEngine_GameObject__GetComponentInChildren_object_
                              (pUVar10,(MethodInfo_353B8D0 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponentInChildren_MeleeWeaponTrail
                              );
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar7 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pMVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar7) {
            if (*ppUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_05c01ccf;
            pMVar11 = UnityEngine_GameObject__GetComponentInChildren_object_
                                (*ppUVar1,(MethodInfo_353B8D0 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponentInChildren_MeleeWeaponTrail
                                );
            (__this->fields).LeftTrail = pMVar11;
            Il2CppCodeGenWriteBarrier(&(__this->fields).LeftTrail);
            pMVar11 = (__this->fields).LeftTrail;
            if (pMVar11 == (MeleeWeaponTrail_o *)0x0) goto label_05c01ccf;
            (pMVar11->fields)._emit = false;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pMVar11,false,(MethodInfo *)0x0);
          }
        }
        pCVar6 = (__this->fields)._meshes;
        if (pCVar6 != (Characters_HumanSetupMeshes_o *)0x0) {
          pCVar9 = (Characters_HumanSetup_o *)
                   Characters_HumanSetupMeshes__GetWeaponMesh(pCVar6,false,(MethodInfo *)0x0);
          bVar7 = System_String__op_Inequality
                            ((System_String_o *)pCVar9,
                             (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
          if (!bVar7) {
            return;
          }
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          ppUVar1 = &(__this->fields)._part_blade_r;
          pSVar8 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pMVar14 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
          pUVar10 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar8,(System_String_o *)pCVar9,true,false,
                               (MethodInfo_3665790 *)
                               MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
          *ppUVar1 = pUVar10;
          Il2CppCodeGenWriteBarrier(ppUVar1);
          if (pCVar9 != (Characters_HumanSetup_o *)0x0) {
            bVar7 = System_String__Contains((System_String_o *)pCVar9,"thunderspear",(MethodInfo *)0x0)
            ;
            if (bVar7) {
              Characters_HumanSetup__AttachToMount(pCVar9,*ppUVar1,(__this->fields)._mount_ts_r,false,pMVar14)
              ;
            }
            else {
              Characters_HumanSetup__AttachToMount
                        (pCVar9,*ppUVar1,(__this->fields)._mount_weapon_r,false,pMVar14);
              pUVar10 = (__this->fields)._part_blade_r;
              if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
                 (pUVar12 = UnityEngine_GameObject__GetComponentInChildren_object_
                                      (pUVar10,(MethodInfo_353B8D0 *)
                                               MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer
                                      ), pUVar12 == (UnityEngine_Renderer_o *)0x0)) goto label_05c01ccf;
              UnityEngine_Renderer__set_material(pUVar12,value,(MethodInfo *)0x0);
            }
            Characters_HumanSetup__ApplyCharacterEffectToPart
                      (__this,(__this->fields)._part_blade_r,type,false,pMVar14);
            pUVar10 = (__this->fields)._part_blade_r;
            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
              pMVar11 = UnityEngine_GameObject__GetComponentInChildren_object_
                                  (pUVar10,(MethodInfo_353B8D0 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponentInChildren_MeleeWeaponTrail
                                  );
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar7 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pMVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if (!bVar7) {
                return;
              }
              if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pMVar11 = UnityEngine_GameObject__GetComponentInChildren_object_
                                    (*ppUVar1,(MethodInfo_353B8D0 *)
                                              MethodInfo_UnityEngine_GameObject_GetComponentInChildren_MeleeWeaponTrail
                                    );
                (__this->fields).RightTrail = pMVar11;
                Il2CppCodeGenWriteBarrier(&(__this->fields).RightTrail);
                pMVar11 = (__this->fields).RightTrail;
                if (pMVar11 != (MeleeWeaponTrail_o *)0x0) {
                  (pMVar11->fields)._emit = false;
                  UnityEngine_Behaviour__set_enabled
                            ((UnityEngine_Behaviour_o *)pMVar11,false,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
label_05c01ccf:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateCape
// il2cpp: void Characters_HumanSetup__CreateCape (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c03f50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c03ff1: lea r14, [rbp + 0xe8]
// asm:   0x5c03ff8: cmp byte ptr [rip + 0x1943669], 0
// asm:   0x5c03fff: jne 0x5c04014
// asm:   0x5c0413f: jmp 0x5c04014

void Characters_HumanSetup__CreateCape(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Characters_HumanSetupMeshes_o *__this_00;
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Characters_HumanSetupTextures_o *pCVar3;
  bool bVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  System_String_o *texture;
  UnityEngine_Material_o *material;
  UnityEngine_Renderer_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  UnityEngine_GameObject_o **targetAddress;
  
  if (Il2CppMethodInitialized_0754766c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"_cloak");
    il2cpp_codegen_initialize_runtime_metadata(&"Brand/Aottg_hero_brand_unbranded_cloak");
    Il2CppMethodInitialized_0754766c = '\x01';
  }
  if ((__this->fields).IsDeadBody != false) {
    return;
  }
  if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
  }
  if (Il2CppMethodInitialized_07547668 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    Il2CppMethodInitialized_07547668 = '\x01';
  }
  targetAddress = &(__this->fields)._part_cape;
  pUVar6 = *targetAddress;
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  ClothFactory__DisposeObject(pUVar6,(MethodInfo *)0x0);
  (__this->fields)._part_cape = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  __this_00 = (__this->fields)._meshes;
  if (__this_00 != (Characters_HumanSetupMeshes_o *)0x0) {
    pSVar5 = Characters_HumanSetupMeshes__GetCapeMesh(__this_00,(MethodInfo *)0x0);
    method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
    bVar4 = System_String__op_Inequality(pSVar5,(System_String_o *)method_00,(MethodInfo *)0x0);
    if (!bVar4) {
label_05c04225:
      Characters_HumanSetup__RefreshHairMaterials(__this,method_00);
      Characters_HumanSetup__UpdateCloakVisibility(__this,method_00);
      return;
    }
    pSVar1 = (__this->fields).CustomSet;
    if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).Cape, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar2->fields)._value == 2) {
        pUVar6 = Characters_HumanSetup__GenerateCloth(__this,pSVar5,method_01);
        (__this->fields)._part_cape = pUVar6;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pCVar3 = (__this->fields)._textures;
        if (pCVar3 != (Characters_HumanSetupTextures_o *)0x0) {
          pSVar5 = Characters_HumanSetupTextures__GetBrandTexture(pCVar3,(MethodInfo *)0x0);
          bVar4 = System_String__op_Equality
                            (pSVar5,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                             (MethodInfo *)0x0);
          if (bVar4) {
            pSVar5 = "Brand/Aottg_hero_brand_unbranded_cloak";
          }
          else {
            pSVar5 = System_String__Concat_52f0320(pSVar5,"_cloak",(MethodInfo *)0x0);
          }
          if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
            __this_01 = UnityEngine_GameObject__GetComponent_object_
                                  (*targetAddress,
                                   (MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
            if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
            }
            method_00 = (MethodInfo *)
                        Characters_HumanSetupMaterials__GetPartMaterial(pSVar5,false,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_Renderer_o *)0x0) {
              UnityEngine_Renderer__set_material
                        (__this_01,(UnityEngine_Material_o *)method_00,(MethodInfo *)0x0);
              goto label_05c04225;
            }
          }
        }
      }
      else {
        pCVar3 = (__this->fields)._textures;
        if (pCVar3 != (Characters_HumanSetupTextures_o *)0x0) {
          pUVar6 = (__this->fields)._mount_cloth;
          texture = Characters_HumanSetupTextures__GetBrandTexture(pCVar3,(MethodInfo *)0x0);
          if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
          }
          material = Characters_HumanSetupMaterials__GetPartMaterial(texture,false,(MethodInfo *)0x0);
          if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
          }
          method_00 = (MethodInfo *)ClothFactory__GetCape(pUVar6,pSVar5,material,(MethodInfo *)0x0);
          *targetAddress = (UnityEngine_GameObject_o *)method_00;
          Il2CppCodeGenWriteBarrier(targetAddress);
          goto label_05c04225;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$SetHood
// il2cpp: void Characters_HumanSetup__SetHood (Characters_HumanSetup_o* __this, bool hoodUp, const MethodInfo* method);
// 0x5c04510
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c0453f: jmp 0x5c04771

void Characters_HumanSetup__SetHood(Characters_HumanSetup_o *__this,bool hoodUp,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *__this_00;
  Characters_HumanSetupMeshes_o *__this_01;
  System_String_o *path;
  UnityEngine_GameObject_o *__this_02;
  UnityEngine_Bounds_o value;
  bool bVar3;
  System_String_o *name;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_SkinnedMeshRenderer_o *__this_03;
  UnityEngine_SkinnedMeshRenderer_o *__this_04;
  UnityEngine_Mesh_o *value_00;
  MethodInfo *method_00;
  UnityEngine_Bounds_o UStack_30;
  
  if (Il2CppMethodInitialized_0754766d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_0754766d = '\x01';
    if (Il2CppMethodInitialized_07547657 == '\0') goto label_05c045a8;
label_05c0452f:
    pSVar1 = (__this->fields).CustomSet;
  }
  else {
    if (Il2CppMethodInitialized_07547657 != '\0') goto label_05c0452f;
label_05c045a8:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547657 = '\x01';
    pSVar1 = (__this->fields).CustomSet;
  }
  if (pSVar1 == (Settings_HumanCustomSet_o *)0x0) {
    return;
  }
  pSVar2 = (pSVar1->fields).Cape;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar2->fields)._value != 2) {
      return;
    }
    if ((__this->fields).IsDeadBody != false) {
      return;
    }
    __this_00 = (pSVar1->fields).HoodUp;
    if (__this_00 != (Settings_BoolSetting_o *)0x0) {
      if ((((Settings_TypedSetting_bool__Fields *)&__this_00->fields)->_value != false) == hoodUp) {
        return;
      }
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_00,hoodUp,
                 (MethodInfo_42DA020 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_cape;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      method_00 = (MethodInfo *)0x0;
      bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
label_05c04761:
        Characters_HumanSetup__RefreshHairMaterials(__this,method_00);
        Characters_HumanSetup__UpdateCloakVisibility(__this,method_00);
        return;
      }
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      __this_01 = (__this->fields)._meshes;
      if (__this_01 != (Characters_HumanSetupMeshes_o *)0x0) {
        path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
        name = Characters_HumanSetupMeshes__GetCapeMesh(__this_01,(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pUVar4 = ApplicationManagers_ResourceManager__LoadAsset(path,name,true,false,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Object_o *)0x0) {
          if (pUVar4->klass != (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
          }
          __this_03 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)pUVar4,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
          __this_02 = (__this->fields)._part_cape;
          if (((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
              (__this_04 = UnityEngine_GameObject__GetComponent_object_
                                     (__this_02,
                                      (MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer),
              __this_03 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) &&
             (value_00 = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_03,(MethodInfo *)0x0),
             __this_04 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) {
            UnityEngine_SkinnedMeshRenderer__set_sharedMesh(__this_04,value_00,(MethodInfo *)0x0);
            UnityEngine_Renderer__get_localBounds
                      (&UStack_30,(UnityEngine_Renderer_o *)__this_03,(MethodInfo *)0x0);
            method_00 = (MethodInfo *)0x0;
            value.fields.m_Center.fields.z = UStack_30.fields.m_Center.fields.z;
            value.fields.m_Extents.fields.x = UStack_30.fields.m_Extents.fields.x;
            value.fields.m_Center.fields.x = UStack_30.fields.m_Center.fields.x;
            value.fields.m_Center.fields.y = UStack_30.fields.m_Center.fields.y;
            value.fields.m_Extents.fields.y = UStack_30.fields.m_Extents.fields.y;
            value.fields.m_Extents.fields.z = UStack_30.fields.m_Extents.fields.z;
            UnityEngine_Renderer__set_localBounds((UnityEngine_Renderer_o *)__this_04,value,(MethodInfo *)0x0)
            ;
            goto label_05c04761;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$UpdateCloakVisibility
// il2cpp: void Characters_HumanSetup__UpdateCloakVisibility (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c02430
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c024b2: jmp 0x5c0251e
// asm:   0x5c02584: jmp 0x5c025f4

void Characters_HumanSetup__UpdateCloakVisibility(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_BoolSetting_o *pSVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_0754766e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754766e = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._part_hat;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    pUVar2 = (__this->fields)._part_hat;
    if (Il2CppMethodInitialized_07547658 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
      Il2CppMethodInitialized_07547658 = '\x01';
      if (Il2CppMethodInitialized_07547657 == '\0') goto label_05c024d0;
label_05c024a4:
      pSVar3 = (__this->fields).CustomSet;
    }
    else {
      if (Il2CppMethodInitialized_07547657 != '\0') goto label_05c024a4;
label_05c024d0:
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
      Il2CppMethodInitialized_07547657 = '\x01';
      pSVar3 = (__this->fields).CustomSet;
    }
    bVar6 = true;
    if (pSVar3 != (Settings_HumanCustomSet_o *)0x0) {
      bVar6 = true;
      pSVar4 = (pSVar3->fields).Cape;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05c02611;
      if ((pSVar4->fields)._value == 2) {
        pSVar5 = (pSVar3->fields).HoodUp;
        if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto label_05c02611;
        bVar6 = (pSVar5->fields)._value == false;
      }
    }
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05c02611;
    UnityEngine_GameObject__SetActive(pUVar2,bVar6,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._part_head_decor;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    return;
  }
  pUVar2 = (__this->fields)._part_head_decor;
  if (Il2CppMethodInitialized_07547658 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_07547658 = '\x01';
    if (Il2CppMethodInitialized_07547657 == '\0') goto label_05c025ae;
label_05c02576:
    pSVar3 = (__this->fields).CustomSet;
  }
  else {
    if (Il2CppMethodInitialized_07547657 != '\0') goto label_05c02576;
label_05c025ae:
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_07547657 = '\x01';
    pSVar3 = (__this->fields).CustomSet;
  }
  bVar6 = true;
  if (pSVar3 != (Settings_HumanCustomSet_o *)0x0) {
    bVar6 = true;
    pSVar4 = (pSVar3->fields).Cape;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) goto label_05c02611;
    if ((pSVar4->fields)._value == 2) {
      pSVar5 = (pSVar3->fields).HoodUp;
      if (pSVar5 == (Settings_BoolSetting_o *)0x0) goto label_05c02611;
      bVar6 = (pSVar5->fields)._value == false;
    }
  }
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar2,bVar6,(MethodInfo *)0x0);
    return;
  }
label_05c02611:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateHair
// il2cpp: void Characters_HumanSetup__CreateHair (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bfece0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bfee35: jmp 0x5bff329
// asm:   0x5bfee77: lea rbx, [r15 + 0x130]
// asm:   0x5bfee7e: cmp byte ptr [rip + 0x19487e3], 0
// asm:   0x5bfee85: jne 0x5bfee9a
// asm:   0x5bff324: jmp 0x5bfee9a

void Characters_HumanSetup__CreateHair(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_Renderer__o *pSVar2;
  UnityEngine_Object_o *pUVar3;
  Settings_HumanCustomSet_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  Characters_HumanSetupMeshes_o *pCVar6;
  Characters_HumanSetupTextures_o *pCVar7;
  Settings_ColorSetting_o *pSVar8;
  Utility_Color255_o *pUVar9;
  bool bVar10;
  int32_t type;
  uint uVar11;
  System_String_o *pSVar12;
  UnityEngine_GameObject_o *pUVar13;
  System_Object_array *pSVar14;
  UnityEngine_Material_o *pUVar15;
  System_String_o *pSVar16;
  MethodInfo *method_00;
  UnityEngine_GameObject_o **targetAddress;
  Characters_HumanSetup_o *__this_00;
  MethodInfo *in_R8;
  uint uVar17;
  UnityEngine_Color_o UVar18;
  
  if (Il2CppMethodInitialized_0754766f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectPresets);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"IgnoreColor");
    Il2CppMethodInitialized_0754766f = '\x01';
  }
  pSVar2 = (__this->fields)._hairRenderers;
  if (pSVar2 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_05bff329;
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
  }
  pUVar3 = (UnityEngine_Object_o *)(__this->fields)._part_hair;
  if (Il2CppMethodInitialized_0754767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar10 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar10) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar3,(MethodInfo *)0x0);
    if ((__this->fields).IsDeadBody != false) goto label_05bfee25;
label_05bfee60:
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    if (Il2CppMethodInitialized_07547668 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
      Il2CppMethodInitialized_07547668 = '\x01';
    }
    targetAddress = &(__this->fields)._part_hair_1;
    pUVar13 = *targetAddress;
    if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
    }
    ClothFactory__DisposeObject(pUVar13,(MethodInfo *)0x0);
    *targetAddress = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pSVar4 = (__this->fields).CustomSet;
  }
  else {
    if ((__this->fields).IsDeadBody == false) goto label_05bfee60;
label_05bfee25:
    pSVar4 = (__this->fields).CustomSet;
  }
  if ((pSVar4 != (Settings_HumanCustomSet_o *)0x0) &&
     (pSVar5 = (pSVar4->fields).HairEffect, pSVar5 != (Settings_StringSetting_o *)0x0)) {
    pSVar12 = (pSVar5->fields)._value;
    if ((((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets)->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
    }
    type = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar12,(MethodInfo *)0x0);
    pCVar6 = (__this->fields)._meshes;
    if (pCVar6 != (Characters_HumanSetupMeshes_o *)0x0) {
      pSVar12 = Characters_HumanSetupMeshes__GetHairMesh(pCVar6,(MethodInfo *)0x0);
      bVar10 = System_String__op_Inequality
                         (pSVar12,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0)
      ;
      if (bVar10) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        __this_00 = (Characters_HumanSetup_o *)&(__this->fields)._part_hair;
        pSVar16 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        in_R8 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
        pUVar13 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                            (pSVar16,pSVar12,true,false,
                             (MethodInfo_3665790 *)
                             MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
        (__this->fields)._part_hair = pUVar13;
        Il2CppCodeGenWriteBarrier((void **)__this_00);
        Characters_HumanSetup__AttachToMount
                  (__this_00,(__this->fields)._part_hair,(__this->fields)._part_head,false,in_R8);
        pUVar13 = (__this->fields)._part_hair;
        if ((pUVar13 == (UnityEngine_GameObject_o *)0x0) ||
           (pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                                (pUVar13,(MethodInfo_353C030 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer),
           pSVar14 == (System_Object_array *)0x0)) goto label_05bff329;
        uVar11 = (uint)pSVar14->max_length;
        if (0 < (int)uVar11) {
          uVar17 = 0;
          do {
            if (uVar11 <= uVar17) {
              ThrowIndexOutOfRangeException();
            }
            pCVar7 = (__this->fields)._textures;
            if (pCVar7 == (Characters_HumanSetupTextures_o *)0x0) goto label_05bff329;
            pUVar3 = (UnityEngine_Object_o *)pSVar14->m_Items[(int)uVar17];
            pSVar12 = Characters_HumanSetupTextures__GetHairTexture(pCVar7,(MethodInfo *)0x0);
            if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
            }
            pUVar15 = Characters_HumanSetupMaterials__GetHairMaterial(pSVar12,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_05bff329;
            UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pUVar3,pUVar15,(MethodInfo *)0x0);
            pSVar12 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
            if (pSVar12 == (System_String_o *)0x0) goto label_05bff329;
            bVar10 = System_String__Contains(pSVar12,"IgnoreColor",(MethodInfo *)0x0);
            if (!bVar10) {
              pUVar15 = Characters_HumanSetup__OwnInstance(__this,(UnityEngine_Renderer_o *)pUVar3,method_00);
              pSVar4 = (__this->fields).CustomSet;
              if ((((pSVar4 == (Settings_HumanCustomSet_o *)0x0) ||
                   (pSVar8 = (pSVar4->fields).HairColor, pSVar8 == (Settings_ColorSetting_o *)0x0)) ||
                  (pUVar9 = (pSVar8->fields)._value, pUVar9 == (Utility_Color255_o *)0x0)) ||
                 (UVar18 = Utility_Color255__ToColor(pUVar9,(MethodInfo *)0x0),
                 pUVar15 == (UnityEngine_Material_o *)0x0)) goto label_05bff329;
              UnityEngine_Material__set_color(pUVar15,UVar18,(MethodInfo *)0x0);
            }
            uVar17 = uVar17 + 1;
            uVar11 = (uint)pSVar14->max_length;
          } while ((int)uVar17 < (int)uVar11);
        }
        Characters_HumanSetup__ApplyCharacterEffectToPart(__this,(__this->fields)._part_hair,type,true,in_R8);
        pUVar13 = (__this->fields)._part_hair;
        if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_05bff329;
        pSVar2 = (__this->fields)._hairRenderers;
        pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                            (pUVar13,(MethodInfo_353C030 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
        if (pSVar2 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_05bff329;
        System_Collections_Generic_List_object___AddRange
                  ((System_Collections_Generic_List_object__o *)pSVar2,
                   (System_Collections_Generic_IEnumerable_T__o *)pSVar14,
                   (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_Renderer_AddRange);
      }
      pCVar6 = (__this->fields)._meshes;
      if (pCVar6 != (Characters_HumanSetupMeshes_o *)0x0) {
        pSVar12 = Characters_HumanSetupMeshes__GetHairClothMesh(pCVar6,(MethodInfo *)0x0);
        pSVar14 = (System_Object_array *)**(undefined8 **)(g_data_07556758 + 0xb8);
        bVar10 = System_String__op_Inequality(pSVar12,(System_String_o *)pSVar14,(MethodInfo *)0x0);
        if ((!bVar10) || ((__this->fields).IsDeadBody != false)) {
label_05bff2f5:
          Characters_HumanSetup__RefreshHairMaterials(__this,(MethodInfo *)pSVar14);
          return;
        }
        pCVar7 = (__this->fields)._textures;
        if (pCVar7 != (Characters_HumanSetupTextures_o *)0x0) {
          pSVar16 = Characters_HumanSetupTextures__GetHairTexture(pCVar7,(MethodInfo *)0x0);
          if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
          }
          pUVar15 = Characters_HumanSetupMaterials__GetHairMaterial(pSVar16,(MethodInfo *)0x0);
          pSVar4 = (__this->fields).CustomSet;
          if (((pSVar4 != (Settings_HumanCustomSet_o *)0x0) &&
              (pSVar8 = (pSVar4->fields).HairColor, pSVar8 != (Settings_ColorSetting_o *)0x0)) &&
             (pUVar9 = (pSVar8->fields)._value, pUVar9 != (Utility_Color255_o *)0x0)) {
            pUVar13 = (__this->fields)._mount_cloth;
            UVar18 = Utility_Color255__ToColor(pUVar9,(MethodInfo *)0x0);
            if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
            }
            pUVar13 = ClothFactory__GetHair(pUVar13,pSVar12,pUVar15,UVar18,(MethodInfo *)0x0);
            (__this->fields)._part_hair_1 = pUVar13;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._part_hair_1);
            Characters_HumanSetup__ApplyCharacterEffectToPart
                      (__this,(__this->fields)._part_hair_1,type,true,in_R8);
            pUVar13 = (__this->fields)._part_hair_1;
            if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
              pSVar2 = (__this->fields)._hairRenderers;
              pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                                  (pUVar13,(MethodInfo_353C030 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer)
              ;
              if (pSVar2 != (System_Collections_Generic_List_Renderer__o *)0x0) {
                System_Collections_Generic_List_object___AddRange
                          ((System_Collections_Generic_List_object__o *)pSVar2,
                           (System_Collections_Generic_IEnumerable_T__o *)pSVar14,
                           (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_Renderer_AddRange)
                ;
                goto label_05bff2f5;
              }
            }
          }
        }
      }
    }
  }
label_05bff329:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CanUseCharacterEffects
// il2cpp: bool Characters_HumanSetup__CanUseCharacterEffects (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c04790

bool Characters_HumanSetup__CanUseCharacterEffects(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *pSVar3;
  bool bVar4;
  bool bVar5;
  int32_t iVar6;
  Photon_Pun_PhotonView_o *x;
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_07547670 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectPresets);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_PhotonView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547670 = '\x01';
  }
  pSVar1 = (__this->fields).CustomSet;
  if (pSVar1 == (Settings_HumanCustomSet_o *)0x0) {
    bVar5 = false;
  }
  else {
    pSVar2 = (pSVar1->fields).HairEffect;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) {
label_05c0492e:
      ThrowNullReferenceException();
    }
    pSVar3 = (pSVar2->fields)._value;
    if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
    }
    iVar6 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar3,(MethodInfo *)0x0);
    if (iVar6 == 0) {
      pSVar1 = (__this->fields).CustomSet;
      if ((pSVar1 == (Settings_HumanCustomSet_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).BladeEffect, pSVar2 == (Settings_StringSetting_o *)0x0))
      goto label_05c0492e;
      pSVar3 = (pSVar2->fields)._value;
      if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
      }
      iVar6 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar3,(MethodInfo *)0x0);
      if (iVar6 == 0) {
        return false;
      }
    }
    if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 4) {
label_05c048ea:
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      bVar5 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
      return bVar5;
    }
    x = UnityEngine_Component__GetComponent_object_
                  ((UnityEngine_Component_o *)__this,
                   (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_PhotonView);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    bVar5 = true;
    if (bVar4) {
      if (x == (Photon_Pun_PhotonView_o *)0x0) goto label_05c0492e;
      if ((x->fields)._IsMine_k__BackingField != false) goto label_05c048ea;
    }
  }
  return bVar5;
}


// Characters.HumanSetup$$ApplyCharacterEffectToPart
// il2cpp: void Characters_HumanSetup__ApplyCharacterEffectToPart (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* part, int32_t type, bool isHair, const MethodInfo* method);
// 0x5c02e60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c036ae: jmp 0x5c0374e
// asm:   0x5c0390a: jmp 0x5c037c6

void Characters_HumanSetup__ApplyCharacterEffectToPart
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *part,int32_t type,bool isHair,
               MethodInfo *method)

{
  uint32_t uVar1;
  int iVar2;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_ColorSetting_o *pSVar4;
  Utility_Color255_o *pUVar5;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Settings_GraphicsSettings_o *pSVar7;
  Settings_IntSetting_o *pSVar8;
  UnityEngine_Vector2_o UVar9;
  Characters_HumanSetup_o *pCVar10;
  bool bVar11;
  System_Object_array *pSVar12;
  UnityEngine_Material_o *__this_01;
  UnityEngine_Object_o *x_00;
  UnityEngine_Material_o *x_01;
  UnityEngine_Material_o *pUVar13;
  undefined7 in_register_00000009;
  System_String_o **ppSVar14;
  ulong uVar15;
  UnityEngine_Texture_o *value;
  System_String_o *pSVar16;
  MethodInfo *method_00;
  ulong uVar17;
  float fVar18;
  undefined4 extraout_XMM0_Dc;
  float extraout_XMM0_Dc_00;
  float extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dd;
  float extraout_XMM0_Dd_00;
  float extraout_XMM0_Dd_01;
  undefined8 in_XMM1_Qb;
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  float fVar21;
  float fVar22;
  float fVar23;
  uint uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  float fVar28;
  UnityEngine_Color_o UVar29;
  UnityEngine_Color_o value_00;
  UnityEngine_Color_o value_01;
  UnityEngine_Color_o value_02;
  UnityEngine_Color_o value_03;
  UnityEngine_Material_o *local_1d0;
  undefined4 local_1c4;
  float local_1c0;
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
  Characters_HumanSetup_o *local_188;
  float local_180;
  float local_17c;
  float local_178;
  float local_174;
  float local_170;
  float local_16c;
  float local_168;
  float local_164;
  float local_160;
  float local_15c;
  undefined1 local_158 [16];
  PatreonEffects_CharacterEffectPreset_o local_140;
  System_Object_array *local_100;
  float local_f8;
  float fStack_f4;
  float fStack_f0;
  float fStack_ec;
  float local_e8;
  float fStack_e4;
  float fStack_e0;
  float fStack_dc;
  float local_d8;
  float fStack_d4;
  float fStack_d0;
  float fStack_cc;
  float local_c8;
  float fStack_c4;
  float fStack_c0;
  float fStack_bc;
  undefined1 local_b8 [16];
  float local_a8;
  float fStack_a4;
  undefined1 local_98 [16];
  undefined1 local_88 [16];
  undefined1 local_78 [16];
  undefined1 local_68 [16];
  undefined8 local_58;
  undefined1 local_48 [16];
  
  local_1c4 = (undefined4)CONCAT71(in_register_00000009,isHair);
  if (Il2CppMethodInitialized_07547671 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectPresets);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Material);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"_PulseSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"_FlowSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"_TexturePreserve");
    il2cpp_codegen_initialize_runtime_metadata(&"_FlowStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"Custom/CharacterEffectShader");
    il2cpp_codegen_initialize_runtime_metadata(&"_EmissionFromTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"_SecondaryScroll");
    il2cpp_codegen_initialize_runtime_metadata(&"_QualityLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"_IsHair");
    il2cpp_codegen_initialize_runtime_metadata(&"_Color");
    il2cpp_codegen_initialize_runtime_metadata(&"_MainTex");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_CullMode");
    il2cpp_codegen_initialize_runtime_metadata(&"_BaseMap");
    il2cpp_codegen_initialize_runtime_metadata(&"_EMISSION");
    il2cpp_codegen_initialize_runtime_metadata(&"_NeonColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_OutlineThickness");
    il2cpp_codegen_initialize_runtime_metadata(&"_DetailSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"_StyleMode");
    il2cpp_codegen_initialize_runtime_metadata(&"_GlowIntensity");
    il2cpp_codegen_initialize_runtime_metadata(&"_EdgeSpark");
    il2cpp_codegen_initialize_runtime_metadata(&"_StyleStrength");
    il2cpp_codegen_initialize_runtime_metadata(&"_OutlinePower");
    il2cpp_codegen_initialize_runtime_metadata(&"_PulseAmount");
    il2cpp_codegen_initialize_runtime_metadata(&"_OutlineColor");
    il2cpp_codegen_initialize_runtime_metadata(&"_DetailScale");
    il2cpp_codegen_initialize_runtime_metadata(&"_GlowColor");
    Il2CppMethodInitialized_07547671 = '\x01';
  }
  local_1d0 = (UnityEngine_Material_o *)0x0;
  local_188 = __this;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)part,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((type == 0) || (bVar11)) ||
     (bVar11 = Characters_HumanSetup__CanUseCharacterEffects(local_188,method_00), !bVar11)) {
    return;
  }
  if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
  }
  PatreonEffects_CharacterEffectPresets__GetPreset(&local_140,type,(MethodInfo *)0x0);
  pCVar10 = local_188;
  pSVar3 = (local_188->fields).CustomSet;
  if (((pSVar3 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar4 = (pSVar3->fields).HairColor, pSVar4 != (Settings_ColorSetting_o *)0x0)) &&
     (pUVar5 = (pSVar4->fields)._value, pUVar5 != (Utility_Color255_o *)0x0)) {
    local_18c = local_140.fields.GlowIntensity;
    local_190 = local_140.fields.OutlineThickness;
    local_15c = local_140.fields.OutlinePower;
    local_160 = local_140.fields.PulseSpeed;
    local_164 = local_140.fields.PulseAmount;
    local_168 = local_140.fields.FlowSpeed;
    local_16c = local_140.fields.FlowStrength;
    local_194 = local_140.fields.TexturePreserve;
    local_198 = local_140.fields.EmissionFromTexture;
    local_19c = local_140.fields.DetailScale;
    local_1a0 = local_140.fields.DetailSpeed;
    local_170 = local_140.fields.SecondaryScroll;
    local_1b4 = local_140.fields.EdgeSpark;
    local_1a4 = local_140.fields.StyleStrength;
    UVar29 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
    local_58 = UVar29.fields._8_8_;
    local_48._8_4_ = extraout_XMM0_Dc;
    local_48._0_8_ = UVar29.fields._0_8_;
    local_48._12_4_ = extraout_XMM0_Dd;
    pSVar3 = (pCVar10->fields).CustomSet;
    if ((char)local_1c4 == '\0') {
      if (((pSVar3 == (Settings_HumanCustomSet_o *)0x0) ||
          (pSVar4 = (pSVar3->fields).BladeEffectColor, pSVar4 == (Settings_ColorSetting_o *)0x0)) ||
         (pUVar5 = (pSVar4->fields)._value, pUVar5 == (Utility_Color255_o *)0x0)) goto label_05c03f3a;
      UVar29 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
      local_b8._0_8_ = UVar29.fields._8_8_;
      local_b8._8_8_ = in_XMM1_Qb;
      local_a8 = UVar29.fields.r;
      fStack_a4 = UVar29.fields.g;
      fVar22 = UVar29.fields.a;
      fVar18 = 1.0;
      if (fVar22 <= 1.0) {
        fVar18 = fVar22;
      }
      uVar24 = -(uint)(0.0 <= fVar22) & (uint)fVar18;
      fVar25 = 1.0 - local_a8;
      fVar26 = 1.0 - fStack_a4;
      fVar27 = 0.0 - extraout_XMM0_Dc_01;
      fVar28 = 0.0 - extraout_XMM0_Dd_01;
      fVar18 = 0.35;
      fVar22 = 0.35;
      local_d8 = fVar25 * 0.35 + local_a8;
      fStack_d4 = fVar26 * 0.35 + fStack_a4;
      fStack_d0 = fVar27 * 0.0 + extraout_XMM0_Dc_01;
      fStack_cc = fVar28 * 0.0 + extraout_XMM0_Dd_01;
      fVar21 = 0.6;
      fVar23 = 0.6;
      fStack_f0 = extraout_XMM0_Dc_01;
      fStack_ec = extraout_XMM0_Dd_01;
    }
    else {
      if (((pSVar3 == (Settings_HumanCustomSet_o *)0x0) ||
          (pSVar4 = (pSVar3->fields).HairEffectColor, pSVar4 == (Settings_ColorSetting_o *)0x0)) ||
         (pUVar5 = (pSVar4->fields)._value, pUVar5 == (Utility_Color255_o *)0x0)) goto label_05c03f3a;
      UVar29 = Utility_Color255__ToColor(pUVar5,(MethodInfo *)0x0);
      local_b8._0_8_ = UVar29.fields._8_8_;
      local_b8._8_8_ = in_XMM1_Qb;
      local_a8 = UVar29.fields.r;
      fStack_a4 = UVar29.fields.g;
      fVar22 = UVar29.fields.a;
      fVar18 = 1.0;
      if (fVar22 <= 1.0) {
        fVar18 = fVar22;
      }
      uVar24 = -(uint)(0.0 <= fVar22) & (uint)fVar18;
      fVar25 = 1.0 - local_a8;
      fVar26 = 1.0 - fStack_a4;
      fVar27 = 0.0 - extraout_XMM0_Dc_00;
      fVar28 = 0.0 - extraout_XMM0_Dd_00;
      fVar18 = 0.2;
      fVar22 = 0.2;
      local_d8 = fVar25 * 0.2 + local_a8;
      fStack_d4 = fVar26 * 0.2 + fStack_a4;
      fStack_d0 = fVar27 * 0.0 + extraout_XMM0_Dc_00;
      fStack_cc = fVar28 * 0.0 + extraout_XMM0_Dd_00;
      fVar21 = 0.45;
      fVar23 = 0.45;
      fStack_f0 = extraout_XMM0_Dc_00;
      fStack_ec = extraout_XMM0_Dd_00;
    }
    local_158 = ZEXT416(uVar24);
    local_f8 = fVar25 * fVar21 + local_a8;
    fStack_f4 = fVar26 * fVar23 + fStack_a4;
    fStack_f0 = fVar27 * 0.0 + fStack_f0;
    fStack_ec = fVar28 * 0.0 + fStack_ec;
    local_e8 = local_b8._0_4_;
    fStack_e4 = local_b8._4_4_;
    fStack_e0 = local_b8._8_4_;
    fStack_dc = local_b8._12_4_;
    local_c8 = fVar18 * (1.0 - local_e8) + local_e8;
    fStack_c4 = fVar22 * (1.0 - fStack_e4) + fStack_e4;
    fStack_c0 = (0.0 - fStack_e0) * 0.0 + fStack_e0;
    fStack_bc = (0.0 - fStack_dc) * 0.0 + fStack_dc;
    local_e8 = (1.0 - local_e8) * fVar21 + local_e8;
    fStack_e4 = (1.0 - fStack_e4) * fVar23 + fStack_e4;
    fStack_e0 = (0.0 - fStack_e0) * 0.0 + fStack_e0;
    fStack_dc = (0.0 - fStack_dc) * 0.0 + fStack_dc;
    if ((part != (UnityEngine_GameObject_o *)0x0) &&
       (pSVar12 = UnityEngine_GameObject__GetComponentsInChildren_object__353c030
                            (part,(MethodInfo_353C030 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer),
       pSVar12 != (System_Object_array *)0x0)) {
      if ((int)pSVar12->max_length < 1) {
        return;
      }
      fVar22 = local_198 * 0.7;
      fVar18 = 1.0;
      if (fVar22 <= 1.0) {
        fVar18 = fVar22;
      }
      local_68 = ZEXT416(-(uint)(0.0 <= fVar22) & (uint)fVar18);
      fVar22 = local_194 * 0.95;
      fVar18 = 1.5;
      if (fVar22 <= 1.5) {
        fVar18 = fVar22;
      }
      local_78 = ZEXT416(~-(uint)(0.5 <= fVar22) & 0x3f000000 | (uint)fVar18 & -(uint)(0.5 <= fVar22));
      fVar22 = local_198 + 0.22;
      local_1a8 = 1.0;
      fVar18 = 1.0;
      if (fVar22 <= 1.0) {
        fVar18 = fVar22;
      }
      local_88 = ZEXT416(-(uint)(0.0 <= fVar22) & (uint)fVar18);
      fVar22 = local_194 + 0.14;
      fVar18 = 1.5;
      if (fVar22 <= 1.5) {
        fVar18 = fVar22;
      }
      local_98 = ZEXT416(~-(uint)(0.5 <= fVar22) & 0x3f000000 | (uint)fVar18 & -(uint)(0.5 <= fVar22));
      local_1ac = 0.0;
      if ((char)local_1c4 == '\0') {
        local_1ac = 2.0;
      }
      uVar15 = pSVar12->max_length & 0xffffffff;
      if ((char)local_1c4 == '\0') {
        local_1a8 = 0.0;
      }
      local_174 = (float)local_140.fields.StyleMode;
      local_178 = local_1b4 * 1.25 * (float)local_158._0_4_;
      local_1c0 = local_18c * 1.15 * (float)local_158._0_4_;
      local_1b0 = local_1a4 * (float)local_158._0_4_;
      local_1b8 = local_18c * 0.45 * (float)local_158._0_4_;
      local_1bc = local_19c * 1.15;
      local_17c = local_1a0 * 1.1;
      auVar19._0_4_ = SUB124(ZEXT812(0x3f666666),0) * local_190;
      auVar19._4_8_ = SUB128(ZEXT812(0x3f666666),4);
      auVar19._12_4_ = 0;
      local_158._0_4_ = (float)local_158._0_4_ * local_1b4;
      uVar17 = 0;
      local_180 = auVar19._0_4_;
      local_100 = pSVar12;
      do {
        if (uVar15 <= uVar17) {
          ThrowIndexOutOfRangeException();
        }
        x = (UnityEngine_Object_o *)local_100->m_Items[uVar17];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar11 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar11) {
          if (x == (UnityEngine_Object_o *)0x0) break;
          __this_01 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
          x_00 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("Custom/CharacterEffectShader",(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar11 = UnityEngine_Object__op_Equality
                             ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if (!bVar11) {
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar11 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar11) {
              local_1d0 = (UnityEngine_Material_o *)0x0;
              pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                       (local_188->fields)._effectMaterialCache;
              if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
              bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                 (pSVar6,(Il2CppObject *)x,(Il2CppObject **)&local_1d0,
                                  (MethodInfo_4AAF440 *)
                                  MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_TryGetValue
                                 );
              pUVar13 = local_1d0;
              if (bVar11) {
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if (!bVar11) goto label_05c036b3;
                x_01 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0)
                ;
                pUVar13 = local_1d0;
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)pUVar13,
                                    (MethodInfo *)0x0);
                if (bVar11) goto label_05c0373f;
              }
              else {
label_05c036b3:
                pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
                UnityEngine_Material___ctor(pUVar13,(UnityEngine_Shader_o *)x_00,(MethodInfo *)0x0);
                if (Il2CppMethodInitialized_07547664 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata
                            (&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                  Il2CppMethodInitialized_07547664 = '\x01';
                }
                pCVar10 = local_188;
                __this_00 = (System_Collections_Generic_HashSet_object__o *)
                            (local_188->fields)._ownedMaterials;
                if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
                System_Collections_Generic_HashSet_object___Add
                          (__this_00,(Il2CppObject *)pUVar13,
                           (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                         (pCVar10->fields)._effectMaterialCache;
                local_1d0 = pUVar13;
                if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
                System_Collections_Generic_Dictionary_object__object___set_Item
                          (pSVar6,(Il2CppObject *)x,(Il2CppObject *)pUVar13,
                           (MethodInfo_4AAD4C0 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_set_Item);
label_05c0373f:
                UnityEngine_Renderer__set_sharedMaterial
                          ((UnityEngine_Renderer_o *)x,local_1d0,(MethodInfo *)0x0);
              }
              if (__this_01 == (UnityEngine_Material_o *)0x0) break;
              bVar11 = UnityEngine_Material__HasProperty_68dd940
                                 (__this_01,"_BaseMap",(MethodInfo *)0x0);
              ppSVar14 = &"_BaseMap";
              if (bVar11) {
label_05c03797:
                pSVar16 = *ppSVar14;
                if (pSVar16 != (System_String_o *)0x0) {
                  value = UnityEngine_Material__GetTexture(__this_01,pSVar16,(MethodInfo *)0x0);
                  goto label_05c037b3;
                }
                pSVar16 = (System_String_o *)0x0;
                value = (UnityEngine_Texture_o *)0x0;
                uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
              }
              else {
                bVar11 = UnityEngine_Material__HasProperty_68dd940
                                   (__this_01,"_MainTex",(MethodInfo *)0x0);
                ppSVar14 = &"_MainTex";
                pSVar16 = (System_String_o *)0x0;
                value = (UnityEngine_Texture_o *)0x0;
                if (bVar11) goto label_05c03797;
label_05c037b3:
                uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
              }
              if (uVar1 == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar11 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
              ;
              if (bVar11) {
                if (local_1d0 == (UnityEngine_Material_o *)0x0) break;
                UnityEngine_Material__SetTexture(local_1d0,"_MainTex",value,(MethodInfo *)0x0);
                pUVar13 = local_1d0;
                UVar9 = UnityEngine_Material__GetTextureScale(__this_01,pSVar16,(MethodInfo *)0x0);
                if (pUVar13 == (UnityEngine_Material_o *)0x0) break;
                UnityEngine_Material__SetTextureScale(pUVar13,"_MainTex",UVar9,(MethodInfo *)0x0);
                pUVar13 = local_1d0;
                UVar9 = UnityEngine_Material__GetTextureOffset(__this_01,pSVar16,(MethodInfo *)0x0);
                if (pUVar13 == (UnityEngine_Material_o *)0x0) break;
                UnityEngine_Material__SetTextureOffset(pUVar13,"_MainTex",UVar9,(MethodInfo *)0x0);
              }
              if ((char)local_1c4 == '\0') {
                bVar11 = UnityEngine_Material__HasProperty_68dd940
                                   (__this_01,"_Color",(MethodInfo *)0x0);
                pUVar13 = local_1d0;
                if (bVar11) {
                  UVar29 = UnityEngine_Material__GetColor(__this_01,"_Color",(MethodInfo *)0x0);
                  if (pUVar13 == (UnityEngine_Material_o *)0x0) break;
                  UnityEngine_Material__SetColor(pUVar13,"_Color",UVar29,(MethodInfo *)0x0);
                }
                else {
                  bVar11 = UnityEngine_Material__HasProperty_68dd940
                                     (__this_01,"_BaseColor",(MethodInfo *)0x0);
                  pUVar13 = local_1d0;
                  if (bVar11) {
                    UVar29 = UnityEngine_Material__GetColor(__this_01,"_BaseColor",(MethodInfo *)0x0)
                    ;
                    auVar20._8_8_ = auVar19._8_8_;
                    auVar20._0_8_ = UVar29.fields._8_8_;
                    fVar18 = UVar29.fields.r;
                    fVar22 = UVar29.fields.g;
                    if (pUVar13 == (UnityEngine_Material_o *)0x0) break;
                  }
                  else {
                    if (local_1d0 == (UnityEngine_Material_o *)0x0) break;
                    fVar18 = (float)g_data_01005870;
                    fVar22 = g_data_01005870._4_4_;
                    auVar20 = _DAT_01005870;
                  }
                  UVar29.fields.g = fVar22;
                  UVar29.fields.r = fVar18;
                  UVar29.fields._8_8_ = auVar20._0_8_;
                  UnityEngine_Material__SetColor(pUVar13,"_Color",UVar29,(MethodInfo *)0x0);
                }
              }
              else {
                if (local_1d0 == (UnityEngine_Material_o *)0x0) break;
                value_00.fields.b = (float)(undefined4)local_58;
                value_00.fields.a = (float)local_58._4_4_;
                value_00.fields.r = (float)local_48._0_4_;
                value_00.fields.g = (float)local_48._4_4_;
                UnityEngine_Material__SetColor(local_1d0,"_Color",value_00,(MethodInfo *)0x0);
              }
              if (local_1d0 == (UnityEngine_Material_o *)0x0) break;
              value_01.fields.g = fStack_a4;
              value_01.fields.r = local_a8;
              value_01.fields.b = (float)local_b8._0_4_;
              value_01.fields.a = (float)local_b8._4_4_;
              UnityEngine_Material__SetColor(local_1d0,"_NeonColor",value_01,(MethodInfo *)0x0);
              if ((local_1d0 == (UnityEngine_Material_o *)0x0) ||
                 (value_02.fields.g = fStack_d4, value_02.fields.r = local_d8, value_02.fields.a = fStack_c4,
                 value_02.fields.b = local_c8,
                 UnityEngine_Material__SetColor(local_1d0,"_GlowColor",value_02,(MethodInfo *)0x0),
                 local_1d0 == (UnityEngine_Material_o *)0x0)) break;
              value_03.fields.g = fStack_f4;
              value_03.fields.r = local_f8;
              auVar19._8_4_ = fStack_e0;
              auVar19._0_8_ = CONCAT44(fStack_e4,local_e8);
              auVar19._12_4_ = fStack_dc;
              value_03.fields.b = local_e8;
              value_03.fields.a = fStack_e4;
              UnityEngine_Material__SetColor(local_1d0,"_OutlineColor",value_03,(MethodInfo *)0x0);
              if (((local_1d0 == (UnityEngine_Material_o *)0x0) ||
                  (((((UnityEngine_Material__SetFloat
                                 (local_1d0,"_GlowIntensity",local_18c,(MethodInfo *)0x0),
                      local_1d0 == (UnityEngine_Material_o *)0x0 ||
                      (UnityEngine_Material__SetFloat
                                 (local_1d0,"_OutlineThickness",local_190,(MethodInfo *)0x0),
                      local_1d0 == (UnityEngine_Material_o *)0x0)) ||
                     (UnityEngine_Material__SetFloat
                                (local_1d0,"_OutlinePower",local_15c,(MethodInfo *)0x0),
                     local_1d0 == (UnityEngine_Material_o *)0x0)) ||
                    ((UnityEngine_Material__SetFloat
                                (local_1d0,"_PulseSpeed",local_160,(MethodInfo *)0x0),
                     local_1d0 == (UnityEngine_Material_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                (local_1d0,"_PulseAmount",local_164,(MethodInfo *)0x0),
                     local_1d0 == (UnityEngine_Material_o *)0x0)))) ||
                   (UnityEngine_Material__SetFloat
                              (local_1d0,"_FlowSpeed",local_168,(MethodInfo *)0x0),
                   local_1d0 == (UnityEngine_Material_o *)0x0)))) ||
                 (((((UnityEngine_Material__SetFloat
                                (local_1d0,"_FlowStrength",local_16c,(MethodInfo *)0x0),
                     local_1d0 == (UnityEngine_Material_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                (local_1d0,"_TexturePreserve",local_194,(MethodInfo *)0x0),
                     local_1d0 == (UnityEngine_Material_o *)0x0)) ||
                    (UnityEngine_Material__SetFloat
                               (local_1d0,"_EmissionFromTexture",local_198,(MethodInfo *)0x0),
                    local_1d0 == (UnityEngine_Material_o *)0x0)) ||
                   ((((UnityEngine_Material__SetFloat
                                 (local_1d0,"_DetailScale",local_19c,(MethodInfo *)0x0),
                      local_1d0 == (UnityEngine_Material_o *)0x0 ||
                      (UnityEngine_Material__SetFloat
                                 (local_1d0,"_DetailSpeed",local_1a0,(MethodInfo *)0x0),
                      local_1d0 == (UnityEngine_Material_o *)0x0)) ||
                     (UnityEngine_Material__SetFloat
                                (local_1d0,"_SecondaryScroll",local_170,(MethodInfo *)0x0),
                     local_1d0 == (UnityEngine_Material_o *)0x0)) ||
                    ((UnityEngine_Material__SetFloat
                                (local_1d0,"_EdgeSpark",local_1b4,(MethodInfo *)0x0),
                     local_1d0 == (UnityEngine_Material_o *)0x0 ||
                     (UnityEngine_Material__SetFloat
                                (local_1d0,"_StyleMode",local_174,(MethodInfo *)0x0),
                     local_1d0 == (UnityEngine_Material_o *)0x0)))))) ||
                  ((UnityEngine_Material__SetFloat
                              (local_1d0,"_StyleStrength",local_1a4,(MethodInfo *)0x0),
                   local_1d0 == (UnityEngine_Material_o *)0x0 ||
                   (UnityEngine_Material__SetFloat
                              (local_1d0,"_IsHair",local_1a8,(MethodInfo *)0x0),
                   local_1d0 == (UnityEngine_Material_o *)0x0)))))) break;
              UnityEngine_Material__SetFloat(local_1d0,"_CullMode",local_1ac,(MethodInfo *)0x0);
              pSVar7 = TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings;
              fVar18 = 2.0;
              if (pSVar7 != (Settings_GraphicsSettings_o *)0x0) {
                pSVar8 = (pSVar7->fields).PresetQuality;
                if (pSVar8 == (Settings_IntSetting_o *)0x0) break;
                iVar2 = (pSVar8->fields)._value;
                fVar18 = 0.0;
                if (1 < iVar2) {
                  fVar18 = *(float *)(&g_data_0100ab00 + (ulong)(iVar2 < 3) * 4);
                }
              }
              if (local_1d0 == (UnityEngine_Material_o *)0x0) break;
              UnityEngine_Material__SetFloat(local_1d0,"_QualityLevel",fVar18,(MethodInfo *)0x0);
              if ((char)local_1c4 == '\0') {
                if (local_1d0 == (UnityEngine_Material_o *)0x0) break;
                UnityEngine_Material__SetFloat
                          (local_1d0,"_EmissionFromTexture",(float)local_68._0_4_,(MethodInfo *)0x0);
                if (local_1d0 == (UnityEngine_Material_o *)0x0) break;
                UnityEngine_Material__SetFloat
                          (local_1d0,"_TexturePreserve",(float)local_78._0_4_,(MethodInfo *)0x0);
                if (((local_1d0 == (UnityEngine_Material_o *)0x0) ||
                    (UnityEngine_Material__SetFloat
                               (local_1d0,"_EdgeSpark",local_178,(MethodInfo *)0x0),
                    local_1d0 == (UnityEngine_Material_o *)0x0)) ||
                   (UnityEngine_Material__SetFloat
                              (local_1d0,"_GlowIntensity",local_1c0,(MethodInfo *)0x0),
                   local_1d0 == (UnityEngine_Material_o *)0x0)) break;
                pSVar16 = "_StyleStrength";
                fVar18 = local_1b0;
              }
              else {
                if ((local_1d0 == (UnityEngine_Material_o *)0x0) ||
                   (UnityEngine_Material__SetFloat
                              (local_1d0,"_GlowIntensity",local_1b8,(MethodInfo *)0x0),
                   local_1d0 == (UnityEngine_Material_o *)0x0)) break;
                UnityEngine_Material__SetFloat
                          (local_1d0,"_EmissionFromTexture",(float)local_88._0_4_,(MethodInfo *)0x0);
                if (local_1d0 == (UnityEngine_Material_o *)0x0) break;
                UnityEngine_Material__SetFloat
                          (local_1d0,"_TexturePreserve",(float)local_98._0_4_,(MethodInfo *)0x0);
                if ((((local_1d0 == (UnityEngine_Material_o *)0x0) ||
                     (UnityEngine_Material__SetFloat
                                (local_1d0,"_DetailScale",local_1bc,(MethodInfo *)0x0),
                     local_1d0 == (UnityEngine_Material_o *)0x0)) ||
                    (UnityEngine_Material__SetFloat
                               (local_1d0,"_DetailSpeed",local_17c,(MethodInfo *)0x0),
                    local_1d0 == (UnityEngine_Material_o *)0x0)) ||
                   ((UnityEngine_Material__SetFloat
                               (local_1d0,"_OutlineThickness",local_180,(MethodInfo *)0x0),
                    local_1d0 == (UnityEngine_Material_o *)0x0 ||
                    (UnityEngine_Material__SetFloat
                               (local_1d0,"_StyleStrength",local_1b0,(MethodInfo *)0x0),
                    local_1d0 == (UnityEngine_Material_o *)0x0)))) break;
                pSVar16 = "_EdgeSpark";
                fVar18 = (float)local_158._0_4_;
              }
              UnityEngine_Material__SetFloat(local_1d0,pSVar16,fVar18,(MethodInfo *)0x0);
              if ((local_1d0 == (UnityEngine_Material_o *)0x0) ||
                 (UnityEngine_Material__EnableKeyword(local_1d0,"_EMISSION",(MethodInfo *)0x0),
                 local_1d0 == (UnityEngine_Material_o *)0x0)) break;
              UnityEngine_Material__set_globalIlluminationFlags(local_1d0,1,(MethodInfo *)0x0);
              UnityEngine_Renderer__set_sharedMaterial
                        ((UnityEngine_Renderer_o *)x,local_1d0,(MethodInfo *)0x0);
            }
          }
        }
        uVar17 = uVar17 + 1;
        uVar24 = (uint)local_100->max_length;
        uVar15 = (ulong)uVar24;
        if ((long)(int)uVar24 <= (long)uVar17) {
          return;
        }
      } while( true );
    }
  }
label_05c03f3a:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$ReapplyCharacterEffectsToExistingParts
// il2cpp: void Characters_HumanSetup__ReapplyCharacterEffectsToExistingParts (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c04940

void Characters_HumanSetup__ReapplyCharacterEffectsToExistingParts
               (Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *raw;
  bool bVar3;
  int32_t type;
  int32_t type_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547672 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectPresets);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_07547672 = '\x01';
  }
  if ((__this->fields).CustomSet != (Settings_HumanCustomSet_o *)0x0) {
    bVar3 = Characters_HumanSetup__CanUseCharacterEffects(__this,method);
    if (bVar3) {
      pSVar1 = (__this->fields).CustomSet;
      if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
         (pSVar2 = (pSVar1->fields).HairEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) {
        raw = (pSVar2->fields)._value;
        if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
        }
        type = PatreonEffects_CharacterEffectPresets__ParseOrDefault(raw,(MethodInfo *)0x0);
        pSVar1 = (__this->fields).CustomSet;
        if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
           (pSVar2 = (pSVar1->fields).BladeEffect, pSVar2 != (Settings_StringSetting_o *)0x0)) {
          type_00 = PatreonEffects_CharacterEffectPresets__ParseOrDefault
                              ((pSVar2->fields)._value,(MethodInfo *)0x0);
          Characters_HumanSetup__ApplyCharacterEffectToPart
                    (__this,(__this->fields)._part_hair,type,true,in_R8);
          Characters_HumanSetup__ApplyCharacterEffectToPart
                    (__this,(__this->fields)._part_hair_1,type,true,in_R8);
          Characters_HumanSetup__ApplyCharacterEffectToPart
                    (__this,(__this->fields)._part_blade_l,type_00,false,in_R8);
          Characters_HumanSetup__ApplyCharacterEffectToPart
                    (__this,(__this->fields)._part_blade_r,type_00,false,in_R8);
          return;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Characters.HumanSetup$$CreateEye
// il2cpp: void Characters_HumanSetup__CreateEye (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bff340
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bff3ba: jmp 0x5bff54a

void Characters_HumanSetup__CreateEye(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *x;
  Characters_HumanSetupMeshes_o *__this_00;
  System_String_o *path;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  bool bVar4;
  System_String_o *name;
  UnityEngine_GameObject_o *pUVar5;
  Characters_HumanSetup_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07547673 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    Il2CppMethodInitialized_07547673 = '\x01';
    x = (UnityEngine_Object_o *)(__this->fields)._part_eye;
  }
  else {
    x = (UnityEngine_Object_o *)(__this->fields)._part_eye;
  }
  if (Il2CppMethodInitialized_0754767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(x,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    __this_00 = (__this->fields)._meshes;
  }
  else {
    __this_00 = (__this->fields)._meshes;
  }
  if (__this_00 != (Characters_HumanSetupMeshes_o *)0x0) {
    __this_01 = (Characters_HumanSetup_o *)&(__this->fields)._part_eye;
    path = *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Utility_ResourcePaths)->static_fields + 8);
    name = Characters_HumanSetupMeshes__GetEyeMesh(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    method_00 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
    pUVar5 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (path,name,true,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    (__this->fields)._part_eye = pUVar5;
    Il2CppCodeGenWriteBarrier((void **)__this_01);
    Characters_HumanSetup__AttachToMount
              (__this_01,(__this->fields)._part_eye,(__this->fields)._part_head,false,method_00);
    pSVar2 = (__this->fields).CustomSet;
    if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).Eye, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      Characters_HumanSetup__SetFacialTexture
                (__this_01,(__this->fields)._part_eye,"Eye",(pSVar3->fields)._value,false,
                 in_R9);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateFace
// il2cpp: void Characters_HumanSetup__CreateFace (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bff550

void Characters_HumanSetup__CreateFace(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *x;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Characters_HumanSetupMeshes_o *__this_01;
  System_String_o *path;
  bool bVar4;
  int32_t id;
  Characters_HumanSetup_o *__this_02;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_GameObject_o **ppUVar7;
  Characters_HumanSetup_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07547674 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Face");
    Il2CppMethodInitialized_07547674 = '\x01';
    x = (UnityEngine_Object_o *)(__this->fields)._part_face;
  }
  else {
    x = (UnityEngine_Object_o *)(__this->fields)._part_face;
  }
  if (Il2CppMethodInitialized_0754767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(x,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Face, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar5 = (pSVar3->fields)._value, pSVar5 != (System_String_o *)0x0)) {
    __this_02 = (Characters_HumanSetup_o *)System_String__Substring(pSVar5,4,(MethodInfo *)0x0);
    bVar4 = System_String__op_Inequality((System_String_o *)__this_02,"None",(MethodInfo *)0x0)
    ;
    if (!bVar4) {
      return;
    }
    pSVar2 = (__this->fields).CustomSet;
    if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).Face, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      pSVar5 = (pSVar3->fields)._value;
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_Characters_HumanSetup->static_fields->UniqueItems;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar4 = System_Collections_Generic_HashSet_object___Contains
                          (__this_00,(Il2CppObject *)pSVar5,
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (bVar4) {
          uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
        }
        else {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          __this_01 = (__this->fields)._meshes;
        }
        else {
          __this_01 = (__this->fields)._meshes;
        }
        if (__this_01 != (Characters_HumanSetupMeshes_o *)0x0) {
          __this_03 = (Characters_HumanSetup_o *)&(__this->fields)._part_face;
          path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
          pSVar5 = Characters_HumanSetupMeshes__GetFaceMesh(__this_01,pSVar5,(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          method_00 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
          pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                             (path,pSVar5,true,false,
                              (MethodInfo_3665790 *)
                              MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
          (__this->fields)._part_face = pUVar6;
          Il2CppCodeGenWriteBarrier((void **)__this_03);
          ppUVar7 = &(__this->fields)._part_head;
          if (bVar4) {
            ppUVar7 = &(__this->fields)._mount_head_decor;
          }
          Characters_HumanSetup__AttachToMount(__this_03,(__this->fields)._part_face,*ppUVar7,bVar4,method_00)
          ;
          pUVar6 = (__this->fields)._part_face;
          id = System_Int32__Parse((System_String_o *)__this_02,(MethodInfo *)0x0);
          Characters_HumanSetup__SetFacialTexture(__this_02,pUVar6,"Face",id,bVar4,in_R9);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateGlass
// il2cpp: void Characters_HumanSetup__CreateGlass (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5bff890

void Characters_HumanSetup__CreateGlass(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *x;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Characters_HumanSetupMeshes_o *__this_01;
  System_String_o *path;
  bool bVar4;
  int32_t id;
  Characters_HumanSetup_o *__this_02;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_GameObject_o **ppUVar7;
  Characters_HumanSetup_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07547675 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Glass");
    Il2CppMethodInitialized_07547675 = '\x01';
    x = (UnityEngine_Object_o *)(__this->fields)._part_glass;
  }
  else {
    x = (UnityEngine_Object_o *)(__this->fields)._part_glass;
  }
  if (Il2CppMethodInitialized_0754767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(x,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Glass, pSVar3 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar5 = (pSVar3->fields)._value, pSVar5 != (System_String_o *)0x0)) {
    __this_02 = (Characters_HumanSetup_o *)System_String__Substring(pSVar5,5,(MethodInfo *)0x0);
    bVar4 = System_String__op_Inequality((System_String_o *)__this_02,"None",(MethodInfo *)0x0)
    ;
    if (!bVar4) {
      return;
    }
    pSVar2 = (__this->fields).CustomSet;
    if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).Glass, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      pSVar5 = (pSVar3->fields)._value;
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_Characters_HumanSetup->static_fields->UniqueItems;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar4 = System_Collections_Generic_HashSet_object___Contains
                          (__this_00,(Il2CppObject *)pSVar5,
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (bVar4) {
          uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
        }
        else {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          __this_01 = (__this->fields)._meshes;
        }
        else {
          __this_01 = (__this->fields)._meshes;
        }
        if (__this_01 != (Characters_HumanSetupMeshes_o *)0x0) {
          __this_03 = (Characters_HumanSetup_o *)&(__this->fields)._part_glass;
          path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
          pSVar5 = Characters_HumanSetupMeshes__GetGlassMesh(__this_01,pSVar5,(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          method_00 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
          pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                             (path,pSVar5,true,false,
                              (MethodInfo_3665790 *)
                              MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
          (__this->fields)._part_glass = pUVar6;
          Il2CppCodeGenWriteBarrier((void **)__this_03);
          ppUVar7 = &(__this->fields)._part_head;
          if (bVar4) {
            ppUVar7 = &(__this->fields)._mount_head_decor;
          }
          Characters_HumanSetup__AttachToMount
                    (__this_03,(__this->fields)._part_glass,*ppUVar7,bVar4,method_00);
          pUVar6 = (__this->fields)._part_glass;
          id = System_Int32__Parse((System_String_o *)__this_02,(MethodInfo *)0x0);
          Characters_HumanSetup__SetFacialTexture(__this_02,pUVar6,"Glass",id,bVar4,in_R9);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateBack
// il2cpp: void Characters_HumanSetup__CreateBack (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c01ce0

void Characters_HumanSetup__CreateBack(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *path;
  bool bVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  EZhex1991_EZSoftBone_EZSoftBone_o *x;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o **targetAddress;
  UnityEngine_Object_o *x_00;
  Characters_HumanSetup_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547676 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_EZSoftBone);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupPrefabs);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547676 = '\x01';
    x_00 = (UnityEngine_Object_o *)(__this->fields)._part_back;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05c01d0d;
label_05c01f79:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    x_00 = (UnityEngine_Object_o *)(__this->fields)._part_back;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c01f79;
label_05c01d0d:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(x_00,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Back, pSVar3 == (Settings_StringSetting_o *)0x0)) ||
     (pSVar5 = (pSVar3->fields)._value, pSVar5 == (System_String_o *)0x0)) {
label_05c01fae:
    ThrowNullReferenceException();
  }
  pSVar5 = System_String__Substring(pSVar5,4,(MethodInfo *)0x0);
  bVar4 = System_String__op_Inequality(pSVar5,"None",(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_Characters_HumanSetupPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupPrefabs);
    }
    __this_00 = (Characters_HumanSetup_o *)&(__this->fields)._part_back;
    pSVar5 = Characters_HumanSetupPrefabs__GetBackPrefab(pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    method_00 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
    pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (path,pSVar5,true,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    (__this->fields)._part_back = pUVar6;
    Il2CppCodeGenWriteBarrier((void **)__this_00);
    Characters_HumanSetup__AttachToMount
              (__this_00,(__this->fields)._part_back,(__this->fields)._mount_back,true,method_00);
    pUVar6 = (__this->fields)._part_back;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_05c01fae;
    x = UnityEngine_GameObject__GetComponentInChildren_object_
                  (pUVar6,(MethodInfo_353B8D0 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInChildren_EZSoftBone);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if (x == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) goto label_05c01fae;
      pUVar7 = (x->fields).m_SimulateSpace;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        targetAddress = &(x->fields).m_SimulateSpace;
        pUVar7 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        *targetAddress = pUVar7;
        Il2CppCodeGenWriteBarrier(targetAddress);
        return;
      }
    }
  }
  return;
}


// Characters.HumanSetup$$CreateHead
// il2cpp: void Characters_HumanSetup__CreateHead (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c02200

void Characters_HumanSetup__CreateHead(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *x;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *path;
  bool bVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  MethodInfo *method_00;
  Characters_HumanSetup_o *__this_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547677 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547677 = '\x01';
    x = (UnityEngine_Object_o *)(__this->fields)._part_head_decor;
  }
  else {
    x = (UnityEngine_Object_o *)(__this->fields)._part_head_decor;
  }
  if (Il2CppMethodInitialized_0754767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(x,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Head, pSVar3 == (Settings_StringSetting_o *)0x0)) ||
     (pSVar5 = (pSVar3->fields)._value, pSVar5 == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar5 = System_String__Substring(pSVar5,4,(MethodInfo *)0x0);
  bVar4 = System_String__op_Inequality(pSVar5,"None",(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_Characters_HumanSetupPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupPrefabs);
    }
    __this_00 = (Characters_HumanSetup_o *)&(__this->fields)._part_head_decor;
    pSVar5 = Characters_HumanSetupPrefabs__GetHeadPrefab(pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    method_01 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
    pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (path,pSVar5,true,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    (__this->fields)._part_head_decor = pUVar6;
    Il2CppCodeGenWriteBarrier((void **)__this_00);
    method_00 = (MethodInfo *)(__this->fields)._part_head_decor;
    Characters_HumanSetup__AttachToMount
              (__this_00,(UnityEngine_GameObject_o *)method_00,(__this->fields)._mount_head_decor,true,
               method_01);
    Characters_HumanSetup__UpdateCloakVisibility(__this,method_00);
    return;
  }
  return;
}


// Characters.HumanSetup$$CreateHat
// il2cpp: void Characters_HumanSetup__CreateHat (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c01fc0

void Characters_HumanSetup__CreateHat(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *x;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  System_String_o *path;
  bool bVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  MethodInfo *method_00;
  Characters_HumanSetup_o *__this_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07547678 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_07547678 = '\x01';
    x = (UnityEngine_Object_o *)(__this->fields)._part_hat;
  }
  else {
    x = (UnityEngine_Object_o *)(__this->fields)._part_hat;
  }
  if (Il2CppMethodInitialized_0754767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(x,(MethodInfo *)0x0);
  }
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Hat, pSVar3 == (Settings_StringSetting_o *)0x0)) ||
     (pSVar5 = (pSVar3->fields)._value, pSVar5 == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar5 = System_String__Substring(pSVar5,3,(MethodInfo *)0x0);
  bVar4 = System_String__op_Inequality(pSVar5,"None",(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_Characters_HumanSetupPrefabs->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupPrefabs);
    }
    __this_00 = (Characters_HumanSetup_o *)&(__this->fields)._part_hat;
    pSVar5 = Characters_HumanSetupPrefabs__GetHatPrefab(pSVar5,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    method_01 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
    pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (path,pSVar5,true,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    (__this->fields)._part_hat = pUVar6;
    Il2CppCodeGenWriteBarrier((void **)__this_00);
    method_00 = (MethodInfo *)(__this->fields)._part_hat;
    Characters_HumanSetup__AttachToMount
              (__this_00,(UnityEngine_GameObject_o *)method_00,(__this->fields)._mount_hat,true,method_01);
    Characters_HumanSetup__UpdateCloakVisibility(__this,method_00);
    return;
  }
  return;
}


// Characters.HumanSetup$$CreateArms
// il2cpp: void Characters_HumanSetup__CreateArms (Characters_HumanSetup_o* __this, UnityEngine_Material_o* bodyMaterial, const MethodInfo* method);
// 0x5c00820

void Characters_HumanSetup__CreateArms
               (Characters_HumanSetup_o *__this,UnityEngine_Material_o *bodyMaterial,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *pUVar2;
  Characters_HumanSetupTextures_o *__this_00;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_ColorSetting_o *pSVar4;
  Utility_Color255_o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  Characters_HumanSetupMeshes_o *pCVar5;
  bool bVar6;
  System_String_o *pSVar7;
  UnityEngine_Material_o *value;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Renderer_o *pUVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07547679 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_07547679 = '\x01';
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._part_arm_l;
  }
  else {
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._part_arm_l;
  }
  if (Il2CppMethodInitialized_0754767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._part_hand_l;
  }
  else {
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._part_hand_l;
  }
  if (Il2CppMethodInitialized_0754767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._part_arm_r;
  }
  else {
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._part_arm_r;
  }
  if (Il2CppMethodInitialized_0754767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._part_hand_r;
  }
  else {
    pUVar2 = (UnityEngine_Object_o *)(__this->fields)._part_hand_r;
  }
  if (Il2CppMethodInitialized_0754767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar2,(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields)._textures;
  if (__this_00 != (Characters_HumanSetupTextures_o *)0x0) {
    pSVar7 = Characters_HumanSetupTextures__GetSkinTexture(__this_00,(MethodInfo *)0x0);
    pSVar3 = (__this->fields).CustomSet;
    if (((pSVar3 != (Settings_HumanCustomSet_o *)0x0) &&
        (pSVar4 = (pSVar3->fields).SkinColor, pSVar4 != (Settings_ColorSetting_o *)0x0)) &&
       (__this_01 = (pSVar4->fields)._value, __this_01 != (Utility_Color255_o *)0x0)) {
      color = Utility_Color255__ToColor(__this_01,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
      }
      value = Characters_HumanSetupMaterials__GetSkinMaterial(pSVar7,color,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07547664 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
        Il2CppMethodInitialized_07547664 = '\x01';
      }
      __this_02 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
      if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (__this_02,(Il2CppObject *)value,
                   (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
        pCVar5 = (__this->fields)._meshes;
        if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
          pSVar7 = Characters_HumanSetupMeshes__GetArmMesh(pCVar5,true,(MethodInfo *)0x0);
          pUVar8 = Characters_HumanSetup__GenerateCloth(__this,pSVar7,method_00);
          (__this->fields)._part_arm_l = pUVar8;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._part_arm_l);
          pUVar8 = (__this->fields)._part_arm_l;
          if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                 (pUVar8,(MethodInfo_353B730 *)
                                         MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
             pUVar9 != (UnityEngine_Renderer_o *)0x0)) {
            UnityEngine_Renderer__set_material(pUVar9,bodyMaterial,(MethodInfo *)0x0);
            pCVar5 = (__this->fields)._meshes;
            if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
              pSVar7 = Characters_HumanSetupMeshes__GetHandMesh(pCVar5,true,(MethodInfo *)0x0);
              pUVar8 = Characters_HumanSetup__GenerateCloth(__this,pSVar7,method_01);
              (__this->fields)._part_hand_l = pUVar8;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._part_hand_l);
              pUVar8 = (__this->fields)._part_hand_l;
              if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar8,(MethodInfo_353B730 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                 pUVar9 != (UnityEngine_Renderer_o *)0x0)) {
                UnityEngine_Renderer__set_material(pUVar9,value,(MethodInfo *)0x0);
                pCVar5 = (__this->fields)._meshes;
                if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
                  pSVar7 = Characters_HumanSetupMeshes__GetArmMesh(pCVar5,false,(MethodInfo *)0x0);
                  pUVar8 = Characters_HumanSetup__GenerateCloth(__this,pSVar7,method_02);
                  (__this->fields)._part_arm_r = pUVar8;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._part_arm_r);
                  pUVar8 = (__this->fields)._part_arm_r;
                  if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar8,(MethodInfo_353B730 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                     pUVar9 != (UnityEngine_Renderer_o *)0x0)) {
                    UnityEngine_Renderer__set_material(pUVar9,bodyMaterial,(MethodInfo *)0x0);
                    pCVar5 = (__this->fields)._meshes;
                    if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
                      pSVar7 = Characters_HumanSetupMeshes__GetHandMesh(pCVar5,false,(MethodInfo *)0x0);
                      pUVar8 = Characters_HumanSetup__GenerateCloth(__this,pSVar7,method_03);
                      (__this->fields)._part_hand_r = pUVar8;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._part_hand_r);
                      pUVar8 = (__this->fields)._part_hand_r;
                      if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
                         (pUVar9 = UnityEngine_GameObject__GetComponent_object_
                                             (pUVar8,(MethodInfo_353B730 *)
                                                     MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                         pUVar9 != (UnityEngine_Renderer_o *)0x0)) {
                        UnityEngine_Renderer__set_material(pUVar9,value,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$SetMaterial
// il2cpp: void Characters_HumanSetup__SetMaterial (Characters_HumanSetup_o* __this, UnityEngine_Renderer_o* renderer, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x5c04b90

void Characters_HumanSetup__SetMaterial
               (Characters_HumanSetup_o *__this,UnityEngine_Renderer_o *renderer,
               UnityEngine_Material_o *material,MethodInfo *method)

{
  if (renderer == (UnityEngine_Renderer_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Renderer__set_material(renderer,material,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSetup$$CreateLowerBody
// il2cpp: void Characters_HumanSetup__CreateLowerBody (Characters_HumanSetup_o* __this, UnityEngine_Material_o* bodyMaterial, const MethodInfo* method);
// 0x5c00d70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c00da7: jmp 0x5c00f3b

void Characters_HumanSetup__CreateLowerBody
               (Characters_HumanSetup_o *__this,UnityEngine_Material_o *bodyMaterial,MethodInfo *method)

{
  uint32_t uVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Characters_HumanSetupMeshes_o *__this_00;
  System_String_o *path;
  UnityEngine_GameObject_o *pUVar4;
  System_String_o *name;
  UnityEngine_Object_o *__this_01;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_SkinnedMeshRenderer_o *pUVar5;
  UnityEngine_SkinnedMeshRenderer_o *__this_03;
  UnityEngine_Mesh_o *value;
  
  if (Il2CppMethodInitialized_0754767a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_0754767a = '\x01';
    uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    pSVar2 = (__this->fields).CustomSet;
  }
  else {
    pSVar2 = (__this->fields).CustomSet;
  }
  if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar3 = (pSVar2->fields).Boots, pSVar3 != (Settings_IntSetting_o *)0x0)) &&
     (__this_00 = (__this->fields)._meshes, __this_00 != (Characters_HumanSetupMeshes_o *)0x0)) {
    path = *(System_String_o **)((long)((Il2CppClass *)TypeInfo_Utility_ResourcePaths)->static_fields + 8);
    name = Characters_HumanSetupMeshes__GetBootsMesh(__this_00,(pSVar3->fields)._value,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    __this_01 = ApplicationManagers_ResourceManager__LoadAsset(path,name,true,false,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Object_o *)0x0) {
      if (__this_01->klass != (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
        il2cpp_codegen_raise_invalid_cast_exception(__this_01);
      }
      __this_02 = UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
      pUVar4 = (__this->fields)._part_leg;
      if (((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
          (pUVar5 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar4,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer),
          __this_02 != (UnityEngine_Transform_o *)0x0)) &&
         ((__this_03 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)__this_02,
                                  (MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer),
          __this_03 != (UnityEngine_SkinnedMeshRenderer_o *)0x0 &&
          (value = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_03,(MethodInfo *)0x0),
          pUVar5 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)))) {
        UnityEngine_SkinnedMeshRenderer__set_sharedMesh(pUVar5,value,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._part_leg;
        if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar5 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar4,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer),
           pUVar5 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) {
          UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)pUVar5,bodyMaterial,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateUpperBody
// il2cpp: void Characters_HumanSetup__CreateUpperBody (Characters_HumanSetup_o* __this, UnityEngine_Material_o* bodyMaterial, const MethodInfo* method);
// 0x5bffbd0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5bffdc0: lea rbx, [r15 + 0x108]
// asm:   0x5bffdc7: cmp byte ptr [rip + 0x194789a], 0
// asm:   0x5bffdce: jne 0x5bffde3
// asm:   0x5c00816: jmp 0x5bffde3

void Characters_HumanSetup__CreateUpperBody
               (Characters_HumanSetup_o *__this,UnityEngine_Material_o *bodyMaterial,MethodInfo *method)

{
  uint32_t uVar1;
  Characters_HumanSetupMeshes_o *pCVar2;
  System_String_o *pSVar3;
  Characters_HumanSetupTextures_o *pCVar4;
  Settings_HumanCustomSet_o *pSVar5;
  Settings_ColorSetting_o *pSVar6;
  Utility_Color255_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool bVar7;
  System_String_o *pSVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_Renderer_o *pUVar10;
  UnityEngine_Material_o *pUVar11;
  SimpleJSONFixed_JSONNode_o *pSVar12;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  UnityEngine_GameObject_o **targetAddress;
  UnityEngine_Object_o *pUVar13;
  MethodInfo *pMVar14;
  Characters_HumanSetup_o *pCVar15;
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_0754767b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    Il2CppMethodInitialized_0754767b = '\x01';
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_upper_body;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c00594;
label_05bffc05:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_upper_body;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05bffc05;
label_05c00594:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_brand_1;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c005f9;
label_05bffc45:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_brand_1;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05bffc45;
label_05c005f9:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_brand_2;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c00657;
label_05bffc7e:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_brand_2;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05bffc7e;
label_05c00657:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_brand_3;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c006b5;
label_05bffcb7:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_brand_3;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05bffcb7;
label_05c006b5:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_brand_4;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c00713;
label_05bffcf0:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_brand_4;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05bffcf0;
label_05c00713:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_chest_1;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c00771;
label_05bffd29:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_chest_1;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05bffd29;
label_05c00771:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_chest_2;
    if (Il2CppMethodInitialized_0754767f == '\0') goto label_05c007cf;
label_05bffd62:
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pUVar13 = (UnityEngine_Object_o *)(__this->fields)._part_chest_2;
    if (Il2CppMethodInitialized_0754767f != '\0') goto label_05bffd62;
label_05c007cf:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar14 = (MethodInfo *)0x0;
  bVar7 = UnityEngine_Object__op_Inequality(pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar14 = (MethodInfo *)0x0;
    UnityEngine_Object__Destroy_69214e0(pUVar13,(MethodInfo *)0x0);
  }
  if ((__this->fields).IsDeadBody == false) {
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    if (Il2CppMethodInitialized_07547668 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
      Il2CppMethodInitialized_07547668 = '\x01';
    }
    targetAddress = &(__this->fields)._part_chest_3;
    pUVar9 = *targetAddress;
    if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
    }
    ClothFactory__DisposeObject(pUVar9,(MethodInfo *)0x0);
    *targetAddress = (UnityEngine_GameObject_o *)0x0;
    pMVar14 = (MethodInfo *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  Characters_HumanSetup__CreateCape(__this,pMVar14);
  pCVar2 = (__this->fields)._meshes;
  if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto label_05c0081b;
  pSVar8 = Characters_HumanSetupMeshes__GetChestMesh(pCVar2,1,(MethodInfo *)0x0);
  bVar7 = System_String__op_Inequality
                    (pSVar8,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pCVar15 = (Characters_HumanSetup_o *)&(__this->fields)._part_chest_1;
    pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pMVar14 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
    pUVar9 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                       (pSVar3,pSVar8,true,false,
                        (MethodInfo_3665790 *)
                        MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    (__this->fields)._part_chest_1 = pUVar9;
    Il2CppCodeGenWriteBarrier((void **)pCVar15);
    Characters_HumanSetup__AttachToMount
              (pCVar15,(__this->fields)._part_chest_1,(__this->fields)._mount_chest,false,pMVar14);
    pUVar9 = (__this->fields)._part_chest_1;
    if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_05c0081b;
    pUVar10 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar9,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Renderer)
    ;
    pCVar4 = (__this->fields)._textures;
    if (pCVar4 == (Characters_HumanSetupTextures_o *)0x0) goto label_05c0081b;
    pSVar8 = Characters_HumanSetupTextures__GetChestTexture(pCVar4,1,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    pUVar11 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar8,false,(MethodInfo *)0x0);
    if (pUVar10 == (UnityEngine_Renderer_o *)0x0) goto label_05c0081b;
    UnityEngine_Renderer__set_material(pUVar10,pUVar11,(MethodInfo *)0x0);
  }
  pCVar2 = (__this->fields)._meshes;
  if (pCVar2 != (Characters_HumanSetupMeshes_o *)0x0) {
    pSVar8 = Characters_HumanSetupMeshes__GetChestMesh(pCVar2,2,(MethodInfo *)0x0);
    bVar7 = System_String__op_Inequality
                      (pSVar8,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
    if (bVar7) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      pCVar15 = (Characters_HumanSetup_o *)&(__this->fields)._part_chest_2;
      pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pMVar14 = MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject;
      pUVar9 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (pSVar3,pSVar8,true,false,
                          (MethodInfo_3665790 *)
                          MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      (__this->fields)._part_chest_2 = pUVar9;
      Il2CppCodeGenWriteBarrier((void **)pCVar15);
      Characters_HumanSetup__AttachToMount
                (pCVar15,(__this->fields)._part_chest_2,(__this->fields)._mount_chest,false,pMVar14);
      pUVar9 = (__this->fields)._part_chest_2;
      if ((pUVar9 == (UnityEngine_GameObject_o *)0x0) ||
         (pUVar10 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar9,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
         pUVar10 == (UnityEngine_Renderer_o *)0x0)) goto label_05c0081b;
      UnityEngine_Renderer__set_material(pUVar10,bodyMaterial,(MethodInfo *)0x0);
    }
    pCVar2 = (__this->fields)._meshes;
    if (pCVar2 != (Characters_HumanSetupMeshes_o *)0x0) {
      pSVar8 = Characters_HumanSetupMeshes__GetChestMesh(pCVar2,3,(MethodInfo *)0x0);
      bVar7 = System_String__op_Inequality
                        (pSVar8,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      if ((bVar7) && ((__this->fields).IsDeadBody == false)) {
        pUVar9 = (__this->fields)._mount_cloth;
        if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
        }
        pUVar9 = ClothFactory__GetCape(pUVar9,pSVar8,bodyMaterial,(MethodInfo *)0x0);
        (__this->fields)._part_chest_3 = pUVar9;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._part_chest_3);
      }
      pCVar2 = (__this->fields)._meshes;
      if (pCVar2 != (Characters_HumanSetupMeshes_o *)0x0) {
        pSVar8 = Characters_HumanSetupMeshes__GetBodyMesh(pCVar2,(MethodInfo *)0x0);
        pUVar9 = Characters_HumanSetup__GenerateCloth(__this,pSVar8,method_00);
        (__this->fields)._part_upper_body = pUVar9;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._part_upper_body);
        pUVar9 = (__this->fields)._part_upper_body;
        if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                (pUVar9,(MethodInfo_353B730 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
           pUVar10 != (UnityEngine_Renderer_o *)0x0)) {
          UnityEngine_Renderer__set_material(pUVar10,bodyMaterial,(MethodInfo *)0x0);
          pCVar4 = (__this->fields)._textures;
          if (pCVar4 != (Characters_HumanSetupTextures_o *)0x0) {
            pSVar8 = Characters_HumanSetupTextures__GetBrandTexture(pCVar4,(MethodInfo *)0x0);
            if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
            }
            pUVar11 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar8,false,(MethodInfo *)0x0);
            pSVar12 = (__this->fields).CurrentCostume;
            if (((pSVar12 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                (pSVar12 = (*(pSVar12->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar12,"Type",
                                      (pSVar12->klass->vtable)._7_get_Item.method),
                pSVar12 != (SimpleJSONFixed_JSONNode_o *)0x0)) &&
               (pSVar8 = (*(pSVar12->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar12,(pSVar12->klass->vtable)._9_get_Value.method),
               pSVar8 != (System_String_o *)0x0)) {
              bVar7 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
              if (bVar7) {
                pCVar2 = (__this->fields)._meshes;
                if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto label_05c0081b;
                pSVar8 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar2,1,(MethodInfo *)0x0);
                pUVar9 = Characters_HumanSetup__GenerateCloth(__this,pSVar8,method_01);
                (__this->fields)._part_brand_1 = pUVar9;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._part_brand_1);
                pUVar9 = (__this->fields)._part_brand_1;
                if ((pUVar9 == (UnityEngine_GameObject_o *)0x0) ||
                   (pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                        (pUVar9,(MethodInfo_353B730 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                   pUVar10 == (UnityEngine_Renderer_o *)0x0)) goto label_05c0081b;
                UnityEngine_Renderer__set_material(pUVar10,pUVar11,(MethodInfo *)0x0);
                pCVar2 = (__this->fields)._meshes;
                if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto label_05c0081b;
                pSVar8 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar2,2,(MethodInfo *)0x0);
                pUVar9 = Characters_HumanSetup__GenerateCloth(__this,pSVar8,method_02);
                (__this->fields)._part_brand_2 = pUVar9;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._part_brand_2);
                pUVar9 = (__this->fields)._part_brand_2;
                if ((pUVar9 == (UnityEngine_GameObject_o *)0x0) ||
                   (pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                        (pUVar9,(MethodInfo_353B730 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                   pUVar10 == (UnityEngine_Renderer_o *)0x0)) goto label_05c0081b;
                UnityEngine_Renderer__set_material(pUVar10,pUVar11,(MethodInfo *)0x0);
                pCVar2 = (__this->fields)._meshes;
                if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto label_05c0081b;
                pSVar8 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar2,3,(MethodInfo *)0x0);
                pUVar9 = Characters_HumanSetup__GenerateCloth(__this,pSVar8,method_03);
                (__this->fields)._part_brand_3 = pUVar9;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._part_brand_3);
                pUVar9 = (__this->fields)._part_brand_3;
                if ((pUVar9 == (UnityEngine_GameObject_o *)0x0) ||
                   (pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                        (pUVar9,(MethodInfo_353B730 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                   pUVar10 == (UnityEngine_Renderer_o *)0x0)) goto label_05c0081b;
                UnityEngine_Renderer__set_material(pUVar10,pUVar11,(MethodInfo *)0x0);
                pCVar2 = (__this->fields)._meshes;
                if (pCVar2 == (Characters_HumanSetupMeshes_o *)0x0) goto label_05c0081b;
                pSVar8 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar2,4,(MethodInfo *)0x0);
                pUVar9 = Characters_HumanSetup__GenerateCloth(__this,pSVar8,method_04);
                (__this->fields)._part_brand_4 = pUVar9;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._part_brand_4);
                pUVar9 = (__this->fields)._part_brand_4;
                if ((pUVar9 == (UnityEngine_GameObject_o *)0x0) ||
                   (pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                        (pUVar9,(MethodInfo_353B730 *)
                                                MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                   pUVar10 == (UnityEngine_Renderer_o *)0x0)) goto label_05c0081b;
                UnityEngine_Renderer__set_material(pUVar10,pUVar11,(MethodInfo *)0x0);
              }
              pCVar4 = (__this->fields)._textures;
              if (pCVar4 != (Characters_HumanSetupTextures_o *)0x0) {
                pSVar8 = Characters_HumanSetupTextures__GetSkinTexture(pCVar4,(MethodInfo *)0x0);
                pSVar5 = (__this->fields).CustomSet;
                if (((pSVar5 != (Settings_HumanCustomSet_o *)0x0) &&
                    (pSVar6 = (pSVar5->fields).SkinColor, pSVar6 != (Settings_ColorSetting_o *)0x0)) &&
                   (__this_00 = (pSVar6->fields)._value, __this_00 != (Utility_Color255_o *)0x0)) {
                  color = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
                  if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
                  }
                  pUVar11 = Characters_HumanSetupMaterials__GetSkinMaterial(pSVar8,color,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_07547664 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                    Il2CppMethodInitialized_07547664 = '\x01';
                  }
                  __this_01 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials
                  ;
                  if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                    System_Collections_Generic_HashSet_object___Add
                              (__this_01,(Il2CppObject *)pUVar11,
                               (MethodInfo_4FB4450 *)
                               MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                    pUVar9 = (__this->fields)._part_head;
                    if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
                       (pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar9,(MethodInfo_353B730 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                       pUVar10 != (UnityEngine_Renderer_o *)0x0)) {
                      UnityEngine_Renderer__set_material(pUVar10,pUVar11,(MethodInfo *)0x0);
                      pUVar9 = (__this->fields)._part_chest;
                      if ((pUVar9 != (UnityEngine_GameObject_o *)0x0) &&
                         (pUVar10 = UnityEngine_GameObject__GetComponent_object_
                                              (pUVar9,(MethodInfo_353B730 *)
                                                      MethodInfo_UnityEngine_GameObject_GetComponent_Renderer)
                         , pUVar10 != (UnityEngine_Renderer_o *)0x0)) {
                        UnityEngine_Renderer__set_material(pUVar10,pUVar11,(MethodInfo *)0x0);
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
label_05c0081b:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$SetFacialTexture
// il2cpp: void Characters_HumanSetup__SetFacialTexture (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* go, System_String_o* type, int32_t id, bool unique, const MethodInfo* method);
// 0x5c04a60

void Characters_HumanSetup__SetFacialTexture
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *go,System_String_o *type,int32_t id,
               bool unique,MethodInfo *method)

{
  UnityEngine_Renderer_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_Material_o *value;
  int32_t iStack_24;
  
  if (Il2CppMethodInitialized_0754767c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_0754767c = '\x01';
  }
  if (id < 0) {
    if (go != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__GetComponentInChildren_object_
                         (go,(MethodInfo_353B8D0 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
      if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
      }
      if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_material
                  (pUVar1,TypeInfo_CustomSkins_MaterialCache->static_fields->TransparentMaterial,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  else if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponentInChildren_object_
                       (go,(MethodInfo_353B8D0 *)
                           MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    pSVar2 = System_Int32__ToString(&iStack_24,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_52f0320(type,pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    value = Characters_HumanSetupMaterials__GetFaceMaterial(pSVar2,unique,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
      UnityEngine_Renderer__set_material(pUVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateMount
// il2cpp: UnityEngine_GameObject_o* Characters_HumanSetup__CreateMount (Characters_HumanSetup_o* __this, System_String_o* transformPath, const MethodInfo* method);
// 0x5bfc650

UnityEngine_GameObject_o *
Characters_HumanSetup__CreateMount
          (Characters_HumanSetup_o *__this,System_String_o *transformPath,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  System_String_o *n;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  UnityEngine_Vector3_o local_48;
  UnityEngine_Quaternion_o local_38;
  
  if (Il2CppMethodInitialized_0754767d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Armature/Core/Controller_Body/hip/");
    Il2CppMethodInitialized_0754767d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa10(__this_00,(MethodInfo *)0x0);
  n = System_String__Concat_52f0320("Armature/Core/Controller_Body/hip/",transformPath,(MethodInfo *)0x0);
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      UVar3 = UnityEngine_Transform__get_position(pUVar1,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_position(pUVar2,UVar3,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        local_38 = UnityEngine_Transform__get_rotation(pUVar1,(MethodInfo *)0x0);
        UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_38,(MethodInfo *)0x0);
        euler.fields.x = UVar3.fields.x * 57.29578;
        euler.fields.y = UVar3.fields.y * 57.29578;
        euler.fields.z = UVar3.fields.z * 57.29578;
        UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
        local_48.fields.x = 4.712389;
        local_48.fields.y = UVar3.fields.y * 0.017453292;
        local_48.fields.z = 0.0;
        value = UnityEngine_Quaternion__Internal_FromEulerRad(&local_48,(MethodInfo *)0x0);
        if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_rotation(pUVar2,value,(MethodInfo *)0x0);
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
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$GenerateCloth
// il2cpp: UnityEngine_GameObject_o* Characters_HumanSetup__GenerateCloth (Characters_HumanSetup_o* __this, System_String_o* cloth, const MethodInfo* method);
// 0x5c04250

UnityEngine_GameObject_o *
Characters_HumanSetup__GenerateCloth
          (Characters_HumanSetup_o *__this,System_String_o *cloth,MethodInfo *method)

{
  System_String_o *path;
  bool bVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_array *value;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  
  if (Il2CppMethodInitialized_0754767e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    Il2CppMethodInitialized_0754767e = '\x01';
  }
  pUVar2 = (__this->fields)._mount_cloth;
  if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent_object_
                  (pUVar2,(MethodInfo_353B730 *)
                          MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      pUVar2 = (__this->fields)._mount_cloth;
      if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_05c04505;
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__AddComponent_object_
                    (pUVar2,(MethodInfo_353B6A0 *)
                            MethodInfo_UnityEngine_GameObject_AddComponent_SkinnedMeshRenderer);
    }
    if (x != (UnityEngine_Object_o *)0x0) {
      value = UnityEngine_SkinnedMeshRenderer__get_bones
                        ((UnityEngine_SkinnedMeshRenderer_o *)x,(MethodInfo *)0x0);
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar2 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (path,cloth,true,false,
                          (MethodInfo_3665790 *)
                          MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar2,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
        if (__this_00 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          pUVar2 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
            pUVar3 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
            pUVar2 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
              pUVar4 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
              if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                pUVar4 = UnityEngine_Transform__get_parent(pUVar4,(MethodInfo *)0x0);
                if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_parent(pUVar3,pUVar4,(MethodInfo *)0x0);
                  pUVar3 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_0753e4b6 == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_0753e4b6 = '\x01';
                  }
                  if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                    UnityEngine_Transform__set_localPosition
                              (pUVar3,(UnityEngine_Vector3_o)
                                      (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,
                               (MethodInfo *)0x0);
                    pUVar3 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_0753e4b7 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                      Il2CppMethodInitialized_0753e4b7 = '\x01';
                    }
                    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
                      UnityEngine_Transform__set_localScale
                                (pUVar3,(UnityEngine_Vector3_o)
                                        (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                                 (MethodInfo *)0x0);
                      UnityEngine_SkinnedMeshRenderer__set_bones(__this_00,value,(MethodInfo *)0x0);
                      UnityEngine_SkinnedMeshRenderer__set_quality(__this_00,4,(MethodInfo *)0x0);
                      pUVar3 = UnityEngine_SkinnedMeshRenderer__get_rootBone
                                         ((UnityEngine_SkinnedMeshRenderer_o *)x,(MethodInfo *)0x0);
                      UnityEngine_SkinnedMeshRenderer__set_rootBone(__this_00,pUVar3,(MethodInfo *)0x0);
                      pUVar2 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
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
label_05c04505:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$AttachToMount
// il2cpp: void Characters_HumanSetup__AttachToMount (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* obj, UnityEngine_GameObject_o* mount, bool setScale, const MethodInfo* method);
// 0x5c02a70

void Characters_HumanSetup__AttachToMount
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *obj,UnityEngine_GameObject_o *mount,
               bool setScale,MethodInfo *method)

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
        if (Il2CppMethodInitialized_0753e4b6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_0753e4b6 = '\x01';
        }
        if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__set_localPosition
                    (pUVar1,(UnityEngine_Vector3_o)
                            (TypeInfo_UnityEngine_Vector3->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          pUVar1 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753e72b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
            Il2CppMethodInitialized_0753e72b = '\x01';
          }
          if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_localRotation
                      (pUVar1,(UnityEngine_Quaternion_o)
                              *(UnityEngine_Quaternion_Fields *)TypeInfo_UnityEngine_Quaternion->static_fields
                       ,(MethodInfo *)0x0);
            if (!setScale) {
              return;
            }
            pUVar1 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753e4b7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
              Il2CppMethodInitialized_0753e4b7 = '\x01';
            }
            if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__set_localScale
                        (pUVar1,(UnityEngine_Vector3_o)
                                (TypeInfo_UnityEngine_Vector3->static_fields->oneVector).fields,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$DestroyIfExists
// il2cpp: void Characters_HumanSetup__DestroyIfExists (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x5c02970

void Characters_HumanSetup__DestroyIfExists
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754767f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754767f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.HumanSetup$$.ctor
// il2cpp: void Characters_HumanSetup___ctor (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x5c04bb0

void Characters_HumanSetup___ctor(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_Collections_Generic_Dictionary_Renderer__Material__o *__this_00;
  System_Collections_Generic_HashSet_Material__o *__this_01;
  System_Collections_Generic_List_Renderer__o *__this_02;
  
  if (Il2CppMethodInitialized_07547680 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_Renderer_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_Material);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Fire2");
    il2cpp_codegen_initialize_runtime_metadata(&"Lightning1");
    il2cpp_codegen_initialize_runtime_metadata(&"Fire1");
    Il2CppMethodInitialized_07547680 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if (pSVar1 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "Fire1";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "Fire2";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      if (2 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[2] = "Lightning1";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 2);
        (__this->fields).TierEffects = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields).TierEffects);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_Renderer_Material
                              );
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
                   (MethodInfo_4AAC8D0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_ctor);
        (__this->fields)._effectMaterialCache = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._effectMaterialCache);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Material);
        System_Collections_Generic_HashSet_object____ctor
                  ((System_Collections_Generic_HashSet_object__o *)__this_01,
                   (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_Material_ctor);
        (__this->fields)._ownedMaterials = __this_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._ownedMaterials);
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_object__o *)__this_02,
                   (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
        (__this->fields)._hairRenderers = __this_02;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._hairRenderers);
        (__this->fields)._hoodieHairClipOffset = 0.25;
        (__this->fields)._hoodieHairClipWidth = 0.75;
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Characters.HumanSetup$$.cctor
// il2cpp: void Characters_HumanSetup___cctor (const MethodInfo* method);
// 0x5c04dc0

void Characters_HumanSetup___cctor(MethodInfo *method)

{
  Characters_HumanSetup_StaticFields *pCVar1;
  int32_t iVar2;
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07547681 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&"_HairClipRightPlane");
    il2cpp_codegen_initialize_runtime_metadata(&"_HairClipTopPlane");
    il2cpp_codegen_initialize_runtime_metadata(&"_HairClipLeftPlane");
    il2cpp_codegen_initialize_runtime_metadata(&"_HairClipPlane");
    Il2CppMethodInitialized_07547681 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  pCVar1 = TypeInfo_Characters_HumanSetup->static_fields;
  pCVar1->UniqueItems = __this;
  Il2CppCodeGenWriteBarrier(&pCVar1->UniqueItems);
  iVar2 = UnityEngine_Shader__PropertyToID("_HairClipPlane",(MethodInfo *)0x0);
  TypeInfo_Characters_HumanSetup->static_fields->HairClipPlaneId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_HairClipLeftPlane",(MethodInfo *)0x0);
  TypeInfo_Characters_HumanSetup->static_fields->HairClipLeftPlaneId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_HairClipRightPlane",(MethodInfo *)0x0);
  TypeInfo_Characters_HumanSetup->static_fields->HairClipRightPlaneId = iVar2;
  iVar2 = UnityEngine_Shader__PropertyToID("_HairClipTopPlane",(MethodInfo *)0x0);
  TypeInfo_Characters_HumanSetup->static_fields->HairClipTopPlaneId = iVar2;
  return;
}


