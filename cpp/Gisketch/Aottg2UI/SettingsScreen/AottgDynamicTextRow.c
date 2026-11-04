// Type: Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgDynamicTextRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, System_String_o* id, System_String_o* label, System_Func_string__o* text, System_String_o* tooltip, System_String_o* fallback, System_String_o* labelKey, System_String_o* tooltipKey, System_String_o* bindingKey, System_Func_string__o* dirtyValue, const MethodInfo* method);
// 0x182304180

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,System_String_o *id,
               System_String_o *label,System_Func_string__o *text,System_String_o *tooltip,
               System_String_o *fallback,System_String_o *labelKey,System_String_o *tooltipKey,
               System_String_o *bindingKey,System_Func_string__o *dirtyValue,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label,label);
  (__this->fields)._labelKey = labelKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelKey,labelKey);
  (__this->fields)._text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._text,text);
  (__this->fields)._tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip,tooltip);
  (__this->fields)._tooltipKey = tooltipKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipKey,tooltipKey);
  (__this->fields)._fallback = fallback;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fallback,fallback);
  (__this->fields)._bindingKey = bindingKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bindingKey,bindingKey);
  (__this->fields)._dirtyValue = dirtyValue;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dirtyValue,dirtyValue);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x182303ec0

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *pSVar1;
  int32_t layoutMode;
  System_String_o *id;
  System_String_o *label;
  System_String_o *tooltip;
  System_String_o *labelKey;
  System_String_o *tooltipKey;
  System_Func_string__o *dirtyValue;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_98 [2];
  
  if (Il2CppMethodInitialized_1843476c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_BuildText);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    Il2CppMethodInitialized_1843476c1 = '\x01';
  }
  id = (__this->fields)._id;
  label = (__this->fields)._label;
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_BuildText,
             (MethodInfo *)0x0);
  tooltip = (__this->fields)._tooltip;
  labelKey = (__this->fields)._labelKey;
  tooltipKey = (__this->fields)._tooltipKey;
  pSVar2 = (__this->fields)._searchContext.fields.ScreenTitle;
  pSVar3 = (__this->fields)._searchContext.fields.CategoryId;
  dirtyValue = (__this->fields)._dirtyValue;
  pSVar4 = (__this->fields)._searchContext.fields.CategoryTitle;
  pSVar5 = (__this->fields)._searchContext.fields.GroupId;
  pSVar1 = (__this->fields)._searchContext.fields.GroupTitle;
  layoutMode = (__this->fields)._layoutMode;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
  local_98[0].fields.ScreenTitle = pSVar2;
  local_98[0].fields.CategoryId = pSVar3;
  local_98[0].fields.CategoryTitle = pSVar4;
  local_98[0].fields.GroupId = pSVar5;
  local_98[0].fields.GroupTitle = pSVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
            (__this_01,id,label,360.0,(System_Action_AottgUi__o *)__this_00,tooltip,(System_String_o *)0x0,
             (System_String_o *)0x0,(System_String_o *)0x0,(System_Nullable_float__o)0x0,labelKey,tooltipKey,
             (System_String_o *)0x0,local_98,dirtyValue,(System_String_o *)0x0,(System_String_o *)0x0,
             layoutMode,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x182303c70

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *context,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  
  pSVar1 = (context->fields).CategoryId;
  pSVar2 = (context->fields).CategoryTitle;
  pSVar3 = (context->fields).GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = (context->fields).ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = pSVar1;
  pSVar1 = (context->fields).GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = pSVar2;
  (__this->fields)._searchContext.fields.GroupId = pSVar3;
  (__this->fields)._searchContext.fields.GroupTitle = pSVar1;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext,(void *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x180b5be20

void
Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__ApplyLayoutMode(Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, int32_t mode, MethodInfo* method)

{
  (__this->fields)._layoutMode = value;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x182304070
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823040e5: mov rbp, qword ptr [rsp + 0x30]

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843476c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    Il2CppMethodInitialized_1843476c2 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._bindingKey,(MethodInfo *)0x0);
  if (((!bVar2) && (root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0)) &&
     (__this_00 = (root->fields)._State_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    pSVar1 = (__this->fields)._bindingKey;
    value = Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue(__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,pSVar1,value,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields)._id;
  if ((TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry->_2).cctor_finished_or_no_cctor ==
      0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
  }
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry__SyncRow(root,pSVar1,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$BuildText
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__BuildText (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* control, const MethodInfo* method);
// 0x182303ca0

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__BuildText
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value;
  
  if (Il2CppMethodInitialized_1843476c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"-value");
    Il2CppMethodInitialized_1843476c3 = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue(__this,(MethodInfo *)0x0);
  id = System_String__Concat_1969e50((__this->fields)._id,"-value",(MethodInfo *)0x0);
  if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_182303eb2;
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                     (control,pSVar2,"text",id,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._bindingKey,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_182303eb2;
    pSVar2 = (__this->fields)._bindingKey;
    (__this_00->fields).text = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,pSVar2);
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_182303eb2;
    (pGVar3->fields).bind = __this_00;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).bind,__this_00);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  value = Gisketch_Aottg2UI_Code_AottgUi__Layout
                    ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                     (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                     (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                     1.0,(MethodInfo *)0x0);
  if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar3->fields).layout = value;
    Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,value);
    return;
  }
label_182303eb2:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, const MethodInfo* method);
// 0x182304120
// eh: try 0x182304145..0x182304172 -> pad 0x183331bd0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182304153: mov rax, qword ptr [rsp + 0x40]
// asm:   0x182304158: mov rax, qword ptr [rax + 0x40]
// asm:   0x183331bd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331bd5: push rbx
// asm:   0x183331bd6: push rbp
// asm:   0x183331bd7: push rdi
// asm:   0x183331bd8: sub rsp, 0x20
// asm:   0x183331bdc: mov rbp, rdx
// asm:   0x183331bdf: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x183331be3: mov rax, qword ptr [rdi]
// asm:   0x183331be6: mov rbx, qword ptr [rax]
// asm:   0x183331be9: lea rcx, [rip + 0xd47368]  ; TypeInfo_System_Exception
// asm:   0x183331bf0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183331bf5: mov rcx, rax
// asm:   0x183331bf8: mov rdx, rbx
// asm:   0x183331bfb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331c00: test al, al
// asm:   0x183331c02: je 0x183331c10
// asm:   0x183331c04: movabs rax, 0
// asm:   0x183331c0e: jmp 0x183331c28
// asm:   0x183331c10: mov rax, qword ptr [rdi]
// asm:   0x183331c13: mov qword ptr [rbp + 0x20], rax
// asm:   0x183331c17: lea rdx, [rip + 0xcaa36a]
// asm:   0x183331c1e: lea rcx, [rbp + 0x20]
// asm:   0x183331c22: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x183331c28: add rsp, 0x20
// asm:   0x183331c2c: pop rdi
// asm:   0x183331c2d: pop rbp
// asm:   0x183331c2e: pop rbx
// asm:   0x183331c2f: ret 

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,MethodInfo *method)

{
  System_Func_string__o *pSVar1;
  System_String_o *pSVar2;
  
  if ((__this->fields)._text == (System_Func_string__o *)0x0) {
    return (__this->fields)._fallback;
  }
  pSVar1 = (__this->fields)._text;
  if (pSVar1 != (System_Func_string__o *)0x0) {
    pSVar2 = (System_String_o *)
             (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    if (pSVar2 == (System_String_o *)0x0) {
      pSVar2 = (__this->fields)._fallback;
    }
    return pSVar2;
  }
  ThrowNullReferenceException();
}


