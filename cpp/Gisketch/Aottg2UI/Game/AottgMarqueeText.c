// Type: Gisketch.Aottg2UI.Game.AottgMarqueeText
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgMarqueeText.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgMarqueeText$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText___cctor (const MethodInfo* method);
// 0x1823b5b00

void Gisketch_Aottg2UI_Game_AottgMarqueeText___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeText_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgMarqueeText");
    Il2CppMethodInitialized_184347d2c = '\x01';
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
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgMarqueeText",__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor (Gisketch_Aottg2UI_Game_AottgMarqueeText_o* __this, System_String_o* id, System_String_o* stateKey, const MethodInfo* method);
// 0x1823b5bc0

void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor
               (Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this,System_String_o *id,
               System_String_o *stateKey,MethodInfo *method)

{
  System_String_o *value;
  
  value = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._stateKey = stateKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey,stateKey);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._fallback = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fallback,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor (Gisketch_Aottg2UI_Game_AottgMarqueeText_o* __this, System_String_o* id, System_String_o* stateKey, System_String_o* fallback, const MethodInfo* method);
// 0x1823b5c40

void Gisketch_Aottg2UI_Game_AottgMarqueeText___ctor_23b5c40
               (Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this,System_String_o *id,
               System_String_o *stateKey,System_String_o *fallback,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._stateKey = stateKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey,stateKey);
  if (fallback == (System_String_o *)0x0) {
    fallback = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._fallback = fallback;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fallback,fallback);
  return;
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgMarqueeText__Build (Gisketch_Aottg2UI_Game_AottgMarqueeText_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823b5910

void Gisketch_Aottg2UI_Game_AottgMarqueeText__Build
               (Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184347d2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgMarqueeText");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184347d2d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "AottgMarqueeText";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"AottgMarqueeText");
    pSVar1 = (__this->fields)._id;
    (__this_00->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar1);
    pSVar1 = (__this->fields)._fallback;
    (__this_00->fields).text = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,pSVar1);
    pSVar1 = (__this->fields)._stateKey;
    (__this_00->fields).textKey = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).textKey,pSVar1);
    (__this_00->fields).style = "text";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"text");
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       1.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgMarqueeText$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgMarqueeText__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1823b5750

bool Gisketch_Aottg2UI_Game_AottgMarqueeText__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *__this;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  System_String_o *pSVar3;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347d2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgMarqueeTextRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    Il2CppMethodInitialized_184347d2e = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_
              (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgMarqueeTextRuntime);
    if (((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
        (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
       (pGVar1 = (context->fields).Theme, pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      pGVar2 = (context->fields).State;
      pSVar3 = (node->fields).textKey;
      value = (node->fields).text;
      style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar1,(node->fields).style,(MethodInfo *)0x0)
      ;
      if (__this != (Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_o *)0x0) {
        pGVar1 = (context->fields).Theme;
        if (Il2CppMethodInitialized_184347d2f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_OnStateChanged);
          Il2CppMethodInitialized_184347d2f = '\x01';
        }
        (__this->fields)._state = pGVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._state,pGVar2);
        (__this->fields)._stateKey = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._stateKey,pSVar3);
        if (value == (System_String_o *)0x0) {
          value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        (__this->fields)._fallback = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._fallback,value);
        Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__CreateText(__this,style,pGVar1,(MethodInfo *)0x0);
        if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          pGVar2 = (__this->fields)._state;
          __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
          System_Action_object____ctor
                    (__this_00,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime_OnStateChanged,
                     (MethodInfo *)0x0);
          Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
                    (pGVar2,(System_Action_string__o *)__this_00,(MethodInfo *)0x0);
        }
        pSVar3 = (__this->fields)._fallback;
        if ((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
          pSVar3 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                             ((__this->fields)._state,(__this->fields)._stateKey,pSVar3,(MethodInfo *)0x0);
        }
        Gisketch_Aottg2UI_Game_AottgMarqueeTextRuntime__SetText(__this,pSVar3,(MethodInfo *)0x0);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


