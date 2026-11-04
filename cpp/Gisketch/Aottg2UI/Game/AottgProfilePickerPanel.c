// Type: Gisketch.Aottg2UI.Game.AottgProfilePickerPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePickerPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, System_String_o* id, System_String_o* title, System_String_o* titleIcon, Gisketch_Aottg2UI_Code_AottgComponent_o* picker, System_String_o* saveActionId, const MethodInfo* method);
// 0x181e19af0

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,System_String_o *id,
               System_String_o *title,System_String_o *titleIcon,
               Gisketch_Aottg2UI_Code_AottgComponent_o *picker,System_String_o *saveActionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title,title);
  (__this->fields)._titleIcon = titleIcon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titleIcon,titleIcon);
  (__this->fields)._picker = picker;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._picker,picker);
  (__this->fields)._saveActionId = saveActionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._saveActionId,saveActionId);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel__Build (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e19270
// eh: try 0x181e1937f..0x181e1957e -> pad 0x18333c5f0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1953f: xor edx, edx
// asm:   0x181e19541: lea rcx, [rsp + 0xe8]
// asm:   0x181e19549: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e1954e: mov rcx, qword ptr [rsp + 0xc8]
// asm:   0x181e19556: test rcx, rcx
// asm:   0x181e19559: jne 0x181e1957e
// asm:   0x181e1957e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18333c5f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333c5f5: push rbp
// asm:   0x18333c5f6: sub rsp, 0xc0
// asm:   0x18333c5fd: mov rbp, rdx
// asm:   0x18333c600: mov rax, qword ptr [rbp + 0xc0]
// asm:   0x18333c607: mov rcx, qword ptr [rax]
// asm:   0x18333c60a: mov qword ptr [rbp + 0xc8], rcx
// asm:   0x18333c611: movabs rax, 0
// asm:   0x18333c61b: add rsp, 0xc0
// asm:   0x18333c622: pop rbp
// asm:   0x18333c623: ret 

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_80;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_60;
  
  if (Il2CppMethodInitialized_184344ccd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&" title=");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewDialog");
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePickerPanel.Build");
    Il2CppMethodInitialized_184344ccd = '\x01';
  }
  local_60.fields._area = (System_String_o *)0x0;
  local_60.fields._detail = (System_String_o *)0x0;
  local_60.fields._startMs._0_4_ = 0;
  local_60.fields._startMs._4_2_ = 0;
  local_60.fields._startMs._6_2_ = 0;
  local_60.fields._enabled = false;
  local_60.fields._hotLoop = false;
  local_60.fields._26_6_ = 0;
  pSVar1 = System_String__Concat_1969b70
                     ((__this->fields)._id," title=",(__this->fields)._title,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar2 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_80,"ProfilePickerPanel.Build",pSVar1,(MethodInfo *)0x0);
  local_60.fields._area = (pGVar2->fields)._area;
  local_60.fields._detail = (pGVar2->fields)._detail;
  local_60.fields._startMs = (pGVar2->fields)._startMs;
  local_60.fields._enabled = (pGVar2->fields)._enabled;
  local_60.fields._hotLoop = (pGVar2->fields)._hotLoop;
  local_60.fields._26_6_ = *(undefined6 *)&(pGVar2->fields).field_0x1a;
  local_80.fields._area = (System_String_o *)0x0;
  local_80.fields._detail = (System_String_o *)&local_60;
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_0,
             (MethodInfo *)0x0);
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
  if (Il2CppMethodInitialized_184344ca5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRight");
    Il2CppMethodInitialized_184344ca5 = '\x01';
  }
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"profilePreviewDialog",(System_Action_AottgUi__o *)__this_00,pSVar1,layout,pGVar3,
                        (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344ca6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"slideRight");
      Il2CppMethodInitialized_184344ca6 = '\x01';
    }
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar4->fields).exit = pGVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar4->fields).exit,pGVar3);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_60,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_0 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* panel, const MethodInfo* method);
// 0x181e19590

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_0
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *panel,MethodInfo *method)

{
  System_String_o *icon;
  Gisketch_Aottg2UI_Code_AottgDialogHeader_o *__this_00;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *pUVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  
  if (Il2CppMethodInitialized_184344cce == '\0') {
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
    Il2CppMethodInitialized_184344cce = '\x01';
  }
  pSVar2 = (__this->fields)._title;
  icon = (__this->fields)._titleIcon;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgDialogHeader);
  Gisketch_Aottg2UI_Code_AottgDialogHeader___ctor
            (__this_00,pSVar2,0,icon,(System_String_o *)0x0,(System_String_o *)0x0,(MethodInfo *)0x0);
  if (panel != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (panel,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar1,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_1,
               (MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50((__this->fields)._id,"-body",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (panel,"dialogBody",(System_Action_AottgUi__o *)pUVar1,pSVar2,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pUVar1 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (pUVar1,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_Build_b__6_2,
               (MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50((__this->fields)._id,"-footer",(MethodInfo *)0x0);
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexEnd","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,12.0,pGVar3,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (panel,"dialogFooter",(System_Action_AottgUi__o *)pUVar1,pSVar2,pGVar4,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_1 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e19940

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_1
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout(body,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(body,(__this->fields)._picker,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfilePickerPanel$$<Build>b__6_2
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_2 (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* footer, const MethodInfo* method);
// 0x181e19980

void Gisketch_Aottg2UI_Game_AottgProfilePickerPanel___Build_b__6_2
               (Gisketch_Aottg2UI_Game_AottgProfilePickerPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *footer,MethodInfo *method)

{
  System_String_o *actionId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  
  actionId = (__this->fields)._saveActionId;
  if (Il2CppMethodInitialized_184344cab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.save.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_184344cab = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
              (footer,3,"Common.Cancel","Cancel","overlay.close",
               (System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (footer,0,"Common.Save","Save",actionId,(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this_00->fields).enabled = "profile.save.idle";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).enabled,"profile.save.idle");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this_00;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this_00);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


