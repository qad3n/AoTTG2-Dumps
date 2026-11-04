// Type: CustomLogic.CustomLogicCompiler
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCompiler.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicCompiler.FileRange$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicCompiler_FileRange__get_Name (CustomLogic_CustomLogicCompiler_FileRange_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
CustomLogic_CustomLogicCompiler_FileRange__get_Name(CustomLogic_CustomLogicCompiler_FileRange_o* __this, MethodInfo* method)

{
  return (__this->fields)._Name_k__BackingField;
}


// CustomLogic.CustomLogicCompiler.FileRange$$set_Name
// il2cpp: void CustomLogic_CustomLogicCompiler_FileRange__set_Name (CustomLogic_CustomLogicCompiler_FileRange_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180b8ac00

void
CustomLogic_CustomLogicCompiler_FileRange__set_Name(CustomLogic_CustomLogicCompiler_FileRange_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields)._Name_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,value);
  return;
}


// CustomLogic.CustomLogicCompiler.FileRange$$get_Type
// il2cpp: int32_t CustomLogic_CustomLogicCompiler_FileRange__get_Type (CustomLogic_CustomLogicCompiler_FileRange_o* __this, const MethodInfo* method);
// 0x1808fb390

int32_t
CustomLogic_CustomLogicCompiler_FileRange__get_Type(CustomLogic_CustomLogicCompiler_FileRange_o* __this, MethodInfo* method)

{
  return (UnityEngine_InputForUI_EventModifiers_Fields)
         (UnityEngine_InputForUI_EventModifiers_Fields)
         (__this->fields)._Type_k__BackingField.fields._state;
}


// CustomLogic.CustomLogicCompiler.FileRange$$set_Type
// il2cpp: void CustomLogic_CustomLogicCompiler_FileRange__set_Type (CustomLogic_CustomLogicCompiler_FileRange_o* __this, int32_t value, const MethodInfo* method);
// 0x18111c9c0

void
CustomLogic_CustomLogicCompiler_FileRange__set_Type(CustomLogic_CustomLogicCompiler_FileRange_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._Type_k__BackingField.fields._state = (uint32_t)value.fields._state;
  return;
}


// CustomLogic.CustomLogicCompiler.FileRange$$get_StartLine
// il2cpp: int32_t CustomLogic_CustomLogicCompiler_FileRange__get_StartLine (CustomLogic_CustomLogicCompiler_FileRange_o* __this, const MethodInfo* method);
// 0x180d23ec0

int32_t
CustomLogic_CustomLogicCompiler_FileRange__get_StartLine(CustomLogic_CustomLogicCompiler_FileRange_o* __this, MethodInfo* method)

{
  return (__this->fields)._StartLine_k__BackingField;
}


// CustomLogic.CustomLogicCompiler.FileRange$$set_StartLine
// il2cpp: void CustomLogic_CustomLogicCompiler_FileRange__set_StartLine (CustomLogic_CustomLogicCompiler_FileRange_o* __this, int32_t value, const MethodInfo* method);
// 0x180d23f80

void
CustomLogic_CustomLogicCompiler_FileRange__set_StartLine(CustomLogic_CustomLogicCompiler_FileRange_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._StartLine_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicCompiler.FileRange$$get_EndLine
// il2cpp: int32_t CustomLogic_CustomLogicCompiler_FileRange__get_EndLine (CustomLogic_CustomLogicCompiler_FileRange_o* __this, const MethodInfo* method);
// 0x180a4c170

int32_t
CustomLogic_CustomLogicCompiler_FileRange__get_EndLine(CustomLogic_CustomLogicCompiler_FileRange_o* __this, MethodInfo* method)

{
  return (__this->fields)._EndLine_k__BackingField;
}


// CustomLogic.CustomLogicCompiler.FileRange$$set_EndLine
// il2cpp: void CustomLogic_CustomLogicCompiler_FileRange__set_EndLine (CustomLogic_CustomLogicCompiler_FileRange_o* __this, int32_t value, const MethodInfo* method);
// 0x180e4c6e0

void
CustomLogic_CustomLogicCompiler_FileRange__set_EndLine(CustomLogic_CustomLogicCompiler_FileRange_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._EndLine_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicCompiler.FileRange$$get_LineCount
// il2cpp: int32_t CustomLogic_CustomLogicCompiler_FileRange__get_LineCount (CustomLogic_CustomLogicCompiler_FileRange_o* __this, const MethodInfo* method);
// 0x180bdb280

int32_t
CustomLogic_CustomLogicCompiler_FileRange__get_LineCount(CustomLogic_CustomLogicCompiler_FileRange_o* __this, MethodInfo* method)

{
  return (__this->fields)._LineCount_k__BackingField;
}


// CustomLogic.CustomLogicCompiler.FileRange$$set_LineCount
// il2cpp: void CustomLogic_CustomLogicCompiler_FileRange__set_LineCount (CustomLogic_CustomLogicCompiler_FileRange_o* __this, int32_t value, const MethodInfo* method);
// 0x180d23ef0

void
CustomLogic_CustomLogicCompiler_FileRange__set_LineCount(CustomLogic_CustomLogicCompiler_FileRange_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields).m_RolloverSize = value;
  return;
}


// CustomLogic.CustomLogicCompiler.FileRange$$get_MapLogicOffset
// il2cpp: int32_t CustomLogic_CustomLogicCompiler_FileRange__get_MapLogicOffset (CustomLogic_CustomLogicCompiler_FileRange_o* __this, const MethodInfo* method);
// 0x180585030

int32_t
CustomLogic_CustomLogicCompiler_FileRange__get_MapLogicOffset(CustomLogic_CustomLogicCompiler_FileRange_o* __this, MethodInfo* method)

{
  return (__this->fields)._MapLogicOffset_k__BackingField;
}


// CustomLogic.CustomLogicCompiler.FileRange$$set_MapLogicOffset
// il2cpp: void CustomLogic_CustomLogicCompiler_FileRange__set_MapLogicOffset (CustomLogic_CustomLogicCompiler_FileRange_o* __this, int32_t value, const MethodInfo* method);
// 0x180585090

void
CustomLogic_CustomLogicCompiler_FileRange__set_MapLogicOffset(CustomLogic_CustomLogicCompiler_FileRange_o* __this, int32_t value, MethodInfo* method)

{
  (__this->fields)._MapLogicOffset_k__BackingField = value;
  return;
}


// CustomLogic.CustomLogicCompiler.FileRange$$.ctor
// il2cpp: void CustomLogic_CustomLogicCompiler_FileRange___ctor (CustomLogic_CustomLogicCompiler_FileRange_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicCompiler_FileRange___ctor(CustomLogic_CustomLogicCompiler_FileRange_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCompiler.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCompiler___c___cctor (const MethodInfo* method);
// 0x1820b5140

void CustomLogic_CustomLogicCompiler___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler___c_o *__this;
  
  if (Il2CppMethodInitialized_1843468ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler_c);
    Il2CppMethodInitialized_1843468ed = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCompiler_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCompiler_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicCompiler.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCompiler___c___ctor (CustomLogic_CustomLogicCompiler___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicCompiler___c___ctor(CustomLogic_CustomLogicCompiler___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCompiler.<>c$$<Compile>b__6_0
// il2cpp: int32_t CustomLogic_CustomLogicCompiler___c___Compile_b__6_0 (CustomLogic_CustomLogicCompiler___c_o* __this, CustomLogic_CustomLogicSourceFile_o* f, const MethodInfo* method);
// 0x181e7b8a0

int32_t CustomLogic_CustomLogicCompiler___c___Compile_b__6_0
                  (CustomLogic_CustomLogicCompiler___c_o *__this,CustomLogic_CustomLogicSourceFile_o *f,
                  MethodInfo *method)

{
  if (f != (CustomLogic_CustomLogicSourceFile_o *)0x0) {
    return (f->fields)._Type_k__BackingField;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCompiler.<>c$$<GetBaseLogicOffset>b__19_0
// il2cpp: bool CustomLogic_CustomLogicCompiler___c___GetBaseLogicOffset_b__19_0 (CustomLogic_CustomLogicCompiler___c_o* __this, CustomLogic_CustomLogicCompiler_FileRange_o* r, const MethodInfo* method);
// 0x1820ac740

bool CustomLogic_CustomLogicCompiler___c___GetBaseLogicOffset_b__19_0
               (CustomLogic_CustomLogicCompiler___c_o *__this,CustomLogic_CustomLogicCompiler_FileRange_o *r,
               MethodInfo *method)

{
  if (r != (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0) {
    return (r->fields)._Type_k__BackingField == 1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$.ctor
// il2cpp: void CustomLogic_CustomLogicCompiler__GetFileInfo_d__13___ctor (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x18139b890

void
CustomLogic_CustomLogicCompiler__GetFileInfo_d__13___ctor(CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, int32_t __1__state, MethodInfo* method)

{
  int32_t iVar1;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  *(int32_t *)&(__this->fields).__3__element = iVar1;
  return;
}


// CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.IDisposable.Dispose
// il2cpp: void CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_IDisposable_Dispose (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, const MethodInfo* method);
// 0x1820ab9c0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820aba24: lea rcx, [rsp + 0x30]
// asm:   0x1820aba29: call 0x18208cf80  ; il2cpp_runtime_helper_18208cf80()
// asm:   0x1820aba2e: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820aba33: test rcx, rcx
// asm:   0x1820aba36: jne 0x1820aba3e
// asm:   0x1820aba3e: call 0x1804171b0  ; il2cpp_codegen_rethrow()

void CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_IDisposable_Dispose
               (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o *__this,MethodInfo *method)

{
  int iVar1;
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 == -3) || (iVar1 == 1)) {
    if (Il2CppMethodInitialized_1843468ef == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCompiler_FileRange_Dispose)
      ;
      Il2CppMethodInitialized_1843468ef = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCompiler_FileRange_Dispose);
  }
  return;
}


// CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$MoveNext
// il2cpp: bool CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__MoveNext (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, const MethodInfo* method);
// 0x1820ab660
// eh: try 0x1820ab6c5..0x1820ab873 -> pad 0x183315a20 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820ab84a: mov rbx, qword ptr [rsp + 0x38]
// asm:   0x1820ab84f: test rbx, rbx
// asm:   0x1820ab852: jne 0x1820ab873
// asm:   0x1820ab854: movzx eax, byte ptr [rsp + 0x80]
// asm:   0x1820ab873: lea rcx, [rsp + 0x40]
// asm:   0x1820ab878: call 0x18208cfd0  ; il2cpp_runtime_helper_18208cfd0()
// asm:   0x1820ab87d: mov rcx, rbx
// asm:   0x1820ab880: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

bool CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__MoveNext
               (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicCompiler_o *pCVar2;
  System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *__this_00;
  CustomLogic_CustomLogicCompiler_FileRange_o *pCVar3;
  bool bVar4;
  undefined1 local_20 [16];
  Il2CppObject *local_10;
  
  if (Il2CppMethodInitialized_1843468ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCompiler_FileRange_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCompiler_FileRange_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_ValueTuple_string_CustomLogicSourceType_int_int_ctor);
    Il2CppMethodInitialized_1843468ee = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    pCVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if (pCVar2 == (CustomLogic_CustomLogicCompiler_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = (pCVar2->fields)._fileRanges;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *)0x0) {
      ThrowNullReferenceException();
    }
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_20,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_GetEnumerator);
    (__this->fields).__7__wrap1.fields._list = (System_Collections_Generic_List_T__o *)local_20._0_8_;
    (__this->fields).__7__wrap1.fields._index = local_20._8_4_;
    (__this->fields).__7__wrap1.fields._version = local_20._12_4_;
    (__this->fields).__7__wrap1.fields._current = (CustomLogic_CustomLogicCompiler_FileRange_o *)local_10;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__7__wrap1,(void *)0x0);
  }
  else if (iVar1 != 1) {
    return false;
  }
  (__this->fields).__1__state = -3;
  bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                    ((System_Collections_Generic_List_Enumerator_object__o *)&(__this->fields).__7__wrap1,
                     (MethodInfo_153A2A0 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCompiler_FileRange_MoveNext
                    );
  if (bVar4) {
    pCVar3 = (__this->fields).__7__wrap1.fields._current;
    if (pCVar3 == (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0) {
      ThrowNullReferenceException();
    }
    local_20._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_20._8_4_ = 0;
    local_20._12_4_ = 0;
    local_10 = (Il2CppObject *)0x0;
    System_ValueTuple_object__Int32Enum__int__int____ctor
              ((System_ValueTuple_object__Int32Enum__int__int__o *)local_20,
               (Il2CppObject *)(pCVar3->fields)._Name_k__BackingField,(pCVar3->fields)._Type_k__BackingField,
               (pCVar3->fields)._StartLine_k__BackingField,(pCVar3->fields)._EndLine_k__BackingField,
               (MethodInfo_1055DD0 *)MethodInfo_System_ValueTuple_string_CustomLogicSourceType_int_int_ctor);
    (__this->fields).__2__current.fields.Item1 = (System_String_o *)local_20._0_8_;
    (__this->fields).__2__current.fields.Item2 = local_20._8_4_;
    (__this->fields).__2__current.fields.Item3 = local_20._12_4_;
    *(Il2CppObject **)&(__this->fields).__2__current.fields.Item4 = local_10;
    Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    bVar4 = true;
  }
  else {
    if (Il2CppMethodInitialized_1843468ef == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCompiler_FileRange_Dispose)
      ;
      Il2CppMethodInitialized_1843468ef = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCompiler_FileRange_Dispose);
    (__this->fields).__7__wrap1.fields._list = (System_Collections_Generic_List_T__o *)0x0;
    (__this->fields).__7__wrap1.fields._index = 0;
    (__this->fields).__7__wrap1.fields._version = 0;
    (__this->fields).__7__wrap1.fields._current = (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0;
    bVar4 = false;
  }
  return bVar4;
}


// CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$<>m__Finally1
// il2cpp: void CustomLogic_CustomLogicCompiler__GetFileInfo_d__13____m__Finally1 (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, const MethodInfo* method);
// 0x1820aba50

void CustomLogic_CustomLogicCompiler__GetFileInfo_d__13____m__Finally1
               (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843468ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCompiler_FileRange_Dispose);
    Il2CppMethodInitialized_1843468ef = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator_object___Dispose
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__7__wrap1,
             MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicCompiler_FileRange_Dispose);
  return;
}


// CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.Collections.Generic.IEnumerator<(System.StringName,CustomLogic.CustomLogicSourceTypeType,System.Int32StartLine,System.Int32EndLine)>.get_Current
// il2cpp: System_ValueTuple_string__CustomLogicSourceType__int__int__o CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_Collections_Generic_IEnumerator__System_StringName_CustomLogic_CustomLogicSourceTypeType_System_Int32StartLine_System_Int32EndLine___get_Current (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, const MethodInfo* method);
// 0x181164f60

System_ValueTuple_string__CustomLogicSourceType__int__int__o
CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_Collections_Generic_IEnumerator__System_StringName_CustomLogic_CustomLogicSourceTypeType_System_Int32StartLine_System_Int32EndLine___get_Current(CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, MethodInfo* method)

{
  void *pvVar1;
  int32_t iVar2;
  undefined4 uVar3;
  
  pvVar1 = __this[1].fields.m_Array.fields.m_Buffer;
  iVar2 = __this[1].fields.m_Array.fields.m_Length;
  uVar3 = *(undefined4 *)&__this[1].fields.m_Array.fields.field_0xc;
  *(Il2CppObject **)&__return_storage_ptr__->fields = (__this->fields).value;
  (__return_storage_ptr__->fields).jobHandle.fields.jobGroup = (uint64_t)pvVar1;
  (__return_storage_ptr__->fields).jobHandle.fields.version = iVar2;
  *(undefined4 *)&(__return_storage_ptr__->fields).jobHandle.fields.field_0xc = uVar3;
  return __return_storage_ptr__;
}


// CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_Collections_IEnumerator_Reset (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, const MethodInfo* method);
// 0x1820ab930

void CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_Collections_IEnumerator_Reset
               (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomLogic_CustomLogicCompiler_GetFileInfo_d__13_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_Collections_IEnumerator_get_Current (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, const MethodInfo* method);
// 0x1820ab970

Il2CppObject *
CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_Collections_IEnumerator_get_Current
          (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o *__this,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_String_o *local_28;
  undefined8 uStack_20;
  undefined8 local_18;
  
  if (Il2CppMethodInitialized_1843468f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_ValueTuple_string_CustomLogicSourceType_int_int);
    Il2CppMethodInitialized_1843468f0 = '\x01';
  }
  local_28 = (__this->fields).__2__current.fields.Item1;
  uStack_20._0_4_ = (__this->fields).__2__current.fields.Item2;
  uStack_20._4_4_ = (__this->fields).__2__current.fields.Item3;
  local_18 = *(undefined8 *)&(__this->fields).__2__current.fields.Item4;
  pIVar1 = il2cpp_value_box((Il2CppClass *)TypeInfo_System_ValueTuple_string_CustomLogicSourceType_int_int,
                       &local_28);
  return pIVar1;
}


// CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.Collections.Generic.IEnumerable<(System.StringName,CustomLogic.CustomLogicSourceTypeType,System.Int32StartLine,System.Int32EndLine)>.GetEnumerator
// il2cpp: System_Collections_Generic_IEnumerator_ValueTuple_string__CustomLogicSourceType__int__int___o* CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_Collections_Generic_IEnumerable__System_StringName_CustomLogic_CustomLogicSourceTypeType_System_Int32StartLine_System_Int32EndLine___GetEnumerator (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, const MethodInfo* method);
// 0x1820ab890

System_Collections_Generic_IEnumerator_ValueTuple_string__CustomLogicSourceType__int__int___o*
CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_Collections_Generic_IEnumerable__System_StringName_CustomLogic_CustomLogicSourceTypeType_System_Int32StartLine_System_Int32EndLine___GetEnumerator(CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, MethodInfo* method)

{
  int iVar1;
  CustomLogic_CustomLogicCompiler_o *value;
  int32_t iVar2;
  CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o *__this_00;
  
  if (Il2CppMethodInitialized_1843468f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler_GetFileInfo_d__13);
    Il2CppMethodInitialized_1843468f1 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler_GetFileInfo_d__13);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicCompiler.<GetFileInfo>d__13$$System.Collections.IEnumerable.GetEnumerator
// il2cpp: System_Collections_IEnumerator_o* CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_Collections_IEnumerable_GetEnumerator (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o* __this, const MethodInfo* method);
// 0x1820ab890

System_Collections_IEnumerator_o *
CustomLogic_CustomLogicCompiler__GetFileInfo_d__13__System_Collections_IEnumerable_GetEnumerator
          (CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicCompiler_o *value;
  int32_t iVar2;
  CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o *__this_00;
  
  if (Il2CppMethodInitialized_1843468f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler_GetFileInfo_d__13);
    Il2CppMethodInitialized_1843468f1 = '\x01';
  }
  if ((__this->fields).__1__state == -2) {
    iVar1 = (__this->fields).__l__initialThreadId;
    iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
    if (iVar1 == iVar2) {
      (__this->fields).__1__state = 0;
      return (System_Collections_IEnumerator_o *)__this;
    }
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler_GetFileInfo_d__13);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  iVar2 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar2;
  value = (__this->fields).__4__this;
  (__this_00->fields).__4__this = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,value);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomLogic.CustomLogicCompiler$$AddSourceFile
// il2cpp: void CustomLogic_CustomLogicCompiler__AddSourceFile (CustomLogic_CustomLogicCompiler_o* __this, CustomLogic_CustomLogicSourceFile_o* file, const MethodInfo* method);
// 0x18209d2f0

void CustomLogic_CustomLogicCompiler__AddSourceFile
               (CustomLogic_CustomLogicCompiler_o *__this,CustomLogic_CustomLogicSourceFile_o *file,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicSourceFile__o *__this_00;
  CustomLogic_CustomLogicSourceFile_array *pCVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_1843468e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicSourceFile_Add);
    Il2CppMethodInitialized_1843468e1 = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_CustomLogicSourceFile_Add;
  __this_00 = (__this->fields)._sourceFiles;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicSourceFile__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicSourceFile_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if ((uint)pCVar3->max_length <= uVar2) {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)file,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        return;
      }
      (__this_00->fields)._size = uVar2 + 1;
      if (uVar2 < (uint)pCVar3->max_length) {
        pCVar3->m_Items[(int)uVar2] = file;
        Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar2,file);
        return;
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCompiler$$AddSourceFiles
// il2cpp: void CustomLogic_CustomLogicCompiler__AddSourceFiles (CustomLogic_CustomLogicCompiler_o* __this, System_Collections_Generic_IEnumerable_CustomLogicSourceFile__o* files, const MethodInfo* method);
// 0x18209d3a0

void CustomLogic_CustomLogicCompiler__AddSourceFiles
               (CustomLogic_CustomLogicCompiler_o *__this,
               System_Collections_Generic_IEnumerable_CustomLogicSourceFile__o *files,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicSourceFile__o *__this_00;
  
  if (Il2CppMethodInitialized_1843468e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicSourceFile_AddRange);
    Il2CppMethodInitialized_1843468e2 = '\x01';
  }
  __this_00 = (__this->fields)._sourceFiles;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicSourceFile__o *)0x0) {
    System_Collections_Generic_List_object___AddRange
              ((System_Collections_Generic_List_object__o *)__this_00,
               (System_Collections_Generic_IEnumerable_T__o *)files,
               (MethodInfo_93DA30 *)MethodInfo_System_Collections_Generic_List_CustomLogicSourceFile_AddRange)
    ;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCompiler$$Compile
// il2cpp: System_String_o* CustomLogic_CustomLogicCompiler__Compile (CustomLogic_CustomLogicCompiler_o* __this, const MethodInfo* method);
// 0x18209d4b0
// eh: try 0x18209d720..0x18209d975 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209d8ac: mov rdx, qword ptr [rip + 0x1fdd59d]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicSourceFile_Dispose
// asm:   0x18209d8b3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18209d8b8: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18209d8bd: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18209d8c2: test rcx, rcx
// asm:   0x18209d8c5: jne 0x18209d975
// asm:   0x18209d8cb: mov r13, qword ptr [rsp + 0x90]
// asm:   0x18209d8d3: mov r14, qword ptr [rsp + 0xa0]
// asm:   0x18209d975: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_String_o *
CustomLogic_CustomLogicCompiler__Compile(CustomLogic_CustomLogicCompiler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicSourceFile__o *pSVar3;
  Il2CppObject *object;
  System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *pSVar4;
  CustomLogic_CustomLogicCompiler_FileRange_array *pCVar5;
  System_String_array *pSVar6;
  MethodInfo *pMVar7;
  CustomLogic_CustomLogicSourceFile_o *pCVar8;
  bool bVar9;
  int32_t iVar10;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_00;
  System_Linq_IOrderedEnumerable_TSource__o *source;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_Collections_Generic_List_string__o *__this_02;
  CustomLogic_CustomLogicCompiler_FileRange_o *item;
  System_String_o *pSVar11;
  int iVar12;
  undefined1 local_60 [16];
  CustomLogic_CustomLogicSourceFile_o *local_50;
  undefined1 local_48 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_40;
  CustomLogic_CustomLogicSourceFile_o *local_38;
  
  if (Il2CppMethodInitialized_1843468e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_OrderBy_CustomLogicSourceFile_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_ToList_CustomLogicSourceFile);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicSourceFile_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicSourceFile_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicSourceFile_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler_FileRange);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicSourceFile_int);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicSourceFile_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicSourceFile_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCompiler_c_Compile_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler_c);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_1843468e3 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_38 = (CustomLogic_CustomLogicSourceFile_o *)0x0;
  pSVar3 = (__this->fields)._sourceFiles;
  if ((TypeInfo_CustomLogic_CustomLogicCompiler_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler_c);
  }
  __this_00 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
              TypeInfo_CustomLogic_CustomLogicCompiler_c->static_fields->__9__6_0;
  if (__this_00 == (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCompiler_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCompiler_c->static_fields->__9;
    __this_00 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicSourceFile_int);
    System_Func_object__int____ctor
              (__this_00,object,(intptr_t)MethodInfo_CustomLogic_CustomLogicCompiler_c_Compile_b__6_0,
               (MethodInfo_AF4D50 *)0x0);
    TypeInfo_CustomLogic_CustomLogicCompiler_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicSourceFile__int__o *)__this_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCompiler_c->static_fields->__9__6_0,__this_00);
  }
  source = System_Linq_Enumerable__OrderBy_object__int_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar3,
                      (System_Func_TSource__TKey__o *)__this_00,
                      (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_CustomLogicSourceFile_int
                     );
  __this_01 = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_CustomLogicSourceFile);
  pSVar4 = (__this->fields)._fileRanges;
  if (pSVar4 != (System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *)0x0) {
    piVar1 = &(pSVar4->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar10 = (pSVar4->fields)._size;
    (pSVar4->fields)._size = 0;
    if (0 < iVar10) {
      System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar10,(MethodInfo *)0x0);
    }
    __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_02,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if (__this_01 != (System_Collections_Generic_List_TSource__o *)0x0) {
      iVar12 = 0;
      System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_60,
                 (System_Collections_Generic_List_T__o *)__this_01,
                 (MethodInfo_91F180 *)
                 MethodInfo_System_Collections_Generic_List_CustomLogicSourceFile_GetEnumerator);
      local_48 = (undefined1  [8])local_60._0_8_;
      pUStack_40 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_60._8_8_;
      local_38 = local_50;
      local_60._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_60._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48;
      while( true ) {
        bVar9 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                           (MethodInfo_153A2A0 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicSourceFile_MoveNext
                          );
        pCVar8 = local_38;
        if (!bVar9) break;
        if (local_38 == (CustomLogic_CustomLogicSourceFile_o *)0x0) {
          ThrowNullReferenceException();
        }
        iVar10 = CustomLogic_CustomLogicSourceFile__get_LineCount(local_38,(MethodInfo *)0x0);
        item = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler_FileRange);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)item,(MethodInfo *)0x0);
        if (item == (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = (pCVar8->fields)._Name_k__BackingField;
        (item->fields)._Name_k__BackingField = pSVar11;
        Il2CppCodeGenWriteBarrier(&(item->fields)._Name_k__BackingField,pSVar11);
        (item->fields)._Type_k__BackingField = (pCVar8->fields)._Type_k__BackingField;
        (item->fields)._StartLine_k__BackingField = iVar12;
        (item->fields)._EndLine_k__BackingField = iVar10 + -1 + iVar12;
        (item->fields)._LineCount_k__BackingField = iVar10;
        (item->fields)._MapLogicOffset_k__BackingField = (pCVar8->fields)._MapLogicOffset_k__BackingField;
        pMVar7 = MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_Add;
        pSVar4 = (__this->fields)._fileRanges;
        if (pSVar4 == (System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        pCVar5 = (pSVar4->fields)._items;
        if (pCVar5 == (CustomLogic_CustomLogicCompiler_FileRange_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar2 = (pSVar4->fields)._size;
        if (uVar2 < (uint)pCVar5->max_length) {
          (pSVar4->fields)._size = uVar2 + 1;
          if ((uint)pCVar5->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pCVar5->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pCVar5->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar4,(Il2CppObject *)item,
                     (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
        }
        (pCVar8->fields)._StartLine_k__BackingField = iVar12;
        (pCVar8->fields)._EndLine_k__BackingField = iVar10 + -1 + iVar12;
        pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this_02 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar11 = (pCVar8->fields)._Content_k__BackingField;
        piVar1 = &(__this_02->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this_02->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar2 = (__this_02->fields)._size;
        if (uVar2 < (uint)pSVar6->max_length) {
          (__this_02->fields)._size = uVar2 + 1;
          if ((uint)pSVar6->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar6->m_Items[(int)uVar2] = pSVar11;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar2,pSVar11);
          iVar12 = iVar12 + iVar10;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)pSVar11,
                     (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
          iVar12 = iVar12 + iVar10;
        }
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48,
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicSourceFile_Dispose);
      pSVar11 = System_String__Join_196ecd0
                          ("\n",(System_Collections_Generic_IEnumerable_string__o *)__this_02
                           ,(MethodInfo *)0x0);
      (__this->fields)._combinedSource = pSVar11;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._combinedSource,pSVar11);
      pSVar3 = (__this->fields)._sourceFiles;
      if (pSVar3 != (System_Collections_Generic_List_CustomLogicSourceFile__o *)0x0) {
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        iVar10 = (pSVar3->fields)._size;
        (pSVar3->fields)._size = 0;
        if (0 < iVar10) {
          System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar10,(MethodInfo *)0x0);
        }
        return (__this->fields)._combinedSource;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCompiler$$GetCombinedSource
// il2cpp: System_String_o* CustomLogic_CustomLogicCompiler__GetCombinedSource (CustomLogic_CustomLogicCompiler_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
CustomLogic_CustomLogicCompiler__GetCombinedSource(CustomLogic_CustomLogicCompiler_o* __this, MethodInfo* method)

{
  return (__this->fields)._combinedSource;
}


// CustomLogic.CustomLogicCompiler$$FormatLineNumber
// il2cpp: System_String_o* CustomLogic_CustomLogicCompiler__FormatLineNumber (CustomLogic_CustomLogicCompiler_o* __this, int32_t globalLine, const MethodInfo* method);
// 0x18209da50

System_String_o *
CustomLogic_CustomLogicCompiler__FormatLineNumber
          (CustomLogic_CustomLogicCompiler_o *__this,int32_t globalLine,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_FileRange_o *pCVar1;
  System_String_o *pSVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *arg2;
  int iVar4;
  int32_t local_res10 [4];
  int local_res20 [2];
  int local_28 [4];
  
  local_res10[0] = globalLine;
  if (Il2CppMethodInitialized_1843468e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"{0} ({1}:{2})");
    il2cpp_codegen_initialize_runtime_metadata(&"{0} (Internal C# Bindings)");
    Il2CppMethodInitialized_1843468e4 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicCompiler__FindFileRange(__this,local_res10[0],(MethodInfo *)0x0);
  if (pCVar1 == (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0) {
    pSVar2 = System_Int32__ToString(local_res10,(MethodInfo *)0x0);
    return pSVar2;
  }
  local_res20[0] = local_res10[0];
  if ((pCVar1->fields)._Type_k__BackingField != 0) {
    iVar4 = local_res10[0] - (pCVar1->fields)._StartLine_k__BackingField;
    if ((pCVar1->fields)._Type_k__BackingField == 3) {
      pIVar3 = il2cpp_value_box(g_data_184354e08,local_res20);
      local_28[0] = (pCVar1->fields)._MapLogicOffset_k__BackingField + 1 + iVar4;
    }
    else {
      pIVar3 = il2cpp_value_box(g_data_184354e08,local_res20);
      local_28[0] = iVar4 + 1;
    }
    pSVar2 = (pCVar1->fields)._Name_k__BackingField;
    arg2 = il2cpp_value_box(g_data_184354e08,local_28);
    pSVar2 = System_String__Format_196d050
                       ("{0} ({1}:{2})",pIVar3,(Il2CppObject *)pSVar2,arg2,(MethodInfo *)0x0);
    return pSVar2;
  }
  pIVar3 = il2cpp_value_box(g_data_184354e08,local_res20);
  pSVar2 = System_String__Format("{0} (Internal C# Bindings)",pIVar3,(MethodInfo *)0x0);
  return pSVar2;
}


// CustomLogic.CustomLogicCompiler$$FindFileRange
// il2cpp: CustomLogic_CustomLogicCompiler_FileRange_o* CustomLogic_CustomLogicCompiler__FindFileRange (CustomLogic_CustomLogicCompiler_o* __this, int32_t globalLine, const MethodInfo* method);
// 0x18209d980
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18209d9da: nop word ptr [rax + rax]

CustomLogic_CustomLogicCompiler_FileRange_o *
CustomLogic_CustomLogicCompiler__FindFileRange
          (CustomLogic_CustomLogicCompiler_o *__this,int32_t globalLine,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *pSVar1;
  int iVar2;
  int iVar3;
  CustomLogic_CustomLogicCompiler_FileRange_o *pCVar4;
  int iVar5;
  int iVar6;
  
  if (Il2CppMethodInitialized_1843468e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_get_Item);
    Il2CppMethodInitialized_1843468e5 = '\x01';
  }
  pSVar1 = (__this->fields)._fileRanges;
  if (pSVar1 == (System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *)0x0) {
label_18209da47:
    ThrowNullReferenceException();
  }
  iVar6 = 0;
  iVar5 = (pSVar1->fields)._size + -1;
  if (-1 < iVar5) {
    do {
      pSVar1 = (__this->fields)._fileRanges;
      if (pSVar1 == (System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *)0x0)
      goto label_18209da47;
      iVar3 = iVar5 - iVar6;
      if (iVar3 < 0) {
        iVar3 = iVar3 + 1;
      }
      iVar3 = (iVar3 >> 1) + iVar6;
      pCVar4 = (CustomLogic_CustomLogicCompiler_FileRange_o *)
               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         ((System_Collections_Generic_List_object__o *)pSVar1,iVar3,
                          (MethodInfo_92B830 *)
                          MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_get_Item);
      if (pCVar4 == (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0) goto label_18209da47;
      if (((pCVar4->fields)._StartLine_k__BackingField <= globalLine) &&
         (globalLine <= (pCVar4->fields)._EndLine_k__BackingField)) {
        return pCVar4;
      }
      iVar2 = iVar3 + 1;
      if (globalLine < (pCVar4->fields)._StartLine_k__BackingField) {
        iVar2 = iVar6;
        iVar5 = iVar3 + -1;
      }
      iVar6 = iVar2;
    } while (iVar6 <= iVar5);
  }
  return (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0;
}


// CustomLogic.CustomLogicCompiler$$GetFileNameForLine
// il2cpp: System_String_o* CustomLogic_CustomLogicCompiler__GetFileNameForLine (CustomLogic_CustomLogicCompiler_o* __this, int32_t globalLine, const MethodInfo* method);
// 0x18209dd20

System_String_o *
CustomLogic_CustomLogicCompiler__GetFileNameForLine
          (CustomLogic_CustomLogicCompiler_o *__this,int32_t globalLine,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_FileRange_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCompiler__FindFileRange(__this,globalLine,(MethodInfo *)0x0);
  if (pCVar1 != (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0) {
    return (pCVar1->fields)._Name_k__BackingField;
  }
  return (System_String_o *)0x0;
}


// CustomLogic.CustomLogicCompiler$$GetFileTypeForLine
// il2cpp: System_Nullable_CustomLogicSourceType__o CustomLogic_CustomLogicCompiler__GetFileTypeForLine (CustomLogic_CustomLogicCompiler_o* __this, int32_t globalLine, const MethodInfo* method);
// 0x18209dd40

System_Nullable_CustomLogicSourceType__o
CustomLogic_CustomLogicCompiler__GetFileTypeForLine
          (CustomLogic_CustomLogicCompiler_o *__this,int32_t globalLine,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_FileRange_o *pCVar1;
  System_Nullable_CustomLogicSourceType__Fields SVar2;
  System_Nullable_CustomLogicSourceType__Fields local_res20;
  
  if (Il2CppMethodInitialized_1843468e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    Il2CppMethodInitialized_1843468e6 = '\x01';
  }
  pCVar1 = CustomLogic_CustomLogicCompiler__FindFileRange(__this,globalLine,(MethodInfo *)0x0);
  if (pCVar1 != (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0) {
    local_res20.hasValue = false;
    local_res20._1_3_ = 0;
    local_res20.value = 0;
    System_Data_SqlTypes_SqlInt32___ctor_ae2660
              ((System_Data_SqlTypes_SqlInt32_o *)&local_res20,(pCVar1->fields)._Type_k__BackingField,
               MethodInfo_System_Nullable_CustomLogicSourceType_ctor);
    return (System_Nullable_CustomLogicSourceType__o)local_res20;
  }
  SVar2.hasValue = false;
  SVar2._1_3_ = 0;
  SVar2.value = 0;
  return (System_Nullable_CustomLogicSourceType__o)SVar2;
}


// CustomLogic.CustomLogicCompiler$$GetLocalLineNumber
// il2cpp: int32_t CustomLogic_CustomLogicCompiler__GetLocalLineNumber (CustomLogic_CustomLogicCompiler_o* __this, int32_t globalLine, const MethodInfo* method);
// 0x18209ddc0

int32_t CustomLogic_CustomLogicCompiler__GetLocalLineNumber
                  (CustomLogic_CustomLogicCompiler_o *__this,int32_t globalLine,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_FileRange_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCompiler__FindFileRange(__this,globalLine,(MethodInfo *)0x0);
  if (pCVar1 == (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0) {
    return -1;
  }
  return (globalLine - (pCVar1->fields)._StartLine_k__BackingField) + 1;
}


// CustomLogic.CustomLogicCompiler$$GetFileInfo
// il2cpp: System_Collections_Generic_IEnumerable_ValueTuple_string__CustomLogicSourceType__int__int___o* CustomLogic_CustomLogicCompiler__GetFileInfo (CustomLogic_CustomLogicCompiler_o* __this, const MethodInfo* method);
// 0x18209dca0

System_Collections_Generic_IEnumerable_ValueTuple_string__CustomLogicSourceType__int__int___o *
CustomLogic_CustomLogicCompiler__GetFileInfo(CustomLogic_CustomLogicCompiler_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  CustomLogic_CustomLogicCompiler__GetFileInfo_d__13_o *__this_00;
  
  if (Il2CppMethodInitialized_1843468e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler_GetFileInfo_d__13);
    Il2CppMethodInitialized_1843468e7 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler_GetFileInfo_d__13);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = -2;
  iVar1 = System_Diagnostics_TraceEventCache__GetThreadId((MethodInfo *)0x0);
  (__this_00->fields).__l__initialThreadId = iVar1;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  return (System_Collections_Generic_IEnumerable_ValueTuple_string__CustomLogicSourceType__int__int___o *)
         __this_00;
}


// CustomLogic.CustomLogicCompiler$$get_FileCount
// il2cpp: int32_t CustomLogic_CustomLogicCompiler__get_FileCount (CustomLogic_CustomLogicCompiler_o* __this, const MethodInfo* method);
// 0x18209deb0

int32_t CustomLogic_CustomLogicCompiler__get_FileCount
                  (CustomLogic_CustomLogicCompiler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *pSVar1;
  
  if (Il2CppMethodInitialized_1843468e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_get_Count);
    Il2CppMethodInitialized_1843468e8 = '\x01';
  }
  pSVar1 = (__this->fields)._fileRanges;
  if (pSVar1 != (System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *)0x0) {
    return (pSVar1->fields)._size;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCompiler$$get_TotalLines
// il2cpp: int32_t CustomLogic_CustomLogicCompiler__get_TotalLines (CustomLogic_CustomLogicCompiler_o* __this, const MethodInfo* method);
// 0x18209def0

int32_t CustomLogic_CustomLogicCompiler__get_TotalLines
                  (CustomLogic_CustomLogicCompiler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *__this_00;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843468e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_get_Item);
    Il2CppMethodInitialized_1843468e9 = '\x01';
  }
  __this_00 = (__this->fields)._fileRanges;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *)0x0) {
    if ((__this_00->fields)._size < 1) {
      return 0;
    }
    pIVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                       ((System_Collections_Generic_List_object__o *)__this_00,(__this_00->fields)._size + -1,
                        (MethodInfo_92B830 *)
                        MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_get_Item);
    if (pIVar1 != (Il2CppObject *)0x0) {
      return *(int *)&pIVar1[2].klass + 1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCompiler$$Clear
// il2cpp: void CustomLogic_CustomLogicCompiler__Clear (CustomLogic_CustomLogicCompiler_o* __this, const MethodInfo* method);
// 0x18209d400

void CustomLogic_CustomLogicCompiler__Clear(CustomLogic_CustomLogicCompiler_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_CustomLogicSourceFile__o *pSVar3;
  System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *pSVar4;
  
  if (Il2CppMethodInitialized_1843468ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicSourceFile_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_Clear);
    Il2CppMethodInitialized_1843468ea = '\x01';
  }
  pSVar3 = (__this->fields)._sourceFiles;
  if (pSVar3 != (System_Collections_Generic_List_CustomLogicSourceFile__o *)0x0) {
    iVar2 = (pSVar3->fields)._size;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    pSVar4 = (__this->fields)._fileRanges;
    if (pSVar4 != (System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *)0x0) {
      iVar2 = (pSVar4->fields)._size;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar4->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      (__this->fields)._combinedSource = (System_String_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._combinedSource,(void *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCompiler$$GetBaseLogicOffset
// il2cpp: int32_t CustomLogic_CustomLogicCompiler__GetBaseLogicOffset (CustomLogic_CustomLogicCompiler_o* __this, const MethodInfo* method);
// 0x18209db70

int32_t CustomLogic_CustomLogicCompiler__GetBaseLogicOffset
                  (CustomLogic_CustomLogicCompiler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *source;
  System_Func_CustomLogicCompiler_FileRange__bool__o *__this_00;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843468eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_CustomLogicCompiler_FileRange);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCompiler_FileRange_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicCompiler_c_GetBaseLogicOffset_b__19_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCompiler_c);
    Il2CppMethodInitialized_1843468eb = '\x01';
  }
  source = (__this->fields)._fileRanges;
  if ((TypeInfo_CustomLogic_CustomLogicCompiler_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler_c);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicCompiler_c->static_fields->__9__19_0;
  if (__this_00 == (System_Func_CustomLogicCompiler_FileRange__bool__o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCompiler_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCompiler_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCompiler_c->static_fields->__9;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCompiler_FileRange_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_00,pIVar1,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicCompiler_c_GetBaseLogicOffset_b__19_0,
               (MethodInfo_B61EB0 *)0x0);
    TypeInfo_CustomLogic_CustomLogicCompiler_c->static_fields->__9__19_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCompiler_c->static_fields->__9__19_0,__this_00)
    ;
  }
  pIVar1 = System_Linq_Enumerable__FirstOrDefault_object__6bd2c0
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)__this_00,
                      (MethodInfo_6BD2C0 *)
                      MethodInfo_System_Linq_Enumerable_FirstOrDefault_CustomLogicCompiler_FileRange);
  if (pIVar1 != (Il2CppObject *)0x0) {
    return *(int32_t *)((longlong)&pIVar1[1].monitor + 4);
  }
  return 0;
}


// CustomLogic.CustomLogicCompiler$$.ctor
// il2cpp: void CustomLogic_CustomLogicCompiler___ctor (CustomLogic_CustomLogicCompiler_o* __this, const MethodInfo* method);
// 0x18209ddf0

void CustomLogic_CustomLogicCompiler___ctor(CustomLogic_CustomLogicCompiler_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicSourceFile__o *__this_00;
  System_Collections_Generic_List_CustomLogicCompiler_FileRange__o *__this_01;
  
  if (Il2CppMethodInitialized_1843468ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicSourceFile_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicSourceFile);
    Il2CppMethodInitialized_1843468ec = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicSourceFile);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_CustomLogicSourceFile_ctor);
  (__this->fields)._sourceFiles = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._sourceFiles,__this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange
                        );
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)
             MethodInfo_System_Collections_Generic_List_CustomLogicCompiler_FileRange_ctor);
  (__this->fields)._fileRanges = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._fileRanges,__this_01);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


