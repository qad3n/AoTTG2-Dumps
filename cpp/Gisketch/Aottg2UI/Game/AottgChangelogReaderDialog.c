// Type: Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogReaderDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___cctor (const MethodInfo* method);
// 0x44e2f80

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aebe9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aebe9 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, const MethodInfo* method);
// 0x44e2ff0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildReady>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildReady_b__13_0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ready, const MethodInfo* method);
// 0x44e3000

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildReady_b__13_0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ready,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar1;
  System_String_Fields text;
  bool_conflict bVar2;
  long lVar3;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar8;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar9;
  System_String_o *pSVar10;
  
  pGVar8 = ready;
  if (g_data_057aebea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogMarkdownRenderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"changelog-reader-markdown");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-refreshing");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"Refreshing...");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.refreshing");
    g_data_057aebea = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044e318a;
label_044e302f:
    if (g_data_057ae855 != '\0') goto label_044e303c;
label_044e319c:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangelogDialogState);
    g_data_057ae855 = '\x01';
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) == 0) goto label_044e31bf;
label_044e304c:
    lVar3 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x18);
    if (lVar3 != 0) goto label_044e3060;
label_044e31db:
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_044e327f;
  }
  else {
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044e302f;
label_044e318a:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae855 == '\0') goto label_044e319c;
label_044e303c:
    if (*(int *)(TypeInfo_AottgChangelogDialogState + 0xe4) != 0) goto label_044e304c;
label_044e31bf:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(*(long *)(TypeInfo_AottgChangelogDialogState + 0xb8) + 0x18);
    if (lVar3 == 0) goto label_044e31db;
label_044e3060:
    pGVar1 = *(Gisketch_Aottg2UI_Code_AottgComponent_c **)(lVar3 + 0x20);
    __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgChangelogMarkdownRenderer);
    pGVar9 = "changelog-reader-markdown";
    if (g_data_057aebdc == '\0') {
      il2cpp_runtime_helper_023445d0(&"changelog-markdown");
      g_data_057aebdc = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = pGVar1;
    il2cpp_runtime_helper_022b4080(__this_00 + 1);
    pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)pGVar9,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pGVar9 = "changelog-markdown";
    }
    if (__this_00 == (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) goto label_044e327f;
    __this_00[1].monitor = pGVar9;
    il2cpp_runtime_helper_022b4080();
    *(undefined4 *)&__this_00[2].klass = 0;
    pGVar8 = pGVar9;
    if (ready == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_044e327f;
    Gisketch_Aottg2UI_Code_AottgUi__Component(ready,__this_00,(MethodInfo *)0x0);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                     (ready,"Refreshing...","profileInfoStatus","changelog-reader-refreshing",(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
  pGVar8 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
            ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
  pGVar9 = "changelog.reader.refreshing";
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar5->fields).alignItems = (System_String_o *)"changelog.reader.refreshing";
    il2cpp_runtime_helper_022b4080();
    pGVar8 = pGVar9;
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).contentLayout = pGVar5;
      il2cpp_runtime_helper_022b4080(&(pGVar4->fields).contentLayout,pGVar5);
      return;
    }
  }
label_044e327f:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebeb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-loading-line-4");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-loading-line-0");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-loading-title");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-loading-line-1");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-loading-line-3");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0();
    g_data_057aebeb = '\x01';
  }
  pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(48.0,(MethodInfo *)0x0);
  pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(30.0,(MethodInfo *)0x0);
  pGVar9 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pSVar10 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar6,pGVar7,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (pGVar8,"changelog-reader-loading-title",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar6,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (pGVar8,"changelog-reader-loading-line-0",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(96.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar6,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (pGVar8,"changelog-reader-loading-line-1",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(88.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar6,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (pGVar8,"changelog-reader-loading-line-2",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(76.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar6,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (pGVar8,"changelog-reader-loading-line-3",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(58.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar6,pGVar7,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (pGVar8,"changelog-reader-loading-line-4",pGVar5,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pGVar8 = pGVar9;
  if (g_data_057aebec == '\0') {
    il2cpp_runtime_helper_023445d0(&"changelog.retryReader");
    il2cpp_runtime_helper_023445d0(&"Try again.");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-retry");
    il2cpp_runtime_helper_023445d0(&"Retry");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.error");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"Could not load changelog.");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-error");
    il2cpp_runtime_helper_023445d0(&"text");
    pSVar10 = (System_String_o *)&"changelog-reader-error-title";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebec = '\x01';
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (pGVar9,"Could not load changelog.","text","changelog-reader-error-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (pGVar9,"Try again.","profileInfoStatus","changelog-reader-error","changelog.reader.error",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (pGVar9,0,"Retry","changelog.retryReader","changelog-reader-retry",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebed == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aebed = '\x01';
  }
  text = pSVar10->fields;
  pSVar10 = System_String__Concat_3ae5ba0((System_String_o *)pSVar10[1].klass,"-text",(MethodInfo *)0x0);
  if (pGVar8 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (pGVar8,(System_String_o *)text,"profileInfoStatus",pSVar10,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebee == '\0') {
    il2cpp_runtime_helper_023445d0(&"Help & Updates");
    g_data_057aebee = '\x01';
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildLoading>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildLoading_b__14_0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loading, const MethodInfo* method);
// 0x44e3290

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildLoading_b__14_0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loading,MethodInfo *method)

{
  System_String_Fields text;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_01;
  System_String_o *pSVar4;
  
  if (g_data_057aebeb == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-loading-line-4");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-loading-line-0");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-loading-title");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-loading-line-1");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-loading-line-3");
    il2cpp_runtime_helper_023445d0(&"skeleton");
    il2cpp_runtime_helper_023445d0();
    g_data_057aebeb = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(48.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(30.0,(MethodInfo *)0x0);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0;
  pSVar4 = "Column";
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,pGVar1,pGVar2,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (loading != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loading,"changelog-reader-loading-title",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loading,"changelog-reader-loading-line-0",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(96.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loading,"changelog-reader-loading-line-1",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(88.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loading,"changelog-reader-loading-line-2",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(76.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loading,"changelog-reader-loading-line-3",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Percent(58.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(22.0,(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar1,pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loading,"changelog-reader-loading-line-4",pGVar3,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = __this_00;
  if (g_data_057aebec == '\0') {
    il2cpp_runtime_helper_023445d0(&"changelog.retryReader");
    il2cpp_runtime_helper_023445d0(&"Try again.");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-retry");
    il2cpp_runtime_helper_023445d0(&"Retry");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.error");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"Could not load changelog.");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-error");
    il2cpp_runtime_helper_023445d0(&"text");
    pSVar4 = (System_String_o *)&"changelog-reader-error-title";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebec = '\x01';
  }
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (__this_00,"Could not load changelog.","text","changelog-reader-error-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (__this_00,"Try again.","profileInfoStatus","changelog-reader-error","changelog.reader.error",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (__this_00,0,"Retry","changelog.retryReader","changelog-reader-retry",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebed == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aebed = '\x01';
  }
  text = pSVar4->fields;
  pSVar4 = System_String__Concat_3ae5ba0((System_String_o *)pSVar4[1].klass,"-text",(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (__this_01,(System_String_o *)text,"profileInfoStatus",pSVar4,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebee == '\0') {
    il2cpp_runtime_helper_023445d0(&"Help & Updates");
    g_data_057aebee = '\x01';
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c$$<BuildError>b__15_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildError_b__15_0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* failed, const MethodInfo* method);
// 0x44e3790

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c___BuildError_b__15_0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *failed,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_c *text;
  System_String_o *id;
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  
  __this_00 = failed;
  if (g_data_057aebec == '\0') {
    il2cpp_runtime_helper_023445d0(&"changelog.retryReader");
    il2cpp_runtime_helper_023445d0(&"Try again.");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-retry");
    il2cpp_runtime_helper_023445d0(&"Retry");
    il2cpp_runtime_helper_023445d0(&"return");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.error");
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"Could not load changelog.");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-error");
    il2cpp_runtime_helper_023445d0(&"text");
    __this = (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c_o *)&"changelog-reader-error-title";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebec = '\x01';
  }
  if (failed != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (failed,"Could not load changelog.","text","changelog-reader-error-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (failed,"Try again.","profileInfoStatus","changelog-reader-error","changelog.reader.error",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (failed,0,"Retry","changelog.retryReader","changelog-reader-retry",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebed == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aebed = '\x01';
  }
  text = __this[1].klass;
  id = System_String__Concat_3ae5ba0(__this[1].monitor,"-text",(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (__this_00,(System_String_o *)text,"profileInfoStatus",id,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebee == '\0') {
    il2cpp_runtime_helper_023445d0(&"Help & Updates");
    g_data_057aebee = '\x01';
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c__DisplayClass17_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___ctor (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x44e2f60

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog.<>c__DisplayClass17_0$$<BuildStatePanel>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___BuildStatePanel_b__0 (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* state, const MethodInfo* method);
// 0x44e3910

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0___BuildStatePanel_b__0
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___c__DisplayClass17_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *state,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *id;
  
  if (g_data_057aebed == '\0') {
    il2cpp_runtime_helper_023445d0(&"profileInfoStatus");
    il2cpp_runtime_helper_023445d0(&"-text");
    g_data_057aebed = '\x01';
  }
  text = (__this->fields).text;
  id = System_String__Concat_3ae5ba0((__this->fields).id,"-text",(MethodInfo *)0x0);
  if (state != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (state,text,"profileInfoStatus",id,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebee == '\0') {
    il2cpp_runtime_helper_023445d0(&"Help & Updates");
    g_data_057aebee = '\x01';
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x44e2150

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aebdf == '\0') {
    il2cpp_runtime_helper_023445d0(&"Changelog");
    g_data_057aebdf = '\x01';
  }
  return "Changelog";
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x44e2180

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aebe0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Icons/material-icons/description");
    g_data_057aebe0 = '\x01';
  }
  return "Icons/material-icons/description";
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x44e21b0

int32_t Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_HeaderTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_HeaderTitleKey (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x44e21c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_HeaderTitleKey
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aebe1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"changelog.reader.title");
    g_data_057aebe1 = '\x01';
  }
  return "changelog.reader.title";
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x44e21f0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxHeight;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aebe2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aebe2 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(980.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(94.0,(MethodInfo *)0x0);
  maxHeight = Gisketch_Aottg2UI_Code_AottgUi__Percent(88.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,maxHeight,0.0,0.0,0.0,0.0,0.0,
                      0.0,0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44e22f0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  MethodInfo *pMVar1;
  MethodInfo *in_R8;
  
  pMVar1 = (MethodInfo *)body;
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildLoading(body,(MethodInfo *)body);
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildError(body,pMVar1);
  if (g_data_057aebe7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Changelog not found.");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-empty");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.empty");
    g_data_057aebe7 = '\x01';
  }
  pMVar1 = "changelog.reader.empty";
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel
            (body,(System_String_o *)"changelog.reader.empty","Changelog not found.","changelog-reader-empty",in_R8);
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildReady(body,pMVar1);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x44e2b90

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  System_String_o *in_RCX;
  System_String_o *extraout_RDX;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  
  pSVar4 = (System_String_o *)footer;
  if (g_data_057aebe3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"changelog.reader.next.enabled");
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Next");
    il2cpp_runtime_helper_023445d0(&"Close");
    il2cpp_runtime_helper_023445d0(&"changelog.previous");
    il2cpp_runtime_helper_023445d0(&"changelog.next");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.previous.enabled");
    __this = (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *)&"Prev";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebe3 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    in_RCX = (System_String_o *)0x0;
    pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
                       (footer,"Prev","changelog.previous",(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar4 = (System_String_o *)0x0;
    __this = (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *)pGVar2;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    pSVar5 = "changelog.reader.previous.enabled";
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      __this = (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *)&(pGVar2->fields).alignSelf;
      (pGVar2->fields).alignSelf = "changelog.reader.previous.enabled";
      il2cpp_runtime_helper_022b4080();
      pSVar4 = pSVar5;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).contentLayout = pGVar2;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).contentLayout,pGVar2);
        in_RCX = (System_String_o *)0x0;
        pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
                           (footer,"Next","changelog.next",(MethodInfo *)0x0);
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pSVar4 = (System_String_o *)0x0;
        __this = (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *)pGVar2;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
        pSVar5 = "changelog.reader.next.enabled";
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          __this = (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *)&(pGVar2->fields).alignSelf;
          (pGVar2->fields).alignSelf = "changelog.reader.next.enabled";
          il2cpp_runtime_helper_022b4080();
          pSVar4 = pSVar5;
          if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar1->fields).contentLayout = pGVar2;
            il2cpp_runtime_helper_022b4080(&(pGVar1->fields).contentLayout,pGVar2);
            Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
                      (footer,"Close","overlay.close",(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebe8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildStatePanel_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aebe8 = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  pGVar2 = pGVar3;
  System_Object___ctor((Il2CppObject *)pGVar3,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar3->fields).direction = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&pGVar3->fields,extraout_RDX);
    (pGVar3->fields).justify = in_RCX;
    il2cpp_runtime_helper_022b4080(&(pGVar3->fields).justify,in_RCX);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar5 = (pGVar3->fields).justify;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = "Column";
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)__this !=
        (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)__this,"default",build,pSVar5,pGVar3,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar2 = pGVar3;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar3,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar3->fields).alignItems;
        (pGVar3->fields).alignItems = pSVar4;
        il2cpp_runtime_helper_022b4080();
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar1->fields).contentLayout = pGVar3;
          il2cpp_runtime_helper_022b4080(&(pGVar1->fields).contentLayout,pGVar3);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildReady
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildReady (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44e2890

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildReady
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_Action_AottgUi__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  System_String_o *pSVar7;
  System_String_o *extraout_RDX;
  System_String_o *__this;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar10;
  
  if (g_data_057aebe4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildReady_b__13_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.ready");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-ready");
    g_data_057aebe4 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar8 = "default";
  pSVar2 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (pSVar2 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = pSVar2;
    il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(430.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  __this = (System_String_o *)0x0;
  pSVar7 = (System_String_o *)0x0;
  pGVar10 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSVar7 = "changelog-reader-ready";
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                       (body,pSVar8,pSVar2,"changelog-reader-ready",pGVar4,pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    __this = (System_String_o *)0x0;
    pGVar10 = pGVar4;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    pSVar8 = "changelog.reader.ready";
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar4->fields).alignItems;
      (pGVar4->fields).alignItems = "changelog.reader.ready";
      il2cpp_runtime_helper_022b4080();
      __this = pSVar8;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar8 = __this;
  if (g_data_057aebe3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"changelog.reader.next.enabled");
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Next");
    il2cpp_runtime_helper_023445d0(&"Close");
    il2cpp_runtime_helper_023445d0(&"changelog.previous");
    il2cpp_runtime_helper_023445d0(&"changelog.next");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.previous.enabled");
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&"Prev";
    il2cpp_runtime_helper_023445d0();
    g_data_057aebe3 = '\x01';
  }
  if (__this != (System_String_o *)0x0) {
    pSVar7 = (System_String_o *)0x0;
    pGVar6 = Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
                       ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)__this,"Prev","changelog.previous",
                        (MethodInfo *)0x0);
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar8 = (System_String_o *)0x0;
    pGVar10 = pGVar4;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
    pSVar9 = "changelog.reader.previous.enabled";
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar4->fields).alignSelf;
      (pGVar4->fields).alignSelf = "changelog.reader.previous.enabled";
      il2cpp_runtime_helper_022b4080();
      pSVar8 = pSVar9;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar4;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
        pSVar7 = (System_String_o *)0x0;
        pGVar6 = Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
                           ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)__this,"Next","changelog.next",
                            (MethodInfo *)0x0);
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
        pSVar8 = (System_String_o *)0x0;
        pGVar10 = pGVar4;
        Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                  ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar4,(MethodInfo *)0x0);
        pSVar9 = "changelog.reader.next.enabled";
        if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar4->fields).alignSelf;
          (pGVar4->fields).alignSelf = "changelog.reader.next.enabled";
          il2cpp_runtime_helper_022b4080();
          pSVar8 = pSVar9;
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar6->fields).contentLayout = pGVar4;
            il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar4);
            Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
                      ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)__this,"Close","overlay.close",
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebe8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildStatePanel_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aebe8 = '\x01';
  }
  pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  pGVar4 = pGVar5;
  System_Object___ctor((Il2CppObject *)pGVar5,(MethodInfo *)0x0);
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar5->fields).direction = extraout_RDX;
    il2cpp_runtime_helper_022b4080(&pGVar5->fields,extraout_RDX);
    (pGVar5->fields).justify = pSVar7;
    il2cpp_runtime_helper_022b4080(&(pGVar5->fields).justify,pSVar7);
    pSVar2 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    pSVar7 = (pGVar5->fields).justify;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = "Column";
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar10,"default",pSVar2,pSVar7,pGVar5,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      pGVar4 = pGVar10;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar10,(MethodInfo *)0x0);
      if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar10->fields).alignItems;
        (pGVar10->fields).alignItems = pSVar8;
        il2cpp_runtime_helper_022b4080();
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar6->fields).contentLayout = pGVar10;
          il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar10);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pGVar4,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildLoading (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44e2370

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *method_00;
  
  if (g_data_057aebe5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildLoading_b__14_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"changelog.reader.loading");
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-loading");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aebe5 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x10,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar7 = "Column";
  pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,pSVar2,pSVar3,"changelog-reader-loading",pGVar5,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar7 = pGVar5;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar5,(MethodInfo *)0x0);
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar5->fields).alignItems;
      (pGVar5->fields).alignItems = "changelog.reader.loading";
      il2cpp_runtime_helper_022b4080();
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar5;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar5);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebe6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-failed");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.failed");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aebe6 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = "default";
  pSVar3 = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar3);
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  method_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  pGVar5 = "Column";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,pGVar4,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar7,pSVar2,pSVar3,"changelog-reader-failed",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pGVar5 = pGVar7;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar7,(MethodInfo *)0x0);
    method_00 = layout;
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar7->fields).alignItems;
      (pGVar7->fields).alignItems = "changelog.reader.failed";
      il2cpp_runtime_helper_022b4080();
      method_00 = layout;
      if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar6->fields).contentLayout = pGVar7;
        il2cpp_runtime_helper_022b4080(&(pGVar6->fields).contentLayout,pGVar7);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebe7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Changelog not found.");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-empty");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.empty");
    g_data_057aebe7 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)pGVar5,"changelog.reader.empty","Changelog not found.","changelog-reader-empty",
             (MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildError (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44e25d0

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildError
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *body_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *method_00;
  
  if (g_data_057aebe6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildError_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-failed");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.failed");
    il2cpp_runtime_helper_023445d0(&"default");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aebe6 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = build;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x18,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  method_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
  body_00 = "Column";
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ((System_String_o *)"Column",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (body,style,build,"changelog-reader-failed",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    body_00 = __this;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this,(MethodInfo *)0x0);
    method_00 = layout;
    if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      body_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(__this->fields).alignItems;
      (__this->fields).alignItems = "changelog.reader.failed";
      il2cpp_runtime_helper_022b4080();
      method_00 = layout;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).contentLayout = __this;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,__this);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aebe7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Changelog not found.");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-empty");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.empty");
    g_data_057aebe7 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel
            ((Gisketch_Aottg2UI_Code_AottgUi_o *)body_00,"changelog.reader.empty","Changelog not found.","changelog-reader-empty",
             (MethodInfo *)method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildEmpty
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildEmpty (Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44e2830

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildEmpty
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  if (g_data_057aebe7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Changelog not found.");
    il2cpp_runtime_helper_023445d0(&"changelog-reader-empty");
    il2cpp_runtime_helper_023445d0(&"changelog.reader.empty");
    g_data_057aebe7 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel
            (body,"changelog.reader.empty","Changelog not found.","changelog-reader-empty",in_R8);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$BuildStatePanel
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel (Gisketch_Aottg2UI_Code_AottgUi_o* body, System_String_o* visibleKey, System_String_o* text, System_String_o* id, const MethodInfo* method);
// 0x44e2d50

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog__BuildStatePanel
               (Gisketch_Aottg2UI_Code_AottgUi_o *body,System_String_o *visibleKey,System_String_o *text,
               System_String_o *id,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (g_data_057aebe8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildStatePanel_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass17_0);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"default");
    g_data_057aebe8 = '\x01';
  }
  pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass17_0);
  __this = pGVar1;
  System_Object___ctor((Il2CppObject *)pGVar1,(MethodInfo *)0x0);
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (pGVar1->fields).direction = text;
    il2cpp_runtime_helper_022b4080(&pGVar1->fields,text);
    (pGVar1->fields).justify = id;
    il2cpp_runtime_helper_022b4080(&(pGVar1->fields).justify,id);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
    System_Action_object____ctor();
    id_00 = (pGVar1->fields).justify;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    __this = "Column";
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ((System_String_o *)"Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (body,"default",build,id_00,pGVar1,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar1 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
      __this = pGVar1;
      Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar1,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(pGVar1->fields).alignItems;
        (pGVar1->fields).alignItems = visibleKey;
        il2cpp_runtime_helper_022b4080();
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (pGVar2->fields).contentLayout = pGVar1;
          il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,pGVar1);
          return;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogReaderDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o* __this, const MethodInfo* method);
// 0x44e2f70

void Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogReaderDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


