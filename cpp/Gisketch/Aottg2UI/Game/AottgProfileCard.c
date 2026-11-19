// Type: Gisketch.Aottg2UI.Game.AottgProfileCard
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileCard.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___cctor (const MethodInfo* method);
// 0x58f9360

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075455ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    Il2CppMethodInitialized_075455ed = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, const MethodInfo* method);
// 0x58f93d0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildIdentity>b__4_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_2 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x58f93e0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *names,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Game_AottgProfileCard___c_StaticFields *pGVar5;
  System_Action_AottgUi__o *__this_00;
  
  if (Il2CppMethodInitialized_075455ee == '\0') {
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
    Il2CppMethodInitialized_075455ee = '\x01';
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
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
  __this_00 = pGVar5->__9__4_4;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    }
    object = (Il2CppObject *)pGVar5->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildIdentity_b__4_4,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    pGVar5->__9__4_4 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar5->__9__4_4);
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
  if (names == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (names,pSVar1,__this_00,"profile-card-handle-row",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildIdentity>b__4_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_4 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* handle, const MethodInfo* method);
// 0x58f96f0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildIdentity_b__4_4
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *handle
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *skeletonLayout;
  
  if (Il2CppMethodInitialized_075455ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow);
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.accountName");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardHandle");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-auth-handle-skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-auth-handle");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.characterInfoJson");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-badges");
    Il2CppMethodInitialized_075455ef = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgBadgeIconRow);
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,"profile-card-badges",20.0,4.0,"profile.characterInfoJson","profile.identity.ready",
             (MethodInfo *)0x0);
  if (handle == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (handle,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_Game_AottgActiveProfile__AccountName((MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(180.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
  skeletonLayout =
       Gisketch_Aottg2UI_Code_AottgUi__Layout
                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                  (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                  (MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
            (handle,value,"profileCardHandle","profile-card-auth-handle","profile.accountName",
             "profile-card-auth-handle-skeleton",skeletonLayout,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* columns, const MethodInfo* method);
// 0x58f98d0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *columns,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Game_AottgProfileCard___c_StaticFields *pGVar7;
  
  if (Il2CppMethodInitialized_075455f0 == '\0') {
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
    Il2CppMethodInitialized_075455f0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
  }
  pSVar2 = "default";
  pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
  pSVar3 = pGVar7->__9__5_1;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar7->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    pGVar7->__9__5_1 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__5_1);
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
  if (columns == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar2,pSVar3,"profile-card-about",pGVar6,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
  }
  pSVar2 = "default";
  pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
  pSVar3 = pGVar7->__9__5_2;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
      pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar7->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_2,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar7 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    pGVar7->__9__5_2 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar7->__9__5_2);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(300.0,(MethodInfo *)0x0);
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (columns,pSVar2,pSVar3,"profile-card-socials",pGVar6,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* about, const MethodInfo* method);
// 0x58f9c00

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *about,
               MethodInfo *method)

{
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *skeletonLayout;
  
  if (Il2CppMethodInitialized_075455f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBodyText");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.bio");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-bio");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-bio-skeleton");
    Il2CppMethodInitialized_075455f1 = '\x01';
  }
  value = Gisketch_Aottg2UI_Game_AottgActiveProfile__Bio((MethodInfo *)0x0);
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
            (about,value,"profileCardBodyText","profile-card-bio","profile.bio",
             "profile-card-bio-skeleton",skeletonLayout,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_2 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* socials, const MethodInfo* method);
// 0x58f9d50

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *socials,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Game_AottgProfileCard___c_StaticFields *pGVar9;
  
  if (Il2CppMethodInitialized_075455f2 == '\0') {
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
    Il2CppMethodInitialized_075455f2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
  }
  pSVar2 = "default";
  pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
  pSVar3 = pGVar9->__9__5_3;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
      pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar9->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_3,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    pGVar9->__9__5_3 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar9->__9__5_3);
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
                       (socials,pSVar2,pSVar3,"profile-card-socials-ready",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar6->fields).active = false;
      pGVar7 = Gisketch_Aottg2UI_Game_AottgProfileCard__RevealMotion((MethodInfo *)0x0);
      (pGVar6->fields).enter = pGVar7;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).enter);
      pGVar8 = Gisketch_Aottg2UI_Game_AottgProfileCard__Visible("profile.identity.ready",(MethodInfo *)0x0);
      (pGVar6->fields).bind = pGVar8;
      Il2CppCodeGenWriteBarrier(&(pGVar6->fields).bind);
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
      }
      pSVar2 = "default";
      pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
      pSVar3 = pGVar9->__9__5_4;
      if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c)
          ;
          pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
        }
        pIVar1 = (Il2CppObject *)pGVar9->__9;
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
        System_Action_object____ctor
                  ((System_Action_object__o *)pSVar3,pIVar1,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_4,
                   (MethodInfo_4A81BE0 *)0x0);
        pGVar9 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
        pGVar9->__9__5_4 = pSVar3;
        Il2CppCodeGenWriteBarrier(&pGVar9->__9__5_4);
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (socials,pSVar2,pSVar3,"profile-card-socials-skeletons",pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).active = false;
        pGVar7 = Gisketch_Aottg2UI_Game_AottgProfileCard__RevealMotion((MethodInfo *)0x0);
        (pGVar6->fields).enter = pGVar7;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).enter);
        pGVar8 = Gisketch_Aottg2UI_Game_AottgProfileCard__Visible("profile.identity.loading",(MethodInfo *)0x0);
        (pGVar6->fields).bind = pGVar8;
        Il2CppCodeGenWriteBarrier(&(pGVar6->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_3 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* readySocials, const MethodInfo* method);
// 0x58fa140

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_3
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *readySocials,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_075455f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBodyText");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.socials.empty");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.NoSocialLinks");
    Il2CppMethodInitialized_075455f3 = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgActiveProfile__SocialLinks((MethodInfo *)0x0);
  if (readySocials == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
label_058fa440:
    ThrowNullReferenceException();
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                     (readySocials,"MainMenu.Profile.NoSocialLinks","profileCardBodyText",(System_String_o *)0x0,
                      (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                      (MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_058fa440;
  (__this_00->fields).visible = "profile.socials.empty";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_058fa440;
  (pGVar3->fields).bind = __this_00;
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
  if (pSVar2 == (System_String_array *)0x0) goto label_058fa440;
  if ((int)pSVar2->max_length < 1) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    if ((pSVar2->max_length & 0xffffffff) == 0) goto label_058fa445;
    ppSVar4 = pSVar2->m_Items;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,0,*ppSVar4,(MethodInfo *)0x0);
  if ((int)pSVar2->max_length < 2) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    if ((pSVar2->max_length & 0xfffffffe) == 0) goto label_058fa445;
    ppSVar4 = pSVar2->m_Items + 1;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,1,*ppSVar4,(MethodInfo *)0x0);
  uVar1 = (uint)pSVar2->max_length;
  if ((int)uVar1 < 3) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    if (uVar1 < 3) goto label_058fa445;
    ppSVar4 = pSVar2->m_Items + 2;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,2,*ppSVar4,(MethodInfo *)0x0);
  if ((int)pSVar2->max_length < 4) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    if ((pSVar2->max_length & 0xfffffffc) == 0) goto label_058fa445;
    ppSVar4 = pSVar2->m_Items + 3;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,3,*ppSVar4,(MethodInfo *)0x0);
  uVar1 = (uint)pSVar2->max_length;
  if ((int)uVar1 < 5) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    if (uVar1 < 5) goto label_058fa445;
    ppSVar4 = pSVar2->m_Items + 4;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,4,*ppSVar4,(MethodInfo *)0x0);
  uVar1 = (uint)pSVar2->max_length;
  if ((int)uVar1 < 6) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    if ((uVar1 & 0xfffffffe) < 6) goto label_058fa445;
    ppSVar4 = pSVar2->m_Items + 5;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,5,*ppSVar4,(MethodInfo *)0x0);
  uVar1 = (uint)pSVar2->max_length;
  if ((int)uVar1 < 7) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    if (uVar1 < 7) goto label_058fa445;
    ppSVar4 = pSVar2->m_Items + 6;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,6,*ppSVar4,(MethodInfo *)0x0);
  if ((int)pSVar2->max_length < 8) {
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  else {
    if ((pSVar2->max_length & 0xfffffff8) == 0) {
label_058fa445:
      ThrowIndexOutOfRangeException();
    }
    ppSVar4 = pSVar2->m_Items + 7;
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__Social(readySocials,7,*ppSVar4,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c$$<BuildDetails>b__5_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_4 (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loadingSocials, const MethodInfo* method);
// 0x58fa450

void Gisketch_Aottg2UI_Game_AottgProfileCard___c___BuildDetails_b__5_4
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loadingSocials,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_075455f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-socials-skeleton-1");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-socials-skeleton-0");
    Il2CppMethodInitialized_075455f4 = '\x01';
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
  if (loadingSocials == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
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
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Skeleton
            (loadingSocials,"profile-card-socials-skeleton-1",pGVar3,"skeleton",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x58fa640

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58fa650

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Game_AottgProfileCard___c_StaticFields *pGVar4;
  
  if (Il2CppMethodInitialized_075455f5 == '\0') {
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
    Il2CppMethodInitialized_075455f5 = '\x01';
  }
  pSVar1 = "profileCardAvatarFrame";
  pSVar2 = (__this->fields).__9__1;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__1,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
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
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (row,pSVar1,pSVar2,"profile-card-avatar-frame",pGVar3,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
  }
  pSVar1 = "default";
  pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
  pSVar2 = pGVar4->__9__4_2;
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    }
    object = (Il2CppObject *)pGVar4->__9;
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar2,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildIdentity_b__4_2,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    pGVar4->__9__4_2 = pSVar2;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__4_2);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,2.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,22.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (row,pSVar1,pSVar2,"profile-card-name-stack",pGVar3,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x58fa940

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  System_String_o *style;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075455f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__3);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarBg");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-avatar-bg");
    Il2CppMethodInitialized_075455f6 = '\x01';
  }
  style = "profileCardAvatarBg";
  __this_00 = (__this->fields).__9__3;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__3,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__3 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__3);
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
  if (frame == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (frame,style,__this_00,"profile-card-avatar-bg",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass4_0$$<BuildIdentity>b__3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__3 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bg, const MethodInfo* method);
// 0x58faad0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___BuildIdentity_b__3
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *bg,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075455f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.avatarSprite");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-avatar-edit");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-avatar-skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"ChangeAvatar");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-avatar");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-change-avatar");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardAvatarImage");
    Il2CppMethodInitialized_075455f7 = '\x01';
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
      (pGVar4->fields).active = false;
      pGVar5 = Gisketch_Aottg2UI_Game_AottgProfileCard__RevealMotion((MethodInfo *)0x0);
      (pGVar4->fields).enter = pGVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).enter);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_00->fields).sprite = "profile.avatarSprite";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite);
        (__this_00->fields).visible = "profile.identity.ready";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
        (pGVar4->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  (bg,"profile-card-avatar-edit","ChangeAvatar","profile-change-avatar",
                   (__this->fields).isMine,0.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x58fae10

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$<Social>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x58fae20

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  System_Action_AottgUi__o *__this_00;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  
  if (Il2CppMethodInitialized_075455f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0_Social_b__1);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-social-label-");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/kenney-icons/share2");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardSocialIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-social-icon-");
    Il2CppMethodInitialized_075455f8 = '\x01';
  }
  pSVar1 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("profile-card-social-icon-",pSVar1,(MethodInfo *)0x0);
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
  if (row == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Image
            (row,"Icons/kenney-icons/share2","profileCardSocialIcon",pSVar1,pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = "default";
  __this_00 = (__this->fields).__9__1;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0_Social_b__1,
               (MethodInfo_4A81BE0 *)0x0);
    (__this->fields).__9__1 = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__9__1);
  }
  pSVar5 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_52f0320("profile-card-social-label-",pSVar5,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(264.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (row,pSVar1,__this_00,pSVar5,pGVar4,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass6_0$$<Social>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__1 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* label, const MethodInfo* method);
// 0x58fb0c0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___Social_b__1
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *label,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  int32_t iStack_24;
  
  if (Il2CppMethodInitialized_075455f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardSocialText");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-social-text-");
    Il2CppMethodInitialized_075455f9 = '\x01';
  }
  text = (__this->fields).value;
  pSVar1 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat_52f0320("profile-card-social-text-",pSVar1,(MethodInfo *)0x0);
  iStack_24 = (__this->fields).index;
  if (Il2CppMethodInitialized_07545679 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile.social.");
    Il2CppMethodInitialized_07545679 = '\x01';
  }
  pSVar2 = System_Int32__ToString(&iStack_24,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320("profile.social.",pSVar2,(MethodInfo *)0x0);
  if (label == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Text
            (label,text,"profileCardSocialText",pSVar1,pSVar2,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x58fb1f0

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard.<>c__DisplayClass9_0$$<AddEditOverlay>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___AddEditOverlay_b__0 (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* overlay, const MethodInfo* method);
// 0x58fb200

void Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___AddEditOverlay_b__0
               (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *overlay,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *id;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_075455fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"dialog.");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Account");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/edit");
    il2cpp_codegen_initialize_runtime_metadata(&"Tooltip");
    il2cpp_codegen_initialize_runtime_metadata(&"-button");
    il2cpp_codegen_initialize_runtime_metadata(&"account");
    Il2CppMethodInitialized_075455fa = '\x01';
  }
  pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  pSVar1 = System_String__Concat_52f0320("dialog.",(__this->fields).dialogId,(MethodInfo *)0x0);
  id = System_String__Concat_52f0320((__this->fields).id,"-button",(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_5301f10
                     ("MainMenu.Profile.",(__this->fields).item,"Tooltip",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
  if (overlay != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    node = Gisketch_Aottg2UI_Code_AottgUi__Button
                     (overlay,5,pSVar4,pSVar1,id,pSVar2,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"material-icons/edit",
                      (MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (node->fields).layout = pGVar3;
      Il2CppCodeGenWriteBarrier(&(node->fields).layout);
      pSVar4 = System_String__Concat_52f0320("MainMenu.Profile.",(__this->fields).item,(MethodInfo *)0x0);
      pSVar4 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar4,(MethodInfo *)0x0);
      pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("MainMenu.Profile.Account",(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Code_AottgSearchableExtensions__Searchable
                (node,pSVar4,(System_String_o *)0x0,"material-icons/edit",(System_String_o *)0x0,
                 "account",pSVar1,false,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___ctor (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, bool isMine, const MethodInfo* method);
// 0x58f8120

void Gisketch_Aottg2UI_Game_AottgProfileCard___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,bool isMine,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._isMine = isMine;
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__Build (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58f8140

void Gisketch_Aottg2UI_Game_AottgProfileCard__Build
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075455e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCard");
    Il2CppMethodInitialized_075455e1 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_0,
             (MethodInfo_4A81BE0 *)0x0);
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
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,"profileCard",__this_00,"profile-card",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BuildIdentity
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity (Gisketch_Aottg2UI_Code_AottgUi_o* body, bool isMine, const MethodInfo* method);
// 0x58f8290

void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,bool isMine,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075455e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-identity");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_075455e2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0);
  Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass4_0_o *)0x0) {
    (__this->fields).isMine = isMine;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass4_0_BuildIdentity_b__0,
               (MethodInfo_4A81BE0 *)0x0);
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
                (body,"default",__this_00,"profile-card-identity",layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BuildDetails
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58f8430

void Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgProfileCard___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075455e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-columns");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_075455e3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
  __this = pGVar1->__9__5_0;
  if (__this == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c_BuildDetails_b__5_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c->static_fields;
    pGVar1->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__5_0);
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
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,style,__this,"profile-card-columns",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$Social
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__Social (Gisketch_Aottg2UI_Code_AottgUi_o* ui, int32_t index, System_String_o* value, const MethodInfo* method);
// 0x58f8620

void Gisketch_Aottg2UI_Game_AottgProfileCard__Social
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,int32_t index,System_String_o *value,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_075455e4 == '\0') {
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
    Il2CppMethodInitialized_075455e4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0);
  Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass6_0_o *)0x0) {
    (__this->fields).index = index;
    (__this->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).value);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass6_0_Social_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    pSVar1 = System_Int32__ToString(&(__this->fields).index,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_52f0320("profile-card-social-",pSVar1,(MethodInfo *)0x0);
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
                         (ui,"default",__this_00,pSVar1,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
      pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileStateKeys__SocialVisible
                         ((__this->fields).index,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_01->fields).visible = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).visible);
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).bind = __this_01;
          Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$BoundProfileText
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* value, System_String_o* style, System_String_o* id, System_String_o* textKey, System_String_o* skeletonId, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* skeletonLayout, const MethodInfo* method);
// 0x58f8870

void Gisketch_Aottg2UI_Game_AottgProfileCard__BoundProfileText
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *value,System_String_o *style,
               System_String_o *id,System_String_o *textKey,System_String_o *skeletonId,
               Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *skeletonLayout,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_075455e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    Il2CppMethodInitialized_075455e5 = '\x01';
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ui,value,style,id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).active = false;
      if (Il2CppMethodInitialized_075455e8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"fade");
        Il2CppMethodInitialized_075455e8 = '\x01';
      }
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar1->fields).enter = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).enter);
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this->fields).text = textKey;
        Il2CppCodeGenWriteBarrier(&(__this->fields).text);
        (__this->fields).visible = "profile.identity.ready";
        Il2CppCodeGenWriteBarrier(&(__this->fields).visible);
        (pGVar1->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
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
// 0x58f8a60

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileCard__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_075455e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_075455e6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).visible = key;
  Il2CppCodeGenWriteBarrier(&(__this->fields).visible);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$AddEditOverlay
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay (Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_String_o* id, System_String_o* item, System_String_o* dialogId, bool isMine, float offsetX, const MethodInfo* method);
// 0x58f8ad0

void Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_String_o *id,System_String_o *item,
               System_String_o *dialogId,bool isMine,float offsetX,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075455e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass9_0_AddEditOverlay_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_075455e7 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass9_0);
  Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Game_AottgProfileCard___c__DisplayClass9_0_o *)0x0) {
label_058f8cc9:
    ThrowNullReferenceException();
  }
  (__this->fields).dialogId = dialogId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).dialogId);
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id);
  (__this->fields).item = item;
  Il2CppCodeGenWriteBarrier(&(__this->fields).item);
  if (isMine) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_c__DisplayClass9_0_AddEditOverlay_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    id_00 = (__this->fields).id;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(44.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"FlexEnd",
                        "Absolute",(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,8.0,8.0,0.0,offsetX,0.0
                        ,0.0,1.0,(MethodInfo *)0x0);
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_058f8cc9;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",__this_00,id_00,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$RevealMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileCard__RevealMotion (const MethodInfo* method);
// 0x58f8a10

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileCard__RevealMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_075455e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"fade");
    Il2CppMethodInitialized_075455e8 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_0 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x58f8cd0

void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_0
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *card,
               MethodInfo *method)

{
  System_Action_AottgUi__o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_075455e9 == '\0') {
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
    Il2CppMethodInitialized_075455e9 = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_1,
             (MethodInfo_4A81BE0 *)0x0);
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
                       (card,"profileCardBanner",pSVar1,"profile-card-banner",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).clip = true;
      pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                ((System_Action_object__o *)pSVar1,(Il2CppObject *)__this,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileCard_Build_b__3_2,
                 (MethodInfo_4A81BE0 *)0x0);
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
                (card,"profileCardBody",pSVar1,"profile-card-body",pGVar3,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_1 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* banner, const MethodInfo* method);
// 0x58f8f60

void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_1
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *banner,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075455ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-banner-image");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-banner-skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBannerImage");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-change-banner");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-banner-edit");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.identity.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.bannerSprite");
    il2cpp_codegen_initialize_runtime_metadata(&"ChangeBanner");
    Il2CppMethodInitialized_075455ea = '\x01';
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
    method_00 = (MethodInfo *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (banner,sprite,"profileCardBannerImage","profile-card-banner-image",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).active = false;
      if (Il2CppMethodInitialized_075455e8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"fade");
        Il2CppMethodInitialized_075455e8 = '\x01';
      }
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar4->fields).enter = pGVar5;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).enter);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_00->fields).sprite = "profile.bannerSprite";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).sprite);
        (__this_00->fields).visible = "profile.identity.ready";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
        (pGVar4->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind);
        Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
                  (banner,"profile-card-banner-edit","ChangeBanner","profile-change-banner",
                   (__this->fields)._isMine,0.0,method_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileCard$$<Build>b__3_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_2 (Gisketch_Aottg2UI_Game_AottgProfileCard_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x58f92d0

void Gisketch_Aottg2UI_Game_AottgProfileCard___Build_b__3_2
               (Gisketch_Aottg2UI_Game_AottgProfileCard_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *body,
               MethodInfo *method)

{
  bool isMine;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075455eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profile-edit-details");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-card-details-edit");
    il2cpp_codegen_initialize_runtime_metadata(&"EditDetails");
    Il2CppMethodInitialized_075455eb = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgProfileCard__AddEditOverlay
            (body,"profile-card-details-edit","EditDetails","profile-edit-details",(__this->fields)._isMine,
             72.0,in_R9);
  isMine = (__this->fields)._isMine;
  method_01 = (MethodInfo *)(ulong)isMine;
  Gisketch_Aottg2UI_Game_AottgProfileCard__BuildIdentity(body,isMine,method_00);
  Gisketch_Aottg2UI_Game_AottgProfileCard__BuildDetails(body,method_01);
  return;
}


