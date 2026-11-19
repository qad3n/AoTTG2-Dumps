// Type: Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgDynamicTextRow.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, System_String_o* id, System_String_o* label, System_Func_string__o* text, System_String_o* tooltip, System_String_o* fallback, System_String_o* labelKey, System_String_o* tooltipKey, System_String_o* bindingKey, System_Func_string__o* dirtyValue, const MethodInfo* method);
// 0x5dbd9e0

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,System_String_o *id,
               System_String_o *label,System_Func_string__o *text,System_String_o *tooltip,
               System_String_o *fallback,System_String_o *labelKey,System_String_o *tooltipKey,
               System_String_o *bindingKey,System_Func_string__o *dirtyValue,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._label = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._label);
  (__this->fields)._labelKey = labelKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._labelKey);
  (__this->fields)._text = text;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._text);
  (__this->fields)._tooltip = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltip);
  (__this->fields)._tooltipKey = tooltipKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._tooltipKey);
  (__this->fields)._fallback = fallback;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fallback);
  (__this->fields)._bindingKey = bindingKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bindingKey);
  (__this->fields)._dirtyValue = dirtyValue;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._dirtyValue);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__Build (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5dbdae0

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int32_t layoutMode;
  System_String_o *id;
  System_String_o *label;
  System_String_o *labelKey;
  System_String_o *tooltip;
  System_String_o *tooltipKey;
  System_Func_string__o *dirtyValue;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_Fields searchContext;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame_o *__this_01;
  MethodInfo *in_stack_ffffffffffffff80;
  
  if (Il2CppMethodInitialized_07548165 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_BuildText);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
    Il2CppMethodInitialized_07548165 = '\x01';
  }
  id = (__this->fields)._id;
  label = (__this->fields)._label;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_BuildText,
             (MethodInfo_4A81BE0 *)0x0);
  labelKey = (__this->fields)._labelKey;
  tooltip = (__this->fields)._tooltip;
  tooltipKey = (__this->fields)._tooltipKey;
  dirtyValue = (__this->fields)._dirtyValue;
  layoutMode = (__this->fields)._layoutMode;
  searchContext = (__this->fields)._searchContext.fields;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRowFrame___ctor
            (__this_01,id,label,360.0,__this_00,tooltip,(System_String_o *)0x0,(System_String_o *)0x0,
             (System_String_o *)0x0,(System_Nullable_float__o)0x0,labelKey,tooltipKey,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o)searchContext,dirtyValue,
             (System_String_o *)0x0,(System_String_o *)0x0,layoutMode,in_stack_ffffffffffffff80);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (ui,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5dbdc80

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,MethodInfo *method)

{
  (__this->fields)._searchContext.fields.GroupTitle = context.fields.GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = context.fields.CategoryTitle;
  (__this->fields)._searchContext.fields.GroupId = context.fields.GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = context.fields.ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = context.fields.CategoryId;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$ApplyLayoutMode
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__ApplyLayoutMode (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, int32_t mode, const MethodInfo* method);
// 0x5dbdcb0

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__ApplyLayoutMode
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,int32_t mode,MethodInfo *method
               )

{
  (__this->fields)._layoutMode = mode;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5dbdcc0

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548166 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsDirtyRegistry);
    Il2CppMethodInitialized_07548166 = '\x01';
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._bindingKey,(MethodInfo *)0x0);
  if (((root != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) && (!bVar2)) &&
     (__this_00 = (root->fields)._State_k__BackingField,
     __this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    pSVar1 = (__this->fields)._bindingKey;
    value = Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue(__this,method_00);
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
// 0x5dbded0

void Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__BuildText
               (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *control,MethodInfo *method)

{
  bool bVar1;
  System_String_o *text;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *maxWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)control;
  if (Il2CppMethodInitialized_07548167 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"-value");
    Il2CppMethodInitialized_07548167 = '\x01';
  }
  text = Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue(__this,method_00);
  id = System_String__Concat_52f0320((__this->fields)._id,"-value",(MethodInfo *)0x0);
  if (control == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05dbe0a3;
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Text
                     (control,text,"text",id,(System_String_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._bindingKey,(MethodInfo *)0x0);
  if (!bVar1) {
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05dbe0a3;
    (__this_00->fields).text = (__this->fields)._bindingKey;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05dbe0a3;
    (pGVar2->fields).bind = __this_00;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).bind);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(360.0,(MethodInfo *)0x0);
  maxWidth = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,maxWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).layout = pGVar3;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
    return;
  }
label_05dbe0a3:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$TextValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, const MethodInfo* method);
// 0x5dbdd60
// eh: try 0x5dbdd78..0x5dbddde -> pad 0x5dbde4b (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5dbde5e..0x5dbdeb1 -> pad 0x5dbdeb1 (+1 call sites) cleanup
// eh: try 0x5dbdeb4..0x5dbdeb9 -> pad 0x5dbdec1 catch (...) [compiler noexcept guard]
// asm: 35 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dbde49: jmp 0x5dbde4b
// asm:   0x5dbde4b: mov r14, rax
// asm:   0x5dbde4e: cmp edx, 1
// asm:   0x5dbde51: jne 0x5dbdeb9
// asm:   0x5dbde53: mov rdi, r14
// asm:   0x5dbde56: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dbde5b: mov r14, rax
// asm:   0x5dbde5e: lea rdi, [rip + 0x14ba25b]  ; TypeInfo_System_Exception
// asm:   0x5dbde65: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dbde6a: mov rcx, qword ptr [r14]
// asm:   0x5dbde6d: mov rsi, qword ptr [rcx]
// asm:   0x5dbde70: mov rdi, rax
// asm:   0x5dbde73: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5dbde78: test al, al
// asm:   0x5dbde7a: je 0x5dbde90
// asm:   0x5dbde7c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dbde81: mov rdi, rbx
// asm:   0x5dbde84: add rsp, 8
// asm:   0x5dbde88: pop rbx
// asm:   0x5dbde89: pop r14
// asm:   0x5dbde8b: jmp 0x5dbe0b0  ; Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__Fallback()
// asm:   0x5dbde90: mov edi, 8
// asm:   0x5dbde95: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dbde9a: mov rcx, qword ptr [r14]
// asm:   0x5dbde9d: mov qword ptr [rax], rcx
// asm:   0x5dbdea0: lea rsi, [rip + 0x106f659]
// asm:   0x5dbdea7: mov rdi, rax
// asm:   0x5dbdeaa: xor edx, edx
// asm:   0x5dbdeac: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dbdeb1: mov r14, rax
// asm:   0x5dbdeb4: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dbdeb9: mov rdi, r14
// asm:   0x5dbdebc: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dbdec1: mov rdi, rax
// asm:   0x5dbdec4: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__TextValue
          (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,MethodInfo *method)

{
  System_Func_string__o *pSVar1;
  System_String_o *pSVar2;
  
  pSVar1 = (__this->fields)._text;
  if (pSVar1 == (System_Func_string__o *)0x0) {
    if (Il2CppMethodInitialized_07548168 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      il2cpp_codegen_initialize_runtime_metadata(&"Common.Unavailable");
      Il2CppMethodInitialized_07548168 = '\x01';
    }
    pSVar2 = (__this->fields)._fallback;
    if (pSVar2 == (System_String_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                         ("Common.Unavailable",(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  else {
    pSVar2 = (System_String_o *)(*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code);
    if (pSVar2 == (System_String_o *)0x0) {
      if (Il2CppMethodInitialized_07548168 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        il2cpp_codegen_initialize_runtime_metadata(&"Common.Unavailable");
        Il2CppMethodInitialized_07548168 = '\x01';
      }
      pSVar2 = (__this->fields)._fallback;
      if (pSVar2 == (System_String_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
        }
        pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                           ("Common.Unavailable",(MethodInfo *)0x0);
      }
    }
  }
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgDynamicTextRow$$Fallback
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__Fallback (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o* __this, const MethodInfo* method);
// 0x5dbe0b0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow__Fallback
          (Gisketch_Aottg2UI_SettingsScreen_AottgDynamicTextRow_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548168 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Unavailable");
    Il2CppMethodInitialized_07548168 = '\x01';
  }
  pSVar1 = (__this->fields)._fallback;
  if (pSVar1 != (System_String_o *)0x0) {
    return pSVar1;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Unavailable",(MethodInfo *)0x0);
  return pSVar1;
}


