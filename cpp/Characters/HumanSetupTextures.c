// Type: Characters.HumanSetupTextures
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Characters/HumanSetupTextures.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupTextures.cs
// --------------------------------

// Characters.HumanSetupTextures$$.ctor
// il2cpp: void Characters_HumanSetupTextures___ctor (Characters_HumanSetupTextures_o* __this, Characters_HumanSetup_o* setup, const MethodInfo* method);
// 0x5c076a0

void Characters_HumanSetupTextures___ctor
               (Characters_HumanSetupTextures_o *__this,Characters_HumanSetup_o *setup,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setup = setup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setup);
  return;
}


// Characters.HumanSetupTextures$$Get3dmgTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__Get3dmgTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x5c076d0

System_String_o *
Characters_HumanSetupTextures__Get3dmgTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_0754769f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/AOTTG_HERO_3DMG");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/aottg_hero_AHSS_3dmg");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/aottg_hero_APG_3dmg");
    Il2CppMethodInitialized_0754769f = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (pCVar2 == (Characters_HumanSetup_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (pCVar2->fields).Weapon;
  if (iVar1 == 3) {
    ppSVar3 = &"Misc/aottg_hero_APG_3dmg";
  }
  else {
    ppSVar3 = &"Misc/AOTTG_HERO_3DMG";
    if (iVar1 == 1) {
      ppSVar3 = &"Misc/aottg_hero_AHSS_3dmg";
    }
  }
  return *ppSVar3;
}


// Characters.HumanSetupTextures$$GetBrandTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBrandTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x5c07750

System_String_o *
Characters_HumanSetupTextures__GetBrandTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  ulong uVar4;
  undefined **ppuVar5;
  
  if (Il2CppMethodInitialized_075476a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Brand/aottg_hero_brand_g");
    il2cpp_codegen_initialize_runtime_metadata(&"Brand/aottg_hero_brand_sc");
    il2cpp_codegen_initialize_runtime_metadata(&"Brand/aottg_hero_brand_mp");
    il2cpp_codegen_initialize_runtime_metadata(&"Brand/aottg_hero_brand_ts");
    Il2CppMethodInitialized_075476a0 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 == (Characters_HumanSetup_o *)0x0) ||
      (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 == (Settings_HumanCustomSet_o *)0x0)) ||
     (pSVar3 = (pSVar2->fields).Logo, pSVar3 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uVar4 = (ulong)(pSVar3->fields)._value;
  ppuVar5 = ((System_String_o **[]){&"Brand/aottg_hero_brand_ts", &"Brand/aottg_hero_brand_sc", &"Brand/aottg_hero_brand_g", &"Brand/aottg_hero_brand_mp", &"goto", &"return", &"break", &"continue", &"IO error", &"Invalid argument(s)", &"Unknown error", &"Unknown error", &"Unknown error", &"Invalid version", &"Internal error (no progress possible)", &"Not enough memory", &"Corrupted data", &"Internal error", &"x*(", &"x+(", &"x+(", &"x-(", &"x+(", &"x/(", &"=", &":", &">", &">=", &"<", &"<=", &"!=", &"-", &"var", &"env", &"linear-gradient", &"none", &"filter", &"tint", &"opacity", &"invert", &"grayscale", &"sepia", &"blur", &"contrast", &"hue-rotate", &"prop", &"inherit", &"initial", &"auto", &"unset", &"true", &"false", &"none", &"cover", &"contain"}) + uVar4;
  if (3 < uVar4) {
    ppuVar5 = (undefined **)(g_data_07556758 + 0xb8);
  }
  return *(System_String_o **)*ppuVar5;
}


// Characters.HumanSetupTextures$$GetSkinTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetSkinTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x5c07800

System_String_o *
Characters_HumanSetupTextures__GetSkinTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  
  if (Il2CppMethodInitialized_075476a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Skin/skin_blades");
    il2cpp_codegen_initialize_runtime_metadata(&"Skin/skin_TS");
    il2cpp_codegen_initialize_runtime_metadata(&"Skin/skin_AHSS");
    Il2CppMethodInitialized_075476a1 = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (pCVar2 == (Characters_HumanSetup_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (pCVar2->fields).Weapon;
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      return "Skin/skin_TS";
    }
    if (iVar1 != 3) {
      return "Skin/skin_blades";
    }
  }
  return "Skin/skin_AHSS";
}


// Characters.HumanSetupTextures$$GetHairTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetHairTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x5c07880

System_String_o *
Characters_HumanSetupTextures__GetHairTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075476a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    Il2CppMethodInitialized_075476a2 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentHair, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar2,"Texture",(pSVar2->klass->vtable)._7_get_Item.method);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupTextures$$GetBodyMainTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyMainTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x5c078f0

System_String_o *
Characters_HumanSetupTextures__GetBodyMainTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if (Il2CppMethodInitialized_075476a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform/");
    il2cpp_codegen_initialize_runtime_metadata(&"_main_tex");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"Casual/");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    Il2CppMethodInitialized_075476a3 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar3 = (pCVar1->fields).CurrentCostume, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar3,"Type",(pSVar3->klass->vtable)._7_get_Item.method);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      if (pSVar4 != (System_String_o *)0x0) {
        bVar2 = System_String__StartsWith(pSVar4,"Uniform",(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if (bVar2) {
          if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
             (pSVar3 = (pCVar1->fields).CurrentCostume, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
            pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar3,"_main_tex",(pSVar3->klass->vtable)._7_get_Item.method);
            if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              ppSVar5 = &"Uniform/";
label_05c07a30:
              pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
              pSVar4 = System_String__Concat_52f0320(*ppSVar5,pSVar4,(MethodInfo *)0x0);
              return pSVar4;
            }
          }
        }
        else if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
                (pSVar3 = (pCVar1->fields).CurrentCostume, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar3,"_main_tex",(pSVar3->klass->vtable)._7_get_Item.method);
          if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            ppSVar5 = &"Casual/";
            goto label_05c07a30;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupTextures$$GetBodyMaskTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyMaskTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x5c07a60

System_String_o *
Characters_HumanSetupTextures__GetBodyMaskTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if (Il2CppMethodInitialized_075476a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform/");
    il2cpp_codegen_initialize_runtime_metadata(&"_main_tex_mask");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"Casual/");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    Il2CppMethodInitialized_075476a4 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar3 = (pCVar1->fields).CurrentCostume, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar3,"Type",(pSVar3->klass->vtable)._7_get_Item.method);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      if (pSVar4 != (System_String_o *)0x0) {
        bVar2 = System_String__StartsWith(pSVar4,"Uniform",(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if (bVar2) {
          if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
             (pSVar3 = (pCVar1->fields).CurrentCostume, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
            pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar3,"_main_tex_mask",(pSVar3->klass->vtable)._7_get_Item.method);
            if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              ppSVar5 = &"Uniform/";
label_05c07ba0:
              pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
              pSVar4 = System_String__Concat_52f0320(*ppSVar5,pSVar4,(MethodInfo *)0x0);
              return pSVar4;
            }
          }
        }
        else if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
                (pSVar3 = (pCVar1->fields).CurrentCostume, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar3,"_main_tex_mask",(pSVar3->klass->vtable)._7_get_Item.method);
          if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            ppSVar5 = &"Casual/";
            goto label_05c07ba0;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupTextures$$GetBodyColorTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyColorTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x5c07bd0

System_String_o *
Characters_HumanSetupTextures__GetBodyColorTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  
  if (Il2CppMethodInitialized_075476a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform/");
    il2cpp_codegen_initialize_runtime_metadata(&"_color_tex");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"Casual/");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    Il2CppMethodInitialized_075476a5 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar3 = (pCVar1->fields).CurrentCostume, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar3,"Type",(pSVar3->klass->vtable)._7_get_Item.method);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      if (pSVar4 != (System_String_o *)0x0) {
        bVar2 = System_String__StartsWith(pSVar4,"Uniform",(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if (bVar2) {
          if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
             (pSVar3 = (pCVar1->fields).CurrentCostume, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
            pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar3,"_color_tex",(pSVar3->klass->vtable)._7_get_Item.method);
            if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              ppSVar5 = &"Uniform/";
label_05c07d10:
              pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                                 (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
              pSVar4 = System_String__Concat_52f0320(*ppSVar5,pSVar4,(MethodInfo *)0x0);
              return pSVar4;
            }
          }
        }
        else if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
                (pSVar3 = (pCVar1->fields).CurrentCostume, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
          pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar3,"_color_tex",(pSVar3->klass->vtable)._7_get_Item.method);
          if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            ppSVar5 = &"Casual/";
            goto label_05c07d10;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupTextures$$GetBodyPantsTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyPantsTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x5c07d40

System_String_o *
Characters_HumanSetupTextures__GetBodyPantsTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_075476a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Pants/Shoes_Casual");
    il2cpp_codegen_initialize_runtime_metadata(&"_pants_tex");
    il2cpp_codegen_initialize_runtime_metadata(&"Pants/");
    Il2CppMethodInitialized_075476a6 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).Boots, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == 1) {
      return "Pants/Shoes_Casual";
    }
    pSVar4 = (pCVar1->fields).CurrentCostume;
    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar4,"_pants_tex",(pSVar4->klass->vtable)._7_get_Item.method);
      if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar5 = (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
        pSVar5 = System_String__Concat_52f0320("Pants/",pSVar5,(MethodInfo *)0x0);
        return pSVar5;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupTextures$$GetChestTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetChestTexture (Characters_HumanSetupTextures_o* __this, int32_t chest, const MethodInfo* method);
// 0x5c07e10

System_String_o *
Characters_HumanSetupTextures__GetChestTexture
          (Characters_HumanSetupTextures_o *__this,int32_t chest,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *__this_00;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_075476a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/aottg_hero_annie_cap_causal");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/aottg_hero_annie_cap_uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    Il2CppMethodInitialized_075476a7 = '\x01';
  }
  if (chest != 1) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
label_05c07ef0:
    return *ppSVar4;
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar3 = (pCVar1->fields).CurrentCostume, pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar3,"Type",(pSVar3->klass->vtable)._7_get_Item.method);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      __this_00 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                            (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      if (__this_00 != (System_String_o *)0x0) {
        bVar2 = System_String__StartsWith(__this_00,"Uniform",(MethodInfo *)0x0);
        if (bVar2) {
          ppSVar4 = &"Misc/aottg_hero_annie_cap_uniform";
        }
        else {
          ppSVar4 = &"Misc/aottg_hero_annie_cap_causal";
        }
        goto label_05c07ef0;
      }
    }
  }
  ThrowNullReferenceException();
}


