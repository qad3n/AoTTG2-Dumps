// Type: Characters.HumanSetupTextures
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HumanSetupTextures.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/Setup/HumanSetupTextures.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HumanSetupTextures$$.ctor
// il2cpp: void Characters_HumanSetupTextures___ctor (Characters_HumanSetupTextures_o* __this, Characters_HumanSetup_o* setup, const MethodInfo* method);
// 0x3fdb3d0

void Characters_HumanSetupTextures___ctor
               (Characters_HumanSetupTextures_o *__this,Characters_HumanSetup_o *setup,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._setup = setup;
  il2cpp_runtime_glue(&__this->fields,setup);
  return;
}


// Characters.HumanSetupTextures$$Get3dmgTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__Get3dmgTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x3fe17e0

System_String_o *
Characters_HumanSetupTextures__Get3dmgTexture
          (Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  undefined8 *puVar3;
  
  if (DAT_05704154 == '\0') {
    il2cpp_init_method_metadata(&"Misc/AOTTG_HERO_3DMG");
    il2cpp_init_method_metadata(&"Misc/aottg_hero_AHSS_3dmg");
    il2cpp_init_method_metadata(&"Misc/aottg_hero_APG_3dmg");
    DAT_05704154 = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (pCVar2 != (Characters_HumanSetup_o *)0x0) {
    iVar1 = (pCVar2->fields).Weapon;
    if (iVar1 == 3) {
      puVar3 = &"Misc/aottg_hero_APG_3dmg";
    }
    else {
      puVar3 = &"Misc/AOTTG_HERO_3DMG";
      if (iVar1 == 1) {
        puVar3 = &"Misc/aottg_hero_AHSS_3dmg";
      }
    }
    return (System_String_o *)*puVar3;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupTextures$$GetBrandTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBrandTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x3fe30c0

System_String_o *
Characters_HumanSetupTextures__GetBrandTexture
          (Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  ulong uVar4;
  undefined **ppuVar5;
  
  if (DAT_05704155 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Brand/aottg_hero_brand_g");
    il2cpp_init_method_metadata(&"Brand/aottg_hero_brand_sc");
    il2cpp_init_method_metadata(&"Brand/aottg_hero_brand_mp");
    il2cpp_init_method_metadata(&"Brand/aottg_hero_brand_ts");
    DAT_05704155 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).Logo, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    uVar4 = (ulong)(pSVar3->fields)._value;
    ppuVar5 = &PTR_DAT_051af8a0 + uVar4;
    if (3 < uVar4) {
      ppuVar5 = (undefined **)(DAT_057110b0 + 0xb8);
    }
    return *(System_String_o **)*ppuVar5;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupTextures$$GetSkinTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetSkinTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x3fe3c60

System_String_o *
Characters_HumanSetupTextures__GetSkinTexture
          (Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  
  if (DAT_05704156 == '\0') {
    il2cpp_init_method_metadata(&"Skin/skin_blades");
    il2cpp_init_method_metadata(&"Skin/skin_TS");
    il2cpp_init_method_metadata(&"Skin/skin_AHSS");
    DAT_05704156 = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (pCVar2 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
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
// 0x3fe3240

System_String_o *
Characters_HumanSetupTextures__GetHairTexture
          (Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  code *vtable_dispatch;
  long *plVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704157 == '\0') {
    il2cpp_init_method_metadata(&"Texture");
    DAT_05704157 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentHair, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    plVar3 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar2,"Texture",(pSVar2->klass->vtable)._7_get_Item.method);
    if (plVar3 != (long *)0x0) {
      vtable_dispatch = *(code **)(*plVar3 + 0x1c8);
      pSVar4 = (System_String_o *)
               (*vtable_dispatch)
                         (plVar3,*(undefined8 *)(*plVar3 + 0x1d0),vtable_dispatch);
      return pSVar4;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupTextures$$GetBodyMainTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyMainTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x3fdd3e0

System_String_o *
Characters_HumanSetupTextures__GetBodyMainTexture
          (Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  bool_conflict bVar3;
  long *plVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  
  if (DAT_05704158 == '\0') {
    il2cpp_init_method_metadata(&"Uniform/");
    il2cpp_init_method_metadata(&"_main_tex");
    il2cpp_init_method_metadata(&"Type");
    il2cpp_init_method_metadata(&"Casual/");
    il2cpp_init_method_metadata(&"Uniform");
    DAT_05704158 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    plVar4 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar2,"Type",(pSVar2->klass->vtable)._7_get_Item.method);
    if (plVar4 != (long *)0x0) {
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      if (pSVar5 != (System_String_o *)0x0) {
        bVar3 = System_String__StartsWith(pSVar5,"Uniform",(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
           (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0))
        {
          plVar4 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar2,"_main_tex",(pSVar2->klass->vtable)._7_get_Item.method
                                     );
          if (plVar4 != (long *)0x0) {
            pSVar5 = (System_String_o *)
                     (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
            if ((char)bVar3 == '\0') {
              puVar6 = &"Casual/";
            }
            else {
              puVar6 = &"Uniform/";
            }
            pSVar5 = System_String__Concat((System_String_o *)*puVar6,pSVar5,(MethodInfo *)0x0);
            return pSVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupTextures$$GetBodyMaskTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyMaskTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x3fdd520

System_String_o *
Characters_HumanSetupTextures__GetBodyMaskTexture
          (Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  bool_conflict bVar3;
  long *plVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  
  if (DAT_05704159 == '\0') {
    il2cpp_init_method_metadata(&"Uniform/");
    il2cpp_init_method_metadata(&"_main_tex_mask");
    il2cpp_init_method_metadata(&"Type");
    il2cpp_init_method_metadata(&"Casual/");
    il2cpp_init_method_metadata(&"Uniform");
    DAT_05704159 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    plVar4 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar2,"Type",(pSVar2->klass->vtable)._7_get_Item.method);
    if (plVar4 != (long *)0x0) {
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      if (pSVar5 != (System_String_o *)0x0) {
        bVar3 = System_String__StartsWith(pSVar5,"Uniform",(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
           (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0))
        {
          plVar4 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar2,"_main_tex_mask",(pSVar2->klass->vtable)._7_get_Item.method
                                     );
          if (plVar4 != (long *)0x0) {
            pSVar5 = (System_String_o *)
                     (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
            if ((char)bVar3 == '\0') {
              puVar6 = &"Casual/";
            }
            else {
              puVar6 = &"Uniform/";
            }
            pSVar5 = System_String__Concat((System_String_o *)*puVar6,pSVar5,(MethodInfo *)0x0);
            return pSVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupTextures$$GetBodyColorTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyColorTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x3fdd660

System_String_o *
Characters_HumanSetupTextures__GetBodyColorTexture
          (Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  bool_conflict bVar3;
  long *plVar4;
  System_String_o *pSVar5;
  undefined8 *puVar6;
  
  if (DAT_0570415a == '\0') {
    il2cpp_init_method_metadata(&"Uniform/");
    il2cpp_init_method_metadata(&"_color_tex");
    il2cpp_init_method_metadata(&"Type");
    il2cpp_init_method_metadata(&"Casual/");
    il2cpp_init_method_metadata(&"Uniform");
    DAT_0570415a = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    plVar4 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar2,"Type",(pSVar2->klass->vtable)._7_get_Item.method);
    if (plVar4 != (long *)0x0) {
      pSVar5 = (System_String_o *)
               (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
      if (pSVar5 != (System_String_o *)0x0) {
        bVar3 = System_String__StartsWith(pSVar5,"Uniform",(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
           (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0))
        {
          plVar4 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                     (pSVar2,"_color_tex",(pSVar2->klass->vtable)._7_get_Item.method
                                     );
          if (plVar4 != (long *)0x0) {
            pSVar5 = (System_String_o *)
                     (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
            if ((char)bVar3 == '\0') {
              puVar6 = &"Casual/";
            }
            else {
              puVar6 = &"Uniform/";
            }
            pSVar5 = System_String__Concat((System_String_o *)*puVar6,pSVar5,(MethodInfo *)0x0);
            return pSVar5;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupTextures$$GetBodyPantsTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyPantsTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x3fdd7a0

System_String_o *
Characters_HumanSetupTextures__GetBodyPantsTexture
          (Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  long *plVar5;
  System_String_o *pSVar6;
  
  if (DAT_0570415b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Pants/Shoes_Casual");
    il2cpp_init_method_metadata(&"_pants_tex");
    il2cpp_init_method_metadata(&"Pants/");
    DAT_0570415b = '\x01';
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
      plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar4,"_pants_tex",(pSVar4->klass->vtable)._7_get_Item.method);
      if (plVar5 != (long *)0x0) {
        pSVar6 = (System_String_o *)
                 (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        pSVar6 = System_String__Concat("Pants/",pSVar6,(MethodInfo *)0x0);
        return pSVar6;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSetupTextures$$GetChestTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetChestTexture (Characters_HumanSetupTextures_o* __this, int32_t chest, const MethodInfo* method);
// 0x3fe4700

System_String_o *
Characters_HumanSetupTextures__GetChestTexture
          (Characters_HumanSetupTextures_o *__this,int32_t chest,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  bool_conflict bVar3;
  long *plVar4;
  System_String_o *__this_00;
  undefined8 *puVar5;
  
  if (DAT_0570415c == '\0') {
    il2cpp_init_method_metadata(&"Misc/aottg_hero_annie_cap_causal");
    il2cpp_init_method_metadata(&"Type");
    il2cpp_init_method_metadata(&"Misc/aottg_hero_annie_cap_uniform");
    il2cpp_init_method_metadata(&"Uniform");
    DAT_0570415c = '\x01';
  }
  if (chest == 1) {
    pCVar1 = (__this->fields)._setup;
    if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
       (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
      plVar4 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar2,"Type",(pSVar2->klass->vtable)._7_get_Item.method);
      if (plVar4 != (long *)0x0) {
        __this_00 = (System_String_o *)
                    (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
        if (__this_00 != (System_String_o *)0x0) {
          bVar3 = System_String__StartsWith(__this_00,"Uniform",(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            puVar5 = &"Misc/aottg_hero_annie_cap_causal";
          }
          else {
            puVar5 = &"Misc/aottg_hero_annie_cap_uniform";
          }
          goto LAB_03fe47e0;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  puVar5 = *(undefined8 **)(DAT_057110b0 + 0xb8);
LAB_03fe47e0:
  return (System_String_o *)*puVar5;
}


