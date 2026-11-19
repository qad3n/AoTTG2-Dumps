// Type: Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Diagnostics/GisketchUiPerfLog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog.Scope$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this, System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x5360900
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53609cc: jmp 0x53609e3
// asm:   0x53609f2: jmp 0x5360a4b

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
               (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *__this,System_String_o *area,
               System_String_o *detail,MethodInfo *method)

{
  char cVar1;
  System_Diagnostics_Stopwatch_o *__this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_StaticFields *pGVar2;
  System_String_o *area_00;
  bool bVar3;
  int64_t iVar4;
  System_String_o *detail_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075429af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"BEGIN ");
    Il2CppMethodInitialized_075429af = '\x01';
  }
  (__this->fields)._area = area;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields)._detail = detail;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._detail);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  (__this->fields)._enabled = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Enabled
  ;
  bVar3 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(area,(MethodInfo *)detail);
  (__this->fields)._hotLoop = bVar3;
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
  if (__this_00 == (System_Diagnostics_Stopwatch_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar4 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this_00,(MethodInfo *)0x0);
  (__this->fields)._startMs = iVar4;
  if ((__this->fields)._enabled == false) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields;
    cVar1 = pGVar2->LogBegins;
  }
  else {
    pGVar2 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields;
    cVar1 = pGVar2->LogBegins;
  }
  if (cVar1 == '\0') {
    if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      cVar1 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->VerboseHotLoops;
    }
    else {
      cVar1 = pGVar2->VerboseHotLoops;
    }
    if (cVar1 == '\0') {
      return;
    }
    if ((__this->fields)._hotLoop == false) {
      return;
    }
  }
  area_00 = (__this->fields)._area;
  detail_00 = System_String__Concat_52f0320("BEGIN ",(__this->fields)._detail,(MethodInfo *)0x0);
  method_00 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    method_00 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write(area_00,detail_00,method_00);
  return;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog.Scope$$Dispose
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this, const MethodInfo* method);
// 0x5360ae0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5360ba6: jmp 0x5360bbe
// asm:   0x5360bd0: jmp 0x5360ce2

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
               (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_Diagnostics_Stopwatch_o *__this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_StaticFields *pGVar3;
  System_String_o *area;
  long in_RAX;
  int64_t iVar4;
  System_String_array *values;
  System_String_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  long lVar6;
  long local_28;
  
  local_28 = in_RAX;
  if (Il2CppMethodInitialized_075429b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"ms)");
    il2cpp_codegen_initialize_runtime_metadata(&"END ");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    Il2CppMethodInitialized_075429b0 = '\x01';
  }
  if ((__this->fields)._enabled == false) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
  if (__this_00 != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar4 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this_00,(MethodInfo *)0x0);
    lVar6 = iVar4 - (__this->fields)._startMs;
    local_28 = lVar6;
    if ((__this->fields)._hotLoop != false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
        pGVar3 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields;
        cVar1 = pGVar3->VerboseHotLoops;
      }
      else {
        pGVar3 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields;
        cVar1 = pGVar3->VerboseHotLoops;
      }
      if (cVar1 == '\0') {
        if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
          iVar2 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->SlowElapsedMs;
        }
        else {
          iVar2 = pGVar3->SlowElapsedMs;
        }
        if (lVar6 < iVar2) {
          return;
        }
      }
    }
    area = (__this->fields)._area;
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "END ";
        Il2CppCodeGenWriteBarrier(values->m_Items);
        if ((values->max_length & 0xfffffffe) != 0) {
          values->m_Items[1] = (__this->fields)._detail;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = " (";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2);
            pSVar5 = System_Int64__ToString(&local_28,(MethodInfo *)0x0);
            if ((values->max_length & 0xfffffffc) != 0) {
              values->m_Items[3] = pSVar5;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "ms)";
                Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                pSVar5 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                method_00 = extraout_RDX;
                if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
                  method_00 = extraout_RDX_00;
                }
                Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write(area,pSVar5,method_00);
                return;
              }
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$NowMs
// il2cpp: int64_t Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs (const MethodInfo* method);
// 0x5351e10

int64_t Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs(MethodInfo *method)

{
  uint32_t uVar1;
  System_Diagnostics_Stopwatch_o *__this;
  int64_t iVar2;
  
  if (Il2CppMethodInitialized_075429aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    Il2CppMethodInitialized_075429aa = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    __this = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
  }
  else {
    __this = *(System_Diagnostics_Stopwatch_o **)
              ((long)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)->static_fields
              + 8);
  }
  if (__this == (System_Diagnostics_Stopwatch_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this,(MethodInfo *)0x0);
  return iVar2;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Mark
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark (System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x534df60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x534df93: jmp 0x534e038

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
               (System_String_o *area,System_String_o *detail,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  bool bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  MethodInfo *extraout_RDX_01;
  
  pMVar4 = (MethodInfo *)detail;
  if (Il2CppMethodInitialized_075429ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    Il2CppMethodInitialized_075429ab = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    cVar1 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Enabled;
  }
  else {
    cVar1 = *(char *)((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)->static_fields;
  }
  if (cVar1 == '\0') {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  bVar3 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(area,pMVar4);
  pMVar4 = extraout_RDX;
  if (bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      cVar1 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->VerboseHotLoops;
      pMVar4 = extraout_RDX_01;
    }
    else {
      cVar1 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->VerboseHotLoops;
    }
    if (cVar1 == '\0') {
      return;
    }
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    pMVar4 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write(area,detail,pMVar4);
  return;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Time
// il2cpp: Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time (System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x534df40

Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *
Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
          (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *__return_storage_ptr__,
          System_String_o *area,System_String_o *detail,MethodInfo *method)

{
  (__return_storage_ptr__->fields)._startMs = 0;
  (__return_storage_ptr__->fields)._enabled = false;
  (__return_storage_ptr__->fields)._hotLoop = false;
  *(undefined6 *)&(__return_storage_ptr__->fields).field_0x1a = 0;
  (__return_storage_ptr__->fields)._area = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._detail = (System_String_o *)0x0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor(__return_storage_ptr__,area,detail,method);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Write
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write (System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x53606a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53606e0: jmp 0x53608f6

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write
               (System_String_o *area,System_String_o *detail,MethodInfo *method)

{
  System_Diagnostics_Stopwatch_o *__this;
  long lVar1;
  int64_t iVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  int64_t local_40;
  long local_38;
  
  if (Il2CppMethodInitialized_075429ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"[GisketchUI PERF +{0}ms @{1}ms] {2}: {3}");
    Il2CppMethodInitialized_075429ac = '\x01';
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0)
    goto label_0536072f;
label_053606d0:
    __this = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor != 0)
    goto label_053606d0;
label_0536072f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
    __this = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
  }
  if (__this != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar2 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this,(MethodInfo *)0x0);
    lVar1 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->_lastMs;
    TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->_lastMs = iVar2;
    args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
    local_38 = iVar2 - lVar1;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556730,&local_38);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar3 != (Il2CppObject *)0x0) &&
         (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((args->obj).klass)->_1).element_class),
         pIVar4 == (Il2CppObject *)0x0)) {
label_053608e7:
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(args->m_Items);
        local_40 = iVar2;
        pIVar3 = il2cpp_vm_Object_Box(g_data_07556730,&local_40);
        if ((pIVar3 != (Il2CppObject *)0x0) &&
           (pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((args->obj).klass)->_1).element_class),
           pIVar4 == (Il2CppObject *)0x0)) goto label_053608e7;
        if ((args->max_length & 0xfffffffe) != 0) {
          args->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(args->m_Items + 1);
          if ((area != (System_String_o *)0x0) &&
             (pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)area,(((args->obj).klass)->_1).element_class),
             pIVar3 == (Il2CppObject *)0x0)) goto label_053608e7;
          if (2 < (uint)args->max_length) {
            args->m_Items[2] = (Il2CppObject *)area;
            Il2CppCodeGenWriteBarrier(args->m_Items + 2);
            if ((detail != (System_String_o *)0x0) &&
               (pIVar3 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)detail,(((args->obj).klass)->_1).element_class),
               pIVar3 == (Il2CppObject *)0x0)) goto label_053608e7;
            if ((args->max_length & 0xfffffffc) != 0) {
              args->m_Items[3] = (Il2CppObject *)detail;
              Il2CppCodeGenWriteBarrier(args->m_Items + 3);
              if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
              }
              UnityEngine_Debug__LogFormat_68c48a0
                        (3,1,(UnityEngine_Object_o *)0x0,"[GisketchUI PERF +{0}ms @{1}ms] {2}: {3}",args,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$IsHotLoop
// il2cpp: bool Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop (System_String_o* area, const MethodInfo* method);
// 0x53605f0

bool Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(System_String_o *area,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075429ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.BuildNode");
    il2cpp_codegen_initialize_runtime_metadata(&"GridPicker.BuildThumbnail");
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteLoader.ResourcesLoadSprite");
    il2cpp_codegen_initialize_runtime_metadata(&"GridPicker.CreateCard");
    Il2CppMethodInitialized_075429ad = '\x01';
  }
  bVar1 = System_String__op_Equality(area,"ScreenBuilder.BuildNode",(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality(area,"GridPicker.CreateCard",(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__op_Equality(area,"GridPicker.BuildThumbnail",(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__op_Equality(area,"SpriteLoader.ResourcesLoadSprite",(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog___cctor (const MethodInfo* method);
// 0x5360a60

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_StaticFields *pGVar1;
  System_Diagnostics_Stopwatch_o *pSVar2;
  
  if (Il2CppMethodInitialized_075429ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Diagnostics_Stopwatch);
    Il2CppMethodInitialized_075429ae = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->SlowElapsedMs = 4;
  if ((TypeInfo_System_Diagnostics_Stopwatch->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Diagnostics_Stopwatch);
  }
  pSVar2 = System_Diagnostics_Stopwatch__StartNew((MethodInfo *)0x0);
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields;
  pGVar1->Clock = pSVar2;
  Il2CppCodeGenWriteBarrier(&pGVar1->Clock);
  return;
}


