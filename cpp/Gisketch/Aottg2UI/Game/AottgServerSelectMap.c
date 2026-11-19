// Type: Gisketch.Aottg2UI.Game.AottgServerSelectMap
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgServerSelectMap.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgServerSelectMap$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMap___cctor (const MethodInfo* method);
// 0x58d2f70

void Gisketch_Aottg2UI_Game_AottgServerSelectMap___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgServerSelectMap__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMap$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMap__RegisterFactory (const MethodInfo* method);
// 0x58d2f80

void Gisketch_Aottg2UI_Game_AottgServerSelectMap__RegisterFactory(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07545489 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgServerSelectMap");
    Il2CppMethodInitialized_07545489 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap->static_fields->_registered;
  }
  else {
    cVar1 = *(char *)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap)->static_fields;
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
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap_BuildRuntime,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgServerSelectMap",__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgServerSelectMap->static_fields->_registered = true;
  return;
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMap$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMap__Build (Gisketch_Aottg2UI_Game_AottgServerSelectMap_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58d30b0

void Gisketch_Aottg2UI_Game_AottgServerSelectMap__Build
               (Gisketch_Aottg2UI_Game_AottgServerSelectMap_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754548a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgServerSelectMap");
    il2cpp_codegen_initialize_runtime_metadata(&"server-select-map");
    Il2CppMethodInitialized_0754548a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "AottgServerSelectMap";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
    (__this_00->fields).id = "server-select-map";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
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


// Gisketch.Aottg2UI.Game.AottgServerSelectMap$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgServerSelectMap__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x58d3220

bool Gisketch_Aottg2UI_Game_AottgServerSelectMap__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *__this;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar2;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_o UVar4;
  
  if (Il2CppMethodInitialized_0754548b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgServerSelectMapRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonText");
    Il2CppMethodInitialized_0754548b = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgServerSelectMapRuntime);
    if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
       (pGVar1 = (context->fields).Theme, pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      UVar2.fields.b = (float)(int)g_data_01005870;
      UVar2.fields.a = (float)g_data_01005870._4_4_;
      UVar2.fields.r = (float)(int)g_data_01005870;
      UVar2.fields.g = (float)g_data_01005870._4_4_;
      UVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (pGVar1,"text",UVar2,(MethodInfo *)0x0);
      pGVar1 = (context->fields).Theme;
      if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        UVar3.fields.b = (float)(int)g_data_01005870;
        UVar3.fields.a = (float)g_data_01005870._4_4_;
        UVar3.fields.r = (float)(int)g_data_01005870;
        UVar3.fields.g = (float)g_data_01005870._4_4_;
        UVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                          (pGVar1,"primary",UVar3,(MethodInfo *)0x0);
        pGVar1 = (context->fields).Theme;
        if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
          UVar4.fields.b = 1.0;
          UVar4.fields.a = 1.0;
          UVar4.fields.r = 1.0;
          UVar4.fields.g = 1.0;
          method_00 = (MethodInfo *)"buttonText";
          UVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                            (pGVar1,"buttonText",UVar4,(MethodInfo *)0x0);
          if (__this != (Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime_o *)0x0) {
            Gisketch_Aottg2UI_Game_AottgServerSelectMapRuntime__Setup(__this,UVar2,UVar3,UVar4,method_00);
            return true;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgServerSelectMap$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgServerSelectMap___ctor (Gisketch_Aottg2UI_Game_AottgServerSelectMap_o* __this, const MethodInfo* method);
// 0x58d38c0

void Gisketch_Aottg2UI_Game_AottgServerSelectMap___ctor
               (Gisketch_Aottg2UI_Game_AottgServerSelectMap_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  return;
}


