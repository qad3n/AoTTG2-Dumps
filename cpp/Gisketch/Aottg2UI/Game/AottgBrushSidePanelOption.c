// Type: Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgBrushSidePanelOption.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this, System_String_o* label, System_String_o* actionId, System_String_o* icon, const MethodInfo* method);
// 0x41f9900

void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this,System_String_o *label,
               System_String_o *actionId,System_String_o *icon,MethodInfo *method)

{
  label->klass = (System_String_c *)0x0;
  il2cpp_runtime_glue(label,0);
  label->monitor = actionId;
  il2cpp_runtime_glue(&label->monitor,actionId);
  (label->fields)._stringLength = 0;
  (label->fields)._firstChar = 0;
  *(undefined2 *)&(label->fields).field_0x6 = 0;
  il2cpp_runtime_glue(&label->fields,0);
  label[1].monitor = icon;
  il2cpp_runtime_glue(&label[1].monitor,icon);
  label[1].klass = (System_String_c *)method;
  il2cpp_runtime_glue(label + 1,method);
  label[1].fields._stringLength = 0;
  label[1].fields._firstChar = 0;
  *(undefined2 *)&label[1].fields.field_0x6 = 0;
  il2cpp_runtime_glue(&label[1].fields,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this, System_String_o* id, System_String_o* label, System_String_o* actionId, System_String_o* icon, System_String_o* textKey, const MethodInfo* method);
// 0x4202ed0

void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this,System_String_o *id,
               System_String_o *label,System_String_o *actionId,System_String_o *icon,
               System_String_o *textKey,MethodInfo *method)

{
  id->klass = (System_String_c *)label;
  il2cpp_runtime_glue();
  id->monitor = actionId;
  il2cpp_runtime_glue(&id->monitor,actionId);
  id->fields = (System_String_Fields)method;
  il2cpp_runtime_glue(&id->fields,method);
  id[1].monitor = icon;
  il2cpp_runtime_glue(&id[1].monitor,icon);
  id[1].klass = (System_String_c *)textKey;
  il2cpp_runtime_glue(id + 1,textKey);
  id[1].fields._stringLength = 0;
  id[1].fields._firstChar = 0;
  *(undefined2 *)&id[1].fields.field_0x6 = 0;
  il2cpp_runtime_glue(&id[1].fields,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this, System_String_o* label, System_Action_GisketchActionContext__o* action, System_String_o* icon, const MethodInfo* method);
// 0x4202f50

void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this,System_String_o *label,
               System_Action_GisketchActionContext__o *action,System_String_o *icon,
               MethodInfo *method)

{
  label->klass = (System_String_c *)0x0;
  il2cpp_runtime_glue(label,0);
  label->monitor = action;
  il2cpp_runtime_glue(&label->monitor,action);
  (label->fields)._stringLength = 0;
  (label->fields)._firstChar = 0;
  *(undefined2 *)&(label->fields).field_0x6 = 0;
  il2cpp_runtime_glue(&label->fields,0);
  label[1].fields = (System_String_Fields)icon;
  il2cpp_runtime_glue(&label[1].fields,icon);
  label[1].klass = (System_String_c *)method;
  il2cpp_runtime_glue(label + 1,method);
  label[1].monitor = (void *)0x0;
  il2cpp_runtime_glue(&label[1].monitor,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this, System_String_o* id, System_String_o* label, System_Action_GisketchActionContext__o* action, System_String_o* icon, System_String_o* textKey, const MethodInfo* method);
// 0x4202fe0

void Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption___ctor
               (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this,System_String_o *id,
               System_String_o *label,System_Action_GisketchActionContext__o *action,
               System_String_o *icon,System_String_o *textKey,MethodInfo *method)

{
  id->klass = (System_String_c *)label;
  il2cpp_runtime_glue();
  id->monitor = action;
  il2cpp_runtime_glue(&id->monitor,action);
  id->fields = (System_String_Fields)method;
  il2cpp_runtime_glue(&id->fields,method);
  id[1].fields = (System_String_Fields)icon;
  il2cpp_runtime_glue(&id[1].fields,icon);
  id[1].klass = (System_String_c *)textKey;
  il2cpp_runtime_glue(id + 1,textKey);
  id[1].monitor = (void *)0x0;
  il2cpp_runtime_glue(&id[1].monitor,0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgBrushSidePanelOption$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption__get_Id (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this, const MethodInfo* method);
// 0x4202420

System_String_o *
Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption__get_Id
          (Gisketch_Aottg2UI_Game_AottgBrushSidePanelOption_o __this,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704ff3 == '\0') {
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"-");
    DAT_05704ff3 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((System_String_o *)method->methodPointer,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pSVar2 = (System_String_o *)method->virtualMethodPointer;
    if ((pSVar2 != (System_String_o *)0x0) ||
       (pSVar2 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8),
       pSVar2 != (System_String_o *)0x0)) {
      pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
      if (pSVar2 != (System_String_o *)0x0) {
        pSVar2 = System_String__Replace(pSVar2," ","-",(MethodInfo *)0x0);
        return pSVar2;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (System_String_o *)method->methodPointer;
}


