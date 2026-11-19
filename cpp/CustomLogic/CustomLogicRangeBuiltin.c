// Type: CustomLogic.CustomLogicRangeBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicRangeBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRangeBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicRangeBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRangeBuiltin_o* CustomLogic_CustomLogicRangeBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x59b96b0

CustomLogic_CustomLogicRangeBuiltin_o *
CustomLogic_CustomLogicRangeBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t end;
  int32_t step;
  int32_t start;
  ulong uVar2;
  CustomLogic_CustomLogicRangeBuiltin_o *__this;
  System_String_o *pSVar3;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int iVar4;
  MethodInfo *in_R8;
  int32_t local_2c;
  
  if (Il2CppMethodInitialized_07545b9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRangeBuiltin);
    Il2CppMethodInitialized_07545b9d = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar4 = (int)args->max_length;
  uVar2 = args->max_length & 0xffffffff;
  if (iVar4 == 3) {
    if (uVar2 != 0) {
      pIVar1 = args->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (pIVar1,(MethodInfo_34BDC20 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if ((args->max_length & 0xfffffffe) != 0) {
        end = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (args->m_Items[1],
                         (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        if ((uint)args->max_length < 3) goto label_059b987f;
        step = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                         (args->m_Items[2],
                          (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRangeBuiltin);
        goto label_059b986a;
      }
    }
label_059b987f:
    ThrowIndexOutOfRangeException();
  }
  if (iVar4 == 2) {
    if (uVar2 == 0) goto label_059b987f;
    pIVar1 = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    start = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar1,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int)
    ;
    if ((args->max_length & 0xfffffffe) == 0) goto label_059b987f;
    end = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (args->m_Items[1],
                     (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRangeBuiltin);
  }
  else {
    if (iVar4 != 1) {
      NullCheck(args);
      local_2c = (int32_t)args->max_length;
      pSVar3 = System_Int32__ToString(&local_2c,(MethodInfo *)0x0);
      str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRangeBuiltin constructor found that takes ");
      str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
      pSVar3 = System_String__Concat_5301f10(str0,pSVar3,str2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_54186d0(__this_00,pSVar3,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicRangeBuiltin_Factory_CreateInstance);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    if (uVar2 == 0) goto label_059b987f;
    pIVar1 = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    end = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (pIVar1,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRangeBuiltin);
    start = 0;
  }
  step = 1;
label_059b986a:
  CustomLogic_CustomLogicRangeBuiltin___ctor_58b9490(__this,start,end,step,in_R8);
  return __this;
}


// CustomLogic.CustomLogicRangeBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRangeBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x59b9910

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRangeBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  
  pSVar1 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRangeBuiltin not found");
  pSVar1 = System_String__Concat_5301f10(pSVar1,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicRangeBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicRangeBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x59b9980

void CustomLogic_CustomLogicRangeBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545b9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRangeBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    Il2CppMethodInitialized_07545b9e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_CustomLogic_CustomLogicRangeBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicRangeBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t end, const MethodInfo* method);
// 0x59b9480

void CustomLogic_CustomLogicRangeBuiltin___ctor
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t end,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  CustomLogic_CustomLogicRangeBuiltin___ctor_58b9490(__this,0,end,1,in_R8);
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t start, int32_t end, const MethodInfo* method);
// 0x59b9640

void CustomLogic_CustomLogicRangeBuiltin___ctor_58b9640
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t start,int32_t end,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  CustomLogic_CustomLogicRangeBuiltin___ctor_58b9490(__this,start,end,1,in_R8);
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t start, int32_t end, int32_t step, const MethodInfo* method);
// 0x59b9490
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59b94d9: cmp ebp, r14d
// asm:   0x59b94e2: lea r12, [rip + 0x18dc717]  ; MethodInfo_System_Collections_Generic_List_object_Add
// asm:   0x59b94e9: jmp 0x59b9516
// asm:   0x59b957c: jmp 0x59b961d
// asm:   0x59b9581: cmp ebp, r14d
// asm:   0x59b958a: lea r12, [rip + 0x18dc66f]  ; MethodInfo_System_Collections_Generic_List_object_Add
// asm:   0x59b9591: jmp 0x59b95c2

void CustomLogic_CustomLogicRangeBuiltin___ctor_58b9490
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t start,int32_t end,int32_t step,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  undefined8 in_RAX;
  Il2CppObject *pIVar5;
  undefined4 in_register_00000034;
  MethodInfo *pMVar6;
  undefined8 local_38;
  
  pMVar6 = (MethodInfo *)CONCAT44(in_register_00000034,start);
  local_38 = in_RAX;
  if (Il2CppMethodInitialized_07545b9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_07545b9b = '\x01';
  }
  CustomLogic_CustomLogicListBuiltin___ctor((CustomLogic_CustomLogicListBuiltin_o *)__this,pMVar6);
  if (step == 0) {
    return;
  }
  if (step < 1) {
    do {
      if (start <= end) {
        return;
      }
      while( true ) {
        pSVar3 = (__this->fields).List;
        local_38 = CONCAT44(local_38._4_4_,start);
        pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
        pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto label_059b962c;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar3->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_059b962c;
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pSVar4->max_length <= uVar2) break;
        (pSVar3->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pIVar5;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
        start = start + step;
        if (start <= end) {
          return;
        }
      }
      System_Collections_Generic_List_object___AddWithResize
                (pSVar3,pIVar5,(MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
      start = start + step;
    } while( true );
  }
joined_r0x059b94dc:
  if (end <= start) {
    return;
  }
  do {
    pSVar3 = (__this->fields).List;
    local_38 = CONCAT44(start,(undefined4)local_38);
    pIVar5 = il2cpp_vm_Object_Box(g_data_07556710,(void *)((long)&local_38 + 4));
    pMVar6 = MethodInfo_System_Collections_Generic_List_object_Add;
    if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
label_059b962c:
      ThrowNullReferenceException();
    }
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (pSVar3->fields)._items;
    if (pSVar4 == (System_Object_array *)0x0) goto label_059b962c;
    uVar2 = (pSVar3->fields)._size;
    if ((uint)pSVar4->max_length <= uVar2) break;
    (pSVar3->fields)._size = uVar2 + 1;
    pSVar4->m_Items[(int)uVar2] = pIVar5;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
    start = start + step;
    if (end <= start) {
      return;
    }
  } while( true );
  System_Collections_Generic_List_object___AddWithResize
            (pSVar3,pIVar5,(MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
  start = start + step;
  goto joined_r0x059b94dc;
}


// CustomLogic.CustomLogicRangeBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRangeBuiltin__get_ClassName (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x59b9650

System_String_o *
CustomLogic_CustomLogicRangeBuiltin__get_ClassName
          (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545b9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Range");
    Il2CppMethodInitialized_07545b9c = '\x01';
  }
  return "Range";
}


// CustomLogic.CustomLogicRangeBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_IsAbstract (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x59b9680

bool CustomLogic_CustomLogicRangeBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicRangeBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_IsStatic (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x59b9690

bool CustomLogic_CustomLogicRangeBuiltin__get_IsStatic
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicRangeBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x59b96a0

bool CustomLogic_CustomLogicRangeBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


