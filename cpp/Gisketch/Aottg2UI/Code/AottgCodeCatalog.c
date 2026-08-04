// Type: Gisketch.Aottg2UI.Code.AottgCodeCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/AottgCodeCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.AottgCodeCatalog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgCodeCatalog___c___cctor (const MethodInfo* method);
// 0x3b5d330

void Gisketch_Aottg2UI_Code_AottgCodeCatalog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057a9d53 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9d53 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgCodeCatalog___c___ctor (Gisketch_Aottg2UI_Code_AottgCodeCatalog___c_o* __this, const MethodInfo* method);
// 0x3b5d3a0

void Gisketch_Aottg2UI_Code_AottgCodeCatalog___c___ctor
               (Gisketch_Aottg2UI_Code_AottgCodeCatalog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog.<>c$$<DiscoverFresh>b__13_0
// il2cpp: int32_t Gisketch_Aottg2UI_Code_AottgCodeCatalog___c___DiscoverFresh_b__13_0 (Gisketch_Aottg2UI_Code_AottgCodeCatalog___c_o* __this, Gisketch_Aottg2UI_Code_AottgScreenEntry_o* a, Gisketch_Aottg2UI_Code_AottgScreenEntry_o* b, const MethodInfo* method);
// 0x3b5d3b0

int32_t Gisketch_Aottg2UI_Code_AottgCodeCatalog___c___DiscoverFresh_b__13_0
                  (Gisketch_Aottg2UI_Code_AottgCodeCatalog___c_o *__this,
                  Gisketch_Aottg2UI_Code_AottgScreenEntry_o *a,Gisketch_Aottg2UI_Code_AottgScreenEntry_o *b,
                  MethodInfo *method)

{
  int32_t iVar1;
  long extraout_RDX;
  long extraout_RDX_00;
  
  if ((a != (Gisketch_Aottg2UI_Code_AottgScreenEntry_o *)0x0) &&
     (b != (Gisketch_Aottg2UI_Code_AottgScreenEntry_o *)0x0)) {
    iVar1 = System_String__CompareOrdinal
                      ((a->fields)._Id_k__BackingField,(b->fields)._Id_k__BackingField,(MethodInfo *)0x0);
    return iVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((a != (Gisketch_Aottg2UI_Code_AottgScreenEntry_o *)0x0) && (extraout_RDX != 0)) {
    iVar1 = System_String__CompareOrdinal
                      ((a->fields)._Id_k__BackingField,*(System_String_o **)(extraout_RDX + 0x10),
                       (MethodInfo *)0x0);
    return iVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((a != (Gisketch_Aottg2UI_Code_AottgScreenEntry_o *)0x0) && (extraout_RDX_00 != 0)) {
    iVar1 = System_String__CompareOrdinal
                      ((a->fields)._Id_k__BackingField,*(System_String_o **)(extraout_RDX_00 + 0x10),
                       (MethodInfo *)0x0);
    return iVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  return (int32_t)__this[1].klass;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog.<>c$$<DiscoverFresh>b__13_1
// il2cpp: int32_t Gisketch_Aottg2UI_Code_AottgCodeCatalog___c___DiscoverFresh_b__13_1 (Gisketch_Aottg2UI_Code_AottgCodeCatalog___c_o* __this, Gisketch_Aottg2UI_Code_AottgDialogEntry_o* a, Gisketch_Aottg2UI_Code_AottgDialogEntry_o* b, const MethodInfo* method);
// 0x3b5d3d0

int32_t Gisketch_Aottg2UI_Code_AottgCodeCatalog___c___DiscoverFresh_b__13_1
                  (Gisketch_Aottg2UI_Code_AottgCodeCatalog___c_o *__this,
                  Gisketch_Aottg2UI_Code_AottgDialogEntry_o *a,Gisketch_Aottg2UI_Code_AottgDialogEntry_o *b,
                  MethodInfo *method)

{
  int32_t iVar1;
  long extraout_RDX;
  
  if ((a != (Gisketch_Aottg2UI_Code_AottgDialogEntry_o *)0x0) &&
     (b != (Gisketch_Aottg2UI_Code_AottgDialogEntry_o *)0x0)) {
    iVar1 = System_String__CompareOrdinal
                      ((a->fields)._Id_k__BackingField,(b->fields)._Id_k__BackingField,(MethodInfo *)0x0);
    return iVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if ((a != (Gisketch_Aottg2UI_Code_AottgDialogEntry_o *)0x0) && (extraout_RDX != 0)) {
    iVar1 = System_String__CompareOrdinal
                      ((a->fields)._Id_k__BackingField,*(System_String_o **)(extraout_RDX + 0x10),
                       (MethodInfo *)0x0);
    return iVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  return (int32_t)__this[1].klass;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog.<>c$$<DiscoverFresh>b__13_2
// il2cpp: int32_t Gisketch_Aottg2UI_Code_AottgCodeCatalog___c___DiscoverFresh_b__13_2 (Gisketch_Aottg2UI_Code_AottgCodeCatalog___c_o* __this, Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* a, Gisketch_Aottg2UI_Code_AottgPopoverEntry_o* b, const MethodInfo* method);
// 0x3b5d3f0

int32_t Gisketch_Aottg2UI_Code_AottgCodeCatalog___c___DiscoverFresh_b__13_2
                  (Gisketch_Aottg2UI_Code_AottgCodeCatalog___c_o *__this,
                  Gisketch_Aottg2UI_Code_AottgPopoverEntry_o *a,Gisketch_Aottg2UI_Code_AottgPopoverEntry_o *b,
                  MethodInfo *method)

{
  int32_t iVar1;
  
  if ((a != (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o *)0x0) &&
     (b != (Gisketch_Aottg2UI_Code_AottgPopoverEntry_o *)0x0)) {
    iVar1 = System_String__CompareOrdinal
                      ((a->fields)._Id_k__BackingField,(b->fields)._Id_k__BackingField,(MethodInfo *)0x0);
    return iVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  return (int32_t)__this[1].klass;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$get_Screens
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgScreenEntry__o* Gisketch_Aottg2UI_Code_AottgCodeCatalog__get_Screens (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* __this, const MethodInfo* method);
// 0x3b5bda0

System_Collections_Generic_IReadOnlyList_AottgScreenEntry__o *
Gisketch_Aottg2UI_Code_AottgCodeCatalog__get_Screens
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_AottgScreenEntry__o *)(__this->fields)._screens;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$get_Dialogs
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgDialogEntry__o* Gisketch_Aottg2UI_Code_AottgCodeCatalog__get_Dialogs (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* __this, const MethodInfo* method);
// 0x3b5bdb0

System_Collections_Generic_IReadOnlyList_AottgDialogEntry__o *
Gisketch_Aottg2UI_Code_AottgCodeCatalog__get_Dialogs
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_AottgDialogEntry__o *)(__this->fields)._dialogs;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$get_Popovers
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgPopoverEntry__o* Gisketch_Aottg2UI_Code_AottgCodeCatalog__get_Popovers (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* __this, const MethodInfo* method);
// 0x3b5bdc0

System_Collections_Generic_IReadOnlyList_AottgPopoverEntry__o *
Gisketch_Aottg2UI_Code_AottgCodeCatalog__get_Popovers
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *__this,MethodInfo *method)

{
  return (System_Collections_Generic_IReadOnlyList_AottgPopoverEntry__o *)(__this->fields)._popovers;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$get_ScreenIds
// il2cpp: System_String_array* Gisketch_Aottg2UI_Code_AottgCodeCatalog__get_ScreenIds (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* __this, const MethodInfo* method);
// 0x3b5bdd0

System_String_array *
Gisketch_Aottg2UI_Code_AottgCodeCatalog__get_ScreenIds
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgScreenEntry_array *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  Il2CppObject *pIVar4;
  undefined8 extraout_RAX;
  undefined8 uVar5;
  long *plVar6;
  undefined8 extraout_RAX_00;
  ulong uVar7;
  undefined8 uVar8;
  int iVar9;
  System_String_o *b;
  System_Collections_Generic_List_AottgScreenEntry__o *__this_05;
  System_String_o **ppSVar10;
  System_String_array *unaff_R15;
  undefined1 auVar11 [12];
  System_Collections_Generic_List_T__o *pSVar12;
  Il2CppMethodPointer pIVar13;
  
  __this_05 = (System_Collections_Generic_List_AottgScreenEntry__o *)__this;
  if (g_data_057a9d4a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgScreenEntry_get_Item);
    __this_05 = (System_Collections_Generic_List_AottgScreenEntry__o *)&TypeInfo_string;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d4a = '\x01';
  }
  if ((__this->fields)._screens == (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
label_03b5be93:
    pSVar3 = unaff_R15;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar3 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    __this_05 = (__this->fields)._screens;
    if (__this_05 == (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) goto label_03b5be93;
    if (pSVar3 != (System_String_array *)0x0) {
      ppSVar10 = pSVar3->m_Items;
      uVar7 = 0;
      do {
        if ((long)(__this_05->fields)._size <= (long)uVar7) {
          return pSVar3;
        }
        pIVar4 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_05,(int32_t)uVar7,MethodInfo_AottgScreenEntry_get_Item
                           );
        unaff_R15 = pSVar3;
        if (pIVar4 == (Il2CppObject *)0x0) break;
        if ((uint)pSVar3->max_length <= uVar7) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b5beb0;
        }
        *ppSVar10 = (System_String_o *)pIVar4[1].klass;
        il2cpp_runtime_helper_022b4080(ppSVar10);
        uVar7 = uVar7 + 1;
        __this_05 = (__this->fields)._screens;
        ppSVar10 = ppSVar10 + 1;
      } while (__this_05 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0);
      goto label_03b5be93;
    }
  }
  if ((__this_05->fields)._size < 1) {
    return pSVar3;
  }
label_03b5beb0:
  b = (System_String_o *)0x0;
  System_Collections_Generic_List_object___get_Item
            ((System_Collections_Generic_List_object__o *)__this_05,0,MethodInfo_AottgScreenEntry_get_Item);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d4b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgScreenEntry_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Code_AottgScreenEn);
    g_data_057a9d4b = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar13 = (Il2CppMethodPointer)0x0;
  pIVar4 = (Il2CppObject *)0x0;
  __this_00 = (__this_05->fields)._items;
  if (__this_00 == (Gisketch_Aottg2UI_Code_AottgScreenEntry_array *)0x0) {
label_03b5bfca:
    auVar11 = il2cpp_runtime_helper_022b2c90();
    uVar8 = auVar11._0_8_;
    if (auVar11._8_4_ == 1) {
      plVar6 = (long *)__cxa_begin_catch(uVar8);
      lVar1 = *plVar6;
      __cxa_end_catch();
      __this_03.fields._8_8_ = pIVar13;
      __this_03.fields._list = pSVar12;
      __this_03.fields._current = pIVar4;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
      uVar8 = 0;
      iVar9 = 0;
      uVar5 = extraout_RAX_00;
      if (lVar1 == 0) goto label_03b5bfb2;
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_04.fields._8_8_ = pIVar13;
    __this_04.fields._list = pSVar12;
    __this_04.fields._current = pIVar4;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
    _Unwind_Resume(uVar8);
  }
  System_Collections_Generic_List_object___GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffa0,
             (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Code_AottgScreenEn);
  do {
    __this_01.fields._8_8_ = pIVar13;
    __this_01.fields._list = pSVar12;
    __this_01.fields._current = pIVar4;
    bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                      (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffa0);
    if ((char)bVar2 == '\0') {
      iVar9 = 5;
      uVar8 = 0;
      goto label_03b5bfa0;
    }
    if (pIVar4 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      goto label_03b5bfca;
    }
    bVar2 = System_String__Equals_3af50f0((System_String_o *)pIVar4[1].klass,b,5,(MethodInfo *)0x0);
  } while ((char)bVar2 == '\0');
  uVar8 = 1;
  iVar9 = 4;
label_03b5bfa0:
  __this_02.fields._8_8_ = pIVar13;
  __this_02.fields._list = pSVar12;
  __this_02.fields._current = pIVar4;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffa0);
  uVar5 = extraout_RAX;
label_03b5bfb2:
  return (System_String_array *)CONCAT71((int7)((ulong)uVar5 >> 8),iVar9 == 4 & (byte)uVar8);
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$HasScreen
// il2cpp: bool Gisketch_Aottg2UI_Code_AottgCodeCatalog__HasScreen (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* __this, System_String_o* id, const MethodInfo* method);
// 0x3b5bed0

bool_conflict
Gisketch_Aottg2UI_Code_AottgCodeCatalog__HasScreen
          (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *__this,System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_List_AottgScreenEntry__o *__this_00;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar2;
  undefined8 extraout_RAX;
  undefined8 uVar3;
  long *plVar4;
  undefined8 extraout_RAX_00;
  undefined8 uVar5;
  int iVar6;
  undefined1 auVar7 [12];
  System_Collections_Generic_List_T__o *pSVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppObject *pIVar10;
  
  if (g_data_057a9d4b == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgScreenEntry_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Code_AottgScreenEn);
    g_data_057a9d4b = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar10 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._screens;
  if (__this_00 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T_Enumerator_Gisketch_Aottg2UI_Code_AottgScreenEn);
    do {
      __this_01.fields._8_8_ = pIVar9;
      __this_01.fields._list = pSVar8;
      __this_01.fields._current = pIVar10;
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8);
      if ((char)bVar2 == '\0') {
        iVar6 = 5;
        uVar5 = 0;
        goto label_03b5bfa0;
      }
      if (pIVar10 == (Il2CppObject *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        goto label_03b5bfca;
      }
      bVar2 = System_String__Equals_3af50f0((System_String_o *)pIVar10[1].klass,id,5,(MethodInfo *)0x0);
    } while ((char)bVar2 == '\0');
    uVar5 = 1;
    iVar6 = 4;
label_03b5bfa0:
    __this_02.fields._8_8_ = pIVar9;
    __this_02.fields._list = pSVar8;
    __this_02.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar3 = extraout_RAX;
label_03b5bfb2:
    return (bool_conflict)CONCAT71((int7)((ulong)uVar3 >> 8),iVar6 == 4 & (byte)uVar5);
  }
label_03b5bfca:
  auVar7 = il2cpp_runtime_helper_022b2c90();
  uVar5 = auVar7._0_8_;
  if (auVar7._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(uVar5);
    lVar1 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar9;
    __this_03.fields._list = pSVar8;
    __this_03.fields._current = pIVar10;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    uVar5 = 0;
    iVar6 = 0;
    uVar3 = extraout_RAX_00;
    if (lVar1 == 0) goto label_03b5bfb2;
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_04.fields._8_8_ = pIVar9;
  __this_04.fields._list = pSVar8;
  __this_04.fields._current = pIVar10;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
  _Unwind_Resume(uVar5);
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$Discover
// il2cpp: Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* Gisketch_Aottg2UI_Code_AottgCodeCatalog__Discover (const MethodInfo* method);
// 0x3b5c060

Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *
Gisketch_Aottg2UI_Code_AottgCodeCatalog__Discover(MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_IEqualityComparer_TKey__o *pSVar3;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar4;
  System_AppDomain_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_AppDomain_o *__this_03;
  System_Reflection_Assembly_array *pSVar5;
  ulong uVar6;
  Gisketch_Aottg2UI_Code_AottgDialogEntry_array *comparison;
  System_Comparison_T__o *pSVar7;
  System_Collections_Generic_List_AottgScreenEntry__o *pSVar8;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar9;
  System_Collections_Generic_List_AottgPopoverEntry__o *pSVar10;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *extraout_RAX;
  ulong uVar11;
  MethodInfo *in_RSI;
  System_AppDomain_o *__this_04;
  MethodInfo *in_R9;
  
  if (g_data_057a9d4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCodeCatalog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Comparison_AottgScreenEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Comparison_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Comparison_AottgPopoverEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_DiscoverFresh_b__13_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_DiscoverFresh_b__13_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_DiscoverFresh_b__13_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9d4c = '\x01';
  }
  __this = (System_AppDomain_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCodeCatalog);
  Gisketch_Aottg2UI_Code_AottgCodeCatalog___ctor((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this,in_RSI);
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_00,pSVar3,MethodInfo_Dictionary_2_System_String_System_Type);
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_01,pSVar3,MethodInfo_Dictionary_2_System_String_System_Type);
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_02,pSVar3,MethodInfo_Dictionary_2_System_String_System_Type);
  __this_04 = (System_AppDomain_o *)0x0;
  __this_03 = System_AppDomain__get_CurrentDomain((MethodInfo *)0x0);
  if (((__this_03 != (System_AppDomain_o *)0x0) &&
      (pSVar5 = System_AppDomain__GetAssemblies_3d04e50(__this_03,(MethodInfo *)0x0), __this_04 = __this_03,
      pSVar5 != (System_Reflection_Assembly_array *)0x0)) && (__this != (System_AppDomain_o *)0x0)) {
    if (0 < (int)pSVar5->max_length) {
      uVar6 = pSVar5->max_length & 0xffffffff;
      uVar11 = 0;
      do {
        if (uVar6 <= uVar11) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b5c5eb;
        }
        __this_03 = __this;
        Gisketch_Aottg2UI_Code_AottgCodeCatalog__ReadAssembly
                  ((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this,pSVar5->m_Items[uVar11],
                   (System_Collections_Generic_Dictionary_string__Type__o *)__this_00,
                   (System_Collections_Generic_Dictionary_string__Type__o *)__this_01,
                   (System_Collections_Generic_Dictionary_string__Type__o *)__this_02,in_R9);
        uVar11 = uVar11 + 1;
        uVar2 = (uint)pSVar5->max_length;
        uVar6 = (ulong)uVar2;
        __this_04 = __this_03;
      } while ((long)uVar11 < (long)(int)uVar2);
    }
    __this_04 = __this_03;
    if (__this != (System_AppDomain_o *)0x0) {
      pSVar8 = (System_Collections_Generic_List_AottgScreenEntry__o *)(__this->fields)._identity;
      if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar7 = ((System_Collections_Generic_List_AottgDialogEntry__o *)
                 TypeInfo_c[1].fields._mono_app_domain)->monitor;
      }
      else {
        pSVar7 = ((System_Collections_Generic_List_AottgDialogEntry__o *)
                 TypeInfo_c[1].fields._mono_app_domain)->monitor;
      }
      __this_04 = TypeInfo_c;
      if (pSVar7 == (System_Comparison_T__o *)0x0) {
        if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_Comparison_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Comparison_AottgScreenEntry);
        System_Comparison_object____ctor();
        pSVar9 = (System_Collections_Generic_List_AottgDialogEntry__o *)
                 TypeInfo_c[1].fields._mono_app_domain;
        pSVar9->monitor = pSVar7;
        __this_04 = (System_AppDomain_o *)&pSVar9->monitor;
        il2cpp_runtime_helper_022b4080(__this_04,pSVar7);
      }
      if (pSVar8 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
        System_Collections_Generic_List_object___Sort_362e2a0
                  ((System_Collections_Generic_List_object__o *)pSVar8,pSVar7,MethodInfo_Void_Sort);
        pSVar9 = (System_Collections_Generic_List_AottgDialogEntry__o *)(__this->fields)._mono_app_domain;
        if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          comparison = (((System_Collections_Generic_List_AottgDialogEntry__o *)
                        TypeInfo_c[1].fields._mono_app_domain)->fields)._items;
        }
        else {
          comparison = (((System_Collections_Generic_List_AottgDialogEntry__o *)
                        TypeInfo_c[1].fields._mono_app_domain)->fields)._items;
        }
        __this_04 = TypeInfo_c;
        if (comparison == (Gisketch_Aottg2UI_Code_AottgDialogEntry_array *)0x0) {
          if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          comparison = (Gisketch_Aottg2UI_Code_AottgDialogEntry_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Comparison_AottgDialogEntry);
          System_Comparison_object____ctor();
          pSVar4 = (System_Collections_Generic_List_AottgDialogEntry__o *)
                   TypeInfo_c[1].fields._mono_app_domain;
          (pSVar4->fields)._items = comparison;
          __this_04 = (System_AppDomain_o *)&pSVar4->fields;
          il2cpp_runtime_helper_022b4080(__this_04,comparison);
        }
        if (pSVar9 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
          System_Collections_Generic_List_object___Sort_362e2a0
                    ((System_Collections_Generic_List_object__o *)pSVar9,(System_Comparison_T__o *)comparison,
                     MethodInfo_Void_Sort);
          pSVar10 = (System_Collections_Generic_List_AottgPopoverEntry__o *)(__this->fields)._evidence;
          if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar7 = *(System_Comparison_T__o **)
                      &(((System_Collections_Generic_List_AottgDialogEntry__o *)
                        TypeInfo_c[1].fields._mono_app_domain)->fields)._size;
          }
          else {
            pSVar7 = *(System_Comparison_T__o **)
                      &(((System_Collections_Generic_List_AottgDialogEntry__o *)
                        TypeInfo_c[1].fields._mono_app_domain)->fields)._size;
          }
          __this_04 = TypeInfo_c;
          if (pSVar7 == (System_Comparison_T__o *)0x0) {
            if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = (System_Comparison_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Comparison_AottgPopoverEntry);
            System_Comparison_object____ctor();
            pSVar9 = (System_Collections_Generic_List_AottgDialogEntry__o *)
                     TypeInfo_c[1].fields._mono_app_domain;
            *(System_Comparison_T__o **)&(pSVar9->fields)._size = pSVar7;
            __this_04 = (System_AppDomain_o *)&(pSVar9->fields)._size;
            il2cpp_runtime_helper_022b4080(__this_04,pSVar7);
          }
          if (pSVar10 != (System_Collections_Generic_List_AottgPopoverEntry__o *)0x0) {
            System_Collections_Generic_List_object___Sort_362e2a0
                      ((System_Collections_Generic_List_object__o *)pSVar10,pSVar7,MethodInfo_Void_Sort);
            return (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this;
          }
        }
      }
    }
  }
label_03b5c5eb:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d52 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgScreenEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgPopoverEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgScreenEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgPopoverEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgDialogEntry);
    g_data_057a9d52 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_AottgScreenEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgScreenEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar8,MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgScreenEntry);
  (__this_04->fields)._identity = (Il2CppObject *)pSVar8;
  il2cpp_runtime_helper_022b4080(&__this_04->fields,pSVar8);
  pSVar9 = (System_Collections_Generic_List_AottgDialogEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgDialogEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgDialogEntry);
  (__this_04->fields)._mono_app_domain = (intptr_t)pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields)._mono_app_domain,pSVar9);
  pSVar10 = (System_Collections_Generic_List_AottgPopoverEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgPopoverEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgPopoverEntry);
  (__this_04->fields)._evidence = (Il2CppObject *)pSVar10;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields)._evidence);
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$DiscoverFresh
// il2cpp: Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh (const MethodInfo* method);
// 0x3b5c070

Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *
Gisketch_Aottg2UI_Code_AottgCodeCatalog__DiscoverFresh(MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  System_Collections_Generic_IEqualityComparer_TKey__o *pSVar3;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar4;
  System_AppDomain_o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_AppDomain_o *__this_03;
  System_Reflection_Assembly_array *pSVar5;
  ulong uVar6;
  Gisketch_Aottg2UI_Code_AottgDialogEntry_array *comparison;
  System_Comparison_T__o *pSVar7;
  System_Collections_Generic_List_AottgScreenEntry__o *pSVar8;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar9;
  System_Collections_Generic_List_AottgPopoverEntry__o *pSVar10;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *extraout_RAX;
  ulong uVar11;
  MethodInfo *in_RSI;
  System_AppDomain_o *__this_04;
  MethodInfo *in_R9;
  
  if (g_data_057a9d4c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCodeCatalog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Comparison_AottgScreenEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Comparison_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Comparison_AottgPopoverEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Type);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Type);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Sort);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_DiscoverFresh_b__13_0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_DiscoverFresh_b__13_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_DiscoverFresh_b__13_2);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057a9d4c = '\x01';
  }
  __this = (System_AppDomain_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCodeCatalog);
  Gisketch_Aottg2UI_Code_AottgCodeCatalog___ctor((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this,in_RSI);
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_00,pSVar3,MethodInfo_Dictionary_2_System_String_System_Type);
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_01 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_01,pSVar3,MethodInfo_Dictionary_2_System_String_System_Type);
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Type);
  System_Collections_Generic_Dictionary_object__object____ctor_31042a0(__this_02,pSVar3,MethodInfo_Dictionary_2_System_String_System_Type);
  __this_04 = (System_AppDomain_o *)0x0;
  __this_03 = System_AppDomain__get_CurrentDomain((MethodInfo *)0x0);
  if (((__this_03 != (System_AppDomain_o *)0x0) &&
      (pSVar5 = System_AppDomain__GetAssemblies_3d04e50(__this_03,(MethodInfo *)0x0), __this_04 = __this_03,
      pSVar5 != (System_Reflection_Assembly_array *)0x0)) && (__this != (System_AppDomain_o *)0x0)) {
    if (0 < (int)pSVar5->max_length) {
      uVar6 = pSVar5->max_length & 0xffffffff;
      uVar11 = 0;
      do {
        if (uVar6 <= uVar11) {
          il2cpp_runtime_helper_022b2ca0();
          goto label_03b5c5eb;
        }
        __this_03 = __this;
        Gisketch_Aottg2UI_Code_AottgCodeCatalog__ReadAssembly
                  ((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this,pSVar5->m_Items[uVar11],
                   (System_Collections_Generic_Dictionary_string__Type__o *)__this_00,
                   (System_Collections_Generic_Dictionary_string__Type__o *)__this_01,
                   (System_Collections_Generic_Dictionary_string__Type__o *)__this_02,in_R9);
        uVar11 = uVar11 + 1;
        uVar2 = (uint)pSVar5->max_length;
        uVar6 = (ulong)uVar2;
        __this_04 = __this_03;
      } while ((long)uVar11 < (long)(int)uVar2);
    }
    __this_04 = __this_03;
    if (__this != (System_AppDomain_o *)0x0) {
      pSVar8 = (System_Collections_Generic_List_AottgScreenEntry__o *)(__this->fields)._identity;
      if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar7 = ((System_Collections_Generic_List_AottgDialogEntry__o *)
                 TypeInfo_c[1].fields._mono_app_domain)->monitor;
      }
      else {
        pSVar7 = ((System_Collections_Generic_List_AottgDialogEntry__o *)
                 TypeInfo_c[1].fields._mono_app_domain)->monitor;
      }
      __this_04 = TypeInfo_c;
      if (pSVar7 == (System_Comparison_T__o *)0x0) {
        if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = (System_Comparison_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Comparison_AottgScreenEntry);
        System_Comparison_object____ctor();
        pSVar9 = (System_Collections_Generic_List_AottgDialogEntry__o *)
                 TypeInfo_c[1].fields._mono_app_domain;
        pSVar9->monitor = pSVar7;
        __this_04 = (System_AppDomain_o *)&pSVar9->monitor;
        il2cpp_runtime_helper_022b4080(__this_04,pSVar7);
      }
      if (pSVar8 != (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
        System_Collections_Generic_List_object___Sort_362e2a0
                  ((System_Collections_Generic_List_object__o *)pSVar8,pSVar7,MethodInfo_Void_Sort);
        pSVar9 = (System_Collections_Generic_List_AottgDialogEntry__o *)(__this->fields)._mono_app_domain;
        if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          comparison = (((System_Collections_Generic_List_AottgDialogEntry__o *)
                        TypeInfo_c[1].fields._mono_app_domain)->fields)._items;
        }
        else {
          comparison = (((System_Collections_Generic_List_AottgDialogEntry__o *)
                        TypeInfo_c[1].fields._mono_app_domain)->fields)._items;
        }
        __this_04 = TypeInfo_c;
        if (comparison == (Gisketch_Aottg2UI_Code_AottgDialogEntry_array *)0x0) {
          if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          comparison = (Gisketch_Aottg2UI_Code_AottgDialogEntry_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Comparison_AottgDialogEntry);
          System_Comparison_object____ctor();
          pSVar4 = (System_Collections_Generic_List_AottgDialogEntry__o *)
                   TypeInfo_c[1].fields._mono_app_domain;
          (pSVar4->fields)._items = comparison;
          __this_04 = (System_AppDomain_o *)&pSVar4->fields;
          il2cpp_runtime_helper_022b4080(__this_04,comparison);
        }
        if (pSVar9 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
          System_Collections_Generic_List_object___Sort_362e2a0
                    ((System_Collections_Generic_List_object__o *)pSVar9,(System_Comparison_T__o *)comparison,
                     MethodInfo_Void_Sort);
          pSVar10 = (System_Collections_Generic_List_AottgPopoverEntry__o *)(__this->fields)._evidence;
          if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar7 = *(System_Comparison_T__o **)
                      &(((System_Collections_Generic_List_AottgDialogEntry__o *)
                        TypeInfo_c[1].fields._mono_app_domain)->fields)._size;
          }
          else {
            pSVar7 = *(System_Comparison_T__o **)
                      &(((System_Collections_Generic_List_AottgDialogEntry__o *)
                        TypeInfo_c[1].fields._mono_app_domain)->fields)._size;
          }
          __this_04 = TypeInfo_c;
          if (pSVar7 == (System_Comparison_T__o *)0x0) {
            if (*(int *)((long)&TypeInfo_c[1].fields.AssemblyResolve + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar7 = (System_Comparison_T__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Comparison_AottgPopoverEntry);
            System_Comparison_object____ctor();
            pSVar9 = (System_Collections_Generic_List_AottgDialogEntry__o *)
                     TypeInfo_c[1].fields._mono_app_domain;
            *(System_Comparison_T__o **)&(pSVar9->fields)._size = pSVar7;
            __this_04 = (System_AppDomain_o *)&(pSVar9->fields)._size;
            il2cpp_runtime_helper_022b4080(__this_04,pSVar7);
          }
          if (pSVar10 != (System_Collections_Generic_List_AottgPopoverEntry__o *)0x0) {
            System_Collections_Generic_List_object___Sort_362e2a0
                      ((System_Collections_Generic_List_object__o *)pSVar10,pSVar7,MethodInfo_Void_Sort);
            return (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this;
          }
        }
      }
    }
  }
label_03b5c5eb:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9d52 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgScreenEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgPopoverEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgScreenEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgPopoverEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgDialogEntry);
    g_data_057a9d52 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_List_AottgScreenEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgScreenEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar8,MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgScreenEntry);
  (__this_04->fields)._identity = (Il2CppObject *)pSVar8;
  il2cpp_runtime_helper_022b4080(&__this_04->fields,pSVar8);
  pSVar9 = (System_Collections_Generic_List_AottgDialogEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgDialogEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar9,MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgDialogEntry);
  (__this_04->fields)._mono_app_domain = (intptr_t)pSVar9;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields)._mono_app_domain,pSVar9);
  pSVar10 = (System_Collections_Generic_List_AottgPopoverEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgPopoverEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar10,MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgPopoverEntry);
  (__this_04->fields)._evidence = (Il2CppObject *)pSVar10;
  il2cpp_runtime_helper_022b4080(&(__this_04->fields)._evidence);
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$ReadAssembly
// il2cpp: void Gisketch_Aottg2UI_Code_AottgCodeCatalog__ReadAssembly (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* __this, System_Reflection_Assembly_o* assembly, System_Collections_Generic_Dictionary_string__Type__o* screens, System_Collections_Generic_Dictionary_string__Type__o* dialogs, System_Collections_Generic_Dictionary_string__Type__o* popovers, const MethodInfo* method);
// 0x3b5c700

void Gisketch_Aottg2UI_Code_AottgCodeCatalog__ReadAssembly
               (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *__this,System_Reflection_Assembly_o *assembly,
               System_Collections_Generic_Dictionary_string__Type__o *screens,
               System_Collections_Generic_Dictionary_string__Type__o *dialogs,
               System_Collections_Generic_Dictionary_string__Type__o *popovers,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *left;
  long lVar2;
  char cVar3;
  bool_conflict bVar4;
  System_Type_array *pSVar5;
  Gisketch_Aottg2UI_Code_AottgScreenAttribute_o *attribute;
  System_Type_o *pSVar6;
  Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *attribute_00;
  Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *attribute_01;
  long *plVar7;
  undefined8 uVar8;
  long *plVar9;
  MethodInfo *method_00;
  System_RuntimeTypeHandle_o handle;
  MethodInfo *method_01;
  ulong uVar10;
  undefined1 auVar11 [12];
  
  method_00 = (MethodInfo *)assembly;
  method_01 = (MethodInfo *)popovers;
  if (g_data_057a9d4d == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDialogAttribute_Attribute_AottgDialogAttribute);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgPopoverAttribute_Attribute_AottgPopoverAttribute);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgScreenAttribute_Attribute_AottgScreenAttribute);
    il2cpp_runtime_helper_023445d0(&TypeRef_AottgDialog);
    il2cpp_runtime_helper_023445d0(&TypeRef_AottgPopover);
    il2cpp_runtime_helper_023445d0(&TypeRef_AottgScreen);
    g_data_057a9d4d = '\x01';
  }
  pSVar5 = Gisketch_Aottg2UI_Code_AottgCodeCatalog__SafeTypes(assembly,method_00);
  handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)assembly;
  if (pSVar5 != (System_Type_array *)0x0) {
    if ((int)pSVar5->max_length < 1) {
      return;
    }
    uVar10 = 0;
    if ((pSVar5->max_length & 0xffffffff) != 0) {
      do {
        left = (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)pSVar5->m_Items[uVar10];
        if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        assembly = (System_Reflection_Assembly_o *)left;
        bVar4 = System_Type__op_Equality((System_Type_o *)left,(System_Type_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)assembly;
          if (left == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) goto label_03b5c9ae;
          assembly = (System_Reflection_Assembly_o *)left;
          bVar4 = System_Type__get_IsAbstract((System_Type_o *)left,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            attribute = (Gisketch_Aottg2UI_Code_AottgScreenAttribute_o *)
                        Gisketch_Aottg2UI_Code_AottgCodeCatalog__Attribute_object_
                                  ((System_Type_o *)left,MethodInfo_AottgScreenAttribute_Attribute_AottgScreenAttribute);
            handle = TypeRef_AottgScreen;
            if (attribute != (Gisketch_Aottg2UI_Code_AottgScreenAttribute_o *)0x0) {
              if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
              if (pSVar6 == (System_Type_o *)0x0) goto label_03b5c9ae;
              cVar3 = (*(pSVar6->klass->vtable)._22_IsAssignableFrom.methodPtr)
                                (pSVar6,left,(pSVar6->klass->vtable)._22_IsAssignableFrom.method);
              if (cVar3 != '\0') {
                Gisketch_Aottg2UI_Code_AottgCodeCatalog__AddScreen
                          (__this,(System_Type_o *)left,attribute,screens,method_01);
              }
            }
            attribute_00 = (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)
                           Gisketch_Aottg2UI_Code_AottgCodeCatalog__Attribute_object_
                                     ((System_Type_o *)left,MethodInfo_AottgDialogAttribute_Attribute_AottgDialogAttribute);
            handle = TypeRef_AottgDialog;
            if (attribute_00 != (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x0) {
              if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar6 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
              if (pSVar6 == (System_Type_o *)0x0) goto label_03b5c9ae;
              cVar3 = (*(pSVar6->klass->vtable)._22_IsAssignableFrom.methodPtr)
                                (pSVar6,left,(pSVar6->klass->vtable)._22_IsAssignableFrom.method);
              if (cVar3 != '\0') {
                Gisketch_Aottg2UI_Code_AottgCodeCatalog__AddDialog
                          (__this,(System_Type_o *)left,attribute_00,dialogs,method_01);
              }
            }
            assembly = (System_Reflection_Assembly_o *)left;
            attribute_01 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)
                           Gisketch_Aottg2UI_Code_AottgCodeCatalog__Attribute_object_
                                     ((System_Type_o *)left,MethodInfo_AottgPopoverAttribute_Attribute_AottgPopoverAttribute);
            handle = TypeRef_AottgPopover;
            if (attribute_01 != (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x0) {
              if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              assembly = (System_Reflection_Assembly_o *)
                         System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
              if ((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)assembly ==
                  (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) goto label_03b5c9ae;
              cVar3 = (*(((System_Type_c *)((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)assembly)->klass)->
                        vtable)._22_IsAssignableFrom.methodPtr)
                                (assembly,left,
                                 (((System_Type_c *)
                                  ((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)assembly)->klass)->vtable).
                                 _22_IsAssignableFrom.method);
              if (cVar3 != '\0') {
                assembly = (System_Reflection_Assembly_o *)__this;
                Gisketch_Aottg2UI_Code_AottgCodeCatalog__AddPopover
                          (__this,(System_Type_o *)left,attribute_01,popovers,method_01);
              }
            }
          }
        }
        uVar10 = uVar10 + 1;
        uVar1 = (uint)pSVar5->max_length;
        if ((long)(int)uVar1 <= (long)uVar10) {
          return;
        }
      } while (uVar10 < uVar1);
    }
    il2cpp_runtime_helper_022b2ca0();
    handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)assembly;
  }
label_03b5c9ae:
  il2cpp_runtime_helper_022b2c90();
  if (handle.fields.value != 0) {
    (*(((System_Type_c *)((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)handle.fields.value)->klass)->vtable).
      _19_get_IsSerializable.methodPtr)();
    return;
  }
  auVar11 = il2cpp_runtime_helper_022b2c90();
  uVar8 = auVar11._0_8_;
  if (auVar11._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(uVar8);
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_ReflectionTypeLoadException);
    cVar3 = il2cpp_runtime_helper_0233e000(uVar8,*(undefined8 *)*plVar7);
    if (cVar3 == '\0') {
      plVar9 = (long *)__cxa_allocate_exception(8);
      *plVar9 = *plVar7;
      __cxa_throw(plVar9,&PTR_PTR_05215060,0);
    }
    lVar2 = *plVar7;
    __cxa_end_catch();
    if (lVar2 != 0) {
      return;
    }
    uVar8 = il2cpp_runtime_helper_022b2c90();
    __cxa_end_catch();
  }
  _Unwind_Resume(uVar8);
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$AddScreen
// il2cpp: void Gisketch_Aottg2UI_Code_AottgCodeCatalog__AddScreen (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* __this, System_Type_o* type, Gisketch_Aottg2UI_Code_AottgScreenAttribute_o* attribute, System_Collections_Generic_Dictionary_string__Type__o* seen, const MethodInfo* method);
// 0x3b5ca70

void Gisketch_Aottg2UI_Code_AottgCodeCatalog__AddScreen
               (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *__this,System_Type_o *type,
               Gisketch_Aottg2UI_Code_AottgScreenAttribute_o *attribute,
               System_Collections_Generic_Dictionary_string__Type__o *seen,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Code_AottgScreenEntry_array *pGVar3;
  System_Object_array *pSVar4;
  Il2CppClass *pIVar5;
  MethodInfo_3106990 *pMVar6;
  Il2CppObject *pIVar7;
  bool_conflict bVar8;
  Gisketch_Aottg2UI_Code_AottgScreenEntry_o *__this_00;
  undefined8 uVar9;
  System_String_array *values;
  System_String_o *pSVar10;
  System_InvalidOperationException_o *__this_01;
  MethodInfo_3106990 *pMVar11;
  MethodInfo_3106990 *pMVar12;
  System_Collections_Generic_List_AottgDialogEntry__o *extraout_RDX;
  System_Collections_Generic_List_AottgDialogEntry__o *extraout_RDX_00;
  Il2CppObject *value;
  System_String_o *extraout_RDX_01;
  System_Collections_Generic_List_AottgDialogEntry__o *type_00;
  System_Collections_Generic_List_AottgDialogEntry__o *type_01;
  System_Collections_Generic_List_AottgDialogEntry__o *value_00;
  System_String_o **__this_02;
  System_String_o **__this_03;
  System_String_o **ppSVar13;
  System_String_o *in_R9;
  System_Collections_Generic_Dictionary_string__Type__o *pSVar14;
  MethodInfo_3106990 *pMVar15;
  System_Collections_Generic_List_AottgScreenEntry__o *unaff_R13;
  System_String_o *unaff_R14;
  Il2CppObject *pIStack_c8;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGStack_c0;
  MethodInfo_3106990 *pMStack_b8;
  System_Collections_Generic_List_AottgScreenEntry__o *pSStack_b0;
  System_Collections_Generic_List_AottgDialogEntry__o *pSStack_a8;
  System_Collections_Generic_List_AottgDialogEntry__o *pSStack_a0;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGStack_98;
  MethodInfo_3106990 *pMStack_90;
  System_Collections_Generic_List_AottgScreenEntry__o *pSStack_88;
  System_Collections_Generic_List_AottgDialogEntry__o *pSStack_80;
  System_Collections_Generic_List_AottgDialogEntry__o *pSStack_78;
  Gisketch_Aottg2UI_Code_AottgScreenEntry_o *pGStack_70;
  System_Collections_Generic_Dictionary_string__Type__o *pSStack_68;
  System_Collections_Generic_List_AottgScreenEntry__o *pSStack_60;
  System_String_o *pSStack_58;
  System_Collections_Generic_List_AottgScreenEntry__o *pSStack_50;
  System_String_o *local_40;
  System_Collections_Generic_List_AottgDialogEntry__o *local_38;
  
  pMVar11 = (MethodInfo_3106990 *)seen;
  type_00 = (System_Collections_Generic_List_AottgDialogEntry__o *)type;
  __this_02 = (System_String_o **)__this;
  if (g_data_057a9d4e == '\0') {
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5ca9f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgScreenEntry);
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5caab;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    __this_02 = &"screen";
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5cab7;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d4e = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Code_AottgScreenEntry_o *)0x0;
  pSVar14 = seen;
  if (attribute != (Gisketch_Aottg2UI_Code_AottgScreenAttribute_o *)0x0) {
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5cae0;
    Gisketch_Aottg2UI_Code_AottgCodeCatalog__GuardDuplicate
              ("screen",(attribute->fields)._Id_k__BackingField,type,seen,method);
    __this = (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)(__this->fields)._screens;
    unaff_R14 = (attribute->fields)._Id_k__BackingField;
    pSVar14 = (System_Collections_Generic_Dictionary_string__Type__o *)
              (attribute->fields)._Title_k__BackingField;
    pSVar10 = (attribute->fields)._SearchTitle_k__BackingField;
    unaff_R13 = (System_Collections_Generic_List_AottgScreenEntry__o *)
                (attribute->fields)._SearchGroup_k__BackingField;
    local_40 = (attribute->fields)._BackScreenId_k__BackingField;
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5cb11;
    local_38 = (System_Collections_Generic_List_AottgDialogEntry__o *)type;
    __this_00 = (Gisketch_Aottg2UI_Code_AottgScreenEntry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgScreenEntry);
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5cb1e;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields)._Id_k__BackingField = unaff_R14;
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5cb2e;
    il2cpp_runtime_helper_022b4080(&__this_00->fields,unaff_R14);
    (__this_00->fields)._Title_k__BackingField = (System_String_o *)pSVar14;
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5cb3e;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._Title_k__BackingField,pSVar14);
    (__this_00->fields)._SearchTitle_k__BackingField = pSVar10;
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5cb4e;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._SearchTitle_k__BackingField,pSVar10);
    (__this_00->fields)._SearchGroup_k__BackingField = (System_String_o *)unaff_R13;
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5cb5e;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._SearchGroup_k__BackingField,unaff_R13);
    (__this_00->fields)._BackScreenId_k__BackingField = local_40;
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5cb70;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields)._BackScreenId_k__BackingField);
    __this_02 = (System_String_o **)&(__this_00->fields)._Type_k__BackingField;
    (__this_00->fields)._Type_k__BackingField = (System_Type_o *)local_38;
    pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5cb82;
    type_00 = local_38;
    il2cpp_runtime_helper_022b4080();
    pMVar12 = MethodInfo_Void_Add;
    pMVar11 = (MethodInfo_3106990 *)seen;
    if ((System_Collections_Generic_List_AottgScreenEntry__o *)__this !=
        (System_Collections_Generic_List_AottgScreenEntry__o *)0x0) {
      piVar1 = &(((System_Collections_Generic_List_AottgScreenEntry__o *)__this)->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar3 = (((System_Collections_Generic_List_AottgScreenEntry__o *)__this)->fields)._items;
      pMVar11 = pMVar12;
      if (pGVar3 != (Gisketch_Aottg2UI_Code_AottgScreenEntry_array *)0x0) {
        uVar2 = (((System_Collections_Generic_List_AottgScreenEntry__o *)__this)->fields)._size;
        if (uVar2 < (uint)pGVar3->max_length) {
          (((System_Collections_Generic_List_AottgScreenEntry__o *)__this)->fields)._size = uVar2 + 1;
          pGVar3->m_Items[(int)uVar2] = __this_00;
          il2cpp_runtime_helper_022b4080(pGVar3->m_Items + (int)uVar2,__this_00);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                   (MethodInfo_362C220 *)pMVar12->klass->rgctx_data->_14_TKey);
        return;
      }
    }
  }
  pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)0x3b5cbff;
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  type_01 = type_00;
  __this_03 = __this_02;
  pGStack_70 = __this_00;
  pSStack_68 = pSVar14;
  pSStack_60 = unaff_R13;
  pSStack_58 = unaff_R14;
  pSStack_50 = (System_Collections_Generic_List_AottgScreenEntry__o *)__this;
  if (g_data_057a9d4f == '\0') {
    pSStack_78 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cc2a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgDialogEntry);
    pSStack_78 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cc36;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    __this_03 = &"dialog";
    pSStack_78 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cc42;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d4f = '\x01';
  }
  pMVar15 = pMVar11;
  if (extraout_RDX != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    pSStack_78 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cc6b;
    Gisketch_Aottg2UI_Code_AottgCodeCatalog__GuardDuplicate
              ("dialog",
               (System_String_o *)
               (((System_RuntimeTypeHandle_o *)&(extraout_RDX->fields)._items)->fields).value,
               (System_Type_o *)type_00,(System_Collections_Generic_Dictionary_string__Type__o *)pMVar11,
               method);
    pMVar15 = (MethodInfo_3106990 *)
              (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_02)->fields)._dialogs;
    unaff_R13 = (System_Collections_Generic_List_AottgScreenEntry__o *)
                (((System_RuntimeTypeHandle_o *)&(extraout_RDX->fields)._items)->fields).value;
    pSStack_78 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cc82;
    __this_02 = (System_String_o **)il2cpp_runtime_helper_023052d0(TypeInfo_AottgDialogEntry);
    pSStack_78 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cc8f;
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_02)->fields)._screens = unaff_R13;
    pSStack_78 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cc9f;
    il2cpp_runtime_helper_022b4080(&((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_02)->fields,unaff_R13);
    (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_02)->fields)._dialogs = type_00;
    pSStack_78 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5ccaf;
    il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_02)->fields)._dialogs,type_00);
    __this_03 = (System_String_o **)
                &(((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_02)->fields)._popovers;
    (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_02)->fields)._popovers =
         (System_Collections_Generic_List_AottgPopoverEntry__o *)extraout_RDX;
    pSStack_78 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5ccbf;
    type_01 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    pMVar6 = MethodInfo_Void_Add;
    pMVar12 = pMVar11;
    if (pMVar15 != (MethodInfo_3106990 *)0x0) {
      piVar1 = (int32_t *)((long)&pMVar15->name + 4);
      *piVar1 = *piVar1 + 1;
      pSVar4 = ((System_Collections_Generic_List_object__Fields *)&pMVar15->invoker_method)->_items;
      pMVar12 = pMVar6;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = *(uint *)&pMVar15->name;
        if (uVar2 < (uint)pSVar4->max_length) {
          *(uint *)&pMVar15->name = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_02;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,__this_02);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pMVar15,(Il2CppObject *)__this_02,
                   (MethodInfo_362C220 *)pMVar6->klass->rgctx_data->_14_TKey);
        return;
      }
    }
  }
  pSStack_78 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cd36;
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar12;
  value_00 = type_01;
  ppSVar13 = __this_03;
  pGStack_98 = (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_02;
  pMStack_90 = pMVar15;
  pSStack_88 = unaff_R13;
  pSStack_80 = type_00;
  pSStack_78 = extraout_RDX;
  if (g_data_057a9d50 == '\0') {
    pSStack_a0 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cd6a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPopoverEntry);
    pSStack_a0 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cd76;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppSVar13 = &"popover";
    pSStack_a0 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cd82;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d50 = '\x01';
  }
  pMVar15 = pMVar12;
  if (extraout_RDX_00 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    pSStack_a0 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cdab;
    Gisketch_Aottg2UI_Code_AottgCodeCatalog__GuardDuplicate
              ("popover",
               (System_String_o *)
               (((System_RuntimeTypeHandle_o *)&(extraout_RDX_00->fields)._items)->fields).value,
               (System_Type_o *)type_01,(System_Collections_Generic_Dictionary_string__Type__o *)pMVar12,
               method);
    pMVar15 = (MethodInfo_3106990 *)
              (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_03)->fields)._popovers;
    unaff_R13 = (System_Collections_Generic_List_AottgScreenEntry__o *)
                (((System_RuntimeTypeHandle_o *)&(extraout_RDX_00->fields)._items)->fields).value;
    pSStack_a0 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cdc2;
    __this_03 = (System_String_o **)il2cpp_runtime_helper_023052d0(TypeInfo_AottgPopoverEntry);
    pSStack_a0 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cdcf;
    System_Object___ctor((Il2CppObject *)__this_03,(MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_03)->fields)._screens = unaff_R13;
    pSStack_a0 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cddf;
    il2cpp_runtime_helper_022b4080(&((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_03)->fields,unaff_R13);
    (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_03)->fields)._dialogs = type_01;
    pSStack_a0 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cdef;
    il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_03)->fields)._dialogs,type_01);
    ppSVar13 = (System_String_o **)
               &(((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_03)->fields)._popovers;
    (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_03)->fields)._popovers =
         (System_Collections_Generic_List_AottgPopoverEntry__o *)extraout_RDX_00;
    pSStack_a0 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cdff;
    value_00 = extraout_RDX_00;
    il2cpp_runtime_helper_022b4080();
    pMVar6 = MethodInfo_Void_Add;
    pMVar11 = pMVar12;
    if (pMVar15 != (MethodInfo_3106990 *)0x0) {
      piVar1 = (int32_t *)((long)&pMVar15->name + 4);
      *piVar1 = *piVar1 + 1;
      pSVar4 = ((System_Collections_Generic_List_object__Fields *)&pMVar15->invoker_method)->_items;
      pMVar11 = pMVar6;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = *(uint *)&pMVar15->name;
        if (uVar2 < (uint)pSVar4->max_length) {
          *(uint *)&pMVar15->name = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)__this_03;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,__this_03);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pMVar15,(Il2CppObject *)__this_03,
                   (MethodInfo_362C220 *)pMVar6->klass->rgctx_data->_14_TKey);
        return;
      }
    }
  }
  pSStack_a0 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5ce76;
  il2cpp_runtime_helper_022b2c90();
  pMVar12 = pMVar11;
  pGStack_c0 = (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_03;
  pMStack_b8 = pMVar15;
  pSStack_b0 = unaff_R13;
  pSStack_a8 = type_01;
  pSStack_a0 = extraout_RDX_00;
  if (g_data_057a9d51 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057a9d51 = '\x01';
  }
  pIStack_c8 = (Il2CppObject *)0x0;
  bVar8 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (pMVar11 == (MethodInfo_3106990 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pMVar12 = MethodInfo_Boolean_TryGetValue;
      bVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)pMVar11,
                         (Il2CppObject *)value_00,&pIStack_c8,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar8 == '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pMVar11,(Il2CppObject *)value_00
                   ,value,MethodInfo_Void_set_Item);
        return;
      }
    }
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar9,9);
    il2cpp_runtime_helper_01f681a0(values);
    uVar9 = il2cpp_runtime_helper_023445d0(&"Duplicate AoTTG ");
    il2cpp_runtime_helper_01f6dff0(values,0,uVar9);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,1,ppSVar13);
    il2cpp_runtime_helper_01f681a0(values);
    uVar9 = il2cpp_runtime_helper_023445d0(&" id '");
    il2cpp_runtime_helper_01f6dff0(values,2,uVar9);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,3,value_00);
    il2cpp_runtime_helper_01f681a0(values);
    uVar9 = il2cpp_runtime_helper_023445d0(&"' on ");
    il2cpp_runtime_helper_01f6dff0(values,4,uVar9);
    il2cpp_runtime_helper_01f681a0(value);
    uVar9 = (*value->klass->vtable[0x1a].methodPtr)(value,value->klass->vtable[0x1a].method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,5,uVar9);
    il2cpp_runtime_helper_01f681a0(values);
    uVar9 = il2cpp_runtime_helper_023445d0(&" and ");
    il2cpp_runtime_helper_01f6dff0(values,6,uVar9);
    pIVar7 = pIStack_c8;
    il2cpp_runtime_helper_01f681a0(pIStack_c8);
    pIVar5 = pIVar7->klass;
    uVar9 = (*pIVar5->vtable[0x1a].methodPtr)(pIVar7,pIVar5->vtable[0x1a].method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,7,uVar9);
    il2cpp_runtime_helper_01f681a0(values);
    uVar9 = il2cpp_runtime_helper_023445d0(&".");
    il2cpp_runtime_helper_01f6dff0(values,8,uVar9);
  }
  else {
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar9,5);
    il2cpp_runtime_helper_01f681a0(values);
    uVar9 = il2cpp_runtime_helper_023445d0(&"AoTTG ");
    il2cpp_runtime_helper_01f6dff0(values,0,uVar9);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,1,ppSVar13);
    il2cpp_runtime_helper_01f681a0(values);
    uVar9 = il2cpp_runtime_helper_023445d0(&" id is required on ");
    il2cpp_runtime_helper_01f6dff0(values,2,uVar9);
    il2cpp_runtime_helper_01f681a0(value);
    uVar9 = (*value->klass->vtable[0x1a].methodPtr)(value,value->klass->vtable[0x1a].method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,3,uVar9);
    il2cpp_runtime_helper_01f681a0(values);
    uVar9 = il2cpp_runtime_helper_023445d0(&".");
    il2cpp_runtime_helper_01f6dff0(values,4,uVar9);
  }
  pSVar10 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
  __this_01 = (System_InvalidOperationException_o *)il2cpp_runtime_helper_023052d0(uVar9);
  System_InvalidOperationException___ctor_3cb6af0(__this_01,pSVar10,(MethodInfo *)0x0);
  pSVar10 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GuardDuplicate);
  il2cpp_runtime_helper_022b2b10();
  pIVar7 = pIStack_c8;
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  (__this_01->fields)._className = pSVar10;
  il2cpp_runtime_helper_022b4080(&__this_01->fields,pSVar10);
  (__this_01->fields)._message = extraout_RDX_01;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._message,extraout_RDX_01);
  (__this_01->fields)._data = (System_Collections_IDictionary_o *)pMVar12;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._data,pMVar12);
  (__this_01->fields)._innerException = (System_Exception_o *)method;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._innerException,method);
  (__this_01->fields)._helpURL = in_R9;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._helpURL,in_R9);
  (__this_01->fields)._stackTrace = pIVar7;
  il2cpp_runtime_helper_022b4080(&(__this_01->fields)._stackTrace);
  return;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$AddDialog
// il2cpp: void Gisketch_Aottg2UI_Code_AottgCodeCatalog__AddDialog (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* __this, System_Type_o* type, Gisketch_Aottg2UI_Code_AottgDialogAttribute_o* attribute, System_Collections_Generic_Dictionary_string__Type__o* seen, const MethodInfo* method);
// 0x3b5cc00

void Gisketch_Aottg2UI_Code_AottgCodeCatalog__AddDialog
               (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *__this,System_Type_o *type,
               Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *attribute,
               System_Collections_Generic_Dictionary_string__Type__o *seen,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  MethodInfo_3106990 *pMVar5;
  Il2CppObject *pIVar6;
  bool_conflict bVar7;
  undefined8 uVar8;
  System_String_array *values;
  System_String_o *pSVar9;
  System_InvalidOperationException_o *__this_00;
  MethodInfo_3106990 *pMVar10;
  MethodInfo_3106990 *pMVar11;
  System_Collections_Generic_List_AottgDialogEntry__o *extraout_RDX;
  Il2CppObject *value;
  System_String_o *extraout_RDX_00;
  System_Collections_Generic_List_AottgDialogEntry__o *type_00;
  System_Collections_Generic_List_AottgDialogEntry__o *value_00;
  System_String_o **__this_01;
  System_String_o **ppSVar12;
  System_String_o *in_R9;
  System_Collections_Generic_Dictionary_string__Type__o *__this_02;
  MethodInfo_3106990 *__this_03;
  Gisketch_Aottg2UI_Code_AottgDialogEntry_array *unaff_R13;
  Il2CppObject *pIStack_80;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGStack_78;
  MethodInfo_3106990 *pMStack_70;
  Gisketch_Aottg2UI_Code_AottgDialogEntry_array *pGStack_68;
  System_Collections_Generic_List_AottgDialogEntry__o *pSStack_60;
  System_Collections_Generic_List_AottgDialogEntry__o *pSStack_58;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGStack_50;
  System_Collections_Generic_Dictionary_string__Type__o *pSStack_48;
  Gisketch_Aottg2UI_Code_AottgDialogEntry_array *pGStack_40;
  System_Type_o *pSStack_38;
  Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *pGStack_30;
  
  pMVar10 = (MethodInfo_3106990 *)seen;
  type_00 = (System_Collections_Generic_List_AottgDialogEntry__o *)type;
  __this_01 = (System_String_o **)__this;
  if (g_data_057a9d4f == '\0') {
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x3b5cc2a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgDialogEntry);
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x3b5cc36;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    __this_01 = &"dialog";
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x3b5cc42;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d4f = '\x01';
  }
  __this_02 = seen;
  if (attribute != (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x0) {
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x3b5cc6b;
    Gisketch_Aottg2UI_Code_AottgCodeCatalog__GuardDuplicate
              ("dialog",(attribute->fields)._Id_k__BackingField,type,seen,method);
    __this_02 = (System_Collections_Generic_Dictionary_string__Type__o *)(__this->fields)._dialogs;
    unaff_R13 = (Gisketch_Aottg2UI_Code_AottgDialogEntry_array *)(attribute->fields)._Id_k__BackingField;
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x3b5cc82;
    __this = (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgDialogEntry);
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x3b5cc8f;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._screens = (System_Collections_Generic_List_AottgScreenEntry__o *)unaff_R13;
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x3b5cc9f;
    il2cpp_runtime_helper_022b4080(&__this->fields,unaff_R13);
    (__this->fields)._dialogs = (System_Collections_Generic_List_AottgDialogEntry__o *)type;
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x3b5ccaf;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._dialogs,type);
    __this_01 = (System_String_o **)&(__this->fields)._popovers;
    (__this->fields)._popovers = (System_Collections_Generic_List_AottgPopoverEntry__o *)attribute;
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x3b5ccbf;
    type_00 = (System_Collections_Generic_List_AottgDialogEntry__o *)attribute;
    il2cpp_runtime_helper_022b4080();
    pMVar11 = MethodInfo_Void_Add;
    pMVar10 = (MethodInfo_3106990 *)seen;
    if (__this_02 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
      piVar1 = (int32_t *)((long)&(__this_02->fields)._entries + 4);
      *piVar1 = *piVar1 + 1;
      pSVar3 = (System_Object_array *)(__this_02->fields)._buckets;
      pMVar10 = pMVar11;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = *(uint *)&(__this_02->fields)._entries;
        if (uVar2 < (uint)pSVar3->max_length) {
          *(uint *)&(__this_02->fields)._entries = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,__this);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this,
                   (MethodInfo_362C220 *)pMVar11->klass->rgctx_data->_14_TKey);
        return;
      }
    }
  }
  pGStack_30 = (Gisketch_Aottg2UI_Code_AottgDialogAttribute_o *)0x3b5cd36;
  il2cpp_runtime_helper_022b2c90();
  pMVar11 = pMVar10;
  value_00 = type_00;
  ppSVar12 = __this_01;
  pGStack_50 = __this;
  pSStack_48 = __this_02;
  pGStack_40 = unaff_R13;
  pSStack_38 = type;
  pGStack_30 = attribute;
  if (g_data_057a9d50 == '\0') {
    pSStack_58 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cd6a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPopoverEntry);
    pSStack_58 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cd76;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppSVar12 = &"popover";
    pSStack_58 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cd82;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d50 = '\x01';
  }
  __this_03 = pMVar10;
  if (extraout_RDX != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    pSStack_58 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cdab;
    Gisketch_Aottg2UI_Code_AottgCodeCatalog__GuardDuplicate
              ("popover",(System_String_o *)(extraout_RDX->fields)._items,(System_Type_o *)type_00,
               (System_Collections_Generic_Dictionary_string__Type__o *)pMVar10,method);
    __this_03 = (MethodInfo_3106990 *)
                (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_01)->fields)._popovers;
    unaff_R13 = (extraout_RDX->fields)._items;
    pSStack_58 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cdc2;
    __this_01 = (System_String_o **)il2cpp_runtime_helper_023052d0(TypeInfo_AottgPopoverEntry);
    pSStack_58 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cdcf;
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_01)->fields)._screens =
         (System_Collections_Generic_List_AottgScreenEntry__o *)unaff_R13;
    pSStack_58 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cddf;
    il2cpp_runtime_helper_022b4080(&((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_01)->fields,unaff_R13);
    (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_01)->fields)._dialogs = type_00;
    pSStack_58 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cdef;
    il2cpp_runtime_helper_022b4080(&(((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_01)->fields)._dialogs,type_00);
    ppSVar12 = (System_String_o **)
               &(((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_01)->fields)._popovers;
    (((Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_01)->fields)._popovers =
         (System_Collections_Generic_List_AottgPopoverEntry__o *)extraout_RDX;
    pSStack_58 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5cdff;
    value_00 = extraout_RDX;
    il2cpp_runtime_helper_022b4080();
    pMVar5 = MethodInfo_Void_Add;
    pMVar11 = pMVar10;
    if (__this_03 != (MethodInfo_3106990 *)0x0) {
      piVar1 = (int32_t *)((long)&__this_03->name + 4);
      *piVar1 = *piVar1 + 1;
      pSVar3 = ((System_Collections_Generic_List_object__Fields *)&__this_03->invoker_method)->_items;
      pMVar11 = pMVar5;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = *(uint *)&__this_03->name;
        if (uVar2 < (uint)pSVar3->max_length) {
          *(uint *)&__this_03->name = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,__this_01);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)__this_01,
                   (MethodInfo_362C220 *)pMVar5->klass->rgctx_data->_14_TKey);
        return;
      }
    }
  }
  pSStack_58 = (System_Collections_Generic_List_AottgDialogEntry__o *)0x3b5ce76;
  il2cpp_runtime_helper_022b2c90();
  pMVar10 = pMVar11;
  pGStack_78 = (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)__this_01;
  pMStack_70 = __this_03;
  pGStack_68 = unaff_R13;
  pSStack_60 = type_00;
  pSStack_58 = extraout_RDX;
  if (g_data_057a9d51 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057a9d51 = '\x01';
  }
  pIStack_80 = (Il2CppObject *)0x0;
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (pMVar11 == (MethodInfo_3106990 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pMVar10 = MethodInfo_Boolean_TryGetValue;
      bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)pMVar11,
                         (Il2CppObject *)value_00,&pIStack_80,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar7 == '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)pMVar11,(Il2CppObject *)value_00
                   ,value,MethodInfo_Void_set_Item);
        return;
      }
    }
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar8,9);
    il2cpp_runtime_helper_01f681a0(values);
    uVar8 = il2cpp_runtime_helper_023445d0(&"Duplicate AoTTG ");
    il2cpp_runtime_helper_01f6dff0(values,0,uVar8);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,1,ppSVar12);
    il2cpp_runtime_helper_01f681a0(values);
    uVar8 = il2cpp_runtime_helper_023445d0(&" id '");
    il2cpp_runtime_helper_01f6dff0(values,2,uVar8);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,3,value_00);
    il2cpp_runtime_helper_01f681a0(values);
    uVar8 = il2cpp_runtime_helper_023445d0(&"' on ");
    il2cpp_runtime_helper_01f6dff0(values,4,uVar8);
    il2cpp_runtime_helper_01f681a0(value);
    uVar8 = (*value->klass->vtable[0x1a].methodPtr)(value,value->klass->vtable[0x1a].method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,5,uVar8);
    il2cpp_runtime_helper_01f681a0(values);
    uVar8 = il2cpp_runtime_helper_023445d0(&" and ");
    il2cpp_runtime_helper_01f6dff0(values,6,uVar8);
    pIVar6 = pIStack_80;
    il2cpp_runtime_helper_01f681a0(pIStack_80);
    pIVar4 = pIVar6->klass;
    uVar8 = (*pIVar4->vtable[0x1a].methodPtr)(pIVar6,pIVar4->vtable[0x1a].method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,7,uVar8);
    il2cpp_runtime_helper_01f681a0(values);
    uVar8 = il2cpp_runtime_helper_023445d0(&".");
    il2cpp_runtime_helper_01f6dff0(values,8,uVar8);
  }
  else {
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar8,5);
    il2cpp_runtime_helper_01f681a0(values);
    uVar8 = il2cpp_runtime_helper_023445d0(&"AoTTG ");
    il2cpp_runtime_helper_01f6dff0(values,0,uVar8);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,1,ppSVar12);
    il2cpp_runtime_helper_01f681a0(values);
    uVar8 = il2cpp_runtime_helper_023445d0(&" id is required on ");
    il2cpp_runtime_helper_01f6dff0(values,2,uVar8);
    il2cpp_runtime_helper_01f681a0(value);
    uVar8 = (*value->klass->vtable[0x1a].methodPtr)(value,value->klass->vtable[0x1a].method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,3,uVar8);
    il2cpp_runtime_helper_01f681a0(values);
    uVar8 = il2cpp_runtime_helper_023445d0(&".");
    il2cpp_runtime_helper_01f6dff0(values,4,uVar8);
  }
  pSVar9 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
  __this_00 = (System_InvalidOperationException_o *)il2cpp_runtime_helper_023052d0(uVar8);
  System_InvalidOperationException___ctor_3cb6af0(__this_00,pSVar9,(MethodInfo *)0x0);
  pSVar9 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GuardDuplicate);
  il2cpp_runtime_helper_022b2b10();
  pIVar6 = pIStack_80;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._className = pSVar9;
  il2cpp_runtime_helper_022b4080(&__this_00->fields,pSVar9);
  (__this_00->fields)._message = extraout_RDX_00;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._message,extraout_RDX_00);
  (__this_00->fields)._data = (System_Collections_IDictionary_o *)pMVar10;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._data,pMVar10);
  (__this_00->fields)._innerException = (System_Exception_o *)method;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._innerException,method);
  (__this_00->fields)._helpURL = in_R9;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._helpURL,in_R9);
  (__this_00->fields)._stackTrace = pIVar6;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._stackTrace);
  return;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$AddPopover
// il2cpp: void Gisketch_Aottg2UI_Code_AottgCodeCatalog__AddPopover (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* __this, System_Type_o* type, Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o* attribute, System_Collections_Generic_Dictionary_string__Type__o* seen, const MethodInfo* method);
// 0x3b5cd40

void Gisketch_Aottg2UI_Code_AottgCodeCatalog__AddPopover
               (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *__this,System_Type_o *type,
               Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *attribute,
               System_Collections_Generic_Dictionary_string__Type__o *seen,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  bool_conflict bVar6;
  undefined8 uVar7;
  System_String_array *values;
  System_String_o *pSVar8;
  System_InvalidOperationException_o *__this_00;
  MethodInfo_3106990 *__this_01;
  MethodInfo_3106990 *pMVar9;
  Il2CppObject *value;
  System_String_o *extraout_RDX;
  Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *value_00;
  System_String_o **ppSVar10;
  System_String_o *in_R9;
  System_Collections_Generic_Dictionary_string__Type__o *__this_02;
  System_Collections_Generic_List_AottgScreenEntry__o *unaff_R13;
  Il2CppObject *pIStack_58;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGStack_50;
  System_Collections_Generic_Dictionary_string__Type__o *pSStack_48;
  System_Collections_Generic_List_AottgScreenEntry__o *pSStack_40;
  System_Type_o *pSStack_38;
  Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *pGStack_30;
  
  __this_01 = (MethodInfo_3106990 *)seen;
  value_00 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)type;
  ppSVar10 = (System_String_o **)__this;
  if (g_data_057a9d50 == '\0') {
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x3b5cd6a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgPopoverEntry);
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x3b5cd76;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    ppSVar10 = &"popover";
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x3b5cd82;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9d50 = '\x01';
  }
  __this_02 = seen;
  if (attribute != (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x0) {
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x3b5cdab;
    Gisketch_Aottg2UI_Code_AottgCodeCatalog__GuardDuplicate
              ("popover",(attribute->fields)._Id_k__BackingField,type,seen,method);
    __this_02 = (System_Collections_Generic_Dictionary_string__Type__o *)(__this->fields)._popovers;
    unaff_R13 = (System_Collections_Generic_List_AottgScreenEntry__o *)(attribute->fields)._Id_k__BackingField
    ;
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x3b5cdc2;
    __this = (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgPopoverEntry);
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x3b5cdcf;
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._screens = unaff_R13;
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x3b5cddf;
    il2cpp_runtime_helper_022b4080(&__this->fields,unaff_R13);
    (__this->fields)._dialogs = (System_Collections_Generic_List_AottgDialogEntry__o *)type;
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x3b5cdef;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._dialogs,type);
    ppSVar10 = (System_String_o **)&(__this->fields)._popovers;
    (__this->fields)._popovers = (System_Collections_Generic_List_AottgPopoverEntry__o *)attribute;
    pGStack_30 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x3b5cdff;
    value_00 = attribute;
    il2cpp_runtime_helper_022b4080();
    pMVar9 = MethodInfo_Void_Add;
    __this_01 = (MethodInfo_3106990 *)seen;
    if (__this_02 != (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
      piVar1 = (int32_t *)((long)&(__this_02->fields)._entries + 4);
      *piVar1 = *piVar1 + 1;
      pSVar3 = (System_Object_array *)(__this_02->fields)._buckets;
      __this_01 = pMVar9;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = *(uint *)&(__this_02->fields)._entries;
        if (uVar2 < (uint)pSVar3->max_length) {
          *(uint *)&(__this_02->fields)._entries = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,__this);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)__this,
                   (MethodInfo_362C220 *)pMVar9->klass->rgctx_data->_14_TKey);
        return;
      }
    }
  }
  pGStack_30 = (Gisketch_Aottg2UI_Code_AottgPopoverAttribute_o *)0x3b5ce76;
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = __this_01;
  pGStack_50 = __this;
  pSStack_48 = __this_02;
  pSStack_40 = unaff_R13;
  pSStack_38 = type;
  pGStack_30 = attribute;
  if (g_data_057a9d51 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057a9d51 = '\x01';
  }
  pIStack_58 = (Il2CppObject *)0x0;
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)value_00,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (__this_01 == (MethodInfo_3106990 *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pMVar9 = MethodInfo_Boolean_TryGetValue;
      bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                         (Il2CppObject *)value_00,&pIStack_58,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar6 == '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                   (Il2CppObject *)value_00,value,MethodInfo_Void_set_Item);
        return;
      }
    }
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar7,9);
    il2cpp_runtime_helper_01f681a0(values);
    uVar7 = il2cpp_runtime_helper_023445d0(&"Duplicate AoTTG ");
    il2cpp_runtime_helper_01f6dff0(values,0,uVar7);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,1,ppSVar10);
    il2cpp_runtime_helper_01f681a0(values);
    uVar7 = il2cpp_runtime_helper_023445d0(&" id '");
    il2cpp_runtime_helper_01f6dff0(values,2,uVar7);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,3,value_00);
    il2cpp_runtime_helper_01f681a0(values);
    uVar7 = il2cpp_runtime_helper_023445d0(&"' on ");
    il2cpp_runtime_helper_01f6dff0(values,4,uVar7);
    il2cpp_runtime_helper_01f681a0(value);
    uVar7 = (*value->klass->vtable[0x1a].methodPtr)(value,value->klass->vtable[0x1a].method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,5,uVar7);
    il2cpp_runtime_helper_01f681a0(values);
    uVar7 = il2cpp_runtime_helper_023445d0(&" and ");
    il2cpp_runtime_helper_01f6dff0(values,6,uVar7);
    pIVar5 = pIStack_58;
    il2cpp_runtime_helper_01f681a0(pIStack_58);
    pIVar4 = pIVar5->klass;
    uVar7 = (*pIVar4->vtable[0x1a].methodPtr)(pIVar5,pIVar4->vtable[0x1a].method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,7,uVar7);
    il2cpp_runtime_helper_01f681a0(values);
    uVar7 = il2cpp_runtime_helper_023445d0(&".");
    il2cpp_runtime_helper_01f6dff0(values,8,uVar7);
  }
  else {
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar7,5);
    il2cpp_runtime_helper_01f681a0(values);
    uVar7 = il2cpp_runtime_helper_023445d0(&"AoTTG ");
    il2cpp_runtime_helper_01f6dff0(values,0,uVar7);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,1,ppSVar10);
    il2cpp_runtime_helper_01f681a0(values);
    uVar7 = il2cpp_runtime_helper_023445d0(&" id is required on ");
    il2cpp_runtime_helper_01f6dff0(values,2,uVar7);
    il2cpp_runtime_helper_01f681a0(value);
    uVar7 = (*value->klass->vtable[0x1a].methodPtr)(value,value->klass->vtable[0x1a].method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,3,uVar7);
    il2cpp_runtime_helper_01f681a0(values);
    uVar7 = il2cpp_runtime_helper_023445d0(&".");
    il2cpp_runtime_helper_01f6dff0(values,4,uVar7);
  }
  pSVar8 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
  __this_00 = (System_InvalidOperationException_o *)il2cpp_runtime_helper_023052d0(uVar7);
  System_InvalidOperationException___ctor_3cb6af0(__this_00,pSVar8,(MethodInfo *)0x0);
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GuardDuplicate);
  il2cpp_runtime_helper_022b2b10();
  pIVar5 = pIStack_58;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._className = pSVar8;
  il2cpp_runtime_helper_022b4080(&__this_00->fields,pSVar8);
  (__this_00->fields)._message = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._message,extraout_RDX);
  (__this_00->fields)._data = (System_Collections_IDictionary_o *)pMVar9;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._data,pMVar9);
  (__this_00->fields)._innerException = (System_Exception_o *)method;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._innerException,method);
  (__this_00->fields)._helpURL = in_R9;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._helpURL,in_R9);
  (__this_00->fields)._stackTrace = pIVar5;
  il2cpp_runtime_helper_022b4080(&(__this_00->fields)._stackTrace);
  return;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$GuardDuplicate
// il2cpp: void Gisketch_Aottg2UI_Code_AottgCodeCatalog__GuardDuplicate (System_String_o* kind, System_String_o* id, System_Type_o* type, System_Collections_Generic_Dictionary_string__Type__o* seen, const MethodInfo* method);
// 0x3b5ce80

void Gisketch_Aottg2UI_Code_AottgCodeCatalog__GuardDuplicate
               (System_String_o *kind,System_String_o *id,System_Type_o *type,
               System_Collections_Generic_Dictionary_string__Type__o *seen,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppObject *pIVar2;
  bool_conflict bVar3;
  undefined8 uVar4;
  System_String_array *values;
  System_String_o *pSVar5;
  System_InvalidOperationException_o *__this;
  MethodInfo_3106990 *pMVar6;
  System_String_o *extraout_RDX;
  System_String_o *in_R9;
  Il2CppObject *local_30;
  
  pMVar6 = (MethodInfo_3106990 *)seen;
  if (g_data_057a9d51 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057a9d51 = '\x01';
  }
  local_30 = (Il2CppObject *)0x0;
  bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (seen == (System_Collections_Generic_Dictionary_string__Type__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pMVar6 = MethodInfo_Boolean_TryGetValue;
      bVar3 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        ((System_Collections_Generic_Dictionary_object__object__o *)seen,(Il2CppObject *)id,
                         &local_30,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar3 == '\0') {
        System_Collections_Generic_Dictionary_object__object___set_Item
                  ((System_Collections_Generic_Dictionary_object__object__o *)seen,(Il2CppObject *)id,
                   (Il2CppObject *)type,MethodInfo_Void_set_Item);
        return;
      }
    }
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar4,9);
    il2cpp_runtime_helper_01f681a0(values);
    uVar4 = il2cpp_runtime_helper_023445d0(&"Duplicate AoTTG ");
    il2cpp_runtime_helper_01f6dff0(values,0,uVar4);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,1,kind);
    il2cpp_runtime_helper_01f681a0(values);
    uVar4 = il2cpp_runtime_helper_023445d0(&" id '");
    il2cpp_runtime_helper_01f6dff0(values,2,uVar4);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,3,id);
    il2cpp_runtime_helper_01f681a0(values);
    uVar4 = il2cpp_runtime_helper_023445d0(&"' on ");
    il2cpp_runtime_helper_01f6dff0(values,4,uVar4);
    il2cpp_runtime_helper_01f681a0(type);
    uVar4 = (*(type->klass->vtable)._26_unknown.methodPtr)(type,(type->klass->vtable)._26_unknown.method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,5,uVar4);
    il2cpp_runtime_helper_01f681a0(values);
    uVar4 = il2cpp_runtime_helper_023445d0(&" and ");
    il2cpp_runtime_helper_01f6dff0(values,6,uVar4);
    pIVar2 = local_30;
    il2cpp_runtime_helper_01f681a0(local_30);
    pIVar1 = pIVar2->klass;
    uVar4 = (*pIVar1->vtable[0x1a].methodPtr)(pIVar2,pIVar1->vtable[0x1a].method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,7,uVar4);
    il2cpp_runtime_helper_01f681a0(values);
    uVar4 = il2cpp_runtime_helper_023445d0(&".");
    il2cpp_runtime_helper_01f6dff0(values,8,uVar4);
  }
  else {
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar4,5);
    il2cpp_runtime_helper_01f681a0(values);
    uVar4 = il2cpp_runtime_helper_023445d0(&"AoTTG ");
    il2cpp_runtime_helper_01f6dff0(values,0,uVar4);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,1,kind);
    il2cpp_runtime_helper_01f681a0(values);
    uVar4 = il2cpp_runtime_helper_023445d0(&" id is required on ");
    il2cpp_runtime_helper_01f6dff0(values,2,uVar4);
    il2cpp_runtime_helper_01f681a0(type);
    uVar4 = (*(type->klass->vtable)._26_unknown.methodPtr)(type,(type->klass->vtable)._26_unknown.method);
    il2cpp_runtime_helper_01f681a0(values);
    il2cpp_runtime_helper_01f6dff0(values,3,uVar4);
    il2cpp_runtime_helper_01f681a0(values);
    uVar4 = il2cpp_runtime_helper_023445d0(&".");
    il2cpp_runtime_helper_01f6dff0(values,4,uVar4);
  }
  pSVar5 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_InvalidOperationException);
  __this = (System_InvalidOperationException_o *)il2cpp_runtime_helper_023052d0(uVar4);
  System_InvalidOperationException___ctor_3cb6af0(__this,pSVar5,(MethodInfo *)0x0);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GuardDuplicate);
  il2cpp_runtime_helper_022b2b10();
  pIVar2 = local_30;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._className = pSVar5;
  il2cpp_runtime_helper_022b4080(&__this->fields,pSVar5);
  (__this->fields)._message = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._message,extraout_RDX);
  (__this->fields)._data = (System_Collections_IDictionary_o *)pMVar6;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._data,pMVar6);
  (__this->fields)._innerException = (System_Exception_o *)method;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._innerException,method);
  (__this->fields)._helpURL = in_R9;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._helpURL,in_R9);
  (__this->fields)._stackTrace = pIVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._stackTrace);
  return;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$Attribute<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Code_AottgCodeCatalog__Attribute_object_ (System_Type_o* type, const MethodInfo_253D170* method);
// 0x263d170

Il2CppObject *
Gisketch_Aottg2UI_Code_AottgCodeCatalog__Attribute_object_(System_Type_o *type,MethodInfo_253D170 *method)

{
  MethodInfo_253D170_RGCTXs *pMVar1;
  System_Type_o *pSVar2;
  long lVar3;
  Il2CppClass *pIVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_Type_o *pSVar7;
  System_RuntimeTypeHandle_o handle;
  
  pMVar1 = method->rgctx_data;
  if (pMVar1 == (MethodInfo_253D170_RGCTXs *)0x0) {
    il2cpp_runtime_helper_02300a20(method);
    pMVar1 = method->rgctx_data;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)pMVar1->_0_T;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = (System_Type_o *)0x0;
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((type != (System_Type_o *)0x0) &&
     (lVar3 = (*(type->klass->vtable)._14_GetCustomAttributes.methodPtr)
                        (type,pSVar2,0,(type->klass->vtable)._14_GetCustomAttributes.method), pSVar7 = pSVar2,
     handle.fields.value = (System_RuntimeTypeHandle_Fields)(System_RuntimeTypeHandle_Fields)type, lVar3 != 0)
     ) {
    if (*(long *)(lVar3 + 0x18) != 0) {
      if ((int)*(long *)(lVar3 + 0x18) == 0) goto label_0263d23f;
      lVar3 = *(long *)(lVar3 + 0x20);
      pIVar4 = method->rgctx_data->_1_T;
      if (((pIVar4->_2).field_0x6d & 1) == 0) {
        pIVar4 = (Il2CppClass *)il2cpp_runtime_helper_023009c0(pIVar4);
      }
      if (lVar3 != 0) {
        pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(lVar3,pIVar4);
        if (pIVar5 != (Il2CppObject *)0x0) {
          return pIVar5;
        }
        il2cpp_runtime_helper_022b2fd0(lVar3,pIVar4);
      }
    }
    return (Il2CppObject *)0x0;
  }
  type = (System_Type_o *)handle.fields.value;
  pSVar2 = pSVar7;
  il2cpp_runtime_helper_022b2c90();
label_0263d23f:
  il2cpp_runtime_helper_022b2ca0();
  if (pSVar2[2].monitor == (void *)0x0) {
    il2cpp_runtime_helper_02300a20(pSVar2);
  }
  pIVar5 = System_Activator__CreateInstance_3ce7ba0(type,(MethodInfo *)0x0);
  lVar3 = *(long *)pSVar2[2].monitor;
  if ((*(byte *)(lVar3 + 0x135) & 1) == 0) {
    lVar3 = il2cpp_runtime_helper_023009c0(lVar3);
  }
  if (pIVar5 != (Il2CppObject *)0x0) {
    pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pIVar5,lVar3);
    if (pIVar6 != (Il2CppObject *)0x0) {
      return pIVar6;
    }
    il2cpp_runtime_helper_022b2fd0(pIVar5,lVar3);
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$SafeTypes
// il2cpp: System_Type_array* Gisketch_Aottg2UI_Code_AottgCodeCatalog__SafeTypes (System_Reflection_Assembly_o* assembly, const MethodInfo* method);
// 0x3b5c9c0

System_Type_array *
Gisketch_Aottg2UI_Code_AottgCodeCatalog__SafeTypes(System_Reflection_Assembly_o *assembly,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  System_Type_array *pSVar3;
  long *plVar4;
  undefined8 uVar5;
  long *plVar6;
  undefined1 auVar7 [12];
  
  if (assembly != (System_Reflection_Assembly_o *)0x0) {
    pSVar3 = (System_Type_array *)
             (*(assembly->klass->vtable)._19_GetTypes.methodPtr)
                       (assembly,(assembly->klass->vtable)._19_GetTypes.method);
    return pSVar3;
  }
  auVar7 = il2cpp_runtime_helper_022b2c90();
  uVar5 = auVar7._0_8_;
  if (auVar7._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(uVar5);
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ReflectionTypeLoadException);
    cVar2 = il2cpp_runtime_helper_0233e000(uVar5,*(undefined8 *)*plVar4);
    if (cVar2 == '\0') {
      plVar6 = (long *)__cxa_allocate_exception(8);
      *plVar6 = *plVar4;
      __cxa_throw(plVar6,&PTR_PTR_05215060,0);
    }
    lVar1 = *plVar4;
    __cxa_end_catch();
    if (lVar1 != 0) {
      return *(System_Type_array **)(lVar1 + 0x90);
    }
    uVar5 = il2cpp_runtime_helper_022b2c90();
    __cxa_end_catch();
  }
  _Unwind_Resume(uVar5);
}


// Gisketch.Aottg2UI.Code.AottgCodeCatalog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_AottgCodeCatalog___ctor (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o* __this, const MethodInfo* method);
// 0x3b5c5f0

void Gisketch_Aottg2UI_Code_AottgCodeCatalog___ctor
               (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_AottgScreenEntry__o *__this_00;
  System_Collections_Generic_List_AottgDialogEntry__o *__this_01;
  System_Collections_Generic_List_AottgPopoverEntry__o *__this_02;
  
  if (g_data_057a9d52 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgScreenEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgPopoverEntry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgScreenEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgPopoverEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgDialogEntry);
    g_data_057a9d52 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_AottgScreenEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgScreenEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgScreenEntry);
  (__this->fields)._screens = __this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields,__this_00);
  __this_01 = (System_Collections_Generic_List_AottgDialogEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgDialogEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgDialogEntry);
  (__this->fields)._dialogs = __this_01;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._dialogs,__this_01);
  __this_02 = (System_Collections_Generic_List_AottgPopoverEntry__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgPopoverEntry);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_Gisketch_Aottg2UI_Code_AottgPopoverEntry);
  (__this->fields)._popovers = __this_02;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._popovers);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


