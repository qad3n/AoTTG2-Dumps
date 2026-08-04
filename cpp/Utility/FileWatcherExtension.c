// Type: Utility.FileWatcherExtension
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/FileWatcherExtension.cs
// Prior real C# source: none
// --------------------------------

// Utility.FileWatcherExtension.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Utility_FileWatcherExtension___c__DisplayClass30_0___ctor (Utility_FileWatcherExtension___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x4491720

void Utility_FileWatcherExtension___c__DisplayClass30_0___ctor
               (Utility_FileWatcherExtension___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.FileWatcherExtension.<>c__DisplayClass30_0$$<OnChanged>b__0
// il2cpp: void Utility_FileWatcherExtension___c__DisplayClass30_0___OnChanged_b__0 (Utility_FileWatcherExtension___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x4491bf0

void Utility_FileWatcherExtension___c__DisplayClass30_0___OnChanged_b__0
               (Utility_FileWatcherExtension___c__DisplayClass30_0_o *__this,MethodInfo *method)

{
  Utility_FileWatcherExtension_o *pUVar1;
  System_IO_FileSystemEventHandler_o *pSVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  System_IO_RenamedEventHandler_o *pSVar3;
  undefined8 uVar4;
  undefined8 in_R9;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
    pSVar2 = (pUVar1->fields).Changed;
    if (pSVar2 != (System_IO_FileSystemEventHandler_o *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar2->fields).invoke_impl;
      (*UNRECOVERED_JUMPTABLE_00)
                ((pSVar2->fields).method_code,(__this->fields).sender,(__this->fields).e,
                 (pSVar2->fields).method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    return;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
    pSVar2 = (pUVar1->fields).Created;
    if (pSVar2 != (System_IO_FileSystemEventHandler_o *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar2->fields).invoke_impl;
      (*UNRECOVERED_JUMPTABLE_00)
                ((pSVar2->fields).method_code,(__this->fields).sender,(__this->fields).e,
                 (pSVar2->fields).method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
    pSVar2 = (pUVar1->fields).Deleted;
    if (pSVar2 != (System_IO_FileSystemEventHandler_o *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar2->fields).invoke_impl;
      (*UNRECOVERED_JUMPTABLE_00)
                ((pSVar2->fields).method_code,(__this->fields).sender,(__this->fields).e,
                 (pSVar2->fields).method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (Utility_FileWatcherExtension_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  pSVar3 = (pUVar1->fields).Renamed;
  if (pSVar3 != (System_IO_RenamedEventHandler_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar3->fields).invoke_impl;
    (*UNRECOVERED_JUMPTABLE_00)
              ((pSVar3->fields).method_code,(__this->fields).sender,(__this->fields).e,(pSVar3->fields).method
               ,UNRECOVERED_JUMPTABLE_00,in_R9,uVar4);
    return;
  }
  return;
}


// Utility.FileWatcherExtension.<>c__DisplayClass31_0$$.ctor
// il2cpp: void Utility_FileWatcherExtension___c__DisplayClass31_0___ctor (Utility_FileWatcherExtension___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x4491840

void Utility_FileWatcherExtension___c__DisplayClass31_0___ctor
               (Utility_FileWatcherExtension___c__DisplayClass31_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.FileWatcherExtension.<>c__DisplayClass31_0$$<OnCreated>b__0
// il2cpp: void Utility_FileWatcherExtension___c__DisplayClass31_0___OnCreated_b__0 (Utility_FileWatcherExtension___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x4491c30

void Utility_FileWatcherExtension___c__DisplayClass31_0___OnCreated_b__0
               (Utility_FileWatcherExtension___c__DisplayClass31_0_o *__this,MethodInfo *method)

{
  Utility_FileWatcherExtension_o *pUVar1;
  System_IO_FileSystemEventHandler_o *pSVar2;
  code *vtableDispatch;
  System_IO_RenamedEventHandler_o *pSVar3;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
    pSVar2 = (pUVar1->fields).Created;
    if (pSVar2 != (System_IO_FileSystemEventHandler_o *)0x0) {
      vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
      (*vtableDispatch)
                ((pSVar2->fields).method_code,(__this->fields).sender,(__this->fields).e,
                 (pSVar2->fields).method,vtableDispatch);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
    pSVar2 = (pUVar1->fields).Deleted;
    if (pSVar2 != (System_IO_FileSystemEventHandler_o *)0x0) {
      vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
      (*vtableDispatch)
                ((pSVar2->fields).method_code,(__this->fields).sender,(__this->fields).e,
                 (pSVar2->fields).method,vtableDispatch);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (Utility_FileWatcherExtension_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  pSVar3 = (pUVar1->fields).Renamed;
  if (pSVar3 != (System_IO_RenamedEventHandler_o *)0x0) {
    vtableDispatch = (code *)(pSVar3->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar3->fields).method_code,(__this->fields).sender,(__this->fields).e,(pSVar3->fields).method
               ,vtableDispatch);
    return;
  }
  return;
}


// Utility.FileWatcherExtension.<>c__DisplayClass32_0$$.ctor
// il2cpp: void Utility_FileWatcherExtension___c__DisplayClass32_0___ctor (Utility_FileWatcherExtension___c__DisplayClass32_0_o* __this, const MethodInfo* method);
// 0x4491960

void Utility_FileWatcherExtension___c__DisplayClass32_0___ctor
               (Utility_FileWatcherExtension___c__DisplayClass32_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.FileWatcherExtension.<>c__DisplayClass32_0$$<OnDeleted>b__0
// il2cpp: void Utility_FileWatcherExtension___c__DisplayClass32_0___OnDeleted_b__0 (Utility_FileWatcherExtension___c__DisplayClass32_0_o* __this, const MethodInfo* method);
// 0x4491c70

void Utility_FileWatcherExtension___c__DisplayClass32_0___OnDeleted_b__0
               (Utility_FileWatcherExtension___c__DisplayClass32_0_o *__this,MethodInfo *method)

{
  Utility_FileWatcherExtension_o *pUVar1;
  System_IO_FileSystemEventHandler_o *pSVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  System_IO_RenamedEventHandler_o *pSVar3;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 != (Utility_FileWatcherExtension_o *)0x0) {
    pSVar2 = (pUVar1->fields).Deleted;
    if (pSVar2 != (System_IO_FileSystemEventHandler_o *)0x0) {
      UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar2->fields).invoke_impl;
      (*UNRECOVERED_JUMPTABLE_00)
                ((pSVar2->fields).method_code,(__this->fields).sender,(__this->fields).e,
                 (pSVar2->fields).method,UNRECOVERED_JUMPTABLE_00);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (Utility_FileWatcherExtension_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  pSVar3 = (pUVar1->fields).Renamed;
  if (pSVar3 != (System_IO_RenamedEventHandler_o *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar3->fields).invoke_impl;
    (*UNRECOVERED_JUMPTABLE_00)
              ((pSVar3->fields).method_code,(__this->fields).sender,(__this->fields).e,(pSVar3->fields).method
               ,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  return;
}


// Utility.FileWatcherExtension.<>c__DisplayClass33_0$$.ctor
// il2cpp: void Utility_FileWatcherExtension___c__DisplayClass33_0___ctor (Utility_FileWatcherExtension___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x4491a80

void Utility_FileWatcherExtension___c__DisplayClass33_0___ctor
               (Utility_FileWatcherExtension___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Utility.FileWatcherExtension.<>c__DisplayClass33_0$$<OnRenamed>b__0
// il2cpp: void Utility_FileWatcherExtension___c__DisplayClass33_0___OnRenamed_b__0 (Utility_FileWatcherExtension___c__DisplayClass33_0_o* __this, const MethodInfo* method);
// 0x4491cb0

void Utility_FileWatcherExtension___c__DisplayClass33_0___OnRenamed_b__0
               (Utility_FileWatcherExtension___c__DisplayClass33_0_o *__this,MethodInfo *method)

{
  Utility_FileWatcherExtension_o *pUVar1;
  System_IO_RenamedEventHandler_o *pSVar2;
  code *vtableDispatch;
  
  pUVar1 = (__this->fields).__4__this;
  if (pUVar1 == (Utility_FileWatcherExtension_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    return;
  }
  pSVar2 = (pUVar1->fields).Renamed;
  if (pSVar2 != (System_IO_RenamedEventHandler_o *)0x0) {
    vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar2->fields).method_code,(__this->fields).sender,(__this->fields).e,(pSVar2->fields).method
               ,vtableDispatch);
    return;
  }
  return;
}


// Utility.FileWatcherExtension$$add_Changed
// il2cpp: void Utility_FileWatcherExtension__add_Changed (Utility_FileWatcherExtension_o* __this, System_IO_FileSystemEventHandler_o* value, const MethodInfo* method);
// 0x44904a0

void Utility_FileWatcherExtension__add_Changed
               (Utility_FileWatcherExtension_o *__this,System_IO_FileSystemEventHandler_o *value,
               MethodInfo *method)

{
  System_IO_FileSystemEventHandler_o *pSVar1;
  System_Delegate_o *pSVar2;
  System_IO_FileSystemEventHandler_o *a;
  bool bVar3;
  
  if (g_data_057ae8fa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    g_data_057ae8fa = '\x01';
  }
  a = (__this->fields).Changed;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 || (pSVar2->klass == TypeInfo_FileSystemEventHandler))) {
    pSVar1 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_02300640(&(__this->fields).Changed,pSVar2,a);
    bVar3 = a == pSVar1;
    a = pSVar1;
    if (bVar3) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar2);
  return;
}


// Utility.FileWatcherExtension$$remove_Changed
// il2cpp: void Utility_FileWatcherExtension__remove_Changed (Utility_FileWatcherExtension_o* __this, System_IO_FileSystemEventHandler_o* value, const MethodInfo* method);
// 0x4490530

void Utility_FileWatcherExtension__remove_Changed
               (Utility_FileWatcherExtension_o *__this,System_IO_FileSystemEventHandler_o *value,
               MethodInfo *method)

{
  System_IO_FileSystemEventHandler_o *pSVar1;
  System_Delegate_o *pSVar2;
  System_IO_FileSystemEventHandler_o *source;
  bool bVar3;
  
  if (g_data_057ae8fb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    g_data_057ae8fb = '\x01';
  }
  source = (__this->fields).Changed;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 || (pSVar2->klass == TypeInfo_FileSystemEventHandler))) {
    pSVar1 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_02300640(&(__this->fields).Changed,pSVar2,source);
    bVar3 = source == pSVar1;
    source = pSVar1;
    if (bVar3) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar2);
  return;
}


// Utility.FileWatcherExtension$$add_Created
// il2cpp: void Utility_FileWatcherExtension__add_Created (Utility_FileWatcherExtension_o* __this, System_IO_FileSystemEventHandler_o* value, const MethodInfo* method);
// 0x44905c0

void Utility_FileWatcherExtension__add_Created
               (Utility_FileWatcherExtension_o *__this,System_IO_FileSystemEventHandler_o *value,
               MethodInfo *method)

{
  System_IO_FileSystemEventHandler_o *pSVar1;
  System_Delegate_o *pSVar2;
  System_IO_FileSystemEventHandler_o *a;
  bool bVar3;
  
  if (g_data_057ae8fc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    g_data_057ae8fc = '\x01';
  }
  a = (__this->fields).Created;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 || (pSVar2->klass == TypeInfo_FileSystemEventHandler))) {
    pSVar1 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_02300640(&(__this->fields).Created,pSVar2,a);
    bVar3 = a == pSVar1;
    a = pSVar1;
    if (bVar3) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar2);
  return;
}


// Utility.FileWatcherExtension$$remove_Created
// il2cpp: void Utility_FileWatcherExtension__remove_Created (Utility_FileWatcherExtension_o* __this, System_IO_FileSystemEventHandler_o* value, const MethodInfo* method);
// 0x4490650

void Utility_FileWatcherExtension__remove_Created
               (Utility_FileWatcherExtension_o *__this,System_IO_FileSystemEventHandler_o *value,
               MethodInfo *method)

{
  System_IO_FileSystemEventHandler_o *pSVar1;
  System_Delegate_o *pSVar2;
  System_IO_FileSystemEventHandler_o *source;
  bool bVar3;
  
  if (g_data_057ae8fd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    g_data_057ae8fd = '\x01';
  }
  source = (__this->fields).Created;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 || (pSVar2->klass == TypeInfo_FileSystemEventHandler))) {
    pSVar1 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_02300640(&(__this->fields).Created,pSVar2,source);
    bVar3 = source == pSVar1;
    source = pSVar1;
    if (bVar3) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar2);
  return;
}


// Utility.FileWatcherExtension$$add_Deleted
// il2cpp: void Utility_FileWatcherExtension__add_Deleted (Utility_FileWatcherExtension_o* __this, System_IO_FileSystemEventHandler_o* value, const MethodInfo* method);
// 0x44906e0

void Utility_FileWatcherExtension__add_Deleted
               (Utility_FileWatcherExtension_o *__this,System_IO_FileSystemEventHandler_o *value,
               MethodInfo *method)

{
  System_IO_FileSystemEventHandler_o *pSVar1;
  System_Delegate_o *pSVar2;
  System_IO_FileSystemEventHandler_o *a;
  bool bVar3;
  
  if (g_data_057ae8fe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    g_data_057ae8fe = '\x01';
  }
  a = (__this->fields).Deleted;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 || (pSVar2->klass == TypeInfo_FileSystemEventHandler))) {
    pSVar1 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_02300640(&(__this->fields).Deleted,pSVar2,a);
    bVar3 = a == pSVar1;
    a = pSVar1;
    if (bVar3) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar2);
  return;
}


// Utility.FileWatcherExtension$$remove_Deleted
// il2cpp: void Utility_FileWatcherExtension__remove_Deleted (Utility_FileWatcherExtension_o* __this, System_IO_FileSystemEventHandler_o* value, const MethodInfo* method);
// 0x4490770

void Utility_FileWatcherExtension__remove_Deleted
               (Utility_FileWatcherExtension_o *__this,System_IO_FileSystemEventHandler_o *value,
               MethodInfo *method)

{
  System_IO_FileSystemEventHandler_o *pSVar1;
  System_Delegate_o *pSVar2;
  System_IO_FileSystemEventHandler_o *source;
  bool bVar3;
  
  if (g_data_057ae8ff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    g_data_057ae8ff = '\x01';
  }
  source = (__this->fields).Deleted;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 || (pSVar2->klass == TypeInfo_FileSystemEventHandler))) {
    pSVar1 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_02300640(&(__this->fields).Deleted,pSVar2,source);
    bVar3 = source == pSVar1;
    source = pSVar1;
    if (bVar3) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar2);
  return;
}


// Utility.FileWatcherExtension$$add_Renamed
// il2cpp: void Utility_FileWatcherExtension__add_Renamed (Utility_FileWatcherExtension_o* __this, System_IO_RenamedEventHandler_o* value, const MethodInfo* method);
// 0x4490800

void Utility_FileWatcherExtension__add_Renamed
               (Utility_FileWatcherExtension_o *__this,System_IO_RenamedEventHandler_o *value,
               MethodInfo *method)

{
  System_IO_RenamedEventHandler_o *pSVar1;
  System_Delegate_o *pSVar2;
  System_IO_RenamedEventHandler_o *a;
  bool bVar3;
  
  if (g_data_057ae900 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenamedEventHandler);
    g_data_057ae900 = '\x01';
  }
  a = (__this->fields).Renamed;
  while ((pSVar2 = System_Delegate__Combine
                             ((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 || (pSVar2->klass == TypeInfo_RenamedEventHandler))) {
    pSVar1 = (System_IO_RenamedEventHandler_o *)il2cpp_runtime_helper_02300640(&(__this->fields).Renamed,pSVar2,a);
    bVar3 = a == pSVar1;
    a = pSVar1;
    if (bVar3) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar2);
  return;
}


// Utility.FileWatcherExtension$$remove_Renamed
// il2cpp: void Utility_FileWatcherExtension__remove_Renamed (Utility_FileWatcherExtension_o* __this, System_IO_RenamedEventHandler_o* value, const MethodInfo* method);
// 0x4490890

void Utility_FileWatcherExtension__remove_Renamed
               (Utility_FileWatcherExtension_o *__this,System_IO_RenamedEventHandler_o *value,
               MethodInfo *method)

{
  System_IO_RenamedEventHandler_o *pSVar1;
  System_Delegate_o *pSVar2;
  System_IO_RenamedEventHandler_o *source;
  bool bVar3;
  
  if (g_data_057ae901 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenamedEventHandler);
    g_data_057ae901 = '\x01';
  }
  source = (__this->fields).Renamed;
  while ((pSVar2 = System_Delegate__Remove
                             ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0),
         pSVar2 == (System_Delegate_o *)0x0 || (pSVar2->klass == TypeInfo_RenamedEventHandler))) {
    pSVar1 = (System_IO_RenamedEventHandler_o *)il2cpp_runtime_helper_02300640(&(__this->fields).Renamed,pSVar2,source);
    bVar3 = source == pSVar1;
    source = pSVar1;
    if (bVar3) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar2);
  return;
}


// Utility.FileWatcherExtension$$get_IncludeSubdirectories
// il2cpp: bool Utility_FileWatcherExtension__get_IncludeSubdirectories (Utility_FileWatcherExtension_o* __this, const MethodInfo* method);
// 0x4490920

bool_conflict
Utility_FileWatcherExtension__get_IncludeSubdirectories
          (Utility_FileWatcherExtension_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._includeSubdirectories);
}


// Utility.FileWatcherExtension$$set_IncludeSubdirectories
// il2cpp: void Utility_FileWatcherExtension__set_IncludeSubdirectories (Utility_FileWatcherExtension_o* __this, bool value, const MethodInfo* method);
// 0x4490930

void Utility_FileWatcherExtension__set_IncludeSubdirectories
               (Utility_FileWatcherExtension_o *__this,bool_conflict value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  System_IO_FileSystemWatcher_o *__this_06;
  
  if (g_data_057ae902 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FileSystemWatcher_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057ae902 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_06 = (System_IO_FileSystemWatcher_o *)0x0;
  if ((uint)(byte)(__this->fields)._includeSubdirectories != (value & 0xffU)) {
    *(char *)&(__this->fields)._includeSubdirectories = (char)value;
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._watchers;
    if ((__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Values(__this_00,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S),
       __this_05 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
label_04490a35:
      auVar4 = il2cpp_runtime_helper_022b2c90();
      if (auVar4._8_4_ == 1) {
        plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
        lVar1 = *plVar3;
        __cxa_end_catch();
        __this_03.fields._8_8_ = pIVar6;
        __this_03.fields._dictionary = pSVar5;
        __this_03.fields._currentValue = (Il2CppObject *)__this_06;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc8);
        if (lVar1 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar1);
      }
      __this_04.fields._8_8_ = pIVar6;
      __this_04.fields._dictionary = pSVar5;
      __this_04.fields._currentValue = (Il2CppObject *)__this_06;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc8);
      _Unwind_Resume(auVar4._0_8_);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffc8,__this_05,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    while (__this_01.fields._8_8_ = pIVar6, __this_01.fields._dictionary = pSVar5,
          __this_01.fields._currentValue = (Il2CppObject *)__this_06,
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            (__this_01,(MethodInfo_3251CB0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0') {
      if (__this_06 == (System_IO_FileSystemWatcher_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04490a35;
      }
      System_IO_FileSystemWatcher__set_IncludeSubdirectories(__this_06,value & 0xffU,(MethodInfo *)0x0);
    }
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._dictionary = pSVar5;
    __this_02.fields._currentValue = (Il2CppObject *)__this_06;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc8);
  }
  return;
}


// Utility.FileWatcherExtension$$get_NotifyFilter
// il2cpp: int32_t Utility_FileWatcherExtension__get_NotifyFilter (Utility_FileWatcherExtension_o* __this, const MethodInfo* method);
// 0x4490ac0

int32_t Utility_FileWatcherExtension__get_NotifyFilter
                  (Utility_FileWatcherExtension_o *__this,MethodInfo *method)

{
  return (__this->fields)._notifyFilter;
}


// Utility.FileWatcherExtension$$set_NotifyFilter
// il2cpp: void Utility_FileWatcherExtension__set_NotifyFilter (Utility_FileWatcherExtension_o* __this, int32_t value, const MethodInfo* method);
// 0x4490ad0

void Utility_FileWatcherExtension__set_NotifyFilter
               (Utility_FileWatcherExtension_o *__this,int32_t value,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  System_IO_FileSystemWatcher_o *__this_06;
  
  if (g_data_057ae903 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FileSystemWatcher_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057ae903 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  __this_06 = (System_IO_FileSystemWatcher_o *)0x0;
  if ((__this->fields)._notifyFilter != value) {
    (__this->fields)._notifyFilter = value;
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._watchers;
    if ((__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) ||
       (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Values(__this_00,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S),
       __this_05 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
label_04490bc5:
      auVar4 = il2cpp_runtime_helper_022b2c90();
      if (auVar4._8_4_ == 1) {
        plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
        lVar1 = *plVar3;
        __cxa_end_catch();
        __this_03.fields._8_8_ = pIVar6;
        __this_03.fields._dictionary = pSVar5;
        __this_03.fields._currentValue = (Il2CppObject *)__this_06;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc8);
        if (lVar1 == 0) {
          return;
        }
        il2cpp_runtime_helper_022fefe0(lVar1);
      }
      __this_04.fields._8_8_ = pIVar6;
      __this_04.fields._dictionary = pSVar5;
      __this_04.fields._currentValue = (Il2CppObject *)__this_06;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc8);
      _Unwind_Resume(auVar4._0_8_);
    }
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffc8,__this_05,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    while (__this_01.fields._8_8_ = pIVar6, __this_01.fields._dictionary = pSVar5,
          __this_01.fields._currentValue = (Il2CppObject *)__this_06,
          bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                            (__this_01,(MethodInfo_3251CB0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0') {
      if (__this_06 == (System_IO_FileSystemWatcher_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_04490bc5;
      }
      System_IO_FileSystemWatcher__set_NotifyFilter(__this_06,value,(MethodInfo *)0x0);
    }
    __this_02.fields._8_8_ = pIVar6;
    __this_02.fields._dictionary = pSVar5;
    __this_02.fields._currentValue = (Il2CppObject *)__this_06;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffffc8);
  }
  return;
}


// Utility.FileWatcherExtension$$Awake
// il2cpp: void Utility_FileWatcherExtension__Awake (Utility_FileWatcherExtension_o* __this, const MethodInfo* method);
// 0x4490c50

void Utility_FileWatcherExtension__Awake(Utility_FileWatcherExtension_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  long *plVar3;
  MethodInfo *method_00;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  System_String_o *path;
  
  if (g_data_057ae904 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057ae904 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  path = (System_String_o *)0x0;
  __this_00 = (__this->fields).watchPaths;
  if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
    auVar4 = il2cpp_runtime_helper_022b2c90();
    if (auVar4._8_4_ == 1) {
      plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
      lVar1 = *plVar3;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar6;
      __this_03.fields._list = pSVar5;
      __this_03.fields._current = (Il2CppObject *)path;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_04.fields._8_8_ = pIVar6;
    __this_04.fields._list = pSVar5;
    __this_04.fields._current = (Il2CppObject *)path;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    _Unwind_Resume(auVar4._0_8_);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
  while (__this_01.fields._8_8_ = pIVar6, __this_01.fields._list = pSVar5,
        __this_01.fields._current = (Il2CppObject *)path,
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0') {
    Utility_FileWatcherExtension__AddWatcher(__this,path,method_00);
  }
  __this_02.fields._8_8_ = pIVar6;
  __this_02.fields._list = pSVar5;
  __this_02.fields._current = (Il2CppObject *)path;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  return;
}


// Utility.FileWatcherExtension$$Update
// il2cpp: void Utility_FileWatcherExtension__Update (Utility_FileWatcherExtension_o* __this, const MethodInfo* method);
// 0x4491020

void Utility_FileWatcherExtension__Update(Utility_FileWatcherExtension_o *__this,MethodInfo *method)

{
  System_Collections_Concurrent_ConcurrentQueue_Action__o *__this_00;
  long lVar1;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  System_IO_FileSystemEventHandler_o *pSVar3;
  System_IO_RenamedEventHandler_o *value;
  long *plVar4;
  int iVar5;
  long lVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar8;
  Il2CppType *pIVar9;
  System_IO_FileSystemWatcher_o *__this_06;
  System_IO_FileSystemWatcher_o *pSVar10;
  undefined1 auStack_70 [16];
  System_IO_FileSystemWatcher_o *pSStack_60;
  Il2CppRGCTXData *pIStack_58;
  Il2CppObject *pIStack_28;
  
  if (g_data_057ae905 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryDequeue);
    g_data_057ae905 = '\x01';
  }
  pIStack_28 = (Il2CppObject *)0x0;
  if ((__this->fields).maxActionsPerFrame < 1) {
    return;
  }
  iVar5 = 0;
  __this_00 = (__this->fields)._mainThreadQueue;
  while (__this_00 != (System_Collections_Concurrent_ConcurrentQueue_Action__o *)0x0) {
    bVar2 = System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue
                      ((System_Collections_Concurrent_ConcurrentQueue_T__o *)__this_00,&pIStack_28,
                       MethodInfo_Boolean_TryDequeue);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (pIStack_28 != (Il2CppObject *)0x0) {
      (*pIStack_28[1].monitor)(pIStack_28[4].klass,pIStack_28[2].monitor);
    }
    iVar5 = iVar5 + 1;
    if ((__this->fields).maxActionsPerFrame <= iVar5) {
      return;
    }
    __this_00 = (__this->fields)._mainThreadQueue;
  }
  lVar6 = 0;
  il2cpp_runtime_helper_022b2c90();
  pIStack_58 = (Il2CppRGCTXData *)__this;
  if (g_data_057ae908 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FileSystemWatcher_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnCreated);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleted);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnRenamed);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenamedEventHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057ae908 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar9 = (Il2CppType *)0x0;
  __this_06 = (System_IO_FileSystemWatcher_o *)0x0;
  if ((*(System_Collections_Generic_Dictionary_object__object__o **)(lVar6 + 0x38) !=
       (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar6 + 0x38),
                             MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S),
     __this_05 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_70,
               __this_05,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    pSVar8 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
             auStack_70._0_8_;
    pIVar9 = (Il2CppType *)auStack_70._8_8_;
    __this_06 = pSStack_60;
    while( true ) {
      __this_01.fields._8_8_ = pIVar9;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
      __this_01.fields._currentValue = (Il2CppObject *)__this_06;
      bVar2 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251CB0 *)&stack0xffffffffffffff70);
      if ((char)bVar2 == '\0') {
        __this_02.fields._8_8_ = pIVar9;
        __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
        __this_02.fields._currentValue = (Il2CppObject *)__this_06;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffff70);
        goto label_04491315;
      }
      if (__this_06 == (System_IO_FileSystemWatcher_o *)0x0) break;
      pSVar10 = __this_06;
      System_IO_FileSystemWatcher__set_EnableRaisingEvents(__this_06,0,(MethodInfo *)0x0);
      pSVar3 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Changed(__this_06,pSVar3,(MethodInfo *)0x0);
      pSVar3 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Created(__this_06,pSVar3,(MethodInfo *)0x0);
      pSVar3 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Deleted(__this_06,pSVar3,(MethodInfo *)0x0);
      value = (System_IO_RenamedEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenamedEventHandler);
      System_IO_RenamedEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Renamed(__this_06,value,(MethodInfo *)0x0);
      System_ComponentModel_Component__Dispose
                ((System_ComponentModel_Component_o *)__this_06,(MethodInfo *)0x0);
      __this_06 = pSVar10;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar7 = il2cpp_runtime_helper_022b2c90();
    if (auVar7._8_4_ != 1) {
label_044913bd:
      __this_04.fields._8_8_ = pIVar9;
      __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
      __this_04.fields._currentValue = (Il2CppObject *)__this_06;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251CA0 *)&stack0xffffffffffffff70);
      _Unwind_Resume(auVar7._0_8_);
    }
    plVar4 = (long *)__cxa_begin_catch(auVar7._0_8_);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar8;
    __this_03.fields._currentValue = (Il2CppObject *)__this_06;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffff70);
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
      goto label_044913bd;
    }
label_04491315:
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar6 + 0x38) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar6 + 0x38),MethodInfo_Void_Clear);
      return;
    }
  } while( true );
}


// Utility.FileWatcherExtension$$OnDestroy
// il2cpp: void Utility_FileWatcherExtension__OnDestroy (Utility_FileWatcherExtension_o* __this, const MethodInfo* method);
// 0x44910c0

void Utility_FileWatcherExtension__OnDestroy(Utility_FileWatcherExtension_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  System_IO_FileSystemEventHandler_o *pSVar4;
  System_IO_RenamedEventHandler_o *value;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar7;
  Il2CppType *pIVar8;
  System_IO_FileSystemWatcher_o *__this_05;
  System_IO_FileSystemWatcher_o *pSVar9;
  undefined1 auStack_48 [16];
  System_IO_FileSystemWatcher_o *pSStack_38;
  
  if (g_data_057ae908 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FileSystemWatcher_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnCreated);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleted);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnRenamed);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenamedEventHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057ae908 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  __this_05 = (System_IO_FileSystemWatcher_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._watchers;
  if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Values(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S),
     __this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_48,
               __this_04,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
             auStack_48._0_8_;
    pIVar8 = (Il2CppType *)auStack_48._8_8_;
    __this_05 = pSStack_38;
    while( true ) {
      __this_00.fields._8_8_ = pIVar8;
      __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
      __this_00.fields._currentValue = (Il2CppObject *)__this_05;
      bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251CB0 *)&stack0xffffffffffffff98);
      if ((char)bVar3 == '\0') {
        __this_01.fields._8_8_ = pIVar8;
        __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
        __this_01.fields._currentValue = (Il2CppObject *)__this_05;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_01,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
        goto label_04491315;
      }
      if (__this_05 == (System_IO_FileSystemWatcher_o *)0x0) break;
      pSVar9 = __this_05;
      System_IO_FileSystemWatcher__set_EnableRaisingEvents(__this_05,0,(MethodInfo *)0x0);
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Changed(__this_05,pSVar4,(MethodInfo *)0x0);
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Created(__this_05,pSVar4,(MethodInfo *)0x0);
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Deleted(__this_05,pSVar4,(MethodInfo *)0x0);
      value = (System_IO_RenamedEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenamedEventHandler);
      System_IO_RenamedEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Renamed(__this_05,value,(MethodInfo *)0x0);
      System_ComponentModel_Component__Dispose
                ((System_ComponentModel_Component_o *)__this_05,(MethodInfo *)0x0);
      __this_05 = pSVar9;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) {
label_044913bd:
      __this_03.fields._8_8_ = pIVar8;
      __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
      __this_03.fields._currentValue = (Il2CppObject *)__this_05;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar6._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
    __this_02.fields._currentValue = (Il2CppObject *)__this_05;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_044913bd;
    }
label_04491315:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._watchers;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar1,MethodInfo_Void_Clear);
      return;
    }
  } while( true );
}


// Utility.FileWatcherExtension$$AddWatcher
// il2cpp: void Utility_FileWatcherExtension__AddWatcher (Utility_FileWatcherExtension_o* __this, System_String_o* path, const MethodInfo* method);
// 0x4490da0

void Utility_FileWatcherExtension__AddWatcher
               (Utility_FileWatcherExtension_o *__this,System_String_o *path,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  MethodInfo *__this_00;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar3;
  System_IO_FileSystemEventHandler_o *pSVar4;
  System_String_o *message;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  System_IO_RenamedEventHandler_o *value;
  long *plVar5;
  System_IO_RenamedEventHandler_o *unaff_RBX;
  uint uVar6;
  ulong uVar7;
  _union_236529 _Var8;
  long lVar9;
  _union_236529 unaff_R12;
  undefined8 *unaff_R13;
  undefined1 auVar10 [12];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar11;
  Il2CppType *pIVar12;
  System_IO_FileSystemWatcher_o *__this_06;
  System_IO_FileSystemWatcher_o *pSVar13;
  undefined1 local_98 [16];
  System_IO_FileSystemWatcher_o *local_88;
  _union_236529 _Stack_80;
  _union_236529 _Stack_78;
  undefined8 *puStack_70;
  undefined1 *puStack_68;
  undefined8 *puStack_60;
  ulong uStack_58;
  Il2CppObject *local_50;
  System_IO_RenamedEventHandler_o *pSStack_48;
  System_String_o *pSStack_40;
  Utility_FileWatcherExtension_o *pUStack_38;
  
  if (g_data_057ae906 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemWatcher);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnCreated);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleted);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnRenamed);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenamedEventHandler);
    il2cpp_runtime_helper_023445d0(&"Directory does not exist: ");
    g_data_057ae906 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._watchers;
  _Var8.genericMethod = (Il2CppRGCTXData *)0x0;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      (pSVar1,(Il2CppObject *)path,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 != '\0') {
      return;
    }
    bVar3 = System_IO_Directory__Exists(path,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      message = System_String__Concat_3ae5ba0("Directory does not exist: ",path,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)message,(MethodInfo *)0x0);
      return;
    }
    unaff_R12.genericMethod = (void *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemWatcher);
    _Var8.genericMethod = unaff_R12.genericMethod;
    System_IO_FileSystemWatcher___ctor(unaff_R12.genericMethod,path,(MethodInfo *)0x0);
    if (unaff_R12.genericMethod != (Il2CppRGCTXData *)0x0) {
      System_IO_FileSystemWatcher__set_IncludeSubdirectories
                (unaff_R12.genericMethod,(uint)(byte)(__this->fields)._includeSubdirectories,(MethodInfo *)0x0
                );
      System_IO_FileSystemWatcher__set_NotifyFilter
                (unaff_R12.genericMethod,(__this->fields)._notifyFilter,(MethodInfo *)0x0);
      System_IO_FileSystemWatcher__set_EnableRaisingEvents(unaff_R12.genericMethod,1,(MethodInfo *)0x0);
      unaff_R13 = &TypeInfo_FileSystemEventHandler;
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__add_Changed(unaff_R12.genericMethod,pSVar4,(MethodInfo *)0x0);
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__add_Created(unaff_R12.genericMethod,pSVar4,(MethodInfo *)0x0);
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__add_Deleted(unaff_R12.genericMethod,pSVar4,(MethodInfo *)0x0);
      unaff_RBX = (System_IO_RenamedEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenamedEventHandler);
      System_IO_RenamedEventHandler___ctor();
      System_IO_FileSystemWatcher__add_Renamed(unaff_R12.genericMethod,unaff_RBX,(MethodInfo *)0x0);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._watchers;
      _Var8.genericMethod = (Il2CppRGCTXData *)0x0;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)path,unaff_R12.genericMethod,MethodInfo_Void_set_Item);
        return;
      }
    }
  }
  local_50 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
  pSStack_48 = unaff_RBX;
  pSStack_40 = path;
  pUStack_38 = __this;
  if (g_data_057ae905 == '\0') {
    uStack_58 = 0x449103f;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryDequeue);
    g_data_057ae905 = '\x01';
  }
  local_50 = (Il2CppObject *)0x0;
  if (*(int *)((long)_Var8.genericMethod + 0x30) < 1) {
    return;
  }
  uVar7 = 0;
  __this_00 = ((Il2CppRGCTXData *)((long)_Var8.genericMethod + 0x40))->method;
  while (__this_00 != (MethodInfo *)0x0) {
    uStack_58 = 0x449108c;
    bVar3 = System_Collections_Concurrent_ConcurrentQueue_object___TryDequeue
                      ((System_Collections_Concurrent_ConcurrentQueue_T__o *)__this_00,&local_50,MethodInfo_Boolean_TryDequeue)
    ;
    if ((char)bVar3 == '\0') {
      return;
    }
    if (local_50 != (Il2CppObject *)0x0) {
      uStack_58 = 0x44910a4;
      (*local_50[1].monitor)(local_50[4].klass,local_50[2].monitor);
    }
    uVar6 = (int)uVar7 + 1;
    uVar7 = (ulong)uVar6;
    if (*(int *)((long)_Var8.genericMethod + 0x30) <= (int)uVar6) {
      return;
    }
    __this_00 = ((Il2CppRGCTXData *)((long)_Var8.genericMethod + 0x40))->method;
  }
  lVar9 = 0;
  uStack_58 = 0x44910b6;
  il2cpp_runtime_helper_022b2c90();
  puStack_60 = &MethodInfo_Boolean_TryDequeue;
  _Stack_80 = _Var8;
  _Stack_78 = unaff_R12;
  puStack_70 = unaff_R13;
  puStack_68 = (undefined1 *)&local_50;
  uStack_58 = uVar7;
  if (g_data_057ae908 == '\0') {
    puStack_68 = (undefined1 *)&local_50;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FileSystemWatcher_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnCreated);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleted);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnRenamed);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenamedEventHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057ae908 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar12 = (Il2CppType *)0x0;
  __this_06 = (System_IO_FileSystemWatcher_o *)0x0;
  if ((*(System_Collections_Generic_Dictionary_object__object__o **)(lVar9 + 0x38) !=
       (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Values
                            (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar9 + 0x38),
                             MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S),
     __this_05 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)local_98,
               __this_05,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    pSVar11 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
              local_98._0_8_;
    pIVar12 = (Il2CppType *)local_98._8_8_;
    __this_06 = local_88;
    while( true ) {
      __this_01.fields._8_8_ = pIVar12;
      __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
      __this_01.fields._currentValue = (Il2CppObject *)__this_06;
      bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251CB0 *)&stack0xffffffffffffff48);
      if ((char)bVar3 == '\0') {
        __this_02.fields._8_8_ = pIVar12;
        __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
        __this_02.fields._currentValue = (Il2CppObject *)__this_06;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffff48);
        goto label_04491315;
      }
      if (__this_06 == (System_IO_FileSystemWatcher_o *)0x0) break;
      pSVar13 = __this_06;
      System_IO_FileSystemWatcher__set_EnableRaisingEvents(__this_06,0,(MethodInfo *)0x0);
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Changed(__this_06,pSVar4,(MethodInfo *)0x0);
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Created(__this_06,pSVar4,(MethodInfo *)0x0);
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Deleted(__this_06,pSVar4,(MethodInfo *)0x0);
      value = (System_IO_RenamedEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenamedEventHandler);
      System_IO_RenamedEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Renamed(__this_06,value,(MethodInfo *)0x0);
      System_ComponentModel_Component__Dispose
                ((System_ComponentModel_Component_o *)__this_06,(MethodInfo *)0x0);
      __this_06 = pSVar13;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar10 = il2cpp_runtime_helper_022b2c90();
    if (auVar10._8_4_ != 1) {
label_044913bd:
      __this_04.fields._8_8_ = pIVar12;
      __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
      __this_04.fields._currentValue = (Il2CppObject *)__this_06;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251CA0 *)&stack0xffffffffffffff48);
      _Unwind_Resume(auVar10._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar12;
    __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar11;
    __this_03.fields._currentValue = (Il2CppObject *)__this_06;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffff48);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_044913bd;
    }
label_04491315:
    if (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar9 + 0x38) !=
        (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear
                (*(System_Collections_Generic_Dictionary_object__object__o **)(lVar9 + 0x38),MethodInfo_Void_Clear);
      return;
    }
  } while( true );
}


// Utility.FileWatcherExtension$$RemoveWatcher
// il2cpp: void Utility_FileWatcherExtension__RemoveWatcher (Utility_FileWatcherExtension_o* __this, System_String_o* path, const MethodInfo* method);
// 0x4491400

void Utility_FileWatcherExtension__RemoveWatcher
               (Utility_FileWatcherExtension_o *__this,System_String_o *path,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_IO_FileSystemWatcher_o *pSVar2;
  bool_conflict bVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *extraout_RDX;
  Il2CppClass *pIVar6;
  Il2CppClass *pIVar7;
  Il2CppObject *__this_00;
  System_IO_FileSystemWatcher_o *local_30;
  
  pIVar6 = (Il2CppClass *)path;
  if (g_data_057ae907 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Remove);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnCreated);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleted);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnRenamed);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenamedEventHandler);
    g_data_057ae907 = '\x01';
  }
  local_30 = (System_IO_FileSystemWatcher_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._watchers;
  pIVar7 = (Il2CppClass *)0x0;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pIVar6 = (Il2CppClass *)path;
    bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)path,(Il2CppObject **)&local_30,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar3 == '\0') {
      return;
    }
    pIVar7 = (Il2CppClass *)0x0;
    if (local_30 != (System_IO_FileSystemWatcher_o *)0x0) {
      System_IO_FileSystemWatcher__set_EnableRaisingEvents(local_30,0,(MethodInfo *)0x0);
      pSVar2 = local_30;
      pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      pIVar6 = (Il2CppClass *)__this;
      pIVar7 = pIVar4;
      System_IO_FileSystemEventHandler___ctor();
      if (pSVar2 != (System_IO_FileSystemWatcher_o *)0x0) {
        System_IO_FileSystemWatcher__remove_Changed
                  (pSVar2,(System_IO_FileSystemEventHandler_o *)pIVar4,(MethodInfo *)0x0);
        pSVar2 = local_30;
        pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
        pIVar6 = (Il2CppClass *)__this;
        pIVar7 = pIVar4;
        System_IO_FileSystemEventHandler___ctor();
        if (pSVar2 != (System_IO_FileSystemWatcher_o *)0x0) {
          System_IO_FileSystemWatcher__remove_Created
                    (pSVar2,(System_IO_FileSystemEventHandler_o *)pIVar4,(MethodInfo *)0x0);
          pSVar2 = local_30;
          pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
          pIVar6 = (Il2CppClass *)__this;
          pIVar7 = pIVar4;
          System_IO_FileSystemEventHandler___ctor();
          if (pSVar2 != (System_IO_FileSystemWatcher_o *)0x0) {
            System_IO_FileSystemWatcher__remove_Deleted
                      (pSVar2,(System_IO_FileSystemEventHandler_o *)pIVar4,(MethodInfo *)0x0);
            pSVar2 = local_30;
            pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_RenamedEventHandler);
            pIVar6 = (Il2CppClass *)__this;
            pIVar7 = pIVar4;
            System_IO_RenamedEventHandler___ctor();
            if (pSVar2 != (System_IO_FileSystemWatcher_o *)0x0) {
              System_IO_FileSystemWatcher__remove_Renamed
                        (pSVar2,(System_IO_RenamedEventHandler_o *)pIVar4,(MethodInfo *)0x0);
              pIVar7 = (Il2CppClass *)0x0;
              pIVar6 = pIVar4;
              if (local_30 != (System_IO_FileSystemWatcher_o *)0x0) {
                pIVar6 = (Il2CppClass *)0x0;
                System_ComponentModel_Component__Dispose
                          ((System_ComponentModel_Component_o *)local_30,(MethodInfo *)0x0);
                pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._watchers
                ;
                pIVar7 = (Il2CppClass *)0x0;
                if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                  System_Collections_Generic_Dictionary_object__object___Remove
                            (pSVar1,(Il2CppObject *)path,MethodInfo_Boolean_Remove);
                  return;
                }
              }
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae909 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Enqueue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnChanged_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    g_data_057ae909 = '\x01';
  }
  pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  __this_00 = pIVar5;
  System_Object___ctor(pIVar5,(MethodInfo *)0x0);
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar5[1].klass = pIVar7;
    il2cpp_runtime_helper_022b4080(pIVar5 + 1,pIVar7);
    pIVar5[1].monitor = pIVar6;
    il2cpp_runtime_helper_022b4080(&pIVar5[1].monitor,pIVar6);
    pIVar5[2].klass = extraout_RDX;
    il2cpp_runtime_helper_022b4080(pIVar5 + 2,extraout_RDX);
    pIVar6 = (pIVar7->_1).element_class;
    pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    __this_00 = pIVar5;
    System_Action___ctor();
    if (pIVar6 != (Il2CppClass *)0x0) {
      System_Collections_Concurrent_ConcurrentQueue_object___Enqueue
                ((System_Collections_Concurrent_ConcurrentQueue_T__o *)pIVar6,pIVar5,MethodInfo_Void_Enqueue);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  return;
}


// Utility.FileWatcherExtension$$DisposeWatchers
// il2cpp: void Utility_FileWatcherExtension__DisposeWatchers (Utility_FileWatcherExtension_o* __this, const MethodInfo* method);
// 0x44910d0

void Utility_FileWatcherExtension__DisposeWatchers(Utility_FileWatcherExtension_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_04;
  System_IO_FileSystemEventHandler_o *pSVar4;
  System_IO_RenamedEventHandler_o *value;
  long *plVar5;
  undefined1 auVar6 [12];
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *pSVar7;
  Il2CppType *pIVar8;
  System_IO_FileSystemWatcher_o *__this_05;
  System_IO_FileSystemWatcher_o *pSVar9;
  undefined1 auStack_48 [16];
  System_IO_FileSystemWatcher_o *pSStack_38;
  
  if (g_data_057ae908 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_FileSystemWatcher_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FileSystemEventHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnChanged);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnCreated);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleted);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnRenamed);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RenamedEventHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    g_data_057ae908 = '\x01';
  }
  pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)0x0;
  pIVar8 = (Il2CppType *)0x0;
  __this_05 = (System_IO_FileSystemWatcher_o *)0x0;
  pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._watchers;
  if ((pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (__this_04 = System_Collections_Generic_Dictionary_object__object___get_Values(pSVar1,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_S),
     __this_04 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)auStack_48,
               __this_04,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    pSVar7 = (System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__c *)
             auStack_48._0_8_;
    pIVar8 = (Il2CppType *)auStack_48._8_8_;
    __this_05 = pSStack_38;
    while( true ) {
      __this_00.fields._8_8_ = pIVar8;
      __this_00.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
      __this_00.fields._currentValue = (Il2CppObject *)__this_05;
      bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        (__this_00,(MethodInfo_3251CB0 *)&stack0xffffffffffffff98);
      if ((char)bVar3 == '\0') {
        __this_01.fields._8_8_ = pIVar8;
        __this_01.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
        __this_01.fields._currentValue = (Il2CppObject *)__this_05;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_01,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
        goto label_04491315;
      }
      if (__this_05 == (System_IO_FileSystemWatcher_o *)0x0) break;
      pSVar9 = __this_05;
      System_IO_FileSystemWatcher__set_EnableRaisingEvents(__this_05,0,(MethodInfo *)0x0);
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Changed(__this_05,pSVar4,(MethodInfo *)0x0);
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Created(__this_05,pSVar4,(MethodInfo *)0x0);
      pSVar4 = (System_IO_FileSystemEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_FileSystemEventHandler);
      System_IO_FileSystemEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Deleted(__this_05,pSVar4,(MethodInfo *)0x0);
      value = (System_IO_RenamedEventHandler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_RenamedEventHandler);
      System_IO_RenamedEventHandler___ctor();
      System_IO_FileSystemWatcher__remove_Renamed(__this_05,value,(MethodInfo *)0x0);
      System_ComponentModel_Component__Dispose
                ((System_ComponentModel_Component_o *)__this_05,(MethodInfo *)0x0);
      __this_05 = pSVar9;
    }
    il2cpp_runtime_helper_022b2c90();
  }
  do {
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ != 1) {
label_044913bd:
      __this_03.fields._8_8_ = pIVar8;
      __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
      __this_03.fields._currentValue = (Il2CppObject *)__this_05;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
      _Unwind_Resume(auVar6._0_8_);
    }
    plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
    lVar2 = *plVar5;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar8;
    __this_02.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7;
    __this_02.fields._currentValue = (Il2CppObject *)__this_05;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffff98);
    if (lVar2 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar2);
      goto label_044913bd;
    }
label_04491315:
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._watchers;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar1,MethodInfo_Void_Clear);
      return;
    }
  } while( true );
}


// Utility.FileWatcherExtension$$OnChanged
// il2cpp: void Utility_FileWatcherExtension__OnChanged (Utility_FileWatcherExtension_o* __this, Il2CppObject* sender, System_IO_FileSystemEventArgs_o* e, const MethodInfo* method);
// 0x4491610

void Utility_FileWatcherExtension__OnChanged
               (Utility_FileWatcherExtension_o *__this,Il2CppObject *sender,System_IO_FileSystemEventArgs_o *e
               ,MethodInfo *method)

{
  System_Collections_Concurrent_ConcurrentQueue_Action__o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae909 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Enqueue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnChanged_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass30_0);
    g_data_057ae909 = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass30_0);
  __this_01 = pIVar1;
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(pIVar1 + 1,__this);
    pIVar1[1].monitor = sender;
    il2cpp_runtime_helper_022b4080(&pIVar1[1].monitor,sender);
    pIVar1[2].klass = (Il2CppClass *)e;
    il2cpp_runtime_helper_022b4080(pIVar1 + 2,e);
    __this_00 = (__this->fields)._mainThreadQueue;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    __this_01 = pIVar1;
    System_Action___ctor();
    if (__this_00 != (System_Collections_Concurrent_ConcurrentQueue_Action__o *)0x0) {
      System_Collections_Concurrent_ConcurrentQueue_object___Enqueue
                ((System_Collections_Concurrent_ConcurrentQueue_T__o *)__this_00,pIVar1,MethodInfo_Void_Enqueue);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Utility.FileWatcherExtension$$OnCreated
// il2cpp: void Utility_FileWatcherExtension__OnCreated (Utility_FileWatcherExtension_o* __this, Il2CppObject* sender, System_IO_FileSystemEventArgs_o* e, const MethodInfo* method);
// 0x4491730

void Utility_FileWatcherExtension__OnCreated
               (Utility_FileWatcherExtension_o *__this,Il2CppObject *sender,System_IO_FileSystemEventArgs_o *e
               ,MethodInfo *method)

{
  System_Collections_Concurrent_ConcurrentQueue_Action__o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae90a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Enqueue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnCreated_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass31_0);
    g_data_057ae90a = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass31_0);
  __this_01 = pIVar1;
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(pIVar1 + 1,__this);
    pIVar1[1].monitor = sender;
    il2cpp_runtime_helper_022b4080(&pIVar1[1].monitor,sender);
    pIVar1[2].klass = (Il2CppClass *)e;
    il2cpp_runtime_helper_022b4080(pIVar1 + 2,e);
    __this_00 = (__this->fields)._mainThreadQueue;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    __this_01 = pIVar1;
    System_Action___ctor();
    if (__this_00 != (System_Collections_Concurrent_ConcurrentQueue_Action__o *)0x0) {
      System_Collections_Concurrent_ConcurrentQueue_object___Enqueue
                ((System_Collections_Concurrent_ConcurrentQueue_T__o *)__this_00,pIVar1,MethodInfo_Void_Enqueue);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Utility.FileWatcherExtension$$OnDeleted
// il2cpp: void Utility_FileWatcherExtension__OnDeleted (Utility_FileWatcherExtension_o* __this, Il2CppObject* sender, System_IO_FileSystemEventArgs_o* e, const MethodInfo* method);
// 0x4491850

void Utility_FileWatcherExtension__OnDeleted
               (Utility_FileWatcherExtension_o *__this,Il2CppObject *sender,System_IO_FileSystemEventArgs_o *e
               ,MethodInfo *method)

{
  System_Collections_Concurrent_ConcurrentQueue_Action__o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae90b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Enqueue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnDeleted_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass32_0);
    g_data_057ae90b = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass32_0);
  __this_01 = pIVar1;
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(pIVar1 + 1,__this);
    pIVar1[1].monitor = sender;
    il2cpp_runtime_helper_022b4080(&pIVar1[1].monitor,sender);
    pIVar1[2].klass = (Il2CppClass *)e;
    il2cpp_runtime_helper_022b4080(pIVar1 + 2,e);
    __this_00 = (__this->fields)._mainThreadQueue;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    __this_01 = pIVar1;
    System_Action___ctor();
    if (__this_00 != (System_Collections_Concurrent_ConcurrentQueue_Action__o *)0x0) {
      System_Collections_Concurrent_ConcurrentQueue_object___Enqueue
                ((System_Collections_Concurrent_ConcurrentQueue_T__o *)__this_00,pIVar1,MethodInfo_Void_Enqueue);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Utility.FileWatcherExtension$$OnRenamed
// il2cpp: void Utility_FileWatcherExtension__OnRenamed (Utility_FileWatcherExtension_o* __this, Il2CppObject* sender, System_IO_RenamedEventArgs_o* e, const MethodInfo* method);
// 0x4491970

void Utility_FileWatcherExtension__OnRenamed
               (Utility_FileWatcherExtension_o *__this,Il2CppObject *sender,System_IO_RenamedEventArgs_o *e,
               MethodInfo *method)

{
  System_Collections_Concurrent_ConcurrentQueue_Action__o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae90c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Enqueue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnRenamed_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass33_0);
    g_data_057ae90c = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass33_0);
  __this_01 = pIVar1;
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(pIVar1 + 1,__this);
    pIVar1[1].monitor = sender;
    il2cpp_runtime_helper_022b4080(&pIVar1[1].monitor,sender);
    pIVar1[2].klass = (Il2CppClass *)e;
    il2cpp_runtime_helper_022b4080(pIVar1 + 2,e);
    __this_00 = (__this->fields)._mainThreadQueue;
    pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Action);
    __this_01 = pIVar1;
    System_Action___ctor();
    if (__this_00 != (System_Collections_Concurrent_ConcurrentQueue_Action__o *)0x0) {
      System_Collections_Concurrent_ConcurrentQueue_object___Enqueue
                ((System_Collections_Concurrent_ConcurrentQueue_T__o *)__this_00,pIVar1,MethodInfo_Void_Enqueue);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  return;
}


// Utility.FileWatcherExtension$$get_WatchedPaths
// il2cpp: System_Collections_Generic_IEnumerable_string__o* Utility_FileWatcherExtension__get_WatchedPaths (Utility_FileWatcherExtension_o* __this, const MethodInfo* method);
// 0x4491a90

System_Collections_Generic_IEnumerable_string__o *
Utility_FileWatcherExtension__get_WatchedPaths(Utility_FileWatcherExtension_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar1;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Concurrent_ConcurrentQueue_T__o *__this_02;
  System_Collections_Generic_IEnumerable_string__o *extraout_RAX;
  System_Collections_Generic_Dictionary_object__object__o *__this_03;
  
  if (g_data_057ae90d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    g_data_057ae90d = '\x01';
  }
  __this_03 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._watchers;
  if (__this_03 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    pSVar1 = System_Collections_Generic_Dictionary_object__object___get_Keys(__this_03,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Sys);
    return (System_Collections_Generic_IEnumerable_string__o *)pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae90e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ConcurrentQueue_1_System_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ConcurrentQueue_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_IO_FileSystemWatcher);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_FileSystemWatcher);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae90e = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor(__this_00,MethodInfo_List_1_System_String);
  *(System_Collections_Generic_List_object__o **)&(__this_03->fields)._count = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._count,__this_00);
  *(undefined1 *)&(__this_03->fields)._freeCount = 1;
  *(undefined8 *)&(__this_03->fields)._version = 0xa00000013;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_FileSystemWatcher);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_IO_FileSystemWatcher);
  (__this_03->fields)._keys = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)__this_01
  ;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._keys,__this_01);
  __this_02 = (System_Collections_Concurrent_ConcurrentQueue_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ConcurrentQueue_Action);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor(__this_02,MethodInfo_ConcurrentQueue_1_System_Action);
  (__this_03->fields)._values =
       (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)__this_02;
  il2cpp_runtime_helper_022b4080(&(__this_03->fields)._values);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_03,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Utility.FileWatcherExtension$$.ctor
// il2cpp: void Utility_FileWatcherExtension___ctor (Utility_FileWatcherExtension_o* __this, const MethodInfo* method);
// 0x4491ad0

void Utility_FileWatcherExtension___ctor(Utility_FileWatcherExtension_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Concurrent_ConcurrentQueue_Action__o *__this_02;
  
  if (g_data_057ae90e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ConcurrentQueue_1_System_Action);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ConcurrentQueue_Action);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_IO_FileSystemWatcher);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_FileSystemWatcher);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    g_data_057ae90e = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  (__this->fields).watchPaths = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this->fields).watchPaths,__this_00);
  *(undefined1 *)&(__this->fields)._includeSubdirectories = 1;
  (__this->fields)._notifyFilter = 0x13;
  (__this->fields).maxActionsPerFrame = 10;
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_FileSystemWatcher);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_01,MethodInfo_Dictionary_2_System_String_System_IO_FileSystemWatcher);
  (__this->fields)._watchers = (System_Collections_Generic_Dictionary_string__FileSystemWatcher__o *)__this_01
  ;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._watchers,__this_01);
  __this_02 = (System_Collections_Concurrent_ConcurrentQueue_Action__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ConcurrentQueue_Action);
  System_Collections_Concurrent_ConcurrentQueue_object____ctor
            ((System_Collections_Concurrent_ConcurrentQueue_T__o *)__this_02,MethodInfo_ConcurrentQueue_1_System_Action);
  (__this->fields)._mainThreadQueue = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._mainThreadQueue);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


