// Type: Characters.HumanSetupTextures
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/HumanSetupTextures.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/Setup/HumanSetupTextures.cs
// --------------------------------

// Characters.HumanSetupTextures$$.ctor
// il2cpp: void Characters_HumanSetupTextures___ctor (Characters_HumanSetupTextures_o* __this, Characters_HumanSetup_o* setup, const MethodInfo* method);
// 0x180577fb0

void
Characters_HumanSetupTextures___ctor(Characters_HumanSetupTextures_o* __this, Characters_HumanSetup_o* setup, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._setup = method;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._setup,method);
  return;
}


// Characters.HumanSetupTextures$$Get3dmgTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__Get3dmgTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x182170da0

System_String_o *
Characters_HumanSetupTextures__Get3dmgTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184346ccf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/AOTTG_HERO_3DMG");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/aottg_hero_AHSS_3dmg");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/aottg_hero_APG_3dmg");
    Il2CppMethodInitialized_184346ccf = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
    if ((pCVar1->fields).Weapon != 1) {
      pSVar2 = "Misc/aottg_hero_APG_3dmg";
      if ((pCVar1->fields).Weapon != 3) {
        pSVar2 = "Misc/AOTTG_HERO_3DMG";
      }
      return pSVar2;
    }
    return "Misc/aottg_hero_AHSS_3dmg";
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupTextures$$GetBrandTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBrandTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x182171380

System_String_o *
Characters_HumanSetupTextures__GetBrandTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  Settings_HumanCustomSet_o *pSVar3;
  Settings_IntSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_184346cd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Brand/aottg_hero_brand_g");
    il2cpp_codegen_initialize_runtime_metadata(&"Brand/aottg_hero_brand_sc");
    il2cpp_codegen_initialize_runtime_metadata(&"Brand/aottg_hero_brand_mp");
    il2cpp_codegen_initialize_runtime_metadata(&"Brand/aottg_hero_brand_ts");
    Il2CppMethodInitialized_184346cd0 = '\x01';
  }
  pCVar2 = (__this->fields)._setup;
  if (((pCVar2 == (Characters_HumanSetup_o *)0x0) ||
      (pSVar3 = (pCVar2->fields).CustomSet, pSVar3 == (Settings_HumanCustomSet_o *)0x0)) ||
     (pSVar4 = (pSVar3->fields).Logo, pSVar4 == (Settings_IntSetting_o *)0x0)) {
    ThrowNullReferenceException();
  }
  iVar1 = (pSVar4->fields)._value;
  if (iVar1 == 0) {
    return "Brand/aottg_hero_brand_ts";
  }
  if (iVar1 != 1) {
    if (iVar1 == 2) {
      return "Brand/aottg_hero_brand_g";
    }
    if (iVar1 != 3) {
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    return "Brand/aottg_hero_brand_mp";
  }
  return "Brand/aottg_hero_brand_sc";
}


// Characters.HumanSetupTextures$$GetSkinTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetSkinTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x1821715e0

System_String_o *
Characters_HumanSetupTextures__GetSkinTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  
  if (Il2CppMethodInitialized_184346cd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Skin/skin_blades");
    il2cpp_codegen_initialize_runtime_metadata(&"Skin/skin_TS");
    il2cpp_codegen_initialize_runtime_metadata(&"Skin/skin_AHSS");
    Il2CppMethodInitialized_184346cd1 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (pCVar1 == (Characters_HumanSetup_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((pCVar1->fields).Weapon == 2) {
    return "Skin/skin_TS";
  }
  if (((pCVar1->fields).Weapon != 1) && ((pCVar1->fields).Weapon != 3)) {
    return "Skin/skin_blades";
  }
  return "Skin/skin_AHSS";
}


// Characters.HumanSetupTextures$$GetHairTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetHairTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x182171560

System_String_o *
Characters_HumanSetupTextures__GetHairTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_184346cd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Texture");
    Il2CppMethodInitialized_184346cd2 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentHair, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar4 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Texture");
    if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar3 = pSVar4->klass;
      pSVar5 = (System_String_o *)
               (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar4,(UnityEngine_GameObject_o *)(pSVar3->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar3);
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupTextures$$GetBodyMainTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyMainTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x182170fa0

System_String_o *
Characters_HumanSetupTextures__GetBodyMainTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  bool bVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184346cd3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform/");
    il2cpp_codegen_initialize_runtime_metadata(&"_main_tex");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"Casual/");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    Il2CppMethodInitialized_184346cd3 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Type");
    if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar3 = pSVar5->klass;
      pSVar6 = (System_String_o *)
               (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar5,(UnityEngine_GameObject_o *)(pSVar3->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar3);
      if (pSVar6 != (System_String_o *)0x0) {
        bVar4 = System_String__StartsWith(pSVar6,"Uniform",(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
          pSVar2 = (pCVar1->fields).CurrentCostume;
          if (bVar4) {
            if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar2,(MethodInfo *)"_main_tex");
              if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                pSVar3 = pSVar5->klass;
                pSVar6 = (System_String_o *)
                         (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                   (pSVar5,(UnityEngine_GameObject_o *)
                                           (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                    (MethodInfo *)pSVar3);
                pSVar6 = System_String__Concat_1969e50("Uniform/",pSVar6,(MethodInfo *)0x0);
                return pSVar6;
              }
            }
          }
          else if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar2,(MethodInfo *)"_main_tex");
            if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
              pSVar3 = pSVar5->klass;
              pSVar6 = (System_String_o *)
                       (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                 (pSVar5,(UnityEngine_GameObject_o *)
                                         (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                  (MethodInfo *)pSVar3);
              pSVar6 = System_String__Concat_1969e50("Casual/",pSVar6,(MethodInfo *)0x0);
              return pSVar6;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupTextures$$GetBodyMaskTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyMaskTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x182171120

System_String_o *
Characters_HumanSetupTextures__GetBodyMaskTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  bool bVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184346cd4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform/");
    il2cpp_codegen_initialize_runtime_metadata(&"_main_tex_mask");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"Casual/");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    Il2CppMethodInitialized_184346cd4 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Type");
    if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar3 = pSVar5->klass;
      pSVar6 = (System_String_o *)
               (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar5,(UnityEngine_GameObject_o *)(pSVar3->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar3);
      if (pSVar6 != (System_String_o *)0x0) {
        bVar4 = System_String__StartsWith(pSVar6,"Uniform",(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
          pSVar2 = (pCVar1->fields).CurrentCostume;
          if (bVar4) {
            if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar2,(MethodInfo *)"_main_tex_mask");
              if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                pSVar3 = pSVar5->klass;
                pSVar6 = (System_String_o *)
                         (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                   (pSVar5,(UnityEngine_GameObject_o *)
                                           (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                    (MethodInfo *)pSVar3);
                pSVar6 = System_String__Concat_1969e50("Uniform/",pSVar6,(MethodInfo *)0x0);
                return pSVar6;
              }
            }
          }
          else if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar2,(MethodInfo *)"_main_tex_mask");
            if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
              pSVar3 = pSVar5->klass;
              pSVar6 = (System_String_o *)
                       (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                 (pSVar5,(UnityEngine_GameObject_o *)
                                         (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                  (MethodInfo *)pSVar3);
              pSVar6 = System_String__Concat_1969e50("Casual/",pSVar6,(MethodInfo *)0x0);
              return pSVar6;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupTextures$$GetBodyColorTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyColorTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x182170e20

System_String_o *
Characters_HumanSetupTextures__GetBodyColorTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  bool bVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184346cd5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform/");
    il2cpp_codegen_initialize_runtime_metadata(&"_color_tex");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"Casual/");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    Il2CppMethodInitialized_184346cd5 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Type");
    if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar3 = pSVar5->klass;
      pSVar6 = (System_String_o *)
               (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar5,(UnityEngine_GameObject_o *)(pSVar3->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar3);
      if (pSVar6 != (System_String_o *)0x0) {
        bVar4 = System_String__StartsWith(pSVar6,"Uniform",(MethodInfo *)0x0);
        pCVar1 = (__this->fields)._setup;
        if (pCVar1 != (Characters_HumanSetup_o *)0x0) {
          pSVar2 = (pCVar1->fields).CurrentCostume;
          if (bVar4) {
            if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
              pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar2,(MethodInfo *)"_color_tex");
              if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
                pSVar3 = pSVar5->klass;
                pSVar6 = (System_String_o *)
                         (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                   (pSVar5,(UnityEngine_GameObject_o *)
                                           (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                    (MethodInfo *)pSVar3);
                pSVar6 = System_String__Concat_1969e50("Uniform/",pSVar6,(MethodInfo *)0x0);
                return pSVar6;
              }
            }
          }
          else if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
            pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar2,(MethodInfo *)"_color_tex");
            if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
              pSVar3 = pSVar5->klass;
              pSVar6 = (System_String_o *)
                       (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                                 (pSVar5,(UnityEngine_GameObject_o *)
                                         (pSVar3->vtable)._9_SetUnhandledAttributes.method,
                                  (MethodInfo *)pSVar3);
              pSVar6 = System_String__Concat_1969e50("Casual/",pSVar6,(MethodInfo *)0x0);
              return pSVar6;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupTextures$$GetBodyPantsTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetBodyPantsTexture (Characters_HumanSetupTextures_o* __this, const MethodInfo* method);
// 0x1821712a0

System_String_o *
Characters_HumanSetupTextures__GetBodyPantsTexture(Characters_HumanSetupTextures_o *__this,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  Settings_HumanCustomSet_o *pSVar2;
  Settings_IntSetting_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_Xml_Schema_XmlSchema_c *pSVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  System_String_o *pSVar7;
  
  if (Il2CppMethodInitialized_184346cd6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Pants/Shoes_Casual");
    il2cpp_codegen_initialize_runtime_metadata(&"_pants_tex");
    il2cpp_codegen_initialize_runtime_metadata(&"Pants/");
    Il2CppMethodInitialized_184346cd6 = '\x01';
  }
  pCVar1 = (__this->fields)._setup;
  if (((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar2 = (pCVar1->fields).CustomSet, pSVar2 != (Settings_HumanCustomSet_o *)0x0)) &&
     (pSVar3 = (pSVar2->fields).Boots, pSVar3 != (Settings_IntSetting_o *)0x0)) {
    if ((pSVar3->fields)._value == 1) {
      return "Pants/Shoes_Casual";
    }
    pSVar4 = (((__this->fields)._setup)->fields).CurrentCostume;
    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar6 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)(pSVar4,(MethodInfo *)"_pants_tex");
      if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar5 = pSVar6->klass;
        pSVar7 = (System_String_o *)
                 (*(pSVar5->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar6,(UnityEngine_GameObject_o *)
                                   (pSVar5->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar5);
        pSVar7 = System_String__Concat_1969e50("Pants/",pSVar7,(MethodInfo *)0x0);
        return pSVar7;
      }
    }
  }
  ThrowNullReferenceException();
}


// Characters.HumanSetupTextures$$GetChestTexture
// il2cpp: System_String_o* Characters_HumanSetupTextures__GetChestTexture (Characters_HumanSetupTextures_o* __this, int32_t chest, const MethodInfo* method);
// 0x182171460

System_String_o *
Characters_HumanSetupTextures__GetChestTexture
          (Characters_HumanSetupTextures_o *__this,int32_t chest,MethodInfo *method)

{
  Characters_HumanSetup_o *pCVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_Xml_Schema_XmlSchema_c *pSVar3;
  bool bVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_String_o *pSVar6;
  
  if (Il2CppMethodInitialized_184346cd7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/aottg_hero_annie_cap_causal");
    il2cpp_codegen_initialize_runtime_metadata(&"Type");
    il2cpp_codegen_initialize_runtime_metadata(&"Misc/aottg_hero_annie_cap_uniform");
    il2cpp_codegen_initialize_runtime_metadata(&"Uniform");
    Il2CppMethodInitialized_184346cd7 = '\x01';
  }
  if (chest != 1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  pCVar1 = (__this->fields)._setup;
  if ((pCVar1 != (Characters_HumanSetup_o *)0x0) &&
     (pSVar2 = (pCVar1->fields).CurrentCostume, pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0)) {
    pSVar5 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)(pSVar2,(MethodInfo *)"Type");
    if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar3 = pSVar5->klass;
      pSVar6 = (System_String_o *)
               (*(pSVar3->vtable)._9_SetUnhandledAttributes.methodPtr)
                         (pSVar5,(UnityEngine_GameObject_o *)(pSVar3->vtable)._9_SetUnhandledAttributes.method
                          ,(MethodInfo *)pSVar3);
      if (pSVar6 != (System_String_o *)0x0) {
        bVar4 = System_String__StartsWith(pSVar6,"Uniform",(MethodInfo *)0x0);
        pSVar6 = "Misc/aottg_hero_annie_cap_uniform";
        if (!bVar4) {
          pSVar6 = "Misc/aottg_hero_annie_cap_causal";
        }
        return pSVar6;
      }
    }
  }
  ThrowNullReferenceException();
}


