// Type: Gisketch.Aottg2UI.Game.AottgHoverMarqueeText
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgHoverMarqueeText.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___cctor (const MethodInfo* method);
// 0x4172540

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory (const MethodInfo* method);
// 0x41706e0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__RegisterFactory(MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *factory;
  
  if (DAT_05704adf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_BuildRuntime);
    il2cpp_init_method_metadata(&TypeInfo_AottgHoverMarqueeText);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentFactory);
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentRegistry);
    il2cpp_init_method_metadata(&"AottgHoverMarqueeText");
    DAT_05704adf = '\x01';
    iVar2 = *(int *)(TypeInfo_AottgHoverMarqueeText + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AottgHoverMarqueeText + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = **(char **)(TypeInfo_AottgHoverMarqueeText + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_AottgHoverMarqueeText + 0xb8);
  }
  if (cVar1 != '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
           **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  factory = (Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *)
            il2cpp_runtime_glue(TypeInfo_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor();
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgHoverMarqueeText",factory,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AottgHoverMarqueeText + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined1 **)(TypeInfo_AottgHoverMarqueeText + 0xb8) = 1;
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___ctor (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o* __this, System_String_o* id, System_String_o* text, const MethodInfo* method);
// 0x4172550

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText___ctor
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o *__this,System_String_o *id,
               System_String_o *text,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  il2cpp_runtime_glue(&__this->fields,id);
  if (text == (System_String_o *)0x0) {
    text = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._text = text;
  il2cpp_runtime_glue(&(__this->fields)._text,text);
  return;
}


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__Build (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41725b0

void Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__Build
               (Gisketch_Aottg2UI_Game_AottgHoverMarqueeText_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704ae0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"AottgHoverMarqueeText");
    DAT_05704ae0 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "AottgHoverMarqueeText";
    il2cpp_runtime_glue(&__this_00->fields);
    (__this_00->fields).id = (__this->fields)._id;
    il2cpp_runtime_glue(&(__this_00->fields).id);
    (__this_00->fields).text = (__this->fields)._text;
    il2cpp_runtime_glue(&(__this_00->fields).text);
    (__this_00->fields).style = "text";
    il2cpp_runtime_glue(&(__this_00->fields).style);
    (__this_00->fields).value = "text";
    il2cpp_runtime_glue();
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,minWidth,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgHoverMarqueeText$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x4172780

bool_conflict
Gisketch_Aottg2UI_Game_AottgHoverMarqueeText__BuildRuntime
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  TMPro_TextMeshProUGUI_o *pTVar2;
  bool_conflict bVar3;
  Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *__this;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  undefined8 extraout_RAX;
  MethodInfo *method_00;
  System_String_o **ppSVar4;
  
  if (DAT_05704ae1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_AottgHoverMarqueeTextRuntime_AddComponent_AottgH);
    il2cpp_init_method_metadata(&MethodInfo_RectMask2D_AddComponent_RectMask2D);
    il2cpp_init_method_metadata(&"text");
    DAT_05704ae1 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_RectMask2D_AddComponent_RectMask2D);
    __this = (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)
             UnityEngine_GameObject__AddComponent<object>(go,MethodInfo_AottgHoverMarqueeTextRuntime_AddComponent_AottgH);
    if (((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
        (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)) &&
       (pGVar1 = (context->fields).Theme, pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0
       )) {
      method_00 = (MethodInfo *)(node->fields).text;
      style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                        (pGVar1,(node->fields).style,(MethodInfo *)0x0);
      pGVar1 = (context->fields).Theme;
      bVar3 = System_String__IsNullOrEmpty((node->fields).value,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime_o *)0x0) {
        if ((char)bVar3 == '\0') {
          ppSVar4 = &(node->fields).value;
        }
        else {
          ppSVar4 = (System_String_o **)&"text";
        }
        Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__CreateText
                  (__this,style,pGVar1,*ppSVar4,method);
        pTVar2 = (__this->fields)._text;
        if (method_00 == (MethodInfo *)0x0) {
          method_00 = (MethodInfo *)**(long **)(DAT_057110b0 + 0xb8);
        }
        if (pTVar2 != (TMPro_TextMeshProUGUI_o *)0x0) {
          (*(pTVar2->klass->vtable)._66_set_text.methodPtr)
                    (pTVar2,method_00,(pTVar2->klass->vtable)._66_set_text.method);
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RegisterParent(__this,method_00);
          Gisketch_Aottg2UI_Game_AottgHoverMarqueeTextRuntime__RefreshMarquee(__this,method_00);
          return (bool_conflict)CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


