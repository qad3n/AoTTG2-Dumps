// Type: Gisketch.Aottg2UI.Game.AottgProfileBanner
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgProfileBanner.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___cctor (const MethodInfo* method);
// 0x58b9b30

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545398 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    Il2CppMethodInitialized_07545398 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___ctor (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, const MethodInfo* method);
// 0x58b9ba0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_0 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loggedOut, const MethodInfo* method);
// 0x58b9bb0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_0
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loggedOut,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07545399 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_3);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-logged-out-content");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerContent");
    Il2CppMethodInitialized_07545399 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  style = "accountBannerContent";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
  __this_00 = pGVar1->__9__0_3;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_3,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    pGVar1->__9__0_3 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__0_3);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (loggedOut == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (loggedOut,style,__this_00,"account-banner-logged-out-content",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_3 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x58b9d90

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_3
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_0754539a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.SignIn");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.LoggedOut");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerSubtext");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    il2cpp_codegen_initialize_runtime_metadata(&"account-logged-out-status");
    il2cpp_codegen_initialize_runtime_metadata(&"account.openLogin");
    il2cpp_codegen_initialize_runtime_metadata(&"account-login-open");
    Il2CppMethodInitialized_0754539a = '\x01';
  }
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (content,"MainMenu.Account.LoggedOut","accountBannerSubtext","account-logged-out-status",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (content,0,"MainMenu.Account.SignIn","account.openLogin","account-login-open",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "material-icons/login",(MethodInfo *)0x0);
    pSVar1 = "account.auth.idle";
    if (Il2CppMethodInitialized_07545394 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_07545394 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).enabled = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_1 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* offline, const MethodInfo* method);
// 0x58b9f10

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_1
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *offline,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754539b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_4);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-offline-content");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerContent");
    Il2CppMethodInitialized_0754539b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  style = "accountBannerContent";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
  __this_00 = pGVar1->__9__0_4;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_4,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    pGVar1->__9__0_4 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__0_4);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (offline == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (offline,style,__this_00,"account-banner-offline-content",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_4 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x58ba0e0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_4
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_0754539c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_5);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"account-offline-banner-top");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.GoOnline");
    il2cpp_codegen_initialize_runtime_metadata(&"account.goOnline");
    il2cpp_codegen_initialize_runtime_metadata(&"account-go-online");
    il2cpp_codegen_initialize_runtime_metadata(&"account.goOnlineCta");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/login");
    Il2CppMethodInitialized_0754539c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  style = "default";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
  __this_00 = pGVar1->__9__0_5;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_5,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    pGVar1->__9__0_5 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__0_5);
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,style,__this_00,"account-offline-banner-top",pGVar2,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (content,0,"MainMenu.Account.GoOnline","account.goOnline","account-go-online",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "material-icons/login",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07545390 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Column");
      Il2CppMethodInitialized_07545390 = '\x01';
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
      pGVar4 = Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOnlineCta",(MethodInfo *)pGVar2)
      ;
      (pGVar3->fields).bind = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_5 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* top, const MethodInfo* method);
// 0x58ba440

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_5
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *top,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_0754539d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_6);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Edit");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-offline-name-column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"account-offline-profile-edit");
    il2cpp_codegen_initialize_runtime_metadata(&"main.profile");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_0754539d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  pSVar1 = "default";
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
  __this_00 = pGVar2->__9__0_6;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_6,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    pGVar2->__9__0_6 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__0_6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (top != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (top,pSVar1,__this_00,"account-banner-offline-name-column",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (top,1,"Common.Edit","main.profile","account-offline-profile-edit",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "gear",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0754538f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Column");
      Il2CppMethodInitialized_0754538f = '\x01';
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
      pSVar1 = "account.auth.idle";
      if (Il2CppMethodInitialized_07545394 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Il2CppMethodInitialized_07545394 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_01->fields).enabled = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).enabled);
        (pGVar5->fields).bind = __this_01;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_6 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x58ba7f0

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_6
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754539e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"account.ingameDisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"account-offline-ingame-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"account.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"Scout");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerName");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.OfflineMode");
    il2cpp_codegen_initialize_runtime_metadata(&"account-offline-status");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerSubtext");
    Il2CppMethodInitialized_0754539e = '\x01';
  }
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (names,"Scout","accountBannerName","account-offline-ingame-display-name",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pSVar2 = "account.ingameDisplayName";
    pSVar1 = "account.identity.ready";
    if (Il2CppMethodInitialized_07545395 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_07545395 = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).text = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
      (__this_00->fields).visible = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
        (pGVar3->fields).active = false;
        if (Il2CppMethodInitialized_07545397 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"fade");
          Il2CppMethodInitialized_07545397 = '\x01';
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)&(pGVar3->fields).enter;
        (pGVar3->fields).enter = pGVar4;
        Il2CppCodeGenWriteBarrier((void **)method_00);
        pGVar5 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(method_00);
        (pGVar3->fields).layout = pGVar5;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                           (names,"MainMenu.Account.OfflineMode","accountBannerSubtext","account-offline-status",
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout((MethodInfo *)names);
        if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar3->fields).layout = pGVar5;
          Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_2 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loggedIn, const MethodInfo* method);
// 0x58baa30

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_2
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loggedIn,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754539f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_7);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerContent");
    il2cpp_codegen_initialize_runtime_metadata(&"account-profile-banner-content");
    Il2CppMethodInitialized_0754539f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  style = "accountBannerContent";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
  __this_00 = pGVar1->__9__0_7;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_7,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    pGVar1->__9__0_7 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__0_7);
  }
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (loggedIn == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (loggedIn,style,__this_00,"account-profile-banner-content",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_7
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_7 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x58bac00

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_7
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields *pGVar5;
  
  if (Il2CppMethodInitialized_075453a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_8);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_9);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"SpaceBetween");
    il2cpp_codegen_initialize_runtime_metadata(&"account-profile-banner-actions");
    il2cpp_codegen_initialize_runtime_metadata(&"account-profile-banner-top");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_075453a0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  pSVar2 = "default";
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
  pSVar3 = pGVar5->__9__0_8;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar5->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_8,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    pGVar5->__9__0_8 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar5->__9__0_8);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","SpaceBetween","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,12.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,pSVar2,pSVar3,"account-profile-banner-top",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  pSVar2 = "default";
  pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
  pSVar3 = pGVar5->__9__0_9;
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar5->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar3,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_9,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar5 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    pGVar5->__9__0_9 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar5->__9__0_9);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,pSVar2,pSVar3,"account-profile-banner-actions",pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_8
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_8 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* top, const MethodInfo* method);
// 0x58baf50

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_8
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *top,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields *pGVar2;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_01;
  
  if (Il2CppMethodInitialized_075453a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"gear");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Edit");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"account-profile-edit");
    il2cpp_codegen_initialize_runtime_metadata(&"main.profile");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-name-column");
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_075453a1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  pSVar1 = "default";
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
  __this_00 = pGVar2->__9__0_10;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    }
    object = (Il2CppObject *)pGVar2->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_10,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    pGVar2->__9__0_10 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar2->__9__0_10);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  if (top != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (top,pSVar1,__this_00,"account-banner-name-column",pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (top,1,"Common.Edit","main.profile","account-profile-edit",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "gear",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_0754538f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Column");
      Il2CppMethodInitialized_0754538f = '\x01';
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).layout = pGVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).layout);
      pSVar1 = "account.auth.idle";
      if (Il2CppMethodInitialized_07545394 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Il2CppMethodInitialized_07545394 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        (__this_01->fields).enabled = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).enabled);
        (pGVar5->fields).bind = __this_01;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_10
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_10 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x58bb300

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_10
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  MethodInfo *pMVar9;
  
  if (Il2CppMethodInitialized_075453a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"account.ingameDisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"Account");
    il2cpp_codegen_initialize_runtime_metadata(&"account.identity.ready");
    il2cpp_codegen_initialize_runtime_metadata(&"account-auth-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"account.identity.loading");
    il2cpp_codegen_initialize_runtime_metadata(&"account-ingame-display-name");
    il2cpp_codegen_initialize_runtime_metadata(&"skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"Scout");
    il2cpp_codegen_initialize_runtime_metadata(&"account.authDisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"account-auth-display-name-skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerName");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBannerSubtext");
    il2cpp_codegen_initialize_runtime_metadata(&"account-ingame-display-name-skeleton");
    Il2CppMethodInitialized_075453a2 = '\x01';
  }
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (names,"Scout","accountBannerName","account-ingame-display-name",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pSVar2 = "account.ingameDisplayName";
    pSVar1 = "account.identity.ready";
    if (Il2CppMethodInitialized_07545395 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_07545395 = '\x01';
    }
    pGVar4 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar4,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (pGVar4->fields).text = pSVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).text);
      (pGVar4->fields).visible = pSVar1;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).visible);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).bind = pGVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
        (pGVar3->fields).active = false;
        if (Il2CppMethodInitialized_07545397 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"fade");
          Il2CppMethodInitialized_07545397 = '\x01';
        }
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                           ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
        pMVar9 = (MethodInfo *)&(pGVar3->fields).enter;
        (pGVar3->fields).enter = pGVar5;
        Il2CppCodeGenWriteBarrier((void **)pMVar9);
        pGVar6 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
        (pGVar3->fields).layout = pGVar6;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
        if (Il2CppMethodInitialized_07545393 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Column");
          Il2CppMethodInitialized_07545393 = '\x01';
        }
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(220.0,(MethodInfo *)0x0);
        pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                  (names,"account-ingame-display-name-skeleton",pGVar6,"skeleton","account.identity.loading",
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (names,"Account","accountBannerSubtext","account-auth-display-name",
                            (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                            (MethodInfo *)0x0);
        pSVar2 = "account.identity.ready";
        pSVar1 = "account.authDisplayName";
        if (Il2CppMethodInitialized_07545395 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Il2CppMethodInitialized_07545395 = '\x01';
        }
        pGVar4 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar4,(MethodInfo *)0x0);
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (pGVar4->fields).text = pSVar1;
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).text);
          (pGVar4->fields).visible = pSVar2;
          Il2CppCodeGenWriteBarrier(&(pGVar4->fields).visible);
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar3->fields).bind = pGVar4;
            Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind);
            (pGVar3->fields).active = false;
            if (Il2CppMethodInitialized_07545397 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"fade");
              Il2CppMethodInitialized_07545397 = '\x01';
            }
            pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                               ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0)
            ;
            pMVar9 = (MethodInfo *)&(pGVar3->fields).enter;
            (pGVar3->fields).enter = pGVar5;
            Il2CppCodeGenWriteBarrier((void **)pMVar9);
            pGVar6 = Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(pMVar9);
            (pGVar3->fields).layout = pGVar6;
            Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
            if (Il2CppMethodInitialized_07545393 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"Column");
              Il2CppMethodInitialized_07545393 = '\x01';
            }
            pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(170.0,(MethodInfo *)0x0);
            pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
            pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar7,pGVar8,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Code_AottgUi__Skeleton
                      (names,"account-auth-display-name-skeleton",pGVar6,"skeleton","account.identity.loading",
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner.<>c$$<Build>b__0_9
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_9 (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* actions, const MethodInfo* method);
// 0x58bb840

void Gisketch_Aottg2UI_Game_AottgProfileBanner___c___Build_b__0_9
               (Gisketch_Aottg2UI_Game_AottgProfileBanner___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *actions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_075453a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/wifi_off");
    il2cpp_codegen_initialize_runtime_metadata(&"account-go-offline");
    il2cpp_codegen_initialize_runtime_metadata(&"account.logoutCta");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.Logout");
    il2cpp_codegen_initialize_runtime_metadata(&"account-logout");
    il2cpp_codegen_initialize_runtime_metadata(&"account.goOffline");
    il2cpp_codegen_initialize_runtime_metadata(&"material-icons/logout");
    il2cpp_codegen_initialize_runtime_metadata(&"account.logout");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Account.GoOffline");
    il2cpp_codegen_initialize_runtime_metadata(&"account.goOfflineCta");
    Il2CppMethodInitialized_075453a3 = '\x01';
  }
  if (actions != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (actions,1,"MainMenu.Account.GoOffline","account.goOffline","account-go-offline",
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        "material-icons/wifi_off",(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_07545391 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Column");
      Il2CppMethodInitialized_07545391 = '\x01';
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
      pGVar3 = Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta("account.goOfflineCta",(MethodInfo *)pGVar2)
      ;
      (pGVar1->fields).bind = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                         (actions,6,"MainMenu.Account.Logout","account.logout","account-logout",
                          (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          "material-icons/logout",(MethodInfo *)0x0);
      if (Il2CppMethodInitialized_07545391 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"Column");
        Il2CppMethodInitialized_07545391 = '\x01';
      }
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,0.0,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).layout = pGVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout);
        pGVar3 = Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta
                           ("account.logoutCta",(MethodInfo *)pGVar2);
        (pGVar1->fields).bind = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner__Build (Gisketch_Aottg2UI_Game_AottgProfileBanner_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58b8dd0
// asm: 9 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58b8ec0: cmp byte ptr [rip + 0x1c8c4c7], 0
// asm:   0x58b8ec7: jne 0x58b8ee8
// asm:   0x58b904f: cmp byte ptr [rip + 0x1c8c338], 0
// asm:   0x58b9056: jne 0x58b9077
// asm:   0x58b91ce: cmp byte ptr [rip + 0x1c8c1b9], 0
// asm:   0x58b91d5: jne 0x58b91f6
// asm:   0x58b9393: jmp 0x58b8ee8
// asm:   0x58b9405: jmp 0x58b9077
// asm:   0x58b9477: jmp 0x58b91f6

void Gisketch_Aottg2UI_Game_AottgProfileBanner__Build
               (Gisketch_Aottg2UI_Game_AottgProfileBanner_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgProfileBanner___c_StaticFields *pGVar6;
  System_Action_AottgUi__o *pSVar7;
  
  if (Il2CppMethodInitialized_0754538c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
    il2cpp_codegen_initialize_runtime_metadata(&"account.onlineMode");
    il2cpp_codegen_initialize_runtime_metadata(&"account.loggedOut");
    il2cpp_codegen_initialize_runtime_metadata(&"account-profile-banner");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-logged-out");
    il2cpp_codegen_initialize_runtime_metadata(&"accountBanner");
    il2cpp_codegen_initialize_runtime_metadata(&"account.offlineMode");
    il2cpp_codegen_initialize_runtime_metadata(&"account-banner-offline");
    Il2CppMethodInitialized_0754538c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
  }
  pSVar2 = "accountBanner";
  pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
  pSVar7 = pGVar6->__9__0_0;
  if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
      pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pGVar6->__9;
    pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)pSVar7,pIVar1,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
    pGVar6->__9__0_0 = pSVar7;
    Il2CppCodeGenWriteBarrier(&pGVar6->__9__0_0);
  }
  if (Il2CppMethodInitialized_0754538e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_0754538e = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,pSVar2,pSVar7,"account-banner-logged-out",pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar2 = "account.loggedOut";
    if (Il2CppMethodInitialized_0754538d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition)
      ;
      Il2CppMethodInitialized_0754538d = '\x01';
    }
    pGVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (pGVar5->fields).visible = pSVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar5->fields).visible);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).bind = pGVar5;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind);
        (pGVar4->fields).active = false;
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
        }
        pSVar2 = "accountBanner";
        pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
        pSVar7 = pGVar6->__9__0_1;
        if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
            pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
          }
          pIVar1 = (Il2CppObject *)pGVar6->__9;
          pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
          System_Action_object____ctor
                    ((System_Action_object__o *)pSVar7,pIVar1,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_1,
                     (MethodInfo_4A81BE0 *)0x0);
          pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
          pGVar6->__9__0_1 = pSVar7;
          Il2CppCodeGenWriteBarrier(&pGVar6->__9__0_1);
        }
        if (Il2CppMethodInitialized_0754538e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
          il2cpp_codegen_initialize_runtime_metadata(&"Row");
          Il2CppMethodInitialized_0754538e = '\x01';
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,"Stretch",
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (ui,pSVar2,pSVar7,"account-banner-offline",pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pSVar2 = "account.offlineMode";
        if (Il2CppMethodInitialized_0754538d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Il2CppMethodInitialized_0754538d = '\x01';
        }
        pGVar5 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar5,(MethodInfo *)0x0);
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          (pGVar5->fields).visible = pSVar2;
          Il2CppCodeGenWriteBarrier(&(pGVar5->fields).visible);
          if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar4->fields).bind = pGVar5;
            Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind);
            (pGVar4->fields).active = false;
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
            }
            pSVar2 = "accountBanner";
            pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
            pSVar7 = pGVar6->__9__0_2;
            if (pSVar7 == (System_Action_AottgUi__o *)0x0) {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c);
                pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
              }
              pIVar1 = (Il2CppObject *)pGVar6->__9;
              pSVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
              System_Action_object____ctor
                        ((System_Action_object__o *)pSVar7,pIVar1,
                         (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c_Build_b__0_2,
                         (MethodInfo_4A81BE0 *)0x0);
              pGVar6 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileBanner_c->static_fields;
              pGVar6->__9__0_2 = pSVar7;
              Il2CppCodeGenWriteBarrier(&pGVar6->__9__0_2);
            }
            if (Il2CppMethodInitialized_0754538e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
              il2cpp_codegen_initialize_runtime_metadata(&"Row");
              Il2CppMethodInitialized_0754538e = '\x01';
            }
            pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                               ("Row",(System_String_o *)0x0,"Stretch",
                                (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                               (ui,pSVar2,pSVar7,"account-profile-banner",pGVar3,
                                (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            pSVar2 = "account.onlineMode";
            if (Il2CppMethodInitialized_0754538d == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
              Il2CppMethodInitialized_0754538d = '\x01';
            }
            pGVar5 = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
            Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(pGVar5,(MethodInfo *)0x0);
            if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
              (pGVar5->fields).visible = pSVar2;
              Il2CppCodeGenWriteBarrier(&(pGVar5->fields).visible);
              if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                (pGVar4->fields).bind = pGVar5;
                Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind);
                (pGVar4->fields).active = false;
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Visible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__Visible (System_String_o* key, const MethodInfo* method);
// 0x58b9540

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__Visible(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_0754538d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_0754538d = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$BannerRootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__BannerRootLayout (const MethodInfo* method);
// 0x58b9490

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__BannerRootLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754538e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_0754538e = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$EditButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__EditButtonLayout (const MethodInfo* method);
// 0x58b95b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__EditButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754538f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_0754538f = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$FullWidthButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__FullWidthButtonLayout (const MethodInfo* method);
// 0x58b9660

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__FullWidthButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545390 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_07545390 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$GrowActionButtonLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__GrowActionButtonLayout (const MethodInfo* method);
// 0x58b9710

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__GrowActionButtonLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545391 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_07545391 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$NameTextLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout (const MethodInfo* method);
// 0x58b97b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__NameTextLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545392 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_07545392 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$SkeletonTextLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__SkeletonTextLayout (float width, float height, const MethodInfo* method);
// 0x58b9880

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__SkeletonTextLayout(float width,float height,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545393 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    Il2CppMethodInitialized_07545393 = '\x01';
  }
  width_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(width,(MethodInfo *)0x0);
  height_00 = Gisketch_Aottg2UI_Code_AottgUi__Points(height,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width_00,height_00,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$Enabled
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__Enabled (System_String_o* key, const MethodInfo* method);
// 0x58b9950

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__Enabled(System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07545394 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_07545394 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).enabled = key;
  Il2CppCodeGenWriteBarrier(&(__this->fields).enabled);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$TextVisible
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__TextVisible (System_String_o* textKey, System_String_o* visibleKey, const MethodInfo* method);
// 0x58b99c0

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__TextVisible
          (System_String_o *textKey,System_String_o *visibleKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07545395 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Il2CppMethodInitialized_07545395 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).text = textKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).text);
  (__this->fields).visible = visibleKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).visible);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$BoundCta
// il2cpp: Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta (System_String_o* textKey, const MethodInfo* method);
// 0x58b9a40

Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__BoundCta(System_String_o *textKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_07545396 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"account.auth.idle");
    Il2CppMethodInitialized_07545396 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).text = textKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields).text);
  (__this->fields).enabled = "account.auth.idle";
  Il2CppCodeGenWriteBarrier(&(__this->fields).enabled);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$RevealMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileBanner__RevealMotion (const MethodInfo* method);
// 0x58b9ad0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileBanner__RevealMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545397 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"fade");
    Il2CppMethodInitialized_07545397 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("fade",(System_String_o *)0x0,0.14,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileBanner$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileBanner___ctor (Gisketch_Aottg2UI_Game_AottgProfileBanner_o* __this, const MethodInfo* method);
// 0x58b9b20

void Gisketch_Aottg2UI_Game_AottgProfileBanner___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileBanner_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


