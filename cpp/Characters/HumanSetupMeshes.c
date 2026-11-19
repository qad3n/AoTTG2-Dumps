// Type: Characters.HumanSetupMeshes
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/HumanSetupMeshes.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupMeshes.cs
// --------------------------------

// Characters.HumanSetupMeshes$$.ctor
// il2cpp: void Characters_HumanSetupMeshes___ctor (Characters_HumanSetupMeshes_o* __this, Characters_HumanSetup_o* setup, const MethodInfo* method);
// 0x5c06210

void Characters_HumanSetupMeshes___ctor
               (Characters_HumanSetupMeshes_o *__this,Characters_HumanSetup_o *setup,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754768a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Costumes/Prefabs/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Face/Prefabs/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Hairs/Prefabs/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Weapons/Prefabs/");
    il2cpp_codegen_initialize_runtime_metadata(&"Human/Parts/Accessories/Prefabs/");
    Il2CppMethodInitialized_0754768a = '\x01';
  }
  (__this->fields).CostumesPath = "Human/Parts/Costumes/Prefabs/";
  Il2CppCodeGenWriteBarrier(&(__this->fields).CostumesPath);
  (__this->fields).AccessoriesPath = "Human/Parts/Accessories/Prefabs/";
  Il2CppCodeGenWriteBarrier(&(__this->fields).AccessoriesPath);
  (__this->fields).HairsPath = "Human/Parts/Hairs/Prefabs/";
  Il2CppCodeGenWriteBarrier(&(__this->fields).HairsPath);
  (__this->fields).WeaponsPath = "Human/Parts/Weapons/Prefabs/";
  Il2CppCodeGenWriteBarrier(&(__this->fields).WeaponsPath);
  (__this->fields).FacePath = "Human/Parts/Face/Prefabs/";
  Il2CppCodeGenWriteBarrier(&(__this->fields).FacePath);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setup = setup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setup);
  return;
}


// Characters.HumanSetupMeshes$$GetBootsMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBootsMesh (Characters_HumanSetupMeshes_o* __this, int32_t boots, const MethodInfo* method);
// 0x5c06300

System_String_o *
Characters_HumanSetupMeshes__GetBootsMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t boots,MethodInfo *method)

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = boots;
  if (Il2CppMethodInitialized_0754768b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"character_leg_");
    Il2CppMethodInitialized_0754768b = '\x01';
  }
  pSVar1 = (__this->fields).CostumesPath;
  str2 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_5301f10(pSVar1,"character_leg_",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupMeshes$$GetHandMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHandMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x5c06360

System_String_o *
Characters_HumanSetupMeshes__GetHandMesh(Characters_HumanSetupMeshes_o *__this,bool left,MethodInfo *method)

{
  Characters_HumanSetup_o *__this_00;
  bool bVar1;
  System_String_o **ppSVar2;
  ulong uVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754768c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"_ts");
    il2cpp_codegen_initialize_runtime_metadata(&"_empty");
    il2cpp_codegen_initialize_runtime_metadata(&"character_hand_l");
    il2cpp_codegen_initialize_runtime_metadata(&"character_hand_r");
    il2cpp_codegen_initialize_runtime_metadata(&"_0");
    il2cpp_codegen_initialize_runtime_metadata(&"_ah_0");
    Il2CppMethodInitialized_0754768c = '\x01';
  }
  if (left) {
    ppSVar2 = &"character_hand_l";
  }
  else {
    ppSVar2 = &"character_hand_r";
  }
  __this_00 = (__this->fields)._setup;
  if (__this_00 == (Characters_HumanSetup_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = *ppSVar2;
  uVar3 = (ulong)(__this_00->fields).Weapon;
  if (uVar3 < 4) {
    ppSVar2 = (System_String_o **)(((System_String_o **[]){&"_0", &"_ah_0", &"_ts", &"_empty"}))[uVar3];
  }
  else {
    bVar1 = Characters_HumanSetup__get_HasWeapon(__this_00,(MethodInfo *)0x0);
    if (bVar1) goto label_05c0641d;
    ppSVar2 = &"_empty";
  }
  pSVar4 = System_String__Concat_52f0320(pSVar4,*ppSVar2,(MethodInfo *)0x0);
label_05c0641d:
  pSVar4 = System_String__Concat_52f0320((__this->fields).CostumesPath,pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// Characters.HumanSetupMeshes$$GetArmMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetArmMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x5c06440

System_String_o *
Characters_HumanSetupMeshes__GetArmMesh(Characters_HumanSetupMeshes_o *__this,bool left,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *__this_00;
  System_String_o *pSVar5;
  System_String_o **ppSVar6;
  
  if (Il2CppMethodInitialized_0754768d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"_arm_L");
    il2cpp_codegen_initialize_runtime_metadata(&"_uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"_arm_R");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"_casual_arm_AH_R");
    il2cpp_codegen_initialize_runtime_metadata(&"_casual_arm_AH_L");
    il2cpp_codegen_initialize_runtime_metadata(&"player");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"_casual");
    Il2CppMethodInitialized_0754768d = '\x01';
  }
  pSVar5 = "player";
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
    if (((pCVar1->fields).Weapon | 2U) == 3) {
      ppSVar3 = &"_casual_arm_AH_R";
      ppSVar6 = &"_casual_arm_AH_L";
label_05c0658b:
      if (!left) {
        ppSVar6 = ppSVar3;
      }
      pSVar5 = System_String__Concat_5301f10((__this->fields).CostumesPath,pSVar5,*ppSVar6,(MethodInfo *)0x0);
      return pSVar5;
    }
    pSVar4 = (pCVar1->fields).CurrentCostume;
    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,"Type",(pSVar4->klass->vtable)._7_get_Item.method);
      if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        __this_00 = (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                              (pSVar4,*(MethodInfo **)((long)&(pSVar4->klass->vtable)._9_get_Value + 8));
        if (__this_00 != (System_String_o *)0x0) {
          bVar2 = System_String__StartsWith(__this_00,"Uniform",(MethodInfo *)0x0);
          if (bVar2) {
            ppSVar6 = &"_uniform";
          }
          else {
            ppSVar6 = &"_casual";
          }
          pSVar5 = System_String__Concat_52f0320(pSVar5,*ppSVar6,(MethodInfo *)0x0);
          ppSVar3 = &"_arm_R";
          ppSVar6 = &"_arm_L";
          goto label_05c0658b;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$Get3dmgMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__Get3dmgMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x5c065b0

System_String_o *
Characters_HumanSetupMeshes__Get3dmgMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  System_String_o **ppSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754768e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"3dmg_2");
    il2cpp_codegen_initialize_runtime_metadata(&"3dmg_3");
    il2cpp_codegen_initialize_runtime_metadata(&"3dmg");
    Il2CppMethodInitialized_0754768e = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (pCVar2 == (Characters_HumanSetup_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (pCVar2->fields).Weapon;
  if (iVar1 == 3) {
    ppSVar3 = &"3dmg_3";
    pSVar4 = (__this->fields).AccessoriesPath;
  }
  else {
    ppSVar3 = &"3dmg";
    pSVar4 = (__this->fields).AccessoriesPath;
    if (iVar1 == 1) {
      ppSVar3 = &"3dmg_2";
    }
  }
  pSVar4 = System_String__Concat_52f0320(pSVar4,*ppSVar3,(MethodInfo *)0x0);
  return pSVar4;
}


// Characters.HumanSetupMeshes$$GetBeltMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBeltMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x5c06640

System_String_o *
Characters_HumanSetupMeshes__GetBeltMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754768f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"3dmg_belt");
    Il2CppMethodInitialized_0754768f = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 == (Characters_HumanSetup_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((pCVar1->fields).Weapon | 2U) == 3) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pSVar2 = System_String__Concat_52f0320
                     ((__this->fields).AccessoriesPath,"3dmg_belt",(MethodInfo *)0x0);
  return pSVar2;
}


// Characters.HumanSetupMeshes$$GetGasMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetGasMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x5c066b0

System_String_o *
Characters_HumanSetupMeshes__GetGasMesh(Characters_HumanSetupMeshes_o *__this,bool left,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  System_String_o **ppSVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_07547690 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"char_gun_mag_l");
    il2cpp_codegen_initialize_runtime_metadata(&"char_gun_mag_r");
    il2cpp_codegen_initialize_runtime_metadata(&"scabbard_L");
    il2cpp_codegen_initialize_runtime_metadata(&"scabbard_R");
    Il2CppMethodInitialized_07547690 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 == (Characters_HumanSetup_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (((pCVar1->fields).Weapon | 2U) == 3) {
    ppSVar2 = &"char_gun_mag_r";
    ppSVar4 = &"char_gun_mag_l";
  }
  else {
    ppSVar2 = &"scabbard_R";
    ppSVar4 = &"scabbard_L";
  }
  if (!left) {
    ppSVar4 = ppSVar2;
  }
  pSVar3 = System_String__Concat_52f0320((__this->fields).AccessoriesPath,*ppSVar4,(MethodInfo *)0x0);
  return pSVar3;
}


// Characters.HumanSetupMeshes$$GetWeaponMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetWeaponMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x5c06750

System_String_o *
Characters_HumanSetupMeshes__GetWeaponMesh(Characters_HumanSetupMeshes_o *__this,bool left,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  bool bVar3;
  System_String_o **ppSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_07547691 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"blade_R");
    il2cpp_codegen_initialize_runtime_metadata(&"blade_L");
    il2cpp_codegen_initialize_runtime_metadata(&"character_gun_r_0");
    il2cpp_codegen_initialize_runtime_metadata(&"thunderspear_r");
    il2cpp_codegen_initialize_runtime_metadata(&"apg_R");
    il2cpp_codegen_initialize_runtime_metadata(&"thunderspear_l");
    il2cpp_codegen_initialize_runtime_metadata(&"character_gun_l_0");
    il2cpp_codegen_initialize_runtime_metadata(&"apg_L");
    Il2CppMethodInitialized_07547691 = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (pCVar2 != (Characters_HumanSetup_o *)0x0) {
    bVar3 = Characters_HumanSetup__get_HasWeapon(pCVar2,(MethodInfo *)0x0);
    if (!bVar3) {
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pCVar2 = (__this->fields)._setup;
    if (pCVar2 != (Characters_HumanSetup_o *)0x0) {
      iVar1 = (pCVar2->fields).Weapon;
      if (iVar1 == 3) {
        pSVar5 = (__this->fields).WeaponsPath;
        if (left) {
          ppSVar4 = &"apg_L";
        }
        else {
          ppSVar4 = &"apg_R";
        }
      }
      else if (iVar1 == 2) {
        pSVar5 = (__this->fields).WeaponsPath;
        if (left) {
          ppSVar4 = &"thunderspear_l";
        }
        else {
          ppSVar4 = &"thunderspear_r";
        }
      }
      else if (iVar1 == 1) {
        pSVar5 = (__this->fields).WeaponsPath;
        if (left) {
          ppSVar4 = &"character_gun_l_0";
        }
        else {
          ppSVar4 = &"character_gun_r_0";
        }
      }
      else {
        pSVar5 = (__this->fields).WeaponsPath;
        if (left) {
          ppSVar4 = &"blade_L";
        }
        else {
          ppSVar4 = &"blade_R";
        }
      }
      pSVar5 = System_String__Concat_52f0320(pSVar5,*ppSVar4,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$GetBodyMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBodyMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x5c068a0

System_String_o *
Characters_HumanSetupMeshes__GetBodyMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  bool bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o **ppSVar7;
  System_String_o *pSVar8;
  uint16_t local_1a;
  
  if (Il2CppMethodInitialized_07547692 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Last_char);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"_F");
    il2cpp_codegen_initialize_runtime_metadata(&"_uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"_M");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"player");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"_casual");
    Il2CppMethodInitialized_07547692 = '\x01';
  }
  pSVar8 = "player";
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar5 = (pCVar1->fields).CurrentCostume, pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar5,"Type",(pSVar5->klass->vtable)._7_get_Item.method);
    if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar6 = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar5,*(MethodInfo **)((long)&(pSVar5->klass->vtable)._9_get_Value + 8));
      if (pSVar6 != (System_String_o *)0x0) {
        bVar4 = System_String__StartsWith(pSVar6,"Uniform",(MethodInfo *)0x0);
        if (bVar4) {
          ppSVar7 = &"_uniform";
        }
        else {
          ppSVar7 = &"_casual";
        }
        pSVar8 = System_String__Concat_52f0320(pSVar8,*ppSVar7,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
            (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
           (pSVar3 = (pSVar2->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
          if ((pSVar3->fields)._value == 0) {
            ppSVar7 = &"_M";
          }
          else {
            ppSVar7 = &"_F";
          }
          pSVar8 = System_String__Concat_52f0320(pSVar8,*ppSVar7,(MethodInfo *)0x0);
          local_1a = System_Linq_Enumerable__Last_char_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar6,
                                (MethodInfo_34EE680 *)MethodInfo_System_Linq_Enumerable_Last_char);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          pSVar6 = System_Char__ToString(&local_1a,(MethodInfo *)0x0);
          pSVar8 = System_String__Concat_52f0320(pSVar8,pSVar6,(MethodInfo *)0x0);
          pSVar8 = System_String__Concat_52f0320((__this->fields).CostumesPath,pSVar8,(MethodInfo *)0x0);
          return pSVar8;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$GetBrandMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBrandMesh (Characters_HumanSetupMeshes_o* __this, int32_t brand, const MethodInfo* method);
// 0x5c06a80

System_String_o *
Characters_HumanSetupMeshes__GetBrandMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t brand,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  bool bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o **ppSVar7;
  
  if (Il2CppMethodInitialized_07547693 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_arm_r_0");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_chest_f_0");
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_chest_m_0");
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_back_m_0");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_back_f_0");
    il2cpp_codegen_initialize_runtime_metadata(&"character_brand_arm_l_0");
    Il2CppMethodInitialized_07547693 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
       (pSVar5 = (pCVar1->fields).CurrentCostume, pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
      (pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                          (pSVar5,"Type",(pSVar5->klass->vtable)._7_get_Item.method),
      pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
     (pSVar6 = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar5,*(MethodInfo **)((long)&(pSVar5->klass->vtable)._9_get_Value + 8)),
     pSVar6 == (System_String_o *)0x0)) goto label_05c06c50;
  bVar4 = System_String__StartsWith(pSVar6,"Uniform",(MethodInfo *)0x0);
  if (bVar4) {
    switch(brand) {
    case 1:
      pSVar6 = (__this->fields).CostumesPath;
      ppSVar7 = &"character_brand_arm_l_0";
      break;
    case 2:
      pSVar6 = (__this->fields).CostumesPath;
      ppSVar7 = &"character_brand_arm_r_0";
      break;
    case 3:
      pCVar1 = (__this->fields)._setup;
      if (((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
          (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 == (Settings_HumanCustomSet_o *)0x0)) ||
         (pSVar3 = (pSVar2->fields).Sex, pSVar3 == (Settings_IntSetting_o *)0x0)) {
label_05c06c50:
        ThrowNullReferenceException();
      }
      pSVar6 = (__this->fields).CostumesPath;
      if ((pSVar3->fields)._value == 0) {
        ppSVar7 = &"character_brand_chest_m_0";
      }
      else {
        ppSVar7 = &"character_brand_chest_f_0";
      }
      break;
    case 4:
      pCVar1 = (__this->fields)._setup;
      if (((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
          (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 == (Settings_HumanCustomSet_o *)0x0)) ||
         (pSVar3 = (pSVar2->fields).Sex, pSVar3 == (Settings_IntSetting_o *)0x0)) goto label_05c06c50;
      pSVar6 = (__this->fields).CostumesPath;
      if ((pSVar3->fields)._value == 0) {
        ppSVar7 = &"character_brand_back_m_0";
      }
      else {
        ppSVar7 = &"character_brand_back_f_0";
      }
      break;
    default:
      goto switchD_05c06b8e_default;
    }
    pSVar6 = System_String__Concat_52f0320(pSVar6,*ppSVar7,(MethodInfo *)0x0);
    return pSVar6;
  }
switchD_05c06b8e_default:
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Characters.HumanSetupMeshes$$GetEyeMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetEyeMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x5c06c60

System_String_o *
Characters_HumanSetupMeshes__GetEyeMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07547694 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"char_eyes");
    Il2CppMethodInitialized_07547694 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320((__this->fields).FacePath,"char_eyes",(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupMeshes$$GetFaceMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetFaceMesh (Characters_HumanSetupMeshes_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x5c06ca0

System_String_o *
Characters_HumanSetupMeshes__GetFaceMesh
          (Characters_HumanSetupMeshes_o *__this,System_String_o *prefab,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547695 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"char_face");
    Il2CppMethodInitialized_07547695 = '\x01';
  }
  bVar1 = System_String__op_Inequality
                    (prefab,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (!bVar1) {
    prefab = "char_face";
  }
  pSVar2 = System_String__Concat_52f0320((__this->fields).FacePath,prefab,(MethodInfo *)0x0);
  return pSVar2;
}


// Characters.HumanSetupMeshes$$GetGlassMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetGlassMesh (Characters_HumanSetupMeshes_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x5c06d10

System_String_o *
Characters_HumanSetupMeshes__GetGlassMesh
          (Characters_HumanSetupMeshes_o *__this,System_String_o *prefab,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07547696 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"char_glasses");
    Il2CppMethodInitialized_07547696 = '\x01';
  }
  bVar1 = System_String__op_Inequality
                    (prefab,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
  if (!bVar1) {
    prefab = "char_glasses";
  }
  pSVar2 = System_String__Concat_52f0320((__this->fields).FacePath,prefab,(MethodInfo *)0x0);
  return pSVar2;
}


// Characters.HumanSetupMeshes$$GetHairMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHairMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x5c06d80

System_String_o *
Characters_HumanSetupMeshes__GetHairMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547697 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    Il2CppMethodInitialized_07547697 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar3 = (pCVar1->fields).CurrentHair, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar3,"Texture",(pSVar3->klass->vtable)._7_get_Item.method);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,*(MethodInfo **)((long)&(pSVar3->klass->vtable)._9_get_Value + 8));
      bVar2 = System_String__op_Equality
                        (pSVar4,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      if (bVar2) {
        return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      pSVar4 = System_String__Concat_52f0320((__this->fields).HairsPath,pSVar4,(MethodInfo *)0x0);
      return pSVar4;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$GetHairClothMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHairClothMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x5c06e50

System_String_o *
Characters_HumanSetupMeshes__GetHairClothMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *str1;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07547698 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Cloth");
    Il2CppMethodInitialized_07547698 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar3 = (pCVar1->fields).CurrentHair, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    bVar2 = (*(pSVar3->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar3,"Cloth",(pSVar3->klass->vtable)._28_HasKey.method);
    if (!bVar2) {
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pSVar3 = (pCVar1->fields).CurrentHair, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pSVar4 = (__this->fields).HairsPath;
      pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar3,"Cloth",(pSVar3->klass->vtable)._7_get_Item.method);
      if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        str1 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,*(MethodInfo **)((long)&(pSVar3->klass->vtable)._9_get_Value + 8));
        pSVar4 = System_String__Concat_52f0320(pSVar4,str1,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupMeshes$$GetCapeMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetCapeMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x5c06f30

System_String_o *
Characters_HumanSetupMeshes__GetCapeMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool bVar5;
  System_String_o **ppSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *str0;
  
  if (Il2CppMethodInitialized_07547699 == '\0') {
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
    Il2CppMethodInitialized_07547699 = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (((pCVar2 == (Characters_HumanSetup_o *)0x0) ||
      (pSVar3 = (pCVar2->fields).CustomSet, pSVar3 == (Settings_HumanCustomSet_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).Cape, pSVar4 == (Settings_IntSetting_o *)0x0)) goto label_05c0719a;
  iVar1 = (pSVar4->fields)._value;
  if (iVar1 == 2) {
    bVar5 = Characters_HumanSetup__get_IsHooded(pCVar2,(MethodInfo *)0x0);
    if (!bVar5) {
      pCVar2 = (__this->fields)._setup;
      if ((pCVar2 == (Characters_HumanSetup_o *)0x0) ||
         (pSVar7 = (pCVar2->fields).CurrentHair, pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0)) {
label_05c0719a:
        ThrowNullReferenceException();
      }
      pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar7,"Texture",(pSVar7->klass->vtable)._7_get_Item.method);
      if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c0719a;
      pSVar8 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar7,*(MethodInfo **)((long)&(pSVar7->klass->vtable)._9_get_Value + 8));
      bVar5 = System_String__op_Equality(pSVar8,"hair_longanime",(MethodInfo *)0x0);
      ppSVar6 = &"character_cloakee_hoodless";
      if (!bVar5) {
        bVar5 = System_String__op_Equality(pSVar8,"hair_longbangs",(MethodInfo *)0x0);
        if (!bVar5) {
          bVar5 = System_String__op_Equality(pSVar8,"hair_lacylong",(MethodInfo *)0x0);
          if (!bVar5) {
            bVar5 = System_String__op_Equality(pSVar8,"hair_himecut",(MethodInfo *)0x0);
            if (!bVar5) {
              bVar5 = System_String__op_Equality(pSVar8,"hair_himecutvariant",(MethodInfo *)0x0);
              if (!bVar5) {
                bVar5 = System_String__op_Equality(pSVar8,"hair_longcurly",(MethodInfo *)0x0);
                if (!bVar5) {
                  bVar5 = System_String__op_Equality(pSVar8,"hair_longcurly2",(MethodInfo *)0x0);
                  if (bVar5) {
                    ppSVar6 = &"character_cloakee_hoodless";
                  }
                  else {
                    ppSVar6 = &"character_cloakee";
                  }
                }
              }
            }
          }
        }
      }
      str0 = (__this->fields).CostumesPath;
      pSVar8 = *ppSVar6;
      goto label_05c0718e;
    }
    str0 = (__this->fields).CostumesPath;
    ppSVar6 = &"character_cloakee_hooded";
  }
  else {
    if (iVar1 == 0) {
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    str0 = (__this->fields).CostumesPath;
    ppSVar6 = &"character_cape_0";
  }
  pSVar8 = *ppSVar6;
label_05c0718e:
  pSVar8 = System_String__Concat_52f0320(str0,pSVar8,(MethodInfo *)0x0);
  return pSVar8;
}


// Characters.HumanSetupMeshes$$GetChestMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetChestMesh (Characters_HumanSetupMeshes_o* __this, int32_t chest, const MethodInfo* method);
// 0x5c071a0

System_String_o *
Characters_HumanSetupMeshes__GetChestMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t chest,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  bool bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o **ppSVar7;
  
  if (Il2CppMethodInitialized_0754769a == '\0') {
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
    Il2CppMethodInitialized_0754769a = '\x01';
  }
  if (chest == 3) {
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pSVar5 = (pCVar1->fields).CurrentCostume, pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      bVar4 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)
                        (pSVar5,"Scarf",(pSVar5->klass->vtable)._28_HasKey.method);
      if (!bVar4) goto label_05c0748b;
      pCVar1 = (__this->fields)._setup;
      if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
         (pSVar5 = (pCVar1->fields).CurrentCostume, pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
        pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar5,"Type",(pSVar5->klass->vtable)._7_get_Item.method);
        if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSVar6 = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar5,*(MethodInfo **)((long)&(pSVar5->klass->vtable)._9_get_Value + 8));
          if (pSVar6 != (System_String_o *)0x0) {
            bVar4 = System_String__StartsWith(pSVar6,"Uniform",(MethodInfo *)0x0);
            pSVar6 = (__this->fields).CostumesPath;
            if (bVar4) {
              ppSVar7 = &"mikasa_asset_uni_0";
            }
            else {
              ppSVar7 = &"mikasa_asset_cas_0";
            }
            goto label_05c074c3;
          }
        }
      }
    }
  }
  else if (chest == 2) {
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pSVar5 = (pCVar1->fields).CurrentCostume, pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      bVar4 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)
                        (pSVar5,"Holster",(pSVar5->klass->vtable)._28_HasKey.method);
      if (!bVar4) goto label_05c0748b;
      pCVar1 = (__this->fields)._setup;
      if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
          (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
         (pSVar3 = (pSVar2->fields).Sex, pSVar3 != (Settings_IntSetting_o *)0x0)) {
        pSVar6 = (__this->fields).AccessoriesPath;
        if ((pSVar3->fields)._value == 0) {
          ppSVar7 = &"body_blade_keeper_m_0";
        }
        else {
          ppSVar7 = &"body_blade_keeper_f_0";
        }
label_05c074c3:
        pSVar6 = System_String__Concat_52f0320(pSVar6,*ppSVar7,(MethodInfo *)0x0);
        return pSVar6;
      }
    }
  }
  else {
    if (chest != 1) {
label_05c0748b:
      return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    pCVar1 = (__this->fields)._setup;
    if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
        (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
       (pSVar3 = (pSVar2->fields).Cape, pSVar3 != (Settings_IntSetting_o *)0x0)) {
      if ((pSVar3->fields)._value == 2) goto label_05c0748b;
      pSVar5 = (pCVar1->fields).CurrentCostume;
      if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        bVar4 = (*(pSVar5->klass->vtable)._28_HasKey.methodPtr)
                          (pSVar5,"Hoodie",(pSVar5->klass->vtable)._28_HasKey.method);
        if (!bVar4) goto label_05c0748b;
        pCVar1 = (__this->fields)._setup;
        if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
           (pSVar5 = (pCVar1->fields).CurrentCostume, pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          pSVar5 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar5,"Type",(pSVar5->klass->vtable)._7_get_Item.method);
          if (pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar6 = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar5,*(MethodInfo **)((long)&(pSVar5->klass->vtable)._9_get_Value + 8));
            if (pSVar6 != (System_String_o *)0x0) {
              bVar4 = System_String__StartsWith(pSVar6,"Uniform",(MethodInfo *)0x0);
              pSVar6 = (__this->fields).AccessoriesPath;
              if (bVar4) {
                ppSVar7 = &"char_cap_uni";
              }
              else {
                ppSVar7 = &"char_cap_cas";
              }
              goto label_05c074c3;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


