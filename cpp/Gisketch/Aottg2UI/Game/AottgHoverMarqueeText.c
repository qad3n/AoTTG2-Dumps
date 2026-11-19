// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeText.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___cctor (const MethodInfo* method);
// 0x5e83dc0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory (const MethodInfo* method);
// 0x5e81ff0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07548840 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgHoverMarqueeText");
    Il2CppMethodInitialized_07548840 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText->static_fields->_registered;
  }
  else {
    cVar1 = *(char *)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText)->static_fields;
  }
  if (cVar1 != '\0') {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_BuildRuntime,(MethodInfo *)0x0)
  ;
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgHoverMarqueeText",__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgHoverMarqueeText->static_fields->_registered = true;
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o* __this, System_String_o* id, System_String_o* text, const MethodInfo* method);
// 0x5e83dd0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___ctor
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o *__this,System_String_o *id,
               System_String_o *text,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._text);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__Build (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e83e30

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__Build
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548841 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgHoverMarqueeText");
    Il2CppMethodInitialized_07548841 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "AottgHoverMarqueeText";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    (__this_00->fields).id = (__this->fields)._id;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
    (__this_00->fields).text = (__this->fields)._text;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
    (__this_00->fields).style = "text";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
    (__this_00->fields).value = "text";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,minWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,1.0
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


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5e83ff0

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
  MethodInfo *method_00;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_07548842 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgHoverMarqueeTextRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_07548842 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent_object_
              (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgHoverMarqueeTextRuntime);
    if (((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
        (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) &&
       (pGVar1 = (context->fields).Theme, pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      method_00 = (MethodInfo *)(node->fields).text;
      style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar1,(node->fields).style,(MethodInfo *)0x0)
      ;
      pGVar1 = (context->fields).Theme;
      bVar3 = System_String__IsNullOrEmpty((node->fields).value,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
        if (bVar3) {
          ppSVar4 = &"text";
        }
        else {
          ppSVar4 = &(node->fields).value;
        }
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText(__this,style,pGVar1,*ppSVar4,method);
        pTVar2 = (__this->fields)._text;
        if (method_00 == (MethodInfo *)0x0) {
          method_00 = (MethodInfo *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                    (pTVar2,(System_String_o *)method_00,(pTVar2->klass->vtable)._66_set_text.method);
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent(__this,method_00);
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,method_00);
          return true;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


