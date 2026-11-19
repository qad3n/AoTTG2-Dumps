// Type: Gisketch.Aottg2UI.Game.AottgPublicProfileHover
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgPublicProfileHover.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___cctor (const MethodInfo* method);
// 0x590c1c0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory(method);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory (const MethodInfo* method);
// 0x590c1d0

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory(MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07545690 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"PublicProfileHover");
    Il2CppMethodInitialized_07545690 = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->static_fields->_registered;
  }
  else {
    cVar1 = *(char *)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover)->static_fields;
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
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover_BuildRuntime,
             (MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"PublicProfileHover",__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->static_fields->_registered = true;
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___ctor (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o* __this, System_String_o* id, System_String_o* accountId, const MethodInfo* method);
// 0x590c300

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover___ctor
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o *__this,System_String_o *id,
               System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._accountId = accountId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._accountId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Build (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x590c340

void Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Build
               (Gisketch_Aottg2UI_Game_AottgPublicProfileHover_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *id;
  System_String_o *accountId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07545691 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    Il2CppMethodInitialized_07545691 = '\x01';
    method = extraout_RDX;
  }
  id = (__this->fields)._id;
  accountId = (__this->fields)._accountId;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    method = extraout_RDX_00;
  }
  node = Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node(id,accountId,method);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Add(ui,node,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$Node
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node (System_String_o* id, System_String_o* accountId, const MethodInfo* method);
// 0x590c3c0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node
          (System_String_o *id,System_String_o *accountId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover_c *method_00;
  
  if (Il2CppMethodInitialized_07545692 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"PublicProfileHover");
    Il2CppMethodInitialized_07545692 = '\x01';
  }
  method_00 = TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
  }
  Gisketch_Aottg2UI_Game_AottgPublicProfileHover__RegisterFactory((MethodInfo *)method_00);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).type = "PublicProfileHover";
  Il2CppCodeGenWriteBarrier(&(__this->fields).type);
  (__this->fields).id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields).id);
  (__this->fields).text = accountId;
  Il2CppCodeGenWriteBarrier(&(__this->fields).text);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  (__this->fields).layout = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgPublicProfileHover$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgPublicProfileHover__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x590c540

bool Gisketch_Aottg2UI_Game_AottgPublicProfileHover__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *pGVar4;
  
  if (Il2CppMethodInitialized_07545693 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgPublicProfileHoverRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545693 = '\x01';
  }
  if ((go != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
     pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
    (*(pUVar2->klass->vtable)._28_set_ignoreLayout.methodPtr)
              (pUVar2,true,(pUVar2->klass->vtable)._28_set_ignoreLayout.method);
    pUVar3 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0);
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
           (pUVar3 = UnityEngine_Transform__get_parent(pUVar3,(MethodInfo *)0x0),
           pUVar3 != (UnityEngine_Transform_o *)0x0)) &&
          (__this = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0)
          , __this != (UnityEngine_GameObject_o *)0x0)) &&
         ((pGVar4 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_AottgPublicProfileHoverRuntime
                              ), node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0 &&
          (pGVar4 != (Gisketch_Aottg2UI_Game_AottgPublicProfileHoverRuntime_o *)0x0)))) {
        (pGVar4->fields)._accountId = (node->fields).text;
        Il2CppCodeGenWriteBarrier(&(pGVar4->fields)._accountId);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


