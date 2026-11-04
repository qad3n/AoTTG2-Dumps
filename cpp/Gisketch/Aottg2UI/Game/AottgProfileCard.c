// Type: Gisketch.Aottg2UI.Game.AottgProfileCard
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileCard.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___cctor (const MethodInfo* method);
// 0x181e27880

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this;
  
  if (Il2CppMethodInitialized_184344c79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    Il2CppMethodInitialized_184344c79 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileCard___c___ctor(Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildIdentity>b__4_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_2 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x181e23840

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *names,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  
  if (Il2CppMethodInitialized_184344c7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildIdentity_b__4_4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.characterName");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-handle-row");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-player-name-skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-player-name");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardName");
    Il2CppMethodInitialized_184344c7a = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgActiveProfile__CharacterName((MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
            (names,pSVar1,"profileCardName","profile-card-player-name","profile.characterName",
             "profile-card-player-name-skeleton",pGVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
  }
  pSVar1 = "default";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__4_4;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildIdentity_b__4_4,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__4_4 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__4_4,__this_00);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(26.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (names,pSVar1,(System_Action_AottgUi__o *)__this_00,"profile-card-handle-row",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildIdentity>b__4_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_4 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* handle, const MethodInfo* method);
// 0x181e23be0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_4
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *handle
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  System_String_o *fallback;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *skeletonLayout;
  
  if (Il2CppMethodInitialized_184344c7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow);
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.accountName");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardHandle");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-auth-handle-skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-auth-handle");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.characterInfoJson");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-badges");
    Il2CppMethodInitialized_184344c7b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow);
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,"profile-card-badges",20.0,4.0,"profile.characterInfoJson","profile.identity.ready",
             (MethodInfo *)0x0);
  if (handle != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (handle,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    fallback = Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName((MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    skeletonLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0
                    ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                    ,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
              (handle,fallback,"profileCardHandle","profile-card-auth-handle","profile.accountName",
               "profile-card-auth-handle-skeleton",skeletonLayout,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x181e228c0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  
  if (Il2CppMethodInitialized_184344c7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-socials");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-about");
    Il2CppMethodInitialized_184344c7c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
  }
  pSVar2 = "default";
  pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_1;
  if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9;
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_1,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_1 =
         (System_Action_AottgUi__o *)pUVar3;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_1,pUVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(520.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,6.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (columns != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar2,(System_Action_AottgUi__o *)pUVar3,"profile-card-about",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    }
    pSVar2 = "default";
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_2;
    if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9;
      pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar3,pIVar1,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_2,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_2 =
           (System_Action_AottgUi__o *)pUVar3;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_2,pUVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (columns,pSVar2,(System_Action_AottgUi__o *)pUVar3,"profile-card-socials",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* about, const MethodInfo* method);
// 0x181e22ca0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *about,
               MethodInfo *method)

{
  System_String_o *fallback;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *skeletonLayout;
  
  if (Il2CppMethodInitialized_184344c7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBodyText");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.bio");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-bio");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-bio-skeleton");
    Il2CppMethodInitialized_184344c7d = '\x01';
  }
  fallback = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(86.0,(MethodInfo *)0x0);
  skeletonLayout =
       Gisketch_Aottg2UI_Code_AottgUi__Layout
                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                  (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                  (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
            (about,fallback,"profileCardBodyText","profile-card-bio","profile.bio",
             "profile-card-bio-skeleton",skeletonLayout,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_2 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* socials, const MethodInfo* method);
// 0x181e22e10

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *socials,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar8;
  bool bVar9;
  
  if (Il2CppMethodInitialized_184344c7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_3);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-socials-skeletons");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-socials-ready");
    Il2CppMethodInitialized_184344c7e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
  }
  pSVar2 = "default";
  pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_3;
  if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9;
    pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_3,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_3 =
         (System_Action_AottgUi__o *)pUVar3;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_3,pUVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (socials != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (socials,pSVar2,(System_Action_AottgUi__o *)pUVar3,"profile-card-socials-ready",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      bVar9 = Il2CppMethodInitialized_184344c75 == '\0';
      (pGVar6->fields).active = false;
      if (bVar9) {
        il2cpp_codegen_initialize_runtime_metadata(&"fade");
        Il2CppMethodInitialized_184344c75 = '\x01';
      }
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar6->fields).enter = pGVar7;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).enter,pGVar7);
      pSVar2 = "profile.identity.ready";
      if (Il2CppMethodInitialized_184344c73 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Il2CppMethodInitialized_184344c73 = '\x01';
      }
      pGVar8 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar8,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (pGVar8->fields).visible = pSVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar8->fields).visible,pSVar2);
        (pGVar6->fields).bind = pGVar8;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).bind,pGVar8);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c)
          ;
        }
        pSVar2 = "default";
        pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_4;
        if (pUVar3 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9;
          pUVar3 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    (pUVar3,pIVar1,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_4,
                     (MethodInfo *)0x0);
          TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_4 =
               (System_Action_AottgUi__o *)pUVar3;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_4,pUVar3);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,1.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (socials,pSVar2,(System_Action_AottgUi__o *)pUVar3,"profile-card-socials-skeletons",pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          bVar9 = Il2CppMethodInitialized_184344c75 == '\0';
          (pGVar6->fields).active = false;
          if (bVar9) {
            il2cpp_codegen_initialize_runtime_metadata(&"fade");
            Il2CppMethodInitialized_184344c75 = '\x01';
          }
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                             ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
          (pGVar6->fields).enter = pGVar7;
          Il2CppCodeGenWriteBarrier(&(pGVar6->fields).enter,pGVar7);
          pSVar2 = "profile.identity.loading";
          if (Il2CppMethodInitialized_184344c73 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
            Il2CppMethodInitialized_184344c73 = '\x01';
          }
          pGVar8 = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar8,(MethodInfo *)0x0);
          if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
            (pGVar8->fields).visible = pSVar2;
            Il2CppCodeGenWriteBarrier(&(pGVar8->fields).visible,pSVar2);
            (pGVar6->fields).bind = pGVar8;
            Il2CppCodeGenWriteBarrier(&(pGVar6->fields).bind,pGVar8);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_3 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* readySocials, const MethodInfo* method);
// 0x181e233c0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_3
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *readySocials,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  uint index;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_184344c7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"No social links yet.");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBodyText");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.socials.empty");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.NoSocialLinks");
    Il2CppMethodInitialized_184344c7f = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  if (readySocials != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    index = 0;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                       (readySocials,"MainMenu.Profile.NoSocialLinks","No social links yet.","profileCardBodyText",
                        (System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).visible = "profile.socials.empty";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"profile.socials.empty");
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind,__this_00);
        if (pSVar2 != (System_String_array *)0x0) {
          do {
            uVar1 = (uint)pSVar2->max_length;
            if ((int)index < (int)uVar1) {
              if (uVar1 <= index) {
                ThrowIndexOutOfRangeException();
              }
              ppSVar4 = pSVar2->m_Items + (int)index;
            }
            else {
              ppSVar4 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
            }
            Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,index,*ppSVar4,(MethodInfo *)0x0);
            index = index + 1;
          } while ((int)index < 8);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_4 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loadingSocials, const MethodInfo* method);
// 0x181e23540

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_4
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loadingSocials,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184344c80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-socials-skeleton-1");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-socials-skeleton-0");
    Il2CppMethodInitialized_184344c80 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (loadingSocials != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loadingSocials,"profile-card-socials-skeleton-0",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(240.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loadingSocials,"profile-card-socials-skeleton-1",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___ctor(Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181e256d0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_184344c81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildIdentity_b__4_2);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-avatar-frame");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarFrame");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-name-stack");
    Il2CppMethodInitialized_184344c81 = '\x01';
  }
  pSVar1 = "profileCardAvatarFrame";
  pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
  if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__1,
               (MethodInfo *)0x0);
    (__this->fields).__9__1 = (System_Action_AottgUi__o *)pUVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,pUVar2);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(172.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,86.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar1,(System_Action_AottgUi__o *)pUVar2,"profile-card-avatar-frame",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    }
    pSVar1 = "default";
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__4_2;
    if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9;
      pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar2,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildIdentity_b__4_2,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__4_2 =
           (System_Action_AottgUi__o *)pUVar2;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__4_2,pUVar2);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,22.0,0.0,0.0,0.0,
                        1.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar1,(System_Action_AottgUi__o *)pUVar2,"profile-card-name-stack",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x181e25a50

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344c82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__3);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarBg");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-avatar-bg");
    Il2CppMethodInitialized_184344c82 = '\x01';
  }
  style = "profileCardAvatarBg";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__3;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__3,
               (MethodInfo *)0x0);
    (__this->fields).__9__3 = (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
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
              (frame,style,(System_Action_AottgUi__o *)__this_00,"profile-card-avatar-bg",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__3 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bg, const MethodInfo* method);
// 0x181e25c30

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__3
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *bg,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  bool bVar5;
  
  if (Il2CppMethodInitialized_184344c83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.avatarSprite");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Change Avatar");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-avatar-edit");
    il2cpp_codegen_initialize_runtime_metadata(&"Account");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-avatar-skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-avatar");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-change-avatar");
    il2cpp_codegen_initialize_runtime_metadata(&"Change avatar");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarImage");
    Il2CppMethodInitialized_184344c83 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (bg != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (bg,"profile-card-avatar-skeleton",pGVar3,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    sprite = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite((MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(156.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (bg,sprite,"profileCardAvatarImage","profile-card-avatar",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      bVar5 = Il2CppMethodInitialized_184344c75 == '\0';
      (pGVar4->fields).active = false;
      if (bVar5) {
        il2cpp_codegen_initialize_runtime_metadata(&"fade");
        Il2CppMethodInitialized_184344c75 = '\x01';
      }
      value = Gisketch_Aottg2UI_Code_AottgUi__Motion
                        ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar4->fields).enter = value;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).enter,value);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_00->fields).sprite = "profile.avatarSprite";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite,"profile.avatarSprite");
        (__this_00->fields).visible = "profile.identity.ready";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"profile.identity.ready");
        (pGVar4->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind,__this_00);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  (bg,"profile-card-avatar-edit","Change avatar","Change Avatar","profile-change-avatar",
                   (__this->fields).isMine,"Account",0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___ctor(Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$<Social>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x181e270e0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  
  if (Il2CppMethodInitialized_184344c84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0_Social_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-social-label-");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/kenney-icons/share2");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardSocialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-social-icon-");
    Il2CppMethodInitialized_184344c84 = '\x01';
  }
  pSVar1 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("profile-card-social-icon-",pSVar1,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (row,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar1,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = "default";
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)(__this->fields).__9__1;
    if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0_Social_b__1,
                 (MethodInfo *)0x0);
      (__this->fields).__9__1 = (System_Action_AottgUi__o *)__this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1,__this_00);
    }
    pSVar5 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_1969e50("profile-card-social-label-",pSVar5,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar1,(System_Action_AottgUi__o *)__this_00,pSVar5,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$<Social>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* label, const MethodInfo* method);
// 0x181e27430

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *label,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  int32_t local_res8 [8];
  
  if (Il2CppMethodInitialized_184344c85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardSocialText");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-social-text-");
    Il2CppMethodInitialized_184344c85 = '\x01';
  }
  text = (__this->fields).value;
  pSVar1 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_1969e50("profile-card-social-text-",pSVar1,(MethodInfo *)0x0);
  local_res8[0] = (__this->fields).index;
  if (Il2CppMethodInitialized_184344d05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile.social.");
    Il2CppMethodInitialized_184344d05 = '\x01';
  }
  pSVar2 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_1969e50("profile.social.",pSVar2,(MethodInfo *)0x0);
  if (label != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (label,text,"profileCardSocialText",pSVar1,pSVar2,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___ctor(Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass9_0$$<AddEditOverlay>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___AddEditOverlay_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* overlay, const MethodInfo* method);
// 0x181e27510

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___AddEditOverlay_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *overlay,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *actionId;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344c86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/edit");
    il2cpp_codegen_initialize_runtime_metadata(&"-button");
    il2cpp_codegen_initialize_runtime_metadata(&"account");
    Il2CppMethodInitialized_184344c86 = '\x01';
  }
  text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  actionId = System_String__Concat_1969e50("dialog.",(__this->fields).dialogId,(MethodInfo *)0x0);
  id = System_String__Concat_1969e50((__this->fields).id,"-button",(MethodInfo *)0x0);
  if (overlay != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (overlay,5,text,actionId,id,(__this->fields).tooltip,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/edit",
                      (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(node->fields).layout,value);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (node,(__this->fields).searchTitle,(System_String_o *)0x0,"material-icons/edit",
                 (System_String_o *)0x0,"account",(__this->fields).sectionTitle,false,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, bool isMine, const MethodInfo* method);
// 0x181a291a0

void
Gisketch_Aottg2UI_Game_AottgProfileCard___ctor(Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, bool isMine, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._isMine = param_2;
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__Build (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e14ac0

void Gisketch_Aottg2UI_Game_AottgProfileCard__Build
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344c6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCard");
    Il2CppMethodInitialized_184344c6e = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_0,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
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
              (ui,"profileCard",(System_Action_AottgUi__o *)__this_00,"profile-card",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BuildIdentity
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity (Gisketch_Aottg2UI_Code_AottgUi_o* body, bool isMine, const MethodInfo* method);
// 0x181e148f0

void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,bool isMine,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344c6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-identity");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184344c6f = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *)0x0) {
    (object->fields).isMine = isMine;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__0,
               (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"FlexStart",
                        (System_String_o *)0x0,(System_String_o *)0x0,24.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (body,"default",(System_Action_AottgUi__o *)__this,"profile-card-identity",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BuildDetails
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e146a0

void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344c70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-columns");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184344c70 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
  }
  style = "default";
  __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_0;
  if (__this == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9;
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_0,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_0 =
         (System_Action_AottgUi__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_0,__this);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","FlexStart",(System_String_o *)0x0
                      ,(System_String_o *)0x0,48.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,56.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,(System_Action_AottgUi__o *)__this,"profile-card-columns",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$Social
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__Social (Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x181e14c90

void Gisketch_Aottg2UI_Game_AottgProfileCard__Social
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t index,System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  int32_t local_res10 [2];
  
  if (Il2CppMethodInitialized_184344c71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0_Social_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-social-");
    Il2CppMethodInitialized_184344c71 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *)0x0) {
    (object->fields).index = index;
    (object->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).value,value);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0_Social_b__0,
               (MethodInfo *)0x0);
    pSVar1 = System_Int32__ToString(&(object->fields).index,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50("profile-card-social-",pSVar1,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"default",(System_Action_AottgUi__o *)__this,pSVar1,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
      local_res10[0] = (object->fields).index;
      if (Il2CppMethodInitialized_184344d06 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"profile.social.");
        il2cpp_codegen_initialize_runtime_metadata(&".visible");
        Il2CppMethodInitialized_184344d06 = '\x01';
      }
      pSVar1 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_1969b70
                         ("profile.social.",pSVar1,".visible",(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_00->fields).visible = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,pSVar1);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).bind = __this_00;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind,__this_00);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BoundProfileText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* fallback, System_String_o* style, System_String_o* id, System_String_o* textKey, System_String_o* skeletonId, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* skeletonLayout, const MethodInfo* method);
// 0x181e144e0

void Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *fallback,System_String_o *style,
               System_String_o *id,System_String_o *textKey,System_String_o *skeletonId,
               Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *skeletonLayout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184344c72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    Il2CppMethodInitialized_184344c72 = '\x01';
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,fallback,style,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      bVar2 = Il2CppMethodInitialized_184344c75 == '\0';
      (pGVar1->fields).active = false;
      if (bVar2) {
        il2cpp_codegen_initialize_runtime_metadata(&"fade");
        Il2CppMethodInitialized_184344c75 = '\x01';
      }
      value = Gisketch_Aottg2UI_Code_AottgUi__Motion
                        ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar1->fields).enter = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter,value);
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this->fields).text = textKey;
        Il2CppCodeGenWriteBarrier(&(__this->fields).text,textKey);
        (__this->fields).visible = "profile.identity.ready";
        Il2CppCodeGenWriteBarrier(&(__this->fields).visible,"profile.identity.ready");
        (pGVar1->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this);
        Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                  (ui,skeletonId,skeletonLayout,"skeleton","profile.identity.loading",
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileCard__Visible (System_String_o* key, const MethodInfo* method);
// 0x181e15b00

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileCard__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344c73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_184344c73 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    (__this->fields).visible = key;
    Il2CppCodeGenWriteBarrier(&(__this->fields).visible,key);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$AddEditOverlay
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_o* tooltip, System_String_o* searchTitle, System_String_o* dialogId, bool isMine, System_String_o* sectionTitle, float offsetX, const MethodInfo* method);
// 0x181e14290

void Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_o *tooltip,
               System_String_o *searchTitle,System_String_o *dialogId,bool isMine,
               System_String_o *sectionTitle,float offsetX,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184344c74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass9_0_AddEditOverlay_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_184344c74 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass9_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o *)0x0) {
    (object->fields).dialogId = dialogId;
    Il2CppCodeGenWriteBarrier(&(object->fields).dialogId,dialogId);
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    (object->fields).tooltip = tooltip;
    Il2CppCodeGenWriteBarrier(&(object->fields).tooltip,tooltip);
    (object->fields).searchTitle = searchTitle;
    Il2CppCodeGenWriteBarrier(&(object->fields).searchTitle,searchTitle);
    (object->fields).sectionTitle = sectionTitle;
    Il2CppCodeGenWriteBarrier(&(object->fields).sectionTitle,sectionTitle);
    if (isMine) {
      __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass9_0_AddEditOverlay_b__0,
                 (MethodInfo *)0x0);
      id_00 = (object->fields).id;
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(44.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"FlexEnd",
                          "Absolute",(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,8.0,8.0,0.0,offsetX,
                          0.0,0.0,1.0,(MethodInfo *)0x0);
      if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_181e144da;
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"default",(System_Action_AottgUi__o *)__this,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    }
    return;
  }
label_181e144da:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$RevealMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileCard__RevealMotion (const MethodInfo* method);
// 0x181e14c40

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileCard__RevealMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344c75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"fade");
    Il2CppMethodInitialized_184344c75 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_0 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x181e14f50

void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_0
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *card,
               MethodInfo *method)

{
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184344c76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_2);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-body");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBody");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-banner");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBanner");
    Il2CppMethodInitialized_184344c76 = '\x01';
  }
  pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (pUVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_1,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","Center","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,pGVar2,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                      ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,"profileCardBanner",(System_Action_AottgUi__o *)pUVar1,"profile-card-banner",
                        pGVar3,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).clip = true;
      pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (pUVar1,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_2,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,24.0,pGVar2,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,36.0,0.0,0.0,0.0,0.0,32.0,0.0,0.0
                          ,0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (card,"profileCardBody",(System_Action_AottgUi__o *)pUVar1,"profile-card-body",pGVar3,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_1 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* banner, const MethodInfo* method);
// 0x181e15250

void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_1
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *banner,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  bool bVar5;
  
  if (Il2CppMethodInitialized_184344c77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-banner-image");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-banner-skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"Change banner");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBannerImage");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-change-banner");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-banner-edit");
    il2cpp_codegen_initialize_runtime_metadata(&"Account");
    il2cpp_codegen_initialize_runtime_metadata(&"Change Banner");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.bannerSprite");
    Il2CppMethodInitialized_184344c77 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (banner != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (banner,"profile-card-banner-skeleton",pGVar3,"skeleton","profile.identity.loading",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    sprite = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite((MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (banner,sprite,"profileCardBannerImage","profile-card-banner-image",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      bVar5 = Il2CppMethodInitialized_184344c75 == '\0';
      (pGVar4->fields).active = false;
      if (bVar5) {
        il2cpp_codegen_initialize_runtime_metadata(&"fade");
        Il2CppMethodInitialized_184344c75 = '\x01';
      }
      value = Gisketch_Aottg2UI_Code_AottgUi__Motion
                        ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar4->fields).enter = value;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).enter,value);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_00->fields).sprite = "profile.bannerSprite";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite,"profile.bannerSprite");
        (__this_00->fields).visible = "profile.identity.ready";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible,"profile.identity.ready");
        (pGVar4->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind,__this_00);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  (banner,"profile-card-banner-edit","Change banner","Change Banner",
                   "profile-change-banner",(__this->fields)._isMine,"Account",0.0,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_2 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e15670

void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *object_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184344c78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-edit-details");
    il2cpp_codegen_initialize_runtime_metadata(&"Account");
    il2cpp_codegen_initialize_runtime_metadata(&"Edit profile details");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-details-edit");
    il2cpp_codegen_initialize_runtime_metadata(&"Edit Details");
    Il2CppMethodInitialized_184344c78 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
            (body,"profile-card-details-edit","Edit profile details","Edit Details","profile-edit-details",
             (__this->fields)._isMine,"Account",72.0,(MethodInfo *)0x0);
  bVar1 = (__this->fields)._isMine;
  if (Il2CppMethodInitialized_184344c6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-identity");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184344c6f = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object_00,(MethodInfo *)0x0);
  if (object_00 != (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *)0x0) {
    (object_00->fields).isMine = bVar1;
    pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar2,(Il2CppObject *)object_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__0,
               (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"FlexStart",
                        (System_String_o *)0x0,(System_String_o *)0x0,24.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (body,"default",(System_Action_AottgUi__o *)pUVar2,"profile-card-identity",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_184344c70 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_0);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
        il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
        il2cpp_codegen_initialize_runtime_metadata(&"profile-card-columns");
        il2cpp_codegen_initialize_runtime_metadata(&"Row");
        il2cpp_codegen_initialize_runtime_metadata(&"default");
        il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
        Il2CppMethodInitialized_184344c70 = '\x01';
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
      }
      style = "default";
      pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
               TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_0;
      if (pUVar2 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c)
          ;
        }
        object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9;
        pUVar2 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  (pUVar2,object,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_0,
                   (MethodInfo *)0x0);
        TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_0 =
             (System_Action_AottgUi__o *)pUVar2;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9__5_0,pUVar2);
      }
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","SpaceBetween","FlexStart",
                          (System_String_o *)0x0,(System_String_o *)0x0,48.0,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,56.0,
                          0.0,1.0,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (body,style,(System_Action_AottgUi__o *)pUVar2,"profile-card-columns",pGVar4,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


