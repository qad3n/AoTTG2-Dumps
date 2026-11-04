// Type: Gisketch.Aottg2UI.Game.AottgProfilePreviewCard
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePreviewCard.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___cctor (const MethodInfo* method);
// 0x181e27810

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o *__this;
  
  if (Il2CppMethodInitialized_184344ce1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c);
    Il2CppMethodInitialized_184344ce1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___ctor(Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard.<>c$$<Build>b__5_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___Build_b__5_4 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x181e242e0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c___Build_b__5_4
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344ce2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile.accountName");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.characterName");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewName");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewHandle");
    Il2CppMethodInitialized_184344ce2 = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName((MethodInfo *)0x0);
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (names,pSVar1,"profilePreviewName",(System_String_o *)0x0,"profile.characterName",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName((MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (names,pSVar1,"profilePreviewHandle",(System_String_o *)0x0,"profile.accountName",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, System_String_o* avatarSprite, System_String_o* bannerSprite, const MethodInfo* method);
// 0x181a291f0

void
Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___ctor_1a291f0(Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, System_String_o* avatarSprite, System_String_o* bannerSprite, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._avatarSprite = qualifiedCppName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._avatarSprite,qualifiedCppName);
  (__this->fields)._bannerSprite = declaration;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bannerSprite,declaration);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard__Build (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e1b080

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard__Build
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344cdb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-card");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewCard");
    Il2CppMethodInitialized_184344cdb = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_0,
             (MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"profilePreviewCard",(System_Action_AottgUi__o *)__this_00,"profile-preview-card",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_0 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x181e1b200

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_0
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184344cdc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_2);
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBannerFrame");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-banner-frame");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBody");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-body");
    Il2CppMethodInitialized_184344cdc = '\x01';
  }
  pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (pUVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_1,
             (MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(154.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,pGVar2,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                      ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,"profilePreviewBannerFrame",(System_Action_AottgUi__o *)pUVar1,"profile-preview-banner-frame",
                        pGVar3,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).clip = true;
      pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar1,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_2,
                 (MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar2,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (card,"profilePreviewBody",(System_Action_AottgUi__o *)pUVar1,"profile-preview-body",pGVar3,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_1 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* banner, const MethodInfo* method);
// 0x181e1b500

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_1
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *banner,MethodInfo *method)

{
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344cdd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-banner-image");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    Il2CppMethodInitialized_184344cdd = '\x01';
  }
  sprite = (__this->fields)._bannerSprite;
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(270.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (banner != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (banner,sprite,"profilePreviewBanner","profile-preview-banner-image",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_2 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e1b650

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_2
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (Il2CppMethodInitialized_184344cde == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c_Build_b__5_4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-names");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-avatar-frame");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewAvatarFrame");
    Il2CppMethodInitialized_184344cde = '\x01';
  }
  pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (pUVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_3,
             (MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,28.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,"profilePreviewAvatarFrame",(System_Action_AottgUi__o *)pUVar1,"profile-preview-avatar-frame",pGVar2,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c);
    }
    style = "default";
    pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c->static_fields->__9__5_4;
    if (pUVar1 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c->static_fields->__9;
      pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar1,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c_Build_b__5_4,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c->static_fields->__9__5_4 =
           (System_Action_AottgUi__o *)pUVar1;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_c->static_fields->__9__5_4,pUVar1);
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,(System_Action_AottgUi__o *)pUVar1,"profile-preview-names",pGVar2,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_3 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x181e1b9b0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_3
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344cdf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_5);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-avatar-bg");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarBg");
    Il2CppMethodInitialized_184344cdf = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_Build_b__5_5,
             (MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (frame != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (frame,"profileCardAvatarBg",(System_Action_AottgUi__o *)__this_00,"profile-preview-avatar-bg",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewCard$$<Build>b__5_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_5 (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bg, const MethodInfo* method);
// 0x181e1bb40

void Gisketch_Aottg2UI_Game_AottgProfilePreviewCard___Build_b__5_5
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *bg,
               MethodInfo *method)

{
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344ce0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewAvatar");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-avatar-image");
    Il2CppMethodInitialized_184344ce0 = '\x01';
  }
  sprite = (__this->fields)._avatarSprite;
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (bg != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (bg,sprite,"profilePreviewAvatar","profile-preview-avatar-image",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


