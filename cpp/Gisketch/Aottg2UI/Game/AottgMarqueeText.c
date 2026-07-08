// Type: Gisketch.Aottg2UI.Game.AottgMarqueeText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMarqueeText.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMarqueeText$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText___cctor (const MethodInfo* method);
// 0x4174ec0

void Gisketch_Aottg2UI_Game_AottgMarqueeText___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  
  if (DAT_05704afc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentFactory);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentRegistry);
    il2cpp_init_method_metadata(&"AottgMarqueeText");
    DAT_05704afc = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
           **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)
            il2cpp_runtime_glue(TypeInfo_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgMarqueeText",factory,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor (Gisketch_Aottg2UI_Game_AottgMarqueeText_o* __this, System_String_o* id, System_String_o* stateKey, const MethodInfo* method);
// 0x4173dc0

void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor
               (Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this,System_String_o *id,
               System_String_o *stateKey,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_glue(&__this->fields,id);
  (__this->fields)._stateKey = stateKey;
  il2cpp_runtime_glue(&(__this->fields)._stateKey,stateKey);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText__Build (Gisketch_Aottg2UI_Game_AottgMarqueeText_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x4174f80

void Gisketch_Aottg2UI_Game_AottgMarqueeText__Build
               (Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704afd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"AottgMarqueeText");
    il2cpp_init_method_metadata(&"text");
    DAT_05704afd = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "AottgMarqueeText";
    il2cpp_runtime_glue(&__this_00->fields);
    (__this_00->fields).id = (__this->fields)._id;
    il2cpp_runtime_glue(&(__this_00->fields).id);
    (__this_00->fields).textKey = (__this->fields)._stateKey;
    il2cpp_runtime_glue(&(__this_00->fields).textKey);
    (__this_00->fields).style = "text";
    il2cpp_runtime_glue();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
    (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar1;
    il2cpp_runtime_glue(&(__this_00->fields).search,pGVar1);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMarqueeText__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x4175120

bool_conflict
Gisketch_Aottg2UI_Game_AottgMarqueeText__BuildRuntime
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  System_String_o *stateKey;
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  undefined8 extraout_RAX;
  MethodInfo *in_R9;
  
  if (DAT_05704afe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgMarqueeTextRuntime_AddComponent_AottgMarque);
    il2cpp_init_method_metadata(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    DAT_05704afe = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_RectMask2D_AddComponent_RectMask2D);
    __this_00 = (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)
                UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_AottgMarqueeTextRuntime_AddComponent_AottgMarque);
    if (((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
        (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
       (__this = (context->fields).Theme, __this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0
       )) {
      state = (context->fields).State;
      stateKey = (node->fields).textKey;
      style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                        (__this,(node->fields).style,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__Setup
                  (__this_00,state,stateKey,style,(context->fields).Theme,in_R9);
        return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


