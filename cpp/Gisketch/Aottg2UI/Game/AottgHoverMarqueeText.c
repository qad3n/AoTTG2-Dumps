// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeText
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeText.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___cctor (const MethodInfo* method);
// 0x1823b49c0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory((MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory (const MethodInfo* method);
// 0x1823b4890

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_184347d0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgHoverMarqueeText");
    Il2CppMethodInitialized_184347d0f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText->static_fields->_registered == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_BuildRuntime,
               (MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgHoverMarqueeText",__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText->static_fields->_registered = true;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o* __this, System_String_o* id, System_String_o* text, const MethodInfo* method);
// 0x1823b49d0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___ctor
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o *__this,System_String_o *id,
               System_String_o *text,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._text,text);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__Build (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823b4660

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__Build
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184347d10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgHoverMarqueeText");
    Il2CppMethodInitialized_184347d10 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "AottgHoverMarqueeText";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"AottgHoverMarqueeText");
    pSVar1 = (__this->fields)._id;
    (__this_00->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,pSVar1);
    pSVar1 = (__this->fields)._text;
    (__this_00->fields).text = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,pSVar1);
    (__this_00->fields).style = "text";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,"text");
    (__this_00->fields).value = "text";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value,"text");
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,minWidth,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0,
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


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1823b4500

bool Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_String_o *pSVar4;
  System_String_o *activeColor;
  
  if (Il2CppMethodInitialized_184347d11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgHoverMarqueeTextRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184347d11 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_
              (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgHoverMarqueeTextRuntime);
    if (((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
        (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) &&
       (pGVar1 = (context->fields).Theme, pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      pSVar4 = (node->fields).text;
      style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar1,(node->fields).style,(MethodInfo *)0x0)
      ;
      pGVar1 = (context->fields).Theme;
      bVar3 = System_String__IsNullOrEmpty((node->fields).value,(MethodInfo *)0x0);
      activeColor = "text";
      if (!bVar3) {
        activeColor = (node->fields).value;
      }
      if (__this != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
                  (__this,style,pGVar1,activeColor,(MethodInfo *)0x0);
        pTVar2 = (__this->fields)._text;
        if (pSVar4 == (System_String_o *)0x0) {
          pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                    (pTVar2,pSVar4,(pTVar2->klass->vtable)._66_set_text.method);
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent(__this,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,(MethodInfo *)0x0);
          return true;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


