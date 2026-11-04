// Type: Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgLazySidePanelSectionsRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$get_Prefix
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__get_Prefix (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__get_Prefix(Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, MethodInfo* method)

{
  return (__this->fields)._prefix;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__RegisterFactory (const MethodInfo* method);
// 0x181e2b0c0

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d63 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"LazySidePanelSections");
    Il2CppMethodInitialized_184344d63 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime->static_fields->_registered == false)
  {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_BuildRuntime,
               (MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"LazySidePanelSections",__this_00,(MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime->static_fields->_registered = true;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Select
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Select (UnityEngine_GameObject_o* source, System_String_o* sectionId, const MethodInfo* method);
// 0x181e2b400

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Select
               (UnityEngine_GameObject_o *source,System_String_o *sectionId,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_GameObject_o *source_00;
  
  if (Il2CppMethodInitialized_184344d64 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d64 = '\x01';
  }
  if (Il2CppMethodInitialized_184344d6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d6d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
label_181e2b56c:
    __this = (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0;
  }
  else {
    if (source == (UnityEngine_GameObject_o *)0x0) goto label_181e2b605;
    __this = UnityEngine_GameObject__GetComponentInParent_object__6f5300
                       (source,true,
                        (MethodInfo_6F5300 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_AottgLazySidePanelSectionsRuntime
                       );
    if (__this == (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
      __this = UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                         (source,true,
                          (MethodInfo_6F5110 *)
                          MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AottgLazySidePanelSectionsRuntime
                         );
      if (__this == (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
        pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_181e2b605;
        pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) goto label_181e2b56c;
        pUVar2 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_181e2b605;
        pUVar2 = UnityEngine_Transform__GetRoot(pUVar2,(MethodInfo *)0x0);
        if (pUVar2 == (UnityEngine_Transform_o *)0x0) goto label_181e2b605;
        __this = UnityEngine_Component__GetComponentInChildren_object_
                           ((UnityEngine_Component_o *)pUVar2,true,
                            (MethodInfo_664AA0 *)
                            MethodInfo_UnityEngine_Component_GetComponentInChildren_AottgLazySidePanelSectionsRuntime
                           );
      }
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (__this == (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
label_181e2b605:
      ThrowNullReferenceException();
    }
    bVar1 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_1e2a9f0
                      (__this,sectionId,true,(MethodInfo *)0x0);
    if (bVar1) {
      source_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
      }
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select(source_00,sectionId,false,(MethodInfo *)0x0);
      return true;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Invalidate
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Invalidate (UnityEngine_GameObject_o* root, System_String_o* prefix, System_String_o* sectionId, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* replacement, const MethodInfo* method);
// 0x181e2aef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2afac: nop dword ptr [rax]

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Invalidate
               (UnityEngine_GameObject_o *root,System_String_o *prefix,System_String_o *sectionId,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *replacement,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar3;
  uint uVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__this;
  
  if (Il2CppMethodInitialized_184344d65 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d65 = '\x01';
  }
  if (Il2CppMethodInitialized_184344d6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d6e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_181e2b069;
    pUVar3 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                       (root,true,
                        (MethodInfo_6F5750 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_AottgLazySidePanelSectionsRuntime
                       );
    if (pUVar3 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) goto label_181e2b069;
    for (uVar4 = 0; (int)uVar4 < (int)pUVar3->max_length; uVar4 = uVar4 + 1) {
      if ((uint)pUVar3->max_length <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      __this = (&pUVar3->m_Items[0].klass)[(int)uVar4];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (__this == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) goto label_181e2b069;
        bVar1 = System_String__Equals_196c550((__this->_1).byval_arg.data,prefix,5,(MethodInfo *)0x0);
        if (bVar1) goto label_181e2b012;
      }
    }
  }
  __this = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0;
label_181e2b012:
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  bVar1 = false;
  if (bVar2) {
    if (__this == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) {
label_181e2b069:
      ThrowNullReferenceException();
    }
    bVar1 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ReplaceSection
                      ((Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)__this,sectionId,
                       replacement,(MethodInfo *)0x0);
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181e2a550

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_o **targetAddress;
  System_String_o *value;
  System_String_array *pSVar1;
  bool bVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value_00;
  
  if (Il2CppMethodInitialized_184344d66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d66 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  if ((go != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar3 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                         ), pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
    (*(pUVar3->klass->vtable)._28_set_ignoreLayout.methodPtr)
              (pUVar3,true,(pUVar3->klass->vtable)._28_set_ignoreLayout.method);
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgLazySidePanelSectionsRuntime);
    if (__this != (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
      targetAddress = &(__this->fields)._prefix;
      if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this->fields)._prefix = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(targetAddress,(void *)0x0);
        (__this->fields)._sectionIds = (System_String_array *)0x0;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._sectionIds,(void *)0x0);
        value_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
      }
      else {
        value = (node->fields).value;
        (__this->fields)._prefix = value;
        Il2CppCodeGenWriteBarrier(targetAddress,value);
        pSVar1 = (node->fields).options;
        (__this->fields)._sectionIds = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._sectionIds,pSVar1);
        value_00 = (node->fields).deferredChildren;
      }
      (__this->fields)._sectionNodes = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._sectionNodes,value_00);
      (__this->fields)._context = context;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._context,context);
      (__this->fields)._view = view;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._view,view);
      if ((__this->fields)._sectionIds == (System_String_array *)0x0) {
        return true;
      }
      pSVar1 = (__this->fields)._sectionIds;
      if (pSVar1->max_length == 0) {
        return true;
      }
      if ((int)pSVar1->max_length != 0) {
        Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_1e2a9f0
                  (__this,pSVar1->m_Items[0],false,(MethodInfo *)0x0);
        return true;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Setup (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x181e2b6e0

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_array **targetAddress;
  System_String_array *pSVar1;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value_00;
  
  value = (System_String_o *)0x0;
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    value = (node->fields).value;
  }
  if (__this != (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
    (__this->fields)._prefix = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._prefix,value);
    targetAddress = &(__this->fields)._sectionIds;
    if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this->fields)._sectionIds = (System_String_array *)0x0;
      Il2CppCodeGenWriteBarrier(targetAddress,(void *)0x0);
      value_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    }
    else {
      pSVar1 = (node->fields).options;
      (__this->fields)._sectionIds = pSVar1;
      Il2CppCodeGenWriteBarrier(targetAddress,pSVar1);
      value_00 = (node->fields).deferredChildren;
    }
    (__this->fields)._sectionNodes = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._sectionNodes,value_00);
    (__this->fields)._context = context;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._context,context);
    (__this->fields)._view = view;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._view,view);
    if (((__this->fields)._sectionIds != (System_String_array *)0x0) &&
       (pSVar1 = (__this->fields)._sectionIds, pSVar1->max_length != 0)) {
      if ((int)pSVar1->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_1e2a9f0
                (__this,pSVar1->m_Items[0],false,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Start
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Start (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x181e2b960

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Start
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *sectionId;
  UnityEngine_GameObject_o *source;
  
  if (Il2CppMethodInitialized_184344d67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    Il2CppMethodInitialized_184344d67 = '\x01';
  }
  if (((__this->fields)._sectionIds == (System_String_array *)0x0) ||
     (pSVar1 = (__this->fields)._sectionIds, pSVar1->max_length == 0)) {
    return;
  }
  if ((int)pSVar1->max_length != 0) {
    Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_1e2a9f0
              (__this,pSVar1->m_Items[0],true,(MethodInfo *)0x0);
    source = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._sectionIds;
    if (pSVar1 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)pSVar1->max_length != 0) {
      sectionId = pSVar1->m_Items[0];
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
      }
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select(source,sectionId,true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$EnsureSection
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__EnsureSection (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x181e2ab20

bool
Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__EnsureSection(Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_1e2a9f0
                    (__this,sectionId,true,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$PrimeInitialSection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__PrimeInitialSection (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x181e2b080

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__PrimeInitialSection
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  
  if (((__this->fields)._sectionIds != (System_String_array *)0x0) &&
     (pSVar1 = (__this->fields)._sectionIds, pSVar1->max_length != 0)) {
    if ((int)pSVar1->max_length != 0) {
      Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_1e2a9f0
                (__this,pSVar1->m_Items[0],false,(MethodInfo *)0x0);
      return;
    }
    ThrowIndexOutOfRangeException();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildSection
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x181e2ab20

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,System_String_o *sectionId,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_1e2a9f0
                    (__this,sectionId,true,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildSection
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, bool settle, const MethodInfo* method);
// 0x181e2a9f0
// eh: try 0x181e2aab6..0x181e2aad2 -> pad 0x183315930 catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2aae0: xor edx, edx
// asm:   0x181e2aae2: lea rcx, [rsp + 0x48]
// asm:   0x181e2aae7: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e2aaec: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e2aaf1: test rcx, rcx
// asm:   0x181e2aaf4: jne 0x181e2ab0b
// asm:   0x181e2aaf6: movzx ebx, byte ptr [rsp + 0xb0]
// asm:   0x181e2ab0b: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_1e2a9f0
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,System_String_o *sectionId,
               bool settle,MethodInfo *method)

{
  bool bVar1;
  System_String_o *detail;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_70;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (Il2CppMethodInitialized_184344d68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"LazySidePanel.BuildSection");
    il2cpp_codegen_initialize_runtime_metadata(&":");
    Il2CppMethodInitialized_184344d68 = '\x01';
  }
  local_50.fields._area = (System_String_o *)0x0;
  local_50.fields._detail = (System_String_o *)0x0;
  local_50.fields._startMs._0_4_ = 0;
  local_50.fields._startMs._4_2_ = 0;
  local_50.fields._startMs._6_2_ = 0;
  local_50.fields._enabled = false;
  local_50.fields._hotLoop = false;
  local_50.fields._26_6_ = 0;
  detail = System_String__Concat_1969b70
                     ((__this->fields)._prefix,":",sectionId,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar2 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_70,"LazySidePanel.BuildSection",detail,(MethodInfo *)0x0);
  local_50.fields._area = (pGVar2->fields)._area;
  local_50.fields._detail = (pGVar2->fields)._detail;
  local_50.fields._startMs = (pGVar2->fields)._startMs;
  local_50.fields._enabled = (pGVar2->fields)._enabled;
  local_50.fields._hotLoop = (pGVar2->fields)._hotLoop;
  local_50.fields._26_6_ = *(undefined6 *)&(pGVar2->fields).field_0x1a;
  local_70.fields._area = (System_String_o *)0x0;
  local_70.fields._detail = (System_String_o *)&local_50;
  bVar1 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSectionCore
                    (__this,sectionId,settle,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_50,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildSectionCore
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSectionCore (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, bool settle, const MethodInfo* method);
// 0x181e2a6e0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2a983: jmp 0x181e2a988
// asm:   0x181e2a985: mov rdi, rbx

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSectionCore
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,System_String_o *sectionId,
               bool settle,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  bool bVar3;
  uint uVar4;
  int32_t index;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_UI_ScrollRect_o *x_00;
  UnityEngine_GameObject_o *root;
  
  if (Il2CppMethodInitialized_184344d69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d69 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(sectionId,(MethodInfo *)0x0);
  if (!bVar3) {
    __this_00 = (__this->fields)._built;
    if (__this_00 == (System_Collections_Generic_Dictionary_string__GameObject__o *)0x0) goto label_181e2a9dc;
    bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
                       (Il2CppObject *)sectionId,
                       (MethodInfo_1455450 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ContainsKey);
    if (bVar3) {
      Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ShowOnly(__this,sectionId,(MethodInfo *)0x0);
      return true;
    }
    uVar4 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__IndexOf
                      (__this,sectionId,(MethodInfo *)0x0);
    if ((-1 < (int)uVar4) &&
       ((__this->fields)._sectionNodes != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
      pGVar2 = (__this->fields)._sectionNodes;
      uVar1 = (uint)pGVar2->max_length;
      if ((int)uVar4 < (int)uVar1) {
        if (uVar1 <= uVar4) {
label_181e2a9e2:
          ThrowIndexOutOfRangeException();
        }
        if (pGVar2->m_Items[(int)uVar4] != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
            pUVar5 = UnityEngine_Transform__GetParent(pUVar5,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar3 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pUVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar3) {
              return false;
            }
            pGVar2 = (__this->fields)._sectionNodes;
            if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
              if ((uint)pGVar2->max_length <= uVar4) goto label_181e2a9e2;
              node = pGVar2->m_Items[(int)uVar4];
              context = (__this->fields)._context;
              view = (__this->fields)._view;
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              }
              x = (UnityEngine_Object_o *)
                  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
                            (node,pUVar5,context,view,(MethodInfo *)0x0);
              if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
              }
              bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if (bVar3) {
                return false;
              }
              if (x != (UnityEngine_Object_o *)0x0) {
                pUVar5 = UnityEngine_GameObject__get_transform
                                   ((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
                __this_02 = UnityEngine_Component__get_transform
                                      ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                if ((__this_02 != (UnityEngine_Transform_o *)0x0) &&
                   (index = UnityEngine_Transform__GetSiblingIndex(__this_02,(MethodInfo *)0x0),
                   pUVar5 != (UnityEngine_Transform_o *)0x0)) {
                  UnityEngine_Transform__SetSiblingIndex(pUVar5,index,(MethodInfo *)0x0);
                  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)
                              (__this->fields)._built;
                  if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                    System_Collections_Generic_Dictionary_object__object___set_Item
                              (__this_01,(Il2CppObject *)sectionId,(Il2CppObject *)x,
                               (MethodInfo_147A7F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_set_Item);
                    Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ShowOnly
                              (__this,sectionId,(MethodInfo *)0x0);
                    if (settle) {
                      if (Il2CppMethodInitialized_184344d6c == '\0') {
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
                        il2cpp_codegen_initialize_runtime_metadata
                                  (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
                        Il2CppMethodInitialized_184344d6c = '\x01';
                      }
                      x_00 = UnityEngine_Component__GetComponentInParent_object__664f20
                                       ((UnityEngine_Component_o *)__this,
                                        (MethodInfo_664F20 *)
                                        MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                      }
                      bVar3 = UnityEngine_Object__op_Inequality
                                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,
                                         (MethodInfo *)0x0);
                      if ((bVar3) &&
                         (__this = (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)x_00,
                         x_00 == (UnityEngine_UI_ScrollRect_o *)0x0)) goto label_181e2a9dc;
                      root = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                      }
                      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0
                                (root,1,(MethodInfo *)0x0);
                    }
                    return true;
                  }
                }
              }
            }
          }
label_181e2a9dc:
          ThrowNullReferenceException();
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$ReplaceSection
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ReplaceSection (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* replacement, const MethodInfo* method);
// 0x181e2b1c0

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ReplaceSection
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,System_String_o *sectionId,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *replacement,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  UnityEngine_Object_o *pUVar3;
  bool bVar4;
  bool bVar5;
  uint uVar6;
  UnityEngine_Object_o *local_res10;
  
  if (Il2CppMethodInitialized_184344d6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d6a = '\x01';
  }
  local_res10 = (UnityEngine_Object_o *)0x0;
  uVar6 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__IndexOf
                    (__this,sectionId,(MethodInfo *)0x0);
  if (((int)uVar6 < 0) || (replacement == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    return false;
  }
  pGVar1 = (__this->fields)._sectionNodes;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    if ((uint)pGVar1->max_length <= uVar6) {
      ThrowIndexOutOfRangeException();
    }
    pGVar1->m_Items[(int)uVar6] = replacement;
    Il2CppCodeGenWriteBarrier(pGVar1->m_Items + (int)uVar6,replacement);
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._built;
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar2,(Il2CppObject *)sectionId,(Il2CppObject **)&local_res10,
                         (MethodInfo_14769C0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
      pUVar3 = local_res10;
      if (bVar4) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) {
          if (local_res10 != (UnityEngine_Object_o *)0x0) {
            bVar4 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)local_res10,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._view;
            if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
              Gisketch_Aottg2UI_Building_GisketchView__UnregisterSubtree
                        (__this_00,(UnityEngine_GameObject_o *)local_res10,(MethodInfo *)0x0);
            }
            pUVar3 = local_res10;
            if (Il2CppMethodInitialized_184344d6f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
              Il2CppMethodInitialized_184344d6f = '\x01';
            }
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar5 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (!bVar5) {
              if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
              }
              bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if (bVar5) {
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                UnityEngine_Object__Destroy_2f1ff70(pUVar3,(MethodInfo *)0x0);
              }
              else {
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                UnityEngine_Object__DestroyImmediate_2f1fb90(pUVar3,(MethodInfo *)0x0);
              }
            }
            pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._built;
            if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Remove
                        (pSVar2,(Il2CppObject *)sectionId,
                         (MethodInfo_1470BF0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
              if (!bVar4) {
                return true;
              }
              Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_1e2a9f0
                        (__this,sectionId,true,(MethodInfo *)0x0);
              return true;
            }
          }
          goto label_181e2b3f6;
        }
      }
      return true;
    }
  }
label_181e2b3f6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$ShowOnly
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ShowOnly (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x181e2b7c0
// eh: try 0x181e2b8a0..0x181e2b94d -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2b89f: nop 
// asm:   0x181e2b91f: mov rdx, qword ptr [rip + 0x228f79a]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_Dispose
// asm:   0x181e2b926: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e2b92b: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181e2b930: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e2b935: test rcx, rcx
// asm:   0x181e2b938: jne 0x181e2b94d
// asm:   0x181e2b94d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ShowOnly
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,System_String_o *sectionId,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_00;
  Il2CppObject *a;
  Il2CppObject *x;
  bool bVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_80;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_184344d6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_GameObject_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_GameObject_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d6b = '\x01';
  }
  local_80.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_80.fields._version = 0;
  local_80.fields._index = 0;
  local_80.fields._current.fields.key = (Il2CppObject *)0x0;
  local_80.fields._current.fields.value = (Il2CppObject *)0x0;
  local_80.fields._getEnumeratorRetType = 0;
  local_80.fields._36_4_ = 0;
  __this_00 = (__this->fields)._built;
  if (__this_00 != (System_Collections_Generic_Dictionary_string__GameObject__o *)0x0) {
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_58,(System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_GetEnumerator);
    local_80.fields._dictionary = local_58.fields._dictionary;
    local_80.fields._version = local_58.fields._version;
    local_80.fields._index = local_58.fields._index;
    local_80.fields._current.fields.key = local_58.fields._current.fields.key;
    local_80.fields._current.fields.value = local_58.fields._current.fields.value;
    local_80.fields._getEnumeratorRetType = local_58.fields._getEnumeratorRetType;
    local_80.fields._36_4_ = local_58.fields._36_4_;
    while( true ) {
      do {
        bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (&local_80,
                           (MethodInfo_1585360 *)
                           MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_MoveNext
                          );
        x = local_80.fields._current.fields.value;
        a = local_80.fields._current.fields.key;
        if (!bVar1) {
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_80,
                     MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_Dispose);
          return;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      } while (!bVar1);
      bVar1 = System_String__Equals_196c550((System_String_o *)a,sectionId,5,(MethodInfo *)0x0);
      if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) break;
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,bVar1,(MethodInfo *)0x0);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__IndexOf (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x181e2ae50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2aeb1: jmp 0x181e2ae74

int32_t Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__IndexOf
                  (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,
                  System_String_o *sectionId,MethodInfo *method)

{
  bool bVar1;
  System_String_array *pSVar2;
  uint uVar3;
  
  if ((__this->fields)._sectionIds == (System_String_array *)0x0) {
    return -1;
  }
  pSVar2 = (__this->fields)._sectionIds;
  uVar3 = 0;
  do {
    if ((int)pSVar2->max_length <= (int)uVar3) {
      return -1;
    }
    pSVar2 = (__this->fields)._sectionIds;
    if (pSVar2 == (System_String_array *)0x0) break;
    if ((uint)pSVar2->max_length <= uVar3) {
      ThrowIndexOutOfRangeException();
    }
    bVar1 = System_String__Equals_196c550(pSVar2->m_Items[(int)uVar3],sectionId,5,(MethodInfo *)0x0);
    if (bVar1) {
      return uVar3;
    }
    pSVar2 = (__this->fields)._sectionIds;
    uVar3 = uVar3 + 1;
  } while (pSVar2 != (System_String_array *)0x0);
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Settle
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Settle (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x181e2b610
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2b68e: jmp 0x181e2b693
// asm:   0x181e2b690: mov rbx, rdi

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Settle
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_ScrollRect_o *x;
  UnityEngine_GameObject_o *root;
  
  if (Il2CppMethodInitialized_184344d6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d6c = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__664f20
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_664F20 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((bVar1) &&
     (__this = (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)x,
     x == (UnityEngine_UI_ScrollRect_o *)0x0)) {
    ThrowNullReferenceException();
  }
  root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Find
// il2cpp: Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Find (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x181e2ad10

Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *
Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Find
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *pGVar2;
  UnityEngine_Transform_o *pUVar3;
  
  if (Il2CppMethodInitialized_184344d6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d6d = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)source,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0;
  }
  if (source != (UnityEngine_GameObject_o *)0x0) {
    pGVar2 = UnityEngine_GameObject__GetComponentInParent_object__6f5300
                       (source,true,
                        (MethodInfo_6F5300 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_AottgLazySidePanelSectionsRuntime
                       );
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
      return pGVar2;
    }
    pGVar2 = UnityEngine_GameObject__GetComponentInChildren_object__6f5110
                       (source,true,
                        (MethodInfo_6F5110 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AottgLazySidePanelSectionsRuntime
                       );
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
      return pGVar2;
    }
    pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__GetRoot(pUVar3,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar1) {
        return (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0;
      }
      pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
      if ((pUVar3 != (UnityEngine_Transform_o *)0x0) &&
         (pUVar3 = UnityEngine_Transform__GetRoot(pUVar3,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        pGVar2 = UnityEngine_Component__GetComponentInChildren_object_
                           ((UnityEngine_Component_o *)pUVar3,true,
                            (MethodInfo_664AA0 *)
                            MethodInfo_UnityEngine_Component_GetComponentInChildren_AottgLazySidePanelSectionsRuntime
                           );
        return pGVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Find
// il2cpp: Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Find (UnityEngine_GameObject_o* root, System_String_o* prefix, const MethodInfo* method);
// 0x181e2abf0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e2ace2: mov rax, rdi
// asm:   0x181e2ace5: jmp 0x181e2ace9

Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *
Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Find_1e2abf0
          (UnityEngine_GameObject_o *root,System_String_o *prefix,MethodInfo *method)

{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *x;
  bool bVar1;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344d6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d6e = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((root == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar2 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                           (root,true,
                            (MethodInfo_6F5750 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_AottgLazySidePanelSectionsRuntime
                           ), pUVar2 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0)) {
label_181e2ad04:
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pUVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pUVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      x = (&pUVar2->m_Items[0].klass)[(int)uVar3];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (x == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) goto label_181e2ad04;
        bVar1 = System_String__Equals_196c550((x->_1).byval_arg.data,prefix,5,(MethodInfo *)0x0);
        if (bVar1) {
          return (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)x;
        }
      }
    }
  }
  return (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$DestroyObject
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__DestroyObject (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x181e2ab30

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__DestroyObject
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344d6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d6f = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar1 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      UnityEngine_Object__DestroyImmediate_2f1fb90((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_2f1ff70((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime___ctor (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x181e2ba20

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_184344d70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor_40d3320);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184344d70 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_1453150 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor_40d3320);
  (__this->fields)._built = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._built,__this_00);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


