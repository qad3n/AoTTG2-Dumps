// Type: Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Diagnostics/GisketchUiPerfLog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog.Scope$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this, System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x3b5aab0

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope___ctor
               (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this,System_String_o *area,
               System_String_o *detail,MethodInfo *method)

{
  char cVar1;
  long lVar2;
  System_String_c *area_00;
  bool_conflict bVar3;
  System_String_Fields SVar4;
  System_String_o *detail_00;
  System_Diagnostics_Stopwatch_o *pSVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (g_data_057a9d3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"BEGIN ");
    g_data_057a9d3b = '\x01';
  }
  area->klass = (System_String_c *)detail;
  il2cpp_runtime_helper_022b4080(area,detail);
  area->monitor = method;
  il2cpp_runtime_helper_022b4080(&area->monitor);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)&area[1].klass = **(undefined1 **)(TypeInfo_GisketchUiPerfLog + 0xb8);
  bVar3 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(detail,method);
  *(char *)((long)&area[1].klass + 1) = (char)bVar3;
  pSVar5 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
  if (pSVar5 != (System_Diagnostics_Stopwatch_o *)0x0) {
    SVar4 = (System_String_Fields)
            System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(pSVar5,(MethodInfo *)0x0);
    area->fields = SVar4;
    if (*(char *)&area[1].klass == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
      cVar1 = *(char *)(lVar2 + 1);
    }
    else {
      lVar2 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
      cVar1 = *(char *)(lVar2 + 1);
    }
    if (cVar1 == '\0') {
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
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
    detail_00 = System_String__Concat_3ae5ba0("BEGIN ",area->monitor,(MethodInfo *)0x0);
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write((System_String_o *)area_00,detail_00,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Stopwatch);
    g_data_057a9d3a = '\x01';
  }
  *(undefined4 *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 4) = 4;
  if (*(int *)(TypeInfo_Stopwatch + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = System_Diagnostics_Stopwatch__StartNew((MethodInfo *)0x0);
  lVar2 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
  *(System_Diagnostics_Stopwatch_o **)(lVar2 + 8) = pSVar5;
  il2cpp_runtime_helper_022b4080(lVar2 + 8,pSVar5);
  return;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog.Scope$$Dispose
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this, const MethodInfo* method);
// 0x3b5ac90

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
               (Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this,MethodInfo *method)

{
  char cVar1;
  System_Diagnostics_Stopwatch_o *__this_00;
  long lVar2;
  System_String_o *area;
  System_Object_array *items;
  int64_t iVar3;
  System_String_array *values;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  System_ArgumentException_o *__this_01;
  System_Func_T__string__o *getId;
  int iVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  System_String_c *pSVar9;
  System_String_o *value;
  System_String_c *local_28;
  
  pSVar5 = (System_String_o *)&local_28;
  if (g_data_057a9d3c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"ms)");
    il2cpp_runtime_helper_023445d0(&"END ");
    il2cpp_runtime_helper_023445d0(&" (");
    g_data_057a9d3c = '\x01';
  }
  local_28 = (System_String_c *)0x0;
  if (*(char *)&method->name == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
  value = (System_String_o *)0x0;
  if (__this_00 != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar3 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this_00,(MethodInfo *)0x0);
    pSVar9 = (System_String_c *)(iVar3 - (long)method->invoker_method);
    local_28 = pSVar9;
    if (*(char *)((long)&method->name + 1) != '\0') {
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar2 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
        cVar1 = *(char *)(lVar2 + 2);
      }
      else {
        lVar2 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
        cVar1 = *(char *)(lVar2 + 2);
      }
      if (cVar1 == '\0') {
        if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          iVar8 = *(int *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 4);
        }
        else {
          iVar8 = *(int *)(lVar2 + 4);
        }
        if ((long)pSVar9 < (long)iVar8) {
          return;
        }
      }
    }
    area = (System_String_o *)method->methodPointer;
    value = TypeInfo_string;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
    if (values != (System_String_array *)0x0) {
      if ((int)values->max_length != 0) {
        value = (System_String_o *)values->m_Items;
        values->m_Items[0] = "END ";
        il2cpp_runtime_helper_022b4080();
        if (1 < (uint)values->max_length) {
          value = (System_String_o *)(values->m_Items + 1);
          values->m_Items[1] = (System_String_o *)method->virtualMethodPointer;
          il2cpp_runtime_helper_022b4080();
          if (2 < (uint)values->max_length) {
            values->m_Items[2] = " (";
            il2cpp_runtime_helper_022b4080(values->m_Items + 2);
            pSVar4 = System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
            value = pSVar5;
            if (3 < (uint)values->max_length) {
              value = (System_String_o *)(values->m_Items + 3);
              values->m_Items[3] = pSVar4;
              il2cpp_runtime_helper_022b4080(value,pSVar4);
              if (4 < (uint)values->max_length) {
                values->m_Items[4] = "ms)";
                il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                pSVar5 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                method_00 = extraout_RDX;
                if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  method_00 = extraout_RDX_00;
                }
                Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write(area,pSVar5,method_00);
                return;
              }
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2ca0();
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d3d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchManifestDefinition_DeserializeObject_GisketchMan);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JsonConvert);
    g_data_057a9d3d = '\x01';
  }
  if (*(int *)(TypeInfo_JsonConvert + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar6 = Newtonsoft_Json_JsonConvert__DeserializeObject_object_(value,MethodInfo_GisketchManifestDefinition_DeserializeObject_GisketchMan);
  if (pIVar6 != (Il2CppObject *)0x0) {
    iVar8 = 1;
    if (0 < *(int *)&pIVar6[1].klass) {
      iVar8 = *(int *)&pIVar6[1].klass;
    }
    *(int *)&pIVar6[1].klass = iVar8;
    return;
  }
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this_01 = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Invalid Gisketch UI manifest JSON.");
  System_ArgumentException___ctor_3c12490(__this_01,pSVar5,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchManifestDefinition_FromJson);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057a9d41 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_GisketchTooltipDefinition_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchTooltipDefinition_FindById_GisketchTooltipDefini);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_FindTooltip_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9d41 = '\x01';
  }
  items = (System_Object_array *)(__this_01->fields)._stackTraceString;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    getId = *(System_Func_T__string__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (getId == (System_Func_T__string__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    getId = (System_Func_T__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_GisketchTooltipDefinition_string);
    System_Func_object__object____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__string__o **)(lVar2 + 0x20) = getId;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x20,getId);
  }
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition__FindById_object_(items,pSVar5,getId,MethodInfo_GisketchTooltipDefinition_FindById_GisketchTooltipDefini);
  return;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$NowMs
// il2cpp: int64_t Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs (const MethodInfo* method);
// 0x3b4fd50

int64_t Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__NowMs(MethodInfo *method)

{
  int iVar1;
  System_Diagnostics_Stopwatch_c *pSVar2;
  Il2CppClass *root;
  int64_t iVar3;
  MethodInfo *in_RSI;
  System_Diagnostics_Stopwatch_o *__this;
  System_Diagnostics_Stopwatch_o *pSVar4;
  
  if (g_data_057a9d36 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    g_data_057a9d36 = '\x01';
    iVar1 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
  }
  else {
    __this = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
  }
  if (__this != (System_Diagnostics_Stopwatch_o *)0x0) {
    iVar3 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(__this,(MethodInfo *)0x0);
    return iVar3;
  }
  iVar3 = il2cpp_runtime_helper_022b2c90();
  pSVar4 = __this;
  if (g_data_057a9cde == '\0') {
    pSVar4 = (System_Diagnostics_Stopwatch_o *)&TypeInfo_GisketchScreenRouter;
    iVar3 = il2cpp_runtime_helper_023445d0();
    g_data_057a9cde = '\x01';
  }
  *(undefined4 *)&(__this->fields).elapsed = 0xffffffff;
  pSVar2 = __this[1].klass;
  if (pSVar2 == (System_Diagnostics_Stopwatch_c *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    return (pSVar4->fields).started;
  }
  root = (Il2CppClass *)__this[1].fields.started;
  if ((pSVar2->_1).parent == root) {
    if (*(int *)(TypeInfo_GisketchScreenRouter + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    Gisketch_Aottg2UI_Routing_GisketchScreenRouter__DestroyRoot((UnityEngine_GameObject_o *)root,in_RSI);
    (pSVar2->_1).parent = (Il2CppClass *)0x0;
    il2cpp_runtime_helper_022b4080(&(pSVar2->_1).parent,0);
    (pSVar2->_1).generic_class = (void *)0x0;
    iVar3 = il2cpp_runtime_helper_022b4080(&(pSVar2->_1).generic_class,0);
    return iVar3;
  }
  return iVar3;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Mark
// il2cpp: void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark (System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x3b4da30

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
  if (g_data_057a9d37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    g_data_057a9d37 = '\x01';
    iVar2 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_GisketchUiPerfLog + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = **(char **)(TypeInfo_GisketchUiPerfLog + 0xb8);
  }
  else {
    cVar1 = **(char **)(TypeInfo_GisketchUiPerfLog + 0xb8);
  }
  if (cVar1 != '\0') {
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(area,pMVar4);
    pMVar4 = extraout_RDX;
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
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
      il2cpp_runtime_helper_02337ed0();
      pMVar4 = extraout_RDX_00;
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write(area,detail,pMVar4);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$Time
// il2cpp: Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time (System_String_o* area, System_String_o* detail, const MethodInfo* method);
// 0x3b4da10

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
// 0x3b5a850

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write
               (System_String_o *area,System_String_o *detail,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_Object_array *args;
  Il2CppObject *pIVar3;
  long lVar4;
  undefined8 *puVar5;
  int64_t iVar6;
  System_String_o *detail_00;
  System_Diagnostics_Stopwatch_o *pSVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar8;
  System_String_o *pSVar9;
  System_String_c *local_38;
  
  pSVar9 = detail;
  if (g_data_057a9d38 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&"[GisketchUI PERF +{0}ms @{1}ms] {2}: {3}");
    g_data_057a9d38 = '\x01';
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) != 0) goto label_03b5a880;
label_03b5a8df:
    il2cpp_runtime_helper_02337ed0();
    pSVar7 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
    puVar5 = (undefined8 *)0x0;
    if (pSVar7 == (System_Diagnostics_Stopwatch_o *)0x0) goto label_03b5aaa0;
  }
  else {
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) goto label_03b5a8df;
label_03b5a880:
    pSVar7 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
    if (pSVar7 == (System_Diagnostics_Stopwatch_o *)0x0) {
      puVar5 = (undefined8 *)0x0;
      goto label_03b5aaa0;
    }
  }
  iVar6 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(pSVar7,(MethodInfo *)0x0);
  lVar4 = *(long *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 0x10);
  *(int64_t *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 0x10) = iVar6;
  args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,4);
  pSVar9 = (System_String_o *)&local_38;
  puVar5 = g_data_057b9bd8;
  local_38 = (System_String_c *)(iVar6 - lVar4);
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
  if (args == (System_Object_array *)0x0) goto label_03b5aaa0;
  if ((pIVar3 == (Il2CppObject *)0x0) || (lVar4 = il2cpp_runtime_helper_023051f0(pIVar3), lVar4 != 0)) {
    if ((int)args->max_length != 0) {
      args->m_Items[0] = pIVar3;
      il2cpp_runtime_helper_022b4080(args->m_Items,pIVar3);
      pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_02304f30(g_data_057b9bd8);
      if ((pIVar3 != (Il2CppObject *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pIVar3), lVar4 == 0))
      goto label_03b5aa91;
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = pIVar3;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1);
        if ((area != (System_String_o *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(area), lVar4 == 0))
        goto label_03b5aa91;
        if (2 < (uint)args->max_length) {
          args->m_Items[2] = (Il2CppObject *)area;
          il2cpp_runtime_helper_022b4080(args->m_Items + 2);
          if ((detail != (System_String_o *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(detail), lVar4 == 0))
          goto label_03b5aa91;
          if (3 < (uint)args->max_length) {
            args->m_Items[3] = (Il2CppObject *)detail;
            il2cpp_runtime_helper_022b4080(args->m_Items + 3,detail);
            if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            UnityEngine_Debug__LogFormat_4db6f40
                      (3,1,(UnityEngine_Object_o *)0x0,"[GisketchUI PERF +{0}ms @{1}ms] {2}: {3}",args,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_03b5aa91:
  puVar5 = (undefined8 *)il2cpp_runtime_helper_0231b270();
  pSVar9 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
label_03b5aaa0:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"BEGIN ");
    g_data_057a9d3b = '\x01';
  }
  *puVar5 = pSVar9;
  il2cpp_runtime_helper_022b4080(puVar5,pSVar9);
  puVar5[1] = extraout_RDX;
  pMVar8 = extraout_RDX;
  il2cpp_runtime_helper_022b4080(puVar5 + 1);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(puVar5 + 3) = **(undefined1 **)(TypeInfo_GisketchUiPerfLog + 0xb8);
  bVar2 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(pSVar9,pMVar8);
  *(char *)((long)puVar5 + 0x19) = (char)bVar2;
  pSVar7 = *(System_Diagnostics_Stopwatch_o **)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 8);
  if (pSVar7 == (System_Diagnostics_Stopwatch_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057a9d3a == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
      il2cpp_runtime_helper_023445d0(&TypeInfo_Stopwatch);
      g_data_057a9d3a = '\x01';
    }
    *(undefined4 *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 4) = 4;
    if (*(int *)(TypeInfo_Stopwatch + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = System_Diagnostics_Stopwatch__StartNew((MethodInfo *)0x0);
    lVar4 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
    *(System_Diagnostics_Stopwatch_o **)(lVar4 + 8) = pSVar7;
    il2cpp_runtime_helper_022b4080(lVar4 + 8,pSVar7);
    return;
  }
  iVar6 = System_Diagnostics_Stopwatch__get_ElapsedMilliseconds(pSVar7,(MethodInfo *)0x0);
  puVar5[2] = iVar6;
  if (*(char *)(puVar5 + 3) == '\0') {
    return;
  }
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
    cVar1 = *(char *)(lVar4 + 1);
  }
  else {
    lVar4 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
    cVar1 = *(char *)(lVar4 + 1);
  }
  if (cVar1 == '\0') {
    if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar1 = *(char *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 2);
    }
    else {
      cVar1 = *(char *)(lVar4 + 2);
    }
    if (cVar1 == '\0') {
      return;
    }
    if (*(char *)((long)puVar5 + 0x19) == '\0') {
      return;
    }
  }
  pSVar9 = (System_String_o *)*puVar5;
  detail_00 = System_String__Concat_3ae5ba0("BEGIN ",(System_String_o *)puVar5[1],(MethodInfo *)0x0);
  pMVar8 = extraout_RDX_00;
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = extraout_RDX_01;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Write(pSVar9,detail_00,pMVar8);
  return;
}


// Gisketch.Aottg2UI.Diagnostics.GisketchUiPerfLog$$IsHotLoop
// il2cpp: bool Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop (System_String_o* area, const MethodInfo* method);
// 0x3b5a7a0

bool_conflict
Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__IsHotLoop(System_String_o *area,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  ulong uVar3;
  
  if (g_data_057a9d39 == '\0') {
    il2cpp_runtime_helper_023445d0(&"ScreenBuilder.BuildNode");
    il2cpp_runtime_helper_023445d0(&"GridPicker.BuildThumbnail");
    il2cpp_runtime_helper_023445d0(&"SpriteLoader.ResourcesLoadSprite");
    il2cpp_runtime_helper_023445d0(&"GridPicker.CreateCard");
    g_data_057a9d39 = '\x01';
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
// 0x3b5ac10

void Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog___cctor(MethodInfo *method)

{
  long lVar1;
  System_Diagnostics_Stopwatch_o *pSVar2;
  
  if (g_data_057a9d3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Stopwatch);
    g_data_057a9d3a = '\x01';
  }
  *(undefined4 *)(*(long *)(TypeInfo_GisketchUiPerfLog + 0xb8) + 4) = 4;
  if (*(int *)(TypeInfo_Stopwatch + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Diagnostics_Stopwatch__StartNew((MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_GisketchUiPerfLog + 0xb8);
  *(System_Diagnostics_Stopwatch_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar2);
  return;
}


