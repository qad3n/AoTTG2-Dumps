// Type: Gisketch.Aottg2UI.Game.AottgBrushButton
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBrushButton.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBrushButton$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushButton___ctor (Gisketch_Aottg2UI_Game_AottgBrushButton_o* __this, Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, System_String_o* style, bool hideSearch, const MethodInfo* method);
// 0x42017a0

void Gisketch_Aottg2UI_Game_AottgBrushButton___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushButton_o *__this,
               Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o option,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,System_String_o *style,
               bool_conflict hideSearch,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  *(undefined4 *)&(__this->fields)._option.fields.ActionId = option.fields.ActionId._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields.ActionId + 4) =
       option.fields.ActionId._4_4_;
  *(undefined4 *)&(__this->fields)._option.fields.Action = option.fields.Action._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields.Action + 4) = option.fields.Action._4_4_;
  *(undefined4 *)&(__this->fields)._option.fields.TextKey = option.fields.TextKey._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields.TextKey + 4) = option.fields.TextKey._4_4_;
  *(undefined4 *)&(__this->fields)._option.fields.Icon = option.fields.Icon._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields.Icon + 4) = option.fields.Icon._4_4_;
  *(undefined4 *)&(__this->fields)._option.fields._id = option.fields._id._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields._id + 4) = option.fields._id._4_4_;
  *(undefined4 *)&(__this->fields)._option.fields.Label = option.fields.Label._0_4_;
  *(undefined4 *)((long)&(__this->fields)._option.fields.Label + 4) = option.fields.Label._4_4_;
  il2cpp_runtime_glue(&__this->fields,0);
  (__this->fields)._enter = enter;
  il2cpp_runtime_glue(&(__this->fields)._enter,enter);
  (__this->fields)._style = style;
  il2cpp_runtime_glue(&(__this->fields)._style,style);
  *(char *)&(__this->fields)._hideSearch = (char)hideSearch;
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushButton$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushButton__Build (Gisketch_Aottg2UI_Game_AottgBrushButton_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4201810

void Gisketch_Aottg2UI_Game_AottgBrushButton__Build
               (Gisketch_Aottg2UI_Game_AottgBrushButton_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_00;
  
  if (DAT_05704fe8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSearchDefinition);
    il2cpp_init_method_metadata(&"UI/Sprites/Elements/Brush");
    DAT_05704fe8 = '\x01';
  }
  pSVar2 = (__this->fields)._option.fields.Label;
  if (pSVar2 == (System_String_o *)0x0) {
    pSVar2 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._option.fields.ActionId,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto LAB_042019bb;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (ui,3,pSVar2,(__this->fields)._option.fields.ActionId,(System_String_o *)0x0,
                        (System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (__this->fields)._option.fields.Icon,(MethodInfo *)0x0);
  }
  else {
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto LAB_042019bb;
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (ui,3,pSVar2,(__this->fields)._option.fields.Action,(System_String_o *)0x0,
                        (System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (__this->fields)._option.fields.Icon,(MethodInfo *)0x0);
  }
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar3->fields).style = (__this->fields)._style;
    il2cpp_runtime_glue(&(pGVar3->fields).style);
    (pGVar3->fields).sprite = "UI/Sprites/Elements/Brush";
    il2cpp_runtime_glue(&(pGVar3->fields).sprite);
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._option.fields.Icon,(MethodInfo *)0x0);
    *(byte *)&(pGVar3->fields).hasIcon = (byte)bVar1 ^ 1;
    (pGVar3->fields).motion = (__this->fields)._enter;
    il2cpp_runtime_glue(&(pGVar3->fields).motion);
    (pGVar3->fields).textKey = (__this->fields)._option.fields.TextKey;
    il2cpp_runtime_glue(&(pGVar3->fields).textKey);
    if ((char)(__this->fields)._hideSearch == '\0') {
      return;
    }
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)
                il2cpp_runtime_glue(TypeInfo_GisketchSearchDefinition);
    Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      *(undefined1 *)((long)&(__this_00->fields).autoAddKeywords + 1) = 1;
      (pGVar3->fields).popover = (System_String_o *)__this_00;
      il2cpp_runtime_glue(&(pGVar3->fields).popover,__this_00);
      return;
    }
  }
LAB_042019bb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


