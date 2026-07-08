// Type: Gisketch.Aottg2UI.Game.AottgMainMenuScreen
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuScreen.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___cctor (const MethodInfo* method);
// 0x41c6e40

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704df1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704df1 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o* __this, const MethodInfo* method);
// 0x41c6eb0

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen.<>c$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* account, const MethodInfo* method);
// 0x41c6ec0

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen_<>c__<Build>b__6_0
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *account,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  
  if (DAT_05704df2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileBanner);
    DAT_05704df2 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_glue(TypeInfo_AottgProfileBanner);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  if (account != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(account,__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootStyle (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x41c69f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,MethodInfo *method)

{
  if (DAT_05704dee == '\0') {
    il2cpp_init_method_metadata(&"mainMenuOverlay");
    DAT_05704dee = '\x01';
  }
  return "mainMenuOverlay";
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootLayout (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x41c6a20

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgMainMenuScreen__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704def == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704def = '\x01';
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


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen__Build (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41c6af0

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen__Build
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar3;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  
  if (DAT_05704df0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuPanel);
    il2cpp_init_method_metadata(&TypeInfo_AottgMainMenuTipPanel);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"FlexEnd");
    il2cpp_init_method_metadata(&"main.quit");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"mainMenuTipPanel");
    il2cpp_init_method_metadata(&"account-banner-layer");
    il2cpp_init_method_metadata(&"FlexStart");
    il2cpp_init_method_metadata(&"Absolute");
    DAT_05704df0 = '\x01';
  }
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_glue(TypeInfo_AottgMainMenuPanel);
  pGVar2 = "main.quit";
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(pGVar3,(MethodInfo *)0x0);
  pGVar3[1].klass = pGVar2;
  il2cpp_runtime_glue(pGVar3 + 1,pGVar2);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(ui,pGVar3,(MethodInfo *)0x0);
    pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_glue(TypeInfo_AottgMainMenuTipPanel);
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(pGVar3,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Component(ui,pGVar3,(MethodInfo *)0x0);
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
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(112.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","FlexStart","Absolute",(System_String_o *)0x0,
                        0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,16.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,style,build,"account-banner-layer",layout,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuTipPanel",(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).motion = pGVar5;
      il2cpp_runtime_glue(&(pGVar4->fields).motion,pGVar5);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("mainMenuTipPanel",(System_String_o *)0x0,0.12,0.0,0.0,0,(MethodInfo *)0x0);
      (pGVar4->fields).enter = pGVar5;
      il2cpp_runtime_glue(&(pGVar4->fields).enter,pGVar5);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuScreen$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o* __this, const MethodInfo* method);
// 0x41c6e30

void Gisketch_Aottg2UI_Game_AottgMainMenuScreen___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuScreen_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreen___ctor
            ((Gisketch_Aottg2UI_Code_AottgScreen_o *)__this,(MethodInfo *)0x0);
  return;
}


