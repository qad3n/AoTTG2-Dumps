// Type: CustomLogic.CustomLogicRangeBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRangeBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRangeBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicRangeBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRangeBuiltin_o* CustomLogic_CustomLogicRangeBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ed8ce0

CustomLogic_CustomLogicRangeBuiltin_o *
CustomLogic_CustomLogicRangeBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  int32_t iVar3;
  int32_t end;
  int32_t step;
  CustomLogic_CustomLogicRangeBuiltin_o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345204 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRangeBuiltin);
    Il2CppMethodInitialized_184345204 = '\x01';
  }
  local_res8[0] = 0;
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (int)args->max_length;
  if (iVar1 == 1) {
    pIVar2 = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    pCVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRangeBuiltin);
    CustomLogic_CustomLogicRangeBuiltin___ctor_1ed2f90(pCVar4,0,iVar3,1,(MethodInfo *)0x0);
    return pCVar4;
  }
  if (iVar1 == 2) {
    pIVar2 = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (uint)args->max_length) {
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (args->m_Items[1],
                       (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      pCVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRangeBuiltin);
      step = 1;
      goto label_181ed8de3;
    }
  }
  else {
    if (iVar1 != 3) {
      NullCheck(args);
      local_res8[0] = (int32_t)args->max_length;
      pSVar5 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
      str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
      str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicRangeBuiltin constructor found that takes ");
      pSVar5 = System_String__Concat_1969b70(str0,pSVar5,str2,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_1a77cc0(__this,pSVar5,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicRangeBuiltin_Factory_CreateInstance);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
    }
    pIVar2 = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar2,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if ((1 < (uint)args->max_length) &&
       (end = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (args->m_Items[1],
                         (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int),
       2 < (uint)args->max_length)) {
      step = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                       (args->m_Items[2],
                        (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      pCVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRangeBuiltin);
label_181ed8de3:
      CustomLogic_CustomLogicRangeBuiltin___ctor_1ed2f90(pCVar4,iVar3,end,step,(MethodInfo *)0x0);
      return pCVar4;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicRangeBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRangeBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ebf900

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRangeBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  
  pSVar1 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicRangeBuiltin not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar1 = System_String__Concat_1969b70(str0,name,pSVar1,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicRangeBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicRangeBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181ecced0

void CustomLogic_CustomLogicRangeBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345205 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRangeBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    Il2CppMethodInitialized_184345205 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  TypeInfo_CustomLogic_CustomLogicRangeBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicRangeBuiltin_Bindings->static_fields->MemberNames,__this);
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t end, const MethodInfo* method);
// 0x181ed2f60

void CustomLogic_CustomLogicRangeBuiltin___ctor
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t end,MethodInfo *method)

{
  CustomLogic_CustomLogicRangeBuiltin___ctor_1ed2f90(__this,0,end,1,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t start, int32_t end, const MethodInfo* method);
// 0x181ed2f40

void CustomLogic_CustomLogicRangeBuiltin___ctor_1ed2f40
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t start,int32_t end,MethodInfo *method)

{
  CustomLogic_CustomLogicRangeBuiltin___ctor_1ed2f90(__this,start,end,1,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t start, int32_t end, int32_t step, const MethodInfo* method);
// 0x181ed2f90
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ed2fe1: cmp ebx, esi
// asm:   0x181ed2fe9: nop dword ptr [rax]
// asm:   0x181ed307f: mov rdi, qword ptr [rsp + 0x40]
// asm:   0x181ed3092: cmp ebx, esi
// asm:   0x181ed3096: nop word ptr [rax + rax]
// asm:   0x181ed311f: jmp 0x181ed307f

void CustomLogic_CustomLogicRangeBuiltin___ctor_1ed2f90
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t start,int32_t end,int32_t step,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  Il2CppObject *pIVar6;
  int local_res20 [2];
  
  if (Il2CppMethodInitialized_184345202 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_184345202 = '\x01';
  }
  CustomLogic_CustomLogicListBuiltin___ctor((CustomLogic_CustomLogicListBuiltin_o *)__this,(MethodInfo *)0x0);
  if (step != 0) {
    if (step < 1) {
      for (; end < start; start = start + step) {
        pSVar3 = (__this->fields).List;
        local_res20[0] = start;
        pIVar6 = il2cpp_value_box(g_data_184354e08,local_res20);
        pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
label_181ed3130:
          ThrowNullReferenceException();
        }
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar3->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_181ed3130;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          if ((uint)pSVar4->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[(int)uVar2] = pIVar6;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pIVar6);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar3,pIVar6,(MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
    }
    else {
      for (; start < end; start = start + step) {
        pSVar3 = (__this->fields).List;
        local_res20[0] = start;
        pIVar6 = il2cpp_value_box(g_data_184354e08,local_res20);
        pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add;
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
label_181ed3124:
          ThrowNullReferenceException();
        }
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar3->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto label_181ed3124;
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          if ((uint)pSVar4->max_length <= uVar2) {
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[(int)uVar2] = pIVar6;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,pIVar6);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar3,pIVar6,(MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRangeBuiltin__get_ClassName (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x181ed3140

System_String_o *
CustomLogic_CustomLogicRangeBuiltin__get_ClassName
          (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345203 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Range");
    Il2CppMethodInitialized_184345203 = '\x01';
  }
  return "Range";
}


// CustomLogic.CustomLogicRangeBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_IsAbstract (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicRangeBuiltin__get_IsAbstract(CustomLogic_CustomLogicRangeBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicRangeBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_IsStatic (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicRangeBuiltin__get_IsStatic(CustomLogic_CustomLogicRangeBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicRangeBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicRangeBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicRangeBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


