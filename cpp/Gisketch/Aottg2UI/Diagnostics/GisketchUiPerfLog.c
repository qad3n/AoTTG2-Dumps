// Type: Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Diagnostics/GisketchUiPerfLog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog.Scope$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this, System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x3aefd30

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
               (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this,System_String_o *area
               ,System_String_o *detail,MethodInfo *method)

{
  char cVar1;
  System_Diagnostics_Stopwatch_o *__this_00;
  long lVar2;
  System_String_c *area_00;
  bool_conflict bVar3;
  System_String_Fields SVar4;
  System_String_o *detail_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05701418 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&"BEGIN ");
    DAT_05701418 = '\x01';
  }
  area->klass = (System_String_c *)detail;
  il2cpp_runtime_glue(area,detail);
  area->monitor = method;
  il2cpp_runtime_glue(&area->monitor);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(undefined1 *)&area[1].klass = **(undefined1 **)(TypeInfo_GisketchUiPerfLog + 0xb8);
  bVar3 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(detail,method);
  *(char *)((long)&area[1].klass + 1) = (char)bVar3;
  __this_00 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
  if (__this_00 != (System_Diagnostics_Stopwatch_o *)0x0) {
    SVar4 = (System_String_Fields)
            System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this_00,(MethodInfo *)0x0);
    area->fields = SVar4;
    if (*(char *)&area[1].klass == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
      lVar2 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
      cVar1 = *(char *)(lVar2 + 1);
    }
    else {
      lVar2 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
      cVar1 = *(char *)(lVar2 + 1);
    }
    if (cVar1 == '\0') {
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_init_class();
        cVar1 = *(char *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 2);
      }
      else {
        cVar1 = *(char *)(lVar2 + 2);
      }
      if (cVar1 == '\0') {
        return;
      }
      if (*(char *)((long)&area[1].klass + 1) == '\0') {
        return;
      }
    }
    area_00 = area->klass;
    detail_00 = System_String__Concat("BEGIN ",area->monitor,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write
              ((System_String_o *)area_00,detail_00,method_00);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog.Scope$$Dispose
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this, const MethodInfo* method);
// 0x3aeff10

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
               (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  System_Diagnostics_Stopwatch_o *__this_00;
  long lVar3;
  System_String_o *area;
  int64_t iVar4;
  System_String_array *values;
  System_String_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  long lVar6;
  long local_28;
  
  if (DAT_05701419 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"ms)");
    il2cpp_init_method_metadata(&"END ");
    il2cpp_init_method_metadata(&" (");
    DAT_05701419 = '\x01';
  }
  local_28 = 0;
  if (*(char *)&method->name == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
  if (__this_00 != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar4 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this_00,(MethodInfo *)0x0);
    lVar6 = iVar4 - (long)method->invoker_method;
    local_28 = lVar6;
    if (*(char *)((long)&method->name + 1) != '\0') {
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_init_class();
        lVar3 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
        cVar1 = *(char *)(lVar3 + 2);
      }
      else {
        lVar3 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
        cVar1 = *(char *)(lVar3 + 2);
      }
      if (cVar1 == '\0') {
        if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
          il2cpp_init_class();
          iVar2 = *(int *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 4);
        }
        else {
          iVar2 = *(int *)(lVar3 + 4);
        }
        if (lVar6 < iVar2) {
          return;
        }
      }
    }
    area = (System_String_o *)method->methodPointer;
    values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        values->m_Items[0] = "END ";
        il2cpp_runtime_glue(values->m_Items);
        if (1 < (uint)values->max_length) {
          values->m_Items[1] = (System_String_o *)method->virtualMethodPointer;
          il2cpp_runtime_glue(values->m_Items + 1);
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = " (";
            il2cpp_runtime_glue(values->m_Items + 2);
            pSVar5 = System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
            if (3 < (uint)values->max_length) {
              values->m_Items[3] = pSVar5;
              il2cpp_runtime_glue(values->m_Items + 3,pSVar5);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "ms)";
                il2cpp_runtime_glue(values->m_Items + 4);
                pSVar5 = System_String__Concat(values,(MethodInfo *)0x0);
                method_00 = extraout_RDX;
                if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
                  il2cpp_init_class();
                  method_00 = extraout_RDX_00;
                }
                Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write(area,pSVar5,method_00);
                return;
              }
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$NowMs
// il2cpp: int64_t Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs (const MethodInfo* method);
// 0x3ae56d0

int64_t Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs(MethodInfo *method)

{
  int iVar1;
  System_Diagnostics_Stopwatch_o *__this;
  int64_t iVar2;
  
  if (DAT_05701413 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    DAT_05701413 = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
  }
  else {
    __this = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
  }
  if (__this != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar2 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this,(MethodInfo *)0x0);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Mark
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark (System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x3ae33b0

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark
               (System_String_o *area,System_String_o *detail,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar4;
  MethodInfo *extraout_RDX_01;
  
  pMVar4 = (MethodInfo *)detail;
  if (DAT_05701414 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    DAT_05701414 = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = **(char **)(TypeInfo_GisketchUiPerfLog + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_GisketchUiPerfLog + 0xb8);
  }
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(area,pMVar4);
    pMVar4 = extraout_RDX;
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_init_class();
        cVar1 = *(char *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 2);
        pMVar4 = extraout_RDX_01;
      }
      else {
        cVar1 = *(char *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 2);
      }
      if (cVar1 == '\0') {
        return;
      }
    }
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar4 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write(area,detail,pMVar4);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Time
// il2cpp: Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time (System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x3ae3390

Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *
Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
          (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *__return_storage_ptr__,
          System_String_o *area,System_String_o *detail,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  System_String_o *unaff_RBX;
  undefined1 in_stack_00000000 [24];
  
  (__return_storage_ptr__->fields)._startMs = 0;
  (__return_storage_ptr__->fields)._enabled = 0;
  (__return_storage_ptr__->fields)._hotLoop = 0;
  (__return_storage_ptr__->fields)._area = (System_String_o *)0x0;
  (__return_storage_ptr__->fields)._detail = (System_String_o *)0x0;
  __this.fields._8_24_ = in_stack_00000000;
  __this.fields._area = unaff_RBX;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
            (__this,(System_String_o *)__return_storage_ptr__,area,(MethodInfo *)detail);
  return __return_storage_ptr__;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Write
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write (System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x3aefad0

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write
               (System_String_o *area,System_String_o *detail,MethodInfo *method)

{
  System_Diagnostics_Stopwatch_o *__this;
  int64_t iVar1;
  System_Object_array *args;
  Il2CppObject *pIVar2;
  long lVar3;
  undefined8 uVar4;
  int64_t local_40;
  long local_38;
  
  if (DAT_05701415 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&"[GisketchUI PERF +{0}ms @{1}ms] {2}: {3}");
    DAT_05701415 = '\x01';
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) goto LAB_03aefb5f;
LAB_03aefb00:
    __this = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
  }
  else {
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) != 0) goto LAB_03aefb00;
LAB_03aefb5f:
    il2cpp_init_class();
    __this = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
  }
  if (__this != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar1 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this,(MethodInfo *)0x0);
    lVar3 = *(long *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 0x10);
    *(int64_t *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 0x10) = iVar1;
    args = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,4);
    local_38 = iVar1 - lVar3;
    pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711088,&local_38);
    if (args != (System_Object_array *)0x0) {
      if ((pIVar2 != (Il2CppObject *)0x0) &&
         (lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0)) {
LAB_03aefd11:
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
      if ((int)args->max_length != 0) {
        args->m_Items[0] = pIVar2;
        il2cpp_runtime_glue(args->m_Items,pIVar2);
        local_40 = iVar1;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711088,&local_40);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar3 = il2cpp_runtime_glue(pIVar2,(((args->obj).klass)->_1).element_class), lVar3 == 0))
        goto LAB_03aefd11;
        if (1 < (uint)args->max_length) {
          args->m_Items[1] = pIVar2;
          il2cpp_runtime_glue(args->m_Items + 1,pIVar2);
          if ((area != (System_String_o *)0x0) &&
             (lVar3 = il2cpp_runtime_glue(area,(((args->obj).klass)->_1).element_class), lVar3 == 0))
          goto LAB_03aefd11;
          if (2 < (uint)args->max_length) {
            args->m_Items[2] = (Il2CppObject *)area;
            il2cpp_runtime_glue(args->m_Items + 2,area);
            if ((detail != (System_String_o *)0x0) &&
               (lVar3 = il2cpp_runtime_glue(detail,(((args->obj).klass)->_1).element_class),
               lVar3 == 0)) goto LAB_03aefd11;
            if (3 < (uint)args->max_length) {
              args->m_Items[3] = (Il2CppObject *)detail;
              il2cpp_runtime_glue(args->m_Items + 3,detail);
              if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
                il2cpp_init_class();
              }
              UnityEngine_Debug__LogFormat
                        (3,1,(UnityEngine_Object_o *)0x0,"[GisketchUI PERF +{0}ms @{1}ms] {2}: {3}",args,(MethodInfo *)0x0);
              return;
            }
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$IsHotLoop
// il2cpp: bool Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop (System_String_o* area, const MethodInfo* method);
// 0x3aefa20

bool_conflict
Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(System_String_o *area,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  ulong uVar3;
  
  if (DAT_05701416 == '\0') {
    il2cpp_init_method_metadata(&"ScreenBuilder.BuildNode");
    il2cpp_init_method_metadata(&"GridPicker.BuildThumbnail");
    il2cpp_init_method_metadata(&"SpriteLoader.ResourcesLoadSprite");
    il2cpp_init_method_metadata(&"GridPicker.CreateCard");
    DAT_05701416 = '\x01';
  }
  uVar1 = System_String__op_Equality(area,"ScreenBuilder.BuildNode",(MethodInfo *)0x0);
  uVar3 = (ulong)uVar1;
  if ((char)uVar1 == '\0') {
    uVar1 = System_String__op_Equality(area,"GridPicker.CreateCard",(MethodInfo *)0x0);
    uVar3 = (ulong)uVar1;
    if ((char)uVar1 == '\0') {
      uVar1 = System_String__op_Equality(area,"GridPicker.BuildThumbnail",(MethodInfo *)0x0);
      uVar3 = (ulong)uVar1;
      if ((char)uVar1 == '\0') {
        bVar2 = System_String__op_Equality(area,"SpriteLoader.ResourcesLoadSprite",(MethodInfo *)0x0);
        return bVar2;
      }
    }
  }
  return (bool_conflict)CONCAT71((int7)(uVar3 >> 8),1);
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog___cctor (const MethodInfo* method);
// 0x3aefe90

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog___cctor(MethodInfo *method)

{
  long lVar1;
  System_Diagnostics_Stopwatch_o *pSVar2;
  
  if (DAT_05701417 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_Stopwatch);
    DAT_05701417 = '\x01';
  }
  *(undefined4 *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 4) = 4;
  if (*(int *)(TypeInfo_Stopwatch + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_Diagnostics_Stopwatch__StartNew((MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
  *(System_Diagnostics_Stopwatch_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  return;
}


