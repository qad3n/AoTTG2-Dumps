// Type: Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgProfilePreviewPanel.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___cctor (const MethodInfo* method);
// 0x5904860

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545645 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c);
    Il2CppMethodInitialized_07545645 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o* __this, const MethodInfo* method);
// 0x59048d0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel.<>c$$<Build>b__3_1
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___Build_b__3_1 (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* title, const MethodInfo* method);
// 0x59048e0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c___Build_b__3_1
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *title,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545646 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Preview");
    Il2CppMethodInitialized_07545646 = '\x01';
  }
  if (title == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (title,"MainMenu.Profile.Preview","profilePreviewTitle",(System_String_o *)0x0,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___ctor (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, System_String_o* avatarSprite, System_String_o* bannerSprite, const MethodInfo* method);
// 0x58fc0c0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___ctor
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o *__this,System_String_o *avatarSprite,
               System_String_o *bannerSprite,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._avatarSprite = avatarSprite;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._avatarSprite);
  (__this->fields)._bannerSprite = bannerSprite;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._bannerSprite);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel__Build (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x59042a0
// eh: try 0x59043da..0x5904584 -> pad 0x590458a (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x59045a6..0x59045ab -> pad 0x59045c4 cleanup
// eh: try 0x59045c7..0x59045d1 -> pad 0x59045d9 catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5904584: jmp 0x590458e
// asm:   0x5904586: jmp 0x590458e
// asm:   0x5904588: jmp 0x590458e
// asm:   0x590458a: jmp 0x590458e
// asm:   0x590458c: jmp 0x590458e
// asm:   0x590458e: mov rbx, rax
// asm:   0x5904591: cmp edx, 1
// asm:   0x5904594: jne 0x59045c7
// asm:   0x5904596: mov rdi, rbx
// asm:   0x5904599: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x590459e: mov rbx, qword ptr [rax]
// asm:   0x59045a1: mov qword ptr [rsp + 0x78], rbx
// asm:   0x59045a6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x59045ab: lea rdi, [rsp + 0x50]
// asm:   0x59045b0: xor esi, esi
// asm:   0x59045b2: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x59045b7: test rbx, rbx
// asm:   0x59045ba: je 0x590456b
// asm:   0x59045bc: mov rdi, rbx
// asm:   0x59045bf: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x59045c4: mov rbx, rax
// asm:   0x59045c7: lea rdi, [rsp + 0x78]
// asm:   0x59045cc: call 0x2fd16d0  ; il2cpp_runtime_helper_02fd16d0()
// asm:   0x59045d1: mov rdi, rbx
// asm:   0x59045d4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x59045d9: mov rdi, rax
// asm:   0x59045dc: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel__Build
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o *__this,Gisketch_Aottg2UI_Code_AottgUi_o *ui
               ,MethodInfo *method)

{
  System_String_o *detail;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_40;
  
  if (Il2CppMethodInitialized_07545643 == '\0') {
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
    Il2CppMethodInitialized_07545643 = '\x01';
  }
  local_68.fields._startMs._0_4_ = 0;
  local_68.fields._startMs._4_2_ = 0;
  local_68.fields._startMs._6_2_ = 0;
  local_68.fields._enabled = false;
  local_68.fields._hotLoop = false;
  local_68.fields._26_6_ = 0;
  local_68.fields._area = (System_String_o *)0x0;
  local_68.fields._detail = (System_String_o *)0x0;
  detail = System_String__Concat_5302810
                     ("avatar=",(__this->fields)._avatarSprite," banner=",
                      (__this->fields)._bannerSprite,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_40,"ProfilePreviewPanel.Build",detail,(MethodInfo *)0x0);
  local_68.fields._startMs = local_40.fields._startMs;
  local_68.fields._enabled = local_40.fields._enabled;
  local_68.fields._hotLoop = local_40.fields._hotLoop;
  local_68.fields._26_6_ = local_40.fields._26_6_;
  local_68.fields._area = local_40.fields._area;
  local_68.fields._detail = local_40.fields._detail;
  local_40.fields._area = (System_String_o *)0x0;
  local_40.fields._detail = (System_String_o *)&local_68;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_Build_b__3_0,
             (MethodInfo_4A81BE0 *)0x0);
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
  if (Il2CppMethodInitialized_0754561b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRightSmall");
    Il2CppMethodInitialized_0754561b = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                     (ui,"profilePreviewDialog",__this_00,"profile-preview-dialog",layout,pGVar1,(MethodInfo *)0x0
                     );
  if (Il2CppMethodInitialized_0754561c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRightSmall");
    Il2CppMethodInitialized_0754561c = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pGVar2->fields).exit = pGVar1;
  Il2CppCodeGenWriteBarrier(&(pGVar2->fields).exit);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_68,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfilePreviewPanel$$<Build>b__3_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___Build_b__3_0 (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* preview, const MethodInfo* method);
// 0x59045f0

void Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___Build_b__3_0
               (Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *preview,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel___c_StaticFields *pGVar3;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Game_AottgProfilePreviewCard_o *__this_01;
  
  if (Il2CppMethodInitialized_07545644 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c_Build_b__3_1);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c);
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewTitleBar");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-title-bar");
    Il2CppMethodInitialized_07545644 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c);
  }
  pSVar1 = "profilePreviewTitleBar";
  pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->static_fields;
  __this_00 = pGVar3->__9__3_1;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c);
      pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->static_fields;
    }
    object = (Il2CppObject *)pGVar3->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c_Build_b__3_1,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar3 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewPanel_c->static_fields;
    pGVar3->__9__3_1 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar3->__9__3_1);
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
  if (preview == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (preview,pSVar1,__this_00,"profile-preview-title-bar",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  pSVar1 = (__this->fields)._avatarSprite;
  pSVar2 = (__this->fields)._bannerSprite;
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgProfilePreviewCard);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields)._avatarSprite = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._avatarSprite);
  (__this_01->fields)._bannerSprite = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_01->fields)._bannerSprite);
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (preview,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_01,(MethodInfo *)0x0);
  return;
}


