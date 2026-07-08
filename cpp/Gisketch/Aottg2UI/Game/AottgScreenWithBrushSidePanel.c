// Type: Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgScreenWithBrushSidePanel.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass23_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o* __this, const MethodInfo* method);
// 0x42041c0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass23_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o *__this
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass23_0$$<BuildSectioned>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0___BuildSectioned_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x4205c60

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass23_0__<BuildSectioned>b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o *__this
               ,Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  bool_conflict bVar2;
  Il2CppObject *__this_01;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  MethodInfo *in_RCX;
  int iVar6;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 == (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar2 = (__this->fields).deferSections;
  if (DAT_05705008 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildSections_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass28_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"DeferredSidePanelSections");
    il2cpp_init_method_metadata(&"-scroll");
    il2cpp_init_method_metadata(&"-deferred-sections");
    DAT_05705008 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass28_0);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[1].monitor = __this_00;
    il2cpp_runtime_glue(&__this_01[1].monitor,__this_00);
    if ((char)bVar2 == '\0') {
      pGVar1 = (__this_00->fields)._sections;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
        iVar6 = (int)pGVar1->max_length;
        *(int *)&__this_01[1].klass = iVar6;
        if (0 < iVar6) {
          iVar6 = 0;
          do {
            Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                      (__this_00,content,iVar6,in_RCX);
            iVar6 = iVar6 + 1;
          } while (iVar6 < *(int *)&__this_01[1].klass);
        }
        return;
      }
    }
    else {
      *(undefined4 *)&__this_01[1].klass = 0;
      build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      pSVar3 = System_String__Concat((__this_00->fields)._id,"-scroll",(MethodInfo *)0x0);
      if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
                           (content,build,pSVar3,(MethodInfo *)0x0);
        if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          return;
        }
        if (pGVar4->max_length == 0) {
          return;
        }
        __this_02 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                    il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
        if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_02->fields).type = "DeferredSidePanelSections";
          il2cpp_runtime_glue(&__this_02->fields);
          pSVar3 = System_String__Concat((__this_00->fields)._id,"-deferred-sections",(MethodInfo *)0x0);
          (__this_02->fields).id = pSVar3;
          il2cpp_runtime_glue(&(__this_02->fields).id,pSVar3);
          *(undefined1 *)((long)&(__this_02->fields).hasIcon + 2) = 1;
          (__this_02->fields).steps =
               (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)pGVar4;
          il2cpp_runtime_glue(&(__this_02->fields).steps,pGVar4);
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0
                              ,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
          (__this_02->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
          il2cpp_runtime_glue(&(__this_02->fields).search,pGVar5);
          Gisketch_Aottg2UI_Code_AottgUi__Add(content,__this_02,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass23_0$$<BuildSectioned>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0___BuildSectioned_b__1 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x4205c80

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass23_0__<BuildSectioned>b__1
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass23_0_o *__this
               ,Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar1;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *options;
  System_String_o *title;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *__this_00;
  MethodInfo *in_R8;
  
  if (DAT_05705014 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgBrushSidePanel);
    DAT_05705014 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    options = (__this->fields).options;
    title = (pGVar1->fields)._title;
    footerOptions = (pGVar1->fields)._footerOptions;
    __this_00 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *)il2cpp_runtime_glue(TypeInfo_AottgBrushSidePanel);
    Gisketch_Aottg2UI_Game_AottgBrushSidePanel___ctor(__this_00,title,options,footerOptions,in_R8);
    if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass25_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0_o* __this, const MethodInfo* method);
// 0x4204a50

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass25_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0_o *__this
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass25_0$$<BuildContentLayer>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0___BuildContentLayer_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, const MethodInfo* method);
// 0x4205d10

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass25_0__<BuildContentLayer>b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass25_0_o *__this
               ,Gisketch_Aottg2UI_Code_AottgUi_o *content,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this_00;
  System_Action_AottgUi__o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *contentLayout;
  
  if (DAT_05705015 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"brushSidePanelScreenScroll");
    il2cpp_init_method_metadata(&"-scroll");
    DAT_05705015 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    pSVar3 = (__this->fields).build;
    id = System_String__Concat((pGVar1->fields)._id,"-scroll",(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar5,pGVar6,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pSVar4 = "brushSidePanelScreenScroll";
    contentLayout =
         Gisketch_Aottg2UI_Code_AottgUi__Layout
                   ("Column",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                    (System_String_o *)0x0,48.0,pGVar5,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                    (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,98.0,
                    *(float *)(&DAT_00cd0fd8 +
                              (ulong)((__this->fields).buildFooter ==
                                     (System_Action_AottgUi__o *)0x0) * 4),0.0,0.0,0.0,1.0,
                    (MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__ScrollView
                (content,pSVar4,pSVar3,id,pGVar7,contentLayout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pSVar3 = (__this->fields).buildFooter;
      if (pSVar3 == (System_Action_AottgUi__o *)0x0) {
        return;
      }
      pIVar2 = (Il2CppClass *)(__this->fields).__4__this;
      if (pIVar2 != (Il2CppClass *)0x0) {
        if (DAT_05705006 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
          il2cpp_init_method_metadata(&MethodInfo_Void__AddContentFooter_b__0);
          il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass26_0);
          il2cpp_init_method_metadata(&"FlexEnd");
          il2cpp_init_method_metadata(&"Column");
          il2cpp_init_method_metadata(&"default");
          il2cpp_init_method_metadata(&"Absolute");
          il2cpp_init_method_metadata(&"-content-footer-layer");
          DAT_05705006 = '\x01';
        }
        __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass26_0);
        System_Object___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Il2CppObject *)0x0) {
          __this_00[1].klass = pIVar2;
          il2cpp_runtime_glue(__this_00 + 1,pIVar2);
          __this_00[1].monitor = pSVar3;
          il2cpp_runtime_glue(&__this_00[1].monitor,pSVar3);
          pSVar3 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
          System_Action<object>___ctor();
          pSVar4 = System_String__Concat
                             ((System_String_o *)(pIVar2->_1).name,"-content-footer-layer",(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar7 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column","FlexEnd",(System_String_o *)0x0,"Absolute",
                              (System_String_o *)0x0,0.0,pGVar5,pGVar6,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0
                              ,0.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
          if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__Panel
                      (content,"default",pSVar3,pSVar4,pGVar7,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass26_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x4204c50

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass26_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o *__this
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass26_0$$<AddContentFooter>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0___AddContentFooter_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* layer, const MethodInfo* method);
// 0x4205f50

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass26_0__<AddContentFooter>b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o *__this
               ,Gisketch_Aottg2UI_Code_AottgUi_o *layer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05705016 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__AddContentFooter_b__1);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"-content-footer");
    il2cpp_init_method_metadata(&"brushSidePanelContentFooter");
    DAT_05705016 = '\x01';
  }
  style = "brushSidePanelContentFooter";
  build = (__this->fields).__9__1;
  if (build == (System_Action_AottgUi__o *)0x0) {
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    (__this->fields).__9__1 = build;
    il2cpp_runtime_glue(&(__this->fields).__9__1,build);
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    id = System_String__Concat((pGVar1->fields)._id,"-content-footer",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(132.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","Center","Stretch",(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if (layer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (layer,style,build,id,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass26_0$$<AddContentFooter>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0___AddContentFooter_b__1 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x4206120

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass26_0__<AddContentFooter>b__1
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass26_0_o *__this
               ,Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar1;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  MethodInfo *method_00;
  
  if (DAT_05705017 == '\0') {
    il2cpp_init_method_metadata(&"FlexEnd");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"-content-footer-actions");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"-content-footer-texture");
    il2cpp_init_method_metadata(&"GisketchUI/Texture/SeamlessGrunge");
    il2cpp_init_method_metadata(&"Absolute");
    il2cpp_init_method_metadata(&"brushSidePanelContentFooterTexture");
    DAT_05705017 = '\x01';
  }
  pGVar1 = (__this->fields).__4__this;
  if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    pSVar2 = System_String__Concat((pGVar1->fields)._id,"-content-footer-texture",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                        (System_String_o *)0x0,0.0,pGVar3,pGVar4,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Image
                (footer,"GisketchUI/Texture/SeamlessGrunge","brushSidePanelContentFooterTexture",pSVar2,pGVar5,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar1 = (__this->fields).__4__this;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge
                  (pGVar1,footer,method_00);
        pGVar1 = (__this->fields).__4__this;
        if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
          build = (__this->fields).buildFooter;
          pSVar2 = System_String__Concat((pGVar1->fields)._id,"-content-footer-actions",(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Row","FlexEnd","Center",(System_String_o *)0x0,
                              (System_String_o *)0x0,12.0,pGVar3,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,582.0,56.0,
                              20.0,20.0,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (footer,"default",build,pSVar2,pGVar5,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass28_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0_o* __this, const MethodInfo* method);
// 0x42050f0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass28_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0_o *__this
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass28_0$$<BuildSections>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0___BuildSections_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* deferredUi, const MethodInfo* method);
// 0x42063f0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass28_0__<BuildSections>b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass28_0_o *__this
               ,Gisketch_Aottg2UI_Code_AottgUi_o *deferredUi,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  MethodInfo *in_RCX;
  int index;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this_00;
  
  __this_00 = (__this->fields).__4__this;
  if (__this_00 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    index = (__this->fields).immediateCount;
    do {
      pGVar1 = (__this_00->fields)._sections;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
      if ((int)pGVar1->max_length <= index) {
        return;
      }
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                (__this_00,deferredUi,index,in_RCX);
      index = index + 1;
      __this_00 = (__this->fields).__4__this;
    } while (__this_00 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass29_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o* __this, const MethodInfo* method);
// 0x4205560

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass29_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o *__this
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass29_0$$<BuildSection>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___BuildSection_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x4206440

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass29_0__<BuildSection>b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o *__this
               ,Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  undefined4 uVar1;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar2;
  undefined4 uVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgScreenSection_o section;
  Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context;
  undefined8 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *extraout_RDX;
  System_String_o *in_stack_ffffffffffffff60;
  
  if (DAT_05705018 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildSection_b__1);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"card");
    DAT_05705018 = '\x01';
    method = extraout_RDX;
  }
  pGVar2 = (__this->fields).__4__this;
  uVar1 = (__this->fields).section.fields.AutoAddKeywords;
  uVar3 = (__this->fields).section.fields.HideSearch;
  pSVar4 = (__this->fields).section.fields.SearchTitle;
  pSVar9 = (__this->fields).section.fields.Keywords;
  uVar5 = (__this->fields).context.fields._group;
  uVar6 = (__this->fields).context.fields._order;
  uVar7 = *(undefined4 *)&(__this->fields).context.fields.field_0xc;
  uVar8 = (__this->fields).context.fields._SectionId_k__BackingField;
  context.fields._SectionId_k__BackingField = (System_String_o *)uVar8;
  context.fields._12_4_ = uVar7;
  context.fields._order = uVar6;
  context.fields._group = (System_String_o *)uVar5;
  if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    section.fields.Icon._4_4_ = (int)((ulong)(__this->fields).section.fields.Icon >> 0x20);
    section.fields._0_44_ = *(undefined1 (*) [44])&(__this->fields).section.fields;
    section.fields.SearchTitle._0_4_ = (int)pSVar4;
    section.fields.SearchTitle._4_4_ = (int)((ulong)pSVar4 >> 0x20);
    section.fields.Keywords._0_4_ = (int)pSVar9;
    section.fields.Keywords._4_4_ = (int)((ulong)pSVar9 >> 0x20);
    section.fields.AutoAddKeywords = uVar1;
    section.fields.HideSearch = uVar3;
    section.fields.HideHeader = (__this->fields).section.fields.HideHeader;
    section.fields._76_4_ = *(undefined4 *)&(__this->fields).section.fields.field_0x4c;
    context.fields._SectionTitle_k__BackingField = in_stack_ffffffffffffff60;
    Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddSectionHeader
              (pGVar2,panel,section,context,method);
    pSVar4 = "card";
    build = (System_Action_AottgUi__o *)
            (__this->fields).context.fields._SectionTitle_k__BackingField;
    if (build == (System_Action_AottgUi__o *)0x0) {
      build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      (__this->fields).context.fields._SectionTitle_k__BackingField = (System_String_o *)build;
      il2cpp_runtime_glue(&(__this->fields).context.fields._SectionTitle_k__BackingField,build);
    }
    pGVar2 = (__this->fields).__4__this;
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
      pSVar9 = (__this->fields).section.fields.Id;
      if (DAT_05705012 == '\0') {
        il2cpp_init_method_metadata(&"-body");
        DAT_05705012 = '\x01';
      }
      if (DAT_05705010 == '\0') {
        il2cpp_init_method_metadata(&"-section-");
        DAT_05705010 = '\x01';
      }
      pSVar9 = System_String__Concat((pGVar2->fields)._id,"-section-",pSVar9,(MethodInfo *)0x0);
      pSVar9 = System_String__Concat(pSVar9,"-body",(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,12.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (panel,pSVar4,build,pSVar9,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass29_0$$<BuildSection>b__1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0___BuildSection_b__1 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4206700

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass29_0__<BuildSection>b__1
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass29_0_o *__this
               ,Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar1;
  
  pSVar1 = (__this->fields).section.fields._buildContent;
  if (pSVar1 != (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
    il2cpp_glue_0420fd40(pSVar1,body,0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass33_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x4205b20

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass33_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0_o *__this
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass33_0$$<AddSectionHeader>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0___AddSectionHeader_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* headerRow, const MethodInfo* method);
// 0x4206740

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass33_0__<AddSectionHeader>b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass33_0_o *__this
               ,Gisketch_Aottg2UI_Code_AottgUi_o *headerRow,MethodInfo *method)

{
  long lVar1;
  System_String_o *text;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  
  if (DAT_05705019 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"header");
    DAT_05705019 = '\x01';
  }
  lVar1 = *(long *)&(__this->fields).section.fields.HideHeader;
  if (lVar1 != 0) {
    pSVar3 = (__this->fields).section.fields.Id;
    text = (__this->fields).section.fields.Label;
    if (DAT_05705011 == '\0') {
      il2cpp_init_method_metadata(&"-header");
      DAT_05705011 = '\x01';
    }
    if (DAT_05705010 == '\0') {
      il2cpp_init_method_metadata(&"-section-");
      DAT_05705010 = '\x01';
    }
    pSVar3 = System_String__Concat
                       (*(System_String_o **)(lVar1 + 0x10),"-section-",pSVar3,(MethodInfo *)0x0);
    pSVar3 = System_String__Concat(pSVar3,"-header",(MethodInfo *)0x0);
    if (DAT_05704fff == '\0') {
      il2cpp_init_method_metadata(&"slideLeft");
      DAT_05704fff = '\x01';
    }
    enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                      ("slideLeft",(System_String_o *)(__this->fields).__4__this,0.12,0.01,0.018,
                       *(int32_t *)&(__this->fields).context.fields._group,(MethodInfo *)0x0);
    if (headerRow != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (headerRow,text,"header",pSVar3,(System_String_o *)0x0,enter,
                          (MethodInfo *)0x0);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).textKey = (__this->fields).section.fields.TextKey;
        il2cpp_runtime_glue(&(pGVar4->fields).textKey);
        pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,
                            0.0,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
        (pGVar4->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_glue(&(pGVar4->fields).search,pGVar5);
        pSVar2 = (__this->fields).section.fields._buildHeaderActions;
        if (pSVar2 != (System_Action_AottgUi__AottgScreenSectionContext__o *)0x0) {
          il2cpp_glue_0420fd40(pSVar2,headerRow,0);
        }
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass35_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o* __this, const MethodInfo* method);
// 0x4205bb0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass35_0___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o *__this
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel.<>c__DisplayClass35_0$$<SectionOptions>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0___SectionOptions_b__0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4206980

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_<>c__DisplayClass35_0__<SectionOptions>b__0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___c__DisplayClass35_0_o *__this
               ,Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select
            (context.fields.GameObject,(__this->fields).section.fields.Id,0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___cctor (const MethodInfo* method);
// 0x4203c30

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgDeferredSidePanelSectionsRuntime__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o* sidePanel, System_Action_AottgUi__o* buildContent, System_Action_AottgUi__o* buildContentFooter, const MethodInfo* method);
// 0x4203c40

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanel_o *sidePanel,
               System_Action_AottgUi__o *buildContent,System_Action_AottgUi__o *buildContentFooter,
               MethodInfo *method)

{
  if (DAT_05705001 == '\0') {
    il2cpp_init_method_metadata(&"brush-side-panel");
    DAT_05705001 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = "brush-side-panel";
  il2cpp_runtime_glue(&__this->fields);
  (__this->fields)._sidePanel = sidePanel;
  il2cpp_runtime_glue(&(__this->fields)._sidePanel,sidePanel);
  (__this->fields)._buildContent = buildContent;
  il2cpp_runtime_glue(&(__this->fields)._buildContent,buildContent);
  (__this->fields)._buildContentFooter = buildContentFooter;
  il2cpp_runtime_glue(&(__this->fields)._buildContentFooter,buildContentFooter);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* title, Gisketch_Aottg2UI_Game_AottgScreenSection_array* sections, int32_t layoutMode, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* footerOptions, System_String_o* id, System_Action_AottgUi__o* buildContentFooter, bool deferScrollSections, const MethodInfo* method);
// 0x41f8240

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___ctor
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               System_String_o *title,Gisketch_Aottg2UI_Game_AottgScreenSection_array *sections,
               int32_t layoutMode,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *footerOptions,
               System_String_o *id,System_Action_AottgUi__o *buildContentFooter,
               bool_conflict deferScrollSections,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05705002 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenSection);
    il2cpp_init_method_metadata(&"brush-side-panel");
    il2cpp_init_method_metadata(&"OPTIONS");
    DAT_05705002 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    id = "brush-side-panel";
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *)0x0) {
    (__this->fields)._id = id;
    il2cpp_runtime_glue(&__this->fields);
    bVar1 = System_String__IsNullOrEmpty(title,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      title = "OPTIONS";
    }
    (__this->fields)._title = title;
    il2cpp_runtime_glue(&(__this->fields)._title,title);
    if (sections == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      sections = (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)il2cpp_glue_02274930(TypeInfo_AottgScreenSection,0);
    }
    (__this->fields)._sections = sections;
    il2cpp_runtime_glue(&(__this->fields)._sections,sections);
    (__this->fields)._layoutMode = layoutMode;
    (__this->fields)._footerOptions = footerOptions;
    il2cpp_runtime_glue(&(__this->fields)._footerOptions,footerOptions);
    (__this->fields)._buildContentFooter = buildContentFooter;
    il2cpp_runtime_glue(&(__this->fields)._buildContentFooter,buildContentFooter);
    *(undefined1 *)&(__this->fields)._deferScrollSections = (undefined1)deferScrollSections;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__Build (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4203cd0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__Build
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  bool_conflict bVar2;
  Il2CppObject *__this_00;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  bool bVar8;
  MethodInfo *pMVar9;
  MethodInfo *in_R8;
  System_Enum_o SStack_48;
  int32_t iStack_38;
  
  if ((__this->fields)._sections == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    if (DAT_05705004 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
      il2cpp_init_method_metadata(&MethodInfo_Void__BuildLegacy_b__24_0);
      il2cpp_init_method_metadata(&TypeInfo_AottgScreenWithBrushSidePanel);
      il2cpp_init_method_metadata(&"brush-side-panel-layer");
      il2cpp_init_method_metadata(&"default");
      DAT_05705004 = '\x01';
    }
    Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
              (__this,ui,(__this->fields)._buildContent,(__this->fields)._buildContentFooter,in_R8);
    pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    pMVar9 = TypeInfo_AottgScreenWithBrushSidePanel;
    if (*(int *)((long)&TypeInfo_AottgScreenWithBrushSidePanel[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(pMVar9);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (ui,"default",pSVar5,"brush-side-panel-layer",pGVar6,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05705003 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_init_method_metadata(&TypeInfo_AottgSidePanelLayoutMode);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildSectioned_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildSectioned_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass23_0);
    il2cpp_init_method_metadata(&"brush-side-panel-layer");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"-section-navigator");
    il2cpp_init_method_metadata(&"SectionNavigator");
    il2cpp_init_method_metadata(&"Absolute");
    DAT_05705003 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass23_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_042041b3;
  __this_00[1].klass = (Il2CppClass *)__this;
  pMVar9 = (MethodInfo *)__this;
  il2cpp_runtime_glue(__this_00 + 1);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds(__this,pMVar9);
  pGVar4 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions(__this,pMVar9);
  __this_00[2].klass = (Il2CppClass *)pGVar4;
  il2cpp_runtime_glue(__this_00 + 2,pGVar4);
  if (DAT_0570500c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_0570500c = '\x01';
  }
  if ((char)(__this->fields)._deferScrollSections == '\0') {
LAB_04203f54:
    bVar8 = false;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = false;
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if ((__this->fields)._layoutMode != 0) goto LAB_04203f54;
      pGVar1 = (__this->fields)._sections;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto LAB_042041b3;
      bVar8 = 1 < (int)pGVar1->max_length;
    }
  }
  *(bool *)&__this_00[1].monitor = bVar8;
  pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
            (__this,ui,pSVar5,(__this->fields)._buildContentFooter,in_R8);
  pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  pMVar9 = TypeInfo_AottgScreenWithBrushSidePanel;
  if (*(int *)((long)&TypeInfo_AottgScreenWithBrushSidePanel[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(pMVar9);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",pSVar5,"brush-side-panel-layer",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).type = "SectionNavigator";
      il2cpp_runtime_glue(&__this_01->fields);
      pSVar7 = System_String__Concat((__this->fields)._id,"-section-navigator",(MethodInfo *)0x0);
      (__this_01->fields).id = pSVar7;
      il2cpp_runtime_glue(&(__this_01->fields).id,pSVar7);
      (__this_01->fields).text = (__this->fields)._id;
      il2cpp_runtime_glue(&(__this_01->fields).text);
      SStack_48.klass = TypeInfo_AottgSidePanelLayoutMode;
      SStack_48.monitor = (void *)0xffffffffffffffff;
      iStack_38 = (__this->fields)._layoutMode;
      pSVar7 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
      (__this_01->fields).value = pSVar7;
      il2cpp_runtime_glue(&(__this_01->fields).value,pSVar7);
      *(System_String_array **)&(__this_01->fields).maxVisibleItems = pSVar3;
      il2cpp_runtime_glue(&(__this_01->fields).maxVisibleItems,pSVar3);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      (__this_01->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_glue(&(__this_01->fields).search,pGVar6);
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
LAB_042041b3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSectioned
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSectioned (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4203de0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSectioned
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  bool_conflict bVar2;
  Il2CppObject *__this_00;
  System_String_array *pSVar3;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar4;
  System_Action_AottgUi__o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  bool bVar8;
  MethodInfo *pMVar9;
  MethodInfo *in_R8;
  System_Enum_o SStack_48;
  int32_t iStack_38;
  
  if (DAT_05705003 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_init_method_metadata(&TypeInfo_AottgSidePanelLayoutMode);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildSectioned_b__0);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildSectioned_b__1);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass23_0);
    il2cpp_init_method_metadata(&"brush-side-panel-layer");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"-section-navigator");
    il2cpp_init_method_metadata(&"SectionNavigator");
    il2cpp_init_method_metadata(&"Absolute");
    DAT_05705003 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass23_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_042041b3;
  __this_00[1].klass = (Il2CppClass *)__this;
  pMVar9 = (MethodInfo *)__this;
  il2cpp_runtime_glue(__this_00 + 1);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds(__this,pMVar9);
  pGVar4 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions(__this,pMVar9);
  __this_00[2].klass = (Il2CppClass *)pGVar4;
  il2cpp_runtime_glue(__this_00 + 2,pGVar4);
  if (DAT_0570500c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_0570500c = '\x01';
  }
  if ((char)(__this->fields)._deferScrollSections == '\0') {
LAB_04203f54:
    bVar8 = false;
  }
  else {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = false;
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if ((__this->fields)._layoutMode != 0) goto LAB_04203f54;
      pGVar1 = (__this->fields)._sections;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) goto LAB_042041b3;
      bVar8 = 1 < (int)pGVar1->max_length;
    }
  }
  *(bool *)&__this_00[1].monitor = bVar8;
  pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
            (__this,ui,pSVar5,(__this->fields)._buildContentFooter,in_R8);
  pSVar5 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  pMVar9 = TypeInfo_AottgScreenWithBrushSidePanel;
  if (*(int *)((long)&TypeInfo_AottgScreenWithBrushSidePanel[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pGVar6 = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(pMVar9);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",pSVar5,"brush-side-panel-layer",pGVar6,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
    if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_01->fields).type = "SectionNavigator";
      il2cpp_runtime_glue(&__this_01->fields);
      pSVar7 = System_String__Concat((__this->fields)._id,"-section-navigator",(MethodInfo *)0x0);
      (__this_01->fields).id = pSVar7;
      il2cpp_runtime_glue(&(__this_01->fields).id,pSVar7);
      (__this_01->fields).text = (__this->fields)._id;
      il2cpp_runtime_glue(&(__this_01->fields).text);
      SStack_48.klass = TypeInfo_AottgSidePanelLayoutMode;
      SStack_48.monitor = (void *)0xffffffffffffffff;
      iStack_38 = (__this->fields)._layoutMode;
      pSVar7 = System_Enum__ToString(&SStack_48,(MethodInfo *)0x0);
      (__this_01->fields).value = pSVar7;
      il2cpp_runtime_glue(&(__this_01->fields).value,pSVar7);
      *(System_String_array **)&(__this_01->fields).maxVisibleItems = pSVar3;
      il2cpp_runtime_glue(&(__this_01->fields).maxVisibleItems,pSVar3);
      width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                          (System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      (__this_01->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar6;
      il2cpp_runtime_glue(&(__this_01->fields).search,pGVar6);
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_01,(MethodInfo *)0x0);
      return;
    }
  }
LAB_042041b3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildLegacy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildLegacy (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4203ce0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildLegacy
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  
  if (DAT_05705004 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildLegacy_b__24_0);
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_init_method_metadata(&"brush-side-panel-layer");
    il2cpp_init_method_metadata(&"default");
    DAT_05705004 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
            (__this,ui,(__this->fields)._buildContent,(__this->fields)._buildContentFooter,in_R8);
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  method_00 = TypeInfo_AottgScreenWithBrushSidePanel;
  if (*(int *)((long)&TypeInfo_AottgScreenWithBrushSidePanel[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  layout = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(method_00);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"default",build,"brush-side-panel-layer",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildContentLayer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, System_Action_AottgUi__o* build, System_Action_AottgUi__o* buildFooter, const MethodInfo* method);
// 0x4204790

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildContentLayer
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,System_Action_AottgUi__o *build,
               System_Action_AottgUi__o *buildFooter,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_AottgUi__o *build_00;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  MethodInfo *method_00;
  
  if (DAT_05705005 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildContentLayer_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass25_0);
    il2cpp_init_method_metadata(&"-content");
    il2cpp_init_method_metadata(&"brushSidePanelContentIntro");
    il2cpp_init_method_metadata(&"brushSidePanelScreenContent");
    DAT_05705005 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass25_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)build;
    il2cpp_runtime_glue(__this_00 + 1,build);
    __this_00[1].monitor = __this;
    il2cpp_runtime_glue(&__this_00[1].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)buildFooter;
    il2cpp_runtime_glue(__this_00 + 2,buildFooter);
    build_00 = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    id = System_String__Concat((__this->fields)._id,"-content",(MethodInfo *)0x0);
    method_00 = TypeInfo_AottgScreenWithBrushSidePanel;
    if (*(int *)((long)&TypeInfo_AottgScreenWithBrushSidePanel[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    layout = Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(method_00);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("brushSidePanelContentIntro",(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"brushSidePanelScreenContent",build_00,id,layout,pGVar1,(MethodInfo *)0x0);
      pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                         ("brushSidePanelContentIntro",(System_String_o *)0x0,0.28,0.0,0.0,0,(MethodInfo *)0x0);
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).enter = pGVar1;
        il2cpp_runtime_glue(&(pGVar2->fields).enter,pGVar1);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddContentFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddContentFooter (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, System_Action_AottgUi__o* buildFooter, const MethodInfo* method);
// 0x4204a60

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddContentFooter
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,System_Action_AottgUi__o *buildFooter,
               MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Action_AottgUi__o *build;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05705006 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__AddContentFooter_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass26_0);
    il2cpp_init_method_metadata(&"FlexEnd");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"Absolute");
    il2cpp_init_method_metadata(&"-content-footer-layer");
    DAT_05705006 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass26_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1,__this);
    __this_00[1].monitor = buildFooter;
    il2cpp_runtime_glue(&__this_00[1].monitor,buildFooter);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    id = System_String__Concat((__this->fields)._id,"-content-footer-layer",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column","FlexEnd",(System_String_o *)0x0,"Absolute",
                        (System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"default",build,id,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddFooterTopEdge
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x4204c60

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddFooterTopEdge
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (DAT_05705007 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"brushSidePanelContentFooterTopShadow");
    il2cpp_init_method_metadata(&"Absolute");
    il2cpp_init_method_metadata(&"Divider");
    il2cpp_init_method_metadata(&"-content-footer-top-shadow");
    DAT_05705007 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "Divider";
    il2cpp_runtime_glue(&__this_00->fields);
    pSVar1 = System_String__Concat((__this->fields)._id,"-content-footer-top-shadow",(MethodInfo *)0x0);
    (__this_00->fields).id = pSVar1;
    il2cpp_runtime_glue(&(__this_00->fields).id,pSVar1);
    (__this_00->fields).style = "brushSidePanelContentFooterTopShadow";
    il2cpp_runtime_glue();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(2.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                        (System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
    il2cpp_runtime_glue(&(__this_00->fields).search,pGVar2);
    if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(footer,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSections
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSections (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, bool deferSections, const MethodInfo* method);
// 0x4204e20

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSections
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,bool_conflict deferSections,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  Il2CppObject *__this_00;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  int iVar5;
  
  if (DAT_05705008 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildSections_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass28_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"DeferredSidePanelSections");
    il2cpp_init_method_metadata(&"-scroll");
    il2cpp_init_method_metadata(&"-deferred-sections");
    DAT_05705008 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass28_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].monitor = __this;
    il2cpp_runtime_glue(&__this_00[1].monitor,__this);
    if ((char)deferSections == '\0') {
      pGVar1 = (__this->fields)._sections;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
        iVar5 = (int)pGVar1->max_length;
        *(int *)&__this_00[1].klass = iVar5;
        if (0 < iVar5) {
          iVar5 = 0;
          do {
            Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
                      (__this,content,iVar5,method);
            iVar5 = iVar5 + 1;
          } while (iVar5 < *(int *)&__this_00[1].klass);
        }
        return;
      }
    }
    else {
      *(undefined4 *)&__this_00[1].klass = 0;
      build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      pSVar2 = System_String__Concat((__this->fields)._id,"-scroll",(MethodInfo *)0x0);
      if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__BuildDetached
                           (content,build,pSVar2,(MethodInfo *)0x0);
        if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          return;
        }
        if (pGVar3->max_length == 0) {
          return;
        }
        __this_01 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                    il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_01->fields).type = "DeferredSidePanelSections";
          il2cpp_runtime_glue(&__this_01->fields);
          pSVar2 = System_String__Concat((__this->fields)._id,"-deferred-sections",(MethodInfo *)0x0);
          (__this_01->fields).id = pSVar2;
          il2cpp_runtime_glue(&(__this_01->fields).id,pSVar2);
          *(undefined1 *)((long)&(__this_01->fields).hasIcon + 2) = 1;
          (__this_01->fields).steps =
               (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)pGVar3;
          il2cpp_runtime_glue(&(__this_01->fields).steps,pGVar3);
          width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0
                              ,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
          (__this_01->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar4;
          il2cpp_runtime_glue(&(__this_01->fields).search,pGVar4);
          Gisketch_Aottg2UI_Code_AottgUi__Add(content,__this_01,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$BuildSection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* content, int32_t index, const MethodInfo* method);
// 0x4205100

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__BuildSection
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *content,int32_t index,MethodInfo *method)

{
  System_Action_AottgUi__AottgScreenSectionContext__o **ppSVar1;
  System_String_o **ppSVar2;
  uint uVar3;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar4;
  System_String_o *str2;
  System_String_o *value;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  undefined4 uVar14;
  undefined4 uVar15;
  undefined4 uVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  int iVar21;
  bool_conflict bVar22;
  Il2CppObject *__this_00;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar23;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar24;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar25;
  long lVar26;
  MethodInfo *method_00;
  Il2CppClass *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  void **local_40;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_38;
  
  if (DAT_05705009 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenWithBrushSidePanel);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildSection_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass29_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"Stretch");
    il2cpp_init_method_metadata(&"fade");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"section");
    DAT_05705009 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass29_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 1,__this);
    if (index < 0) {
      return;
    }
    pGVar4 = (__this->fields)._sections;
    if (pGVar4 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      uVar3 = (uint)pGVar4->max_length;
      if ((int)uVar3 <= index) {
        return;
      }
      local_38 = content;
      if (uVar3 <= (uint)index) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar26 = (long)index;
      local_40 = &__this_00[1].monitor;
      ppSVar1 = &pGVar4->m_Items[0].fields._buildContent + lVar26 * 9;
      uVar5 = *(undefined4 *)ppSVar1;
      uVar6 = *(undefined4 *)((long)ppSVar1 + 4);
      uVar7 = *(undefined4 *)(ppSVar1 + 1);
      uVar8 = *(undefined4 *)((long)ppSVar1 + 0xc);
      ppSVar2 = &pGVar4->m_Items[0].fields.Id + lVar26 * 9;
      uVar9 = *(undefined4 *)ppSVar2;
      uVar10 = *(undefined4 *)((long)ppSVar2 + 4);
      uVar11 = *(undefined4 *)(ppSVar2 + 1);
      uVar12 = *(undefined4 *)((long)ppSVar2 + 0xc);
      ppSVar2 = &pGVar4->m_Items[0].fields.TextKey + lVar26 * 9;
      uVar13 = *(undefined4 *)ppSVar2;
      uVar14 = *(undefined4 *)((long)ppSVar2 + 4);
      uVar15 = *(undefined4 *)(ppSVar2 + 1);
      uVar16 = *(undefined4 *)((long)ppSVar2 + 0xc);
      ppSVar2 = &pGVar4->m_Items[0].fields.SearchTitle + lVar26 * 9;
      uVar17 = *(undefined4 *)ppSVar2;
      uVar18 = *(undefined4 *)((long)ppSVar2 + 4);
      uVar19 = *(undefined4 *)(ppSVar2 + 1);
      uVar20 = *(undefined4 *)((long)ppSVar2 + 0xc);
      __this_00[5].monitor = *(void **)(&pGVar4->m_Items[0].fields.AutoAddKeywords + lVar26 * 0x12);
      *(undefined4 *)&__this_00[4].monitor = uVar17;
      *(undefined4 *)((long)&__this_00[4].monitor + 4) = uVar18;
      *(undefined4 *)&__this_00[5].klass = uVar19;
      *(undefined4 *)((long)&__this_00[5].klass + 4) = uVar20;
      *(undefined4 *)&__this_00[3].monitor = uVar13;
      *(undefined4 *)((long)&__this_00[3].monitor + 4) = uVar14;
      *(undefined4 *)&__this_00[4].klass = uVar15;
      *(undefined4 *)((long)&__this_00[4].klass + 4) = uVar16;
      *(undefined4 *)&__this_00[2].monitor = uVar9;
      *(undefined4 *)((long)&__this_00[2].monitor + 4) = uVar10;
      *(undefined4 *)&__this_00[3].klass = uVar11;
      *(undefined4 *)((long)&__this_00[3].klass + 4) = uVar12;
      *(undefined4 *)&__this_00[1].monitor = uVar5;
      *(undefined4 *)((long)&__this_00[1].monitor + 4) = uVar6;
      *(undefined4 *)&__this_00[2].klass = uVar7;
      *(undefined4 *)((long)&__this_00[2].klass + 4) = uVar8;
      il2cpp_runtime_glue(local_40,0);
      pSVar23 = (__this->fields)._id;
      str2 = __this_00[2].monitor;
      value = __this_00[4].monitor;
      local_58 = (System_String_o *)0x0;
      uStack_50 = (System_String_o *)0x0;
      local_68 = (Il2CppClass *)0x0;
      uStack_60 = 0;
      iVar21 = index * 10 + 0x1e;
      if (DAT_05704ffe == '\0') {
        il2cpp_init_method_metadata(&"-");
        DAT_05704ffe = '\x01';
      }
      local_68 = (Il2CppClass *)System_String__Concat(pSVar23,"-",str2,(MethodInfo *)0x0);
      il2cpp_runtime_glue(&local_68,local_68);
      local_58 = str2;
      il2cpp_runtime_glue(&local_58);
      bVar22 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      uStack_50 = value;
      if ((char)bVar22 != '\0') {
        uStack_50 = str2;
      }
      il2cpp_runtime_glue(&uStack_50,uStack_50);
      uStack_60 = CONCAT44(uStack_60._4_4_,iVar21);
      *(undefined4 *)&__this_00[7].klass = (undefined4)local_58;
      *(undefined4 *)((long)&__this_00[7].klass + 4) = local_58._4_4_;
      *(undefined4 *)&__this_00[7].monitor = (undefined4)uStack_50;
      *(undefined4 *)((long)&__this_00[7].monitor + 4) = uStack_50._4_4_;
      __this_00[6].klass = local_68;
      *(int *)&__this_00[6].monitor = iVar21;
      *(undefined4 *)((long)&__this_00[6].monitor + 4) = uStack_60._4_4_;
      il2cpp_runtime_glue(__this_00 + 6,0);
      build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      pSVar23 = __this_00[2].monitor;
      if (DAT_05705010 == '\0') {
        il2cpp_init_method_metadata(&"-section-");
        DAT_05705010 = '\x01';
      }
      pSVar23 = System_String__Concat((__this->fields)._id,"-section-",pSVar23,(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(1120.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                          (System_String_o *)0x0,12.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
      if (local_38 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        method_00 = "default";
        node = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (local_38,(System_String_o *)"default",build,pSVar23,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                         );
        if (*(int *)(TypeInfo_AottgScreenWithBrushSidePanel + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion
                  (node,method_00);
        pGVar24 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                            ("fade",(System_String_o *)0x0,0.15,0.0,0.0,index,
                             (MethodInfo *)0x0);
        if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (node->fields).motion = pGVar24;
          il2cpp_runtime_glue(&(node->fields).motion,pGVar24);
          pGVar25 = Gisketch_Aottg2UI_Code_AottgUi__Search
                              (local_40[6],local_40[7],(uint)*(byte *)((long)local_40 + 0x41),
                               local_40[5],"section",local_40[2],local_40[6],
                               (uint)*(byte *)(local_40 + 8),(MethodInfo *)0x0);
          (node->fields).popover = (System_String_o *)pGVar25;
          il2cpp_runtime_glue(&(node->fields).popover,pGVar25);
          *(bool *)((long)&(node->fields).hasIcon + 2) =
               index == 0 || (__this->fields)._layoutMode == 0;
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ClearSectionEnterMotion
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x42055c0

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_0570500a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenWithBrushSidePanel);
    DAT_0570500a = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return;
  }
  pGVar1 = (node->fields).contentLayout;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).alignItems,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto LAB_0420561c;
  }
  (node->fields).motion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  method_00 = (MethodInfo *)0x0;
  il2cpp_runtime_glue(&(node->fields).motion);
LAB_0420561c:
  nodes = (node->fields).deferredChildren;
  if (*(int *)(TypeInfo_AottgScreenWithBrushSidePanel + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion(nodes,method_00);
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion
            ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)(node->fields).steps,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ClearSectionEnterMotion
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* nodes, const MethodInfo* method);
// 0x4205660

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *nodes,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  ulong uVar2;
  
  if (DAT_0570500b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgScreenWithBrushSidePanel);
    DAT_0570500b = '\x01';
  }
  if ((nodes == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) ||
     ((int)nodes->max_length < 1)) {
    return;
  }
  uVar2 = 0;
  if ((nodes->max_length & 0xffffffff) != 0) {
    do {
      node = nodes->m_Items[uVar2];
      if (*(int *)(TypeInfo_AottgScreenWithBrushSidePanel + 0xe4) == 0) {
        il2cpp_init_class();
      }
      Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ClearSectionEnterMotion(node,method);
      uVar2 = uVar2 + 1;
      uVar1 = (uint)nodes->max_length;
      if ((long)(int)uVar1 <= (long)uVar2) {
        return;
      }
    } while (uVar2 < uVar1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$ShouldDeferSections
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ShouldDeferSections (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, const MethodInfo* method);
// 0x4204710

bool_conflict
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__ShouldDeferSections
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar1;
  bool_conflict bVar2;
  
  if (DAT_0570500c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    DAT_0570500c = '\x01';
  }
  if ((char)(__this->fields)._deferScrollSections != '\0') {
    if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return 0;
    }
    if ((__this->fields)._layoutMode == 0) {
      pGVar1 = (__this->fields)._sections;
      if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
        return (uint)(1 < (int)pGVar1->max_length);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$AddSectionHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddSectionHeader (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, Gisketch_Aottg2UI_Game_AottgScreenSection_o section, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x4205700

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__AddSectionHeader
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,
               Gisketch_Aottg2UI_Game_AottgScreenSection_o section,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *__this_00;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  undefined4 local_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 local_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (DAT_0570500d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__AddSectionHeader_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass33_0);
    il2cpp_init_method_metadata(&"SpaceBetween");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"header");
    il2cpp_init_method_metadata(&"-row");
    DAT_0570500d = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass33_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[5].klass = (Il2CppClass *)section.fields._64_8_;
    local_78 = section.fields._buildContent._0_4_;
    uStack_74 = section.fields._buildContent._4_4_;
    uStack_70 = section.fields._buildHeaderActions._0_4_;
    uStack_6c = section.fields._buildHeaderActions._4_4_;
    local_68 = section.fields.Id._0_4_;
    uStack_64 = section.fields.Id._4_4_;
    uStack_60 = section.fields.Label._0_4_;
    uStack_5c = section.fields.Label._4_4_;
    local_58 = section.fields.TextKey._0_4_;
    uStack_54 = section.fields.TextKey._4_4_;
    uStack_50 = section.fields.Icon._0_4_;
    uStack_4c = section.fields.Icon._4_4_;
    local_48 = section.fields.SearchTitle._0_4_;
    uStack_44 = section.fields.SearchTitle._4_4_;
    uStack_40 = section.fields.Keywords._0_4_;
    uStack_3c = section.fields.Keywords._4_4_;
    *(undefined4 *)&__this_00[4].klass = local_48;
    *(undefined4 *)((long)&__this_00[4].klass + 4) = uStack_44;
    *(undefined4 *)&__this_00[4].monitor = uStack_40;
    *(undefined4 *)((long)&__this_00[4].monitor + 4) = uStack_3c;
    *(undefined4 *)&__this_00[3].klass = local_58;
    *(undefined4 *)((long)&__this_00[3].klass + 4) = uStack_54;
    *(undefined4 *)&__this_00[3].monitor = uStack_50;
    *(undefined4 *)((long)&__this_00[3].monitor + 4) = uStack_4c;
    *(undefined4 *)&__this_00[2].klass = local_68;
    *(undefined4 *)((long)&__this_00[2].klass + 4) = uStack_64;
    *(undefined4 *)&__this_00[2].monitor = uStack_60;
    *(undefined4 *)((long)&__this_00[2].monitor + 4) = uStack_5c;
    *(undefined4 *)&__this_00[1].klass = local_78;
    *(undefined4 *)((long)&__this_00[1].klass + 4) = uStack_74;
    *(undefined4 *)&__this_00[1].monitor = uStack_70;
    *(undefined4 *)((long)&__this_00[1].monitor + 4) = uStack_6c;
    il2cpp_runtime_glue(__this_00 + 1,0);
    __this_00[5].monitor = __this;
    il2cpp_runtime_glue(&__this_00[5].monitor,__this);
    *(int32_t *)&__this_00[7].klass = context.fields._order;
    *(undefined4 *)((long)&__this_00[7].klass + 4) = context.fields._12_4_;
    *(undefined4 *)&__this_00[7].monitor = context.fields._SectionId_k__BackingField._0_4_;
    *(undefined4 *)((long)&__this_00[7].monitor + 4) =
         context.fields._SectionId_k__BackingField._4_4_;
    *(bool_conflict *)&__this_00[6].klass = section.fields.HideHeader;
    *(undefined4 *)((long)&__this_00[6].klass + 4) = section.fields._76_4_;
    *(undefined4 *)&__this_00[6].monitor = context.fields._group._0_4_;
    *(undefined4 *)((long)&__this_00[6].monitor + 4) = context.fields._group._4_4_;
    il2cpp_runtime_glue(__this_00 + 6,0);
    if (*(char *)((long)&__this_00[5].klass + 2) != '\0') {
      return;
    }
    if (__this_00[1].monitor == (void *)0x0) {
      pIVar1 = __this_00[2].klass;
      pSVar2 = __this_00[2].monitor;
      if (DAT_05705011 == '\0') {
        il2cpp_init_method_metadata(&"-header");
        DAT_05705011 = '\x01';
      }
      if (DAT_05705010 == '\0') {
        il2cpp_init_method_metadata(&"-section-");
        DAT_05705010 = '\x01';
      }
      pSVar3 = System_String__Concat
                         ((__this->fields)._id,"-section-",(System_String_o *)pIVar1,
                          (MethodInfo *)0x0);
      pSVar3 = System_String__Concat(pSVar3,"-header",(MethodInfo *)0x0);
      if (DAT_05704fff == '\0') {
        il2cpp_init_method_metadata(&"slideLeft");
        DAT_05704fff = '\x01';
      }
      enter = Gisketch_Aottg2UI_Code_AottgUi__Motion
                        ("slideLeft",(System_String_o *)__this_00[6].klass,0.12,0.01,0.018,
                         *(int32_t *)&__this_00[6].monitor,(MethodInfo *)0x0);
      if ((panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) &&
         (pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                             (panel,pSVar2,"header",pSVar3,(System_String_o *)0x0,enter,
                              (MethodInfo *)0x0),
         pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        (pGVar4->fields).textKey = (System_String_o *)__this_00[3].klass;
        il2cpp_runtime_glue(&(pGVar4->fields).textKey);
        return;
      }
    }
    else {
      build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      pIVar1 = __this_00[2].klass;
      if (DAT_05705011 == '\0') {
        il2cpp_init_method_metadata(&"-header");
        DAT_05705011 = '\x01';
      }
      if (DAT_05705010 == '\0') {
        il2cpp_init_method_metadata(&"-section-");
        DAT_05705010 = '\x01';
      }
      pSVar2 = System_String__Concat
                         ((__this->fields)._id,"-section-",(System_String_o *)pIVar1,
                          (MethodInfo *)0x0);
      pSVar2 = System_String__Concat(pSVar2,"-header",(MethodInfo *)0x0);
      pSVar2 = System_String__Concat(pSVar2,"-row",(MethodInfo *)0x0);
      width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row","SpaceBetween","Center",(System_String_o *)0x0,
                          (System_String_o *)0x0,16.0,width,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Panel
                  (panel,"default",build,pSVar2,layout,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionIds
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, const MethodInfo* method);
// 0x42041d0

System_String_array *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionIds
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,MethodInfo *method)

{
  uint uVar1;
  System_String_array *pSVar2;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar3;
  ulong uVar4;
  long lVar5;
  System_String_o **ppSVar6;
  
  if (DAT_0570500e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_0570500e = '\x01';
  }
  pGVar3 = (__this->fields)._sections;
  if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    pSVar2 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,(int)pGVar3->max_length);
    pGVar3 = (__this->fields)._sections;
    if (pGVar3 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      if (pSVar2 == (System_String_array *)0x0) {
        if ((int)pGVar3->max_length < 1) {
          return (System_String_array *)0x0;
        }
      }
      else {
        ppSVar6 = pSVar2->m_Items;
        lVar5 = 6;
        uVar4 = 0;
        do {
          uVar1 = (uint)pGVar3->max_length;
          if ((long)(int)uVar1 <= (long)uVar4) {
            return pSVar2;
          }
          if ((uVar1 <= uVar4) || ((uint)pSVar2->max_length <= uVar4)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          *ppSVar6 = *(System_String_o **)((long)pGVar3->m_Items + lVar5 * 8 + -0x20);
          il2cpp_runtime_glue(ppSVar6);
          uVar4 = uVar4 + 1;
          pGVar3 = (__this->fields)._sections;
          ppSVar6 = ppSVar6 + 1;
          lVar5 = lVar5 + 9;
        } while (pGVar3 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionOptions
// il2cpp: Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, const MethodInfo* method);
// 0x42042a0

Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionOptions
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,MethodInfo *method)

{
  undefined8 *puVar1;
  Il2CppClass *pIVar2;
  void *pvVar3;
  Il2CppClass *pIVar4;
  void *pvVar5;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar6;
  System_Action_AottgUi__AottgScreenSectionContext__o *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  System_String_o *pSVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *pGVar14;
  undefined8 uVar15;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *pGVar16;
  Gisketch_Aottg2UI_Game_AottgScreenSection_array *pGVar17;
  Il2CppObject *pIVar18;
  undefined8 uVar19;
  ulong uVar20;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *pGVar21;
  long lVar22;
  Il2CppClass *local_108;
  void *pvStack_100;
  Il2CppClass *pIStack_f8;
  void *pvStack_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  Il2CppClass *local_98;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *local_90;
  Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *local_88;
  void *local_80;
  ulong local_78;
  Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o *local_70;
  undefined8 local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  
  if (DAT_0570500f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext);
    il2cpp_init_method_metadata(&TypeInfo_AottgBrushSidePanelOption);
    il2cpp_init_method_metadata(&MethodInfo_Void__SectionOptions_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass35_0);
    DAT_0570500f = '\x01';
  }
  if ((__this->fields)._sections != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
    pGVar16 = (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)il2cpp_glue_02274930(TypeInfo_AottgBrushSidePanelOption);
    pGVar17 = (__this->fields)._sections;
    if (pGVar17 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
      if (pGVar16 == (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0) {
        if ((int)pGVar17->max_length < 1) {
          return (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_array *)0x0;
        }
        pIVar18 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass35_0);
        System_Object___ctor(pIVar18,(MethodInfo *)0x0);
        pGVar17 = (__this->fields)._sections;
        if (pGVar17 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) {
          if ((int)pGVar17->max_length == 0) {
LAB_042045cc:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          local_98 = *(Il2CppClass **)&pGVar17->m_Items[0].fields.AutoAddKeywords;
          pSVar6 = pGVar17->m_Items[0].fields._buildContent;
          pSVar7 = pGVar17->m_Items[0].fields._buildHeaderActions;
          pSVar8 = pGVar17->m_Items[0].fields.Id;
          pSVar9 = pGVar17->m_Items[0].fields.Label;
          pSVar10 = pGVar17->m_Items[0].fields.TextKey;
          pSVar11 = pGVar17->m_Items[0].fields.Icon;
          pSVar12 = pGVar17->m_Items[0].fields.SearchTitle;
          pSVar13 = pGVar17->m_Items[0].fields.Keywords;
          local_d8 = pSVar6;
          uStack_d0 = pSVar7;
          local_c8 = pSVar8;
          uStack_c0 = pSVar9;
          local_b8 = pSVar10;
          uStack_b0 = pSVar11;
          local_a8 = pSVar12;
          uStack_a0 = pSVar13;
          if (pIVar18 != (Il2CppObject *)0x0) {
            pIVar18[5].klass = local_98;
            local_d8._0_4_ = SUB84(pSVar6,0);
            local_d8._4_4_ = (undefined4)((ulong)pSVar6 >> 0x20);
            uStack_d0._0_4_ = SUB84(pSVar7,0);
            uStack_d0._4_4_ = (undefined4)((ulong)pSVar7 >> 0x20);
            local_c8._0_4_ = SUB84(pSVar8,0);
            local_c8._4_4_ = (undefined4)((ulong)pSVar8 >> 0x20);
            uStack_c0._0_4_ = SUB84(pSVar9,0);
            uStack_c0._4_4_ = (undefined4)((ulong)pSVar9 >> 0x20);
            local_b8._0_4_ = SUB84(pSVar10,0);
            local_b8._4_4_ = (undefined4)((ulong)pSVar10 >> 0x20);
            uStack_b0._0_4_ = SUB84(pSVar11,0);
            uStack_b0._4_4_ = (undefined4)((ulong)pSVar11 >> 0x20);
            local_a8._0_4_ = SUB84(pSVar12,0);
            local_a8._4_4_ = (undefined4)((ulong)pSVar12 >> 0x20);
            uStack_a0._0_4_ = SUB84(pSVar13,0);
            uStack_a0._4_4_ = (undefined4)((ulong)pSVar13 >> 0x20);
            *(undefined4 *)&pIVar18[4].klass = (undefined4)local_a8;
            *(undefined4 *)((long)&pIVar18[4].klass + 4) = local_a8._4_4_;
            *(undefined4 *)&pIVar18[4].monitor = (undefined4)uStack_a0;
            *(undefined4 *)((long)&pIVar18[4].monitor + 4) = uStack_a0._4_4_;
            *(undefined4 *)&pIVar18[3].klass = (undefined4)local_b8;
            *(undefined4 *)((long)&pIVar18[3].klass + 4) = local_b8._4_4_;
            *(undefined4 *)&pIVar18[3].monitor = (undefined4)uStack_b0;
            *(undefined4 *)((long)&pIVar18[3].monitor + 4) = uStack_b0._4_4_;
            *(undefined4 *)&pIVar18[2].klass = (undefined4)local_c8;
            *(undefined4 *)((long)&pIVar18[2].klass + 4) = local_c8._4_4_;
            *(undefined4 *)&pIVar18[2].monitor = (undefined4)uStack_c0;
            *(undefined4 *)((long)&pIVar18[2].monitor + 4) = uStack_c0._4_4_;
            *(undefined4 *)&pIVar18[1].klass = (undefined4)local_d8;
            *(undefined4 *)((long)&pIVar18[1].klass + 4) = local_d8._4_4_;
            *(undefined4 *)&pIVar18[1].monitor = (undefined4)uStack_d0;
            *(undefined4 *)((long)&pIVar18[1].monitor + 4) = uStack_d0._4_4_;
            il2cpp_runtime_glue(pIVar18 + 1,0);
            pIVar2 = pIVar18[2].klass;
            pvVar3 = pIVar18[2].monitor;
            uVar19 = il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
            System_Action<GisketchActionContext>___ctor();
            pIVar4 = pIVar18[3].klass;
            pvVar5 = pIVar18[3].monitor;
            pvStack_f0 = (void *)0x0;
            uStack_e8 = 0;
            pvStack_100 = (void *)0x0;
            pIStack_f8 = (Il2CppClass *)0x0;
            local_e0 = 0;
            local_108 = pIVar2;
            il2cpp_runtime_glue(&local_108,pIVar2);
            pvStack_100 = pvVar3;
            il2cpp_runtime_glue(&pvStack_100,pvVar3);
            pIStack_f8 = pIVar4;
            il2cpp_runtime_glue(&pIStack_f8,pIVar4);
            local_e0 = uVar19;
            il2cpp_runtime_glue(&local_e0,uVar19);
            pvStack_f0 = pvVar5;
            il2cpp_runtime_glue(&pvStack_f0,pvVar5);
            uStack_e8 = 0;
            il2cpp_runtime_glue(&uStack_e8,0);
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
      }
      else {
        pGVar21 = pGVar16->m_Items;
        lVar22 = 0x20;
        uVar20 = 0;
        local_90 = pGVar16;
        local_88 = __this;
        do {
          pGVar14 = local_88;
          if ((long)(int)pGVar17->max_length <= (long)uVar20) {
            return pGVar16;
          }
          pIVar18 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass35_0);
          System_Object___ctor(pIVar18,(MethodInfo *)0x0);
          pGVar17 = (pGVar14->fields)._sections;
          if (pGVar17 == (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0) break;
          if ((uint)pGVar17->max_length <= uVar20) goto LAB_042045cc;
          local_98 = *(Il2CppClass **)((long)&pGVar17->m_Items[0].fields.TextKey + lVar22);
          puVar1 = (undefined8 *)((long)pGVar17->m_Items + lVar22 + -0x20);
          pSVar6 = (System_Action_AottgUi__AottgScreenSectionContext__o *)*puVar1;
          pSVar7 = (System_Action_AottgUi__AottgScreenSectionContext__o *)puVar1[1];
          puVar1 = (undefined8 *)((long)pGVar17->m_Items + lVar22 + -0x10);
          pSVar8 = (System_String_o *)*puVar1;
          pSVar9 = (System_String_o *)puVar1[1];
          puVar1 = (undefined8 *)((long)&pGVar17->m_Items[0].fields._buildContent + lVar22);
          pSVar10 = (System_String_o *)*puVar1;
          pSVar11 = (System_String_o *)puVar1[1];
          puVar1 = (undefined8 *)((long)&pGVar17->m_Items[0].fields.Id + lVar22);
          pSVar12 = (System_String_o *)*puVar1;
          pSVar13 = (System_String_o *)puVar1[1];
          local_d8 = pSVar6;
          uStack_d0 = pSVar7;
          local_c8 = pSVar8;
          uStack_c0 = pSVar9;
          local_b8 = pSVar10;
          uStack_b0 = pSVar11;
          local_a8 = pSVar12;
          uStack_a0 = pSVar13;
          local_78 = uVar20;
          local_70 = pGVar21;
          if (pIVar18 == (Il2CppObject *)0x0) break;
          pIVar18[5].klass = local_98;
          local_d8._0_4_ = SUB84(pSVar6,0);
          local_d8._4_4_ = (undefined4)((ulong)pSVar6 >> 0x20);
          uStack_d0._0_4_ = SUB84(pSVar7,0);
          uStack_d0._4_4_ = (undefined4)((ulong)pSVar7 >> 0x20);
          local_c8._0_4_ = SUB84(pSVar8,0);
          local_c8._4_4_ = (undefined4)((ulong)pSVar8 >> 0x20);
          uStack_c0._0_4_ = SUB84(pSVar9,0);
          uStack_c0._4_4_ = (undefined4)((ulong)pSVar9 >> 0x20);
          local_b8._0_4_ = SUB84(pSVar10,0);
          local_b8._4_4_ = (undefined4)((ulong)pSVar10 >> 0x20);
          uStack_b0._0_4_ = SUB84(pSVar11,0);
          uStack_b0._4_4_ = (undefined4)((ulong)pSVar11 >> 0x20);
          local_a8._0_4_ = SUB84(pSVar12,0);
          local_a8._4_4_ = (undefined4)((ulong)pSVar12 >> 0x20);
          uStack_a0._0_4_ = SUB84(pSVar13,0);
          uStack_a0._4_4_ = (undefined4)((ulong)pSVar13 >> 0x20);
          *(undefined4 *)&pIVar18[4].klass = (undefined4)local_a8;
          *(undefined4 *)((long)&pIVar18[4].klass + 4) = local_a8._4_4_;
          *(undefined4 *)&pIVar18[4].monitor = (undefined4)uStack_a0;
          *(undefined4 *)((long)&pIVar18[4].monitor + 4) = uStack_a0._4_4_;
          *(undefined4 *)&pIVar18[3].klass = (undefined4)local_b8;
          *(undefined4 *)((long)&pIVar18[3].klass + 4) = local_b8._4_4_;
          *(undefined4 *)&pIVar18[3].monitor = (undefined4)uStack_b0;
          *(undefined4 *)((long)&pIVar18[3].monitor + 4) = uStack_b0._4_4_;
          *(undefined4 *)&pIVar18[2].klass = (undefined4)local_c8;
          *(undefined4 *)((long)&pIVar18[2].klass + 4) = local_c8._4_4_;
          *(undefined4 *)&pIVar18[2].monitor = (undefined4)uStack_c0;
          *(undefined4 *)((long)&pIVar18[2].monitor + 4) = uStack_c0._4_4_;
          *(undefined4 *)&pIVar18[1].klass = (undefined4)local_d8;
          *(undefined4 *)((long)&pIVar18[1].klass + 4) = local_d8._4_4_;
          *(undefined4 *)&pIVar18[1].monitor = (undefined4)uStack_d0;
          *(undefined4 *)((long)&pIVar18[1].monitor + 4) = uStack_d0._4_4_;
          il2cpp_runtime_glue(pIVar18 + 1,0);
          pIVar2 = pIVar18[2].klass;
          pvVar3 = pIVar18[2].monitor;
          uVar19 = il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext);
          System_Action<GisketchActionContext>___ctor();
          pIVar4 = pIVar18[3].klass;
          local_80 = pIVar18[3].monitor;
          pvStack_f0 = (void *)0x0;
          uStack_e8 = 0;
          pvStack_100 = (void *)0x0;
          pIStack_f8 = (Il2CppClass *)0x0;
          local_e0 = 0;
          local_108 = pIVar2;
          il2cpp_runtime_glue(&local_108,pIVar2);
          pvStack_100 = pvVar3;
          il2cpp_runtime_glue(&pvStack_100,pvVar3);
          pIStack_f8 = pIVar4;
          il2cpp_runtime_glue(&pIStack_f8,pIVar4);
          local_e0 = uVar19;
          il2cpp_runtime_glue(&local_e0,uVar19);
          pvStack_f0 = local_80;
          il2cpp_runtime_glue(&pvStack_f0);
          uStack_e8 = 0;
          il2cpp_runtime_glue(&uStack_e8);
          pGVar16 = local_90;
          local_48 = uStack_e8;
          uVar19 = local_48;
          uStack_40 = local_e0;
          uVar15 = uStack_40;
          local_58 = pIStack_f8;
          pIVar4 = local_58;
          uStack_50 = pvStack_f0;
          pvVar5 = uStack_50;
          local_68 = local_108;
          pIVar2 = local_68;
          uStack_60 = pvStack_100;
          pvVar3 = uStack_60;
          if ((uint)local_90->max_length <= local_78) goto LAB_042045cc;
          uVar20 = local_78 + 1;
          lVar22 = lVar22 + 0x48;
          local_68._0_4_ = SUB84(local_108,0);
          local_68._4_4_ = (undefined4)((ulong)local_108 >> 0x20);
          uStack_60._0_4_ = SUB84(pvStack_100,0);
          uStack_60._4_4_ = (undefined4)((ulong)pvStack_100 >> 0x20);
          local_58._0_4_ = SUB84(pIStack_f8,0);
          local_58._4_4_ = (undefined4)((ulong)pIStack_f8 >> 0x20);
          uStack_50._0_4_ = SUB84(pvStack_f0,0);
          uStack_50._4_4_ = (undefined4)((ulong)pvStack_f0 >> 0x20);
          local_48._0_4_ = (undefined4)uStack_e8;
          local_48._4_4_ = (undefined4)((ulong)uStack_e8 >> 0x20);
          uStack_40._0_4_ = (undefined4)local_e0;
          uStack_40._4_4_ = (undefined4)((ulong)local_e0 >> 0x20);
          *(undefined4 *)&(local_70->fields).ActionId = (undefined4)local_48;
          *(undefined4 *)((long)&(local_70->fields).ActionId + 4) = local_48._4_4_;
          *(undefined4 *)&(local_70->fields).Action = (undefined4)uStack_40;
          *(undefined4 *)((long)&(local_70->fields).Action + 4) = uStack_40._4_4_;
          *(undefined4 *)&(local_70->fields).TextKey = (undefined4)local_58;
          *(undefined4 *)((long)&(local_70->fields).TextKey + 4) = local_58._4_4_;
          *(undefined4 *)&(local_70->fields).Icon = (undefined4)uStack_50;
          *(undefined4 *)((long)&(local_70->fields).Icon + 4) = uStack_50._4_4_;
          *(undefined4 *)&(local_70->fields)._id = (undefined4)local_68;
          *(undefined4 *)((long)&(local_70->fields)._id + 4) = local_68._4_4_;
          *(undefined4 *)&(local_70->fields).Label = (undefined4)uStack_60;
          *(undefined4 *)((long)&(local_70->fields).Label + 4) = uStack_60._4_4_;
          pGVar21 = local_70 + 1;
          local_68 = pIVar2;
          uStack_60 = pvVar3;
          local_58 = pIVar4;
          uStack_50 = pvVar5;
          local_48 = uVar19;
          uStack_40 = uVar15;
          il2cpp_runtime_glue(local_70);
          pGVar17 = (local_88->fields)._sections;
        } while (pGVar17 != (Gisketch_Aottg2UI_Game_AottgScreenSection_array *)0x0);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionRootId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionRootId (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x4205570

System_String_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionRootId
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,System_String_o *sectionId
          ,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05705010 == '\0') {
    il2cpp_init_method_metadata(&"-section-");
    DAT_05705010 = '\x01';
  }
  pSVar1 = System_String__Concat((__this->fields)._id,"-section-",sectionId,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionHeaderId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionHeaderId (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x4205b30

System_String_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionHeaderId
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,System_String_o *sectionId
          ,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05705011 == '\0') {
    il2cpp_init_method_metadata(&"-header");
    DAT_05705011 = '\x01';
  }
  if (DAT_05705010 == '\0') {
    il2cpp_init_method_metadata(&"-section-");
    DAT_05705010 = '\x01';
  }
  pSVar1 = System_String__Concat((__this->fields)._id,"-section-",sectionId,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,"-header",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$SectionBodyId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionBodyId (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x4205bc0

System_String_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__SectionBodyId
          (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,System_String_o *sectionId
          ,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05705012 == '\0') {
    il2cpp_init_method_metadata(&"-body");
    DAT_05705012 = '\x01';
  }
  if (DAT_05705010 == '\0') {
    il2cpp_init_method_metadata(&"-section-");
    DAT_05705010 = '\x01';
  }
  pSVar1 = System_String__Concat((__this->fields)._id,"-section-",sectionId,(MethodInfo *)0x0);
  pSVar1 = System_String__Concat(pSVar1,"-body",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$FullScreenAbsolute
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute (const MethodInfo* method);
// 0x4204970

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__FullScreenAbsolute(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05705013 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05705013 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,"Absolute",
                      (System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgScreenWithBrushSidePanel$$<BuildLegacy>b__24_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel___BuildLegacy_b__24_0 (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x4205c40

void Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel__<BuildLegacy>b__24_0
               (Gisketch_Aottg2UI_Game_AottgScreenWithBrushSidePanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)(__this->fields)._sidePanel,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


