// Type: Gisketch.Aottg2UI.Game.AottgMarqueeText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgMarqueeText.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMarqueeText$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText___cctor (const MethodInfo* method);
// 0x5e867a0

void Gisketch_Aottg2UI_Game_AottgMarqueeText___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_0754885d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeText_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgMarqueeText");
    Il2CppMethodInitialized_0754885d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeText_BuildRuntime,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgMarqueeText",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor (Gisketch_Aottg2UI_Game_AottgMarqueeText_o* __this, System_String_o* id, System_String_o* stateKey, const MethodInfo* method);
// 0x5e856c0

void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor
               (Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this,System_String_o *id,
               System_String_o *stateKey,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._stateKey = stateKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey);
  if (pSVar1 == (System_String_o *)0x0) {
    pSVar1 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._fallback = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fallback);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor (Gisketch_Aottg2UI_Game_AottgMarqueeText_o* __this, System_String_o* id, System_String_o* stateKey, System_String_o* fallback, const MethodInfo* method);
// 0x5e86860

void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor_5d86860
               (Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this,System_String_o *id,
               System_String_o *stateKey,System_String_o *fallback,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._stateKey = stateKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey);
  if (fallback == (System_String_o *)0x0) {
    fallback = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._fallback = fallback;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fallback);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText__Build (Gisketch_Aottg2UI_Game_AottgMarqueeText_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e868e0

void Gisketch_Aottg2UI_Game_AottgMarqueeText__Build
               (Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754885e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgMarqueeText");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_0754885e = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "AottgMarqueeText";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    (__this_00->fields).id = (__this->fields)._id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    (__this_00->fields).text = (__this->fields)._fallback;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
    (__this_00->fields).textKey = (__this->fields)._stateKey;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).textKey);
    (__this_00->fields).style = "text";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = pGVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMarqueeText__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5e86a90

bool Gisketch_Aottg2UI_Game_AottgMarqueeText__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  Gisketch_Aottg2UI_State_GisketchUIState_o *state;
  System_String_o *fallback;
  System_String_o *stateKey;
  MethodInfo *in_RAX;
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  
  if (Il2CppMethodInitialized_0754885f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgMarqueeTextRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    Il2CppMethodInitialized_0754885f = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_
              (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_AottgMarqueeTextRuntime);
    if (((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
        (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
       (__this = (context->fields).Theme, __this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      state = (context->fields).State;
      fallback = (node->fields).text;
      stateKey = (node->fields).textKey;
      style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(__this,(node->fields).style,(MethodInfo *)0x0)
      ;
      if (__this_00 != (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__Setup
                  (__this_00,state,stateKey,fallback,style,(context->fields).Theme,in_RAX);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


