// Type: Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgLazySidePanelSectionsRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$get_Prefix
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__get_Prefix (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x5914c60

System_String_o *
Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__get_Prefix
          (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  return (__this->fields)._prefix;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__RegisterFactory (const MethodInfo* method);
// 0x5914c70

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_075456e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_BuildRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"LazySidePanelSections");
    Il2CppMethodInitialized_075456e1 = '\x01';
  }
  if (TypeInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime->static_fields->_registered != false)
  {
    return;
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
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_BuildRuntime,
             (MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"LazySidePanelSections",__this_00,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime->static_fields->_registered = true;
  return;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Select
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Select (UnityEngine_GameObject_o* source, System_String_o* sectionId, const MethodInfo* method);
// 0x5914d60

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Select
               (UnityEngine_GameObject_o *source,System_String_o *sectionId,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this;
  UnityEngine_GameObject_o *source_00;
  MethodInfo *in_RCX;
  bool bVar2;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)sectionId;
  if (Il2CppMethodInitialized_075456e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456e2 = '\x01';
  }
  __this = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Find(source,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = false;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (__this == (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_5815620
                      (__this,sectionId,true,in_RCX);
    if (bVar1) {
      source_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
      }
      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Select(source_00,sectionId,false,(MethodInfo *)0x0);
      bVar2 = true;
    }
    else {
      bVar2 = false;
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Invalidate
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Invalidate (UnityEngine_GameObject_o* root, System_String_o* prefix, System_String_o* sectionId, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* replacement, const MethodInfo* method);
// 0x5914fb0

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Invalidate
               (UnityEngine_GameObject_o *root,System_String_o *prefix,System_String_o *sectionId,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *replacement,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_01;
  
  method_00 = replacement;
  method_01 = (MethodInfo *)sectionId;
  if (Il2CppMethodInitialized_075456e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456e3 = '\x01';
    method_01 = extraout_RDX;
  }
  __this = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Find_5815050(root,prefix,method_01);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this == (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ReplaceSection
                      (__this,sectionId,replacement,(MethodInfo *)method_00);
    return bVar1;
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildRuntime
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildRuntime (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5915330

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildRuntime
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this;
  
  if (Il2CppMethodInitialized_075456e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456e4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if ((go != (UnityEngine_GameObject_o *)0x0) &&
     (pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
     pUVar2 != (UnityEngine_UI_LayoutElement_o *)0x0)) {
    (*(pUVar2->klass->vtable)._28_set_ignoreLayout.methodPtr)
              (pUVar2,true,(pUVar2->klass->vtable)._28_set_ignoreLayout.method);
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgLazySidePanelSectionsRuntime);
    if (__this != (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
      Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Setup(__this,node,context,view,method);
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Setup (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5915410
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5915475: test rbx, rbx
// asm:   0x5915478: je 0x591551b

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Setup
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_array *pSVar1;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (__this == (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) goto label_0591551b;
    (__this->fields)._prefix = (System_String_o *)0x0;
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._prefix);
    (__this->fields)._sectionIds = (System_String_array *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._sectionIds);
  }
  else {
    if (__this == (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
label_0591551b:
      ThrowNullReferenceException();
    }
    (__this->fields)._prefix = (node->fields).value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._prefix);
    (__this->fields)._sectionIds = (node->fields).options;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._sectionIds);
    pGVar2 = (node->fields).deferredChildren;
  }
  (__this->fields)._sectionNodes = pGVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sectionNodes);
  (__this->fields)._context = context;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._context);
  (__this->fields)._view = view;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._view);
  pSVar1 = (__this->fields)._sectionIds;
  if ((pSVar1 == (System_String_array *)0x0) ||
     (method_00 = (MethodInfo *)pSVar1->max_length, method_00 == (MethodInfo *)0x0)) {
    return;
  }
  if ((int)method_00 == 0) {
    ThrowIndexOutOfRangeException();
  }
  Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_5815620
            (__this,pSVar1->m_Items[0],false,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Start
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Start (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x5915560

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Start
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  MethodInfo *method_00;
  System_String_o *sectionId;
  UnityEngine_GameObject_o *source;
  
  if (Il2CppMethodInitialized_075456e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchSectionNavigator);
    Il2CppMethodInitialized_075456e5 = '\x01';
  }
  pSVar1 = (__this->fields)._sectionIds;
  if ((pSVar1 == (System_String_array *)0x0) ||
     (method_00 = (MethodInfo *)pSVar1->max_length, method_00 == (MethodInfo *)0x0)) {
    return;
  }
  if ((int)method_00 != 0) {
    Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_5815620
              (__this,pSVar1->m_Items[0],true,method_00);
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
// 0x5915610

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__EnsureSection
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,System_String_o *sectionId,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  
  bVar1 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_5815620
                    (__this,sectionId,true,in_RCX);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$PrimeInitialSection
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__PrimeInitialSection (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x5915530

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__PrimeInitialSection
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  MethodInfo *method_00;
  
  pSVar1 = (__this->fields)._sectionIds;
  if ((pSVar1 == (System_String_array *)0x0) ||
     (method_00 = (MethodInfo *)pSVar1->max_length, method_00 == (MethodInfo *)0x0)) {
    return;
  }
  if ((int)method_00 == 0) {
    ThrowIndexOutOfRangeException();
  }
  Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_5815620
            (__this,pSVar1->m_Items[0],false,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildSection
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x5914fa0

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,System_String_o *sectionId,
               MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  
  bVar1 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_5815620
                    (__this,sectionId,true,in_RCX);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildSection
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, bool settle, const MethodInfo* method);
// 0x5915620
// eh: try 0x59156d3..0x59156e2 -> pad 0x59156ff catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5915716..0x591571b -> pad 0x5915736 cleanup
// eh: try 0x5915739..0x5915741 -> pad 0x5915749 catch (...) [compiler noexcept guard]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59156ff: mov rbx, rax
// asm:   0x5915702: cmp edx, 1
// asm:   0x5915705: jne 0x5915739
// asm:   0x5915707: mov rdi, rbx
// asm:   0x591570a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x591570f: mov rbp, qword ptr [rax]
// asm:   0x5915712: mov qword ptr [rsp], rbp
// asm:   0x5915716: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x591571b: xor ebx, ebx
// asm:   0x591571d: lea rdi, [rsp + 0x10]
// asm:   0x5915722: xor esi, esi
// asm:   0x5915724: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x5915729: test rbp, rbp
// asm:   0x591572c: je 0x59156f0
// asm:   0x591572e: mov rdi, rbp
// asm:   0x5915731: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5915736: mov rbx, rax
// asm:   0x5915739: mov rdi, rsp
// asm:   0x591573c: call 0x2fd1c50  ; il2cpp_runtime_helper_02fd1c50()
// asm:   0x5915741: mov rdi, rbx
// asm:   0x5915744: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5915749: mov rdi, rax
// asm:   0x591574c: call 0x2ab61e0  ; __clang_call_terminate()

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_5815620
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,System_String_o *sectionId,
               bool settle,MethodInfo *method)

{
  bool bVar1;
  System_String_o *detail;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (Il2CppMethodInitialized_075456e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"LazySidePanel.BuildSection");
    il2cpp_codegen_initialize_runtime_metadata(&":");
    Il2CppMethodInitialized_075456e6 = '\x01';
  }
  local_48.fields._startMs = 0;
  local_48.fields._enabled = false;
  local_48.fields._hotLoop = false;
  local_48.fields._26_6_ = 0;
  local_48.fields._area = (System_String_o *)0x0;
  local_48.fields._detail = (System_String_o *)0x0;
  detail = System_String__Concat_5301f10
                     ((__this->fields)._prefix,":",sectionId,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  method_00 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_48,"LazySidePanel.BuildSection",detail,(MethodInfo *)0x0);
  bVar1 = Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSectionCore
                    (__this,sectionId,settle,method_00);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_48,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$BuildSectionCore
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSectionCore (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, bool settle, const MethodInfo* method);
// 0x5915760

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSectionCore
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,System_String_o *sectionId,
               bool settle,MethodInfo *method)

{
  uint uVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Building_GisketchView_o *view;
  bool bVar4;
  int32_t index;
  System_String_array *pSVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Object_o *x;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  bool bVar7;
  uint uVar8;
  ulong uVar9;
  
  if (Il2CppMethodInitialized_075456e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456e7 = '\x01';
  }
  bVar7 = false;
  bVar4 = System_String__IsNullOrEmpty(sectionId,(MethodInfo *)0x0);
  if (!bVar4) {
    pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._built;
    if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_0591584d:
      ThrowNullReferenceException();
    }
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar2,(Il2CppObject *)sectionId,
                       (MethodInfo_4AAD6F0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ContainsKey);
    if (bVar4) {
      Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ShowOnly(__this,sectionId,method_00);
      bVar7 = true;
    }
    else {
      pSVar5 = (__this->fields)._sectionIds;
      if (pSVar5 != (System_String_array *)0x0) {
        uVar9 = 0;
label_05915810:
        uVar8 = (uint)pSVar5->max_length;
        if ((long)(int)uVar8 <= (long)uVar9) goto label_059159e0;
        if (uVar9 < uVar8) {
          bVar4 = System_String__Equals_52ffe30(pSVar5->m_Items[uVar9],sectionId,5,(MethodInfo *)0x0);
          if (!bVar4) {
            uVar9 = uVar9 + 1;
            pSVar5 = (__this->fields)._sectionIds;
            if (pSVar5 == (System_String_array *)0x0) goto label_0591584d;
            goto label_05915810;
          }
          uVar8 = (uint)uVar9;
          if ((((int)uVar8 < 0) ||
              (pGVar3 = (__this->fields)._sectionNodes,
              pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) ||
             (uVar1 = (uint)pGVar3->max_length, (int)uVar1 <= (int)uVar8)) goto label_059159e0;
          if (uVar1 <= uVar8) goto label_059159f3;
          if (pGVar3->m_Items[uVar9] == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
          goto label_059159e0;
          pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar6 == (UnityEngine_Transform_o *)0x0) goto label_0591584d;
          pUVar6 = UnityEngine_Transform__get_parent(pUVar6,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            return false;
          }
          pGVar3 = (__this->fields)._sectionNodes;
          if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_0591584d;
          if (uVar8 < (uint)pGVar3->max_length) {
            node = pGVar3->m_Items[uVar9];
            context = (__this->fields)._context;
            view = (__this->fields)._view;
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            x = (UnityEngine_Object_o *)
                Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
                          (node,pUVar6,context,view,(MethodInfo *)0x0);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if (bVar4) {
              return false;
            }
            if (x != (UnityEngine_Object_o *)0x0) {
              pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)x,(MethodInfo *)0x0);
              __this_00 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              if ((__this_00 != (UnityEngine_Transform_o *)0x0) &&
                 (index = UnityEngine_Transform__GetSiblingIndex(__this_00,(MethodInfo *)0x0),
                 pUVar6 != (UnityEngine_Transform_o *)0x0)) {
                UnityEngine_Transform__SetSiblingIndex(pUVar6,index,(MethodInfo *)0x0);
                pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._built;
                if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___set_Item
                            (pSVar2,(Il2CppObject *)sectionId,(Il2CppObject *)x,
                             (MethodInfo_4AAD4C0 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_set_Item);
                  Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ShowOnly
                            (__this,sectionId,method_01);
                  if (settle) {
                    Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Settle
                              (__this,(MethodInfo *)sectionId);
                    return true;
                  }
                  return true;
                }
              }
            }
            goto label_0591584d;
          }
        }
label_059159f3:
        ThrowIndexOutOfRangeException();
      }
label_059159e0:
      bVar7 = false;
    }
  }
  return bVar7;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$ReplaceSection
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ReplaceSection (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* replacement, const MethodInfo* method);
// 0x5915180
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5915314: mov rdi, r13
// asm:   0x5915317: mov rsi, r14
// asm:   0x591531a: mov edx, 1
// asm:   0x591531f: call 0x5915620  ; Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection()
// asm:   0x5915324: jmp 0x5915223

bool Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ReplaceSection
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,System_String_o *sectionId,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *replacement,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this_00;
  bool bVar4;
  System_String_array *pSVar5;
  MethodInfo *method_00;
  ulong uVar6;
  long lVar7;
  MethodInfo *pMVar8;
  MethodInfo *pMStack_38;
  
  if (Il2CppMethodInitialized_075456e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456e8 = '\x01';
  }
  pMStack_38 = (MethodInfo *)0x0;
  pSVar5 = (__this->fields)._sectionIds;
  if (pSVar5 == (System_String_array *)0x0) {
    return false;
  }
  lVar7 = 0x20;
  uVar6 = 0;
  do {
    uVar1 = (uint)pSVar5->max_length;
    if ((long)(int)uVar1 <= (long)uVar6) {
      return false;
    }
    if (uVar1 <= uVar6) {
label_05915329:
      ThrowIndexOutOfRangeException();
    }
    bVar4 = System_String__Equals_52ffe30
                      (*(System_String_o **)((long)pSVar5->m_Items + lVar7 + -0x20),sectionId,5,
                       (MethodInfo *)0x0);
    if (bVar4) {
      if (replacement == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        return false;
      }
      if ((int)(uint)uVar6 < 0) {
        return false;
      }
      pGVar2 = (__this->fields)._sectionNodes;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
        if ((uint)pGVar2->max_length <= (uint)uVar6) goto label_05915329;
        *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)((long)pGVar2->m_Items + lVar7 + -0x20) =
             replacement;
        Il2CppCodeGenWriteBarrier((void **)((long)pGVar2->m_Items + lVar7 + -0x20));
        pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._built;
        if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          method_00 = MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue;
          bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (pSVar3,(Il2CppObject *)sectionId,(Il2CppObject **)&pMStack_38,
                             (MethodInfo_4AAF440 *)
                             MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_TryGetValue);
          pMVar8 = pMStack_38;
          if (!bVar4) {
            return true;
          }
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Equality
                            ((UnityEngine_Object_o *)pMVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (bVar4) {
            return true;
          }
          if (pMStack_38 != (MethodInfo *)0x0) {
            pMVar8 = (MethodInfo *)0x0;
            bVar4 = UnityEngine_GameObject__get_activeSelf
                              ((UnityEngine_GameObject_o *)pMStack_38,(MethodInfo *)0x0);
            __this_00 = (__this->fields)._view;
            if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
              pMVar8 = pMStack_38;
              Gisketch_Aottg2UI_Building_GisketchView__UnregisterSubtree
                        (__this_00,(UnityEngine_GameObject_o *)pMStack_38,(MethodInfo *)0x0);
            }
            Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__DestroyObject
                      ((UnityEngine_GameObject_o *)pMStack_38,pMVar8);
            pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._built;
            if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
              System_Collections_Generic_Dictionary_object__object___Remove
                        (pSVar3,(Il2CppObject *)sectionId,
                         (MethodInfo_4AAED10 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_Remove);
              if (bVar4) {
                Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__BuildSection_5815620
                          (__this,sectionId,true,method_00);
                return true;
              }
              return true;
            }
          }
        }
      }
      goto label_0591521b;
    }
    uVar6 = uVar6 + 1;
    pSVar5 = (__this->fields)._sectionIds;
    lVar7 = lVar7 + 8;
    if (pSVar5 == (System_String_array *)0x0) {
label_0591521b:
      ThrowNullReferenceException();
    }
  } while( true );
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$ShowOnly
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ShowOnly (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x5915a00
// eh: try 0x5915ad4..0x5915b5a -> pad 0x5915b67 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5915b7e..0x5915b83 -> pad 0x5915ba4 cleanup
// eh: try 0x5915ba7..0x5915baf -> pad 0x5915bb7 catch (...) [compiler noexcept guard]
// asm: 28 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5915acd: nop dword ptr [rax]
// asm:   0x5915b5f: jmp 0x5915b67
// asm:   0x5915b61: jmp 0x5915b67
// asm:   0x5915b63: jmp 0x5915b67
// asm:   0x5915b65: jmp 0x5915b67
// asm:   0x5915b67: mov rbx, rax
// asm:   0x5915b6a: cmp edx, 1
// asm:   0x5915b6d: jne 0x5915ba7
// asm:   0x5915b6f: mov rdi, rbx
// asm:   0x5915b72: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5915b77: mov rbx, qword ptr [rax]
// asm:   0x5915b7a: mov qword ptr [rsp], rbx
// asm:   0x5915b7e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5915b83: lea rax, [rip + 0x197a3f6]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_Dispose
// asm:   0x5915b8a: mov rsi, qword ptr [rax]
// asm:   0x5915b8d: lea rdi, [rsp + 0x10]
// asm:   0x5915b92: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5915b97: test rbx, rbx
// asm:   0x5915b9a: je 0x5915b46
// asm:   0x5915b9c: mov rdi, rbx
// asm:   0x5915b9f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5915ba4: mov rbx, rax
// asm:   0x5915ba7: mov rdi, rsp
// asm:   0x5915baa: call 0x2fd1c70  ; il2cpp_runtime_helper_02fd1c70()
// asm:   0x5915baf: mov rdi, rbx
// asm:   0x5915bb2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5915bb7: mov rdi, rax
// asm:   0x5915bba: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__ShowOnly
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,System_String_o *sectionId,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *a;
  Il2CppObject *x;
  bool bVar1;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_58;
  
  if (Il2CppMethodInitialized_075456e9 == '\0') {
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
    Il2CppMethodInitialized_075456e9 = '\x01';
  }
  local_58.fields._current.fields.key = (Il2CppObject *)0x0;
  local_58.fields._current.fields.value = (Il2CppObject *)0x0;
  local_58.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_58.fields._version = 0;
  local_58.fields._index = 0;
  local_58.fields._getEnumeratorRetType = 0;
  local_58.fields._36_4_ = 0;
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._built;
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___GetEnumerator
            (&local_58,__this_00,
             (MethodInfo_4AAD970 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_GetEnumerator);
  while( true ) {
    do {
      bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_58,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_MoveNext
                        );
      x = local_58.fields._current.fields.value;
      a = local_58.fields._current.fields.key;
      if (!bVar1) {
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)&local_58,
                   (MethodInfo_4CE67F0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_GameObject_Dispose);
        return;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    } while (!bVar1);
    bVar1 = System_String__Equals_52ffe30((System_String_o *)a,sectionId,5,(MethodInfo *)0x0);
    if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) break;
    UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)x,bVar1,(MethodInfo *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$IndexOf
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__IndexOf (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, System_String_o* sectionId, const MethodInfo* method);
// 0x5915bc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5915bde: nop 

int32_t Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__IndexOf
                  (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,
                  System_String_o *sectionId,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  
  pSVar3 = (__this->fields)._sectionIds;
  if (pSVar3 != (System_String_array *)0x0) {
    uVar4 = 0;
    while (uVar1 = (uint)pSVar3->max_length, (long)uVar4 < (long)(int)uVar1) {
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      bVar2 = System_String__Equals_52ffe30(pSVar3->m_Items[uVar4],sectionId,5,(MethodInfo *)0x0);
      if (bVar2) {
        return (int32_t)uVar4;
      }
      uVar4 = uVar4 + 1;
      pSVar3 = (__this->fields)._sectionIds;
      if (pSVar3 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
    }
  }
  return -1;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Settle
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Settle (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x5915c30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5915cb2: mov rdi, r14

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Settle
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_ScrollRect_o *x;
  UnityEngine_GameObject_o *root;
  
  if (Il2CppMethodInitialized_075456ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456ea = '\x01';
  }
  x = UnityEngine_Component__GetComponentInParent_object__34b0d00
                ((UnityEngine_Component_o *)__this,
                 (MethodInfo_34B0D00 *)MethodInfo_UnityEngine_Component_GetComponentInParent_ScrollRect);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (UnityEngine_UI_ScrollRect_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this = (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)x;
  }
  root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$Find
// il2cpp: Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Find (UnityEngine_GameObject_o* source, const MethodInfo* method);
// 0x5914e30

Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *
Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Find
          (UnityEngine_GameObject_o *source,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *pGVar2;
  UnityEngine_Transform_o *pUVar3;
  
  if (Il2CppMethodInitialized_075456eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponentInChildren_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456eb = '\x01';
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
    pGVar2 = UnityEngine_GameObject__GetComponentInParent_object__353bc10
                       (source,true,
                        (MethodInfo_353BC10 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_AottgLazySidePanelSectionsRuntime
                       );
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
      return pGVar2;
    }
    pGVar2 = UnityEngine_GameObject__GetComponentInChildren_object__353b9a0
                       (source,true,
                        (MethodInfo_353B9A0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInChildren_AottgLazySidePanelSectionsRuntime
                       );
    if (pGVar2 != (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) {
      return pGVar2;
    }
    pUVar3 = UnityEngine_GameObject__get_transform(source,(MethodInfo *)0x0);
    if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
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
         (pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0),
         pUVar3 != (UnityEngine_Transform_o *)0x0)) {
        pGVar2 = UnityEngine_Component__GetComponentInChildren_object_
                           ((UnityEngine_Component_o *)pUVar3,true,
                            (MethodInfo_34B0B60 *)
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
// 0x5915050
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5915159: jmp 0x591515e
// asm:   0x591515b: xor r13d, r13d

Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *
Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__Find_5815050
          (UnityEngine_GameObject_o *root,System_String_o *prefix,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *x;
  bool bVar2;
  System_Object_array *pSVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (Il2CppMethodInitialized_075456ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_AottgLazySidePanelSectionsRuntime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456ec = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((root == (UnityEngine_GameObject_o *)0x0) ||
       (pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object_
                           (root,true,
                            (MethodInfo_353C0B0 *)
                            MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_AottgLazySidePanelSectionsRuntime
                           ), pSVar3 == (System_Object_array *)0x0)) {
label_05915170:
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar3->max_length) {
      uVar4 = pSVar3->max_length & 0xffffffff;
      uVar5 = 0;
      do {
        if (uVar4 <= uVar5) {
          ThrowIndexOutOfRangeException();
        }
        x = (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)pSVar3->m_Items[uVar5];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          if (x == (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0) goto label_05915170;
          bVar2 = System_String__Equals_52ffe30((x->fields)._prefix,prefix,5,(MethodInfo *)0x0);
          if (bVar2) {
            return x;
          }
        }
        uVar5 = uVar5 + 1;
        uVar1 = (uint)pSVar3->max_length;
        uVar4 = (ulong)uVar1;
      } while ((long)uVar5 < (long)(int)uVar1);
    }
  }
  return (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$DestroyObject
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__DestroyObject (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x5915d00

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime__DestroyObject
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075456ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075456ed = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)go,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  if (bVar2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  UnityEngine_Object__DestroyImmediate_6921750((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgLazySidePanelSectionsRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime___ctor (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o* __this, const MethodInfo* method);
// 0x5915dc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5915dec: cmp byte ptr [rip + 0x1c2ca93], 0

void Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime___ctor
               (Gisketch_Aottg2UI_Game_AottgLazySidePanelSectionsRuntime_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__GameObject__o *__this_00;
  
  if (Il2CppMethodInitialized_075456ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor_718b6b8);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_075456ee = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_GameObject);
  System_Collections_Generic_Dictionary_object__object____ctor_4aac9c0
            ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,
             (System_Collections_Generic_IEqualityComparer_TKey__o *)comparer,
             (MethodInfo_4AAC9C0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_GameObject_ctor_718b6b8);
  (__this->fields)._built = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._built);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


