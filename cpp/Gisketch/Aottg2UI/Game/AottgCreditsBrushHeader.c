// Type: Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsBrushHeader.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader___ctor (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o* __this, System_String_o* id, System_String_o* text, const MethodInfo* method);
// 0x416e580

void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *__this,System_String_o *id,
               System_String_o *text,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704abb == '\0') {
    il2cpp_init_method_metadata(&"credits-category-header");
    DAT_05704abb = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    id = "credits-category-header";
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *)0x0) {
    (__this->fields)._id = id;
    il2cpp_runtime_glue(&__this->fields,id);
    if (text == (System_String_o *)0x0) {
      text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    (__this->fields)._text = text;
    il2cpp_runtime_glue(&(__this->fields)._text,text);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader__Build (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x416e620

void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader__Build
               (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *id;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704abc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__Build_b__3_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"creditsCategoryHeader");
    il2cpp_init_method_metadata(&"FlexStart");
    DAT_05704abc = '\x01';
  }
  build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
  System_Action<object>___ctor();
  id = (__this->fields)._id;
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"creditsCategoryHeader",build,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$<Build>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader___Build_b__3_0 (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x416e790

void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader__<Build>b__3_0
               (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  
  if (DAT_05704abd == '\0') {
    il2cpp_init_method_metadata(&"creditsCategoryHeaderText");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"-text");
    DAT_05704abd = '\x01';
  }
  text = (__this->fields)._text;
  id = System_String__Concat((__this->fields)._id,"-text",(MethodInfo *)0x0);
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (header,text,"creditsCategoryHeaderText",id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
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


