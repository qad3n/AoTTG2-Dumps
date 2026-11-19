// Type: Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMainMenuTipPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___cctor (const MethodInfo* method);
// 0x58c1e40

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075453e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
    Il2CppMethodInitialized_075453e0 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o* __this, const MethodInfo* method);
// 0x58c1eb0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$<Build>b__7_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__7_0 (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* layer, const MethodInfo* method);
// 0x58c1ec0

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__7_0
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *layer,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  
  if (Il2CppMethodInitialized_075453e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c_Build_b__7_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-tip-panel");
    Il2CppMethodInitialized_075453e1 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
  }
  style = "mainMenuTipPanel";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields;
  __this_00 = pGVar1->__9__7_1;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c_Build_b__7_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields;
    pGVar1->__9__7_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__7_1);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(600.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(200.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,10.0,-10.0,
                      0.0,0.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("mainMenuTipPanel",(System_String_o *)0x0,0.28,0.0,0.0,0x28,(MethodInfo *)0x0);
  if (layer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (layer,style,__this_00,"main-menu-tip-panel",layout,pGVar2,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("mainMenuTipPanel",(System_String_o *)0x0,0.12,0.0,0.0,0,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).exit = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).exit);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel.<>c$$<Build>b__7_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__7_1 (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* tip, const MethodInfo* method);
// 0x58c2100

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c___Build_b__7_1
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *tip,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_075453e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-tip-text");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Sprites/Elements/Brush");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-tip-bg");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenu.tipText");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipText");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_075453e2 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(720.0,(MethodInfo *)0x0);
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Points(240.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Absolute",(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,-80.0,30.0,
                      0.0,1.0,(MethodInfo *)0x0);
  if (tip != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Image
              (tip,"UI/Sprites/Elements/Brush","mainMenuTipBackground","main-menu-tip-bg",pGVar3,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (tip,(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),"mainMenuTipText",
                        "main-menu-tip-text",(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).text = "mainMenu.tipText";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar4->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).bind);
        pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Points(540.0,(MethodInfo *)0x0);
        pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            "Absolute",(System_String_o *)0x0,0.0,pGVar1,pGVar2,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,5.0,10.0,0.0,
                            16.0,0.0,1.0,(MethodInfo *)0x0);
        (pGVar4->fields).layout = pGVar3;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields).layout);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel__Build (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58c1c40

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel__Build
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_075453df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c_Build_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuOverlayBody");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu-tip-layer");
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_075453df = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
  }
  style = "mainMenuOverlayBody";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields;
  __this_00 = pGVar1->__9__7_0;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c_Build_b__7_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_c->static_fields;
    pGVar1->__9__7_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__7_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","FlexEnd","Absolute",
                      (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (ui,style,__this_00,"main-menu-tip-layer",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMainMenuTipPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___ctor (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o* __this, const MethodInfo* method);
// 0x58c1b00

void Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgMainMenuTipPanel_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


