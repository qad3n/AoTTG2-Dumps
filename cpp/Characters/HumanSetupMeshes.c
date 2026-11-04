// Type: Characters.HumanSetupMeshes
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSetupMeshes.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupMeshes.cs
// --------------------------------

// Characters.HumanSetupMeshes$$.ctor
// il2cpp: void Characters_HumanSetupMeshes___ctor (Characters_HumanSetupMeshes_o* __this, Characters_HumanSetup_o* setup, const MethodInfo* method);
// 0x182170ad0

void Characters_HumanSetupMeshes___ctor
               (Characters_HumanSetupMeshes_o *__this,Characters_HumanSetup_o *setup,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346cba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Costumes/Prefabs/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Face/Prefabs/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Hairs/Prefabs/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Weapons/Prefabs/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Accessories/Prefabs/");
    Il2CppMethodInitialized_184346cba = '\x01';
  }
  (__this->fields).CostumesPath = "Human/Parts/Costumes/Prefabs/";
  Il2CppCodeGenWriteBarrier(&(__this->fields).CostumesPath,"Human/Parts/Costumes/Prefabs/");
  (__this->fields).AccessoriesPath = "Human/Parts/Accessories/Prefabs/";
  Il2CppCodeGenWriteBarrier(&(__this->fields).AccessoriesPath,"Human/Parts/Accessories/Prefabs/");
  (__this->fields).HairsPath = "Human/Parts/Hairs/Prefabs/";
  Il2CppCodeGenWriteBarrier(&(__this->fields).HairsPath,"Human/Parts/Hairs/Prefabs/");
  (__this->fields).WeaponsPath = "Human/Parts/Weapons/Prefabs/";
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeaponsPath,"Human/Parts/Weapons/Prefabs/");
  (__this->fields).FacePath = "Human/Parts/Face/Prefabs/";
  Il2CppCodeGenWriteBarrier(&(__this->fields).FacePath,"Human/Parts/Face/Prefabs/");
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._setup = setup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setup,setup);
  return;
}


// Characters.HumanSetupMeshes$$GetBootsMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBootsMesh (Characters_HumanSetupMeshes_o* __this, int32_t boots, const MethodInfo* method);
// 0x18216fc30

System_String_o *
Characters_HumanSetupMeshes__GetBootsMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t boots,MethodInfo *method)

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_res10 [6];
  
  local_res10[0] = boots;
  if (Il2CppMethodInitialized_184346cbb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"character_leg_");
    Il2CppMethodInitialized_184346cbb = '\x01';
  }
  pSVar1 = (__this->fields).CostumesPath;
  str2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969b70(pSVar1,"character_leg_",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupMeshes$$GetHandMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHandMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x182170830
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821708ee: mov rdx, qword ptr [rip + 0x1f0c63b]  ; "_empty"
// asm:   0x1821708f5: jmp 0x182170910
// asm:   0x1821708f7: mov rdx, qword ptr [rip + 0x1f0d96a]  ; "_ts"
// asm:   0x1821708fe: jmp 0x182170910
// asm:   0x182170900: mov rdx, qword ptr [rip + 0x1f0bba9]  ; "_ah_0"
// asm:   0x182170907: jmp 0x182170910
// asm:   0x182170909: mov rdx, qword ptr [rip + 0x1f67e78]  ; "_0"

System_String_o *
Characters_HumanSetupMeshes__GetHandMesh(Characters_HumanSetupMeshes_o *__this,bool left,MethodInfo *method)

{
  Characters_HumanSetup_o *__this_00;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str1;
  
  if (Il2CppMethodInitialized_184346cbc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"_ts");
    il2cpp_codegen_initialize_runtime_metadata(&"_empty");
    il2cpp_codegen_initialize_runtime_metadata(&"character_hand_l");
    il2cpp_codegen_initialize_runtime_metadata(&"character_hand_r");
    il2cpp_codegen_initialize_runtime_metadata(&"_0");
    il2cpp_codegen_initialize_runtime_metadata(&"_ah_0");
    Il2CppMethodInitialized_184346cbc = '\x01';
  }
  pSVar2 = "character_hand_r";
  if (left) {
    pSVar2 = "character_hand_l";
  }
  __this_00 = (__this->fields)._setup;
  if (__this_00 != (Characters_HumanSetup_o *)0x0) {
    str1 = "_0";
    if (((((__this_00->fields).Weapon == 0) || (str1 = "_ah_0", (__this_00->fields).Weapon == 1)
         ) || (str1 = "_ts", (__this_00->fields).Weapon == 2)) ||
       ((str1 = "_empty", (__this_00->fields).Weapon == 3 ||
        (bVar1 = Characters_HumanSetup__get_HasWeapon(__this_00,(MethodInfo *)0x0),
        str1 = "_empty", !bVar1)))) {
      pSVar2 = System_String__Concat_1969e50(pSVar2,str1,(MethodInfo *)0x0);
    }
    pSVar2 = System_String__Concat_1969e50((__this->fields).CostumesPath,pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$GetArmMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetArmMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x18216f840
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18216f989: xor r9d, r9d
// asm:   0x18216f98c: mov rdx, rax
// asm:   0x18216f9b9: xor r9d, r9d
// asm:   0x18216f9bc: mov rdx, rdi
// asm:   0x18216f9bf: jmp 0x18216f98f

System_String_o *
Characters_HumanSetupMeshes__GetArmMesh(Characters_HumanSetupMeshes_o *__this,bool left,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  bool bVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  
  if (Il2CppMethodInitialized_184346cbd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"_arm_L");
    il2cpp_codegen_initialize_runtime_metadata(&"_uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"_arm_R");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"_casual_arm_AH_R");
    il2cpp_codegen_initialize_runtime_metadata(&"_casual_arm_AH_L");
    il2cpp_codegen_initialize_runtime_metadata(&"player");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"_casual");
    Il2CppMethodInitialized_184346cbd = '\x01';
  }
  pSVar7 = "player";
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
    if (((pCVar1->fields).Weapon == 1) || ((pCVar1->fields).Weapon == 3)) {
      pSVar6 = "_casual_arm_AH_R";
      if (left) {
        pSVar6 = "_casual_arm_AH_L";
      }
label_18216f98f:
      pSVar7 = System_String__Concat_1969b70((__this->fields).CostumesPath,pSVar7,pSVar6,(MethodInfo *)0x0);
      return pSVar7;
    }
    pSVar2 = (pCVar1->fields).CurrentCostume;
    if ((pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Type"),
       pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
      pSVar3 = pSVar5->klass;
      pSVar6 = (System_String_o *)
               (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar5,(UnityEngine_GameObject_o *)(pSVar3->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar3);
      if (pSVar6 != (System_String_o *)0x0) {
        bVar4 = System_String__StartsWith(pSVar6,"Uniform",(MethodInfo *)0x0);
        pSVar6 = "_casual";
        if (bVar4) {
          pSVar6 = "_uniform";
        }
        pSVar7 = System_String__Concat_1969e50(pSVar7,pSVar6,(MethodInfo *)0x0);
        pSVar6 = "_arm_R";
        if (left) {
          pSVar6 = "_arm_L";
        }
        goto label_18216f98f;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$Get3dmgMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__Get3dmgMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x18216f7a0

System_String_o *
Characters_HumanSetupMeshes__Get3dmgMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346cbe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"3dmg_2");
    il2cpp_codegen_initialize_runtime_metadata(&"3dmg_3");
    il2cpp_codegen_initialize_runtime_metadata(&"3dmg");
    Il2CppMethodInitialized_184346cbe = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 == (Characters_HumanSetup_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = (__this->fields).AccessoriesPath;
  if ((pCVar1->fields).Weapon == 1) {
    pSVar2 = System_String__Concat_1969e50(pSVar2,"3dmg_2",(MethodInfo *)0x0);
    return pSVar2;
  }
  if ((pCVar1->fields).Weapon != 3) {
    pSVar2 = System_String__Concat_1969e50(pSVar2,"3dmg",(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = System_String__Concat_1969e50(pSVar2,"3dmg_3",(MethodInfo *)0x0);
  return pSVar2;
}


// Characters.HumanSetupMeshes$$GetBeltMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBeltMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x18216f9d0

System_String_o *
Characters_HumanSetupMeshes__GetBeltMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346cbf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"3dmg_belt");
    Il2CppMethodInitialized_184346cbf = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
    if (((pCVar1->fields).Weapon != 1) && ((pCVar1->fields).Weapon != 3)) {
      pSVar2 = System_String__Concat_1969e50
                         ((__this->fields).AccessoriesPath,"3dmg_belt",(MethodInfo *)0x0);
      return pSVar2;
    }
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$GetGasMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetGasMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x182170550
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1821705f5: jmp 0x1821705cd

System_String_o *
Characters_HumanSetupMeshes__GetGasMesh(Characters_HumanSetupMeshes_o *__this,bool left,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346cc0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"char_gun_mag_l");
    il2cpp_codegen_initialize_runtime_metadata(&"char_gun_mag_r");
    il2cpp_codegen_initialize_runtime_metadata(&"scabbard_L");
    il2cpp_codegen_initialize_runtime_metadata(&"scabbard_R");
    Il2CppMethodInitialized_184346cc0 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 == (Characters_HumanSetup_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((pCVar1->fields).Weapon == 1) || ((pCVar1->fields).Weapon == 3)) {
    pSVar2 = "char_gun_mag_r";
    if (left) {
      pSVar2 = "char_gun_mag_l";
    }
  }
  else {
    pSVar2 = "scabbard_R";
    if (left) {
      pSVar2 = "scabbard_L";
    }
  }
  pSVar2 = System_String__Concat_1969e50((__this->fields).AccessoriesPath,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Characters.HumanSetupMeshes$$GetWeaponMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetWeaponMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x182170950

System_String_o *
Characters_HumanSetupMeshes__GetWeaponMesh(Characters_HumanSetupMeshes_o *__this,bool left,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_184346cc1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"blade_R");
    il2cpp_codegen_initialize_runtime_metadata(&"blade_L");
    il2cpp_codegen_initialize_runtime_metadata(&"character_gun_r_0");
    il2cpp_codegen_initialize_runtime_metadata(&"thunderspear_r");
    il2cpp_codegen_initialize_runtime_metadata(&"apg_R");
    il2cpp_codegen_initialize_runtime_metadata(&"thunderspear_l");
    il2cpp_codegen_initialize_runtime_metadata(&"character_gun_l_0");
    il2cpp_codegen_initialize_runtime_metadata(&"apg_L");
    Il2CppMethodInitialized_184346cc1 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
    bVar2 = Characters_HumanSetup__get_HasWeapon(pCVar1,(MethodInfo *)0x0);
    if (!bVar2) {
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pCVar1 = (__this->fields)._setup;
    if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
      pSVar3 = (__this->fields).WeaponsPath;
      if ((pCVar1->fields).Weapon == 1) {
        pSVar4 = "character_gun_r_0";
        if (left) {
          pSVar4 = "character_gun_l_0";
        }
        pSVar3 = System_String__Concat_1969e50(pSVar3,pSVar4,(MethodInfo *)0x0);
        return pSVar3;
      }
      if ((pCVar1->fields).Weapon != 3) {
        if ((pCVar1->fields).Weapon != 2) {
          pSVar4 = "blade_R";
          if (left) {
            pSVar4 = "blade_L";
          }
          pSVar3 = System_String__Concat_1969e50(pSVar3,pSVar4,(MethodInfo *)0x0);
          return pSVar3;
        }
        pSVar4 = "thunderspear_r";
        if (left) {
          pSVar4 = "thunderspear_l";
        }
        pSVar3 = System_String__Concat_1969e50(pSVar3,pSVar4,(MethodInfo *)0x0);
        return pSVar3;
      }
      pSVar4 = "apg_R";
      if (left) {
        pSVar4 = "apg_L";
      }
      pSVar3 = System_String__Concat_1969e50(pSVar3,pSVar4,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$GetBodyMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBodyMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x18216fa50

System_String_o *
Characters_HumanSetupMeshes__GetBodyMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  Settings_HumanCustomSet_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  bool bVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  MethodInfo *method_00;
  uint16_t local_res8 [4];
  
  if (Il2CppMethodInitialized_184346cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Last_char);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"_F");
    il2cpp_codegen_initialize_runtime_metadata(&"_uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"_M");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"player");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"_casual");
    Il2CppMethodInitialized_184346cc2 = '\x01';
  }
  pSVar9 = "player";
  pCVar1 = (__this->fields)._setup;
  local_res8[0] = 0;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar7 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Type");
    if (pSVar7 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar3 = pSVar7->klass;
      pSVar8 = (System_String_o *)
               (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar7,(UnityEngine_GameObject_o *)(pSVar3->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar3);
      if (pSVar8 != (System_String_o *)0x0) {
        bVar6 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
        pSVar10 = "_casual";
        if (bVar6) {
          pSVar10 = "_uniform";
        }
        pSVar9 = System_String__Concat_1969e50(pSVar9,pSVar10,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
            (pSVar4 = (pCVar1->fields).CustomSet, pSVar4 != (Settings_HumanCustomSet_o *)0x0)) &&
           (pSVar5 = (pSVar4->fields).Sex, pSVar5 != (Settings_IntSetting_o *)0x0)) {
          pSVar10 = "_F";
          if ((pSVar5->fields)._value == 0) {
            pSVar10 = "_M";
          }
          method_00 = (MethodInfo *)0x0;
          pSVar9 = System_String__Concat_1969e50(pSVar9,pSVar10,(MethodInfo *)0x0);
          local_res8[0] =
               System_Linq_Enumerable__Last_char_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar8,
                          (MethodInfo_6BF890 *)MethodInfo_System_Linq_Enumerable_Last_char);
          if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354e48);
          }
          pSVar8 = System_Char__ToString(local_res8,(System_IFormatProvider_o *)0x0,method_00);
          pSVar9 = System_String__Concat_1969e50(pSVar9,pSVar8,(MethodInfo *)0x0);
          pSVar9 = System_String__Concat_1969e50((__this->fields).CostumesPath,pSVar9,(MethodInfo *)0x0);
          return pSVar9;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$GetBrandMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBrandMesh (Characters_HumanSetupMeshes_o* __this, int32_t brand, const MethodInfo* method);
// 0x18216fc90
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18216fe33: jmp 0x18216fdec
// asm:   0x18216fe35: mov rdx, qword ptr [rip + 0x1f387b4]  ; "character_brand_arm_r_0"
// asm:   0x18216fe3c: jmp 0x18216fdec
// asm:   0x18216fe3e: mov rdx, qword ptr [rip + 0x1f386c3]  ; "character_brand_arm_l_0"
// asm:   0x18216fe45: jmp 0x18216fdec

System_String_o *
Characters_HumanSetupMeshes__GetBrandMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t brand,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  Settings_HumanCustomSet_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  bool bVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_String_o *pSVar8;
  
  if (Il2CppMethodInitialized_184346cc3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_arm_r_0");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_chest_f_0");
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_chest_m_0");
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_back_m_0");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_back_f_0");
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_arm_l_0");
    Il2CppMethodInitialized_184346cc3 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) &&
     (pSVar7 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Type"),
     pSVar7 != (System_Xml_Schema_XmlSchema_o *)0x0)) {
    pSVar3 = pSVar7->klass;
    pSVar8 = (System_String_o *)
             (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar7,(UnityEngine_GameObject_o *)(pSVar3->vtable)._9_SetUnhandledAttributes.method,
                        (MethodInfo *)pSVar3);
    if (pSVar8 != (System_String_o *)0x0) {
      bVar6 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
      if (!bVar6) {
label_18216fe47:
        return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      pSVar8 = "character_brand_arm_l_0";
      if ((brand == 1) || (pSVar8 = "character_brand_arm_r_0", brand == 2)) {
label_18216fdec:
        pSVar8 = System_String__Concat_1969e50((__this->fields).CostumesPath,pSVar8,(MethodInfo *)0x0);
        return pSVar8;
      }
      if (brand == 3) {
        pCVar1 = (__this->fields)._setup;
        if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
            (pSVar4 = (pCVar1->fields).CustomSet, pSVar4 != (Settings_HumanCustomSet_o *)0x0)) &&
           (pSVar5 = (pSVar4->fields).Sex, pSVar5 != (Settings_IntSetting_o *)0x0)) {
          pSVar8 = "character_brand_chest_f_0";
          if ((pSVar5->fields)._value == 0) {
            pSVar8 = "character_brand_chest_m_0";
          }
          goto label_18216fdec;
        }
      }
      else {
        if (brand != 4) goto label_18216fe47;
        pCVar1 = (__this->fields)._setup;
        if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
            (pSVar4 = (pCVar1->fields).CustomSet, pSVar4 != (Settings_HumanCustomSet_o *)0x0)) &&
           (pSVar5 = (pSVar4->fields).Sex, pSVar5 != (Settings_IntSetting_o *)0x0)) {
          pSVar8 = "character_brand_back_f_0";
          if ((pSVar5->fields)._value == 0) {
            pSVar8 = "character_brand_back_m_0";
          }
          goto label_18216fdec;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$GetEyeMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetEyeMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x1821704a0

System_String_o *
Characters_HumanSetupMeshes__GetEyeMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346cc4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"char_eyes");
    Il2CppMethodInitialized_184346cc4 = '\x01';
  }
  pSVar1 = System_String__Concat_1969e50((__this->fields).FacePath,"char_eyes",(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupMeshes$$GetFaceMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetFaceMesh (Characters_HumanSetupMeshes_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x1821704e0

System_String_o *
Characters_HumanSetupMeshes__GetFaceMesh
          (Characters_HumanSetupMeshes_o *__this,System_String_o *prefab,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346cc5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"char_face");
    Il2CppMethodInitialized_184346cc5 = '\x01';
  }
  bVar1 = System_String__op_Inequality
                    (prefab,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  pSVar2 = "char_face";
  if (bVar1) {
    pSVar2 = prefab;
  }
  pSVar2 = System_String__Concat_1969e50((__this->fields).FacePath,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Characters.HumanSetupMeshes$$GetGlassMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetGlassMesh (Characters_HumanSetupMeshes_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x182170600

System_String_o *
Characters_HumanSetupMeshes__GetGlassMesh
          (Characters_HumanSetupMeshes_o *__this,System_String_o *prefab,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346cc6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"char_glasses");
    Il2CppMethodInitialized_184346cc6 = '\x01';
  }
  bVar1 = System_String__op_Inequality
                    (prefab,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
  pSVar2 = "char_glasses";
  if (bVar1) {
    pSVar2 = prefab;
  }
  pSVar2 = System_String__Concat_1969e50((__this->fields).FacePath,pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Characters.HumanSetupMeshes$$GetHairMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHairMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x182170750

System_String_o *
Characters_HumanSetupMeshes__GetHairMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  bool bVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184346cc7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    Il2CppMethodInitialized_184346cc7 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentHair, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Texture");
    if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar3 = pSVar5->klass;
      pSVar6 = (System_String_o *)
               (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar5,(UnityEngine_GameObject_o *)(pSVar3->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar3);
      bVar4 = System_String__op_Equality
                        (pSVar6,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      if (!bVar4) {
        pSVar6 = System_String__Concat_1969e50((__this->fields).HairsPath,pSVar6,(MethodInfo *)0x0);
        return pSVar6;
      }
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$GetHairClothMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHairClothMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x182170670

System_String_o *
Characters_HumanSetupMeshes__GetHairClothMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  bool bVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_String_o *str1;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184346cc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cloth");
    Il2CppMethodInitialized_184346cc8 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentHair, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    bVar4 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)(pSVar2,(MethodInfo *)"Cloth");
    if (!bVar4) {
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pSVar2 = (pCVar1->fields).CurrentHair, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pSVar6 = (__this->fields).HairsPath;
      pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Cloth");
      if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar3 = pSVar5->klass;
        str1 = (System_String_o *)
               (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar5,(UnityEngine_GameObject_o *)(pSVar3->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar3);
        pSVar6 = System_String__Concat_1969e50(pSVar6,str1,(MethodInfo *)0x0);
        return pSVar6;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$GetCapeMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetCapeMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x18216fe70

System_String_o *
Characters_HumanSetupMeshes__GetCapeMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_Xml_Schema_XmlSchema_c *pSVar5;
  bool bVar6;
  System_String_o *pSVar7;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  
  if (Il2CppMethodInitialized_184346cc9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"hair_longcurly2");
    il2cpp_codegen_initialize_runtime_metadata(&"hair_longbangs");
    il2cpp_codegen_initialize_runtime_metadata(&"hair_longcurly");
    il2cpp_codegen_initialize_runtime_metadata(&"hair_himecutvariant");
    il2cpp_codegen_initialize_runtime_metadata(&"hair_himecut");
    il2cpp_codegen_initialize_runtime_metadata(&"character_cloakee");
    il2cpp_codegen_initialize_runtime_metadata(&"character_cloakee_hooded");
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    il2cpp_codegen_initialize_runtime_metadata(&"hair_lacylong");
    il2cpp_codegen_initialize_runtime_metadata(&"hair_longanime");
    il2cpp_codegen_initialize_runtime_metadata(&"character_cloakee_hoodless");
    il2cpp_codegen_initialize_runtime_metadata(&"character_cape_0");
    Il2CppMethodInitialized_184346cc9 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
      (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 == (Settings_HumanCustomSet_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).Cape, pSVar3 == (Settings_IntSetting_o *)0x0)) {
label_182170110:
    ThrowNullReferenceException();
  }
  if ((pSVar3->fields)._value == 0) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((((((((__this->fields)._setup)->fields).CustomSet)->fields).Cape)->fields)._value != 2) {
    pSVar7 = System_String__Concat_1969e50
                       ((__this->fields).CostumesPath,"character_cape_0",(MethodInfo *)0x0);
    return pSVar7;
  }
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 == (Characters_HumanSetup_o *)0x0) goto label_182170110;
  bVar6 = Characters_HumanSetup__get_IsHooded(pCVar1,(MethodInfo *)0x0);
  if (bVar6) {
    pSVar7 = System_String__Concat_1969e50
                       ((__this->fields).CostumesPath,"character_cloakee_hooded",(MethodInfo *)0x0);
    return pSVar7;
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
     (pSVar4 = (pCVar1->fields).CurrentHair, pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_182170110;
  pSVar8 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)"Texture");
  if (pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_182170110;
  pSVar5 = pSVar8->klass;
  pSVar7 = (System_String_o *)
           (*(pSVar5->vtable)._9_SetUnhandledAttributes.methodPtr)
                     (pSVar8,(UnityEngine_GameObject_o *)(pSVar5->vtable)._9_SetUnhandledAttributes.method,
                      (MethodInfo *)pSVar5);
  bVar6 = System_String__op_Equality(pSVar7,"hair_longanime",(MethodInfo *)0x0);
  if (!bVar6) {
    bVar6 = System_String__op_Equality(pSVar7,"hair_longbangs",(MethodInfo *)0x0);
    if (!bVar6) {
      bVar6 = System_String__op_Equality(pSVar7,"hair_lacylong",(MethodInfo *)0x0);
      if (!bVar6) {
        bVar6 = System_String__op_Equality(pSVar7,"hair_himecut",(MethodInfo *)0x0);
        if (!bVar6) {
          bVar6 = System_String__op_Equality(pSVar7,"hair_himecutvariant",(MethodInfo *)0x0);
          if (!bVar6) {
            bVar6 = System_String__op_Equality(pSVar7,"hair_longcurly",(MethodInfo *)0x0);
            if (!bVar6) {
              bVar6 = System_String__op_Equality(pSVar7,"hair_longcurly2",(MethodInfo *)0x0);
              pSVar7 = (__this->fields).CostumesPath;
              if (!bVar6) {
                pSVar7 = System_String__Concat_1969e50(pSVar7,"character_cloakee",(MethodInfo *)0x0);
                return pSVar7;
              }
              goto label_1821700c8;
            }
          }
        }
      }
    }
  }
  pSVar7 = (__this->fields).CostumesPath;
label_1821700c8:
  pSVar7 = System_String__Concat_1969e50(pSVar7,"character_cloakee_hoodless",(MethodInfo *)0x0);
  return pSVar7;
}


// Characters.HumanSetupMeshes$$GetChestMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetChestMesh (Characters_HumanSetupMeshes_o* __this, int32_t chest, const MethodInfo* method);
// 0x182170120

System_String_o *
Characters_HumanSetupMeshes__GetChestMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t chest,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  Settings_HumanCustomSet_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  bool bVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_String_o *pSVar8;
  
  if (Il2CppMethodInitialized_184346cca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"body_blade_keeper_f_0");
    il2cpp_codegen_initialize_runtime_metadata(&"mikasa_asset_uni_0");
    il2cpp_codegen_initialize_runtime_metadata(&"Holster");
    il2cpp_codegen_initialize_runtime_metadata(&"Hoodie");
    il2cpp_codegen_initialize_runtime_metadata(&"char_cap_uni");
    il2cpp_codegen_initialize_runtime_metadata(&"body_blade_keeper_m_0");
    il2cpp_codegen_initialize_runtime_metadata(&"Scarf");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"char_cap_cas");
    il2cpp_codegen_initialize_runtime_metadata(&"mikasa_asset_cas_0");
    Il2CppMethodInitialized_184346cca = '\x01';
  }
  if (chest == 1) {
    pCVar1 = (__this->fields)._setup;
    if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
        (pSVar4 = (pCVar1->fields).CustomSet, pSVar4 != (Settings_HumanCustomSet_o *)0x0)) &&
       (pSVar5 = (pSVar4->fields).Cape, pSVar5 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar5->fields)._value == 2) goto label_182170471;
      pSVar2 = (((__this->fields)._setup)->fields).CurrentCostume;
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        bVar6 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)(pSVar2,(MethodInfo *)"Hoodie");
        if (!bVar6) goto label_182170471;
        pCVar1 = (__this->fields)._setup;
        if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
           (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          pSVar7 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar2,(MethodInfo *)"Type");
          if (pSVar7 != (System_Xml_Schema_XmlSchema_o *)0x0) {
            pSVar3 = pSVar7->klass;
            pSVar8 = (System_String_o *)
                     (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                               (pSVar7,(UnityEngine_GameObject_o *)
                                       (pSVar3->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar3)
            ;
            if (pSVar8 != (System_String_o *)0x0) {
              bVar6 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
              pSVar8 = (__this->fields).AccessoriesPath;
              if (!bVar6) {
                pSVar8 = System_String__Concat_1969e50(pSVar8,"char_cap_cas",(MethodInfo *)0x0);
                return pSVar8;
              }
              pSVar8 = System_String__Concat_1969e50(pSVar8,"char_cap_uni",(MethodInfo *)0x0);
              return pSVar8;
            }
          }
        }
      }
    }
  }
  else if (chest == 2) {
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      bVar6 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)(pSVar2,(MethodInfo *)"Holster");
      if (!bVar6) goto label_182170471;
      pCVar1 = (__this->fields)._setup;
      if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
          (pSVar4 = (pCVar1->fields).CustomSet, pSVar4 != (Settings_HumanCustomSet_o *)0x0)) &&
         (pSVar5 = (pSVar4->fields).Sex, pSVar5 != (Settings_IntSetting_o *)0x0)) {
        pSVar8 = (__this->fields).AccessoriesPath;
        if ((pSVar5->fields)._value != 0) {
          pSVar8 = System_String__Concat_1969e50(pSVar8,"body_blade_keeper_f_0",(MethodInfo *)0x0);
          return pSVar8;
        }
        pSVar8 = System_String__Concat_1969e50(pSVar8,"body_blade_keeper_m_0",(MethodInfo *)0x0);
        return pSVar8;
      }
    }
  }
  else {
    if (chest != 3) {
label_182170471:
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      bVar6 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)(pSVar2,(MethodInfo *)"Scarf");
      if (!bVar6) goto label_182170471;
      pCVar1 = (__this->fields)._setup;
      if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
         (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
        pSVar7 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Type");
        if (pSVar7 != (System_Xml_Schema_XmlSchema_o *)0x0) {
          pSVar3 = pSVar7->klass;
          pSVar8 = (System_String_o *)
                   (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                             (pSVar7,(UnityEngine_GameObject_o *)
                                     (pSVar3->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar3);
          if (pSVar8 != (System_String_o *)0x0) {
            bVar6 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
            pSVar8 = (__this->fields).CostumesPath;
            if (!bVar6) {
              pSVar8 = System_String__Concat_1969e50(pSVar8,"mikasa_asset_cas_0",(MethodInfo *)0x0);
              return pSVar8;
            }
            pSVar8 = System_String__Concat_1969e50(pSVar8,"mikasa_asset_uni_0",(MethodInfo *)0x0);
            return pSVar8;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


