// Type: Gisketch.Aottg2UI.Game.AottgCreditsScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsScreen.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___cctor (const MethodInfo* method);
// 0x4171d40

void Gisketch_Aottg2UI_Game_AottgCreditsScreen_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704ad6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704ad6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, const MethodInfo* method);
// 0x4171db0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildCredits>b__10_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildCredits_b__10_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* states, const MethodInfo* method);
// 0x4171dc0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen_<>c__<BuildCredits>b__10_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *states,MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)states;
  if (DAT_05704ad7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsScreen);
    DAT_05704ad7 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgCreditsScreen + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading(states,method_00);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder(states,method_00);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty(states,method_00);
  Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError(states,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildLoading>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildLoading_b__11_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* loading, const MethodInfo* method);
// 0x4171e20

void Gisketch_Aottg2UI_Game_AottgCreditsScreen_<>c__<BuildLoading>b__11_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *loading,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  int iStack_34;
  
  if (DAT_05704ad8 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"skeleton");
    il2cpp_init_method_metadata(&"credits-loading-row-");
    DAT_05704ad8 = '\x01';
  }
  iStack_34 = 0;
  if (loading == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pSVar1 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
    System_String__Concat("credits-loading-row-",pSVar1,(MethodInfo *)0x0);
    pSVar1 = "Column";
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent
                       (*(float *)(&DAT_00cd1050 + (ulong)(iStack_34 == (iStack_34 / 3) * 3) * 4),
                        (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Layout
              (pSVar1,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
               (System_String_o *)0x0,0.0,pGVar2,pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
               0.0,0.0,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    pSVar1 = System_Int32__ToString((int32_t)&iStack_34,(MethodInfo *)0x0);
    id = System_String__Concat("credits-loading-row-",pSVar1,(MethodInfo *)0x0);
    pSVar1 = "Column";
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent
                       (*(float *)(&DAT_00cd1050 + (ulong)(iStack_34 == (iStack_34 / 3) * 3) * 4),
                        (MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(28.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       (pSVar1,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,pGVar2,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Skeleton
              (loading,id,layout,"skeleton",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    iStack_34 = iStack_34 + 1;
  } while (iStack_34 < 6);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildReadyPlaceholder>b__12_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildReadyPlaceholder_b__12_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ready, const MethodInfo* method);
// 0x41720a0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen_<>c__<BuildReadyPlaceholder>b__12_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ready,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  
  if (DAT_05704ad9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"credits-ready-text");
    il2cpp_init_method_metadata(&"profileInfoStatus");
    il2cpp_init_method_metadata(&"credits-refreshing-text");
    il2cpp_init_method_metadata(&"Refreshing credits...");
    il2cpp_init_method_metadata(&"credits.refreshing");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"Credits loaded.");
    DAT_05704ad9 = '\x01';
  }
  if (ready != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ready,"Credits loaded.","text","credits-ready-text",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (ready,"Refreshing credits...","profileInfoStatus","credits-refreshing-text",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (__this_00->fields).alignItems = "credits.refreshing";
      il2cpp_runtime_glue(&(__this_00->fields).alignItems);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).contentLayout = __this_00;
        il2cpp_runtime_glue(&(pGVar1->fields).contentLayout,__this_00);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildEmpty>b__13_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildEmpty_b__13_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* empty, const MethodInfo* method);
// 0x41721f0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen_<>c__<BuildEmpty>b__13_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *empty,MethodInfo *method)

{
  if (DAT_05704ada == '\0') {
    il2cpp_init_method_metadata(&"credits-empty-text");
    il2cpp_init_method_metadata(&"Credits are empty.");
    il2cpp_init_method_metadata(&"text");
    DAT_05704ada = '\x01';
  }
  if (empty != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (empty,"Credits are empty.","text","credits-empty-text",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c$$<BuildError>b__14_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c___BuildError_b__14_0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* error, const MethodInfo* method);
// 0x4172270

void Gisketch_Aottg2UI_Game_AottgCreditsScreen_<>c__<BuildError>b__14_0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *error,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (DAT_05704adb == '\0') {
    il2cpp_init_method_metadata(&"Try again.");
    il2cpp_init_method_metadata(&"credits.retry");
    il2cpp_init_method_metadata(&"Retry");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"return");
    il2cpp_init_method_metadata(&"credits.error");
    il2cpp_init_method_metadata(&"profileInfoStatus");
    il2cpp_init_method_metadata(&"Could not load credits.");
    il2cpp_init_method_metadata(&"credits-error-message");
    il2cpp_init_method_metadata(&"credits-retry");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"credits-error-title");
    DAT_05704adb = '\x01';
  }
  if (error != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (error,"Could not load credits.","text","credits-error-title",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (error,"Try again.","profileInfoStatus","credits-error-message","credits.error",
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (error,0,"Retry","credits.retry","credits-retry",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,"return",
                        (MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
      il2cpp_runtime_glue(&(pGVar1->fields).search,pGVar2);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c__DisplayClass9_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x41711a0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen_<>c__DisplayClass9_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen.<>c__DisplayClass9_0$$<CreditSections>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0___CreditSections_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x4172490

void Gisketch_Aottg2UI_Game_AottgCreditsScreen_<>c__DisplayClass9_0__<CreditSections>b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen___c__DisplayClass9_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  MethodInfo *in_RCX;
  
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildCategory
            (content,(__this->fields).category,(__this->fields).index,context,in_RCX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___cctor (const MethodInfo* method);
// 0x4170550

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___cctor(MethodInfo *method)

{
  long lVar1;
  MethodInfo *method_00;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  int32_t iVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
  if (DAT_05704acb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgBrushSidePanelOption);
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsScreen);
    il2cpp_init_method_metadata(&TypeInfo_AottgHoverMarqueeText);
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileHover);
    il2cpp_init_method_metadata(&"return");
    il2cpp_init_method_metadata(&"screen.main-menu");
    il2cpp_init_method_metadata(&"BACK");
    DAT_05704acb = '\x01';
  }
  lVar1 = il2cpp_glue_02274930(TypeInfo_AottgBrushSidePanelOption,1);
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  iVar6 = 0;
  uVar7._0_2_ = 0;
  uVar7._2_2_ = 0;
  uVar8 = 0;
  uVar9 = 0;
  uVar2 = 0;
  uVar3 = 0;
  uVar4 = 0;
  uVar5 = 0;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
            ((Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o)ZEXT848(0),
             (System_String_o *)&stack0xffffffffffffff98,"BACK","screen.main-menu","return");
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(int *)(lVar1 + 0x18) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  *(undefined4 *)(lVar1 + 0x40) = uVar10;
  *(undefined4 *)(lVar1 + 0x44) = uVar11;
  *(undefined4 *)(lVar1 + 0x48) = uVar12;
  *(undefined4 *)(lVar1 + 0x4c) = uVar13;
  *(int32_t *)(lVar1 + 0x30) = iVar6;
  *(undefined4 *)(lVar1 + 0x34) = uVar7;
  *(undefined4 *)(lVar1 + 0x38) = uVar8;
  *(undefined4 *)(lVar1 + 0x3c) = uVar9;
  *(undefined4 *)(lVar1 + 0x20) = uVar2;
  *(undefined4 *)(lVar1 + 0x24) = uVar3;
  *(undefined4 *)(lVar1 + 0x28) = uVar4;
  *(undefined4 *)(lVar1 + 0x2c) = uVar5;
  il2cpp_runtime_glue(lVar1 + 0x20,0);
  **(long **)(TypeInfo_AottgCreditsScreen + 0xb8) = lVar1;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgCreditsScreen + 0xb8),lVar1);
  if (*(int *)(TypeInfo_AottgPublicProfileHover + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)0x0);
  if (*(int *)((long)&TypeInfo_AottgHoverMarqueeText[2].parameters + 4) != 0) {
    Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(TypeInfo_AottgHoverMarqueeText);
    return;
  }
  method_00 = TypeInfo_AottgHoverMarqueeText;
  il2cpp_init_class();
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x4170810

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,MethodInfo *method)

{
  if (DAT_05704acc == '\0') {
    il2cpp_init_method_metadata(&"mainMenuOverlay");
    DAT_05704acc = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x4170840

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704acd == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704acd = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__Build (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4170910

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__Build
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  uint uVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *sections;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  MethodInfo *method_00;
  
  if (DAT_05704ace == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsScreen);
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_init_method_metadata(&"CREDITS");
    il2cpp_init_method_metadata(&"credits-screen");
    DAT_05704ace = '\x01';
  }
  method_00 = TypeInfo_AottgCreditsScreen;
  if (*(int *)((long)&TypeInfo_AottgCreditsScreen[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  sections = Gisketch_Aottg2UI_Game_AottgCreditsScreen__Sections(method_00);
  footerOptions =
       *(Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array **)
        TypeInfo_AottgCreditsScreen[2].virtualMethodPointer;
  uVar1 = Gisketch_Aottg2UI_Game_AottgCreditsScreenState__get_HasCategories(method_00);
  __this_00 = (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)
              il2cpp_runtime_glue(TypeInfo_AottgScreenWithBrushSidePanel);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor
            (__this_00,"CREDITS",sections,0,footerOptions,"credits-screen",
             (System_Action_AottgUi__o *)0x0,uVar1 & 0xff,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$Sections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgCreditsScreen__Sections (const MethodInfo* method);
// 0x4170a00

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__Sections(MethodInfo *method)

{
  ushort uVar1;
  ApplicationManagers_Credits_AottgCreditsResponse_o *credits;
  System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *pSVar2;
  System_Collections_Generic_IReadOnlyList_AottgCreditCategory__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  int iVar5;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar7;
  System_String_o *textKey;
  MethodInfo *method_00;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined8 uVar14;
  undefined8 uVar15;
  undefined8 uVar16;
  
  if (DAT_05704acf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi__AottgScreenSectionContext);
    il2cpp_init_method_metadata(&MethodInfo_Void_BuildCredits);
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsScreen);
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenSection);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgCreditCategory);
    il2cpp_init_method_metadata(&"credits");
    il2cpp_init_method_metadata(&"CREDITS");
    il2cpp_init_method_metadata(&"Credits");
    il2cpp_init_method_metadata();
    DAT_05704acf = '\x01';
  }
  if (DAT_05704b2a == '\0') {
    il2cpp_init_method_metadata();
    DAT_05704b2a = '\x01';
  }
  credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)
            **(undefined8 **)(TypeInfo_AottgCreditsScreenState + 0xb8);
  if (credits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
    pSVar2 = (credits->fields)._Categories_k__BackingField;
    if (pSVar2 == (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)0x0)
    goto LAB_04170ca9;
    pSVar3 = pSVar2->klass;
    uVar1._0_1_ = (pSVar3->_2).rank;
    uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar4 = (pSVar3->_1).interfaceOffsets;
      lVar8 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar8) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
          pVVar6 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar8);
          goto LAB_04170b31;
        }
        lVar8 = lVar8 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar8);
    }
    pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar2,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
LAB_04170b31:
    method_00 = pVVar6->method;
    iVar5 = (*pVVar6->methodPtr)(pSVar2);
    if (0 < iVar5) {
      if (*(int *)(TypeInfo_AottgCreditsScreen + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pGVar7 = Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections(credits,method_00);
      return pGVar7;
    }
  }
  pGVar7 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_glue_02274930(TypeInfo_AottgScreenSection,1);
  textKey = (System_String_o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi__AottgScreenSectionContext);
  uVar9 = 0x4170ba7;
  System_Action<object__AottgScreenSectionContext>___ctor();
  uVar16 = 0;
  uVar15 = 0;
  uVar14 = 0;
  uVar10 = 0;
  uVar11 = 0;
  uVar12 = 0;
  uVar13 = 0;
  Gisketch_Aottg2UI_Game_AottgScreenSection___ctor
            ((Gisketch_Aottg2UI_Game_AottgScreenSection_o)
             ZEXT6480(CONCAT856(uVar9,ZEXT2456(CONCAT816("Credits",ZEXT816(0))))),
             (System_String_o *)&stack0xffffffffffffff58,"credits","CREDITS","trophy",
             textKey,(System_String_o *)0x0,0,(System_String_o *)0x0,
             (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,0,0,(MethodInfo *)0x0);
  if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    if ((int)pGVar7->max_length != 0) {
      pGVar7->m_Items[0].fields.AutoAddKeywords = 0;
      pGVar7->m_Items[0].fields.HideSearch = 0;
      *(undefined4 *)&pGVar7->m_Items[0].fields.SearchTitle = 0;
      *(undefined4 *)((long)&pGVar7->m_Items[0].fields.SearchTitle + 4) = 0;
      *(int *)&pGVar7->m_Items[0].fields.Keywords = (int)uVar16;
      *(int *)((long)&pGVar7->m_Items[0].fields.Keywords + 4) = (int)((ulong)uVar16 >> 0x20);
      *(int *)&pGVar7->m_Items[0].fields.TextKey = (int)uVar15;
      *(int *)((long)&pGVar7->m_Items[0].fields.TextKey + 4) = (int)((ulong)uVar15 >> 0x20);
      *(undefined4 *)&pGVar7->m_Items[0].fields.Icon = 0;
      *(undefined4 *)((long)&pGVar7->m_Items[0].fields.Icon + 4) = 0;
      *(undefined4 *)&pGVar7->m_Items[0].fields.Id = 0;
      *(undefined4 *)((long)&pGVar7->m_Items[0].fields.Id + 4) = 0;
      *(int *)&pGVar7->m_Items[0].fields.Label = (int)uVar14;
      *(int *)((long)&pGVar7->m_Items[0].fields.Label + 4) = (int)((ulong)uVar14 >> 0x20);
      *(undefined4 *)&pGVar7->m_Items[0].fields._buildContent = uVar10;
      *(undefined4 *)((long)&pGVar7->m_Items[0].fields._buildContent + 4) = uVar11;
      *(undefined4 *)&pGVar7->m_Items[0].fields._buildHeaderActions = uVar12;
      *(undefined4 *)((long)&pGVar7->m_Items[0].fields._buildHeaderActions + 4) = uVar13;
      il2cpp_runtime_glue(pGVar7->m_Items,0);
      return pGVar7;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04170ca9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$CreditSections
// il2cpp: Gisketch_Aottg2UI_Game_AottgScreenSection_array* Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections (ApplicationManagers_Credits_AottgCreditsResponse_o* credits, const MethodInfo* method);
// 0x4170da0

Gisketch_Aottg2UI_Game_AottgScreenSection_array *
Gisketch_Aottg2UI_Game_AottgCreditsScreen__CreditSections
          (ApplicationManagers_Credits_AottgCreditsResponse_o *credits,MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_Action_AottgUi__AottgScreenSectionContext__o **ppSVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  System_Collections_Generic_IReadOnlyList_AottgCreditCategory__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_String_o *icon;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o __this;
  undefined4 uVar8;
  int iVar9;
  VirtualInvokeData *pVVar10;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar11;
  Il2CppObject *__this_00;
  Il2CppClass *pIVar12;
  System_String_o *label;
  System_String_o *textKey;
  MethodInfo *method_00;
  System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *pSVar13;
  long lVar14;
  ulong uVar15;
  undefined8 uVar16;
  undefined8 in_stack_ffffffffffffff28;
  ApplicationManagers_Credits_AottgCreditsResponse_o *pAVar17;
  void *pvVar18;
  System_String_Fields SVar19;
  undefined8 uVar20;
  
  if (DAT_05704ad0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi__AottgScreenSectionContext);
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenSection);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgCreditCategory);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyList_AottgCreditCategory);
    il2cpp_init_method_metadata(&MethodInfo_Void__CreditSections_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass9_0);
    il2cpp_init_method_metadata();
    DAT_05704ad0 = '\x01';
  }
  if ((credits != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) &&
     (pSVar13 = (credits->fields)._Categories_k__BackingField,
     pSVar13 != (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)0x0)) {
    pSVar6 = pSVar13->klass;
    uVar3._0_1_ = (pSVar6->_2).rank;
    uVar3._1_1_ = (pSVar6->_2).minimumAlignment;
    if ((ulong)uVar3 != 0) {
      pIVar7 = (pSVar6->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
          pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
          goto LAB_04170e91;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar3 << 4 != lVar14);
    }
    pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar13,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
LAB_04170e91:
    uVar8 = (*pVVar10->methodPtr)(pSVar13,pVVar10->method);
    pGVar11 = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_glue_02274930(TypeInfo_AottgScreenSection,uVar8);
    pSVar13 = (credits->fields)._Categories_k__BackingField;
    if (pSVar13 != (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)0x0) {
      uVar15 = 0;
      pAVar17 = credits;
      do {
        pSVar6 = pSVar13->klass;
        uVar4._0_1_ = (pSVar6->_2).rank;
        uVar4._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IReadOnlyCollection_AottgCreditCategory) {
              pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
              goto LAB_04170f33;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar14);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar13,TypeInfo_IReadOnlyCollection_AottgCreditCategory,0);
LAB_04170f33:
        iVar9 = (*pVVar10->methodPtr)(pSVar13);
        if ((long)iVar9 <= (long)uVar15) {
          return pGVar11;
        }
        __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass9_0);
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 == (Il2CppObject *)0x0) break;
        *(int *)&__this_00[1].monitor = (int)uVar15;
        pSVar13 = (credits->fields)._Categories_k__BackingField;
        if (pSVar13 == (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)0x0)
        break;
        pSVar6 = pSVar13->klass;
        uVar5._0_1_ = (pSVar6->_2).rank;
        uVar5._1_1_ = (pSVar6->_2).minimumAlignment;
        if ((ulong)uVar5 != 0) {
          pIVar7 = (pSVar6->_1).interfaceOffsets;
          lVar14 = 0;
          do {
            if (*(long *)((long)&pIVar7->interfaceType + lVar14) == TypeInfo_IReadOnlyList_AottgCreditCategory) {
              pVVar10 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar14);
              credits = pAVar17;
              goto LAB_04170fe3;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)uVar5 << 4 != lVar14);
        }
        pVVar10 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar13,TypeInfo_IReadOnlyList_AottgCreditCategory,0);
        credits = pAVar17;
LAB_04170fe3:
        pIVar12 = (Il2CppClass *)(*pVVar10->methodPtr)(pSVar13,uVar15 & 0xffffffff,pVVar10->method);
        __this_00[1].klass = pIVar12;
        il2cpp_runtime_glue(__this_00 + 1,pIVar12);
        if (__this_00[1].klass == (Il2CppClass *)0x0) break;
        label = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId
                          ((System_String_o *)((__this_00[1].klass)->_1).name,
                           *(int32_t *)&__this_00[1].monitor,method_00);
        if (__this_00[1].klass == (Il2CppClass *)0x0) break;
        icon = (System_String_o *)((__this_00[1].klass)->_1).name;
        textKey = (System_String_o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi__AottgScreenSectionContext);
        uVar16 = 0x4171058;
        System_Action<object__AottgScreenSectionContext>___ctor();
        if (__this_00[1].klass == (Il2CppClass *)0x0) break;
        uVar20 = 0;
        SVar19._stringLength = 0;
        SVar19._firstChar = 0;
        SVar19._6_2_ = 0;
        pvVar18 = (void *)0x0;
        __this.fields.Id = (System_String_o *)((__this_00[1].klass)->_1).name;
        __this.fields._buildContent = (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
        __this.fields._buildHeaderActions =
             (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0;
        __this.fields.Label = (System_String_o *)0x0;
        __this.fields.TextKey = (System_String_o *)0x1;
        __this.fields.Icon = (System_String_o *)0x1;
        __this.fields.SearchTitle = (System_String_o *)0x0;
        __this.fields.Keywords = (System_String_o *)uVar16;
        __this.fields.AutoAddKeywords = (int)in_stack_ffffffffffffff28;
        __this.fields.HideSearch = (int)((ulong)in_stack_ffffffffffffff28 >> 0x20);
        __this.fields._72_8_ = credits;
        Gisketch_Aottg2UI_Game_AottgScreenSection___ctor
                  (__this,(System_String_o *)&stack0xffffffffffffff38,label,icon,"trophy",
                   textKey,(System_String_o *)0x0,0,(System_String_o *)0x0,
                   (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0,0,0,(MethodInfo *)0x0)
        ;
        if (pGVar11 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
        if ((uint)pGVar11->max_length <= uVar15) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        *(undefined8 *)(&pGVar11->m_Items[0].fields.AutoAddKeywords + uVar15 * 0x12) = 0;
        ppSVar1 = &pGVar11->m_Items[0].fields.SearchTitle + uVar15 * 9;
        *(undefined4 *)ppSVar1 = 0;
        *(undefined4 *)((long)ppSVar1 + 4) = 0;
        *(undefined4 *)(ppSVar1 + 1) = 0;
        *(undefined4 *)((long)ppSVar1 + 0xc) = 0;
        ppSVar1 = &pGVar11->m_Items[0].fields.TextKey + uVar15 * 9;
        *(undefined4 *)ppSVar1 = 0;
        *(undefined4 *)((long)ppSVar1 + 4) = 0;
        *(int *)(ppSVar1 + 1) = (int)uVar20;
        *(int *)((long)ppSVar1 + 0xc) = (int)((ulong)uVar20 >> 0x20);
        ppSVar1 = &pGVar11->m_Items[0].fields.Id + uVar15 * 9;
        *(int32_t *)ppSVar1 = SVar19._stringLength;
        *(int *)((long)ppSVar1 + 4) = SVar19._4_4_;
        *(undefined4 *)(ppSVar1 + 1) = 0;
        *(undefined4 *)((long)ppSVar1 + 0xc) = 0;
        ppSVar2 = &pGVar11->m_Items[0].fields._buildContent + uVar15 * 9;
        *(undefined4 *)ppSVar2 = 0;
        *(undefined4 *)((long)ppSVar2 + 4) = 0;
        *(int *)(ppSVar2 + 1) = (int)pvVar18;
        *(int *)((long)ppSVar2 + 0xc) = (int)((ulong)pvVar18 >> 0x20);
        pAVar17 = credits;
        il2cpp_runtime_glue(&pGVar11->m_Items[0].fields._buildContent + uVar15 * 9,0);
        uVar15 = uVar15 + 1;
        pSVar13 = (credits->fields)._Categories_k__BackingField;
      } while (pSVar13 != (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)0x0);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildCredits
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildCredits (Gisketch_Aottg2UI_Code_AottgUi_o* content, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x41711b0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildCredits
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o __this;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  System_String_o *pSVar5;
  
  if (DAT_05704ad1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildCredits_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"credits-content-mount");
    DAT_05704ad1 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 8) = build;
    il2cpp_runtime_glue(lVar1 + 8,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  uVar4 = 0;
  pSVar5 = (System_String_o *)0x0;
  uVar2 = 0;
  uVar3 = 0;
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,16.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  __this.fields._8_8_ = uVar3;
  __this.fields._group = (System_String_o *)uVar2;
  __this.fields._SectionId_k__BackingField = (System_String_o *)uVar4;
  __this.fields._SectionTitle_k__BackingField = pSVar5;
  enter = Gisketch_Aottg2UI_Game_AottgScreenSectionContext__RowMotion
                    (__this,(int32_t)&context,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,style,build,"credits-content-mount",layout,enter,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildLoading
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41713b0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildLoading
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  
  if (DAT_05704ad2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildLoading_b__11_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"credits-loading");
    il2cpp_init_method_metadata(&"credits.loading");
    il2cpp_init_method_metadata(&"default");
    DAT_05704ad2 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x10) = build;
    il2cpp_runtime_glue(lVar1 + 0x10,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,build,"credits-loading",pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar2->fields).alignItems = "credits.loading";
      il2cpp_runtime_glue(&(pGVar2->fields).alignItems);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar2;
        il2cpp_runtime_glue(&(pGVar3->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildReadyPlaceholder
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4171610

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildReadyPlaceholder
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  
  if (DAT_05704ad3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildReadyPlaceholder_b__12_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"credits.ready");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"credits-ready-placeholder");
    DAT_05704ad3 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x18) = build;
    il2cpp_runtime_glue(lVar1 + 0x18,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,build,"credits-ready-placeholder",pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar2->fields).alignItems = "credits.ready";
      il2cpp_runtime_glue(&(pGVar2->fields).alignItems);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar2;
        il2cpp_runtime_glue(&(pGVar3->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildEmpty
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4171870

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildEmpty
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  
  if (DAT_05704ad4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildEmpty_b__13_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"credits-empty");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"credits.empty");
    DAT_05704ad4 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x20) = build;
    il2cpp_runtime_glue(lVar1 + 0x20,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,10.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,build,"credits-empty",pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar2->fields).alignItems = "credits.empty";
      il2cpp_runtime_glue(&(pGVar2->fields).alignItems);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar2;
        il2cpp_runtime_glue(&(pGVar3->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$BuildError
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4171ad0

void Gisketch_Aottg2UI_Game_AottgCreditsScreen__BuildError
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  
  if (DAT_05704ad5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildError_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"credits.failed");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"FlexStart");
    il2cpp_init_method_metadata(&"credits-error");
    DAT_05704ad5 = '\x01';
  }
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  style = "default";
  build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  if (build == (System_Action_AottgUi__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    lVar1 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_AottgUi__o **)(lVar1 + 0x28) = build;
    il2cpp_runtime_glue(lVar1 + 0x28,build);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,14.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,build,"credits-error",pGVar2,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (pGVar2->fields).alignItems = "credits.failed";
      il2cpp_runtime_glue(&(pGVar2->fields).alignItems);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).contentLayout = pGVar2;
        il2cpp_runtime_glue(&(pGVar3->fields).contentLayout,pGVar2);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsScreen___ctor (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o* __this, const MethodInfo* method);
// 0x4171d30

void Gisketch_Aottg2UI_Game_AottgCreditsScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor
            ((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


