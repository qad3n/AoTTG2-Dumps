// Type: UI.MobileInputLayout
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/UI/MobileInputLayout.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileInputLayout$$AssignRuntimeIds
// il2cpp: void UI_MobileInputLayout__AssignRuntimeIds (UI_MobileInputLayout_o* __this, const MethodInfo* method);
// 0x5c732b0

void UI_MobileInputLayout__AssignRuntimeIds(UI_MobileInputLayout_o *__this,MethodInfo *method)

{
  UI_MobileInputControlLayout_o *control;
  System_String_o *pSVar1;
  MethodInfo *in_RCX;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_00;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_07547927 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"control_");
    Il2CppMethodInitialized_07547927 = '\x01';
  }
  local_2c = 0;
  __this_00 = (__this->fields).Controls;
  if (__this_00 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
    do {
      if ((__this_00->fields)._size <= local_2c) {
        return;
      }
      control = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,local_2c,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Item);
      pSVar1 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
      pSVar1 = System_String__Concat_52f0320("control_",pSVar1,(MethodInfo *)0x0);
      UI_MobileInputLayout__AssignRuntimeId(__this,control,pSVar1,in_RCX);
      local_2c = local_2c + 1;
      __this_00 = (__this->fields).Controls;
    } while (__this_00 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLayout$$AssignRuntimeId
// il2cpp: void UI_MobileInputLayout__AssignRuntimeId (UI_MobileInputLayout_o* __this, UI_MobileInputControlLayout_o* control, System_String_o* id, const MethodInfo* method);
// 0x5c73380

void UI_MobileInputLayout__AssignRuntimeId
               (UI_MobileInputLayout_o *__this,UI_MobileInputControlLayout_o *control,System_String_o *id,
               MethodInfo *method)

{
  ulong in_RAX;
  UI_MobileInputControlLayout_o *control_00;
  System_String_o *pSVar1;
  MethodInfo *method_00;
  int32_t index;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_00;
  undefined8 uStack_38;
  
  uStack_38 = in_RAX;
  if (Il2CppMethodInitialized_07547928 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"_child_");
    Il2CppMethodInitialized_07547928 = '\x01';
  }
  if (control != (UI_MobileInputControlLayout_o *)0x0) {
    (control->fields).Id = id;
    Il2CppCodeGenWriteBarrier(&(control->fields).Id);
    __this_00 = (control->fields).Children;
    if (__this_00 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
      return;
    }
    uStack_38 = uStack_38 & 0xffffffff;
    index = 0;
    do {
      if ((__this_00->fields)._size <= index) {
        return;
      }
      control_00 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)__this_00,index,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_get_Item);
      pSVar1 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pSVar1 = System_String__Concat_5301f10(id,"_child_",pSVar1,(MethodInfo *)0x0);
      UI_MobileInputLayout__AssignRuntimeId(__this,control_00,pSVar1,method_00);
      index = uStack_38._4_4_ + 1;
      __this_00 = (control->fields).Children;
      uStack_38 = CONCAT44(index,(undefined4)uStack_38);
    } while (__this_00 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0);
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLayout$$GetRole
// il2cpp: int32_t UI_MobileInputLayout__GetRole (UI_MobileInputLayout_o* __this, const MethodInfo* method);
// 0x5c73480

int32_t UI_MobileInputLayout__GetRole(UI_MobileInputLayout_o *__this,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  int32_t iVar2;
  int32_t local_c;
  
  local_c = 0;
  if (Il2CppMethodInitialized_07547929 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
    Il2CppMethodInitialized_07547929 = '\x01';
  }
  value = (__this->fields).Role;
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__TryParse_Int32Enum_
                    (value,&local_c,
                     (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
  iVar2 = 1;
  if (bVar1) {
    iVar2 = local_c;
  }
  return iVar2;
}


// UI.MobileInputLayout$$TryGetRole
// il2cpp: bool UI_MobileInputLayout__TryGetRole (UI_MobileInputLayout_o* __this, int32_t* role, const MethodInfo* method);
// 0x5c73500

bool UI_MobileInputLayout__TryGetRole(UI_MobileInputLayout_o *__this,int32_t *role,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07547929 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
    Il2CppMethodInitialized_07547929 = '\x01';
  }
  value = (__this->fields).Role;
  if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar1 = System_Enum__TryParse_Int32Enum_
                    (value,role,(MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_MobileInputLayoutRole);
  return bVar1;
}


// UI.MobileInputLayout$$Clone
// il2cpp: UI_MobileInputLayout_o* UI_MobileInputLayout__Clone (UI_MobileInputLayout_o* __this, System_String_o* name, bool builtin, const MethodInfo* method);
// 0x5c73570
// eh: try 0x5c736af..0x5c7374b -> pad 0x5c73756 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5c7376e..0x5c73773 -> pad 0x5c73792 cleanup
// eh: try 0x5c73795..0x5c7379f -> pad 0x5c737a7 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c73750: jmp 0x5c73756
// asm:   0x5c73752: jmp 0x5c73756
// asm:   0x5c73754: jmp 0x5c73756
// asm:   0x5c73756: mov rbp, rax
// asm:   0x5c73759: cmp edx, 1
// asm:   0x5c7375c: jne 0x5c73795
// asm:   0x5c7375e: mov rdi, rbp
// asm:   0x5c73761: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5c73766: mov rbp, qword ptr [rax]
// asm:   0x5c73769: mov qword ptr [rsp + 0x20], rbp
// asm:   0x5c7376e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5c73773: lea rax, [rip + 0x161ae0e]  ; MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose
// asm:   0x5c7377a: mov rsi, qword ptr [rax]
// asm:   0x5c7377d: mov rdi, rsp
// asm:   0x5c73780: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5c73785: test rbp, rbp
// asm:   0x5c73788: je 0x5c73729
// asm:   0x5c7378a: mov rdi, rbp
// asm:   0x5c7378d: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5c73792: mov rbp, rax
// asm:   0x5c73795: lea rdi, [rsp + 0x20]
// asm:   0x5c7379a: call 0x2fda040  ; il2cpp_runtime_helper_02fda040()
// asm:   0x5c7379f: mov rdi, rbp
// asm:   0x5c737a2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5c737a7: mov rdi, rax
// asm:   0x5c737aa: call 0x2ab61e0  ; __clang_call_terminate()

UI_MobileInputLayout_o *
UI_MobileInputLayout__Clone
          (UI_MobileInputLayout_o *__this,System_String_o *name,bool builtin,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_MobileInputControlLayout__o *pSVar3;
  UI_MobileInputControlLayout_array *pUVar4;
  bool bVar5;
  UI_MobileInputLayout_o *__this_00;
  UI_MobileInputControlLayout_o *item;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  pMVar6 = (MethodInfo *)name;
  if (Il2CppMethodInitialized_0754792a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayout);
    Il2CppMethodInitialized_0754792a = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputLayout);
  UI_MobileInputLayout___ctor(__this_00,pMVar6);
  if (__this_00 != (UI_MobileInputLayout_o *)0x0) {
    (__this_00->fields).Version = (__this->fields).Version;
    bVar5 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
    if (bVar5) {
      name = (__this->fields).Name;
    }
    (__this_00->fields).Name = name;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Name);
    (__this_00->fields).Role = (__this->fields).Role;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Role);
    (__this_00->fields).Builtin = builtin;
    pSVar3 = (__this->fields).Controls;
    if (pSVar3 != (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)pSVar3,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_GetEnumerator);
      local_38 = 0;
      local_30 = (undefined1 *)&local_58;
      while( true ) {
        pMVar6 = MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext;
        bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_MoveNext
                          );
        if (!bVar5) {
          pMVar6 = MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_MobileInputControlLayout_Dispose);
          UI_MobileInputLayout__AssignRuntimeIds(__this_00,pMVar6);
          return __this_00;
        }
        if ((UI_MobileInputControlLayout_o *)local_58.fields._current == (UI_MobileInputControlLayout_o *)0x0)
        {
          ThrowNullReferenceException();
        }
        pSVar3 = (__this_00->fields).Controls;
        item = UI_MobileInputControlLayout__Clone
                         ((UI_MobileInputControlLayout_o *)local_58.fields._current,pMVar6);
        pMVar6 = MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_Add;
        if (pSVar3 == (System_Collections_Generic_List_MobileInputControlLayout__o *)0x0) break;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pUVar4 = (pSVar3->fields)._items;
        if (pUVar4 == (UI_MobileInputControlLayout_array *)0x0) break;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pUVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pUVar4->m_Items[(int)uVar2] = item;
          Il2CppCodeGenWriteBarrier(pUVar4->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)item,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
        }
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileInputLayout$$.ctor
// il2cpp: void UI_MobileInputLayout___ctor (UI_MobileInputLayout_o* __this, const MethodInfo* method);
// 0x5c737b0

void UI_MobileInputLayout___ctor(UI_MobileInputLayout_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_Collections_Generic_List_MobileInputControlLayout__o *__this_00;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_0754792b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputLayoutRole);
    il2cpp_codegen_initialize_runtime_metadata(&"Default");
    Il2CppMethodInitialized_0754792b = '\x01';
  }
  (__this->fields).Name = "Default";
  Il2CppCodeGenWriteBarrier(&(__this->fields).Name);
  local_28.klass = (System_Enum_c *)TypeInfo_UI_MobileInputLayoutRole;
  local_28.monitor = (void *)0xffffffffffffffff;
  local_18 = 1;
  pSVar1 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
  (__this->fields).Role = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Role);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MobileInputControlLayout);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_MobileInputControlLayout_ctor);
  (__this->fields).Controls = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Controls);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


