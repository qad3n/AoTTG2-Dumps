// Type: Gisketch.Aottg2UI.Game.AottgProfilePickerPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePickerPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, System_String_o* id, System_String_o* title, System_String_o* titleIcon, Gisketch_Aottg2UI_Code_AottgComponent_o* picker, System_String_o* saveActionId, const MethodInfo* method);
// 0x58fc030

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,System_String_o *id,
               System_String_o *title,System_String_o *titleIcon,
               Gisketch_Aottg2UI_Code_AottgComponent_o *picker,System_String_o *saveActionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
  (__this->fields)._titleIcon = titleIcon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titleIcon);
  (__this->fields)._picker = picker;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._picker);
  (__this->fields)._saveActionId = saveActionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._saveActionId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel__Build (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5903c30
// eh: try 0x5903d3a..0x5903ed1 -> pad 0x5903ed7 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5903ef3..0x5903ef8 -> pad 0x5903f11 cleanup
// eh: try 0x5903f14..0x5903f1e -> pad 0x5903f26 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5903ed1: jmp 0x5903edb
// asm:   0x5903ed3: jmp 0x5903edb
// asm:   0x5903ed5: jmp 0x5903edb
// asm:   0x5903ed7: jmp 0x5903edb
// asm:   0x5903ed9: jmp 0x5903edb
// asm:   0x5903edb: mov rbx, rax
// asm:   0x5903ede: cmp edx, 1
// asm:   0x5903ee1: jne 0x5903f14
// asm:   0x5903ee3: mov rdi, rbx
// asm:   0x5903ee6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5903eeb: mov rbx, qword ptr [rax]
// asm:   0x5903eee: mov qword ptr [rsp + 0x70], rbx
// asm:   0x5903ef3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5903ef8: lea rdi, [rsp + 0x50]
// asm:   0x5903efd: xor esi, esi
// asm:   0x5903eff: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x5903f04: test rbx, rbx
// asm:   0x5903f07: je 0x5903eb6
// asm:   0x5903f09: mov rdi, rbx
// asm:   0x5903f0c: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5903f11: mov rbx, rax
// asm:   0x5903f14: lea rdi, [rsp + 0x70]
// asm:   0x5903f19: call 0x2fd16b0  ; il2cpp_runtime_helper_02fd16b0()
// asm:   0x5903f1e: mov rdi, rbx
// asm:   0x5903f21: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5903f26: mov rdi, rax
// asm:   0x5903f29: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (Il2CppMethodInitialized_07545641 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&" title=");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewDialog");
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePickerPanel.Build");
    Il2CppMethodInitialized_07545641 = '\x01';
  }
  local_68.fields._startMs._0_4_ = 0;
  local_68.fields._startMs._4_2_ = 0;
  local_68.fields._startMs._6_2_ = 0;
  local_68.fields._enabled = false;
  local_68.fields._hotLoop = false;
  local_68.fields._26_6_ = 0;
  local_68.fields._area = (System_String_o *)0x0;
  local_68.fields._detail = (System_String_o *)0x0;
  pSVar1 = System_String__Concat_5301f10
                     ((__this->fields)._id," title=",(__this->fields)._title,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_48,"ProfilePickerPanel.Build",pSVar1,(MethodInfo *)0x0);
  local_68.fields._startMs = local_48.fields._startMs;
  local_68.fields._enabled = local_48.fields._enabled;
  local_68.fields._hotLoop = local_48.fields._hotLoop;
  local_68.fields._26_6_ = local_48.fields._26_6_;
  local_68.fields._area = local_48.fields._area;
  local_68.fields._detail = local_48.fields._detail;
  local_48.fields._area = (System_String_o *)0x0;
  local_48.fields._detail = (System_String_o *)&local_68;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_0,
             (MethodInfo_4A81BE0 *)0x0);
  pSVar1 = (__this->fields)._id;
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(630.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07545619 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRight");
    Il2CppMethodInitialized_07545619 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                     (ui,"profilePreviewDialog",__this_00,pSVar1,layout,pGVar2,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0754561a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRight");
    Il2CppMethodInitialized_0754561a = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar3->fields).exit = pGVar2;
  Il2CppCodeGenWriteBarrier(&(pGVar3->fields).exit);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_68,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x5903f30

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_0
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_o *icon;
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this_00;
  System_Action_AottgUi__o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_07545642 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_2);
    il2cpp_codegen_initialize_runtime_metadata(&"FlexEnd");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-footer");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogFooter");
    il2cpp_codegen_initialize_runtime_metadata(&"dialogBody");
    il2cpp_codegen_initialize_runtime_metadata(&"-body");
    Il2CppMethodInitialized_07545642 = '\x01';
  }
  pSVar2 = (__this->fields)._title;
  icon = (__this->fields)._titleIcon;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader);
  Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
            (__this_00,pSVar2,0,icon,(System_String_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (panel == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_1,
             (MethodInfo_4A81BE0 *)0x0);
  pSVar2 = System_String__Concat_52f0320((__this->fields)._id,"-body",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar3,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (panel,"dialogBody",pSVar1,pSVar2,pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)pSVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_2,
             (MethodInfo_4A81BE0 *)0x0);
  pSVar2 = System_String__Concat_52f0320((__this->fields)._id,"-footer",(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row","FlexEnd","Center",(System_String_o *)0x0
                      ,(System_String_o *)0x0,12.0,pGVar3,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (panel,"dialogFooter",pSVar1,pSVar2,pGVar4,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_1 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5904250

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_1
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout(body,(MethodInfo *)body);
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component(body,(__this->fields)._picker,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_2 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x5904290

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_2
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter_57ff050(footer,(__this->fields)._saveActionId,method);
  return;
}


