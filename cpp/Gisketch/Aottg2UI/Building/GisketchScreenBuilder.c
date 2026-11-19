// Type: Gisketch.Aottg2UI.Building.GisketchScreenBuilder
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScreenBuilder.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass19_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x538f450

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0___ctor
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass19_0$$<BuildDropdown>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0___BuildDropdown_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x538f460

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0___BuildDropdown_b__0
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  bool bVar2;
  MethodInfo *method_00;
  
  pGVar1 = (__this->fields).sound;
  if (pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0) {
    if (Il2CppMethodInitialized_07542b8e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
      Il2CppMethodInitialized_07542b8e = '\x01';
    }
    bVar2 = System_String__op_Equality((pGVar1->fields)._action,"overlay.close",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    method_00 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play((uint)bVar2,(MethodInfo *)0x0);
    __this_00 = (__this->fields).control;
    if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__Open(__this_00,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass1_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x538f920

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0___ctor
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass1_0$$<BuildButton>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0___BuildButton_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x538f930
// eh: try 0x538fa3b..0x538fc5d -> pad 0x538fc63 (+11 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x538fc89..0x538fc8e -> pad 0x538fca7 cleanup
// eh: try 0x538fcaa..0x538fcb4 -> pad 0x538fcbc catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538fc5d: jmp 0x538fc71
// asm:   0x538fc5f: jmp 0x538fc71
// asm:   0x538fc61: jmp 0x538fc71
// asm:   0x538fc63: jmp 0x538fc71
// asm:   0x538fc65: jmp 0x538fc71
// asm:   0x538fc67: jmp 0x538fc71
// asm:   0x538fc69: jmp 0x538fc71
// asm:   0x538fc6b: jmp 0x538fc71
// asm:   0x538fc6d: jmp 0x538fc71
// asm:   0x538fc6f: jmp 0x538fc71
// asm:   0x538fc71: mov rbx, rax
// asm:   0x538fc74: cmp edx, 1
// asm:   0x538fc77: jne 0x538fcaa
// asm:   0x538fc79: mov rdi, rbx
// asm:   0x538fc7c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x538fc81: mov rbx, qword ptr [rax]
// asm:   0x538fc84: mov qword ptr [rsp + 0x20], rbx
// asm:   0x538fc89: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x538fc8e: lea rdi, [rsp + 0x30]
// asm:   0x538fc93: xor esi, esi
// asm:   0x538fc95: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x538fc9a: test rbx, rbx
// asm:   0x538fc9d: je 0x538fc2b
// asm:   0x538fc9f: mov rdi, rbx
// asm:   0x538fca2: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x538fca7: mov rbx, rax
// asm:   0x538fcaa: lea rdi, [rsp + 0x20]
// asm:   0x538fcaf: call 0x2d4bba0  ; il2cpp_runtime_helper_02d4bba0()
// asm:   0x538fcb4: mov rdi, rbx
// asm:   0x538fcb7: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x538fcbc: mov rdi, rax
// asm:   0x538fcbf: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0___BuildButton_b__0
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar3;
  Il2CppObject *obj;
  Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *pGVar4;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  bool bVar7;
  System_String_o *pSVar8;
  VirtualInvokeData *pVVar9;
  ulong uVar10;
  long lVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_88;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  
  if (Il2CppMethodInitialized_07542b26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"Button.Click");
    il2cpp_codegen_initialize_runtime_metadata(&" action=");
    il2cpp_codegen_initialize_runtime_metadata(&"ignored motion active ");
    Il2CppMethodInitialized_07542b26 = '\x01';
  }
  local_88.fields._startMs = 0;
  local_88.fields._enabled = false;
  local_88.fields._hotLoop = false;
  local_88.fields._26_6_ = 0;
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)0x0;
  pGVar1 = (__this->fields).node;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar8 = System_String__Concat_5301f10
                     ((pGVar1->fields).id," action=",(pGVar1->fields).action,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_68,"Button.Click",pSVar8,(MethodInfo *)0x0);
  local_88.fields._startMs = local_68.fields._startMs;
  local_88.fields._enabled = local_68.fields._enabled;
  local_88.fields._hotLoop = local_68.fields._hotLoop;
  local_88.fields._26_6_ = local_68.fields._26_6_;
  local_88.fields._area = local_68.fields._area;
  local_88.fields._detail = local_68.fields._detail;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  bVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)0x0);
  if (bVar7) {
    pGVar1 = (__this->fields).node;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar8 = System_String__Concat_52f0320("ignored motion active ",(pGVar1->fields).id,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Button.Click",pSVar8,(MethodInfo *)0x0);
  }
  else {
    pGVar2 = (__this->fields).sound;
    if (pGVar2 == (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (Il2CppMethodInitialized_07542b8e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
      Il2CppMethodInitialized_07542b8e = '\x01';
    }
    bVar7 = System_String__op_Equality((pGVar2->fields)._action,"overlay.close",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play((uint)bVar7,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).node;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar7 = System_String__IsNullOrEmpty((pGVar1->fields).action,(MethodInfo *)0x0);
    if (!bVar7) {
      pGVar3 = (__this->fields).context;
      if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
        ThrowNullReferenceException();
      }
      obj = (Il2CppObject *)(pGVar3->fields).Actions;
      if (obj != (Il2CppObject *)0x0) {
        pGVar1 = (__this->fields).node;
        if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          ThrowNullReferenceException();
        }
        pGVar4 = (__this->fields).inputSource;
        if (pGVar4 == (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar8 = (pGVar1->fields).action;
        local_48.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        local_48.fields._24_8_ = 0;
        local_48.fields.ElementId = (System_String_o *)0x0;
        local_48.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
        Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_52ab380
                  (&local_48,(pGVar1->fields).id,(__this->fields).go,pGVar1,
                   (pGVar4->fields)._Source_k__BackingField,(MethodInfo *)0x0);
        local_68.fields._startMs = (int64_t)local_48.fields.Node;
        local_68.fields._24_8_ = local_48.fields._24_8_;
        local_68.fields._area = local_48.fields.ElementId;
        local_68.fields._detail = (System_String_o *)local_48.fields.GameObject;
        pIVar5 = obj->klass;
        uVar10 = (ulong)(pIVar5->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar6 = (pIVar5->_1).interfaceOffsets;
          lVar11 = 0;
          do {
            if (*(Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c **)
                 ((long)&pIVar6->interfaceType + lVar11) ==
                TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
              pVVar9 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar11);
              goto label_0538fbfd;
            }
            lVar11 = lVar11 + 0x10;
          } while (uVar10 * 0x10 != lVar11);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,0);
label_0538fbfd:
        context.fields.GameObject = (UnityEngine_GameObject_o *)local_68.fields._detail;
        context.fields.ElementId = local_68.fields._area;
        context.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)local_68.fields._startMs;
        context.fields._24_8_ = local_68.fields._24_8_;
        (*pVVar9->methodPtr)(obj,pSVar8,context,pVVar9->method);
      }
    }
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_88,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x538fcd0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___ctor
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$<BuildSelect>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x538fce0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__0
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  bool bVar2;
  MethodInfo *method_00;
  
  pGVar1 = (__this->fields).sound;
  if (pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0) {
    if (Il2CppMethodInitialized_07542b8e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
      Il2CppMethodInitialized_07542b8e = '\x01';
    }
    bVar2 = System_String__op_Equality((pGVar1->fields)._action,"overlay.close",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    method_00 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play((uint)bVar2,(MethodInfo *)0x0);
    __this_00 = (__this->fields).control;
    if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__Open(__this_00,method_00);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$<BuildSelect>b__1
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__1 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x538fd70

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__1
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).control;
  if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__Previous(__this_00,1,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$<BuildSelect>b__2
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__2 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x538fe40

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__2
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  MethodInfo *in_RDX;
  
  __this_00 = (__this->fields).control;
  if (__this_00 == (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Actions_AottgChoiceControl__Next(__this_00,1,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass41_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o* __this, const MethodInfo* method);
// 0x538fef0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0___ctor
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass41_0$$<BuildInputField>b__0
// il2cpp: uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0___BuildInputField_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o* __this, System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x538ff00

uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0___BuildInputField_b__0
                   (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o *__this,
                   System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  bool multiline;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *type;
  uint16_t uVar2;
  
  if (Il2CppMethodInitialized_07542b27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542b27 = '\x01';
  }
  pGVar1 = (__this->fields).node;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  type = (pGVar1->fields).inputType;
  multiline = (__this->fields).multiline;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  uVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateInput
                    (type,multiline,text,charIndex,addedChar,(MethodInfo *)0x0);
  return uVar2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass84_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x538ff80

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0___ctor
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass84_0$$<BuildSpriteButton>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0___BuildSpriteButton_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x538ff90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538ffc5: jmp 0x539018c
// asm:   0x539013c: nop dword ptr [rax]

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0___BuildSpriteButton_b__0
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar3;
  Il2CppObject *obj;
  Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *pGVar4;
  System_String_o *actionId;
  Il2CppClass *pIVar5;
  Il2CppRuntimeInterfaceOffsetPair *pIVar6;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  bool bVar7;
  VirtualInvokeData *pVVar8;
  ulong uVar9;
  long lVar10;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_68;
  System_String_o *local_48;
  UnityEngine_GameObject_o *pUStack_40;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_38;
  int32_t iStack_30;
  undefined4 uStack_2c;
  
  if (Il2CppMethodInitialized_07542b28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    Il2CppMethodInitialized_07542b28 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0)
    goto label_0538fffc;
label_0538ffba:
    bVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)0x0);
    if (bVar7) {
      return;
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor != 0)
    goto label_0538ffba;
label_0538fffc:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
    bVar7 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)0x0);
    if (bVar7) {
      return;
    }
  }
  pGVar1 = (__this->fields).sound;
  if (pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0) {
    if (Il2CppMethodInitialized_07542b8e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
      Il2CppMethodInitialized_07542b8e = '\x01';
    }
    bVar7 = System_String__op_Equality((pGVar1->fields)._action,"overlay.close",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play((uint)bVar7,(MethodInfo *)0x0);
    pGVar2 = (__this->fields).node;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      bVar7 = System_String__IsNullOrEmpty((pGVar2->fields).action,(MethodInfo *)0x0);
      if (!bVar7) {
        pGVar3 = (__this->fields).context;
        if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_05390198;
        obj = (Il2CppObject *)(pGVar3->fields).Actions;
        if (obj != (Il2CppObject *)0x0) {
          pGVar2 = (__this->fields).node;
          if ((pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
             (pGVar4 = (__this->fields).inputSource,
             pGVar4 == (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *)0x0)) goto label_05390198;
          actionId = (pGVar2->fields).action;
          local_68.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
          local_68.fields.InputSource = 0;
          local_68.fields._28_4_ = 0;
          local_68.fields.ElementId = (System_String_o *)0x0;
          local_68.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_52ab380
                    (&local_68,(pGVar2->fields).id,(__this->fields).go,pGVar2,
                     (pGVar4->fields)._Source_k__BackingField,(MethodInfo *)0x0);
          local_38 = local_68.fields.Node;
          iStack_30 = local_68.fields.InputSource;
          uStack_2c = local_68.fields._28_4_;
          local_48 = local_68.fields.ElementId;
          pUStack_40 = local_68.fields.GameObject;
          pIVar5 = obj->klass;
          uVar9 = (ulong)(pIVar5->_2).interface_offsets_count;
          if (uVar9 != 0) {
            pIVar6 = (pIVar5->_1).interfaceOffsets;
            lVar10 = 0;
            do {
              if (*(Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c **)
                   ((long)&pIVar6->interfaceType + lVar10) ==
                  TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
                pVVar8 = pIVar5->vtable + *(int *)((long)&pIVar6->offset + lVar10);
                goto label_0539016d;
              }
              lVar10 = lVar10 + 0x10;
            } while (uVar9 * 0x10 != lVar10);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,0);
label_0539016d:
          context.fields.GameObject = pUStack_40;
          context.fields.ElementId = local_48;
          context.fields.Node = local_38;
          context.fields.InputSource = iStack_30;
          context.fields._28_4_ = uStack_2c;
          (*pVVar8->methodPtr)(obj,actionId,context,pVVar8->method);
        }
      }
      return;
    }
  }
label_05390198:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass86_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o* __this, const MethodInfo* method);
// 0x53901a0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0___ctor
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass86_0$$<BuildToggle>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0___BuildToggle_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o* __this, bool __, const MethodInfo* method);
// 0x53901b0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0___BuildToggle_b__0
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o *__this,bool __,
               MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar3;
  Il2CppObject *obj;
  System_String_o *actionId;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  bool bVar6;
  System_String_o **ppSVar7;
  VirtualInvokeData *pVVar8;
  ulong uVar9;
  long lVar10;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_58;
  System_String_o *local_38;
  UnityEngine_GameObject_o *pUStack_30;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_28;
  int32_t iStack_20;
  undefined4 uStack_1c;
  
  if (Il2CppMethodInitialized_07542b29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07542b29 = '\x01';
  }
  pUVar1 = (__this->fields).toggle;
  if ((pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) &&
     (pGVar2 = (__this->fields).node, pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    if ((pUVar1->fields).m_IsOn == false) {
      ppSVar7 = &"false";
    }
    else {
      ppSVar7 = &"true";
    }
    (pGVar2->fields).value = *ppSVar7;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value);
    pGVar2 = (__this->fields).node;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      bVar6 = System_String__IsNullOrEmpty((pGVar2->fields).action,(MethodInfo *)0x0);
      if (!bVar6) {
        pGVar3 = (__this->fields).context;
        if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_05390336;
        obj = (Il2CppObject *)(pGVar3->fields).Actions;
        if (obj != (Il2CppObject *)0x0) {
          pGVar2 = (__this->fields).node;
          if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05390336;
          actionId = (pGVar2->fields).action;
          local_58.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
          local_58.fields.InputSource = 0;
          local_58.fields._28_4_ = 0;
          local_58.fields.ElementId = (System_String_o *)0x0;
          local_58.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                    (&local_58,(pGVar2->fields).id,(__this->fields).go,pGVar2,(MethodInfo *)0x0);
          local_28 = local_58.fields.Node;
          iStack_20 = local_58.fields.InputSource;
          uStack_1c = local_58.fields._28_4_;
          local_38 = local_58.fields.ElementId;
          pUStack_30 = local_58.fields.GameObject;
          pIVar4 = obj->klass;
          uVar9 = (ulong)(pIVar4->_2).interface_offsets_count;
          if (uVar9 != 0) {
            pIVar5 = (pIVar4->_1).interfaceOffsets;
            lVar10 = 0;
            do {
              if (*(Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c **)
                   ((long)&pIVar5->interfaceType + lVar10) ==
                  TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
                pVVar8 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar10);
                goto label_0539030d;
              }
              lVar10 = lVar10 + 0x10;
            } while (uVar9 * 0x10 != lVar10);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,0);
label_0539030d:
          context.fields.GameObject = pUStack_30;
          context.fields.ElementId = local_38;
          context.fields.Node = local_28;
          context.fields.InputSource = iStack_20;
          context.fields._28_4_ = uStack_1c;
          (*pVVar8->methodPtr)(obj,actionId,context,pVVar8->method);
        }
      }
      return;
    }
  }
label_05390336:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass87_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o* __this, const MethodInfo* method);
// 0x5390340

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0___ctor
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass87_0$$<BuildSwitch>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0___BuildSwitch_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o* __this, bool __, const MethodInfo* method);
// 0x5390350

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0___BuildSwitch_b__0
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o *__this,bool __,
               MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar3;
  Il2CppObject *obj;
  System_String_o *actionId;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  bool bVar6;
  System_String_o **ppSVar7;
  VirtualInvokeData *pVVar8;
  ulong uVar9;
  long lVar10;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_58;
  System_String_o *local_38;
  UnityEngine_GameObject_o *pUStack_30;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *local_28;
  int32_t iStack_20;
  undefined4 uStack_1c;
  
  if (Il2CppMethodInitialized_07542b2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07542b2a = '\x01';
  }
  pUVar1 = (__this->fields).toggle;
  if ((pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) &&
     (pGVar2 = (__this->fields).node, pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    if ((pUVar1->fields).m_IsOn == false) {
      ppSVar7 = &"false";
    }
    else {
      ppSVar7 = &"true";
    }
    (pGVar2->fields).value = *ppSVar7;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value);
    pGVar2 = (__this->fields).node;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      bVar6 = System_String__IsNullOrEmpty((pGVar2->fields).action,(MethodInfo *)0x0);
      if (!bVar6) {
        pGVar3 = (__this->fields).context;
        if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_053904d6;
        obj = (Il2CppObject *)(pGVar3->fields).Actions;
        if (obj != (Il2CppObject *)0x0) {
          pGVar2 = (__this->fields).node;
          if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_053904d6;
          actionId = (pGVar2->fields).action;
          local_58.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
          local_58.fields.InputSource = 0;
          local_58.fields._28_4_ = 0;
          local_58.fields.ElementId = (System_String_o *)0x0;
          local_58.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
          Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                    (&local_58,(pGVar2->fields).id,(__this->fields).go,pGVar2,(MethodInfo *)0x0);
          local_28 = local_58.fields.Node;
          iStack_20 = local_58.fields.InputSource;
          uStack_1c = local_58.fields._28_4_;
          local_38 = local_58.fields.ElementId;
          pUStack_30 = local_58.fields.GameObject;
          pIVar4 = obj->klass;
          uVar9 = (ulong)(pIVar4->_2).interface_offsets_count;
          if (uVar9 != 0) {
            pIVar5 = (pIVar4->_1).interfaceOffsets;
            lVar10 = 0;
            do {
              if (*(Gisketch_Aottg2UI_Actions_IGisketchActionHandler_c **)
                   ((long)&pIVar5->interfaceType + lVar10) ==
                  TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler) {
                pVVar8 = pIVar4->vtable + *(int *)((long)&pIVar5->offset + lVar10);
                goto label_053904ad;
              }
              lVar10 = lVar10 + 0x10;
            } while (uVar9 * 0x10 != lVar10);
          }
          pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                             (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,0);
label_053904ad:
          context.fields.GameObject = pUStack_30;
          context.fields.ElementId = local_38;
          context.fields.Node = local_28;
          context.fields.InputSource = iStack_20;
          context.fields._28_4_ = uStack_1c;
          (*pVVar8->methodPtr)(obj,actionId,context,pVVar8->method);
        }
      }
      return;
    }
  }
label_053904d6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildBuiltin
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildBuiltin (System_String_o* type, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x537c060

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildBuiltin
               (System_String_o *type,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  System_String_o *color;
  bool bVar3;
  TMPro_TextMeshProUGUI_o *text;
  System_String_o **ppSVar4;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *extraout_RDX_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *extraout_RDX_01;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *extraout_RDX_02;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *extraout_RDX_03;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *extraout_RDX_04;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar5;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  method_01 = (MethodInfo *)context;
  method_02 = (MethodInfo *)view;
  if (Il2CppMethodInitialized_07542ab6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSectionNavigator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"Radio");
    il2cpp_codegen_initialize_runtime_metadata(&"Checkbox");
    il2cpp_codegen_initialize_runtime_metadata(&"Stack");
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    il2cpp_codegen_initialize_runtime_metadata(&"Spacer");
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Skeleton");
    il2cpp_codegen_initialize_runtime_metadata(&"SearchPalette");
    il2cpp_codegen_initialize_runtime_metadata(&"ScaleBox");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"List");
    il2cpp_codegen_initialize_runtime_metadata(&"Stepper");
    il2cpp_codegen_initialize_runtime_metadata(&"Slider");
    il2cpp_codegen_initialize_runtime_metadata(&"FormDraft");
    il2cpp_codegen_initialize_runtime_metadata(&"ColorSwatch");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"SectionNavigator");
    il2cpp_codegen_initialize_runtime_metadata(&"Divider");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"ScrollView");
    il2cpp_codegen_initialize_runtime_metadata(&"Image");
    il2cpp_codegen_initialize_runtime_metadata(&"Switch");
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteButton");
    Il2CppMethodInitialized_07542ab6 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"Text",5,(MethodInfo *)0x0);
  if (bVar3) {
    if (go != (UnityEngine_GameObject_o *)0x0) {
      text = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText(text,node,style,context,method_01);
      return;
    }
label_0537ca5a:
    ThrowNullReferenceException();
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"Icon",5,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildIcon(go,node,style,context,method_01);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"Button",5,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButton(go,node,style,context,method_01);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"SpriteButton",5,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteButton(go,node,style,context,method_01);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"InputField",5,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = false;
label_0537c3cc:
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildInputField(go,node,style,context,bVar3,method_02);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"SearchPalette",5,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    pGVar5 = extraout_RDX;
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      pGVar5 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSearchPalette
              (go,node,pGVar5,context,view,method_02);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"TextArea",5,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = true;
    goto label_0537c3cc;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"Slider",5,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSlider(go,node,style,context,method_01);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"ColorSwatch",5,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildColorSwatch(go,node,style,context,method_01);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"Switch",5,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  if (bVar3) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSwitch(go,node,style,context,method_01);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"Checkbox",5,(MethodInfo *)0x0);
  if (bVar3) {
label_0537c5e5:
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(type,"Radio",5,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildToggle(go,node,style,context,bVar3,method_02);
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"Radio",5,(MethodInfo *)0x0);
  if (bVar3) goto label_0537c5e5;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"Image",5,(MethodInfo *)0x0);
  if (bVar3) {
    if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537ca5a;
    bVar3 = System_String__IsNullOrEmpty((node->fields).sprite,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildStandaloneSpriteImage
                (go,node,style,context,method_01);
      return;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"Image",5,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(type,"Divider",5,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(type,"Skeleton",5,(MethodInfo *)0x0);
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
      method_00 = (MethodInfo *)(ulong)uVar2;
      if (bVar3) {
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSkeleton(go,style,context,method_00);
        return;
      }
      if (uVar2 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(type,"Stepper",5,(MethodInfo *)0x0);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
      if (bVar3) {
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildStepper(go,node,style,context,view,method_02);
        return;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(type,"ScrollView",5,(MethodInfo *)0x0);
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
      if (bVar3) {
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScrollView(go,node,style,context,method_01);
        return;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(type,"SectionNavigator",5,(MethodInfo *)0x0);
      if (bVar3) {
        if (go != (UnityEngine_GameObject_o *)0x0) {
          __this = UnityEngine_GameObject__AddComponent_object_
                             (go,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSectionNavigator);
          if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
             (__this != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0)) {
            Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Setup
                      (__this,(node->fields).options,(node->fields).value,(node->fields).text,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_52ffe30(type,"ScaleBox",5,(MethodInfo *)0x0);
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
        if (bVar3) {
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScaleBox(go,node,style,context,method_01);
          return;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_52ffe30(type,"Dropdown",5,(MethodInfo *)0x0);
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
        if (bVar3) {
          pGVar5 = extraout_RDX_01;
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            pGVar5 = extraout_RDX_02;
          }
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildDropdown
                    (go,node,pGVar5,context,(Gisketch_Aottg2UI_Building_GisketchView_o *)method_01,method_02);
          return;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_52ffe30(type,"Select",5,(MethodInfo *)0x0);
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
        if (bVar3) {
          pGVar5 = extraout_RDX_03;
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            pGVar5 = extraout_RDX_04;
          }
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSelect
                    (go,node,pGVar5,context,(Gisketch_Aottg2UI_Building_GisketchView_o *)method_01,method_02);
          return;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_52ffe30(type,"FormDraft",5,(MethodInfo *)0x0);
        if (!bVar3) {
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          bVar3 = System_String__Equals_52ffe30(type,"Spacer",5,(MethodInfo *)0x0);
          if (!bVar3) {
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            bVar3 = System_String__Equals_52ffe30(type,"Stack",5,(MethodInfo *)0x0);
            if (!bVar3) {
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              }
              bVar3 = System_String__Equals_52ffe30(type,"List",5,(MethodInfo *)0x0);
              if (!bVar3) {
                if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                }
                Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel(go,node,style,context,method_01);
                return;
              }
            }
          }
          return;
        }
        if (go != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__SetActive(go,false,(MethodInfo *)0x0);
          return;
        }
      }
      goto label_0537ca5a;
    }
  }
  if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_0537ca5a;
  theme = (context->fields).Theme;
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((style->fields).background,(MethodInfo *)0x0);
    if (!bVar3) {
      ppSVar4 = &(style->fields).background;
      goto label_0537c7a1;
    }
  }
  ppSVar4 = &"surface";
label_0537c7a1:
  color = *ppSVar4;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage(go,style,theme,color,false,method_02);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButton
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButton (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x537d4a0
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x537d69f: jmp 0x537e44c
// asm:   0x537dabc: movaps xmm0, xmmword ptr [rip - 0x4378253]
// asm:   0x537db27: jmp 0x537e44c
// asm:   0x537dc20: jmp 0x537e44c
// asm:   0x537dc79: cmp dword ptr [rsp + 0x3c], 0
// asm:   0x537dc7e: sete r14b
// asm:   0x537dc82: cmp byte ptr [rip + 0x21c4e3c], 0
// asm:   0x537dc89: je 0x537dcac
// asm:   0x537dc8b: test rbp, rbp
// asm:   0x537dc90: jmp 0x537e44c
// asm:   0x537dddc: test bpl, bpl
// asm:   0x537dddf: je 0x537ddfb
// asm:   0x537dde1: jmp 0x537deb2
// asm:   0x537dde6: mov r14, qword ptr [rsp + 0x80]
// asm:   0x537ddee: mov ebp, dword ptr [rsp + 0x60]
// asm:   0x537ddf2: test bpl, bpl
// asm:   0x537e262: cmp dword ptr [rsp + 0x3c], 0
// asm:   0x537e389: cmp byte ptr [rip + 0x21c4734], 0
// asm:   0x537e390: je 0x537e3aa
// asm:   0x537e392: xorps xmm0, xmm0
// asm:   0x537e395: test rbx, rbx
// asm:   0x537e39a: jmp 0x537e417
// asm:   0x537e447: jmp 0x537e318

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButton
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_Fields *targetAddress;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o **targetAddress_00;
  System_Nullable_float__Fields *pSVar1;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  UnityEngine_Sprite_o *maskSprite;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar7;
  UnityEngine_Events_UnityEvent_o *__this;
  UnityEngine_GameObject_o **ppUVar8;
  Il2CppType *handle;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *face;
  bool bVar9;
  bool bVar10;
  bool reveal;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o *__this_00;
  System_String_o **ppSVar11;
  UnityEngine_UI_Image_o *pUVar12;
  Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *pGVar13;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar14;
  UnityEngine_UI_Button_o *pUVar15;
  UnityEngine_UI_Image_o *pUVar16;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this_01;
  undefined8 extraout_RAX;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_02;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this_03;
  Gisketch_Aottg2UI_Building_GisketchChildHost_o *pGVar17;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar18;
  UnityEngine_GameObject_o *pUVar19;
  UnityEngine_Transform_o *__this_04;
  UnityEngine_RectTransform_o *rect;
  TMPro_TextMeshProUGUI_o *text;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_05;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_06;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_07;
  UnityEngine_Events_UnityAction_o *__this_08;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *pMVar20;
  int32_t value;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar21;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style_00;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  uint uVar22;
  float fVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  undefined4 uVar26;
  undefined4 uVar27;
  float fVar28;
  float fVar29;
  float fVar30;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o UVar31;
  MethodInfo *in_stack_ffffffffffffff08;
  UnityEngine_UI_RectMask2D_o *pUStack_b8;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGStack_a8;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGStack_90;
  undefined8 uStack_88;
  UnityEngine_UI_Button_o *pUStack_80;
  UnityEngine_GameObject_o **ppUStack_78;
  UnityEngine_UI_Image_o *pUStack_70;
  UnityEngine_RectTransform_o *pUStack_68;
  System_Nullable_float__Fields SStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07542ab7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchBrushButtonFeedback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchBrushButtonIntroReveal);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonInputSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonRelief);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchChildHost);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropdownItemFeedback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass1_0_BuildButton_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass1_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"searchResultItem");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Button Label");
    il2cpp_codegen_initialize_runtime_metadata(&"dropdownItem");
    Il2CppMethodInitialized_07542ab7 = '\x01';
  }
  pUStack_68 = (UnityEngine_RectTransform_o *)0x0;
  SStack_60.hasValue = false;
  SStack_60._1_3_ = 0;
  SStack_60.value = 0.0;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass1_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o *)0x0)
  goto label_0537e44c;
  targetAddress = &__this_00->fields;
  (__this_00->fields).node = node;
  Il2CppCodeGenWriteBarrier(&targetAddress->node);
  targetAddress_00 = &(__this_00->fields).context;
  (__this_00->fields).context = context;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  ppUVar8 = &(__this_00->fields).go;
  (__this_00->fields).go = go;
  Il2CppCodeGenWriteBarrier(ppUVar8);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    fVar23 = 0.0;
    pGVar2 = *targetAddress_00;
  }
  else {
    fVar23 = (style->fields).relief.fields.value;
    pGVar2 = *targetAddress_00;
  }
  if (((pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
      (pGVar3 = (pGVar2->fields).Theme, pGVar3 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) ||
     (targetAddress->node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_0537e44c;
  fVar23 = fVar23 * (pGVar3->fields)._ReliefIntensity_k__BackingField;
  bVar9 = System_String__IsNullOrEmpty((targetAddress->node->fields).sprite,(MethodInfo *)0x0);
  if (bVar9) {
    if (Il2CppMethodInitialized_0753e7b4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
      Il2CppMethodInitialized_0753e7b4 = '\x01';
    }
    fVar28 = ABS(fVar23);
    if (fVar28 <= 0.0) {
      fVar28 = 0.0;
    }
    fVar30 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
    fVar29 = fVar28 * 1e-06;
    if (fVar28 * 1e-06 <= fVar30) {
      fVar29 = fVar30;
    }
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
    pUVar19 = *ppUVar8;
    pGVar2 = *targetAddress_00;
    if (ABS(0.0 - fVar23) < fVar29) {
      if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_0537e44c;
      if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        ppSVar11 = &"primary";
      }
      else {
        ppSVar11 = &(style->fields).background;
      }
      pGVar3 = (pGVar2->fields).Theme;
      pSVar4 = *ppSVar11;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      pUVar12 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                          (pUVar19,style,pGVar3,pSVar4,false,in_R9);
      goto label_0537d87f;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pUVar12 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFace
                        (pUVar19,style,pGVar2,fVar23,(UnityEngine_RectTransform_o **)&pGStack_90,method);
    if (*ppUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_0537e44c;
    pUStack_b8 = UnityEngine_GameObject__GetComponent_object_
                           (*ppUVar8,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    bVar9 = false;
  }
  else {
    pGStack_90 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
    pUVar19 = *ppUVar8;
    pGVar5 = targetAddress->node;
    pGVar2 = *targetAddress_00;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    in_R9 = (MethodInfo *)0x1;
    pUVar12 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
                        (pUVar19,pGVar5,style,pGVar2,false,true,in_stack_ffffffffffffff08);
label_0537d87f:
    pUStack_b8 = (UnityEngine_UI_RectMask2D_o *)0x0;
    bVar9 = true;
  }
  if (*ppUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_0537e44c;
  pGVar13 = UnityEngine_GameObject__AddComponent_object_
                      (*ppUVar8,(MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonInputSource);
  (__this_00->fields).inputSource = pGVar13;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).inputSource);
  pUVar19 = (__this_00->fields).go;
  if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_0537e44c;
  pGVar14 = UnityEngine_GameObject__AddComponent_object_
                      (pUVar19,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
  (__this_00->fields).sound = pGVar14;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).sound);
  pGVar5 = (__this_00->fields).node;
  if ((pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     (pGVar14 = (__this_00->fields).sound, pGVar14 == (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0))
  goto label_0537e44c;
  (pGVar14->fields)._action = (pGVar5->fields).action;
  Il2CppCodeGenWriteBarrier(&(pGVar14->fields)._action);
  if (*ppUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_0537e44c;
  pUVar15 = UnityEngine_GameObject__AddComponent_object_
                      (*ppUVar8,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Button);
  pUVar16 = pUVar12;
  if (!bVar9) {
    if (*ppUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_0537e44c;
    pUVar16 = UnityEngine_GameObject__GetComponent_object_
                        (*ppUVar8,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  }
  if (pUVar15 == (UnityEngine_UI_Button_o *)0x0) goto label_0537e44c;
  UnityEngine_UI_Selectable__set_targetGraphic
            ((UnityEngine_UI_Selectable_o *)pUVar15,(UnityEngine_UI_Graphic_o *)pUVar16,(MethodInfo *)0x0);
  UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)pUVar15,0,(MethodInfo *)0x0);
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_34 = 0;
  uStack_58 = 3;
  pUStack_80 = pUVar15;
  UnityEngine_UI_Selectable__set_navigation
            ((UnityEngine_UI_Selectable_o *)pUVar15,(UnityEngine_UI_Navigation_o)ZEXT840(3),(MethodInfo *)0x0)
  ;
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
label_0537da59:
    if (*ppUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_0537e44c;
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (*ppUVar8,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity
                          );
    if (((*targetAddress_00 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
        (pGVar3 = ((*targetAddress_00)->fields).Theme,
        pGVar3 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) ||
       (__this_01 == (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *)0x0)) goto label_0537e44c;
    if ((pGVar3->fields)._IsDarkMode_k__BackingField == false) {
      uVar26 = 0x3f19999a;
      uVar27 = 0x3f666666;
      uVar24 = 0x3f19999a;
      uVar25 = 0x3f19999a;
    }
    else {
      uVar27 = 0x3e99999a;
      uVar26 = 0x3f800000;
      uVar24 = 0x3f800000;
      uVar25 = 0x3f800000;
    }
    UVar31.fields.g = (float)uVar25;
    UVar31.fields.r = (float)uVar24;
    UVar31.fields.a = (float)uVar27;
    UVar31.fields.b = (float)uVar26;
    Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Setup_529e950
              (__this_01,UVar31,(MethodInfo *)0x0);
    uStack_88 = CONCAT71((int7)((ulong)extraout_RAX >> 8),1);
  }
  else {
    pSVar4 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    uStack_88 = 0;
    bVar10 = System_String__Equals_52ffe30(pSVar4,"dropdownItem",5,(MethodInfo *)0x0);
    if (!bVar10) {
      pSVar4 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      uStack_88 = 0;
      bVar10 = System_String__Equals_52ffe30(pSVar4,"searchResultItem",5,(MethodInfo *)0x0);
      if (!bVar10) goto label_0537da59;
    }
  }
  pUVar19 = *ppUVar8;
  if (bVar9) {
    if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_0537e44c;
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                 UnityEngine_GameObject__GetComponent_object_
                           (pUVar19,(MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_0537e44c;
    __this_02 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar19,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonRelief);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      SStack_60.hasValue = false;
      SStack_60._1_3_ = 0;
      SStack_60.value = 0.0;
      pSVar1 = &SStack_60;
    }
    else {
      pSVar1 = &(style->fields).pressDepth.fields;
    }
    if (__this_02 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) goto label_0537e44c;
    in_R9 = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
              (__this_02,pUVar12,(UnityEngine_RectTransform_o *)pGStack_90,fVar23,pUStack_b8,
               (System_Nullable_float__o)*pSVar1,(MethodInfo *)0x0);
    pGStack_a8 = pGStack_90;
  }
  pUStack_70 = pUVar12;
  if (targetAddress->node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537e44c;
  pMVar20 = (MethodInfo *)0x0;
  bVar10 = System_String__IsNullOrEmpty((targetAddress->node->fields).text,(MethodInfo *)0x0);
  uVar22 = 1;
  if (bVar10) {
    if (targetAddress->node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537e44c;
    pMVar20 = (MethodInfo *)0x0;
    bVar10 = System_String__IsNullOrEmpty((targetAddress->node->fields).textKey,(MethodInfo *)0x0);
    uVar22 = (uint)!bVar10;
  }
  pGVar5 = targetAddress->node;
  if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537e44c;
  bVar10 = true;
  if ((pGVar5->fields).hasIcon == false) {
    pMVar20 = (MethodInfo *)0x0;
    bVar10 = System_String__IsNullOrEmpty((pGVar5->fields).icon,(MethodInfo *)0x0);
    bVar10 = !bVar10;
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0537dc3e;
label_0537dbe7:
    pSVar4 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    reveal = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushButtonStyle(pSVar4,pMVar20);
    pGVar2 = *targetAddress_00;
  }
  else {
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0537dbe7;
label_0537dc3e:
    reveal = false;
    pGVar2 = *targetAddress_00;
  }
  if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_0537e44c;
  pUVar19 = *ppUVar8;
  pGVar3 = (pGVar2->fields).Theme;
  ppUStack_78 = ppUVar8;
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_07542ac5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"focusRing");
    Il2CppMethodInitialized_07542ac5 = '\x01';
  }
  if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_0537e44c;
  __this_03 = UnityEngine_GameObject__AddComponent_object_
                        (pUVar19,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
  if (pGVar3 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_0537e44c;
  fallback.fields.b = 1.0;
  fallback.fields.a = 1.0;
  fallback.fields.r = 1.0;
  fallback.fields.g = 1.0;
  UVar31 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                     (pGVar3,"primary",fallback,(MethodInfo *)0x0);
  UVar31 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                     (pGVar3,"focusRing",UVar31,(MethodInfo *)0x0);
  if (__this_03 == (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0) goto label_0537e44c;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup
            (__this_03,UVar31,3.0,5.0,14.0,(bool)(reveal == false & (byte)uStack_88),(MethodInfo *)0x0);
  ppUVar8 = ppUStack_78;
  pUStack_68 = (UnityEngine_RectTransform_o *)0x0;
  style_00 = pGStack_90;
  if ((uVar22 != 0) && (reveal != false || bVar10)) {
    if (pUStack_70 == (UnityEngine_UI_Image_o *)0x0) goto label_0537e44c;
    maskSprite = (pUStack_70->fields).m_Sprite;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                 Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent_5283020
                           ((UnityEngine_RectTransform_o *)pGStack_a8,style,reveal,maskSprite,&pUStack_68,
                            in_R9);
    style_00 = pGStack_90;
  }
  pGStack_90 = style_00;
  if (!bVar9) {
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)pGStack_a8,(UnityEngine_Object_o *)style_00,(MethodInfo *)0x0);
    face = pGStack_90;
    if (bVar9) {
      if (targetAddress->node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537e44c;
      pGVar6 = (targetAddress->node->fields).children;
      if ((pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) && (pGVar6->max_length != 0))
      {
        pMVar20 = extraout_RDX;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          pMVar20 = extraout_RDX_00;
        }
        pGStack_a8 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)
                     Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFaceContent
                               ((UnityEngine_RectTransform_o *)face,style_00,pMVar20);
      }
    }
    if ((*ppUVar8 == (UnityEngine_GameObject_o *)0x0) ||
       (pGVar17 = UnityEngine_GameObject__AddComponent_object_
                            (*ppUVar8,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_GisketchChildHost),
       pGVar17 == (Gisketch_Aottg2UI_Building_GisketchChildHost_o *)0x0)) goto label_0537e44c;
    (pGVar17->fields)._Parent_k__BackingField = (UnityEngine_Transform_o *)pGStack_a8;
    Il2CppCodeGenWriteBarrier(&(pGVar17->fields)._Parent_k__BackingField);
  }
  pGVar5 = targetAddress->node;
  pGVar2 = *targetAddress_00;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pMVar20 = (MethodInfo *)(ulong)uVar22;
  pUVar12 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonIcon
                      (pGVar5,(UnityEngine_RectTransform_o *)pGStack_a8,style,pGVar2,SUB41(uVar22,0),in_R9);
  if (uVar22 == 0) {
    text = (TMPro_TextMeshProUGUI_o *)0x0;
  }
  else {
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_0537e44c;
    if ((obj != (System_Type_o *)0x0) &&
       (pIVar18 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
       pIVar18 == (Il2CppObject *)0x0)) {
      pIVar18 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar18,(MethodInfo *)0x0);
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pUVar19 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(pUVar19,"AoTTG Button Label",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if ((pUVar19 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_04 = UnityEngine_GameObject__get_transform(pUVar19,(MethodInfo *)0x0),
       __this_04 == (UnityEngine_Transform_o *)0x0)) goto label_0537e44c;
    UnityEngine_Transform__SetParent_692d510
              (__this_04,(UnityEngine_Transform_o *)pGStack_a8,false,(MethodInfo *)0x0);
    if (!bVar10) {
      method_00 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
      rect = UnityEngine_GameObject__GetComponent_object_
                       (pUVar19,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(rect,method_00);
    }
    text = UnityEngine_GameObject__AddComponent_object_
                     (pUVar19,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    pGVar5 = targetAddress->node;
    pGVar2 = *targetAddress_00;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText(text,pGVar5,style,pGVar2,pMVar20);
    if (Il2CppMethodInitialized_07542ac2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"left");
      Il2CppMethodInitialized_07542ac2 = '\x01';
    }
    value = 0x1001;
    if (!bVar10) {
      if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        pSVar4 = (style->fields).textAlignment;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar9 = System_String__Equals_52ffe30(pSVar4,"left",5,(MethodInfo *)0x0);
        if (bVar9) goto label_0537e0fc;
      }
      value = 0x202;
    }
label_0537e0fc:
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0537e44c;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)text,value,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,false,(MethodInfo *)0x0);
  }
  pUVar19 = *ppUVar8;
  pGVar5 = targetAddress->node;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyButtonMeasure(pUVar19,pGVar5,text,style,bVar10,in_R9)
  ;
  pUVar15 = pUStack_80;
  if ((byte)uStack_88 == '\0') {
    pUVar19 = *ppUVar8;
    pMVar20 = extraout_RDX_01;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      pMVar20 = extraout_RDX_03;
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AllowButtonTextClipping(pUVar19,text,0.0,pMVar20);
    if (*ppUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_0537e44c;
    __this_05 = UnityEngine_GameObject__AddComponent_object_
                          (*ppUVar8,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropdownItemFeedback
                          );
    if ((*targetAddress_00 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (__this_05 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0)) goto label_0537e44c;
    Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Setup
              (__this_05,pUStack_70,text,((*targetAddress_00)->fields).Theme,pUVar12,(MethodInfo *)0x0);
  }
  else {
    if (targetAddress->node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537e44c;
    if ((targetAddress->node->fields).clip != false) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar9 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar9) {
        if (targetAddress->node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537e44c;
        pGVar7 = (targetAddress->node->fields).layout;
        if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar21 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
        }
        else {
          pGVar21 = (pGVar7->fields).minWidth;
        }
        pUVar19 = *ppUVar8;
        pMVar20 = extraout_RDX_02;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          pMVar20 = extraout_RDX_04;
        }
        if (Il2CppMethodInitialized_07542ac4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          il2cpp_codegen_initialize_runtime_metadata(&"point");
          Il2CppMethodInitialized_07542ac4 = '\x01';
          pMVar20 = extraout_RDX_05;
        }
        fVar23 = 0.0;
        if (pGVar21 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          pSVar4 = (pGVar21->fields).unit;
          if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          bVar9 = System_String__Equals_52ffe30(pSVar4,"point",5,(MethodInfo *)0x0);
          fVar23 = 0.0;
          pMVar20 = extraout_RDX_06;
          pUVar15 = pUStack_80;
          if (bVar9) {
            fVar23 = (pGVar21->fields).value;
          }
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AllowButtonTextClipping(pUVar19,text,fVar23,pMVar20)
        ;
        ppUVar8 = ppUStack_78;
        Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup(*ppUStack_78,text,true,(MethodInfo *)0x0);
      }
    }
  }
  if (reveal != false) {
    if (*ppUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_0537e44c;
    __this_06 = UnityEngine_GameObject__AddComponent_object_
                          (*ppUVar8,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_GisketchBrushButtonFeedback
                          );
    pUVar16 = pUStack_70;
    if ((*targetAddress_00 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (__this_06 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0)) goto label_0537e44c;
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Setup
              (__this_06,pUStack_70,text,pUVar12,(UnityEngine_RectTransform_o *)pGStack_a8,
               ((*targetAddress_00)->fields).Theme,(MethodInfo *)0x0);
    if ((*ppUVar8 == (UnityEngine_GameObject_o *)0x0) ||
       ((__this_07 = UnityEngine_GameObject__AddComponent_object_
                               (*ppUVar8,(MethodInfo_353B6A0 *)
                                         MethodInfo_UnityEngine_GameObject_AddComponent_GisketchBrushButtonIntroReveal
                               ), pUVar16 == (UnityEngine_UI_Image_o *)0x0 ||
        (__this_07 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0)))) goto label_0537e44c;
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Setup
              (__this_07,pUStack_68,(UnityEngine_RectTransform_o *)pGStack_a8,(pUVar16->fields).m_Sprite,
               (MethodInfo *)0x0);
  }
  __this = (UnityEngine_Events_UnityEvent_o *)(pUVar15->fields).m_OnClick;
  __this_08 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            (__this_08,(Il2CppObject *)__this_00,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass1_0_BuildButton_b__0,
             (MethodInfo *)0x0);
  if (__this != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__AddListener(__this,__this_08,(MethodInfo *)0x0);
    return;
  }
label_0537e44c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsBrushButtonStyle
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushButtonStyle (System_String_o* name, const MethodInfo* method);
// 0x5382ea0

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushButtonStyle
               (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542ab8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelBrushButton");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuBrushButton");
    Il2CppMethodInitialized_07542ab8 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar1 = System_String__Equals_52ffe30(name,"mainMenuBrushButton",5,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar1 = System_String__Equals_52ffe30(name,"brushSidePanelBrushButton",5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonFace
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFace (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, float relief, UnityEngine_RectTransform_o** face, const MethodInfo* method);
// 0x5382320

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFace
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,float relief,
          UnityEngine_RectTransform_o **face,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  System_String_o *color;
  Il2CppType *handle;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_UI_RectMask2D_o *__this;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  MethodInfo *method_00;
  System_String_o **ppSVar4;
  UnityEngine_Material_o *__this_02;
  MethodInfo *in_R9;
  UnityEngine_Color_o UVar5;
  
  if (Il2CppMethodInitialized_07542ab9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Button Face");
    Il2CppMethodInitialized_07542ab9 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    }
    if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
       (pGVar1 = (context->fields).Theme, pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      UVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (pGVar1,"shadow",
                         (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
        (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                  (pUVar2,UVar5,(pUVar2->klass->vtable)._23_set_color.method);
        (*(pUVar2->klass->vtable)._33_set_material.methodPtr)
                  (pUVar2,(UnityEngine_Material_o *)0x0,(pUVar2->klass->vtable)._33_set_material.method);
        __this = UnityEngine_GameObject__AddComponent_object_
                           (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D
                           );
        if (__this != (UnityEngine_UI_RectMask2D_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
          components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
          handle = TypeRef_UnityEngine_RectTransform;
          if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_075567a8);
          }
          obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
          if (components != (System_Type_array *)0x0) {
            if (obj != (System_Type_o *)0x0) {
              pIVar3 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
              if (pIVar3 == (Il2CppObject *)0x0) {
                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
              }
            }
            if ((int)components->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            components->m_Items[0] = obj;
            Il2CppCodeGenWriteBarrier(components->m_Items);
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_691aa60
                      (__this_00,"AoTTG Button Face",components,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
              parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
              if (__this_01 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
                method_00 = (MethodInfo *)
                            UnityEngine_GameObject__GetComponent_object_
                                      (__this_00,
                                       (MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                *face = (UnityEngine_RectTransform_o *)method_00;
                Il2CppCodeGenWriteBarrier(face);
                Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(*face,method_00);
                if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                  ppSVar4 = &"primary";
                }
                else {
                  ppSVar4 = &(style->fields).background;
                }
                pGVar1 = (context->fields).Theme;
                color = *ppSVar4;
                if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                }
                pUVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                                   (__this_00,style,pGVar1,color,true,in_R9);
                if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                  __this_02 = (*(pUVar2->klass->vtable)._32_get_material.methodPtr)
                                        (pUVar2,(pUVar2->klass->vtable)._32_get_material.method);
                  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
                  }
                  if (__this_02 != (UnityEngine_Material_o *)0x0) {
                    UnityEngine_Material__SetFloat_68e0ad0
                              (__this_02,
                               TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->static_fields->
                               ReliefId,relief,(MethodInfo *)0x0);
                    (*(pUVar2->klass->vtable)._25_set_raycastTarget.methodPtr)
                              (pUVar2,false,(pUVar2->klass->vtable)._25_set_raycastTarget.method);
                    return pUVar2;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonFaceContent
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFaceContent (UnityEngine_RectTransform_o* face, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x53834e0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFaceContent
          (UnityEngine_RectTransform_o *face,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *rect;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07542aba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Button Face Content");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    Il2CppMethodInitialized_07542aba = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Button Face Content",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UnityEngine_Transform__SetParent_692d510
                  (__this_00,(UnityEngine_Transform_o *)face,false,(MethodInfo *)0x0);
        method_01 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(rect,method_01);
        flex = UnityEngine_GameObject__AddComponent_object_
                         (__this,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (__this_01->fields).justify = "Center";
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).justify);
          (__this_01->fields).alignItems = "Center";
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).alignItems);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex
                    (flex,__this_01,(Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0,method_00);
          return rect;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildStepper
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildStepper (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5381200

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildStepper
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this;
  ulong uVar6;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar7;
  ulong uVar8;
  
  pMVar7 = (MethodInfo *)view;
  if (Il2CppMethodInitialized_07542abb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542abb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel(go,node,style,context,pMVar7);
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_05381356:
    ThrowNullReferenceException();
  }
  pGVar2 = (node->fields).steps;
  if (((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0) &&
      (uVar6 = pGVar2->max_length, uVar6 != 0)) && (0 < (int)uVar6)) {
    if (go == (UnityEngine_GameObject_o *)0x0) {
      pGVar3 = pGVar2->m_Items[0];
      pSVar4 = (node->fields).style;
      pMVar7 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        pMVar7 = extraout_RDX_02;
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StepNode(pGVar3,pSVar4,pMVar7);
      ThrowNullReferenceException();
    }
    uVar8 = 0;
    method_00 = extraout_RDX;
    do {
      if ((uVar6 & 0xffffffff) <= uVar8) {
label_0538135b:
        ThrowIndexOutOfRangeException();
      }
      pGVar3 = pGVar2->m_Items[uVar8];
      pSVar4 = (node->fields).style;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        method_00 = extraout_RDX_00;
      }
      node_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StepNode(pGVar3,pSVar4,method_00);
      parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      __this = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode(node_00,parent,context,view,pMVar7)
      ;
      pGVar5 = (node->fields).steps;
      if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0) goto label_05381356;
      if ((int)pGVar5->max_length == 0) goto label_0538135b;
      if (__this == (UnityEngine_GameObject_o *)0x0) goto label_05381356;
      UnityEngine_GameObject__SetActive(__this,pGVar3 == pGVar5->m_Items[0],(MethodInfo *)0x0);
      uVar8 = uVar8 + 1;
      uVar1 = (uint)pGVar2->max_length;
      uVar6 = (ulong)uVar1;
      method_00 = extraout_RDX_01;
    } while ((long)uVar8 < (long)(int)uVar1);
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$StepNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StepNode (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o* step, System_String_o* style, const MethodInfo* method);
// 0x53854b0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StepNode
          (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *step,System_String_o *style,
          MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o **ppSVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07542abc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Step");
    Il2CppMethodInitialized_07542abc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    if (step != (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *)0x0) {
      bVar1 = System_String__IsNullOrEmpty((step->fields).id,(MethodInfo *)0x0);
      if (bVar1) {
        ppSVar2 = &"Step";
      }
      else {
        ppSVar2 = &(step->fields).id;
      }
      (__this->fields).id = ((Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_Fields *)ppSVar2)->id;
      Il2CppCodeGenWriteBarrier(&(__this->fields).id);
      (__this->fields).style = style;
      Il2CppCodeGenWriteBarrier(&(__this->fields).style);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
      Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_00->fields).direction = "Column";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).direction);
        (__this_00->fields).alignItems = "Stretch";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).alignItems);
        (__this->fields).layout = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
        pGVar3 = (step->fields).children;
        if ((pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
           (pGVar3->max_length != 0)) {
label_053856dc:
          (__this->fields).children = pGVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields).children);
          return __this;
        }
        pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_01->fields).type = "Text";
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).type);
          pSVar4 = (step->fields).text;
          if (pSVar4 == (System_String_o *)0x0) {
            pSVar4 = (step->fields).title;
          }
          (__this_01->fields).text = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).text);
          pSVar4 = (step->fields).textKey;
          if (pSVar4 == (System_String_o *)0x0) {
            pSVar4 = (step->fields).titleKey;
          }
          (__this_01->fields).textKey = pSVar4;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).textKey);
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar3->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            pGVar3->m_Items[0] = __this_01;
            Il2CppCodeGenWriteBarrier(pGVar3->m_Items);
            goto label_053856dc;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyPanel
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x5382130

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  System_String_o *color;
  bool bVar1;
  bool bVar2;
  UnityEngine_UI_Image_o *pUVar3;
  MethodInfo *in_R9;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (Il2CppMethodInitialized_07542abd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_07542abd = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar2 = false;
  }
  else {
    bVar1 = System_String__IsNullOrEmpty((node->fields).tooltip,(MethodInfo *)0x0);
    bVar2 = true;
    if (bVar1) {
      bVar2 = System_String__IsNullOrEmpty((node->fields).tooltipKey,(MethodInfo *)0x0);
      bVar2 = !bVar2;
    }
    bVar1 = System_String__IsNullOrEmpty((node->fields).sprite,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
                (go,node,style,context,false,bVar2,in_stack_ffffffffffffffc8);
      return;
    }
  }
  if (((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
      (bVar1 = System_String__IsNullOrEmpty((style->fields).background,(MethodInfo *)0x0), bVar1)) ||
     (bVar1 = System_String__op_Equality((style->fields).background,"clear",(MethodInfo *)0x0),
     bVar1)) {
    if (bVar2 == false) {
      return;
    }
    if ((go != (UnityEngine_GameObject_o *)0x0) &&
       ((pUVar3 = UnityEngine_GameObject__GetComponent_object_
                            (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image),
        pUVar3 != (UnityEngine_UI_Image_o *)0x0 ||
        (pUVar3 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image),
        pUVar3 != (UnityEngine_UI_Image_o *)0x0)))) {
      (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                (pUVar3,(UnityEngine_Color_o)ZEXT816(0),(pUVar3->klass->vtable)._23_set_color.method);
      (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pUVar3,true,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
      return;
    }
  }
  else if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    theme = (context->fields).Theme;
    color = (style->fields).background;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage(go,style,theme,color,false,in_R9);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, System_String_o* color, bool reliefGradient, const MethodInfo* method);
// 0x5380d70

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *color,bool reliefGradient,
          MethodInfo *method)

{
  System_Nullable_bool__Fields SVar1;
  System_Nullable_float__Fields stainScaleOverride;
  UnityEngine_UI_Image_o *graphic;
  UnityEngine_Material_o *pUVar2;
  MethodInfo *method_00;
  bool bVar3;
  bool reliefGradient_00;
  float relief;
  float fVar4;
  float fVar5;
  float fVar6;
  UnityEngine_Color_o UVar7;
  
  method_00 = (MethodInfo *)color;
  if (Il2CppMethodInitialized_07542abe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    Il2CppMethodInitialized_07542abe = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    graphic = UnityEngine_GameObject__GetComponent_object_
                        (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    if (graphic == (UnityEngine_UI_Image_o *)0x0) {
      graphic = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    }
    if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      UVar7.fields.b = 0.12;
      UVar7.fields.a = 0.92;
      UVar7.fields.r = 0.08;
      UVar7.fields.g = 0.09;
      UVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(theme,color,UVar7,(MethodInfo *)0x0);
      if (graphic != (UnityEngine_UI_Image_o *)0x0) {
        (*(graphic->klass->vtable)._23_set_color.methodPtr)
                  (graphic,UVar7,(graphic->klass->vtable)._23_set_color.method);
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyShadow(go,style,theme,method_00);
        if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
           ((style->fields).textured.fields.value == false)) {
          (*(graphic->klass->vtable)._33_set_material.methodPtr)
                    (graphic,(UnityEngine_Material_o *)0x0,(graphic->klass->vtable)._33_set_material.method);
        }
        else {
          relief = (style->fields).relief.fields.value * (theme->fields)._ReliefIntensity_k__BackingField;
          SVar1 = (style->fields).worn.fields;
          bVar3 = SVar1.hasValue == false;
          if (Il2CppMethodInitialized_0753e7b4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
            Il2CppMethodInitialized_0753e7b4 = '\x01';
          }
          fVar4 = ABS(relief);
          if (fVar4 <= 0.0) {
            fVar4 = 0.0;
          }
          fVar6 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
          fVar5 = fVar4 * 1e-06;
          if (fVar4 * 1e-06 <= fVar6) {
            fVar5 = fVar6;
          }
          if (ABS(0.0 - relief) < fVar5 && (0xff >= (ushort)SVar1 && !bVar3)) {
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
            }
            pUVar2 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)0x0);
            (*(graphic->klass->vtable)._33_set_material.methodPtr)
                      (graphic,pUVar2,(graphic->klass->vtable)._33_set_material.method);
          }
          else {
            reliefGradient_00 = true;
            if (!reliefGradient) {
              reliefGradient_00 = (style->fields).reliefGradient.fields.value != false;
            }
            stainScaleOverride = (style->fields).wornStainScale.fields;
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
            }
            pUVar2 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
                               (relief,reliefGradient_00,0xff < (ushort)SVar1 || bVar3,
                                (System_Nullable_float__o)stainScaleOverride,false,false,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Assign
                      ((UnityEngine_UI_Graphic_o *)graphic,pUVar2,(MethodInfo *)0x0);
          }
        }
        return graphic;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyText
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText (TMPro_TextMeshProUGUI_o* text, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x537cb40

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText
               (TMPro_TextMeshProUGUI_o *text,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *obj;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool bVar5;
  bool bVar6;
  int32_t iVar7;
  VirtualInvokeData *pVVar8;
  TMPro_TMP_FontAsset_o *value;
  System_String_o *pSVar9;
  ulong uVar10;
  TMPro_TextMeshProUGUI_o *pTVar11;
  MethodInfo *method_00;
  long lVar12;
  TMPro_TextMeshProUGUI_o *__this_00;
  int value_00;
  System_String_o *pSVar13;
  float fVar14;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o UVar15;
  TMPro_TextMeshProUGUI_o *local_48;
  
  if (Il2CppMethodInitialized_07542abf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_GetValueOrDefault_719ae28);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardSocialText");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteSlotText");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreateChoiceTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"gameCreateFavoritesTitle");
    il2cpp_codegen_initialize_runtime_metadata(&"settingLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"italic");
    il2cpp_codegen_initialize_runtime_metadata(&"profileHoverBio");
    Il2CppMethodInitialized_07542abf = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537d10d;
  bVar5 = System_String__IsNullOrEmpty((node->fields).textKey,(MethodInfo *)0x0);
  if (bVar5) {
label_0537cc9b:
    pSVar9 = (node->fields).text;
    if (pSVar9 == (System_String_o *)0x0) goto label_0537d142;
label_0537cca8:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_0537d10d;
    obj = (Il2CppObject *)(context->fields).Localizer;
    if (obj == (Il2CppObject *)0x0) goto label_0537cc9b;
    pSVar9 = (node->fields).text;
    pSVar13 = (node->fields).textKey;
    pIVar2 = obj->klass;
    uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar10 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Gisketch_Aottg2UI_Localization_IGisketchLocalizer_c **)((long)&pIVar3->interfaceType + lVar12)
            == TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer) {
          pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
          goto label_0537d126;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar10 * 0x10 != lVar12);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,0);
label_0537d126:
    pSVar9 = (*pVVar8->methodPtr)(obj,pSVar13,pSVar9,pVVar8->method);
    if (pSVar9 != (System_String_o *)0x0) goto label_0537cca8;
label_0537d142:
    pSVar9 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchArabicText);
  }
  pSVar9 = Gisketch_Aottg2UI_Styling_GisketchArabicText__ToVisual(pSVar9,false,(MethodInfo *)0x0);
  bVar5 = System_String__IsNullOrEmpty((node->fields).tooltip,(MethodInfo *)0x0);
  bVar6 = true;
  if (bVar5) {
    bVar6 = System_String__IsNullOrEmpty((node->fields).tooltipKey,(MethodInfo *)0x0);
    bVar6 = !bVar6;
  }
  if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0537d10d;
  (*(text->klass->vtable)._25_set_raycastTarget.methodPtr)
            (text,bVar6,(text->klass->vtable)._25_set_raycastTarget.method);
  TMPro_TMP_Text__set_enableWordWrapping
            ((TMPro_TMP_Text_o *)text,(node->fields).clip == false,(MethodInfo *)0x0);
  if ((node->fields).clip != false) {
    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    local_48 = (TMPro_TextMeshProUGUI_o *)0x0;
    iVar7 = 400;
    fVar14 = Gisketch_Aottg2UI_Styling_GisketchTypography__FontSize
                       ((System_String_o *)0x0,400,24.0,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)text,fVar14,(MethodInfo *)0x0);
    pSVar13 = (System_String_o *)0x0;
    pTVar11 = text;
  }
  else {
    pSVar13 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_52ffe30(pSVar13,"profileCardSocialText",5,(MethodInfo *)0x0);
    if (bVar5) {
      TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,false,(MethodInfo *)0x0);
      TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
    }
    pSVar13 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_52ffe30(pSVar13,"profileEmoteSlotText",5,(MethodInfo *)0x0);
    if (bVar5) {
      TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
    }
    pSVar13 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_52ffe30(pSVar13,"profileHoverBio",5,(MethodInfo *)0x0);
    if (bVar5) {
      TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
    }
    pSVar13 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_52ffe30(pSVar13,"settingLabel",5,(MethodInfo *)0x0);
    if (bVar5) {
      TMPro_TMP_Text__set_textWrappingMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
      TMPro_TMP_Text__set_maxVisibleLines((TMPro_TMP_Text_o *)text,2,(MethodInfo *)0x0);
      TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
    }
    pSVar13 = (style->fields).fontFamily;
    iVar7 = System_Nullable_int___GetValueOrDefault_3cd4bf0
                      (&(style->fields).fontWeight,400,
                       (MethodInfo_3CD4BF0 *)MethodInfo_System_Nullable_int_GetValueOrDefault_719ae28);
    if ((style->fields).fontSize.fields.value <= 0.0) {
      fVar14 = 24.0;
    }
    else {
      fVar14 = System_Nullable_float___get_Value
                         (&(style->fields).fontSize,
                          (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    }
    fVar14 = Gisketch_Aottg2UI_Styling_GisketchTypography__FontSize(pSVar13,iVar7,fVar14,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)text,fVar14,(MethodInfo *)0x0);
    pSVar4 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_52ffe30(pSVar4,"gameCreateChoiceTitle",5,(MethodInfo *)0x0);
    if (bVar5) {
label_0537cf8a:
      TMPro_TMP_Text__set_textWrappingMode((TMPro_TMP_Text_o *)text,0,(MethodInfo *)0x0);
      TMPro_TMP_Text__set_enableAutoSizing((TMPro_TMP_Text_o *)text,true,(MethodInfo *)0x0);
      TMPro_TMP_Text__set_fontSizeMax((TMPro_TMP_Text_o *)text,(text->fields).m_fontSize,(MethodInfo *)0x0);
      TMPro_TMP_Text__set_fontSizeMin
                ((TMPro_TMP_Text_o *)text,(text->fields).m_fontSize * 0.55,(MethodInfo *)0x0);
    }
    else {
      pSVar4 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar5 = System_String__Equals_52ffe30(pSVar4,"gameCreateFavoritesTitle",5,(MethodInfo *)0x0);
      if (bVar5) goto label_0537cf8a;
    }
    pTVar11 = (TMPro_TextMeshProUGUI_o *)0x0;
    local_48 = text;
  }
  value_00 = 0;
  value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve(pSVar13,iVar7,pSVar9,(MethodInfo *)0x0);
  TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)text,value,(MethodInfo *)0x0);
  __this_00 = pTVar11;
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pSVar13 = (style->fields).fontStyle;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_52ffe30(pSVar13,"italic",5,(MethodInfo *)0x0);
    value_00 = (uint)bVar5 * 2;
    __this_00 = local_48;
  }
  if (__this_00 != (TMPro_TextMeshProUGUI_o *)0x0) {
    TMPro_TMP_Text__set_fontStyle((TMPro_TMP_Text_o *)__this_00,value_00,(MethodInfo *)0x0);
    (*(text->klass->vtable)._66_set_text.methodPtr)(text,pSVar9,(text->klass->vtable)._66_set_text.method);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      UVar15.fields.b = 1.0;
      UVar15.fields.a = 1.0;
      UVar15.fields.r = 1.0;
      UVar15.fields.g = 1.0;
      local_48 = pTVar11;
    }
    else {
      if ((context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
         (__this = (context->fields).Theme, __this == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
      goto label_0537d10d;
      fallback.fields.b = 1.0;
      fallback.fields.a = 1.0;
      fallback.fields.r = 1.0;
      fallback.fields.g = 1.0;
      UVar15 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (__this,(style->fields).textColor,fallback,(MethodInfo *)0x0);
    }
    if (local_48 != (TMPro_TextMeshProUGUI_o *)0x0) {
      method_00 = (local_48->klass->vtable)._23_set_color.method;
      (*(local_48->klass->vtable)._23_set_color.methodPtr)(local_48,UVar15,method_00);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      iVar7 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextAlignment(style,method_00);
      TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)text,iVar7,(MethodInfo *)0x0);
      return;
    }
  }
label_0537d10d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyButtonMeasure
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyButtonMeasure (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, TMPro_TextMeshProUGUI_o* text, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, bool hasIcon, const MethodInfo* method);
// 0x5383da0
// asm: 15 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5383eba: jmp 0x5383f52
// asm:   0x5383fa7: jmp 0x5383fec
// asm:   0x5383fe6: movss dword ptr [rsp + 8], xmm0
// asm:   0x5383fff: cmp byte ptr [rip + 0x21beace], 0
// asm:   0x5384006: je 0x5384025
// asm:   0x5384008: movss xmm0, dword ptr [rip - 0x43c20b4]
// asm:   0x5384010: test r12, r12
// asm:   0x5384015: jmp 0x5384074
// asm:   0x53840b4: cmp byte ptr [rip + 0x21bea09], 0
// asm:   0x53840bd: xorps xmm1, xmm1
// asm:   0x53840c0: test rbx, rbx
// asm:   0x53840c3: jne 0x5384114
// asm:   0x53840c5: jmp 0x5384177
// asm:   0x53843d5: jmp 0x53843b1
// asm:   0x53843fb: jmp 0x53842a1

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyButtonMeasure
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               TMPro_TextMeshProUGUI_o *text,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               bool hasIcon,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  bool bVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  MethodInfo *method_00;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float local_70;
  UnityEngine_Vector2_Fields local_68;
  
  if (Il2CppMethodInitialized_07542ac0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonWidthMeasure);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchButtonWidthMeasure);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542ac0 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_053845e8;
  pUVar4 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053845e8;
    pSVar5 = (*(text->klass->vtable)._65_get_text.methodPtr)(text,(text->klass->vtable)._65_get_text.method);
    local_68 = (UnityEngine_Vector2_Fields)
               TMPro_TMP_Text__GetPreferredValues_670eff0((TMPro_TMP_Text_o *)text,pSVar5,(MethodInfo *)0x0);
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05383efa;
label_05383f52:
    fVar9 = 16.0;
  }
  else {
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    local_68 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05383f52;
label_05383efa:
    if ((style->fields).paddingX.fields.hasValue == false) {
      if ((style->fields).padding.fields.hasValue == false) goto label_05383f52;
      fVar9 = (style->fields).padding.fields.value;
    }
    else {
      fVar9 = (style->fields).paddingX.fields.value;
    }
  }
  local_70 = 0.0;
  if (hasIcon) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      local_70 = 6.0;
    }
    else {
      local_70 = 0.0;
    }
    if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) && (bVar3)) {
      if ((style->fields).gap.fields.hasValue == false) {
        local_70 = 6.0;
      }
      else {
        local_70 = System_Nullable_float___get_Value
                             (&(style->fields).gap,
                              (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_07542ad4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
      Il2CppMethodInitialized_07542ad4 = '\x01';
    }
    fVar12 = 24.0;
    if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
       (fVar12 = 24.0, 0.0 < (style->fields).iconSize.fields.value)) {
      fVar12 = System_Nullable_float___get_Value
                         (&(style->fields).iconSize,
                          (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    }
    local_70 = local_70 + fVar12;
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_053845e8;
  pGVar2 = (node->fields).layout;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    pGVar6 = (pGVar2->fields).maxWidth;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
  }
  fVar12 = 0.0;
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar5 = *(System_String_o **)((long)pGVar6 + 0x18);
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar5,"point",5,(MethodInfo *)0x0);
    fVar12 = 0.0;
    if (bVar3) {
      fVar12 = *(float *)((long)pGVar6 + 0x10);
    }
  }
  fVar9 = fVar9 + fVar9;
  fVar12 = (fVar12 - local_70) - fVar9;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((((0.0 < fVar12) && (bVar3)) && (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) &&
     (fVar12 < local_68.x)) {
    pSVar5 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushButtonStyle(pSVar5,method_00);
    if (bVar3) {
      if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053845e8;
      TMPro_TMP_Text__set_fontSize
                ((TMPro_TMP_Text_o *)text,(fVar12 / local_68.x) * (text->fields).m_fontSize,(MethodInfo *)0x0)
      ;
      pSVar5 = (*(text->klass->vtable)._65_get_text.methodPtr)(text,(text->klass->vtable)._65_get_text.method)
      ;
      local_68 = (UnityEngine_Vector2_Fields)
                 TMPro_TMP_Text__GetPreferredValues_670eff0((TMPro_TMP_Text_o *)text,pSVar5,(MethodInfo *)0x0)
      ;
    }
  }
  pGVar2 = (node->fields).layout;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_053843e2;
label_05384286:
    pGVar7 = (style->fields).height;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    pGVar6 = (pGVar2->fields).height;
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05384286;
label_053843e2:
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((pGVar6->fields).unit,(MethodInfo *)0x0);
    if (!bVar3) {
      pGVar7 = pGVar6;
    }
  }
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
  }
  fVar12 = local_68.y + fVar9;
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar5 = (pGVar7->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar5,"point",5,(MethodInfo *)0x0);
    if (bVar3) {
      fVar12 = (pGVar7->fields).value;
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar10 = local_68.x + local_70 + fVar9;
  if (hasIcon) {
    fVar11 = fVar12;
    if (!bVar3) goto label_053843c1;
label_05384398:
    pGVar2 = (node->fields).layout;
    fVar10 = fVar11;
  }
  else {
    fVar11 = fVar10;
    if (bVar3) goto label_05384398;
label_053843c1:
    pGVar2 = (node->fields).layout;
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = (pGVar2->fields).width;
    pGVar6 = (pGVar2->fields).minWidth;
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar8 = (style->fields).width;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((pGVar7->fields).unit,(MethodInfo *)0x0);
    if (!bVar3) {
      pGVar8 = pGVar7;
    }
  }
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
  }
  fVar11 = fVar10;
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar5 = (pGVar8->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar5,"point",5,(MethodInfo *)0x0);
    if (bVar3) {
      fVar11 = (pGVar8->fields).value;
    }
  }
  if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar4,fVar11,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    fVar11 = fVar10;
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar5 = (pGVar6->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar5,"point",5,(MethodInfo *)0x0);
      if (bVar3) {
        fVar11 = (pGVar6->fields).value;
      }
    }
    if (fVar10 <= fVar11) {
      fVar10 = fVar11;
    }
    (*(pUVar4->klass->vtable)._32_set_minWidth.methodPtr)
              (pUVar4,fVar10,(pUVar4->klass->vtable)._32_set_minWidth.method);
    (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar4,fVar12,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_GisketchButtonWidthMeasure);
    if ((__this != (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *)0x0) ||
       (__this = UnityEngine_GameObject__AddComponent_object_
                           (go,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonWidthMeasure),
       __this != (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__Setup
                (__this,fVar11,fVar9 + local_70,(MethodInfo *)0x0);
      return;
    }
  }
label_053845e8:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$AllowButtonTextClipping
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AllowButtonTextClipping (UnityEngine_GameObject_o* go, TMPro_TextMeshProUGUI_o* text, float minWidth, const MethodInfo* method);
// 0x53845f0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AllowButtonTextClipping
               (UnityEngine_GameObject_o *go,TMPro_TextMeshProUGUI_o *text,float minWidth,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *__this;
  float fVar3;
  
  if (Il2CppMethodInitialized_07542ac1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchButtonWidthMeasure);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542ac1 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0538476b;
    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,false,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement)
    ;
    if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
      if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_0538476b;
    }
    fVar3 = 0.0;
    if (0.0 <= minWidth) {
      fVar3 = minWidth;
    }
    (*(pUVar2->klass->vtable)._32_set_minWidth.methodPtr)
              (pUVar2,fVar3,(pUVar2->klass->vtable)._32_set_minWidth.method);
    (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar2,fVar3,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_GisketchButtonWidthMeasure);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this != (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *)0x0) {
      Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__Setup(__this,minWidth,0.0,(MethodInfo *)0x0);
      return;
    }
  }
label_0538476b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ButtonTextAlignment
// il2cpp: int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonTextAlignment (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, bool hasIcon, const MethodInfo* method);
// 0x5383d10

int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonTextAlignment
                  (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,bool hasIcon,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07542ac2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"left");
    Il2CppMethodInitialized_07542ac2 = '\x01';
  }
  iVar2 = 0x1001;
  if (!hasIcon) {
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      a = (style->fields).textAlignment;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar1 = System_String__Equals_52ffe30(a,"left",5,(MethodInfo *)0x0);
      if (bVar1) {
        return 0x1001;
      }
    }
    iVar2 = 0x202;
  }
  return iVar2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$TextAlignment
// il2cpp: int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextAlignment (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x5386270

int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextAlignment
                  (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542ac3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"right");
    il2cpp_codegen_initialize_runtime_metadata(&"center");
    Il2CppMethodInitialized_07542ac3 = '\x01';
  }
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pSVar1 = (style->fields).textAlignment;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_52ffe30(pSVar1,"right",5,(MethodInfo *)0x0);
    if (bVar2) {
      return 0x1004;
    }
    pSVar1 = (style->fields).textAlignment;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_52ffe30(pSVar1,"center",5,(MethodInfo *)0x0);
    if (bVar2) {
      return 0x202;
    }
  }
  return 0x1001;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$PointLength
// il2cpp: float Gisketch_Aottg2UI_Building_GisketchScreenBuilder__PointLength (Gisketch_Aottg2UI_Data_GisketchLength_o* length, float fallback, const MethodInfo* method);
// 0x5384770

float Gisketch_Aottg2UI_Building_GisketchScreenBuilder__PointLength
                (Gisketch_Aottg2UI_Data_GisketchLength_o *length,float fallback,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
  }
  if (length != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    a = (length->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_52ffe30(a,"point",5,(MethodInfo *)0x0);
    if (bVar1) {
      fallback = (length->fields).value;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$AddFocusRing
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AddFocusRing (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, bool visible, const MethodInfo* method);
// 0x5382f50

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AddFocusRing
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,bool visible,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this;
  UnityEngine_Color_o UVar1;
  
  if (Il2CppMethodInitialized_07542ac5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"focusRing");
    Il2CppMethodInitialized_07542ac5 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
    if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      UVar1.fields.b = 1.0;
      UVar1.fields.a = 1.0;
      UVar1.fields.r = 1.0;
      UVar1.fields.g = 1.0;
      UVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (theme,"primary",UVar1,(MethodInfo *)0x0);
      UVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (theme,"focusRing",UVar1,(MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0) {
        Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup
                  (__this,UVar1,3.0,5.0,14.0,visible,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonContent
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x53863d0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  MethodInfo *in_R9;
  UnityEngine_RectTransform_o *pUStack_18;
  
  if (Il2CppMethodInitialized_07542ac6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542ac6 = '\x01';
  }
  pUStack_18 = (UnityEngine_RectTransform_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pUVar1 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent_5283020
                     (parent,style,false,(UnityEngine_Sprite_o *)0x0,&pUStack_18,in_R9);
  return pUVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonContent
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, bool reveal, UnityEngine_Sprite_o* maskSprite, UnityEngine_RectTransform_o** mask, const MethodInfo* method);
// 0x5383020
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5383295: jmp 0x5383377
// asm:   0x538333a: jmp 0x53833b3
// asm:   0x5383368: jmp 0x53833b3
// asm:   0x538339a: jmp 0x53833b3
// asm:   0x538339c: movss xmm0, dword ptr [rip - 0x43c10ec]
// asm:   0x53833a4: movss dword ptr [rsp + 4], xmm0
// asm:   0x53833aa: cmp byte ptr [rip + 0x21bdf6f], 0
// asm:   0x53833b1: jne 0x53833c6

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent_5283020
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          bool reveal,UnityEngine_Sprite_o *maskSprite,UnityEngine_RectTransform_o **mask,MethodInfo *method)

{
  System_String_o *a;
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *__this;
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_02;
  UnityEngine_RectOffset_o *__this_03;
  MethodInfo *pMVar3;
  int32_t value;
  MethodInfo *method_00;
  float fVar4;
  double x;
  double dVar5;
  Il2CppMethodPointer local_38;
  
  pMVar3 = (MethodInfo *)maskSprite;
  if (Il2CppMethodInitialized_07542ac7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Button Content");
    il2cpp_codegen_initialize_runtime_metadata(&"left");
    Il2CppMethodInitialized_07542ac7 = '\x01';
  }
  *mask = (UnityEngine_RectTransform_o *)0x0;
  Il2CppCodeGenWriteBarrier(mask);
  if (reveal) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    parent = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildBrushRevealMask
                       (parent,maskSprite,mask,pMVar3);
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_05383377:
    ThrowNullReferenceException();
  }
  if ((obj != (System_Type_o *)0x0) &&
     (pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
     pIVar2 == (Il2CppObject *)0x0)) {
    pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
  }
  if ((int)components->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  components->m_Items[0] = obj;
  Il2CppCodeGenWriteBarrier(components->m_Items);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Button Content",components,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 == (UnityEngine_Transform_o *)0x0)) goto label_05383377;
  UnityEngine_Transform__SetParent_692d510
            (__this_01,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
  pMVar3 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
  rect = UnityEngine_GameObject__GetComponent_object_
                   (__this_00,
                    (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(rect,pMVar3);
  __this_02 = UnityEngine_GameObject__AddComponent_object_
                        (__this_00,
                         (MethodInfo_353B6A0 *)
                         MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    value = 4;
    __this = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0;
  }
  else {
    a = (style->fields).textAlignment;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_52ffe30(a,"left",5,(MethodInfo *)0x0);
    value = 4 - (uint)bVar1;
    __this = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02;
  }
  if (__this_02 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) goto label_05383377;
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)__this_02,value,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,true,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,false,(MethodInfo *)0x0);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pMVar3 = (MethodInfo *)0x0;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02,6.0,(MethodInfo *)0x0);
    __this = (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_02;
  }
  else {
    if ((style->fields).gap.fields.hasValue == false) {
      fVar4 = 6.0;
    }
    else {
      fVar4 = System_Nullable_float___get_Value
                        (&(style->fields).gap,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value
                        );
    }
    if (__this == (UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)0x0) goto label_05383377;
    pMVar3 = (MethodInfo *)0x0;
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing(__this,fVar4,(MethodInfo *)0x0);
    if ((style->fields).paddingX.fields.hasValue != false) {
      fVar4 = (style->fields).paddingX.fields.value;
      goto joined_r0x05383366;
    }
    if ((style->fields).padding.fields.hasValue != false) {
      fVar4 = (style->fields).padding.fields.value;
      goto joined_r0x05383366;
    }
  }
  fVar4 = 16.0;
joined_r0x05383366:
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  x = (double)fVar4;
  method_00 = (MethodInfo *)&local_38;
  dVar5 = modf(x,(double *)method_00,pMVar3);
  if (0.0 <= fVar4) {
    if ((dVar5 != 0.5) || (NAN(dVar5))) {
      local_38 = (Il2CppMethodPointer)floor(x + 0.5,method_00);
    }
    else if (((long)(double)local_38 & 1U) != 0) {
      local_38 = (Il2CppMethodPointer)((double)local_38 + 1.0);
    }
  }
  else if ((dVar5 != -0.5) || (NAN(dVar5))) {
    local_38 = (Il2CppMethodPointer)ceil(x + -0.5,method_00);
  }
  else if (((long)(double)local_38 & 1U) != 0) {
    local_38 = (Il2CppMethodPointer)((double)local_38 + -1.0);
  }
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
  UnityEngine_RectOffset___ctor_68cd0a0
            (__this_03,(int)(double)local_38,(int)(double)local_38,0,0,(MethodInfo *)0x0);
  UnityEngine_UI_LayoutGroup__set_padding((UnityEngine_UI_LayoutGroup_o *)__this,__this_03,(MethodInfo *)0x0);
  return rect;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildBrushRevealMask
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildBrushRevealMask (UnityEngine_RectTransform_o* parent, UnityEngine_Sprite_o* maskSprite, UnityEngine_RectTransform_o** mask, const MethodInfo* method);
// 0x5386430

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildBrushRevealMask
          (UnityEngine_RectTransform_o *parent,UnityEngine_Sprite_o *maskSprite,
          UnityEngine_RectTransform_o **mask,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  MethodInfo *method_00;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_UI_Mask_o *__this_02;
  
  if (Il2CppMethodInitialized_07542ac8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Mask);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Brush Reveal Mask");
    Il2CppMethodInitialized_07542ac8 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Brush Reveal Mask",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        method_00 = (MethodInfo *)
                    UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        *mask = (UnityEngine_RectTransform_o *)method_00;
        Il2CppCodeGenWriteBarrier(mask);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(*mask,method_00);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_sprite(__this_01,maskSprite,(MethodInfo *)0x0);
          UnityEngine_UI_Image__set_type(__this_01,1,(MethodInfo *)0x0);
          (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
          __this_02 = UnityEngine_GameObject__AddComponent_object_
                                (__this,(MethodInfo_353B6A0 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_Mask);
          if (__this_02 != (UnityEngine_UI_Mask_o *)0x0) {
            UnityEngine_UI_Mask__set_showMaskGraphic(__this_02,false,(MethodInfo *)0x0);
            UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this_02,false,(MethodInfo *)0x0);
            return *mask;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildDropdown
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildDropdown (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x53818d0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5381a4f: jmp 0x5381a68

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildDropdown
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o **targetAddress;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **targetAddress_00;
  uint32_t uVar1;
  System_String_o *pSVar2;
  System_String_array *options;
  UnityEngine_Events_UnityEvent_o *pUVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *arrow;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar7;
  TMPro_TextMeshProUGUI_o *label;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar8;
  Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *pGVar9;
  UnityEngine_Events_UnityAction_o *pUVar10;
  UnityEngine_UI_Button_o *pUVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (Il2CppMethodInitialized_07542ac9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_Open);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceControl);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass19_0_BuildDropdown_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPrimary");
    il2cpp_codegen_initialize_runtime_metadata(&"down");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonQuiet");
    Il2CppMethodInitialized_07542ac9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass19_0);
  method_02 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0___ctor(__this,(MethodInfo *)0x0);
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    targetAddress_00 = &(node->fields).layout;
    pGVar5 = (node->fields).layout;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pGVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceLayout(pGVar5,method_02);
    *targetAddress_00 = pGVar5;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    if (go != (UnityEngine_GameObject_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      __this_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
                            (pUVar6,node,"buttonQuiet",(System_String_o *)0x0,context,method);
      pUVar6 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      bVar4 = System_String__IsNullOrEmpty((node->fields).choiceArrowStyle,(MethodInfo *)0x0);
      if (bVar4) {
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
        pSVar2 = "buttonPrimary";
      }
      else {
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
        pSVar2 = (node->fields).choiceArrowStyle;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      arrow = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
                        (pUVar6,node,pSVar2,"down",context,method);
      pGVar7 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceControl);
      if (__this != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o *)0x0) {
        targetAddress = &(__this->fields).control;
        (__this->fields).control = pGVar7;
        Il2CppCodeGenWriteBarrier(targetAddress);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          pGVar7 = (__this->fields).control;
          pSVar2 = (node->fields).value;
          options = (node->fields).options;
          label = UnityEngine_GameObject__GetComponentInChildren_object_
                            (__this_00,
                             (MethodInfo_353B8D0 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI);
          if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
             (pGVar7 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0)) {
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__Setup
                      (pGVar7,node,pSVar2,options,label,(node->fields).maxVisibleItems,arrow,
                       (context->fields).Actions,(context->fields).Localizer,(MethodInfo *)0x0);
            pGVar8 = UnityEngine_GameObject__AddComponent_object_
                               (go,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
            (__this->fields).sound = pGVar8;
            Il2CppCodeGenWriteBarrier(&(__this->fields).sound);
            pGVar9 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceButton
                               (go,(context->fields).Theme,(__this->fields).control,false,(MethodInfo *)label)
            ;
            if (pGVar9 != (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *)0x0) {
              pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pGVar9->fields).m_OnClick;
              pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        (pUVar10,(Il2CppObject *)__this,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass19_0_BuildDropdown_b__0
                         ,(MethodInfo *)0x0);
              if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar10,(MethodInfo *)0x0);
                pUVar11 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
                                    (__this_00,(node->fields).action,method_00);
                if (pUVar11 != (UnityEngine_UI_Button_o *)0x0) {
                  pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pUVar11->fields).m_OnClick;
                  pGVar7 = *targetAddress;
                  pUVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            (pUVar10,(Il2CppObject *)pGVar7,
                             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_Open,
                             (MethodInfo *)0x0);
                  if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar10,(MethodInfo *)0x0);
                    pUVar11 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
                                        (arrow,(node->fields).action,method_01);
                    if (pUVar11 != (UnityEngine_UI_Button_o *)0x0) {
                      pUVar3 = (UnityEngine_Events_UnityEvent_o *)(pUVar11->fields).m_OnClick;
                      pGVar7 = *targetAddress;
                      pUVar10 = il2cpp_codegen_object_new
                                          ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                (pUVar10,(Il2CppObject *)pGVar7,
                                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_Open,
                                 (MethodInfo *)0x0);
                      if (pUVar3 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(pUVar3,pUVar10,(MethodInfo *)0x0);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSelect
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSelect (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5381c80

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSelect
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o **targetAddress;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o **targetAddress_00;
  System_String_o *value;
  System_String_array *options;
  UnityEngine_Events_UnityEvent_o *pUVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *go_00;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_GameObject_o *go_01;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar5;
  TMPro_TextMeshProUGUI_o *label;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar6;
  Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *pGVar7;
  UnityEngine_Events_UnityAction_o *pUVar8;
  UnityEngine_UI_Button_o *pUVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  
  if (Il2CppMethodInitialized_07542aca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_Open);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceControl);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPrimary");
    il2cpp_codegen_initialize_runtime_metadata(&"left");
    il2cpp_codegen_initialize_runtime_metadata(&"right");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonQuiet");
    Il2CppMethodInitialized_07542aca = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0);
  method_03 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___ctor(__this,(MethodInfo *)0x0);
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    targetAddress_00 = &(node->fields).layout;
    pGVar3 = (node->fields).layout;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pGVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceLayout(pGVar3,method_03);
    *targetAddress_00 = pGVar3;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    if (go != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      go_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
                        (pUVar4,node,"buttonPrimary","left",context,method);
      pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      __this_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
                            (pUVar4,node,"buttonQuiet",(System_String_o *)0x0,context,method);
      pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      go_01 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
                        (pUVar4,node,"buttonPrimary","right",context,method);
      pGVar5 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceControl);
      if (__this != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o *)0x0) {
        targetAddress = &(__this->fields).control;
        (__this->fields).control = pGVar5;
        Il2CppCodeGenWriteBarrier(targetAddress);
        if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
          pGVar5 = (__this->fields).control;
          value = (node->fields).value;
          options = (node->fields).options;
          label = UnityEngine_GameObject__GetComponentInChildren_object_
                            (__this_00,
                             (MethodInfo_353B8D0 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI);
          if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
             (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0)) {
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__Setup
                      (pGVar5,node,value,options,label,(node->fields).maxVisibleItems,
                       (UnityEngine_GameObject_o *)0x0,(context->fields).Actions,(context->fields).Localizer,
                       (MethodInfo *)0x0);
            pGVar6 = UnityEngine_GameObject__AddComponent_object_
                               (go,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
            (__this->fields).sound = pGVar6;
            Il2CppCodeGenWriteBarrier(&(__this->fields).sound);
            pGVar7 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceButton
                               (go,(context->fields).Theme,(__this->fields).control,true,(MethodInfo *)label);
            if (pGVar7 != (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *)0x0) {
              pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pGVar7->fields).m_OnClick;
              pUVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        (pUVar8,(Il2CppObject *)__this,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__0
                         ,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar8,(MethodInfo *)0x0);
                pUVar9 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
                                   (go_00,(node->fields).action,method_00);
                if (*targetAddress != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                  bVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep
                                    (*targetAddress,(MethodInfo *)0x0);
                  if (pUVar9 != (UnityEngine_UI_Button_o *)0x0) {
                    UnityEngine_UI_Selectable__set_interactable
                              ((UnityEngine_UI_Selectable_o *)pUVar9,bVar2,(MethodInfo *)0x0);
                    if (*targetAddress != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                      bVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep
                                        (*targetAddress,(MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual
                                (go_00,bVar2,(MethodInfo *)0x0);
                      pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar9->fields).m_OnClick;
                      pUVar8 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                (pUVar8,(Il2CppObject *)__this,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__1
                                 ,(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar8,(MethodInfo *)0x0);
                        pUVar9 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
                                           (__this_00,(node->fields).action,method_01);
                        if (pUVar9 != (UnityEngine_UI_Button_o *)0x0) {
                          pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar9->fields).m_OnClick;
                          pGVar5 = *targetAddress;
                          pUVar8 = il2cpp_codegen_object_new
                                             ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          UnityEngine_Events_UnityAction___ctor
                                    (pUVar8,(Il2CppObject *)pGVar5,
                                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_Open,
                                     (MethodInfo *)0x0);
                          if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                            UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar8,(MethodInfo *)0x0);
                            pUVar9 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
                                               (go_01,(node->fields).action,method_02);
                            if (*targetAddress != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                              bVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep
                                                (*targetAddress,(MethodInfo *)0x0);
                              if (pUVar9 != (UnityEngine_UI_Button_o *)0x0) {
                                UnityEngine_UI_Selectable__set_interactable
                                          ((UnityEngine_UI_Selectable_o *)pUVar9,bVar2,(MethodInfo *)0x0);
                                if (*targetAddress != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                                  bVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep
                                                    (*targetAddress,(MethodInfo *)0x0);
                                  Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual
                                            (go_01,bVar2,(MethodInfo *)0x0);
                                  pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar9->fields).m_OnClick;
                                  pUVar8 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                                  UnityEngine_Events_UnityAction___ctor
                                            (pUVar8,(Il2CppObject *)__this,
                                             (intptr_t)
                                             MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__2
                                             ,(MethodInfo *)0x0);
                                  if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                    UnityEngine_Events_UnityEvent__AddListener
                                              (pUVar1,pUVar8,(MethodInfo *)0x0);
                                    return;
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChoiceButton
// il2cpp: Gisketch_Aottg2UI_Actions_AottgChoiceButton_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceButton (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, Gisketch_Aottg2UI_Actions_AottgChoiceControl_o* control, bool selectMode, const MethodInfo* method);
// 0x5387230
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5387398: cmp byte ptr [rip + 0x21bb726], 0
// asm:   0x538739f: jne 0x53873cc
// asm:   0x538746c: jmp 0x53873cc

Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceButton
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
          Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *control,bool selectMode,MethodInfo *method)

{
  UnityEngine_UI_Image_o *value;
  Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this_00;
  UnityEngine_Color_o UVar1;
  
  if (Il2CppMethodInitialized_07542acb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceButton);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542acb = '\x01';
  }
  if ((go != (UnityEngine_GameObject_o *)0x0) &&
     (value = UnityEngine_GameObject__AddComponent_object_
                        (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image),
     value != (UnityEngine_UI_Image_o *)0x0)) {
    (*(value->klass->vtable)._23_set_color.methodPtr)
              (value,(UnityEngine_Color_o)ZEXT816(0),(value->klass->vtable)._23_set_color.method);
    (*(value->klass->vtable)._25_set_raycastTarget.methodPtr)
              (value,true,(value->klass->vtable)._25_set_raycastTarget.method);
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceButton);
    if (__this != (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *)0x0) {
      Gisketch_Aottg2UI_Actions_AottgChoiceButton__Setup(__this,control,selectMode,(MethodInfo *)0x0);
      UnityEngine_UI_Selectable__set_targetGraphic
                ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Graphic_o *)value,(MethodInfo *)0x0);
      UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,0,(MethodInfo *)0x0);
      UnityEngine_UI_Selectable__set_navigation
                ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Navigation_o)ZEXT840(3),
                 (MethodInfo *)0x0);
      UnityEngine_GameObject__AddComponent_object_
                (go,(MethodInfo_353B6A0 *)
                    MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      if (Il2CppMethodInitialized_07542ac5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
        il2cpp_codegen_initialize_runtime_metadata(&"primary");
        il2cpp_codegen_initialize_runtime_metadata(&"focusRing");
        Il2CppMethodInitialized_07542ac5 = '\x01';
      }
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
      if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        UVar1.fields.b = 1.0;
        UVar1.fields.a = 1.0;
        UVar1.fields.r = 1.0;
        UVar1.fields.g = 1.0;
        UVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                          (theme,"primary",UVar1,(MethodInfo *)0x0);
        UVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                          (theme,"focusRing",UVar1,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0) {
          Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup
                    (__this_00,UVar1,3.0,5.0,14.0,true,(MethodInfo *)0x0);
          return __this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChoicePart
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* owner, System_String_o* styleName, System_String_o* icon, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x53867d0
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5386b08: jmp 0x5386b7a
// asm:   0x5386b1f: jmp 0x5386a40
// asm:   0x5386eb5: lea rbx, [rip + 0x1ef3c64]  ; TypeInfo_UnityEngine_Mathf
// asm:   0x5386ebc: cmp byte ptr [rip + 0x21b78f1], 0
// asm:   0x5386ec3: je 0x53870bc
// asm:   0x5386fd2: xorps xmm0, xmm0
// asm:   0x5386fd5: test rbp, rbp
// asm:   0x5386fd8: jne 0x53870fb
// asm:   0x5386fde: jmp 0x538713c
// asm:   0x5387030: cmp byte ptr [rip + 0x21bba8f], 0
// asm:   0x5387037: jne 0x538704c
// asm:   0x53871cc: jmp 0x538704c
// asm:   0x538720b: jmp 0x5386fc0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *owner,
          System_String_o *styleName,System_String_o *icon,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  Il2CppType *pIVar4;
  bool bVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_Type_array *pSVar6;
  System_Type_o *pSVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar9;
  System_String_o **ppSVar10;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_RectTransform_o *pUVar11;
  TMPro_TextMeshProUGUI_o *text;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_01;
  UnityEngine_UI_RectMask2D_o *pressMask;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  MethodInfo *pMVar12;
  System_Nullable_float__Fields *pSVar13;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int32_t value;
  uint uVar14;
  uint uVar15;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar16;
  MethodInfo *method_03;
  float fVar17;
  float fVar18;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  float fVar19;
  UnityEngine_Vector4_o UVar20;
  UnityEngine_RectTransform_o *local_b0;
  undefined1 local_a8 [16];
  UnityEngine_UI_Image_o *local_90;
  System_String_o *local_88;
  System_Nullable_float__Fields local_80;
  undefined1 local_78 [16];
  UnityEngine_RectTransform_o *local_60;
  float local_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  undefined1 local_48 [16];
  
  local_a8._0_8_ = context;
  pMVar12 = (MethodInfo *)icon;
  if (Il2CppMethodInitialized_07542acc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonRelief);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Button Label");
    Il2CppMethodInitialized_07542acc = '\x01';
  }
  local_b0 = (UnityEngine_RectTransform_o *)0x0;
  local_80.hasValue = false;
  local_80._1_3_ = 0;
  local_80.value = 0.0;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  node = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonNode(owner,styleName,icon,pMVar12);
  if (((local_a8._0_8_ == 0) || (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) ||
     (*(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(local_a8._0_8_ + 0x18) ==
      (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) goto label_053871ed;
  style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                    (*(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(local_a8._0_8_ + 0x18),
                     (node->fields).style,(MethodInfo *)0x0);
  pSVar2 = (node->fields).id;
  pSVar6 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  pIVar4 = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar4,(MethodInfo *)0x0);
  if (pSVar6 == (System_Type_array *)0x0) goto label_053871ed;
  if ((pSVar7 != (System_Type_o *)0x0) &&
     (pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class),
     pIVar8 == (Il2CppObject *)0x0)) goto label_05387215;
  local_88 = icon;
  if ((int)pSVar6->max_length == 0) goto label_05387210;
  pSVar6->m_Items[0] = pSVar7;
  Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(__this,pSVar2,pSVar6,(MethodInfo *)0x0);
  if ((__this == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar9 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
     pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_053871ed;
  UnityEngine_Transform__SetParent_692d510(pUVar9,parent,false,(MethodInfo *)0x0);
  local_b0 = (UnityEngine_RectTransform_o *)0x0;
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    fVar17 = 0.0;
    local_78 = ZEXT816(0);
  }
  else {
    if (*(long *)(local_a8._0_8_ + 0x18) == 0) goto label_053871ed;
    fVar17 = (style->fields).relief.fields.value * *(float *)(*(long *)(local_a8._0_8_ + 0x18) + 0x28);
    local_78 = ZEXT416((uint)fVar17);
  }
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  if (Il2CppMethodInitialized_0753e7b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_0753e7b4 = '\x01';
    fVar17 = (float)local_78._0_4_;
    uStack_54 = local_78._4_4_;
    uStack_50 = local_78._8_4_;
    uStack_4c = local_78._12_4_;
  }
  local_58 = ABS(fVar17);
  uStack_54 = uStack_54 & 0x7fffffff;
  uStack_50 = uStack_50 & 0x7fffffff;
  uStack_4c = uStack_4c & 0x7fffffff;
  if (local_58 <= 0.0) {
    local_58 = 0.0;
  }
  local_58 = local_58 * 1e-06;
  fVar19 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
  fVar18 = local_58;
  if (local_58 <= fVar19) {
    fVar18 = fVar19;
  }
  local_48 = ZEXT416((uint)ABS(0.0 - fVar17));
  if (fVar18 <= ABS(0.0 - fVar17)) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      fVar17 = (float)local_78._0_4_;
    }
    local_90 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFace
                         (__this,style,(Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)local_a8._0_8_,
                          fVar17,&local_b0,(MethodInfo *)context);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
    pUVar11 = local_b0;
  }
  else {
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      ppSVar10 = &"primary";
    }
    else {
      ppSVar10 = &(style->fields).background;
    }
    theme = *(Gisketch_Aottg2UI_Styling_GisketchTheme_o **)(local_a8._0_8_ + 0x18);
    pSVar2 = *ppSVar10;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pUVar11 = (UnityEngine_RectTransform_o *)0x0;
    local_90 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                         (__this,style,theme,pSVar2,false,method);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar11 = local_b0;
  }
  else {
    pUVar11 = UnityEngine_GameObject__GetComponent_object_
                        (__this,(MethodInfo_353B730 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  bVar5 = System_String__IsNullOrEmpty((node->fields).text,(MethodInfo *)0x0);
  uVar15 = 1;
  uVar14 = 1;
  if (bVar5) {
    bVar5 = System_String__IsNullOrEmpty((node->fields).textKey,(MethodInfo *)0x0);
    uVar14 = (uint)!bVar5;
    if ((node->fields).hasIcon == false) goto label_05387000;
label_05386bd5:
    if (uVar14 == 0) goto label_05386bdd;
label_05387019:
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_07542ac6 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      Il2CppMethodInitialized_07542ac6 = '\x01';
    }
    local_60 = (UnityEngine_RectTransform_o *)0x0;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pUVar11 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent_5283020
                        (pUVar11,style,false,(UnityEngine_Sprite_o *)0x0,&local_60,method);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((node->fields).hasIcon != false) goto label_05386bd5;
label_05387000:
    bVar5 = System_String__IsNullOrEmpty((node->fields).icon,(MethodInfo *)0x0);
    uVar15 = (uint)!bVar5;
    if ((uVar15 & uVar14) != 0) goto label_05387019;
label_05386bdd:
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pMVar12 = (MethodInfo *)(ulong)uVar14;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonIcon
            (node,pUVar11,style,(Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)local_a8._0_8_,
             SUB41(uVar14,0),method);
  if (uVar14 == 0) {
    text = (TMPro_TextMeshProUGUI_o *)0x0;
  }
  else {
    pSVar6 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    pIVar4 = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar7 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar4,(MethodInfo *)0x0);
    if (pSVar6 == (System_Type_array *)0x0) goto label_053871ed;
    if ((pSVar7 != (System_Type_o *)0x0) &&
       (pIVar8 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar7,(((pSVar6->obj).klass)->_1).element_class),
       pIVar8 == (Il2CppObject *)0x0)) {
label_05387215:
      pIVar8 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar8,(MethodInfo *)0x0);
    }
    if ((int)pSVar6->max_length == 0) {
label_05387210:
      ThrowIndexOutOfRangeException();
    }
    pSVar6->m_Items[0] = pSVar7;
    Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Button Label",pSVar6,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar9 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       pUVar9 == (UnityEngine_Transform_o *)0x0)) goto label_053871ed;
    UnityEngine_Transform__SetParent_692d510
              (pUVar9,(UnityEngine_Transform_o *)pUVar11,false,(MethodInfo *)0x0);
    if (uVar15 == 0) {
      method_03 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
      pUVar11 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform)
      ;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(pUVar11,method_03);
    }
    text = UnityEngine_GameObject__AddComponent_object_
                     (__this_00,
                      (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText
              (text,node,style,(Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)local_a8._0_8_,pMVar12);
    if (Il2CppMethodInitialized_07542ac2 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"left");
      Il2CppMethodInitialized_07542ac2 = '\x01';
    }
    value = 0x1001;
    if (uVar15 == 0) {
      if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        pSVar2 = (style->fields).textAlignment;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar5 = System_String__Equals_52ffe30(pSVar2,"left",5,(MethodInfo *)0x0);
        if (bVar5) goto label_05386e05;
      }
      value = 0x202;
    }
label_05386e05:
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_053871ed;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)text,value,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,false,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
    bVar5 = System_String__IsNullOrEmpty(local_88,(MethodInfo *)0x0);
    if (bVar5) {
      UVar20 = (*(text->klass->vtable)._73_get_margin.methodPtr)
                         (text,(text->klass->vtable)._73_get_margin.method);
      local_a8._8_4_ = extraout_XMM0_Dc;
      local_a8._0_8_ = UVar20.fields._0_8_;
      local_a8._12_4_ = extraout_XMM0_Dd;
      UVar20 = (*(text->klass->vtable)._73_get_margin.methodPtr)
                         (text,(text->klass->vtable)._73_get_margin.method);
      UVar20.fields.z = 12.0;
      UVar20.fields.y = (float)local_a8._4_4_;
      UVar20.fields.x = 12.0;
      (*(text->klass->vtable)._74_set_margin.methodPtr)
                (text,UVar20,(text->klass->vtable)._74_set_margin.method);
      Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup(__this,text,true,(MethodInfo *)0x0);
    }
  }
  if (Il2CppMethodInitialized_0753e7b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_0753e7b4 = '\x01';
  }
  fVar18 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
  fVar17 = local_58;
  if (local_58 <= fVar18) {
    fVar17 = fVar18;
  }
  if (fVar17 <= (float)local_48._0_4_) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonRelief);
    pUVar11 = local_b0;
    pressMask = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      local_80.hasValue = false;
      local_80._1_3_ = 0;
      local_80.value = 0.0;
      pSVar13 = &local_80;
    }
    else {
      pSVar13 = &(style->fields).pressDepth.fields;
    }
    if (__this_01 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) {
label_053871ed:
      ThrowNullReferenceException();
    }
    method = (MethodInfo *)0x0;
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
              (__this_01,local_90,pUVar11,(float)local_78._0_4_,pressMask,(System_Nullable_float__o)*pSVar13,
               (MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  method_00 = style;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyButtonMeasure
            (__this,node,text,style,SUB41(uVar15,0),method);
  bVar5 = System_String__IsNullOrEmpty(local_88,(MethodInfo *)0x0);
  if (bVar5) {
    pGVar3 = (node->fields).layout;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar16 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar16 = (pGVar3->fields).minWidth;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    pMVar12 = extraout_RDX;
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      pMVar12 = extraout_RDX_00;
    }
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
      pMVar12 = extraout_RDX_01;
    }
    fVar17 = 0.0;
    if (pGVar16 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar2 = (pGVar16->fields).unit;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      method_00 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0;
      bVar5 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
      fVar17 = 0.0;
      pMVar12 = extraout_RDX_02;
      if (bVar5) {
        fVar17 = (pGVar16->fields).value;
      }
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AllowButtonTextClipping(__this,text,fVar17,pMVar12);
  }
  flex = UnityEngine_GameObject__AddComponent_object_
                   (__this,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
  pGVar3 = (node->fields).layout;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex(flex,pGVar3,style,(MethodInfo *)method_00);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyAspectRatio(__this,style,method_01);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyLayoutOffset(__this,(node->fields).layout,method_02);
  return __this;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChoicePartButton
// il2cpp: UnityEngine_UI_Button_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton (UnityEngine_GameObject_o* go, System_String_o* action, const MethodInfo* method);
// 0x5387480

UnityEngine_UI_Button_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
          (UnityEngine_GameObject_o *go,System_String_o *action,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *object;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_Image_o *value;
  UnityEngine_Events_UnityAction_o *__this_01;
  
  if (Il2CppMethodInitialized_07542acd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Actions_GisketchButtonSound_PlayClick);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    Il2CppMethodInitialized_07542acd = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    object = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
    if (object != (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0) {
      (object->fields)._action = action;
      Il2CppCodeGenWriteBarrier(&(object->fields)._action);
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Button);
      if (__this_00 != (UnityEngine_UI_Button_o *)0x0) {
        UnityEngine_UI_Selectable__set_transition
                  ((UnityEngine_UI_Selectable_o *)__this_00,0,(MethodInfo *)0x0);
        UnityEngine_UI_Selectable__set_navigation
                  ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Navigation_o)ZEXT840(0),
                   (MethodInfo *)0x0);
        value = UnityEngine_GameObject__GetComponentInChildren_object_
                          (go,(MethodInfo_353B8D0 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Image);
        UnityEngine_UI_Selectable__set_targetGraphic
                  ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Graphic_o *)value,
                   (MethodInfo *)0x0);
        UnityEngine_GameObject__AddComponent_object_
                  (go,(MethodInfo_353B6A0 *)
                      MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
        __this = (UnityEngine_Events_UnityEvent_o *)(__this_00->fields).m_OnClick;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  (__this_01,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_GisketchButtonSound_PlayClick,
                   (MethodInfo *)0x0);
        if (__this != (UnityEngine_Events_UnityEvent_o *)0x0) {
          UnityEngine_Events_UnityEvent__AddListener(__this,__this_01,(MethodInfo *)0x0);
          return __this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ButtonNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonNode (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* owner, System_String_o* style, System_String_o* icon, const MethodInfo* method);
// 0x5387620

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonNode
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *owner,System_String_o *style,System_String_o *icon
          ,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_01;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07542ace == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"value");
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_07542ace = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Button";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    if (owner != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pSVar3 = icon;
      if (bVar1) {
        pSVar3 = "value";
      }
      pSVar4 = (System_String_o *)0x0;
      pSVar3 = System_String__Concat_5301f10
                         ((owner->fields).id,"-",pSVar3,(MethodInfo *)0x0);
      (__this->fields).id = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).id);
      if (bVar1) {
        pSVar4 = (owner->fields).value;
      }
      (__this->fields).text = pSVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).text);
      (__this->fields).icon = icon;
      Il2CppCodeGenWriteBarrier(&(__this->fields).icon);
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
      bVar2 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
      (__this->fields).hasIcon = !bVar2;
      (__this->fields).style = style;
      Il2CppCodeGenWriteBarrier(&(__this->fields).style);
      if (!bVar1) {
label_053877fd:
        (__this->fields).layout = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
        return __this;
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
      Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_00->fields).grow = 1.0;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          (__this_01->fields).value = 180.0;
          (__this_01->fields).unit = "point";
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).unit);
          (__this_00->fields).minWidth = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).minWidth);
          goto label_053877fd;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$RowLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RowLayout (const MethodInfo* method);
// 0x5387b00

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RowLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  
  if (Il2CppMethodInitialized_07542acf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_07542acf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).direction = "Row";
    Il2CppCodeGenWriteBarrier(&(__this->fields).direction);
    (__this->fields).alignItems = "Center";
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems);
    (__this->fields).gap = 0.0;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
      (__this->fields).width = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).width);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChoiceLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceLayout (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x5386690

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceLayout
          (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  System_String_o **targetAddress;
  Gisketch_Aottg2UI_Data_GisketchLength_o **targetAddress_00;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c *method_00;
  
  if (Il2CppMethodInitialized_07542ad0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_07542ad0 = '\x01';
  }
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    method_00 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    layout = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RowLayout((MethodInfo *)method_00);
    if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_053867c0;
  }
  bVar1 = System_String__IsNullOrEmpty((layout->fields).direction,(MethodInfo *)0x0);
  if (bVar1) {
    (layout->fields).direction = "Row";
    Il2CppCodeGenWriteBarrier(&(layout->fields).direction);
  }
  bVar1 = System_String__IsNullOrEmpty((layout->fields).alignItems,(MethodInfo *)0x0);
  if (bVar1) {
    targetAddress = &(layout->fields).alignItems;
    *targetAddress = "Center";
    Il2CppCodeGenWriteBarrier(targetAddress);
  }
  if ((layout->fields).width == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this,(MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_053867c0:
      ThrowNullReferenceException();
    }
    targetAddress_00 = &(layout->fields).width;
    (__this->fields).value = 100.0;
    (__this->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(__this->fields).unit);
    *targetAddress_00 = __this;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
  }
  return layout;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildColorSwatch
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildColorSwatch (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x537f970
// asm: 11 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x537f9f1: je 0x537f9ff
// asm:   0x537fb09: movss xmm0, dword ptr [rip - 0x43bdb61]
// asm:   0x537fb11: test rbp, rbp
// asm:   0x537fb14: jne 0x537fb44
// asm:   0x537fb16: jmp 0x537fb84
// asm:   0x537fbcb: movss xmm0, dword ptr [rip - 0x43bdc23]
// asm:   0x537fbd3: test rbp, rbp
// asm:   0x537fbd6: jne 0x537fc06
// asm:   0x537fbd8: jmp 0x537fc46
// asm:   0x537fc99: jmp 0x537fafb
// asm:   0x537fcb1: jmp 0x537fbbd
// body from a decompile with inferred signatures (Il2CppDecompileFallback.java): the final configuration did not decompile it


void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildColorSwatch
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  System_String_o *pSVar3;
  System_String_o **ppSVar4;
  long *plVar5;
  Il2CppObject *pIVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  bool bVar8;
  float fVar9;
  float in_XMM1_Da;
  UnityEngine_Color_Fields UStack_68;
  float fStack_58;
  undefined8 uStack_48;
  
  if (Il2CppMethodInitialized_07542ad1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    Il2CppMethodInitialized_07542ad1 = '\x01';
  }
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_0537fcb6;
  ppSVar4 = &(style->fields).background;
  bVar8 = false;
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    ppSVar4 = &"surface";
  }
  else {
    bVar8 = (style->fields).reliefGradient.fields.value != false;
  }
  pGVar2 = (context->fields).Theme;
  pSVar3 = *ppSVar4;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  plVar5 = (long *)Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage(go,style,pGVar2,pSVar3,bVar8);
  uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48);
  if ((node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     (uStack_48 = CONCAT44(uStack_48._4_4_,(float)uStack_48), plVar5 == (long *)0x0)) goto label_0537fcb6;
  pSVar3 = (node->fields).value;
  uStack_48 = (**(code **)(*plVar5 + 0x298))(plVar5,*(undefined8 *)(*plVar5 + 0x2a0));
  UStack_68.r = 0.0;
  UStack_68.g = 0.0;
  UStack_68.b = 0.0;
  UStack_68.a = 0.0;
  fStack_58 = in_XMM1_Da;
  bVar8 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar3,(UnityEngine_Color_o *)&UStack_68,(MethodInfo *)0x0);
  if (bVar8) {
    fVar9 = UStack_68.r;
    fStack_58 = UStack_68.b;
  }
  else {
    fVar9 = (float)uStack_48;
  }
  (**(code **)(*plVar5 + 0x2a8))(fVar9,fStack_58,plVar5,*(undefined8 *)(*plVar5 + 0x2b0));
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_0537fcb6;
  pIVar6 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pIVar6 == (Il2CppObject *)0x0) {
    pIVar6 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0537fc86;
label_0537faea:
    pGVar7 = (style->fields).width;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0537faea;
label_0537fc86:
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
  }
  fVar9 = 44.0;
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar3 = (pGVar7->fields).unit;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar8 = System_String__Equals_52ffe30(pSVar3,"point",5,(MethodInfo *)0x0);
    fVar9 = 44.0;
    if (bVar8) {
      fVar9 = (pGVar7->fields).value;
    }
  }
  if (pIVar6 != (Il2CppObject *)0x0) {
    (*pIVar6->klass->vtable[0x24].methodPtr)(fVar9,pIVar6,pIVar6->klass->vtable[0x24].method);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar7 = (style->fields).height;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    fVar9 = 44.0;
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar3 = (pGVar7->fields).unit;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar8 = System_String__Equals_52ffe30(pSVar3,"point",5,(MethodInfo *)0x0);
      fVar9 = 44.0;
      if (bVar8) {
        fVar9 = (pGVar7->fields).value;
      }
    }
    (*pIVar6->klass->vtable[0x26].methodPtr)(fVar9,pIVar6,pIVar6->klass->vtable[0x26].method);
    return;
  }
label_0537fcb6:
  ThrowNullReferenceException();
}

// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ParseColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseColor (System_String_o* value, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x5387c10

UnityEngine_Color_o
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseColor
          (System_String_o *value,UnityEngine_Color_o fallback,MethodInfo *method)

{
  UnityEngine_Color_Fields UVar1;
  bool bVar2;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar3;
  UnityEngine_Color_Fields UStack_38;
  undefined1 auStack_28 [16];
  undefined1 auStack_18 [16];
  
  auStack_18._8_4_ = in_XMM1_Dc;
  auStack_18._0_8_ = fallback.fields._8_8_;
  auStack_18._12_4_ = in_XMM1_Dd;
  auStack_28._8_4_ = in_XMM0_Dc;
  auStack_28._0_8_ = fallback.fields._0_8_;
  auStack_28._12_4_ = in_XMM0_Dd;
  UStack_38.r = 0.0;
  UStack_38.g = 0.0;
  UStack_38.b = 0.0;
  UStack_38.a = 0.0;
  bVar2 = UnityEngine_ColorUtility__TryParseHtmlString
                    (value,(UnityEngine_Color_o *)&UStack_38,(MethodInfo *)0x0);
  if (bVar2) {
    UVar1.b = UStack_38.b;
    UVar1.a = UStack_38.a;
    UVar1.r = UStack_38.r;
    UVar1.g = UStack_38.g;
    return (UnityEngine_Color_o)UVar1;
  }
  UVar3.fields.b = (float)auStack_18._0_4_;
  UVar3.fields.a = (float)auStack_18._4_4_;
  UVar3.fields.r = (float)auStack_28._0_4_;
  UVar3.fields.g = (float)auStack_28._4_4_;
  return (UnityEngine_Color_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildIcon
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildIcon (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x537d180
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x537d287: jmp 0x537d498
// asm:   0x537d30b: cmp byte ptr [rip + 0x21c57b2], 0
// asm:   0x537d312: je 0x537d331
// asm:   0x537d314: movss xmm0, dword ptr [rip - 0x43bb3c0]
// asm:   0x537d31c: test r13, r13
// asm:   0x537d31f: jne 0x537d35d
// asm:   0x537d321: jmp 0x537d39d
// asm:   0x537d3e3: movss xmm0, dword ptr [rip - 0x43bb48f]
// asm:   0x537d3eb: test rbp, rbp
// asm:   0x537d3ee: jne 0x537d41e
// asm:   0x537d3f0: jmp 0x537d45d
// asm:   0x537d493: jmp 0x537d3d5

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildIcon
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  uint32_t uVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool bVar2;
  bool bVar3;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *value;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  System_String_o *pSVar6;
  float fVar7;
  UnityEngine_Color_o UVar8;
  
  if (Il2CppMethodInitialized_07542ad2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_07542ad2 = '\x01';
  }
  if (((go != (UnityEngine_GameObject_o *)0x0) &&
      (__this_00 = UnityEngine_GameObject__AddComponent_object_
                             (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image),
      node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
     (value = Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load((node->fields).icon,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_UI_Image_o *)0x0)) {
    UnityEngine_UI_Image__set_sprite(__this_00,value,(MethodInfo *)0x0);
    UnityEngine_UI_Image__set_preserveAspect(__this_00,true,(MethodInfo *)0x0);
    bVar2 = System_String__IsNullOrEmpty((node->fields).tooltip,(MethodInfo *)0x0);
    bVar3 = true;
    if (bVar2) {
      bVar3 = System_String__IsNullOrEmpty((node->fields).tooltipKey,(MethodInfo *)0x0);
      bVar3 = !bVar3;
    }
    (*(__this_00->klass->vtable)._25_set_raycastTarget.methodPtr)
              (__this_00,bVar3,(__this_00->klass->vtable)._25_set_raycastTarget.method);
    if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
      __this = (context->fields).Theme;
      if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        pSVar6 = (System_String_o *)0x0;
      }
      else {
        pSVar6 = (style->fields).textColor;
      }
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
        UVar8.fields.b = 1.0;
        UVar8.fields.a = 1.0;
        UVar8.fields.r = 1.0;
        UVar8.fields.g = 1.0;
        UVar8 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                          (__this,"text",UVar8,(MethodInfo *)0x0);
        UVar8 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(__this,pSVar6,UVar8,(MethodInfo *)0x0);
        (*(__this_00->klass->vtable)._23_set_color.methodPtr)
                  (__this_00,UVar8,(__this_00->klass->vtable)._23_set_color.method);
        pUVar4 = UnityEngine_GameObject__AddComponent_object_
                           (go,(MethodInfo_353B6A0 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
        if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
          pGVar5 = (style->fields).width;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        if (Il2CppMethodInitialized_07542ac4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          il2cpp_codegen_initialize_runtime_metadata(&"point");
          Il2CppMethodInitialized_07542ac4 = '\x01';
        }
        fVar7 = 24.0;
        if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          pSVar6 = (pGVar5->fields).unit;
          if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
              cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          bVar2 = System_String__Equals_52ffe30(pSVar6,"point",5,(MethodInfo *)0x0);
          fVar7 = 24.0;
          if (bVar2) {
            fVar7 = (pGVar5->fields).value;
          }
        }
        if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar4,fVar7,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
          if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
            pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
            ;
          }
          else {
            pGVar5 = (style->fields).height;
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
            ;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          if (Il2CppMethodInitialized_07542ac4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            il2cpp_codegen_initialize_runtime_metadata(&"point");
            Il2CppMethodInitialized_07542ac4 = '\x01';
          }
          fVar7 = 24.0;
          if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
            pSVar6 = (pGVar5->fields).unit;
            if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            bVar2 = System_String__Equals_52ffe30(pSVar6,"point",5,(MethodInfo *)0x0);
            fVar7 = 24.0;
            if (bVar2) {
              fVar7 = (pGVar5->fields).value;
            }
          }
          (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar4,fVar7,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonIcon
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonIcon (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool hasText, const MethodInfo* method);
// 0x5383720
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53839ad: cmp byte ptr [rip + 0x21bf120], 0
// asm:   0x53839b4: mov rbx, qword ptr [rsp + 8]
// asm:   0x53839b9: je 0x53839dd
// asm:   0x53839bb: movss xmm0, dword ptr [rip - 0x43c1a67]
// asm:   0x53839c3: test rbx, rbx
// asm:   0x53839c6: jne 0x5383a09
// asm:   0x53839c8: jmp 0x5383a29

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonIcon
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_RectTransform_o *parent,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool hasText,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  Il2CppType *handle;
  bool bVar1;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  UnityEngine_UI_Image_o *__this_03;
  UnityEngine_Sprite_o *value_02;
  System_String_o *pSVar4;
  float fVar5;
  UnityEngine_Color_o UVar6;
  UnityEngine_Color_o UVar7;
  
  if (Il2CppMethodInitialized_07542ad3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Button Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/");
    Il2CppMethodInitialized_07542ad3 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05383be5;
  if (((node->fields).hasIcon == false) &&
     (bVar1 = System_String__IsNullOrEmpty((node->fields).icon,(MethodInfo *)0x0), bVar1)) {
    return (UnityEngine_UI_Image_o *)0x0;
  }
  bVar1 = System_String__IsNullOrEmpty((node->fields).icon,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
      handle = TypeRef_UnityEngine_RectTransform;
      if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075567a8);
      }
      obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      if (components != (System_Type_array *)0x0) {
        if ((obj != (System_Type_o *)0x0) &&
           (pIVar2 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
           pIVar2 == (Il2CppObject *)0x0)) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
        if ((int)components->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        components->m_Items[0] = obj;
        Il2CppCodeGenWriteBarrier(components->m_Items);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Button Icon",components,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        if ((__this_00 != (UnityEngine_GameObject_o *)0x0) &&
           (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_Transform_o *)0x0)) {
          UnityEngine_Transform__SetParent_692d510
                    (__this_01,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
          __this_02 = UnityEngine_GameObject__GetComponent_object_
                                (__this_00,
                                 (MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
            fVar5 = 0.5;
            if (hasText) {
              fVar5 = 0.0;
            }
            value.fields.y = 0.5;
            value.fields.x = fVar5;
            UnityEngine_RectTransform__set_anchorMin(__this_02,value,(MethodInfo *)0x0);
            value_01.fields.y = 0.5;
            value_01.fields.x = fVar5;
            UnityEngine_RectTransform__set_anchorMax(__this_02,value_01,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_pivot
                      (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            if (Il2CppMethodInitialized_07542ad4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
              Il2CppMethodInitialized_07542ad4 = '\x01';
            }
            fVar5 = 24.0;
            if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
               (fVar5 = 24.0, 0.0 < (style->fields).iconSize.fields.value)) {
              fVar5 = System_Nullable_float___get_Value
                                (&(style->fields).iconSize,
                                 (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
            }
            value_00.fields.y = fVar5;
            value_00.fields.x = fVar5;
            UnityEngine_RectTransform__set_sizeDelta(__this_02,value_00,(MethodInfo *)0x0);
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            UnityEngine_RectTransform__set_anchoredPosition
                      (__this_02,
                       (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
                       ,(MethodInfo *)0x0);
            pUVar3 = UnityEngine_GameObject__AddComponent_object_
                               (__this_00,
                                (MethodInfo_353B6A0 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
            if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
              (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
                        (pUVar3,fVar5,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
              (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
                        (pUVar3,fVar5,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
              __this_03 = UnityEngine_GameObject__AddComponent_object_
                                    (__this_00,
                                     (MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_Image);
              value_02 = Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load
                                   ((node->fields).icon,(MethodInfo *)0x0);
              if (__this_03 != (UnityEngine_UI_Image_o *)0x0) {
                UnityEngine_UI_Image__set_sprite(__this_03,value_02,(MethodInfo *)0x0);
                UnityEngine_UI_Image__set_preserveAspect(__this_03,true,(MethodInfo *)0x0);
                (*(__this_03->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (__this_03,false,(__this_03->klass->vtable)._25_set_raycastTarget.method);
                pSVar4 = (node->fields).icon;
                if (pSVar4 != (System_String_o *)0x0) {
                  bVar1 = System_String__StartsWith(pSVar4,"Icons/",(MethodInfo *)0x0);
                  fVar5 = (float)g_data_01005870;
                  UVar6.fields.g = g_data_01005870._4_4_;
                  if (bVar1) {
                    UVar6.fields._8_8_ = g_data_01005870;
                  }
                  else {
                    pSVar4 = (node->fields).icon;
                    if (pSVar4 == (System_String_o *)0x0) goto label_05383be5;
                    bVar1 = System_String__StartsWith(pSVar4,"UI/",(MethodInfo *)0x0);
                    fVar5 = (float)g_data_01005870;
                    UVar6.fields.g = g_data_01005870._4_4_;
                    UVar6.fields._8_8_ = g_data_01005870;
                    if (!bVar1) {
                      if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)
                      goto label_05383be5;
                      __this = (context->fields).Theme;
                      if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                        pSVar4 = (System_String_o *)0x0;
                      }
                      else {
                        pSVar4 = (style->fields).textColor;
                      }
                      if (__this == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_05383be5;
                      UVar6.fields.b = 1.0;
                      UVar6.fields.a = 1.0;
                      UVar6.fields.r = 1.0;
                      UVar6.fields.g = 1.0;
                      UVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                        (__this,pSVar4,UVar6,(MethodInfo *)0x0);
                      UVar6.fields._8_8_ = UVar6.fields._8_8_;
                      fVar5 = UVar6.fields.r;
                      UVar6.fields.g = UVar6.fields.g;
                    }
                    if (__this_03 == (UnityEngine_UI_Image_o *)0x0) goto label_05383be5;
                  }
                  UVar7.fields.g = UVar6.fields.g;
                  UVar7.fields.r = fVar5;
                  UVar7.fields.b = (float)(int)UVar6.fields._8_8_;
                  UVar7.fields.a = (float)(int)((ulong)UVar6.fields._8_8_ >> 0x20);
                  (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                            (__this_03,UVar7,(__this_03->klass->vtable)._23_set_color.method);
                  return __this_03;
                }
              }
            }
          }
        }
      }
label_05383be5:
      ThrowNullReferenceException();
    }
  }
  return (UnityEngine_UI_Image_o *)0x0;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ButtonIconSize
// il2cpp: float Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonIconSize (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x5386340

float Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonIconSize
                (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_07542ad4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    Il2CppMethodInitialized_07542ad4 = '\x01';
  }
  if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
     (0.0 < (style->fields).iconSize.fields.value)) {
    fVar1 = System_Nullable_float___get_Value
                      (&(style->fields).iconSize,
                       (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    return fVar1;
  }
  return 24.0;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSpriteImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool preserveAspect, bool raycastTarget, const MethodInfo* method);
// 0x53826c0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5382a96: jmp 0x5382c56
// asm:   0x5382c54: jmp 0x5382c78
// asm:   0x5382c89: mov rax, qword ptr [rsp + 8]
// asm:   0x5382c8e: test rax, rax
// asm:   0x5382c91: jne 0x5382cbc
// asm:   0x5382c93: jmp 0x5382e8e
// body from a decompile with inferred signatures (Il2CppDecompileFallback.java): the final configuration did not decompile it


Il2CppObject *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
          (UnityEngine_GameObject_o *param_1,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *param_2,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *param_3,MethodInfo *param_4,undefined1 param_5,
          ulong param_6)

{
  System_Nullable_bool__Fields SVar1;
  uint32_t uVar2;
  System_Nullable_float__Fields stainScaleOverride;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  bool bVar3;
  Il2CppObject *pIVar4;
  System_String_o *pSVar5;
  UnityEngine_Sprite_o *pUVar6;
  Il2CppClass *pIVar7;
  MethodInfo *pMVar8;
  UnityEngine_UI_Mask_o *__this;
  Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this_00;
  Il2CppObject *pIVar9;
  UnityEngine_Transform_o *__this_01;
  MethodInfo *method;
  float fVar10;
  undefined4 uVar11;
  UnityEngine_Color_o UVar12;
  
  method = param_4;
  if (Il2CppMethodInitialized_07542ad5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSidePanelOutlineSkew);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Mask);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Mask);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanel");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelBrushButton");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuTipBackground");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelOutline");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsCategoryBrush");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuBrushButton");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuLogo");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentFooterTexture");
    Il2CppMethodInitialized_07542ad5 = '\x01';
  }
  if (param_1 == (UnityEngine_GameObject_o *)0x0) goto label_05382e8e;
  pIVar4 = UnityEngine_GameObject__GetComponent_object_
                     (param_1,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  if (pIVar4 == (Il2CppObject *)0x0) {
    pIVar4 = UnityEngine_GameObject__AddComponent_object_
                       (param_1,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pSVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SpritePath
                     (param_2,param_3,(Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)param_4,method);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
  }
  pUVar6 = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(pSVar5,(MethodInfo *)0x0);
  if (pIVar4 == (Il2CppObject *)0x0) goto label_05382e8e;
  UnityEngine_UI_Image__set_sprite(pIVar4,pUVar6,0);
  UnityEngine_UI_Image__set_preserveAspect(pIVar4,param_5,0);
  pMVar8 = (MethodInfo *)(param_6 & 0xff);
  (*pIVar4->klass->vtable[0x19].methodPtr)(pIVar4,pMVar8,pIVar4->klass->vtable[0x19].method);
  bVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushSidePanelTexture(param_3,pMVar8);
  if (bVar3) {
    UnityEngine_UI_Image__set_type(pIVar4,2,0);
  }
  if (param_3 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pIVar7 = pIVar4->klass;
    pMVar8 = pIVar7->vtable[0x17].method;
    uVar11 = 0x3f800000;
label_05382a73:
    (*pIVar7->vtable[0x17].methodPtr)(uVar11,pIVar4);
  }
  else {
    bVar3 = System_String__IsNullOrEmpty((param_3->fields).background,(MethodInfo *)0x0);
    fVar10 = 1.0;
    if (!bVar3) {
      pSVar5 = (param_3->fields).background;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      method = (MethodInfo *)0x0;
      bVar3 = System_String__Equals_52ffe30(pSVar5,"clear",5,(MethodInfo *)0x0);
      fVar10 = 1.0;
      if (!bVar3) {
        if ((param_4 == (MethodInfo *)0x0) ||
           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)param_4->name ==
            (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) goto label_05382e8e;
        UVar12.fields.b = 1.0;
        UVar12.fields.a = 1.0;
        UVar12.fields.r = 1.0;
        UVar12.fields.g = 1.0;
        UVar12 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)param_4->name,
                            (param_3->fields).background,UVar12,(MethodInfo *)0x0);
        fVar10 = UVar12.fields.r;
      }
    }
    pMVar8 = pIVar4->klass->vtable[0x17].method;
    (*pIVar4->klass->vtable[0x17].methodPtr)(fVar10,pIVar4);
    if (param_3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pSVar5 = (param_3->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      method = (MethodInfo *)0x0;
      pMVar8 = (MethodInfo *)"brushSidePanelContentFooterTexture";
      bVar3 = System_String__Equals_52ffe30(pSVar5,"brushSidePanelContentFooterTexture",5,(MethodInfo *)0x0);
      if (bVar3) {
        uVar11 = (*pIVar4->klass->vtable[0x16].methodPtr)(pIVar4,pIVar4->klass->vtable[0x16].method);
        (*pIVar4->klass->vtable[0x16].methodPtr)(pIVar4,pIVar4->klass->vtable[0x16].method);
        (*pIVar4->klass->vtable[0x16].methodPtr)(pIVar4,pIVar4->klass->vtable[0x16].method);
        if ((param_4 == (MethodInfo *)0x0) ||
           ((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)param_4->name ==
            (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) goto label_05382e8e;
        method = (MethodInfo *)
                 (ulong)((((Gisketch_Aottg2UI_Styling_GisketchTheme_o *)param_4->name)->fields).
                         _IsDarkMode_k__BackingField == false);
        pIVar7 = pIVar4->klass;
        pMVar8 = pIVar7->vtable[0x17].method;
        goto label_05382a73;
      }
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    bVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsUntintedSpriteStyle(param_3,pMVar8);
    if (!bVar3) goto label_05382a91;
label_05382aac:
    (*pIVar4->klass->vtable[0x17].methodPtr)(pIVar4);
    if (param_3 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05382c56;
label_05382ad3:
    if ((param_3->fields).textured.fields.value == false) goto label_05382c56;
    pSVar5 = (param_3->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar5,"mainMenuBrushButton",5,(MethodInfo *)0x0);
    method = (MethodInfo *)0x1;
    if (!bVar3) {
      pSVar5 = (param_3->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar5,"brushSidePanelHeader",5,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar5 = (param_3->fields).name;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_52ffe30(pSVar5,"brushSidePanelBrushButton",5,(MethodInfo *)0x0);
        if (!bVar3) {
          pSVar5 = (param_3->fields).name;
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          bVar3 = System_String__Equals_52ffe30(pSVar5,"creditsCategoryBrush",5,(MethodInfo *)0x0);
          method = (MethodInfo *)(ulong)bVar3;
        }
      }
    }
    pSVar5 = (param_3->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar5,"brushSidePanel",5,(MethodInfo *)0x0);
    SVar1 = (param_3->fields).worn.fields;
    stainScaleOverride = (param_3->fields).wornStainScale.fields;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    pMVar8 = (MethodInfo *)
             Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
                       (0.0,false,0xff < (ushort)SVar1 || SVar1.hasValue == false,
                        (System_Nullable_float__o)stainScaleOverride,SUB81(method,0),bVar3,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner__Assign(pIVar4,pMVar8,0);
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsUntintedSpriteStyle(param_3,pMVar8);
    if (bVar3) goto label_05382aac;
label_05382a91:
    if (param_3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05382ad3;
label_05382c56:
    pMVar8 = (MethodInfo *)0x0;
    (*pIVar4->klass->vtable[0x21].methodPtr)(pIVar4,0,pIVar4->klass->vtable[0x21].method);
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsUntintedSpriteStyle(param_3,pMVar8);
  if (bVar3) {
    (*pIVar4->klass->vtable[0x21].methodPtr)(pIVar4,0,pIVar4->klass->vtable[0x21].method);
  }
  if (param_4 == (MethodInfo *)0x0) {
label_05382e8e:
    ThrowNullReferenceException();
  }
  theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)param_4->name;
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyShadow(param_1,param_3,theme,method);
  if (param_3 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pSVar5 = (param_3->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar5,"brushSidePanel",5,(MethodInfo *)0x0);
    if (bVar3) {
      __this = (UnityEngine_UI_Mask_o *)
               UnityEngine_GameObject__GetComponent_object_
                         (param_1,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Mask);
      if ((__this == (UnityEngine_UI_Mask_o *)0x0) &&
         (__this = (UnityEngine_UI_Mask_o *)
                   UnityEngine_GameObject__AddComponent_object_
                             (param_1,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_Mask),
         __this == (UnityEngine_UI_Mask_o *)0x0)) goto label_05382e8e;
      UnityEngine_UI_Mask__set_showMaskGraphic(__this,true,(MethodInfo *)0x0);
    }
    pSVar5 = (param_3->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar5,"brushSidePanelOutline",5,(MethodInfo *)0x0);
    if (bVar3) {
      __this_00 = (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            (param_1,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSidePanelOutlineSkew
                            );
      if (__this_00 == (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *)0x0) goto label_05382e8e;
      Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__Setup(__this_00,54.0,(MethodInfo *)0x0);
    }
    pSVar5 = (param_3->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar5,"mainMenuLogo",5,(MethodInfo *)0x0);
    if (bVar3) {
      pIVar9 = UnityEngine_GameObject__AddComponent_object_
                         (param_1,(MethodInfo_353B6A0 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur);
      if (pIVar9 == (Il2CppObject *)0x0) goto label_05382e8e;
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup(pIVar9,pIVar4,0);
    }
    pSVar5 = (param_3->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar5,"mainMenuTipBackground",5,(MethodInfo *)0x0);
    if (bVar3) {
      UnityEngine_UI_Image__set_preserveAspect(pIVar4,0,0);
      __this_01 = (UnityEngine_Transform_o *)UnityEngine_UI_Graphic__get_rectTransform(pIVar4);
      if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_05382e8e;
      UnityEngine_Transform__set_localEulerAngles
                (__this_01,(UnityEngine_Vector3_o)ZEXT812(0x4334000000000000),(MethodInfo *)0x0);
    }
  }
  return pIVar4;
}

// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SpritePath
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SpritePath (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x5387c60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5387c96: jmp 0x5387cf8

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SpritePath
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGVar4;
  
  pGVar4 = style;
  if (Il2CppMethodInitialized_07542ad6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Texture/SeamlessGrungeDark");
    Il2CppMethodInitialized_07542ad6 = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor != 0)
    goto label_05387c8a;
label_05387cca:
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    bVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushSidePanelTexture
                      (style,(MethodInfo *)pGVar4);
    if (bVar2) {
label_05387cdb:
      if ((context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
         (pGVar1 = (context->fields).Theme, pGVar1 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
      goto label_05387d0a;
      if ((pGVar1->fields)._IsDarkMode_k__BackingField != false) {
        ppSVar3 = &"GisketchUI/Texture/SeamlessGrungeDark";
        goto label_05387d01;
      }
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
    goto label_05387cca;
label_05387c8a:
    bVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushSidePanelTexture
                      (style,(MethodInfo *)pGVar4);
    if (bVar2) goto label_05387cdb;
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ppSVar3 = &(node->fields).sprite;
label_05387d01:
    return *ppSVar3;
  }
label_05387d0a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsBrushSidePanelTexture
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushSidePanelTexture (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x5387d10

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushSidePanelTexture
               (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07542ad7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentFooterTexture");
    Il2CppMethodInitialized_07542ad7 = '\x01';
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    bVar3 = false;
  }
  else {
    pSVar1 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_52ffe30(pSVar1,"brushSidePanelTexture",5,(MethodInfo *)0x0);
    bVar3 = true;
    if (!bVar2) {
      pSVar1 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar1,"brushSidePanelContentFooterTexture",5,(MethodInfo *)0x0);
      return bVar3;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildStandaloneSpriteImage
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildStandaloneSpriteImage (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x5380800
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5380837: cmp byte ptr [rip + 0x21c229e], 0
// asm:   0x5380840: test r12, r12
// asm:   0x5380843: jne 0x53808e3
// asm:   0x5380849: jmp 0x5380948
// asm:   0x5380b96: jmp 0x5380ae5
// asm:   0x5380b9b: movaps xmm0, xmmword ptr [rsp + 0x10]
// asm:   0x5380d61: jmp 0x5380bf5

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildStandaloneSpriteImage
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Sprite_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *pSVar4;
  bool bVar5;
  bool bVar6;
  UnityEngine_UI_Image_o *pUVar7;
  UnityEngine_UI_LayoutElement_o *pUVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  float fVar11;
  UnityEngine_Rect_o UVar12;
  MethodInfo *in_stack_ffffffffffffffa8;
  undefined8 uStack_48;
  
  if (Il2CppMethodInitialized_07542ad8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSpriteCover);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542ad8 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_07542adc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    Il2CppMethodInitialized_07542adc = '\x01';
  }
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pSVar4 = (style->fields).name;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar6 = System_String__Equals_52ffe30(pSVar4,"profilePreviewBanner",5,(MethodInfo *)0x0);
    if (bVar6) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildRectTransformCoverSpriteImage
                (go,node,style,context,method);
      return;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar6 = false;
  pUVar7 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
                     (go,node,style,context,true,false,in_stack_ffffffffffffffa8);
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar5 = System_String__IsNullOrEmpty((node->fields).tooltip,(MethodInfo *)0x0);
    bVar6 = true;
    if (bVar5) {
      bVar6 = System_String__IsNullOrEmpty((node->fields).tooltipKey,(MethodInfo *)0x0);
      bVar6 = !bVar6;
    }
  }
  if (pUVar7 == (UnityEngine_UI_Image_o *)0x0) goto label_05380d66;
  (*(pUVar7->klass->vtable)._25_set_raycastTarget.methodPtr)
            (pUVar7,bVar6,(pUVar7->klass->vtable)._25_set_raycastTarget.method);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pUVar2 = (UnityEngine_Object_o *)(pUVar7->fields).m_Sprite;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar6 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar6) {
      return;
    }
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_05380d66;
  pUVar8 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar8 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar8 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
  }
  pUVar2 = (UnityEngine_Object_o *)(pUVar7->fields).m_Sprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
    __this = (pUVar7->fields).m_Sprite;
    if (__this == (UnityEngine_Sprite_o *)0x0) goto label_05380d66;
    UVar12 = UnityEngine_Sprite__get_rect(__this,(MethodInfo *)0x0);
    uStack_48 = UVar12.fields._8_8_;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
  }
  else {
    uStack_48 = 0x4280000042800000;
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05380d66;
  pGVar3 = (node->fields).layout;
  if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05380acd;
label_05380b7d:
    pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    pGVar9 = (pGVar3->fields).width;
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05380b7d;
label_05380acd:
    pGVar10 = (style->fields).width;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    bVar6 = System_String__IsNullOrEmpty((pGVar9->fields).unit,(MethodInfo *)0x0);
    if (!bVar6) {
      pGVar10 = pGVar9;
    }
  }
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
  }
  fVar11 = (float)uStack_48;
  if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar4 = (pGVar10->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar6 = System_String__Equals_52ffe30(pSVar4,"point",5,(MethodInfo *)0x0);
    if (bVar6) {
      fVar11 = (pGVar10->fields).value;
    }
  }
  if (pUVar8 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar8->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar8,fVar11,(pUVar8->klass->vtable)._36_set_preferredWidth.method);
    pGVar3 = (node->fields).layout;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar9 = (pGVar3->fields).height;
    }
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar10 = (style->fields).height;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      bVar6 = System_String__IsNullOrEmpty((pGVar9->fields).unit,(MethodInfo *)0x0);
      if (!bVar6) {
        pGVar10 = pGVar9;
      }
    }
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    if (pGVar10 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar4 = (pGVar10->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar6 = System_String__Equals_52ffe30(pSVar4,"point",5,(MethodInfo *)0x0);
      if (bVar6) {
        uStack_48._4_4_ = (pGVar10->fields).value;
      }
    }
    (*(pUVar8->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar8,uStack_48._4_4_,(pUVar8->klass->vtable)._38_set_preferredHeight.method);
    if (Il2CppMethodInitialized_07542adb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"profileCardBannerImage");
      Il2CppMethodInitialized_07542adb = '\x01';
    }
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pSVar4 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar6 = System_String__Equals_52ffe30(pSVar4,"profileCardBannerImage",5,(MethodInfo *)0x0);
      if (bVar6) {
        UnityEngine_GameObject__AddComponent_object_
                  (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSpriteCover
                  );
        return;
      }
    }
    return;
  }
label_05380d66:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildRectTransformCoverSpriteImage
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildRectTransformCoverSpriteImage (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x5387f90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538832b: jmp 0x5388286
// asm:   0x5388330: movaps xmm0, xmmword ptr [rsp + 0x10]
// asm:   0x538845e: jmp 0x5388383

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildRectTransformCoverSpriteImage
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Sprite_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Il2CppType *handle;
  bool bVar3;
  System_String_o *pSVar4;
  System_String_o *value;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_UI_LayoutElement_o *pUVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  float fVar10;
  UnityEngine_Rect_o UVar11;
  MethodInfo *in_stack_ffffffffffffffa8;
  undefined8 local_48;
  
  if (Il2CppMethodInitialized_07542ad9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchRectTransformSpriteCover);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"-cover");
    Il2CppMethodInitialized_07542ad9 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_05388463;
  pSVar4 = UnityEngine_Object__get_name((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
  value = System_String__Concat_52f0320(pSVar4,"-cover",(MethodInfo *)0x0);
  UnityEngine_Object__set_name((UnityEngine_Object_o *)go,value,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_05388463;
  if ((obj != (System_Type_o *)0x0) &&
     (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
     pIVar5 == (Il2CppObject *)0x0)) {
    pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
  }
  if ((int)components->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  components->m_Items[0] = obj;
  Il2CppCodeGenWriteBarrier(components->m_Items);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(__this_00,pSVar4,components,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_05388463;
  __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_05388463;
  UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pUVar6 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
                     (__this_00,node,style,context,true,false,in_stack_ffffffffffffffa8);
  UnityEngine_GameObject__AddComponent_object_
            (__this_00,
             (MethodInfo_353B6A0 *)
             MethodInfo_UnityEngine_GameObject_AddComponent_GisketchRectTransformSpriteCover);
  pUVar7 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar7 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar7 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
  }
  if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) goto label_05388463;
  x = (UnityEngine_Object_o *)(pUVar6->fields).m_Sprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    __this = (pUVar6->fields).m_Sprite;
    if (__this == (UnityEngine_Sprite_o *)0x0) goto label_05388463;
    UVar11 = UnityEngine_Sprite__get_rect(__this,(MethodInfo *)0x0);
    local_48 = UVar11.fields._8_8_;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
  }
  else {
    local_48 = 0x4280000042800000;
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05388463;
  pGVar2 = (node->fields).layout;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05388318;
label_05388275:
    pGVar9 = (style->fields).width;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    pGVar8 = (pGVar2->fields).width;
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05388275;
label_05388318:
    pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((pGVar8->fields).unit,(MethodInfo *)0x0);
    if (!bVar3) {
      pGVar9 = pGVar8;
    }
  }
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
  }
  fVar10 = (float)local_48;
  if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar4 = (pGVar9->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar4,"point",5,(MethodInfo *)0x0);
    if (bVar3) {
      fVar10 = (pGVar9->fields).value;
    }
  }
  if (pUVar7 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar7->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar7,fVar10,(pUVar7->klass->vtable)._36_set_preferredWidth.method);
    pGVar2 = (node->fields).layout;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar8 = (pGVar2->fields).height;
    }
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar9 = (style->fields).height;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      bVar3 = System_String__IsNullOrEmpty((pGVar8->fields).unit,(MethodInfo *)0x0);
      if (!bVar3) {
        pGVar9 = pGVar8;
      }
    }
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    if (pGVar9 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar4 = (pGVar9->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar4,"point",5,(MethodInfo *)0x0);
      if (bVar3) {
        local_48._4_4_ = (pGVar9->fields).value;
      }
    }
    (*(pUVar7->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar7,local_48._4_4_,(pUVar7->klass->vtable)._38_set_preferredHeight.method);
    return;
  }
label_05388463:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsUntintedSpriteStyle
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsUntintedSpriteStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x5387dd0

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsUntintedSpriteStyle
               (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07542ada == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBannerImage");
    il2cpp_codegen_initialize_runtime_metadata(&"gridPickerThumbnail");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    il2cpp_codegen_initialize_runtime_metadata(&"profileGridItemThumbnail");
    Il2CppMethodInitialized_07542ada = '\x01';
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    bVar3 = false;
  }
  else {
    pSVar1 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_52ffe30(pSVar1,"gridPickerThumbnail",5,(MethodInfo *)0x0);
    bVar3 = true;
    if (!bVar2) {
      pSVar1 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar2 = System_String__Equals_52ffe30(pSVar1,"profileGridItemThumbnail",5,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (style->fields).name;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar2 = System_String__Equals_52ffe30(pSVar1,"profilePreviewBanner",5,(MethodInfo *)0x0);
        if (!bVar2) {
          pSVar1 = (style->fields).name;
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          bVar3 = System_String__Equals_52ffe30(pSVar1,"profileCardBannerImage",5,(MethodInfo *)0x0);
          return bVar3;
        }
      }
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsCoverSpriteStyle
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsCoverSpriteStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x5388480

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsCoverSpriteStyle
               (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542adb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBannerImage");
    Il2CppMethodInitialized_07542adb = '\x01';
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    return false;
  }
  a = (style->fields).name;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar1 = System_String__Equals_52ffe30(a,"profileCardBannerImage",5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsRectTransformCoverSpriteStyle
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsRectTransformCoverSpriteStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x5387f20

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsRectTransformCoverSpriteStyle
               (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07542adc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    Il2CppMethodInitialized_07542adc = '\x01';
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    return false;
  }
  a = (style->fields).name;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar1 = System_String__Equals_52ffe30(a,"profilePreviewBanner",5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildInputField
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildInputField (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool multiline, const MethodInfo* method);
// 0x537ea70
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x537ef67: cmp byte ptr [rip + 0x21c3b57], 0
// asm:   0x537ef6e: jne 0x537ef9b
// asm:   0x537f110: jmp 0x537ef9b

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildInputField
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool multiline,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  TMPro_TMP_Text_o *__this;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions;
  uint value;
  bool bVar3;
  bool bVar4;
  int32_t value_00;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o *__this_00;
  System_String_o **ppSVar5;
  UnityEngine_UI_Image_o *value_01;
  TMPro_TMP_InputField_o *__this_01;
  TMPro_TMP_InputField_OnValidateInput_o *__this_02;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar6;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *value_02;
  TMPro_TextMeshProUGUI_o *pTVar7;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this_03;
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this_04;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int value_03;
  MethodInfo *method_02;
  System_String_o *pSVar8;
  MethodInfo *method_03;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_Fields *targetAddress;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Color_o UVar12;
  UnityEngine_Color_o value_04;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o value_05;
  UnityEngine_Color_o fallback_00;
  
  if (Il2CppMethodInitialized_07542add == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDebouncedInputAction);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusInputSource);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault_719ab08);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault_719b178);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass41_0_BuildInputField_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass41_0);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"inputBg");
    Il2CppMethodInitialized_07542add = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass41_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o *)0x0) {
    targetAddress = &__this_00->fields;
    (__this_00->fields).node = node;
    Il2CppCodeGenWriteBarrier(&targetAddress->node);
    (__this_00->fields).multiline = multiline;
    if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_0537f115;
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      ppSVar5 = &"inputBg";
    }
    else {
      ppSVar5 = &(style->fields).background;
    }
    pGVar1 = (context->fields).Theme;
    pSVar8 = *ppSVar5;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    method_03 = (MethodInfo *)0x0;
    value_01 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                         (go,style,pGVar1,pSVar8,false,method);
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_0537f115;
    UnityEngine_GameObject__AddComponent_object_
              (go,(MethodInfo_353B6A0 *)
                  MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusInputSource);
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    bVar3 = true;
    if ((bVar4) && (bVar4 = UnityEngine_GameObject__get_activeSelf(go,(MethodInfo *)0x0), bVar4)) {
      bVar3 = false;
      UnityEngine_GameObject__SetActive(go,false,(MethodInfo *)0x0);
    }
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_TMP_InputField);
    if (__this_01 == (TMPro_TMP_InputField_o *)0x0) goto label_0537f115;
    UnityEngine_UI_Selectable__set_targetGraphic
              ((UnityEngine_UI_Selectable_o *)__this_01,(UnityEngine_UI_Graphic_o *)value_01,(MethodInfo *)0x0
              );
    UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this_01,0,(MethodInfo *)0x0);
    UnityEngine_UI_Selectable__set_navigation
              ((UnityEngine_UI_Selectable_o *)__this_01,(UnityEngine_UI_Navigation_o)ZEXT840(3),
               (MethodInfo *)0x0);
    UnityEngine_GameObject__AddComponent_object_
              (go,(MethodInfo_353B6A0 *)
                  MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
    value = (uint)(__this_00->fields).multiline * 2;
    method_02 = (MethodInfo *)(ulong)value;
    TMPro_TMP_InputField__set_lineType(__this_01,value,(MethodInfo *)0x0);
    pGVar2 = (__this_00->fields).node;
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537f115;
    pSVar8 = (pGVar2->fields).inputType;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    value_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ContentType(pSVar8,method_02);
    TMPro_TMP_InputField__set_contentType(__this_01,value_00,(MethodInfo *)0x0);
    if (targetAddress->node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537f115;
    bVar4 = System_Nullable_bool___GetValueOrDefault_3ccfd70
                      (&(targetAddress->node->fields).richText,true,
                       (MethodInfo_3CCFD70 *)MethodInfo_System_Nullable_bool_GetValueOrDefault_719ab08);
    TMPro_TMP_InputField__set_richText(__this_01,bVar4,(MethodInfo *)0x0);
    if (targetAddress->node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537f115;
    value_03 = (targetAddress->node->fields).maxCharacters;
    if (value_03 < 1) {
      value_03 = 0;
    }
    TMPro_TMP_InputField__set_characterLimit(__this_01,value_03,(MethodInfo *)0x0);
    pTVar6 = (__this_01->fields).m_OnValidateInput;
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor
              (__this_02,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass41_0_BuildInputField_b__0
               ,(MethodInfo *)0x0);
    pTVar6 = (TMPro_TMP_InputField_OnValidateInput_o *)
             System_Delegate__Combine
                       ((System_Delegate_o *)pTVar6,(System_Delegate_o *)__this_02,(MethodInfo *)0x0);
    if ((pTVar6 != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) &&
       (pTVar6->klass != TypeInfo_TMPro_TMP_InputField_OnValidateInput)) {
      il2cpp_codegen_raise_invalid_cast_exception(pTVar6);
    }
    TMPro_TMP_InputField__set_onValidateInput(__this_01,pTVar6,(MethodInfo *)0x0);
    TMPro_TMP_InputField__set_asteriskChar(__this_01,0x2022,(MethodInfo *)0x0);
    parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    value_02 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextArea(parent,style,method_00);
    TMPro_TMP_InputField__set_textViewport(__this_01,value_02,(MethodInfo *)0x0);
    pTVar7 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Placeholder
                       ((__this_01->fields).m_TextViewport,(__this_00->fields).node,context,
                        (__this_00->fields).multiline,method_03);
    TMPro_TMP_InputField__set_placeholder(__this_01,(UnityEngine_UI_Graphic_o *)pTVar7,(MethodInfo *)0x0);
    pTVar7 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__InputText
                       ((__this_01->fields).m_TextViewport,(__this_00->fields).node,style,context,
                        (__this_00->fields).multiline,method);
    TMPro_TMP_InputField__set_textComponent(__this_01,(TMPro_TMP_Text_o *)pTVar7,(MethodInfo *)0x0);
    __this = (__this_01->fields).m_TextComponent;
    if (__this == (TMPro_TMP_Text_o *)0x0) goto label_0537f115;
    TMPro_TMP_Text__set_richText(__this,(__this_01->fields).m_RichText,(MethodInfo *)0x0);
    if (targetAddress->node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537f115;
    pSVar8 = (targetAddress->node->fields).value;
    if (pSVar8 == (System_String_o *)0x0) {
      pSVar8 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    TMPro_TMP_InputField__SetTextWithoutNotify(__this_01,pSVar8,(MethodInfo *)0x0);
    TMPro_TMP_InputField__set_customCaretColor(__this_01,true,(MethodInfo *)0x0);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      fVar9 = 1.0;
      UVar12.fields.g = 1.0;
      fVar10 = fVar9;
      fVar11 = UVar12.fields.g;
    }
    else {
      pGVar1 = (context->fields).Theme;
      if (pGVar1 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_0537f115;
      UVar12.fields.b = 1.0;
      UVar12.fields.a = 1.0;
      UVar12.fields.r = 1.0;
      UVar12.fields.g = 1.0;
      UVar12 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (pGVar1,(style->fields).textColor,UVar12,(MethodInfo *)0x0);
      fVar9 = UVar12.fields.r;
      UVar12.fields.g = UVar12.fields.g;
      fVar10 = UVar12.fields.b;
      fVar11 = UVar12.fields.a;
    }
    value_04.fields.g = UVar12.fields.g;
    value_04.fields.r = fVar9;
    value_04.fields.a = fVar11;
    value_04.fields.b = fVar10;
    TMPro_TMP_InputField__set_caretColor(__this_01,value_04,(MethodInfo *)0x0);
    TMPro_TMP_InputField__set_caretWidth(__this_01,2,(MethodInfo *)0x0);
    pGVar1 = (context->fields).Theme;
    if (pGVar1 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_0537f115;
    fallback.fields.b = 1.0;
    fallback.fields.a = 1.0;
    fallback.fields.r = 1.0;
    fallback.fields.g = 1.0;
    UVar12 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (pGVar1,"primary",fallback,(MethodInfo *)0x0);
    value_05.fields.b = UVar12.fields.b;
    value_05.fields.a = 0.35;
    value_05.fields.r = UVar12.fields.r;
    value_05.fields.g = UVar12.fields.g;
    TMPro_TMP_InputField__set_selectionColor(__this_01,value_05,(MethodInfo *)0x0);
    pGVar1 = (context->fields).Theme;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_07542ac5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
      il2cpp_codegen_initialize_runtime_metadata(&"primary");
      il2cpp_codegen_initialize_runtime_metadata(&"focusRing");
      Il2CppMethodInitialized_07542ac5 = '\x01';
    }
    __this_03 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
    if (pGVar1 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_0537f115;
    fallback_00.fields.b = 1.0;
    fallback_00.fields.a = 1.0;
    fallback_00.fields.r = 1.0;
    fallback_00.fields.g = 1.0;
    UVar12 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (pGVar1,"primary",fallback_00,(MethodInfo *)0x0);
    UVar12 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (pGVar1,"focusRing",UVar12,(MethodInfo *)0x0);
    if (__this_03 == (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0) goto label_0537f115;
    Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup(__this_03,UVar12,3.0,5.0,14.0,true,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyInputMeasure(go,style,method_01);
    if (targetAddress->node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537f115;
    bVar4 = System_String__IsNullOrEmpty((targetAddress->node->fields).action,(MethodInfo *)0x0);
    if (bVar4) {
      if (targetAddress->node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537f115;
      bVar4 = System_String__IsNullOrEmpty((targetAddress->node->fields).commitAction,(MethodInfo *)0x0);
      if (bVar4) goto label_0537f0cb;
    }
    if ((context->fields).Actions == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
label_0537f0cb:
      if (bVar3) {
        return;
      }
      UnityEngine_GameObject__SetActive(go,true,(MethodInfo *)0x0);
      return;
    }
    __this_04 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDebouncedInputAction);
    pGVar2 = targetAddress->node;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      actions = (context->fields).Actions;
      fVar9 = System_Nullable_float___GetValueOrDefault_3cda300
                        (&(pGVar2->fields).debounceSeconds,0.2,
                         (MethodInfo_3CDA300 *)MethodInfo_System_Nullable_float_GetValueOrDefault_719b178);
      if (__this_04 != (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *)0x0) {
        Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Setup
                  (__this_04,__this_01,actions,pGVar2,fVar9,(MethodInfo *)0x0);
        goto label_0537f0cb;
      }
    }
  }
label_0537f115:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$TextArea
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextArea (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x53885f0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextArea
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_07542ade == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Input Text Area");
    Il2CppMethodInitialized_07542ade = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Input Text Area",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
        method_00 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(rect,method_00);
        fVar2 = 16.0;
        if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
           ((style->fields).padding.fields.hasValue != false)) {
          fVar2 = System_Nullable_float___get_Value
                            (&(style->fields).padding,
                             (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
        }
        if (rect != (UnityEngine_RectTransform_o *)0x0) {
          value.fields.y = 0.0;
          value.fields.x = fVar2;
          UnityEngine_RectTransform__set_offsetMin(rect,value,(MethodInfo *)0x0);
          value_00.fields.y = 0.0;
          value_00.fields.x = -fVar2;
          UnityEngine_RectTransform__set_offsetMax(rect,value_00,(MethodInfo *)0x0);
          UnityEngine_GameObject__AddComponent_object_
                    (__this,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
          return rect;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$InputText
// il2cpp: TMPro_TextMeshProUGUI_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__InputText (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool multiline, const MethodInfo* method);
// 0x53889f0

TMPro_TextMeshProUGUI_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__InputText
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool multiline,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  TMPro_TextMeshProUGUI_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *extraout_RDX;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *extraout_RDX_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *method_00;
  int32_t value;
  undefined3 in_register_00000081;
  undefined4 uVar1;
  undefined4 in_register_00000084;
  
  uVar1 = CONCAT31(in_register_00000081,multiline);
  method_00 = style;
  if (Il2CppMethodInitialized_07542adf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Input Text");
    Il2CppMethodInitialized_07542adf = '\x01';
    method_00 = extraout_RDX;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    method_00 = extraout_RDX_00;
  }
  __this = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextObject
                     ("AoTTG Input Text",parent,(MethodInfo *)method_00);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    text = UnityEngine_GameObject__AddComponent_object_
                     (__this,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (__this_00->fields).text = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
      if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (__this_00->fields).style = (node->fields).style;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText
                  (text,__this_00,style,context,(MethodInfo *)CONCAT44(in_register_00000084,uVar1));
        if (text != (TMPro_TextMeshProUGUI_o *)0x0) {
          TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,multiline,(MethodInfo *)0x0);
          value = 0x1001;
          if (multiline) {
            value = 0x101;
          }
          TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)text,value,(MethodInfo *)0x0);
          (*(text->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (text,false,(text->klass->vtable)._25_set_raycastTarget.method);
          return text;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$Placeholder
// il2cpp: TMPro_TextMeshProUGUI_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Placeholder (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool multiline, const MethodInfo* method);
// 0x5388840

TMPro_TextMeshProUGUI_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Placeholder
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool multiline,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  UnityEngine_GameObject_o *__this_00;
  TMPro_TextMeshProUGUI_o *text;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  int32_t value;
  
  method_00 = (MethodInfo *)context;
  if (Il2CppMethodInitialized_07542ae0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Input Placeholder");
    il2cpp_codegen_initialize_runtime_metadata(&"inputPlaceholder");
    Il2CppMethodInitialized_07542ae0 = '\x01';
    method_00 = extraout_RDX;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    method_00 = extraout_RDX_00;
  }
  __this_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextObject
                        ("AoTTG Input Placeholder",parent,method_00);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    text = UnityEngine_GameObject__AddComponent_object_
                     (__this_00,
                      (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
      __this = (context->fields).Theme;
      if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                          (__this,"inputPlaceholder",(MethodInfo *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
        if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
           (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
          (__this_01->fields).text = (node->fields).placeholder;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).text);
          (__this_01->fields).textKey = (node->fields).textKey;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).textKey);
          (__this_01->fields).style = "inputPlaceholder";
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).style);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText(text,__this_01,style,context,method);
          if (text != (TMPro_TextMeshProUGUI_o *)0x0) {
            TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,true,(MethodInfo *)0x0);
            value = 0x1001;
            if (multiline) {
              value = 0x101;
            }
            TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)text,value,(MethodInfo *)0x0);
            (*(text->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (text,false,(text->klass->vtable)._25_set_raycastTarget.method);
            return text;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$TextObject
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextObject (System_String_o* name, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
// 0x5388dc0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextObject
          (System_String_o *name,UnityEngine_RectTransform_o *parent,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542ae1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07542ae1 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,name,components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        method_00 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(rect,method_00);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ContentType
// il2cpp: int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ContentType (System_String_o* type, const MethodInfo* method);
// 0x53884f0

int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ContentType
                  (System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07542ae2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"Password");
    il2cpp_codegen_initialize_runtime_metadata(&"Number");
    il2cpp_codegen_initialize_runtime_metadata(&"Integer");
    Il2CppMethodInitialized_07542ae2 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar1 = System_String__Equals_52ffe30(type,"Integer",5,(MethodInfo *)0x0);
  iVar2 = 2;
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_52ffe30(type,"Number",5,(MethodInfo *)0x0);
    iVar2 = 3;
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar1 = System_String__Equals_52ffe30(type,"Password",5,(MethodInfo *)0x0);
      iVar2 = 7;
      if (!bVar1) {
        iVar2 = 0;
      }
    }
  }
  return iVar2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ValidateInput
// il2cpp: uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateInput (System_String_o* type, bool multiline, System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x5388f50
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5388f86: test bl, bl
// asm:   0x5388f88: jne 0x5388fd4
// asm:   0x5388f8a: jmp 0x5388fe7
// asm:   0x53890c9: mov ebx, ebp

uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateInput
                   (System_String_o *type,bool multiline,System_String_o *text,int32_t charIndex,
                   uint16_t addedChar,MethodInfo *method)

{
  uint32_t uVar1;
  uint uVar2;
  bool bVar3;
  uint16_t uVar4;
  MethodInfo *pMVar5;
  
  if (Il2CppMethodInitialized_07542ae3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"Number");
    il2cpp_codegen_initialize_runtime_metadata(&"Integer");
    Il2CppMethodInitialized_07542ae3 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (((!multiline) || (0xd < addedChar)) || ((0x2c00U >> (addedChar & 0x1f) & 1) == 0)) {
    if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556750);
    }
    bVar3 = System_Char__IsControl(addedChar,(MethodInfo *)0x0);
    if (bVar3) {
      return 0;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_52ffe30(type,"Integer",5,(MethodInfo *)0x0);
  uVar2 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  pMVar5 = (MethodInfo *)(ulong)uVar2;
  if (!bVar3) {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pMVar5 = (MethodInfo *)0x0;
    bVar3 = System_String__Equals_52ffe30(type,"Number",5,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      uVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateNumber
                        (text,charIndex,addedChar,pMVar5);
      return uVar4;
    }
    return addedChar;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  uVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateInteger(text,charIndex,addedChar,pMVar5);
  return uVar4;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$RejectControlCharacter
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RejectControlCharacter (bool multiline, uint16_t addedChar, const MethodInfo* method);
// 0x53890e0

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RejectControlCharacter
               (bool multiline,uint16_t addedChar,MethodInfo *method)

{
  bool bVar1;
  undefined7 in_register_00000039;
  
  if ((((int)CONCAT71(in_register_00000039,multiline) != 0) && (addedChar < 0xe)) &&
     ((0x2c00U >> (addedChar & 0x1f) & 1) != 0)) {
    return false;
  }
  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556750);
    bVar1 = System_Char__IsControl(addedChar,(MethodInfo *)0x0);
    return bVar1;
  }
  bVar1 = System_Char__IsControl(addedChar,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ValidateInteger
// il2cpp: uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateInteger (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x5389130
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5389185: mov ebx, ebp
// asm:   0x5389187: jmp 0x53891e3
// asm:   0x538919c: xor ebx, ebx
// asm:   0x538919e: test r15d, r15d
// asm:   0x53891a1: je 0x53891b1
// asm:   0x53891a3: jmp 0x53891e3

uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateInteger
                   (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  uint16_t uVar3;
  
  if (Il2CppMethodInitialized_07542ae4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542ae4 = '\x01';
  }
  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556750);
  }
  bVar1 = System_Char__IsDigit(addedChar,(MethodInfo *)0x0);
  uVar3 = addedChar;
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    uVar3 = 0;
    if ((charIndex == 0) && (uVar3 = 0, addedChar == 0x2d)) {
      bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
      if (!bVar1) {
        if (text == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar2 = System_String__IndexOf(text,0x2d,(MethodInfo *)0x0);
        if (-1 < iVar2) {
          return 0;
        }
      }
      uVar3 = 0x2d;
    }
  }
  return uVar3;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ValidateNumber
// il2cpp: uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateNumber (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x5389200
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5389264: test ebp, ebp
// asm:   0x5389266: je 0x5389273
// asm:   0x5389268: jmp 0x53892a5
// asm:   0x53892a3: jmp 0x53892c9

uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateNumber
                   (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  bool bVar1;
  int iVar2;
  uint16_t uVar3;
  
  if (Il2CppMethodInitialized_07542ae5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542ae5 = '\x01';
  }
  if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556750);
  }
  bVar1 = System_Char__IsDigit(addedChar,(MethodInfo *)0x0);
  if (bVar1) {
    return addedChar;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if ((charIndex == 0) && (addedChar == 0x2d)) {
    bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    uVar3 = 0x2d;
    if (bVar1) {
      return 0x2d;
    }
    if (text == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar2 = System_String__IndexOf(text,0x2d,(MethodInfo *)0x0);
  }
  else {
    if (addedChar != 0x2e) {
      return 0;
    }
    uVar3 = 0x2e;
    if (text == (System_String_o *)0x0) {
      return 0x2e;
    }
    iVar2 = System_String__IndexOf(text,0x2e,(MethodInfo *)0x0);
  }
  if (iVar2 < 0) {
    return uVar3;
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsLeadingMinus
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsLeadingMinus (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x53892e0

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsLeadingMinus
               (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  int32_t iVar3;
  
  bVar1 = false;
  if ((charIndex == 0) && (addedChar == 0x2d)) {
    bVar2 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    bVar1 = true;
    if (!bVar2) {
      if (text == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar3 = System_String__IndexOf(text,0x2d,(MethodInfo *)0x0);
      bVar1 = SUB41((uint)iVar3 >> 0x1f,0);
    }
  }
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyInputMeasure
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyInputMeasure (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x5388b70
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5388c09: movss xmm0, dword ptr [rip - 0x43c6ef9]
// asm:   0x5388c11: test rbx, rbx
// asm:   0x5388c14: jne 0x5388c44
// asm:   0x5388c16: jmp 0x5388c84
// asm:   0x5388ccb: movss xmm0, dword ptr [rip - 0x43c6de3]
// asm:   0x5388cd3: test rbx, rbx
// asm:   0x5388cd6: jne 0x5388d06
// asm:   0x5388cd8: jmp 0x5388d46
// asm:   0x5388d9d: jmp 0x5388bfb
// asm:   0x5388db5: jmp 0x5388cbd

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyInputMeasure
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  bool bVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07542ae6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542ae6 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_05388dba;
  pUVar4 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05388be3;
label_05388d83:
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05388d83;
label_05388be3:
    pGVar5 = (style->fields).width;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
  }
  fVar6 = 280.0;
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar2 = (pGVar5->fields).unit;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
    fVar6 = 280.0;
    if (bVar3) {
      fVar6 = (pGVar5->fields).value;
    }
  }
  if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar4,fVar6,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar5 = (style->fields).height;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    fVar6 = 58.0;
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar2 = (pGVar5->fields).unit;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
      fVar6 = 58.0;
      if (bVar3) {
        fVar6 = (pGVar5->fields).value;
      }
    }
    (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar4,fVar6,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
    return;
  }
label_05388dba:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyFlex
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex (Gilzoide_FlexUi_FlexLayout_o* flex, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x5384800
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53848c9: je 0x53848cf
// asm:   0x5384b99: jmp 0x5384bd2
// asm:   0x5384c5c: jmp 0x5384c95
// asm:   0x5384d2a: jne 0x5384e43
// asm:   0x5384e3d: je 0x5384d30
// asm:   0x5385036: xorps xmm2, xmm2
// asm:   0x5385039: test r13, r13
// asm:   0x538503c: jne 0x538515a
// asm:   0x5385042: jmp 0x5385177
// asm:   0x5385097: jmp 0x53849cf
// asm:   0x538509c: test r14, r14
// asm:   0x538509f: je 0x538548b
// asm:   0x538511b: jmp 0x5384ac2
// asm:   0x53851d4: xorps xmm3, xmm3
// asm:   0x53851d7: test r13, r13
// asm:   0x53851da: jne 0x5385210
// asm:   0x53851dc: jmp 0x538522d
// asm:   0x5385468: jmp 0x5384d65
// asm:   0x5385486: jmp 0x5384dd6
// asm:   0x53854a5: jmp 0x53850bc

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex
               (Gilzoide_FlexUi_FlexLayout_o *flex,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  uint32_t uVar1;
  Gilzoide_FlexUi_FlexLayout_o *__this;
  bool bVar2;
  bool bVar3;
  int32_t iVar4;
  Gilzoide_FlexUi_FlexLayout_o *__this_00;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar5;
  UnityEngine_GameObject_o *go;
  UnityEngine_UI_LayoutElement_o *x;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar6;
  Gilzoide_FlexUi_Yoga_YGValue_Fields fallback;
  Gilzoide_FlexUi_Yoga_YGValue_Fields fallback_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  MethodInfo *extraout_RDX_18;
  MethodInfo *pMVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar10;
  uint uVar11;
  float fVar12;
  float fVar13;
  float value;
  float local_68;
  
  if (Il2CppMethodInitialized_07542ae7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Align);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_FlexDirection);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Justify);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Wrap);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_07542ae7 = '\x01';
  }
  pSVar9 = (System_String_o *)0x0;
  __this_00 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    __this = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    __this_00 = flex;
  }
  else {
    pSVar9 = (layout->fields).direction;
    __this = flex;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  iVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                    (pSVar9,0,(MethodInfo_353CAE0 *)
                              MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_FlexDirection
                    );
  if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_053854aa;
  pSVar9 = (System_String_o *)0x0;
  Gilzoide_FlexUi_FlexLayout__set_FlexDirection(flex,iVar4,(MethodInfo *)0x0);
  if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pSVar9 = (layout->fields).justify;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  iVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                    (pSVar9,0,(MethodInfo_353CAE0 *)
                              MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Justify);
  Gilzoide_FlexUi_FlexLayout__set_JustifyContent(flex,iVar4,(MethodInfo *)0x0);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = false;
    uVar11 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                       ((System_String_o *)0x0,4,
                        (MethodInfo_353CAE0 *)
                        MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Align);
    if (__this_00 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_053854aa;
    pMVar7 = (MethodInfo *)(ulong)uVar11;
    Gilzoide_FlexUi_FlexLayout__set_AlignItems(__this_00,uVar11,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    pSVar9 = (layout->fields).alignItems;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    iVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                      (pSVar9,4,(MethodInfo_353CAE0 *)
                                MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Align);
    Gilzoide_FlexUi_FlexLayout__set_AlignItems(__this,iVar4,(MethodInfo *)0x0);
    pSVar9 = (layout->fields).alignSelf;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pMVar7 = (MethodInfo *)"Absolute";
    bVar2 = System_String__Equals_52ffe30(pSVar9,"Absolute",5,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsFullscreenAbsolute(layout,pMVar7);
  if (bVar2 == false) {
    if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pSVar9 = (System_String_o *)0x0;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    else {
      pSVar9 = (layout->fields).alignSelf;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    iVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                      (pSVar9,0,(MethodInfo_353CAE0 *)
                                MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Align);
    if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_053854aa;
    Gilzoide_FlexUi_FlexLayout__set_AlignSelf(flex,iVar4,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_PositionType(flex,1,(MethodInfo *)0x0);
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_05384ab2;
label_05385109:
    pSVar9 = (System_String_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    Gilzoide_FlexUi_FlexLayout__set_AlignSelf(flex,0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_PositionType(flex,2,(MethodInfo *)0x0);
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(0.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_PositionLeft(flex,GVar5,(MethodInfo *)0x0);
    GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(0.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_PositionTop(flex,GVar5,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(0.0,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__set_PositionRight(flex,GVar5,(MethodInfo *)0x0);
      GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(0.0,(MethodInfo *)0x0);
      Gilzoide_FlexUi_FlexLayout__set_PositionBottom(flex,GVar5,(MethodInfo *)0x0);
      go = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)flex,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__Mark(go,(MethodInfo *)0x0);
    }
    if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_05385109;
label_05384ab2:
    pSVar9 = (layout->fields).wrap;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  iVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                    (pSVar9,0,(MethodInfo_353CAE0 *)
                              MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Wrap);
  Gilzoide_FlexUi_FlexLayout__set_FlexWrap(flex,iVar4,(MethodInfo *)0x0);
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)flex,
                 (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_053854aa;
    fVar12 = (*(x->klass->vtable)._35_get_preferredWidth.methodPtr)
                       (x,(x->klass->vtable)._35_get_preferredWidth.method);
    if (fVar12 <= 0.0) goto label_05384b9b;
    fVar12 = (*(x->klass->vtable)._35_get_preferredWidth.methodPtr)
                       (x,(x->klass->vtable)._35_get_preferredWidth.method);
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar6 = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
            Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar12,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05384b9b:
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar6 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_053854aa;
    fVar12 = (*(x->klass->vtable)._37_get_preferredHeight.methodPtr)
                       (x,(x->klass->vtable)._37_get_preferredHeight.method);
    if (fVar12 <= 0.0) goto label_05384c5e;
    fVar12 = (*(x->klass->vtable)._37_get_preferredHeight.methodPtr)
                       (x,(x->klass->vtable)._37_get_preferredHeight.method);
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    fallback = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
               Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar12,(MethodInfo *)0x0);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05384c5e:
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    fallback = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pMVar7 = extraout_RDX;
  if (bVar2) {
    if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_053854aa;
    fVar12 = (*(x->klass->vtable)._31_get_minWidth.methodPtr)(x,(x->klass->vtable)._31_get_minWidth.method);
    pMVar7 = extraout_RDX_00;
    if (fVar12 <= 0.0) goto label_05384e0b;
    fVar12 = (*(x->klass->vtable)._31_get_minWidth.methodPtr)(x,(x->klass->vtable)._31_get_minWidth.method);
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    fallback_00 = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
                  Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar12,(MethodInfo *)0x0);
    pMVar7 = extraout_RDX_01;
    if (!bVar3) goto label_05384d30;
label_05384e43:
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    Gilzoide_FlexUi_FlexLayout__set_Width
              (flex,(Gilzoide_FlexUi_Yoga_YGValue_o)
                    (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields,(MethodInfo *)0x0);
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar6 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
  }
  else {
label_05384e0b:
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      pMVar7 = extraout_RDX_07;
    }
    fallback_00 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
    if (bVar3) goto label_05384e43;
label_05384d30:
    if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_05384d4e;
label_0538544e:
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar8 = (layout->fields).width;
      if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0538544e;
label_05384d4e:
      pGVar10 = (style->fields).width;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      pMVar7 = extraout_RDX_02;
    }
    if ((pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) &&
       (bVar2 = System_String__IsNullOrEmpty((pGVar8->fields).unit,(MethodInfo *)0x0),
       pMVar7 = extraout_RDX_03, !bVar2)) {
      pGVar10 = pGVar8;
    }
    GVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length
                      (pGVar10,(Gilzoide_FlexUi_Yoga_YGValue_o)GVar6,pMVar7);
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    Gilzoide_FlexUi_FlexLayout__set_Width(flex,GVar5,(MethodInfo *)0x0);
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (layout->fields).height;
    }
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar10 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar10 = (style->fields).height;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    pMVar7 = extraout_RDX_04;
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      pMVar7 = extraout_RDX_05;
    }
    if ((pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) &&
       (bVar2 = System_String__IsNullOrEmpty((pGVar8->fields).unit,(MethodInfo *)0x0),
       pMVar7 = extraout_RDX_06, !bVar2)) {
      pGVar10 = pGVar8;
    }
    GVar6 = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length
                      (pGVar10,(Gilzoide_FlexUi_Yoga_YGValue_o)fallback,pMVar7);
  }
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  Gilzoide_FlexUi_FlexLayout__set_Height(flex,(Gilzoide_FlexUi_Yoga_YGValue_o)GVar6,(MethodInfo *)0x0);
  if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar8 = (layout->fields).minWidth;
  }
  pMVar7 = extraout_RDX_08;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    pMVar7 = extraout_RDX_09;
  }
  GVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length
                    (pGVar8,(Gilzoide_FlexUi_Yoga_YGValue_o)fallback_00,pMVar7);
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  Gilzoide_FlexUi_FlexLayout__set_MinWidth(flex,GVar5,(MethodInfo *)0x0);
  if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar8 = (layout->fields).minHeight;
  }
  pMVar7 = extraout_RDX_10;
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    pMVar7 = extraout_RDX_11;
  }
  GVar6 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    pMVar7 = extraout_RDX_12;
  }
  GVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length
                    (pGVar8,(Gilzoide_FlexUi_Yoga_YGValue_o)GVar6,pMVar7);
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  Gilzoide_FlexUi_FlexLayout__set_MinHeight(flex,GVar5,(MethodInfo *)0x0);
  if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar8 = (layout->fields).maxWidth;
  }
  pMVar7 = extraout_RDX_13;
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    pMVar7 = extraout_RDX_14;
  }
  GVar6 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    pMVar7 = extraout_RDX_15;
  }
  GVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length
                    (pGVar8,(Gilzoide_FlexUi_Yoga_YGValue_o)GVar6,pMVar7);
  pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  Gilzoide_FlexUi_FlexLayout__set_MaxWidth(flex,GVar5,(MethodInfo *)0x0);
  if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar8 = (layout->fields).maxHeight;
  }
  pMVar7 = extraout_RDX_16;
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    pMVar7 = extraout_RDX_17;
  }
  GVar6 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    pMVar7 = extraout_RDX_18;
  }
  GVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length
                    (pGVar8,(Gilzoide_FlexUi_Yoga_YGValue_o)GVar6,pMVar7);
  Gilzoide_FlexUi_FlexLayout__set_MaxHeight(flex,GVar5,(MethodInfo *)0x0);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    if (__this_00 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_053854aa;
    Gilzoide_FlexUi_FlexLayout__set_FlexGrow(flex,0.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_FlexShrink(__this_00,1.0,(MethodInfo *)0x0);
joined_r0x05385158:
    fVar12 = 0.0;
    if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
       (fVar12 = 0.0, (style->fields).gap.fields.hasValue != false)) {
      fVar12 = System_Nullable_float___get_Value
                         (&(style->fields).gap,
                          (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    }
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_0538517c;
    if (__this_00 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
label_053854aa:
      ThrowNullReferenceException();
    }
    Gilzoide_FlexUi_FlexLayout__set_GapColumn(__this_00,fVar12,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_GapRow(__this_00,fVar12,(MethodInfo *)0x0);
joined_r0x0538520e:
    fVar12 = 0.0;
    if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
       (fVar12 = 0.0, (style->fields).padding.fields.hasValue != false)) {
      fVar12 = System_Nullable_float___get_Value
                         (&(style->fields).padding,
                          (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    }
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_05385232;
label_05385243:
    fVar13 = fVar12;
    if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
       ((style->fields).paddingX.fields.hasValue != false)) {
      fVar13 = System_Nullable_float___get_Value
                         (&(style->fields).paddingX,
                          (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    }
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_0538527c;
label_05385293:
    if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
       ((style->fields).paddingY.fields.hasValue != false)) {
      fVar12 = System_Nullable_float___get_Value
                         (&(style->fields).paddingY,
                          (MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    }
    value = fVar13;
    local_68 = fVar12;
    if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_053852e6;
  }
  else {
    Gilzoide_FlexUi_FlexLayout__set_FlexGrow(__this,(layout->fields).grow,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_FlexShrink(__this,(layout->fields).shrink,(MethodInfo *)0x0);
    fVar12 = (layout->fields).gap;
    if (fVar12 <= 0.0) goto joined_r0x05385158;
label_0538517c:
    fVar13 = (layout->fields).gapColumn;
    uVar11 = -(uint)(0.0 < fVar13);
    Gilzoide_FlexUi_FlexLayout__set_GapColumn
              (flex,(float)(~uVar11 & (uint)fVar12 | (uint)fVar13 & uVar11),(MethodInfo *)0x0);
    fVar13 = (layout->fields).gapRow;
    uVar11 = -(uint)(0.0 < fVar13);
    Gilzoide_FlexUi_FlexLayout__set_GapRow
              (__this,(float)(~uVar11 & (uint)fVar12 | (uint)fVar13 & uVar11),(MethodInfo *)0x0);
    fVar12 = (layout->fields).padding;
    if (fVar12 <= 0.0) goto joined_r0x0538520e;
label_05385232:
    fVar13 = (layout->fields).paddingX;
    if (fVar13 <= 0.0) goto label_05385243;
label_0538527c:
    local_68 = (layout->fields).paddingY;
    if (local_68 <= 0.0) goto label_05385293;
  }
  value = (layout->fields).paddingLeft;
  if (value <= 0.0) {
    value = fVar13;
  }
label_053852e6:
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_PaddingLeft(flex,GVar5,(MethodInfo *)0x0);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    uVar1 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor;
  }
  else {
    fVar12 = (layout->fields).paddingRight;
    if (0.0 < fVar12) {
      fVar13 = fVar12;
    }
    uVar1 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar13,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_PaddingRight(flex,GVar5,(MethodInfo *)0x0);
  fVar12 = local_68;
  if ((layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
     (fVar13 = (layout->fields).paddingTop, 0.0 < fVar13)) {
    fVar12 = fVar13;
  }
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar12,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_PaddingTop(flex,GVar5,(MethodInfo *)0x0);
  if ((layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
     (fVar12 = (layout->fields).paddingBottom, 0.0 < fVar12)) {
    local_68 = fVar12;
  }
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(local_68,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_PaddingBottom(flex,GVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsFullscreenAbsolute
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsFullscreenAbsolute (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x5389320
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53893c0: jmp 0x53893d7
// asm:   0x53893f8: jmp 0x538940f

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsFullscreenAbsolute
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  float fVar1;
  System_String_o *a;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  bool bVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07542ae8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_07542ae8 = '\x01';
  }
  if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    a = (layout->fields).alignSelf;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    method_00 = (MethodInfo *)"Absolute";
    bVar3 = System_String__Equals_52ffe30(a,"Absolute",5,(MethodInfo *)0x0);
    if (!bVar3) {
      return false;
    }
    pGVar2 = (layout->fields).width;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      bVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100(pGVar2,method_00);
    }
    else {
      bVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100(pGVar2,method_00);
    }
    if (bVar3) {
      pGVar2 = (layout->fields).height;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        bVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100(pGVar2,method_00);
      }
      else {
        bVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100(pGVar2,method_00);
      }
      if (bVar3) {
        fVar1 = (layout->fields).offsetX;
        if (Il2CppMethodInitialized_0753e7b4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
          Il2CppMethodInitialized_0753e7b4 = '\x01';
        }
        fVar6 = ABS(fVar1);
        if (fVar6 <= 0.0) {
          fVar6 = 0.0;
        }
        fVar4 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
        fVar5 = fVar6 * 1e-06;
        if (fVar6 * 1e-06 <= fVar4) {
          fVar5 = fVar4;
        }
        if (ABS(0.0 - fVar1) < fVar5) {
          fVar1 = (layout->fields).offsetY;
          fVar6 = ABS(fVar1);
          if (fVar6 <= 0.0) {
            fVar6 = 0.0;
          }
          fVar5 = fVar6 * 1e-06;
          if (fVar6 * 1e-06 <= fVar4) {
            fVar5 = fVar4;
          }
          return ABS(0.0 - fVar1) < fVar5;
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsPercent100
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100 (Gisketch_Aottg2UI_Data_GisketchLength_o* length, const MethodInfo* method);
// 0x5389650

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100
               (Gisketch_Aottg2UI_Data_GisketchLength_o *length,MethodInfo *method)

{
  float fVar1;
  System_String_o *a;
  bool bVar2;
  bool bVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07542ae9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_07542ae9 = '\x01';
  }
  if (length == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    bVar3 = false;
  }
  else {
    a = (length->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = false;
    bVar2 = System_String__Equals_52ffe30(a,"percent",5,(MethodInfo *)0x0);
    if (bVar2) {
      fVar1 = (length->fields).value;
      if (Il2CppMethodInitialized_0753e7b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
        Il2CppMethodInitialized_0753e7b4 = '\x01';
      }
      fVar5 = ABS(fVar1);
      if (fVar5 <= 100.0) {
        fVar5 = 100.0;
      }
      fVar4 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
      fVar6 = fVar5 * 1e-06;
      if (fVar5 * 1e-06 <= fVar4) {
        fVar6 = fVar4;
      }
      bVar3 = ABS(100.0 - fVar1) < fVar6;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$Length
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length (Gisketch_Aottg2UI_Data_GisketchLength_o* length, Gilzoide_FlexUi_Yoga_YGValue_o fallback, const MethodInfo* method);
// 0x53894d0

Gilzoide_FlexUi_Yoga_YGValue_o
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length
          (Gisketch_Aottg2UI_Data_GisketchLength_o *length,Gilzoide_FlexUi_Yoga_YGValue_o fallback,
          MethodInfo *method)

{
  float fVar1;
  System_String_o *pSVar2;
  bool bVar3;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar4;
  
  if (Il2CppMethodInitialized_07542aea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"auto");
    Il2CppMethodInitialized_07542aea = '\x01';
  }
  if (length != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((length->fields).unit,(MethodInfo *)0x0);
    if (!bVar3) {
      pSVar2 = (length->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar2,"percent",5,(MethodInfo *)0x0);
      if (bVar3) {
        fVar1 = (length->fields).value;
        if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
        }
        GVar4 = Gilzoide_FlexUi_Yoga_YGValue__Percent(fVar1,(MethodInfo *)0x0);
        return (Gilzoide_FlexUi_Yoga_YGValue_o)GVar4.fields;
      }
      pSVar2 = (length->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar2,"auto",5,(MethodInfo *)0x0);
      if (!bVar3) {
        fVar1 = (length->fields).value;
        if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
        }
        GVar4 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar1,(MethodInfo *)0x0);
        return (Gilzoide_FlexUi_Yoga_YGValue_o)GVar4.fields;
      }
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      fallback.fields = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
    }
  }
  return (Gilzoide_FlexUi_Yoga_YGValue_o)fallback.fields;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$PreferLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__PreferLayout (Gisketch_Aottg2UI_Data_GisketchLength_o* layout, Gisketch_Aottg2UI_Data_GisketchLength_o* style, const MethodInfo* method);
// 0x53863a0

Gisketch_Aottg2UI_Data_GisketchLength_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__PreferLayout
          (Gisketch_Aottg2UI_Data_GisketchLength_o *layout,Gisketch_Aottg2UI_Data_GisketchLength_o *style,
          MethodInfo *method)

{
  bool bVar1;
  
  if (layout != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((layout->fields).unit,(MethodInfo *)0x0);
    if (!bVar1) {
      style = layout;
    }
  }
  return style;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ParseEnum<Int32Enum>
// il2cpp: int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_ (System_String_o* value, int32_t fallback, const MethodInfo_353CAE0* method);
// 0x363cae0

int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                  (System_String_o *value,int32_t fallback,MethodInfo_353CAE0 *method)

{
  bool bVar1;
  int32_t local_1c;
  
  if (method->rgctx_data == (MethodInfo_353CAE0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  local_1c = 0;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar1 = System_Enum__TryParse_Int32Enum__34dc6f0
                      (value,true,&local_1c,
                       (MethodInfo_34DC6F0 *)method->rgctx_data->_0_System_Enum_TryParse_T_);
    if (bVar1) {
      fallback = local_1c;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ParseEnum<__Il2CppFullySharedGenericStructType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum___Il2CppFullySharedGenericStructType_ (System_String_o* value, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o fallback, const MethodInfo_353CB60* method);
// 0x363cb60

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum___Il2CppFullySharedGenericStructType_
          (System_String_o *value,Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o fallback,
          MethodInfo_353CB60 *method)

{
  Il2CppMethodPointer pIVar1;
  long lVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o __src;
  bool bVar3;
  char cVar4;
  Il2CppRGCTXData *pIVar5;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields UVar6;
  MethodInfo *in_RCX;
  ulong __n;
  undefined1 *puVar7;
  void *__s;
  undefined8 uStack_40;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o local_38;
  
  pIVar5 = (in_RCX->field7_0x38).rgctx_data;
  local_38 = (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)
             (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)fallback.fields._tail;
  if (pIVar5 == (Il2CppRGCTXData *)0x0) {
    uStack_40 = 0x363cb8c;
    il2cpp_codegen_rgctx_method_init(in_RCX);
    pIVar5 = (in_RCX->field7_0x38).rgctx_data;
  }
  __n = (ulong)((pIVar5[2].klass)->_2).stack_slot_size;
  lVar2 = -(__n + 0xf & 0xfffffffffffffff0);
  __s = (void *)((long)&local_38 + lVar2);
  *(undefined8 *)((long)&local_38 + lVar2 + -8) = 0x363cbb8;
  memset(__s,0,__n);
  *(undefined8 *)((long)&local_38 + lVar2 + -8) = 0x363cbc2;
  bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  puVar7 = (undefined1 *)((long)&local_38 + lVar2);
  if (!bVar3) {
    puVar7 = (undefined1 *)((long)&local_38 + lVar2);
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)((long)&local_38 + lVar2 + -8) = 0x363cbe2;
      il2cpp_codegen_runtime_class_init(g_data_07556760);
      puVar7 = (undefined1 *)((long)&local_38 + lVar2);
    }
    pIVar1 = ((in_RCX->field7_0x38).rgctx_data)->method->methodPointer;
    *(undefined8 *)(puVar7 + -8) = 0x363cbf6;
    cVar4 = (*pIVar1)(value,1,__s);
    if (cVar4 != '\0') {
      *(undefined8 *)(puVar7 + -8) = 0x363cc08;
      UVar6._tail = (uint8_t  [8])memcpy(method,__s,__n);
      return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)
             (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields)UVar6._tail;
    }
  }
  __src.fields._tail = local_38.fields._tail;
  *(undefined8 *)(puVar7 + -8) = 0x363cc19;
  UVar6._tail = (uint8_t  [8])memmove(method,(void *)__src.fields._tail,__n);
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)
         (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields)UVar6._tail;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ResolveTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ResolveTooltip (System_String_o* tooltip, System_String_o* tooltipKey, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x5389760
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53897a0: jmp 0x53898ec
// asm:   0x53897de: nop 

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ResolveTooltip
          (System_String_o *tooltip,System_String_o *tooltipKey,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *pGVar4;
  VirtualInvokeData *pVVar5;
  System_String_o *pSVar6;
  ulong uVar7;
  MethodInfo *pMVar8;
  long lVar9;
  Il2CppObject *obj;
  Il2CppMethodPointer vtableDispatch;
  
  if (Il2CppMethodInitialized_07542aeb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
    Il2CppMethodInitialized_07542aeb = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(tooltipKey,(MethodInfo *)0x0);
  if (bVar3) {
    if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
label_053898ec:
      ThrowNullReferenceException();
    }
  }
  else {
    if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_053898ec;
    obj = (Il2CppObject *)(context->fields).Localizer;
    if (obj != (Il2CppObject *)0x0) {
      pIVar1 = obj->klass;
      uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(Gisketch_Aottg2UI_Localization_IGisketchLocalizer_c **)((long)&pIVar2->interfaceType + lVar9)
              == TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer) {
            pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
            goto label_053898b0;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar7 * 0x10 != lVar9);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,0);
label_053898b0:
      vtableDispatch = pVVar5->methodPtr;
      pMVar8 = pVVar5->method;
      goto label_053898d8;
    }
  }
  __this = (context->fields).Manifest;
  if ((__this != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) &&
     (pGVar4 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindTooltip
                         (__this,tooltip,(MethodInfo *)0x0),
     pGVar4 != (Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *)0x0)) {
    bVar3 = System_String__IsNullOrEmpty((pGVar4->fields).textKey,(MethodInfo *)0x0);
    if ((!bVar3) && (obj = (Il2CppObject *)(context->fields).Localizer, obj != (Il2CppObject *)0x0)) {
      tooltip = (pGVar4->fields).text;
      tooltipKey = (pGVar4->fields).textKey;
      pIVar1 = obj->klass;
      uVar7 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar7 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(Gisketch_Aottg2UI_Localization_IGisketchLocalizer_c **)((long)&pIVar2->interfaceType + lVar9)
              == TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer) {
            pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
            goto label_053898ce;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar7 * 0x10 != lVar9);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,0);
label_053898ce:
      vtableDispatch = pVVar5->methodPtr;
      pMVar8 = pVVar5->method;
label_053898d8:
      pSVar6 = (System_String_o *)
               (*vtableDispatch)(obj,tooltipKey,tooltip,pMVar8,vtableDispatch);
      return pSVar6;
    }
    tooltip = (pGVar4->fields).text;
  }
  return tooltip;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$StyleMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StyleMotion (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x5389900

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StyleMotion
          (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *__this;
  System_String_o *pSVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07542aec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
    Il2CppMethodInitialized_07542aec = '\x01';
  }
  if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
     (bVar1 = System_String__IsNullOrEmpty((style->fields).motion,(MethodInfo *)0x0), bVar1)) {
    return (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor(__this,(MethodInfo *)0x0);
  if ((theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) ||
     (pSVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionPreset
                         (theme,(style->fields).motion,(MethodInfo *)0x0),
     __this == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (__this->fields).preset = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).preset);
  fVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionDuration
                    (theme,(style->fields).motion,0.16,(MethodInfo *)0x0);
  (__this->fields).duration = fVar3;
  return __this;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x5383c10

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchorMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyAspectRatio
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyAspectRatio (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x5387830

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyAspectRatio
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this;
  UnityEngine_UI_AspectRatioFitter_o *__this_00;
  System_Nullable_float__o *__this_01;
  float fVar1;
  UnityEngine_Vector2_o UVar2;
  
  if (Il2CppMethodInitialized_07542aed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AspectRatioFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AspectRatioFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    Il2CppMethodInitialized_07542aed = '\x01';
  }
  if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
     ((style->fields).aspectRatio.fields.hasValue != false)) {
    __this_01 = &(style->fields).aspectRatio;
    fVar1 = System_Nullable_float___get_Value
                      (__this_01,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
    if (0.0 < fVar1) {
      if (go != (UnityEngine_GameObject_o *)0x0) {
        __this = UnityEngine_GameObject__GetComponent_object_
                           (go,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this != (UnityEngine_RectTransform_o *)0x0) {
          UVar2 = UnityEngine_RectTransform__get_pivot(__this,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this,(UnityEngine_Vector2_o)((ulong)UVar2.fields & 0xffffffff00000000),
                     (MethodInfo *)0x0);
          __this_00 = UnityEngine_GameObject__GetComponent_object_
                                (go,(MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_AspectRatioFitter);
          if (__this_00 == (UnityEngine_UI_AspectRatioFitter_o *)0x0) {
            __this_00 = UnityEngine_GameObject__AddComponent_object_
                                  (go,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_AspectRatioFitter);
            if (__this_00 == (UnityEngine_UI_AspectRatioFitter_o *)0x0) goto label_0538797c;
          }
          UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_00,2,(MethodInfo *)0x0);
          fVar1 = System_Nullable_float___get_Value
                            (__this_01,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
          UnityEngine_UI_AspectRatioFitter__set_aspectRatio(__this_00,fVar1,(MethodInfo *)0x0);
          return;
        }
      }
label_0538797c:
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyLayoutOffset
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyLayoutOffset (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x5387990

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyLayoutOffset
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
               MethodInfo *method)

{
  float fVar1;
  UnityEngine_Vector2_Fields UVar2;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this;
  MethodInfo *method_00;
  float fVar3;
  float fVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07542aee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset);
    Il2CppMethodInitialized_07542aee = '\x01';
  }
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    return;
  }
  fVar1 = (layout->fields).offsetX;
  if (Il2CppMethodInitialized_0753e7b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Mathf);
    Il2CppMethodInitialized_0753e7b4 = '\x01';
  }
  fVar5 = ABS(fVar1);
  if (fVar5 <= 0.0) {
    fVar5 = 0.0;
  }
  fVar3 = TypeInfo_UnityEngine_Mathf->static_fields->Epsilon * 8.0;
  fVar4 = fVar5 * 1e-06;
  if (fVar5 * 1e-06 <= fVar3) {
    fVar4 = fVar3;
  }
  if (ABS(0.0 - fVar1) < fVar4) {
    fVar1 = (layout->fields).offsetY;
    fVar5 = ABS(fVar1);
    if (fVar5 <= 0.0) {
      fVar5 = 0.0;
    }
    fVar4 = fVar5 * 1e-06;
    if (fVar5 * 1e-06 <= fVar3) {
      fVar4 = fVar3;
    }
    if (ABS(0.0 - fVar1) < fVar4) {
      return;
    }
  }
  if ((go == (UnityEngine_GameObject_o *)0x0) ||
     (__this = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset),
     __this == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0)) {
    ThrowNullReferenceException();
  }
  UVar2 = *(UnityEngine_Vector2_Fields *)&(layout->fields).offsetX;
  if (Il2CppMethodInitialized_07542ab2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
    Il2CppMethodInitialized_07542ab2 = '\x01';
  }
  (__this->fields)._layoutOffset.fields = UVar2;
  method_00 = (MethodInfo *)
              UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)__this,
                         (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
  (__this->fields)._rect = (UnityEngine_RectTransform_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._rect);
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Apply(__this,method_00);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildScaleBox
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScaleBox (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x53815c0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScaleBox
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_Transform_o *parent;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this_00;
  MethodInfo *pMVar5;
  UnityEngine_RectTransform_o *pUVar6;
  Gisketch_Aottg2UI_Building_GisketchChildHost_o *pGVar7;
  undefined1 auVar8 [16];
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07542aef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchChildHost);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScaleToParent);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Scale Content");
    Il2CppMethodInitialized_07542aef = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel(go,node,style,context,method);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Scale Content",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (go != (UnityEngine_GameObject_o *)0x0) {
        parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
          pMVar5 = (MethodInfo *)0x0;
          UnityEngine_Transform__SetParent_692d510(pUVar4,parent,false,(MethodInfo *)0x0);
          flex = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
          if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex
                      (flex,(node->fields).contentLayout,
                       (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0,pMVar5);
            uVar1 = (node->fields).referenceWidth;
            uVar2 = (node->fields).referenceHeight;
            __this_00 = UnityEngine_GameObject__AddComponent_object_
                                  (go,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScaleToParent);
            pMVar5 = (MethodInfo *)
                     UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0) {
              if (Il2CppMethodInitialized_07542ab4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
                Il2CppMethodInitialized_07542ab4 = '\x01';
              }
              pUVar6 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)__this_00,
                                  (MethodInfo_34B0830 *)
                                  MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
              (__this_00->fields)._root = pUVar6;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._root);
              (__this_00->fields)._content = (UnityEngine_RectTransform_o *)pMVar5;
              Il2CppCodeGenWriteBarrier(&(__this_00->fields)._content);
              auVar8._4_4_ = ~-(uint)(0.0 < (float)uVar2) & 0x44870000 | uVar2 & -(uint)(0.0 < (float)uVar2);
              auVar8._0_4_ = ~-(uint)(0.0 < (float)uVar1) & 0x44f00000 | uVar1 & -(uint)(0.0 < (float)uVar1);
              auVar8._8_8_ = 0;
              auVar8 = maxps(_DAT_01005870,auVar8);
              (__this_00->fields)._referenceWidth = (float)auVar8._0_4_;
              (__this_00->fields)._referenceHeight = (float)auVar8._4_4_;
              Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this_00,pMVar5);
              pGVar7 = UnityEngine_GameObject__AddComponent_object_
                                 (go,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchChildHost);
              pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
              if (pGVar7 != (Gisketch_Aottg2UI_Building_GisketchChildHost_o *)0x0) {
                (pGVar7->fields)._Parent_k__BackingField = pUVar4;
                Il2CppCodeGenWriteBarrier(&(pGVar7->fields)._Parent_k__BackingField);
                return;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildScrollView
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScrollView (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x5381390

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScrollView
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  bool leftAligned;
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Scrollbar_o *value;
  Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this_01;
  UnityEngine_RectTransform_o *pUVar2;
  Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this_02;
  Gisketch_Aottg2UI_Building_GisketchChildHost_o *pGVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (Il2CppMethodInitialized_07542af0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchChildHost);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollRect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollbarVisibility);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbar-left");
    Il2CppMethodInitialized_07542af0 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  method_00 = (MethodInfo *)context;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel(go,node,style,context,method);
  if (go != (UnityEngine_GameObject_o *)0x0) {
    method_02 = (MethodInfo *)0x0;
    pUVar1 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    __this = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateViewport(pUVar1,method_02);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        __this_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateContent
                              (pUVar1,(node->fields).contentLayout,method_01);
        pUVar1 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
        if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
          theme = (context->fields).Theme;
          leftAligned = System_String__op_Equality
                                  ((node->fields).value,"scrollbar-left",(MethodInfo *)0x0);
          value = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateScrollbar
                            (pUVar1,theme,leftAligned,method_00);
          __this_01 = UnityEngine_GameObject__AddComponent_object_
                                (go,(MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollRect);
          if (__this_01 != (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *)0x0) {
            (__this_01->fields).m_Horizontal = false;
            (__this_01->fields).m_Vertical = true;
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_353B730 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            UnityEngine_UI_ScrollRect__set_viewport
                      ((UnityEngine_UI_ScrollRect_o *)__this_01,pUVar2,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              pUVar2 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              (__this_01->fields).m_Content = pUVar2;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).m_Content);
              UnityEngine_UI_ScrollRect__set_verticalScrollbar
                        ((UnityEngine_UI_ScrollRect_o *)__this_01,value,(MethodInfo *)0x0);
              UnityEngine_UI_ScrollRect__set_verticalScrollbarVisibility
                        ((UnityEngine_UI_ScrollRect_o *)__this_01,0,(MethodInfo *)0x0);
              (__this_01->fields).m_MovementType = 2;
              (__this_01->fields).m_Elasticity = 0.0;
              (__this_01->fields).m_ScrollSensitivity = 28.0;
              __this_02 = UnityEngine_GameObject__AddComponent_object_
                                    (go,(MethodInfo_353B6A0 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollbarVisibility
                                    );
              if (__this_02 != (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)0x0) {
                Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup
                          (__this_02,(UnityEngine_UI_ScrollRect_o *)__this_01,(MethodInfo *)0x0);
                pGVar3 = UnityEngine_GameObject__AddComponent_object_
                                   (go,(MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchChildHost);
                pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchChildHost_o *)0x0) {
                  (pGVar3->fields)._Parent_k__BackingField = pUVar1;
                  Il2CppCodeGenWriteBarrier(&(pGVar3->fields)._Parent_k__BackingField);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CreateViewport
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateViewport (UnityEngine_Transform_o* parent, const MethodInfo* method);
// 0x53899c0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateViewport
          (UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  MethodInfo *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_UI_Image_o *pUVar2;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  MethodInfo *method_00;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_07542af1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Scroll Viewport");
    Il2CppMethodInitialized_07542af1 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60
              ((UnityEngine_GameObject_o *)__this,"AoTTG Scroll Viewport",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (MethodInfo *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
        pMVar3 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
        rect = UnityEngine_GameObject__GetComponent_object_
                         ((UnityEngine_GameObject_o *)__this,
                          (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(rect,pMVar3);
        pUVar2 = UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)__this,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                    (pUVar2,(UnityEngine_Color_o)ZEXT816(0),(pUVar2->klass->vtable)._23_set_color.method);
          (*(pUVar2->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (pUVar2,true,(pUVar2->klass->vtable)._25_set_raycastTarget.method);
          UnityEngine_GameObject__AddComponent_object_
                    ((UnityEngine_GameObject_o *)__this,
                     (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
          pMVar3 = __this;
          flex = UnityEngine_GameObject__AddComponent_object_
                           ((UnityEngine_GameObject_o *)__this,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
          layout = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__FillLayout(1.0,pMVar3);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex
                    (flex,layout,(Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0,method_00);
          return (UnityEngine_GameObject_o *)__this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CreateContent
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateContent (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x5389c20

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateContent
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
          MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  Gisketch_Aottg2UI_Building_GisketchScrollContentLayout_o *flex;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07542af2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollContentLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Scroll Content");
    Il2CppMethodInitialized_07542af2 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Scroll Content",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_01,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
          method_01 = MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollContentLayout;
          flex = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollContentLayout)
          ;
          layout_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ScrollContentLayout(layout,method_01);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex
                    ((Gilzoide_FlexUi_FlexLayout_o *)flex,layout_00,
                     (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0,method_00);
          return __this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CreateScrollbar
// il2cpp: UnityEngine_UI_Scrollbar_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateScrollbar (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, bool leftAligned, const MethodInfo* method);
// 0x5389e80
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5389f53: mov qword ptr [rsp + 0x48], rbx
// asm:   0x5389f58: cmp byte ptr [rip + 0x21b8b65], 0
// asm:   0x5389f5f: je 0x5389f8b
// asm:   0x5389f61: movss xmm0, dword ptr [rip - 0x43c8329]
// asm:   0x5389f69: test rbp, rbp
// asm:   0x5389f6c: movaps xmmword ptr [rsp + 0x30], xmm0
// asm:   0x5389f73: jmp 0x5389ff8

UnityEngine_UI_Scrollbar_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateScrollbar
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,bool leftAligned,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields UVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  System_String_o *pSVar3;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  Il2CppType *handle;
  bool bVar4;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_UI_Image_o *value_01;
  MethodInfo *method_00;
  MethodInfo *in_R9;
  float fVar8;
  float fVar9;
  
  if (Il2CppMethodInitialized_07542af3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Scrollbar);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Scrollbar");
    Il2CppMethodInitialized_07542af3 = '\x01';
  }
  if ((theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) &&
     (style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"scrollbar",(MethodInfo *)0x0)
     , style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) {
    pGVar2 = (style->fields).width;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    fVar8 = 12.0;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      fVar8 = 12.0;
      pSVar3 = (pGVar2->fields).unit;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar4 = System_String__Equals_52ffe30(pSVar3,"point",5,(MethodInfo *)0x0);
      if (bVar4) {
        fVar8 = (pGVar2->fields).value;
      }
    }
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if ((obj != (System_Type_o *)0x0) &&
         (pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
         pIVar5 == (Il2CppObject *)0x0)) {
        pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
      }
      if ((int)components->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      components->m_Items[0] = obj;
      Il2CppCodeGenWriteBarrier(components->m_Items);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Scrollbar",components,(MethodInfo *)0x0);
      if ((__this != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar6 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
         pUVar6 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_692d510(pUVar6,parent,false,(MethodInfo *)0x0);
        pUVar7 = UnityEngine_GameObject__GetComponent_object_
                           (__this,(MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (leftAligned) {
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_0538a362;
          UnityEngine_RectTransform__set_anchorMin
                    (pUVar7,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar7,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (pUVar7,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMin
                    (pUVar7,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          fVar9 = 0.0;
        }
        else {
          if (pUVar7 == (UnityEngine_RectTransform_o *)0x0) goto label_0538a362;
          UnityEngine_RectTransform__set_anchorMin(pUVar7,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0)
          ;
          if (Il2CppMethodInitialized_07542885 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_07542885 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar7,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0)
          ;
          UnityEngine_RectTransform__set_pivot
                    (pUVar7,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
          value.fields.y = 0.0;
          value.fields.x = -fVar8;
          UnityEngine_RectTransform__set_offsetMin(pUVar7,value,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UVar1 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
          fVar8 = UVar1.x;
          fVar9 = UVar1.y;
        }
        value_00.fields.y = fVar9;
        value_00.fields.x = fVar8;
        UnityEngine_RectTransform__set_offsetMax(pUVar7,value_00,(MethodInfo *)0x0);
        pSVar3 = (style->fields).background;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage(__this,style,theme,pSVar3,false,in_R9);
        pUVar6 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        pUVar7 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateScrollbarThumb
                           (pUVar6,theme,method_00);
        __this_00 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_353B6A0 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_Scrollbar);
        if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
          UnityEngine_UI_Scrollbar__set_direction(__this_00,2,(MethodInfo *)0x0);
          UnityEngine_UI_Scrollbar__set_handleRect(__this_00,pUVar7,(MethodInfo *)0x0);
          if (pUVar7 != (UnityEngine_RectTransform_o *)0x0) {
            value_01 = UnityEngine_Component__GetComponent_object_
                                 ((UnityEngine_Component_o *)pUVar7,
                                  (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
            UnityEngine_UI_Selectable__set_targetGraphic
                      ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Graphic_o *)value_01,
                       (MethodInfo *)0x0);
            UnityEngine_UI_Selectable__set_transition
                      ((UnityEngine_UI_Selectable_o *)__this_00,0,(MethodInfo *)0x0);
            UnityEngine_UI_Selectable__set_navigation
                      ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Navigation_o)ZEXT840(0),
                       (MethodInfo *)0x0);
            return __this_00;
          }
        }
      }
    }
  }
label_0538a362:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CreateScrollbarThumb
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateScrollbarThumb (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x538a770

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateScrollbarThumb
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method
          )

{
  Il2CppType *handle;
  System_Type_array *pSVar1;
  System_Type_o *pSVar2;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *parent_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  MethodInfo *pMVar6;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07542af4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbarThumb");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Scrollbar Sliding Area");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Scrollbar Thumb");
    Il2CppMethodInitialized_07542af4 = '\x01';
  }
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Type_array *)0x0) {
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) goto label_0538aa3b;
    }
    if ((int)pSVar1->max_length == 0) {
label_0538aa36:
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Scrollbar Sliding Area",pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(pUVar4,parent,false,(MethodInfo *)0x0);
        pMVar6 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (__this,(MethodInfo_353B730 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(pUVar5,pMVar6);
        pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
        pSVar2 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
        if (pSVar1 != (System_Type_array *)0x0) {
          if (pSVar2 != (System_Type_o *)0x0) {
            pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class)
            ;
            if (pIVar3 == (Il2CppObject *)0x0) {
label_0538aa3b:
              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
            }
          }
          if ((int)pSVar1->max_length == 0) goto label_0538aa36;
          pSVar1->m_Items[0] = pSVar2;
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Scrollbar Thumb",pSVar1,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            parent_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_692d510(pUVar4,parent_00,false,(MethodInfo *)0x0);
              pMVar6 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
              pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_353B730 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(pUVar5,pMVar6);
              if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                                  (theme,"scrollbarThumb",(MethodInfo *)0x0);
                if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                            (__this_00,style,theme,(style->fields).background,true,in_R9);
                  pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                     (__this_00,
                                      (MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                  return pUVar5;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$FillLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__FillLayout (float grow, const MethodInfo* method);
// 0x538a380

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__FillLayout(float grow,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  
  if (Il2CppMethodInitialized_07542af5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_07542af5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).direction = "Column";
    Il2CppCodeGenWriteBarrier(&(__this->fields).direction);
    (__this->fields).alignItems = "Stretch";
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems);
    pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar1->fields).value = 100.0;
      (pGVar1->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).unit);
      (__this->fields).width = pGVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).width);
      pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar1,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        (pGVar1->fields).value = 100.0;
        (pGVar1->fields).unit = "percent";
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).unit);
        (__this->fields).height = pGVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields).height);
        (__this->fields).grow = grow;
        (__this->fields).shrink = 0.0;
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ScrollContentLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ScrollContentLayout (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x538a500

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ScrollContentLayout
          (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  System_String_o **ppSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07542af6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_07542af6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_0538a75e;
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    ppSVar3 = &"Column";
  }
  else {
    ppSVar3 = &(layout->fields).direction;
  }
  (__this->fields).direction = ((Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_Fields *)ppSVar3)->direction;
  Il2CppCodeGenWriteBarrier(&(__this->fields).direction);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).justify = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).justify);
    (__this->fields).alignItems = "Stretch";
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems);
    (__this->fields).alignSelf = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignSelf);
    (__this->fields).wrap = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).wrap);
label_0538a64f:
    pGVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(pGVar4,(MethodInfo *)0x0);
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_0538a75e;
    (pGVar4->fields).value = 100.0;
    (pGVar4->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).unit);
    (__this->fields).width = pGVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).width);
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_0538a6ab;
    (__this->fields).minWidth = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).minWidth);
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    (__this->fields).justify = (layout->fields).justify;
    Il2CppCodeGenWriteBarrier(&(__this->fields).justify);
    (__this->fields).alignItems = (layout->fields).alignItems;
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems);
    (__this->fields).alignSelf = (layout->fields).alignSelf;
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignSelf);
    (__this->fields).wrap = (layout->fields).wrap;
    Il2CppCodeGenWriteBarrier(&(__this->fields).wrap);
    pGVar4 = (layout->fields).width;
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_0538a64f;
    (__this->fields).width = pGVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).width);
label_0538a6ab:
    (__this->fields).minWidth = (layout->fields).minWidth;
    Il2CppCodeGenWriteBarrier(&(__this->fields).minWidth);
    pGVar4 = (layout->fields).maxWidth;
    pGVar5 = __this;
  }
  (__this->fields).maxWidth = pGVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields).maxWidth);
  (__this->fields).grow = 0.0;
  (__this->fields).shrink = 0.0;
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).paddingX = 0.0;
    (__this->fields).paddingY = 0.0;
    (__this->fields).paddingLeft = 0.0;
    (__this->fields).paddingRight = 0.0;
    (__this->fields).gap = 0.0;
    (__this->fields).gapRow = 0.0;
    (__this->fields).gapColumn = 0.0;
    (__this->fields).padding = 0.0;
    (__this->fields).paddingTop = 0.0;
    fVar6 = 0.0;
  }
  else {
    if (pGVar5 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
label_0538a75e:
      ThrowNullReferenceException();
    }
    fVar6 = (layout->fields).gapRow;
    fVar1 = (layout->fields).gapColumn;
    fVar2 = (layout->fields).padding;
    (pGVar5->fields).gap = (layout->fields).gap;
    (pGVar5->fields).gapRow = fVar6;
    (pGVar5->fields).gapColumn = fVar1;
    (pGVar5->fields).padding = fVar2;
    fVar6 = (layout->fields).paddingY;
    fVar1 = (layout->fields).paddingLeft;
    fVar2 = (layout->fields).paddingRight;
    (pGVar5->fields).paddingX = (layout->fields).paddingX;
    (pGVar5->fields).paddingY = fVar6;
    (pGVar5->fields).paddingLeft = fVar1;
    (pGVar5->fields).paddingRight = fVar2;
    (pGVar5->fields).paddingTop = (layout->fields).paddingTop;
    fVar6 = (layout->fields).paddingBottom;
  }
  (__this->fields).paddingBottom = fVar6;
  return __this;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSearchPalette
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSearchPalette (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x537f130

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSearchPalette
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_o *id;
  System_String_o *placeholder;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  System_String_o **ppSVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  MethodInfo *pMVar4;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_02;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_03;
  TMPro_TMP_InputField_o *input;
  UnityEngine_UI_Button_o *submit;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)view;
  if (Il2CppMethodInitialized_07542af7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgSearchPaletteControl);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"search-palette");
    Il2CppMethodInitialized_07542af7 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_0537f3d0;
  __this = (node->fields).layout;
  if (__this == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_0537f3d0;
    (__this->fields).direction = "Row";
    Il2CppCodeGenWriteBarrier(&(__this->fields).direction);
    (__this->fields).alignItems = "Center";
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems);
    (__this->fields).gap = 8.0;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_0537f3d0;
    (__this_00->fields).value = 100.0;
    (__this_00->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit);
    (__this->fields).width = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).width);
  }
  (node->fields).layout = __this;
  Il2CppCodeGenWriteBarrier(&(node->fields).layout);
  bVar1 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar2 = &"search-palette";
  }
  else {
    ppSVar2 = &(node->fields).id;
  }
  id = *ppSVar2;
  placeholder = (node->fields).placeholder;
  pMVar4 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    pMVar4 = extraout_RDX_00;
  }
  pGVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__InputNode(id,placeholder,pMVar4);
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pMVar4 = (MethodInfo *)UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    __this_01 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                          (pGVar3,(UnityEngine_Transform_o *)pMVar4,context,view,method_00);
    pGVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SearchButtonNode(id,pMVar4);
    parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    __this_02 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                          (pGVar3,parent,context,view,method_00);
    __this_03 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_353B6A0 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_AottgSearchPaletteControl);
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      input = UnityEngine_GameObject__GetComponent_object_
                        (__this_01,
                         (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
      if (__this_02 != (UnityEngine_GameObject_o *)0x0) {
        submit = UnityEngine_GameObject__GetComponent_object_
                           (__this_02,
                            (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
        if (__this_03 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
          Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Setup
                    (__this_03,input,submit,(node->fields).searchScopeScreenId,
                     (node->fields).searchShowFullPath,(node->fields).searchScopeScreenIds,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_0537f3d0:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$InputNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__InputNode (System_String_o* id, System_String_o* placeholder, const MethodInfo* method);
// 0x538aa50

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__InputNode
          (System_String_o *id,System_String_o *placeholder,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_02;
  
  if (Il2CppMethodInitialized_07542af8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Search current screen");
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-input");
    Il2CppMethodInitialized_07542af8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "InputField";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    pSVar2 = System_String__Concat_52f0320(id,"-input",(MethodInfo *)0x0);
    (__this->fields).id = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    bVar1 = System_String__IsNullOrEmpty(placeholder,(MethodInfo *)0x0);
    if (bVar1) {
      placeholder = "Search current screen";
    }
    (__this->fields).placeholder = placeholder;
    Il2CppCodeGenWriteBarrier(&(__this->fields).placeholder);
    (__this->fields).style = "inputField";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      (__this_00->fields).hidden = true;
      (__this->fields).search = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).search);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
      Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_01->fields).grow = 1.0;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        Gisketch_Aottg2UI_Data_GisketchLength___ctor(__this_02,(MethodInfo *)0x0);
        if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          (__this_02->fields).value = 100.0;
          (__this_02->fields).unit = "percent";
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).unit);
          (__this_01->fields).width = __this_02;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).width);
          (__this->fields).layout = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
          return __this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SearchButtonNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SearchButtonNode (System_String_o* id, const MethodInfo* method);
// 0x538ac80

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SearchButtonNode(System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_07542af9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPrimary");
    il2cpp_codegen_initialize_runtime_metadata(&"-submit");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    Il2CppMethodInitialized_07542af9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Button";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    pSVar1 = System_String__Concat_52f0320(id,"-submit",(MethodInfo *)0x0);
    (__this->fields).id = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).icon = "zoom";
    Il2CppCodeGenWriteBarrier(&(__this->fields).icon);
    (__this->fields).hasIcon = true;
    (__this->fields).style = "buttonPrimary";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      (__this_00->fields).hidden = true;
      (__this->fields).search = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).search);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyShadow
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyShadow (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x5385fd0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyShadow
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined1 auVar2 [16];
  bool bVar3;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this;
  int32_t layers;
  UnityEngine_Vector2_Fields offset;
  float grain;
  UnityEngine_Color_o UVar4;
  float local_48;
  float fStack_44;
  float local_38;
  float fStack_34;
  
  if (Il2CppMethodInitialized_07542afa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDropShadow);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanel");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentFooterTopShadow");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuPanel");
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    Il2CppMethodInitialized_07542afa = '\x01';
  }
  if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
     ((style->fields).shadow.fields.value == false)) {
    return;
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_353B730 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDropShadow);
    if (__this == (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_353B6A0 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
    }
    if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      auVar2._8_8_ = 0;
      auVar2._0_8_ = (ulong)g_data_01006650;
      UVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (theme,"shadow",(UnityEngine_Color_o)(auVar2 << 0x40),(MethodInfo *)0x0);
      pSVar1 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar1,"mainMenuPanel",5,(MethodInfo *)0x0);
      local_48 = UVar4.fields.r;
      fStack_44 = UVar4.fields.g;
      local_38 = UVar4.fields.b;
      fStack_34 = UVar4.fields.a;
      if (bVar3) {
        if (__this != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
          offset.x = 22.0;
          offset.y = -3.0;
          grain = 2.4;
          layers = 8;
label_0538622c:
          UVar4.fields.g = fStack_44;
          UVar4.fields.r = local_48;
          UVar4.fields.a = fStack_34;
          UVar4.fields.b = local_38;
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_522eda0
                    (__this,UVar4,(UnityEngine_Vector2_o)offset,layers,grain,false,(MethodInfo *)0x0);
          return;
        }
      }
      else {
        pSVar1 = (style->fields).name;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_52ffe30(pSVar1,"brushSidePanel",5,(MethodInfo *)0x0);
        if (bVar3) {
          if (__this != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
            offset.x = 34.0;
            offset.y = -2.0;
            grain = 2.6;
            layers = 10;
            goto label_0538622c;
          }
        }
        else {
          pSVar1 = (style->fields).name;
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          bVar3 = System_String__Equals_52ffe30(pSVar1,"brushSidePanelContentFooterTopShadow",5,(MethodInfo *)0x0);
          if (bVar3) {
            if (Il2CppMethodInitialized_0753ecc8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
              Il2CppMethodInitialized_0753ecc8 = '\x01';
            }
            if (__this != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
              offset = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
              local_38 = 0.0;
              fStack_34 = 0.3;
              grain = 1.8;
              local_48 = 0.0;
              fStack_44 = 0.0;
              layers = 0xc;
              goto label_0538622c;
            }
          }
          else if (__this != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
            Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup(__this,UVar4,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSkeleton
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSkeleton (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x5381010
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538108e: jmp 0x53811ec

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSkeleton
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  UnityEngine_UI_Image_o *image;
  Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this;
  System_String_o *token;
  System_String_o *token_00;
  UnityEngine_Color_o UVar2;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_07542afb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSkeletonPulse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&"skeletonPulse");
    il2cpp_codegen_initialize_runtime_metadata(&"skeletonBase");
    Il2CppMethodInitialized_07542afb = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    pGVar1 = (context->fields).Theme;
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      token = (System_String_o *)0x0;
    }
    else {
      token = (style->fields).background;
    }
    if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      token_00 = (System_String_o *)0x0;
      UVar2.fields.b = (float)(int)g_data_01005000;
      UVar2.fields.a = (float)g_data_01005000._4_4_;
      UVar2.fields.r = 0.72;
      UVar2.fields.g = 0.72;
      UVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (pGVar1,"skeletonBase",UVar2,(MethodInfo *)0x0);
      UVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(pGVar1,token,UVar2,(MethodInfo *)0x0);
      pGVar1 = (context->fields).Theme;
      if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        token_00 = (style->fields).textColor;
      }
      if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        UVar3.fields.b = (float)(int)g_data_010073c0;
        UVar3.fields.a = (float)g_data_010073c0._4_4_;
        UVar3.fields.r = 0.82;
        UVar3.fields.g = 0.82;
        UVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                          (pGVar1,"skeletonPulse",UVar3,(MethodInfo *)0x0);
        UVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor(pGVar1,token_00,UVar3,(MethodInfo *)0x0);
        if ((go != (UnityEngine_GameObject_o *)0x0) &&
           (image = UnityEngine_GameObject__AddComponent_object_
                              (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image),
           image != (UnityEngine_UI_Image_o *)0x0)) {
          (*(image->klass->vtable)._23_set_color.methodPtr)
                    (image,UVar2,(image->klass->vtable)._23_set_color.method);
          (*(image->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (image,false,(image->klass->vtable)._25_set_raycastTarget.method);
          (*(image->klass->vtable)._33_set_material.methodPtr)
                    (image,(UnityEngine_Material_o *)0x0,(image->klass->vtable)._33_set_material.method);
          UnityEngine_GameObject__AddComponent_object_
                    (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
          __this = UnityEngine_GameObject__AddComponent_object_
                             (go,(MethodInfo_353B6A0 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSkeletonPulse);
          if (__this != (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *)0x0) {
            Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__Setup
                      (__this,image,UVar2,UVar3,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSlider
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSlider (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x537f3e0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x537f4f4: cmp byte ptr [rip + 0x21c35c9], 0
// asm:   0x537f4fb: je 0x537f51d
// asm:   0x537f4fd: movss xmm0, dword ptr [rip - 0x43bd5b1]
// asm:   0x537f505: test rbp, rbp
// asm:   0x537f50a: jmp 0x537f58f

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSlider
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  System_String_o *pSVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style_00;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style_01;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_RectTransform_o *track;
  UnityEngine_RectTransform_o *fill;
  UnityEngine_RectTransform_o *thumb;
  UnityEngine_UI_Image_o *pUVar6;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this_00;
  TMPro_TextMeshProUGUI_o *label;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  float height;
  float right;
  UnityEngine_Color_o UVar7;
  float fStack_90;
  UnityEngine_RectTransform_o *pUStack_70;
  UnityEngine_UI_Image_o *pUStack_68;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *pGStack_60;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  
  if (Il2CppMethodInitialized_07542afc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgSliderControl);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"sliderTrack");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Slider Track");
    il2cpp_codegen_initialize_runtime_metadata(&"sliderFill");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Slider Fill");
    Il2CppMethodInitialized_07542afc = '\x01';
  }
  pUStack_68 = (UnityEngine_UI_Image_o *)0x0;
  pUStack_70 = (UnityEngine_RectTransform_o *)0x0;
  if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
     (pGVar1 = (context->fields).Theme, pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
    style_00 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                         (pGVar1,"sliderTrack",(MethodInfo *)0x0);
    pGVar1 = (context->fields).Theme;
    if ((pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) &&
       (style_01 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                             (pGVar1,"sliderFill",(MethodInfo *)0x0),
       style_00 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) {
      pGVar2 = (style_00->fields).height;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      if (Il2CppMethodInitialized_07542ac4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)
        ;
        il2cpp_codegen_initialize_runtime_metadata(&"point");
        Il2CppMethodInitialized_07542ac4 = '\x01';
      }
      height = 10.0;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        pSVar3 = (pGVar2->fields).unit;
        if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar4 = System_String__Equals_52ffe30(pSVar3,"point",5,(MethodInfo *)0x0);
        height = 10.0;
        if (bVar4) {
          height = (pGVar2->fields).value;
        }
      }
      if (style_01 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        pGVar2 = (style_01->fields).height;
        if (Il2CppMethodInitialized_07542ac4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          il2cpp_codegen_initialize_runtime_metadata(&"point");
          Il2CppMethodInitialized_07542ac4 = '\x01';
        }
        fStack_90 = 10.0;
        if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          pSVar3 = (pGVar2->fields).unit;
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          bVar4 = System_String__Equals_52ffe30(pSVar3,"point",5,(MethodInfo *)0x0);
          if (bVar4) {
            fStack_90 = (pGVar2->fields).value;
          }
        }
        if ((go != (UnityEngine_GameObject_o *)0x0) &&
           (pUVar5 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0),
           pSVar3 = "AoTTG Slider Track", node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
          right = 0.0;
          if ((node->fields).showValue != false) {
            right = 54.0;
          }
          if (height <= fStack_90) {
            height = fStack_90;
          }
          pGVar1 = (context->fields).Theme;
          pGStack_60 = style;
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          track = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderPart
                            (pUVar5,pSVar3,style_00,pGVar1,0.0,right,height,method);
          fill = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderPart
                           ((UnityEngine_Transform_o *)track,"AoTTG Slider Fill",style_01,
                            (context->fields).Theme,0.0,0.0,height,method);
          thumb = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderThumb
                            ((UnityEngine_Transform_o *)track,(context->fields).Theme,&pUStack_68,&pUStack_70,
                             method);
          pUVar6 = UnityEngine_GameObject__AddComponent_object_
                             (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
          if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
            (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                      (pUVar6,(UnityEngine_Color_o)ZEXT816(0),(pUVar6->klass->vtable)._23_set_color.method);
            (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (pUVar6,true,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
            __this = UnityEngine_GameObject__AddComponent_object_
                               (go,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_AottgSliderControl);
            if (__this != (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) {
              UnityEngine_UI_Selectable__set_targetGraphic
                        ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Graphic_o *)pUStack_68,
                         (MethodInfo *)0x0);
              UnityEngine_UI_Selectable__set_transition
                        ((UnityEngine_UI_Selectable_o *)__this,0,(MethodInfo *)0x0);
              uStack_44 = 0;
              uStack_40 = 0;
              uStack_3c = 0;
              uStack_38 = 0;
              uStack_54 = 0;
              uStack_50 = 0;
              uStack_4c = 0;
              uStack_48 = 0;
              uStack_34 = 0;
              uStack_58 = 3;
              UnityEngine_UI_Selectable__set_navigation
                        ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Navigation_o)ZEXT840(3),
                         (MethodInfo *)0x0);
              UnityEngine_GameObject__AddComponent_object_
                        (go,(MethodInfo_353B6A0 *)
                            MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
              pGVar1 = (context->fields).Theme;
              if (Il2CppMethodInitialized_07542ac5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
                il2cpp_codegen_initialize_runtime_metadata(&"primary");
                il2cpp_codegen_initialize_runtime_metadata(&"focusRing");
                Il2CppMethodInitialized_07542ac5 = '\x01';
              }
              __this_00 = UnityEngine_GameObject__AddComponent_object_
                                    (go,(MethodInfo_353B6A0 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
              if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                UVar7.fields.b = 1.0;
                UVar7.fields.a = 1.0;
                UVar7.fields.r = 1.0;
                UVar7.fields.g = 1.0;
                UVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                  (pGVar1,"primary",UVar7,(MethodInfo *)0x0);
                UVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                  (pGVar1,"focusRing",UVar7,(MethodInfo *)0x0);
                if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0) {
                  label = (TMPro_TextMeshProUGUI_o *)0x0;
                  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup
                            (__this_00,UVar7,3.0,5.0,14.0,true,(MethodInfo *)0x0);
                  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySliderMeasure
                            (go,pGStack_60,method_00);
                  if ((node->fields).showValue != false) {
                    pUVar5 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
                    pGVar1 = (context->fields).Theme;
                    method_01 = extraout_RDX;
                    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                      method_01 = extraout_RDX_00;
                    }
                    label = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderValueLabel
                                      (pUVar5,pGVar1,method_01);
                  }
                  Gisketch_Aottg2UI_Actions_AottgSliderControl__Setup
                            (__this,track,fill,thumb,pUStack_70,label,node,(context->fields).Actions,go,height
                             ,(MethodInfo *)0x0);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SliderPart
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderPart (UnityEngine_Transform_o* parent, System_String_o* name, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, float left, float right, float height, const MethodInfo* method);
// 0x538adc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538afdf: je 0x538afee

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderPart
          (UnityEngine_Transform_o *parent,System_String_o *name,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,float left,float right,float height,
          MethodInfo *method)

{
  System_String_o *color;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  System_String_o **ppSVar2;
  MethodInfo *in_R9;
  bool reliefGradient;
  
  if (Il2CppMethodInitialized_07542afd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    Il2CppMethodInitialized_07542afd = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if ((obj != (System_Type_o *)0x0) &&
       (pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
       pIVar1 == (Il2CppObject *)0x0)) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,name,components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if ((__this != (UnityEngine_GameObject_o *)0x0) &&
       (__this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
       __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
      __this_01 = UnityEngine_GameObject__GetComponent_object_
                            (__this,(MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
        reliefGradient = false;
        UnityEngine_RectTransform__set_anchorMin
                  (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_anchorMax
                  (__this_01,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
        value.fields.y = height * -0.5;
        value.fields.x = left;
        UnityEngine_RectTransform__set_offsetMin(__this_01,value,(MethodInfo *)0x0);
        UnityEngine_RectTransform__set_offsetMax
                  (__this_01,(UnityEngine_Vector2_o)(CONCAT44(height * 0.5,right) ^ 0x80000000),
                   (MethodInfo *)0x0);
        ppSVar2 = &(style->fields).background;
        if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
          ppSVar2 = &"surface";
        }
        else {
          reliefGradient = (style->fields).reliefGradient.fields.value != false;
        }
        color = *ppSVar2;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                  (__this,style,theme,color,reliefGradient,in_R9);
        return __this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SliderThumb
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderThumb (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, UnityEngine_UI_Image_o** image, UnityEngine_RectTransform_o** faceRect, const MethodInfo* method);
// 0x538b050
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538b135: cmp byte ptr [rip + 0x21b7988], 0
// asm:   0x538b13c: je 0x538b15f
// asm:   0x538b13e: movss xmm0, dword ptr [rip - 0x43c91ea]
// asm:   0x538b146: movaps xmmword ptr [rsp], xmm0
// asm:   0x538b14a: test rbp, rbp
// asm:   0x538b14f: jmp 0x538b1ca

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderThumb
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
          UnityEngine_UI_Image_o **image,UnityEngine_RectTransform_o **faceRect,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  System_String_o *pSVar2;
  Il2CppType *handle;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_Type_array *pSVar4;
  System_Type_o *pSVar5;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar7;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *parent_00;
  UnityEngine_RectTransform_o *pUVar8;
  UnityEngine_UI_Image_o *pUVar9;
  MethodInfo *in_R9;
  undefined1 auVar10 [16];
  UnityEngine_Vector2_o local_78;
  
  if (Il2CppMethodInitialized_07542afe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"sliderThumb");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Slider Thumb");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Slider Thumb Face");
    Il2CppMethodInitialized_07542afe = '\x01';
  }
  if ((theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) &&
     (style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"sliderThumb",(MethodInfo *)0x0)
     , style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) {
    pGVar1 = (style->fields).width;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    local_78.fields.x = 24.0;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      local_78.fields.x = 24.0;
      pSVar2 = (pGVar1->fields).unit;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
      if (bVar3) {
        local_78.fields.x = (pGVar1->fields).value;
      }
    }
    pGVar1 = (style->fields).height;
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    local_78.fields.y = 14.0;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar2 = (pGVar1->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
      if (bVar3) {
        local_78.fields.y = (pGVar1->fields).value;
      }
    }
    pSVar4 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (pSVar4 != (System_Type_array *)0x0) {
      if ((pSVar5 != (System_Type_o *)0x0) &&
         (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class),
         pIVar6 == (Il2CppObject *)0x0)) {
label_0538b523:
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
      if ((int)pSVar4->max_length == 0) {
label_0538b51e:
        ThrowIndexOutOfRangeException();
      }
      pSVar4->m_Items[0] = pSVar5;
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Slider Thumb",pSVar4,(MethodInfo *)0x0);
      if ((__this != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar7 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
         pUVar7 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_692d510(pUVar7,parent,false,(MethodInfo *)0x0);
        __this_00 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_00,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_00,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          auVar10._4_4_ = local_78.fields.y;
          auVar10._0_4_ = local_78.fields.x;
          auVar10._8_8_ = 0;
          auVar10 = maxps(_DAT_010079b0,auVar10);
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_00,(UnityEngine_Vector2_o)auVar10._0_8_,(MethodInfo *)0x0);
          pSVar4 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
          pSVar5 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0)
          ;
          if (pSVar4 != (System_Type_array *)0x0) {
            if ((pSVar5 != (System_Type_o *)0x0) &&
               (pIVar6 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class),
               pIVar6 == (Il2CppObject *)0x0)) goto label_0538b523;
            if ((int)pSVar4->max_length == 0) goto label_0538b51e;
            pSVar4->m_Items[0] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_691aa60(__this_01,"AoTTG Slider Thumb Face",pSVar4,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
              pUVar7 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
              parent_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_692d510(pUVar7,parent_00,false,(MethodInfo *)0x0);
                pUVar8 = UnityEngine_GameObject__GetComponent_object_
                                   (__this_01,
                                    (MethodInfo_353B730 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                *faceRect = pUVar8;
                Il2CppCodeGenWriteBarrier(faceRect);
                if (*faceRect != (UnityEngine_RectTransform_o *)0x0) {
                  UnityEngine_RectTransform__set_anchorMin
                            (*faceRect,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                  if (*faceRect != (UnityEngine_RectTransform_o *)0x0) {
                    UnityEngine_RectTransform__set_anchorMax
                              (*faceRect,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                    if (*faceRect != (UnityEngine_RectTransform_o *)0x0) {
                      UnityEngine_RectTransform__set_pivot
                                (*faceRect,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
                      if (*faceRect != (UnityEngine_RectTransform_o *)0x0) {
                        UnityEngine_RectTransform__set_sizeDelta(*faceRect,local_78,(MethodInfo *)0x0);
                        pUVar9 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                                           (__this_01,style,theme,(style->fields).background,
                                            (style->fields).reliefGradient.fields.value,in_R9);
                        *image = pUVar9;
                        Il2CppCodeGenWriteBarrier(image);
                        return __this_00;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SliderValueLabel
// il2cpp: TMPro_TextMeshProUGUI_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderValueLabel (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x538b790

TMPro_TextMeshProUGUI_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderValueLabel
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method
          )

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  TMPro_TextMeshProUGUI_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_02;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (Il2CppMethodInitialized_07542aff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"0%");
    il2cpp_codegen_initialize_runtime_metadata(&"sliderValue");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Slider Value");
    Il2CppMethodInitialized_07542aff = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Slider Value",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_07542885 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_07542885 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                     (MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMin
                    (__this_01,(UnityEngine_Vector2_o)0xc2380000,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMax
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          text = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_353B6A0 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
          if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (__this_02->fields).text = "0%";
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).text);
            (__this_02->fields).style = "sliderValue";
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).style);
            if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                                (theme,"sliderValue",(MethodInfo *)0x0);
              __this_03 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
              method_00 = (MethodInfo *)0x0;
              Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
                        (__this_03,(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0,theme,
                         (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0,
                         (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0,
                         (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0,
                         (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,
                         (System_Func_string__GisketchOverlayDefinition__o *)0x0,in_stack_ffffffffffffffc8);
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText
                        (text,__this_02,style,__this_03,method_00);
              if (text != (TMPro_TextMeshProUGUI_o *)0x0) {
                TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)text,0x1004,(MethodInfo *)0x0);
                return text;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplySliderMeasure
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySliderMeasure (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x538b540
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538b5d9: movss xmm0, dword ptr [rip - 0x43c98c9]
// asm:   0x538b5e1: test rbx, rbx
// asm:   0x538b5e4: jne 0x538b614
// asm:   0x538b5e6: jmp 0x538b654
// asm:   0x538b69b: movss xmm0, dword ptr [rip - 0x43c97cb]
// asm:   0x538b6a3: test rbx, rbx
// asm:   0x538b6a6: jne 0x538b6d6
// asm:   0x538b6a8: jmp 0x538b716
// asm:   0x538b76d: jmp 0x538b5cb
// asm:   0x538b785: jmp 0x538b68d

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySliderMeasure
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  bool bVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07542b00 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542b00 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_0538b78a;
  pUVar4 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0538b5b3;
label_0538b753:
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0538b753;
label_0538b5b3:
    pGVar5 = (style->fields).width;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
  }
  fVar6 = 280.0;
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar2 = (pGVar5->fields).unit;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
    fVar6 = 280.0;
    if (bVar3) {
      fVar6 = (pGVar5->fields).value;
    }
  }
  if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar4,fVar6,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar5 = (style->fields).height;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    fVar6 = 42.0;
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar2 = (pGVar5->fields).unit;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
      fVar6 = 42.0;
      if (bVar3) {
        fVar6 = (pGVar5->fields).value;
      }
    }
    (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar4,fVar6,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
    return;
  }
label_0538b78a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSpriteButton
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteButton (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x537e470

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteButton
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **targetAddress;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o **targetAddress_00;
  UnityEngine_GameObject_o **targetAddress_01;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  UnityEngine_Events_UnityEvent_o *__this_00;
  Il2CppType *handle;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o *__this_01;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *pUVar3;
  UnityEngine_Transform_o *__this_02;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_UI_Image_o *value;
  UnityEngine_UI_Image_o *image;
  Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *pGVar4;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar5;
  UnityEngine_UI_Button_o *__this_03;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this_04;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this_05;
  UnityEngine_Events_UnityAction_o *__this_06;
  MethodInfo *pMVar6;
  UnityEngine_Color_o UVar7;
  MethodInfo *in_stack_ffffffffffffff58;
  
  if (Il2CppMethodInitialized_07542b01 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Button);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonInputSource);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSpriteButtonFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass84_0_BuildSpriteButton_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass84_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Sprite Button Face");
    Il2CppMethodInitialized_07542b01 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass84_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0___ctor(__this_01,(MethodInfo *)0x0);
  if (__this_01 != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o *)0x0) {
    targetAddress = &(__this_01->fields).node;
    (__this_01->fields).node = node;
    Il2CppCodeGenWriteBarrier(targetAddress);
    targetAddress_00 = &(__this_01->fields).context;
    (__this_01->fields).context = context;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    targetAddress_01 = &(__this_01->fields).go;
    (__this_01->fields).go = go;
    Il2CppCodeGenWriteBarrier(targetAddress_01);
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if (obj != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if ((int)components->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      components->m_Items[0] = obj;
      Il2CppCodeGenWriteBarrier(components->m_Items);
      pUVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(pUVar3,"AoTTG Sprite Button Face",components,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        __this_02 = UnityEngine_GameObject__get_transform(pUVar3,(MethodInfo *)0x0);
        if (*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(*targetAddress_01,(MethodInfo *)0x0);
          if (__this_02 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_02,parent,false,(MethodInfo *)0x0);
            pMVar6 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
            rect = UnityEngine_GameObject__GetComponent_object_
                             (pUVar3,(MethodInfo_353B730 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(rect,pMVar6);
            if (*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) {
              value = UnityEngine_GameObject__GetComponent_object_
                                (*targetAddress_01,
                                 (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
              if (value == (UnityEngine_UI_Image_o *)0x0) {
                if (*targetAddress_01 == (UnityEngine_GameObject_o *)0x0) goto label_0537ea56;
                value = UnityEngine_GameObject__AddComponent_object_
                                  (*targetAddress_01,
                                   (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image)
                ;
                if (value == (UnityEngine_UI_Image_o *)0x0) goto label_0537ea56;
              }
              (*(value->klass->vtable)._23_set_color.methodPtr)
                        (value,(UnityEngine_Color_o)ZEXT816(0),(value->klass->vtable)._23_set_color.method);
              (*(value->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (value,true,(value->klass->vtable)._25_set_raycastTarget.method);
              pGVar1 = *targetAddress;
              pMVar6 = (MethodInfo *)*targetAddress_00;
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              }
              image = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
                                (pUVar3,pGVar1,style,
                                 (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)pMVar6,true,false,
                                 in_stack_ffffffffffffff58);
              if (*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) {
                pGVar4 = UnityEngine_GameObject__AddComponent_object_
                                   (*targetAddress_01,
                                    (MethodInfo_353B6A0 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonInputSource);
                (__this_01->fields).inputSource = pGVar4;
                Il2CppCodeGenWriteBarrier(&(__this_01->fields).inputSource);
                pUVar3 = (__this_01->fields).go;
                if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                  pGVar5 = UnityEngine_GameObject__AddComponent_object_
                                     (pUVar3,(MethodInfo_353B6A0 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound
                                     );
                  (__this_01->fields).sound = pGVar5;
                  Il2CppCodeGenWriteBarrier(&(__this_01->fields).sound);
                  pGVar1 = (__this_01->fields).node;
                  if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
                     (pGVar5 = (__this_01->fields).sound,
                     pGVar5 != (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0)) {
                    (pGVar5->fields)._action = (pGVar1->fields).action;
                    Il2CppCodeGenWriteBarrier(&(pGVar5->fields)._action);
                    if (*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) {
                      __this_03 = UnityEngine_GameObject__AddComponent_object_
                                            (*targetAddress_01,
                                             (MethodInfo_353B6A0 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_Button);
                      if (__this_03 != (UnityEngine_UI_Button_o *)0x0) {
                        UnityEngine_UI_Selectable__set_targetGraphic
                                  ((UnityEngine_UI_Selectable_o *)__this_03,(UnityEngine_UI_Graphic_o *)value,
                                   (MethodInfo *)0x0);
                        UnityEngine_UI_Selectable__set_transition
                                  ((UnityEngine_UI_Selectable_o *)__this_03,0,(MethodInfo *)0x0);
                        UnityEngine_UI_Selectable__set_navigation
                                  ((UnityEngine_UI_Selectable_o *)__this_03,
                                   (UnityEngine_UI_Navigation_o)ZEXT840(3),(MethodInfo *)0x0);
                        if (*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) {
                          UnityEngine_GameObject__AddComponent_object_
                                    (*targetAddress_01,
                                     (MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity
                                    );
                          if (*targetAddress_00 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                            pUVar3 = *targetAddress_01;
                            __this = ((*targetAddress_00)->fields).Theme;
                            if (Il2CppMethodInitialized_07542ac5 == '\0') {
                              il2cpp_codegen_initialize_runtime_metadata
                                        (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
                              il2cpp_codegen_initialize_runtime_metadata(&"primary");
                              il2cpp_codegen_initialize_runtime_metadata(&"focusRing");
                              Il2CppMethodInitialized_07542ac5 = '\x01';
                            }
                            if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
                              __this_04 = UnityEngine_GameObject__AddComponent_object_
                                                    (pUVar3,(MethodInfo_353B6A0 *)
                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing
                                                    );
                              if (__this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                UVar7.fields.b = 1.0;
                                UVar7.fields.a = 1.0;
                                UVar7.fields.r = 1.0;
                                UVar7.fields.g = 1.0;
                                UVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                  (__this,"primary",UVar7,(MethodInfo *)0x0);
                                UVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                  (__this,"focusRing",UVar7,(MethodInfo *)0x0);
                                if (__this_04 != (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0) {
                                  Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup
                                            (__this_04,UVar7,3.0,5.0,14.0,true,(MethodInfo *)0x0);
                                  if (*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) {
                                    __this_05 = UnityEngine_GameObject__AddComponent_object_
                                                          (*targetAddress_01,
                                                           (MethodInfo_353B6A0 *)
                                                                                                                      
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSpriteButtonFeedback
                                                       );
                                    if (__this_05 !=
                                        (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
                                      Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup
                                                (__this_05,rect,(MethodInfo *)0x0);
                                      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySpriteButtonMeasure
                                                ((__this_01->fields).go,image,style,pMVar6);
                                      __this_00 = (UnityEngine_Events_UnityEvent_o *)
                                                  (__this_03->fields).m_OnClick;
                                      __this_06 = il2cpp_codegen_object_new
                                                            ((Il2CppClass *)
                                                             TypeInfo_UnityEngine_Events_UnityAction);
                                      UnityEngine_Events_UnityAction___ctor
                                                (__this_06,(Il2CppObject *)__this_01,
                                                 (intptr_t)
                                                 MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass84_0_BuildSpriteButton_b__0
                                                 ,(MethodInfo *)0x0);
                                      if (__this_00 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                        UnityEngine_Events_UnityEvent__AddListener
                                                  (__this_00,__this_06,(MethodInfo *)0x0);
                                        return;
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_0537ea56:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplySpriteButtonMeasure
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySpriteButtonMeasure (UnityEngine_GameObject_o* go, UnityEngine_UI_Image_o* image, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x538baf0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538bca9: movaps xmm0, xmmword ptr [rsp]
// asm:   0x538bd10: jmp 0x538bc33
// asm:   0x538bd31: cmp byte ptr [rip + 0x21b6d8c], 0
// asm:   0x538bd38: je 0x538bd4f
// asm:   0x538bd3a: test r15, r15
// asm:   0x538bd3d: jne 0x538bd73
// asm:   0x538bd3f: jmp 0x538bdb0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySpriteButtonMeasure
               (UnityEngine_GameObject_o *go,UnityEngine_UI_Image_o *image,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Object_o *x;
  UnityEngine_Sprite_o *__this;
  System_String_o *pSVar2;
  bool bVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  undefined8 local_38;
  
  if (Il2CppMethodInitialized_07542b02 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542b02 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  local_38 = 0x4240000042400000;
  if (bVar3) {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_0538bdd7;
    x = (UnityEngine_Object_o *)(image->fields).m_Sprite;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      __this = (image->fields).m_Sprite;
      if (__this == (UnityEngine_Sprite_o *)0x0) goto label_0538bdd7;
      UVar7 = UnityEngine_Sprite__get_rect(__this,(MethodInfo *)0x0);
      local_38 = UVar7.fields._8_8_;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
    }
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_0538bdd7;
  pUVar4 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0538bc1b;
label_0538bcf5:
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0538bcf5;
label_0538bc1b:
    pGVar5 = (style->fields).width;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  fVar6 = (float)local_38;
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_0538bc46;
  }
  else if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_0538bc46:
    pSVar2 = (pGVar5->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
    if (bVar3) {
      fVar6 = (pGVar5->fields).value;
    }
  }
  if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar4,fVar6,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar5 = (style->fields).height;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar2 = (pGVar5->fields).unit;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
      if (bVar3) {
        local_38._4_4_ = (pGVar5->fields).value;
      }
    }
    (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar4,local_38._4_4_,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
    return;
  }
label_0538bdd7:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildToggle
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildToggle (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool radio, const MethodInfo* method);
// 0x5380170
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5380677: cmp byte ptr [rip + 0x21c2447], 0
// asm:   0x538067e: je 0x5380698
// asm:   0x5380680: test rbp, rbp
// asm:   0x5380685: jmp 0x53807ec

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildToggle
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool radio,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_Fields *targetAddress;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o **targetAddress_00;
  UnityEngine_GameObject_o **targetAddress_01;
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context_00;
  UnityEngine_Events_UnityEvent_bool__o *__this;
  bool bVar4;
  bool bVar5;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o *__this_00;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_UI_Toggle_o *pUVar7;
  UnityEngine_Transform_o *pUVar8;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_RectTransform_o *__this_01;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this_02;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this_03;
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *pMVar9;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UnityEngine_UI_Toggle_o **targetAddress_02;
  undefined7 in_register_00000081;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar10;
  TMPro_TextMeshProUGUI_o *pTStack_98;
  UnityEngine_RectTransform_o *pUStack_78;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000081,radio);
  pMVar9 = (MethodInfo *)context;
  if (Il2CppMethodInitialized_07542b03 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToggleFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass86_0_BuildToggle_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass86_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07542b03 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass86_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o *)0x0) {
    targetAddress = &__this_00->fields;
    (__this_00->fields).node = node;
    Il2CppCodeGenWriteBarrier(&targetAddress->node);
    targetAddress_00 = &(__this_00->fields).context;
    (__this_00->fields).context = context;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    targetAddress_01 = &(__this_00->fields).go;
    (__this_00->fields).go = go;
    Il2CppCodeGenWriteBarrier(targetAddress_01);
    pUVar1 = (__this_00->fields).go;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar6 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar1,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image)
       , pUVar6 != (UnityEngine_UI_Image_o *)0x0)) {
      (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                (pUVar6,(UnityEngine_Color_o)ZEXT816(0),(pUVar6->klass->vtable)._23_set_color.method);
      (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pUVar6,true,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
      if (*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) {
        pUVar7 = UnityEngine_GameObject__AddComponent_object_
                           (*targetAddress_01,
                            (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Toggle);
        targetAddress_02 = &(__this_00->fields).toggle;
        (__this_00->fields).toggle = pUVar7;
        Il2CppCodeGenWriteBarrier(targetAddress_02);
        pUVar7 = (__this_00->fields).toggle;
        if (pUVar7 != (UnityEngine_UI_Toggle_o *)0x0) {
          UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)pUVar7,0,(MethodInfo *)0x0)
          ;
          if (*targetAddress_02 != (UnityEngine_UI_Toggle_o *)0x0) {
            UnityEngine_UI_Selectable__set_navigation
                      ((UnityEngine_UI_Selectable_o *)*targetAddress_02,
                       (UnityEngine_UI_Navigation_o)ZEXT840(3),(MethodInfo *)0x0);
            if (*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_
                        (*targetAddress_01,
                         (MethodInfo_353B6A0 *)
                         MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
              if (*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) {
                pUVar8 = UnityEngine_GameObject__get_transform(*targetAddress_01,(MethodInfo *)0x0);
                if (*targetAddress_00 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                  pGVar2 = ((*targetAddress_00)->fields).Theme;
                  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                  }
                  parent = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleBox
                                     (pUVar8,pGVar2,radio,pMVar9);
                  if (*targetAddress_00 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                    __this_01 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleMark
                                          (parent,((*targetAddress_00)->fields).Theme,radio,pMVar9);
                    if (targetAddress->node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                      pUStack_78 = (UnityEngine_RectTransform_o *)0x0;
                      bVar4 = System_String__IsNullOrEmpty
                                        ((targetAddress->node->fields).icon,(MethodInfo *)0x0);
                      if (!bVar4) {
                        if (*targetAddress_01 == (UnityEngine_GameObject_o *)0x0) goto label_053807ec;
                        pUVar8 = UnityEngine_GameObject__get_transform(*targetAddress_01,(MethodInfo *)0x0);
                        pGVar3 = targetAddress->node;
                        pMVar9 = extraout_RDX;
                        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                            cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)
                          ;
                          pMVar9 = extraout_RDX_00;
                        }
                        pUStack_78 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleIcon
                                               (pUVar8,pGVar3,pMVar9);
                      }
                      if (targetAddress->node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                        pTStack_98 = (TMPro_TextMeshProUGUI_o *)0x0;
                        bVar5 = System_String__IsNullOrEmpty
                                          ((targetAddress->node->fields).text,(MethodInfo *)0x0);
                        if (!bVar5 || bVar4) {
                          if (*targetAddress_01 == (UnityEngine_GameObject_o *)0x0) goto label_053807ec;
                          pUVar8 = UnityEngine_GameObject__get_transform(*targetAddress_01,(MethodInfo *)0x0);
                          pGVar3 = targetAddress->node;
                          context_00 = *targetAddress_00;
                          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                              cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)
                                       TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                          }
                          pTStack_98 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleLabel
                                                 (pUVar8,pGVar3,context_00,!bVar4,method_00);
                        }
                        if (parent != (UnityEngine_RectTransform_o *)0x0) {
                          pUVar7 = *targetAddress_02;
                          pUVar6 = UnityEngine_Component__GetComponent_object_
                                             ((UnityEngine_Component_o *)parent,
                                              (MethodInfo_34B0830 *)
                                              MethodInfo_UnityEngine_Component_GetComponent_Image);
                          if ((pUVar7 != (UnityEngine_UI_Toggle_o *)0x0) &&
                             (UnityEngine_UI_Selectable__set_targetGraphic
                                        ((UnityEngine_UI_Selectable_o *)pUVar7,
                                         (UnityEngine_UI_Graphic_o *)pUVar6,(MethodInfo *)0x0),
                             __this_01 != (UnityEngine_RectTransform_o *)0x0)) {
                            pUVar7 = *targetAddress_02;
                            pUVar6 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)__this_01,
                                                (MethodInfo_34B0830 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Image);
                            if (pUVar7 != (UnityEngine_UI_Toggle_o *)0x0) {
                              (pUVar7->fields).graphic = (UnityEngine_UI_Graphic_o *)pUVar6;
                              Il2CppCodeGenWriteBarrier(&(pUVar7->fields).graphic);
                              if (targetAddress->node !=
                                  (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                                pUVar7 = *targetAddress_02;
                                bVar4 = System_String__Equals_52ffe30
                                                  ((targetAddress->node->fields).value,"true",5
                                                   ,(MethodInfo *)0x0);
                                if (pUVar7 != (UnityEngine_UI_Toggle_o *)0x0) {
                                  UnityEngine_UI_Toggle__set_isOn(pUVar7,bVar4,(MethodInfo *)0x0);
                                  if ((*targetAddress_01 != (UnityEngine_GameObject_o *)0x0) &&
                                     (__this_02 = UnityEngine_GameObject__AddComponent_object_
                                                            (*targetAddress_01,
                                                             (MethodInfo_353B6A0 *)
                                                                                                                          
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToggleFeedback
                                                       ),
                                     __this_02 != (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0))
                                  {
                                    pMVar9 = (MethodInfo *)0x0;
                                    Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup
                                              (__this_02,*targetAddress_02,pTStack_98,
                                               (UnityEngine_UI_Image_o *)0x0,
                                               (UnityEngine_RectTransform_o *)0x0,
                                               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,
                                               (MethodInfo *)0x0);
                                    if (*targetAddress_00 !=
                                        (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                                      pUVar1 = *targetAddress_01;
                                      pGVar2 = ((*targetAddress_00)->fields).Theme;
                                      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                                          cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)
                                                   TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                                      }
                                      if (Il2CppMethodInitialized_07542ac5 == '\0') {
                                        il2cpp_codegen_initialize_runtime_metadata
                                                  (&
                                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing
                                                  );
                                        il2cpp_codegen_initialize_runtime_metadata(&"primary");
                                        il2cpp_codegen_initialize_runtime_metadata(&"focusRing");
                                        Il2CppMethodInitialized_07542ac5 = '\x01';
                                      }
                                      if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                         (__this_03 = UnityEngine_GameObject__AddComponent_object_
                                                                (pUVar1,(MethodInfo_353B6A0 *)
                                                                                                                                                
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing
                                                       ),
                                         pGVar2 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
                                        UVar10.fields.b = 1.0;
                                        UVar10.fields.a = 1.0;
                                        UVar10.fields.r = 1.0;
                                        UVar10.fields.g = 1.0;
                                        UVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                           (pGVar2,"primary",UVar10,
                                                            (MethodInfo *)0x0);
                                        UVar10 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                           (pGVar2,"focusRing",UVar10,
                                                            (MethodInfo *)0x0);
                                        if (__this_03 != (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0)
                                        {
                                          Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup
                                                    (__this_03,UVar10,3.0,5.0,14.0,true,(MethodInfo *)0x0);
                                          pUVar1 = *targetAddress_01;
                                          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor ==
                                              0) {
                                            il2cpp_codegen_runtime_class_init
                                                      ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                          }
                                          bVar4 = UnityEngine_Object__op_Inequality
                                                            ((UnityEngine_Object_o *)pUStack_78,
                                                             (UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                                          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyToggleMeasure
                                                    (pUVar1,style,pTStack_98,bVar4,pMVar9);
                                          if (*targetAddress_02 != (UnityEngine_UI_Toggle_o *)0x0) {
                                            __this = (UnityEngine_Events_UnityEvent_bool__o *)
                                                     ((*targetAddress_02)->fields).onValueChanged;
                                            call = (UnityEngine_Events_UnityAction_T0__o *)
                                                   il2cpp_codegen_object_new
                                                             ((Il2CppClass *)
                                                              TypeInfo_UnityEngine_Events_UnityAction_bool);
                                            UnityEngine_Events_UnityAction_bool____ctor
                                                      ((UnityEngine_Events_UnityAction_bool__o *)call,
                                                       (Il2CppObject *)__this_00,
                                                       (intptr_t)
                                                       MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass86_0_BuildToggle_b__0
                                                       ,(MethodInfo_4311710 *)0x0);
                                            if (__this != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
                                              UnityEngine_Events_UnityEvent_bool___AddListener
                                                        (__this,call,
                                                         (MethodInfo_43179D0 *)
                                                                                                                  
                                                       MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener
                                                       );
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_053807ec:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSwitch
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSwitch (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x537fcc0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSwitch
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o **targetAddress;
  UnityEngine_GameObject_o **targetAddress_00;
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar3;
  UnityEngine_Events_UnityEvent_bool__o *__this;
  bool value;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o *__this_00;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_UI_Toggle_o *pUVar5;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *parent_00;
  UnityEngine_RectTransform_o *switchThumb;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this_01;
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this_02;
  UnityEngine_Events_UnityAction_T0__o *call;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  UnityEngine_UI_Toggle_o **targetAddress_01;
  UnityEngine_Color_o UVar6;
  
  if (Il2CppMethodInitialized_07542b04 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToggleFeedback);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Toggle);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass87_0_BuildSwitch_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass87_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Events_UnityAction_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_07542b04 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass87_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o *)0x0) {
    (__this_00->fields).node = node;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).node);
    targetAddress = &(__this_00->fields).context;
    (__this_00->fields).context = context;
    Il2CppCodeGenWriteBarrier(targetAddress);
    targetAddress_00 = &(__this_00->fields).go;
    (__this_00->fields).go = go;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    pUVar1 = (__this_00->fields).go;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar1,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
      if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
        (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                  (pUVar4,(UnityEngine_Color_o)ZEXT816(0),(pUVar4->klass->vtable)._23_set_color.method);
        (*(pUVar4->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (pUVar4,true,(pUVar4->klass->vtable)._25_set_raycastTarget.method);
        if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = UnityEngine_GameObject__AddComponent_object_
                             (*targetAddress_00,
                              (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Toggle);
          targetAddress_01 = &(__this_00->fields).toggle;
          (__this_00->fields).toggle = pUVar5;
          Il2CppCodeGenWriteBarrier(targetAddress_01);
          pUVar5 = (__this_00->fields).toggle;
          if (pUVar5 != (UnityEngine_UI_Toggle_o *)0x0) {
            UnityEngine_UI_Selectable__set_transition
                      ((UnityEngine_UI_Selectable_o *)pUVar5,0,(MethodInfo *)0x0);
            if (*targetAddress_01 != (UnityEngine_UI_Toggle_o *)0x0) {
              UnityEngine_UI_Selectable__set_navigation
                        ((UnityEngine_UI_Selectable_o *)*targetAddress_01,
                         (UnityEngine_UI_Navigation_o)ZEXT840(3),(MethodInfo *)0x0);
              if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__AddComponent_object_
                          (*targetAddress_00,
                           (MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
                pGVar2 = (__this_00->fields).node;
                if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  pUVar5 = *targetAddress_01;
                  value = System_String__Equals_52ffe30
                                    ((pGVar2->fields).value,"true",5,(MethodInfo *)0x0);
                  if (pUVar5 != (UnityEngine_UI_Toggle_o *)0x0) {
                    UnityEngine_UI_Toggle__set_isOn(pUVar5,value,(MethodInfo *)0x0);
                    if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                      parent = UnityEngine_GameObject__get_transform(*targetAddress_00,(MethodInfo *)0x0);
                      if (*targetAddress != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                        pGVar3 = ((*targetAddress)->fields).Theme;
                        method_00 = extraout_RDX;
                        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                            cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)
                          ;
                          method_00 = extraout_RDX_00;
                        }
                        parent_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SwitchTrack
                                              (parent,pGVar3,method_00);
                        if (*targetAddress != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                          switchThumb = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SwitchThumb
                                                  (parent_00,((*targetAddress)->fields).Theme,method_01);
                          if (parent_00 != (UnityEngine_RectTransform_o *)0x0) {
                            pUVar4 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)parent_00,
                                                (MethodInfo_34B0830 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Image);
                            if (*targetAddress_01 != (UnityEngine_UI_Toggle_o *)0x0) {
                              UnityEngine_UI_Selectable__set_targetGraphic
                                        ((UnityEngine_UI_Selectable_o *)*targetAddress_01,
                                         (UnityEngine_UI_Graphic_o *)pUVar4,(MethodInfo *)0x0);
                              if (*targetAddress_00 != (UnityEngine_GameObject_o *)0x0) {
                                __this_01 = UnityEngine_GameObject__AddComponent_object_
                                                      (*targetAddress_00,
                                                       (MethodInfo_353B6A0 *)
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToggleFeedback
                                                      );
                                if ((*targetAddress !=
                                     (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
                                   (__this_01 != (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0)) {
                                  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup
                                            (__this_01,*targetAddress_01,(TMPro_TextMeshProUGUI_o *)0x0,pUVar4
                                             ,switchThumb,((*targetAddress)->fields).Theme,(MethodInfo *)0x0);
                                  if (*targetAddress !=
                                      (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                                    pUVar1 = *targetAddress_00;
                                    pGVar3 = ((*targetAddress)->fields).Theme;
                                    if (Il2CppMethodInitialized_07542ac5 == '\0') {
                                      il2cpp_codegen_initialize_runtime_metadata
                                                (&
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing
                                                );
                                      il2cpp_codegen_initialize_runtime_metadata(&"primary");
                                      il2cpp_codegen_initialize_runtime_metadata(&"focusRing");
                                      Il2CppMethodInitialized_07542ac5 = '\x01';
                                    }
                                    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                      __this_02 = UnityEngine_GameObject__AddComponent_object_
                                                            (pUVar1,(MethodInfo_353B6A0 *)
                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing
                                                       );
                                      if (pGVar3 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                                        UVar6.fields.b = 1.0;
                                        UVar6.fields.a = 1.0;
                                        UVar6.fields.r = 1.0;
                                        UVar6.fields.g = 1.0;
                                        UVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                          (pGVar3,"primary",UVar6,
                                                           (MethodInfo *)0x0);
                                        UVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                                          (pGVar3,"focusRing",UVar6,
                                                           (MethodInfo *)0x0);
                                        if (__this_02 != (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0)
                                        {
                                          Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup
                                                    (__this_02,UVar6,3.0,5.0,14.0,true,(MethodInfo *)0x0);
                                          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySwitchMeasure
                                                    (*targetAddress_00,style,method_02);
                                          if (*targetAddress_01 != (UnityEngine_UI_Toggle_o *)0x0) {
                                            __this = (UnityEngine_Events_UnityEvent_bool__o *)
                                                     ((*targetAddress_01)->fields).onValueChanged;
                                            call = (UnityEngine_Events_UnityAction_T0__o *)
                                                   il2cpp_codegen_object_new
                                                             ((Il2CppClass *)
                                                              TypeInfo_UnityEngine_Events_UnityAction_bool);
                                            UnityEngine_Events_UnityAction_bool____ctor
                                                      ((UnityEngine_Events_UnityAction_bool__o *)call,
                                                       (Il2CppObject *)__this_00,
                                                       (intptr_t)
                                                       MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass87_0_BuildSwitch_b__0
                                                       ,(MethodInfo_4311710 *)0x0);
                                            if (__this != (UnityEngine_Events_UnityEvent_bool__o *)0x0) {
                                              UnityEngine_Events_UnityEvent_bool___AddListener
                                                        (__this,call,
                                                         (MethodInfo_43179D0 *)
                                                                                                                  
                                                       MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener
                                                       );
                                              return;
                                            }
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleBox
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleBox (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, bool radio, const MethodInfo* method);
// 0x538bde0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleBox
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,bool radio,
          MethodInfo *method)

{
  float fVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar4;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_String_o **ppSVar5;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07542b05 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Check Box");
    il2cpp_codegen_initialize_runtime_metadata(&"checkBox");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Radio Box");
    Il2CppMethodInitialized_07542b05 = '\x01';
  }
  if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"checkBox",(MethodInfo *)0x0);
    if (radio) {
      ppSVar5 = &"AoTTG Radio Box";
    }
    else {
      ppSVar5 = &"AoTTG Check Box";
    }
    pSVar2 = *ppSVar5;
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if (obj != (System_Type_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((int)components->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      components->m_Items[0] = obj;
      Il2CppCodeGenWriteBarrier(components->m_Items);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this,pSVar2,components,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
          __this_01 = UnityEngine_GameObject__GetComponent_object_
                                (__this,(MethodInfo_353B730 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
            pGVar3 = (style->fields).height;
            if (Il2CppMethodInitialized_07542ac4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              il2cpp_codegen_initialize_runtime_metadata(&"point");
              Il2CppMethodInitialized_07542ac4 = '\x01';
            }
            fVar1 = 26.0;
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
              pSVar2 = (pGVar3->fields).unit;
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              }
              bVar4 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
              if (bVar4) {
                fVar1 = (pGVar3->fields).value;
              }
            }
            if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax
                        (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_pivot
                        (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              value.fields.y = fVar1;
              value.fields.x = fVar1;
              UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                        (__this,style,theme,(style->fields).background,false,in_R9);
              return __this_01;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleMark
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleMark (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, bool radio, const MethodInfo* method);
// 0x538c0d0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleMark
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,bool radio,
          MethodInfo *method)

{
  float fVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar4;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_String_o **ppSVar5;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07542b06 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Check Mark");
    il2cpp_codegen_initialize_runtime_metadata(&"checkMark");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Radio Mark");
    Il2CppMethodInitialized_07542b06 = '\x01';
  }
  if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"checkMark",(MethodInfo *)0x0);
    if (radio) {
      ppSVar5 = &"AoTTG Radio Mark";
    }
    else {
      ppSVar5 = &"AoTTG Check Mark";
    }
    pSVar2 = *ppSVar5;
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if (obj != (System_Type_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((int)components->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      components->m_Items[0] = obj;
      Il2CppCodeGenWriteBarrier(components->m_Items);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this,pSVar2,components,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510
                    (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
          __this_01 = UnityEngine_GameObject__GetComponent_object_
                                (__this,(MethodInfo_353B730 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
            pGVar3 = (style->fields).height;
            if (Il2CppMethodInitialized_07542ac4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              il2cpp_codegen_initialize_runtime_metadata(&"point");
              Il2CppMethodInitialized_07542ac4 = '\x01';
            }
            fVar1 = 16.0;
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
              pSVar2 = (pGVar3->fields).unit;
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              }
              bVar4 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
              if (bVar4) {
                fVar1 = (pGVar3->fields).value;
              }
            }
            if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax
                        (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
              value.fields.y = fVar1;
              value.fields.x = fVar1;
              UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                        (__this,style,theme,(style->fields).background,false,in_R9);
              return __this_01;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleIcon
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleIcon (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x538c3b0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleIcon
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          MethodInfo *method)

{
  System_String_o *resourcePath;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_Sprite_o *value;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_07542b07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_CanvasRenderer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_UI_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toggle Icon");
    Il2CppMethodInitialized_07542b07 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_0538c6f7:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) goto label_0538c701;
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) goto label_0538c701;
    }
    if ((components->max_length & 0xfffffffe) != 0) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
label_0538c701:
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Toggle Icon",components,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
            __this_01 = UnityEngine_GameObject__GetComponent_object_
                                  (__this,(MethodInfo_353B730 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax
                        (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_pivot
                        (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchoredPosition
                        (__this_01,(UnityEngine_Vector2_o)0x42080000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_sizeDelta
                        (__this_01,(UnityEngine_Vector2_o)0x41f0000041f00000,(MethodInfo *)0x0);
              __this_02 = UnityEngine_GameObject__GetComponent_object_
                                    (__this,(MethodInfo_353B730 *)
                                            MethodInfo_UnityEngine_GameObject_GetComponent_Image);
              if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                resourcePath = (node->fields).icon;
                if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
                }
                value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(resourcePath,(MethodInfo *)0x0);
                if (__this_02 != (UnityEngine_UI_Image_o *)0x0) {
                  UnityEngine_UI_Image__set_sprite(__this_02,value,(MethodInfo *)0x0);
                  UnityEngine_UI_Image__set_preserveAspect(__this_02,true,(MethodInfo *)0x0);
                  (*(__this_02->klass->vtable)._25_set_raycastTarget.methodPtr)
                            (__this_02,false,(__this_02->klass->vtable)._25_set_raycastTarget.method);
                  UVar3.fields.b = 1.0;
                  UVar3.fields.a = 1.0;
                  UVar3.fields.r = 1.0;
                  UVar3.fields.g = 1.0;
                  (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                            (__this_02,UVar3,(__this_02->klass->vtable)._23_set_color.method);
                  return __this_01;
                }
              }
            }
          }
        }
        goto label_0538c6f7;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleLabel
// il2cpp: TMPro_TextMeshProUGUI_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleLabel (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool hasIcon, const MethodInfo* method);
// 0x538c710

TMPro_TextMeshProUGUI_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleLabel
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool hasIcon,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  TMPro_TextMeshProUGUI_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_03;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  UnityEngine_Vector2_o value;
  uint uVar2;
  
  if (Il2CppMethodInitialized_07542b08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Toggle Label");
    il2cpp_codegen_initialize_runtime_metadata(&"controlLabel");
    Il2CppMethodInitialized_07542b08 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Toggle Label",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
        __this_02 = UnityEngine_GameObject__GetComponent_object_
                              (__this_00,
                               (MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(__this_02,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_07542885 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_07542885 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (__this_02,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                     (MethodInfo *)0x0);
          if (hasIcon) {
            uVar2 = 0x428c0000;
          }
          else {
            uVar2 = 0x42080000;
          }
          value.fields.y = 0.0;
          value.fields.x = (float)uVar2;
          UnityEngine_RectTransform__set_offsetMin(__this_02,value,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_0753ecc8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_0753ecc8 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMax
                    (__this_02,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          text = UnityEngine_GameObject__AddComponent_object_
                           (__this_00,
                            (MethodInfo_353B6A0 *)
                            MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
          __this_03 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
          if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
             (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
            (__this_03->fields).text = (node->fields).text;
            Il2CppCodeGenWriteBarrier(&(__this_03->fields).text);
            (__this_03->fields).style = "controlLabel";
            Il2CppCodeGenWriteBarrier(&(__this_03->fields).style);
            if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
               (__this = (context->fields).Theme, __this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
            {
              style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                                (__this,"controlLabel",(MethodInfo *)0x0);
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              }
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText(text,__this_03,style,context,method)
              ;
              if (text != (TMPro_TextMeshProUGUI_o *)0x0) {
                (*(text->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (text,false,(text->klass->vtable)._25_set_raycastTarget.method);
                return text;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SwitchTrack
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SwitchTrack (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x538ce00

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SwitchTrack
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method
          )

{
  float fVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  System_String_o *pSVar3;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar4;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar5;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *in_R9;
  float fVar6;
  
  if (Il2CppMethodInitialized_07542b09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Switch Track");
    il2cpp_codegen_initialize_runtime_metadata(&"switchTrack");
    Il2CppMethodInitialized_07542b09 = '\x01';
  }
  if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"switchTrack",(MethodInfo *)0x0);
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if (obj != (System_Type_o *)0x0) {
        pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
        if (pIVar5 == (Il2CppObject *)0x0) {
          pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
        }
      }
      if ((int)components->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      components->m_Items[0] = obj;
      Il2CppCodeGenWriteBarrier(components->m_Items);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Switch Track",components,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510(__this_00,parent,false,(MethodInfo *)0x0);
          __this_01 = UnityEngine_GameObject__GetComponent_object_
                                (__this,(MethodInfo_353B730 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
            UnityEngine_RectTransform__set_anchorMin
                      (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_anchorMax
                      (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
            UnityEngine_RectTransform__set_pivot
                      (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
            if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
              pGVar2 = (style->fields).width;
              if (Il2CppMethodInitialized_07542ac4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                il2cpp_codegen_initialize_runtime_metadata(&"point");
                Il2CppMethodInitialized_07542ac4 = '\x01';
              }
              fVar1 = 52.0;
              if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                pSVar3 = (pGVar2->fields).unit;
                if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                }
                bVar4 = System_String__Equals_52ffe30(pSVar3,"point",5,(MethodInfo *)0x0);
                if (bVar4) {
                  fVar1 = (pGVar2->fields).value;
                }
              }
              pGVar2 = (style->fields).height;
              if (Il2CppMethodInitialized_07542ac4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                il2cpp_codegen_initialize_runtime_metadata(&"point");
                Il2CppMethodInitialized_07542ac4 = '\x01';
              }
              fVar6 = 26.0;
              if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                pSVar3 = (pGVar2->fields).unit;
                if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                }
                bVar4 = System_String__Equals_52ffe30(pSVar3,"point",5,(MethodInfo *)0x0);
                fVar6 = 26.0;
                if (bVar4) {
                  fVar6 = (pGVar2->fields).value;
                }
              }
              value.fields.y = fVar6;
              value.fields.x = fVar1;
              UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                        (__this,style,theme,(style->fields).background,false,in_R9);
              return __this_01;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SwitchThumb
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SwitchThumb (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x538d140

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SwitchThumb
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  System_String_o *pSVar2;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar3;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  MethodInfo *in_R9;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07542b0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Switch Thumb");
    il2cpp_codegen_initialize_runtime_metadata(&"switchThumb");
    Il2CppMethodInitialized_07542b0a = '\x01';
  }
  if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"switchThumb",(MethodInfo *)0x0);
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components != (System_Type_array *)0x0) {
      if (obj != (System_Type_o *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
        }
      }
      if ((int)components->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      components->m_Items[0] = obj;
      Il2CppCodeGenWriteBarrier(components->m_Items);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Switch Thumb",components,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      if (__this != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_692d510
                    (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
          __this_01 = UnityEngine_GameObject__GetComponent_object_
                                (__this,(MethodInfo_353B730 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
          if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
            pGVar1 = (style->fields).height;
            if (Il2CppMethodInitialized_07542ac4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              il2cpp_codegen_initialize_runtime_metadata(&"point");
              Il2CppMethodInitialized_07542ac4 = '\x01';
            }
            fVar5 = 22.0;
            if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
              pSVar2 = (pGVar1->fields).unit;
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              }
              bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
              fVar5 = 22.0;
              if (bVar3) {
                fVar5 = (pGVar1->fields).value;
              }
            }
            if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
              UnityEngine_RectTransform__set_anchorMin
                        (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_anchorMax
                        (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              UnityEngine_RectTransform__set_pivot
                        (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
              pGVar1 = (style->fields).width;
              if (Il2CppMethodInitialized_07542ac4 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                il2cpp_codegen_initialize_runtime_metadata(&"point");
                Il2CppMethodInitialized_07542ac4 = '\x01';
              }
              fVar6 = fVar5;
              if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                pSVar2 = (pGVar1->fields).unit;
                if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                }
                bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
                if (bVar3) {
                  fVar6 = (pGVar1->fields).value;
                }
              }
              value.fields.y = fVar5;
              value.fields.x = fVar6;
              UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                        (__this,style,theme,(style->fields).background,
                         (style->fields).reliefGradient.fields.value,in_R9);
              return __this_01;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyToggleMeasure
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyToggleMeasure (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, TMPro_TextMeshProUGUI_o* label, bool hasIcon, const MethodInfo* method);
// 0x538ca60
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538cb3b: jne 0x538cb8c
// asm:   0x538cb45: movss dword ptr [rsp + 0xc], xmm0
// asm:   0x538cb4b: jmp 0x538cbf2
// asm:   0x538cb8a: je 0x538cb3d
// asm:   0x538cbef: mov r15, rbp
// asm:   0x538cc21: test rbp, rbp
// asm:   0x538cc24: jne 0x538cc4c
// asm:   0x538cc26: jmp 0x538cc8a
// asm:   0x538ccd7: movss xmm0, dword ptr [rip - 0x43cae07]
// asm:   0x538ccdf: test rbp, rbp
// asm:   0x538cce2: jne 0x538cd12
// asm:   0x538cce4: jmp 0x538cd52
// asm:   0x538cdc7: jmp 0x538cc13
// asm:   0x538cddf: jmp 0x538ccc9

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyToggleMeasure
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               TMPro_TextMeshProUGUI_o *label,bool hasIcon,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Vector2_o UVar2;
  bool bVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar6;
  float fVar7;
  float local_4c;
  
  if (Il2CppMethodInitialized_07542b0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b0b = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_0538cdf9;
  pUVar4 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0538cdf9;
    pSVar5 = (*(label->klass->vtable)._65_get_text.methodPtr)
                       (label,(label->klass->vtable)._65_get_text.method);
    UVar2 = TMPro_TMP_Text__GetPreferredValues_670eff0((TMPro_TMP_Text_o *)label,pSVar5,(MethodInfo *)0x0);
    fVar7 = UVar2.fields.x;
    if (!hasIcon) goto label_0538cb3d;
label_0538cb8c:
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    local_4c = 72.0;
    if (bVar3) {
      if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_0538cdf9;
      pSVar5 = (*(label->klass->vtable)._65_get_text.methodPtr)
                         (label,(label->klass->vtable)._65_get_text.method);
      bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
      if (!bVar3) {
        local_4c = fVar7 + 80.0;
      }
    }
  }
  else {
    if (Il2CppMethodInitialized_0753ecc8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_0753ecc8 = '\x01';
    }
    fVar7 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
    if (hasIcon) goto label_0538cb8c;
label_0538cb3d:
    local_4c = fVar7 + 44.0;
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    pGVar6 = (style->fields).width;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
  }
  if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar5 = (pGVar6->fields).unit;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar5,"point",5,(MethodInfo *)0x0);
    if (bVar3) {
      local_4c = (pGVar6->fields).value;
    }
  }
  if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar4,local_4c,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar6 = (style->fields).height;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    fVar7 = 42.0;
    if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar5 = (pGVar6->fields).unit;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar5,"point",5,(MethodInfo *)0x0);
      fVar7 = 42.0;
      if (bVar3) {
        fVar7 = (pGVar6->fields).value;
      }
    }
    (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar4,fVar7,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
    return;
  }
label_0538cdf9:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplySwitchMeasure
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySwitchMeasure (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x538d490
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538d529: movss xmm0, dword ptr [rip - 0x43cb641]
// asm:   0x538d531: test rbx, rbx
// asm:   0x538d534: jne 0x538d564
// asm:   0x538d536: jmp 0x538d5a4
// asm:   0x538d5eb: movss xmm0, dword ptr [rip - 0x43cb71b]
// asm:   0x538d5f3: test rbx, rbx
// asm:   0x538d5f6: jne 0x538d626
// asm:   0x538d5f8: jmp 0x538d666
// asm:   0x538d6bd: jmp 0x538d51b
// asm:   0x538d6d5: jmp 0x538d5dd

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySwitchMeasure
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  bool bVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_07542b0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542b0c = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_0538d6da;
  pUVar4 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement)
    ;
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0538d503;
label_0538d6a3:
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_0538d6a3;
label_0538d503:
    pGVar5 = (style->fields).width;
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_07542ac4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_07542ac4 = '\x01';
  }
  fVar6 = 58.0;
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar2 = (pGVar5->fields).unit;
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
    fVar6 = 58.0;
    if (bVar3) {
      fVar6 = (pGVar5->fields).value;
    }
  }
  if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar4,fVar6,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    else {
      pGVar5 = (style->fields).height;
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_07542ac4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_07542ac4 = '\x01';
    }
    fVar6 = 42.0;
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar2 = (pGVar5->fields).unit;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_52ffe30(pSVar2,"point",5,(MethodInfo *)0x0);
      fVar6 = 42.0;
      if (bVar3) {
        fVar6 = (pGVar5->fields).value;
      }
    }
    (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar4,fVar6,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
    return;
  }
label_0538d6da:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$get_LayoutSettleCounters
// il2cpp: Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters_o Gisketch_Aottg2UI_Building_GisketchScreenBuilder__get_LayoutSettleCounters (const MethodInfo* method);
// 0x538d6e0

Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__get_LayoutSettleCounters
          (Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters_o *__return_storage_ptr__,
          MethodInfo *method)

{
  int32_t iVar1;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder_StaticFields *pGVar2;
  int32_t iVar3;
  int32_t iVar4;
  int32_t iVar5;
  
  if (Il2CppMethodInitialized_07542b0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542b0d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pGVar2 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields;
  iVar1 = pGVar2->_scrollbarPasses;
  iVar3 = pGVar2->_fullSettleCalls;
  iVar4 = pGVar2->_targetedSettleCalls;
  iVar5 = pGVar2->_measurementSettleCalls;
  (__return_storage_ptr__->fields).Calls = pGVar2->_settleCalls;
  (__return_storage_ptr__->fields).FullCalls = iVar3;
  (__return_storage_ptr__->fields).TargetedCalls = iVar4;
  (__return_storage_ptr__->fields).MeasurementCalls = iVar5;
  iVar3 = pGVar2->_flexRefreshes;
  (__return_storage_ptr__->fields).CanvasFlushes = pGVar2->_canvasFlushes;
  (__return_storage_ptr__->fields).FlexRefreshes = iVar3;
  (__return_storage_ptr__->fields).ScrollbarPasses = iVar1;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ResetLayoutSettleCounters
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ResetLayoutSettleCounters (const MethodInfo* method);
// 0x538d750

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ResetLayoutSettleCounters(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_07542b0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542b0e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields;
  pGVar1->_measurementSettleCalls = 0;
  pGVar1->_canvasFlushes = 0;
  pGVar1->_flexRefreshes = 0;
  pGVar1->_scrollbarPasses = 0;
  pGVar1->_settleCalls = 0;
  pGVar1->_fullSettleCalls = 0;
  pGVar1->_targetedSettleCalls = 0;
  pGVar1->_measurementSettleCalls = 0;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$Build
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Build (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, const MethodInfo* method);
// 0x538d7a0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Build
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,
          Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,
          Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  MethodInfo *in_stack_ffffffffffffffb8;
  
  if (Il2CppMethodInitialized_07542b0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
    Il2CppMethodInitialized_07542b0f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
  Gisketch_Aottg2UI_State_GisketchUIState___ctor(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
  Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
            (__this_00,(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0,theme,localizer,actions,
             __this,(Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,
             (System_Func_string__GisketchOverlayDefinition__o *)0x0,in_stack_ffffffffffffffb8);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pGVar1 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
                     (screen,parent,__this_00,(MethodInfo *)localizer);
  if (pGVar1 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pGVar1->fields)._Root_k__BackingField;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildView
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x538d890
// eh: try 0x538d990..0x538dc92 -> pad 0x538dc41 (+22 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x538dca0..0x538dcaa -> pad 0x538dce2 catch (...) [compiler noexcept guard]
// eh: try 0x538dcc3..0x538dcc8 -> pad 0x538dccd cleanup
// eh: try 0x538dcd0..0x538dcda -> pad 0x538dce2 catch (...) [compiler noexcept guard]
// asm: 59 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538d9d2: jmp 0x538d9db
// asm:   0x538dc25: mov rdi, rbx
// asm:   0x538dc28: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x538dc32: mov rdi, rbx
// asm:   0x538dc35: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x538dc3f: jmp 0x538dc71
// asm:   0x538dc41: jmp 0x538dc55
// asm:   0x538dc43: jmp 0x538dc71
// asm:   0x538dc45: jmp 0x538dc71
// asm:   0x538dc47: jmp 0x538dc71
// asm:   0x538dc49: jmp 0x538dc71
// asm:   0x538dc4b: jmp 0x538dc71
// asm:   0x538dc4d: jmp 0x538dc71
// asm:   0x538dc4f: jmp 0x538dc71
// asm:   0x538dc51: jmp 0x538dc71
// asm:   0x538dc53: jmp 0x538dc55
// asm:   0x538dc55: mov r15, rdx
// asm:   0x538dc58: mov r14, rax
// asm:   0x538dc5b: jmp 0x538dcaa
// asm:   0x538dc5d: jmp 0x538dc71
// asm:   0x538dc5f: jmp 0x538dc71
// asm:   0x538dc61: jmp 0x538dc71
// asm:   0x538dc63: mov r15, rdx
// asm:   0x538dc66: mov r14, rax
// asm:   0x538dc69: jmp 0x538dcad
// asm:   0x538dc6b: jmp 0x538dc71
// asm:   0x538dc6d: jmp 0x538dc71
// asm:   0x538dc6f: jmp 0x538dc71
// asm:   0x538dc71: mov r15, rdx
// asm:   0x538dc74: mov r14, rax
// asm:   0x538dc77: cmp r15d, 1
// asm:   0x538dc7b: jne 0x538dca0
// asm:   0x538dc7d: mov rdi, r14
// asm:   0x538dc80: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x538dc85: mov rbx, qword ptr [rax]
// asm:   0x538dc88: mov qword ptr [rsp + 0x20], rbx
// asm:   0x538dc8d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x538dc92: xor r13d, r13d
// asm:   0x538dc95: jmp 0x538dba3
// asm:   0x538dc9a: mov r15, rdx
// asm:   0x538dc9d: mov r14, rax
// asm:   0x538dca0: lea rdi, [rsp + 0x20]
// asm:   0x538dca5: call 0x2d4baa0  ; il2cpp_runtime_helper_02d4baa0()
// asm:   0x538dcaa: xor r13d, r13d
// asm:   0x538dcad: cmp r15d, 1
// asm:   0x538dcb1: jne 0x538dcd0
// asm:   0x538dcb3: mov rdi, r14
// asm:   0x538dcb6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x538dcbb: mov rbx, qword ptr [rax]
// asm:   0x538dcbe: mov qword ptr [rsp + 0x10], rbx
// asm:   0x538dcc3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x538dcc8: jmp 0x538dbb6
// asm:   0x538dccd: mov r14, rax
// asm:   0x538dcd0: lea rdi, [rsp + 0x10]
// asm:   0x538dcd5: call 0x2d4bac0  ; il2cpp_runtime_helper_02d4bac0()
// asm:   0x538dcda: mov rdi, r14
// asm:   0x538dcdd: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x538dce2: mov rdi, rax
// asm:   0x538dce5: call 0x2ab61e0  ; __clang_call_terminate()

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Unity_Profiling_ProfilerMarker_o markerPtr;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar2;
  bool bVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this;
  UnityEngine_Object_o *__this_00;
  UnityEngine_RectTransform_o *rect;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *pGVar6;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  int32_t local_94;
  Unity_Profiling_ProfilerMarker_o local_90;
  undefined8 local_88;
  Unity_Profiling_ProfilerMarker_o *local_80;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_78;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_58;
  
  if (Il2CppMethodInitialized_07542b10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.BuildView");
    il2cpp_codegen_initialize_runtime_metadata(&"stretch root=");
    il2cpp_codegen_initialize_runtime_metadata(&"root build start children=");
    il2cpp_codegen_initialize_runtime_metadata(&"view ready root=");
    Il2CppMethodInitialized_07542b10 = '\x01';
  }
  local_90.fields.m_Ptr = (Unity_Profiling_ProfilerMarker_Fields)0;
  local_58.fields._startMs._0_4_ = 0;
  local_58.fields._startMs._4_2_ = 0;
  local_58.fields._startMs._6_2_ = 0;
  local_58.fields._enabled = false;
  local_58.fields._hotLoop = false;
  local_58.fields._26_6_ = 0;
  local_58.fields._area = (System_String_o *)0x0;
  local_58.fields._detail = (System_String_o *)0x0;
  local_94 = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  markerPtr.fields.m_Ptr =
       (Unity_Profiling_ProfilerMarker_Fields)
       (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->BuildViewMarker).fields.
       m_Ptr;
  if (markerPtr.fields.m_Ptr != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample
              ((intptr_t)markerPtr.fields.m_Ptr,(MethodInfo *)0x0);
  }
  local_88 = 0;
  local_80 = &local_90;
  local_90.fields.m_Ptr = markerPtr.fields.m_Ptr;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_07542b21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07542b21 = '\x01';
  }
  if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    pGVar6 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *)&"null";
  }
  else {
    bVar3 = System_String__IsNullOrEmpty((screen->fields).id,(MethodInfo *)0x0);
    pGVar6 = &screen->fields;
    if (bVar3) {
      pGVar6 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *)&(screen->fields).title;
    }
  }
  pSVar4 = pGVar6->id;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_78,"ScreenBuilder.BuildView",pSVar4,(MethodInfo *)0x0);
  local_58.fields._startMs = local_78.fields._startMs;
  local_58.fields._enabled = local_78.fields._enabled;
  local_58.fields._hotLoop = local_78.fields._hotLoop;
  local_58.fields._26_6_ = local_78.fields._26_6_;
  local_58.fields._area = local_78.fields._area;
  local_58.fields._detail = local_78.fields._detail;
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = (System_String_o *)&local_58;
  if ((screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) ||
     (pGVar1 = (screen->fields).root, pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Gisketch screen must have a root node.");
    System_ArgumentException___ctor_54186d0(__this_01,pSVar4,(MethodInfo *)0x0);
    pMVar5 = il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_BuildView);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar5);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pGVar2 = (pGVar1->fields).children;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    local_94 = 0;
  }
  else {
    local_94 = (int32_t)pGVar2->max_length;
  }
  pSVar4 = System_Int32__ToString(&local_94,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_52f0320("root build start children=",pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.BuildView",pSVar4,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
  Gisketch_Aottg2UI_Building_GisketchView___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (UnityEngine_Object_o *)
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                        ((screen->fields).root,parent,context,__this,in_R8);
  if (__this_00 == (UnityEngine_Object_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_52f0320("stretch root=",pSVar4,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.BuildView",pSVar4,(MethodInfo *)0x0);
  pMVar5 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
  rect = UnityEngine_GameObject__GetComponent_object_
                   ((UnityEngine_GameObject_o *)__this_00,
                    (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(rect,pMVar5);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EnsureScreenCanvas
            ((UnityEngine_GameObject_o *)__this_00,pMVar5);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0
            ((UnityEngine_GameObject_o *)__this_00,0,method_00);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled(__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchView__SetRoot
            (__this,(UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
  pSVar4 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_52f0320("view ready root=",pSVar4,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.BuildView",pSVar4,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_58,(MethodInfo *)0x0);
  if (local_90.fields.m_Ptr != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample
              ((intptr_t)local_90.fields.m_Ptr,(MethodInfo *)0x0);
  }
  return __this;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildOverlay
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x538e3f0
// eh: try 0x538e536..0x538e603 -> pad 0x538e60d (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x538e627..0x538e62c -> pad 0x538e649 cleanup
// eh: try 0x538e64c..0x538e656 -> pad 0x538e65e catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538e466: cmp byte ptr [rip + 0x21b46b5], 0
// asm:   0x538e46d: je 0x538e4a0
// asm:   0x538e46f: test r12, r12
// asm:   0x538e472: je 0x538e4b8
// asm:   0x538e490: jmp 0x538e4bf
// asm:   0x538e603: jmp 0x538e60f
// asm:   0x538e605: jmp 0x538e60f
// asm:   0x538e607: jmp 0x538e60f
// asm:   0x538e609: jmp 0x538e60f
// asm:   0x538e60b: jmp 0x538e60f
// asm:   0x538e60d: jmp 0x538e60f
// asm:   0x538e60f: mov rbx, rax
// asm:   0x538e612: cmp edx, 1
// asm:   0x538e615: jne 0x538e64c
// asm:   0x538e617: mov rdi, rbx
// asm:   0x538e61a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x538e61f: mov r14, qword ptr [rax]
// asm:   0x538e622: mov qword ptr [rsp + 0x20], r14
// asm:   0x538e627: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x538e62c: xor ebx, ebx
// asm:   0x538e62e: mov rdi, rsp
// asm:   0x538e631: xor esi, esi
// asm:   0x538e633: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x538e638: test r14, r14
// asm:   0x538e63b: je 0x538e5a6
// asm:   0x538e641: mov rdi, r14
// asm:   0x538e644: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x538e649: mov rbx, rax
// asm:   0x538e64c: lea rdi, [rsp + 0x20]
// asm:   0x538e651: call 0x2d4baf0  ; il2cpp_runtime_helper_02d4baf0()
// asm:   0x538e656: mov rdi, rbx
// asm:   0x538e659: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x538e65e: mov rdi, rax
// asm:   0x538e661: call 0x2ab61e0  ; __clang_call_terminate()

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
          (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  bool bVar1;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this;
  UnityEngine_GameObject_o *root;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  System_String_o *pSVar2;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *pGVar3;
  MethodInfo *in_R8;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (Il2CppMethodInitialized_07542b11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.BuildOverlay");
    Il2CppMethodInitialized_07542b11 = '\x01';
  }
  local_68.fields._startMs = 0;
  local_68.fields._enabled = false;
  local_68.fields._hotLoop = false;
  local_68.fields._26_6_ = 0;
  local_68.fields._area = (System_String_o *)0x0;
  local_68.fields._detail = (System_String_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_07542b22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07542b22 = '\x01';
  }
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&"null";
  }
  else {
    bVar1 = System_String__IsNullOrEmpty((overlay->fields).id,(MethodInfo *)0x0);
    pGVar3 = &overlay->fields;
    if (bVar1) {
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&(overlay->fields).title;
    }
  }
  pSVar2 = pGVar3->id;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_48,"ScreenBuilder.BuildOverlay",pSVar2,(MethodInfo *)0x0);
  local_68.fields._startMs = local_48.fields._startMs;
  local_68.fields._enabled = local_48.fields._enabled;
  local_68.fields._hotLoop = local_48.fields._hotLoop;
  local_68.fields._26_6_ = local_48.fields._26_6_;
  local_68.fields._area = local_48.fields._area;
  local_68.fields._detail = local_48.fields._detail;
  local_48.fields._area = (System_String_o *)0x0;
  if ((overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) ||
     ((overlay->fields).root == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    local_48.fields._detail = (System_String_o *)&local_68;
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    pSVar2 = il2cpp_codegen_get_runtime_metadata(&"Gisketch overlay must have a root node.");
    System_ArgumentException___ctor_54186d0(__this_00,pSVar2,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_BuildOverlay);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  local_48.fields._detail = (System_String_o *)&local_68;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
  Gisketch_Aottg2UI_Building_GisketchView___ctor(__this,(MethodInfo *)0x0);
  node = (overlay->fields).root;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  root = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode(node,parent,context,__this,in_R8);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,1,method_00);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled(__this,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchView__SetRoot(__this,root,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_68,(MethodInfo *)0x0);
  return __this;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildNodeInto
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x538e6d0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  UnityEngine_GameObject_o *pUVar3;
  Il2CppClass *pIVar4;
  System_ArgumentException_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  System_String_o **metadataPointer;
  
  if (Il2CppMethodInitialized_07542b12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b12 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar4);
    metadataPointer = &"Gisketch node must not be null.";
  }
  else {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
        view = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
        Gisketch_Aottg2UI_Building_GisketchView___ctor(view,(MethodInfo *)0x0);
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      pUVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode(node,parent,context,view,method);
      return pUVar3;
    }
    pIVar4 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar4);
    metadataPointer = &"Gisketch node parent must not be null.";
  }
  message = il2cpp_codegen_get_runtime_metadata(metadataPointer);
  System_ArgumentException___ctor_54186d0(__this,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_BuildNodeInto);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettleLayout
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x538e820

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542b13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542b13 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    in_RDX = extraout_RDX;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,0,method_00);
    return;
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0(root,0,in_RDX);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettleLayout
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout (UnityEngine_GameObject_o* root, int32_t mode, const MethodInfo* method);
// 0x538deb0
// eh: try 0x538dfd6..0x538e387 -> pad 0x538e3a0 (+29 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x538e392..0x538e39c -> pad 0x538e3e0 catch (...) [compiler noexcept guard]
// eh: try 0x538e3c1..0x538e3c6 -> pad 0x538e3cb cleanup
// eh: try 0x538e3ce..0x538e3d8 -> pad 0x538e3e0 catch (...) [compiler noexcept guard]
// asm: 62 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538e13a: xor ebx, ebx
// asm:   0x538e1e1: jmp 0x538e1f2
// asm:   0x538e325: mov rdi, rbx
// asm:   0x538e328: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x538e32d: mov rdi, rbx
// asm:   0x538e330: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x538e33f: jmp 0x538e367
// asm:   0x538e341: jmp 0x538e367
// asm:   0x538e343: jmp 0x538e367
// asm:   0x538e345: jmp 0x538e367
// asm:   0x538e347: jmp 0x538e367
// asm:   0x538e349: jmp 0x538e367
// asm:   0x538e34b: jmp 0x538e367
// asm:   0x538e34d: jmp 0x538e367
// asm:   0x538e34f: jmp 0x538e367
// asm:   0x538e351: jmp 0x538e367
// asm:   0x538e353: jmp 0x538e367
// asm:   0x538e355: jmp 0x538e367
// asm:   0x538e357: jmp 0x538e367
// asm:   0x538e359: jmp 0x538e367
// asm:   0x538e35b: jmp 0x538e367
// asm:   0x538e35d: jmp 0x538e3a6
// asm:   0x538e35f: jmp 0x538e367
// asm:   0x538e361: jmp 0x538e367
// asm:   0x538e363: jmp 0x538e367
// asm:   0x538e365: jmp 0x538e367
// asm:   0x538e367: mov rbx, rdx
// asm:   0x538e36a: mov rbp, rax
// asm:   0x538e36d: cmp ebx, 1
// asm:   0x538e370: jne 0x538e392
// asm:   0x538e372: mov rdi, rbp
// asm:   0x538e375: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x538e37a: mov rbx, qword ptr [rax]
// asm:   0x538e37d: mov qword ptr [rsp + 0x20], rbx
// asm:   0x538e382: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x538e387: jmp 0x538e13c
// asm:   0x538e38c: mov rbx, rdx
// asm:   0x538e38f: mov rbp, rax
// asm:   0x538e392: lea rdi, [rsp + 0x20]
// asm:   0x538e397: call 0x2d4bb10  ; il2cpp_runtime_helper_02d4bb10()
// asm:   0x538e39c: jmp 0x538e3ac
// asm:   0x538e39e: jmp 0x538e3a6
// asm:   0x538e3a0: jmp 0x538e3a6
// asm:   0x538e3a2: jmp 0x538e3a6
// asm:   0x538e3a4: jmp 0x538e3a6
// asm:   0x538e3a6: mov rbx, rdx
// asm:   0x538e3a9: mov rbp, rax
// asm:   0x538e3ac: cmp ebx, 1
// asm:   0x538e3af: jne 0x538e3ce
// asm:   0x538e3b1: mov rdi, rbp
// asm:   0x538e3b4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x538e3b9: mov rbx, qword ptr [rax]
// asm:   0x538e3bc: mov qword ptr [rsp + 0x10], rbx
// asm:   0x538e3c1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x538e3c6: jmp 0x538e153
// asm:   0x538e3cb: mov rbp, rax
// asm:   0x538e3ce: lea rdi, [rsp + 0x10]
// asm:   0x538e3d3: call 0x2d4bb30  ; il2cpp_runtime_helper_02d4bb30()
// asm:   0x538e3d8: mov rdi, rbp
// asm:   0x538e3db: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x538e3e0: mov rdi, rax
// asm:   0x538e3e3: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_528deb0
               (UnityEngine_GameObject_o *root,int32_t mode,MethodInfo *method)

{
  uint32_t uVar1;
  Unity_Profiling_ProfilerMarker_o markerPtr;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *str2;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar4;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar5;
  bool local_a1;
  Unity_Profiling_ProfilerMarker_o local_a0;
  undefined8 local_98;
  Unity_Profiling_ProfilerMarker_o *local_90;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_88;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  System_Enum_o local_48;
  int32_t local_38;
  
  if (Il2CppMethodInitialized_07542b14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchLayoutSettleMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"UpdateScrollbars changed=");
    il2cpp_codegen_initialize_runtime_metadata(&"full #1");
    il2cpp_codegen_initialize_runtime_metadata(&"full #2");
    il2cpp_codegen_initialize_runtime_metadata(&"full #3");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.SettleLayout");
    Il2CppMethodInitialized_07542b14 = '\x01';
  }
  local_68.fields._startMs._0_4_ = 0;
  local_68.fields._startMs._4_2_ = 0;
  local_68.fields._startMs._6_2_ = 0;
  local_68.fields._enabled = false;
  local_68.fields._hotLoop = false;
  local_68.fields._26_6_ = 0;
  local_68.fields._area = (System_String_o *)0x0;
  local_68.fields._detail = (System_String_o *)0x0;
  local_a1 = false;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  markerPtr.fields.m_Ptr =
       (Unity_Profiling_ProfilerMarker_Fields)
       (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->SettleLayoutMarker).fields.
       m_Ptr;
  if (markerPtr.fields.m_Ptr != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample
              ((intptr_t)markerPtr.fields.m_Ptr,(MethodInfo *)0x0);
  }
  local_98 = 0;
  local_90 = &local_a0;
  local_48.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchLayoutSettleMode;
  local_48.monitor = (void *)0xffffffffffffffff;
  local_a0.fields.m_Ptr = markerPtr.fields.m_Ptr;
  local_38 = mode;
  pSVar3 = System_Enum__ToString(&local_48,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_07542b23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07542b23 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (root == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    str2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
  }
  else {
    str2 = "null";
  }
  pSVar3 = System_String__Concat_5301f10(pSVar3," ",str2,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_88,"ScreenBuilder.SettleLayout",pSVar3,(MethodInfo *)0x0);
  local_68.fields._startMs = local_88.fields._startMs;
  local_68.fields._enabled = local_88.fields._enabled;
  local_68.fields._hotLoop = local_88.fields._hotLoop;
  local_68.fields._26_6_ = local_88.fields._26_6_;
  local_68.fields._area = local_88.fields._area;
  local_68.fields._detail = local_88.fields._detail;
  local_88.fields._area = (System_String_o *)0x0;
  local_88.fields._detail = (System_String_o *)&local_68;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar5 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CountSettle(mode,pMVar5);
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    if (mode == 0) {
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases("full #1",pMVar5);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if (root == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        flex = UnityEngine_GameObject__GetComponent_object_
                         (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout
                         );
        uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      else {
        flex = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
        uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
      }
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      pMVar5 = (MethodInfo *)0x0;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        pMVar4 = extraout_RDX_01;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          pMVar4 = extraout_RDX_02;
        }
        pMVar5 = (MethodInfo *)"full #1";
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RefreshFlex(flex,"full #1",pMVar4);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases("full #2",pMVar5);
      local_a1 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__UpdateScrollbars(root,pMVar5);
      if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_075566f0);
      }
      pSVar3 = System_Boolean__ToString(&local_a1,(MethodInfo *)0x0);
      pSVar3 = System_String__Concat_52f0320("UpdateScrollbars changed=",pSVar3,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.SettleLayout",pSVar3,(MethodInfo *)0x0);
      if (local_a1 != false) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar2) {
          pMVar5 = extraout_RDX_03;
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            pMVar5 = extraout_RDX_04;
          }
          pMVar4 = (MethodInfo *)"full #2";
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RefreshFlex(flex,"full #2",pMVar5);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases("full #3",pMVar4);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__UpdateScrollbars(root,pMVar4);
        }
      }
      Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll(root,(MethodInfo *)0x0);
    }
    else {
      pMVar5 = extraout_RDX;
      if (uVar1 == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        pMVar5 = extraout_RDX_00;
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleTargeted(root,mode == 2,pMVar5);
    }
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_68,(MethodInfo *)0x0);
  if (local_a0.fields.m_Ptr != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample
              ((intptr_t)local_a0.fields.m_Ptr,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$UpdateScrollbars
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__UpdateScrollbars (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x538ee70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538ef2f: nop 

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__UpdateScrollbars
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  bool bVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  uint uVar6;
  byte bVar7;
  
  if (Il2CppMethodInitialized_07542b15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchScrollbarVisibility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b15 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  uVar6 = 0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
label_0538ef5c:
    return SUB41(uVar6,0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  piVar1 = &TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_scrollbarPasses;
  *piVar1 = *piVar1 + 1;
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pSVar5 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       (root,true,
                        (MethodInfo_353C0B0 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchScrollbarVisibility)
    ;
    if (pSVar5 != (System_Object_array *)0x0) {
      uVar4 = (uint)pSVar5->max_length;
      uVar6 = 0;
      if (0 < (int)uVar4) {
        bVar2 = 0;
        do {
          bVar7 = bVar2;
          if (uVar4 <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          if ((Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)pSVar5->m_Items[(int)uVar6] ==
              (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)0x0) goto label_0538ef69;
          bVar3 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility
                            ((Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)
                             pSVar5->m_Items[(int)uVar6],(MethodInfo *)0x0);
          uVar6 = uVar6 + 1;
          uVar4 = (uint)pSVar5->max_length;
          bVar2 = bVar7 | bVar3;
        } while ((int)uVar6 < (int)uVar4);
        uVar6 = (uint)(bVar7 | bVar3);
      }
      goto label_0538ef5c;
    }
  }
label_0538ef69:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettleTargeted
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleTargeted (UnityEngine_GameObject_o* root, bool forceCanvasForMeasurement, const MethodInfo* method);
// 0x538e9f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538eaf7: jmp 0x538eb10

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleTargeted
               (UnityEngine_GameObject_o *root,bool forceCanvasForMeasurement,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  ulong in_RAX;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  UnityEngine_RectTransform_o *layoutRoot;
  System_String_o *pSVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar4;
  undefined7 in_register_00000031;
  undefined8 uStack_38;
  
  pMVar4 = (MethodInfo *)CONCAT71(in_register_00000031,forceCanvasForMeasurement);
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07542b16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_UI_LayoutRebuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"measurement");
    il2cpp_codegen_initialize_runtime_metadata(&"UpdateScrollbars changed=");
    il2cpp_codegen_initialize_runtime_metadata(&"targeted");
    il2cpp_codegen_initialize_runtime_metadata(&"targeted scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.SettleLayout");
    Il2CppMethodInitialized_07542b16 = '\x01';
  }
  uStack_38 = uStack_38 & 0xffffffffffffff;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  flex = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettlementFlex(root,pMVar4);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (forceCanvasForMeasurement) {
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
      pSVar3 = "measurement";
    }
    else {
      uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
      pSVar3 = "targeted";
    }
    pMVar4 = extraout_RDX;
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      pMVar4 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RefreshFlex(flex,pSVar3,pMVar4);
  }
  if (root == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  layoutRoot = UnityEngine_GameObject__GetComponent_object_
                         (root,(MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)layoutRoot,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
    }
    pMVar4 = (MethodInfo *)0x0;
    UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__UpdateScrollbars(root,pMVar4);
  uStack_38 = CONCAT17(bVar2,(undefined7)uStack_38);
  if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075566f0);
  }
  pSVar3 = System_Boolean__ToString((bool *)((long)&uStack_38 + 7),(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_52f0320("UpdateScrollbars changed=",pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.SettleLayout",pSVar3,(MethodInfo *)0x0);
  if (uStack_38._7_1_ != '\0') {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pMVar4 = extraout_RDX_01;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        pMVar4 = extraout_RDX_02;
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RefreshFlex(flex,"targeted scrollbar",pMVar4);
    }
  }
  pMVar4 = (MethodInfo *)0x0;
  Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll(root,(MethodInfo *)0x0);
  if (forceCanvasForMeasurement) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases("measurement",pMVar4);
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettlementFlex
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettlementFlex (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x538ef70

Gilzoide_FlexUi_FlexLayout_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettlementFlex
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  Gilzoide_FlexUi_FlexLayout_o *pGVar2;
  
  if (Il2CppMethodInitialized_07542b17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b17 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pGVar2 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pGVar2 = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                         (root,(MethodInfo_353BB40 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_FlexLayout);
      return pGVar2;
    }
  }
  return pGVar2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ForceCanvases
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases (System_String_o* reason, const MethodInfo* method);
// 0x538eca0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases
               (System_String_o *reason,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o *detail;
  
  if (Il2CppMethodInitialized_07542b18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"ForceUpdateCanvases ");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.SettleLayout");
    Il2CppMethodInitialized_07542b18 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  piVar1 = &TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_canvasFlushes;
  *piVar1 = *piVar1 + 1;
  detail = System_String__Concat_52f0320("ForceUpdateCanvases ",reason,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.SettleLayout",detail,(MethodInfo *)0x0);
  UnityEngine_Canvas__ForceUpdateCanvases((MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$RefreshFlex
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RefreshFlex (Gilzoide_FlexUi_FlexLayout_o* flex, System_String_o* reason, const MethodInfo* method);
// 0x538ed60

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RefreshFlex
               (Gilzoide_FlexUi_FlexLayout_o *flex,System_String_o *reason,MethodInfo *method)

{
  int32_t *piVar1;
  bool bVar2;
  System_String_o *detail;
  
  if (Il2CppMethodInitialized_07542b19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Flex RefreshRootLayoutImmediate ");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.SettleLayout");
    Il2CppMethodInitialized_07542b19 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  piVar1 = &TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_flexRefreshes;
  *piVar1 = *piVar1 + 1;
  detail = System_String__Concat_52f0320("Flex RefreshRootLayoutImmediate ",reason,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.SettleLayout",detail,(MethodInfo *)0x0);
  if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(flex,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CountSettle
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CountSettle (int32_t mode, const MethodInfo* method);
// 0x538e910

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CountSettle(int32_t mode,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppClass *klass;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder_StaticFields *pGVar2;
  
  if (Il2CppMethodInitialized_07542b1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542b1a = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder;
  }
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder =
       (Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c *)klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder;
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields;
    pGVar2->_settleCalls = pGVar2->_settleCalls + 1;
  }
  else {
    pGVar2 = klass->static_fields;
    pGVar2->_settleCalls = pGVar2->_settleCalls + 1;
  }
  if (mode == 2) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields;
    }
    pGVar2->_measurementSettleCalls = pGVar2->_measurementSettleCalls + 1;
    return;
  }
  if (mode == 0) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      pGVar2 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields;
    }
    pGVar2->_fullSettleCalls = pGVar2->_fullSettleCalls + 1;
    return;
  }
  if ((klass->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields;
  }
  pGVar2->_targetedSettleCalls = pGVar2->_targetedSettleCalls + 1;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$EnsureScreenCanvas
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EnsureScreenCanvas (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x538dd70

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EnsureScreenCanvas
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *__this;
  UnityEngine_UI_GraphicRaycaster_o *x;
  
  if (Il2CppMethodInitialized_07542b1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b1b = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__GetComponent_object_
                       (root,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (root,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    }
    if (__this != (UnityEngine_Canvas_o *)0x0) {
      UnityEngine_Canvas__set_overrideSorting(__this,false,(MethodInfo *)0x0);
      x = UnityEngine_GameObject__GetComponent_object_
                    (root,(MethodInfo_353B730 *)
                          MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        UnityEngine_GameObject__AddComponent_object_
                  (root,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster)
        ;
        return;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildNode
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5385710
// eh: try 0x5385968..0x5385f21 -> pad 0x5385f57 (+45 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5385f85..0x5385f8a -> pad 0x5385faa cleanup
// eh: try 0x5385fad..0x5385fb7 -> pad 0x5385fbf catch (...) [compiler noexcept guard]
// asm: 65 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5385860: mov qword ptr [rsp + 0x38], rbx
// asm:   0x5385865: cmp byte ptr [rip + 0x21bd2b8], 0
// asm:   0x538586c: jne 0x5385899
// asm:   0x5385ed1: jmp 0x5385899
// asm:   0x5385f21: jmp 0x5385f6d
// asm:   0x5385f23: jmp 0x5385f6d
// asm:   0x5385f25: jmp 0x5385f6d
// asm:   0x5385f27: jmp 0x5385f6d
// asm:   0x5385f29: jmp 0x5385f6d
// asm:   0x5385f2b: jmp 0x5385f6d
// asm:   0x5385f2d: jmp 0x5385f6d
// asm:   0x5385f2f: jmp 0x5385f6d
// asm:   0x5385f31: jmp 0x5385f6d
// asm:   0x5385f33: jmp 0x5385f6d
// asm:   0x5385f35: jmp 0x5385f6d
// asm:   0x5385f37: jmp 0x5385f6d
// asm:   0x5385f39: jmp 0x5385f6d
// asm:   0x5385f3b: jmp 0x5385f6d
// asm:   0x5385f3d: jmp 0x5385f6d
// asm:   0x5385f3f: jmp 0x5385f6d
// asm:   0x5385f41: jmp 0x5385f6d
// asm:   0x5385f43: jmp 0x5385f6d
// asm:   0x5385f45: jmp 0x5385f6d
// asm:   0x5385f47: jmp 0x5385f6d
// asm:   0x5385f49: jmp 0x5385f6d
// asm:   0x5385f4b: jmp 0x5385f6d
// asm:   0x5385f4d: jmp 0x5385f6d
// asm:   0x5385f4f: jmp 0x5385f6d
// asm:   0x5385f51: jmp 0x5385f6d
// asm:   0x5385f53: jmp 0x5385f6d
// asm:   0x5385f55: jmp 0x5385f6d
// asm:   0x5385f57: jmp 0x5385f6d
// asm:   0x5385f59: jmp 0x5385f6d
// asm:   0x5385f5b: jmp 0x5385f6d
// asm:   0x5385f5d: jmp 0x5385f6d
// asm:   0x5385f5f: jmp 0x5385f6d
// asm:   0x5385f61: jmp 0x5385f6d
// asm:   0x5385f63: jmp 0x5385f6d
// asm:   0x5385f65: jmp 0x5385f6d
// asm:   0x5385f67: jmp 0x5385f6d
// asm:   0x5385f69: jmp 0x5385f6d
// asm:   0x5385f6b: jmp 0x5385f6d
// asm:   0x5385f6d: mov rbx, rax
// asm:   0x5385f70: cmp edx, 1
// asm:   0x5385f73: jne 0x5385fad
// asm:   0x5385f75: mov rdi, rbx
// asm:   0x5385f78: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5385f7d: mov rbx, qword ptr [rax]
// asm:   0x5385f80: mov qword ptr [rsp + 0x68], rbx
// asm:   0x5385f85: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5385f8a: xor r12d, r12d
// asm:   0x5385f8d: lea rdi, [rsp + 0x40]
// asm:   0x5385f92: xor esi, esi
// asm:   0x5385f94: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x5385f99: test rbx, rbx
// asm:   0x5385f9c: je 0x5385ea5
// asm:   0x5385fa2: mov rdi, rbx
// asm:   0x5385fa5: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5385faa: mov rbx, rax
// asm:   0x5385fad: lea rdi, [rsp + 0x68]
// asm:   0x5385fb2: call 0x2d4bb60  ; il2cpp_runtime_helper_02d4bb60()
// asm:   0x5385fb7: mov rdi, rbx
// asm:   0x5385fba: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5385fbf: mov rdi, rax
// asm:   0x5385fc2: call 0x2ab61e0  ; __clang_call_terminate()

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *pGVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppType *handle;
  bool bVar4;
  char cVar5;
  System_String_o **ppSVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar9;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *pUVar10;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this_01;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_02;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *styleMotion;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar12;
  MethodInfo *extraout_RDX_03;
  int32_t iVar13;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar14;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *method_03;
  MethodInfo *in_stack_ffffffffffffff48;
  System_String_o **local_98;
  int32_t local_8c;
  Il2CppObject *local_88;
  UnityEngine_Transform_o *local_80;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_78;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (Il2CppMethodInitialized_07542b1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIBinding);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG ");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.BuildNode");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&" children=");
    il2cpp_codegen_initialize_runtime_metadata(&"build builtin/registry ");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&" style=");
    Il2CppMethodInitialized_07542b1c = '\x01';
  }
  local_78.fields._startMs._0_4_ = 0;
  local_78.fields._startMs._4_2_ = 0;
  local_78.fields._startMs._6_2_ = 0;
  local_78.fields._enabled = false;
  local_78.fields._hotLoop = false;
  local_78.fields._26_6_ = 0;
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = (System_String_o *)0x0;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar4 = System_String__IsNullOrEmpty((node->fields).type,(MethodInfo *)0x0);
  if (bVar4) {
    ppSVar6 = &"Panel";
  }
  else {
    ppSVar6 = &(node->fields).type;
  }
  pSVar11 = ((Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)ppSVar6)->type;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  local_80 = parent;
  if (Il2CppMethodInitialized_07542b24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"(no-id)");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&" type=");
    Il2CppMethodInitialized_07542b24 = '\x01';
  }
  local_98 = &(node->fields).id;
  iVar13 = 0;
  bVar4 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
  ppSVar6 = local_98;
  if (bVar4) {
    ppSVar6 = &"(no-id)";
  }
  pSVar7 = System_String__Concat_5301f10(*ppSVar6," type=",pSVar11,(MethodInfo *)0x0);
  pGVar1 = (node->fields).children;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    iVar13 = (int32_t)pGVar1->max_length;
  }
  local_8c = iVar13;
  pSVar8 = System_Int32__ToString(&local_8c,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_5301f10(pSVar7," children=",pSVar8,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&local_50,"ScreenBuilder.BuildNode",pSVar7,(MethodInfo *)0x0);
  local_78.fields._startMs = local_50.fields._startMs;
  local_78.fields._enabled = local_50.fields._enabled;
  local_78.fields._hotLoop = local_50.fields._hotLoop;
  local_78.fields._26_6_ = local_50.fields._26_6_;
  local_78.fields._area = local_50.fields._area;
  local_78.fields._detail = local_50.fields._detail;
  local_50.fields._area = (System_String_o *)0x0;
  local_50.fields._detail = (System_String_o *)&local_78;
  bVar4 = System_String__IsNullOrEmpty(*local_98,(MethodInfo *)0x0);
  if (bVar4) {
    pSVar7 = System_String__Concat_52f0320("AoTTG ",pSVar11,(MethodInfo *)0x0);
  }
  else {
    pSVar7 = *local_98;
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj != (System_Type_o *)0x0) &&
     (pIVar9 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
     pIVar9 == (Il2CppObject *)0x0)) {
    pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
  }
  if ((int)components->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  components->m_Items[0] = obj;
  Il2CppCodeGenWriteBarrier(components->m_Items);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_691aa60(__this_00,pSVar7,components,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar10 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  if (pUVar10 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__SetParent_692d510(pUVar10,local_80,false,(MethodInfo *)0x0);
  UnityEngine_GameObject__SetActive(__this_00,(node->fields).active,(MethodInfo *)0x0);
  if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = (context->fields).Theme;
  if (pGVar2 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    ThrowNullReferenceException();
  }
  style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar2,(node->fields).style,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542b24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"(no-id)");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&" type=");
    Il2CppMethodInitialized_07542b24 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(*local_98,(MethodInfo *)0x0);
  if (bVar4) {
    local_98 = &"(no-id)";
  }
  pSVar8 = System_String__Concat_5301f10(*local_98," type=",pSVar11,(MethodInfo *)0x0);
  pSVar7 = "ScreenBuilder.BuildNode";
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    ppSVar6 = &"null";
  }
  else {
    ppSVar6 = &(style->fields).name;
  }
  pSVar8 = System_String__Concat_5302810
                     ("build builtin/registry ",pSVar8," style=",
                      ((Gisketch_Aottg2UI_Data_GisketchStyleDefinition_Fields *)ppSVar6)->name,
                      (MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(pSVar7,pSVar8,(MethodInfo *)0x0);
  pGVar3 = (context->fields).Registry;
  if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07542aae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_TryGetValue);
    Il2CppMethodInitialized_07542aae = '\x01';
  }
  local_88 = (Il2CppObject *)0x0;
  bVar4 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
  if (!bVar4) {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar3->fields)._factories;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05385f03:
      ThrowNullReferenceException();
    }
    bVar4 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)pSVar11,&local_88,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_TryGetValue
                      );
    if (bVar4) {
      if (local_88 == (Il2CppObject *)0x0) goto label_05385f03;
      method_00 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)context;
      cVar5 = (*local_88[1].monitor)(local_88[4].klass,__this_00,node);
      if (cVar5 != '\0') goto label_05385c72;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  method_00 = style;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildBuiltin
            (pSVar11,__this_00,node,style,context,view,in_stack_ffffffffffffff48);
label_05385c72:
  Gisketch_Aottg2UI_Actions_GisketchFormField__Attach(__this_00,node,(MethodInfo *)0x0);
  flex = UnityEngine_GameObject__AddComponent_object_
                   (__this_00,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout)
  ;
  pGVar14 = (node->fields).layout;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex(flex,pGVar14,style,(MethodInfo *)method_00);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyAspectRatio(__this_00,style,method_01);
  pGVar14 = (node->fields).layout;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyLayoutOffset(__this_00,pGVar14,method_02);
  if ((node->fields).clip != false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EnsureRectMask(__this_00,(MethodInfo *)pGVar14);
  }
  if ((node->fields).enabled.fields.hasValue != false) {
    bVar4 = System_Nullable_bool___get_Value
                      (&(node->fields).enabled,(MethodInfo_3CCFD40 *)MethodInfo_System_Nullable_bool_get_Value
                      );
    pMVar12 = extraout_RDX;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      pMVar12 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SetInteractable(__this_00,bVar4,pMVar12);
  }
  if (((node->fields).bind != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) &&
     ((context->fields).State != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIBinding);
    if (__this_01 == (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)(node->fields).enter;
    Gisketch_Aottg2UI_State_GisketchUIBinding__Setup
              (__this_01,(node->fields).bind,(context->fields).State,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)method_00,(node->fields).exit,
               (MethodInfo *)0x0);
  }
  bVar4 = System_String__IsNullOrEmpty((node->fields).tooltip,(MethodInfo *)0x0);
  if ((!bVar4) ||
     (bVar4 = System_String__IsNullOrEmpty((node->fields).tooltipKey,(MethodInfo *)0x0),
     pMVar12 = extraout_RDX_01, !bVar4)) {
    __this_02 = UnityEngine_GameObject__AddComponent_object_
                          (__this_00,
                           (MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
    pSVar11 = (node->fields).tooltip;
    pSVar7 = (node->fields).tooltipKey;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pSVar11 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ResolveTooltip
                        (pSVar11,pSVar7,context,(MethodInfo *)method_00);
    if (__this_02 == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
              (__this_02,pSVar11,(context->fields).Theme,(node->fields).tooltipMode,(MethodInfo *)0x0);
    pMVar12 = extraout_RDX_02;
  }
  pGVar2 = (context->fields).Theme;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    pMVar12 = extraout_RDX_03;
  }
  styleMotion = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StyleMotion(style,pGVar2,pMVar12);
  if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  pMVar12 = (MethodInfo *)0x0;
  method_03 = node;
  Gisketch_Aottg2UI_Building_GisketchView__Register(view,node,__this_00,styleMotion,(MethodInfo *)0x0);
  pUVar10 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChildParent(__this_00,(MethodInfo *)method_03);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildChildren(node,pUVar10,context,view,pMVar12);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_78,(MethodInfo *)0x0);
  return __this_00;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$EnsureRectMask
// il2cpp: UnityEngine_UI_RectMask2D_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EnsureRectMask (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x538f0d0

UnityEngine_UI_RectMask2D_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EnsureRectMask
          (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_RectMask2D_o *pUVar2;
  
  if (Il2CppMethodInitialized_07542b1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b1d = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return pUVar2;
  }
  pUVar2 = UnityEngine_GameObject__AddComponent_object_
                     (go,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
  return pUVar2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SetInteractable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SetInteractable (UnityEngine_GameObject_o* go, bool interactable, const MethodInfo* method);
// 0x538f180

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SetInteractable
               (UnityEngine_GameObject_o *go,bool interactable,MethodInfo *method)

{
  uint uVar1;
  System_Object_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_07542b1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
    Il2CppMethodInitialized_07542b1e = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pSVar2 = UnityEngine_GameObject__GetComponentsInChildren_object_
                       (go,true,(MethodInfo_353C0B0 *)
                                MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
    if (pSVar2 != (System_Object_array *)0x0) {
      uVar1 = (uint)pSVar2->max_length;
      if (0 < (int)uVar1) {
        uVar3 = 0;
        do {
          if (uVar1 <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_UI_Selectable_o *)pSVar2->m_Items[(int)uVar3] == (UnityEngine_UI_Selectable_o *)0x0
             ) goto label_0538f20e;
          UnityEngine_UI_Selectable__set_interactable
                    ((UnityEngine_UI_Selectable_o *)pSVar2->m_Items[(int)uVar3],interactable,(MethodInfo *)0x0
                    );
          uVar3 = uVar3 + 1;
          uVar1 = (uint)pSVar2->max_length;
        } while ((int)uVar3 < (int)uVar1);
      }
      return;
    }
  }
label_0538f20e:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChildParent
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChildParent (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x538f220

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChildParent(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Building_GisketchChildHost_o *x;
  UnityEngine_Transform_o *pUVar2;
  
  if (Il2CppMethodInitialized_07542b1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchChildHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542b1f = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) {
label_0538f2ea:
    ThrowNullReferenceException();
  }
  x = UnityEngine_GameObject__GetComponent_object_
                (go,(MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_GisketchChildHost);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (x == (Gisketch_Aottg2UI_Building_GisketchChildHost_o *)0x0) goto label_0538f2ea;
    pUVar2 = (x->fields)._Parent_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      return (x->fields)._Parent_k__BackingField;
    }
  }
  pUVar2 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
  return pUVar2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildChildren
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildChildren (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x538f2f0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildChildren
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_Transform_o *parent,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node_00;
  ulong uVar2;
  ulong uVar3;
  
  if (Il2CppMethodInitialized_07542b20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_07542b20 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar1 = (node->fields).children;
  if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) && (0 < (int)pGVar1->max_length))
  {
    uVar2 = pGVar1->max_length & 0xffffffff;
    uVar3 = 0;
    do {
      if (uVar2 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      node_00 = pGVar1->m_Items[uVar3];
      if (node_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode(node_00,parent,context,view,method);
        uVar2 = (ulong)(uint)pGVar1->max_length;
      }
      uVar3 = uVar3 + 1;
    } while ((long)uVar3 < (long)(int)uVar2);
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$EqualsType
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EqualsType (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x537cb30

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EqualsType
               (System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_52ffe30(a,b,5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ScreenLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ScreenLabel (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, const MethodInfo* method);
// 0x538dcf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538dd31: jmp 0x538dd3a

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ScreenLabel
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *pGVar2;
  
  if (Il2CppMethodInitialized_07542b21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07542b21 = '\x01';
  }
  if (screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *)&"null";
  }
  else {
    bVar1 = System_String__IsNullOrEmpty((screen->fields).id,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_Fields *)&(screen->fields).title;
    if (!bVar1) {
      pGVar2 = &screen->fields;
    }
  }
  return pGVar2->id;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$OverlayLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__OverlayLabel (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, const MethodInfo* method);
// 0x538e670
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x538e6b1: jmp 0x538e6ba

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__OverlayLabel
          (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *pGVar2;
  
  if (Il2CppMethodInitialized_07542b22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07542b22 = '\x01';
  }
  if (overlay == (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&"null";
  }
  else {
    bVar1 = System_String__IsNullOrEmpty((overlay->fields).id,(MethodInfo *)0x0);
    pGVar2 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_Fields *)&(overlay->fields).title;
    if (!bVar1) {
      pGVar2 = &overlay->fields;
    }
  }
  return pGVar2->id;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$RootLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RootLabel (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x538e890

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RootLabel(UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07542b23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_07542b23 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
    return pSVar2;
  }
  return "null";
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$NodeLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__NodeLabel (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* type, const MethodInfo* method);
// 0x538f040

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__NodeLabel
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o **ppSVar3;
  
  if (Il2CppMethodInitialized_07542b24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"(no-id)");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&" type=");
    Il2CppMethodInitialized_07542b24 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return "null";
  }
  bVar1 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
  if (bVar1) {
    ppSVar3 = &"(no-id)";
  }
  else {
    ppSVar3 = &(node->fields).id;
  }
  pSVar2 = System_String__Concat_5301f10(*ppSVar3," type=",type,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChildCount
// il2cpp: int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChildCount (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x538dd50

int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChildCount
                  (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  int32_t iVar2;
  
  iVar2 = 0;
  if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     (pGVar1 = (node->fields).children, pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0))
  {
    iVar2 = (int32_t)pGVar1->max_length;
  }
  return iVar2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$MarkEditorPreview
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__MarkEditorPreview (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x5383c00

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__MarkEditorPreview
               (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___cctor (const MethodInfo* method);
// 0x538f3c0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___cctor(MethodInfo *method)

{
  intptr_t iVar1;
  
  if (Il2CppMethodInitialized_07542b25 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch.ScreenBuilder.BuildView");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch.ScreenBuilder.SettleLayout");
    Il2CppMethodInitialized_07542b25 = '\x01';
  }
  iVar1 = Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__CreateMarker
                    ("Gisketch.ScreenBuilder.BuildView",1,0,0,(MethodInfo *)0x0);
  (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->BuildViewMarker).fields.m_Ptr =
       iVar1;
  iVar1 = Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__CreateMarker
                    ("Gisketch.ScreenBuilder.SettleLayout",1,0,0,(MethodInfo *)0x0);
  (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->SettleLayoutMarker).fields.m_Ptr
       = iVar1;
  return;
}


