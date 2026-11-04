// Type: Gisketch.Aottg2UI.Building.GisketchScreenBuilder
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchScreenBuilder.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass19_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0___ctor(Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass19_0$$<BuildDropdown>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0___BuildDropdown_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x18190a890

void
Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0___BuildDropdown_b__0(Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  bool bVar2;
  
  pGVar1 = (__this->fields).sound;
  if (pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0) {
    if (Il2CppMethodInitialized_18434220f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
      Il2CppMethodInitialized_18434220f = '\x01';
    }
    bVar2 = System_String__op_Equality((pGVar1->fields)._action,"overlay.close",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play((uint)bVar2,(MethodInfo *)0x0);
    __this_00 = (__this->fields).control;
    if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__Open(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass1_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0___ctor(Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass1_0$$<BuildButton>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0___BuildButton_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o* __this, const MethodInfo* method);
// 0x18190a930
// eh: try 0x18190aa24..0x18190abf3 -> pad 0x183315a20 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18190ab36: nop 
// asm:   0x18190ab9e: xor edx, edx
// asm:   0x18190aba0: lea rcx, [rsp + 0x48]
// asm:   0x18190aba5: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x18190abaa: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18190abaf: test rcx, rcx
// asm:   0x18190abb2: jne 0x18190abf3
// asm:   0x18190abf3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0___BuildButton_b__0
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *pGVar3;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar4;
  undefined8 uVar5;
  bool bVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar8;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_70;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_50;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_28;
  
  if (Il2CppMethodInitialized_1843421a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"Button.Click");
    il2cpp_codegen_initialize_runtime_metadata(&" action=");
    il2cpp_codegen_initialize_runtime_metadata(&"ignored motion active ");
    Il2CppMethodInitialized_1843421a7 = '\x01';
  }
  local_70.fields._area = (System_String_o *)0x0;
  local_70.fields._detail = (System_String_o *)0x0;
  local_70.fields._startMs = 0;
  local_70.fields._enabled = false;
  local_70.fields._hotLoop = false;
  local_70.fields._26_6_ = 0;
  pGVar1 = (__this->fields).node;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar7 = System_String__Concat_1969b70
                     ((pGVar1->fields).id," action=",(pGVar1->fields).action,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar8 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_28,"Button.Click",pSVar7,(MethodInfo *)0x0);
  local_70.fields._area = (pGVar8->fields)._area;
  local_70.fields._detail = (pGVar8->fields)._detail;
  local_70.fields._startMs = (pGVar8->fields)._startMs;
  local_70.fields._enabled = (pGVar8->fields)._enabled;
  local_70.fields._hotLoop = (pGVar8->fields)._hotLoop;
  local_70.fields._26_6_ = *(undefined6 *)&(pGVar8->fields).field_0x1a;
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  bVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)0x0);
  if (bVar6) {
    pGVar1 = (__this->fields).node;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar7 = System_String__Concat_1969e50("ignored motion active ",(pGVar1->fields).id,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("Button.Click",pSVar7,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_70,(MethodInfo *)0x0);
  }
  else {
    __this_00 = (__this->fields).sound;
    if (__this_00 == (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Actions_GisketchButtonSound__PlayClick(__this_00,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).node;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar6 = System_String__IsNullOrEmpty((pGVar1->fields).action,(MethodInfo *)0x0);
    if (!bVar6) {
      pGVar2 = (__this->fields).context;
      if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((pGVar2->fields).Actions != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
        if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
          ThrowNullReferenceException();
        }
        pGVar1 = (__this->fields).node;
        if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          ThrowNullReferenceException();
        }
        pGVar3 = (__this->fields).inputSource;
        if (pGVar3 == (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *)0x0) {
          ThrowNullReferenceException();
        }
        pGVar4 = (pGVar2->fields).Actions;
        pSVar7 = (pGVar1->fields).action;
        local_50.fields.ElementId = (System_String_o *)0x0;
        local_50.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
        local_50.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
        local_50.fields.InputSource = 0;
        local_50.fields._28_4_ = 0;
        Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_190b9a0
                  (&local_50,(pGVar1->fields).id,(__this->fields).go,pGVar1,
                   (pGVar3->fields)._Source_k__BackingField,(MethodInfo *)0x0);
        uVar5 = local_50.fields._24_8_;
        if (pGVar4 == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_28.fields._area._0_4_ = local_50.fields.ElementId._0_4_;
        local_28.fields._area._4_4_ = local_50.fields.ElementId._4_4_;
        local_28.fields._detail._0_4_ = local_50.fields.GameObject._0_4_;
        local_28.fields._detail._4_4_ = local_50.fields.GameObject._4_4_;
        local_28.fields._startMs._0_4_ = local_50.fields.Node._0_4_;
        local_28.fields._startMs._4_4_ = local_50.fields.Node._4_4_;
        local_28.fields._enabled = (bool)(undefined1)local_50.fields.InputSource;
        local_28.fields._hotLoop = (bool)local_50.fields.InputSource._1_1_;
        local_28.fields._26_2_ = local_50.fields.InputSource._2_2_;
        local_28.fields._28_4_ = local_50.fields._28_4_;
        local_50.fields._24_8_ = uVar5;
        il2cpp_runtime_helper_18022f820(0,TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,pGVar4,pSVar7,&local_28);
      }
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_70,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___ctor(Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$<BuildSelect>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18190a890

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__0
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar1;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  bool bVar2;
  
  pGVar1 = (__this->fields).sound;
  if (pGVar1 != (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0) {
    if (Il2CppMethodInitialized_18434220f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
      il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
      Il2CppMethodInitialized_18434220f = '\x01';
    }
    bVar2 = System_String__op_Equality((pGVar1->fields)._action,"overlay.close",(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchUiSounds);
    }
    Gisketch_Aottg2UI_Actions_GisketchUiSounds__Play((uint)bVar2,(MethodInfo *)0x0);
    __this_00 = (__this->fields).control;
    if (__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
      Gisketch_Aottg2UI_Actions_AottgChoiceControl__Open(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$<BuildSelect>b__1
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__1 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18190ac00

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__1
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this_01;
  int32_t index;
  
  __this_00 = (__this->fields).control;
  if ((__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) &&
     (__this_01 = (__this_00->fields)._options,
     __this_01 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0)) {
    index = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__NextEnabledIndex
                      (__this_01,(__this_00->fields)._index,-1,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this_00,index,1,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass20_0$$<BuildSelect>b__2
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__2 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18190ac50

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___BuildSelect_b__2
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *__this_00;
  Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *__this_01;
  int32_t index;
  
  __this_00 = (__this->fields).control;
  if ((__this_00 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) &&
     (__this_01 = (__this_00->fields)._options,
     __this_01 != (Gisketch_Aottg2UI_Actions_AottgChoiceOptions_o *)0x0)) {
    index = Gisketch_Aottg2UI_Actions_AottgChoiceOptions__NextEnabledIndex
                      (__this_01,(__this_00->fields)._index,1,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Actions_AottgChoiceControl__SetIndex(__this_00,index,1,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass41_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0___ctor(Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass41_0$$<BuildInputField>b__0
// il2cpp: uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0___BuildInputField_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o* __this, System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x18190b150

uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0___BuildInputField_b__0
                   (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o *__this,
                   System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  bool multiline;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *type;
  uint16_t uVar2;
  
  if (Il2CppMethodInitialized_1843421a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_1843421a8 = '\x01';
  }
  pGVar1 = (__this->fields).node;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    multiline = (__this->fields).multiline;
    type = (pGVar1->fields).inputType;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    uVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateInput
                      (type,multiline,text,charIndex,addedChar,(MethodInfo *)0x0);
    return uVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass84_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0___ctor(Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass84_0$$<BuildSpriteButton>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0___BuildSpriteButton_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o* __this, const MethodInfo* method);
// 0x18190b460

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0___BuildSpriteButton_b__0
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o *__this,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *pGVar3;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar4;
  System_String_o *pSVar5;
  bool bVar6;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_1843421a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    Il2CppMethodInitialized_1843421a9 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Tweening_GisketchMotionDriver)
    ;
  }
  bVar6 = Gisketch_Aottg2UI_Tweening_GisketchMotionDriver__get_HasActive((MethodInfo *)0x0);
  if (bVar6) {
    return;
  }
  __this_00 = (__this->fields).sound;
  if (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0) {
    Gisketch_Aottg2UI_Actions_GisketchButtonSound__PlayClick(__this_00,(MethodInfo *)0x0);
    pGVar1 = (__this->fields).node;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      bVar6 = System_String__IsNullOrEmpty((pGVar1->fields).action,(MethodInfo *)0x0);
      if (!bVar6) {
        pGVar2 = (__this->fields).context;
        if (pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_18190b5bc;
        if ((pGVar2->fields).Actions != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
          if (((pGVar2 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
              (pGVar1 = (__this->fields).node,
              pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) &&
             (pGVar3 = (__this->fields).inputSource,
             pGVar3 != (Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *)0x0)) {
            pGVar4 = (pGVar2->fields).Actions;
            pSVar5 = (pGVar1->fields).action;
            local_48.fields.ElementId = (System_String_o *)0x0;
            local_48.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
            local_48.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
            local_48.fields.InputSource = 0;
            local_48.fields._28_4_ = 0;
            Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_190b9a0
                      (&local_48,(pGVar1->fields).id,(__this->fields).go,pGVar1,
                       (pGVar3->fields)._Source_k__BackingField,(MethodInfo *)0x0);
            if (pGVar4 != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
              local_28 = local_48.fields.ElementId._0_4_;
              uStack_24 = local_48.fields.ElementId._4_4_;
              uStack_20 = local_48.fields.GameObject._0_4_;
              uStack_1c = local_48.fields.GameObject._4_4_;
              local_18 = local_48.fields.Node._0_4_;
              uStack_14 = local_48.fields.Node._4_4_;
              iStack_10 = local_48.fields.InputSource;
              uStack_c = local_48.fields._28_4_;
              il2cpp_runtime_helper_18022f820(0,TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,pGVar4,pSVar5,
                            &local_28);
              return;
            }
          }
          ThrowNullReferenceException();
        }
      }
      return;
    }
  }
label_18190b5bc:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass86_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0___ctor(Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass86_0$$<BuildToggle>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0___BuildToggle_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o* __this, bool __, const MethodInfo* method);
// 0x18190b5d0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0___BuildToggle_b__0
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o *__this,bool __,
               MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar3;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar4;
  bool bVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_1843421aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_1843421aa = '\x01';
  }
  pUVar1 = (__this->fields).toggle;
  if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
    pSVar6 = "false";
    if ((pUVar1->fields).m_IsOn != false) {
      pSVar6 = "true";
    }
    pGVar2 = (__this->fields).node;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).value = pSVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value,pSVar6);
      pGVar2 = (__this->fields).node;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        bVar5 = System_String__IsNullOrEmpty((pGVar2->fields).action,(MethodInfo *)0x0);
        if (!bVar5) {
          pGVar3 = (__this->fields).context;
          if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_18190b728;
          if ((pGVar3->fields).Actions != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
            if ((pGVar3 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
               (pGVar2 = (__this->fields).node,
               pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
              pSVar6 = (pGVar2->fields).action;
              pGVar4 = (pGVar3->fields).Actions;
              local_48.fields.ElementId = (System_String_o *)0x0;
              local_48.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
              local_48.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
              local_48.fields.InputSource = 0;
              local_48.fields._28_4_ = 0;
              Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                        (&local_48,(pGVar2->fields).id,(__this->fields).go,pGVar2,(MethodInfo *)0x0);
              if (pGVar4 != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
                local_28 = local_48.fields.ElementId._0_4_;
                uStack_24 = local_48.fields.ElementId._4_4_;
                uStack_20 = local_48.fields.GameObject._0_4_;
                uStack_1c = local_48.fields.GameObject._4_4_;
                local_18 = local_48.fields.Node._0_4_;
                uStack_14 = local_48.fields.Node._4_4_;
                iStack_10 = local_48.fields.InputSource;
                uStack_c = local_48.fields._28_4_;
                il2cpp_runtime_helper_18022f820(0,TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,pGVar4,pSVar6,
                              &local_28);
                return;
              }
            }
            ThrowNullReferenceException();
          }
        }
        return;
      }
    }
  }
label_18190b728:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass87_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0___ctor (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0___ctor(Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder.<>c__DisplayClass87_0$$<BuildSwitch>b__0
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0___BuildSwitch_b__0 (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o* __this, bool __, const MethodInfo* method);
// 0x18190b740

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0___BuildSwitch_b__0
               (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o *__this,bool __,
               MethodInfo *method)

{
  UnityEngine_UI_Toggle_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar3;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *pGVar4;
  bool bVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_48;
  undefined4 local_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 local_18;
  undefined4 uStack_14;
  int32_t iStack_10;
  undefined4 uStack_c;
  
  if (Il2CppMethodInitialized_1843421ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler);
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_1843421ab = '\x01';
  }
  pUVar1 = (__this->fields).toggle;
  if (pUVar1 != (UnityEngine_UI_Toggle_o *)0x0) {
    pSVar6 = "false";
    if ((pUVar1->fields).m_IsOn != false) {
      pSVar6 = "true";
    }
    pGVar2 = (__this->fields).node;
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).value = pSVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value,pSVar6);
      pGVar2 = (__this->fields).node;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        bVar5 = System_String__IsNullOrEmpty((pGVar2->fields).action,(MethodInfo *)0x0);
        if (!bVar5) {
          pGVar3 = (__this->fields).context;
          if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_18190b898;
          if ((pGVar3->fields).Actions != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
            if ((pGVar3 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
               (pGVar2 = (__this->fields).node,
               pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
              pSVar6 = (pGVar2->fields).action;
              pGVar4 = (pGVar3->fields).Actions;
              local_48.fields.ElementId = (System_String_o *)0x0;
              local_48.fields.GameObject = (UnityEngine_GameObject_o *)0x0;
              local_48.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0;
              local_48.fields.InputSource = 0;
              local_48.fields._28_4_ = 0;
              Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
                        (&local_48,(pGVar2->fields).id,(__this->fields).go,pGVar2,(MethodInfo *)0x0);
              if (pGVar4 != (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
                local_28 = local_48.fields.ElementId._0_4_;
                uStack_24 = local_48.fields.ElementId._4_4_;
                uStack_20 = local_48.fields.GameObject._0_4_;
                uStack_1c = local_48.fields.GameObject._4_4_;
                local_18 = local_48.fields.Node._0_4_;
                uStack_14 = local_48.fields.Node._4_4_;
                iStack_10 = local_48.fields.InputSource;
                uStack_c = local_48.fields._28_4_;
                il2cpp_runtime_helper_18022f820(0,TypeInfo_Gisketch_Aottg2UI_Actions_IGisketchActionHandler,pGVar4,pSVar6,
                              &local_28);
                return;
              }
            }
            ThrowNullReferenceException();
          }
        }
        return;
      }
    }
  }
label_18190b898:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildBuiltin
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildBuiltin (System_String_o* type, UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818de3f0
// asm: 148 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818deb63: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818deb6b: xor ebx, ebx
// asm:   0x1818deb6d: mov r8, rbp
// asm:   0x1818deb70: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1818deb75: mov rdx, rdi
// asm:   0x1818deb78: mov rcx, rsi
// asm:   0x1818deb7b: call 0x1818dcca0  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel()
// asm:   0x1818deb80: jmp 0x1818de880
// asm:   0x1818deb8e: xor r8d, r8d
// asm:   0x1818deb91: xor edx, edx
// asm:   0x1818deb93: mov rcx, rsi
// asm:   0x1818deb96: call 0x182f1a770  ; UnityEngine_GameObject__SetActive()
// asm:   0x1818deb9b: jmp 0x1818de880
// asm:   0x1818debae: mov rax, qword ptr [rsp + 0x88]
// asm:   0x1818debb6: xor ebx, ebx
// asm:   0x1818debb8: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818debc0: mov r8, rbp
// asm:   0x1818debc3: mov qword ptr [rsp + 0x28], rbx
// asm:   0x1818debc8: mov rdx, rdi
// asm:   0x1818debcb: mov rcx, rsi
// asm:   0x1818debce: mov qword ptr [rsp + 0x20], rax
// asm:   0x1818debd3: call 0x1818e4060  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSelect()
// asm:   0x1818debd8: jmp 0x1818de880
// asm:   0x1818debeb: mov rax, qword ptr [rsp + 0x88]
// asm:   0x1818debf3: xor ebx, ebx
// asm:   0x1818debf5: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818debfd: mov r8, rbp
// asm:   0x1818dec00: mov qword ptr [rsp + 0x28], rbx
// asm:   0x1818dec05: mov rdx, rdi
// asm:   0x1818dec08: mov rcx, rsi
// asm:   0x1818dec0b: mov qword ptr [rsp + 0x20], rax
// asm:   0x1818dec10: call 0x1818e11a0  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildDropdown()
// asm:   0x1818dec15: jmp 0x1818de880
// asm:   0x1818dec28: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818dec30: xor ebx, ebx
// asm:   0x1818dec32: mov r8, rbp
// asm:   0x1818dec35: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1818dec3a: mov rdx, rdi
// asm:   0x1818dec3d: mov rcx, rsi
// asm:   0x1818dec40: call 0x1818e3740  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScaleBox()
// asm:   0x1818dec45: jmp 0x1818de880
// asm:   0x1818dec74: mov r9, qword ptr [rdi + 0x20]
// asm:   0x1818dec78: xor ebx, ebx
// asm:   0x1818dec7a: mov r8, qword ptr [rdi + 0x60]
// asm:   0x1818dec7e: mov rcx, rax
// asm:   0x1818dec81: mov rdx, qword ptr [rdi + 0xb0]
// asm:   0x1818dec88: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1818dec8d: call 0x18190dd70  ; Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Setup()
// asm:   0x1818dec92: jmp 0x1818de880
// asm:   0x1818deca5: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818decad: xor ebx, ebx
// asm:   0x1818decaf: mov r8, rbp
// asm:   0x1818decb2: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1818decb7: mov rdx, rdi
// asm:   0x1818decba: mov rcx, rsi
// asm:   0x1818decbd: call 0x1818e3a50  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScrollView()
// asm:   0x1818decc2: jmp 0x1818de880
// asm:   0x1818ded4d: mov r14, rax
// asm:   0x1818ded50: mov ebp, ebx
// asm:   0x1818ded52: mov eax, ebx
// asm:   0x1818dee12: mov r8, qword ptr [rsp + 0x80]
// asm:   0x1818dee1a: xor r9d, r9d
// asm:   0x1818dee1d: mov rdx, rbp
// asm:   0x1818dee20: mov rcx, rsi
// asm:   0x1818dee23: call 0x1818e4540  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSkeleton()
// asm:   0x1818dee28: jmp 0x1818de880
// asm:   0x1818dee5c: mov rdi, qword ptr [rip + 0x2813e9d]  ; "surface"
// asm:   0x1818dee78: xor ebx, ebx
// asm:   0x1818dee7a: mov r9, rdi
// asm:   0x1818dee7d: mov qword ptr [rsp + 0x28], rbx
// asm:   0x1818dee82: mov r8, r14
// asm:   0x1818dee85: mov rdx, rbp
// asm:   0x1818dee88: mov byte ptr [rsp + 0x20], bl
// asm:   0x1818dee8c: mov rcx, rsi
// asm:   0x1818dee8f: call 0x1818dc710  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage()
// asm:   0x1818dee94: jmp 0x1818de880
// asm:   0x1818deeae: mov rdx, qword ptr [rip + 0x2809673]  ; "Radio"
// asm:   0x1818deeb5: xor r9d, r9d
// asm:   0x1818deeb8: mov r8d, 5
// asm:   0x1818deebe: mov rcx, rbx
// asm:   0x1818deec1: call 0x18196c550  ; System_String__Equals()
// asm:   0x1818deec6: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818deece: xor ebx, ebx
// asm:   0x1818deed0: mov qword ptr [rsp + 0x28], rbx
// asm:   0x1818deed5: mov r8, rbp
// asm:   0x1818deed8: mov rdx, rdi
// asm:   0x1818deedb: mov byte ptr [rsp + 0x20], al
// asm:   0x1818deedf: mov rcx, rsi
// asm:   0x1818deee2: call 0x1818e6450  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildToggle()
// asm:   0x1818deee7: jmp 0x1818de880
// asm:   0x1818deefa: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818def02: xor ebx, ebx
// asm:   0x1818def04: mov r8, rbp
// asm:   0x1818def07: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1818def0c: mov rdx, rdi
// asm:   0x1818def0f: mov rcx, rsi
// asm:   0x1818def12: call 0x1818e6090  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSwitch()
// asm:   0x1818def17: jmp 0x1818de880
// asm:   0x1818def2a: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818def32: xor ebx, ebx
// asm:   0x1818def34: mov r8, rbp
// asm:   0x1818def37: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1818def3c: mov rdx, rdi
// asm:   0x1818def3f: mov rcx, rsi
// asm:   0x1818def42: call 0x1818e0eb0  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildColorSwatch()
// asm:   0x1818def47: jmp 0x1818de880
// asm:   0x1818def5a: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818def62: xor ebx, ebx
// asm:   0x1818def64: mov r8, rbp
// asm:   0x1818def67: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1818def6c: mov rdx, rdi
// asm:   0x1818def6f: mov rcx, rsi
// asm:   0x1818def72: call 0x1818e4790  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSlider()
// asm:   0x1818def77: jmp 0x1818de880
// asm:   0x1818defa6: mov rax, qword ptr [rsp + 0x88]
// asm:   0x1818defae: xor ebx, ebx
// asm:   0x1818defb0: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818defb8: mov r8, rbp
// asm:   0x1818defbb: mov qword ptr [rsp + 0x28], rbx
// asm:   0x1818defc0: mov rdx, rdi
// asm:   0x1818defc3: mov rcx, rsi
// asm:   0x1818defc6: mov qword ptr [rsp + 0x20], rax
// asm:   0x1818defcb: call 0x1818e3c60  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSearchPalette()
// asm:   0x1818defd0: jmp 0x1818de880
// asm:   0x1818df017: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818df01f: xor ebx, ebx
// asm:   0x1818df021: mov r8, rbp
// asm:   0x1818df024: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1818df029: mov rdx, rdi
// asm:   0x1818df02c: mov rcx, rsi
// asm:   0x1818df02f: call 0x1818e4c90  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteButton()
// asm:   0x1818df034: jmp 0x1818de880
// asm:   0x1818df047: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818df04f: xor ebx, ebx
// asm:   0x1818df051: mov r8, rbp
// asm:   0x1818df054: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1818df059: mov rdx, rdi
// asm:   0x1818df05c: mov rcx, rsi
// asm:   0x1818df05f: call 0x1818e0050  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButton()
// asm:   0x1818df064: jmp 0x1818de880
// asm:   0x1818df077: mov r9, qword ptr [rsp + 0x80]
// asm:   0x1818df07f: xor ebx, ebx
// asm:   0x1818df081: mov r8, rbp
// asm:   0x1818df084: mov qword ptr [rsp + 0x20], rbx
// asm:   0x1818df089: mov rdx, rdi
// asm:   0x1818df08c: mov rcx, rsi
// asm:   0x1818df08f: call 0x1818e1580  ; Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildIcon()
// asm:   0x1818df094: jmp 0x1818de880

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildBuiltin
               (System_String_o *type,UnityEngine_GameObject_o *go,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *step;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  bool bVar3;
  Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *__this;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this_00;
  TMPro_TextMeshProUGUI_o *text;
  uint uVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_184342137 == '\0') {
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
    Il2CppMethodInitialized_184342137 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar3 = System_String__Equals_196c550(type,"Text",5,(MethodInfo *)0x0);
  if (bVar3) {
    if (go == (UnityEngine_GameObject_o *)0x0) {
label_1818df0e7:
      ThrowNullReferenceException();
    }
    text = UnityEngine_GameObject__AddComponent_object_
                     (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText(text,node,style,context,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(type,"Icon",5,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildIcon(go,node,style,context,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(type,"Button",5,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButton(go,node,style,context,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(type,"SpriteButton",5,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteButton
                (go,node,style,context,(MethodInfo *)0x0);
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(type,"InputField",5,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = false;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_196c550(type,"SearchPalette",5,(MethodInfo *)0x0);
      if (bVar3) {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSearchPalette
                  (go,node,style,context,view,(MethodInfo *)0x0);
        return;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_196c550(type,"TextArea",5,(MethodInfo *)0x0);
      if (!bVar3) {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_196c550(type,"Slider",5,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSlider
                    (go,node,style,context,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_196c550(type,"ColorSwatch",5,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildColorSwatch
                    (go,node,style,context,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_196c550(type,"Switch",5,(MethodInfo *)0x0);
        if (bVar3) {
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSwitch
                    (go,node,style,context,(MethodInfo *)0x0);
          return;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_196c550(type,"Checkbox",5,(MethodInfo *)0x0);
        if (!bVar3) {
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          bVar3 = System_String__Equals_196c550(type,"Radio",5,(MethodInfo *)0x0);
          if (!bVar3) {
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            bVar3 = System_String__Equals_196c550(type,"Image",5,(MethodInfo *)0x0);
            if (bVar3) {
              if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818df0e7;
              bVar3 = System_String__IsNullOrEmpty((node->fields).sprite,(MethodInfo *)0x0);
              if (!bVar3) {
                if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                }
                Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildStandaloneSpriteImage
                          (go,node,style,context,(MethodInfo *)0x0);
                return;
              }
            }
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            bVar3 = System_String__Equals_196c550(type,"Image",5,(MethodInfo *)0x0);
            if (!bVar3) {
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              }
              bVar3 = System_String__Equals_196c550(type,"Divider",5,(MethodInfo *)0x0);
              if (!bVar3) {
                if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                }
                bVar3 = System_String__Equals_196c550(type,"Skeleton",5,(MethodInfo *)0x0);
                if (bVar3) {
                  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                  }
                  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSkeleton
                            (go,style,context,(MethodInfo *)0x0);
                  return;
                }
                if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                }
                bVar3 = System_String__Equals_196c550(type,"Stepper",5,(MethodInfo *)0x0);
                if (bVar3) {
                  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                  }
                  if (Il2CppMethodInitialized_18434213c == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata
                              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                    Il2CppMethodInitialized_18434213c = '\x01';
                  }
                  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                  }
                  uVar4 = 0;
                  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel
                            (go,node,style,context,(MethodInfo *)0x0);
                  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                    if ((node->fields).steps ==
                        (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0) {
                      return;
                    }
                    pGVar1 = (node->fields).steps;
                    if (pGVar1->max_length == 0) {
                      return;
                    }
                    do {
                      if ((int)pGVar1->max_length <= (int)uVar4) {
                        return;
                      }
                      if ((uint)pGVar1->max_length <= uVar4) {
label_1818df0ed:
                        ThrowIndexOutOfRangeException();
                      }
                      pSVar5 = (node->fields).style;
                      step = pGVar1->m_Items[(int)uVar4];
                      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                      }
                      node_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StepNode
                                          (step,pSVar5,(MethodInfo *)0x0);
                      if (go == (UnityEngine_GameObject_o *)0x0) break;
                      parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
                      __this_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                                            (node_00,parent,context,view,(MethodInfo *)0x0);
                      pGVar2 = (node->fields).steps;
                      if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0) break;
                      if ((int)pGVar2->max_length == 0) goto label_1818df0ed;
                      if (__this_00 == (UnityEngine_GameObject_o *)0x0) break;
                      UnityEngine_GameObject__SetActive
                                (__this_00,step == pGVar2->m_Items[0],(MethodInfo *)0x0);
                      uVar4 = uVar4 + 1;
                    } while( true );
                  }
                }
                else {
                  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                  }
                  bVar3 = System_String__Equals_196c550(type,"ScrollView",5,(MethodInfo *)0x0);
                  if (bVar3) {
                    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                    }
                    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScrollView
                              (go,node,style,context,(MethodInfo *)0x0);
                    return;
                  }
                  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                  }
                  bVar3 = System_String__Equals_196c550(type,"SectionNavigator",5,(MethodInfo *)0x0);
                  if (bVar3) {
                    if (((go != (UnityEngine_GameObject_o *)0x0) &&
                        (__this = UnityEngine_GameObject__AddComponent_object_
                                            (go,(MethodInfo_6F4D60 *)
                                                MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSectionNavigator
                                            ), node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)
                        ) && (__this != (Gisketch_Aottg2UI_Actions_GisketchSectionNavigator_o *)0x0)) {
                      Gisketch_Aottg2UI_Actions_GisketchSectionNavigator__Setup
                                (__this,(node->fields).options,(node->fields).value,(node->fields).text,
                                 (MethodInfo *)0x0);
                      return;
                    }
                  }
                  else {
                    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                    }
                    bVar3 = System_String__Equals_196c550(type,"ScaleBox",5,(MethodInfo *)0x0);
                    if (bVar3) {
                      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                      }
                      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScaleBox
                                (go,node,style,context,(MethodInfo *)0x0);
                      return;
                    }
                    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                    }
                    bVar3 = System_String__Equals_196c550(type,"Dropdown",5,(MethodInfo *)0x0);
                    if (bVar3) {
                      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                      }
                      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildDropdown
                                (go,node,style,context,view,(MethodInfo *)0x0);
                      return;
                    }
                    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                    }
                    bVar3 = System_String__Equals_196c550(type,"Select",5,(MethodInfo *)0x0);
                    if (bVar3) {
                      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                      }
                      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSelect
                                (go,node,style,context,view,(MethodInfo *)0x0);
                      return;
                    }
                    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                        cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                    }
                    bVar3 = System_String__Equals_196c550(type,"FormDraft",5,(MethodInfo *)0x0);
                    if (!bVar3) {
                      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                      }
                      bVar3 = System_String__Equals_196c550(type,"Spacer",5,(MethodInfo *)0x0);
                      if (bVar3) {
                        return;
                      }
                      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                      }
                      bVar3 = System_String__Equals_196c550(type,"Stack",5,(MethodInfo *)0x0);
                      if (bVar3) {
                        return;
                      }
                      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                      }
                      bVar3 = System_String__Equals_196c550(type,"List",5,(MethodInfo *)0x0);
                      if (bVar3) {
                        return;
                      }
                      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                          cctor_finished_or_no_cctor == 0) {
                        il2cpp_codegen_runtime_class_init
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                      }
                      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel
                                (go,node,style,context,(MethodInfo *)0x0);
                      return;
                    }
                    if (go != (UnityEngine_GameObject_o *)0x0) {
                      UnityEngine_GameObject__SetActive(go,false,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
                goto label_1818df0e7;
              }
            }
            if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
              theme = (context->fields).Theme;
              pSVar5 = "surface";
              if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
                 (bVar3 = System_String__IsNullOrEmpty((style->fields).background,(MethodInfo *)0x0),
                 pSVar5 = "surface", !bVar3)) {
                pSVar5 = (style->fields).background;
              }
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
              }
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                        (go,style,theme,pSVar5,false,(MethodInfo *)0x0);
              return;
            }
            goto label_1818df0e7;
          }
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_196c550(type,"Radio",5,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildToggle
                  (go,node,style,context,bVar3,(MethodInfo *)0x0);
        return;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = true;
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildInputField
              (go,node,style,context,bVar3,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButton
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButton (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e0050
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e0388: mov rbx, qword ptr [rip + 0x27d5f39]  ; "primary"
// asm:   0x1818e03cb: mov r14, rax
// asm:   0x1818e03ce: mov qword ptr [rsp + 0x48], rax
// asm:   0x1818e03d3: mov rbp, r13
// asm:   0x1818e0494: mov rax, r14
// asm:   0x1818e05e3: mov rcx, r13
// asm:   0x1818e0bf6: mov rsi, qword ptr [rsp + 0x48]

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButton
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  UnityEngine_Sprite_o *maskSprite;
  UnityEngine_Events_UnityEvent_o *__this;
  Il2CppType *handle;
  bool bVar5;
  byte bVar6;
  bool bVar7;
  bool bVar8;
  bool bVar9;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o *object;
  UnityEngine_UI_Image_o *image;
  System_Nullable_float__Fields SVar10;
  Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *value;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar11;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_Image_o *pUVar12;
  Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *__this_01;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_02;
  UnityEngine_RectTransform_o *parent;
  Gisketch_Aottg2UI_Building_GisketchChildHost_o *pGVar13;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar14;
  UnityEngine_GameObject_o *pUVar15;
  UnityEngine_Transform_o *__this_03;
  UnityEngine_RectTransform_o *pUVar16;
  TMPro_TextMeshProUGUI_o *text;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *__this_04;
  Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *__this_05;
  UnityEngine_Events_UnityAction_o *__this_06;
  Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *__this_07;
  System_Nullable_float__Fields pressDepth;
  int32_t value_00;
  System_String_o *pSVar17;
  Gisketch_Aottg2UI_Data_GisketchLength_o *length;
  float fVar18;
  float relief;
  bool local_b8;
  byte local_b7;
  UnityEngine_RectTransform_o *local_a8;
  UnityEngine_RectTransform_o *local_a0;
  UnityEngine_UI_Button_o *local_98;
  UnityEngine_UI_Navigation_Fields local_88 [2];
  
  if (Il2CppMethodInitialized_184342138 == '\0') {
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
    Il2CppMethodInitialized_184342138 = '\x01';
  }
  pressDepth.hasValue = false;
  pressDepth._1_3_ = 0;
  pressDepth.value = 0.0;
  local_a8 = (UnityEngine_RectTransform_o *)0x0;
  local_a0 = (UnityEngine_RectTransform_o *)0x0;
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass1_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object == (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass1_0_o *)0x0)
  goto label_1818e0daa;
  (object->fields).node = node;
  Il2CppCodeGenWriteBarrier(&(object->fields).node,node);
  (object->fields).context = context;
  Il2CppCodeGenWriteBarrier(&(object->fields).context,context);
  (object->fields).go = go;
  Il2CppCodeGenWriteBarrier(&(object->fields).go,go);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    fVar18 = 0.0;
  }
  else {
    fVar18 = (style->fields).relief.fields.value;
  }
  pGVar2 = (object->fields).context;
  if (((pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
      (pGVar3 = (pGVar2->fields).Theme, pGVar3 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) ||
     (pGVar4 = (object->fields).node, pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0))
  goto label_1818e0daa;
  fVar1 = (pGVar3->fields)._ReliefIntensity_k__BackingField;
  bVar5 = System_String__IsNullOrEmpty((pGVar4->fields).sprite,(MethodInfo *)0x0);
  SVar10 = pressDepth;
  if (bVar5) {
    relief = fVar1 * fVar18;
    bVar6 = il2cpp_runtime_helper_180562af0(relief,0,0);
    local_b7 = bVar6 ^ 1;
    local_a8 = (UnityEngine_RectTransform_o *)0x0;
    if (bVar6 == 0) {
      pUVar15 = (object->fields).go;
      pGVar2 = (object->fields).context;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      image = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFace
                        (pUVar15,style,pGVar2,relief,&local_a8,(MethodInfo *)0x0);
      pUVar15 = (object->fields).go;
      if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_1818e0daa;
      SVar10 = (System_Nullable_float__Fields)
               UnityEngine_GameObject__GetComponent_object_
                         (pUVar15,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    }
    else {
      if ((object->fields).context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)
      goto label_1818e0daa;
      pSVar17 = "primary";
      if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        pSVar17 = (style->fields).background;
      }
      pUVar15 = (object->fields).go;
      pGVar3 = (((object->fields).context)->fields).Theme;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      image = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                        (pUVar15,style,pGVar3,pSVar17,false,(MethodInfo *)0x0);
    }
  }
  else {
    local_a8 = (UnityEngine_RectTransform_o *)0x0;
    local_b7 = 0;
    pUVar15 = (object->fields).go;
    pGVar4 = (object->fields).node;
    pGVar2 = (object->fields).context;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    image = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
                      (pUVar15,pGVar4,style,pGVar2,false,true,(MethodInfo *)0x0);
  }
  pUVar15 = (object->fields).go;
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_1818e0daa;
  value = UnityEngine_GameObject__AddComponent_object_
                    (pUVar15,(MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonInputSource);
  (object->fields).inputSource = value;
  Il2CppCodeGenWriteBarrier(&(object->fields).inputSource,value);
  pUVar15 = (object->fields).go;
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_1818e0daa;
  pGVar11 = UnityEngine_GameObject__AddComponent_object_
                      (pUVar15,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
  (object->fields).sound = pGVar11;
  Il2CppCodeGenWriteBarrier(&(object->fields).sound,pGVar11);
  pGVar4 = (object->fields).node;
  if ((pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     (pGVar11 = (object->fields).sound, pGVar11 == (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0))
  goto label_1818e0daa;
  pSVar17 = (pGVar4->fields).action;
  (pGVar11->fields)._action = pSVar17;
  Il2CppCodeGenWriteBarrier(&(pGVar11->fields)._action,pSVar17);
  pUVar15 = (object->fields).go;
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_1818e0daa;
  __this_00 = UnityEngine_GameObject__AddComponent_object_
                        (pUVar15,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Button);
  pUVar12 = image;
  local_98 = __this_00;
  if (local_b7 != 0) {
    pUVar15 = (object->fields).go;
    if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_1818e0daa;
    pUVar12 = UnityEngine_GameObject__GetComponent_object_
                        (pUVar15,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  }
  if (__this_00 == (UnityEngine_UI_Button_o *)0x0) goto label_1818e0daa;
  UnityEngine_UI_Selectable__set_targetGraphic
            ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Graphic_o *)pUVar12,(MethodInfo *)0x0);
  UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this_00,0,(MethodInfo *)0x0);
  local_88[0].m_Mode = 3;
  local_88[0].m_WrapAround = false;
  local_88[0]._5_3_ = 0;
  local_88[0].m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
  local_88[0].m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
  local_88[0].m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
  local_88[0].m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
  UnityEngine_UI_Selectable__set_navigation
            ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Navigation_o *)local_88,
             (MethodInfo *)0x0);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    local_b8 = false;
label_1818e0582:
    pUVar15 = (object->fields).go;
    if ((pUVar15 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_01 = UnityEngine_GameObject__AddComponent_object_
                              (pUVar15,(MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity
                              ),
       __this_01 == (Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity_o *)0x0)) goto label_1818e0daa;
    Gisketch_Aottg2UI_Actions_GisketchDisabledSelectableOpacity__Setup(__this_01,0.3,(MethodInfo *)0x0);
  }
  else {
    pSVar17 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_196c550(pSVar17,"dropdownItem",5,(MethodInfo *)0x0);
    if (bVar5) {
      local_b8 = true;
    }
    else {
      pSVar17 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      local_b8 = System_String__Equals_196c550(pSVar17,"searchResultItem",5,(MethodInfo *)0x0);
      if (!local_b8) goto label_1818e0582;
    }
  }
  pUVar15 = (object->fields).go;
  if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_1818e0daa;
  if (local_b7 == 0) {
    parent = UnityEngine_GameObject__GetComponent_object_
                       (pUVar15,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  else {
    __this_02 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar15,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonRelief);
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pressDepth = (style->fields).pressDepth.fields;
    }
    if (__this_02 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) goto label_1818e0daa;
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
              (__this_02,image,local_a8,fVar1 * fVar18,(UnityEngine_UI_RectMask2D_o *)SVar10,
               (System_Nullable_float__o)pressDepth,(MethodInfo *)0x0);
    parent = local_a8;
  }
  pGVar4 = (object->fields).node;
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e0daa;
  bVar5 = System_String__IsNullOrEmpty((pGVar4->fields).text,(MethodInfo *)0x0);
  if (bVar5) {
    pGVar4 = (object->fields).node;
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e0daa;
    bVar5 = System_String__IsNullOrEmpty((pGVar4->fields).textKey,(MethodInfo *)0x0);
    bVar5 = !bVar5;
  }
  else {
    bVar5 = true;
  }
  pGVar4 = (object->fields).node;
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e0daa;
  if ((pGVar4->fields).hasIcon == false) {
    bVar7 = System_String__IsNullOrEmpty((pGVar4->fields).icon,(MethodInfo *)0x0);
    bVar7 = !bVar7;
  }
  else {
    bVar7 = true;
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    bVar8 = false;
  }
  else {
    pSVar17 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_184342139 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelBrushButton");
      il2cpp_codegen_initialize_runtime_metadata(&"mainMenuBrushButton");
      Il2CppMethodInitialized_184342139 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar8 = System_String__Equals_196c550(pSVar17,"mainMenuBrushButton",5,(MethodInfo *)0x0);
    if (bVar8) {
      bVar8 = true;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar8 = System_String__Equals_196c550(pSVar17,"brushSidePanelBrushButton",5,(MethodInfo *)0x0);
    }
  }
  if ((object->fields).context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0)
  goto label_1818e0daa;
  pUVar15 = (object->fields).go;
  bVar9 = false;
  if (bVar8 == false) {
    bVar9 = (bool)(local_b8 ^ 1);
  }
  pGVar3 = (((object->fields).context)->fields).Theme;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AddFocusRing(pUVar15,pGVar3,bVar9,(MethodInfo *)0x0);
  local_a0 = (UnityEngine_RectTransform_o *)0x0;
  if ((bVar5 & bVar7) != 0) {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_1818e0daa;
    maskSprite = (image->fields).m_Sprite;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    parent = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent_18df180
                       (parent,style,bVar8,maskSprite,&local_a0,(MethodInfo *)0x0);
  }
  pUVar16 = local_a8;
  if (local_b7 != 0) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar9 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)pUVar16,(MethodInfo *)0x0);
    pUVar16 = local_a8;
    if (bVar9) {
      pGVar4 = (object->fields).node;
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e0daa;
      if (((pGVar4->fields).children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
         (((pGVar4->fields).children)->max_length != 0)) {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        parent = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFaceContent
                           (pUVar16,style,(MethodInfo *)0x0);
      }
    }
    pUVar15 = (object->fields).go;
    if ((pUVar15 == (UnityEngine_GameObject_o *)0x0) ||
       (pGVar13 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar15,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchChildHost),
       pGVar13 == (Gisketch_Aottg2UI_Building_GisketchChildHost_o *)0x0)) goto label_1818e0daa;
    (pGVar13->fields)._Parent_k__BackingField = (UnityEngine_Transform_o *)parent;
    Il2CppCodeGenWriteBarrier(&(pGVar13->fields)._Parent_k__BackingField,parent);
  }
  pGVar4 = (object->fields).node;
  pGVar2 = (object->fields).context;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pUVar12 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonIcon
                      (pGVar4,parent,style,pGVar2,bVar5,(MethodInfo *)0x0);
  text = (TMPro_TextMeshProUGUI_o *)0x0;
  if (bVar5 != false) {
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    if (components == (System_Type_array *)0x0) goto label_1818e0daa;
    if ((obj != (System_Type_o *)0x0) &&
       (pIVar14 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
       pIVar14 == (Il2CppObject *)0x0)) {
      pIVar14 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar14,(MethodInfo *)0x0);
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    pUVar15 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(pUVar15,"AoTTG Button Label",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if ((pUVar15 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_03 = UnityEngine_GameObject__get_transform(pUVar15,(MethodInfo *)0x0),
       __this_03 == (UnityEngine_Transform_o *)0x0)) goto label_1818e0daa;
    UnityEngine_Transform__SetParent_2f5a7e0
              (__this_03,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
    if (bVar7 == false) {
      pUVar16 = UnityEngine_GameObject__GetComponent_object_
                          (pUVar15,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(pUVar16,(MethodInfo *)0x0);
    }
    text = UnityEngine_GameObject__AddComponent_object_
                     (pUVar15,(MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    pGVar4 = (object->fields).node;
    pGVar2 = (object->fields).context;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText(text,pGVar4,style,pGVar2,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184342143 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"left");
      Il2CppMethodInitialized_184342143 = '\x01';
    }
    if (bVar7 == false) {
      if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        pSVar17 = (style->fields).textAlignment;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar5 = System_String__Equals_196c550(pSVar17,"left",5,(MethodInfo *)0x0);
        if (bVar5) goto label_1818e0adc;
      }
      value_00 = 0x202;
    }
    else {
label_1818e0adc:
      value_00 = 0x1001;
    }
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818e0daa;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)text,value_00,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,false,(MethodInfo *)0x0);
  }
  pUVar15 = (object->fields).go;
  pGVar4 = (object->fields).node;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyButtonMeasure
            (pUVar15,pGVar4,text,style,bVar7,(MethodInfo *)0x0);
  if (local_b8 == false) {
    pGVar4 = (object->fields).node;
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e0daa;
    if ((pGVar4->fields).clip != false) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        pGVar4 = (object->fields).node;
        if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e0daa;
        if ((pGVar4->fields).layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          length = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
        }
        else {
          length = (((pGVar4->fields).layout)->fields).minWidth;
        }
        pUVar15 = (object->fields).go;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        fVar18 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__PointLength(length,0.0,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AllowButtonTextClipping
                  (pUVar15,text,fVar18,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup
                  ((object->fields).go,text,true,(MethodInfo *)0x0);
      }
    }
  }
  else {
    pUVar15 = (object->fields).go;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AllowButtonTextClipping
              (pUVar15,text,0.0,(MethodInfo *)0x0);
    pUVar15 = (object->fields).go;
    if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_1818e0daa;
    __this_07 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar15,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropdownItemFeedback
                          );
    pGVar2 = (object->fields).context;
    if ((pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (__this_07 == (Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback_o *)0x0)) goto label_1818e0daa;
    Gisketch_Aottg2UI_Actions_GisketchDropdownItemFeedback__Setup
              (__this_07,image,text,(pGVar2->fields).Theme,pUVar12,(MethodInfo *)0x0);
  }
  if (bVar8 != false) {
    pUVar15 = (object->fields).go;
    if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_1818e0daa;
    __this_04 = UnityEngine_GameObject__AddComponent_object_
                          (pUVar15,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchBrushButtonFeedback)
    ;
    pGVar2 = (object->fields).context;
    if ((pGVar2 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (__this_04 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback_o *)0x0)) goto label_1818e0daa;
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonFeedback__Setup
              (__this_04,image,text,pUVar12,parent,(pGVar2->fields).Theme,(MethodInfo *)0x0);
    pUVar15 = (object->fields).go;
    if ((pUVar15 == (UnityEngine_GameObject_o *)0x0) ||
       ((__this_05 = UnityEngine_GameObject__AddComponent_object_
                               (pUVar15,(MethodInfo_6F4D60 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_GisketchBrushButtonIntroReveal
                               ), image == (UnityEngine_UI_Image_o *)0x0 ||
        (__this_05 == (Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal_o *)0x0))))
    goto label_1818e0daa;
    Gisketch_Aottg2UI_Actions_GisketchBrushButtonIntroReveal__Setup
              (__this_05,local_a0,parent,(image->fields).m_Sprite,(MethodInfo *)0x0);
  }
  __this = (UnityEngine_Events_UnityEvent_o *)(local_98->fields).m_OnClick;
  __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
  UnityEngine_Events_UnityAction___ctor
            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_06,(Il2CppObject *)object,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass1_0_BuildButton_b__0,
             (MethodInfo *)0x0);
  if (__this != (UnityEngine_Events_UnityEvent_o *)0x0) {
    UnityEngine_Events_UnityEvent__AddListener(__this,__this_06,(MethodInfo *)0x0);
    return;
  }
label_1818e0daa:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsBrushButtonStyle
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushButtonStyle (System_String_o* name, const MethodInfo* method);
// 0x1818e9ac0

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushButtonStyle
               (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184342139 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelBrushButton");
    il2cpp_codegen_initialize_runtime_metadata(&"mainMenuBrushButton");
    Il2CppMethodInitialized_184342139 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar1 = System_String__Equals_196c550(name,"mainMenuBrushButton",5,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar1 = System_String__Equals_196c550(name,"brushSidePanelBrushButton",5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonFace
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFace (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, float relief, UnityEngine_RectTransform_o** face, const MethodInfo* method);
// 0x1818df750
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818dfa2d: mov rbx, qword ptr [rip + 0x27d6894]  ; "primary"

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFace
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,float relief,
          UnityEngine_RectTransform_o **face,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  Il2CppType *handle;
  UnityEngine_UI_Image_o *pUVar2;
  UnityEngine_Color_o *pUVar3;
  UnityEngine_UI_RectMask2D_o *__this;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *value;
  UnityEngine_Material_o *__this_02;
  System_String_o *color;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_o local_38 [2];
  
  if (Il2CppMethodInitialized_18434213a == '\0') {
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
    Il2CppMethodInitialized_18434213a = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    if (pUVar2 == (UnityEngine_UI_Image_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    }
    if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
       (pGVar1 = (context->fields).Theme, pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      local_48.r = 0.0;
      local_48.g = 0.0;
      local_48.b = 0.0;
      local_48.a = 0.32;
      pUVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (local_38,pGVar1,"shadow",(UnityEngine_Color_o *)&local_48,
                          (MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
        local_48.r = (pUVar3->fields).r;
        local_48.g = (pUVar3->fields).g;
        local_48.b = (pUVar3->fields).b;
        local_48.a = (pUVar3->fields).a;
        (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                  (pUVar2,(UnityEngine_Color_o *)&local_48,(pUVar2->klass->vtable)._23_set_color.method);
        (*(pUVar2->klass->vtable)._33_set_material.methodPtr)
                  (pUVar2,(UnityEngine_Material_o *)0x0,(pUVar2->klass->vtable)._33_set_material.method);
        __this = UnityEngine_GameObject__AddComponent_object_
                           (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D)
        ;
        if (__this != (UnityEngine_UI_RectMask2D_o *)0x0) {
          UnityEngine_Behaviour__set_enabled((UnityEngine_Behaviour_o *)__this,false,(MethodInfo *)0x0);
          components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
          handle = TypeRef_UnityEngine_RectTransform;
          if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_184354ea0);
          }
          obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
          if (components != (System_Type_array *)0x0) {
            if ((obj != (System_Type_o *)0x0) &&
               (pIVar4 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
               pIVar4 == (Il2CppObject *)0x0)) {
              pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
            }
            if ((int)components->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            components->m_Items[0] = obj;
            Il2CppCodeGenWriteBarrier(components->m_Items,obj);
            __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_2f1abe0
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
                UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
                value = UnityEngine_GameObject__GetComponent_object_
                                  (__this_00,
                                   (MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                *face = value;
                Il2CppCodeGenWriteBarrier(face,value);
                Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(*face,(MethodInfo *)0x0);
                pGVar1 = (context->fields).Theme;
                color = "primary";
                if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                  color = (style->fields).background;
                }
                if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                }
                pUVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                                   (__this_00,style,pGVar1,color,true,(MethodInfo *)0x0);
                if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
                  __this_02 = (*(pUVar2->klass->vtable)._32_get_material.methodPtr)
                                        (pUVar2,(pUVar2->klass->vtable)._32_get_material.method);
                  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
                  }
                  if (__this_02 != (UnityEngine_Material_o *)0x0) {
                    UnityEngine_Material__SetFloat_2ee3980
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
// 0x1818df510

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
  
  if (Il2CppMethodInitialized_18434213b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Button Face Content");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    Il2CppMethodInitialized_18434213b = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Button Face Content",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0
                  (__this_00,(UnityEngine_Transform_o *)face,false,(MethodInfo *)0x0);
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
        flex = UnityEngine_GameObject__AddComponent_object_
                         (__this,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
        Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          (__this_01->fields).justify = "Center";
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).justify,"Center");
          (__this_01->fields).alignItems = "Center";
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).alignItems,"Center");
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex
                    (flex,__this_01,(Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0,(MethodInfo *)0x0)
          ;
          return rect;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildStepper
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildStepper (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818e5f10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e5fbe: nop 

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildStepper
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *pGVar1;
  System_String_o *style_00;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *step;
  Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_GameObject_o *__this;
  uint uVar3;
  
  if (Il2CppMethodInitialized_18434213c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_18434213c = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel(go,node,style,context,(MethodInfo *)0x0);
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if (((node->fields).steps != (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0) &&
       (pGVar1 = (node->fields).steps, pGVar1->max_length != 0)) {
      for (uVar3 = 0; (int)uVar3 < (int)pGVar1->max_length; uVar3 = uVar3 + 1) {
        if ((uint)pGVar1->max_length <= uVar3) {
label_1818e607e:
          ThrowIndexOutOfRangeException();
        }
        style_00 = (node->fields).style;
        step = pGVar1->m_Items[(int)uVar3];
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        node_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StepNode(step,style_00,(MethodInfo *)0x0);
        if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818e6084;
        parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
        __this = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                           (node_00,parent,context,view,(MethodInfo *)0x0);
        pGVar2 = (node->fields).steps;
        if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_array *)0x0) goto label_1818e6084;
        if ((int)pGVar2->max_length == 0) goto label_1818e607e;
        if (__this == (UnityEngine_GameObject_o *)0x0) goto label_1818e6084;
        UnityEngine_GameObject__SetActive(__this,step == pGVar2->m_Items[0],(MethodInfo *)0x0);
      }
    }
    return;
  }
label_1818e6084:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$StepNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StepNode (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o* step, System_String_o* style, const MethodInfo* method);
// 0x1818ec750
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ec8d7: mov rsi, rax
// asm:   0x1818ec8da: jmp 0x1818ec991

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StepNode
          (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *step,System_String_o *style,
          MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  System_String_o *pSVar2;
  longlong lVar3;
  
  if (Il2CppMethodInitialized_18434213d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    il2cpp_codegen_initialize_runtime_metadata(&"Step");
    Il2CppMethodInitialized_18434213d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Panel");
    if (step != (Gisketch_Aottg2UI_Data_GisketchStepperStepDefinition_o *)0x0) {
      bVar1 = System_String__IsNullOrEmpty((step->fields).id,(MethodInfo *)0x0);
      pSVar2 = "Step";
      if (!bVar1) {
        pSVar2 = (step->fields).id;
      }
      (__this->fields).id = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).id,pSVar2);
      (__this->fields).style = style;
      Il2CppCodeGenWriteBarrier(&(__this->fields).style,style);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
      Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_00->fields).direction = "Column";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).direction,"Column");
        (__this_00->fields).alignItems = "Stretch";
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).alignItems,"Stretch");
        (__this->fields).layout = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).layout,__this_00);
        if (((step->fields).children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) &&
           (value = (step->fields).children, value->max_length != 0)) {
label_1818ec991:
          (__this->fields).children = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields).children,value);
          return __this;
        }
        value = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_01->fields).type = "Text";
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).type,"Text");
          lVar3 = 0x28;
          if ((step->fields).text == (System_String_o *)0x0) {
            lVar3 = 0x18;
          }
          pSVar2 = *(System_String_o **)((longlong)&step->klass + lVar3);
          (__this_01->fields).text = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).text,pSVar2);
          lVar3 = 0x30;
          if ((step->fields).textKey == (System_String_o *)0x0) {
            lVar3 = 0x20;
          }
          pSVar2 = *(System_String_o **)((longlong)&step->klass + lVar3);
          (__this_01->fields).textKey = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).textKey,pSVar2);
          if (value != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)value->max_length == 0) {
              ThrowIndexOutOfRangeException();
            }
            value->m_Items[0] = __this_01;
            Il2CppCodeGenWriteBarrier(value->m_Items,__this_01);
            goto label_1818ec991;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyPanel
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818dcca0

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
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_18434213e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    Il2CppMethodInitialized_18434213e = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar1 = false;
  }
  else {
    bVar1 = System_String__IsNullOrEmpty((node->fields).tooltip,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_String__IsNullOrEmpty((node->fields).tooltipKey,(MethodInfo *)0x0);
      bVar1 = !bVar1;
    }
    else {
      bVar1 = true;
    }
    bVar2 = System_String__IsNullOrEmpty((node->fields).sprite,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
                (go,node,style,context,false,bVar1,(MethodInfo *)0x0);
      return;
    }
  }
  if (((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
      (bVar2 = System_String__IsNullOrEmpty((style->fields).background,(MethodInfo *)0x0), !bVar2)) &&
     (bVar2 = System_String__op_Equality((style->fields).background,"clear",(MethodInfo *)0x0),
     !bVar2)) {
    if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
      theme = (context->fields).Theme;
      color = (style->fields).background;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                (go,style,theme,color,false,(MethodInfo *)0x0);
      return;
    }
label_1818dce7d:
    ThrowNullReferenceException();
  }
  if (bVar1 != false) {
    if ((go == (UnityEngine_GameObject_o *)0x0) ||
       ((pUVar3 = UnityEngine_GameObject__GetComponent_object_
                            (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image),
        pUVar3 == (UnityEngine_UI_Image_o *)0x0 &&
        (pUVar3 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image),
        pUVar3 == (UnityEngine_UI_Image_o *)0x0)))) goto label_1818dce7d;
    local_38.r = 0.0;
    local_38.g = 0.0;
    local_38.b = 0.0;
    local_38.a = 0.0;
    (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
              (pUVar3,(UnityEngine_Color_o *)&local_38,(pUVar3->klass->vtable)._23_set_color.method);
    (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar3,true,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, System_String_o* color, bool reliefGradient, const MethodInfo* method);
// 0x1818dc710

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,System_String_o *color,bool reliefGradient,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  System_Nullable_bool__Fields SVar3;
  System_Nullable_float__Fields stainScaleOverride;
  char cVar4;
  ushort uVar5;
  UnityEngine_UI_Image_o *pUVar6;
  UnityEngine_Color_o *pUVar7;
  UnityEngine_Material_o *pUVar8;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *pGVar9;
  char cVar10;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_o local_38 [2];
  
  if (Il2CppMethodInitialized_18434213f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSurfaceMaterialOwner);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_get_HasValue);
    Il2CppMethodInitialized_18434213f = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar6 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
    if (pUVar6 == (UnityEngine_UI_Image_o *)0x0) {
      pUVar6 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    }
    if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      local_48.r = 0.08;
      local_48.g = 0.09;
      local_48.b = 0.12;
      local_48.a = 0.92;
      pUVar7 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (local_38,theme,color,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
        local_48.r = (pUVar7->fields).r;
        local_48.g = (pUVar7->fields).g;
        local_48.b = (pUVar7->fields).b;
        local_48.a = (pUVar7->fields).a;
        (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                  (pUVar6,(UnityEngine_Color_o *)&local_48,(pUVar6->klass->vtable)._23_set_color.method);
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyShadow(go,style,theme,(MethodInfo *)0x0);
        if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
           ((style->fields).textured.fields.value == false)) {
          (*(pUVar6->klass->vtable)._33_set_material.methodPtr)
                    (pUVar6,(UnityEngine_Material_o *)0x0,(pUVar6->klass->vtable)._33_set_material.method);
        }
        else {
          SVar3 = (style->fields).worn.fields;
          cVar10 = '\x01';
          fVar1 = (style->fields).relief.fields.value;
          fVar2 = (theme->fields)._ReliefIntensity_k__BackingField;
          if (SVar3.hasValue == false) {
            uVar5 = 1;
          }
          else {
            uVar5 = (ushort)SVar3 >> 8;
          }
          cVar4 = il2cpp_runtime_helper_180562af0();
          if ((cVar4 == '\0') || (uVar5 != 0)) {
            if (!reliefGradient) {
              cVar10 = (style->fields).reliefGradient.fields.value;
            }
            stainScaleOverride = (style->fields).wornStainScale.fields;
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
            }
            pUVar8 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
                               (fVar1 * fVar2,cVar10 != '\0',uVar5 != 0,
                                (System_Nullable_float__o)stainScaleOverride,false,false,(MethodInfo *)0x0);
            (*(pUVar6->klass->vtable)._33_set_material.methodPtr)
                      (pUVar6,pUVar8,(pUVar6->klass->vtable)._33_set_material.method);
            pGVar9 = UnityEngine_GameObject__AddComponent_object_
                               (go,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSurfaceMaterialOwner
                               );
            pUVar8 = (*(pUVar6->klass->vtable)._32_get_material.methodPtr)
                               (pUVar6,(pUVar6->klass->vtable)._32_get_material.method);
            if (pGVar9 == (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *)0x0) goto label_1818dc9e4;
            (pGVar9->fields)._material = pUVar8;
            Il2CppCodeGenWriteBarrier(&(pGVar9->fields)._material,pUVar8);
          }
          else {
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
            }
            pUVar8 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__get_Shared((MethodInfo *)0x0);
            (*(pUVar6->klass->vtable)._33_set_material.methodPtr)
                      (pUVar6,pUVar8,(pUVar6->klass->vtable)._33_set_material.method);
          }
        }
        return pUVar6;
      }
    }
  }
label_1818dc9e4:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyText
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText (TMPro_TextMeshProUGUI_o* text, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818dd840
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818dd9de: nop 

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText
               (TMPro_TextMeshProUGUI_o *text,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool bVar4;
  char cVar5;
  uint32_t weight;
  System_String_o *pSVar6;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar7;
  TMPro_TMP_FontAsset_o *value;
  UnityEngine_Color_o *pUVar8;
  ushort uVar9;
  int32_t value_00;
  System_String_o *pSVar10;
  float value_01;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_o local_38;
  
  if (Il2CppMethodInitialized_184342140 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocaleAvailability);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_GetValueOrDefault_40bc658);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardSocialText");
    il2cpp_codegen_initialize_runtime_metadata(&"profileEmoteSlotText");
    il2cpp_codegen_initialize_runtime_metadata(&"settingLabel");
    il2cpp_codegen_initialize_runtime_metadata(&"italic");
    il2cpp_codegen_initialize_runtime_metadata(&"profileHoverBio");
    Il2CppMethodInitialized_184342140 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818ddea2;
  bVar4 = System_String__IsNullOrEmpty((node->fields).textKey,(MethodInfo *)0x0);
  if (bVar4) {
label_1818dd962:
    pSVar6 = (node->fields).text;
  }
  else {
    if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_1818ddea2;
    if ((context->fields).Localizer == (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0)
    goto label_1818dd962;
    pSVar6 = (System_String_o *)
             il2cpp_runtime_helper_18001c6b0(0,TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,
                           (context->fields).Localizer,(node->fields).textKey,(node->fields).text);
  }
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  bVar4 = System_String__IsNullOrEmpty((node->fields).textKey,(MethodInfo *)0x0);
  if (bVar4) {
label_1818dda3c:
    cVar5 = '\0';
  }
  else {
    if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_1818ddea2;
    obj = il2cpp_vm_Object_IsInst
                    ((Il2CppObject *)(context->fields).Localizer,
                     (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocaleAvailability);
    if (obj == (Il2CppObject *)0x0) goto label_1818dda3c;
    pIVar2 = obj->klass;
    pSVar10 = (node->fields).textKey;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    uVar9 = 0;
    if (uVar1 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar9].interfaceType ==
            (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocaleAvailability) {
          cVar5 = (*pIVar2->vtable[pIVar3[uVar9].offset].methodPtr)
                            (obj,pSVar10,pIVar2->vtable[pIVar3[uVar9].offset].method);
          goto label_1818dda42;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar1);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocaleAvailability
                        ,0);
    cVar5 = (*pVVar7->methodPtr)(obj,pSVar10,pVVar7->method);
  }
label_1818dda42:
  bVar4 = System_String__IsNullOrEmpty((node->fields).tooltip,(MethodInfo *)0x0);
  if (bVar4) {
    bVar4 = System_String__IsNullOrEmpty((node->fields).tooltipKey,(MethodInfo *)0x0);
    bVar4 = !bVar4;
  }
  else {
    bVar4 = true;
  }
  if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818ddea2;
  (*(text->klass->vtable)._25_set_raycastTarget.methodPtr)
            (text,bVar4,(text->klass->vtable)._25_set_raycastTarget.method);
  TMPro_TMP_Text__set_enableWordWrapping
            ((TMPro_TMP_Text_o *)text,(node->fields).clip == false,(MethodInfo *)0x0);
  if ((node->fields).clip != false) {
    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
label_1818ddc35:
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)text,24.0,(MethodInfo *)0x0);
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_1818ddc4d;
    weight = 400;
    pSVar10 = (System_String_o *)0x0;
  }
  else {
    pSVar10 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar4 = System_String__Equals_196c550(pSVar10,"profileCardSocialText",5,(MethodInfo *)0x0);
    if (bVar4) {
      TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,false,(MethodInfo *)0x0);
      TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
    }
    pSVar10 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar4 = System_String__Equals_196c550(pSVar10,"profileEmoteSlotText",5,(MethodInfo *)0x0);
    if (bVar4) {
      TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
    }
    pSVar10 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar4 = System_String__Equals_196c550(pSVar10,"profileHoverBio",5,(MethodInfo *)0x0);
    if (bVar4) {
      TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
    }
    pSVar10 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar4 = System_String__Equals_196c550(pSVar10,"settingLabel",5,(MethodInfo *)0x0);
    if (bVar4) {
      TMPro_TMP_Text__set_textWrappingMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
      TMPro_TMP_Text__set_maxVisibleLines((TMPro_TMP_Text_o *)text,2,(MethodInfo *)0x0);
      TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
    }
    if ((style->fields).fontSize.fields.value <= 0.0) goto label_1818ddc35;
    value_01 = System_Nullable_float___get_Value
                         (&(style->fields).fontSize,
                          (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    TMPro_TMP_Text__set_fontSize((TMPro_TMP_Text_o *)text,value_01,(MethodInfo *)0x0);
label_1818ddc4d:
    pSVar10 = (style->fields).fontFamily;
    weight = System_Nullable_uint___GetValueOrDefault_adc220
                       ((System_Nullable_uint__o *)&(style->fields).fontWeight,400,
                        (MethodInfo_ADC220 *)MethodInfo_System_Nullable_int_GetValueOrDefault_40bc658);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypography);
  }
  value = Gisketch_Aottg2UI_Styling_GisketchTypography__Resolve
                    (pSVar10,weight,pSVar6,cVar5 != '\0',(MethodInfo *)0x0);
  TMPro_TMP_Text__set_font((TMPro_TMP_Text_o *)text,value,(MethodInfo *)0x0);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
label_1818ddcea:
    pSVar10 = (System_String_o *)0x0;
  }
  else {
    pSVar10 = (style->fields).fontStyle;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar4 = System_String__Equals_196c550(pSVar10,"italic",5,(MethodInfo *)0x0);
    pSVar10 = (System_String_o *)0x2;
    if (!bVar4) goto label_1818ddcea;
  }
  TMPro_TMP_Text__set_fontStyle((TMPro_TMP_Text_o *)text,(int32_t)pSVar10,(MethodInfo *)0x0);
  (*(text->klass->vtable)._66_set_text.methodPtr)(text,pSVar6,(text->klass->vtable)._66_set_text.method);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    local_48.r = 1.0;
    local_48.g = 1.0;
    local_48.b = local_48.g;
    local_48.a = local_48.g;
  }
  else {
    if ((context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (__this = (context->fields).Theme, __this == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
label_1818ddea2:
      ThrowNullReferenceException();
    }
    local_48.r = 1.0;
    local_48.g = 1.0;
    local_48.b = 1.0;
    local_48.a = 1.0;
    pUVar8 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (&local_38,__this,(style->fields).textColor,(UnityEngine_Color_o *)&local_48,
                        (MethodInfo *)0x0);
    local_48.r = (pUVar8->fields).r;
    local_48.g = (pUVar8->fields).g;
    local_48.b = (pUVar8->fields).b;
    local_48.a = (pUVar8->fields).a;
  }
  (*(text->klass->vtable)._23_set_color.methodPtr)
            (text,(UnityEngine_Color_o *)&local_48,(text->klass->vtable)._23_set_color.method);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342144 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"right");
    il2cpp_codegen_initialize_runtime_metadata(&"center");
    Il2CppMethodInitialized_184342144 = '\x01';
  }
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pSVar6 = (style->fields).textAlignment;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar4 = System_String__Equals_196c550(pSVar6,"right",5,(MethodInfo *)0x0);
    if (bVar4) {
      value_00 = 0x1004;
      goto label_1818dde72;
    }
    pSVar6 = (style->fields).textAlignment;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar4 = System_String__Equals_196c550(pSVar6,"center",5,(MethodInfo *)0x0);
    if (bVar4) {
      value_00 = 0x202;
      goto label_1818dde72;
    }
  }
  value_00 = 0x1001;
label_1818dde72:
  TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)text,value_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyButtonMeasure
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyButtonMeasure (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, TMPro_TextMeshProUGUI_o* text, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, bool hasIcon, const MethodInfo* method);
// 0x1818db570
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818db920: movaps xmm6, xmm10
// asm:   0x1818db924: jmp 0x1818db938
// asm:   0x1818db9f5: movaps xmm1, xmm6
// asm:   0x1818dba7d: movaps xmm7, xmm6

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyButtonMeasure
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               TMPro_TextMeshProUGUI_o *text,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               bool hasIcon,MethodInfo *method)

{
  System_Nullable_float__Fields SVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  bool bVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  System_String_o *pSVar5;
  UnityEngine_Vector2_o UVar6;
  Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fStackX_c;
  
  if (Il2CppMethodInitialized_184342141 == '\0') {
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
    Il2CppMethodInitialized_184342141 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818dbb30;
  pUVar4 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818dbb30;
    pSVar5 = (*(text->klass->vtable)._65_get_text.methodPtr)(text,(text->klass->vtable)._65_get_text.method);
    UVar6 = TMPro_TMP_Text__GetPreferredValues_2d12570((TMPro_TMP_Text_o *)text,pSVar5,(MethodInfo *)0x0);
    fVar11 = UVar6.fields.x;
    fStackX_c = UVar6.fields.y;
    fVar13 = fStackX_c;
  }
  else {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    fVar11 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
    fVar13 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.y;
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
label_1818db73f:
    fStackX_c = 16.0;
  }
  else {
    SVar1 = (style->fields).paddingX.fields;
    if (SVar1.hasValue == false) {
      SVar1 = (style->fields).padding.fields;
      if (SVar1.hasValue == false) goto label_1818db73f;
      fStackX_c = SVar1.value;
    }
    else {
      fStackX_c = SVar1.value;
    }
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818dbb30;
  if ((node->fields).layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar7 = (((node->fields).layout)->fields).height;
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar8 = (style->fields).height;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if ((pGVar7 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) ||
     (bVar3 = System_String__IsNullOrEmpty((pGVar7->fields).unit,(MethodInfo *)0x0), bVar3)) {
    pGVar7 = pGVar8;
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818db819:
    fVar13 = fStackX_c + fStackX_c + fVar13;
  }
  else {
    pSVar5 = (pGVar7->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(pSVar5,"point",5,(MethodInfo *)0x0);
    if (!bVar3) goto label_1818db819;
    fVar13 = (pGVar7->fields).value;
  }
  fVar12 = 0.0;
  if (hasIcon) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
         ((style->fields).gap.fields.hasValue == false)) {
        fVar10 = 6.0;
      }
      else {
        fVar10 = System_Nullable_float___get_Value
                           (&(style->fields).gap,
                            (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
      }
    }
    else {
      fVar10 = 0.0;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_184342155 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
      Il2CppMethodInitialized_184342155 = '\x01';
    }
    if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
       ((style->fields).iconSize.fields.value <= 0.0)) {
      fVar12 = 24.0;
    }
    else {
      fVar12 = System_Nullable_float___get_Value
                         (&(style->fields).iconSize,
                          (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    }
    fVar12 = fVar12 + fVar10;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  fVar10 = fVar13;
  if (!hasIcon || !bVar3) {
    fVar10 = fStackX_c + fStackX_c + fVar11 + fVar12;
  }
  if ((node->fields).layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar2 = (node->fields).layout;
    pGVar7 = (pGVar2->fields).width;
    pGVar8 = (pGVar2->fields).minWidth;
  }
  pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar9 = (style->fields).width;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if ((pGVar7 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) ||
     (bVar3 = System_String__IsNullOrEmpty((pGVar7->fields).unit,(MethodInfo *)0x0), bVar3)) {
    pGVar7 = pGVar9;
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  fVar11 = fVar10;
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar5 = (pGVar7->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(pSVar5,"point",5,(MethodInfo *)0x0);
    if (bVar3) {
      fVar11 = (pGVar7->fields).value;
    }
  }
  if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar4,fVar11,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
    if (Il2CppMethodInitialized_184342145 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_184342145 = '\x01';
    }
    fVar11 = fVar10;
    if (pGVar8 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar5 = (pGVar8->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_196c550(pSVar5,"point",5,(MethodInfo *)0x0);
      if (bVar3) {
        fVar11 = (pGVar8->fields).value;
      }
    }
    if (fVar10 <= fVar11) {
      fVar10 = fVar11;
    }
    (*(pUVar4->klass->vtable)._32_set_minWidth.methodPtr)
              (pUVar4,fVar10,(pUVar4->klass->vtable)._32_set_minWidth.method);
    (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar4,fVar13,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_GisketchButtonWidthMeasure);
    if ((__this != (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *)0x0) ||
       (__this = UnityEngine_GameObject__AddComponent_object_
                           (go,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonWidthMeasure),
       __this != (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *)0x0)) {
      Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__Setup
                (__this,fVar11,fStackX_c + fStackX_c + fVar12,(MethodInfo *)0x0);
      return;
    }
  }
label_1818dbb30:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$AllowButtonTextClipping
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AllowButtonTextClipping (UnityEngine_GameObject_o* go, TMPro_TextMeshProUGUI_o* text, float minWidth, const MethodInfo* method);
// 0x1818db280

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AllowButtonTextClipping
               (UnityEngine_GameObject_o *go,TMPro_TextMeshProUGUI_o *text,float minWidth,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *__this;
  float fVar3;
  
  if (Il2CppMethodInitialized_184342142 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchButtonWidthMeasure);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342142 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818db3f1;
    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,false,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                         );
      if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1818db3f1;
    }
    fVar3 = 0.0;
    if (0.0 <= minWidth) {
      fVar3 = minWidth;
    }
    (*(pUVar2->klass->vtable)._32_set_minWidth.methodPtr)
              (pUVar2,fVar3,(pUVar2->klass->vtable)._32_set_minWidth.method);
    fVar3 = 0.0;
    if (0.0 <= minWidth) {
      fVar3 = minWidth;
    }
    (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar2,fVar3,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
    __this = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)
                           MethodInfo_UnityEngine_GameObject_GetComponent_GisketchButtonWidthMeasure);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this == (Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure_o *)0x0) goto label_1818db3f1;
      Gisketch_Aottg2UI_State_GisketchButtonWidthMeasure__Setup(__this,minWidth,0.0,(MethodInfo *)0x0);
    }
    return;
  }
label_1818db3f1:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ButtonTextAlignment
// il2cpp: int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonTextAlignment (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, bool hasIcon, const MethodInfo* method);
// 0x1818e7300

int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonTextAlignment
                  (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,bool hasIcon,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184342143 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"left");
    Il2CppMethodInitialized_184342143 = '\x01';
  }
  if (hasIcon) {
    return 0x1001;
  }
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    a = (style->fields).textAlignment;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(a,"left",5,(MethodInfo *)0x0);
    if (bVar1) {
      return 0x1001;
    }
  }
  return 0x202;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$TextAlignment
// il2cpp: int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextAlignment (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818ed1c0

int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextAlignment
                  (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_184342144 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"right");
    il2cpp_codegen_initialize_runtime_metadata(&"center");
    Il2CppMethodInitialized_184342144 = '\x01';
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    return 0x1001;
  }
  pSVar1 = (style->fields).textAlignment;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar2 = System_String__Equals_196c550(pSVar1,"right",5,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar1 = (style->fields).textAlignment;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(pSVar1,"center",5,(MethodInfo *)0x0);
    iVar3 = 0x202;
    if (!bVar2) {
      iVar3 = 0x1001;
    }
    return iVar3;
  }
  return 0x1004;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$PointLength
// il2cpp: float Gisketch_Aottg2UI_Building_GisketchScreenBuilder__PointLength (Gisketch_Aottg2UI_Data_GisketchLength_o* length, float fallback, const MethodInfo* method);
// 0x1818ea560

float Gisketch_Aottg2UI_Building_GisketchScreenBuilder__PointLength
                (Gisketch_Aottg2UI_Data_GisketchLength_o *length,float fallback,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (length != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    a = (length->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(a,"point",5,(MethodInfo *)0x0);
    if (bVar1) {
      return (length->fields).value;
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$AddFocusRing
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AddFocusRing (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, bool visible, const MethodInfo* method);
// 0x1818db150

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AddFocusRing
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,bool visible,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *__this;
  UnityEngine_Color_o *pUVar1;
  UnityEngine_Color_Fields local_28;
  UnityEngine_Color_o local_18;
  
  if (Il2CppMethodInitialized_184342146 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"focusRing");
    Il2CppMethodInitialized_184342146 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusRing);
    if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      local_28.r = 1.0;
      local_28.g = 1.0;
      local_28.b = 1.0;
      local_28.a = 1.0;
      pUVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (&local_18,theme,"primary",(UnityEngine_Color_o *)&local_28,
                          (MethodInfo *)0x0);
      local_28.r = (pUVar1->fields).r;
      local_28.g = (pUVar1->fields).g;
      local_28.b = (pUVar1->fields).b;
      local_28.a = (pUVar1->fields).a;
      pUVar1 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (&local_18,theme,"focusRing",(UnityEngine_Color_o *)&local_28,
                          (MethodInfo *)0x0);
      if (__this != (Gisketch_Aottg2UI_Actions_GisketchFocusRing_o *)0x0) {
        local_28.r = (pUVar1->fields).r;
        local_28.g = (pUVar1->fields).g;
        local_28.b = (pUVar1->fields).b;
        local_28.a = (pUVar1->fields).a;
        Gisketch_Aottg2UI_Actions_GisketchFocusRing__Setup
                  (__this,(UnityEngine_Color_o *)&local_28,3.0,5.0,14.0,visible,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonContent
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818df100

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          MethodInfo *method)

{
  UnityEngine_RectTransform_o *pUVar1;
  UnityEngine_RectTransform_o *local_res8;
  
  if (Il2CppMethodInitialized_184342147 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_184342147 = '\x01';
  }
  local_res8 = (UnityEngine_RectTransform_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pUVar1 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent_18df180
                     (parent,style,false,(UnityEngine_Sprite_o *)0x0,&local_res8,(MethodInfo *)0x0);
  return pUVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonContent
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, bool reveal, UnityEngine_Sprite_o* maskSprite, UnityEngine_RectTransform_o** mask, const MethodInfo* method);
// 0x1818df180

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent_18df180
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          bool reveal,UnityEngine_Sprite_o *maskSprite,UnityEngine_RectTransform_o **mask,MethodInfo *method)

{
  System_String_o *a;
  Il2CppType *handle;
  bool bVar1;
  int32_t iVar2;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_UI_HorizontalLayoutGroup_o *__this_01;
  UnityEngine_RectOffset_o *__this_02;
  float value;
  
  if (Il2CppMethodInitialized_184342148 == '\0') {
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
    Il2CppMethodInitialized_184342148 = '\x01';
  }
  *mask = (UnityEngine_RectTransform_o *)0x0;
  Il2CppCodeGenWriteBarrier(mask,(void *)0x0);
  if (reveal) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    parent = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildBrushRevealMask
                       (parent,maskSprite,mask,(MethodInfo *)0x0);
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_1818df4eb;
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
  Il2CppCodeGenWriteBarrier(components->m_Items,obj);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Button Content",components,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (__this == (UnityEngine_GameObject_o *)0x0) goto label_1818df4eb;
  __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_1818df4eb;
  UnityEngine_Transform__SetParent_2f5a7e0
            (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
  rect = UnityEngine_GameObject__GetComponent_object_
                   (__this,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
  __this_01 = UnityEngine_GameObject__AddComponent_object_
                        (__this,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_HorizontalLayoutGroup);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
label_1818df3d3:
    iVar2 = 4;
  }
  else {
    a = (style->fields).textAlignment;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(a,"left",5,(MethodInfo *)0x0);
    iVar2 = 3;
    if (!bVar1) goto label_1818df3d3;
  }
  if (__this_01 == (UnityEngine_UI_HorizontalLayoutGroup_o *)0x0) {
label_1818df4eb:
    ThrowNullReferenceException();
  }
  UnityEngine_UI_LayoutGroup__set_childAlignment
            ((UnityEngine_UI_LayoutGroup_o *)__this_01,iVar2,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlWidth
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,true,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childControlHeight
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,true,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandWidth
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
  UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_childForceExpandHeight
            ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,false,(MethodInfo *)0x0);
  if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
     ((style->fields).gap.fields.hasValue == false)) {
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,6.0,(MethodInfo *)0x0);
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_1818df463;
  }
  else {
    value = System_Nullable_float___get_Value
                      (&(style->fields).gap,(MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    UnityEngine_UI_HorizontalOrVerticalLayoutGroup__set_spacing
              ((UnityEngine_UI_HorizontalOrVerticalLayoutGroup_o *)__this_01,value,(MethodInfo *)0x0);
label_1818df463:
    mask = *(UnityEngine_RectTransform_o ***)&(style->fields).paddingX.fields;
    if ((SUB81(mask,0) != false) ||
       (mask = *(UnityEngine_RectTransform_o ***)&(style->fields).padding.fields, SUB81(mask,0) != false)) {
      goto label_1818df496;
    }
  }
  mask._4_4_ = 0x41800000;
label_1818df496:
  iVar2 = il2cpp_runtime_helper_181290af0(mask._4_4_,0);
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_RectOffset);
  UnityEngine_RectOffset___ctor_2ed1030(__this_02,iVar2,iVar2,0,0,(MethodInfo *)0x0);
  UnityEngine_UI_LayoutGroup__set_padding
            ((UnityEngine_UI_LayoutGroup_o *)__this_01,__this_02,(MethodInfo *)0x0);
  return rect;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildBrushRevealMask
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildBrushRevealMask (UnityEngine_RectTransform_o* parent, UnityEngine_Sprite_o* maskSprite, UnityEngine_RectTransform_o** mask, const MethodInfo* method);
// 0x1818de1b0

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
  UnityEngine_RectTransform_o *value;
  UnityEngine_UI_Image_o *__this_01;
  UnityEngine_UI_Mask_o *__this_02;
  
  if (Il2CppMethodInitialized_184342149 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Mask);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Brush Reveal Mask");
    Il2CppMethodInitialized_184342149 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Brush Reveal Mask",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        value = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        *mask = value;
        Il2CppCodeGenWriteBarrier(mask,value);
        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(*mask,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__AddComponent_object_
                              (__this,(MethodInfo_6F4D60 *)
                                      MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        if (__this_01 != (UnityEngine_UI_Image_o *)0x0) {
          UnityEngine_UI_Image__set_sprite(__this_01,maskSprite,(MethodInfo *)0x0);
          UnityEngine_UI_Image__set_type(__this_01,1,(MethodInfo *)0x0);
          (*(__this_01->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (__this_01,false,(__this_01->klass->vtable)._25_set_raycastTarget.method);
          __this_02 = UnityEngine_GameObject__AddComponent_object_
                                (__this,(MethodInfo_6F4D60 *)
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
// 0x1818e11a0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildDropdown
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_array *options;
  UnityEngine_Events_UnityEvent_o *pUVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o *object;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *__this;
  UnityEngine_GameObject_o *arrow;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar5;
  TMPro_TextMeshProUGUI_o *label;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *value;
  Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *pGVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_UI_Button_o *pUVar8;
  System_String_o *pSVar9;
  
  if (Il2CppMethodInitialized_18434214a == '\0') {
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
    Il2CppMethodInitialized_18434214a = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass19_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar3 = (node->fields).layout;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pGVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceLayout(pGVar3,(MethodInfo *)0x0);
    (node->fields).layout = pGVar3;
    Il2CppCodeGenWriteBarrier(&(node->fields).layout,pGVar3);
    if (go != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      __this = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
                         (pUVar4,node,"buttonQuiet",(System_String_o *)0x0,context,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      bVar2 = System_String__IsNullOrEmpty((node->fields).choiceArrowStyle,(MethodInfo *)0x0);
      pSVar9 = "buttonPrimary";
      if (!bVar2) {
        pSVar9 = (node->fields).choiceArrowStyle;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      arrow = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
                        (pUVar4,node,pSVar9,"down",context,(MethodInfo *)0x0);
      pGVar5 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceControl);
      if (object != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass19_0_o *)0x0) {
        (object->fields).control = pGVar5;
        Il2CppCodeGenWriteBarrier(&(object->fields).control,pGVar5);
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          options = (node->fields).options;
          pGVar5 = (object->fields).control;
          pSVar9 = (node->fields).value;
          label = UnityEngine_GameObject__GetComponentInChildren_object_
                            (__this,(MethodInfo_6F5040 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI);
          if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
             (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0)) {
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__Setup
                      (pGVar5,node,pSVar9,options,label,(node->fields).maxVisibleItems,arrow,
                       (context->fields).Actions,(context->fields).Localizer,(MethodInfo *)0x0);
            value = UnityEngine_GameObject__AddComponent_object_
                              (go,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
            (object->fields).sound = value;
            Il2CppCodeGenWriteBarrier(&(object->fields).sound,value);
            pGVar6 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceButton
                               (go,(context->fields).Theme,(object->fields).control,false,(MethodInfo *)0x0);
            if (pGVar6 != (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *)0x0) {
              pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pGVar6->fields).m_OnClick;
              pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass19_0_BuildDropdown_b__0
                         ,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar7,(MethodInfo *)0x0);
                pUVar8 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
                                   (__this,(node->fields).action,(MethodInfo *)0x0);
                if (pUVar8 != (UnityEngine_UI_Button_o *)0x0) {
                  pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar8->fields).m_OnClick;
                  pGVar5 = (object->fields).control;
                  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                  UnityEngine_Events_UnityAction___ctor
                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)pGVar5,
                             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_Open,
                             (MethodInfo *)0x0);
                  if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                    UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar7,(MethodInfo *)0x0);
                    pUVar8 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
                                       (arrow,(node->fields).action,(MethodInfo *)0x0);
                    if (pUVar8 != (UnityEngine_UI_Button_o *)0x0) {
                      pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar8->fields).m_OnClick;
                      pGVar5 = (object->fields).control;
                      pUVar7 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,
                                 (Il2CppObject *)pGVar5,
                                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_Open,
                                 (MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar7,(MethodInfo *)0x0);
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
// 0x1818e4060

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSelect
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_array *options;
  System_String_o *value;
  UnityEngine_Events_UnityEvent_o *pUVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o *object;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_GameObject_o *go_00;
  UnityEngine_GameObject_o *__this;
  UnityEngine_GameObject_o *go_01;
  Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *pGVar5;
  TMPro_TextMeshProUGUI_o *label;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *value_00;
  Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *pGVar6;
  UnityEngine_Events_UnityAction_o *pUVar7;
  UnityEngine_UI_Button_o *pUVar8;
  
  if (Il2CppMethodInitialized_18434214b == '\0') {
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
    Il2CppMethodInitialized_18434214b = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar3 = (node->fields).layout;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pGVar3 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceLayout(pGVar3,(MethodInfo *)0x0);
    (node->fields).layout = pGVar3;
    Il2CppCodeGenWriteBarrier(&(node->fields).layout,pGVar3);
    if (go != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      go_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
                        (pUVar4,node,"buttonPrimary","left",context,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      __this = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
                         (pUVar4,node,"buttonQuiet",(System_String_o *)0x0,context,(MethodInfo *)0x0);
      pUVar4 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
      go_01 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
                        (pUVar4,node,"buttonPrimary","right",context,(MethodInfo *)0x0);
      pGVar5 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceControl);
      if (object != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass20_0_o *)0x0) {
        (object->fields).control = pGVar5;
        Il2CppCodeGenWriteBarrier(&(object->fields).control,pGVar5);
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          options = (node->fields).options;
          pGVar5 = (object->fields).control;
          value = (node->fields).value;
          label = UnityEngine_GameObject__GetComponentInChildren_object_
                            (__this,(MethodInfo_6F5040 *)
                                    MethodInfo_UnityEngine_GameObject_GetComponentInChildren_TextMeshProUGUI);
          if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
             (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0)) {
            Gisketch_Aottg2UI_Actions_AottgChoiceControl__Setup
                      (pGVar5,node,value,options,label,(node->fields).maxVisibleItems,
                       (UnityEngine_GameObject_o *)0x0,(context->fields).Actions,(context->fields).Localizer,
                       (MethodInfo *)0x0);
            value_00 = UnityEngine_GameObject__AddComponent_object_
                                 (go,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
            (object->fields).sound = value_00;
            Il2CppCodeGenWriteBarrier(&(object->fields).sound,value_00);
            pGVar6 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceButton
                               (go,(context->fields).Theme,(object->fields).control,true,(MethodInfo *)0x0);
            if (pGVar6 != (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *)0x0) {
              pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pGVar6->fields).m_OnClick;
              pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
              UnityEngine_Events_UnityAction___ctor
                        ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,(Il2CppObject *)object,
                         (intptr_t)
                         MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__0
                         ,(MethodInfo *)0x0);
              if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar7,(MethodInfo *)0x0);
                pUVar8 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
                                   (go_00,(node->fields).action,(MethodInfo *)0x0);
                pGVar5 = (object->fields).control;
                if (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                  bVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep(pGVar5,(MethodInfo *)0x0);
                  if (pUVar8 != (UnityEngine_UI_Button_o *)0x0) {
                    UnityEngine_UI_Selectable__set_interactable
                              ((UnityEngine_UI_Selectable_o *)pUVar8,bVar2,(MethodInfo *)0x0);
                    pGVar5 = (object->fields).control;
                    if (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                      bVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep
                                        (pGVar5,(MethodInfo *)0x0);
                      Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual
                                (go_00,bVar2,(MethodInfo *)0x0);
                      pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar8->fields).m_OnClick;
                      pUVar7 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                      UnityEngine_Events_UnityAction___ctor
                                ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,
                                 (Il2CppObject *)object,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__1
                                 ,(MethodInfo *)0x0);
                      if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                        UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar7,(MethodInfo *)0x0);
                        pUVar8 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
                                           (__this,(node->fields).action,(MethodInfo *)0x0);
                        if (pUVar8 != (UnityEngine_UI_Button_o *)0x0) {
                          pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar8->fields).m_OnClick;
                          pGVar5 = (object->fields).control;
                          pUVar7 = il2cpp_codegen_object_new
                                             ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                          UnityEngine_Events_UnityAction___ctor
                                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,
                                     (Il2CppObject *)pGVar5,
                                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Actions_AottgChoiceControl_Open,
                                     (MethodInfo *)0x0);
                          if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                            UnityEngine_Events_UnityEvent__AddListener(pUVar1,pUVar7,(MethodInfo *)0x0);
                            pUVar8 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
                                               (go_01,(node->fields).action,(MethodInfo *)0x0);
                            pGVar5 = (object->fields).control;
                            if (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                              bVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep
                                                (pGVar5,(MethodInfo *)0x0);
                              if (pUVar8 != (UnityEngine_UI_Button_o *)0x0) {
                                UnityEngine_UI_Selectable__set_interactable
                                          ((UnityEngine_UI_Selectable_o *)pUVar8,bVar2,(MethodInfo *)0x0);
                                pGVar5 = (object->fields).control;
                                if (pGVar5 != (Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *)0x0) {
                                  bVar2 = Gisketch_Aottg2UI_Actions_AottgChoiceControl__get_CanStep
                                                    (pGVar5,(MethodInfo *)0x0);
                                  Gisketch_Aottg2UI_Actions_AottgChoiceOptions__ApplyDisabledArrowVisual
                                            (go_01,bVar2,(MethodInfo *)0x0);
                                  pUVar1 = (UnityEngine_Events_UnityEvent_o *)(pUVar8->fields).m_OnClick;
                                  pUVar7 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
                                  UnityEngine_Events_UnityAction___ctor
                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)pUVar7,
                                             (Il2CppObject *)object,
                                             (intptr_t)
                                             MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass20_0_BuildSelect_b__2
                                             ,(MethodInfo *)0x0);
                                  if (pUVar1 != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                    UnityEngine_Events_UnityEvent__AddListener
                                              (pUVar1,pUVar7,(MethodInfo *)0x0);
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
// 0x1818e74a0

Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceButton
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
          Gisketch_Aottg2UI_Actions_AottgChoiceControl_o *control,bool selectMode,MethodInfo *method)

{
  UnityEngine_UI_Image_o *value;
  Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *__this;
  UnityEngine_Color_Fields local_58;
  UnityEngine_UI_Navigation_Fields local_48;
  
  if (Il2CppMethodInitialized_18434214c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceButton);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_18434214c = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    value = UnityEngine_GameObject__AddComponent_object_
                      (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    if (value != (UnityEngine_UI_Image_o *)0x0) {
      local_58.r = 0.0;
      local_58.g = 0.0;
      local_58.b = 0.0;
      local_58.a = 0.0;
      (*(value->klass->vtable)._23_set_color.methodPtr)
                (value,(UnityEngine_Color_o *)&local_58,(value->klass->vtable)._23_set_color.method);
      (*(value->klass->vtable)._25_set_raycastTarget.methodPtr)
                (value,true,(value->klass->vtable)._25_set_raycastTarget.method);
      __this = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_AottgChoiceButton);
      if (__this != (Gisketch_Aottg2UI_Actions_AottgChoiceButton_o *)0x0) {
        Gisketch_Aottg2UI_Actions_AottgChoiceButton__Setup(__this,control,selectMode,(MethodInfo *)0x0);
        UnityEngine_UI_Selectable__set_targetGraphic
                  ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Graphic_o *)value,(MethodInfo *)0x0);
        UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,0,(MethodInfo *)0x0);
        local_48.m_Mode = 3;
        local_48.m_WrapAround = false;
        local_48._5_3_ = 0;
        local_48.m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
        local_48.m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
        local_48.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
        local_48.m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
        UnityEngine_UI_Selectable__set_navigation
                  ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Navigation_o *)&local_48,
                   (MethodInfo *)0x0);
        UnityEngine_GameObject__AddComponent_object_
                  (go,(MethodInfo_6F4D60 *)
                      MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AddFocusRing(go,theme,true,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChoicePart
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* owner, System_String_o* styleName, System_String_o* icon, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e7a10
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e7cb3: mov rbx, qword ptr [rip + 0x27ce60e]  ; "primary"
// asm:   0x1818e7d27: mov r13, qword ptr [rsp + 0xb8]
// asm:   0x1818e7d2f: jmp 0x1818e7d43
// asm:   0x1818e80d9: mov r13, qword ptr [rsp + 0xc8]

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePart
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *owner,
          System_String_o *styleName,System_String_o *icon,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  float fVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  UnityEngine_Vector2_o offset;
  Il2CppType *pIVar4;
  char cVar5;
  bool bVar6;
  bool bVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_Type_array *pSVar8;
  System_Type_o *pSVar9;
  Il2CppObject *pIVar10;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_UI_Image_o *image;
  UnityEngine_RectTransform_o *pUVar12;
  UnityEngine_GameObject_o *__this_00;
  TMPro_TextMeshProUGUI_o *text;
  UnityEngine_Vector4_o *pUVar13;
  Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *__this_01;
  UnityEngine_UI_RectMask2D_o *pressMask;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_02;
  System_Nullable_float__Fields pressDepth;
  int32_t value;
  System_String_o *pSVar14;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar15;
  float fVar16;
  UnityEngine_RectTransform_o *local_res10;
  UnityEngine_RectTransform_o *local_res18;
  System_String_o *local_res20;
  UnityEngine_Vector4_o local_68 [3];
  
  local_res20 = icon;
  if (Il2CppMethodInitialized_18434214d == '\0') {
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
    Il2CppMethodInitialized_18434214d = '\x01';
  }
  local_res10 = (UnityEngine_RectTransform_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  node = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonNode(owner,styleName,icon,(MethodInfo *)0x0);
  if (((context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
      (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) ||
     (pGVar2 = (context->fields).Theme, pGVar2 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
  goto label_1818e8348;
  style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar2,(node->fields).style,(MethodInfo *)0x0);
  pSVar14 = (node->fields).id;
  pSVar8 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  pIVar4 = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar9 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar4,(MethodInfo *)0x0);
  if (pSVar8 == (System_Type_array *)0x0) goto label_1818e8348;
  if ((pSVar9 != (System_Type_o *)0x0) &&
     (pIVar10 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar9,(((pSVar8->obj).klass)->_1).element_class),
     pIVar10 == (Il2CppObject *)0x0)) {
    pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
  }
  if ((int)pSVar8->max_length == 0) {
label_1818e836e:
    ThrowIndexOutOfRangeException();
  }
  pSVar8->m_Items[0] = pSVar9;
  Il2CppCodeGenWriteBarrier(pSVar8->m_Items,pSVar9);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1abe0(__this,pSVar14,pSVar8,(MethodInfo *)0x0);
  if ((__this == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar11 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
     pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_1818e8348;
  UnityEngine_Transform__SetParent_2f5a7e0(pUVar11,parent,false,(MethodInfo *)0x0);
  local_res10 = (UnityEngine_RectTransform_o *)0x0;
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    fVar16 = 0.0;
  }
  else {
    pGVar2 = (context->fields).Theme;
    if (pGVar2 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818e8348;
    fVar16 = (style->fields).relief.fields.value * (pGVar2->fields)._ReliefIntensity_k__BackingField;
  }
  cVar5 = il2cpp_runtime_helper_180562af0(fVar16,0,0);
  if (cVar5 == '\0') {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    image = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonFace
                      (__this,style,context,fVar16,&local_res10,(MethodInfo *)0x0);
  }
  else {
    pGVar2 = (context->fields).Theme;
    pSVar14 = "primary";
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pSVar14 = (style->fields).background;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    image = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                      (__this,style,pGVar2,pSVar14,false,(MethodInfo *)0x0);
  }
  pUVar12 = local_res10;
  text = (TMPro_TextMeshProUGUI_o *)0x0;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pUVar12 = local_res10;
  if (!bVar6) {
    pUVar12 = UnityEngine_GameObject__GetComponent_object_
                        (__this,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  }
  bVar6 = System_String__IsNullOrEmpty((node->fields).text,(MethodInfo *)0x0);
  if (bVar6) {
    bVar6 = System_String__IsNullOrEmpty((node->fields).textKey,(MethodInfo *)0x0);
    bVar6 = !bVar6;
  }
  else {
    bVar6 = true;
  }
  if ((node->fields).hasIcon == false) {
    bVar7 = System_String__IsNullOrEmpty((node->fields).icon,(MethodInfo *)0x0);
    bVar7 = !bVar7;
  }
  else {
    bVar7 = true;
  }
  if ((bVar6 & bVar7) != 0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_184342147 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      Il2CppMethodInitialized_184342147 = '\x01';
    }
    local_res18 = (UnityEngine_RectTransform_o *)0x0;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pUVar12 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonContent_18df180
                        (pUVar12,style,false,(UnityEngine_Sprite_o *)0x0,&local_res18,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonIcon
            (node,pUVar12,style,context,bVar6,(MethodInfo *)0x0);
  pSVar14 = local_res20;
  if (bVar6 != false) {
    pSVar8 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    pIVar4 = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
    }
    pSVar9 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)pIVar4,(MethodInfo *)0x0);
    if (pSVar8 == (System_Type_array *)0x0) goto label_1818e8348;
    if ((pSVar9 != (System_Type_o *)0x0) &&
       (pIVar10 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar9,(((pSVar8->obj).klass)->_1).element_class),
       pIVar10 == (Il2CppObject *)0x0)) {
      pIVar10 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar10,(MethodInfo *)0x0);
    }
    if ((int)pSVar8->max_length == 0) goto label_1818e836e;
    pSVar8->m_Items[0] = pSVar9;
    Il2CppCodeGenWriteBarrier(pSVar8->m_Items,pSVar9);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this_00,"AoTTG Button Label",pSVar8,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar11 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
       pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_1818e8348;
    UnityEngine_Transform__SetParent_2f5a7e0
              (pUVar11,(UnityEngine_Transform_o *)pUVar12,false,(MethodInfo *)0x0);
    if (bVar7 == false) {
      pUVar12 = UnityEngine_GameObject__GetComponent_object_
                          (__this_00,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(pUVar12,(MethodInfo *)0x0);
    }
    text = UnityEngine_GameObject__AddComponent_object_
                     (__this_00,
                      (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText(text,node,style,context,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184342143 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"left");
      Il2CppMethodInitialized_184342143 = '\x01';
    }
    if (bVar7 == false) {
      if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        pSVar14 = (style->fields).textAlignment;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar6 = System_String__Equals_196c550(pSVar14,"left",5,(MethodInfo *)0x0);
        if (bVar6) goto label_1818e7ffe;
      }
      value = 0x202;
    }
    else {
label_1818e7ffe:
      value = 0x1001;
    }
    if (text == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818e8348;
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)text,value,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,false,(MethodInfo *)0x0);
    TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
    pSVar14 = local_res20;
    bVar6 = System_String__IsNullOrEmpty(local_res20,(MethodInfo *)0x0);
    if (bVar6) {
      pUVar13 = (*(text->klass->vtable)._73_get_margin.methodPtr)
                          (local_68,text,(text->klass->vtable)._73_get_margin.method);
      fVar1 = (pUVar13->fields).y;
      pUVar13 = (*(text->klass->vtable)._73_get_margin.methodPtr)
                          (local_68,text,(text->klass->vtable)._73_get_margin.method);
      local_68[0].fields.w = (pUVar13->fields).w;
      local_68[0].fields.x = 12.0;
      local_68[0].fields.z = 12.0;
      local_68[0].fields.y = fVar1;
      (*(text->klass->vtable)._74_set_margin.methodPtr)
                (text,local_68,(text->klass->vtable)._74_set_margin.method);
      Gisketch_Aottg2UI_Actions_GisketchHoverMarqueeText__Setup(__this,text,true,(MethodInfo *)0x0);
    }
  }
  cVar5 = il2cpp_runtime_helper_180562af0(fVar16,0,0);
  if (cVar5 == '\0') {
    __this_01 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonRelief);
    pUVar12 = local_res10;
    pressMask = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pressDepth.hasValue = false;
      pressDepth._1_3_ = 0;
      pressDepth.value = 0.0;
    }
    else {
      pressDepth = (style->fields).pressDepth.fields;
    }
    if (__this_01 == (Gisketch_Aottg2UI_Tweening_GisketchButtonRelief_o *)0x0) goto label_1818e8348;
    Gisketch_Aottg2UI_Tweening_GisketchButtonRelief__Setup
              (__this_01,image,pUVar12,fVar16,pressMask,(System_Nullable_float__o)pressDepth,(MethodInfo *)0x0
              );
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyButtonMeasure
            (__this,node,text,style,bVar7,(MethodInfo *)0x0);
  bVar6 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
  if (bVar6) {
    if ((node->fields).layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar15 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar15 = (((node->fields).layout)->fields).minWidth;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_184342145 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_184342145 = '\x01';
    }
    if (pGVar15 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818e823b:
      fVar16 = 0.0;
    }
    else {
      pSVar14 = (pGVar15->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar6 = System_String__Equals_196c550(pSVar14,"point",5,(MethodInfo *)0x0);
      if (!bVar6) goto label_1818e823b;
      fVar16 = (pGVar15->fields).value;
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AllowButtonTextClipping
              (__this,text,fVar16,(MethodInfo *)0x0);
  }
  flex = UnityEngine_GameObject__AddComponent_object_
                   (__this,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
  pGVar3 = (node->fields).layout;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex(flex,pGVar3,style,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyAspectRatio(__this,style,(MethodInfo *)0x0);
  pGVar3 = (node->fields).layout;
  if (Il2CppMethodInitialized_18434216f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset);
    Il2CppMethodInitialized_18434216f = '\x01';
  }
  if ((pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
     ((cVar5 = il2cpp_runtime_helper_180562af0((pGVar3->fields).offsetX,0), cVar5 == '\0' ||
      (cVar5 = il2cpp_runtime_helper_180562af0((pGVar3->fields).offsetY,0), cVar5 == '\0')))) {
    __this_02 = UnityEngine_GameObject__AddComponent_object_
                          (__this,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset);
    if (__this_02 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
label_1818e8348:
      ThrowNullReferenceException();
    }
    offset.fields.y = (pGVar3->fields).offsetY;
    offset.fields.x = (pGVar3->fields).offsetX;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup(__this_02,offset,(MethodInfo *)0x0);
  }
  return __this;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChoicePartButton
// il2cpp: UnityEngine_UI_Button_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton (UnityEngine_GameObject_o* go, System_String_o* action, const MethodInfo* method);
// 0x1818e7890

UnityEngine_UI_Button_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoicePartButton
          (UnityEngine_GameObject_o *go,System_String_o *action,MethodInfo *method)

{
  UnityEngine_Events_UnityEvent_o *__this;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *object;
  UnityEngine_UI_Button_o *__this_00;
  UnityEngine_UI_Image_o *value;
  UnityEngine_Events_UnityAction_o *__this_01;
  UnityEngine_UI_Navigation_Fields local_38;
  
  if (Il2CppMethodInitialized_18434214e == '\0') {
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
    Il2CppMethodInitialized_18434214e = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    object = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound);
    if (object != (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0) {
      (object->fields)._action = action;
      Il2CppCodeGenWriteBarrier(&(object->fields)._action,action);
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Button);
      if (__this_00 != (UnityEngine_UI_Button_o *)0x0) {
        UnityEngine_UI_Selectable__set_transition
                  ((UnityEngine_UI_Selectable_o *)__this_00,0,(MethodInfo *)0x0);
        local_38.m_Mode = 0;
        local_38.m_WrapAround = false;
        local_38._5_3_ = 0;
        local_38.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
        local_38.m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
        local_38.m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
        local_38.m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
        UnityEngine_UI_Selectable__set_navigation
                  ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Navigation_o *)&local_38,
                   (MethodInfo *)0x0);
        value = UnityEngine_GameObject__GetComponentInChildren_object_
                          (go,(MethodInfo_6F5040 *)
                              MethodInfo_UnityEngine_GameObject_GetComponentInChildren_Image);
        UnityEngine_UI_Selectable__set_targetGraphic
                  ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Graphic_o *)value,
                   (MethodInfo *)0x0);
        UnityEngine_GameObject__AddComponent_object_
                  (go,(MethodInfo_6F4D60 *)
                      MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
        __this = (UnityEngine_Events_UnityEvent_o *)(__this_00->fields).m_OnClick;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Events_UnityAction);
        UnityEngine_Events_UnityAction___ctor
                  ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
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
// 0x1818e7110

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
  
  if (Il2CppMethodInitialized_18434214f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"value");
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    Il2CppMethodInitialized_18434214f = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Button";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Button");
    if (owner != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pSVar3 = "value";
      if (!bVar1) {
        pSVar3 = icon;
      }
      pSVar3 = System_String__Concat_1969b70
                         ((owner->fields).id,"-",pSVar3,(MethodInfo *)0x0);
      (__this->fields).id = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).id,pSVar3);
      if (bVar1) {
        pSVar3 = (owner->fields).value;
      }
      else {
        pSVar3 = (System_String_o *)0x0;
      }
      (__this->fields).text = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).text,pSVar3);
      (__this->fields).icon = icon;
      Il2CppCodeGenWriteBarrier(&(__this->fields).icon,icon);
      bVar2 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
      (__this->fields).style = style;
      (__this->fields).hasIcon = !bVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).style,style);
      if (!bVar1) {
        __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0;
label_1818e72d4:
        (__this->fields).layout = __this_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).layout,__this_00);
        return __this;
      }
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
      Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_00,(MethodInfo *)0x0);
      if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_00->fields).grow = 1.0;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        Gisketch_Aottg2UI_Data_GisketchLength___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_01,(MethodInfo *)0x0);
        if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          (__this_01->fields).value = 180.0;
          (__this_01->fields).unit = "point";
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).unit,"point");
          (__this_00->fields).minWidth = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).minWidth,__this_01);
          goto label_1818e72d4;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$RowLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RowLayout (const MethodInfo* method);
// 0x1818ea9e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RowLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  
  if (Il2CppMethodInitialized_184342150 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184342150 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).direction = "Row";
    Il2CppCodeGenWriteBarrier(&(__this->fields).direction,"Row");
    (__this->fields).alignItems = "Center";
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems,"Center");
    (__this->fields).gap = 0.0;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (__this_00->fields).value = 100.0;
      (__this_00->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit,"percent");
      (__this->fields).width = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).width,__this_00);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChoiceLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceLayout (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x1818e7650

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChoiceLayout
          (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  
  if (Il2CppMethodInitialized_184342151 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184342151 = '\x01';
  }
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_184342150 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      il2cpp_codegen_initialize_runtime_metadata(&"percent");
      il2cpp_codegen_initialize_runtime_metadata(&"Center");
      il2cpp_codegen_initialize_runtime_metadata(&"Row");
      Il2CppMethodInitialized_184342150 = '\x01';
    }
    layout = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(layout,(MethodInfo *)0x0);
    if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_1818e787f;
    (layout->fields).direction = "Row";
    Il2CppCodeGenWriteBarrier(&(layout->fields).direction,"Row");
    (layout->fields).alignItems = "Center";
    Il2CppCodeGenWriteBarrier(&(layout->fields).alignItems,"Center");
    (layout->fields).gap = 0.0;
    pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_1818e787f;
    (pGVar2->fields).value = 100.0;
    (pGVar2->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).unit,"percent");
    (layout->fields).width = pGVar2;
    Il2CppCodeGenWriteBarrier(&(layout->fields).width,pGVar2);
  }
  bVar1 = System_String__IsNullOrEmpty((layout->fields).direction,(MethodInfo *)0x0);
  if (bVar1) {
    (layout->fields).direction = "Row";
    Il2CppCodeGenWriteBarrier(&(layout->fields).direction,"Row");
  }
  bVar1 = System_String__IsNullOrEmpty((layout->fields).alignItems,(MethodInfo *)0x0);
  if (bVar1) {
    (layout->fields).alignItems = "Center";
    Il2CppCodeGenWriteBarrier(&(layout->fields).alignItems,"Center");
  }
  if ((layout->fields).width == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar2,(MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818e787f:
      ThrowNullReferenceException();
    }
    (pGVar2->fields).value = 100.0;
    (pGVar2->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).unit,"percent");
    (layout->fields).width = pGVar2;
    Il2CppCodeGenWriteBarrier(&(layout->fields).width,pGVar2);
  }
  return layout;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildColorSwatch
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildColorSwatch (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e0eb0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildColorSwatch
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  bool bVar1;
  UnityEngine_UI_Image_o *pUVar2;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  System_String_o *pSVar5;
  char cVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  UnityEngine_Color_Fields local_38 [2];
  
  if (Il2CppMethodInitialized_184342152 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    Il2CppMethodInitialized_184342152 = '\x01';
  }
  if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_1818e119a;
  theme = (context->fields).Theme;
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    cVar6 = '\0';
    pSVar5 = "surface";
  }
  else {
    cVar6 = (style->fields).reliefGradient.fields.value;
    pSVar5 = (style->fields).background;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pUVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                     (go,style,theme,pSVar5,cVar6 != '\0',(MethodInfo *)0x0);
  if ((node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     (pUVar2 == (UnityEngine_UI_Image_o *)0x0)) goto label_1818e119a;
  pSVar5 = (node->fields).value;
  pUVar3 = (*(pUVar2->klass->vtable)._22_get_color.methodPtr)
                     ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_38,pUVar2,
                      (pUVar2->klass->vtable)._22_get_color.method);
  fVar9 = *(float *)&(pUVar3->fields).m_Ptr;
  fVar8 = *(float *)((longlong)&(pUVar3->fields).m_Ptr + 4);
  fVar10 = (float)(pUVar3->fields).m_Count;
  fVar11 = *(float *)&(pUVar3->fields).field_0xc;
  local_38[0].r = 0.0;
  local_38[0].g = 0.0;
  local_38[0].b = 0.0;
  local_38[0].a = 0.0;
  bVar1 = UnityEngine_ColorUtility__TryParseHtmlString
                    (pSVar5,(UnityEngine_Color_o *)local_38,(MethodInfo *)0x0);
  if (bVar1) {
    fVar9 = local_38[0].r;
    fVar8 = local_38[0].g;
    fVar10 = local_38[0].b;
    fVar11 = local_38[0].a;
  }
  local_38[0].g = fVar8;
  local_38[0].r = fVar9;
  local_38[0].a = fVar11;
  local_38[0].b = fVar10;
  (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
            (pUVar2,(UnityEngine_Color_o *)local_38,(pUVar2->klass->vtable)._23_set_color.method);
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818e119a;
  pUVar4 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar7 = (style->fields).width;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  fVar9 = 44.0;
  if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818e10c2:
    fVar8 = 44.0;
  }
  else {
    pSVar5 = (pGVar7->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(pSVar5,"point",5,(MethodInfo *)0x0);
    if (!bVar1) goto label_1818e10c2;
    fVar8 = (pGVar7->fields).value;
  }
  if (pUVar4 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar4->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar4,fVar8,(pUVar4->klass->vtable)._36_set_preferredWidth.method);
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar7 = (style->fields).height;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_184342145 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_184342145 = '\x01';
    }
    if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar5 = (pGVar7->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar1 = System_String__Equals_196c550(pSVar5,"point",5,(MethodInfo *)0x0);
      if (bVar1) {
        fVar9 = (pGVar7->fields).value;
      }
    }
    (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar4,fVar9,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
    return;
  }
label_1818e119a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ParseColor
// il2cpp: UnityEngine_Color_o Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseColor (System_String_o* value, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x1818ea340

UnityEngine_Color_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseColor
          (UnityEngine_Color_o *__return_storage_ptr__,System_String_o *value,UnityEngine_Color_o *fallback,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  UnityEngine_Color_Fields local_18;
  
  local_18.r = 0.0;
  local_18.g = 0.0;
  local_18.b = 0.0;
  local_18.a = 0.0;
  bVar4 = UnityEngine_ColorUtility__TryParseHtmlString
                    (value,(UnityEngine_Color_o *)&local_18,(MethodInfo *)0x0);
  if (bVar4) {
    (__return_storage_ptr__->fields).r = local_18.r;
    (__return_storage_ptr__->fields).g = local_18.g;
    (__return_storage_ptr__->fields).b = local_18.b;
    (__return_storage_ptr__->fields).a = local_18.a;
    return __return_storage_ptr__;
  }
  fVar1 = (fallback->fields).g;
  fVar2 = (fallback->fields).b;
  fVar3 = (fallback->fields).a;
  (__return_storage_ptr__->fields).r = (fallback->fields).r;
  (__return_storage_ptr__->fields).g = fVar1;
  (__return_storage_ptr__->fields).b = fVar2;
  (__return_storage_ptr__->fields).a = fVar3;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildIcon
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildIcon (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e1580

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildIcon
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  bool bVar1;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *value;
  UnityEngine_Color_o *pUVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  System_String_o *pSVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Color_Fields local_48;
  UnityEngine_Color_o local_38 [2];
  
  if (Il2CppMethodInitialized_184342153 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_184342153 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818e18a4;
  __this_00 = UnityEngine_GameObject__AddComponent_object_
                        (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e18a4;
  value = Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load((node->fields).icon,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_UI_Image_o *)0x0) goto label_1818e18a4;
  UnityEngine_UI_Image__set_sprite(__this_00,value,(MethodInfo *)0x0);
  UnityEngine_UI_Image__set_preserveAspect(__this_00,true,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty((node->fields).tooltip,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = System_String__IsNullOrEmpty((node->fields).tooltipKey,(MethodInfo *)0x0);
    bVar1 = !bVar1;
  }
  else {
    bVar1 = true;
  }
  (*(__this_00->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this_00,bVar1,(__this_00->klass->vtable)._25_set_raycastTarget.method);
  if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_1818e18a4;
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pSVar5 = (System_String_o *)0x0;
  }
  else {
    pSVar5 = (style->fields).textColor;
  }
  __this = (context->fields).Theme;
  if (__this == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818e18a4;
  local_48.r = 1.0;
  local_48.g = 1.0;
  local_48.b = 1.0;
  local_48.a = 1.0;
  pUVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                     (local_38,__this,"text",(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0
                     );
  local_48.r = (pUVar2->fields).r;
  local_48.g = (pUVar2->fields).g;
  local_48.b = (pUVar2->fields).b;
  local_48.a = (pUVar2->fields).a;
  pUVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                     (local_38,__this,pSVar5,(UnityEngine_Color_o *)&local_48,(MethodInfo *)0x0);
  local_48.r = (pUVar2->fields).r;
  local_48.g = (pUVar2->fields).g;
  local_48.b = (pUVar2->fields).b;
  local_48.a = (pUVar2->fields).a;
  (*(__this_00->klass->vtable)._23_set_color.methodPtr)
            (__this_00,(UnityEngine_Color_o *)&local_48,(__this_00->klass->vtable)._23_set_color.method);
  pUVar3 = UnityEngine_GameObject__AddComponent_object_
                     (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar4 = (style->fields).width;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  fVar7 = 24.0;
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818e17bd:
    fVar6 = 24.0;
  }
  else {
    pSVar5 = (pGVar4->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(pSVar5,"point",5,(MethodInfo *)0x0);
    if (!bVar1) goto label_1818e17bd;
    fVar6 = (pGVar4->fields).value;
  }
  if (pUVar3 != (UnityEngine_UI_LayoutElement_o *)0x0) {
    (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
              (pUVar3,fVar6,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar4 = (style->fields).height;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_184342145 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_184342145 = '\x01';
    }
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar5 = (pGVar4->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar1 = System_String__Equals_196c550(pSVar5,"point",5,(MethodInfo *)0x0);
      if (bVar1) {
        fVar7 = (pGVar4->fields).value;
      }
    }
    (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
              (pUVar3,fVar7,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
    return;
  }
label_1818e18a4:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildButtonIcon
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonIcon (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool hasText, const MethodInfo* method);
// 0x1818dfb30

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildButtonIcon
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_RectTransform_o *parent,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool hasText,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
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
  UnityEngine_Sprite_o *value;
  UnityEngine_Color_o *pUVar4;
  System_String_o *pSVar5;
  float fVar6;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  UnityEngine_Vector2_o value_02;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_o local_48 [3];
  
  if (Il2CppMethodInitialized_184342154 == '\0') {
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
    Il2CppMethodInitialized_184342154 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
label_1818e002c:
    ThrowNullReferenceException();
  }
  if ((((node->fields).hasIcon == false) &&
      (bVar1 = System_String__IsNullOrEmpty((node->fields).icon,(MethodInfo *)0x0), bVar1)) ||
     (bVar1 = System_String__IsNullOrEmpty((node->fields).icon,(MethodInfo *)0x0), bVar1)) {
    return (UnityEngine_UI_Image_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (UnityEngine_UI_Image_o *)0x0;
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_1818e002c;
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
  Il2CppCodeGenWriteBarrier(components->m_Items,obj);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1abe0(__this_00,"AoTTG Button Icon",components,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
     (__this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0),
     __this_01 == (UnityEngine_Transform_o *)0x0)) goto label_1818e002c;
  UnityEngine_Transform__SetParent_2f5a7e0
            (__this_01,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
  __this_02 = UnityEngine_GameObject__GetComponent_object_
                        (__this_00,
                         (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (hasText) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.5;
  }
  if (__this_02 == (UnityEngine_RectTransform_o *)0x0) goto label_1818e002c;
  value_00.fields.y = 0.5;
  value_00.fields.x = fVar6;
  UnityEngine_RectTransform__set_anchorMin(__this_02,value_00,(MethodInfo *)0x0);
  if (hasText) {
    fVar6 = 0.0;
  }
  else {
    fVar6 = 0.5;
  }
  value_01.fields.y = 0.5;
  value_01.fields.x = fVar6;
  UnityEngine_RectTransform__set_anchorMax(__this_02,value_01,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot(__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342155 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    Il2CppMethodInitialized_184342155 = '\x01';
  }
  if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
     ((style->fields).iconSize.fields.value <= 0.0)) {
    fVar6 = 24.0;
  }
  else {
    fVar6 = System_Nullable_float___get_Value
                      (&(style->fields).iconSize,
                       (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
  }
  value_02.fields.y = fVar6;
  value_02.fields.x = fVar6;
  UnityEngine_RectTransform__set_sizeDelta(__this_02,value_02,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  UnityEngine_RectTransform__set_anchoredPosition
            (__this_02,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields
             ,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_GameObject__AddComponent_object_
                     (__this_00,
                      (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
  if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1818e002c;
  (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar3,fVar6,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
  (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar3,fVar6,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
  __this_03 = UnityEngine_GameObject__AddComponent_object_
                        (__this_00,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  value = Gisketch_Aottg2UI_Styling_GisketchIconLoader__Load((node->fields).icon,(MethodInfo *)0x0);
  if (__this_03 == (UnityEngine_UI_Image_o *)0x0) goto label_1818e002c;
  UnityEngine_UI_Image__set_sprite(__this_03,value,(MethodInfo *)0x0);
  UnityEngine_UI_Image__set_preserveAspect(__this_03,true,(MethodInfo *)0x0);
  (*(__this_03->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this_03,false,(__this_03->klass->vtable)._25_set_raycastTarget.method);
  pSVar5 = (node->fields).icon;
  if (pSVar5 == (System_String_o *)0x0) goto label_1818e002c;
  bVar1 = System_String__StartsWith(pSVar5,"Icons/",(MethodInfo *)0x0);
  if (!bVar1) {
    pSVar5 = (node->fields).icon;
    if (pSVar5 == (System_String_o *)0x0) goto label_1818e002c;
    bVar1 = System_String__StartsWith(pSVar5,"UI/",(MethodInfo *)0x0);
    if (!bVar1) {
      if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_1818e002c;
      __this = (context->fields).Theme;
      if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        pSVar5 = (System_String_o *)0x0;
      }
      else {
        pSVar5 = (style->fields).textColor;
      }
      if (__this == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818e002c;
      local_58.r = 1.0;
      local_58.g = 1.0;
      local_58.b = 1.0;
      local_58.a = 1.0;
      pUVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         (local_48,__this,pSVar5,(UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
      local_58.r = (pUVar4->fields).r;
      local_58.g = (pUVar4->fields).g;
      local_58.b = (pUVar4->fields).b;
      local_58.a = (pUVar4->fields).a;
      goto label_1818dffc9;
    }
  }
  local_58.r = 1.0;
  local_58.g = 1.0;
  local_58.b = local_58.g;
  local_58.a = local_58.g;
label_1818dffc9:
  (*(__this_03->klass->vtable)._23_set_color.methodPtr)
            (__this_03,(UnityEngine_Color_o *)&local_58,(__this_03->klass->vtable)._23_set_color.method);
  return __this_03;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ButtonIconSize
// il2cpp: float Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonIconSize (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818e70a0

float Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ButtonIconSize
                (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  float fVar1;
  
  if (Il2CppMethodInitialized_184342155 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    Il2CppMethodInitialized_184342155 = '\x01';
  }
  if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
     (0.0 < (style->fields).iconSize.fields.value)) {
    fVar1 = System_Nullable_float___get_Value
                      (&(style->fields).iconSize,
                       (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    return fVar1;
  }
  return 24.0;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSpriteImage
// il2cpp: UnityEngine_UI_Image_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool preserveAspect, bool raycastTarget, const MethodInfo* method);
// 0x1818e51b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e53a5: mov rbx, qword ptr [rip + 0x2793c2c]  ; "GisketchUI/Texture/SeamlessGrungeDark"
// asm:   0x1818e53ac: jmp 0x1818e53bb

UnityEngine_UI_Image_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
          (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool preserveAspect,bool raycastTarget,
          MethodInfo *method)

{
  float fVar1;
  float fVar2;
  System_Nullable_bool__Fields SVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar4;
  System_Nullable_float__Fields stainScaleOverride;
  bool bVar5;
  bool verticalLightGradient;
  UnityEngine_UI_Image_o *__this;
  UnityEngine_Sprite_o *value;
  UnityEngine_Color_o *pUVar6;
  Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *pUVar7;
  UnityEngine_Material_o *pUVar8;
  Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *pGVar9;
  UnityEngine_UI_Mask_o *__this_00;
  Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *__this_01;
  Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *__this_02;
  UnityEngine_RectTransform_o *__this_03;
  ushort uVar10;
  System_String_o *pSVar11;
  UnityEngine_Color_o local_68;
  UnityEngine_Color_o local_58 [3];
  
  if (Il2CppMethodInitialized_184342156 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSidePanelOutlineSkew);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSurfaceMaterialOwner);
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
    Il2CppMethodInitialized_184342156 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818e5ab5;
  __this = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Image);
  if (__this == (UnityEngine_UI_Image_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342157 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Texture/SeamlessGrungeDark");
    Il2CppMethodInitialized_184342157 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushSidePanelTexture(style,(MethodInfo *)0x0);
  if (bVar5) {
    if ((context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (pGVar4 = (context->fields).Theme, pGVar4 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
    goto label_1818e5ab5;
    pSVar11 = "GisketchUI/Texture/SeamlessGrungeDark";
    if ((pGVar4->fields)._IsDarkMode_k__BackingField == false) goto label_1818e53ae;
  }
  else {
label_1818e53ae:
    if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e5ab5;
    pSVar11 = (node->fields).sprite;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
  }
  value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(pSVar11,(MethodInfo *)0x0);
  if (__this == (UnityEngine_UI_Image_o *)0x0) goto label_1818e5ab5;
  UnityEngine_UI_Image__set_sprite(__this,value,(MethodInfo *)0x0);
  UnityEngine_UI_Image__set_preserveAspect(__this,preserveAspect,(MethodInfo *)0x0);
  (*(__this->klass->vtable)._25_set_raycastTarget.methodPtr)
            (__this,raycastTarget,(__this->klass->vtable)._25_set_raycastTarget.method);
  bVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushSidePanelTexture(style,(MethodInfo *)0x0);
  if (bVar5) {
    UnityEngine_UI_Image__set_type(__this,2,(MethodInfo *)0x0);
  }
  if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
     (bVar5 = System_String__IsNullOrEmpty((style->fields).background,(MethodInfo *)0x0), bVar5)) {
label_1818e54e2:
    local_68.fields.r = 1.0;
    local_68.fields.g = 1.0;
    local_68.fields.b = local_68.fields.g;
    local_68.fields.a = local_68.fields.g;
  }
  else {
    pSVar11 = (style->fields).background;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_196c550(pSVar11,"clear",5,(MethodInfo *)0x0);
    if (bVar5) goto label_1818e54e2;
    if ((context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (pGVar4 = (context->fields).Theme, pGVar4 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
    goto label_1818e5ab5;
    local_68.fields.r = 1.0;
    local_68.fields.g = 1.0;
    local_68.fields.b = 1.0;
    local_68.fields.a = 1.0;
    pUVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                       (local_58,pGVar4,(style->fields).background,&local_68,(MethodInfo *)0x0);
    local_68.fields.r = (pUVar6->fields).r;
    local_68.fields.g = (pUVar6->fields).g;
    local_68.fields.b = (pUVar6->fields).b;
    local_68.fields.a = (pUVar6->fields).a;
  }
  (*(__this->klass->vtable)._23_set_color.methodPtr)
            (__this,&local_68,(__this->klass->vtable)._23_set_color.method);
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pSVar11 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_196c550(pSVar11,"brushSidePanelContentFooterTexture",5,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar7 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                         ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_58,__this,
                          (__this->klass->vtable)._22_get_color.method);
      fVar1 = *(float *)&(pUVar7->fields).m_Ptr;
      pUVar7 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                         ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_58,__this,
                          (__this->klass->vtable)._22_get_color.method);
      fVar2 = *(float *)((longlong)&(pUVar7->fields).m_Ptr + 4);
      pUVar7 = (*(__this->klass->vtable)._22_get_color.methodPtr)
                         ((Unity_Hierarchy_ReadOnlyNativeVector_HierarchyFlattenedNode__o *)local_58,__this,
                          (__this->klass->vtable)._22_get_color.method);
      if ((context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
         (pGVar4 = (context->fields).Theme, pGVar4 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
      goto label_1818e5ab5;
      local_68.fields.b = (float)(pUVar7->fields).m_Count;
      if ((pGVar4->fields)._IsDarkMode_k__BackingField == false) {
        local_68.fields.a = 0.28;
      }
      else {
        local_68.fields.a = 0.18;
      }
      local_68.fields.r = fVar1;
      local_68.fields.g = fVar2;
      (*(__this->klass->vtable)._23_set_color.methodPtr)
                (__this,&local_68,(__this->klass->vtable)._23_set_color.method);
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsUntintedSpriteStyle(style,(MethodInfo *)0x0);
  if (bVar5) {
    local_68.fields.r = 1.0;
    local_68.fields.g = 1.0;
    local_68.fields.b = 1.0;
    local_68.fields.a = 1.0;
    (*(__this->klass->vtable)._23_set_color.methodPtr)
              (__this,&local_68,(__this->klass->vtable)._23_set_color.method);
  }
  if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
     ((style->fields).textured.fields.value == false)) {
    (*(__this->klass->vtable)._33_set_material.methodPtr)
              (__this,(UnityEngine_Material_o *)0x0,(__this->klass->vtable)._33_set_material.method);
  }
  else {
    pSVar11 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_196c550(pSVar11,"mainMenuBrushButton",5,(MethodInfo *)0x0);
    if (bVar5) {
label_1818e5769:
      bVar5 = true;
    }
    else {
      pSVar11 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar5 = System_String__Equals_196c550(pSVar11,"brushSidePanelHeader",5,(MethodInfo *)0x0);
      if (bVar5) goto label_1818e5769;
      pSVar11 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar5 = System_String__Equals_196c550(pSVar11,"brushSidePanelBrushButton",5,(MethodInfo *)0x0);
      if (bVar5) goto label_1818e5769;
      pSVar11 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar5 = System_String__Equals_196c550(pSVar11,"creditsCategoryBrush",5,(MethodInfo *)0x0);
    }
    pSVar11 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    verticalLightGradient = System_String__Equals_196c550(pSVar11,"brushSidePanel",5,(MethodInfo *)0x0);
    SVar3 = (style->fields).worn.fields;
    if (SVar3.hasValue == false) {
      uVar10 = 1;
    }
    else {
      uVar10 = (ushort)SVar3 >> 8;
    }
    stainScaleOverride = (style->fields).wornStainScale.fields;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial);
    }
    pUVar8 = Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterial__Instance
                       (0.0,false,uVar10 != 0,(System_Nullable_float__o)stainScaleOverride,bVar5,
                        verticalLightGradient,(MethodInfo *)0x0);
    (*(__this->klass->vtable)._33_set_material.methodPtr)
              (__this,pUVar8,(__this->klass->vtable)._33_set_material.method);
    pGVar9 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSurfaceMaterialOwner);
    pUVar8 = (*(__this->klass->vtable)._32_get_material.methodPtr)
                       (__this,(__this->klass->vtable)._32_get_material.method);
    if (pGVar9 == (Gisketch_Aottg2UI_Styling_GisketchSurfaceMaterialOwner_o *)0x0) goto label_1818e5ab5;
    (pGVar9->fields)._material = pUVar8;
    Il2CppCodeGenWriteBarrier(&(pGVar9->fields)._material,pUVar8);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsUntintedSpriteStyle(style,(MethodInfo *)0x0);
  if (bVar5) {
    (*(__this->klass->vtable)._33_set_material.methodPtr)
              (__this,(UnityEngine_Material_o *)0x0,(__this->klass->vtable)._33_set_material.method);
  }
  if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
label_1818e5ab5:
    ThrowNullReferenceException();
  }
  pGVar4 = (context->fields).Theme;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyShadow(go,style,pGVar4,(MethodInfo *)0x0);
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pSVar11 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_196c550(pSVar11,"brushSidePanel",5,(MethodInfo *)0x0);
    if (bVar5) {
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Mask);
      if ((__this_00 == (UnityEngine_UI_Mask_o *)0x0) &&
         (__this_00 = UnityEngine_GameObject__AddComponent_object_
                                (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Mask),
         __this_00 == (UnityEngine_UI_Mask_o *)0x0)) goto label_1818e5ab5;
      UnityEngine_UI_Mask__set_showMaskGraphic(__this_00,true,(MethodInfo *)0x0);
    }
    pSVar11 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_196c550(pSVar11,"brushSidePanelOutline",5,(MethodInfo *)0x0);
    if (bVar5) {
      __this_01 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSidePanelOutlineSkew);
      if (__this_01 == (Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew_o *)0x0) goto label_1818e5ab5;
      Gisketch_Aottg2UI_Building_GisketchSidePanelOutlineSkew__Setup(__this_01,54.0,(MethodInfo *)0x0);
    }
    pSVar11 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_196c550(pSVar11,"mainMenuLogo",5,(MethodInfo *)0x0);
    if (bVar5) {
      __this_02 = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLogoMotionBlur);
      if (__this_02 == (Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur_o *)0x0) goto label_1818e5ab5;
      Gisketch_Aottg2UI_Styling_GisketchLogoMotionBlur__Setup(__this_02,__this,(MethodInfo *)0x0);
    }
    pSVar11 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_196c550(pSVar11,"mainMenuTipBackground",5,(MethodInfo *)0x0);
    if (bVar5) {
      UnityEngine_UI_Image__set_preserveAspect(__this,false,(MethodInfo *)0x0);
      __this_03 = UnityEngine_UI_Graphic__get_rectTransform
                            ((UnityEngine_UI_Graphic_o *)__this,(MethodInfo *)0x0);
      if (__this_03 == (UnityEngine_RectTransform_o *)0x0) goto label_1818e5ab5;
      local_68.fields.r = 0.0;
      local_68.fields.g = 180.0;
      local_68.fields.b = 0.0;
      UnityEngine_Transform__set_localEulerAngles
                ((UnityEngine_Transform_o *)__this_03,(UnityEngine_Vector3_o *)&local_68,(MethodInfo *)0x0);
    }
  }
  return __this;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SpritePath
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SpritePath (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818ec6a0

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SpritePath
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184342157 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"GisketchUI/Texture/SeamlessGrungeDark");
    Il2CppMethodInitialized_184342157 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushSidePanelTexture(style,(MethodInfo *)0x0);
  if (bVar2) {
    if ((context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
       (pGVar1 = (context->fields).Theme, pGVar1 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
    goto label_1818ec747;
    if ((pGVar1->fields)._IsDarkMode_k__BackingField != false) {
      return "GisketchUI/Texture/SeamlessGrungeDark";
    }
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return (node->fields).sprite;
  }
label_1818ec747:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsBrushSidePanelTexture
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushSidePanelTexture (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818e9b70

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsBrushSidePanelTexture
               (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184342158 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelTexture");
    il2cpp_codegen_initialize_runtime_metadata(&"brushSidePanelContentFooterTexture");
    Il2CppMethodInitialized_184342158 = '\x01';
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    return false;
  }
  pSVar1 = (style->fields).name;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar2 = System_String__Equals_196c550(pSVar1,"brushSidePanelTexture",5,(MethodInfo *)0x0);
  if (bVar2) {
    return true;
  }
  pSVar1 = (style->fields).name;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar2 = System_String__Equals_196c550(pSVar1,"brushSidePanelContentFooterTexture",5,(MethodInfo *)0x0);
  return bVar2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildStandaloneSpriteImage
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildStandaloneSpriteImage (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e5ac0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e5d80: mov rdi, rbp
// asm:   0x1818e5d8e: mov r14, rbp
// asm:   0x1818e5dff: mov rdi, rbp
// asm:   0x1818e5ecf: movaps xmm6, xmmword ptr [rsp + 0x60]
// asm:   0x1818e5ed4: mov r15, qword ptr [rsp + 0xa0]
// asm:   0x1818e5edc: movaps xmm7, xmmword ptr [rsp + 0x50]

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildStandaloneSpriteImage
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_Object_o *pUVar2;
  UnityEngine_Sprite_o *__this;
  bool bVar3;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_Rect_o *pUVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  float fVar10;
  float fallback;
  UnityEngine_Rect_o local_48 [3];
  
  if (Il2CppMethodInitialized_184342159 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSpriteCover);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342159 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_18434215d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    Il2CppMethodInitialized_18434215d = '\x01';
  }
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pSVar1 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(pSVar1,"profilePreviewBanner",5,(MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildRectTransformCoverSpriteImage
                (go,node,style,context,(MethodInfo *)0x0);
      return;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  pUVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
                     (go,node,style,context,true,false,(MethodInfo *)0x0);
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar3 = false;
  }
  else {
    bVar3 = System_String__IsNullOrEmpty((node->fields).tooltip,(MethodInfo *)0x0);
    if (bVar3) {
      bVar3 = System_String__IsNullOrEmpty((node->fields).tooltipKey,(MethodInfo *)0x0);
      bVar3 = !bVar3;
    }
    else {
      bVar3 = true;
    }
  }
  if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
    (*(pUVar4->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pUVar4,bVar3,(pUVar4->klass->vtable)._25_set_raycastTarget.method);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pUVar2 = (UnityEngine_Object_o *)(pUVar4->fields).m_Sprite;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Equality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        return;
      }
    }
    if (go != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = UnityEngine_GameObject__GetComponent_object_
                         (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement
                         );
      if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) {
        pUVar5 = UnityEngine_GameObject__AddComponent_object_
                           (go,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
      }
      pUVar2 = (UnityEngine_Object_o *)(pUVar4->fields).m_Sprite;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar3) {
        __this = (pUVar4->fields).m_Sprite;
        if (__this == (UnityEngine_Sprite_o *)0x0) goto label_1818e5f03;
        pUVar6 = UnityEngine_Sprite__get_rect(local_48,__this,(MethodInfo *)0x0);
        fVar10 = (pUVar6->fields).m_Width;
        fallback = (pUVar6->fields).m_Height;
        if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
        }
      }
      else {
        fVar10 = 64.0;
        fallback = 64.0;
      }
      if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        pGVar8 = pGVar7;
        if ((node->fields).layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
          pGVar8 = (((node->fields).layout)->fields).width;
        }
        pGVar9 = pGVar7;
        if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
          pGVar9 = (style->fields).width;
        }
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        if ((pGVar8 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) ||
           (bVar3 = System_String__IsNullOrEmpty((pGVar8->fields).unit,(MethodInfo *)0x0), bVar3)) {
          pGVar8 = pGVar9;
        }
        fVar10 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__PointLength
                           (pGVar8,fVar10,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_UI_LayoutElement_o *)0x0) {
          (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
                    (pUVar5,fVar10,(pUVar5->klass->vtable)._36_set_preferredWidth.method);
          pGVar8 = pGVar7;
          if ((node->fields).layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            pGVar8 = (((node->fields).layout)->fields).height;
          }
          if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
            pGVar7 = (style->fields).height;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          if ((pGVar8 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) ||
             (bVar3 = System_String__IsNullOrEmpty((pGVar8->fields).unit,(MethodInfo *)0x0), bVar3)) {
            pGVar8 = pGVar7;
          }
          fVar10 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__PointLength
                             (pGVar8,fallback,(MethodInfo *)0x0);
          (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
                    (pUVar5,fVar10,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
          if (Il2CppMethodInitialized_18434215c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            il2cpp_codegen_initialize_runtime_metadata(&"profileCardBannerImage");
            Il2CppMethodInitialized_18434215c = '\x01';
          }
          if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
            pSVar1 = (style->fields).name;
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            bVar3 = System_String__Equals_196c550(pSVar1,"profileCardBannerImage",5,(MethodInfo *)0x0);
            if (bVar3) {
              UnityEngine_GameObject__AddComponent_object_
                        (go,(MethodInfo_6F4D60 *)
                            MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSpriteCover);
            }
          }
          return;
        }
      }
    }
  }
label_1818e5f03:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildRectTransformCoverSpriteImage
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildRectTransformCoverSpriteImage (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e3270

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildRectTransformCoverSpriteImage
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Sprite_o *__this;
  Il2CppType *handle;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *value;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_UI_LayoutElement_o *pUVar5;
  UnityEngine_Rect_o *pUVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  float fVar9;
  float fVar10;
  UnityEngine_Rect_o local_58 [3];
  
  if (Il2CppMethodInitialized_18434215a == '\0') {
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
    Il2CppMethodInitialized_18434215a = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818e371b;
  pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)go,(MethodInfo *)0x0);
  value = System_String__Concat_1969e50(pSVar2,"-cover",(MethodInfo *)0x0);
  UnityEngine_Object__set_name((UnityEngine_Object_o *)go,value,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_1818e371b;
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
  Il2CppCodeGenWriteBarrier(components->m_Items,obj);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1abe0(__this_00,pSVar2,components,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_1818e371b;
  __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
  parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
  if (__this_01 == (UnityEngine_Transform_o *)0x0) goto label_1818e371b;
  UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pUVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
                     (__this_00,node,style,context,true,false,(MethodInfo *)0x0);
  UnityEngine_GameObject__AddComponent_object_
            (__this_00,
             (MethodInfo_6F4D60 *)
             MethodInfo_UnityEngine_GameObject_AddComponent_GisketchRectTransformSpriteCover);
  pUVar5 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar5 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
  }
  if (pUVar4 == (UnityEngine_UI_Image_o *)0x0) goto label_1818e371b;
  x = (UnityEngine_Object_o *)(pUVar4->fields).m_Sprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    __this = (pUVar4->fields).m_Sprite;
    if (__this == (UnityEngine_Sprite_o *)0x0) goto label_1818e371b;
    pUVar6 = UnityEngine_Sprite__get_rect(local_58,__this,(MethodInfo *)0x0);
    fVar9 = (pUVar6->fields).m_Width;
    fVar10 = (pUVar6->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
  }
  else {
    fVar9 = 64.0;
    fVar10 = 64.0;
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e371b;
  if ((node->fields).layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar7 = (((node->fields).layout)->fields).width;
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
  if (pGVar7 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818e358e:
    pGVar7 = pGVar8;
  }
  else {
    bVar1 = System_String__IsNullOrEmpty((pGVar7->fields).unit,(MethodInfo *)0x0);
    if (bVar1) goto label_1818e358e;
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar2 = (pGVar7->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(pSVar2,"point",5,(MethodInfo *)0x0);
    if (bVar1) {
      fVar9 = (pGVar7->fields).value;
    }
  }
  if (pUVar5 == (UnityEngine_UI_LayoutElement_o *)0x0) {
label_1818e371b:
    ThrowNullReferenceException();
  }
  (*(pUVar5->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar5,fVar9,(pUVar5->klass->vtable)._36_set_preferredWidth.method);
  if ((node->fields).layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar7 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar7 = (((node->fields).layout)->fields).height;
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar8 = (style->fields).height;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((pGVar7->fields).unit,(MethodInfo *)0x0);
    if (!bVar1) goto label_1818e366c;
  }
  pGVar7 = pGVar8;
label_1818e366c:
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar2 = (pGVar7->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(pSVar2,"point",5,(MethodInfo *)0x0);
    if (bVar1) {
      fVar10 = (pGVar7->fields).value;
    }
  }
  (*(pUVar5->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar5,fVar10,(pUVar5->klass->vtable)._38_set_preferredHeight.method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsUntintedSpriteStyle
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsUntintedSpriteStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818e9f50

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsUntintedSpriteStyle
               (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434215b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBannerImage");
    il2cpp_codegen_initialize_runtime_metadata(&"gridPickerThumbnail");
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    il2cpp_codegen_initialize_runtime_metadata(&"profileGridItemThumbnail");
    Il2CppMethodInitialized_18434215b = '\x01';
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    return false;
  }
  pSVar1 = (style->fields).name;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar2 = System_String__Equals_196c550(pSVar1,"gridPickerThumbnail",5,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar1 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(pSVar1,"profileGridItemThumbnail",5,(MethodInfo *)0x0);
    if (!bVar2) {
      pSVar1 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar2 = System_String__Equals_196c550(pSVar1,"profilePreviewBanner",5,(MethodInfo *)0x0);
      if (!bVar2) {
        pSVar1 = (style->fields).name;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar2 = System_String__Equals_196c550(pSVar1,"profileCardBannerImage",5,(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsCoverSpriteStyle
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsCoverSpriteStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818e9c40

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsCoverSpriteStyle
               (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434215c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"profileCardBannerImage");
    Il2CppMethodInitialized_18434215c = '\x01';
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    return false;
  }
  a = (style->fields).name;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar1 = System_String__Equals_196c550(a,"profileCardBannerImage",5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsRectTransformCoverSpriteStyle
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsRectTransformCoverSpriteStyle (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818e9ed0

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsRectTransformCoverSpriteStyle
               (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434215d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"profilePreviewBanner");
    Il2CppMethodInitialized_18434215d = '\x01';
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    return false;
  }
  a = (style->fields).name;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar1 = System_String__Equals_196c550(a,"profilePreviewBanner",5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildInputField
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildInputField (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool multiline, const MethodInfo* method);
// 0x1818e18b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e19e9: mov rbx, qword ptr [rip + 0x2792b50]  ; "inputBg"

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildInputField
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool multiline,MethodInfo *method)

{
  int iVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  TMPro_TMP_Text_o *__this;
  Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions;
  bool bVar4;
  bool bVar5;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o *object;
  UnityEngine_UI_Image_o *value;
  TMPro_TMP_InputField_o *__this_00;
  TMPro_TMP_InputField_OnValidateInput_o *__this_01;
  TMPro_TMP_InputField_OnValidateInput_o *pTVar6;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *pUVar7;
  UnityEngine_GameObject_o *pUVar8;
  TMPro_TextMeshProUGUI_o *pTVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  UnityEngine_Color_o *pUVar11;
  Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *__this_02;
  int32_t iVar12;
  TMPro_TMP_InputField_OnValidateInput_o *value_00;
  System_String_o **ppSVar13;
  uint value_01;
  System_String_o *pSVar14;
  float fVar15;
  float fVar16;
  undefined8 local_78;
  undefined8 uStack_70;
  UnityEngine_Color_o local_68;
  UnityEngine_UI_Navigation_Fields local_58;
  
  if (Il2CppMethodInitialized_18434215e == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault_40b6fb8);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_GetValueOrDefault_40c2078);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass41_0_BuildInputField_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass41_0);
    il2cpp_codegen_initialize_runtime_metadata(&"primary");
    il2cpp_codegen_initialize_runtime_metadata(&"inputBg");
    Il2CppMethodInitialized_18434215e = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass41_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass41_0_o *)0x0) {
    (object->fields).node = node;
    Il2CppCodeGenWriteBarrier(&(object->fields).node,node);
    (object->fields).multiline = multiline;
    if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_1818e2294;
    pGVar2 = (context->fields).Theme;
    pSVar14 = "inputBg";
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pSVar14 = (style->fields).background;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    value_00 = (TMPro_TMP_InputField_OnValidateInput_o *)0x0;
    value = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                      (go,style,pGVar2,pSVar14,false,(MethodInfo *)0x0);
    if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818e2294;
    UnityEngine_GameObject__AddComponent_object_
              (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_GisketchFocusInputSource
              );
    if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    }
    bVar4 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
    if (bVar4) {
      bVar4 = UnityEngine_GameObject__get_activeSelf(go,(MethodInfo *)0x0);
      if (bVar4) {
        UnityEngine_GameObject__SetActive(go,false,(MethodInfo *)0x0);
      }
    }
    else {
      bVar4 = false;
    }
    __this_00 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_TMP_InputField);
    if (__this_00 == (TMPro_TMP_InputField_o *)0x0) goto label_1818e2294;
    UnityEngine_UI_Selectable__set_targetGraphic
              ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Graphic_o *)value,(MethodInfo *)0x0);
    UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this_00,0,(MethodInfo *)0x0);
    value_01 = 3;
    local_58.m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
    local_58.m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
    local_58.m_Mode = 3;
    local_58.m_WrapAround = false;
    local_58._5_3_ = 0;
    local_58.m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
    local_58.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
    UnityEngine_UI_Selectable__set_navigation
              ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Navigation_o *)&local_58,
               (MethodInfo *)0x0);
    UnityEngine_GameObject__AddComponent_object_
              (go,(MethodInfo_6F4D60 *)
                  MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
    TMPro_TMP_InputField__set_lineType
              (__this_00,-(uint)((object->fields).multiline != false) & 2,(MethodInfo *)0x0);
    pGVar3 = (object->fields).node;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e2294;
    pSVar14 = (pGVar3->fields).inputType;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_184342163 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"Password");
      il2cpp_codegen_initialize_runtime_metadata(&"Number");
      il2cpp_codegen_initialize_runtime_metadata(&"Integer");
      Il2CppMethodInitialized_184342163 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar5 = System_String__Equals_196c550(pSVar14,"Integer",5,(MethodInfo *)0x0);
    if (bVar5) {
      value_01 = 2;
    }
    else {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar5 = System_String__Equals_196c550(pSVar14,"Number",5,(MethodInfo *)0x0);
      if (!bVar5) {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar5 = System_String__Equals_196c550(pSVar14,"Password",5,(MethodInfo *)0x0);
        value_01 = -(uint)bVar5 & 7;
      }
    }
    TMPro_TMP_InputField__set_contentType(__this_00,value_01,(MethodInfo *)0x0);
    pGVar3 = (object->fields).node;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e2294;
    bVar5 = (bool)System_Nullable_sbyte___GetValueOrDefault_adc250
                            ((System_Nullable_sbyte__o *)&(pGVar3->fields).richText,'\x01',
                             (MethodInfo_ADC250 *)MethodInfo_System_Nullable_bool_GetValueOrDefault_40b6fb8);
    TMPro_TMP_InputField__set_richText(__this_00,bVar5,(MethodInfo *)0x0);
    pGVar3 = (object->fields).node;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e2294;
    iVar1 = (pGVar3->fields).maxCharacters;
    iVar12 = 0;
    if (-1 < iVar1) {
      iVar12 = iVar1;
    }
    TMPro_TMP_InputField__set_characterLimit(__this_00,iVar12,(MethodInfo *)0x0);
    pTVar6 = (__this_00->fields).m_OnValidateInput;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TMPro_TMP_InputField_OnValidateInput);
    TMPro_TMP_InputField_OnValidateInput___ctor
              ((UnityEngine_UI_InputField_OnValidateInput_o *)__this_01,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass41_0_BuildInputField_b__0
               ,(MethodInfo *)0x0);
    pTVar6 = (TMPro_TMP_InputField_OnValidateInput_o *)
             System_Delegate__Combine
                       ((System_Delegate_o *)pTVar6,(System_Delegate_o *)__this_01,(MethodInfo *)0x0);
    if (pTVar6 != (TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
      if (pTVar6->klass == TypeInfo_TMPro_TMP_InputField_OnValidateInput) {
        value_00 = pTVar6;
      }
      if (value_00 == (TMPro_TMP_InputField_OnValidateInput_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pTVar6,TypeInfo_TMPro_TMP_InputField_OnValidateInput);
      }
    }
    TMPro_TMP_InputField__set_onValidateInput(__this_00,value_00,(MethodInfo *)0x0);
    TMPro_TMP_InputField__set_asteriskChar(__this_00,0x2022,(MethodInfo *)0x0);
    parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    pUVar7 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextArea(parent,style,(MethodInfo *)0x0);
    TMPro_TMP_InputField__set_textViewport(__this_00,pUVar7,(MethodInfo *)0x0);
    bVar5 = (object->fields).multiline;
    pUVar7 = (__this_00->fields).m_TextViewport;
    pGVar3 = (object->fields).node;
    if (Il2CppMethodInitialized_184342161 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Input Placeholder");
      il2cpp_codegen_initialize_runtime_metadata(&"inputPlaceholder");
      Il2CppMethodInitialized_184342161 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pUVar8 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextObject
                       ("AoTTG Input Placeholder",pUVar7,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_1818e2294;
    pTVar9 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar8,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    pGVar2 = (context->fields).Theme;
    if (pGVar2 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818e2294;
    local_78 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                         (pGVar2,"inputPlaceholder",(MethodInfo *)0x0);
    pGVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
    ;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
    if ((pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
       (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_1818e2294;
    pSVar14 = (pGVar3->fields).placeholder;
    (pGVar10->fields).text = pSVar14;
    Il2CppCodeGenWriteBarrier(&(pGVar10->fields).text,pSVar14);
    pSVar14 = (pGVar3->fields).textKey;
    (pGVar10->fields).textKey = pSVar14;
    Il2CppCodeGenWriteBarrier(&(pGVar10->fields).textKey,pSVar14);
    (pGVar10->fields).style = "inputPlaceholder";
    Il2CppCodeGenWriteBarrier(&(pGVar10->fields).style,"inputPlaceholder");
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText
              (pTVar9,pGVar10,local_78,context,(MethodInfo *)0x0);
    if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818e2294;
    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar9,true,(MethodInfo *)0x0);
    iVar12 = 0x101;
    if (bVar5 == false) {
      iVar12 = 0x1001;
    }
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar9,iVar12,(MethodInfo *)0x0);
    (*(pTVar9->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pTVar9,false,(pTVar9->klass->vtable)._25_set_raycastTarget.method);
    TMPro_TMP_InputField__set_placeholder(__this_00,(UnityEngine_UI_Graphic_o *)pTVar9,(MethodInfo *)0x0);
    bVar5 = (object->fields).multiline;
    pUVar7 = (__this_00->fields).m_TextViewport;
    pGVar3 = (object->fields).node;
    if (Il2CppMethodInitialized_184342160 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Input Text");
      Il2CppMethodInitialized_184342160 = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pUVar8 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextObject
                       ("AoTTG Input Text",pUVar7,(MethodInfo *)0x0);
    if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_1818e2294;
    pTVar9 = UnityEngine_GameObject__AddComponent_object_
                       (pUVar8,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    pGVar10 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
    ;
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar10,(MethodInfo *)0x0);
    if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e2294;
    pSVar14 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    (pGVar10->fields).text = pSVar14;
    Il2CppCodeGenWriteBarrier(&(pGVar10->fields).text,pSVar14);
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e2294;
    pSVar14 = (pGVar3->fields).style;
    (pGVar10->fields).style = pSVar14;
    Il2CppCodeGenWriteBarrier(&(pGVar10->fields).style,pSVar14);
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText
              (pTVar9,pGVar10,style,context,(MethodInfo *)0x0);
    if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818e2294;
    TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)pTVar9,bVar5,(MethodInfo *)0x0);
    iVar12 = 0x101;
    if (bVar5 == false) {
      iVar12 = 0x1001;
    }
    TMPro_TMP_Text__set_alignment((TMPro_TMP_Text_o *)pTVar9,iVar12,(MethodInfo *)0x0);
    (*(pTVar9->klass->vtable)._25_set_raycastTarget.methodPtr)
              (pTVar9,false,(pTVar9->klass->vtable)._25_set_raycastTarget.method);
    TMPro_TMP_InputField__set_textComponent(__this_00,(TMPro_TMP_Text_o *)pTVar9,(MethodInfo *)0x0);
    __this = (__this_00->fields).m_TextComponent;
    if (__this == (TMPro_TMP_Text_o *)0x0) goto label_1818e2294;
    TMPro_TMP_Text__set_richText(__this,(__this_00->fields).m_RichText,(MethodInfo *)0x0);
    pGVar3 = (object->fields).node;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e2294;
    ppSVar13 = &(pGVar3->fields).value;
    if (*ppSVar13 == (System_String_o *)0x0) {
      ppSVar13 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    TMPro_TMP_InputField__SetTextWithoutNotify(__this_00,*ppSVar13,(MethodInfo *)0x0);
    TMPro_TMP_InputField__set_customCaretColor(__this_00,true,(MethodInfo *)0x0);
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      fVar16 = 1.0;
      fVar15 = 1.0;
      uStack_70._0_4_ = fVar15;
      uStack_70._4_4_ = fVar15;
    }
    else {
      pGVar2 = (context->fields).Theme;
      if (pGVar2 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818e2294;
      local_78._0_4_ = 1.0;
      local_78._4_4_ = 1.0;
      uStack_70._0_4_ = 1.0;
      uStack_70._4_4_ = 1.0;
      pUVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                          (&local_68,pGVar2,(style->fields).textColor,(UnityEngine_Color_o *)&local_78,
                           (MethodInfo *)0x0);
      fVar16 = (pUVar11->fields).r;
      fVar15 = (pUVar11->fields).g;
      uStack_70._0_4_ = (pUVar11->fields).b;
      uStack_70._4_4_ = (pUVar11->fields).a;
    }
    local_78 = (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)CONCAT44(fVar15,fVar16);
    TMPro_TMP_InputField__set_caretColor(__this_00,(UnityEngine_Color_o *)&local_78,(MethodInfo *)0x0);
    TMPro_TMP_InputField__set_caretWidth(__this_00,2,(MethodInfo *)0x0);
    pGVar2 = (context->fields).Theme;
    if (pGVar2 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818e2294;
    local_78._0_4_ = 1.0;
    local_78._4_4_ = 1.0;
    uStack_70._0_4_ = 1.0;
    uStack_70._4_4_ = 1.0;
    pUVar11 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                        (&local_68,pGVar2,"primary",(UnityEngine_Color_o *)&local_78,
                         (MethodInfo *)0x0);
    local_78 = *(Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o **)&pUVar11->fields;
    uStack_70._4_4_ = 0.35;
    uStack_70._0_4_ = (pUVar11->fields).b;
    TMPro_TMP_InputField__set_selectionColor(__this_00,(UnityEngine_Color_o *)&local_78,(MethodInfo *)0x0);
    pGVar2 = (context->fields).Theme;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AddFocusRing(go,pGVar2,true,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyInputMeasure(go,style,(MethodInfo *)0x0);
    pGVar3 = (object->fields).node;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e2294;
    bVar5 = System_String__IsNullOrEmpty((pGVar3->fields).action,(MethodInfo *)0x0);
    if (bVar5) {
      pGVar3 = (object->fields).node;
      if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e2294;
      bVar5 = System_String__IsNullOrEmpty((pGVar3->fields).commitAction,(MethodInfo *)0x0);
      if (bVar5) goto label_1818e2258;
    }
    if ((context->fields).Actions == (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0) {
label_1818e2258:
      if (bVar4 != false) {
        UnityEngine_GameObject__SetActive(go,true,(MethodInfo *)0x0);
      }
      return;
    }
    __this_02 = UnityEngine_GameObject__AddComponent_object_
                          (go,(MethodInfo_6F4D60 *)
                              MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDebouncedInputAction);
    pGVar3 = (object->fields).node;
    if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      actions = (context->fields).Actions;
      fVar16 = System_Nullable_float___GetValueOrDefault_adc4c0
                         (&(pGVar3->fields).debounceSeconds,0.2,
                          (MethodInfo_ADC4C0 *)MethodInfo_System_Nullable_float_GetValueOrDefault_40c2078);
      if (__this_02 != (Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction_o *)0x0) {
        Gisketch_Aottg2UI_Actions_GisketchDebouncedInputAction__Setup
                  (__this_02,__this_00,actions,pGVar3,fVar16,(MethodInfo *)0x0);
        goto label_1818e2258;
      }
    }
  }
label_1818e2294:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$TextArea
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextArea (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818ed2b0

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
  float fVar2;
  
  if (Il2CppMethodInitialized_18434215f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Input Text Area");
    Il2CppMethodInitialized_18434215f = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Input Text Area",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
        if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
           ((style->fields).padding.fields.hasValue == false)) {
          fVar2 = 16.0;
        }
        else {
          fVar2 = System_Nullable_float___get_Value
                            (&(style->fields).padding,
                             (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
        }
        if (rect != (UnityEngine_RectTransform_o *)0x0) {
          value.fields.y = 0.0;
          value.fields.x = fVar2;
          UnityEngine_RectTransform__set_offsetMin(rect,value,(MethodInfo *)0x0);
          value_00.fields.y = 0.0;
          value_00.fields.x = -fVar2;
          UnityEngine_RectTransform__set_offsetMax(rect,value_00,(MethodInfo *)0x0);
          UnityEngine_GameObject__AddComponent_object_
                    (__this,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
          return rect;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$InputText
// il2cpp: TMPro_TextMeshProUGUI_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__InputText (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool multiline, const MethodInfo* method);
// 0x1818e9940

TMPro_TextMeshProUGUI_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__InputText
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool multiline,MethodInfo *method)

{
  System_String_o *pSVar1;
  UnityEngine_GameObject_o *__this;
  TMPro_TextMeshProUGUI_o *text;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  int32_t value;
  
  if (Il2CppMethodInitialized_184342160 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Input Text");
    Il2CppMethodInitialized_184342160 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  __this = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextObject
                     ("AoTTG Input Text",parent,(MethodInfo *)0x0);
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    text = UnityEngine_GameObject__AddComponent_object_
                     (__this,(MethodInfo_6F4D60 *)
                             MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      pSVar1 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      (__this_00->fields).text = pSVar1;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).text,pSVar1);
      if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        pSVar1 = (node->fields).style;
        (__this_00->fields).style = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).style,pSVar1);
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText
                  (text,__this_00,style,context,(MethodInfo *)0x0);
        if (text != (TMPro_TextMeshProUGUI_o *)0x0) {
          TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,multiline,(MethodInfo *)0x0);
          value = 0x101;
          if (!multiline) {
            value = 0x1001;
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
// 0x1818ea3a0

TMPro_TextMeshProUGUI_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Placeholder
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool multiline,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  System_String_o *pSVar1;
  UnityEngine_GameObject_o *__this_00;
  TMPro_TextMeshProUGUI_o *text;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_01;
  int32_t value;
  
  if (Il2CppMethodInitialized_184342161 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Input Placeholder");
    il2cpp_codegen_initialize_runtime_metadata(&"inputPlaceholder");
    Il2CppMethodInitialized_184342161 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  __this_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextObject
                        ("AoTTG Input Placeholder",parent,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    text = UnityEngine_GameObject__AddComponent_object_
                     (__this_00,
                      (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
    if ((context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
       (__this = (context->fields).Theme, __this != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0)) {
      style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                        (__this,"inputPlaceholder",(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
         (__this_01 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pSVar1 = (node->fields).placeholder;
        (__this_01->fields).text = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).text,pSVar1);
        pSVar1 = (node->fields).textKey;
        (__this_01->fields).textKey = pSVar1;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).textKey,pSVar1);
        (__this_01->fields).style = "inputPlaceholder";
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).style,"inputPlaceholder");
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText
                  (text,__this_01,style,context,(MethodInfo *)0x0);
        if (text != (TMPro_TextMeshProUGUI_o *)0x0) {
          TMPro_TMP_Text__set_enableWordWrapping((TMPro_TMP_Text_o *)text,true,(MethodInfo *)0x0);
          value = 0x101;
          if (!multiline) {
            value = 0x1001;
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


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$TextObject
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__TextObject (System_String_o* name, UnityEngine_RectTransform_o* parent, const MethodInfo* method);
// 0x1818ed4f0

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
  
  if (Il2CppMethodInitialized_184342162 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_184342162 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,name,components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
        return __this;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ContentType
// il2cpp: int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ContentType (System_String_o* type, const MethodInfo* method);
// 0x1818e8380

int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ContentType
                  (System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184342163 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"Password");
    il2cpp_codegen_initialize_runtime_metadata(&"Number");
    il2cpp_codegen_initialize_runtime_metadata(&"Integer");
    Il2CppMethodInitialized_184342163 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar1 = System_String__Equals_196c550(type,"Integer",5,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(type,"Number",5,(MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar1 = System_String__Equals_196c550(type,"Password",5,(MethodInfo *)0x0);
      return -(uint)bVar1 & 7;
    }
    return 3;
  }
  return 2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ValidateInput
// il2cpp: uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateInput (System_String_o* type, bool multiline, System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x1818ee4d0

uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateInput
                   (System_String_o *type,bool multiline,System_String_o *text,int32_t charIndex,
                   uint16_t addedChar,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184342164 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"Number");
    il2cpp_codegen_initialize_runtime_metadata(&"Integer");
    Il2CppMethodInitialized_184342164 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (((!multiline) || ((addedChar - 10 & 0xfffc) != 0)) || (addedChar == 0xc)) {
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar1 = System_Char__IsControl(addedChar,(MethodInfo *)0x0);
    if (bVar1) {
      return 0;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar1 = System_String__Equals_196c550(type,"Integer",5,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_184342165 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      Il2CppMethodInitialized_184342165 = '\x01';
    }
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar1 = System_Char__IsDigit(addedChar,(MethodInfo *)0x0);
    if (bVar1) {
      return addedChar;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (addedChar != 0x2d) {
      return 0;
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(type,"Number",5,(MethodInfo *)0x0);
    if (!bVar1) {
      return addedChar;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_184342166 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      Il2CppMethodInitialized_184342166 = '\x01';
    }
    if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e48);
    }
    bVar1 = System_Char__IsDigit(addedChar,(MethodInfo *)0x0);
    if (bVar1) {
      return addedChar;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (addedChar != 0x2d) {
      if (addedChar != 0x2e) {
        return 0;
      }
      if (text != (System_String_o *)0x0) {
        iVar2 = System_String__IndexOf(text,0x2e,(MethodInfo *)0x0);
        if (-1 < iVar2) {
          return 0;
        }
        return 0x2e;
      }
      return 0x2e;
    }
  }
  if (charIndex == 0) {
    bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    if (bVar1) {
      return 0x2d;
    }
    if (text == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    iVar2 = System_String__IndexOf(text,0x2d,(MethodInfo *)0x0);
    if (iVar2 < 0) {
      return 0x2d;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$RejectControlCharacter
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RejectControlCharacter (bool multiline, uint16_t addedChar, const MethodInfo* method);
// 0x1818ea750

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RejectControlCharacter
               (bool multiline,uint16_t addedChar,MethodInfo *method)

{
  bool bVar1;
  
  if (((multiline) && ((addedChar - 10 & 0xfffc) == 0)) && (addedChar != 0xc)) {
    return false;
  }
  if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e48);
  }
  bVar1 = System_Char__IsControl(addedChar,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ValidateInteger
// il2cpp: uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateInteger (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x1818ee750

uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateInteger
                   (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184342165 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_184342165 = '\x01';
  }
  if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e48);
  }
  bVar1 = System_Char__IsDigit(addedChar,(MethodInfo *)0x0);
  if (bVar1) {
    return addedChar;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if ((addedChar != 0x2d) || (charIndex != 0)) {
    return 0;
  }
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar1) {
    return 0x2d;
  }
  if (text != (System_String_o *)0x0) {
    iVar2 = System_String__IndexOf(text,0x2d,(MethodInfo *)0x0);
    return -(ushort)(iVar2 < 0) & 0x2d;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ValidateNumber
// il2cpp: uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateNumber (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x1818ee850

uint16_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ValidateNumber
                   (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_184342166 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_184342166 = '\x01';
  }
  if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e48);
  }
  bVar1 = System_Char__IsDigit(addedChar,(MethodInfo *)0x0);
  if (bVar1) {
    return addedChar;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (addedChar == 0x2d) {
    if (charIndex == 0) {
      bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
      if (bVar1) {
        return 0x2d;
      }
      if (text != (System_String_o *)0x0) {
        iVar2 = System_String__IndexOf(text,0x2d,(MethodInfo *)0x0);
        if (iVar2 < 0) {
          return 0x2d;
        }
        return 0;
      }
      ThrowNullReferenceException();
    }
  }
  else if (addedChar == 0x2e) {
    if (text == (System_String_o *)0x0) {
      return 0x2e;
    }
    iVar2 = System_String__IndexOf(text,0x2e,(MethodInfo *)0x0);
    if (iVar2 < 0) {
      return 0x2e;
    }
    return 0;
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsLeadingMinus
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsLeadingMinus (System_String_o* text, int32_t charIndex, uint16_t addedChar, const MethodInfo* method);
// 0x1818e9dd0

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsLeadingMinus
               (System_String_o *text,int32_t charIndex,uint16_t addedChar,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if ((addedChar != 0x2d) || (charIndex != 0)) {
    return false;
  }
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar1) {
    return true;
  }
  if (text != (System_String_o *)0x0) {
    iVar2 = System_String__IndexOf(text,0x2d,(MethodInfo *)0x0);
    return SUB41((uint)iVar2 >> 0x1f,0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyInputMeasure
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyInputMeasure (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818dc9f0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyInputMeasure
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184342167 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_184342167 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818dcbdd;
  pUVar3 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar4 = (style->fields).width;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818dcb00:
    fVar5 = 280.0;
  }
  else {
    pSVar1 = (pGVar4->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(pSVar1,"point",5,(MethodInfo *)0x0);
    if (!bVar2) goto label_1818dcb00;
    fVar5 = (pGVar4->fields).value;
  }
  if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) {
label_1818dcbdd:
    ThrowNullReferenceException();
  }
  (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar3,fVar5,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar4 = (style->fields).height;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar1 = (pGVar4->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(pSVar1,"point",5,(MethodInfo *)0x0);
    if (bVar2) {
      fVar5 = (pGVar4->fields).value;
      goto label_1818dcbba;
    }
  }
  fVar5 = 58.0;
label_1818dcbba:
  (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar3,fVar5,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyFlex
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex (Gilzoide_FlexUi_FlexLayout_o* flex, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818dbb40
// asm: 12 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818dc464: movaps xmm7, xmm0
// asm:   0x1818dc467: jmp 0x1818dc4ad
// asm:   0x1818dc511: movaps xmm7, xmm0
// asm:   0x1818dc514: jmp 0x1818dc53f
// asm:   0x1818dc54c: movaps xmm8, xmm0
// asm:   0x1818dc550: jmp 0x1818dc57d
// asm:   0x1818dc574: movaps xmm8, xmm7
// asm:   0x1818dc58a: movaps xmm7, xmm0
// asm:   0x1818dc58d: jmp 0x1818dc5b3
// asm:   0x1818dc5c0: movaps xmm9, xmm0
// asm:   0x1818dc5c4: jmp 0x1818dc5ca
// asm:   0x1818dc65a: movaps xmm8, xmm7

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex
               (Gilzoide_FlexUi_FlexLayout_o *flex,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  bool bVar3;
  int32_t iVar4;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar5;
  UnityEngine_GameObject_o *go;
  UnityEngine_UI_LayoutElement_o *x;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar6;
  Gilzoide_FlexUi_Yoga_YGValue_Fields fallback;
  Gilzoide_FlexUi_Yoga_YGValue_Fields fallback_00;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar8;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar9;
  float fVar10;
  float fVar11;
  float value;
  
  if (Il2CppMethodInitialized_184342168 == '\0') {
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
    Il2CppMethodInitialized_184342168 = '\x01';
  }
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pSVar7 = (System_String_o *)0x0;
  }
  else {
    pSVar7 = (layout->fields).direction;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  iVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                    (pSVar7,0,(MethodInfo_6F6020 *)
                              MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_FlexDirection
                    );
  if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_1818dc700;
  Gilzoide_FlexUi_FlexLayout__set_FlexDirection(flex,iVar4,(MethodInfo *)0x0);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pSVar7 = (System_String_o *)0x0;
  }
  else {
    pSVar7 = (layout->fields).justify;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  iVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                    (pSVar7,0,(MethodInfo_6F6020 *)
                              MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Justify);
  Gilzoide_FlexUi_FlexLayout__set_JustifyContent(flex,iVar4,(MethodInfo *)0x0);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pSVar7 = (System_String_o *)0x0;
  }
  else {
    pSVar7 = (layout->fields).alignItems;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  iVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                    (pSVar7,4,(MethodInfo_6F6020 *)
                              MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Align);
  Gilzoide_FlexUi_FlexLayout__set_AlignItems(flex,iVar4,(MethodInfo *)0x0);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    bVar3 = false;
  }
  else {
    pSVar7 = (layout->fields).alignSelf;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(pSVar7,"Absolute",5,(MethodInfo *)0x0);
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342169 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_184342169 = '\x01';
  }
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
label_1818dbe13:
    cVar2 = '\0';
  }
  else {
    pSVar7 = (layout->fields).alignSelf;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(pSVar7,"Absolute",5,(MethodInfo *)0x0);
    if (!bVar1) goto label_1818dbe13;
    pGVar8 = (layout->fields).width;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100(pGVar8,(MethodInfo *)0x0);
    if (!bVar1) goto label_1818dbe13;
    pGVar8 = (layout->fields).height;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100(pGVar8,(MethodInfo *)0x0);
    if ((!bVar1) || (cVar2 = il2cpp_runtime_helper_180562af0((layout->fields).offsetX), cVar2 == '\0')) goto label_1818dbe13;
    cVar2 = il2cpp_runtime_helper_180562af0((layout->fields).offsetY);
  }
  if (bVar3 == false) {
    if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pSVar7 = (System_String_o *)0x0;
    }
    else {
      pSVar7 = (layout->fields).alignSelf;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    iVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                      (pSVar7,0,(MethodInfo_6F6020 *)
                                MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Align);
  }
  else {
    iVar4 = 0;
  }
  Gilzoide_FlexUi_FlexLayout__set_AlignSelf(flex,iVar4,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_PositionType(flex,bVar3 + 1,(MethodInfo *)0x0);
  if (bVar3 != false) {
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(0.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_PositionLeft(flex,GVar5,(MethodInfo *)0x0);
    GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(0.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_PositionTop(flex,GVar5,(MethodInfo *)0x0);
    if (cVar2 != '\0') {
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
  }
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pSVar7 = (System_String_o *)0x0;
  }
  else {
    pSVar7 = (layout->fields).wrap;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  iVar4 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                    (pSVar7,0,(MethodInfo_6F6020 *)
                              MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_ParseEnum_Wrap);
  Gilzoide_FlexUi_FlexLayout__set_FlexWrap(flex,iVar4,(MethodInfo *)0x0);
  x = UnityEngine_Component__GetComponent_object_
                ((UnityEngine_Component_o *)flex,
                 (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_LayoutElement);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1818dc700;
    fVar10 = (*(x->klass->vtable)._35_get_preferredWidth.methodPtr)
                       (x,(x->klass->vtable)._35_get_preferredWidth.method);
    if (fVar10 <= 0.0) goto label_1818dbff4;
    fVar10 = (*(x->klass->vtable)._35_get_preferredWidth.methodPtr)
                       (x,(x->klass->vtable)._35_get_preferredWidth.method);
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar6 = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
            Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar10,(MethodInfo *)0x0);
  }
  else {
label_1818dbff4:
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar6 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (UnityEngine_UI_LayoutElement_o *)0x0) goto label_1818dc700;
    fVar10 = (*(x->klass->vtable)._37_get_preferredHeight.methodPtr)
                       (x,(x->klass->vtable)._37_get_preferredHeight.method);
    if (fVar10 <= 0.0) goto label_1818dc09f;
    fVar10 = (*(x->klass->vtable)._37_get_preferredHeight.methodPtr)
                       (x,(x->klass->vtable)._37_get_preferredHeight.method);
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    fallback = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
               Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar10,(MethodInfo *)0x0);
  }
  else {
label_1818dc09f:
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    fallback = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x == (UnityEngine_UI_LayoutElement_o *)0x0) {
label_1818dc700:
      ThrowNullReferenceException();
    }
    fVar10 = (*(x->klass->vtable)._31_get_minWidth.methodPtr)(x,(x->klass->vtable)._31_get_minWidth.method);
    if (fVar10 <= 0.0) goto label_1818dc151;
    fVar10 = (*(x->klass->vtable)._31_get_minWidth.methodPtr)(x,(x->klass->vtable)._31_get_minWidth.method);
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    fallback_00 = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
                  Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar10,(MethodInfo *)0x0);
  }
  else {
label_1818dc151:
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    fallback_00 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  }
  if (cVar2 == '\0') {
    if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar8 = (layout->fields).width;
    }
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar9 = (style->fields).width;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if ((pGVar8 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) ||
       (bVar3 = System_String__IsNullOrEmpty((pGVar8->fields).unit,(MethodInfo *)0x0), bVar3)) {
      pGVar8 = pGVar9;
    }
    GVar6 = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length
                      (pGVar8,(Gilzoide_FlexUi_Yoga_YGValue_o)GVar6,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar6 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
  }
  Gilzoide_FlexUi_FlexLayout__set_Width(flex,(Gilzoide_FlexUi_Yoga_YGValue_o)GVar6,(MethodInfo *)0x0);
  if (cVar2 == '\0') {
    if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar8 = (layout->fields).height;
    }
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar9 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar9 = (style->fields).height;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if ((pGVar8 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) ||
       (bVar3 = System_String__IsNullOrEmpty((pGVar8->fields).unit,(MethodInfo *)0x0), bVar3)) {
      pGVar8 = pGVar9;
    }
    GVar6 = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
            Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length
                      (pGVar8,(Gilzoide_FlexUi_Yoga_YGValue_o)fallback,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    }
    GVar6 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
  }
  Gilzoide_FlexUi_FlexLayout__set_Height(flex,(Gilzoide_FlexUi_Yoga_YGValue_o)GVar6,(MethodInfo *)0x0);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar8 = (layout->fields).minWidth;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  GVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length(pGVar8,fallback_00,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_MinWidth(flex,GVar5,(MethodInfo *)0x0);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar8 = (layout->fields).minHeight;
  }
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar6 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  GVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length(pGVar8,GVar6,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_MinHeight(flex,GVar5,(MethodInfo *)0x0);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar8 = (layout->fields).maxWidth;
  }
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar6 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  GVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length(pGVar8,GVar6,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_MaxWidth(flex,GVar5,(MethodInfo *)0x0);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pGVar8 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar8 = (layout->fields).maxHeight;
  }
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar6 = (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Undefined).fields;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  GVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length(pGVar8,GVar6,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_MaxHeight(flex,GVar5,(MethodInfo *)0x0);
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    Gilzoide_FlexUi_FlexLayout__set_FlexGrow(flex,0.0,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_FlexShrink(flex,1.0,(MethodInfo *)0x0);
label_1818dc484:
    if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
       ((style->fields).gap.fields.hasValue == false)) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = System_Nullable_float___get_Value
                         (&(style->fields).gap,(MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value
                         );
    }
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_1818dc4ad;
label_1818dc4c7:
    Gilzoide_FlexUi_FlexLayout__set_GapColumn(flex,fVar10,(MethodInfo *)0x0);
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_1818dc4da;
label_1818dc4f4:
    Gilzoide_FlexUi_FlexLayout__set_GapRow(flex,fVar10,(MethodInfo *)0x0);
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_1818dc507;
label_1818dc516:
    if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
       ((style->fields).padding.fields.hasValue == false)) {
      fVar10 = 0.0;
    }
    else {
      fVar10 = System_Nullable_float___get_Value
                         (&(style->fields).padding,
                          (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    }
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_1818dc53f;
label_1818dc552:
    fVar11 = fVar10;
    if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
       ((style->fields).paddingX.fields.hasValue != false)) {
      fVar11 = System_Nullable_float___get_Value
                         (&(style->fields).paddingX,
                          (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    }
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_1818dc57d;
label_1818dc58f:
    value = fVar10;
    if ((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
       ((style->fields).paddingY.fields.hasValue != false)) {
      value = System_Nullable_float___get_Value
                        (&(style->fields).paddingY,
                         (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
    }
    if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_1818dc5b3;
  }
  else {
    Gilzoide_FlexUi_FlexLayout__set_FlexGrow(flex,(layout->fields).grow,(MethodInfo *)0x0);
    Gilzoide_FlexUi_FlexLayout__set_FlexShrink(flex,(layout->fields).shrink,(MethodInfo *)0x0);
    fVar10 = (layout->fields).gap;
    if (fVar10 <= 0.0) goto label_1818dc484;
label_1818dc4ad:
    fVar11 = (layout->fields).gapColumn;
    if (fVar11 <= 0.0) goto label_1818dc4c7;
    Gilzoide_FlexUi_FlexLayout__set_GapColumn(flex,fVar11,(MethodInfo *)0x0);
label_1818dc4da:
    fVar11 = (layout->fields).gapRow;
    if (fVar11 <= 0.0) goto label_1818dc4f4;
    Gilzoide_FlexUi_FlexLayout__set_GapRow(flex,fVar11,(MethodInfo *)0x0);
label_1818dc507:
    fVar10 = (layout->fields).padding;
    if (fVar10 <= 0.0) goto label_1818dc516;
label_1818dc53f:
    fVar11 = (layout->fields).paddingX;
    if (fVar11 <= 0.0) goto label_1818dc552;
label_1818dc57d:
    value = (layout->fields).paddingY;
    if (value <= 0.0) goto label_1818dc58f;
label_1818dc5b3:
    fVar10 = (layout->fields).paddingLeft;
    if (0.0 < fVar10) goto label_1818dc5ca;
  }
  fVar10 = fVar11;
label_1818dc5ca:
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar10,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_PaddingLeft(flex,GVar5,(MethodInfo *)0x0);
  if ((layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
     (fVar10 = (layout->fields).paddingRight, 0.0 < fVar10)) {
    fVar11 = fVar10;
  }
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar11,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_PaddingRight(flex,GVar5,(MethodInfo *)0x0);
  fVar10 = value;
  if ((layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
     (fVar11 = (layout->fields).paddingTop, 0.0 < fVar11)) {
    fVar10 = fVar11;
  }
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar10,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_PaddingTop(flex,GVar5,(MethodInfo *)0x0);
  if ((layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
     (fVar10 = (layout->fields).paddingBottom, 0.0 < fVar10)) {
    value = fVar10;
  }
  if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
  }
  GVar5 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(value,(MethodInfo *)0x0);
  Gilzoide_FlexUi_FlexLayout__set_PaddingBottom(flex,GVar5,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsFullscreenAbsolute
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsFullscreenAbsolute (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x1818e9cc0

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsFullscreenAbsolute
               (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  System_String_o *a;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  bool bVar2;
  char cVar3;
  
  if (Il2CppMethodInitialized_184342169 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"Absolute");
    Il2CppMethodInitialized_184342169 = '\x01';
  }
  if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    a = (layout->fields).alignSelf;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(a,"Absolute",5,(MethodInfo *)0x0);
    if (bVar2) {
      pGVar1 = (layout->fields).width;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100(pGVar1,(MethodInfo *)0x0);
      if (bVar2) {
        pGVar1 = (layout->fields).height;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100(pGVar1,(MethodInfo *)0x0);
        if (bVar2) {
          cVar3 = il2cpp_runtime_helper_180562af0((layout->fields).offsetX,0,0);
          if (cVar3 != '\0') {
            bVar2 = (bool)il2cpp_runtime_helper_180562af0((layout->fields).offsetY,0,0);
            return bVar2;
          }
        }
      }
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$IsPercent100
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100 (Gisketch_Aottg2UI_Data_GisketchLength_o* length, const MethodInfo* method);
// 0x1818e9e30

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__IsPercent100
               (Gisketch_Aottg2UI_Data_GisketchLength_o *length,MethodInfo *method)

{
  System_String_o *a;
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434216a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_18434216a = '\x01';
  }
  if (length != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    a = (length->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(a,"percent",5,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = (bool)il2cpp_runtime_helper_180562af0((length->fields).value,0x42c80000,0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$Length
// il2cpp: Gilzoide_FlexUi_Yoga_YGValue_o Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length (Gisketch_Aottg2UI_Data_GisketchLength_o* length, Gilzoide_FlexUi_Yoga_YGValue_o fallback, const MethodInfo* method);
// 0x1818ea0b0

Gilzoide_FlexUi_Yoga_YGValue_o
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Length
          (Gisketch_Aottg2UI_Data_GisketchLength_o *length,Gilzoide_FlexUi_Yoga_YGValue_o fallback,
          MethodInfo *method)

{
  float fVar1;
  System_String_o *pSVar2;
  bool bVar3;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar4;
  
  if (Il2CppMethodInitialized_18434216b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"auto");
    Il2CppMethodInitialized_18434216b = '\x01';
  }
  if (length != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    bVar3 = System_String__IsNullOrEmpty((length->fields).unit,(MethodInfo *)0x0);
    if (!bVar3) {
      pSVar2 = (length->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_196c550(pSVar2,"percent",5,(MethodInfo *)0x0);
      if (!bVar3) {
        pSVar2 = (length->fields).unit;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar3 = System_String__Equals_196c550(pSVar2,"auto",5,(MethodInfo *)0x0);
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
        return (Gilzoide_FlexUi_Yoga_YGValue_o)
               (TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->static_fields->Auto).fields;
      }
      fVar1 = (length->fields).value;
      if ((TypeInfo_Gilzoide_FlexUi_Yoga_YGValue->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gilzoide_FlexUi_Yoga_YGValue);
      }
      GVar4 = Gilzoide_FlexUi_Yoga_YGValue__Percent(fVar1,(MethodInfo *)0x0);
      return (Gilzoide_FlexUi_Yoga_YGValue_o)GVar4.fields;
    }
  }
  return (Gilzoide_FlexUi_Yoga_YGValue_o)fallback.fields;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$PreferLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLength_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__PreferLayout (Gisketch_Aottg2UI_Data_GisketchLength_o* layout, Gisketch_Aottg2UI_Data_GisketchLength_o* style, const MethodInfo* method);
// 0x1818ea600

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
// il2cpp: int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_ (System_String_o* value, int32_t fallback, const MethodInfo_6F6020* method);
// 0x1806f6020

int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum_Int32Enum_
                  (System_String_o *value,int32_t fallback,MethodInfo_6F6020 *method)

{
  bool bVar1;
  int32_t local_res8 [2];
  
  if (method->rgctx_data == (MethodInfo_6F6020_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  local_res8[0] = 0;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    bVar1 = System_Enum__TryParse_Int32Enum__6b1ce0
                      (value,true,local_res8,
                       (MethodInfo_6B1CE0 *)method->rgctx_data->_0_System_Enum_TryParse_T_);
    if (bVar1) {
      return local_res8[0];
    }
  }
  return fallback;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ParseEnum<__Il2CppFullySharedGenericStructType>
// il2cpp: Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum___Il2CppFullySharedGenericStructType_ (System_String_o* value, Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o fallback, const MethodInfo_6F5F20* method);
// 0x1806f5f20

Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ParseEnum___Il2CppFullySharedGenericStructType_
          (System_String_o *value,Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o fallback,
          MethodInfo_6F5F20 *method)

{
  undefined8 *puVar1;
  code *pcVar2;
  longlong lVar3;
  longlong lVar4;
  bool bVar5;
  char cVar6;
  ulonglong uVar7;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o UVar8;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields source;
  ulonglong size;
  MethodInfo *in_R9;
  undefined8 auStack_70 [5];
  undefined1 local_48 [8];
  
  if ((in_R9->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    auStack_70[0] = 0x1806f5f51;
    il2cpp_codegen_rgctx_method_init(in_R9);
  }
  size = (ulonglong)(((in_R9->field7_0x38).rgctx_data[2].klass)->_2).stack_slot_size;
  uVar7 = size + 0xf;
  if (uVar7 <= size) {
    uVar7 = 0xffffffffffffff0;
  }
  auStack_70[0] = 0x1806f5f7f;
  lVar3 = -(uVar7 & 0xfffffffffffffff0);
  uVar7 = size + 0xf;
  if (uVar7 <= size) {
    uVar7 = 0xffffffffffffff0;
  }
  *(undefined8 *)((longlong)auStack_70 + lVar3) = 0x1806f5f9c;
  lVar4 = -(uVar7 & 0xfffffffffffffff0);
  source._tail = (uint8_t  [8])((longlong)local_48 + lVar4 + lVar3);
  *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar3) = 0x1806f5fb1;
  il2cpp_runtime_helper_180522500(source._tail,0,size);
  *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar3) = 0x1806f5fbb;
  bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar5) {
    if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
      *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar3) = 0x1806f5fd4;
      il2cpp_codegen_runtime_class_init(g_data_184354e58);
    }
    puVar1 = *(undefined8 **)(in_R9->field7_0x38).methodMetadataHandle;
    pcVar2 = (code *)*puVar1;
    *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar3) = 0x1806f5fe9;
    cVar6 = (*pcVar2)(value,1,source._tail,puVar1);
    if (cVar6 != '\0') goto label_1806f5ff3;
  }
  source = fallback.fields._tail;
label_1806f5ff3:
  *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar3) = 0x1806f5ffe;
  memcpy(local_48 + lVar3,(void *)source._tail,size);
  *(undefined8 *)((longlong)auStack_70 + lVar4 + lVar3) = 0x1806f600c;
  UVar8.fields._tail =
       (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_Fields)memcpy(method,local_48 + lVar3,size)
  ;
  return (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericStructType_o)UVar8.fields._tail;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ResolveTooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ResolveTooltip (System_String_o* tooltip, System_String_o* tooltipKey, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818ea860
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ea8bf: xor ecx, ecx
// asm:   0x1818ea8c1: mov qword ptr [rsp + 0x20], rsi
// asm:   0x1818ea8c6: mov r9, rdi

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ResolveTooltip
          (System_String_o *tooltip,System_String_o *tooltipKey,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *pGVar4;
  
  if (Il2CppMethodInitialized_18434216c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
    Il2CppMethodInitialized_18434216c = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(tooltipKey,(MethodInfo *)0x0);
  if (!bVar1) {
    if (context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) goto label_1818ea95a;
    if ((context->fields).Localizer != (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0) {
      pGVar4 = (context->fields).Localizer;
      if (pGVar4 == (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0) goto label_1818ea95a;
      goto label_1818ea8c9;
    }
  }
  if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    if (((context->fields).Manifest == (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) ||
       (pGVar3 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindTooltip
                           ((context->fields).Manifest,tooltip,(MethodInfo *)0x0),
       pGVar3 == (Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *)0x0)) {
      return tooltip;
    }
    bVar1 = System_String__IsNullOrEmpty((pGVar3->fields).textKey,(MethodInfo *)0x0);
    if ((bVar1) || ((context->fields).Localizer == (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0)
       ) {
      return (pGVar3->fields).text;
    }
    tooltip = (pGVar3->fields).text;
    tooltipKey = (pGVar3->fields).textKey;
    pGVar4 = (context->fields).Localizer;
label_1818ea8c9:
    pSVar2 = (System_String_o *)
             il2cpp_runtime_helper_18001c6b0(0,TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,pGVar4,tooltipKey,
                           tooltip);
    return pSVar2;
  }
label_1818ea95a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$StyleMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StyleMotion (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x1818ec9d0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__StyleMotion
          (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *__this;
  System_String_o *value;
  float fVar2;
  
  if (Il2CppMethodInitialized_18434216d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
    Il2CppMethodInitialized_18434216d = '\x01';
  }
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((style->fields).motion,(MethodInfo *)0x0);
    if (!bVar1) {
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
      Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
      if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        value = Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionPreset
                          (theme,(style->fields).motion,(MethodInfo *)0x0);
        if (__this != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
          (__this->fields).preset = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields).preset,value);
          fVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionDuration
                            (theme,(style->fields).motion,0.16,(MethodInfo *)0x0);
          (__this->fields).duration = fVar2;
          return __this;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x18189b1d0

void
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Stretch(UnityEngine_RectTransform_o* rect, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyAspectRatio
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyAspectRatio (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818db400

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyAspectRatio
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               MethodInfo *method)

{
  UnityEngine_RectTransform_o *__this;
  UnityEngine_Vector2_o UVar1;
  UnityEngine_UI_AspectRatioFitter_o *__this_00;
  float fVar2;
  
  if (Il2CppMethodInitialized_18434216e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AspectRatioFitter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_AspectRatioFitter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    Il2CppMethodInitialized_18434216e = '\x01';
  }
  if (((style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) &&
      ((style->fields).aspectRatio.fields.hasValue != false)) &&
     (fVar2 = System_Nullable_float___get_Value
                        (&(style->fields).aspectRatio,
                         (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value), 0.0 < fVar2)) {
    if ((go != (UnityEngine_GameObject_o *)0x0) &&
       (__this = UnityEngine_GameObject__GetComponent_object_
                           (go,(MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform),
       __this != (UnityEngine_RectTransform_o *)0x0)) {
      UVar1 = UnityEngine_RectTransform__get_pivot(__this,(MethodInfo *)0x0);
      UnityEngine_RectTransform__set_pivot
                (__this,(UnityEngine_Vector2_o)(UVar1.fields & 0xffffffff00000000),(MethodInfo *)0x0);
      __this_00 = UnityEngine_GameObject__GetComponent_object_
                            (go,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_AspectRatioFitter);
      if ((__this_00 != (UnityEngine_UI_AspectRatioFitter_o *)0x0) ||
         (__this_00 = UnityEngine_GameObject__AddComponent_object_
                                (go,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_AspectRatioFitter),
         __this_00 != (UnityEngine_UI_AspectRatioFitter_o *)0x0)) {
        UnityEngine_UI_AspectRatioFitter__set_aspectMode(__this_00,2,(MethodInfo *)0x0);
        fVar2 = System_Nullable_float___get_Value
                          (&(style->fields).aspectRatio,
                           (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value);
        UnityEngine_UI_AspectRatioFitter__set_aspectRatio(__this_00,fVar2,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyLayoutOffset
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyLayoutOffset (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x1818dcbf0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyLayoutOffset
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,
               MethodInfo *method)

{
  UnityEngine_Vector2_o offset;
  char cVar1;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this;
  
  if (Il2CppMethodInitialized_18434216f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset);
    Il2CppMethodInitialized_18434216f = '\x01';
  }
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    return;
  }
  cVar1 = il2cpp_runtime_helper_180562af0((layout->fields).offsetX,0);
  if ((cVar1 != '\0') && (cVar1 = il2cpp_runtime_helper_180562af0((layout->fields).offsetY,0), cVar1 != '\0')) {
    return;
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset);
    if (__this != (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
      offset.fields.y = (layout->fields).offsetY;
      offset.fields.x = (layout->fields).offsetX;
      Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup(__this,offset,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildScaleBox
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScaleBox (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e3740
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e392b: movaps xmm7, xmm0
// asm:   0x1818e392e: jmp 0x1818e3938
// asm:   0x1818e3945: movaps xmm6, xmm0
// asm:   0x1818e3948: jmp 0x1818e3952

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScaleBox
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_Transform_o *parent;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *__this_00;
  UnityEngine_RectTransform_o *value;
  UnityEngine_RectTransform_o *value_00;
  Gisketch_Aottg2UI_Building_GisketchChildHost_o *pGVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184342170 == '\0') {
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
    Il2CppMethodInitialized_184342170 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel(go,node,style,context,(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Scale Content",components,(MethodInfo *)0x0);
    if (((__this != (UnityEngine_GameObject_o *)0x0) &&
        (pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
        go != (UnityEngine_GameObject_o *)0x0)) &&
       (parent = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0),
       pUVar2 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,parent,false,(MethodInfo *)0x0);
      flex = UnityEngine_GameObject__AddComponent_object_
                       (__this,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout)
      ;
      if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex
                  (flex,(node->fields).contentLayout,(Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0,
                   (MethodInfo *)0x0);
        fVar6 = (node->fields).referenceWidth;
        if (fVar6 <= 0.0) {
          fVar6 = 1920.0;
        }
        fVar5 = (node->fields).referenceHeight;
        if (fVar5 <= 0.0) {
          fVar5 = 1080.0;
        }
        __this_00 = UnityEngine_GameObject__AddComponent_object_
                              (go,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScaleToParent);
        value = UnityEngine_GameObject__GetComponent_object_
                          (__this,(MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_00 != (Gisketch_Aottg2UI_Building_GisketchScaleToParent_o *)0x0) {
          if (Il2CppMethodInitialized_184342135 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
            Il2CppMethodInitialized_184342135 = '\x01';
          }
          value_00 = UnityEngine_Component__GetComponent_object_
                               ((UnityEngine_Component_o *)__this_00,
                                (MethodInfo_6651A0 *)
                                MethodInfo_UnityEngine_Component_GetComponent_RectTransform);
          (__this_00->fields)._root = value_00;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._root,value_00);
          (__this_00->fields)._content = value;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields)._content,value);
          fVar4 = 1.0;
          if (1.0 <= fVar6) {
            fVar4 = fVar6;
          }
          (__this_00->fields)._referenceWidth = fVar4;
          fVar6 = 1.0;
          if (1.0 <= fVar5) {
            fVar6 = fVar5;
          }
          (__this_00->fields)._referenceHeight = fVar6;
          Gisketch_Aottg2UI_Building_GisketchScaleToParent__Apply(__this_00,(MethodInfo *)0x0);
          pGVar3 = UnityEngine_GameObject__AddComponent_object_
                             (go,(MethodInfo_6F4D60 *)
                                 MethodInfo_UnityEngine_GameObject_AddComponent_GisketchChildHost);
          pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchChildHost_o *)0x0) {
            (pGVar3->fields)._Parent_k__BackingField = pUVar2;
            Il2CppCodeGenWriteBarrier(&(pGVar3->fields)._Parent_k__BackingField,pUVar2);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildScrollView
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScrollView (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e3a50

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildScrollView
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_Scrollbar_o *value;
  Gisketch_Aottg2UI_Building_GisketchScrollRect_o *__this_01;
  UnityEngine_RectTransform_o *pUVar2;
  Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *__this_02;
  Gisketch_Aottg2UI_Building_GisketchChildHost_o *pGVar3;
  
  if (Il2CppMethodInitialized_184342171 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchChildHost);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollRect);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollbarVisibility);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_184342171 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyPanel(go,node,style,context,(MethodInfo *)0x0);
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    __this = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateViewport(pUVar1,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar1 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        __this_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateContent
                              (pUVar1,(node->fields).contentLayout,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
        if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
          value = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateScrollbar
                            (pUVar1,(context->fields).Theme,(MethodInfo *)0x0);
          __this_01 = UnityEngine_GameObject__AddComponent_object_
                                (go,(MethodInfo_6F4D60 *)
                                    MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollRect);
          if (__this_01 != (Gisketch_Aottg2UI_Building_GisketchScrollRect_o *)0x0) {
            (__this_01->fields).m_Horizontal = false;
            (__this_01->fields).m_Vertical = true;
            pUVar2 = UnityEngine_GameObject__GetComponent_object_
                               (__this,(MethodInfo_6F5650 *)
                                       MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            UnityEngine_UI_ScrollRect__set_viewport
                      ((UnityEngine_UI_ScrollRect_o *)__this_01,pUVar2,(MethodInfo *)0x0);
            if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
              pUVar2 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              (__this_01->fields).m_Content = pUVar2;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).m_Content,pUVar2);
              UnityEngine_UI_ScrollRect__set_verticalScrollbar
                        ((UnityEngine_UI_ScrollRect_o *)__this_01,value,(MethodInfo *)0x0);
              UnityEngine_UI_ScrollRect__set_verticalScrollbarVisibility
                        ((UnityEngine_UI_ScrollRect_o *)__this_01,0,(MethodInfo *)0x0);
              (__this_01->fields).m_MovementType = 2;
              (__this_01->fields).m_Elasticity = 0.0;
              (__this_01->fields).m_ScrollSensitivity = 28.0;
              __this_02 = UnityEngine_GameObject__AddComponent_object_
                                    (go,(MethodInfo_6F4D60 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollbarVisibility
                                    );
              if (__this_02 != (Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)0x0) {
                Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__Setup
                          (__this_02,(UnityEngine_UI_ScrollRect_o *)__this_01,(MethodInfo *)0x0);
                pGVar3 = UnityEngine_GameObject__AddComponent_object_
                                   (go,(MethodInfo_6F4D60 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchChildHost);
                pUVar1 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
                if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchChildHost_o *)0x0) {
                  (pGVar3->fields)._Parent_k__BackingField = pUVar1;
                  Il2CppCodeGenWriteBarrier(&(pGVar3->fields)._Parent_k__BackingField,pUVar1);
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
// 0x1818e8f30

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateViewport
          (UnityEngine_Transform_o *parent,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_UI_Image_o *pUVar2;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  UnityEngine_Color_Fields local_18;
  
  if (Il2CppMethodInitialized_184342172 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Scroll Viewport");
    Il2CppMethodInitialized_184342172 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Scroll Viewport",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
        if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
          local_18.r = 0.0;
          local_18.g = 0.0;
          local_18.b = 0.0;
          local_18.a = 0.0;
          (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                    (pUVar2,(UnityEngine_Color_o *)&local_18,(pUVar2->klass->vtable)._23_set_color.method);
          (*(pUVar2->klass->vtable)._25_set_raycastTarget.methodPtr)
                    (pUVar2,true,(pUVar2->klass->vtable)._25_set_raycastTarget.method);
          UnityEngine_GameObject__AddComponent_object_
                    (__this,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
          flex = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
          if (Il2CppMethodInitialized_184342176 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
            il2cpp_codegen_initialize_runtime_metadata(&"Column");
            il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
            il2cpp_codegen_initialize_runtime_metadata(&"percent");
            Il2CppMethodInitialized_184342176 = '\x01';
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
          Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_01,(MethodInfo *)0x0);
          if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
            (__this_01->fields).direction = "Column";
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).direction,"Column");
            (__this_01->fields).alignItems = "Stretch";
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).alignItems,"Stretch");
            pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
            Gisketch_Aottg2UI_Data_GisketchLength___ctor
                      ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,(MethodInfo *)0x0);
            if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
              (pGVar3->fields).value = 100.0;
              (pGVar3->fields).unit = "percent";
              Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit,"percent");
              (__this_01->fields).width = pGVar3;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).width,pGVar3);
              pGVar3 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
              Gisketch_Aottg2UI_Data_GisketchLength___ctor
                        ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar3,(MethodInfo *)0x0);
              if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
                (pGVar3->fields).value = 100.0;
                (pGVar3->fields).unit = "percent";
                Il2CppCodeGenWriteBarrier(&(pGVar3->fields).unit,"percent");
                (__this_01->fields).height = pGVar3;
                Il2CppCodeGenWriteBarrier(&(__this_01->fields).height,pGVar3);
                (__this_01->fields).grow = 1.0;
                (__this_01->fields).shrink = 0.0;
                Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex
                          (flex,__this_01,(Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0,
                           (MethodInfo *)0x0);
                return __this;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CreateContent
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateContent (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* layout, const MethodInfo* method);
// 0x1818e8570

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
  
  if (Il2CppMethodInitialized_184342173 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollContentLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Scroll Content");
    Il2CppMethodInitialized_184342173 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Scroll Content",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (Il2CppMethodInitialized_18433e3c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_18433e3c9 = '\x01';
        }
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_01,(UnityEngine_Vector2_o)0x3f80000000000000,(MethodInfo *)0x0);
          flex = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchScrollContentLayout)
          ;
          layout_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ScrollContentLayout
                                (layout,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex
                    ((Gilzoide_FlexUi_FlexLayout_o *)flex,layout_00,
                     (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0,(MethodInfo *)0x0);
          return __this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CreateScrollbar
// il2cpp: UnityEngine_UI_Scrollbar_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateScrollbar (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x1818e8ad0

UnityEngine_UI_Scrollbar_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateScrollbar
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method
          )

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  System_String_o *a;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_RectTransform_o *pUVar5;
  UnityEngine_UI_Scrollbar_o *__this_00;
  UnityEngine_UI_Image_o *value_00;
  float fVar6;
  UnityEngine_UI_Navigation_Fields local_68 [2];
  
  if (Il2CppMethodInitialized_184342174 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Scrollbar);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbar");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Scrollbar");
    Il2CppMethodInitialized_184342174 = '\x01';
  }
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818e8f08;
  style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"scrollbar",(MethodInfo *)0x0);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_1818e8f08;
  pGVar1 = (style->fields).width;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818e8c34:
    fVar6 = 12.0;
  }
  else {
    a = (pGVar1->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(a,"point",5,(MethodInfo *)0x0);
    if (!bVar2) goto label_1818e8c34;
    fVar6 = (pGVar1->fields).value;
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Scrollbar",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,parent,false,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (__this,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(pUVar5,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0)
          ;
          if (Il2CppMethodInitialized_184341f36 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_184341f36 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (pUVar5,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,(MethodInfo *)0x0)
          ;
          UnityEngine_RectTransform__set_pivot
                    (pUVar5,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
          value.fields.y = 0.0;
          value.fields.x = -fVar6;
          UnityEngine_RectTransform__set_offsetMin(pUVar5,value,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMax
                    (pUVar5,(UnityEngine_Vector2_o)
                            (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,(MethodInfo *)0x0
                    );
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                    (__this,style,theme,(style->fields).background,false,(MethodInfo *)0x0);
          pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          pUVar5 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateScrollbarThumb
                             (pUVar4,theme,(MethodInfo *)0x0);
          __this_00 = UnityEngine_GameObject__AddComponent_object_
                                (__this,(MethodInfo_6F4D60 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_Scrollbar);
          if (__this_00 != (UnityEngine_UI_Scrollbar_o *)0x0) {
            UnityEngine_UI_Scrollbar__set_direction(__this_00,2,(MethodInfo *)0x0);
            UnityEngine_UI_Scrollbar__set_handleRect(__this_00,pUVar5,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_RectTransform_o *)0x0) {
              value_00 = UnityEngine_Component__GetComponent_object_
                                   ((UnityEngine_Component_o *)pUVar5,
                                    (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_Image);
              UnityEngine_UI_Selectable__set_targetGraphic
                        ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Graphic_o *)value_00,
                         (MethodInfo *)0x0);
              UnityEngine_UI_Selectable__set_transition
                        ((UnityEngine_UI_Selectable_o *)__this_00,0,(MethodInfo *)0x0);
              local_68[0].m_Mode = 0;
              local_68[0].m_WrapAround = false;
              local_68[0]._5_3_ = 0;
              local_68[0].m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
              local_68[0].m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
              local_68[0].m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
              local_68[0].m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
              UnityEngine_UI_Selectable__set_navigation
                        ((UnityEngine_UI_Selectable_o *)__this_00,(UnityEngine_UI_Navigation_o *)local_68,
                         (MethodInfo *)0x0);
              return __this_00;
            }
          }
        }
      }
    }
  }
label_1818e8f08:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CreateScrollbarThumb
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CreateScrollbarThumb (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x1818e87e0

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
  
  if (Il2CppMethodInitialized_184342175 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"scrollbarThumb");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Scrollbar Sliding Area");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Scrollbar Thumb");
    Il2CppMethodInitialized_184342175 = '\x01';
  }
  pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar2 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar1 != (System_Type_array *)0x0) {
    if (pSVar2 != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((int)pSVar1->max_length == 0) {
label_1818e8abc:
      ThrowIndexOutOfRangeException();
    }
    pSVar1->m_Items[0] = pSVar2;
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pSVar2);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Scrollbar Sliding Area",pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,parent,false,(MethodInfo *)0x0);
        pUVar5 = UnityEngine_GameObject__GetComponent_object_
                           (__this,(MethodInfo_6F5650 *)
                                   MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(pUVar5,(MethodInfo *)0x0);
        pSVar1 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
        pSVar2 = System_Type__GetTypeFromHandle
                           ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0);
        if (pSVar1 != (System_Type_array *)0x0) {
          if (pSVar2 != (System_Type_o *)0x0) {
            pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar2,(((pSVar1->obj).klass)->_1).element_class)
            ;
            if (pIVar3 == (Il2CppObject *)0x0) {
              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
            }
          }
          if ((int)pSVar1->max_length == 0) goto label_1818e8abc;
          pSVar1->m_Items[0] = pSVar2;
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items,pSVar2);
          __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
          UnityEngine_GameObject___ctor_2f1abe0(__this_00,"AoTTG Scrollbar Thumb",pSVar1,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
            pUVar4 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
            parent_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
            if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
              UnityEngine_Transform__SetParent_2f5a7e0(pUVar4,parent_00,false,(MethodInfo *)0x0);
              pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                 (__this_00,
                                  (MethodInfo_6F5650 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
              Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(pUVar5,(MethodInfo *)0x0);
              if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
                style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                                  (theme,"scrollbarThumb",(MethodInfo *)0x0);
                if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
                  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                            (__this_00,style,theme,(style->fields).background,true,(MethodInfo *)0x0);
                  pUVar5 = UnityEngine_GameObject__GetComponent_object_
                                     (__this_00,
                                      (MethodInfo_6F5650 *)
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
// 0x1818e94e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__FillLayout(float grow,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342176 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_184342176 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).direction = "Column";
    Il2CppCodeGenWriteBarrier(&(__this->fields).direction,"Column");
    (__this->fields).alignItems = "Stretch";
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems,"Stretch");
    pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar1,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      (pGVar1->fields).value = 100.0;
      (pGVar1->fields).unit = "percent";
      Il2CppCodeGenWriteBarrier(&(pGVar1->fields).unit,"percent");
      (__this->fields).width = pGVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).width,pGVar1);
      pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
      Gisketch_Aottg2UI_Data_GisketchLength___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)pGVar1,(MethodInfo *)0x0);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        (pGVar1->fields).value = 100.0;
        (pGVar1->fields).unit = "percent";
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).unit,"percent");
        (__this->fields).height = pGVar1;
        Il2CppCodeGenWriteBarrier(&(__this->fields).height,pGVar1);
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
// 0x1818eab60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818eabdd: mov rdx, qword ptr [rip + 0x278b7ec]  ; "Column"

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ScrollContentLayout
          (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout,MethodInfo *method)

{
  System_String_o **targetAddress;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  System_String_o *pSVar1;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_184342177 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    Il2CppMethodInitialized_184342177 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
  pSVar1 = "Column";
  if (layout != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    pSVar1 = (layout->fields).direction;
  }
  if (__this == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_1818eadd4;
  (__this->fields).direction = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).direction,pSVar1);
  pGVar2 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  targetAddress = &(__this->fields).justify;
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    (__this->fields).justify = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(targetAddress,(void *)0x0);
    pSVar1 = "Stretch";
    (__this->fields).alignItems = "Stretch";
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems,pSVar1);
    (__this->fields).alignSelf = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignSelf,(void *)0x0);
    (__this->fields).wrap = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).wrap,(void *)0x0);
label_1818eaca8:
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818eadd4:
      ThrowNullReferenceException();
    }
    (__this_00->fields).value = 100.0;
    (__this_00->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit,"percent");
    (__this->fields).width = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).width,__this_00);
    if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (__this->fields).minWidth = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).minWidth,(void *)0x0);
      goto label_1818ead2a;
    }
  }
  else {
    pSVar1 = (layout->fields).justify;
    (__this->fields).justify = pSVar1;
    Il2CppCodeGenWriteBarrier(targetAddress,pSVar1);
    pSVar1 = (layout->fields).alignItems;
    (__this->fields).alignItems = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems,pSVar1);
    pSVar1 = (layout->fields).alignSelf;
    (__this->fields).alignSelf = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignSelf,pSVar1);
    pSVar1 = (layout->fields).wrap;
    (__this->fields).wrap = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields).wrap,pSVar1);
    if ((layout->fields).width == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_1818eaca8;
    pGVar2 = (layout->fields).width;
    (__this->fields).width = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).width,pGVar2);
  }
  pGVar2 = (layout->fields).minWidth;
  (__this->fields).minWidth = pGVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).minWidth,pGVar2);
  pGVar2 = (layout->fields).maxWidth;
label_1818ead2a:
  (__this->fields).maxWidth = pGVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).maxWidth,pGVar2);
  (__this->fields).grow = 0.0;
  (__this->fields).shrink = 0.0;
  if (layout == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    fVar3 = 0.0;
    (__this->fields).gap = 0.0;
    (__this->fields).gapRow = 0.0;
    (__this->fields).gapColumn = 0.0;
    (__this->fields).padding = 0.0;
    (__this->fields).paddingX = 0.0;
    (__this->fields).paddingY = 0.0;
    (__this->fields).paddingLeft = 0.0;
    (__this->fields).paddingRight = 0.0;
    (__this->fields).paddingTop = 0.0;
  }
  else {
    (__this->fields).gap = (layout->fields).gap;
    (__this->fields).gapRow = (layout->fields).gapRow;
    (__this->fields).gapColumn = (layout->fields).gapColumn;
    (__this->fields).padding = (layout->fields).padding;
    (__this->fields).paddingX = (layout->fields).paddingX;
    (__this->fields).paddingY = (layout->fields).paddingY;
    (__this->fields).paddingLeft = (layout->fields).paddingLeft;
    (__this->fields).paddingRight = (layout->fields).paddingRight;
    (__this->fields).paddingTop = (layout->fields).paddingTop;
    fVar3 = (layout->fields).paddingBottom;
  }
  (__this->fields).paddingBottom = fVar3;
  return __this;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSearchPalette
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSearchPalette (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818e3c60

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSearchPalette
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  System_String_o *placeholder;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_GameObject_o *__this_01;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_02;
  UnityEngine_GameObject_o *__this_03;
  Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *__this_04;
  TMPro_TMP_InputField_o *input;
  UnityEngine_UI_Button_o *submit;
  
  if (Il2CppMethodInitialized_184342178 == '\0') {
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
    Il2CppMethodInitialized_184342178 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1818e404c;
  __this = (node->fields).layout;
  if (__this == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this,(MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) goto label_1818e404c;
    (__this->fields).direction = "Row";
    Il2CppCodeGenWriteBarrier(&(__this->fields).direction,"Row");
    (__this->fields).alignItems = "Center";
    Il2CppCodeGenWriteBarrier(&(__this->fields).alignItems,"Center");
    (__this->fields).gap = 8.0;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    Gisketch_Aottg2UI_Data_GisketchLength___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) goto label_1818e404c;
    (__this_00->fields).value = 100.0;
    (__this_00->fields).unit = "percent";
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).unit,"percent");
    (__this->fields).width = __this_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).width,__this_00);
  }
  (node->fields).layout = __this;
  Il2CppCodeGenWriteBarrier(&(node->fields).layout,__this);
  bVar1 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
  pSVar4 = "search-palette";
  if (!bVar1) {
    pSVar4 = (node->fields).id;
  }
  placeholder = (node->fields).placeholder;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pGVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__InputNode(pSVar4,placeholder,(MethodInfo *)0x0);
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
    __this_01 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                          (pGVar2,pUVar3,context,view,(MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18434217a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
      il2cpp_codegen_initialize_runtime_metadata(&"buttonPrimary");
      il2cpp_codegen_initialize_runtime_metadata(&"-submit");
      il2cpp_codegen_initialize_runtime_metadata(&"Button");
      il2cpp_codegen_initialize_runtime_metadata(&"zoom");
      Il2CppMethodInitialized_18434217a = '\x01';
    }
    pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      (pGVar2->fields).type = "Button";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).type,"Button");
      pSVar4 = System_String__Concat_1969e50(pSVar4,"-submit",(MethodInfo *)0x0);
      (pGVar2->fields).id = pSVar4;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).id,pSVar4);
      (pGVar2->fields).icon = "zoom";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).icon,"zoom");
      (pGVar2->fields).hasIcon = true;
      (pGVar2->fields).style = "buttonPrimary";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).style,"buttonPrimary");
      __this_02 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
      Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor
                ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_02,(MethodInfo *)0x0);
      if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        (__this_02->fields).hidden = true;
        (pGVar2->fields).search = __this_02;
        Il2CppCodeGenWriteBarrier(&(pGVar2->fields).search,__this_02);
        pUVar3 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
        __this_03 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                              (pGVar2,pUVar3,context,view,(MethodInfo *)0x0);
        __this_04 = UnityEngine_GameObject__AddComponent_object_
                              (go,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_AottgSearchPaletteControl);
        if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
          input = UnityEngine_GameObject__GetComponent_object_
                            (__this_01,
                             (MethodInfo_6F5650 *)
                             MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
          if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
            submit = UnityEngine_GameObject__GetComponent_object_
                               (__this_03,
                                (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Button);
            if (__this_04 != (Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl_o *)0x0) {
              Gisketch_Aottg2UI_Actions_AottgSearchPaletteControl__Setup
                        (__this_04,input,submit,(node->fields).searchScopeScreenId,
                         (node->fields).searchShowFullPath,(node->fields).searchScopeScreenIds,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
label_1818e404c:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$InputNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__InputNode (System_String_o* id, System_String_o* placeholder, const MethodInfo* method);
// 0x1818e9720

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__InputNode
          (System_String_o *id,System_String_o *placeholder,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *__this_02;
  
  if (Il2CppMethodInitialized_184342179 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"Search current screen");
    il2cpp_codegen_initialize_runtime_metadata(&"percent");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"-input");
    Il2CppMethodInitialized_184342179 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "InputField";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type,"InputField");
    value = System_String__Concat_1969e50(id,"-input",(MethodInfo *)0x0);
    (__this->fields).id = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id,value);
    bVar1 = System_String__IsNullOrEmpty(placeholder,(MethodInfo *)0x0);
    if (bVar1) {
      placeholder = "Search current screen";
    }
    (__this->fields).placeholder = placeholder;
    Il2CppCodeGenWriteBarrier(&(__this->fields).placeholder,placeholder);
    (__this->fields).style = "inputField";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style,"inputField");
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      (__this_00->fields).hidden = true;
      (__this->fields).search = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).search,__this_00);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLayoutDefinition);
      Gisketch_Aottg2UI_Data_GisketchLayoutDefinition___ctor(__this_01,(MethodInfo *)0x0);
      if (__this_01 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
        (__this_01->fields).grow = 1.0;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchLength);
        Gisketch_Aottg2UI_Data_GisketchLength___ctor
                  ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_02,(MethodInfo *)0x0);
        if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
          (__this_02->fields).value = 100.0;
          (__this_02->fields).unit = "percent";
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).unit,"percent");
          (__this_01->fields).width = __this_02;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).width,__this_02);
          (__this->fields).layout = __this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields).layout,__this_01);
          return __this;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SearchButtonNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SearchButtonNode (System_String_o* id, const MethodInfo* method);
// 0x1818eade0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SearchButtonNode(System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *__this_00;
  
  if (Il2CppMethodInitialized_18434217a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"buttonPrimary");
    il2cpp_codegen_initialize_runtime_metadata(&"-submit");
    il2cpp_codegen_initialize_runtime_metadata(&"Button");
    il2cpp_codegen_initialize_runtime_metadata(&"zoom");
    Il2CppMethodInitialized_18434217a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Button";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Button");
    value = System_String__Concat_1969e50(id,"-submit",(MethodInfo *)0x0);
    (__this->fields).id = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id,value);
    (__this->fields).icon = "zoom";
    Il2CppCodeGenWriteBarrier(&(__this->fields).icon,"zoom");
    (__this->fields).hasIcon = true;
    (__this->fields).style = "buttonPrimary";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style,"buttonPrimary");
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchSearchDefinition);
    Gisketch_Aottg2UI_Data_GisketchSearchDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      (__this_00->fields).hidden = true;
      (__this->fields).search = __this_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields).search,__this_00);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyShadow
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyShadow (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x1818dce90

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyShadow
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  System_String_o *pSVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  bool bVar4;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this;
  UnityEngine_Color_o *pUVar5;
  UnityEngine_Vector2_Fields offset;
  MethodInfo *method_00;
  int32_t layers;
  float in_XMM1_Da;
  float fVar6;
  float fVar7;
  float grain;
  UnityEngine_Color_Fields local_38;
  UnityEngine_Color_o local_28 [2];
  
  if (Il2CppMethodInitialized_18434217b == '\0') {
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
    Il2CppMethodInitialized_18434217b = '\x01';
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    return;
  }
  if ((style->fields).shadow.fields.value == false) {
    return;
  }
  if (go == (UnityEngine_GameObject_o *)0x0) {
label_1818dd16e:
    ThrowNullReferenceException();
  }
  __this = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)
                         MethodInfo_UnityEngine_GameObject_GetComponent_GisketchDropShadow);
  if (__this == (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
    __this = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
  }
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818dd16e;
  local_38.r = 0.0;
  local_38.g = 0.0;
  local_38.b = 0.0;
  local_38.a = 0.32;
  pUVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                     (local_28,theme,"shadow",(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0)
  ;
  pSVar1 = (style->fields).name;
  uVar2._0_4_ = (pUVar5->fields).r;
  uVar2._4_4_ = (pUVar5->fields).g;
  uVar3._0_4_ = (pUVar5->fields).b;
  uVar3._4_4_ = (pUVar5->fields).a;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  bVar4 = System_String__Equals_196c550(pSVar1,"mainMenuPanel",5,(MethodInfo *)0x0);
  if (bVar4) {
    fVar6 = 22.0;
    fVar7 = -3.0;
    if (__this == (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) goto label_1818dd16e;
    layers = 8;
    grain = 2.4;
  }
  else {
    pSVar1 = (style->fields).name;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar4 = System_String__Equals_196c550(pSVar1,"brushSidePanel",5,(MethodInfo *)0x0);
    if (!bVar4) {
      pSVar1 = (style->fields).name;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      method_00 = (MethodInfo *)0x5;
      bVar4 = System_String__Equals_196c550(pSVar1,"brushSidePanelContentFooterTopShadow",5,(MethodInfo *)0x0);
      if (!bVar4) {
        if (__this != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
          local_38._0_8_ = uVar2;
          local_38._8_8_ = uVar3;
          Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup
                    (__this,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
          return;
        }
        goto label_1818dd16e;
      }
      offset = (UnityEngine_Vector2_Fields)
               UnityEngine_Rendering_MousePositionDebug__GetMouseClickPosition
                         ((UnityEngine_Rendering_MousePositionDebug_o *)0x0,in_XMM1_Da,method_00);
      if (__this == (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) goto label_1818dd16e;
      layers = 0xc;
      local_38.r = 0.0;
      local_38.g = 0.0;
      local_38.b = 0.0;
      local_38.a = 0.3;
      grain = 1.8;
      goto label_1818dd0ff;
    }
    fVar6 = 34.0;
    fVar7 = -2.0;
    if (__this == (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) goto label_1818dd16e;
    layers = 10;
    grain = 2.6;
  }
  offset.y = fVar7;
  offset.x = fVar6;
  local_38._0_8_ = uVar2;
  local_38._8_8_ = uVar3;
label_1818dd0ff:
  Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_1884fb0
            (__this,(UnityEngine_Color_o *)&local_38,(UnityEngine_Vector2_o)offset,layers,grain,false,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSkeleton
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSkeleton (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e4540
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e45d7: mov rbp, r15
// asm:   0x1818e463f: mov rsi, r15

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSkeleton
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  UnityEngine_Color_o *pUVar6;
  UnityEngine_UI_Image_o *image;
  Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *__this;
  System_String_o *token;
  System_String_o *token_00;
  UnityEngine_Color_Fields local_58;
  UnityEngine_Color_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_18434217c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSkeletonPulse);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&"skeletonPulse");
    il2cpp_codegen_initialize_runtime_metadata(&"skeletonBase");
    Il2CppMethodInitialized_18434217c = '\x01';
  }
  if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    token_00 = (System_String_o *)0x0;
    token = token_00;
    if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      token = (style->fields).background;
    }
    pGVar1 = (context->fields).Theme;
    if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      local_58.r = 0.72;
      local_58.g = 0.72;
      local_58.b = 0.72;
      local_58.a = 1.0;
      pUVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         ((UnityEngine_Color_o *)local_48,pGVar1,"skeletonBase",
                          (UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
      local_58.r = (pUVar6->fields).r;
      local_58.g = (pUVar6->fields).g;
      local_58.b = (pUVar6->fields).b;
      local_58.a = (pUVar6->fields).a;
      pUVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                         ((UnityEngine_Color_o *)local_48,pGVar1,token,(UnityEngine_Color_o *)&local_58,
                          (MethodInfo *)0x0);
      if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
        token_00 = (style->fields).textColor;
      }
      pGVar1 = (context->fields).Theme;
      if (pGVar1 != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
        uVar2._0_4_ = (pUVar6->fields).r;
        uVar2._4_4_ = (pUVar6->fields).g;
        uVar3._0_4_ = (pUVar6->fields).b;
        uVar3._4_4_ = (pUVar6->fields).a;
        local_58.r = 0.82;
        local_58.g = 0.82;
        local_58.b = 0.82;
        local_58.a = 1.0;
        pUVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((UnityEngine_Color_o *)local_48,pGVar1,"skeletonPulse",
                            (UnityEngine_Color_o *)&local_58,(MethodInfo *)0x0);
        local_58.r = (pUVar6->fields).r;
        local_58.g = (pUVar6->fields).g;
        local_58.b = (pUVar6->fields).b;
        local_58.a = (pUVar6->fields).a;
        pUVar6 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                           ((UnityEngine_Color_o *)local_48,pGVar1,token_00,(UnityEngine_Color_o *)&local_58,
                            (MethodInfo *)0x0);
        if (go != (UnityEngine_GameObject_o *)0x0) {
          uVar4._0_4_ = (pUVar6->fields).r;
          uVar4._4_4_ = (pUVar6->fields).g;
          uVar5._0_4_ = (pUVar6->fields).b;
          uVar5._4_4_ = (pUVar6->fields).a;
          image = UnityEngine_GameObject__AddComponent_object_
                            (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
          if (image != (UnityEngine_UI_Image_o *)0x0) {
            local_58._0_8_ = uVar2;
            local_58._8_8_ = uVar3;
            (*(image->klass->vtable)._23_set_color.methodPtr)
                      (image,(UnityEngine_Color_o *)&local_58,(image->klass->vtable)._23_set_color.method);
            (*(image->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (image,false,(image->klass->vtable)._25_set_raycastTarget.method);
            (*(image->klass->vtable)._33_set_material.methodPtr)
                      (image,(UnityEngine_Material_o *)0x0,(image->klass->vtable)._33_set_material.method);
            UnityEngine_GameObject__AddComponent_object_
                      (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_CanvasGroup);
            __this = UnityEngine_GameObject__AddComponent_object_
                               (go,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSkeletonPulse);
            if (__this != (Gisketch_Aottg2UI_Building_GisketchSkeletonPulse_o *)0x0) {
              local_58._0_8_ = uVar4;
              local_58._8_8_ = uVar5;
              local_48[0]._0_8_ = uVar2;
              local_48[0]._8_8_ = uVar3;
              Gisketch_Aottg2UI_Building_GisketchSkeletonPulse__Setup
                        (__this,image,(UnityEngine_Color_o *)local_48,(UnityEngine_Color_o *)&local_58,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSlider
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSlider (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e4790
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e4c01: mov rcx, r14

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
  UnityEngine_UI_Image_o *pUVar6;
  Gisketch_Aottg2UI_Actions_AottgSliderControl_o *__this;
  TMPro_TextMeshProUGUI_o *label;
  float fVar7;
  float height;
  UnityEngine_UI_Image_o *local_res20;
  UnityEngine_RectTransform_o *local_b8;
  UnityEngine_RectTransform_o *local_b0;
  UnityEngine_Color_Fields local_a8;
  UnityEngine_UI_Navigation_Fields local_98 [2];
  
  if (Il2CppMethodInitialized_18434217d == '\0') {
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
    Il2CppMethodInitialized_18434217d = '\x01';
  }
  local_res20 = (UnityEngine_UI_Image_o *)0x0;
  local_b8 = (UnityEngine_RectTransform_o *)0x0;
  if ((context == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) ||
     (pGVar1 = (context->fields).Theme, pGVar1 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0))
  goto label_1818e4c87;
  style_00 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar1,"sliderTrack",(MethodInfo *)0x0)
  ;
  pGVar1 = (context->fields).Theme;
  if ((pGVar1 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) ||
     (style_01 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                           (pGVar1,"sliderFill",(MethodInfo *)0x0),
     style_00 == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0)) goto label_1818e4c87;
  pGVar2 = (style_00->fields).height;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  fVar7 = 10.0;
  if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818e493c:
    height = 10.0;
  }
  else {
    pSVar3 = (pGVar2->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar4 = System_String__Equals_196c550(pSVar3,"point",5,(MethodInfo *)0x0);
    if (!bVar4) goto label_1818e493c;
    height = (pGVar2->fields).value;
  }
  if (style_01 != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar2 = (style_01->fields).height;
    if (Il2CppMethodInitialized_184342145 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_184342145 = '\x01';
    }
    if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar3 = (pGVar2->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar4 = System_String__Equals_196c550(pSVar3,"point",5,(MethodInfo *)0x0);
      if (bVar4) {
        fVar7 = (pGVar2->fields).value;
      }
    }
    if (height <= fVar7) {
      height = fVar7;
    }
    if ((go != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar5 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0), pSVar3 = "AoTTG Slider Track",
       node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
      pGVar1 = (context->fields).Theme;
      if ((node->fields).showValue == false) {
        fVar7 = 0.0;
      }
      else {
        fVar7 = 54.0;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      track = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderPart
                        (pUVar5,pSVar3,style_00,pGVar1,0.0,fVar7,height,(MethodInfo *)0x0);
      label = (TMPro_TextMeshProUGUI_o *)0x0;
      fill = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderPart
                       ((UnityEngine_Transform_o *)track,"AoTTG Slider Fill",style_01,
                        (context->fields).Theme,0.0,0.0,height,(MethodInfo *)0x0);
      local_b0 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderThumb
                           ((UnityEngine_Transform_o *)track,(context->fields).Theme,&local_res20,&local_b8,
                            (MethodInfo *)0x0);
      pUVar6 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
      if (pUVar6 != (UnityEngine_UI_Image_o *)0x0) {
        local_a8.r = 0.0;
        local_a8.g = 0.0;
        local_a8.b = 0.0;
        local_a8.a = 0.0;
        (*(pUVar6->klass->vtable)._23_set_color.methodPtr)
                  (pUVar6,(UnityEngine_Color_o *)&local_a8,(pUVar6->klass->vtable)._23_set_color.method);
        (*(pUVar6->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (pUVar6,true,(pUVar6->klass->vtable)._25_set_raycastTarget.method);
        __this = UnityEngine_GameObject__AddComponent_object_
                           (go,(MethodInfo_6F4D60 *)
                               MethodInfo_UnityEngine_GameObject_AddComponent_AottgSliderControl);
        if (__this != (Gisketch_Aottg2UI_Actions_AottgSliderControl_o *)0x0) {
          UnityEngine_UI_Selectable__set_targetGraphic
                    ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Graphic_o *)local_res20,
                     (MethodInfo *)0x0);
          UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)__this,0,(MethodInfo *)0x0)
          ;
          local_98[0].m_Mode = 3;
          local_98[0].m_WrapAround = false;
          local_98[0]._5_3_ = 0;
          local_98[0].m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
          local_98[0].m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
          local_98[0].m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
          local_98[0].m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
          UnityEngine_UI_Selectable__set_navigation
                    ((UnityEngine_UI_Selectable_o *)__this,(UnityEngine_UI_Navigation_o *)local_98,
                     (MethodInfo *)0x0);
          UnityEngine_GameObject__AddComponent_object_
                    (go,(MethodInfo_6F4D60 *)
                        MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AddFocusRing
                    (go,(context->fields).Theme,true,(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySliderMeasure(go,style,(MethodInfo *)0x0);
          if ((node->fields).showValue != false) {
            pUVar5 = UnityEngine_GameObject__get_transform(go,(MethodInfo *)0x0);
            pGVar1 = (context->fields).Theme;
            if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
            }
            label = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderValueLabel
                              (pUVar5,pGVar1,(MethodInfo *)0x0);
          }
          Gisketch_Aottg2UI_Actions_AottgSliderControl__Setup
                    (__this,track,fill,local_b0,local_b8,label,node,(context->fields).Actions,go,height,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
  }
label_1818e4c87:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SliderPart
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderPart (UnityEngine_Transform_o* parent, System_String_o* name, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, float left, float right, float height, const MethodInfo* method);
// 0x1818eba60

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderPart
          (UnityEngine_Transform_o *parent,System_String_o *name,
          Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
          Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,float left,float right,float height,
          MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  char cVar2;
  System_String_o *color;
  
  if (Il2CppMethodInitialized_18434217e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    Il2CppMethodInitialized_18434217e = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,name,components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,(UnityEngine_Vector2_o)0x3f0000003f800000,(MethodInfo *)0x0);
          value.fields.y = -height * 0.5;
          value.fields.x = left;
          UnityEngine_RectTransform__set_offsetMin(__this_01,value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMax
                    (__this_01,(UnityEngine_Vector2_o)(CONCAT44(height * 0.5,right) ^ 0x80000000),
                     (MethodInfo *)0x0);
          if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
            cVar2 = '\0';
            color = "surface";
          }
          else {
            cVar2 = (style->fields).reliefGradient.fields.value;
            color = (style->fields).background;
          }
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                    (__this,style,theme,color,cVar2 != '\0',(MethodInfo *)0x0);
          return __this_01;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SliderThumb
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderThumb (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, UnityEngine_UI_Image_o** image, UnityEngine_RectTransform_o** faceRect, const MethodInfo* method);
// 0x1818ebd10

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderThumb
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
          UnityEngine_UI_Image_o **image,UnityEngine_RectTransform_o **faceRect,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  System_String_o *pSVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
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
  UnityEngine_RectTransform_o *value_01;
  UnityEngine_UI_Image_o *value_02;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  
  if (Il2CppMethodInitialized_18434217f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"sliderThumb");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Slider Thumb");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Slider Thumb Face");
    Il2CppMethodInitialized_18434217f = '\x01';
  }
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818ec22d;
  style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"sliderThumb",(MethodInfo *)0x0);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_1818ec22d;
  pGVar1 = (style->fields).width;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818ebe80:
    fVar10 = 24.0;
  }
  else {
    pSVar2 = (pGVar1->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(pSVar2,"point",5,(MethodInfo *)0x0);
    if (!bVar3) goto label_1818ebe80;
    fVar10 = (pGVar1->fields).value;
  }
  pGVar1 = (style->fields).height;
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818ebef9:
    fVar11 = 14.0;
  }
  else {
    pSVar2 = (pGVar1->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(pSVar2,"point",5,(MethodInfo *)0x0);
    if (!bVar3) goto label_1818ebef9;
    fVar11 = (pGVar1->fields).value;
  }
  pSVar4 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar5 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (pSVar4 != (System_Type_array *)0x0) {
    if (pSVar5 != (System_Type_o *)0x0) {
      pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
      if (pIVar6 == (Il2CppObject *)0x0) {
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
    }
    if ((int)pSVar4->max_length == 0) {
label_1818ec253:
      ThrowIndexOutOfRangeException();
    }
    pSVar4->m_Items[0] = pSVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar5);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Slider Thumb",pSVar4,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar7 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(pUVar7,parent,false,(MethodInfo *)0x0);
        __this_00 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_00,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_00,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_00,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          fVar9 = 32.0;
          if (32.0 <= fVar10) {
            fVar9 = fVar10;
          }
          fVar8 = 32.0;
          if (32.0 <= fVar11) {
            fVar8 = fVar11;
          }
          value.fields.y = fVar8;
          value.fields.x = fVar9;
          UnityEngine_RectTransform__set_sizeDelta(__this_00,value,(MethodInfo *)0x0);
          pSVar4 = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
          pSVar5 = System_Type__GetTypeFromHandle
                             ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_RectTransform,(MethodInfo *)0x0)
          ;
          if (pSVar4 != (System_Type_array *)0x0) {
            if (pSVar5 != (System_Type_o *)0x0) {
              pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)pSVar5,(((pSVar4->obj).klass)->_1).element_class);
              if (pIVar6 == (Il2CppObject *)0x0) {
                pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
              }
            }
            if ((int)pSVar4->max_length == 0) goto label_1818ec253;
            pSVar4->m_Items[0] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar5);
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
            UnityEngine_GameObject___ctor_2f1abe0(__this_01,"AoTTG Slider Thumb Face",pSVar4,(MethodInfo *)0x0);
            if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
              pUVar7 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
              parent_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
              if (pUVar7 != (UnityEngine_Transform_o *)0x0) {
                UnityEngine_Transform__SetParent_2f5a7e0(pUVar7,parent_00,false,(MethodInfo *)0x0);
                value_01 = UnityEngine_GameObject__GetComponent_object_
                                     (__this_01,
                                      (MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                *faceRect = value_01;
                Il2CppCodeGenWriteBarrier(faceRect,value_01);
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
                        value_00.fields.y = fVar11;
                        value_00.fields.x = fVar10;
                        UnityEngine_RectTransform__set_sizeDelta(*faceRect,value_00,(MethodInfo *)0x0);
                        value_02 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
                                             (__this_01,style,theme,(style->fields).background,
                                              (style->fields).reliefGradient.fields.value,(MethodInfo *)0x0);
                        *image = value_02;
                        Il2CppCodeGenWriteBarrier(image,value_02);
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
label_1818ec22d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SliderValueLabel
// il2cpp: TMPro_TextMeshProUGUI_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderValueLabel (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x1818ec260

TMPro_TextMeshProUGUI_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SliderValueLabel
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method
          )

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *value;
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
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  
  if (Il2CppMethodInitialized_184342180 == '\0') {
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
    Il2CppMethodInitialized_184342180 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Slider Value",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin
                    (__this_01,(UnityEngine_Vector2_o)0x3f800000,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_184341f36 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_184341f36 = '\x01';
          }
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
                     (MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMin
                    (__this_01,(UnityEngine_Vector2_o)0xc2380000,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMax
                    (__this_01,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          text = UnityEngine_GameObject__AddComponent_object_
                           (__this,(MethodInfo_6F4D60 *)
                                   MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
          __this_02 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_02,(MethodInfo *)0x0);
          if (__this_02 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (__this_02->fields).text = "0%";
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).text,"0%");
            (__this_02->fields).style = "sliderValue";
            Il2CppCodeGenWriteBarrier(&(__this_02->fields).style,"sliderValue");
            if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle
                                (theme,"sliderValue",(MethodInfo *)0x0);
              context = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
              if (Il2CppMethodInitialized_18434212d == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
                il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
                Il2CppMethodInitialized_18434212d = '\x01';
              }
              System_Object___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)context,
                         (MethodInfo *)0x0);
              (context->fields).Manifest = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
              Il2CppCodeGenWriteBarrier(&(context->fields).Manifest,(void *)0x0);
              (context->fields).Theme = theme;
              Il2CppCodeGenWriteBarrier(&(context->fields).Theme,theme);
              (context->fields).Localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0;
              Il2CppCodeGenWriteBarrier(&(context->fields).Localizer,(void *)0x0);
              (context->fields).Actions = (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)0x0;
              Il2CppCodeGenWriteBarrier(&(context->fields).Actions,(void *)0x0);
              (context->fields).State = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
              Il2CppCodeGenWriteBarrier(&(context->fields).State,(void *)0x0);
              if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
              }
              value = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
              (context->fields).Registry = value;
              Il2CppCodeGenWriteBarrier(&(context->fields).Registry,value);
              (context->fields).DialogResolver = (System_Func_string__GisketchOverlayDefinition__o *)0x0;
              Il2CppCodeGenWriteBarrier(&(context->fields).DialogResolver,(void *)0x0);
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText
                        (text,__this_02,style,context,(MethodInfo *)0x0);
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
// 0x1818dd180

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySliderMeasure
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184342181 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_184342181 = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818dd36d;
  pUVar3 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar4 = (style->fields).width;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818dd290:
    fVar5 = 280.0;
  }
  else {
    pSVar1 = (pGVar4->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(pSVar1,"point",5,(MethodInfo *)0x0);
    if (!bVar2) goto label_1818dd290;
    fVar5 = (pGVar4->fields).value;
  }
  if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) {
label_1818dd36d:
    ThrowNullReferenceException();
  }
  (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar3,fVar5,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar4 = (style->fields).height;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar1 = (pGVar4->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(pSVar1,"point",5,(MethodInfo *)0x0);
    if (bVar2) {
      fVar5 = (pGVar4->fields).value;
      goto label_1818dd34a;
    }
  }
  fVar5 = 42.0;
label_1818dd34a:
  (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar3,fVar5,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSpriteButton
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteButton (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e4c90

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteButton
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar3;
  System_String_o *value;
  UnityEngine_Events_UnityEvent_o *__this;
  Il2CppType *handle;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o *object;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_UI_Image_o *value_00;
  UnityEngine_UI_Image_o *image;
  Gisketch_Aottg2UI_Actions_GisketchButtonInputSource_o *value_01;
  Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *pGVar6;
  UnityEngine_UI_Button_o *__this_01;
  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *__this_02;
  UnityEngine_Events_UnityAction_o *__this_03;
  UnityEngine_Color_Fields local_58;
  UnityEngine_UI_Navigation_Fields local_48;
  
  if (Il2CppMethodInitialized_184342182 == '\0') {
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
    Il2CppMethodInitialized_184342182 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass84_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass84_0_o *)0x0) {
    (object->fields).node = node;
    Il2CppCodeGenWriteBarrier(&(object->fields).node,node);
    (object->fields).context = context;
    Il2CppCodeGenWriteBarrier(&(object->fields).context,context);
    (object->fields).go = go;
    Il2CppCodeGenWriteBarrier(&(object->fields).go,go);
    components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
    handle = TypeRef_UnityEngine_RectTransform;
    if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
      Il2CppCodeGenWriteBarrier(components->m_Items,obj);
      pUVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
      UnityEngine_GameObject___ctor_2f1abe0(pUVar5,"AoTTG Sprite Button Face",components,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
        __this_00 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
        pUVar1 = (object->fields).go;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          parent = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
            rect = UnityEngine_GameObject__GetComponent_object_
                             (pUVar5,(MethodInfo_6F5650 *)
                                     MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
            Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
            pUVar1 = (object->fields).go;
            if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
              value_00 = UnityEngine_GameObject__GetComponent_object_
                                   (pUVar1,(MethodInfo_6F5650 *)
                                           MethodInfo_UnityEngine_GameObject_GetComponent_Image);
              if (value_00 == (UnityEngine_UI_Image_o *)0x0) {
                pUVar1 = (object->fields).go;
                if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_1818e518d;
                value_00 = UnityEngine_GameObject__AddComponent_object_
                                     (pUVar1,(MethodInfo_6F4D60 *)
                                             MethodInfo_UnityEngine_GameObject_AddComponent_Image);
              }
              if (value_00 != (UnityEngine_UI_Image_o *)0x0) {
                local_58.r = 0.0;
                local_58.g = 0.0;
                local_58.b = 0.0;
                local_58.a = 0.0;
                (*(value_00->klass->vtable)._23_set_color.methodPtr)
                          (value_00,(UnityEngine_Color_o *)&local_58,
                           (value_00->klass->vtable)._23_set_color.method);
                (*(value_00->klass->vtable)._25_set_raycastTarget.methodPtr)
                          (value_00,true,(value_00->klass->vtable)._25_set_raycastTarget.method);
                pGVar2 = (object->fields).node;
                pGVar3 = (object->fields).context;
                if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                }
                image = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSpriteImage
                                  (pUVar5,pGVar2,style,pGVar3,true,false,(MethodInfo *)0x0);
                pUVar5 = (object->fields).go;
                if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                  value_01 = UnityEngine_GameObject__AddComponent_object_
                                       (pUVar5,(MethodInfo_6F4D60 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonInputSource
                                       );
                  (object->fields).inputSource = value_01;
                  Il2CppCodeGenWriteBarrier(&(object->fields).inputSource,value_01);
                  pUVar5 = (object->fields).go;
                  if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                    pGVar6 = UnityEngine_GameObject__AddComponent_object_
                                       (pUVar5,(MethodInfo_6F4D60 *)
                                               MethodInfo_UnityEngine_GameObject_AddComponent_GisketchButtonSound
                                       );
                    (object->fields).sound = pGVar6;
                    Il2CppCodeGenWriteBarrier(&(object->fields).sound,pGVar6);
                    pGVar2 = (object->fields).node;
                    if ((pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
                       (pGVar6 = (object->fields).sound,
                       pGVar6 != (Gisketch_Aottg2UI_Actions_GisketchButtonSound_o *)0x0)) {
                      value = (pGVar2->fields).action;
                      (pGVar6->fields)._action = value;
                      Il2CppCodeGenWriteBarrier(&(pGVar6->fields)._action,value);
                      pUVar5 = (object->fields).go;
                      if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                        __this_01 = UnityEngine_GameObject__AddComponent_object_
                                              (pUVar5,(MethodInfo_6F4D60 *)
                                                      MethodInfo_UnityEngine_GameObject_AddComponent_Button);
                        if (__this_01 != (UnityEngine_UI_Button_o *)0x0) {
                          UnityEngine_UI_Selectable__set_targetGraphic
                                    ((UnityEngine_UI_Selectable_o *)__this_01,
                                     (UnityEngine_UI_Graphic_o *)value_00,(MethodInfo *)0x0);
                          UnityEngine_UI_Selectable__set_transition
                                    ((UnityEngine_UI_Selectable_o *)__this_01,0,(MethodInfo *)0x0);
                          local_48.m_Mode = 3;
                          local_48.m_WrapAround = false;
                          local_48._5_3_ = 0;
                          local_48.m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
                          local_48.m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
                          local_48.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
                          local_48.m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
                          UnityEngine_UI_Selectable__set_navigation
                                    ((UnityEngine_UI_Selectable_o *)__this_01,
                                     (UnityEngine_UI_Navigation_o *)&local_48,(MethodInfo *)0x0);
                          pUVar5 = (object->fields).go;
                          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                            UnityEngine_GameObject__AddComponent_object_
                                      (pUVar5,(MethodInfo_6F4D60 *)
                                              MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity
                                      );
                            pGVar3 = (object->fields).context;
                            if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AddFocusRing
                                        ((object->fields).go,(pGVar3->fields).Theme,true,(MethodInfo *)0x0);
                              pUVar5 = (object->fields).go;
                              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                                __this_02 = UnityEngine_GameObject__AddComponent_object_
                                                      (pUVar5,(MethodInfo_6F4D60 *)
                                                                                                                            
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchSpriteButtonFeedback
                                                      );
                                if (__this_02 !=
                                    (Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback_o *)0x0) {
                                  Gisketch_Aottg2UI_Actions_GisketchSpriteButtonFeedback__Setup
                                            (__this_02,rect,(MethodInfo *)0x0);
                                  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySpriteButtonMeasure
                                            ((object->fields).go,image,style,(MethodInfo *)0x0);
                                  __this = (UnityEngine_Events_UnityEvent_o *)(__this_01->fields).m_OnClick;
                                  __this_03 = il2cpp_codegen_object_new
                                                        ((Il2CppClass *)
                                                         TypeInfo_UnityEngine_Events_UnityAction);
                                  UnityEngine_Events_UnityAction___ctor
                                            ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_03,
                                             (Il2CppObject *)object,
                                             (intptr_t)
                                             MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass84_0_BuildSpriteButton_b__0
                                             ,(MethodInfo *)0x0);
                                  if (__this != (UnityEngine_Events_UnityEvent_o *)0x0) {
                                    UnityEngine_Events_UnityEvent__AddListener
                                              (__this,__this_03,(MethodInfo *)0x0);
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
label_1818e518d:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplySpriteButtonMeasure
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySpriteButtonMeasure (UnityEngine_GameObject_o* go, UnityEngine_UI_Image_o* image, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818dd380

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySpriteButtonMeasure
               (UnityEngine_GameObject_o *go,UnityEngine_UI_Image_o *image,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_Sprite_o *__this;
  System_String_o *pSVar1;
  bool bVar2;
  UnityEngine_Rect_o *pUVar3;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  float fVar6;
  float fVar7;
  UnityEngine_Rect_o local_38 [3];
  
  if (Il2CppMethodInitialized_184342183 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_184342183 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_1818dd633;
    x = (UnityEngine_Object_o *)(image->fields).m_Sprite;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) goto label_1818dd48d;
    __this = (image->fields).m_Sprite;
    if (__this == (UnityEngine_Sprite_o *)0x0) goto label_1818dd633;
    pUVar3 = UnityEngine_Sprite__get_rect(local_38,__this,(MethodInfo *)0x0);
    fVar6 = (pUVar3->fields).m_Width;
    fVar7 = (pUVar3->fields).m_Height;
    if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
    }
  }
  else {
label_1818dd48d:
    fVar6 = 48.0;
    fVar7 = 48.0;
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar4 = UnityEngine_GameObject__GetComponent_object_
                       (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    if (pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__AddComponent_object_
                         (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement
                         );
    }
    if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
    }
    else {
      pGVar5 = (style->fields).width;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_184342145 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_184342145 = '\x01';
    }
    if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar1 = (pGVar5->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar2 = System_String__Equals_196c550(pSVar1,"point",5,(MethodInfo *)0x0);
      if (bVar2) {
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
      if (Il2CppMethodInitialized_184342145 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)
        ;
        il2cpp_codegen_initialize_runtime_metadata(&"point");
        Il2CppMethodInitialized_184342145 = '\x01';
      }
      if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
        pSVar1 = (pGVar5->fields).unit;
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        bVar2 = System_String__Equals_196c550(pSVar1,"point",5,(MethodInfo *)0x0);
        if (bVar2) {
          fVar7 = (pGVar5->fields).value;
        }
      }
      (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
                (pUVar4,fVar7,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
      return;
    }
  }
label_1818dd633:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildToggle
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildToggle (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool radio, const MethodInfo* method);
// 0x1818e6450
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e6756: mov r13, r14
// asm:   0x1818e677a: mov rbp, r14
// asm:   0x1818e677d: jmp 0x1818e67e0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildToggle
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool radio,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar2;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  UnityEngine_Events_UnityEvent_Vector2__o *__this;
  bool bVar5;
  bool bVar6;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o *object;
  UnityEngine_UI_Image_o *pUVar7;
  UnityEngine_UI_Toggle_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_RectTransform_o *parent;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_RectTransform_o *x;
  TMPro_TextMeshProUGUI_o *label;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this_01;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this_02;
  UnityEngine_Color_Fields local_68;
  UnityEngine_UI_Navigation_Fields local_58;
  
  if (Il2CppMethodInitialized_184342184 == '\0') {
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
    Il2CppMethodInitialized_184342184 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass86_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass86_0_o *)0x0) {
    (object->fields).node = node;
    Il2CppCodeGenWriteBarrier(&(object->fields).node,node);
    (object->fields).context = context;
    Il2CppCodeGenWriteBarrier(&(object->fields).context,context);
    (object->fields).go = go;
    Il2CppCodeGenWriteBarrier(&(object->fields).go,go);
    pUVar1 = (object->fields).go;
    if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
       (pUVar7 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar1,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image),
       pUVar7 != (UnityEngine_UI_Image_o *)0x0)) {
      local_68.r = 0.0;
      local_68.g = 0.0;
      local_68.b = 0.0;
      local_68.a = 0.0;
      (*(pUVar7->klass->vtable)._23_set_color.methodPtr)
                (pUVar7,(UnityEngine_Color_o *)&local_68,(pUVar7->klass->vtable)._23_set_color.method);
      (*(pUVar7->klass->vtable)._25_set_raycastTarget.methodPtr)
                (pUVar7,true,(pUVar7->klass->vtable)._25_set_raycastTarget.method);
      pUVar1 = (object->fields).go;
      if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
        pUVar8 = UnityEngine_GameObject__AddComponent_object_
                           (pUVar1,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Toggle)
        ;
        (object->fields).toggle = pUVar8;
        Il2CppCodeGenWriteBarrier(&(object->fields).toggle,pUVar8);
        pUVar8 = (object->fields).toggle;
        if (pUVar8 != (UnityEngine_UI_Toggle_o *)0x0) {
          UnityEngine_UI_Selectable__set_transition((UnityEngine_UI_Selectable_o *)pUVar8,0,(MethodInfo *)0x0)
          ;
          pUVar8 = (object->fields).toggle;
          local_58.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
          local_58.m_Mode = 3;
          local_58.m_WrapAround = false;
          local_58._5_3_ = 0;
          if (pUVar8 != (UnityEngine_UI_Toggle_o *)0x0) {
            local_58.m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
            local_58.m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
            local_58.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
            local_58.m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
            UnityEngine_UI_Selectable__set_navigation
                      ((UnityEngine_UI_Selectable_o *)pUVar8,(UnityEngine_UI_Navigation_o *)&local_58,
                       (MethodInfo *)0x0);
            pUVar1 = (object->fields).go;
            if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_
                        (pUVar1,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity
                        );
              pUVar1 = (object->fields).go;
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                pUVar9 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                pGVar2 = (object->fields).context;
                if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                  pGVar3 = (pGVar2->fields).Theme;
                  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                      cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                  }
                  parent = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleBox
                                     (pUVar9,pGVar3,radio,(MethodInfo *)0x0);
                  pGVar2 = (object->fields).context;
                  if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                    __this_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleMark
                                          (parent,(pGVar2->fields).Theme,radio,(MethodInfo *)0x0);
                    pGVar4 = (object->fields).node;
                    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                      bVar5 = System_String__IsNullOrEmpty((pGVar4->fields).icon,(MethodInfo *)0x0);
                      x = (UnityEngine_RectTransform_o *)0x0;
                      if (!bVar5) {
                        pUVar1 = (object->fields).go;
                        if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_1818e69ba;
                        pUVar9 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                        pGVar4 = (object->fields).node;
                        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                            cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)
                          ;
                        }
                        x = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleIcon
                                      (pUVar9,pGVar4,(MethodInfo *)0x0);
                      }
                      label = (TMPro_TextMeshProUGUI_o *)0x0;
                      pGVar4 = (object->fields).node;
                      if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                        bVar6 = System_String__IsNullOrEmpty((pGVar4->fields).text,(MethodInfo *)0x0);
                        if ((!bVar6) || (bVar5)) {
                          pUVar1 = (object->fields).go;
                          if (pUVar1 == (UnityEngine_GameObject_o *)0x0) goto label_1818e69ba;
                          pUVar9 = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                          pGVar4 = (object->fields).node;
                          pGVar2 = (object->fields).context;
                          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                              cctor_finished_or_no_cctor == 0) {
                            il2cpp_codegen_runtime_class_init
                                      ((Il2CppClass *)
                                       TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                          }
                          label = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleLabel
                                            (pUVar9,pGVar4,pGVar2,!bVar5,(MethodInfo *)0x0);
                        }
                        if (parent != (UnityEngine_RectTransform_o *)0x0) {
                          pUVar8 = (object->fields).toggle;
                          pUVar7 = UnityEngine_Component__GetComponent_object_
                                             ((UnityEngine_Component_o *)parent,
                                              (MethodInfo_6651A0 *)
                                              MethodInfo_UnityEngine_Component_GetComponent_Image);
                          if ((pUVar8 != (UnityEngine_UI_Toggle_o *)0x0) &&
                             (UnityEngine_UI_Selectable__set_targetGraphic
                                        ((UnityEngine_UI_Selectable_o *)pUVar8,
                                         (UnityEngine_UI_Graphic_o *)pUVar7,(MethodInfo *)0x0),
                             __this_00 != (UnityEngine_RectTransform_o *)0x0)) {
                            pUVar8 = (object->fields).toggle;
                            pUVar7 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)__this_00,
                                                (MethodInfo_6651A0 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Image);
                            if (pUVar8 != (UnityEngine_UI_Toggle_o *)0x0) {
                              (pUVar8->fields).graphic = (UnityEngine_UI_Graphic_o *)pUVar7;
                              Il2CppCodeGenWriteBarrier(&(pUVar8->fields).graphic,pUVar7);
                              pGVar4 = (object->fields).node;
                              if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                                pUVar8 = (object->fields).toggle;
                                bVar5 = System_String__Equals_196c550
                                                  ((pGVar4->fields).value,"true",5,
                                                   (MethodInfo *)0x0);
                                if (pUVar8 != (UnityEngine_UI_Toggle_o *)0x0) {
                                  UnityEngine_UI_Toggle__set_isOn(pUVar8,bVar5,(MethodInfo *)0x0);
                                  pUVar1 = (object->fields).go;
                                  if ((pUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                                     (__this_01 = UnityEngine_GameObject__AddComponent_object_
                                                            (pUVar1,(MethodInfo_6F4D60 *)
                                                                                                                                        
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToggleFeedback
                                                       ),
                                     __this_01 != (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0))
                                  {
                                    Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup
                                              (__this_01,(object->fields).toggle,label,
                                               (UnityEngine_UI_Image_o *)0x0,
                                               (UnityEngine_RectTransform_o *)0x0,
                                               (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0,
                                               (MethodInfo *)0x0);
                                    pGVar2 = (object->fields).context;
                                    if (pGVar2 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                                      pUVar1 = (object->fields).go;
                                      pGVar3 = (pGVar2->fields).Theme;
                                      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                                          cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)
                                                   TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
                                      }
                                      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AddFocusRing
                                                (pUVar1,pGVar3,true,(MethodInfo *)0x0);
                                      pUVar1 = (object->fields).go;
                                      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                                        il2cpp_codegen_runtime_class_init
                                                  ((Il2CppClass *)TypeInfo_UnityEngine_Object);
                                      }
                                      bVar5 = UnityEngine_Object__op_Inequality
                                                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0
                                                         ,(MethodInfo *)0x0);
                                      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyToggleMeasure
                                                (pUVar1,style,label,bVar5,(MethodInfo *)0x0);
                                      pUVar8 = (object->fields).toggle;
                                      if (pUVar8 != (UnityEngine_UI_Toggle_o *)0x0) {
                                        __this = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                                 (pUVar8->fields).onValueChanged;
                                        __this_02 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o
                                                     *)il2cpp_codegen_object_new
                                                                 ((Il2CppClass *)
                                                                  TypeInfo_UnityEngine_Events_UnityAction_bool
                                                                 );
                                        UnityEngine_Events_UnityAction_bool____ctor
                                                  (__this_02,(Il2CppObject *)object,
                                                   (intptr_t)
                                                   MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass86_0_BuildToggle_b__0
                                                   ,(MethodInfo *)0x0);
                                        if (__this != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                                          UnityEngine_Events_UnityEvent_Vector2___AddListener
                                                    (__this,(UnityEngine_Events_UnityAction_T0__o *)__this_02,
                                                     (MethodInfo_EBBB50 *)
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
label_1818e69ba:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildSwitch
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSwitch (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e6090

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildSwitch
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  UnityEngine_Events_UnityEvent_Vector2__o *__this;
  bool value;
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o *object;
  UnityEngine_UI_Image_o *pUVar4;
  UnityEngine_UI_Toggle_o *pUVar5;
  UnityEngine_Transform_o *parent;
  UnityEngine_RectTransform_o *parent_00;
  UnityEngine_RectTransform_o *switchThumb;
  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *__this_00;
  UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o *__this_01;
  UnityEngine_Color_Fields local_68;
  UnityEngine_UI_Navigation_Fields local_58;
  
  if (Il2CppMethodInitialized_184342185 == '\0') {
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
    Il2CppMethodInitialized_184342185 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass87_0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Building_GisketchScreenBuilder___c__DisplayClass87_0_o *)0x0) {
    (object->fields).node = node;
    Il2CppCodeGenWriteBarrier(&(object->fields).node,node);
    (object->fields).context = context;
    Il2CppCodeGenWriteBarrier(&(object->fields).context,context);
    (object->fields).go = go;
    Il2CppCodeGenWriteBarrier(&(object->fields).go,go);
    pUVar1 = (object->fields).go;
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar4 = UnityEngine_GameObject__AddComponent_object_
                         (pUVar1,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
      if (pUVar4 != (UnityEngine_UI_Image_o *)0x0) {
        local_68.r = 0.0;
        local_68.g = 0.0;
        local_68.b = 0.0;
        local_68.a = 0.0;
        (*(pUVar4->klass->vtable)._23_set_color.methodPtr)
                  (pUVar4,(UnityEngine_Color_o *)&local_68,(pUVar4->klass->vtable)._23_set_color.method);
        (*(pUVar4->klass->vtable)._25_set_raycastTarget.methodPtr)
                  (pUVar4,true,(pUVar4->klass->vtable)._25_set_raycastTarget.method);
        pUVar1 = (object->fields).go;
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          pUVar5 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar1,(MethodInfo_6F4D60 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_Toggle);
          (object->fields).toggle = pUVar5;
          Il2CppCodeGenWriteBarrier(&(object->fields).toggle,pUVar5);
          pUVar5 = (object->fields).toggle;
          if (pUVar5 != (UnityEngine_UI_Toggle_o *)0x0) {
            UnityEngine_UI_Selectable__set_transition
                      ((UnityEngine_UI_Selectable_o *)pUVar5,0,(MethodInfo *)0x0);
            pUVar5 = (object->fields).toggle;
            local_58.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
            local_58.m_Mode = 3;
            local_58.m_WrapAround = false;
            local_58._5_3_ = 0;
            if (pUVar5 != (UnityEngine_UI_Toggle_o *)0x0) {
              local_58.m_SelectOnDown = (UnityEngine_UI_Selectable_o *)0x0;
              local_58.m_SelectOnLeft = (UnityEngine_UI_Selectable_o *)0x0;
              local_58.m_SelectOnUp = (UnityEngine_UI_Selectable_o *)0x0;
              local_58.m_SelectOnRight = (UnityEngine_UI_Selectable_o *)0x0;
              UnityEngine_UI_Selectable__set_navigation
                        ((UnityEngine_UI_Selectable_o *)pUVar5,(UnityEngine_UI_Navigation_o *)&local_58,
                         (MethodInfo *)0x0);
              pUVar1 = (object->fields).go;
              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                UnityEngine_GameObject__AddComponent_object_
                          (pUVar1,(MethodInfo_6F4D60 *)
                                  MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDisabledSelectableOpacity
                          );
                pGVar2 = (object->fields).node;
                if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  pUVar5 = (object->fields).toggle;
                  value = System_String__Equals_196c550
                                    ((pGVar2->fields).value,"true",5,(MethodInfo *)0x0);
                  if (pUVar5 != (UnityEngine_UI_Toggle_o *)0x0) {
                    UnityEngine_UI_Toggle__set_isOn(pUVar5,value,(MethodInfo *)0x0);
                    pUVar1 = (object->fields).go;
                    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                      parent = UnityEngine_GameObject__get_transform(pUVar1,(MethodInfo *)0x0);
                      pGVar3 = (object->fields).context;
                      if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                        theme = (pGVar3->fields).Theme;
                        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).
                            cctor_finished_or_no_cctor == 0) {
                          il2cpp_codegen_runtime_class_init
                                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder)
                          ;
                        }
                        parent_00 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SwitchTrack
                                              (parent,theme,(MethodInfo *)0x0);
                        pGVar3 = (object->fields).context;
                        if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                          switchThumb = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SwitchThumb
                                                  (parent_00,(pGVar3->fields).Theme,(MethodInfo *)0x0);
                          if (parent_00 != (UnityEngine_RectTransform_o *)0x0) {
                            pUVar4 = UnityEngine_Component__GetComponent_object_
                                               ((UnityEngine_Component_o *)parent_00,
                                                (MethodInfo_6651A0 *)
                                                MethodInfo_UnityEngine_Component_GetComponent_Image);
                            pUVar5 = (object->fields).toggle;
                            if (pUVar5 != (UnityEngine_UI_Toggle_o *)0x0) {
                              UnityEngine_UI_Selectable__set_targetGraphic
                                        ((UnityEngine_UI_Selectable_o *)pUVar5,
                                         (UnityEngine_UI_Graphic_o *)pUVar4,(MethodInfo *)0x0);
                              pUVar1 = (object->fields).go;
                              if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
                                __this_00 = UnityEngine_GameObject__AddComponent_object_
                                                      (pUVar1,(MethodInfo_6F4D60 *)
                                                                                                                            
                                                       MethodInfo_UnityEngine_GameObject_AddComponent_GisketchToggleFeedback
                                                      );
                                pGVar3 = (object->fields).context;
                                if ((pGVar3 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) &&
                                   (__this_00 != (Gisketch_Aottg2UI_Actions_GisketchToggleFeedback_o *)0x0)) {
                                  Gisketch_Aottg2UI_Actions_GisketchToggleFeedback__Setup
                                            (__this_00,(object->fields).toggle,(TMPro_TextMeshProUGUI_o *)0x0,
                                             pUVar4,switchThumb,(pGVar3->fields).Theme,(MethodInfo *)0x0);
                                  pGVar3 = (object->fields).context;
                                  if (pGVar3 != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
                                    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__AddFocusRing
                                              ((object->fields).go,(pGVar3->fields).Theme,true,
                                               (MethodInfo *)0x0);
                                    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySwitchMeasure
                                              ((object->fields).go,style,(MethodInfo *)0x0);
                                    pUVar5 = (object->fields).toggle;
                                    if (pUVar5 != (UnityEngine_UI_Toggle_o *)0x0) {
                                      __this = (UnityEngine_Events_UnityEvent_Vector2__o *)
                                               (pUVar5->fields).onValueChanged;
                                      __this_01 = (UnityEngine_AudioSettings_AudioConfigurationChangeHandler_o
                                                   *)il2cpp_codegen_object_new
                                                               ((Il2CppClass *)
                                                                TypeInfo_UnityEngine_Events_UnityAction_bool);
                                      UnityEngine_Events_UnityAction_bool____ctor
                                                (__this_01,(Il2CppObject *)object,
                                                 (intptr_t)
                                                 MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_c__DisplayClass87_0_BuildSwitch_b__0
                                                 ,(MethodInfo *)0x0);
                                      if (__this != (UnityEngine_Events_UnityEvent_Vector2__o *)0x0) {
                                        UnityEngine_Events_UnityEvent_Vector2___AddListener
                                                  (__this,(UnityEngine_Events_UnityAction_T0__o *)__this_01,
                                                   (MethodInfo_EBBB50 *)
                                                   MethodInfo_UnityEngine_Events_UnityEvent_bool_AddListener);
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
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleBox
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleBox (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, bool radio, const MethodInfo* method);
// 0x1818ed670

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleBox
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,bool radio,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  System_String_o *pSVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184342186 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Check Box");
    il2cpp_codegen_initialize_runtime_metadata(&"checkBox");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Radio Box");
    Il2CppMethodInitialized_184342186 = '\x01';
  }
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818ed97a;
  style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"checkBox",(MethodInfo *)0x0);
  pSVar4 = "AoTTG Check Box";
  if (radio) {
    pSVar4 = "AoTTG Radio Box";
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_1818ed97a;
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
  Il2CppCodeGenWriteBarrier(components->m_Items,obj);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1abe0(__this,pSVar4,components,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (__this == (UnityEngine_GameObject_o *)0x0) goto label_1818ed97a;
  __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_1818ed97a;
  UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (__this,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_1818ed97a;
  pGVar1 = (style->fields).height;
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818ed8b4:
    fVar5 = 26.0;
  }
  else {
    pSVar4 = (pGVar1->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(pSVar4,"point",5,(MethodInfo *)0x0);
    if (!bVar2) goto label_1818ed8b4;
    fVar5 = (pGVar1->fields).value;
  }
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot
              (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
    value.fields.y = fVar5;
    value.fields.x = fVar5;
    UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
              (__this,style,theme,(style->fields).background,false,(MethodInfo *)0x0);
    return __this_01;
  }
label_1818ed97a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleMark
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleMark (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, bool radio, const MethodInfo* method);
// 0x1818ee0a0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleMark
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,bool radio,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar1;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  bool bVar2;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  System_String_o *pSVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_184342187 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Check Mark");
    il2cpp_codegen_initialize_runtime_metadata(&"checkMark");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Radio Mark");
    Il2CppMethodInitialized_184342187 = '\x01';
  }
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818ee387;
  style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"checkMark",(MethodInfo *)0x0);
  pSVar4 = "AoTTG Check Mark";
  if (radio) {
    pSVar4 = "AoTTG Radio Mark";
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_1818ee387;
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
  Il2CppCodeGenWriteBarrier(components->m_Items,obj);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1abe0(__this,pSVar4,components,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (__this == (UnityEngine_GameObject_o *)0x0) goto label_1818ee387;
  __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_1818ee387;
  UnityEngine_Transform__SetParent_2f5a7e0
            (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (__this,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_1818ee387;
  pGVar1 = (style->fields).height;
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818ee2e1:
    fVar5 = 16.0;
  }
  else {
    pSVar4 = (pGVar1->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(pSVar4,"point",5,(MethodInfo *)0x0);
    if (!bVar2) goto label_1818ee2e1;
    fVar5 = (pGVar1->fields).value;
  }
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
    value.fields.y = fVar5;
    value.fields.x = fVar5;
    UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
              (__this,style,theme,(style->fields).background,false,(MethodInfo *)0x0);
    return __this_01;
  }
label_1818ee387:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleIcon
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleIcon (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818ed9a0

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
  UnityEngine_Color_Fields local_58 [3];
  
  if (Il2CppMethodInitialized_184342188 == '\0') {
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
    Il2CppMethodInitialized_184342188 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,3);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_1818edd00:
    ThrowNullReferenceException();
  }
  if (pSVar1 != (System_Type_o *)0x0) {
    pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
    if (pIVar2 == (Il2CppObject *)0x0) {
      pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
    }
  }
  if ((int)components->max_length != 0) {
    components->m_Items[0] = pSVar1;
    Il2CppCodeGenWriteBarrier(components->m_Items,pSVar1);
    pSVar1 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_CanvasRenderer,(MethodInfo *)0x0);
    if (pSVar1 != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)components->max_length) {
      components->m_Items[1] = pSVar1;
      Il2CppCodeGenWriteBarrier(components->m_Items + 1,pSVar1);
      pSVar1 = System_Type__GetTypeFromHandle
                         ((System_RuntimeTypeHandle_o)TypeRef_UnityEngine_UI_Image,(MethodInfo *)0x0);
      if (pSVar1 != (System_Type_o *)0x0) {
        pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)pSVar1,(((components->obj).klass)->_1).element_class)
        ;
        if (pIVar2 == (Il2CppObject *)0x0) {
          pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
        }
      }
      if (2 < (uint)components->max_length) {
        components->m_Items[2] = pSVar1;
        Il2CppCodeGenWriteBarrier(components->m_Items + 2,pSVar1);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
        UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Toggle Icon",components,(MethodInfo *)0x0);
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        if (__this != (UnityEngine_GameObject_o *)0x0) {
          __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
          if (__this_00 != (UnityEngine_Transform_o *)0x0) {
            UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
            __this_01 = UnityEngine_GameObject__GetComponent_object_
                                  (__this,(MethodInfo_6F5650 *)
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
                                    (__this,(MethodInfo_6F5650 *)
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
                  local_58[0].r = 1.0;
                  local_58[0].g = 1.0;
                  local_58[0].b = 1.0;
                  local_58[0].a = 1.0;
                  (*(__this_02->klass->vtable)._23_set_color.methodPtr)
                            (__this_02,(UnityEngine_Color_o *)local_58,
                             (__this_02->klass->vtable)._23_set_color.method);
                  return __this_01;
                }
              }
            }
          }
        }
        goto label_1818edd00;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ToggleLabel
// il2cpp: TMPro_TextMeshProUGUI_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleLabel (UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, bool hasIcon, const MethodInfo* method);
// 0x1818edd40

TMPro_TextMeshProUGUI_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ToggleLabel
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,bool hasIcon,MethodInfo *method)

{
  System_String_o *value;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *__this;
  UnityEngine_Vector2_o value_00;
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
  uint uVar2;
  
  if (Il2CppMethodInitialized_184342189 == '\0') {
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
    Il2CppMethodInitialized_184342189 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this_00,"AoTTG Toggle Label",components,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_01,parent,false,(MethodInfo *)0x0);
        __this_02 = UnityEngine_GameObject__GetComponent_object_
                              (__this_00,
                               (MethodInfo_6F5650 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(__this_02,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_184341f36 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_184341f36 = '\x01';
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
          value_00.fields.y = 0.0;
          value_00.fields.x = (float)uVar2;
          UnityEngine_RectTransform__set_offsetMin(__this_02,value_00,(MethodInfo *)0x0);
          if (Il2CppMethodInitialized_18433e3c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
            Il2CppMethodInitialized_18433e3c9 = '\x01';
          }
          UnityEngine_RectTransform__set_offsetMax
                    (__this_02,
                     (UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
                     (MethodInfo *)0x0);
          text = UnityEngine_GameObject__AddComponent_object_
                           (__this_00,
                            (MethodInfo_6F4D60 *)
                            MethodInfo_UnityEngine_GameObject_AddComponent_TextMeshProUGUI);
          __this_03 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
          Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_03,(MethodInfo *)0x0);
          if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
             (__this_03 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
            value = (node->fields).text;
            (__this_03->fields).text = value;
            Il2CppCodeGenWriteBarrier(&(__this_03->fields).text,value);
            (__this_03->fields).style = "controlLabel";
            Il2CppCodeGenWriteBarrier(&(__this_03->fields).style,"controlLabel");
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
              Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyText
                        (text,__this_03,style,context,(MethodInfo *)0x0);
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
// 0x1818ece50

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SwitchTrack
          (UnityEngine_Transform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method
          )

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
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_18434218a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Switch Track");
    il2cpp_codegen_initialize_runtime_metadata(&"switchTrack");
    Il2CppMethodInitialized_18434218a = '\x01';
  }
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
label_1818ed19f:
    ThrowNullReferenceException();
  }
  style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"switchTrack",(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_1818ed19f;
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
  Il2CppCodeGenWriteBarrier(components->m_Items,obj);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Switch Track",components,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (__this == (UnityEngine_GameObject_o *)0x0) goto label_1818ed19f;
  __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
  if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_1818ed19f;
  UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (__this,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (__this_01 == (UnityEngine_RectTransform_o *)0x0) goto label_1818ed19f;
  UnityEngine_RectTransform__set_anchorMin
            (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_anchorMax
            (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
  UnityEngine_RectTransform__set_pivot(__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_1818ed19f;
  pGVar1 = (style->fields).width;
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818ed0bf:
    fVar6 = 52.0;
  }
  else {
    pSVar2 = (pGVar1->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(pSVar2,"point",5,(MethodInfo *)0x0);
    if (!bVar3) goto label_1818ed0bf;
    fVar6 = (pGVar1->fields).value;
  }
  pGVar1 = (style->fields).height;
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar2 = (pGVar1->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(pSVar2,"point",5,(MethodInfo *)0x0);
    if (bVar3) {
      fVar5 = (pGVar1->fields).value;
      goto label_1818ed13f;
    }
  }
  fVar5 = 26.0;
label_1818ed13f:
  value.fields.y = fVar5;
  value.fields.x = fVar6;
  UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
            (__this,style,theme,(style->fields).background,false,(MethodInfo *)0x0);
  return __this_01;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SwitchThumb
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SwitchThumb (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x1818ecab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818ecdb3: movaps xmm0, xmm6

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
  float fVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_18434218b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_bool_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Switch Thumb");
    il2cpp_codegen_initialize_runtime_metadata(&"switchThumb");
    Il2CppMethodInitialized_18434218b = '\x01';
  }
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) goto label_1818ece27;
  style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(theme,"switchThumb",(MethodInfo *)0x0);
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_1818ece27;
  if ((obj != (System_Type_o *)0x0) &&
     (pIVar4 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
     pIVar4 == (Il2CppObject *)0x0)) {
    pIVar4 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar4,(MethodInfo *)0x0);
  }
  if ((int)components->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  components->m_Items[0] = obj;
  Il2CppCodeGenWriteBarrier(components->m_Items,obj);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1abe0(__this,"AoTTG Switch Thumb",components,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if ((__this == (UnityEngine_GameObject_o *)0x0) ||
     (__this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0),
     __this_00 == (UnityEngine_Transform_o *)0x0)) goto label_1818ece27;
  UnityEngine_Transform__SetParent_2f5a7e0
            (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
  __this_01 = UnityEngine_GameObject__GetComponent_object_
                        (__this,(MethodInfo_6F5650 *)
                                MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) goto label_1818ece27;
  pGVar1 = (style->fields).height;
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818ecce7:
    fVar6 = 22.0;
  }
  else {
    pSVar2 = (pGVar1->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar3 = System_String__Equals_196c550(pSVar2,"point",5,(MethodInfo *)0x0);
    if (!bVar3) goto label_1818ecce7;
    fVar6 = (pGVar1->fields).value;
  }
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_anchorMax
              (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
    UnityEngine_RectTransform__set_pivot
              (__this_01,(UnityEngine_Vector2_o)0x3f00000000000000,(MethodInfo *)0x0);
    pGVar1 = (style->fields).width;
    if (Il2CppMethodInitialized_184342145 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      il2cpp_codegen_initialize_runtime_metadata(&"point");
      Il2CppMethodInitialized_184342145 = '\x01';
    }
    fVar5 = fVar6;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
      pSVar2 = (pGVar1->fields).unit;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      bVar3 = System_String__Equals_196c550(pSVar2,"point",5,(MethodInfo *)0x0);
      if (bVar3) {
        fVar5 = (pGVar1->fields).value;
      }
    }
    value.fields.y = fVar6;
    value.fields.x = fVar5;
    UnityEngine_RectTransform__set_sizeDelta(__this_01,value,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyImage
              (__this,style,theme,(style->fields).background,(style->fields).reliefGradient.fields.value,
               (MethodInfo *)0x0);
    return __this_01;
  }
label_1818ece27:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplyToggleMeasure
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyToggleMeasure (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, TMPro_TextMeshProUGUI_o* label, bool hasIcon, const MethodInfo* method);
// 0x1818ddeb0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyToggleMeasure
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               TMPro_TextMeshProUGUI_o *label,bool hasIcon,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_LayoutElement_o *pUVar2;
  System_String_o *pSVar3;
  UnityEngine_Vector2_o UVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_18434218c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434218c = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818de19e;
  pUVar2 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar2 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818de19e;
    pSVar3 = (*(label->klass->vtable)._65_get_text.methodPtr)
                       (label,(label->klass->vtable)._65_get_text.method);
    UVar4 = TMPro_TMP_Text__GetPreferredValues_2d12570((TMPro_TMP_Text_o *)label,pSVar3,(MethodInfo *)0x0);
    fVar6 = UVar4.fields.x;
  }
  else {
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    fVar6 = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields.x;
  }
  if (hasIcon) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)label,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (label == (TMPro_TextMeshProUGUI_o *)0x0) goto label_1818de19e;
      pSVar3 = (*(label->klass->vtable)._65_get_text.methodPtr)
                         (label,(label->klass->vtable)._65_get_text.method);
      bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        fVar6 = fVar6 + 80.0;
        goto label_1818de039;
      }
    }
    fVar6 = 72.0;
  }
  else {
    fVar6 = fVar6 + 44.0;
  }
label_1818de039:
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar5 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar5 = (style->fields).width;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar3 = (pGVar5->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(pSVar3,"point",5,(MethodInfo *)0x0);
    if (bVar1) {
      fVar6 = (pGVar5->fields).value;
    }
  }
  if (pUVar2 == (UnityEngine_UI_LayoutElement_o *)0x0) {
label_1818de19e:
    ThrowNullReferenceException();
  }
  (*(pUVar2->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar2,fVar6,(pUVar2->klass->vtable)._36_set_preferredWidth.method);
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
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar3 = (pGVar5->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar1 = System_String__Equals_196c550(pSVar3,"point",5,(MethodInfo *)0x0);
    if (bVar1) {
      fVar6 = (pGVar5->fields).value;
      goto label_1818de177;
    }
  }
  fVar6 = 42.0;
label_1818de177:
  (*(pUVar2->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar2,fVar6,(pUVar2->klass->vtable)._38_set_preferredHeight.method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ApplySwitchMeasure
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySwitchMeasure (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o* style, const MethodInfo* method);
// 0x1818dd640

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplySwitchMeasure
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style,
               MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  UnityEngine_UI_LayoutElement_o *pUVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_18434218d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_18434218d = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) goto label_1818dd82d;
  pUVar3 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_LayoutElement);
  if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
  }
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar4 = (style->fields).width;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
label_1818dd750:
    fVar5 = 58.0;
  }
  else {
    pSVar1 = (pGVar4->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(pSVar1,"point",5,(MethodInfo *)0x0);
    if (!bVar2) goto label_1818dd750;
    fVar5 = (pGVar4->fields).value;
  }
  if (pUVar3 == (UnityEngine_UI_LayoutElement_o *)0x0) {
label_1818dd82d:
    ThrowNullReferenceException();
  }
  (*(pUVar3->klass->vtable)._36_set_preferredWidth.methodPtr)
            (pUVar3,fVar5,(pUVar3->klass->vtable)._36_set_preferredWidth.method);
  if (style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0;
  }
  else {
    pGVar4 = (style->fields).height;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342145 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"point");
    Il2CppMethodInitialized_184342145 = '\x01';
  }
  if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0) {
    pSVar1 = (pGVar4->fields).unit;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    bVar2 = System_String__Equals_196c550(pSVar1,"point",5,(MethodInfo *)0x0);
    if (bVar2) {
      fVar5 = (pGVar4->fields).value;
      goto label_1818dd80a;
    }
  }
  fVar5 = 42.0;
label_1818dd80a:
  (*(pUVar3->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar3,fVar5,(pUVar3->klass->vtable)._38_set_preferredHeight.method);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$get_LayoutSettleCounters
// il2cpp: Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters_o Gisketch_Aottg2UI_Building_GisketchScreenBuilder__get_LayoutSettleCounters (const MethodInfo* method);
// 0x1818eea00

Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__get_LayoutSettleCounters
          (Gisketch_Aottg2UI_Building_GisketchLayoutSettleCounters_o *__return_storage_ptr__,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder_StaticFields *pGVar1;
  
  if (Il2CppMethodInitialized_18434218e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_18434218e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields;
  (__return_storage_ptr__->fields).Calls = pGVar1->_settleCalls;
  (__return_storage_ptr__->fields).FullCalls = pGVar1->_fullSettleCalls;
  (__return_storage_ptr__->fields).TargetedCalls = pGVar1->_targetedSettleCalls;
  (__return_storage_ptr__->fields).MeasurementCalls = pGVar1->_measurementSettleCalls;
  (__return_storage_ptr__->fields).CanvasFlushes = pGVar1->_canvasFlushes;
  (__return_storage_ptr__->fields).FlexRefreshes = pGVar1->_flexRefreshes;
  (__return_storage_ptr__->fields).ScrollbarPasses = pGVar1->_scrollbarPasses;
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ResetLayoutSettleCounters
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ResetLayoutSettleCounters (const MethodInfo* method);
// 0x1818ea7a0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ResetLayoutSettleCounters(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434218f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_18434218f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_settleCalls = 0;
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_fullSettleCalls = 0;
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_targetedSettleCalls = 0;
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_measurementSettleCalls = 0;
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_canvasFlushes = 0;
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_flexRefreshes = 0;
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_scrollbarPasses = 0;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$Build
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Build (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, const MethodInfo* method);
// 0x1818e6ee0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__Build
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,
          Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,
          Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *value;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context;
  Gisketch_Aottg2UI_Building_GisketchView_o *pGVar1;
  
  if (Il2CppMethodInitialized_184342190 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
    Il2CppMethodInitialized_184342190 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
  Gisketch_Aottg2UI_State_GisketchUIState___ctor(__this,(MethodInfo *)0x0);
  context = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext)
  ;
  if (Il2CppMethodInitialized_18434212d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_18434212d = '\x01';
  }
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)context,(MethodInfo *)0x0);
  (context->fields).Manifest = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(context->fields).Manifest,(void *)0x0);
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    theme = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  if (context != (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    (context->fields).Theme = theme;
    Il2CppCodeGenWriteBarrier(&(context->fields).Theme,theme);
    (context->fields).Localizer = localizer;
    Il2CppCodeGenWriteBarrier(&(context->fields).Localizer,localizer);
    (context->fields).Actions = actions;
    Il2CppCodeGenWriteBarrier(&(context->fields).Actions,actions);
    (context->fields).State = __this;
    Il2CppCodeGenWriteBarrier(&(context->fields).State,__this);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    value = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
    (context->fields).Registry = value;
    Il2CppCodeGenWriteBarrier(&(context->fields).Registry,value);
    (context->fields).DialogResolver = (System_Func_string__GisketchOverlayDefinition__o *)0x0;
    Il2CppCodeGenWriteBarrier(&(context->fields).DialogResolver,(void *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pGVar1 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
                       (screen,parent,context,(MethodInfo *)0x0);
    if (pGVar1 != (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      return (pGVar1->fields)._Root_k__BackingField;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildView
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e69c0
// eh: try 0x1818e6abd..0x1818e6ed3 -> pad 0x183331ab0 (+5 call sites) catch Il2CppExceptionWrapper
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e6b0e: mov rdi, qword ptr [rip + 0x27beb33]  ; "null"
// asm:   0x1818e6ba4: mov ecx, r15d
// asm:   0x1818e6e1a: xor edx, edx
// asm:   0x1818e6e1c: lea rcx, [rsp + 0x50]
// asm:   0x1818e6e21: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818e6e26: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x1818e6e2b: test rcx, rcx
// asm:   0x1818e6e2e: jne 0x1818e6ecd
// asm:   0x1818e6e34: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1818e6e39: test rcx, rcx
// asm:   0x1818e6e3c: je 0x1818e6e45
// asm:   0x1818e6e3e: xor edx, edx
// asm:   0x1818e6e40: call 0x182ecef40  ; Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample()
// asm:   0x1818e6e45: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1818e6e4a: test rcx, rcx
// asm:   0x1818e6e4d: jne 0x1818e6ed3
// asm:   0x1818e6e53: mov rdi, qword ptr [rsp + 0x38]
// asm:   0x1818e6ecd: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1818e6ed3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331a80: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331a85: push rbp
// asm:   0x183331a86: sub rsp, 0x30
// asm:   0x183331a8a: mov rbp, rdx
// asm:   0x183331a8d: mov rax, qword ptr [rbp + 0x90]
// asm:   0x183331a94: mov rcx, qword ptr [rax]
// asm:   0x183331a97: mov qword ptr [rbp + 0x70], rcx
// asm:   0x183331a9b: movabs rax, 0
// asm:   0x183331aa5: add rsp, 0x30
// asm:   0x183331aa9: pop rbp
// asm:   0x183331aaa: ret 
// asm:   0x183331ab0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331ab5: push rbp
// asm:   0x183331ab6: sub rsp, 0x30
// asm:   0x183331aba: mov rbp, rdx
// asm:   0x183331abd: mov rax, qword ptr [rbp + 0x98]
// asm:   0x183331ac4: mov rcx, qword ptr [rax]
// asm:   0x183331ac7: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183331acb: movabs rax, 0
// asm:   0x183331ad5: add rsp, 0x30
// asm:   0x183331ad9: pop rbp
// asm:   0x183331ada: ret 

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildView
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  longlong markerPtr;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  bool bVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this;
  System_String_o *pSVar5;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_Canvas_o *__this_00;
  UnityEngine_UI_GraphicRaycaster_o *x;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_01;
  MethodInfo *lastManagedFrame;
  int32_t iVar6;
  int32_t local_res8 [2];
  Unity_Profiling_ProfilerMarker_Fields local_88;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_80;
  undefined8 local_78;
  Unity_Profiling_ProfilerMarker_Fields *local_70;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_68;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_48;
  
  if (Il2CppMethodInitialized_184342191 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.BuildView");
    il2cpp_codegen_initialize_runtime_metadata(&"stretch root=");
    il2cpp_codegen_initialize_runtime_metadata(&"root build start children=");
    il2cpp_codegen_initialize_runtime_metadata(&"view ready root=");
    Il2CppMethodInitialized_184342191 = '\x01';
  }
  local_88.m_Ptr = 0;
  local_68.fields._area = (System_String_o *)0x0;
  local_68.fields._detail = (System_String_o *)0x0;
  local_68.fields._startMs._0_4_ = 0;
  local_68.fields._startMs._4_2_ = 0;
  local_68.fields._startMs._6_2_ = 0;
  local_68.fields._enabled = false;
  local_68.fields._hotLoop = false;
  local_68.fields._26_6_ = 0;
  iVar6 = 0;
  local_res8[0] = 0;
  local_80 = (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  markerPtr = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->BuildViewMarker).
              fields.m_Ptr;
  if (markerPtr != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample(markerPtr,(MethodInfo *)0x0);
  }
  local_78 = 0;
  local_70 = &local_88;
  local_88.m_Ptr = markerPtr;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_1843421a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843421a2 = '\x01';
  }
  pSVar4 = "null";
  if (screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((screen->fields).id,(MethodInfo *)0x0);
    if (bVar2) {
      pSVar4 = (screen->fields).title;
    }
    else {
      pSVar4 = (screen->fields).id;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar3 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_48,"ScreenBuilder.BuildView",pSVar4,(MethodInfo *)0x0);
  local_68.fields._area = (pGVar3->fields)._area;
  local_68.fields._detail = (pGVar3->fields)._detail;
  local_68.fields._startMs = (pGVar3->fields)._startMs;
  local_68.fields._enabled = (pGVar3->fields)._enabled;
  local_68.fields._hotLoop = (pGVar3->fields)._hotLoop;
  local_68.fields._26_6_ = *(undefined6 *)&(pGVar3->fields).field_0x1a;
  local_48.fields._area = (System_String_o *)0x0;
  local_48.fields._detail = (System_String_o *)&local_68;
  if ((screen == (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) ||
     ((screen->fields).root == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_01 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Gisketch screen must have a root node.");
    System_ArgumentException___ctor_1a77cc0(__this_01,pSVar4,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_BuildView);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  pGVar1 = (screen->fields).root;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if ((pGVar1->fields).children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    iVar6 = (int32_t)((pGVar1->fields).children)->max_length;
  }
  local_res8[0] = iVar6;
  pSVar4 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_1969e50("root build start children=",pSVar4,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.BuildView",pSVar4,(MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
  Gisketch_Aottg2UI_Building_GisketchView___ctor(__this,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)
           Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                     ((screen->fields).root,parent,context,__this,(MethodInfo *)0x0);
  if (pSVar4 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar5 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pSVar4,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_1969e50("stretch root=",pSVar5,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.BuildView",pSVar5,(MethodInfo *)0x0);
  rect = UnityEngine_GameObject__GetComponent_object_
                   ((UnityEngine_GameObject_o *)pSVar4,
                    (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_18434219c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434219c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pSVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    __this_00 = UnityEngine_GameObject__GetComponent_object_
                          ((UnityEngine_GameObject_o *)pSVar4,
                           (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)pSVar4,
                             (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    }
    if (__this_00 == (UnityEngine_Canvas_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_Canvas__set_overrideSorting(__this_00,false,(MethodInfo *)0x0);
    x = UnityEngine_GameObject__GetComponent_object_
                  ((UnityEngine_GameObject_o *)pSVar4,
                   (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      UnityEngine_GameObject__AddComponent_object_
                ((UnityEngine_GameObject_o *)pSVar4,
                 (MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    }
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0
            ((UnityEngine_GameObject_o *)pSVar4,0,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled(__this,(MethodInfo *)0x0);
  UnityEngine_Bindings_NativeTypeAttribute__set_IntermediateScriptingStructName
            ((UnityEngine_Accessibility_AccessibilityNodeData_o *)__this,pSVar4,(MethodInfo *)0x0);
  pSVar4 = UnityEngine_Object__get_name((UnityEngine_Object_o *)pSVar4,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_1969e50("view ready root=",pSVar4,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.BuildView",pSVar4,(MethodInfo *)0x0);
  local_80 = __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_68,(MethodInfo *)0x0);
  if (local_88.m_Ptr != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample(local_88.m_Ptr,(MethodInfo *)0x0);
  }
  return __this;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildOverlay
// il2cpp: Gisketch_Aottg2UI_Building_GisketchView_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, const MethodInfo* method);
// 0x1818e3030
// eh: try 0x1818e3147..0x1818e326a -> pad 0x183315a20 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e30e4: mov rbx, qword ptr [rip + 0x27c255d]  ; "null"
// asm:   0x1818e31ed: xor edx, edx
// asm:   0x1818e31ef: lea rcx, [rsp + 0x58]
// asm:   0x1818e31f4: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818e31f9: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1818e31fe: test rcx, rcx
// asm:   0x1818e3201: jne 0x1818e326a
// asm:   0x1818e3203: mov rbx, qword ptr [rsp + 0xb0]
// asm:   0x1818e326a: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

Gisketch_Aottg2UI_Building_GisketchView_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildOverlay
          (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  bool bVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchView_o *__this;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_70;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (Il2CppMethodInitialized_184342192 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.BuildOverlay");
    Il2CppMethodInitialized_184342192 = '\x01';
  }
  local_50.fields._area = (System_String_o *)0x0;
  local_50.fields._detail = (System_String_o *)0x0;
  local_50.fields._startMs._0_4_ = 0;
  local_50.fields._startMs._4_2_ = 0;
  local_50.fields._startMs._6_2_ = 0;
  local_50.fields._enabled = false;
  local_50.fields._hotLoop = false;
  local_50.fields._26_6_ = 0;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_1843421a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843421a3 = '\x01';
  }
  pSVar3 = "null";
  if (overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((overlay->fields).id,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar3 = (overlay->fields).title;
    }
    else {
      pSVar3 = (overlay->fields).id;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar2 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_70,"ScreenBuilder.BuildOverlay",pSVar3,(MethodInfo *)0x0);
  local_50.fields._area = (pGVar2->fields)._area;
  local_50.fields._detail = (pGVar2->fields)._detail;
  local_50.fields._startMs = (pGVar2->fields)._startMs;
  local_50.fields._enabled = (pGVar2->fields)._enabled;
  local_50.fields._hotLoop = (pGVar2->fields)._hotLoop;
  local_50.fields._26_6_ = *(undefined6 *)&(pGVar2->fields).field_0x1a;
  local_70.fields._area = (System_String_o *)0x0;
  local_70.fields._detail = (System_String_o *)&local_50;
  if ((overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) &&
     ((overlay->fields).root != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    Gisketch_Aottg2UI_Building_GisketchView___ctor(__this,(MethodInfo *)0x0);
    node = (overlay->fields).root;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pSVar3 = (System_String_o *)
             Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                       (node,parent,context,__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0
              ((UnityEngine_GameObject_o *)pSVar3,1,(MethodInfo *)0x0);
    if (__this == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Building_GisketchView__MarkLayoutSettled(__this,(MethodInfo *)0x0);
    UnityEngine_Bindings_NativeTypeAttribute__set_IntermediateScriptingStructName
              ((UnityEngine_Accessibility_AccessibilityNodeData_o *)__this,pSVar3,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_50,(MethodInfo *)0x0);
    return __this;
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Gisketch overlay must have a root node.");
  System_ArgumentException___ctor_1a77cc0(__this_00,pSVar3,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_BuildOverlay);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildNodeInto
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818e22b0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNodeInto
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_GameObject_o *pUVar2;
  Il2CppClass *pIVar3;
  System_ArgumentException_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *pMVar6;
  
  if (Il2CppMethodInitialized_184342193 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342193 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    pSVar4 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar3);
    pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Gisketch node must not be null.");
    System_ArgumentException___ctor_1a77cc0(pSVar4,pSVar5,(MethodInfo *)0x0);
    pMVar6 = il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_BuildNodeInto);
    il2cpp_codegen_raise_exception((Il2CppObject *)pSVar4,pMVar6);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)parent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (view == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
      view = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchView);
      Gisketch_Aottg2UI_Building_GisketchView___ctor(view,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    pUVar2 = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                       (node,parent,context,view,(MethodInfo *)0x0);
    return pUVar2;
  }
  pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  pSVar4 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar3);
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Gisketch node parent must not be null.");
  System_ArgumentException___ctor_1a77cc0(pSVar4,pSVar5,(MethodInfo *)0x0);
  pMVar6 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder_BuildNodeInto);
  il2cpp_codegen_raise_exception((Il2CppObject *)pSVar4,pMVar6);
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettleLayout
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818eb5e0

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184342194 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_184342194 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0(root,0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettleLayout
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout (UnityEngine_GameObject_o* root, int32_t mode, const MethodInfo* method);
// 0x1818eafd0
// eh: try 0x1818eb0f7..0x1818eb5d5 -> pad 0x183331b30 (+9 call sites) catch Il2CppExceptionWrapper
// asm: 42 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818eb197: mov rax, qword ptr [rip + 0x27ba4aa]  ; "null"
// asm:   0x1818eb345: jmp 0x1818eb5ae
// asm:   0x1818eb555: jmp 0x1818eb5ae
// asm:   0x1818eb578: jmp 0x1818eb5ae
// asm:   0x1818eb57a: xor edx, edx
// asm:   0x1818eb57c: lea rcx, [rsp + 0x38]
// asm:   0x1818eb581: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818eb586: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x1818eb58b: test rcx, rcx
// asm:   0x1818eb58e: jne 0x1818eb5cf
// asm:   0x1818eb590: mov rcx, qword ptr [rsp + 0xc8]
// asm:   0x1818eb598: test rcx, rcx
// asm:   0x1818eb59b: je 0x1818eb5a4
// asm:   0x1818eb59d: xor edx, edx
// asm:   0x1818eb59f: call 0x182ecef40  ; Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample()
// asm:   0x1818eb5a4: mov rcx, qword ptr [rsp + 0x58]
// asm:   0x1818eb5a9: test rcx, rcx
// asm:   0x1818eb5ac: jne 0x1818eb5d5
// asm:   0x1818eb5cf: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x1818eb5d5: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331b00: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331b05: push rbp
// asm:   0x183331b06: sub rsp, 0x20
// asm:   0x183331b0a: mov rbp, rdx
// asm:   0x183331b0d: mov rax, qword ptr [rbp + 0x68]
// asm:   0x183331b11: mov rcx, qword ptr [rax]
// asm:   0x183331b14: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183331b18: movabs rax, 0
// asm:   0x183331b22: add rsp, 0x20
// asm:   0x183331b26: pop rbp
// asm:   0x183331b27: ret 
// asm:   0x183331b30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331b35: push rbp
// asm:   0x183331b36: sub rsp, 0x20
// asm:   0x183331b3a: mov rbp, rdx
// asm:   0x183331b3d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183331b41: mov rcx, qword ptr [rax]
// asm:   0x183331b44: mov qword ptr [rbp + 0x58], rcx
// asm:   0x183331b48: movabs rax, 0
// asm:   0x183331b52: add rsp, 0x20
// asm:   0x183331b56: pop rbp
// asm:   0x183331b57: ret 

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleLayout_18eafd0
               (UnityEngine_GameObject_o *root,int32_t mode,MethodInfo *method)

{
  longlong markerPtr;
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar3;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  bool local_res10 [8];
  Unity_Profiling_ProfilerMarker_Fields local_res20;
  System_Enum_o local_88;
  int32_t local_78;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_70;
  undefined8 local_50;
  Unity_Profiling_ProfilerMarker_Fields *local_48;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_30;
  
  if (Il2CppMethodInitialized_184342195 == '\0') {
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
    Il2CppMethodInitialized_184342195 = '\x01';
  }
  local_res20.m_Ptr = 0;
  local_70.fields._area = (System_String_o *)0x0;
  local_70.fields._detail = (System_String_o *)0x0;
  local_70.fields._startMs = 0;
  local_70.fields._enabled = false;
  local_70.fields._hotLoop = false;
  local_70.fields._26_6_ = 0;
  local_res10[0] = false;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  markerPtr = (TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->SettleLayoutMarker).
              fields.m_Ptr;
  if (markerPtr != 0) {
    Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__BeginSample(markerPtr,(MethodInfo *)0x0);
  }
  local_50 = 0;
  local_48 = &local_res20;
  local_88.klass = (System_Enum_c *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchLayoutSettleMode;
  local_88.monitor = &g_data_ffffffffffffffff;
  local_res20.m_Ptr = markerPtr;
  local_78 = mode;
  pSVar2 = System_Enum__ToString(&local_88,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_1843421a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843421a4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  str2 = "null";
  if (bVar1) {
    if (root == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    str2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
  }
  pSVar2 = System_String__Concat_1969b70(pSVar2," ",str2,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar3 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_30,"ScreenBuilder.SettleLayout",pSVar2,(MethodInfo *)0x0);
  local_70.fields._area = (pGVar3->fields)._area;
  local_70.fields._detail = (pGVar3->fields)._detail;
  local_70.fields._startMs = (pGVar3->fields)._startMs;
  local_70.fields._enabled = (pGVar3->fields)._enabled;
  local_70.fields._hotLoop = (pGVar3->fields)._hotLoop;
  local_70.fields._26_6_ = *(undefined6 *)&(pGVar3->fields).field_0x1a;
  local_88.klass = (System_Enum_c *)0x0;
  local_88.monitor = &local_70;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_70,(MethodInfo *)0x0);
    if (local_res20.m_Ptr != 0) {
      Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample(local_res20.m_Ptr,(MethodInfo *)0x0);
    }
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_18434219b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      Il2CppMethodInitialized_18434219b = '\x01';
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_settleCalls =
         TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_settleCalls + 1;
    if (mode == 0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_fullSettleCalls =
           TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_fullSettleCalls + 1;
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases("full #1",(MethodInfo *)0x0)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if (root == (UnityEngine_GameObject_o *)0x0) {
          ThrowNullReferenceException();
        }
        flex = UnityEngine_GameObject__GetComponent_object_
                         (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout)
        ;
      }
      else {
        flex = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      }
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RefreshFlex
                  (flex,"full #1",(MethodInfo *)0x0);
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases("full #2",(MethodInfo *)0x0)
      ;
      local_res10[0] =
           Gisketch_Aottg2UI_Building_GisketchScreenBuilder__UpdateScrollbars(root,(MethodInfo *)0x0);
      if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354de8);
      }
      pSVar2 = System_Boolean__ToString(local_res10,(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969e50("UpdateScrollbars changed=",pSVar2,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.SettleLayout",pSVar2,(MethodInfo *)0x0);
      if (local_res10[0] != false) {
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
          }
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RefreshFlex
                    (flex,"full #2",(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases
                    ("full #3",(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Building_GisketchScreenBuilder__UpdateScrollbars(root,(MethodInfo *)0x0);
        }
      }
      Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll(root,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_70,(MethodInfo *)0x0);
      if (local_res20.m_Ptr != 0) {
        Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample(local_res20.m_Ptr,(MethodInfo *)0x0);
      }
    }
    else {
      if (mode == 2) {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_measurementSettleCalls =
             TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_measurementSettleCalls
             + 1;
      }
      else {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_targetedSettleCalls =
             TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_targetedSettleCalls +
             1;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleTargeted(root,mode == 2,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_70,(MethodInfo *)0x0);
      if (local_res20.m_Ptr != 0) {
        Unity_Profiling_LowLevel_Unsafe_ProfilerUnsafeUtility__EndSample(local_res20.m_Ptr,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$UpdateScrollbars
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__UpdateScrollbars (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818ee3b0

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__UpdateScrollbars
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__this;
  bool bVar1;
  bool bVar2;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184342196 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchScrollbarVisibility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342196 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_scrollbarPasses =
       TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_scrollbarPasses + 1;
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pUVar3 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                       (root,true,
                        (MethodInfo_6F5750 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_GisketchScrollbarVisibility)
    ;
    if (pUVar3 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) {
      bVar1 = false;
      uVar4 = 0;
      while( true ) {
        if ((int)pUVar3->max_length <= (int)uVar4) {
          return bVar1;
        }
        if ((uint)pUVar3->max_length <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        __this = (&pUVar3->m_Items[0].klass)[(int)uVar4];
        if (__this == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) break;
        bVar2 = Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility__UpdateVisibility
                          ((Gisketch_Aottg2UI_Building_GisketchScrollbarVisibility_o *)__this,
                           (MethodInfo *)0x0);
        bVar1 = (bool)(bVar1 | bVar2);
        uVar4 = uVar4 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettleTargeted
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleTargeted (UnityEngine_GameObject_o* root, bool forceCanvasForMeasurement, const MethodInfo* method);
// 0x1818eb630

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettleTargeted
               (UnityEngine_GameObject_o *root,bool forceCanvasForMeasurement,MethodInfo *method)

{
  bool bVar1;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  UnityEngine_RectTransform_o *layoutRoot;
  System_String_o *pSVar2;
  bool local_res8 [8];
  
  if (Il2CppMethodInitialized_184342197 == '\0') {
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
    Il2CppMethodInitialized_184342197 = '\x01';
  }
  local_res8[0] = false;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_184342198 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342198 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    flex = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  }
  else {
    if (root == (UnityEngine_GameObject_o *)0x0) goto label_1818eb973;
    flex = UnityEngine_GameObject__GetComponent_object_
                     (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      flex = UnityEngine_GameObject__GetComponentInParent_object_
                       (root,(MethodInfo_6F53B0 *)
                             MethodInfo_UnityEngine_GameObject_GetComponentInParent_FlexLayout);
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = "targeted";
    if (forceCanvasForMeasurement) {
      pSVar2 = "measurement";
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RefreshFlex(flex,pSVar2,(MethodInfo *)0x0);
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    layoutRoot = UnityEngine_GameObject__GetComponent_object_
                           (root,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)layoutRoot,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_UnityEngine_UI_LayoutRebuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_UI_LayoutRebuilder);
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate(layoutRoot,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    local_res8[0] = Gisketch_Aottg2UI_Building_GisketchScreenBuilder__UpdateScrollbars(root,(MethodInfo *)0x0)
    ;
    if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_184354de8);
    }
    pSVar2 = System_Boolean__ToString(local_res8,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50("UpdateScrollbars changed=",pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.SettleLayout",pSVar2,(MethodInfo *)0x0);
    if (local_res8[0] != false) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RefreshFlex
                  (flex,"targeted scrollbar",(MethodInfo *)0x0);
      }
    }
    Gisketch_Aottg2UI_Building_GisketchFullscreenStretch__ApplyAll(root,(MethodInfo *)0x0);
    if (forceCanvasForMeasurement) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases("measurement",(MethodInfo *)0x0)
      ;
    }
    return;
  }
label_1818eb973:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SettlementFlex
// il2cpp: Gilzoide_FlexUi_FlexLayout_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettlementFlex (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818eb980

Gilzoide_FlexUi_FlexLayout_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SettlementFlex
          (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  Gilzoide_FlexUi_FlexLayout_o *pGVar2;
  
  if (Il2CppMethodInitialized_184342198 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184342198 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  }
  if (root == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = UnityEngine_GameObject__GetComponent_object_
                     (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_FlexLayout);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pGVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return pGVar2;
  }
  pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                     (root,(MethodInfo_6F53B0 *)
                           MethodInfo_UnityEngine_GameObject_GetComponentInParent_FlexLayout);
  return pGVar2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ForceCanvases
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases (System_String_o* reason, const MethodInfo* method);
// 0x1818e9660

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ForceCanvases
               (System_String_o *reason,MethodInfo *method)

{
  System_String_o *detail;
  
  if (Il2CppMethodInitialized_184342199 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"ForceUpdateCanvases ");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.SettleLayout");
    Il2CppMethodInitialized_184342199 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_canvasFlushes =
       TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_canvasFlushes + 1;
  detail = System_String__Concat_1969e50("ForceUpdateCanvases ",reason,(MethodInfo *)0x0);
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
// 0x1818ea640

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RefreshFlex
               (Gilzoide_FlexUi_FlexLayout_o *flex,System_String_o *reason,MethodInfo *method)

{
  bool bVar1;
  System_String_o *detail;
  
  if (Il2CppMethodInitialized_18434219a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"Flex RefreshRootLayoutImmediate ");
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.SettleLayout");
    Il2CppMethodInitialized_18434219a = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)flex,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_flexRefreshes =
         TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_flexRefreshes + 1;
    detail = System_String__Concat_1969e50("Flex RefreshRootLayoutImmediate ",reason,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ScreenBuilder.SettleLayout",detail,(MethodInfo *)0x0);
    if (flex == (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(flex,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$CountSettle
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CountSettle (int32_t mode, const MethodInfo* method);
// 0x1818e8480

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__CountSettle(int32_t mode,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434219b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_18434219b = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_settleCalls =
       TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_settleCalls + 1;
  if (mode != 0) {
    if (mode != 2) {
      if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
      }
      TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_targetedSettleCalls =
           TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_targetedSettleCalls + 1;
      return;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_measurementSettleCalls =
         TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_measurementSettleCalls + 1
    ;
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_fullSettleCalls =
       TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->static_fields->_fullSettleCalls + 1;
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$EnsureScreenCanvas
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EnsureScreenCanvas (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818e9380

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EnsureScreenCanvas
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Canvas_o *__this;
  UnityEngine_UI_GraphicRaycaster_o *x;
  
  if (Il2CppMethodInitialized_18434219c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434219c = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (root != (UnityEngine_GameObject_o *)0x0) {
      __this = UnityEngine_GameObject__GetComponent_object_
                         (root,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Canvas);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        __this = UnityEngine_GameObject__AddComponent_object_
                           (root,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
      }
      if (__this != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Canvas__set_overrideSorting(__this,false,(MethodInfo *)0x0);
        x = UnityEngine_GameObject__GetComponent_object_
                      (root,(MethodInfo_6F5650 *)
                            MethodInfo_UnityEngine_GameObject_GetComponent_GraphicRaycaster);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar1 = UnityEngine_Object__op_Equality
                          ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar1) {
          return;
        }
        UnityEngine_GameObject__AddComponent_object_
                  (root,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
        return;
      }
    }
    ThrowNullReferenceException();
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildNode
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818e2420
// eh: try 0x1818e2678..0x1818e2b3c -> pad 0x183331a30 catch Il2CppExceptionWrapper
// eh: try 0x1818e2b3c..0x1818e2b56 -> pad 0x18022f7f0 cleanup
// eh: try 0x1818e2b56..0x1818e301e -> pad 0x183331a30 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e25ef: mov edx, edi
// asm:   0x1818e2842: mov r9, qword ptr [rip + 0x27c2dff]  ; "null"
// asm:   0x1818e2931: mov r12, qword ptr [rsp + 0x40]
// asm:   0x1818e2b2b: nop dword ptr [rax + rax]
// asm:   0x1818e2b85: movsxd rax, ebx
// asm:   0x1818e2b88: mov rcx, qword ptr [r14 + rax*8 + 0x20]
// asm:   0x1818e2b8d: test rcx, rcx
// asm:   0x1818e2b90: je 0x1818e2fcd
// asm:   0x1818e2f69: xor edx, edx
// asm:   0x1818e2f6b: mov rcx, qword ptr [rsp + 0x68]
// asm:   0x1818e2f70: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x1818e2f75: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1818e2f7a: test rcx, rcx
// asm:   0x1818e2f7d: jne 0x1818e301e
// asm:   0x1818e2f83: mov r15, qword ptr [rsp + 0x50]
// asm:   0x1818e301e: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331a30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331a35: push rbp
// asm:   0x183331a36: sub rsp, 0x40
// asm:   0x183331a3a: mov rbp, rdx
// asm:   0x183331a3d: mov rax, qword ptr [rbp + 0x58]
// asm:   0x183331a41: mov rcx, qword ptr [rax]
// asm:   0x183331a44: mov qword ptr [rbp + 0x60], rcx
// asm:   0x183331a48: movabs rax, 0
// asm:   0x183331a52: add rsp, 0x40
// asm:   0x183331a56: pop rbp
// asm:   0x183331a57: ret 

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_Transform_o *parent,
          Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
          Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar2;
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *pGVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar4;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__this_00;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node_00;
  UnityEngine_Vector2_o offset;
  Il2CppType *handle;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *pGVar7;
  bool bVar8;
  char cVar9;
  System_String_o *pSVar10;
  System_String_o *pSVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar12;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar13;
  UnityEngine_GameObject_o *__this_01;
  UnityEngine_Transform_o *pUVar14;
  Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *style;
  System_String_o *str1;
  Gilzoide_FlexUi_FlexLayout_o *flex;
  Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *__this_02;
  UnityEngine_UI_RectMask2D_o *x;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar15;
  Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this_03;
  Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *__this_04;
  System_String_o *pSVar16;
  Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *pGVar17;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *styleMotion;
  Gisketch_Aottg2UI_Building_GisketchChildHost_o *x_00;
  uint uVar18;
  Gisketch_Aottg2UI_Building_GisketchView_o *view_00;
  int32_t iVar19;
  float fVar20;
  int32_t local_res8 [2];
  UnityEngine_Transform_o *local_res10;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *local_res18;
  Gisketch_Aottg2UI_Building_GisketchView_o *local_res20;
  Il2CppObject *local_90;
  UnityEngine_GameObject_o *local_88;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_78;
  System_String_o local_58;
  undefined8 uStack_40;
  
  local_res10 = parent;
  local_res18 = context;
  local_res20 = view;
  if (Il2CppMethodInitialized_18434219d == '\0') {
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
    Il2CppMethodInitialized_18434219d = '\x01';
  }
  local_58.klass = (System_String_c *)0x0;
  local_58.monitor = (void *)0x0;
  local_58.fields._stringLength = 0;
  local_58.fields._firstChar = 0;
  local_58.fields._6_2_ = 0;
  uStack_40 = 0;
  iVar19 = 0;
  local_res8[0] = 0;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar8 = System_String__IsNullOrEmpty((node->fields).type,(MethodInfo *)0x0);
  pSVar16 = "Panel";
  if (!bVar8) {
    pSVar16 = (node->fields).type;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_1843421a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"(no-id)");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&" type=");
    Il2CppMethodInitialized_1843421a5 = '\x01';
  }
  bVar8 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
  pSVar10 = "(no-id)";
  if (!bVar8) {
    pSVar10 = (node->fields).id;
  }
  pSVar10 = System_String__Concat_1969b70(pSVar10," type=",pSVar16,(MethodInfo *)0x0);
  if ((node->fields).children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    iVar19 = (int32_t)((node->fields).children)->max_length;
  }
  local_88 = (UnityEngine_GameObject_o *)0x0;
  local_res8[0] = iVar19;
  pSVar11 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar10 = System_String__Concat_1969b70(pSVar10," children=",pSVar11,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar12 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                      (&local_78,"ScreenBuilder.BuildNode",pSVar10,(MethodInfo *)0x0);
  local_58.klass = (System_String_c *)(pGVar12->fields)._area;
  local_58.monitor = (pGVar12->fields)._detail;
  local_58.fields = (System_String_Fields)(pGVar12->fields)._startMs;
  uStack_40._0_1_ = (pGVar12->fields)._enabled;
  uStack_40._1_1_ = (pGVar12->fields)._hotLoop;
  uStack_40._2_6_ = *(undefined6 *)&(pGVar12->fields).field_0x1a;
  local_78.fields._area = (System_String_o *)0x0;
  local_78.fields._detail = &local_58;
  bVar8 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
  if (bVar8) {
    pSVar10 = System_String__Concat_1969e50("AoTTG ",pSVar16,(MethodInfo *)0x0);
  }
  else {
    pSVar10 = (node->fields).id;
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((obj != (System_Type_o *)0x0) &&
     (pIVar13 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
     pIVar13 == (Il2CppObject *)0x0)) {
    pIVar13 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar13,(MethodInfo *)0x0);
  }
  if ((int)components->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  components->m_Items[0] = obj;
  Il2CppCodeGenWriteBarrier(components->m_Items,obj);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1abe0(__this_01,pSVar10,components,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (__this_01 == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar14 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
  if (pUVar14 == (UnityEngine_Transform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_Transform__SetParent_2f5a7e0(pUVar14,local_res10,false,(MethodInfo *)0x0);
  UnityEngine_GameObject__SetActive(__this_01,(node->fields).active,(MethodInfo *)0x0);
  pGVar7 = local_res18;
  if (local_res18 == (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)0x0) {
    ThrowNullReferenceException();
  }
  pGVar2 = (local_res18->fields).Theme;
  if (pGVar2 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    ThrowNullReferenceException();
  }
  style = Gisketch_Aottg2UI_Styling_GisketchTheme__GetStyle(pGVar2,(node->fields).style,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_1843421a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"(no-id)");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&" type=");
    Il2CppMethodInitialized_1843421a5 = '\x01';
  }
  bVar8 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
  pSVar10 = "(no-id)";
  if (!bVar8) {
    pSVar10 = (node->fields).id;
  }
  str1 = System_String__Concat_1969b70(pSVar10," type=",pSVar16,(MethodInfo *)0x0);
  pSVar10 = "ScreenBuilder.BuildNode";
  pSVar11 = "null";
  if (style != (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) {
    pSVar11 = (style->fields).name;
  }
  pSVar11 = System_String__Concat_1969590
                      ("build builtin/registry ",str1," style=",pSVar11,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark(pSVar10,pSVar11,(MethodInfo *)0x0);
  pGVar3 = (pGVar7->fields).Registry;
  if (pGVar3 == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_18434212f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_TryGetValue);
    Il2CppMethodInitialized_18434212f = '\x01';
  }
  local_90 = (Il2CppObject *)0x0;
  bVar8 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
  view_00 = local_res20;
  if (bVar8) {
label_1818e2b46:
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildBuiltin
              (pSVar16,__this_01,node,style,pGVar7,view_00,(MethodInfo *)0x0);
  }
  else {
    __this = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar3->fields)._factories;
    if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (__this,(Il2CppObject *)pSVar16,&local_90,
                       (MethodInfo_14769C0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_GisketchComponentFactory_TryGetValue
                      );
    view_00 = local_res20;
    if (!bVar8) goto label_1818e2b46;
    if (local_90 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    cVar9 = (*local_90[1].monitor)(local_90[4].klass,__this_01,node,pGVar7,local_res20,local_90[2].monitor);
    if (cVar9 == '\0') goto label_1818e2b46;
  }
  Gisketch_Aottg2UI_Actions_GisketchFormField__Attach(__this_01,node,(MethodInfo *)0x0);
  flex = UnityEngine_GameObject__AddComponent_object_
                   (__this_01,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_FlexLayout);
  pGVar4 = (node->fields).layout;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyFlex(flex,pGVar4,style,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ApplyAspectRatio(__this_01,style,(MethodInfo *)0x0);
  pGVar4 = (node->fields).layout;
  if (Il2CppMethodInitialized_18434216f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset);
    Il2CppMethodInitialized_18434216f = '\x01';
  }
  if ((pGVar4 != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) &&
     ((cVar9 = il2cpp_runtime_helper_180562af0((pGVar4->fields).offsetX,0), cVar9 == '\0' ||
      (cVar9 = il2cpp_runtime_helper_180562af0((pGVar4->fields).offsetY,0), cVar9 == '\0')))) {
    __this_02 = UnityEngine_GameObject__AddComponent_object_
                          (__this_01,
                           (MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchLayoutOffset);
    if (__this_02 == (Gisketch_Aottg2UI_Building_GisketchLayoutOffset_o *)0x0) {
      ThrowNullReferenceException();
    }
    offset.fields.y = (pGVar4->fields).offsetY;
    offset.fields.x = (pGVar4->fields).offsetX;
    Gisketch_Aottg2UI_Building_GisketchLayoutOffset__Setup(__this_02,offset,(MethodInfo *)0x0);
  }
  if ((node->fields).clip != false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_18434219e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434219e = '\x01';
    }
    x = UnityEngine_GameObject__GetComponent_object_
                  (__this_01,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar8) {
      UnityEngine_GameObject__AddComponent_object_
                (__this_01,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    }
  }
  if ((node->fields).enabled.fields.hasValue != false) {
    bVar8 = (bool)System_Nullable_sbyte___get_Value
                            ((System_Nullable_sbyte__o *)&(node->fields).enabled,
                             (MethodInfo_AE2BA0 *)MethodInfo_System_Nullable_bool_get_Value);
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_18434219f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
      Il2CppMethodInitialized_18434219f = '\x01';
    }
    pUVar15 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                        (__this_01,true,
                         (MethodInfo_6F5750 *)
                         MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
    uVar18 = 0;
    if (pUVar15 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) {
      ThrowNullReferenceException();
    }
    for (; uVar1 = (uint)pUVar15->max_length, (int)uVar18 < (int)uVar1; uVar18 = uVar18 + 1) {
      if (uVar1 <= uVar18) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (&pUVar15->m_Items[0].klass)[(int)uVar18];
      if (__this_00 == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) {
        ThrowNullReferenceException();
      }
      UnityEngine_UI_Selectable__set_interactable
                ((UnityEngine_UI_Selectable_o *)__this_00,bVar8,(MethodInfo *)0x0);
    }
  }
  pGVar7 = local_res18;
  if (((node->fields).bind != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) &&
     ((local_res18->fields).State != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
    __this_03 = UnityEngine_GameObject__AddComponent_object_
                          (__this_01,
                           (MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIBinding);
    if (__this_03 == (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_State_GisketchUIBinding__Setup
              (__this_03,(node->fields).bind,(pGVar7->fields).State,(node->fields).enter,(node->fields).exit,
               (MethodInfo *)0x0);
  }
  bVar8 = System_String__IsNullOrEmpty((node->fields).tooltip,(MethodInfo *)0x0);
  if ((!bVar8) || (bVar8 = System_String__IsNullOrEmpty((node->fields).tooltipKey,(MethodInfo *)0x0), !bVar8))
  {
    __this_04 = UnityEngine_GameObject__AddComponent_object_
                          (__this_01,
                           (MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchTooltipTrigger);
    pSVar16 = (node->fields).tooltip;
    pSVar10 = (node->fields).tooltipKey;
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    }
    if (Il2CppMethodInitialized_18434216c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer);
      Il2CppMethodInitialized_18434216c = '\x01';
    }
    bVar8 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
    if ((bVar8) || ((pGVar7->fields).Localizer == (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0))
    {
      if (((pGVar7->fields).Manifest != (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)0x0) &&
         (pGVar17 = Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindTooltip
                              ((pGVar7->fields).Manifest,pSVar16,(MethodInfo *)0x0),
         pGVar17 != (Gisketch_Aottg2UI_Data_GisketchTooltipDefinition_o *)0x0)) {
        bVar8 = System_String__IsNullOrEmpty((pGVar17->fields).textKey,(MethodInfo *)0x0);
        if ((bVar8) ||
           ((pGVar7->fields).Localizer == (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0)) {
          pSVar16 = (pGVar17->fields).text;
        }
        else {
          pSVar16 = (System_String_o *)
                    il2cpp_runtime_helper_18001c6b0(0,TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,
                                  (pGVar7->fields).Localizer,(pGVar17->fields).textKey,(pGVar17->fields).text)
          ;
        }
      }
    }
    else {
      pGVar5 = (pGVar7->fields).Localizer;
      if (pGVar5 == (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar16 = (System_String_o *)
                il2cpp_runtime_helper_18001c6b0(0,TypeInfo_Gisketch_Aottg2UI_Localization_IGisketchLocalizer,pGVar5,pSVar10,
                              pSVar16);
    }
    if (__this_04 == (Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger_o *)0x0) {
      ThrowNullReferenceException();
    }
    Gisketch_Aottg2UI_Overlays_GisketchTooltipTrigger__Setup
              (__this_04,pSVar16,(pGVar7->fields).Theme,(node->fields).tooltipMode,(MethodInfo *)0x0);
  }
  pGVar2 = (pGVar7->fields).Theme;
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
  }
  if (Il2CppMethodInitialized_18434216d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
    Il2CppMethodInitialized_18434216d = '\x01';
  }
  if ((style == (Gisketch_Aottg2UI_Data_GisketchStyleDefinition_o *)0x0) ||
     (bVar8 = System_String__IsNullOrEmpty((style->fields).motion,(MethodInfo *)0x0), bVar8)) {
    styleMotion = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  }
  else {
    styleMotion = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchMotionDefinition);
    Gisketch_Aottg2UI_Data_GisketchMotionDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)styleMotion,(MethodInfo *)0x0);
    if (pGVar2 == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar16 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionPreset
                        (pGVar2,(style->fields).motion,(MethodInfo *)0x0);
    if (styleMotion == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
      ThrowNullReferenceException();
    }
    (styleMotion->fields).preset = pSVar16;
    Il2CppCodeGenWriteBarrier(&(styleMotion->fields).preset,pSVar16);
    fVar20 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetMotionDuration
                       (pGVar2,(style->fields).motion,0.16,(MethodInfo *)0x0);
    (styleMotion->fields).duration = fVar20;
  }
  if (local_res20 == (Gisketch_Aottg2UI_Building_GisketchView_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchView__Register(local_res20,node,__this_01,styleMotion,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_1843421a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchChildHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421a0 = '\x01';
  }
  x_00 = UnityEngine_GameObject__GetComponent_object_
                   (__this_01,
                    (MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_GisketchChildHost);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    if (x_00 == (Gisketch_Aottg2UI_Building_GisketchChildHost_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar14 = (x_00->fields)._Parent_k__BackingField;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      pUVar14 = (x_00->fields)._Parent_k__BackingField;
      goto label_1818e2ed9;
    }
  }
  pUVar14 = UnityEngine_GameObject__get_transform(__this_01,(MethodInfo *)0x0);
label_1818e2ed9:
  if (Il2CppMethodInitialized_1843421a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_1843421a1 = '\x01';
  }
  if ((node->fields).children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    pGVar6 = (node->fields).children;
    for (uVar18 = 0; uVar1 = (uint)pGVar6->max_length, (int)uVar18 < (int)uVar1; uVar18 = uVar18 + 1) {
      if (uVar1 <= uVar18) {
        ThrowIndexOutOfRangeException();
      }
      node_00 = pGVar6->m_Items[(int)uVar18];
      if (node_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                  (node_00,pUVar14,pGVar7,local_res20,(MethodInfo *)0x0);
      }
    }
  }
  local_88 = __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)&local_58,(MethodInfo *)0x0);
  return __this_01;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$EnsureRectMask
// il2cpp: UnityEngine_UI_RectMask2D_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EnsureRectMask (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x1818e92d0

UnityEngine_UI_RectMask2D_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EnsureRectMask
          (UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_UI_RectMask2D_o *pUVar2;
  
  if (Il2CppMethodInitialized_18434219e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434219e = '\x01';
  }
  if (go == (UnityEngine_GameObject_o *)0x0) {
    ThrowNullReferenceException();
  }
  pUVar2 = UnityEngine_GameObject__GetComponent_object_
                     (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectMask2D);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return pUVar2;
  }
  pUVar2 = UnityEngine_GameObject__AddComponent_object_
                     (go,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_RectMask2D);
  return pUVar2;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$SetInteractable
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SetInteractable (UnityEngine_GameObject_o* go, bool interactable, const MethodInfo* method);
// 0x1818eaf30

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__SetInteractable
               (UnityEngine_GameObject_o *go,bool interactable,MethodInfo *method)

{
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *__this;
  Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *pUVar1;
  uint uVar2;
  
  if (Il2CppMethodInitialized_18434219f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
    Il2CppMethodInitialized_18434219f = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pUVar1 = UnityEngine_GameObject__GetComponentsInChildren___Il2CppFullySharedGenericType_
                       (go,true,(MethodInfo_6F5750 *)
                                MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Selectable);
    if (pUVar1 != (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_array *)0x0) {
      uVar2 = 0;
      while( true ) {
        if ((int)pUVar1->max_length <= (int)uVar2) {
          return;
        }
        if ((uint)pUVar1->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        __this = (&pUVar1->m_Items[0].klass)[(int)uVar2];
        if (__this == (Unity_IL2CPP_Metadata___Il2CppFullySharedGenericType_c *)0x0) break;
        UnityEngine_UI_Selectable__set_interactable
                  ((UnityEngine_UI_Selectable_o *)__this,interactable,(MethodInfo *)0x0);
        uVar2 = uVar2 + 1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChildParent
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChildParent (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x1818e73c0

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChildParent(UnityEngine_GameObject_o *go,MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Building_GisketchChildHost_o *x;
  UnityEngine_Transform_o *pUVar2;
  
  if (Il2CppMethodInitialized_1843421a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponent_GisketchChildHost);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_1843421a0 = '\x01';
  }
  if (go != (UnityEngine_GameObject_o *)0x0) {
    x = UnityEngine_GameObject__GetComponent_object_
                  (go,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_GisketchChildHost);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (x == (Gisketch_Aottg2UI_Building_GisketchChildHost_o *)0x0) goto label_1818e7493;
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
label_1818e7493:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$BuildChildren
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildChildren (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_Transform_o* parent, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x1818e0dd0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818e0e80: mov rsi, qword ptr [rsp + 0x58]
// asm:   0x1818e0e85: mov rbx, qword ptr [rsp + 0x50]
// asm:   0x1818e0e8a: mov r12, qword ptr [rsp + 0x60]

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildChildren
               (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_Transform_o *parent,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node_00;
  uint uVar2;
  
  if (Il2CppMethodInitialized_1843421a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    Il2CppMethodInitialized_1843421a1 = '\x01';
  }
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  if ((node->fields).children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
    pGVar1 = (node->fields).children;
    for (uVar2 = 0; (int)uVar2 < (int)pGVar1->max_length; uVar2 = uVar2 + 1) {
      if ((uint)pGVar1->max_length <= uVar2) {
        ThrowIndexOutOfRangeException();
      }
      node_00 = pGVar1->m_Items[(int)uVar2];
      if (node_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
        }
        Gisketch_Aottg2UI_Building_GisketchScreenBuilder__BuildNode
                  (node_00,parent,context,view,(MethodInfo *)0x0);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$EqualsType
// il2cpp: bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EqualsType (System_String_o* a, System_String_o* b, const MethodInfo* method);
// 0x1818e94d0

bool Gisketch_Aottg2UI_Building_GisketchScreenBuilder__EqualsType
               (System_String_o *a,System_String_o *b,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_196c550(a,b,5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ScreenLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ScreenLabel (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o* screen, const MethodInfo* method);
// 0x1818eab00

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ScreenLabel
          (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *screen,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843421a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843421a2 = '\x01';
  }
  if (screen != (Gisketch_Aottg2UI_Data_GisketchScreenDefinition_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((screen->fields).id,(MethodInfo *)0x0);
    if (bVar1) {
      return (screen->fields).title;
    }
    return (screen->fields).id;
  }
  return "null";
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$OverlayLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__OverlayLabel (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* overlay, const MethodInfo* method);
// 0x1818ea2e0

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__OverlayLabel
          (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *overlay,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843421a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843421a3 = '\x01';
  }
  if (overlay != (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((overlay->fields).id,(MethodInfo *)0x0);
    if (bVar1) {
      return (overlay->fields).title;
    }
    return (overlay->fields).id;
  }
  return "null";
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$RootLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RootLabel (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x1818ea960

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__RootLabel(UnityEngine_GameObject_o *root,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843421a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    Il2CppMethodInitialized_1843421a4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (root != (UnityEngine_GameObject_o *)0x0) {
      pSVar2 = UnityEngine_Object__get_name((UnityEngine_Object_o *)root,(MethodInfo *)0x0);
      return pSVar2;
    }
    ThrowNullReferenceException();
  }
  return "null";
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$NodeLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Building_GisketchScreenBuilder__NodeLabel (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, System_String_o* type, const MethodInfo* method);
// 0x1818ea240

System_String_o *
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__NodeLabel
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,System_String_o *type,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843421a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"(no-id)");
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&" type=");
    Il2CppMethodInitialized_1843421a5 = '\x01';
  }
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    bVar1 = System_String__IsNullOrEmpty((node->fields).id,(MethodInfo *)0x0);
    pSVar2 = "(no-id)";
    if (!bVar1) {
      pSVar2 = (node->fields).id;
    }
    pSVar2 = System_String__Concat_1969b70(pSVar2," type=",type,(MethodInfo *)0x0);
    return pSVar2;
  }
  return "null";
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$ChildCount
// il2cpp: int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChildCount (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818e73a0

int32_t Gisketch_Aottg2UI_Building_GisketchScreenBuilder__ChildCount
                  (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
     ((node->fields).children != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0)) {
    return (int32_t)((node->fields).children)->max_length;
  }
  return 0;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$MarkEditorPreview
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder__MarkEditorPreview (UnityEngine_GameObject_o* go, const MethodInfo* method);
// 0x180547020

void
Gisketch_Aottg2UI_Building_GisketchScreenBuilder__MarkEditorPreview(UnityEngine_GameObject_o* go, MethodInfo* method)

{
  return;
}


// Gisketch.Aottg2UI.Building.GisketchScreenBuilder$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___cctor (const MethodInfo* method);
// 0x1818ee960

void Gisketch_Aottg2UI_Building_GisketchScreenBuilder___cctor(MethodInfo *method)

{
  intptr_t iVar1;
  
  if (Il2CppMethodInitialized_1843421a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchScreenBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch.ScreenBuilder.BuildView");
    il2cpp_codegen_initialize_runtime_metadata(&"Gisketch.ScreenBuilder.SettleLayout");
    Il2CppMethodInitialized_1843421a6 = '\x01';
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


