// Type: Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Diagnostics/GisketchUiPerfLog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog.Scope$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this, System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x1818d8ee0

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
               (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *__this,System_String_o *area,
               System_String_o *detail,MethodInfo *method)

{
  System_Diagnostics_Stopwatch_o *__this_00;
  System_String_o *area_00;
  bool bVar1;
  int64_t iVar2;
  System_String_o *detail_00;
  
  if (Il2CppMethodInitialized_184342032 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"BEGIN ");
    Il2CppMethodInitialized_184342032 = '\x01';
  }
  (__this->fields)._area = area;
  Il2CppCodeGenWriteBarrier((void **)__this,area);
  (__this->fields)._detail = detail;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._detail,detail);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  (__this->fields)._enabled = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Enabled
  ;
  bVar1 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(area,(MethodInfo *)0x0);
  (__this->fields)._hotLoop = bVar1;
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
  if (__this_00 != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar2 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this_00,(MethodInfo *)0x0);
    (__this->fields)._startMs = iVar2;
    if ((__this->fields)._enabled != false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      }
      if (TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->LogBegins == false) {
        if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
        }
        if (TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->VerboseHotLoops == false)
        {
          return;
        }
        if ((__this->fields)._hotLoop == false) {
          return;
        }
      }
      area_00 = (__this->fields)._area;
      detail_00 = System_String__Concat_1969e50
                            ("BEGIN ",(__this->fields)._detail,(MethodInfo *)0x0);
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write(area_00,detail_00,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog.Scope$$Dispose
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this, const MethodInfo* method);
// 0x1818d8cc0

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
               (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *__this,MethodInfo *method)

{
  System_Diagnostics_Stopwatch_o *__this_00;
  System_String_o *area;
  int64_t iVar1;
  System_String_array *values;
  System_String_o *pSVar2;
  int64_t local_res8;
  
  if (Il2CppMethodInitialized_184342033 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"ms)");
    il2cpp_codegen_initialize_runtime_metadata(&"END ");
    il2cpp_codegen_initialize_runtime_metadata(&" (");
    Il2CppMethodInitialized_184342033 = '\x01';
  }
  local_res8 = 0;
  if ((__this->fields)._enabled == false) {
    return;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  __this_00 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
  if (__this_00 != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar1 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this_00,(MethodInfo *)0x0);
    local_res8 = iVar1 - (__this->fields)._startMs;
    if ((__this->fields)._hotLoop != false) {
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      }
      iVar1 = local_res8;
      if (TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->VerboseHotLoops == false) {
        if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
        }
        if (iVar1 < TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->SlowElapsedMs) {
          return;
        }
      }
    }
    area = (__this->fields)._area;
    values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
    pSVar2 = "END ";
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "END ";
        Il2CppCodeGenWriteBarrier(values->m_Items,pSVar2);
        if (1 < (uint)values->max_length) {
          pSVar2 = (__this->fields)._detail;
          values->m_Items[1] = pSVar2;
          Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar2);
          pSVar2 = " (";
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = " (";
            Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar2);
            pSVar2 = System_Int64__ToString(&local_res8,(MethodInfo *)0x0);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar2;
              Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar2);
              pSVar2 = "ms)";
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "ms)";
                Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar2);
                pSVar2 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
                }
                Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write(area,pSVar2,(MethodInfo *)0x0);
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
// 0x1818d8870

int64_t Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs(MethodInfo *method)

{
  System_Diagnostics_Stopwatch_o *__this;
  int64_t iVar1;
  
  if (Il2CppMethodInitialized_18434202d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    Il2CppMethodInitialized_18434202d = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
  if (__this != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar1 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Mark
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark (System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x1818d87b0

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
               (System_String_o *area,System_String_o *detail,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_18434202e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    Il2CppMethodInitialized_18434202e = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  if (TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Enabled != false) {
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    bVar1 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(area,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
      }
      if (TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->VerboseHotLoops == false) {
        return;
      }
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write(area,detail,(MethodInfo *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Time
// il2cpp: Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time (System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x1818d88d0

Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *
Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
          (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *__return_storage_ptr__,
          System_String_o *area,System_String_o *detail,MethodInfo *method)

{
  (__return_storage_ptr__->fields)._area = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._detail = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._startMs = 0;
  (__return_storage_ptr__->fields)._enabled = false;
  (__return_storage_ptr__->fields)._hotLoop = false;
  *(undefined6 *)&(__return_storage_ptr__->fields).field_0x1a = 0;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__return_storage_ptr__,area,detail,(MethodInfo *)0x0);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Write
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write (System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x1818d8900

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write
               (System_String_o *area,System_String_o *detail,MethodInfo *method)

{
  System_Diagnostics_Stopwatch_o *__this;
  longlong lVar1;
  int64_t iVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  Il2CppObject *pIVar4;
  longlong local_res20;
  int64_t local_28 [2];
  
  if (Il2CppMethodInitialized_18434202f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&"[GisketchUI PERF +{0}ms @{1}ms] {2}: {3}");
    Il2CppMethodInitialized_18434202f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock;
  if (__this != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar2 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this,(MethodInfo *)0x0);
    lVar1 = TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->_lastMs;
    TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->_lastMs = iVar2;
    args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,4);
    local_res20 = iVar2 - lVar1;
    pIVar3 = il2cpp_value_box(g_data_184354e28,&local_res20);
    if (args != (System_Object_array *)0x0) {
      if (pIVar3 != (Il2CppObject *)0x0) {
        pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((args->obj).klass)->_1).element_class);
        if (pIVar4 == (Il2CppObject *)0x0) {
          pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
        }
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar3;
        Il2CppCodeGenWriteBarrier(args->m_Items,pIVar3);
        local_28[0] = iVar2;
        pIVar3 = il2cpp_value_box(g_data_184354e28,local_28);
        if (pIVar3 != (Il2CppObject *)0x0) {
          pIVar4 = il2cpp_vm_Object_IsInst(pIVar3,(((args->obj).klass)->_1).element_class);
          if (pIVar4 == (Il2CppObject *)0x0) {
            pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
          }
        }
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar3;
          Il2CppCodeGenWriteBarrier(args->m_Items + 1,pIVar3);
          if (area != (System_String_o *)0x0) {
            pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)area,(((args->obj).klass)->_1).element_class);
            if (pIVar3 == (Il2CppObject *)0x0) {
              pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
            }
          }
          if (2 < (uint)args->max_length) {
            args->m_Items[2] = (Il2CppObject *)area;
            Il2CppCodeGenWriteBarrier(args->m_Items + 2,area);
            if (detail != (System_String_o *)0x0) {
              pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)detail,(((args->obj).klass)->_1).element_class)
              ;
              if (pIVar3 == (Il2CppObject *)0x0) {
                pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
              }
            }
            if (3 < (uint)args->max_length) {
              args->m_Items[3] = (Il2CppObject *)detail;
              Il2CppCodeGenWriteBarrier(args->m_Items + 3,detail);
              if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
              }
              UnityEngine_Debug__LogFormat_2ec3370
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
// 0x1818d8700

bool Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(System_String_o *area,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184342030 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"ScreenBuilder.BuildNode");
    il2cpp_codegen_initialize_runtime_metadata(&"GridPicker.BuildThumbnail");
    il2cpp_codegen_initialize_runtime_metadata(&"SpriteLoader.ResourcesLoadSprite");
    il2cpp_codegen_initialize_runtime_metadata(&"GridPicker.CreateCard");
    Il2CppMethodInitialized_184342030 = '\x01';
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
// 0x1818d8b80

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog___cctor(MethodInfo *method)

{
  System_Diagnostics_Stopwatch_o *value;
  
  if (Il2CppMethodInitialized_184342031 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Diagnostics_Stopwatch);
    Il2CppMethodInitialized_184342031 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->SlowElapsedMs = 4;
  if ((TypeInfo_System_Diagnostics_Stopwatch->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Diagnostics_Stopwatch);
  }
  value = System_Diagnostics_Stopwatch__StartNew((MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->static_fields->Clock,value);
  return;
}


