// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHoverPopover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___cctor (const MethodInfo* method);
// 0x4530410

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aeeaf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aeeaf = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, const MethodInfo* method);
// 0x4530480

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<Build>b__5_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___Build_b__5_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x4530490

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___Build_b__5_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  
  method_00 = (MethodInfo *)card;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildLoading(card,(MethodInfo *)card);
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildReady(card,method_00);
  if (g_data_057aeeae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error");
    g_data_057aeeae = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "profilePreviewBody";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x68) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x68,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this_00 = "Row";
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,style,build,"public-profile-hover-error",pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    __this_00 = pGVar2;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar2->fields).alignItems;
      (pGVar2->fields).alignItems = "publicProfile.hover.error";
      il2cpp_runtime_helper_022b4080();
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x45304b0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  code *pcVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  MethodInfo *pMVar11;
  MethodInfo *pMVar12;
  
  if (g_data_057aeeb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLoading_b__6_1);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-banner");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-bio");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb0 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(120.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (body,"public-profile-hover-loading-banner",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "profilePreviewBody";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,pSVar8,pSVar6,"public-profile-hover-loading-body",pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
               ,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(48.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (body,"public-profile-hover-loading-bio",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLoading_b__6_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-lines");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-avatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb1 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (pGVar9,"public-profile-hover-loading-avatar",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar6);
    }
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar9,pSVar8,pSVar6,"public-profile-hover-loading-lines",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-display-name");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-name");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb2 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(210.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(30.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (pGVar10,"public-profile-hover-loading-name",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (pGVar10,"public-profile-hover-loading-display-name",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio-row");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBannerFrame");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-footer");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-banner-frame");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-body");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
    g_data_057aeeb3 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = "profilePreviewBannerFrame";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
  pMVar11 = "Center";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)"Center",(System_String_o *)"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if ((pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (pGVar9,(System_String_o *)pMVar12,pSVar6,"public-profile-hover-banner-frame",pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pMVar11 = pMVar12, pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    *(undefined1 *)((long)&(pGVar7->fields).hasIcon + 1) = 1;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "profilePreviewBody";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar9,pSVar8,pSVar6,"public-profile-hover-body",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x50) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,16.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (pGVar9,pSVar8,pSVar6,"public-profile-hover-bio-row",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pMVar11 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pMVar12 = "publicProfile.hover.hasBio";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).alignItems = (System_String_o *)"publicProfile.hover.hasBio";
      il2cpp_runtime_helper_022b4080();
      pMVar11 = pMVar12;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = "default";
        pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 0x58) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x58,pSVar6);
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,16.0,0.0,
                            0.0,0.0,0.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (pGVar9,pSVar8,pSVar6,"public-profile-hover-footer",pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pMVar11 = (MethodInfo *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
        pMVar12 = "publicProfile.hover.hasBadges";
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar5->fields).alignItems = (System_String_o *)"publicProfile.hover.hasBadges";
          il2cpp_runtime_helper_022b4080();
          pMVar11 = pMVar12;
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar7->fields).contentLayout = pGVar5;
            il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if (g_data_057aeeb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-banner");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBanner");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb4 = '\x01';
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite((System_String_o *)0x0,pMVar12);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(190.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pMVar11 != (MethodInfo *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar11,pSVar8,"profilePreviewBanner","public-profile-hover-banner",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pGVar10 = "publicProfile.hover.bannerSprite";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).justify = (System_String_o *)"publicProfile.hover.bannerSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify);
      pGVar9 = pGVar10;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-names");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
    g_data_057aeeb5 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "profilePreviewAvatarFrame";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,35.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar9 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeeb6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_7);
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
      il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-bg");
      g_data_057aeeb6 = '\x01';
    }
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "profileCardAvatarBg";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
    pMVar12 = (MethodInfo *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (pGVar10,pSVar8,pSVar6,"public-profile-hover-avatar-bg",pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
    il2cpp_runtime_helper_022b2c90();
    pMVar11 = pMVar12;
    if (g_data_057aeeb7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
      il2cpp_runtime_helper_023445d0();
      g_data_057aeeb7 = '\x01';
    }
    pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite((System_String_o *)0x0,pMVar11);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (pMVar12 != (MethodInfo *)0x0) {
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar12,pSVar8,"profilePreviewAvatar","public-profile-hover-avatar",pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
      pGVar10 = "publicProfile.hover.avatarSprite";
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (pGVar5->fields).justify = (System_String_o *)"publicProfile.hover.avatarSprite";
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify);
        pGVar9 = pGVar10;
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).contentLayout = pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar10 = pGVar9;
    if (g_data_057aeeb8 == '\0') {
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
      il2cpp_runtime_helper_023445d0(&"Character");
      il2cpp_runtime_helper_023445d0(&"profilePreviewName");
      il2cpp_runtime_helper_023445d0(&"Contributor");
      il2cpp_runtime_helper_023445d0(&"public-profile-hover-display-name");
      il2cpp_runtime_helper_023445d0(&"public-profile-hover-character-name");
      il2cpp_runtime_helper_023445d0(&"profilePreviewHandle");
      g_data_057aeeb8 = '\x01';
    }
    if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar9,"Character","profilePreviewName","public-profile-hover-character-name","publicProfile.hover.characterName",
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                           (pGVar9,"Contributor","profilePreviewHandle","public-profile-hover-display-name","publicProfile.hover.displayName",
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
        pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
          return;
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pGVar9 = pGVar10;
    if (g_data_057aeeb9 == '\0') {
      il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
      il2cpp_runtime_helper_023445d0(&"profileHoverBio");
      g_data_057aeeb9 = '\x01';
    }
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar10,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"profileHoverBio",
                          "public-profile-hover-bio","publicProfile.hover.bio",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                          (MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeeba == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
      il2cpp_runtime_helper_023445d0(&"public-profile-hover-badges");
      g_data_057aeeba = '\x01';
    }
    __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
    pGVar10 = "public-profile-hover-badges";
    Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
              (__this_00,(System_String_o *)"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson",(System_String_o *)"publicProfile.hover.hasBadges"
               ,(MethodInfo *)0x0);
    if (pGVar9 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057aeebb == '\0') {
        il2cpp_runtime_helper_023445d0(&"icon");
        il2cpp_runtime_helper_023445d0(&"Column");
        il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
        il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
        il2cpp_runtime_helper_023445d0(&"warning");
        il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
        il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
        il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
        g_data_057aeebb = '\x01';
      }
      if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                           (pGVar10,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
          il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    (pGVar10,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
      il2cpp_runtime_helper_022b2c90();
      pcVar2 = (code *)swi(3);
      (*pcVar2)();
      return;
    }
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (pGVar9,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (pGVar9,pSVar8,pSVar6,"public-profile-hover-avatar-frame",pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
             ,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "default";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (pGVar9,pSVar8,pSVar6,"public-profile-hover-names",pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
             ,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_1 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x4530860

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_1
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  long lVar1;
  code *pcVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  MethodInfo *pMVar11;
  MethodInfo *pMVar12;
  
  if (g_data_057aeeb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLoading_b__6_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-lines");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-avatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb1 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (row,"public-profile-hover-loading-avatar",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar6);
    }
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,8.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar8,pSVar6,"public-profile-hover-loading-lines",pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-display-name");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-name");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb2 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(210.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(30.0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (pGVar9,"public-profile-hover-loading-name",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (pGVar9,"public-profile-hover-loading-display-name",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio-row");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBannerFrame");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-footer");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-banner-frame");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-body");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
    g_data_057aeeb3 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = "profilePreviewBannerFrame";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
  pMVar11 = "Center";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)"Center",(System_String_o *)"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if ((pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (pGVar10,(System_String_o *)pMVar12,pSVar6,"public-profile-hover-banner-frame",pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pMVar11 = pMVar12, pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    *(undefined1 *)((long)&(pGVar7->fields).hasIcon + 1) = 1;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "profilePreviewBody";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar8,pSVar6,"public-profile-hover-body",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x50) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,16.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (pGVar10,pSVar8,pSVar6,"public-profile-hover-bio-row",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pMVar11 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pMVar12 = "publicProfile.hover.hasBio";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).alignItems = (System_String_o *)"publicProfile.hover.hasBio";
      il2cpp_runtime_helper_022b4080();
      pMVar11 = pMVar12;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = "default";
        pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 0x58) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x58,pSVar6);
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,16.0,0.0,
                            0.0,0.0,0.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (pGVar10,pSVar8,pSVar6,"public-profile-hover-footer",pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pMVar11 = (MethodInfo *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
        pMVar12 = "publicProfile.hover.hasBadges";
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar5->fields).alignItems = (System_String_o *)"publicProfile.hover.hasBadges";
          il2cpp_runtime_helper_022b4080();
          pMVar11 = pMVar12;
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar7->fields).contentLayout = pGVar5;
            il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  if (g_data_057aeeb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-banner");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBanner");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb4 = '\x01';
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite((System_String_o *)0x0,pMVar12);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(190.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pMVar11 != (MethodInfo *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar11,pSVar8,"profilePreviewBanner","public-profile-hover-banner",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pGVar10 = "publicProfile.hover.bannerSprite";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).justify = (System_String_o *)"publicProfile.hover.bannerSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify);
      pGVar9 = pGVar10;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-names");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
    g_data_057aeeb5 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "profilePreviewAvatarFrame";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,35.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar9,pSVar8,pSVar6,"public-profile-hover-avatar-frame",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar9,pSVar8,pSVar6,"public-profile-hover-names",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-bg");
    g_data_057aeeb6 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "profileCardAvatarBg";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pMVar12 = (MethodInfo *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar8,pSVar6,"public-profile-hover-avatar-bg",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar12;
  if (g_data_057aeeb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb7 = '\x01';
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite((System_String_o *)0x0,pMVar11);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pMVar12 != (MethodInfo *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar12,pSVar8,"profilePreviewAvatar","public-profile-hover-avatar",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pGVar10 = "publicProfile.hover.avatarSprite";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).justify = (System_String_o *)"publicProfile.hover.avatarSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify);
      pGVar9 = pGVar10;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar10 = pGVar9;
  if (g_data_057aeeb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"profilePreviewName");
    il2cpp_runtime_helper_023445d0(&"Contributor");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-display-name");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-character-name");
    il2cpp_runtime_helper_023445d0(&"profilePreviewHandle");
    g_data_057aeeb8 = '\x01';
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar9,"Character","profilePreviewName","public-profile-hover-character-name","publicProfile.hover.characterName",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar9,"Contributor","profilePreviewHandle","public-profile-hover-display-name","publicProfile.hover.displayName",
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar9 = pGVar10;
  if (g_data_057aeeb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"profileHoverBio");
    g_data_057aeeb9 = '\x01';
  }
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar10,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"profileHoverBio",
                        "public-profile-hover-bio","publicProfile.hover.bio",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-badges");
    g_data_057aeeba = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  pGVar10 = "public-profile-hover-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson",(System_String_o *)"publicProfile.hover.hasBadges",
             (MethodInfo *)0x0);
  if (pGVar9 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeebb == '\0') {
      il2cpp_runtime_helper_023445d0(&"icon");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
      il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
      il2cpp_runtime_helper_023445d0(&"warning");
      il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
      il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
      g_data_057aeebb = '\x01';
    }
    if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                         (pGVar10,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (pGVar10,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (pGVar9,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildLoading>b__6_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_2 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x4530b10

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildLoading_b__6_2
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  long lVar1;
  code *pcVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_Action_AottgUi__o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  MethodInfo *pMVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  MethodInfo *pMVar12;
  
  if (g_data_057aeeb2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-display-name");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading-name");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb2 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(210.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(30.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (names,"public-profile-hover-loading-name",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(250.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (names,"public-profile-hover-loading-display-name",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio-row");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBannerFrame");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-footer");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-banner-frame");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-body");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
    g_data_057aeeb3 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = "profilePreviewBannerFrame";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
  pMVar10 = "Center";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)"Center",(System_String_o *)"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if ((pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (pGVar9,(System_String_o *)pMVar12,pSVar6,"public-profile-hover-banner-frame",pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pMVar10 = pMVar12, pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    *(undefined1 *)((long)&(pGVar7->fields).hasIcon + 1) = 1;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "profilePreviewBody";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar9,pSVar8,pSVar6,"public-profile-hover-body",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x50) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,16.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (pGVar9,pSVar8,pSVar6,"public-profile-hover-bio-row",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pMVar10 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pMVar12 = "publicProfile.hover.hasBio";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).alignItems = (System_String_o *)"publicProfile.hover.hasBio";
      il2cpp_runtime_helper_022b4080();
      pMVar10 = pMVar12;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = "default";
        pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 0x58) = pSVar6;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x58,pSVar6);
        }
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,16.0,0.0,
                            0.0,0.0,0.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (pGVar9,pSVar8,pSVar6,"public-profile-hover-footer",pGVar5,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pMVar10 = (MethodInfo *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
        pMVar12 = "publicProfile.hover.hasBadges";
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar5->fields).alignItems = (System_String_o *)"publicProfile.hover.hasBadges";
          il2cpp_runtime_helper_022b4080();
          pMVar10 = pMVar12;
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar7->fields).contentLayout = pGVar5;
            il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar10;
  if (g_data_057aeeb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-banner");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBanner");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb4 = '\x01';
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite((System_String_o *)0x0,pMVar12);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(190.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pMVar10 != (MethodInfo *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar10,pSVar8,"profilePreviewBanner","public-profile-hover-banner",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pGVar11 = "publicProfile.hover.bannerSprite";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).justify = (System_String_o *)"publicProfile.hover.bannerSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify);
      pGVar9 = pGVar11;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-names");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
    g_data_057aeeb5 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "profilePreviewAvatarFrame";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,35.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar9,pSVar8,pSVar6,"public-profile-hover-avatar-frame",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "default";
    pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar6;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar6);
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar9,pSVar8,pSVar6,"public-profile-hover-names",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-bg");
    g_data_057aeeb6 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "profileCardAvatarBg";
  pSVar6 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  if (pSVar6 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar6;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar6);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pMVar12 = (MethodInfo *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar11,pSVar8,pSVar6,"public-profile-hover-avatar-bg",pGVar5,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar12;
  if (g_data_057aeeb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb7 = '\x01';
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite((System_String_o *)0x0,pMVar10);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pMVar12 != (MethodInfo *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar12,pSVar8,"profilePreviewAvatar","public-profile-hover-avatar",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pGVar11 = "publicProfile.hover.avatarSprite";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).justify = (System_String_o *)"publicProfile.hover.avatarSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify);
      pGVar9 = pGVar11;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = pGVar9;
  if (g_data_057aeeb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"profilePreviewName");
    il2cpp_runtime_helper_023445d0(&"Contributor");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-display-name");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-character-name");
    il2cpp_runtime_helper_023445d0(&"profilePreviewHandle");
    g_data_057aeeb8 = '\x01';
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar9,"Character","profilePreviewName","public-profile-hover-character-name","publicProfile.hover.characterName",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar9,"Contributor","profilePreviewHandle","public-profile-hover-display-name","publicProfile.hover.displayName",
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
      pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar9 = pGVar11;
  if (g_data_057aeeb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"profileHoverBio");
    g_data_057aeeb9 = '\x01';
  }
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar11,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"profileHoverBio",
                        "public-profile-hover-bio","publicProfile.hover.bio",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-badges");
    g_data_057aeeba = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  pGVar11 = "public-profile-hover-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson",(System_String_o *)"publicProfile.hover.hasBadges",
             (MethodInfo *)0x0);
  if (pGVar9 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeebb == '\0') {
      il2cpp_runtime_helper_023445d0(&"icon");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
      il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
      il2cpp_runtime_helper_023445d0(&"warning");
      il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
      il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
      g_data_057aeebb = '\x01';
    }
    if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                         (pGVar11,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (pGVar11,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (pGVar9,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4530d00

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  code *pcVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  MethodInfo *pMVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  MethodInfo *pMVar12;
  
  if (g_data_057aeeb3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_2);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_3);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_4);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio-row");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBannerFrame");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-footer");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-banner-frame");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-body");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBio");
    g_data_057aeeb3 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar12 = "profilePreviewBannerFrame";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x28,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
  pMVar9 = "Center";
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)"Center",(System_String_o *)"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if ((body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
     (pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (body,(System_String_o *)pMVar12,pSVar3,"public-profile-hover-banner-frame",pGVar6,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0),
     pMVar9 = pMVar12, pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    *(undefined1 *)((long)&(pGVar7->fields).hasIcon + 1) = 1;
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "profilePreviewBody";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x48) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x48,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,14.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,pSVar8,pSVar3,"public-profile-hover-body",pGVar6,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
               ,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x50) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x50,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,16.0,0.0,0.0,
                        0.0,0.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar8,pSVar3,"public-profile-hover-bio-row",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pMVar9 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
    pMVar12 = "publicProfile.hover.hasBio";
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar6->fields).alignItems = (System_String_o *)"publicProfile.hover.hasBio";
      il2cpp_runtime_helper_022b4080();
      pMVar9 = pMVar12;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar8 = "default";
        pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
        if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
          System_Action_object____ctor();
          lVar1 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Action_AottgUi__o **)(lVar1 + 0x58) = pSVar3;
          il2cpp_runtime_helper_022b4080(lVar1 + 0x58,pSVar3);
        }
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Row",(System_String_o *)0x0,(System_String_o *)"Center",
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,16.0,0.0,0.0,0.0,0.0,16.0,0.0,
                            0.0,0.0,0.0,(MethodInfo *)0x0);
        pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                           (body,pSVar8,pSVar3,"public-profile-hover-footer",pGVar6,
                            (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pMVar9 = (MethodInfo *)0x0;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
        pMVar12 = "publicProfile.hover.hasBadges";
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (pGVar6->fields).alignItems = (System_String_o *)"publicProfile.hover.hasBadges";
          il2cpp_runtime_helper_022b4080();
          pMVar9 = pMVar12;
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar7->fields).contentLayout = pGVar6;
            il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar9;
  if (g_data_057aeeb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-banner");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBanner");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb4 = '\x01';
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite((System_String_o *)0x0,pMVar12);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(190.0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pMVar9 != (MethodInfo *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar9,pSVar8,"profilePreviewBanner","public-profile-hover-banner",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
    pGVar11 = "publicProfile.hover.bannerSprite";
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar6->fields).justify = (System_String_o *)"publicProfile.hover.bannerSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).justify);
      pGVar10 = pGVar11;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-names");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
    g_data_057aeeb5 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "profilePreviewAvatarFrame";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,35.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar8,pSVar3,"public-profile-hover-avatar-frame",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar8,pSVar3,"public-profile-hover-names",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-bg");
    g_data_057aeeb6 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "profileCardAvatarBg";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pMVar12 = (MethodInfo *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar11,pSVar8,pSVar3,"public-profile-hover-avatar-bg",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar12;
  if (g_data_057aeeb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb7 = '\x01';
  }
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite((System_String_o *)0x0,pMVar9);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pMVar12 != (MethodInfo *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar12,pSVar8,"profilePreviewAvatar","public-profile-hover-avatar",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
    pGVar11 = "publicProfile.hover.avatarSprite";
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar6->fields).justify = (System_String_o *)"publicProfile.hover.avatarSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).justify);
      pGVar10 = pGVar11;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar11 = pGVar10;
  if (g_data_057aeeb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"profilePreviewName");
    il2cpp_runtime_helper_023445d0(&"Contributor");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-display-name");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-character-name");
    il2cpp_runtime_helper_023445d0(&"profilePreviewHandle");
    g_data_057aeeb8 = '\x01';
  }
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar10,"Character","profilePreviewName","public-profile-hover-character-name","publicProfile.hover.characterName",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar6);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar10,"Contributor","profilePreviewHandle","public-profile-hover-display-name","publicProfile.hover.displayName",
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
      pGVar11 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar10 = pGVar11;
  if (g_data_057aeeb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"profileHoverBio");
    g_data_057aeeb9 = '\x01';
  }
  if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar11,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"profileHoverBio",
                        "public-profile-hover-bio","publicProfile.hover.bio",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar6);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-badges");
    g_data_057aeeba = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  pGVar11 = "public-profile-hover-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson",(System_String_o *)"publicProfile.hover.hasBadges",
             (MethodInfo *)0x0);
  if (pGVar10 == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aeebb == '\0') {
      il2cpp_runtime_helper_023445d0(&"icon");
      il2cpp_runtime_helper_023445d0(&"Column");
      il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
      il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
      il2cpp_runtime_helper_023445d0(&"warning");
      il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
      il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
      il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
      g_data_057aeebb = '\x01';
    }
    if (pGVar11 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                         (pGVar11,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar6);
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (pGVar11,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    pcVar2 = (code *)swi(3);
    (*pcVar2)();
    return;
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (pGVar10,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_1 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* banner, const MethodInfo* method);
// 0x4531450

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_1
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *banner,MethodInfo *method)

{
  long lVar1;
  code *pcVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  System_Action_AottgUi__o *pSVar8;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  
  pMVar11 = (MethodInfo *)banner;
  if (g_data_057aeeb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-banner");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewBanner");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb4 = '\x01';
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__BannerSprite((System_String_o *)0x0,pMVar11);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(190.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (banner != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (banner,pSVar3,"profilePreviewBanner","public-profile-hover-banner",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
    pGVar10 = "publicProfile.hover.bannerSprite";
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar6->fields).justify = (System_String_o *)"publicProfile.hover.bannerSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).justify);
      pGVar9 = pGVar10;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-names");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
    g_data_057aeeb5 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = "profilePreviewAvatarFrame";
  pSVar8 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  if (pSVar8 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar8;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar8);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,35.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar9,pSVar3,pSVar8,"public-profile-hover-avatar-frame",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = "default";
    pSVar8 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar8 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar8;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar8);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar9,pSVar3,pSVar8,"public-profile-hover-names",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-bg");
    g_data_057aeeb6 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = "profileCardAvatarBg";
  pSVar8 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  if (pSVar8 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar8;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar8);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pMVar11 = (MethodInfo *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar10,pSVar3,pSVar8,"public-profile-hover-avatar-bg",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = pMVar11;
  if (g_data_057aeeb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb7 = '\x01';
  }
  pSVar3 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite((System_String_o *)0x0,method_00);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pMVar11 != (MethodInfo *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pMVar11,pSVar3,"profilePreviewAvatar","public-profile-hover-avatar",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
    pGVar10 = "publicProfile.hover.avatarSprite";
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar6->fields).justify = (System_String_o *)"publicProfile.hover.avatarSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).justify);
      pGVar9 = pGVar10;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar10 = pGVar9;
  if (g_data_057aeeb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"profilePreviewName");
    il2cpp_runtime_helper_023445d0(&"Contributor");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-display-name");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-character-name");
    il2cpp_runtime_helper_023445d0(&"profilePreviewHandle");
    g_data_057aeeb8 = '\x01';
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar9,"Character","profilePreviewName","public-profile-hover-character-name","publicProfile.hover.characterName",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar6);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar9,"Contributor","profilePreviewHandle","public-profile-hover-display-name","publicProfile.hover.displayName",
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar9 = pGVar10;
  if (g_data_057aeeb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"profileHoverBio");
    g_data_057aeeb9 = '\x01';
  }
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar10,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"profileHoverBio",
                        "public-profile-hover-bio","publicProfile.hover.bio",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar6);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-badges");
    g_data_057aeeba = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  pGVar10 = "public-profile-hover-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson","publicProfile.hover.hasBadges",(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (pGVar9,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeebb == '\0') {
    il2cpp_runtime_helper_023445d0(&"icon");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebb = '\x01';
  }
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                       (pGVar10,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar6);
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (pGVar10,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_2 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* row, const MethodInfo* method);
// 0x45315f0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_2
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *row,MethodInfo *method)

{
  long lVar1;
  code *pcVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar8;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  MethodInfo *__this_01;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  
  if (g_data_057aeeb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_5);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_6);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-names");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-frame");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatarFrame");
    g_data_057aeeb5 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = "profilePreviewAvatarFrame";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x38) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x38,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(104.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,35.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (row != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar7,pSVar3,"public-profile-hover-avatar-frame",pGVar6,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = "default";
    pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 0x40) = pSVar3;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x40,pSVar3);
    }
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (row,pSVar7,pSVar3,"public-profile-hover-names",pGVar6,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-bg");
    g_data_057aeeb6 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = "profileCardAvatarBg";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x30) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  __this_01 = (MethodInfo *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (pGVar9,pSVar7,pSVar3,"public-profile-hover-avatar-bg",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = __this_01;
  if (g_data_057aeeb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb7 = '\x01';
  }
  pSVar7 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite((System_String_o *)0x0,method_00);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar4,pGVar5,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_01 != (MethodInfo *)0x0) {
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01,pSVar7,"profilePreviewAvatar","public-profile-hover-avatar",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar6,(MethodInfo *)0x0);
    pGVar10 = "publicProfile.hover.avatarSprite";
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar6->fields).justify = (System_String_o *)"publicProfile.hover.avatarSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar6->fields).justify);
      pGVar9 = pGVar10;
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar8->fields).contentLayout = pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).contentLayout,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar10 = pGVar9;
  if (g_data_057aeeb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"profilePreviewName");
    il2cpp_runtime_helper_023445d0(&"Contributor");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-display-name");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-character-name");
    il2cpp_runtime_helper_023445d0(&"profilePreviewHandle");
    g_data_057aeeb8 = '\x01';
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar9,"Character","profilePreviewName","public-profile-hover-character-name","publicProfile.hover.characterName",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search,pGVar6);
      pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar9,"Contributor","profilePreviewHandle","public-profile-hover-display-name","publicProfile.hover.displayName",
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
        il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search,pGVar6);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar9 = pGVar10;
  if (g_data_057aeeb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"profileHoverBio");
    g_data_057aeeb9 = '\x01';
  }
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar10,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"profileHoverBio",
                        "public-profile-hover-bio","publicProfile.hover.bio",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search,pGVar6);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-badges");
    g_data_057aeeba = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  pGVar10 = "public-profile-hover-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson","publicProfile.hover.hasBadges",(MethodInfo *)0x0);
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (pGVar9,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeebb == '\0') {
    il2cpp_runtime_helper_023445d0(&"icon");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebb = '\x01';
  }
  if (pGVar10 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar8 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                       (pGVar10,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar8->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_helper_022b4080(&(pGVar8->fields).search,pGVar6);
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (pGVar10,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_5
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_5 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* frame, const MethodInfo* method);
// 0x4531940

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_5
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *frame,MethodInfo *method)

{
  long lVar1;
  code *pcVar2;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  MethodInfo *__this_01;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar8;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  
  if (g_data_057aeeb6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_7);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardAvatarBg");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-avatar-bg");
    g_data_057aeeb6 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = "profileCardAvatarBg";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x30) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x30,build);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  __this_01 = (MethodInfo *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (frame != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (frame,pSVar6,build,"public-profile-hover-avatar-bg",pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0
               ,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = __this_01;
  if (g_data_057aeeb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb7 = '\x01';
  }
  pSVar6 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite((System_String_o *)0x0,method_00);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar3,pGVar4,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (__this_01 != (MethodInfo *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this_01,pSVar6,"profilePreviewAvatar","public-profile-hover-avatar",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    pGVar9 = "publicProfile.hover.avatarSprite";
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar5->fields).justify = (System_String_o *)"publicProfile.hover.avatarSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify);
      pGVar8 = pGVar9;
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar9 = pGVar8;
  if (g_data_057aeeb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"profilePreviewName");
    il2cpp_runtime_helper_023445d0(&"Contributor");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-display-name");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-character-name");
    il2cpp_runtime_helper_023445d0(&"profilePreviewHandle");
    g_data_057aeeb8 = '\x01';
  }
  if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar8,"Character","profilePreviewName","public-profile-hover-character-name","publicProfile.hover.characterName",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
      pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar8,"Contributor","profilePreviewHandle","public-profile-hover-display-name","publicProfile.hover.displayName",
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
      pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar8 = pGVar9;
  if (g_data_057aeeb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"profileHoverBio");
    g_data_057aeeb9 = '\x01';
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar9,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"profileHoverBio",
                        "public-profile-hover-bio","publicProfile.hover.bio",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-badges");
    g_data_057aeeba = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  pGVar9 = "public-profile-hover-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson","publicProfile.hover.hasBadges",(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (pGVar8,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeebb == '\0') {
    il2cpp_runtime_helper_023445d0(&"icon");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebb = '\x01';
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                       (pGVar9,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar7->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar7->fields).search,pGVar5);
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (pGVar9,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar2 = (code *)swi(3);
  (*pcVar2)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_7
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_7 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bg, const MethodInfo* method);
// 0x4531b20

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_7
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *bg,MethodInfo *method)

{
  code *pcVar1;
  System_String_o *sprite;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar6;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar7;
  
  method_00 = (MethodInfo *)bg;
  if (g_data_057aeeb7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.avatarSprite");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewAvatar");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeb7 = '\x01';
  }
  sprite = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__AvatarSprite((System_String_o *)0x0,method_00);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(92.0,(MethodInfo *)0x0);
  pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar2,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (bg != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Image
                       (bg,sprite,"profilePreviewAvatar","public-profile-hover-avatar",pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    pGVar7 = "publicProfile.hover.avatarSprite";
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar4->fields).justify = (System_String_o *)"publicProfile.hover.avatarSprite";
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).justify);
      pGVar6 = pGVar7;
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar7 = pGVar6;
  if (g_data_057aeeb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"profilePreviewName");
    il2cpp_runtime_helper_023445d0(&"Contributor");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-display-name");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-character-name");
    il2cpp_runtime_helper_023445d0(&"profilePreviewHandle");
    g_data_057aeeb8 = '\x01';
  }
  if (pGVar6 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar6,"Character","profilePreviewName","public-profile-hover-character-name","publicProfile.hover.characterName",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (pGVar6,"Contributor","profilePreviewHandle","public-profile-hover-display-name","publicProfile.hover.displayName",
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
      pGVar7 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar2,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar6 = pGVar7;
  if (g_data_057aeeb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"profileHoverBio");
    g_data_057aeeb9 = '\x01';
  }
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar7,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"profileHoverBio",
                        "public-profile-hover-bio","publicProfile.hover.bio",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-badges");
    g_data_057aeeba = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  pGVar7 = "public-profile-hover-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson","publicProfile.hover.hasBadges",(MethodInfo *)0x0);
  if (pGVar6 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (pGVar6,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeebb == '\0') {
    il2cpp_runtime_helper_023445d0(&"icon");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebb = '\x01';
  }
  if (pGVar7 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                       (pGVar7,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar5->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
      il2cpp_runtime_helper_022b4080(&(pGVar5->fields).search,pGVar4);
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (pGVar7,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_6
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_6 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* names, const MethodInfo* method);
// 0x4531cc0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_6
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *names,MethodInfo *method)

{
  code *pcVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar6;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  
  pGVar6 = names;
  if (g_data_057aeeb8 == '\0') {
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.displayName");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.characterName");
    il2cpp_runtime_helper_023445d0(&"Character");
    il2cpp_runtime_helper_023445d0(&"profilePreviewName");
    il2cpp_runtime_helper_023445d0(&"Contributor");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-display-name");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-character-name");
    il2cpp_runtime_helper_023445d0(&"profilePreviewHandle");
    g_data_057aeeb8 = '\x01';
  }
  if (names != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (names,"Character","profilePreviewName","public-profile-hover-character-name","publicProfile.hover.characterName",
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar5);
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (names,"Contributor","profilePreviewHandle","public-profile-hover-display-name","publicProfile.hover.displayName",
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
      pGVar6 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = pGVar6;
  if (g_data_057aeeb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"profileHoverBio");
    g_data_057aeeb9 = '\x01';
  }
  if (pGVar6 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (pGVar6,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"profileHoverBio",
                        "public-profile-hover-bio","publicProfile.hover.bio",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar5);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-badges");
    g_data_057aeeba = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  pGVar6 = "public-profile-hover-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson","publicProfile.hover.hasBadges",(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (__this_01,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeebb == '\0') {
    il2cpp_runtime_helper_023445d0(&"icon");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebb = '\x01';
  }
  if (pGVar6 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                       (pGVar6,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar5);
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (pGVar6,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_3
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_3 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* bio, const MethodInfo* method);
// 0x4531f50

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_3
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *bio,MethodInfo *method)

{
  code *pcVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_02;
  
  __this_01 = bio;
  if (g_data_057aeeb9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.bio");
    il2cpp_runtime_helper_023445d0(&"profileHoverBio");
    g_data_057aeeb9 = '\x01';
  }
  if (bio != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (bio,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),"profileHoverBio",
                        "public-profile-hover-bio","publicProfile.hover.bio",(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    __this_01 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar5);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-badges");
    g_data_057aeeba = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  __this_02 = "public-profile-hover-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson","publicProfile.hover.hasBadges",(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (__this_01,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeebb == '\0') {
    il2cpp_runtime_helper_023445d0(&"icon");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebb = '\x01';
  }
  if (__this_02 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                       (__this_02,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar5);
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (__this_02,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildReady>b__7_4
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_4 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* badges, const MethodInfo* method);
// 0x45320c0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildReady_b__7_4
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *badges,MethodInfo *method)

{
  code *pcVar1;
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  
  if (g_data_057aeeba == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgBadgeIconRow);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.badgesJson");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.hasBadges");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-badges");
    g_data_057aeeba = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Game_AottgBadgeIconRow_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgBadgeIconRow);
  __this_01 = "public-profile-hover-badges";
  Gisketch_Aottg2UI_Game_AottgBadgeIconRow___ctor
            (__this_00,(System_String_o *)"public-profile-hover-badges",18.0,4.0,"publicProfile.hover.badgesJson","publicProfile.hover.hasBadges",(MethodInfo *)0x0);
  if (badges != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (badges,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeebb == '\0') {
    il2cpp_runtime_helper_023445d0(&"icon");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebb = '\x01';
  }
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                       (__this_01,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar3);
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (__this_01,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover.<>c$$<BuildError>b__8_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildError_b__8_0 (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4532170

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c___BuildError_b__8_0
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  code *pcVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  
  if (g_data_057aeebb == '\0') {
    il2cpp_runtime_helper_023445d0(&"icon");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profileCardBodyText");
    il2cpp_runtime_helper_023445d0(&"Profile unavailable.");
    il2cpp_runtime_helper_023445d0(&"warning");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-text");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error-icon");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.errorText");
    g_data_057aeebb = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Icon
                       (body,"warning","icon","public-profile-hover-error-icon",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(24.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar3;
      il2cpp_runtime_helper_022b4080(&(pGVar2->fields).search,pGVar3);
      Gisketch_Aottg2UI_Code_AottgUi__Text
                (body,"Profile unavailable.","profileCardBodyText","public-profile-hover-error-text","publicProfile.hover.errorText",
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootStyle (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, const MethodInfo* method);
// 0x452fa50

System_String_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o *__this,MethodInfo *method)

{
  if (g_data_057aeea9 == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileHoverDialog");
    g_data_057aeea9 = '\x01';
  }
  return "profileHoverDialog";
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootLayout (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, const MethodInfo* method);
// 0x452fa80

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aeeaa == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aeeaa = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(400.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__Build (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x452fb50

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__Build
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  
  if (g_data_057aeeab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Build_b__5_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-card");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"profilePreviewCard");
    g_data_057aeeab = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "profilePreviewCard";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,pSVar2,pSVar3,"public-profile-hover-card",pGVar5,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLoading_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading");
    g_data_057aeeac = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = "Column";
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,pSVar2,pSVar3,"public-profile-hover-loading",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
      (pGVar8->fields).alignItems = "publicProfile.hover.loading";
      il2cpp_runtime_helper_022b4080();
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeead == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-ready");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
    g_data_057aeead = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x60) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x60,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar2,pSVar3,"public-profile-hover-ready",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "publicProfile.hover.ready";
      il2cpp_runtime_helper_022b4080();
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error");
    g_data_057aeeae = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "profilePreviewBody";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x68) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x68,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = "Row";
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,pSVar2,pSVar3,"public-profile-hover-error",pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
      (pGVar8->fields).alignItems = "publicProfile.hover.error";
      il2cpp_runtime_helper_022b4080();
      if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar7->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar7->fields).contentLayout,pGVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildLoading (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x452fd20

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar8;
  
  if (g_data_057aeeac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLoading_b__6_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.loading");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-loading");
    g_data_057aeeac = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x20,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,pSVar2,pSVar3,"public-profile-hover-loading",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "publicProfile.hover.loading";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeead == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-ready");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
    g_data_057aeead = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x60) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x60,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = "Column";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar8,pSVar2,pSVar3,"public-profile-hover-ready",pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar8;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar8,(MethodInfo *)0x0);
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar8->fields).alignItems;
      (pGVar8->fields).alignItems = "publicProfile.hover.ready";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar8;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar8);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error");
    g_data_057aeeae = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "profilePreviewBody";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x68) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x68,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar8 = "Row";
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,pSVar2,pSVar3,"public-profile-hover-error",pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar8 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "publicProfile.hover.error";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar8,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildReady (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x452ff60

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildReady
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  
  if (g_data_057aeead == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-ready");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.ready");
    g_data_057aeead = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x60) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x60,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar7 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,pSVar2,pSVar3,"public-profile-hover-ready",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar7 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "publicProfile.hover.ready";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeeae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error");
    g_data_057aeeae = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "profilePreviewBody";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x68) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x68,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar5 = "Row";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,pSVar2,pSVar3,"public-profile-hover-error",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar7;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar7,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar7->fields).alignItems;
      (pGVar7->fields).alignItems = "publicProfile.hover.error";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar7;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar7);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$BuildError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildError (Gisketch_Aottg2UI_Code_AottgUi_o* card, const MethodInfo* method);
// 0x45301a0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover__BuildError
               (Gisketch_Aottg2UI_Code_AottgUi_o *card,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (g_data_057aeeae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__8_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"profilePreviewBody");
    il2cpp_runtime_helper_023445d0(&"Center");
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"publicProfile.hover.error");
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-error");
    g_data_057aeeae = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "profilePreviewBody";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x68) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x68,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this = "Row";
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (card != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (card,style,build,"public-profile-hover-error",pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    __this = pGVar2;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar2->fields).alignItems;
      (pGVar2->fields).alignItems = "publicProfile.hover.error";
      il2cpp_runtime_helper_022b4080();
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar3->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHoverPopover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o* __this, const MethodInfo* method);
// 0x4530400

void Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverPopover_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


