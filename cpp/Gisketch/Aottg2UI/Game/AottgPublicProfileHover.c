// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHover
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___cctor (const MethodInfo* method);
// 0x181e215c0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory (const MethodInfo* method);
// 0x181e21490

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"PublicProfileHover");
    Il2CppMethodInitialized_184344d1a = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->static_fields->_registered == false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover_BuildRuntime,
               (MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"PublicProfileHover",__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->static_fields->_registered = true;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o* __this, System_String_o* id, System_String_o* accountId, const MethodInfo* method);
// 0x181a291f0

void
Gisketch_Aottg2UI_Game_AottgPublicProfileHover___ctor_1a291f0(Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o* __this, System_String_o* id, System_String_o* accountId, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = qualifiedCppName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,qualifiedCppName);
  (__this->fields)._accountId = declaration;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._accountId,declaration);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Build (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e210b0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Build
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *value;
  System_String_o *value_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_01;
  
  if (Il2CppMethodInitialized_184344d1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    Il2CppMethodInitialized_184344d1b = '\x01';
  }
  value = (__this->fields)._id;
  value_00 = (__this->fields)._accountId;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
  }
  if (Il2CppMethodInitialized_184344d1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"PublicProfileHover");
    Il2CppMethodInitialized_184344d1c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
  }
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this_00->fields).type = "PublicProfileHover";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).type,"PublicProfileHover");
    (__this_00->fields).id = value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).id,value);
    (__this_00->fields).text = value_00;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,value_00);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    value_01 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
    (__this_00->fields).layout = value_01;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout,value_01);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(ui,__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$Node
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node (System_String_o* id, System_String_o* accountId, const MethodInfo* method);
// 0x181e212c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node
          (System_String_o *id,System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_184344d1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"PublicProfileHover");
    Il2CppMethodInitialized_184344d1c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
  }
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "PublicProfileHover";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type,"PublicProfileHover");
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
    (__this->fields).text = accountId;
    Il2CppCodeGenWriteBarrier(&(__this->fields).text,accountId);
    width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                      ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                       0.0,(MethodInfo *)0x0);
    (__this->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).layout,value);
    return __this;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHover__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181e20f70

bool Gisketch_Aottg2UI_Game_AottgPublicProfileHover__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *pGVar4;
  
  if (Il2CppMethodInitialized_184344d1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgPublicProfileHoverRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d1d = '\x01';
  }
  if ((go != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                         ), pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
    (*(pUVar2->klass->vtable)._28_set_ignoreLayout.methodPtr)
              (pUVar2,true,(pUVar2->klass->vtable)._28_set_ignoreLayout.method);
    pUVar3 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return true;
      }
      pUVar3 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      if ((((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
           (pUVar3 = UnityEngine_Transform__GetParent(pUVar3,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
          (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0)
          , __this != (UnityEngine_GameObject_o *)0x0)) &&
         ((pGVar4 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_AottgPublicProfileHoverRuntime
                              ), node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0 &&
          (pGVar4 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0)))) {
        value = (node->fields).text;
        (pGVar4->fields)._accountId = value;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields)._accountId,value);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


