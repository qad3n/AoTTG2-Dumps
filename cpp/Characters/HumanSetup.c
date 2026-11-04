// Type: Characters.HumanSetup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Characters/HumanSetup.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetup.cs
// --------------------------------

// Characters.HumanSetup$$get_HasWeapon
// il2cpp: bool Characters_HumanSetup__get_HasWeapon (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x18215bae0

bool Characters_HumanSetup__get_HasWeapon(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  if ((__this->fields).Weapon == 4) {
    return false;
  }
  return (__this->fields).Weapon != 5;
}


// Characters.HumanSetup$$get_HasODM
// il2cpp: bool Characters_HumanSetup__get_HasODM (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x18215bad0

bool Characters_HumanSetup__get_HasODM(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  return (__this->fields).Weapon != 5;
}


// Characters.HumanSetup$$get_HasCloak
// il2cpp: bool Characters_HumanSetup__get_HasCloak (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x18215ba70

bool Characters_HumanSetup__get_HasCloak(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_IntSetting_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346c87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346c87 = '\x01';
  }
  if ((__this->fields).CustomSet == (Settings_HumanCustomSet_o *)0x0) {
    return false;
  }
  pSVar1 = (((__this->fields).CustomSet)->fields).Cape;
  if (pSVar1 != (Settings_IntSetting_o *)0x0) {
    return (pSVar1->fields)._value == 2;
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$get_IsHooded
// il2cpp: bool Characters_HumanSetup__get_IsHooded (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x18215bb00

bool Characters_HumanSetup__get_IsHooded(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346c88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184346c88 = '\x01';
  }
  if (Il2CppMethodInitialized_184346c87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346c87 = '\x01';
  }
  if ((__this->fields).CustomSet == (Settings_HumanCustomSet_o *)0x0) {
    return false;
  }
  pSVar1 = (__this->fields).CustomSet;
  pSVar2 = (pSVar1->fields).Cape;
  if (pSVar2 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar2->fields)._value != 2) {
      return false;
    }
    pSVar3 = (pSVar1->fields).HoodUp;
    if (pSVar3 != (Settings_BoolSetting_o *)0x0) {
      return (pSVar3->fields)._value;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$Init
// il2cpp: void Characters_HumanSetup__Init (const MethodInfo* method);
// 0x1821596e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182159cda: nop word ptr [rax + rax]

void Characters_HumanSetup__Init(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar2;
  int32_t iVar3;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  undefined8 uVar7;
  longlong *plVar8;
  undefined8 *puVar9;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar10;
  MethodInfo *method_00;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_b8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_68;
  undefined1 local_58 [80];
  
  if (Il2CppMethodInitialized_184346c89 == '\0') {
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
    Il2CppMethodInitialized_184346c89 = '\x01';
  }
  local_b8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_b8.type = 0;
  local_b8._4_4_ = 0;
  local_b8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_b8.m_Object.fields._version = 0;
  local_b8.m_Object.fields._index = 0;
  local_b8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_b8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_b8.m_Object.fields._getEnumeratorRetType = 0;
  local_b8.m_Object.fields._36_4_ = 0;
  local_b8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_b8.m_Array.fields._index = 0;
  local_b8.m_Array.fields._version = 0;
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
    pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"Costume");
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo = (SimpleJSONFixed_JSONNode_o *)pSVar6;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo,pSVar6);
    pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"Hair");
    TypeInfo_Characters_HumanSetup->static_fields->HairInfo = (SimpleJSONFixed_JSONNode_o *)pSVar6;
    Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSetup->static_fields->HairInfo,pSVar6);
    pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"EyeCount");
    if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      iVar3 = (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[35].methodPtr)
                        (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[35].method);
      TypeInfo_Characters_HumanSetup->static_fields->EyeCount = iVar3;
      pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"FaceCount");
      if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        iVar3 = (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[35].methodPtr)
                          (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[35].method);
        TypeInfo_Characters_HumanSetup->static_fields->FaceCount = iVar3;
        pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"GlassCount");
        if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
          iVar3 = (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[35].methodPtr)
                            (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[35].method);
          TypeInfo_Characters_HumanSetup->static_fields->GlassCount = iVar3;
          pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar5,(MethodInfo *)"BackCount");
          if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
            iVar3 = (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[35].methodPtr)
                              (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[35].method);
            TypeInfo_Characters_HumanSetup->static_fields->BackCount = iVar3;
            pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,(MethodInfo *)"HatCount");
            if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
              iVar3 = (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[35].methodPtr)
                                (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[35].method);
              TypeInfo_Characters_HumanSetup->static_fields->HatCount = iVar3;
              pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar5,(MethodInfo *)"HeadCount");
              if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                iVar3 = (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[35].methodPtr)
                                  (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[35].method);
                TypeInfo_Characters_HumanSetup->static_fields->HeadCount = iVar3;
                pSVar1 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
                if ((pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                   (pSVar6 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                                       (pSVar1,(MethodInfo *)"Male"),
                   pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
                  uVar7 = (*(pSVar6->klass->vtable)._11_get_NameAttribute.methodPtr)
                                    (pSVar6,*(MethodInfo **)
                                             ((longlong)&(pSVar6->klass->vtable)._11_get_NameAttribute + 8));
                  TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount = (int32_t)uVar7;
                  pSVar1 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
                  if ((pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                     (pSVar6 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                                         (pSVar1,(MethodInfo *)"Female"),
                     pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
                    uVar7 = (*(pSVar6->klass->vtable)._11_get_NameAttribute.methodPtr)
                                      (pSVar6,*(MethodInfo **)
                                               ((longlong)&(pSVar6->klass->vtable)._11_get_NameAttribute + 8))
                    ;
                    TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount = (int32_t)uVar7;
                    pSVar1 = TypeInfo_Characters_HumanSetup->static_fields->HairInfo;
                    if ((pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                       (pSVar6 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar1,(MethodInfo *)"Male"),
                       pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
                      pSVar6 = (*(pSVar6->klass->vtable)._11_get_NameAttribute.methodPtr)
                                         (pSVar6,(pSVar6->klass->vtable)._11_get_NameAttribute.method);
                      TypeInfo_Characters_HumanSetup->static_fields->HairMCount = (int32_t)pSVar6;
                      pSVar1 = TypeInfo_Characters_HumanSetup->static_fields->HairInfo;
                      if ((pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
                         (pSVar6 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)
                                             (pSVar1,(MethodInfo *)"Female"),
                         pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
                        pSVar6 = (*(pSVar6->klass->vtable)._11_get_NameAttribute.methodPtr)
                                           (pSVar6,(pSVar6->klass->vtable)._11_get_NameAttribute.method);
                        TypeInfo_Characters_HumanSetup->static_fields->HairFCount = (int32_t)pSVar6;
                        pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                           (pSVar5,(MethodInfo *)"UniqueItem");
                        if ((pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
                           (plVar8 = (longlong *)
                                     (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[45].methodPtr)
                                               (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[45].method
                                               ), plVar8 != (longlong *)0x0)) {
                          puVar9 = (undefined8 *)(**(code **)(*plVar8 + 0x338))(local_58);
                          method_00 = (MethodInfo *)0x0;
                          local_b8._0_8_ = *puVar9;
                          local_b8.m_Object.fields._dictionary =
                               (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar9[1];
                          local_b8.m_Object.fields._8_8_ = puVar9[2];
                          local_b8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar9[3];
                          local_b8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar9[4];
                          local_b8.m_Object.fields._32_8_ = puVar9[5];
                          local_b8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar9[6];
                          local_b8.m_Array.fields._8_8_ = puVar9[7];
                          local_b8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar9[8];
                          bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_b8,
                                             (MethodInfo *)0x0);
                          if (bVar2) {
                            do {
                              pSVar10 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                                  (&local_68,
                                                   (SimpleJSONFixed_JSONNode_Enumerator_o *)&local_b8,
                                                   (MethodInfo *)0x0);
                              pSVar5 = (pSVar10->fields).value;
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
                              pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4450(pSVar5,(MethodInfo *)0x0)
                              ;
                              if (__this == (System_Collections_Generic_HashSet_object__o *)0x0)
                              goto label_182159d97;
                              System_Collections_Generic_HashSet_object___Add
                                        (__this,(Il2CppObject *)pSVar4,
                                         (MethodInfo_1757CE0 *)
                                         MethodInfo_System_Collections_Generic_HashSet_string_Add);
                              method_00 = (MethodInfo *)0x0;
                              bVar2 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                                                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_b8,
                                                 (MethodInfo *)0x0);
                            } while (bVar2);
                          }
                          if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
                          }
                          System_Configuration_ConfigurationCollectionAttribute___ctor
                                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0,
                                     method_00);
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
label_182159d97:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$Awake
// il2cpp: void Characters_HumanSetup__Awake (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182154330

void Characters_HumanSetup__Awake(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_Bounds_o *pUVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  undefined8 uVar5;
  Characters_HumanSetupMeshes_o *__this_00;
  Unity_Burst_BurstCompiler_FakeDelegate_o *__this_01;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_GameObject_o *pUVar9;
  UnityEngine_MeshFilter_o *__this_02;
  UnityEngine_Mesh_o *__this_03;
  UnityEngine_Bounds_o *pUVar10;
  UnityEngine_Vector3_o *pUVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Bounds_o local_38 [2];
  
  if (Il2CppMethodInitialized_184346c8a == '\0') {
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
    Il2CppMethodInitialized_184346c8a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanSetupMeshes);
  Characters_HumanSetupMeshes___ctor(__this_00,__this,(MethodInfo *)0x0);
  (__this->fields)._meshes = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._meshes,__this_00);
  __this_01 = (Unity_Burst_BurstCompiler_FakeDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Characters_HumanSetupTextures);
  Characters_HumanSetupTextures___ctor
            (__this_01,(System_Reflection_MethodInfo_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._textures = (Characters_HumanSetupTextures_o *)__this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._textures,__this_01);
  pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
    pUVar6 = UnityEngine_Transform__Find(pUVar6,"Armature/Core/Controller_Body/hip",(MethodInfo *)0x0);
    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
      pUVar7 = UnityEngine_Transform__Find(pUVar6,"spine/chest/neck/head",(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        pUVar8 = UnityEngine_Transform__Find(pUVar7,"char_head",(MethodInfo *)0x0);
        if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
          pUVar9 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
          (__this->fields)._part_head = pUVar9;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._part_head,pUVar9);
          pUVar8 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
            pUVar8 = UnityEngine_Transform__Find(pUVar8,"character_leg",(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
              pUVar9 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
              (__this->fields)._part_leg = pUVar9;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._part_leg,pUVar9);
              pUVar8 = UnityEngine_Component__get_transform
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                pUVar8 = UnityEngine_Transform__Find(pUVar8,"character_chest",(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_Transform_o *)0x0) {
                  pUVar9 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)pUVar8,(MethodInfo *)0x0);
                  (__this->fields)._part_chest = pUVar9;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._part_chest,pUVar9);
                  pUVar6 = UnityEngine_Transform__Find(pUVar6,"spine/chest",(MethodInfo *)0x0);
                  if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                    pUVar9 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
                    (__this->fields)._mount_back = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_back,pUVar9);
                    pUVar9 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                    (__this->fields)._mount_hat = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_hat,pUVar9);
                    pUVar9 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar7,(MethodInfo *)0x0);
                    (__this->fields)._mount_head_decor = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_head_decor,pUVar9);
                    pUVar9 = Characters_HumanSetup__CreateMount
                                       (__this,"spine/chest",(MethodInfo *)0x0);
                    (__this->fields)._mount_chest = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_chest,pUVar9);
                    pUVar9 = Characters_HumanSetup__CreateMount
                                       (__this,"spine/chest",(MethodInfo *)0x0);
                    (__this->fields)._mount_3dmg = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_3dmg,pUVar9);
                    pUVar9 = Characters_HumanSetup__CreateMount
                                       (__this,"spine",(MethodInfo *)0x0);
                    (__this->fields)._mount_gas_l = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_gas_l,pUVar9);
                    pUVar9 = Characters_HumanSetup__CreateMount
                                       (__this,"spine",(MethodInfo *)0x0);
                    (__this->fields)._mount_gas_r = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_gas_r,pUVar9);
                    pUVar9 = Characters_HumanSetup__CreateMount
                                       (__this,"thigh_L",(MethodInfo *)0x0);
                    (__this->fields)._mount_gun_mag_l = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_gun_mag_l,pUVar9);
                    pUVar9 = Characters_HumanSetup__CreateMount
                                       (__this,"thigh_R",(MethodInfo *)0x0);
                    (__this->fields)._mount_gun_mag_r = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_gun_mag_r,pUVar9);
                    pUVar9 = Characters_HumanSetup__CreateMount
                                       (__this,"spine/chest/shoulder_L/upper_arm_L/forearm_L/hand_L",(MethodInfo *)0x0);
                    (__this->fields)._mount_weapon_l = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_weapon_l,pUVar9);
                    pUVar9 = Characters_HumanSetup__CreateMount
                                       (__this,"spine/chest/shoulder_R/upper_arm_R/forearm_R/hand_R",(MethodInfo *)0x0);
                    (__this->fields)._mount_weapon_r = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_weapon_r,pUVar9);
                    pUVar9 = Characters_HumanSetup__CreateMount
                                       (__this,"spine/chest/shoulder_L/upper_arm_L/forearm_L",(MethodInfo *)0x0);
                    (__this->fields)._mount_ts_l = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_ts_l,pUVar9);
                    pUVar9 = Characters_HumanSetup__CreateMount
                                       (__this,"spine/chest/shoulder_R/upper_arm_R/forearm_R",(MethodInfo *)0x0);
                    (__this->fields)._mount_ts_r = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_ts_r,pUVar9);
                    pUVar9 = (__this->fields)._part_leg;
                    (__this->fields)._mount_cloth = pUVar9;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._mount_cloth,pUVar9);
                    pUVar9 = (__this->fields)._part_head;
                    if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                      __this_02 = UnityEngine_GameObject__GetComponent_object_
                                            (pUVar9,(MethodInfo_6F5650 *)
                                                    MethodInfo_UnityEngine_GameObject_GetComponent_MeshFilter)
                      ;
                      if (__this_02 != (UnityEngine_MeshFilter_o *)0x0) {
                        __this_03 = UnityEngine_MeshFilter__get_sharedMesh(__this_02,(MethodInfo *)0x0);
                        if (__this_03 != (UnityEngine_Mesh_o *)0x0) {
                          pUVar10 = UnityEngine_Mesh__get_bounds(local_38,__this_03,(MethodInfo *)0x0);
                          pUVar9 = (__this->fields)._part_head;
                          fVar12 = (pUVar10->fields).m_Extents.fields.y;
                          fVar13 = (pUVar10->fields).m_Extents.fields.z;
                          fVar14 = (pUVar10->fields).m_Center.fields.y;
                          uVar5 = *(undefined8 *)&(pUVar10->fields).m_Center.fields.z;
                          pUVar1 = &(__this->fields)._headBounds;
                          (pUVar1->fields).m_Center.fields.x = (pUVar10->fields).m_Center.fields.x;
                          (pUVar1->fields).m_Center.fields.y = fVar14;
                          *(undefined8 *)&(__this->fields)._headBounds.fields.m_Center.fields.z = uVar5;
                          pUVar1 = &(__this->fields)._headBounds;
                          (pUVar1->fields).m_Extents.fields.y = fVar12;
                          (pUVar1->fields).m_Extents.fields.z = fVar13;
                          if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                            pUVar6 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                            pUVar7 = UnityEngine_Component__get_transform
                                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                            if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                              pUVar11 = UnityEngine_Transform__get_forward
                                                  ((UnityEngine_Vector3_o *)&local_48,pUVar7,(MethodInfo *)0x0
                                                  );
                              if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                local_58.x = (pUVar11->fields).x;
                                local_58.y = (pUVar11->fields).y;
                                local_58.z = (pUVar11->fields).z;
                                pUVar11 = UnityEngine_Transform__InverseTransformDirection
                                                    ((UnityEngine_Vector3_o *)&local_48,pUVar6,
                                                     (UnityEngine_Vector3_o *)&local_58,(MethodInfo *)0x0);
                                uVar5._0_4_ = (pUVar11->fields).x;
                                uVar5._4_4_ = (pUVar11->fields).y;
                                fVar14 = (pUVar11->fields).z;
                                local_58._0_8_ = uVar5;
                                local_58.z = fVar14;
                                if (Il2CppMethodInitialized_18433de5f == '\0') {
                                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                                  Il2CppMethodInitialized_18433de5f = '\x01';
                                }
                                fVar12 = (float)il2cpp_runtime_helper_180546a40(&local_58);
                                if (fVar12 <= 1e-05) {
                                  pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
                                  fVar12 = (pUVar4->zeroVector).fields.x;
                                  fVar13 = (pUVar4->zeroVector).fields.y;
                                  fVar14 = (pUVar4->zeroVector).fields.z;
                                }
                                else {
                                  fVar13 = local_58.y / fVar12;
                                  fVar14 = fVar14 / fVar12;
                                  fVar12 = (float)uVar5 / fVar12;
                                }
                                pUVar9 = (__this->fields)._part_head;
                                (__this->fields)._hairClipForward.fields.x = fVar12;
                                (__this->fields)._hairClipForward.fields.y = fVar13;
                                (__this->fields)._hairClipForward.fields.z = fVar14;
                                if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                  pUVar6 = UnityEngine_GameObject__get_transform(pUVar9,(MethodInfo *)0x0);
                                  pUVar7 = UnityEngine_Component__get_transform
                                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                                  if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                    pUVar11 = UnityEngine_Transform__get_right
                                                        ((UnityEngine_Vector3_o *)local_38,pUVar7,
                                                         (MethodInfo *)0x0);
                                    if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                      local_48.x = (pUVar11->fields).x;
                                      local_48.y = (pUVar11->fields).y;
                                      local_48.z = (pUVar11->fields).z;
                                      pUVar11 = UnityEngine_Transform__InverseTransformDirection
                                                          ((UnityEngine_Vector3_o *)local_38,pUVar6,
                                                           (UnityEngine_Vector3_o *)&local_48,
                                                           (MethodInfo *)0x0);
                                      uVar2._0_4_ = (pUVar11->fields).x;
                                      uVar2._4_4_ = (pUVar11->fields).y;
                                      fVar14 = (pUVar11->fields).z;
                                      local_58._0_8_ = uVar2;
                                      local_58.z = fVar14;
                                      if (Il2CppMethodInitialized_18433de5f == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&TypeInfo_UnityEngine_Vector3);
                                        Il2CppMethodInitialized_18433de5f = '\x01';
                                      }
                                      fVar12 = (float)il2cpp_runtime_helper_180546a40(&local_58);
                                      if (fVar12 <= 1e-05) {
                                        pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
                                        fVar12 = (pUVar4->zeroVector).fields.x;
                                        fVar13 = (pUVar4->zeroVector).fields.y;
                                        fVar14 = (pUVar4->zeroVector).fields.z;
                                      }
                                      else {
                                        fVar13 = local_58.y / fVar12;
                                        fVar14 = fVar14 / fVar12;
                                        fVar12 = (float)uVar2 / fVar12;
                                      }
                                      pUVar9 = (__this->fields)._part_head;
                                      (__this->fields)._hairClipRight.fields.x = fVar12;
                                      (__this->fields)._hairClipRight.fields.y = fVar13;
                                      (__this->fields)._hairClipRight.fields.z = fVar14;
                                      if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
                                        pUVar6 = UnityEngine_GameObject__get_transform
                                                           (pUVar9,(MethodInfo *)0x0);
                                        pUVar7 = UnityEngine_Component__get_transform
                                                           ((UnityEngine_Component_o *)__this,
                                                            (MethodInfo *)0x0);
                                        if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                                          pUVar11 = UnityEngine_Transform__get_up
                                                              ((UnityEngine_Vector3_o *)local_38,pUVar7,
                                                               (MethodInfo *)0x0);
                                          if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
                                            local_48.x = (pUVar11->fields).x;
                                            local_48.y = (pUVar11->fields).y;
                                            local_48.z = (pUVar11->fields).z;
                                            pUVar11 = UnityEngine_Transform__InverseTransformDirection
                                                                ((UnityEngine_Vector3_o *)local_38,pUVar6,
                                                                 (UnityEngine_Vector3_o *)&local_48,
                                                                 (MethodInfo *)0x0);
                                            uVar3._0_4_ = (pUVar11->fields).x;
                                            uVar3._4_4_ = (pUVar11->fields).y;
                                            fVar14 = (pUVar11->fields).z;
                                            local_58._0_8_ = uVar3;
                                            local_58.z = fVar14;
                                            if (Il2CppMethodInitialized_18433de5f == '\0') {
                                              il2cpp_codegen_initialize_runtime_metadata
                                                        (&TypeInfo_UnityEngine_Vector3);
                                              Il2CppMethodInitialized_18433de5f = '\x01';
                                            }
                                            fVar12 = (float)il2cpp_runtime_helper_180546a40(&local_58,0);
                                            if (fVar12 <= 1e-05) {
                                              pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
                                              fVar12 = (pUVar4->zeroVector).fields.x;
                                              local_58.y = (pUVar4->zeroVector).fields.y;
                                              fVar14 = (pUVar4->zeroVector).fields.z;
                                            }
                                            else {
                                              local_58.y = local_58.y / fVar12;
                                              fVar14 = fVar14 / fVar12;
                                              fVar12 = (float)uVar3 / fVar12;
                                            }
                                            (__this->fields)._hairClipUp.fields.x = fVar12;
                                            (__this->fields)._hairClipUp.fields.y = local_58.y;
                                            (__this->fields)._hairClipUp.fields.z = fVar14;
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
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$LateUpdate
// il2cpp: void Characters_HumanSetup__LateUpdate (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182159da0

void Characters_HumanSetup__LateUpdate(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Characters_HumanSetup__get_IsHooded(__this,(MethodInfo *)0x0);
  if (((bVar1) && ((__this->fields).IsDeadBody == false)) && ((__this->fields).Deleted == false)) {
    Characters_HumanSetup__UpdateHairClipPlane(__this,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.HumanSetup$$RefreshHairMaterials
// il2cpp: void Characters_HumanSetup__RefreshHairMaterials (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x18215a580
// eh: try 0x18215a6b0..0x18215a8ea -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18215a6ac: nop dword ptr [rax]
// asm:   0x18215a88e: mov rdx, qword ptr [rip + 0x1f391ab]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x18215a895: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18215a89a: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18215a89f: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18215a8a4: test rcx, rcx
// asm:   0x18215a8a7: jne 0x18215a8ea
// asm:   0x18215a8a9: mov r15, qword ptr [rsp + 0xa0]
// asm:   0x18215a8ea: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Characters_HumanSetup__RefreshHairMaterials(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *__this_00;
  UnityEngine_Object_o *x;
  bool bVar1;
  int32_t value;
  UnityEngine_Object_o *x_00;
  UnityEngine_Material_o *pUVar2;
  UnityEngine_Object_o *pUVar3;
  System_String_o *pSVar4;
  System_String_array *value_00;
  undefined1 local_70 [16];
  UnityEngine_Object_o *local_60;
  undefined1 local_58 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_50;
  UnityEngine_Object_o *local_48;
  
  if (Il2CppMethodInitialized_184346c8b == '\0') {
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
    Il2CppMethodInitialized_184346c8b = '\x01';
  }
  local_58 = (undefined1  [8])0x0;
  pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_48 = (UnityEngine_Object_o *)0x0;
  bVar1 = Characters_HumanSetup__get_IsHooded(__this,(MethodInfo *)0x0);
  if ((!bVar1) || (pSVar4 = "AoTTG/Hair", (__this->fields).IsDeadBody != false)) {
    pSVar4 = "Universal Render Pipeline/Lit";
  }
  x_00 = (UnityEngine_Object_o *)UnityEngine_Shader__Find(pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this_00 = (__this->fields)._hairRenderers;
    if (__this_00 == (System_Collections_Generic_List_Renderer__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_70,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_58 = (undefined1  [8])local_70._0_8_;
    pUStack_50 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_70._8_8_;
    local_48 = local_60;
    local_70._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_70._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58;
label_18215a6b0:
    bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      ((System_Collections_Generic_List_Enumerator_object__o *)local_58,
                       (MethodInfo_153A2A0 *)
                       MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
    x = local_48;
    if (bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar2 = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
      }
      else {
        pUVar2 = (UnityEngine_Material_o *)0x0;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        if (pUVar2 == (UnityEngine_Material_o *)0x0) {
          ThrowNullReferenceException();
        }
        pUVar3 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          pUVar3 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(pUVar2,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar1 = UnityEngine_Object__op_Equality(pUVar3,x_00,(MethodInfo *)0x0);
          if (!bVar1) {
            pUVar3 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(pUVar2,(MethodInfo *)0x0);
            if (pUVar3 == (UnityEngine_Object_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
            bVar1 = System_String__op_Inequality(pSVar4,"Universal Render Pipeline/Lit",(MethodInfo *)0x0);
            if (bVar1) {
              pUVar3 = (UnityEngine_Object_o *)UnityEngine_Material__get_shader(pUVar2,(MethodInfo *)0x0);
              if (pUVar3 == (UnityEngine_Object_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar4 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
              bVar1 = System_String__op_Inequality(pSVar4,"AoTTG/Hair",(MethodInfo *)0x0);
              if (bVar1) goto label_18215a6b0;
            }
            pUVar2 = Characters_HumanSetup__OwnInstance(__this,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
            if (pUVar2 == (UnityEngine_Material_o *)0x0) {
              ThrowNullReferenceException();
            }
            value = UnityEngine_Material__get_renderQueue(pUVar2,(MethodInfo *)0x0);
            value_00 = UnityEngine_Material__get_shaderKeywords(pUVar2,(MethodInfo *)0x0);
            UnityEngine_Material__set_shader(pUVar2,(UnityEngine_Shader_o *)x_00,(MethodInfo *)0x0);
            UnityEngine_Material__set_shaderKeywords(pUVar2,value_00,(MethodInfo *)0x0);
            UnityEngine_Material__set_renderQueue(pUVar2,value,(MethodInfo *)0x0);
          }
        }
      }
      goto label_18215a6b0;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_58,
               MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
  }
  Characters_HumanSetup__UpdateHairClipPlane(__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSetup$$UpdateHairClipPlane
// il2cpp: void Characters_HumanSetup__UpdateHairClipPlane (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x18215b130
// eh: try 0x18215b256..0x18215b59e -> pad 0x1833193c0 catch Il2CppExceptionWrapper
// eh: try 0x18215b5d1..0x18215b5f5 -> pad 0x180356390 cleanup
// eh: try 0x18215b63c..0x18215b71c -> pad 0x1833193f0 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18215b25e: nop 
// asm:   0x18215b5b2: mov rdx, qword ptr [rip + 0x1f38487]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x18215b5b9: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18215b5be: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18215b5c3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18215b5c8: test rcx, rcx
// asm:   0x18215b5cb: jne 0x18215b710
// asm:   0x18215b5d1: jmp 0x18215b6c2
// asm:   0x18215b6a7: mov rdx, qword ptr [rip + 0x1f38392]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose
// asm:   0x18215b6ae: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18215b6b3: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18215b6b8: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18215b6bd: test rcx, rcx
// asm:   0x18215b6c0: jne 0x18215b71c
// asm:   0x18215b710: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18215b71c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1833193c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833193c5: push rbp
// asm:   0x1833193c6: sub rsp, 0x30
// asm:   0x1833193ca: mov rbp, rdx
// asm:   0x1833193cd: mov rax, qword ptr [rbp + 0xd0]
// asm:   0x1833193d4: mov rcx, qword ptr [rax]
// asm:   0x1833193d7: mov qword ptr [rbp + 0x30], rcx
// asm:   0x1833193db: movabs rax, 0
// asm:   0x1833193e5: add rsp, 0x30
// asm:   0x1833193e9: pop rbp
// asm:   0x1833193ea: ret 
// asm:   0x1833193f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833193f5: push rbp
// asm:   0x1833193f6: sub rsp, 0x30
// asm:   0x1833193fa: mov rbp, rdx
// asm:   0x1833193fd: mov rax, qword ptr [rbp + 0xd8]
// asm:   0x183319404: mov rcx, qword ptr [rax]
// asm:   0x183319407: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18331940b: movabs rax, 0
// asm:   0x183319415: add rsp, 0x30
// asm:   0x183319419: pop rbp
// asm:   0x18331941a: ret 

void Characters_HumanSetup__UpdateHairClipPlane(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_Renderer__o *pSVar1;
  Il2CppObject *pIVar2;
  bool bVar3;
  bool bVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Vector4_o *pUVar5;
  UnityEngine_MaterialPropertyBlock_o *pUVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  UnityEngine_Vector4_o local_158;
  System_Collections_Generic_List_Enumerator_object__o local_148;
  UnityEngine_Vector3_o local_128;
  UnityEngine_Vector3_o local_118;
  System_Collections_Generic_List_Enumerator_T__o local_108;
  UnityEngine_Vector3_Fields local_e8;
  UnityEngine_Vector3_Fields local_d8 [2];
  UnityEngine_Vector4_o local_b8;
  UnityEngine_Vector4_o local_a8;
  UnityEngine_Vector4_o local_98 [6];
  
  if (Il2CppMethodInitialized_184346c8c == '\0') {
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
    Il2CppMethodInitialized_184346c8c = '\x01';
  }
  local_148.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_148.fields._index = 0;
  local_148.fields._version = 0;
  local_148.fields._current = (Il2CppObject *)0x0;
  bVar3 = Characters_HumanSetup__get_IsHooded(__this,(MethodInfo *)0x0);
  if ((bVar3) && ((__this->fields).IsDeadBody == false)) {
    fVar19 = 0.0;
    fVar20 = 0.0;
    fVar21 = 0.0;
    fVar22 = 0.0;
    fVar15 = 0.0;
    fVar16 = 0.0;
    fVar17 = 0.0;
    fVar18 = 0.0;
    fVar11 = 0.0;
    fVar12 = 0.0;
    fVar13 = 0.0;
    fVar14 = 0.0;
    fVar7 = 0.0;
    fVar8 = 0.0;
    fVar9 = 0.0;
    fVar10 = 0.0;
    pSVar1 = (__this->fields)._hairRenderers;
    if (pSVar1 == (System_Collections_Generic_List_Renderer__o *)0x0) {
label_18215b722:
      ThrowNullReferenceException();
    }
    bVar3 = false;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_108,(System_Collections_Generic_List_T__o *)pSVar1,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_148.fields._list = local_108.fields._list;
    local_148.fields._index = local_108.fields._index;
    local_148.fields._version = local_108.fields._version;
    local_148.fields._current = local_108.fields._current;
    while( true ) {
      bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_148,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      pIVar2 = local_148.fields._current;
      if (!bVar4) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pIVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        if ((UnityEngine_Object_o *)pIVar2 == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = UnityEngine_Renderer__get_enabled((UnityEngine_Renderer_o *)pIVar2,(MethodInfo *)0x0);
        if (bVar4) {
          bVar4 = UnityEngine_Renderer__get_forceRenderingOff
                            ((UnityEngine_Renderer_o *)pIVar2,(MethodInfo *)0x0);
          if (!bVar4) {
            __this_00 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pIVar2,(MethodInfo *)0x0);
            if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar4 = UnityEngine_GameObject__get_activeInHierarchy(__this_00,(MethodInfo *)0x0);
            if (bVar4) {
              if (!bVar3) {
                local_e8.x = (__this->fields)._hairClipForward.fields.x;
                local_e8.y = (__this->fields)._hairClipForward.fields.y;
                local_e8.z = (__this->fields)._hairClipForward.fields.z;
                pUVar5 = Characters_HumanSetup__GetHairClipPlane
                                   (&local_b8,__this,(UnityEngine_Vector3_o *)&local_e8,
                                    (__this->fields)._hoodieHairClipOffset,(MethodInfo *)0x0);
                fVar19 = (pUVar5->fields).x;
                fVar20 = (pUVar5->fields).y;
                fVar21 = (pUVar5->fields).z;
                fVar22 = (pUVar5->fields).w;
                local_d8[0].x = (__this->fields)._hairClipRight.fields.x;
                local_d8[0].y = (__this->fields)._hairClipRight.fields.y;
                local_d8[0].z = (__this->fields)._hairClipRight.fields.z;
                pUVar5 = Characters_HumanSetup__GetHairClipPlane
                                   (&local_a8,__this,(UnityEngine_Vector3_o *)local_d8,
                                    -(__this->fields)._hoodieHairClipWidth,(MethodInfo *)0x0);
                fVar15 = (pUVar5->fields).x;
                fVar16 = (pUVar5->fields).y;
                fVar17 = (pUVar5->fields).z;
                fVar18 = (pUVar5->fields).w;
                local_128.fields.x = -(__this->fields)._hairClipRight.fields.x;
                local_128.fields.y = -(__this->fields)._hairClipRight.fields.y;
                local_128.fields.z = -(__this->fields)._hairClipRight.fields.z;
                pUVar5 = Characters_HumanSetup__GetHairClipPlane
                                   (local_98,__this,&local_128,-(__this->fields)._hoodieHairClipWidth,
                                    (MethodInfo *)0x0);
                fVar11 = (pUVar5->fields).x;
                fVar12 = (pUVar5->fields).y;
                fVar13 = (pUVar5->fields).z;
                fVar14 = (pUVar5->fields).w;
                local_118.fields.x = -(__this->fields)._hairClipUp.fields.x;
                local_118.fields.y = -(__this->fields)._hairClipUp.fields.y;
                local_118.fields.z = -(__this->fields)._hairClipUp.fields.z;
                pUVar5 = Characters_HumanSetup__GetHairClipPlane
                                   ((UnityEngine_Vector4_o *)&local_108,__this,&local_118,
                                    -(__this->fields)._hoodieHairClipTop,(MethodInfo *)0x0);
                fVar7 = (pUVar5->fields).x;
                fVar8 = (pUVar5->fields).y;
                fVar9 = (pUVar5->fields).z;
                fVar10 = (pUVar5->fields).w;
                if ((__this->fields)._hairClipProperties == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                  pUVar6 = il2cpp_codegen_object_new
                                     ((Il2CppClass *)TypeInfo_UnityEngine_MaterialPropertyBlock);
                  UnityEngine_MaterialPropertyBlock___ctor(pUVar6,(MethodInfo *)0x0);
                  (__this->fields)._hairClipProperties = pUVar6;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._hairClipProperties,pUVar6);
                }
                bVar3 = true;
              }
              UnityEngine_Renderer__GetPropertyBlock
                        ((UnityEngine_Renderer_o *)pIVar2,(__this->fields)._hairClipProperties,
                         (MethodInfo *)0x0);
              pUVar6 = (__this->fields)._hairClipProperties;
              if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
              }
              if (pUVar6 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                ThrowNullReferenceException();
              }
              local_158.fields.x = fVar19;
              local_158.fields.y = fVar20;
              local_158.fields.z = fVar21;
              local_158.fields.w = fVar22;
              UnityEngine_MaterialPropertyBlock__SetVector_2ee0d90
                        (pUVar6,TypeInfo_Characters_HumanSetup->static_fields->HairClipPlaneId,&local_158,
                         (MethodInfo *)0x0);
              pUVar6 = (__this->fields)._hairClipProperties;
              if (pUVar6 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                ThrowNullReferenceException();
              }
              local_158.fields.x = fVar15;
              local_158.fields.y = fVar16;
              local_158.fields.z = fVar17;
              local_158.fields.w = fVar18;
              UnityEngine_MaterialPropertyBlock__SetVector_2ee0d90
                        (pUVar6,TypeInfo_Characters_HumanSetup->static_fields->HairClipLeftPlaneId,&local_158,
                         (MethodInfo *)0x0);
              pUVar6 = (__this->fields)._hairClipProperties;
              if (pUVar6 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                ThrowNullReferenceException();
              }
              local_158.fields.x = fVar11;
              local_158.fields.y = fVar12;
              local_158.fields.z = fVar13;
              local_158.fields.w = fVar14;
              UnityEngine_MaterialPropertyBlock__SetVector_2ee0d90
                        (pUVar6,TypeInfo_Characters_HumanSetup->static_fields->HairClipRightPlaneId,&local_158
                         ,(MethodInfo *)0x0);
              pUVar6 = (__this->fields)._hairClipProperties;
              if (pUVar6 == (UnityEngine_MaterialPropertyBlock_o *)0x0) {
                ThrowNullReferenceException();
              }
              local_158.fields.x = fVar7;
              local_158.fields.y = fVar8;
              local_158.fields.z = fVar9;
              local_158.fields.w = fVar10;
              UnityEngine_MaterialPropertyBlock__SetVector_2ee0d90
                        (pUVar6,TypeInfo_Characters_HumanSetup->static_fields->HairClipTopPlaneId,&local_158,
                         (MethodInfo *)0x0);
              UnityEngine_Renderer__SetPropertyBlock
                        ((UnityEngine_Renderer_o *)pIVar2,(__this->fields)._hairClipProperties,
                         (MethodInfo *)0x0);
            }
          }
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_148,
               MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
  }
  else {
    pSVar1 = (__this->fields)._hairRenderers;
    if (pSVar1 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_18215b722;
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              (&local_108,(System_Collections_Generic_List_T__o *)pSVar1,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Renderer_GetEnumerator);
    local_148.fields._list = local_108.fields._list;
    local_148.fields._index = local_108.fields._index;
    local_148.fields._version = local_108.fields._version;
    local_148.fields._current = local_108.fields._current;
    while( true ) {
      bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_148,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_MoveNext);
      pIVar2 = local_148.fields._current;
      if (!bVar3) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if ((UnityEngine_Object_o *)pIVar2 == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar3 = UnityEngine_Renderer__HasPropertyBlock((UnityEngine_Renderer_o *)pIVar2,(MethodInfo *)0x0);
        if (bVar3) {
          UnityEngine_Renderer__SetPropertyBlock
                    ((UnityEngine_Renderer_o *)pIVar2,(UnityEngine_MaterialPropertyBlock_o *)0x0,
                     (MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_148,
               MethodInfo_System_Collections_Generic_List_Enumerator_Renderer_Dispose);
  }
  return;
}


// Characters.HumanSetup$$GetHairClipPlane
// il2cpp: UnityEngine_Vector4_o Characters_HumanSetup__GetHairClipPlane (Characters_HumanSetup_o* __this, UnityEngine_Vector3_o normal, float offset, const MethodInfo* method);
// 0x182159330

UnityEngine_Vector4_o *
Characters_HumanSetup__GetHairClipPlane
          (UnityEngine_Vector4_o *__return_storage_ptr__,Characters_HumanSetup_o *__this,
          UnityEngine_Vector3_o *normal,float offset,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  UnityEngine_GameObject_o *__this_00;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Matrix4x4_o *pUVar16;
  float fVar17;
  UnityEngine_Matrix4x4_Fields local_128;
  UnityEngine_Matrix4x4_o local_e8 [3];
  
  __this_00 = (__this->fields)._part_head;
  local_128.m00 = 0.0;
  local_128.m10 = 0.0;
  local_128.m20 = 0.0;
  local_128.m30 = 0.0;
  local_128.m01 = 0.0;
  local_128.m11 = 0.0;
  local_128.m21 = 0.0;
  local_128.m31 = 0.0;
  local_128.m02 = 0.0;
  local_128.m12 = 0.0;
  local_128.m22 = 0.0;
  local_128.m32 = 0.0;
  local_128.m03 = 0.0;
  local_128.m13 = 0.0;
  local_128.m23 = 0.0;
  local_128.m33 = 0.0;
  fVar17 = (ABS((normal->fields).y) * (__this->fields)._headBounds.fields.m_Extents.fields.y +
            ABS((normal->fields).x) * (__this->fields)._headBounds.fields.m_Extents.fields.x +
           ABS((normal->fields).z) * (__this->fields)._headBounds.fields.m_Extents.fields.z) * offset;
  fVar17 = -((fVar17 * (normal->fields).y + (__this->fields)._headBounds.fields.m_Center.fields.y) *
             (normal->fields).y +
             (fVar17 * (normal->fields).x + (__this->fields)._headBounds.fields.m_Center.fields.x) *
             (normal->fields).x +
            (fVar17 * (normal->fields).z + (__this->fields)._headBounds.fields.m_Center.fields.z) *
            (normal->fields).z);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar16 = UnityEngine_Transform__get_worldToLocalMatrix(local_e8,__this_01,(MethodInfo *)0x0);
      local_128.m00 = (pUVar16->fields).m00;
      local_128.m10 = (pUVar16->fields).m10;
      local_128.m20 = (pUVar16->fields).m20;
      local_128.m30 = (pUVar16->fields).m30;
      local_128.m01 = (pUVar16->fields).m01;
      local_128.m11 = (pUVar16->fields).m11;
      local_128.m21 = (pUVar16->fields).m21;
      local_128.m31 = (pUVar16->fields).m31;
      local_128.m02 = (pUVar16->fields).m02;
      local_128.m12 = (pUVar16->fields).m12;
      local_128.m22 = (pUVar16->fields).m22;
      local_128.m32 = (pUVar16->fields).m32;
      local_128.m03 = (pUVar16->fields).m03;
      local_128.m13 = (pUVar16->fields).m13;
      local_128.m23 = (pUVar16->fields).m23;
      local_128.m33 = (pUVar16->fields).m33;
      pUVar16 = UnityEngine_Matrix4x4__Internal_Transpose
                          (local_e8,(UnityEngine_Matrix4x4_o *)&local_128,(MethodInfo *)0x0);
      fVar4 = (pUVar16->fields).m10;
      fVar5 = (pUVar16->fields).m20;
      fVar6 = (pUVar16->fields).m30;
      fVar7 = (pUVar16->fields).m11;
      fVar8 = (pUVar16->fields).m21;
      fVar9 = (pUVar16->fields).m31;
      fVar10 = (pUVar16->fields).m12;
      fVar11 = (pUVar16->fields).m22;
      fVar12 = (pUVar16->fields).m32;
      fVar13 = (pUVar16->fields).m13;
      fVar14 = (pUVar16->fields).m23;
      fVar15 = (pUVar16->fields).m33;
      fVar1 = (normal->fields).z;
      fVar2 = (normal->fields).x;
      fVar3 = (normal->fields).y;
      (__return_storage_ptr__->fields).x =
           (pUVar16->fields).m01 * (normal->fields).y + (pUVar16->fields).m00 * (normal->fields).x +
           (pUVar16->fields).m02 * fVar1 + (pUVar16->fields).m03 * fVar17;
      (__return_storage_ptr__->fields).y = fVar7 * fVar3 + fVar4 * fVar2 + fVar10 * fVar1 + fVar13 * fVar17;
      (__return_storage_ptr__->fields).z = fVar8 * fVar3 + fVar5 * fVar2 + fVar11 * fVar1 + fVar14 * fVar17;
      (__return_storage_ptr__->fields).w = fVar9 * fVar3 + fVar6 * fVar2 + fVar12 * fVar1 + fVar15 * fVar17;
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$GetCostumeCount
// il2cpp: int32_t Characters_HumanSetup__GetCostumeCount (bool male, const MethodInfo* method);
// 0x182159230
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18215929f: mov rdx, qword ptr [rip + 0x1f8e6ba]  ; "Female"
// asm:   0x1821592a6: jmp 0x1821592d6
// asm:   0x1821592cf: mov rdx, qword ptr [rip + 0x1fa43ca]  ; "Male"

int32_t Characters_HumanSetup__GetCostumeCount(bool male,MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  MethodInfo *pMVar2;
  int32_t iVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  longlong *plVar5;
  
  if (Il2CppMethodInitialized_184346c8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&"Male");
    il2cpp_codegen_initialize_runtime_metadata(&"Female");
    Il2CppMethodInitialized_184346c8d = '\x01';
  }
  if (male) {
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    pSVar1 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
    pMVar2 = (MethodInfo *)"Male";
  }
  else {
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    pSVar1 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
    pMVar2 = (MethodInfo *)"Female";
  }
  if (((pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
      (pSVar4 = (*(pSVar1->klass->vtable)._7_get_Item.methodPtr)(pSVar1,pMVar2),
      pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0)) &&
     (plVar5 = (longlong *)
               (*(code *)*(MethodInfo **)((longlong)&((Il2CppClass *)pSVar4->klass)->vtable[44].method + 8))
                         (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[45].method),
     plVar5 != (longlong *)0x0)) {
    iVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
    return iVar3;
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$GetHairCount
// il2cpp: int32_t Characters_HumanSetup__GetHairCount (const MethodInfo* method);
// 0x182159650

int32_t Characters_HumanSetup__GetHairCount(MethodInfo *method)

{
  SimpleJSONFixed_JSONNode_o *pSVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONArray_o *pSVar3;
  
  if (Il2CppMethodInitialized_184346c8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    Il2CppMethodInitialized_184346c8e = '\x01';
  }
  if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
  }
  pSVar1 = TypeInfo_Characters_HumanSetup->static_fields->HairInfo;
  if (pSVar1 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar3 = (*(pSVar1->klass->vtable)._45_get_AsArray.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._45_get_AsArray.method);
    if (pSVar3 != (SimpleJSONFixed_JSONArray_o *)0x0) {
      iVar2 = (*(pSVar3->klass->vtable)._11_get_Count.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._11_get_Count.method);
      return iVar2;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$Copy
// il2cpp: void Characters_HumanSetup__Copy (Characters_HumanSetup_o* __this, Settings_InGameCharacterSettings_o* settings, const MethodInfo* method);
// 0x182154c90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182154e31: jmp 0x182155077
// asm:   0x182154f0c: jmp 0x182155077
// asm:   0x182154fc3: jmp 0x182155077

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
  Settings_SetSettingsContainer_HumanCustomSet__o *pSVar6;
  Settings_ListSetting_T__o *pSVar7;
  Settings_StringSetting_o *pSVar8;
  System_String_o *loadout;
  int32_t iVar9;
  Settings_HumanCustomSet_o *value;
  
  if (Il2CppMethodInitialized_184346c8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_HumanCustomSet);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_HumanLoadout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346c8f = '\x01';
  }
  pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
  if (((((pSVar3 != (Settings_HumanCustomSettings_o *)0x0) &&
        (settings != (Settings_InGameCharacterSettings_o *)0x0)) &&
       (pSVar4 = (settings->fields).CustomSet, pSVar4 != (Settings_IntSetting_o *)0x0)) &&
      ((pSVar5 = (settings->fields).Costume, pSVar5 != (Settings_IntSetting_o *)0x0 &&
       (pSVar6 = (pSVar3->fields).Costume1Sets,
       pSVar6 != (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)))) &&
     (pSVar7 = (pSVar6->fields).Sets, pSVar7 != (Settings_ListSetting_T__o *)0x0)) {
    pSVar6 = (pSVar3->fields).CustomSets;
    index = (pSVar4->fields)._value;
    iVar2 = (pSVar5->fields)._value;
    iVar9 = Settings_ListSetting_object___GetCount
                      (pSVar7,(MethodInfo_182B100 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetCount);
    if (index < iVar9) {
      pSVar3 = TypeInfo_Settings_SettingsManager->static_fields->HumanCustomSettings;
      if (iVar2 == 1) {
        if (((pSVar3 == (Settings_HumanCustomSettings_o *)0x0) ||
            (pSVar6 = (pSVar3->fields).Costume2Sets,
            pSVar6 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
           (pSVar7 = (pSVar6->fields).Sets, pSVar7 == (Settings_ListSetting_T__o *)0x0)) goto label_1821550d3;
        value = (Settings_HumanCustomSet_o *)
                Settings_ListSetting_object___GetItemAt
                          (pSVar7,index,
                           (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
        if (value == (Settings_HumanCustomSet_o *)0x0) {
          (__this->fields).CustomSet = (Settings_HumanCustomSet_o *)0x0;
        }
        else {
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
          (__this->fields).CustomSet = value;
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
        }
      }
      else if (iVar2 == 2) {
        if (((pSVar3 == (Settings_HumanCustomSettings_o *)0x0) ||
            (pSVar6 = (pSVar3->fields).Costume3Sets,
            pSVar6 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
           (pSVar7 = (pSVar6->fields).Sets, pSVar7 == (Settings_ListSetting_T__o *)0x0)) goto label_1821550d3;
        value = (Settings_HumanCustomSet_o *)
                Settings_ListSetting_object___GetItemAt
                          (pSVar7,index,
                           (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
        if (value == (Settings_HumanCustomSet_o *)0x0) {
          (__this->fields).CustomSet = (Settings_HumanCustomSet_o *)0x0;
        }
        else {
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
          (__this->fields).CustomSet = value;
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
        }
      }
      else {
        if (((pSVar3 == (Settings_HumanCustomSettings_o *)0x0) ||
            (pSVar6 = (pSVar3->fields).Costume1Sets,
            pSVar6 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0)) ||
           (pSVar7 = (pSVar6->fields).Sets, pSVar7 == (Settings_ListSetting_T__o *)0x0)) goto label_1821550d3;
        value = (Settings_HumanCustomSet_o *)
                Settings_ListSetting_object___GetItemAt
                          (pSVar7,index,
                           (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
        if (value == (Settings_HumanCustomSet_o *)0x0) {
          (__this->fields).CustomSet = (Settings_HumanCustomSet_o *)0x0;
        }
        else {
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
          (__this->fields).CustomSet = value;
          bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
          if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
             ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
            il2cpp_codegen_raise_invalid_cast_exception(value);
          }
        }
      }
    }
    else {
      if ((pSVar6 == (Settings_SetSettingsContainer_HumanCustomSet__o *)0x0) ||
         (pSVar7 = (pSVar6->fields).Sets, pSVar7 == (Settings_ListSetting_T__o *)0x0)) goto label_1821550d3;
      value = (Settings_HumanCustomSet_o *)
              Settings_ListSetting_object___GetItemAt
                        (pSVar7,index - iVar9,
                         (MethodInfo_182B120 *)MethodInfo_Settings_ListSetting_HumanCustomSet_GetItemAt);
      if (value == (Settings_HumanCustomSet_o *)0x0) {
        (__this->fields).CustomSet = (Settings_HumanCustomSet_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
        (__this->fields).CustomSet = value;
        bVar1 = (TypeInfo_Settings_HumanCustomSet->_2).typeHierarchyDepth;
        if (((value->klass->_2).typeHierarchyDepth < bVar1) ||
           ((value->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_Settings_HumanCustomSet)) {
          il2cpp_codegen_raise_invalid_cast_exception(value);
        }
      }
    }
    Il2CppCodeGenWriteBarrier(&(__this->fields).CustomSet,value);
    pSVar8 = (settings->fields).Loadout;
    if (pSVar8 != (Settings_StringSetting_o *)0x0) {
      loadout = (pSVar8->fields)._value;
      if ((TypeInfo_GameManagers_HumanLoadout->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_HumanLoadout);
      }
      iVar9 = GameManagers_HumanLoadout__ToWeapon(loadout,(MethodInfo *)0x0);
      (__this->fields).Weapon = iVar9;
      return;
    }
  }
label_1821550d3:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$Load
// il2cpp: void Characters_HumanSetup__Load (Characters_HumanSetup_o* __this, Settings_HumanCustomSet_o* customSet, int32_t weapon, bool isDeadBody, const MethodInfo* method);
// 0x182159de0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182159f95: mov rdx, qword ptr [rip + 0x1f8d9c4]  ; "Female"
// asm:   0x182159f9c: jmp 0x18215a023
// asm:   0x18215a01c: mov rdx, qword ptr [rip + 0x1fa367d]  ; "Male"
// asm:   0x18215a116: mov rdx, qword ptr [rip + 0x1f8d843]  ; "Female"
// asm:   0x18215a11d: jmp 0x18215a159
// asm:   0x18215a152: mov rdx, qword ptr [rip + 0x1fa3547]  ; "Male"

void Characters_HumanSetup__Load
               (Characters_HumanSetup_o *__this,Settings_HumanCustomSet_o *customSet,int32_t weapon,
               bool isDeadBody,MethodInfo *method)

{
  int iVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  Settings_StringSetting_o *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  uint uVar8;
  System_Xml_Schema_XmlSchema_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  Characters_BaseCharacter_o *__this_00;
  
  if (Il2CppMethodInitialized_184346c90 == '\0') {
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
    Il2CppMethodInitialized_184346c90 = '\x01';
  }
  (__this->fields).CustomSet = customSet;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CustomSet,customSet);
  pSVar2 = (__this->fields).CustomSet;
  (__this->fields).Weapon = weapon;
  (__this->fields).IsDeadBody = isDeadBody;
  if (((pSVar2 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Sex, pSVar3 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar4 = (((__this->fields).CustomSet)->fields).Costume, pSVar4 == (Settings_IntSetting_o *)0x0))
  goto label_18215a2c5;
  iVar1 = (pSVar4->fields)._value;
  if ((pSVar3->fields)._value == 0) {
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    if (TypeInfo_Characters_HumanSetup->static_fields->CostumeMCount <= iVar1) {
      pSVar2 = (__this->fields).CustomSet;
      if ((pSVar2 == (Settings_HumanCustomSet_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).Costume, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_18215a2c5;
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar3,0,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    }
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    pSVar10 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
    pMVar6 = (MethodInfo *)"Male";
  }
  else {
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    if (TypeInfo_Characters_HumanSetup->static_fields->CostumeFCount <= iVar1) {
      pSVar2 = (__this->fields).CustomSet;
      if ((pSVar2 == (Settings_HumanCustomSet_o *)0x0) ||
         (pSVar3 = (pSVar2->fields).Costume, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_18215a2c5;
      Settings_TypedSetting_int___set_Value
                ((Settings_TypedSetting_int__o *)pSVar3,0,
                 (MethodInfo_E8F570 *)MethodInfo_Settings_TypedSetting_int_set_Value);
    }
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    pSVar10 = TypeInfo_Characters_HumanSetup->static_fields->CostumeInfo;
    pMVar6 = (MethodInfo *)"Female";
  }
  if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18215a2c5;
  pSVar9 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)(pSVar10,pMVar6);
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar3 = (pSVar2->fields).Costume, pSVar3 == (Settings_IntSetting_o *)0x0)) ||
     (pSVar9 == (System_Xml_Schema_XmlSchema_o *)0x0)) goto label_18215a2c5;
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)
            (*(pSVar9->klass->vtable)._5_OnRemove.methodPtr)
                      (pSVar9,(System_Type_o *)(ulonglong)(uint)(pSVar3->fields)._value,
                       (pSVar9->klass->vtable)._5_OnRemove.method);
  (__this->fields).CurrentCostume = pSVar10;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentCostume,pSVar10);
  pSVar2 = (__this->fields).CustomSet;
  if (((pSVar2 == (Settings_HumanCustomSet_o *)0x0) ||
      (pSVar5 = (pSVar2->fields).Hair, pSVar5 == (Settings_StringSetting_o *)0x0)) ||
     (pSVar11 = (pSVar5->fields)._value, pSVar11 == (System_String_o *)0x0)) goto label_18215a2c5;
  bVar7 = System_String__StartsWith(pSVar11,"HairM",(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    pSVar10 = TypeInfo_Characters_HumanSetup->static_fields->HairInfo;
    pMVar6 = (MethodInfo *)"Male";
joined_r0x00018215a14c:
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18215a2c5;
    pSVar9 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)(pSVar10,pMVar6);
    pSVar11 = System_String__Substring(pSVar11,5,(MethodInfo *)0x0);
    uVar8 = System_Int32__Parse(pSVar11,(MethodInfo *)0x0);
    if (pSVar9 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18215a2c5;
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar9->klass->vtable)._5_OnRemove.methodPtr)
                        (pSVar9,(System_Type_o *)(ulonglong)uVar8,(pSVar9->klass->vtable)._5_OnRemove.method);
    (__this->fields).CurrentHair = pSVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields).CurrentHair,pSVar10);
  }
  else {
    bVar7 = System_String__StartsWith(pSVar11,"HairF",(MethodInfo *)0x0);
    if (bVar7) {
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      pSVar10 = TypeInfo_Characters_HumanSetup->static_fields->HairInfo;
      pMVar6 = (MethodInfo *)"Female";
      goto joined_r0x00018215a14c;
    }
  }
  pSVar10 = (__this->fields).CurrentCostume;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    ApplicationManagers_DebugConsole__Log("Warning: costume does not exist in CostumeInfo JSON.",false,(MethodInfo *)0x0);
  }
  pSVar10 = (__this->fields).CurrentHair;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((TypeInfo_ApplicationManagers_DebugConsole->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_DebugConsole);
    }
    ApplicationManagers_DebugConsole__Log("Warning: hair does not exist in CostumeInfo JSON",false,(MethodInfo *)0x0);
  }
  Characters_HumanSetup__DeleteParts(__this,(MethodInfo *)0x0);
  Characters_HumanSetup__CreateParts(__this,(MethodInfo *)0x0);
  __this_00 = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
label_18215a2c5:
      ThrowNullReferenceException();
    }
    Characters_BaseCharacter__RefreshRenderers(__this_00,(MethodInfo *)0x0);
  }
  return;
}


// Characters.HumanSetup$$DeleteDie
// il2cpp: void Characters_HumanSetup__DeleteDie (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182158830
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18215888d: nop dword ptr [rax]

void Characters_HumanSetup__DeleteDie(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  System_Object_array *pSVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_184346c91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer);
    Il2CppMethodInitialized_184346c91 = '\x01';
  }
  if ((__this->fields).Deleted == false) {
    Characters_HumanSetup__DeleteParts(__this,(MethodInfo *)0x0);
    pSVar1 = UnityEngine_Component__GetComponentsInChildren_object__665370
                       ((UnityEngine_Component_o *)__this,
                        (MethodInfo_665370 *)MethodInfo_UnityEngine_Component_GetComponentsInChildren_Renderer
                       );
    if (pSVar1 == (System_Object_array *)0x0) {
label_1821588ce:
      ThrowNullReferenceException();
    }
    for (uVar2 = 0; (int)uVar2 < (int)pSVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pSVar1->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      if ((UnityEngine_Renderer_o *)pSVar1->m_Items[(int)uVar2] == (UnityEngine_Renderer_o *)0x0)
      goto label_1821588ce;
      UnityEngine_Renderer__set_enabled
                ((UnityEngine_Renderer_o *)pSVar1->m_Items[(int)uVar2],false,(MethodInfo *)0x0);
    }
    (__this->fields).Deleted = true;
  }
  return;
}


// Characters.HumanSetup$$CreateParts
// il2cpp: void Characters_HumanSetup__CreateParts (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182157260

void Characters_HumanSetup__CreateParts(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Characters_HumanSetupTextures_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_ColorSetting_o *pSVar3;
  Utility_Color255_o *pUVar4;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Characters_HumanSetupMeshes_o *__this_01;
  Settings_IntSetting_o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  undefined8 uVar7;
  undefined8 uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  undefined8 uVar13;
  undefined8 uVar14;
  bool bVar15;
  System_String_o *pSVar16;
  System_String_o *pSVar17;
  System_String_o *colorTexture;
  System_String_o *pantsTexture;
  UnityEngine_Color_o *pUVar18;
  UnityEngine_Material_o *bodyMaterial;
  UnityEngine_GameObject_o *pUVar19;
  UnityEngine_Color_Fields local_b8;
  UnityEngine_Color_Fields local_a8;
  UnityEngine_Color_Fields local_98;
  UnityEngine_Color_Fields local_88;
  UnityEngine_Color_Fields local_78 [6];
  
  if (Il2CppMethodInitialized_184346c92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_184346c92 = '\x01';
  }
  pCVar1 = (__this->fields)._textures;
  if (pCVar1 != (Characters_HumanSetupTextures_o *)0x0) {
    pSVar16 = Characters_HumanSetupTextures__GetBodyMainTexture(pCVar1,(MethodInfo *)0x0);
    pCVar1 = (__this->fields)._textures;
    if (pCVar1 != (Characters_HumanSetupTextures_o *)0x0) {
      pSVar17 = Characters_HumanSetupTextures__GetBodyMaskTexture(pCVar1,(MethodInfo *)0x0);
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
            pUVar18 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_78,pUVar4,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).CustomSet;
            if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                (pSVar3 = (pSVar2->fields).StrapsColor, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
               (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
              uVar7._0_4_ = (pUVar18->fields).r;
              uVar7._4_4_ = (pUVar18->fields).g;
              uVar8._0_4_ = (pUVar18->fields).b;
              uVar8._4_4_ = (pUVar18->fields).a;
              pUVar18 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_78,pUVar4,(MethodInfo *)0x0);
              pSVar2 = (__this->fields).CustomSet;
              if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                  (pSVar3 = (pSVar2->fields).PantsColor, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
                 (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
                uVar9._0_4_ = (pUVar18->fields).r;
                uVar9._4_4_ = (pUVar18->fields).g;
                uVar10._0_4_ = (pUVar18->fields).b;
                uVar10._4_4_ = (pUVar18->fields).a;
                pUVar18 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_78,pUVar4,(MethodInfo *)0x0);
                pSVar2 = (__this->fields).CustomSet;
                if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                    (pSVar3 = (pSVar2->fields).JacketColor, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
                   (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
                  uVar11._0_4_ = (pUVar18->fields).r;
                  uVar11._4_4_ = (pUVar18->fields).g;
                  uVar12._0_4_ = (pUVar18->fields).b;
                  uVar12._4_4_ = (pUVar18->fields).a;
                  pUVar18 = Utility_Color255__ToColor
                                      ((UnityEngine_Color_o *)local_78,pUVar4,(MethodInfo *)0x0);
                  pSVar2 = (__this->fields).CustomSet;
                  if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                      (pSVar3 = (pSVar2->fields).BootsColor, pSVar3 != (Settings_ColorSetting_o *)0x0)) &&
                     (pUVar4 = (pSVar3->fields)._value, pUVar4 != (Utility_Color255_o *)0x0)) {
                    uVar13._0_4_ = (pUVar18->fields).r;
                    uVar13._4_4_ = (pUVar18->fields).g;
                    uVar14._0_4_ = (pUVar18->fields).b;
                    uVar14._4_4_ = (pUVar18->fields).a;
                    pUVar18 = Utility_Color255__ToColor
                                        ((UnityEngine_Color_o *)local_78,pUVar4,(MethodInfo *)0x0);
                    local_b8.r = (pUVar18->fields).r;
                    local_b8.g = (pUVar18->fields).g;
                    local_b8.b = (pUVar18->fields).b;
                    local_b8.a = (pUVar18->fields).a;
                    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
                    }
                    local_a8._0_8_ = uVar13;
                    local_a8._8_8_ = uVar14;
                    local_98._0_8_ = uVar11;
                    local_98._8_8_ = uVar12;
                    local_88._0_8_ = uVar9;
                    local_88._8_8_ = uVar10;
                    local_78[0]._0_8_ = uVar7;
                    local_78[0]._8_8_ = uVar8;
                    bodyMaterial = Characters_HumanSetupMaterials__GetCostumeMaterial
                                             (pSVar16,pSVar17,colorTexture,pantsTexture,
                                              (UnityEngine_Color_o *)local_78,(UnityEngine_Color_o *)&local_88
                                              ,(UnityEngine_Color_o *)&local_98,
                                              (UnityEngine_Color_o *)&local_a8,
                                              (UnityEngine_Color_o *)&local_b8,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_184346c94 == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata
                                (&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                      Il2CppMethodInitialized_184346c94 = '\x01';
                    }
                    __this_00 = (System_Collections_Generic_HashSet_object__o *)
                                (__this->fields)._ownedMaterials;
                    if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                      System_Collections_Generic_HashSet_object___Add
                                (__this_00,(Il2CppObject *)bodyMaterial,
                                 (MethodInfo_1757CE0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                      Characters_HumanSetup__CreateHair(__this,(MethodInfo *)0x0);
                      if (Il2CppMethodInitialized_184346ca3 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                  );
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&TypeInfo_ApplicationManagers_ResourceManager);
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_Settings_TypedSetting_int_get_Value);
                        il2cpp_codegen_initialize_runtime_metadata(&"Eye");
                        Il2CppMethodInitialized_184346ca3 = '\x01';
                      }
                      Characters_HumanSetup__DestroyIfExists
                                (__this,(__this->fields)._part_eye,(MethodInfo *)0x0);
                      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                      }
                      __this_01 = (__this->fields)._meshes;
                      if (__this_01 != (Characters_HumanSetupMeshes_o *)0x0) {
                        pSVar16 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
                        pSVar17 = Characters_HumanSetupMeshes__GetEyeMesh(__this_01,(MethodInfo *)0x0);
                        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0
                           ) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                        }
                        pUVar19 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                            (pSVar16,pSVar17,true,
                                             (MethodInfo_795F00 *)
                                             MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                            );
                        (__this->fields)._part_eye = pUVar19;
                        Il2CppCodeGenWriteBarrier(&(__this->fields)._part_eye,pUVar19);
                        Characters_HumanSetup__AttachToMount
                                  (__this,(__this->fields)._part_eye,(__this->fields)._part_head,false,
                                   (MethodInfo *)0x0);
                        pSVar2 = (__this->fields).CustomSet;
                        if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                           (pSVar5 = (pSVar2->fields).Eye, pSVar5 != (Settings_IntSetting_o *)0x0)) {
                          Characters_HumanSetup__SetFacialTexture
                                    (__this,(__this->fields)._part_eye,"Eye",
                                     (pSVar5->fields)._value,false,(MethodInfo *)0x0);
                          Characters_HumanSetup__CreateFace(__this,(MethodInfo *)0x0);
                          Characters_HumanSetup__CreateGlass(__this,(MethodInfo *)0x0);
                          Characters_HumanSetup__CreateUpperBody(__this,bodyMaterial,(MethodInfo *)0x0);
                          Characters_HumanSetup__CreateArms(__this,bodyMaterial,(MethodInfo *)0x0);
                          Characters_HumanSetup__CreateLowerBody(__this,bodyMaterial,(MethodInfo *)0x0);
                          Characters_HumanSetup__Create3dmg(__this,(MethodInfo *)0x0);
                          Characters_HumanSetup__CreateWeapon(__this,(MethodInfo *)0x0);
                          Characters_HumanSetup__CreateBack(__this,(MethodInfo *)0x0);
                          if (Il2CppMethodInitialized_184346ca8 == '\0') {
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupPrefabs)
                            ;
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&
                                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                      );
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&TypeInfo_ApplicationManagers_ResourceManager);
                            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
                            il2cpp_codegen_initialize_runtime_metadata
                                      (&MethodInfo_Settings_TypedSetting_string_get_Value);
                            il2cpp_codegen_initialize_runtime_metadata(&"None");
                            Il2CppMethodInitialized_184346ca8 = '\x01';
                          }
                          Characters_HumanSetup__DestroyIfExists
                                    (__this,(__this->fields)._part_hat,(MethodInfo *)0x0);
                          pSVar2 = (__this->fields).CustomSet;
                          if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                              (pSVar6 = (pSVar2->fields).Hat, pSVar6 != (Settings_StringSetting_o *)0x0)) &&
                             (pSVar16 = (pSVar6->fields)._value, pSVar16 != (System_String_o *)0x0)) {
                            pSVar16 = System_String__Substring(pSVar16,3,(MethodInfo *)0x0);
                            bVar15 = System_String__op_Inequality
                                               (pSVar16,"None",(MethodInfo *)0x0);
                            if (bVar15) {
                              if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                              }
                              pSVar17 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
                              if ((TypeInfo_Characters_HumanSetupPrefabs->_2).cctor_finished_or_no_cctor == 0)
                              {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_Characters_HumanSetupPrefabs);
                              }
                              pSVar16 = Characters_HumanSetupPrefabs__GetHatPrefab(pSVar16,(MethodInfo *)0x0);
                              if ((TypeInfo_ApplicationManagers_ResourceManager->_2).
                                  cctor_finished_or_no_cctor == 0) {
                                il2cpp_codegen_runtime_class_init
                                          ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                              }
                              pUVar19 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                  (pSVar17,pSVar16,true,
                                                   (MethodInfo_795F00 *)
                                                   MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                                  );
                              (__this->fields)._part_hat = pUVar19;
                              Il2CppCodeGenWriteBarrier(&(__this->fields)._part_hat,pUVar19);
                              Characters_HumanSetup__AttachToMount
                                        (__this,(__this->fields)._part_hat,(__this->fields)._mount_hat,true,
                                         (MethodInfo *)0x0);
                              Characters_HumanSetup__UpdateCloakVisibility(__this,(MethodInfo *)0x0);
                            }
                            if (Il2CppMethodInitialized_184346ca7 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&TypeInfo_Characters_HumanSetupPrefabs);
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&
                                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                        );
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&TypeInfo_ApplicationManagers_ResourceManager);
                              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&MethodInfo_Settings_TypedSetting_string_get_Value);
                              il2cpp_codegen_initialize_runtime_metadata(&"None");
                              Il2CppMethodInitialized_184346ca7 = '\x01';
                            }
                            Characters_HumanSetup__DestroyIfExists
                                      (__this,(__this->fields)._part_head_decor,(MethodInfo *)0x0);
                            pSVar2 = (__this->fields).CustomSet;
                            if (((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
                                (pSVar6 = (pSVar2->fields).Head, pSVar6 != (Settings_StringSetting_o *)0x0))
                               && (pSVar16 = (pSVar6->fields)._value, pSVar16 != (System_String_o *)0x0)) {
                              pSVar16 = System_String__Substring(pSVar16,4,(MethodInfo *)0x0);
                              bVar15 = System_String__op_Inequality
                                                 (pSVar16,"None",(MethodInfo *)0x0);
                              if (bVar15) {
                                if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                                }
                                pSVar17 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
                                if ((TypeInfo_Characters_HumanSetupPrefabs->_2).cctor_finished_or_no_cctor ==
                                    0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_Characters_HumanSetupPrefabs);
                                }
                                pSVar16 = Characters_HumanSetupPrefabs__GetHeadPrefab
                                                    (pSVar16,(MethodInfo *)0x0);
                                if ((TypeInfo_ApplicationManagers_ResourceManager->_2).
                                    cctor_finished_or_no_cctor == 0) {
                                  il2cpp_codegen_runtime_class_init
                                            ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                                }
                                pUVar19 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                                    (pSVar17,pSVar16,true,
                                                     (MethodInfo_795F00 *)
                                                     MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                                    );
                                (__this->fields)._part_head_decor = pUVar19;
                                Il2CppCodeGenWriteBarrier(&(__this->fields)._part_head_decor,pUVar19);
                                Characters_HumanSetup__AttachToMount
                                          (__this,(__this->fields)._part_head_decor,
                                           (__this->fields)._mount_head_decor,true,(MethodInfo *)0x0);
                                Characters_HumanSetup__UpdateCloakVisibility(__this,(MethodInfo *)0x0);
                              }
                              Characters_HumanSetup__UpdateCloakVisibility(__this,(MethodInfo *)0x0);
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
// 0x1821588e0

void Characters_HumanSetup__DeleteParts(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_Renderer__o *pSVar2;
  System_Collections_Generic_Dictionary_Renderer__Material__o *__this_00;
  
  if (Il2CppMethodInitialized_184346c93 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Clear);
    Il2CppMethodInitialized_184346c93 = '\x01';
  }
  pSVar2 = (__this->fields)._hairRenderers;
  if (pSVar2 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    length = (pSVar2->fields)._size;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    Characters_HumanSetup__DestroyOwnedMaterials(__this,(MethodInfo *)0x0);
    __this_00 = (__this->fields)._effectMaterialCache;
    if (__this_00 != (System_Collections_Generic_Dictionary_Renderer__Material__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                 (MethodInfo_13BF1C0 *)
                 MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_Clear);
      Characters_HumanSetup__DisposeCloth(__this,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_eye,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_face,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_glass,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_hair,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_upper_body,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_arm_l,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_arm_r,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_hand_l,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_hand_r,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_brand_1,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_brand_2,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_brand_3,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_brand_4,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_chest_1,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_chest_2,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_3dmg,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_belt,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_gas_l,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_gas_r,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_blade_l,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_blade_r,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_back,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_hat,(MethodInfo *)0x0);
      Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_head_decor,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$OnDestroy
// il2cpp: void Characters_HumanSetup__OnDestroy (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x18215a2d0

void Characters_HumanSetup__OnDestroy(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Characters_HumanSetup__DisposeCloth(__this,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyOwnedMaterials(__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSetup$$Own
// il2cpp: UnityEngine_Material_o* Characters_HumanSetup__Own (Characters_HumanSetup_o* __this, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x18215a3c0

UnityEngine_Material_o *
Characters_HumanSetup__Own
          (Characters_HumanSetup_o *__this,UnityEngine_Material_o *material,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (Il2CppMethodInitialized_184346c94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
    Il2CppMethodInitialized_184346c94 = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
  if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              (__this_00,(Il2CppObject *)material,
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
    return material;
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$OwnInstance
// il2cpp: UnityEngine_Material_o* Characters_HumanSetup__OwnInstance (Characters_HumanSetup_o* __this, UnityEngine_Renderer_o* renderer, const MethodInfo* method);
// 0x18215a2f0

UnityEngine_Material_o *
Characters_HumanSetup__OwnInstance
          (Characters_HumanSetup_o *__this,UnityEngine_Renderer_o *renderer,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this_00;
  bool bVar1;
  UnityEngine_Material_o *y;
  UnityEngine_Material_o *x;
  
  if (Il2CppMethodInitialized_184346c95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c95 = '\x01';
  }
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    y = UnityEngine_Renderer__get_sharedMaterial(renderer,(MethodInfo *)0x0);
    x = UnityEngine_Renderer__get_material(renderer,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
    if (!bVar1) {
      if (Il2CppMethodInitialized_184346c94 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
        Il2CppMethodInitialized_184346c94 = '\x01';
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_18215a3b4;
      System_Collections_Generic_HashSet_object___Add
                (__this_00,(Il2CppObject *)x,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
    }
    return x;
  }
label_18215a3b4:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$DestroyOwnedMaterials
// il2cpp: void Characters_HumanSetup__DestroyOwnedMaterials (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182158bb0
// eh: try 0x182158c80..0x182158ce1 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182158cf2: mov rdx, qword ptr [rip + 0x1f33a2f]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_Dispose
// asm:   0x182158cf9: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x182158cfe: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182158d03: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182158d08: test rcx, rcx
// asm:   0x182158d0b: jne 0x182158d43
// asm:   0x182158d0d: mov rsi, qword ptr [rsp + 0x70]
// asm:   0x182158d43: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Characters_HumanSetup__DestroyOwnedMaterials(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_Vector2Int__o *__this_00;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this_01;
  UnityEngine_Object_o *x;
  bool bVar1;
  undefined1 local_40 [16];
  UnityEngine_Object_o *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  UnityEngine_Object_o *local_18;
  
  if (Il2CppMethodInitialized_184346c96 == '\0') {
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
    Il2CppMethodInitialized_184346c96 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (UnityEngine_Object_o *)0x0;
  __this_00 = (System_Collections_Generic_HashSet_Vector2Int__o *)(__this->fields)._ownedMaterials;
  if (__this_00 != (System_Collections_Generic_HashSet_Vector2Int__o *)0x0) {
    System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_40,__this_00,
               (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_Material_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_28,
                         (MethodInfo_15381F0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_MoveNext);
      x = local_18;
      if (!bVar1) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_2f1ff70(x,(MethodInfo *)0x0);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_HashSet_Enumerator_Material_Dispose);
    __this_01 = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)(__this->fields)._ownedMaterials;
    if (__this_01 != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
      System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                (__this_01,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Clear)
      ;
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$DisposeCloth
// il2cpp: void Characters_HumanSetup__DisposeCloth (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182158dc0

void Characters_HumanSetup__DisposeCloth(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  
  if (Il2CppMethodInitialized_184346c97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    Il2CppMethodInitialized_184346c97 = '\x01';
  }
  if ((__this->fields).IsDeadBody == false) {
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    if (Il2CppMethodInitialized_184346c98 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
      Il2CppMethodInitialized_184346c98 = '\x01';
    }
    pUVar1 = (__this->fields)._part_hair_1;
    if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
    }
    ClothFactory__DisposeObject(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._part_hair_1 = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_hair_1,(void *)0x0);
    if (Il2CppMethodInitialized_184346c98 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
      Il2CppMethodInitialized_184346c98 = '\x01';
    }
    pUVar1 = (__this->fields)._part_cape;
    if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
    }
    ClothFactory__DisposeObject(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._part_cape = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_cape,(void *)0x0);
    if (Il2CppMethodInitialized_184346c98 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
      Il2CppMethodInitialized_184346c98 = '\x01';
    }
    pUVar1 = (__this->fields)._part_chest_3;
    if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
    }
    ClothFactory__DisposeObject(pUVar1,(MethodInfo *)0x0);
    (__this->fields)._part_chest_3 = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_chest_3,(void *)0x0);
  }
  return;
}


// Characters.HumanSetup$$DisposeClothPart
// il2cpp: void Characters_HumanSetup__DisposeClothPart (UnityEngine_GameObject_o** part, const MethodInfo* method);
// 0x182158d50

void Characters_HumanSetup__DisposeClothPart(UnityEngine_GameObject_o **part,MethodInfo *method)

{
  UnityEngine_GameObject_o *cachedObject;
  
  if (Il2CppMethodInitialized_184346c98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    Il2CppMethodInitialized_184346c98 = '\x01';
  }
  cachedObject = *part;
  if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
  }
  ClothFactory__DisposeObject(cachedObject,(MethodInfo *)0x0);
  *part = (UnityEngine_GameObject_o *)0x0;
  Il2CppCodeGenWriteBarrier(part,(void *)0x0);
  return;
}


// Characters.HumanSetup$$Create3dmg
// il2cpp: void Characters_HumanSetup__Create3dmg (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182155130

void Characters_HumanSetup__Create3dmg(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Characters_HumanSetupTextures_o *__this_00;
  Characters_HumanSetupMeshes_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  bool bVar4;
  System_String_o *pSVar5;
  UnityEngine_Material_o *value;
  System_String_o *pSVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Renderer_o *pUVar8;
  longlong lVar9;
  
  if (Il2CppMethodInitialized_184346c99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346c99 = '\x01';
  }
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_3dmg,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_belt,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_gas_l,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_gas_r,(MethodInfo *)0x0);
  if ((__this->fields).Weapon == 5) {
    return;
  }
  __this_00 = (__this->fields)._textures;
  if (__this_00 != (Characters_HumanSetupTextures_o *)0x0) {
    pSVar5 = Characters_HumanSetupTextures__Get3dmgTexture(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    value = Characters_HumanSetupMaterials__GetPartMaterial(pSVar5,false,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pCVar1 = (__this->fields)._meshes;
    if (pCVar1 != (Characters_HumanSetupMeshes_o *)0x0) {
      pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      pSVar6 = Characters_HumanSetupMeshes__Get3dmgMesh(pCVar1,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar7 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (pSVar5,pSVar6,true,
                          (MethodInfo_795F00 *)
                          MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      (__this->fields)._part_3dmg = pUVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._part_3dmg,pUVar7);
      Characters_HumanSetup__AttachToMount
                (__this,(__this->fields)._part_3dmg,(__this->fields)._mount_3dmg,false,(MethodInfo *)0x0);
      pUVar7 = (__this->fields)._part_3dmg;
      if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar8 = UnityEngine_GameObject__GetComponentInChildren_object_
                             (pUVar7,(MethodInfo_6F5040 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer),
         pUVar8 != (UnityEngine_Renderer_o *)0x0)) {
        UnityEngine_Renderer__set_sharedMaterial(pUVar8,value,(MethodInfo *)0x0);
        pSVar2 = (__this->fields).CustomSet;
        if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
           (pSVar3 = (pSVar2->fields).Cape, pSVar3 != (Settings_IntSetting_o *)0x0)) {
          if (((pSVar3->fields)._value == 2) &&
             (((__this->fields).Weapon == 1 || ((__this->fields).Weapon == 3)))) {
            pUVar7 = (__this->fields)._part_3dmg;
            if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_18215566f;
            UnityEngine_GameObject__SetActive(pUVar7,false,(MethodInfo *)0x0);
          }
          pCVar1 = (__this->fields)._meshes;
          if (pCVar1 != (Characters_HumanSetupMeshes_o *)0x0) {
            pSVar5 = Characters_HumanSetupMeshes__GetBeltMesh(pCVar1,(MethodInfo *)0x0);
            bVar4 = System_String__op_Inequality
                              (pSVar5,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                               (MethodInfo *)0x0);
            if (bVar4) {
              if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
              }
              pSVar6 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
              if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)
                ;
              }
              pUVar7 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                 (pSVar6,pSVar5,true,
                                  (MethodInfo_795F00 *)
                                  MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
              (__this->fields)._part_belt = pUVar7;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._part_belt,pUVar7);
              pUVar7 = (__this->fields)._part_belt;
              if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
                 (pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar7,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                 pUVar8 == (UnityEngine_Renderer_o *)0x0)) goto label_18215566f;
              UnityEngine_Renderer__set_sharedMaterial(pUVar8,value,(MethodInfo *)0x0);
              Characters_HumanSetup__AttachToMount
                        (__this,(__this->fields)._part_belt,(__this->fields)._mount_3dmg,false,
                         (MethodInfo *)0x0);
            }
            if (((__this->fields).Weapon == 3) || ((__this->fields).Weapon == 4)) {
label_182155643:
              Characters_HumanSetup__ScaleGearForCloak(__this,(__this->fields)._part_3dmg,(MethodInfo *)0x0);
              return;
            }
            if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
            }
            pCVar1 = (__this->fields)._meshes;
            if (pCVar1 != (Characters_HumanSetupMeshes_o *)0x0) {
              pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
              pSVar6 = Characters_HumanSetupMeshes__GetGasMesh(pCVar1,true,(MethodInfo *)0x0);
              if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager)
                ;
              }
              pUVar7 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                 (pSVar5,pSVar6,true,
                                  (MethodInfo_795F00 *)
                                  MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
              (__this->fields)._part_gas_l = pUVar7;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._part_gas_l,pUVar7);
              pUVar7 = (__this->fields)._part_gas_l;
              if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                 (pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar7,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                 pUVar8 != (UnityEngine_Renderer_o *)0x0)) {
                UnityEngine_Renderer__set_sharedMaterial(pUVar8,value,(MethodInfo *)0x0);
                lVar9 = 0x30;
                if ((__this->fields).Weapon == 1) {
                  lVar9 = 0x40;
                }
                Characters_HumanSetup__AttachToMount
                          (__this,(__this->fields)._part_gas_l,
                           *(UnityEngine_GameObject_o **)((longlong)&__this->klass + lVar9),false,
                           (MethodInfo *)0x0);
                if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
                }
                pCVar1 = (__this->fields)._meshes;
                if (pCVar1 != (Characters_HumanSetupMeshes_o *)0x0) {
                  pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
                  pSVar6 = Characters_HumanSetupMeshes__GetGasMesh(pCVar1,false,(MethodInfo *)0x0);
                  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
                  }
                  pUVar7 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                                     (pSVar5,pSVar6,true,
                                      (MethodInfo_795F00 *)
                                      MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject
                                     );
                  (__this->fields)._part_gas_r = pUVar7;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._part_gas_r,pUVar7);
                  pUVar7 = (__this->fields)._part_gas_r;
                  if ((pUVar7 != (UnityEngine_GameObject_o *)0x0) &&
                     (pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                         (pUVar7,(MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Renderer),
                     pUVar8 != (UnityEngine_Renderer_o *)0x0)) {
                    UnityEngine_Renderer__set_sharedMaterial(pUVar8,value,(MethodInfo *)0x0);
                    if ((__this->fields).Weapon == 1) {
                      pUVar7 = (__this->fields)._mount_gun_mag_r;
                    }
                    else {
                      pUVar7 = (__this->fields)._mount_gas_r;
                    }
                    Characters_HumanSetup__AttachToMount
                              (__this,(__this->fields)._part_gas_r,pUVar7,false,(MethodInfo *)0x0);
                    goto label_182155643;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_18215566f:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$ScaleGearForCloak
// il2cpp: void Characters_HumanSetup__ScaleGearForCloak (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* gear, const MethodInfo* method);
// 0x18215a8f0

void Characters_HumanSetup__ScaleGearForCloak
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *gear,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  undefined4 uVar4;
  undefined8 uVar5;
  undefined4 uVar6;
  float fVar7;
  Settings_IntSetting_o *pSVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  float fVar11;
  bool bVar12;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *pUVar13;
  UnityEngine_Bounds_o *pUVar14;
  UnityEngine_Vector3_o *pUVar15;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_Fields local_a8;
  UnityEngine_Vector3_Fields local_98;
  UnityEngine_Bounds_o local_88 [5];
  
  if (Il2CppMethodInitialized_184346c9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer_40be880);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c9a = '\x01';
  }
  if (Il2CppMethodInitialized_184346c87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346c87 = '\x01';
  }
  if ((__this->fields).CustomSet == (Settings_HumanCustomSet_o *)0x0) {
    return;
  }
  pSVar8 = (((__this->fields).CustomSet)->fields).Cape;
  if (pSVar8 != (Settings_IntSetting_o *)0x0) {
    if ((pSVar8->fields)._value != 2) {
      return;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar12 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)gear,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar12) {
      return;
    }
    if (gear != (UnityEngine_GameObject_o *)0x0) {
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                    (gear,true,
                     (MethodInfo_6F5110 *)
                     MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer_40be880);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar12 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar12) {
        if (x == (UnityEngine_Object_o *)0x0) goto label_18215ac68;
        pUVar13 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
        pUVar14 = UnityEngine_Renderer__get_localBounds
                            (local_88,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
        local_88[0].fields.m_Extents.fields.y = (pUVar14->fields).m_Extents.fields.y;
        local_88[0].fields.m_Extents.fields.z = (pUVar14->fields).m_Extents.fields.z;
        uVar9._0_4_ = (pUVar14->fields).m_Center.fields.x;
        uVar9._4_4_ = (pUVar14->fields).m_Center.fields.y;
        if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_18215ac68;
        local_a8._0_8_ = uVar9;
        local_a8.z = (pUVar14->fields).m_Center.fields.z;
        pUVar15 = UnityEngine_Transform__TransformPoint
                            ((UnityEngine_Vector3_o *)local_88,pUVar13,(UnityEngine_Vector3_o *)&local_a8,
                             (MethodInfo *)0x0);
      }
      else {
        pUVar13 = UnityEngine_GameObject__get_transform(gear,(MethodInfo *)0x0);
        if (pUVar13 == (UnityEngine_Transform_o *)0x0) goto label_18215ac68;
        pUVar15 = UnityEngine_Transform__get_position
                            ((UnityEngine_Vector3_o *)local_88,pUVar13,(MethodInfo *)0x0);
      }
      uVar5._0_4_ = (pUVar15->fields).x;
      uVar5._4_4_ = (pUVar15->fields).y;
      fVar7 = (pUVar15->fields).z;
      local_98._0_8_ = uVar5;
      pUVar13 = UnityEngine_GameObject__get_transform(gear,(MethodInfo *)0x0);
      if (pUVar13 != (UnityEngine_Transform_o *)0x0) {
        pUVar15 = UnityEngine_Transform__get_localScale
                            ((UnityEngine_Vector3_o *)local_88,pUVar13,(MethodInfo *)0x0);
        uVar4 = (pUVar15->fields).x;
        uVar6 = (pUVar15->fields).y;
        local_a8.x = (float)uVar4 * 0.5;
        local_a8.y = (float)uVar6 * 0.5;
        local_a8.z = (pUVar15->fields).z * 0.5;
        UnityEngine_Transform__set_localScale(pUVar13,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar12 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar12) {
          return;
        }
        pUVar13 = UnityEngine_GameObject__get_transform(gear,(MethodInfo *)0x0);
        if ((pUVar13 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar15 = UnityEngine_Transform__get_position
                                ((UnityEngine_Vector3_o *)local_88,pUVar13,(MethodInfo *)0x0),
           x != (UnityEngine_Object_o *)0x0)) {
          fVar1 = (pUVar15->fields).x;
          fVar2 = (pUVar15->fields).y;
          fVar3 = (pUVar15->fields).z;
          __this_00 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
          pUVar14 = UnityEngine_Renderer__get_localBounds
                              (local_88,(UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
          local_88[0].fields.m_Extents.fields.y = (pUVar14->fields).m_Extents.fields.y;
          local_88[0].fields.m_Extents.fields.z = (pUVar14->fields).m_Extents.fields.z;
          uVar10._0_4_ = (pUVar14->fields).m_Center.fields.x;
          uVar10._4_4_ = (pUVar14->fields).m_Center.fields.y;
          local_98.z = (pUVar14->fields).m_Center.fields.z;
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            fVar11 = local_98.y;
            local_98._0_8_ = uVar10;
            pUVar15 = UnityEngine_Transform__TransformPoint
                                ((UnityEngine_Vector3_o *)local_88,__this_00,
                                 (UnityEngine_Vector3_o *)&local_98,(MethodInfo *)0x0);
            local_a8.z = (fVar7 - (pUVar15->fields).z) + fVar3;
            local_a8.y = (fVar11 - (pUVar15->fields).y) + fVar2;
            local_a8.x = ((float)uVar5 - (pUVar15->fields).x) + fVar1;
            UnityEngine_Transform__set_position(pUVar13,(UnityEngine_Vector3_o *)&local_a8,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_18215ac68:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateWeapon
// il2cpp: void Characters_HumanSetup__CreateWeapon (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x1821582f0

void Characters_HumanSetup__CreateWeapon(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetupTextures_o *__this_00;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_StringSetting_o *pSVar3;
  Characters_HumanSetupMeshes_o *pCVar4;
  System_String_o *pSVar5;
  bool bVar6;
  int32_t type;
  System_String_o *pSVar7;
  UnityEngine_Material_o *value;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Renderer_o *pUVar9;
  MeleeWeaponTrail_o *pMVar10;
  
  if (Il2CppMethodInitialized_184346c9b == '\0') {
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
    Il2CppMethodInitialized_184346c9b = '\x01';
  }
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_blade_l,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_blade_r,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._textures;
  if (__this_00 != (Characters_HumanSetupTextures_o *)0x0) {
    pSVar7 = Characters_HumanSetupTextures__Get3dmgTexture(__this_00,(MethodInfo *)0x0);
    iVar1 = (__this->fields).Weapon;
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    value = Characters_HumanSetupMaterials__GetPartMaterial(pSVar7,iVar1 == 3,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).CustomSet;
    if ((pSVar2 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar3 = (pSVar2->fields).BladeEffect, pSVar3 != (Settings_StringSetting_o *)0x0)) {
      pSVar7 = (pSVar3->fields)._value;
      if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
      }
      type = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar7,(MethodInfo *)0x0);
      pCVar4 = (__this->fields)._meshes;
      if (pCVar4 != (Characters_HumanSetupMeshes_o *)0x0) {
        pSVar7 = Characters_HumanSetupMeshes__GetWeaponMesh(pCVar4,true,(MethodInfo *)0x0);
        bVar6 = System_String__op_Inequality
                          (pSVar7,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0
                          );
        if (bVar6) {
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar8 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                             (pSVar5,pSVar7,true,
                              (MethodInfo_795F00 *)
                              MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
          (__this->fields)._part_blade_l = pUVar8;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._part_blade_l,pUVar8);
          if (pSVar7 == (System_String_o *)0x0) goto label_182158826;
          bVar6 = System_String__Contains(pSVar7,"thunderspear",(MethodInfo *)0x0);
          pUVar8 = (__this->fields)._part_blade_l;
          if (bVar6) {
            Characters_HumanSetup__AttachToMount
                      (__this,pUVar8,(__this->fields)._mount_ts_l,false,(MethodInfo *)0x0);
          }
          else {
            Characters_HumanSetup__AttachToMount
                      (__this,pUVar8,(__this->fields)._mount_weapon_l,false,(MethodInfo *)0x0);
            pUVar8 = (__this->fields)._part_blade_l;
            if ((pUVar8 == (UnityEngine_GameObject_o *)0x0) ||
               (pUVar9 = UnityEngine_GameObject__GetComponentInChildren_object_
                                   (pUVar8,(MethodInfo_6F5040 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer),
               pUVar9 == (UnityEngine_Renderer_o *)0x0)) goto label_182158826;
            UnityEngine_Renderer__set_sharedMaterial(pUVar9,value,(MethodInfo *)0x0);
          }
          Characters_HumanSetup__ApplyCharacterEffectToPart
                    (__this,(__this->fields)._part_blade_l,type,false,(MethodInfo *)0x0);
          pUVar8 = (__this->fields)._part_blade_l;
          if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_182158826;
          pMVar10 = UnityEngine_GameObject__GetComponentInChildren_object_
                              (pUVar8,(MethodInfo_6F5040 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponentInChildren_MeleeWeaponTrail
                              );
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar6 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            pUVar8 = (__this->fields)._part_blade_l;
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_182158826;
            pMVar10 = UnityEngine_GameObject__GetComponentInChildren_object_
                                (pUVar8,(MethodInfo_6F5040 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponentInChildren_MeleeWeaponTrail
                                );
            (__this->fields).LeftTrail = pMVar10;
            Il2CppCodeGenWriteBarrier(&(__this->fields).LeftTrail,pMVar10);
            pMVar10 = (__this->fields).LeftTrail;
            if (pMVar10 == (MeleeWeaponTrail_o *)0x0) goto label_182158826;
            (pMVar10->fields)._emit = false;
            pMVar10 = (__this->fields).LeftTrail;
            if (pMVar10 == (MeleeWeaponTrail_o *)0x0) goto label_182158826;
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)pMVar10,false,(MethodInfo *)0x0);
          }
        }
        pCVar4 = (__this->fields)._meshes;
        if (pCVar4 != (Characters_HumanSetupMeshes_o *)0x0) {
          pSVar7 = Characters_HumanSetupMeshes__GetWeaponMesh(pCVar4,false,(MethodInfo *)0x0);
          bVar6 = System_String__op_Inequality
                            (pSVar7,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                             (MethodInfo *)0x0);
          if (!bVar6) {
            return;
          }
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar5 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar8 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                             (pSVar5,pSVar7,true,
                              (MethodInfo_795F00 *)
                              MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
          (__this->fields)._part_blade_r = pUVar8;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._part_blade_r,pUVar8);
          if (pSVar7 != (System_String_o *)0x0) {
            bVar6 = System_String__Contains(pSVar7,"thunderspear",(MethodInfo *)0x0);
            pUVar8 = (__this->fields)._part_blade_r;
            if (bVar6) {
              Characters_HumanSetup__AttachToMount
                        (__this,pUVar8,(__this->fields)._mount_ts_r,false,(MethodInfo *)0x0);
            }
            else {
              Characters_HumanSetup__AttachToMount
                        (__this,pUVar8,(__this->fields)._mount_weapon_r,false,(MethodInfo *)0x0);
              pUVar8 = (__this->fields)._part_blade_r;
              if ((pUVar8 == (UnityEngine_GameObject_o *)0x0) ||
                 (pUVar9 = UnityEngine_GameObject__GetComponentInChildren_object_
                                     (pUVar8,(MethodInfo_6F5040 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer
                                     ), pUVar9 == (UnityEngine_Renderer_o *)0x0)) goto label_182158826;
              UnityEngine_Renderer__set_sharedMaterial(pUVar9,value,(MethodInfo *)0x0);
            }
            Characters_HumanSetup__ApplyCharacterEffectToPart
                      (__this,(__this->fields)._part_blade_r,type,false,(MethodInfo *)0x0);
            pUVar8 = (__this->fields)._part_blade_r;
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              pMVar10 = UnityEngine_GameObject__GetComponentInChildren_object_
                                  (pUVar8,(MethodInfo_6F5040 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponentInChildren_MeleeWeaponTrail
                                  );
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar6 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pMVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if (!bVar6) {
                return;
              }
              pUVar8 = (__this->fields)._part_blade_r;
              if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
                pMVar10 = UnityEngine_GameObject__GetComponentInChildren_object_
                                    (pUVar8,(MethodInfo_6F5040 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponentInChildren_MeleeWeaponTrail
                                    );
                (__this->fields).RightTrail = pMVar10;
                Il2CppCodeGenWriteBarrier(&(__this->fields).RightTrail,pMVar10);
                pMVar10 = (__this->fields).RightTrail;
                if (pMVar10 != (MeleeWeaponTrail_o *)0x0) {
                  (pMVar10->fields)._emit = false;
                  pMVar10 = (__this->fields).RightTrail;
                  if (pMVar10 != (MeleeWeaponTrail_o *)0x0) {
                    UnityEngine_Behaviour__set_enabled
                              ((UnityEngine_Behaviour_o *)pMVar10,false,(MethodInfo *)0x0);
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
label_182158826:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateCape
// il2cpp: void Characters_HumanSetup__CreateCape (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182155c00
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182155e4b: mov rdi, qword ptr [rip + 0x1f7e1b6]  ; "Brand/Aottg_hero_brand_unbranded_cloak"
// asm:   0x182155e52: jmp 0x182155e69

void Characters_HumanSetup__CreateCape(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Characters_HumanSetupMeshes_o *__this_00;
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Characters_HumanSetupTextures_o *pCVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  UnityEngine_Material_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Renderer_o *__this_01;
  
  if (Il2CppMethodInitialized_184346c9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"_cloak");
    il2cpp_codegen_initialize_runtime_metadata(&"Brand/Aottg_hero_brand_unbranded_cloak");
    Il2CppMethodInitialized_184346c9c = '\x01';
  }
  if ((__this->fields).IsDeadBody == false) {
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    if (Il2CppMethodInitialized_184346c98 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
      Il2CppMethodInitialized_184346c98 = '\x01';
    }
    pUVar8 = (__this->fields)._part_cape;
    if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
    }
    ClothFactory__DisposeObject(pUVar8,(MethodInfo *)0x0);
    (__this->fields)._part_cape = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_cape,(void *)0x0);
    __this_00 = (__this->fields)._meshes;
    if (__this_00 == (Characters_HumanSetupMeshes_o *)0x0) goto label_182155edd;
    pSVar5 = Characters_HumanSetupMeshes__GetCapeMesh(__this_00,(MethodInfo *)0x0);
    bVar4 = System_String__op_Inequality
                      (pSVar5,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if (bVar4) {
      pSVar1 = (__this->fields).CustomSet;
      if ((pSVar1 == (Settings_HumanCustomSet_o *)0x0) ||
         (pSVar2 = (pSVar1->fields).Cape, pSVar2 == (Settings_IntSetting_o *)0x0)) goto label_182155edd;
      if ((pSVar2->fields)._value == 2) {
        pUVar8 = Characters_HumanSetup__GenerateCloth(__this,pSVar5,(MethodInfo *)0x0);
        (__this->fields)._part_cape = pUVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._part_cape,pUVar8);
        pCVar3 = (__this->fields)._textures;
        if (pCVar3 == (Characters_HumanSetupTextures_o *)0x0) {
label_182155edd:
          ThrowNullReferenceException();
        }
        pSVar6 = Characters_HumanSetupTextures__GetBrandTexture(pCVar3,(MethodInfo *)0x0);
        bVar4 = System_String__op_Equality
                          (pSVar6,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0
                          );
        pSVar5 = "Brand/Aottg_hero_brand_unbranded_cloak";
        if (!bVar4) {
          pSVar5 = System_String__Concat_1969e50(pSVar6,"_cloak",(MethodInfo *)0x0);
        }
        pUVar8 = (__this->fields)._part_cape;
        if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_182155edd;
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar8,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
        if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
        }
        pUVar7 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar5,false,(MethodInfo *)0x0);
        if (__this_01 == (UnityEngine_Renderer_o *)0x0) goto label_182155edd;
        UnityEngine_Renderer__set_sharedMaterial(__this_01,pUVar7,(MethodInfo *)0x0);
      }
      else {
        pCVar3 = (__this->fields)._textures;
        if (pCVar3 == (Characters_HumanSetupTextures_o *)0x0) goto label_182155edd;
        pUVar8 = (__this->fields)._mount_cloth;
        pSVar6 = Characters_HumanSetupTextures__GetBrandTexture(pCVar3,(MethodInfo *)0x0);
        if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
        }
        pUVar7 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar6,false,(MethodInfo *)0x0);
        if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
        }
        pUVar8 = ClothFactory__GetCape(pUVar8,pSVar5,pUVar7,(MethodInfo *)0x0);
        (__this->fields)._part_cape = pUVar8;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._part_cape,pUVar8);
      }
    }
    Characters_HumanSetup__RefreshHairMaterials(__this,(MethodInfo *)0x0);
    Characters_HumanSetup__UpdateCloakVisibility(__this,(MethodInfo *)0x0);
  }
  return;
}


// Characters.HumanSetup$$SetHood
// il2cpp: void Characters_HumanSetup__SetHood (Characters_HumanSetup_o* __this, bool hoodUp, const MethodInfo* method);
// 0x18215ada0

void Characters_HumanSetup__SetHood(Characters_HumanSetup_o *__this,bool hoodUp,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Settings_BoolSetting_o *__this_00;
  Characters_HumanSetupMeshes_o *__this_01;
  System_String_o *path;
  UnityEngine_GameObject_o *__this_02;
  bool bVar3;
  System_String_o *name;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_SkinnedMeshRenderer_o *__this_03;
  UnityEngine_SkinnedMeshRenderer_o *__this_04;
  UnityEngine_Mesh_o *value;
  UnityEngine_Bounds_o *pUVar5;
  UnityEngine_Object_o *pUVar6;
  UnityEngine_Bounds_o local_48;
  UnityEngine_Bounds_o local_28;
  
  if (Il2CppMethodInitialized_184346c9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_set_Value);
    Il2CppMethodInitialized_184346c9d = '\x01';
  }
  if (Il2CppMethodInitialized_184346c87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346c87 = '\x01';
  }
  if ((__this->fields).CustomSet == (Settings_HumanCustomSet_o *)0x0) {
    return;
  }
  pSVar1 = (__this->fields).CustomSet;
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
      if (((Settings_TypedSetting_bool__Fields *)&__this_00->fields)->_value == hoodUp) {
        return;
      }
      Settings_TypedSetting_bool___set_Value
                ((Settings_TypedSetting_bool__o *)__this_00,hoodUp,
                 (MethodInfo_E8F540 *)MethodInfo_Settings_TypedSetting_bool_set_Value);
      pUVar4 = (UnityEngine_Object_o *)(__this->fields)._part_cape;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar3) {
label_18215afe4:
        Characters_HumanSetup__RefreshHairMaterials(__this,(MethodInfo *)0x0);
        Characters_HumanSetup__UpdateCloakVisibility(__this,(MethodInfo *)0x0);
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
        pUVar4 = ApplicationManagers_ResourceManager__LoadAsset(path,name,true,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Object_o *)0x0) {
          pUVar6 = (UnityEngine_Object_o *)0x0;
          if (pUVar4->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
            pUVar6 = pUVar4;
          }
          if (pUVar6 == (UnityEngine_Object_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
          }
          pUVar6 = (UnityEngine_Object_o *)0x0;
          if (pUVar4->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
            pUVar6 = pUVar4;
          }
          __this_03 = UnityEngine_GameObject__GetComponent_object_
                                ((UnityEngine_GameObject_o *)pUVar6,
                                 (MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
          __this_02 = (__this->fields)._part_cape;
          if (((__this_02 != (UnityEngine_GameObject_o *)0x0) &&
              (__this_04 = UnityEngine_GameObject__GetComponent_object_
                                     (__this_02,
                                      (MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer),
              __this_03 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) &&
             (value = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_03,(MethodInfo *)0x0),
             __this_04 != (UnityEngine_SkinnedMeshRenderer_o *)0x0)) {
            UnityEngine_SkinnedMeshRenderer__set_sharedMesh(__this_04,value,(MethodInfo *)0x0);
            pUVar5 = UnityEngine_Renderer__get_localBounds
                               (&local_28,(UnityEngine_Renderer_o *)__this_03,(MethodInfo *)0x0);
            local_48.fields.m_Center.fields.x = (pUVar5->fields).m_Center.fields.x;
            local_48.fields.m_Center.fields.y = (pUVar5->fields).m_Center.fields.y;
            local_48.fields._8_8_ = *(undefined8 *)&(pUVar5->fields).m_Center.fields.z;
            local_48.fields.m_Extents.fields.y = (pUVar5->fields).m_Extents.fields.y;
            local_48.fields.m_Extents.fields.z = (pUVar5->fields).m_Extents.fields.z;
            UnityEngine_Renderer__set_localBounds
                      ((UnityEngine_Renderer_o *)__this_04,&local_48,(MethodInfo *)0x0);
            goto label_18215afe4;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$UpdateCloakVisibility
// il2cpp: void Characters_HumanSetup__UpdateCloakVisibility (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x18215b050

void Characters_HumanSetup__UpdateCloakVisibility(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_184346c9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346c9e = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._part_hat;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._part_hat;
    bVar3 = Characters_HumanSetup__get_IsHooded(__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_18215b12a;
    UnityEngine_GameObject__SetActive(pUVar2,!bVar3,(MethodInfo *)0x0);
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._part_head_decor;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._part_head_decor;
    bVar3 = Characters_HumanSetup__get_IsHooded(__this,(MethodInfo *)0x0);
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) {
label_18215b12a:
      ThrowNullReferenceException();
    }
    UnityEngine_GameObject__SetActive(pUVar2,!bVar3,(MethodInfo *)0x0);
  }
  return;
}


// Characters.HumanSetup$$CreateHair
// il2cpp: void Characters_HumanSetup__CreateHair (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182156560
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18215682f: mov edi, r12d
// asm:   0x182156832: mov ecx, r12d

void Characters_HumanSetup__CreateHair(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int length;
  System_Collections_Generic_List_Renderer__o *pSVar2;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_StringSetting_o *pSVar4;
  Characters_HumanSetupMeshes_o *pCVar5;
  Characters_HumanSetupTextures_o *pCVar6;
  UnityEngine_Object_o *__this_00;
  Settings_ColorSetting_o *pSVar7;
  Utility_Color255_o *pUVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  bool bVar11;
  int32_t type;
  System_String_o *pSVar12;
  UnityEngine_GameObject_o *pUVar13;
  System_Object_array *pSVar14;
  UnityEngine_Material_o *pUVar15;
  UnityEngine_Color_o *pUVar16;
  System_String_o *pSVar17;
  uint uVar18;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_o local_38 [2];
  
  if (Il2CppMethodInitialized_184346c9f == '\0') {
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
    Il2CppMethodInitialized_184346c9f = '\x01';
  }
  pSVar2 = (__this->fields)._hairRenderers;
  if (pSVar2 != (System_Collections_Generic_List_Renderer__o *)0x0) {
    length = (pSVar2->fields)._size;
    uVar18 = 0;
    piVar1 = &(pSVar2->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar2->fields)._size = 0;
    if (0 < length) {
      System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    }
    Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_hair,(MethodInfo *)0x0);
    if ((__this->fields).IsDeadBody == false) {
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      if (Il2CppMethodInitialized_184346c98 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
        Il2CppMethodInitialized_184346c98 = '\x01';
      }
      pUVar13 = (__this->fields)._part_hair_1;
      if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
      }
      ClothFactory__DisposeObject(pUVar13,(MethodInfo *)0x0);
      (__this->fields)._part_hair_1 = (UnityEngine_GameObject_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._part_hair_1,(void *)0x0);
    }
    pSVar3 = (__this->fields).CustomSet;
    if ((pSVar3 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar4 = (pSVar3->fields).HairEffect, pSVar4 != (Settings_StringSetting_o *)0x0)) {
      pSVar12 = (pSVar4->fields)._value;
      if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
      }
      type = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar12,(MethodInfo *)0x0);
      pCVar5 = (__this->fields)._meshes;
      if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
        pSVar12 = Characters_HumanSetupMeshes__GetHairMesh(pCVar5,(MethodInfo *)0x0);
        bVar11 = System_String__op_Inequality
                           (pSVar12,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                            (MethodInfo *)0x0);
        if (bVar11) {
          if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
          }
          pSVar17 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar13 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                              (pSVar17,pSVar12,true,
                               (MethodInfo_795F00 *)
                               MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
          (__this->fields)._part_hair = pUVar13;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._part_hair,pUVar13);
          Characters_HumanSetup__AttachToMount
                    (__this,(__this->fields)._part_hair,(__this->fields)._part_head,false,(MethodInfo *)0x0);
          pUVar13 = (__this->fields)._part_hair;
          if ((pUVar13 == (UnityEngine_GameObject_o *)0x0) ||
             (pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                                  (pUVar13,(MethodInfo_6F5810 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer)
             , pSVar14 == (System_Object_array *)0x0)) goto label_182156b3c;
          for (; (int)uVar18 < (int)pSVar14->max_length; uVar18 = uVar18 + 1) {
            if ((uint)pSVar14->max_length <= uVar18) {
              ThrowIndexOutOfRangeException();
            }
            pCVar6 = (__this->fields)._textures;
            if (pCVar6 == (Characters_HumanSetupTextures_o *)0x0) goto label_182156b3c;
            __this_00 = (UnityEngine_Object_o *)pSVar14->m_Items[(int)uVar18];
            pSVar12 = Characters_HumanSetupTextures__GetHairTexture(pCVar6,(MethodInfo *)0x0);
            if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
            }
            pUVar15 = Characters_HumanSetupMaterials__GetHairMaterial(pSVar12,(MethodInfo *)0x0);
            if (__this_00 == (UnityEngine_Object_o *)0x0) goto label_182156b3c;
            UnityEngine_Renderer__set_sharedMaterial
                      ((UnityEngine_Renderer_o *)__this_00,pUVar15,(MethodInfo *)0x0);
            pSVar12 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
            if (pSVar12 == (System_String_o *)0x0) goto label_182156b3c;
            bVar11 = System_String__Contains(pSVar12,"IgnoreColor",(MethodInfo *)0x0);
            if (!bVar11) {
              pUVar15 = Characters_HumanSetup__OwnInstance
                                  (__this,(UnityEngine_Renderer_o *)__this_00,(MethodInfo *)0x0);
              pSVar3 = (__this->fields).CustomSet;
              if ((((pSVar3 == (Settings_HumanCustomSet_o *)0x0) ||
                   (pSVar7 = (pSVar3->fields).HairColor, pSVar7 == (Settings_ColorSetting_o *)0x0)) ||
                  (pUVar8 = (pSVar7->fields)._value, pUVar8 == (Utility_Color255_o *)0x0)) ||
                 (pUVar16 = Utility_Color255__ToColor(local_38,pUVar8,(MethodInfo *)0x0),
                 pUVar15 == (UnityEngine_Material_o *)0x0)) goto label_182156b3c;
              local_48.r = (pUVar16->fields).r;
              local_48.g = (pUVar16->fields).g;
              local_48.b = (pUVar16->fields).b;
              local_48.a = (pUVar16->fields).a;
              UnityEngine_Material__set_color(pUVar15,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
            }
          }
          Characters_HumanSetup__ApplyCharacterEffectToPart
                    (__this,(__this->fields)._part_hair,type,true,(MethodInfo *)0x0);
          pUVar13 = (__this->fields)._part_hair;
          if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto label_182156b3c;
          pSVar2 = (__this->fields)._hairRenderers;
          pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                              (pUVar13,(MethodInfo_6F5810 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
          if (pSVar2 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_182156b3c;
          System_Collections_Generic_List_object___AddRange
                    ((System_Collections_Generic_List_object__o *)pSVar2,
                     (System_Collections_Generic_IEnumerable_T__o *)pSVar14,
                     (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_Renderer_AddRange);
        }
        pCVar5 = (__this->fields)._meshes;
        if (pCVar5 != (Characters_HumanSetupMeshes_o *)0x0) {
          pSVar12 = Characters_HumanSetupMeshes__GetHairClothMesh(pCVar5,(MethodInfo *)0x0);
          bVar11 = System_String__op_Inequality
                             (pSVar12,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                              (MethodInfo *)0x0);
          if ((!bVar11) || ((__this->fields).IsDeadBody != false)) {
label_182156b03:
            Characters_HumanSetup__RefreshHairMaterials(__this,(MethodInfo *)0x0);
            return;
          }
          pCVar6 = (__this->fields)._textures;
          if (pCVar6 != (Characters_HumanSetupTextures_o *)0x0) {
            pSVar17 = Characters_HumanSetupTextures__GetHairTexture(pCVar6,(MethodInfo *)0x0);
            if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
            }
            pUVar15 = Characters_HumanSetupMaterials__GetHairMaterial(pSVar17,(MethodInfo *)0x0);
            pSVar3 = (__this->fields).CustomSet;
            if (((pSVar3 != (Settings_HumanCustomSet_o *)0x0) &&
                (pSVar7 = (pSVar3->fields).HairColor, pSVar7 != (Settings_ColorSetting_o *)0x0)) &&
               (pUVar8 = (pSVar7->fields)._value, pUVar8 != (Utility_Color255_o *)0x0)) {
              pUVar13 = (__this->fields)._mount_cloth;
              pUVar16 = Utility_Color255__ToColor(local_38,pUVar8,(MethodInfo *)0x0);
              uVar9._0_4_ = (pUVar16->fields).r;
              uVar9._4_4_ = (pUVar16->fields).g;
              uVar10._0_4_ = (pUVar16->fields).b;
              uVar10._4_4_ = (pUVar16->fields).a;
              if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
              }
              local_48._0_8_ = uVar9;
              local_48._8_8_ = uVar10;
              pUVar13 = ClothFactory__GetHair
                                  (pUVar13,pSVar12,pUVar15,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0)
              ;
              (__this->fields)._part_hair_1 = pUVar13;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._part_hair_1,pUVar13);
              Characters_HumanSetup__ApplyCharacterEffectToPart
                        (__this,(__this->fields)._part_hair_1,type,true,(MethodInfo *)0x0);
              pUVar13 = (__this->fields)._part_hair_1;
              if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
                pSVar2 = (__this->fields)._hairRenderers;
                pSVar14 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                                    (pUVar13,(MethodInfo_6F5810 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer
                                    );
                if (pSVar2 != (System_Collections_Generic_List_Renderer__o *)0x0) {
                  System_Collections_Generic_List_object___AddRange
                            ((System_Collections_Generic_List_object__o *)pSVar2,
                             (System_Collections_Generic_IEnumerable_T__o *)pSVar14,
                             (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_Renderer_AddRange
                            );
                  goto label_182156b03;
                }
              }
            }
          }
        }
      }
    }
  }
label_182156b3c:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CanUseCharacterEffects
// il2cpp: bool Characters_HumanSetup__CanUseCharacterEffects (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182154ae0

bool Characters_HumanSetup__CanUseCharacterEffects(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  System_String_o *pSVar2;
  Settings_HumanCustomSet_o *pSVar3;
  bool bVar4;
  int32_t iVar5;
  Photon_Pun_PhotonView_o *x;
  Photon_Realtime_Player_o *player;
  
  if (Il2CppMethodInitialized_184346ca0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectPresets);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_PhotonView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_SceneLoader);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346ca0 = '\x01';
  }
  if ((__this->fields).CustomSet == (Settings_HumanCustomSet_o *)0x0) {
    return false;
  }
  pSVar1 = (((__this->fields).CustomSet)->fields).HairEffect;
  if (pSVar1 == (Settings_StringSetting_o *)0x0) {
label_182154c7e:
    ThrowNullReferenceException();
  }
  pSVar2 = (pSVar1->fields)._value;
  if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
  }
  iVar5 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar2,(MethodInfo *)0x0);
  if (iVar5 == 0) {
    pSVar3 = (__this->fields).CustomSet;
    if ((pSVar3 == (Settings_HumanCustomSet_o *)0x0) ||
       (pSVar1 = (pSVar3->fields).BladeEffect, pSVar1 == (Settings_StringSetting_o *)0x0)) goto label_182154c7e;
    pSVar2 = (pSVar1->fields)._value;
    if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
    }
    iVar5 = PatreonEffects_CharacterEffectPresets__ParseOrDefault(pSVar2,(MethodInfo *)0x0);
    if (iVar5 == 0) {
      return false;
    }
  }
  if (TypeInfo_ApplicationManagers_SceneLoader->static_fields->SceneName == 4) {
label_182154c41:
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    bVar4 = PatreonEffects_PatreonHelper__HasCharacterEffectAccess(player,(MethodInfo *)0x0);
    return bVar4;
  }
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_PhotonView);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (x == (Photon_Pun_PhotonView_o *)0x0) goto label_182154c7e;
    if ((x->fields)._IsMine_k__BackingField != false) goto label_182154c41;
  }
  return true;
}


// Characters.HumanSetup$$ApplyCharacterEffectToPart
// il2cpp: void Characters_HumanSetup__ApplyCharacterEffectToPart (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* part, int32_t type, bool isHair, const MethodInfo* method);
// 0x1821531d0
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821535e7: movaps xmm8, xmm11
// asm:   0x1821535eb: jmp 0x1821535f7
// asm:   0x1821538dd: jmp 0x182153938
// asm:   0x182153f49: mov rdx, qword ptr [rip + 0x1f1a9c8]  ; "_StyleStrength"
// asm:   0x182153f50: movaps xmm2, xmm12
// asm:   0x182153f54: jmp 0x1821540c2
// asm:   0x1821540b7: mov rdx, qword ptr [rip + 0x1f933d2]  ; "_EdgeSpark"
// asm:   0x1821540be: movaps xmm2, xmm13
// asm:   0x182154122: movaps xmm14, xmmword ptr [rsp + 0x150]
// asm:   0x18215412b: movaps xmm13, xmmword ptr [rsp + 0x160]
// asm:   0x182154134: movaps xmm12, xmmword ptr [rsp + 0x170]
// asm:   0x18215413d: movaps xmm11, xmmword ptr [rsp + 0x180]
// asm:   0x182154146: movaps xmm10, xmmword ptr [rsp + 0x190]
// asm:   0x18215414f: movaps xmm9, xmmword ptr [rsp + 0x1a0]
// asm:   0x182154158: movaps xmm8, xmmword ptr [rsp + 0x1b0]
// asm:   0x182154161: movaps xmm7, xmmword ptr [rsp + 0x1c0]
// asm:   0x182154169: movaps xmm6, xmmword ptr [rsp + 0x1d0]
// asm:   0x182154171: mov r15, qword ptr [rsp + 0x1e0]
// asm:   0x182154179: mov r14, qword ptr [rsp + 0x1e8]
// asm:   0x182154181: mov r13, qword ptr [rsp + 0x230]
// asm:   0x182154189: movaps xmm15, xmmword ptr [rsp + 0x140]

void Characters_HumanSetup__ApplyCharacterEffectToPart
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *part,int32_t type,bool isHair,
               MethodInfo *method)

{
  float value;
  float value_00;
  float fVar1;
  float fVar2;
  int iVar3;
  Settings_HumanCustomSet_o *pSVar4;
  Utility_Color255_o *pUVar5;
  UnityEngine_Object_o *x;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  bool bVar8;
  PatreonEffects_CharacterEffectPreset_o *pPVar9;
  UnityEngine_Color_o *pUVar10;
  Settings_ColorSetting_o *pSVar11;
  System_Object_array *pSVar12;
  UnityEngine_Material_o *__this_00;
  UnityEngine_Object_o *x_00;
  UnityEngine_Material_o *x_01;
  UnityEngine_Material_o *pUVar13;
  UnityEngine_Texture_o *value_01;
  UnityEngine_Vector2_o UVar14;
  System_String_o *pSVar15;
  uint uVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  UnityEngine_Material_o *local_1f8;
  float local_1f0;
  float local_1ec;
  float local_1e8;
  float local_1e4;
  float local_1e0;
  float local_1dc;
  float local_1d8;
  float local_1d4;
  float local_1d0;
  float local_1cc;
  float local_1c8;
  float local_1c4;
  UnityEngine_Color_Fields local_1b8;
  float local_1a8;
  float local_1a4;
  float local_1a0;
  float local_19c;
  float local_198;
  float local_194;
  float local_190;
  float local_18c;
  int32_t local_188;
  UnityEngine_Vector4_o local_178;
  UnityEngine_Vector4_o local_168;
  UnityEngine_Vector4_o local_158;
  UnityEngine_Color_Fields local_148;
  UnityEngine_Color_o local_138;
  UnityEngine_Color_o local_128;
  PatreonEffects_CharacterEffectPreset_o local_118 [3];
  
  if (Il2CppMethodInitialized_184346ca1 == '\0') {
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
    Il2CppMethodInitialized_184346ca1 = '\x01';
  }
  local_1f8 = (UnityEngine_Material_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)part,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((bVar8) || (type == 0)) ||
     (bVar8 = Characters_HumanSetup__CanUseCharacterEffects(__this,(MethodInfo *)0x0), !bVar8)) {
    return;
  }
  if ((TypeInfo_PatreonEffects_CharacterEffectPresets->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_CharacterEffectPresets);
  }
  pPVar9 = PatreonEffects_CharacterEffectPresets__GetPreset(local_118,type,(MethodInfo *)0x0);
  pSVar4 = (__this->fields).CustomSet;
  if (((pSVar4 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar11 = (pSVar4->fields).HairColor, pSVar11 != (Settings_ColorSetting_o *)0x0)) &&
     (pUVar5 = (pSVar11->fields)._value, pUVar5 != (Utility_Color255_o *)0x0)) {
    local_1dc = (pPVar9->fields).GlowIntensity;
    local_188 = (pPVar9->fields).StyleMode;
    value = (pPVar9->fields).EdgeSpark;
    value_00 = (pPVar9->fields).StyleStrength;
    local_1c4 = (pPVar9->fields).OutlineThickness;
    local_1a0 = (pPVar9->fields).OutlinePower;
    local_19c = (pPVar9->fields).PulseSpeed;
    local_198 = (pPVar9->fields).PulseAmount;
    local_194 = (pPVar9->fields).FlowSpeed;
    local_190 = (pPVar9->fields).FlowStrength;
    local_1d4 = (pPVar9->fields).TexturePreserve;
    local_1d8 = (pPVar9->fields).EmissionFromTexture;
    local_1cc = (pPVar9->fields).DetailScale;
    local_1c8 = (pPVar9->fields).DetailSpeed;
    local_18c = (pPVar9->fields).SecondaryScroll;
    pUVar10 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_148,pUVar5,(MethodInfo *)0x0);
    pSVar4 = (__this->fields).CustomSet;
    if (pSVar4 != (Settings_HumanCustomSet_o *)0x0) {
      local_148.r = (pUVar10->fields).r;
      local_148.g = (pUVar10->fields).g;
      local_148.b = (pUVar10->fields).b;
      local_148.a = (pUVar10->fields).a;
      if (isHair) {
        pSVar11 = (pSVar4->fields).HairEffectColor;
      }
      else {
        pSVar11 = (pSVar4->fields).BladeEffectColor;
      }
      if ((pSVar11 != (Settings_ColorSetting_o *)0x0) &&
         (pUVar5 = (pSVar11->fields)._value, pUVar5 != (Utility_Color255_o *)0x0)) {
        pUVar10 = Utility_Color255__ToColor((UnityEngine_Color_o *)&local_1b8,pUVar5,(MethodInfo *)0x0);
        local_1f0 = (pUVar10->fields).b;
        fVar1 = (pUVar10->fields).g;
        fVar2 = (pUVar10->fields).a;
        local_1d0 = (pUVar10->fields).r;
        if (fVar2 < 0.0) {
          fVar18 = 0.0;
        }
        else {
          fVar18 = fVar2;
          if (1.0 < fVar2) {
            fVar18 = 1.0;
          }
        }
        if (isHair) {
          local_1e0 = 0.2;
        }
        else {
          local_1e0 = 0.35;
        }
        if (local_1e0 < 0.0) {
          local_1e0 = 0.0;
        }
        else if (1.0 < local_1e0) {
          local_1e0 = 1.0;
        }
        local_1ec = (1.0 - local_1d0) * local_1e0;
        local_1e8 = (1.0 - fVar1) * local_1e0;
        local_1e4 = (1.0 - local_1f0) * local_1e0;
        local_1e0 = (1.0 - fVar2) * local_1e0;
        if (isHair) {
          fVar17 = 0.45;
        }
        else {
          fVar17 = 0.6;
        }
        if (fVar17 < 0.0) {
          fVar17 = 0.0;
        }
        else if (1.0 < fVar17) {
          fVar17 = 1.0;
        }
        fVar20 = 1.0 - local_1d0;
        fVar19 = 1.0 - local_1f0;
        if ((part != (UnityEngine_GameObject_o *)0x0) &&
           (pSVar12 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                                (part,(MethodInfo_6F5810 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer),
           pSVar12 != (System_Object_array *)0x0)) {
          local_1a4 = (1.0 - fVar2) * fVar17 + fVar2;
          uVar16 = 0;
          local_1ec = local_1ec + local_1d0;
          fVar20 = fVar20 * fVar17 + local_1d0;
          local_1a8 = fVar19 * fVar17 + local_1f0;
          local_1e8 = local_1e8 + fVar1;
          local_1e4 = local_1e4 + local_1f0;
          local_1e0 = local_1e0 + fVar2;
          do {
            if ((int)pSVar12->max_length <= (int)uVar16) {
              return;
            }
            if ((uint)pSVar12->max_length <= uVar16) {
              ThrowIndexOutOfRangeException();
            }
            x = (UnityEngine_Object_o *)pSVar12->m_Items[(int)uVar16];
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar8) {
              if (x == (UnityEngine_Object_o *)0x0) break;
              __this_00 = UnityEngine_Renderer__get_sharedMaterial
                                    ((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
              x_00 = (UnityEngine_Object_o *)UnityEngine_Shader__Find("Custom/CharacterEffectShader",(MethodInfo *)0x0)
              ;
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar8 = UnityEngine_Object__op_Equality
                                ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if (!bVar8) {
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar8 = UnityEngine_Object__op_Equality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (!bVar8) {
                  local_1f8 = (UnityEngine_Material_o *)0x0;
                  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                           (__this->fields)._effectMaterialCache;
                  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
                  bVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                    (pSVar6,(Il2CppObject *)x,(Il2CppObject **)&local_1f8,
                                     (MethodInfo_14769C0 *)
                                     MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_TryGetValue
                                    );
                  pUVar13 = local_1f8;
                  if (bVar8) {
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar8 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,
                                       (MethodInfo *)0x0);
                    if (!bVar8) goto label_1821538df;
                    x_01 = UnityEngine_Renderer__get_sharedMaterial
                                     ((UnityEngine_Renderer_o *)x,(MethodInfo *)0x0);
                    pUVar13 = local_1f8;
                    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                    }
                    bVar8 = UnityEngine_Object__op_Inequality
                                      ((UnityEngine_Object_o *)x_01,(UnityEngine_Object_o *)pUVar13,
                                       (MethodInfo *)0x0);
                    if (bVar8) goto label_182153938;
                  }
                  else {
label_1821538df:
                    pUVar13 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Material);
                    UnityEngine_Material___ctor(pUVar13,(UnityEngine_Shader_o *)x_00,(MethodInfo *)0x0);
                    local_1f8 = Characters_HumanSetup__Own(__this,pUVar13,(MethodInfo *)0x0);
                    pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)
                             (__this->fields)._effectMaterialCache;
                    if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) break;
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              (pSVar6,(Il2CppObject *)x,(Il2CppObject *)local_1f8,
                               (MethodInfo_147A7F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_set_Item);
label_182153938:
                    UnityEngine_Renderer__set_sharedMaterial
                              ((UnityEngine_Renderer_o *)x,local_1f8,(MethodInfo *)0x0);
                  }
                  if (__this_00 == (UnityEngine_Material_o *)0x0) break;
                  value_01 = UnityEngine_Material__get_mainTexture(__this_00,(MethodInfo *)0x0);
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar8 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)value_01,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (bVar8) {
                    if (local_1f8 == (UnityEngine_Material_o *)0x0) break;
                    UnityEngine_Material__SetTexture
                              (local_1f8,"_MainTex",value_01,(MethodInfo *)0x0);
                    pUVar13 = local_1f8;
                    UVar14 = UnityEngine_Material__get_mainTextureScale(__this_00,(MethodInfo *)0x0);
                    if (pUVar13 == (UnityEngine_Material_o *)0x0) break;
                    UnityEngine_Material__SetTextureScale
                              (pUVar13,"_MainTex",UVar14,(MethodInfo *)0x0);
                    pUVar13 = local_1f8;
                    UVar14 = UnityEngine_Material__get_mainTextureOffset(__this_00,(MethodInfo *)0x0);
                    if (pUVar13 == (UnityEngine_Material_o *)0x0) break;
                    UnityEngine_Material__SetTextureOffset
                              (pUVar13,"_MainTex",UVar14,(MethodInfo *)0x0);
                  }
                  if (isHair) {
                    if (local_1f8 == (UnityEngine_Material_o *)0x0) break;
                    local_1b8.r = local_148.r;
                    local_1b8.g = local_148.g;
                    local_1b8.b = local_148.b;
                    local_1b8.a = local_148.a;
                    pUVar13 = local_1f8;
                  }
                  else {
                    bVar8 = UnityEngine_Material__HasProperty_2ee2c00
                                      (__this_00,"_Color",(MethodInfo *)0x0);
                    if (bVar8) {
                      pUVar10 = &local_128;
                      pSVar15 = "_Color";
                    }
                    else {
                      bVar8 = UnityEngine_Material__HasProperty_2ee2c00
                                        (__this_00,"_BaseColor",(MethodInfo *)0x0);
                      if (!bVar8) {
                        if (local_1f8 != (UnityEngine_Material_o *)0x0) {
                          local_1b8.r = 1.0;
                          local_1b8.g = 1.0;
                          local_1b8.b = 1.0;
                          local_1b8.a = 1.0;
                          pUVar13 = local_1f8;
                          goto label_182153aa6;
                        }
                        break;
                      }
                      pUVar10 = &local_138;
                      pSVar15 = "_BaseColor";
                    }
                    pUVar13 = local_1f8;
                    pUVar10 = UnityEngine_Material__GetColor(pUVar10,__this_00,pSVar15,(MethodInfo *)0x0);
                    if (pUVar13 == (UnityEngine_Material_o *)0x0) break;
                    local_1b8.r = (pUVar10->fields).r;
                    local_1b8.g = (pUVar10->fields).g;
                    local_1b8.b = (pUVar10->fields).b;
                    local_1b8.a = (pUVar10->fields).a;
                  }
label_182153aa6:
                  UnityEngine_Material__SetVector
                            (pUVar13,"_Color",(UnityEngine_Vector4_o *)&local_1b8,
                             (MethodInfo *)0x0);
                  if (local_1f8 == (UnityEngine_Material_o *)0x0) break;
                  local_178.fields.x = local_1d0;
                  local_178.fields.z = local_1f0;
                  local_178.fields.y = fVar1;
                  local_178.fields.w = fVar2;
                  UnityEngine_Material__SetVector
                            (local_1f8,"_NeonColor",&local_178,(MethodInfo *)0x0);
                  if (local_1f8 == (UnityEngine_Material_o *)0x0) break;
                  local_168.fields.x = local_1ec;
                  local_168.fields.y = local_1e8;
                  local_168.fields.z = local_1e4;
                  local_168.fields.w = local_1e0;
                  UnityEngine_Material__SetVector
                            (local_1f8,"_GlowColor",&local_168,(MethodInfo *)0x0);
                  if (local_1f8 == (UnityEngine_Material_o *)0x0) break;
                  local_158.fields.z = local_1a8;
                  local_158.fields.w = local_1a4;
                  local_158.fields.x = fVar20;
                  local_158.fields.y = (1.0 - fVar1) * fVar17 + fVar1;
                  UnityEngine_Material__SetVector
                            (local_1f8,"_OutlineColor",&local_158,(MethodInfo *)0x0);
                  if ((((((((local_1f8 == (UnityEngine_Material_o *)0x0) ||
                           (UnityEngine_Material__SetFloat
                                      (local_1f8,"_GlowIntensity",local_1dc,(MethodInfo *)0x0),
                           local_1f8 == (UnityEngine_Material_o *)0x0)) ||
                          (UnityEngine_Material__SetFloat
                                     (local_1f8,"_OutlineThickness",local_1c4,(MethodInfo *)0x0),
                          local_1f8 == (UnityEngine_Material_o *)0x0)) ||
                         ((UnityEngine_Material__SetFloat
                                     (local_1f8,"_OutlinePower",local_1a0,(MethodInfo *)0x0),
                          local_1f8 == (UnityEngine_Material_o *)0x0 ||
                          (UnityEngine_Material__SetFloat
                                     (local_1f8,"_PulseSpeed",local_19c,(MethodInfo *)0x0),
                          local_1f8 == (UnityEngine_Material_o *)0x0)))) ||
                        (UnityEngine_Material__SetFloat
                                   (local_1f8,"_PulseAmount",local_198,(MethodInfo *)0x0),
                        local_1f8 == (UnityEngine_Material_o *)0x0)) ||
                       (((UnityEngine_Material__SetFloat
                                    (local_1f8,"_FlowSpeed",local_194,(MethodInfo *)0x0),
                         local_1f8 == (UnityEngine_Material_o *)0x0 ||
                         (UnityEngine_Material__SetFloat
                                    (local_1f8,"_FlowStrength",local_190,(MethodInfo *)0x0),
                         local_1f8 == (UnityEngine_Material_o *)0x0)) ||
                        ((UnityEngine_Material__SetFloat
                                    (local_1f8,"_TexturePreserve",local_1d4,(MethodInfo *)0x0),
                         local_1f8 == (UnityEngine_Material_o *)0x0 ||
                         (((UnityEngine_Material__SetFloat
                                      (local_1f8,"_EmissionFromTexture",local_1d8,(MethodInfo *)0x0),
                           local_1f8 == (UnityEngine_Material_o *)0x0 ||
                           (UnityEngine_Material__SetFloat
                                      (local_1f8,"_DetailScale",local_1cc,(MethodInfo *)0x0),
                           local_1f8 == (UnityEngine_Material_o *)0x0)) ||
                          (UnityEngine_Material__SetFloat
                                     (local_1f8,"_DetailSpeed",local_1c8,(MethodInfo *)0x0),
                          local_1f8 == (UnityEngine_Material_o *)0x0)))))))) ||
                      ((UnityEngine_Material__SetFloat
                                  (local_1f8,"_SecondaryScroll",local_18c,(MethodInfo *)0x0),
                       local_1f8 == (UnityEngine_Material_o *)0x0 ||
                       (UnityEngine_Material__SetFloat
                                  (local_1f8,"_EdgeSpark",value,(MethodInfo *)0x0),
                       local_1f8 == (UnityEngine_Material_o *)0x0)))) ||
                     (UnityEngine_Material__SetFloat
                                (local_1f8,"_StyleMode",(float)local_188,(MethodInfo *)0x0),
                     local_1f8 == (UnityEngine_Material_o *)0x0)) break;
                  UnityEngine_Material__SetFloat(local_1f8,"_StyleStrength",value_00,(MethodInfo *)0x0);
                  if (isHair) {
                    fVar19 = 1.0;
                  }
                  else {
                    fVar19 = 0.0;
                  }
                  if (local_1f8 == (UnityEngine_Material_o *)0x0) break;
                  UnityEngine_Material__SetFloat(local_1f8,"_IsHair",fVar19,(MethodInfo *)0x0);
                  if (isHair) {
                    fVar19 = 0.0;
                  }
                  else {
                    fVar19 = 2.0;
                  }
                  if (local_1f8 == (UnityEngine_Material_o *)0x0) break;
                  UnityEngine_Material__SetFloat(local_1f8,"_CullMode",fVar19,(MethodInfo *)0x0);
                  if (TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings ==
                      (Settings_GraphicsSettings_o *)0x0) {
label_182153e31:
                    fVar19 = 2.0;
                  }
                  else {
                    pSVar7 = (TypeInfo_Settings_SettingsManager->static_fields->GraphicsSettings->fields).
                             PresetQuality;
                    if (pSVar7 == (Settings_IntSetting_o *)0x0) break;
                    iVar3 = (pSVar7->fields)._value;
                    if (iVar3 < 2) {
                      fVar19 = 0.0;
                    }
                    else {
                      if (2 < iVar3) goto label_182153e31;
                      fVar19 = 1.0;
                    }
                  }
                  if (local_1f8 == (UnityEngine_Material_o *)0x0) break;
                  UnityEngine_Material__SetFloat(local_1f8,"_QualityLevel",fVar19,(MethodInfo *)0x0);
                  if (isHair) {
                    if (local_1f8 == (UnityEngine_Material_o *)0x0) break;
                    UnityEngine_Material__SetFloat
                              (local_1f8,"_GlowIntensity",local_1dc * 0.45 * fVar18,(MethodInfo *)0x0);
                    fVar19 = local_1d8 + 0.22;
                    if (fVar19 < 0.0) {
                      fVar19 = 0.0;
                    }
                    else if (1.0 < fVar19) {
                      fVar19 = 1.0;
                    }
                    if (local_1f8 == (UnityEngine_Material_o *)0x0) break;
                    UnityEngine_Material__SetFloat(local_1f8,"_EmissionFromTexture",fVar19,(MethodInfo *)0x0);
                    fVar19 = local_1d4 + 0.14;
                    if (fVar19 < 0.5) {
                      fVar19 = 0.5;
                    }
                    else if (1.5 < fVar19) {
                      fVar19 = 1.5;
                    }
                    if (((local_1f8 == (UnityEngine_Material_o *)0x0) ||
                        (UnityEngine_Material__SetFloat
                                   (local_1f8,"_TexturePreserve",fVar19,(MethodInfo *)0x0),
                        local_1f8 == (UnityEngine_Material_o *)0x0)) ||
                       ((UnityEngine_Material__SetFloat
                                   (local_1f8,"_DetailScale",local_1cc * 1.15,(MethodInfo *)0x0),
                        local_1f8 == (UnityEngine_Material_o *)0x0 ||
                        ((UnityEngine_Material__SetFloat
                                    (local_1f8,"_DetailSpeed",local_1c8 * 1.1,(MethodInfo *)0x0),
                         local_1f8 == (UnityEngine_Material_o *)0x0 ||
                         (UnityEngine_Material__SetFloat
                                    (local_1f8,"_OutlineThickness",local_1c4 * 0.9,(MethodInfo *)0x0),
                         local_1f8 == (UnityEngine_Material_o *)0x0)))))) break;
                    UnityEngine_Material__SetFloat
                              (local_1f8,"_StyleStrength",value_00 * fVar18,(MethodInfo *)0x0);
                    fVar19 = value;
                    pSVar15 = "_EdgeSpark";
                  }
                  else {
                    fVar19 = local_1d8 * 0.7;
                    if (fVar19 < 0.0) {
                      fVar19 = 0.0;
                    }
                    else if (1.0 < fVar19) {
                      fVar19 = 1.0;
                    }
                    if (local_1f8 == (UnityEngine_Material_o *)0x0) break;
                    UnityEngine_Material__SetFloat(local_1f8,"_EmissionFromTexture",fVar19,(MethodInfo *)0x0);
                    fVar19 = local_1d4 * 0.95;
                    if (fVar19 < 0.5) {
                      fVar19 = 0.5;
                    }
                    else if (1.5 < fVar19) {
                      fVar19 = 1.5;
                    }
                    if (((local_1f8 == (UnityEngine_Material_o *)0x0) ||
                        (UnityEngine_Material__SetFloat
                                   (local_1f8,"_TexturePreserve",fVar19,(MethodInfo *)0x0),
                        local_1f8 == (UnityEngine_Material_o *)0x0)) ||
                       (UnityEngine_Material__SetFloat
                                  (local_1f8,"_EdgeSpark",value * 1.25 * fVar18,(MethodInfo *)0x0),
                       local_1f8 == (UnityEngine_Material_o *)0x0)) break;
                    UnityEngine_Material__SetFloat
                              (local_1f8,"_GlowIntensity",local_1dc * 1.15 * fVar18,(MethodInfo *)0x0);
                    fVar19 = value_00;
                    pSVar15 = "_StyleStrength";
                  }
                  if (((local_1f8 == (UnityEngine_Material_o *)0x0) ||
                      (UnityEngine_Material__SetFloat(local_1f8,pSVar15,fVar19 * fVar18,(MethodInfo *)0x0),
                      local_1f8 == (UnityEngine_Material_o *)0x0)) ||
                     (UnityEngine_Material__EnableKeyword(local_1f8,"_EMISSION",(MethodInfo *)0x0),
                     local_1f8 == (UnityEngine_Material_o *)0x0)) break;
                  UnityEngine_Material__set_globalIlluminationFlags(local_1f8,1,(MethodInfo *)0x0);
                  UnityEngine_Renderer__set_sharedMaterial
                            ((UnityEngine_Renderer_o *)x,local_1f8,(MethodInfo *)0x0);
                }
              }
            }
            uVar16 = uVar16 + 1;
          } while( true );
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$ReapplyCharacterEffectsToExistingParts
// il2cpp: void Characters_HumanSetup__ReapplyCharacterEffectsToExistingParts (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x18215a420

void Characters_HumanSetup__ReapplyCharacterEffectsToExistingParts
               (Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *raw;
  bool bVar3;
  int32_t type;
  int32_t type_00;
  
  if (Il2CppMethodInitialized_184346ca2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_CharacterEffectPresets);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    Il2CppMethodInitialized_184346ca2 = '\x01';
  }
  if (((__this->fields).CustomSet == (Settings_HumanCustomSet_o *)0x0) ||
     (bVar3 = Characters_HumanSetup__CanUseCharacterEffects(__this,(MethodInfo *)0x0), !bVar3)) {
    return;
  }
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
                (__this,(__this->fields)._part_hair,type,true,(MethodInfo *)0x0);
      Characters_HumanSetup__ApplyCharacterEffectToPart
                (__this,(__this->fields)._part_hair_1,type,true,(MethodInfo *)0x0);
      Characters_HumanSetup__ApplyCharacterEffectToPart
                (__this,(__this->fields)._part_blade_l,type_00,false,(MethodInfo *)0x0);
      Characters_HumanSetup__ApplyCharacterEffectToPart
                (__this,(__this->fields)._part_blade_r,type_00,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateEye
// il2cpp: void Characters_HumanSetup__CreateEye (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182155ef0

void Characters_HumanSetup__CreateEye(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Characters_HumanSetupMeshes_o *__this_00;
  System_String_o *path;
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  System_String_o *name;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_184346ca3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Eye");
    Il2CppMethodInitialized_184346ca3 = '\x01';
  }
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_eye,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  __this_00 = (__this->fields)._meshes;
  if (__this_00 != (Characters_HumanSetupMeshes_o *)0x0) {
    path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    name = Characters_HumanSetupMeshes__GetEyeMesh(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    value = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      (path,name,true,
                       (MethodInfo_795F00 *)
                       MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    (__this->fields)._part_eye = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_eye,value);
    Characters_HumanSetup__AttachToMount
              (__this,(__this->fields)._part_eye,(__this->fields)._part_head,false,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).CustomSet;
    if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).Eye, pSVar2 != (Settings_IntSetting_o *)0x0)) {
      Characters_HumanSetup__SetFacialTexture
                (__this,(__this->fields)._part_eye,"Eye",(pSVar2->fields)._value,false,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateFace
// il2cpp: void Characters_HumanSetup__CreateFace (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182156060

void Characters_HumanSetup__CreateFace(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Characters_HumanSetupMeshes_o *__this_01;
  System_String_o *path;
  bool bVar3;
  int32_t id;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  longlong lVar7;
  
  if (Il2CppMethodInitialized_184346ca4 == '\0') {
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
    Il2CppMethodInitialized_184346ca4 = '\x01';
  }
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_face,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).CustomSet;
  if (((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Face, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar4 = (pSVar2->fields)._value, pSVar4 != (System_String_o *)0x0)) {
    pSVar4 = System_String__Substring(pSVar4,4,(MethodInfo *)0x0);
    bVar3 = System_String__op_Inequality(pSVar4,"None",(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pSVar1 = (__this->fields).CustomSet;
    if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).Face, pSVar2 != (Settings_StringSetting_o *)0x0)) {
      pSVar5 = (pSVar2->fields)._value;
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_Characters_HumanSetup->static_fields->UniqueItems;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar3 = System_Collections_Generic_HashSet_object___Contains
                          (__this_00,(Il2CppObject *)pSVar5,
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (!bVar3) {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        __this_01 = (__this->fields)._meshes;
        if (__this_01 != (Characters_HumanSetupMeshes_o *)0x0) {
          path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
          pSVar5 = Characters_HumanSetupMeshes__GetFaceMesh(__this_01,pSVar5,(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                             (path,pSVar5,true,
                              (MethodInfo_795F00 *)
                              MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
          (__this->fields)._part_face = pUVar6;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._part_face,pUVar6);
          lVar7 = 0x148;
          if (bVar3) {
            lVar7 = 0x78;
          }
          Characters_HumanSetup__AttachToMount
                    (__this,(__this->fields)._part_face,
                     *(UnityEngine_GameObject_o **)((longlong)&__this->klass + lVar7),bVar3,(MethodInfo *)0x0)
          ;
          pUVar6 = (__this->fields)._part_face;
          id = System_Int32__Parse(pSVar4,(MethodInfo *)0x0);
          Characters_HumanSetup__SetFacialTexture
                    (__this,pUVar6,"Face",id,bVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateGlass
// il2cpp: void Characters_HumanSetup__CreateGlass (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x1821562e0

void Characters_HumanSetup__CreateGlass(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  Characters_HumanSetupMeshes_o *__this_01;
  System_String_o *path;
  bool bVar3;
  int32_t id;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  UnityEngine_GameObject_o *pUVar6;
  longlong lVar7;
  
  if (Il2CppMethodInitialized_184346ca5 == '\0') {
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
    Il2CppMethodInitialized_184346ca5 = '\x01';
  }
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_glass,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).CustomSet;
  if (((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Glass, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar4 = (pSVar2->fields)._value, pSVar4 != (System_String_o *)0x0)) {
    pSVar4 = System_String__Substring(pSVar4,5,(MethodInfo *)0x0);
    bVar3 = System_String__op_Inequality(pSVar4,"None",(MethodInfo *)0x0);
    if (!bVar3) {
      return;
    }
    pSVar1 = (__this->fields).CustomSet;
    if ((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
       (pSVar2 = (pSVar1->fields).Glass, pSVar2 != (Settings_StringSetting_o *)0x0)) {
      pSVar5 = (pSVar2->fields)._value;
      if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_Characters_HumanSetup->static_fields->UniqueItems;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        bVar3 = System_Collections_Generic_HashSet_object___Contains
                          (__this_00,(Il2CppObject *)pSVar5,
                           (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
        if (!bVar3) {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        __this_01 = (__this->fields)._meshes;
        if (__this_01 != (Characters_HumanSetupMeshes_o *)0x0) {
          path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
          pSVar5 = Characters_HumanSetupMeshes__GetGlassMesh(__this_01,pSVar5,(MethodInfo *)0x0);
          if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
          }
          pUVar6 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                             (path,pSVar5,true,
                              (MethodInfo_795F00 *)
                              MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
          (__this->fields)._part_glass = pUVar6;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._part_glass,pUVar6);
          lVar7 = 0x148;
          if (bVar3) {
            lVar7 = 0x78;
          }
          Characters_HumanSetup__AttachToMount
                    (__this,(__this->fields)._part_glass,
                     *(UnityEngine_GameObject_o **)((longlong)&__this->klass + lVar7),bVar3,(MethodInfo *)0x0)
          ;
          pUVar6 = (__this->fields)._part_glass;
          id = System_Int32__Parse(pSVar4,(MethodInfo *)0x0);
          Characters_HumanSetup__SetFacialTexture
                    (__this,pUVar6,"Glass",id,bVar3,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateBack
// il2cpp: void Characters_HumanSetup__CreateBack (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x1821559b0

void Characters_HumanSetup__CreateBack(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *path;
  bool bVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_o *pUVar5;
  EZhex1991_EZSoftBone_EZSoftBone_o *x;
  UnityEngine_Transform_o *pUVar6;
  
  if (Il2CppMethodInitialized_184346ca6 == '\0') {
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
    Il2CppMethodInitialized_184346ca6 = '\x01';
  }
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_back,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).CustomSet;
  if (((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Back, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar4 = (pSVar2->fields)._value, pSVar4 != (System_String_o *)0x0)) {
    pSVar4 = System_String__Substring(pSVar4,4,(MethodInfo *)0x0);
    bVar3 = System_String__op_Inequality(pSVar4,"None",(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_Characters_HumanSetupPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupPrefabs);
      }
      pSVar4 = Characters_HumanSetupPrefabs__GetBackPrefab(pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      pUVar5 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (path,pSVar4,true,
                          (MethodInfo_795F00 *)
                          MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      (__this->fields)._part_back = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._part_back,pUVar5);
      Characters_HumanSetup__AttachToMount
                (__this,(__this->fields)._part_back,(__this->fields)._mount_back,true,(MethodInfo *)0x0);
      pUVar5 = (__this->fields)._part_back;
      if (pUVar5 == (UnityEngine_GameObject_o *)0x0) goto label_182155bee;
      x = UnityEngine_GameObject__GetComponentInChildren_object_
                    (pUVar5,(MethodInfo_6F5040 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentInChildren_EZSoftBone);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        if (x == (EZhex1991_EZSoftBone_EZSoftBone_o *)0x0) goto label_182155bee;
        pUVar6 = (x->fields).m_SimulateSpace;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          (x->fields).m_SimulateSpace = pUVar6;
          Il2CppCodeGenWriteBarrier(&(x->fields).m_SimulateSpace,pUVar6);
        }
      }
    }
    return;
  }
label_182155bee:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateHead
// il2cpp: void Characters_HumanSetup__CreateHead (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182156d00

void Characters_HumanSetup__CreateHead(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *path;
  bool bVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_184346ca7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184346ca7 = '\x01';
  }
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_head_decor,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).CustomSet;
  if (((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Head, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar4 = (pSVar2->fields)._value, pSVar4 != (System_String_o *)0x0)) {
    pSVar4 = System_String__Substring(pSVar4,4,(MethodInfo *)0x0);
    bVar3 = System_String__op_Inequality(pSVar4,"None",(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_Characters_HumanSetupPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupPrefabs);
      }
      pSVar4 = Characters_HumanSetupPrefabs__GetHeadPrefab(pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      value = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (path,pSVar4,true,
                         (MethodInfo_795F00 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      (__this->fields)._part_head_decor = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._part_head_decor,value);
      Characters_HumanSetup__AttachToMount
                (__this,(__this->fields)._part_head_decor,(__this->fields)._mount_head_decor,true,
                 (MethodInfo *)0x0);
      Characters_HumanSetup__UpdateCloakVisibility(__this,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateHat
// il2cpp: void Characters_HumanSetup__CreateHat (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x182156b50

void Characters_HumanSetup__CreateHat(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  System_String_o *path;
  bool bVar3;
  System_String_o *pSVar4;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_184346ca8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupPrefabs);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184346ca8 = '\x01';
  }
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_hat,(MethodInfo *)0x0);
  pSVar1 = (__this->fields).CustomSet;
  if (((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Hat, pSVar2 != (Settings_StringSetting_o *)0x0)) &&
     (pSVar4 = (pSVar2->fields)._value, pSVar4 != (System_String_o *)0x0)) {
    pSVar4 = System_String__Substring(pSVar4,3,(MethodInfo *)0x0);
    bVar3 = System_String__op_Inequality(pSVar4,"None",(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
      }
      path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
      if ((TypeInfo_Characters_HumanSetupPrefabs->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupPrefabs);
      }
      pSVar4 = Characters_HumanSetupPrefabs__GetHatPrefab(pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
      }
      value = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (path,pSVar4,true,
                         (MethodInfo_795F00 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      (__this->fields)._part_hat = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._part_hat,value);
      Characters_HumanSetup__AttachToMount
                (__this,(__this->fields)._part_hat,(__this->fields)._mount_hat,true,(MethodInfo *)0x0);
      Characters_HumanSetup__UpdateCloakVisibility(__this,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateArms
// il2cpp: void Characters_HumanSetup__CreateArms (Characters_HumanSetup_o* __this, UnityEngine_Material_o* bodyMaterial, const MethodInfo* method);
// 0x182155680

void Characters_HumanSetup__CreateArms
               (Characters_HumanSetup_o *__this,UnityEngine_Material_o *bodyMaterial,MethodInfo *method)

{
  Characters_HumanSetupTextures_o *__this_00;
  Settings_HumanCustomSet_o *pSVar1;
  Settings_ColorSetting_o *pSVar2;
  Utility_Color255_o *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  Characters_HumanSetupMeshes_o *pCVar3;
  System_String_o *pSVar4;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Material_o *value;
  UnityEngine_GameObject_o *pUVar6;
  UnityEngine_Renderer_o *pUVar7;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346ca9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_Color255_get_Value);
    Il2CppMethodInitialized_184346ca9 = '\x01';
  }
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_arm_l,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_hand_l,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_arm_r,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_hand_r,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._textures;
  if (__this_00 != (Characters_HumanSetupTextures_o *)0x0) {
    pSVar4 = Characters_HumanSetupTextures__GetSkinTexture(__this_00,(MethodInfo *)0x0);
    pSVar1 = (__this->fields).CustomSet;
    if (((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
        (pSVar2 = (pSVar1->fields).SkinColor, pSVar2 != (Settings_ColorSetting_o *)0x0)) &&
       (__this_01 = (pSVar2->fields)._value, __this_01 != (Utility_Color255_o *)0x0)) {
      pUVar5 = Utility_Color255__ToColor((UnityEngine_Color_o *)local_28,__this_01,(MethodInfo *)0x0);
      local_28[0].r = (pUVar5->fields).r;
      local_28[0].g = (pUVar5->fields).g;
      local_28[0].b = (pUVar5->fields).b;
      local_28[0].a = (pUVar5->fields).a;
      if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
      }
      value = Characters_HumanSetupMaterials__GetSkinMaterial
                        (pSVar4,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184346c94 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
        Il2CppMethodInitialized_184346c94 = '\x01';
      }
      __this_02 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._ownedMaterials;
      if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  (__this_02,(Il2CppObject *)value,
                   (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_Material_Add);
        pCVar3 = (__this->fields)._meshes;
        if (pCVar3 != (Characters_HumanSetupMeshes_o *)0x0) {
          pSVar4 = Characters_HumanSetupMeshes__GetArmMesh(pCVar3,true,(MethodInfo *)0x0);
          pUVar6 = Characters_HumanSetup__GenerateCloth(__this,pSVar4,(MethodInfo *)0x0);
          (__this->fields)._part_arm_l = pUVar6;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._part_arm_l,pUVar6);
          pUVar6 = (__this->fields)._part_arm_l;
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            pUVar7 = UnityEngine_GameObject__GetComponent_object_
                               (pUVar6,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
            if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
              UnityEngine_Renderer__set_sharedMaterial(pUVar7,bodyMaterial,(MethodInfo *)0x0);
              pCVar3 = (__this->fields)._meshes;
              if (pCVar3 != (Characters_HumanSetupMeshes_o *)0x0) {
                pSVar4 = Characters_HumanSetupMeshes__GetHandMesh(pCVar3,true,(MethodInfo *)0x0);
                pUVar6 = Characters_HumanSetup__GenerateCloth(__this,pSVar4,(MethodInfo *)0x0);
                (__this->fields)._part_hand_l = pUVar6;
                Il2CppCodeGenWriteBarrier(&(__this->fields)._part_hand_l,pUVar6);
                pUVar6 = (__this->fields)._part_hand_l;
                if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                  pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar6,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
                  if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
                    UnityEngine_Renderer__set_sharedMaterial(pUVar7,value,(MethodInfo *)0x0);
                    pCVar3 = (__this->fields)._meshes;
                    if (pCVar3 != (Characters_HumanSetupMeshes_o *)0x0) {
                      pSVar4 = Characters_HumanSetupMeshes__GetArmMesh(pCVar3,false,(MethodInfo *)0x0);
                      pUVar6 = Characters_HumanSetup__GenerateCloth(__this,pSVar4,(MethodInfo *)0x0);
                      (__this->fields)._part_arm_r = pUVar6;
                      Il2CppCodeGenWriteBarrier(&(__this->fields)._part_arm_r,pUVar6);
                      pUVar6 = (__this->fields)._part_arm_r;
                      if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                        pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                           (pUVar6,(MethodInfo_6F5650 *)
                                                   MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
                        if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
                          UnityEngine_Renderer__set_sharedMaterial(pUVar7,bodyMaterial,(MethodInfo *)0x0);
                          pCVar3 = (__this->fields)._meshes;
                          if (pCVar3 != (Characters_HumanSetupMeshes_o *)0x0) {
                            pSVar4 = Characters_HumanSetupMeshes__GetHandMesh(pCVar3,false,(MethodInfo *)0x0);
                            pUVar6 = Characters_HumanSetup__GenerateCloth(__this,pSVar4,(MethodInfo *)0x0);
                            (__this->fields)._part_hand_r = pUVar6;
                            Il2CppCodeGenWriteBarrier(&(__this->fields)._part_hand_r,pUVar6);
                            pUVar6 = (__this->fields)._part_hand_r;
                            if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar7 = UnityEngine_GameObject__GetComponent_object_
                                                 (pUVar6,(MethodInfo_6F5650 *)
                                                                                                                  
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Renderer
                                                 );
                              if (pUVar7 != (UnityEngine_Renderer_o *)0x0) {
                                UnityEngine_Renderer__set_sharedMaterial(pUVar7,value,(MethodInfo *)0x0);
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
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$SetMaterial
// il2cpp: void Characters_HumanSetup__SetMaterial (Characters_HumanSetup_o* __this, UnityEngine_Renderer_o* renderer, UnityEngine_Material_o* material, const MethodInfo* method);
// 0x18215b020

void Characters_HumanSetup__SetMaterial
               (Characters_HumanSetup_o *__this,UnityEngine_Renderer_o *renderer,
               UnityEngine_Material_o *material,MethodInfo *method)

{
  if (renderer != (UnityEngine_Renderer_o *)0x0) {
    UnityEngine_Renderer__set_sharedMaterial(renderer,material,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateLowerBody
// il2cpp: void Characters_HumanSetup__CreateLowerBody (Characters_HumanSetup_o* __this, UnityEngine_Material_o* bodyMaterial, const MethodInfo* method);
// 0x182156ea0

void Characters_HumanSetup__CreateLowerBody
               (Characters_HumanSetup_o *__this,UnityEngine_Material_o *bodyMaterial,MethodInfo *method)

{
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Characters_HumanSetupMeshes_o *__this_00;
  System_String_o *path;
  UnityEngine_GameObject_o *pUVar3;
  System_String_o *name;
  UnityEngine_Object_o *pUVar4;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_SkinnedMeshRenderer_o *pUVar5;
  UnityEngine_SkinnedMeshRenderer_o *__this_02;
  UnityEngine_Mesh_o *value;
  UnityEngine_Object_o *pUVar6;
  
  if (Il2CppMethodInitialized_184346caa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    Il2CppMethodInitialized_184346caa = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar1 = (__this->fields).CustomSet;
  if (((pSVar1 != (Settings_HumanCustomSet_o *)0x0) &&
      (pSVar2 = (pSVar1->fields).Boots, pSVar2 != (Settings_IntSetting_o *)0x0)) &&
     (__this_00 = (__this->fields)._meshes, __this_00 != (Characters_HumanSetupMeshes_o *)0x0)) {
    path = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    name = Characters_HumanSetupMeshes__GetBootsMesh(__this_00,(pSVar2->fields)._value,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar4 = ApplicationManagers_ResourceManager__LoadAsset(path,name,true,(MethodInfo *)0x0);
    if (pUVar4 != (UnityEngine_Object_o *)0x0) {
      pUVar6 = (UnityEngine_Object_o *)0x0;
      if (pUVar4->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
        pUVar6 = pUVar4;
      }
      if (pUVar6 == (UnityEngine_Object_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
      }
      pUVar6 = (UnityEngine_Object_o *)0x0;
      if (pUVar4->klass == (UnityEngine_Object_c *)TypeInfo_UnityEngine_GameObject) {
        pUVar6 = pUVar4;
      }
      __this_01 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)pUVar6,(MethodInfo *)0x0);
      pUVar3 = (__this->fields)._part_leg;
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (pUVar3,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
        if (__this_01 != (UnityEngine_Transform_o *)0x0) {
          __this_02 = UnityEngine_Component__GetComponent_object_
                                ((UnityEngine_Component_o *)__this_01,
                                 (MethodInfo_6651A0 *)
                                 MethodInfo_UnityEngine_Component_GetComponent_SkinnedMeshRenderer);
          if (__this_02 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
            value = UnityEngine_SkinnedMeshRenderer__get_sharedMesh(__this_02,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
              UnityEngine_SkinnedMeshRenderer__set_sharedMesh(pUVar5,value,(MethodInfo *)0x0);
              pUVar3 = (__this->fields)._part_leg;
              if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                   (pUVar3,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer)
                ;
                if (pUVar5 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
                  UnityEngine_Renderer__set_sharedMaterial
                            ((UnityEngine_Renderer_o *)pUVar5,bodyMaterial,(MethodInfo *)0x0);
                  return;
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


// Characters.HumanSetup$$CreateUpperBody
// il2cpp: void Characters_HumanSetup__CreateUpperBody (Characters_HumanSetup_o* __this, UnityEngine_Material_o* bodyMaterial, const MethodInfo* method);
// 0x182157a60

void Characters_HumanSetup__CreateUpperBody
               (Characters_HumanSetup_o *__this,UnityEngine_Material_o *bodyMaterial,MethodInfo *method)

{
  Characters_HumanSetupMeshes_o *pCVar1;
  System_String_o *pSVar2;
  Characters_HumanSetupTextures_o *pCVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_Xml_Schema_XmlSchema_c *pSVar5;
  Settings_HumanCustomSet_o *pSVar6;
  Settings_ColorSetting_o *pSVar7;
  Utility_Color255_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool bVar8;
  System_String_o *pSVar9;
  UnityEngine_GameObject_o *pUVar10;
  UnityEngine_Renderer_o *pUVar11;
  UnityEngine_Material_o *pUVar12;
  System_Xml_Schema_XmlSchema_o *pSVar13;
  UnityEngine_Color_o *pUVar14;
  UnityEngine_Color_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184346cab == '\0') {
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
    Il2CppMethodInitialized_184346cab = '\x01';
  }
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_upper_body,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_brand_1,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_brand_2,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_brand_3,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_brand_4,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_chest_1,(MethodInfo *)0x0);
  Characters_HumanSetup__DestroyIfExists(__this,(__this->fields)._part_chest_2,(MethodInfo *)0x0);
  if ((__this->fields).IsDeadBody == false) {
    if ((TypeInfo_Characters_HumanSetup->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetup);
    }
    if (Il2CppMethodInitialized_184346c98 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ClothFactory);
      Il2CppMethodInitialized_184346c98 = '\x01';
    }
    pUVar10 = (__this->fields)._part_chest_3;
    if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
    }
    ClothFactory__DisposeObject(pUVar10,(MethodInfo *)0x0);
    (__this->fields)._part_chest_3 = (UnityEngine_GameObject_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_chest_3,(void *)0x0);
  }
  Characters_HumanSetup__CreateCape(__this,(MethodInfo *)0x0);
  pCVar1 = (__this->fields)._meshes;
  if (pCVar1 == (Characters_HumanSetupMeshes_o *)0x0) goto label_1821582e9;
  pSVar9 = Characters_HumanSetupMeshes__GetChestMesh(pCVar1,1,(MethodInfo *)0x0);
  bVar8 = System_String__op_Inequality
                    (pSVar9,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar10 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar2,pSVar9,true,
                         (MethodInfo_795F00 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    (__this->fields)._part_chest_1 = pUVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_chest_1,pUVar10);
    Characters_HumanSetup__AttachToMount
              (__this,(__this->fields)._part_chest_1,(__this->fields)._mount_chest,false,(MethodInfo *)0x0);
    pUVar10 = (__this->fields)._part_chest_1;
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1821582e9;
    pUVar11 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar10,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Renderer)
    ;
    pCVar3 = (__this->fields)._textures;
    if (pCVar3 == (Characters_HumanSetupTextures_o *)0x0) goto label_1821582e9;
    pSVar9 = Characters_HumanSetupTextures__GetChestTexture(pCVar3,1,(MethodInfo *)0x0);
    if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
    }
    pUVar12 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar9,false,(MethodInfo *)0x0);
    if (pUVar11 == (UnityEngine_Renderer_o *)0x0) goto label_1821582e9;
    UnityEngine_Renderer__set_sharedMaterial(pUVar11,pUVar12,(MethodInfo *)0x0);
  }
  pCVar1 = (__this->fields)._meshes;
  if (pCVar1 == (Characters_HumanSetupMeshes_o *)0x0) goto label_1821582e9;
  pSVar9 = Characters_HumanSetupMeshes__GetChestMesh(pCVar1,2,(MethodInfo *)0x0);
  bVar8 = System_String__op_Inequality
                    (pSVar9,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
    }
    pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->Characters;
    if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
    }
    pUVar10 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                        (pSVar2,pSVar9,true,
                         (MethodInfo_795F00 *)
                         MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    (__this->fields)._part_chest_2 = pUVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_chest_2,pUVar10);
    Characters_HumanSetup__AttachToMount
              (__this,(__this->fields)._part_chest_2,(__this->fields)._mount_chest,false,(MethodInfo *)0x0);
    pUVar10 = (__this->fields)._part_chest_2;
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1821582e9;
    pUVar11 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar10,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Renderer)
    ;
    if (pUVar11 == (UnityEngine_Renderer_o *)0x0) goto label_1821582e9;
    UnityEngine_Renderer__set_sharedMaterial(pUVar11,bodyMaterial,(MethodInfo *)0x0);
  }
  pCVar1 = (__this->fields)._meshes;
  if (pCVar1 != (Characters_HumanSetupMeshes_o *)0x0) {
    pSVar9 = Characters_HumanSetupMeshes__GetChestMesh(pCVar1,3,(MethodInfo *)0x0);
    bVar8 = System_String__op_Inequality
                      (pSVar9,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    if ((bVar8) && ((__this->fields).IsDeadBody == false)) {
      pUVar10 = (__this->fields)._mount_cloth;
      if ((TypeInfo_ClothFactory->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ClothFactory);
      }
      pUVar10 = ClothFactory__GetCape(pUVar10,pSVar9,bodyMaterial,(MethodInfo *)0x0);
      (__this->fields)._part_chest_3 = pUVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._part_chest_3,pUVar10);
    }
    pCVar1 = (__this->fields)._meshes;
    if (pCVar1 != (Characters_HumanSetupMeshes_o *)0x0) {
      pSVar9 = Characters_HumanSetupMeshes__GetBodyMesh(pCVar1,(MethodInfo *)0x0);
      pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,(MethodInfo *)0x0);
      (__this->fields)._part_upper_body = pUVar10;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._part_upper_body,pUVar10);
      pUVar10 = (__this->fields)._part_upper_body;
      if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
        pUVar11 = UnityEngine_GameObject__GetComponent_object_
                            (pUVar10,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
        if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
          UnityEngine_Renderer__set_sharedMaterial(pUVar11,bodyMaterial,(MethodInfo *)0x0);
          pCVar3 = (__this->fields)._textures;
          if (pCVar3 != (Characters_HumanSetupTextures_o *)0x0) {
            pSVar9 = Characters_HumanSetupTextures__GetBrandTexture(pCVar3,(MethodInfo *)0x0);
            if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
            }
            pUVar12 = Characters_HumanSetupMaterials__GetPartMaterial(pSVar9,false,(MethodInfo *)0x0);
            pSVar4 = (__this->fields).CurrentCostume;
            if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              pSVar13 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar4,(MethodInfo *)"Type");
              if (pSVar13 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                pSVar5 = pSVar13->klass;
                pSVar9 = (System_String_o *)
                         (*(pSVar5->vtable)._9_SetUnhandledAttributes.methodPtr)
                                   (pSVar13,(UnityEngine_GameObject_o *)
                                            (pSVar5->vtable)._9_SetUnhandledAttributes.method,
                                    (MethodInfo *)pSVar5);
                if (pSVar9 != (System_String_o *)0x0) {
                  bVar8 = System_String__StartsWith(pSVar9,"Uniform",(MethodInfo *)0x0);
                  if (bVar8) {
                    pCVar1 = (__this->fields)._meshes;
                    if (pCVar1 == (Characters_HumanSetupMeshes_o *)0x0) goto label_1821582e9;
                    pSVar9 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar1,1,(MethodInfo *)0x0);
                    pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,(MethodInfo *)0x0);
                    (__this->fields)._part_brand_1 = pUVar10;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_brand_1,pUVar10);
                    pUVar10 = (__this->fields)._part_brand_1;
                    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1821582e9;
                    pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                        (pUVar10,(MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
                    if (pUVar11 == (UnityEngine_Renderer_o *)0x0) goto label_1821582e9;
                    UnityEngine_Renderer__set_sharedMaterial(pUVar11,pUVar12,(MethodInfo *)0x0);
                    pCVar1 = (__this->fields)._meshes;
                    if (pCVar1 == (Characters_HumanSetupMeshes_o *)0x0) goto label_1821582e9;
                    pSVar9 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar1,2,(MethodInfo *)0x0);
                    pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,(MethodInfo *)0x0);
                    (__this->fields)._part_brand_2 = pUVar10;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_brand_2,pUVar10);
                    pUVar10 = (__this->fields)._part_brand_2;
                    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1821582e9;
                    pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                        (pUVar10,(MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
                    if (pUVar11 == (UnityEngine_Renderer_o *)0x0) goto label_1821582e9;
                    UnityEngine_Renderer__set_sharedMaterial(pUVar11,pUVar12,(MethodInfo *)0x0);
                    pCVar1 = (__this->fields)._meshes;
                    if (pCVar1 == (Characters_HumanSetupMeshes_o *)0x0) goto label_1821582e9;
                    pSVar9 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar1,3,(MethodInfo *)0x0);
                    pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,(MethodInfo *)0x0);
                    (__this->fields)._part_brand_3 = pUVar10;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_brand_3,pUVar10);
                    pUVar10 = (__this->fields)._part_brand_3;
                    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1821582e9;
                    pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                        (pUVar10,(MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
                    if (pUVar11 == (UnityEngine_Renderer_o *)0x0) goto label_1821582e9;
                    UnityEngine_Renderer__set_sharedMaterial(pUVar11,pUVar12,(MethodInfo *)0x0);
                    pCVar1 = (__this->fields)._meshes;
                    if (pCVar1 == (Characters_HumanSetupMeshes_o *)0x0) goto label_1821582e9;
                    pSVar9 = Characters_HumanSetupMeshes__GetBrandMesh(pCVar1,4,(MethodInfo *)0x0);
                    pUVar10 = Characters_HumanSetup__GenerateCloth(__this,pSVar9,(MethodInfo *)0x0);
                    (__this->fields)._part_brand_4 = pUVar10;
                    Il2CppCodeGenWriteBarrier(&(__this->fields)._part_brand_4,pUVar10);
                    pUVar10 = (__this->fields)._part_brand_4;
                    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto label_1821582e9;
                    pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                        (pUVar10,(MethodInfo_6F5650 *)
                                                 MethodInfo_UnityEngine_GameObject_GetComponent_Renderer);
                    if (pUVar11 == (UnityEngine_Renderer_o *)0x0) goto label_1821582e9;
                    UnityEngine_Renderer__set_sharedMaterial(pUVar11,pUVar12,(MethodInfo *)0x0);
                  }
                  pCVar3 = (__this->fields)._textures;
                  if (pCVar3 != (Characters_HumanSetupTextures_o *)0x0) {
                    pSVar9 = Characters_HumanSetupTextures__GetSkinTexture(pCVar3,(MethodInfo *)0x0);
                    pSVar6 = (__this->fields).CustomSet;
                    if (((pSVar6 != (Settings_HumanCustomSet_o *)0x0) &&
                        (pSVar7 = (pSVar6->fields).SkinColor, pSVar7 != (Settings_ColorSetting_o *)0x0)) &&
                       (__this_00 = (pSVar7->fields)._value, __this_00 != (Utility_Color255_o *)0x0)) {
                      pUVar14 = Utility_Color255__ToColor
                                          ((UnityEngine_Color_o *)local_28,__this_00,(MethodInfo *)0x0);
                      local_28[0].r = (pUVar14->fields).r;
                      local_28[0].g = (pUVar14->fields).g;
                      local_28[0].b = (pUVar14->fields).b;
                      local_28[0].a = (pUVar14->fields).a;
                      if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
                      }
                      pUVar12 = Characters_HumanSetupMaterials__GetSkinMaterial
                                          (pSVar9,(UnityEngine_Color_o *)local_28,(MethodInfo *)0x0);
                      if (Il2CppMethodInitialized_184346c94 == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                        Il2CppMethodInitialized_184346c94 = '\x01';
                      }
                      __this_01 = (System_Collections_Generic_HashSet_object__o *)
                                  (__this->fields)._ownedMaterials;
                      if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
                        System_Collections_Generic_HashSet_object___Add
                                  (__this_01,(Il2CppObject *)pUVar12,
                                   (MethodInfo_1757CE0 *)
                                   MethodInfo_System_Collections_Generic_HashSet_Material_Add);
                        pUVar10 = (__this->fields)._part_head;
                        if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                          pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                              (pUVar10,(MethodInfo_6F5650 *)
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Renderer
                                              );
                          if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
                            UnityEngine_Renderer__set_sharedMaterial(pUVar11,pUVar12,(MethodInfo *)0x0);
                            pUVar10 = (__this->fields)._part_chest;
                            if (pUVar10 != (UnityEngine_GameObject_o *)0x0) {
                              pUVar11 = UnityEngine_GameObject__GetComponent_object_
                                                  (pUVar10,(MethodInfo_6F5650 *)
                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_GetComponent_Renderer
                                                  );
                              if (pUVar11 != (UnityEngine_Renderer_o *)0x0) {
                                UnityEngine_Renderer__set_sharedMaterial(pUVar11,pUVar12,(MethodInfo *)0x0);
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
  }
label_1821582e9:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$SetFacialTexture
// il2cpp: void Characters_HumanSetup__SetFacialTexture (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* go, System_String_o* type, int32_t id, bool unique, const MethodInfo* method);
// 0x18215ac70

void Characters_HumanSetup__SetFacialTexture
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *go,System_String_o *type,int32_t id,
               bool unique,MethodInfo *method)

{
  UnityEngine_Renderer_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_Material_o *value;
  int32_t local_res20 [2];
  
  local_res20[0] = id;
  if (Il2CppMethodInitialized_184346cac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetupMaterials);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_MaterialCache);
    Il2CppMethodInitialized_184346cac = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    if (local_res20[0] < 0) {
      pUVar1 = UnityEngine_GameObject__GetComponentInChildren_object_
                         (go,(MethodInfo_6F5040 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
      if ((TypeInfo_CustomSkins_MaterialCache->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_MaterialCache);
      }
      if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_sharedMaterial
                  (pUVar1,TypeInfo_CustomSkins_MaterialCache->static_fields->TransparentMaterial,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      pUVar1 = UnityEngine_GameObject__GetComponentInChildren_object_
                         (go,(MethodInfo_6F5040 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Renderer);
      pSVar2 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969e50(type,pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo_Characters_HumanSetupMaterials->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Characters_HumanSetupMaterials);
      }
      value = Characters_HumanSetupMaterials__GetFaceMaterial(pSVar2,unique,(MethodInfo *)0x0);
      if (pUVar1 != (UnityEngine_Renderer_o *)0x0) {
        UnityEngine_Renderer__set_sharedMaterial(pUVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$CreateMount
// il2cpp: UnityEngine_GameObject_o* Characters_HumanSetup__CreateMount (Characters_HumanSetup_o* __this, System_String_o* transformPath, const MethodInfo* method);
// 0x182157080

UnityEngine_GameObject_o *
Characters_HumanSetup__CreateMount
          (Characters_HumanSetup_o *__this,System_String_o *transformPath,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  UnityEngine_GameObject_o *__this_00;
  System_String_o *n;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Vector3_o *pUVar5;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_Vector3_Fields local_68;
  UnityEngine_Vector3_Fields local_58;
  UnityEngine_Quaternion_Fields local_48;
  UnityEngine_Quaternion_Fields local_38;
  
  if (Il2CppMethodInitialized_184346cad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&"Armature/Core/Controller_Body/hip/");
    Il2CppMethodInitialized_184346cad = '\x01';
  }
  local_38.x = 0.0;
  local_38.y = 0.0;
  local_38.z = 0.0;
  local_38.w = 0.0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1ad20(__this_00,(MethodInfo *)0x0);
  n = System_String__Concat_1969e50("Armature/Core/Controller_Body/hip/",transformPath,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)&local_58,pUVar3,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        local_68.x = (pUVar5->fields).x;
        local_68.y = (pUVar5->fields).y;
        local_68.z = (pUVar5->fields).z;
        UnityEngine_Transform__set_position(pUVar4,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
        pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
        pUVar6 = UnityEngine_Transform__get_rotation
                           ((UnityEngine_Quaternion_o *)&local_48,pUVar3,(MethodInfo *)0x0);
        local_38.x = (pUVar6->fields).x;
        local_38.y = (pUVar6->fields).y;
        local_38.z = (pUVar6->fields).z;
        local_38.w = (pUVar6->fields).w;
        pUVar5 = UnityEngine_Quaternion__Internal_ToEulerRad
                           ((UnityEngine_Vector3_o *)&local_68,(UnityEngine_Quaternion_o *)&local_38,
                            (MethodInfo *)0x0);
        uVar1 = (pUVar5->fields).x;
        uVar2 = (pUVar5->fields).y;
        local_58.y = (float)uVar2 * 57.29578;
        local_58.x = (float)uVar1 * 57.29578;
        local_58.z = (pUVar5->fields).z * 57.29578;
        local_68.x = 4.712389;
        pUVar5 = UnityEngine_Quaternion__Internal_MakePositive
                           ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_58,
                            (MethodInfo *)0x0);
        local_68.z = 0.0;
        local_68.y = (pUVar5->fields).y * 0.017453292;
        pUVar6 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Quaternion_o *)&local_48,(UnityEngine_Vector3_o *)&local_68,
                            (MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          local_48.x = (pUVar6->fields).x;
          local_48.y = (pUVar6->fields).y;
          local_48.z = (pUVar6->fields).z;
          local_48.w = (pUVar6->fields).w;
          UnityEngine_Transform__set_rotation(pUVar4,(UnityEngine_Quaternion_o *)&local_48,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_Transform__Find(pUVar3,n,(MethodInfo *)0x0);
          if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__set_parent(pUVar4,pUVar3,(MethodInfo *)0x0);
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
// 0x182158f40

UnityEngine_GameObject_o *
Characters_HumanSetup__GenerateCloth
          (Characters_HumanSetup_o *__this,System_String_o *cloth,MethodInfo *method)

{
  System_String_o *path;
  UnityEngine_Vector3_StaticFields *pUVar1;
  bool bVar2;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_array *value;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_SkinnedMeshRenderer_o *__this_00;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_184346cae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    Il2CppMethodInitialized_184346cae = '\x01';
  }
  pUVar3 = (__this->fields)._mount_cloth;
  if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
    x = (UnityEngine_Object_o *)
        UnityEngine_GameObject__GetComponent_object_
                  (pUVar3,(MethodInfo_6F5650 *)
                          MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pUVar3 = (__this->fields)._mount_cloth;
      if (pUVar3 == (UnityEngine_GameObject_o *)0x0) goto label_18215921f;
      x = (UnityEngine_Object_o *)
          UnityEngine_GameObject__AddComponent_object_
                    (pUVar3,(MethodInfo_6F4D60 *)
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
      pUVar3 = ApplicationManagers_ResourceManager__InstantiateAsset_object_
                         (path,cloth,true,
                          (MethodInfo_795F00 *)
                          MethodInfo_ApplicationManagers_ResourceManager_InstantiateAsset_GameObject);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__GetComponent_object_
                              (pUVar3,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_SkinnedMeshRenderer);
        if (__this_00 != (UnityEngine_SkinnedMeshRenderer_o *)0x0) {
          pUVar3 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
          if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
              pUVar5 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
                pUVar5 = UnityEngine_Transform__GetParent(pUVar5,(MethodInfo *)0x0);
                if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                  UnityEngine_Transform__set_parent(pUVar4,pUVar5,(MethodInfo *)0x0);
                  pUVar4 = UnityEngine_Component__get_transform
                                     ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                  if (Il2CppMethodInitialized_18433dbea == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                    Il2CppMethodInitialized_18433dbea = '\x01';
                  }
                  if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                    pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
                    local_18.x = (pUVar1->zeroVector).fields.x;
                    local_18.y = (pUVar1->zeroVector).fields.y;
                    local_18.z = (pUVar1->zeroVector).fields.z;
                    UnityEngine_Transform__set_localPosition
                              (pUVar4,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
                    pUVar4 = UnityEngine_Component__get_transform
                                       ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                    if (Il2CppMethodInitialized_18433dbeb == '\0') {
                      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                      Il2CppMethodInitialized_18433dbeb = '\x01';
                    }
                    if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
                      pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
                      local_18.x = (pUVar1->oneVector).fields.x;
                      local_18.y = (pUVar1->oneVector).fields.y;
                      local_18.z = (pUVar1->oneVector).fields.z;
                      UnityEngine_Transform__set_localScale
                                (pUVar4,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
                      UnityEngine_SkinnedMeshRenderer__set_bones(__this_00,value,(MethodInfo *)0x0);
                      UnityEngine_SkinnedMeshRenderer__set_quality(__this_00,4,(MethodInfo *)0x0);
                      pUVar4 = UnityEngine_SkinnedMeshRenderer__get_rootBone
                                         ((UnityEngine_SkinnedMeshRenderer_o *)x,(MethodInfo *)0x0);
                      UnityEngine_SkinnedMeshRenderer__set_rootBone(__this_00,pUVar4,(MethodInfo *)0x0);
                      pUVar3 = UnityEngine_Component__get_gameObject
                                         ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
                      return pUVar3;
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
label_18215921f:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$AttachToMount
// il2cpp: void Characters_HumanSetup__AttachToMount (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* obj, UnityEngine_GameObject_o* mount, bool setScale, const MethodInfo* method);
// 0x1821541b0

void Characters_HumanSetup__AttachToMount
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *obj,UnityEngine_GameObject_o *mount,
               bool setScale,MethodInfo *method)

{
  UnityEngine_Vector3_StaticFields *pUVar1;
  UnityEngine_Quaternion_StaticFields *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_Transform_o *p;
  UnityEngine_Quaternion_Fields local_38;
  
  if (obj != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
    if (mount != (UnityEngine_GameObject_o *)0x0) {
      p = UnityEngine_GameObject__get_transform(mount,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar3,p,(MethodInfo *)0x0);
        pUVar3 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
        if (Il2CppMethodInitialized_18433dbea == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
          Il2CppMethodInitialized_18433dbea = '\x01';
        }
        if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
          pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
          local_38.x = (pUVar1->zeroVector).fields.x;
          local_38.y = (pUVar1->zeroVector).fields.y;
          local_38.z = (pUVar1->zeroVector).fields.z;
          UnityEngine_Transform__set_localPosition
                    (pUVar3,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433de5b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
            Il2CppMethodInitialized_18433de5b = '\x01';
          }
          if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
            pUVar2 = TypeInfo_UnityEngine_Quaternion->static_fields;
            local_38.x = (pUVar2->identityQuaternion).fields.x;
            local_38.y = (pUVar2->identityQuaternion).fields.y;
            local_38.z = (pUVar2->identityQuaternion).fields.z;
            local_38.w = (pUVar2->identityQuaternion).fields.w;
            UnityEngine_Transform__set_localRotation
                      (pUVar3,(UnityEngine_Quaternion_o *)&local_38,(MethodInfo *)0x0);
            if (setScale) {
              pUVar3 = UnityEngine_GameObject__get_transform(obj,(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_18433dbeb == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
                Il2CppMethodInitialized_18433dbeb = '\x01';
              }
              if (pUVar3 == (UnityEngine_Transform_o *)0x0) goto label_182154328;
              pUVar1 = TypeInfo_UnityEngine_Vector3->static_fields;
              local_38.x = (pUVar1->oneVector).fields.x;
              local_38.y = (pUVar1->oneVector).fields.y;
              local_38.z = (pUVar1->oneVector).fields.z;
              UnityEngine_Transform__set_localScale
                        (pUVar3,(UnityEngine_Vector3_o *)&local_38,(MethodInfo *)0x0);
            }
            return;
          }
        }
      }
    }
  }
label_182154328:
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$DestroyIfExists
// il2cpp: void Characters_HumanSetup__DestroyIfExists (Characters_HumanSetup_o* __this, UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x182158b30

void Characters_HumanSetup__DestroyIfExists
               (Characters_HumanSetup_o *__this,UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184346caf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184346caf = '\x01';
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
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Characters.HumanSetup$$.ctor
// il2cpp: void Characters_HumanSetup___ctor (Characters_HumanSetup_o* __this, const MethodInfo* method);
// 0x18215b870

void Characters_HumanSetup___ctor(Characters_HumanSetup_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *value;
  System_Collections_Generic_Dictionary_Renderer__Material__o *__this_00;
  System_Collections_Generic_HashSet_Material__o *__this_01;
  System_Collections_Generic_List_Renderer__o *__this_02;
  
  if (Il2CppMethodInitialized_184346cb0 == '\0') {
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
    Il2CppMethodInitialized_184346cb0 = '\x01';
  }
  value = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  pSVar1 = "Fire1";
  if (value != (System_String_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0] = "Fire1";
      Il2CppCodeGenWriteBarrier(value->m_Items,pSVar1);
      pSVar1 = "Fire2";
      if (1 < (uint)value->max_length) {
        value->m_Items[1] = "Fire2";
        Il2CppCodeGenWriteBarrier(value->m_Items + 1,pSVar1);
        pSVar1 = "Lightning1";
        if (2 < (uint)value->max_length) {
          value->m_Items[2] = "Lightning1";
          Il2CppCodeGenWriteBarrier(value->m_Items + 2,pSVar1);
          (__this->fields).TierEffects = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields).TierEffects,value);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_Dictionary_Renderer_Material);
          System_Collections_Generic_Dictionary_object__object____ctor
                    ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                     (MethodInfo_1454140 *)
                     MethodInfo_System_Collections_Generic_Dictionary_Renderer_Material_ctor);
          (__this->fields)._effectMaterialCache = __this_00;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._effectMaterialCache,__this_00);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_Material);
          System_Collections_Generic_HashSet_object____ctor
                    ((System_Collections_Generic_HashSet_object__o *)__this_01,
                     (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_Material_ctor);
          (__this->fields)._ownedMaterials = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._ownedMaterials,__this_01);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
          System_Collections_Generic_List_object____ctor
                    ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
                     (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
          (__this->fields)._hairRenderers = __this_02;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._hairRenderers,__this_02);
          (__this->fields)._hoodieHairClipOffset = 0.25;
          (__this->fields)._hoodieHairClipWidth = 0.75;
          UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetup$$.cctor
// il2cpp: void Characters_HumanSetup___cctor (const MethodInfo* method);
// 0x18215b730

void Characters_HumanSetup___cctor(MethodInfo *method)

{
  int32_t iVar1;
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346cb1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&"_HairClipRightPlane");
    il2cpp_codegen_initialize_runtime_metadata(&"_HairClipTopPlane");
    il2cpp_codegen_initialize_runtime_metadata(&"_HairClipLeftPlane");
    il2cpp_codegen_initialize_runtime_metadata(&"_HairClipPlane");
    Il2CppMethodInitialized_184346cb1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_Characters_HumanSetup->static_fields->UniqueItems = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Characters_HumanSetup->static_fields->UniqueItems,__this);
  iVar1 = UnityEngine_Shader__PropertyToID("_HairClipPlane",(MethodInfo *)0x0);
  TypeInfo_Characters_HumanSetup->static_fields->HairClipPlaneId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_HairClipLeftPlane",(MethodInfo *)0x0);
  TypeInfo_Characters_HumanSetup->static_fields->HairClipLeftPlaneId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_HairClipRightPlane",(MethodInfo *)0x0);
  TypeInfo_Characters_HumanSetup->static_fields->HairClipRightPlaneId = iVar1;
  iVar1 = UnityEngine_Shader__PropertyToID("_HairClipTopPlane",(MethodInfo *)0x0);
  TypeInfo_Characters_HumanSetup->static_fields->HairClipTopPlaneId = iVar1;
  return;
}


