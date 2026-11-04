// Type: Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePreviewPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___cctor (const MethodInfo* method);
// 0x181e278f0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o *__this;
  
  if (Il2CppMethodInitialized_184344cd1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c);
    Il2CppMethodInitialized_184344cd1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___ctor(Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$<Build>b__3_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___Build_b__3_1 (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* title, const MethodInfo* method);
// 0x181e24250

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___Build_b__3_1
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *title,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344cd2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Preview");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Preview");
    Il2CppMethodInitialized_184344cd2 = '\x01';
  }
  if (title != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (title,"MainMenu.Profile.Preview","Preview","profilePreviewTitle",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, System_String_o* avatarSprite, System_String_o* bannerSprite, const MethodInfo* method);
// 0x181a291f0

void
Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___ctor_1a291f0(Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, System_String_o* avatarSprite, System_String_o* bannerSprite, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._avatarSprite = qualifiedCppName;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._avatarSprite,qualifiedCppName);
  (__this->fields)._bannerSprite = declaration;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bannerSprite,declaration);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel__Build (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e1bca0
// eh: try 0x181e1bdda..0x181e1bfe9 -> pad 0x18333c5f0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1bfac: xor edx, edx
// asm:   0x181e1bfae: lea rcx, [rsp + 0xe8]
// asm:   0x181e1bfb6: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e1bfbb: mov rcx, qword ptr [rsp + 0xc8]
// asm:   0x181e1bfc3: test rcx, rcx
// asm:   0x181e1bfc6: jne 0x181e1bfe9
// asm:   0x181e1bfe9: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui
               ,MethodInfo *method)

{
  System_String_o *detail;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar1;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_80;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_60 [2];
  
  if (Il2CppMethodInitialized_184344ccf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_Build_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-dialog");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"avatar=");
    il2cpp_codegen_initialize_runtime_metadata(&"ProfilePreviewPanel.Build");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewDialog");
    il2cpp_codegen_initialize_runtime_metadata(&" banner=");
    Il2CppMethodInitialized_184344ccf = '\x01';
  }
  local_60[0].fields._area = (System_String_o *)0x0;
  local_60[0].fields._detail = (System_String_o *)0x0;
  local_60[0].fields._startMs._0_4_ = 0;
  local_60[0].fields._startMs._4_2_ = 0;
  local_60[0].fields._startMs._6_2_ = 0;
  local_60[0].fields._enabled = false;
  local_60[0].fields._hotLoop = false;
  local_60[0].fields._26_6_ = 0;
  detail = System_String__Concat_1969590
                     ("avatar=",(__this->fields)._avatarSprite," banner=",
                      (__this->fields)._bannerSprite,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar1 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_80,"ProfilePreviewPanel.Build",detail,(MethodInfo *)0x0);
  local_60[0].fields._area = (pGVar1->fields)._area;
  local_60[0].fields._detail = (pGVar1->fields)._detail;
  local_60[0].fields._startMs = (pGVar1->fields)._startMs;
  local_60[0].fields._enabled = (pGVar1->fields)._enabled;
  local_60[0].fields._hotLoop = (pGVar1->fields)._hotLoop;
  local_60[0].fields._26_6_ = *(undefined6 *)&(pGVar1->fields).field_0x1a;
  local_80.fields._area = (System_String_o *)0x0;
  local_80.fields._detail = (System_String_o *)local_60;
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            (__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_Build_b__3_0,
             (MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      "Center",(System_String_o *)0x0,12.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184344ca7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRightSmall");
    Il2CppMethodInitialized_184344ca7 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                       (ui,"profilePreviewDialog",(System_Action_AottgUi__o *)__this_00,"profile-preview-dialog",
                        layout,pGVar2,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184344ca8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"slideRightSmall");
      Il2CppMethodInitialized_184344ca8 = '\x01';
    }
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                       ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar3->fields).exit = pGVar2;
      Il2CppCodeGenWriteBarrier(&(pGVar3->fields).exit,pGVar2);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(local_60,(MethodInfo *)0x0);
      return;
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$<Build>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___Build_b__3_0 (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* preview, const MethodInfo* method);
// 0x181e1bff0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___Build_b__3_0
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *preview,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  System_String_o *value;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *component;
  
  if (Il2CppMethodInitialized_184344cd0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c_Build_b__3_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewTitleBar");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-title-bar");
    Il2CppMethodInitialized_184344cd0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c);
  }
  pSVar1 = "profilePreviewTitleBar";
  __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
              TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->static_fields->__9__3_1;
  if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c);
    }
    object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->static_fields->__9;
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c_Build_b__3_1,
               (MethodInfo *)0x0);
    TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->static_fields->__9__3_1 =
         (System_Action_AottgUi__o *)__this_00;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->static_fields->__9__3_1,__this_00)
    ;
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  if (preview != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (preview,pSVar1,(System_Action_AottgUi__o *)__this_00,"profile-preview-title-bar",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pSVar1 = (__this->fields)._avatarSprite;
    value = (__this->fields)._bannerSprite;
    component = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard);
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component,(MethodInfo *)0x0);
    (component->fields)._avatarSprite = pSVar1;
    Il2CppCodeGenWriteBarrier(&(component->fields)._avatarSprite,pSVar1);
    (component->fields)._bannerSprite = value;
    Il2CppCodeGenWriteBarrier(&(component->fields)._bannerSprite,value);
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (preview,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


