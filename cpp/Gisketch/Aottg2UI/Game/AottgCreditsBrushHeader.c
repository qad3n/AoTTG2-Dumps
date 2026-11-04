// Type: Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsBrushHeader.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader___ctor (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o* __this, System_String_o* id, System_String_o* text, const MethodInfo* method);
// 0x1823a8750

void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *__this,System_String_o *id,
               System_String_o *text,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347ceb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"credits-category-header");
    Il2CppMethodInitialized_184347ceb = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    id = "credits-category-header";
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *)0x0) {
    (__this->fields)._id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
    if (text == (System_String_o *)0x0) {
      text = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    (__this->fields)._text = text;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._text,text);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader__Build (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823a8430

void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader__Build
               (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *id;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347cec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_Build_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsCategoryHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184347cec = '\x01';
  }
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_Build_b__3_0,
             (MethodInfo *)0x0);
  id = (__this->fields)._id;
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(64.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column","FlexStart","FlexStart",(System_String_o *)0x0
                      ,(System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,"creditsCategoryHeader",(System_Action_AottgUi__o *)__this_00,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsBrushHeader$$<Build>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader___Build_b__3_0 (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x1823a85c0

void Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader___Build_b__3_0
               (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184347ced == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"creditsCategoryHeaderText");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-text");
    Il2CppMethodInitialized_184347ced = '\x01';
  }
  text = (__this->fields)._text;
  id = System_String__Concat_1969e50((__this->fields)._id,"-text",(MethodInfo *)0x0);
  if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (header,text,"creditsCategoryHeaderText",id,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar1->fields).layout = value;
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).layout,value);
      return;
    }
  }
  ThrowNullReferenceException();
}


