// Type: Characters.HumanSetupMeshes
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HumanSetupMeshes.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Setup/HumanSetupMeshes.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HumanSetupMeshes$$.ctor
// il2cpp: void Characters_HumanSetupMeshes___ctor (Characters_HumanSetupMeshes_o* __this, Characters_HumanSetup_o* setup, const MethodInfo* method);
// 0x3fdb2e0

void Characters_HumanSetupMeshes___ctor
               (Characters_HumanSetupMeshes_o *__this,Characters_HumanSetup_o *setup,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  
  if (DAT_0570413f == '\0') {
    il2cpp_init_method_metadata(&"Human/Parts/Costumes/Prefabs/");
    il2cpp_init_method_metadata(&"Human/Parts/Face/Prefabs/");
    il2cpp_init_method_metadata(&"Human/Parts/Hairs/Prefabs/");
    il2cpp_init_method_metadata(&"Human/Parts/Weapons/Prefabs/");
    il2cpp_init_method_metadata(&"Human/Parts/Accessories/Prefabs/");
    DAT_0570413f = '\x01';
    method = extraout_RDX;
  }
  pSVar1 = "Human/Parts/Costumes/Prefabs/";
  (__this->fields).CostumesPath = "Human/Parts/Costumes/Prefabs/";
  il2cpp_runtime_glue(&(__this->fields).CostumesPath,pSVar1,method);
  (__this->fields).AccessoriesPath = "Human/Parts/Accessories/Prefabs/";
  il2cpp_runtime_glue(&(__this->fields).AccessoriesPath);
  (__this->fields).HairsPath = "Human/Parts/Hairs/Prefabs/";
  il2cpp_runtime_glue(&(__this->fields).HairsPath);
  (__this->fields).WeaponsPath = "Human/Parts/Weapons/Prefabs/";
  il2cpp_runtime_glue(&(__this->fields).WeaponsPath);
  (__this->fields).FacePath = "Human/Parts/Face/Prefabs/";
  il2cpp_runtime_glue(&(__this->fields).FacePath);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setup = setup;
  il2cpp_runtime_glue(&__this->fields,setup);
  return;
}


// Characters.HumanSetupMeshes$$GetBootsMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBootsMesh (Characters_HumanSetupMeshes_o* __this, int32_t boots, const MethodInfo* method);
// 0x3fe4380

System_String_o *
Characters_HumanSetupMeshes__GetBootsMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t boots,MethodInfo *method)

{
  System_String_o *str2;
  System_String_o *pSVar1;
  int32_t local_c;
  
  local_c = boots;
  if (DAT_05704140 == '\0') {
    il2cpp_init_method_metadata(&"character_leg_");
    DAT_05704140 = '\x01';
  }
  pSVar1 = (__this->fields).CostumesPath;
  str2 = System_Int32__ToString((int32_t)&local_c,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,"character_leg_",str2,(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupMeshes$$GetHandMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHandMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x3fe42b0

System_String_o *
Characters_HumanSetupMeshes__GetHandMesh
          (Characters_HumanSetupMeshes_o *__this,bool_conflict left,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  undefined8 *puVar2;
  ulong uVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704141 == '\0') {
    il2cpp_init_method_metadata(&"_ts");
    il2cpp_init_method_metadata(&"_empty");
    il2cpp_init_method_metadata(&"character_hand_l");
    il2cpp_init_method_metadata(&"character_hand_r");
    il2cpp_init_method_metadata(&"_0");
    il2cpp_init_method_metadata(&"_ah_0");
    DAT_05704141 = '\x01';
  }
  if ((char)left == '\0') {
    puVar2 = &"character_hand_r";
    pCVar1 = (__this->fields)._setup;
  }
  else {
    puVar2 = &"character_hand_l";
    pCVar1 = (__this->fields)._setup;
  }
  if (pCVar1 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar4 = (System_String_o *)*puVar2;
  uVar3 = (ulong)(pCVar1->fields).Weapon;
  if (uVar3 < 4) {
    pSVar4 = System_String__Concat
                       (pSVar4,*(System_String_o **)(&PTR_DAT_051af8c0)[uVar3],(MethodInfo *)0x0);
  }
  pSVar4 = System_String__Concat((__this->fields).CostumesPath,pSVar4,(MethodInfo *)0x0);
  return pSVar4;
}


// Characters.HumanSetupMeshes$$GetArmMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetArmMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x3fe3e60

System_String_o *
Characters_HumanSetupMeshes__GetArmMesh
          (Characters_HumanSetupMeshes_o *__this,bool_conflict left,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  bool_conflict bVar3;
  undefined8 *puVar4;
  long *plVar5;
  System_String_o *__this_00;
  System_String_o *pSVar6;
  undefined8 *puVar7;
  
  if (DAT_05704142 == '\0') {
    il2cpp_init_method_metadata(&"_arm_L");
    il2cpp_init_method_metadata(&"_uniform");
    il2cpp_init_method_metadata(&"_arm_R");
    il2cpp_init_method_metadata(&"Type");
    il2cpp_init_method_metadata(&"_casual_arm_AH_R");
    il2cpp_init_method_metadata(&"_casual_arm_AH_L");
    il2cpp_init_method_metadata(&"player");
    il2cpp_init_method_metadata(&"Uniform");
    il2cpp_init_method_metadata(&"_casual");
    DAT_05704142 = '\x01';
  }
  pSVar6 = "player";
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
    if (((pCVar1->fields).Weapon | 2U) == 3) {
      puVar4 = &"_casual_arm_AH_R";
      puVar7 = &"_casual_arm_AH_L";
LAB_03fe3fab:
      if ((char)left == '\0') {
        puVar7 = puVar4;
      }
      pSVar6 = System_String__Concat
                         ((__this->fields).CostumesPath,pSVar6,(System_String_o *)*puVar7,
                          (MethodInfo *)0x0);
      return pSVar6;
    }
    pSVar2 = (pCVar1->fields).CurrentCostume;
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      plVar5 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar2,"Type",(pSVar2->klass->vtable)._7_get_Item.method);
      if (plVar5 != (long *)0x0) {
        __this_00 = (System_String_o *)
                    (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        if (__this_00 != (System_String_o *)0x0) {
          bVar3 = System_String__StartsWith(__this_00,"Uniform",(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            puVar7 = &"_casual";
          }
          else {
            puVar7 = &"_uniform";
          }
          pSVar6 = System_String__Concat(pSVar6,(System_String_o *)*puVar7,(MethodInfo *)0x0);
          puVar4 = &"_arm_R";
          puVar7 = (undefined8 *)&"_arm_L";
          goto LAB_03fe3fab;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMeshes$$Get3dmgMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__Get3dmgMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x3fe1b50

System_String_o *
Characters_HumanSetupMeshes__Get3dmgMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  undefined8 *puVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704143 == '\0') {
    il2cpp_init_method_metadata(&"3dmg_2");
    il2cpp_init_method_metadata(&"3dmg_3");
    il2cpp_init_method_metadata(&"3dmg");
    DAT_05704143 = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (pCVar2 != (Characters_HumanSetup_o *)0x0) {
    iVar1 = (pCVar2->fields).Weapon;
    if (iVar1 == 3) {
      puVar3 = &"3dmg_3";
    }
    else {
      puVar3 = &"3dmg";
      if (iVar1 == 1) {
        puVar3 = &"3dmg_2";
      }
    }
    pSVar4 = System_String__Concat
                       ((__this->fields).AccessoriesPath,(System_String_o *)*puVar3,
                        (MethodInfo *)0x0);
    return pSVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMeshes$$GetBeltMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBeltMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x3fe1d50

System_String_o *
Characters_HumanSetupMeshes__GetBeltMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704144 == '\0') {
    il2cpp_init_method_metadata(&"3dmg_belt");
    DAT_05704144 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
    if (((pCVar1->fields).Weapon | 2U) == 3) {
      return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    pSVar2 = System_String__Concat((__this->fields).AccessoriesPath,"3dmg_belt",(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMeshes$$GetGasMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetGasMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x3fe1dc0

System_String_o *
Characters_HumanSetupMeshes__GetGasMesh
          (Characters_HumanSetupMeshes_o *__this,bool_conflict left,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  undefined8 *puVar2;
  System_String_o *pSVar3;
  undefined8 *puVar4;
  
  if (DAT_05704145 == '\0') {
    il2cpp_init_method_metadata(&"char_gun_mag_l");
    il2cpp_init_method_metadata(&"char_gun_mag_r");
    il2cpp_init_method_metadata(&"scabbard_L");
    il2cpp_init_method_metadata(&"scabbard_R");
    DAT_05704145 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
    if (((pCVar1->fields).Weapon | 2U) == 3) {
      puVar2 = &"char_gun_mag_r";
      puVar4 = &"char_gun_mag_l";
    }
    else {
      puVar2 = &"scabbard_R";
      puVar4 = (undefined8 *)&"scabbard_L";
    }
    if ((char)left == '\0') {
      puVar4 = puVar2;
    }
    pSVar3 = System_String__Concat
                       ((__this->fields).AccessoriesPath,(System_String_o *)*puVar4,
                        (MethodInfo *)0x0);
    return pSVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMeshes$$GetWeaponMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetWeaponMesh (Characters_HumanSetupMeshes_o* __this, bool left, const MethodInfo* method);
// 0x3fe1e60

System_String_o *
Characters_HumanSetupMeshes__GetWeaponMesh
          (Characters_HumanSetupMeshes_o *__this,bool_conflict left,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  undefined8 *puVar3;
  System_String_o *pSVar4;
  undefined8 *puVar5;
  
  if (DAT_05704146 == '\0') {
    il2cpp_init_method_metadata(&"blade_R");
    il2cpp_init_method_metadata(&"blade_L");
    il2cpp_init_method_metadata(&"character_gun_r_0");
    il2cpp_init_method_metadata(&"thunderspear_r");
    il2cpp_init_method_metadata(&"apg_R");
    il2cpp_init_method_metadata(&"thunderspear_l");
    il2cpp_init_method_metadata(&"character_gun_l_0");
    il2cpp_init_method_metadata(&"apg_L");
    DAT_05704146 = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (pCVar2 != (Characters_HumanSetup_o *)0x0) {
    iVar1 = (pCVar2->fields).Weapon;
    if (iVar1 == 1) {
      puVar5 = &"character_gun_r_0";
      puVar3 = (undefined8 *)&"character_gun_l_0";
    }
    else if (iVar1 == 3) {
      puVar5 = &"apg_R";
      puVar3 = &"apg_L";
    }
    else {
      puVar3 = (undefined8 *)&"blade_L";
      if (iVar1 == 2) {
        puVar3 = (undefined8 *)&"thunderspear_l";
      }
      puVar5 = &"blade_R";
      if (iVar1 == 2) {
        puVar5 = &"thunderspear_r";
      }
    }
    if ((char)left == '\0') {
      puVar3 = puVar5;
    }
    pSVar4 = System_String__Concat
                       ((__this->fields).WeaponsPath,(System_String_o *)*puVar3,(MethodInfo *)0x0);
    return pSVar4;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMeshes$$GetBodyMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBodyMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x3fe47f0

System_String_o *
Characters_HumanSetupMeshes__GetBodyMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool_conflict bVar5;
  long *plVar6;
  System_String_o *pSVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  uint16_t local_1a;
  
  if (DAT_05704147 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Char_Last_Char);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"_F");
    il2cpp_init_method_metadata(&"_uniform");
    il2cpp_init_method_metadata(&"_M");
    il2cpp_init_method_metadata(&"Type");
    il2cpp_init_method_metadata(&"player");
    il2cpp_init_method_metadata(&"Uniform");
    il2cpp_init_method_metadata(&"_casual");
    DAT_05704147 = '\x01';
  }
  pSVar9 = "player";
  local_1a = 0;
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    plVar6 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar2,"Type",(pSVar2->klass->vtable)._7_get_Item.method);
    if (plVar6 != (long *)0x0) {
      pSVar7 = (System_String_o *)
               (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
      if (pSVar7 != (System_String_o *)0x0) {
        bVar5 = System_String__StartsWith(pSVar7,"Uniform",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          puVar8 = &"_casual";
        }
        else {
          puVar8 = &"_uniform";
        }
        pSVar9 = System_String__Concat(pSVar9,(System_String_o *)*puVar8,(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
            (pSVar3 = (pCVar1->fields).CustomSet, pSVar3 != (Settings_HumanCustomSet_o *)0x0)) &&
           (pSVar4 = (pSVar3->fields).Sex, pSVar4 != (Settings_IntSetting_o *)0x0)) {
          if ((pSVar4->fields)._value == 0) {
            puVar8 = &"_M";
          }
          else {
            puVar8 = &"_F";
          }
          pSVar9 = System_String__Concat(pSVar9,(System_String_o *)*puVar8,(MethodInfo *)0x0);
          local_1a = System_Linq_Enumerable__Last<char>
                               ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar7,
                                MethodInfo_Char_Last_Char);
          if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = System_Char__ToString((uint16_t)&local_1a,(MethodInfo *)0x0);
          pSVar9 = System_String__Concat(pSVar9,pSVar7,(MethodInfo *)0x0);
          pSVar9 = System_String__Concat((__this->fields).CostumesPath,pSVar9,(MethodInfo *)0x0);
          return pSVar9;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMeshes$$GetBrandMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetBrandMesh (Characters_HumanSetupMeshes_o* __this, int32_t brand, const MethodInfo* method);
// 0x3fe49e0

System_String_o *
Characters_HumanSetupMeshes__GetBrandMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t brand,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  bool_conflict bVar5;
  long *plVar6;
  System_String_o *pSVar7;
  undefined8 *puVar8;
  
  if (DAT_05704148 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"character_brand_arm_r_0");
    il2cpp_init_method_metadata(&"Type");
    il2cpp_init_method_metadata(&"character_brand_chest_f_0");
    il2cpp_init_method_metadata(&"character_brand_chest_m_0");
    il2cpp_init_method_metadata(&"character_brand_back_m_0");
    il2cpp_init_method_metadata(&"Uniform");
    il2cpp_init_method_metadata(&"character_brand_back_f_0");
    il2cpp_init_method_metadata(&"character_brand_arm_l_0");
    DAT_05704148 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
       (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0)) ||
      (plVar6 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar2,"Type",(pSVar2->klass->vtable)._7_get_Item.method),
      plVar6 == (long *)0x0)) ||
     (pSVar7 = (System_String_o *)
               (**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0)),
     pSVar7 == (System_String_o *)0x0)) goto LAB_03fe4bb5;
  bVar5 = System_String__StartsWith(pSVar7,"Uniform",(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    switch(brand) {
    case 1:
      pSVar7 = (__this->fields).CostumesPath;
      puVar8 = &"character_brand_arm_l_0";
      break;
    case 2:
      pSVar7 = (__this->fields).CostumesPath;
      puVar8 = &"character_brand_arm_r_0";
      break;
    case 3:
      pCVar1 = (__this->fields)._setup;
      if (((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
          (pSVar3 = (pCVar1->fields).CustomSet, pSVar3 == (Settings_HumanCustomSet_o *)0x0)) ||
         (pSVar4 = (pSVar3->fields).Sex, pSVar4 == (Settings_IntSetting_o *)0x0)) {
LAB_03fe4bb5:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar7 = (__this->fields).CostumesPath;
      if ((pSVar4->fields)._value == 0) {
        puVar8 = &"character_brand_chest_m_0";
      }
      else {
        puVar8 = &"character_brand_chest_f_0";
      }
      break;
    case 4:
      pCVar1 = (__this->fields)._setup;
      if (((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
          (pSVar3 = (pCVar1->fields).CustomSet, pSVar3 == (Settings_HumanCustomSet_o *)0x0)) ||
         (pSVar4 = (pSVar3->fields).Sex, pSVar4 == (Settings_IntSetting_o *)0x0)) goto LAB_03fe4bb5;
      pSVar7 = (__this->fields).CostumesPath;
      if ((pSVar4->fields)._value == 0) {
        puVar8 = &"character_brand_back_m_0";
      }
      else {
        puVar8 = &"character_brand_back_f_0";
      }
      break;
    default:
      goto switchD_03fe4aef_default;
    }
    pSVar7 = System_String__Concat(pSVar7,(System_String_o *)*puVar8,(MethodInfo *)0x0);
    return pSVar7;
  }
switchD_03fe4aef_default:
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Characters.HumanSetupMeshes$$GetEyeMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetEyeMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x3fe38e0

System_String_o *
Characters_HumanSetupMeshes__GetEyeMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704149 == '\0') {
    il2cpp_init_method_metadata(&"char_eyes");
    DAT_05704149 = '\x01';
  }
  pSVar1 = System_String__Concat((__this->fields).FacePath,"char_eyes",(MethodInfo *)0x0);
  return pSVar1;
}


// Characters.HumanSetupMeshes$$GetFaceMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetFaceMesh (Characters_HumanSetupMeshes_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x3fe3a30

System_String_o *
Characters_HumanSetupMeshes__GetFaceMesh
          (Characters_HumanSetupMeshes_o *__this,System_String_o *prefab,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (DAT_0570414a == '\0') {
    il2cpp_init_method_metadata(&"char_face");
    DAT_0570414a = '\x01';
  }
  bVar1 = System_String__op_Inequality
                    (prefab,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    prefab = "char_face";
  }
  pSVar2 = System_String__Concat((__this->fields).FacePath,prefab,(MethodInfo *)0x0);
  return pSVar2;
}


// Characters.HumanSetupMeshes$$GetGlassMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetGlassMesh (Characters_HumanSetupMeshes_o* __this, System_String_o* prefab, const MethodInfo* method);
// 0x3fe3aa0

System_String_o *
Characters_HumanSetupMeshes__GetGlassMesh
          (Characters_HumanSetupMeshes_o *__this,System_String_o *prefab,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (DAT_0570414b == '\0') {
    il2cpp_init_method_metadata(&"char_glasses");
    DAT_0570414b = '\x01';
  }
  bVar1 = System_String__op_Inequality
                    (prefab,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    prefab = "char_glasses";
  }
  pSVar2 = System_String__Concat((__this->fields).FacePath,prefab,(MethodInfo *)0x0);
  return pSVar2;
}


// Characters.HumanSetupMeshes$$GetHairMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHairMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x3fe3170

System_String_o *
Characters_HumanSetupMeshes__GetHairMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  bool_conflict bVar3;
  long *plVar4;
  System_String_o *pSVar5;
  
  if (DAT_0570414c == '\0') {
    il2cpp_init_method_metadata(&"Texture");
    DAT_0570414c = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentHair, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    plVar4 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar2,"Texture",(pSVar2->klass->vtable)._7_get_Item.method);
    if (plVar4 != (long *)0x0) {
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      bVar3 = System_String__op_Equality
                        (pSVar5,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                         (MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      pSVar5 = System_String__Concat((__this->fields).HairsPath,pSVar5,(MethodInfo *)0x0);
      return pSVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMeshes$$GetHairClothMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetHairClothMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x3fe3530

System_String_o *
Characters_HumanSetupMeshes__GetHairClothMesh
          (Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  char cVar3;
  long *plVar4;
  System_String_o *str1;
  System_String_o *pSVar5;
  
  if (DAT_0570414d == '\0') {
    il2cpp_init_method_metadata(&"Cloth");
    DAT_0570414d = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentHair, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    cVar3 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar2,"Cloth",(pSVar2->klass->vtable)._28_HasKey.method);
    if (cVar3 == '\0') {
      return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pSVar2 = (pCVar1->fields).CurrentHair, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      pSVar5 = (__this->fields).HairsPath;
      plVar4 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar2,"Cloth",(pSVar2->klass->vtable)._7_get_Item.method);
      if (plVar4 != (long *)0x0) {
        str1 = (System_String_o *)
               (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        pSVar5 = System_String__Concat(pSVar5,str1,(MethodInfo *)0x0);
        return pSVar5;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMeshes$$GetCapeMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetCapeMesh (Characters_HumanSetupMeshes_o* __this, const MethodInfo* method);
// 0x3fe3030

System_String_o *
Characters_HumanSetupMeshes__GetCapeMesh(Characters_HumanSetupMeshes_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  System_String_o *pSVar4;
  
  if (DAT_0570414e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"character_cape_0");
    DAT_0570414e = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).Cape, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar3->fields)._value != 0) {
      pSVar4 = System_String__Concat((__this->fields).CostumesPath,"character_cape_0",(MethodInfo *)0x0);
      return pSVar4;
    }
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupMeshes$$GetChestMesh
// il2cpp: System_String_o* Characters_HumanSetupMeshes__GetChestMesh (Characters_HumanSetupMeshes_o* __this, int32_t chest, const MethodInfo* method);
// 0x3fe43e0

System_String_o *
Characters_HumanSetupMeshes__GetChestMesh
          (Characters_HumanSetupMeshes_o *__this,int32_t chest,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  char cVar5;
  bool_conflict bVar6;
  long *plVar7;
  System_String_o *pSVar8;
  undefined8 *puVar9;
  
  if (DAT_0570414f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"body_blade_keeper_f_0");
    il2cpp_init_method_metadata(&"mikasa_asset_uni_0");
    il2cpp_init_method_metadata(&"Holster");
    il2cpp_init_method_metadata(&"Hoodie");
    il2cpp_init_method_metadata(&"char_cap_uni");
    il2cpp_init_method_metadata(&"body_blade_keeper_m_0");
    il2cpp_init_method_metadata(&"Scarf");
    il2cpp_init_method_metadata(&"Type");
    il2cpp_init_method_metadata(&"Uniform");
    il2cpp_init_method_metadata(&"char_cap_cas");
    il2cpp_init_method_metadata(&"mikasa_asset_cas_0");
    DAT_0570414f = '\x01';
  }
  if (chest == 3) {
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      cVar5 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)
                        (pSVar2,"Scarf",(pSVar2->klass->vtable)._28_HasKey.method);
      if (cVar5 == '\0') goto LAB_03fe46a9;
      pCVar1 = (__this->fields)._setup;
      if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
         (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
        plVar7 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar2,"Type",(pSVar2->klass->vtable)._7_get_Item.method);
        if (plVar7 != (long *)0x0) {
          pSVar8 = (System_String_o *)
                   (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
          if (pSVar8 != (System_String_o *)0x0) {
            bVar6 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
            pSVar8 = (__this->fields).CostumesPath;
            if ((char)bVar6 == '\0') {
              puVar9 = &"mikasa_asset_cas_0";
            }
            else {
              puVar9 = &"mikasa_asset_uni_0";
            }
            goto LAB_03fe46e1;
          }
        }
      }
    }
  }
  else if (chest == 2) {
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      cVar5 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)
                        (pSVar2,"Holster",(pSVar2->klass->vtable)._28_HasKey.method);
      if (cVar5 == '\0') goto LAB_03fe46a9;
      pCVar1 = (__this->fields)._setup;
      if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
          (pSVar3 = (pCVar1->fields).CustomSet, pSVar3 != (Settings_HumanCustomSet_o *)0x0)) &&
         (pSVar4 = (pSVar3->fields).Sex, pSVar4 != (Settings_IntSetting_o *)0x0)) {
        pSVar8 = (__this->fields).AccessoriesPath;
        if ((pSVar4->fields)._value == 0) {
          puVar9 = &"body_blade_keeper_m_0";
        }
        else {
          puVar9 = &"body_blade_keeper_f_0";
        }
LAB_03fe46e1:
        pSVar8 = System_String__Concat(pSVar8,(System_String_o *)*puVar9,(MethodInfo *)0x0);
        return pSVar8;
      }
    }
  }
  else {
    if (chest != 1) {
LAB_03fe46a9:
      return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      cVar5 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)
                        (pSVar2,"Hoodie",(pSVar2->klass->vtable)._28_HasKey.method);
      if (cVar5 == '\0') goto LAB_03fe46a9;
      pCVar1 = (__this->fields)._setup;
      if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
         (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
        plVar7 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar2,"Type",(pSVar2->klass->vtable)._7_get_Item.method);
        if (plVar7 != (long *)0x0) {
          pSVar8 = (System_String_o *)
                   (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
          if (pSVar8 != (System_String_o *)0x0) {
            bVar6 = System_String__StartsWith(pSVar8,"Uniform",(MethodInfo *)0x0);
            pSVar8 = (__this->fields).AccessoriesPath;
            if ((char)bVar6 == '\0') {
              puVar9 = &"char_cap_cas";
            }
            else {
              puVar9 = &"char_cap_uni";
            }
            goto LAB_03fe46e1;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


