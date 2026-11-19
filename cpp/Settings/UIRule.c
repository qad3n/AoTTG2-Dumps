// Type: Settings.UIRule
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/UIRule.cs
// Prior real C# source: none
// --------------------------------

// Settings.UIRule$$MatchesAllowedValues
// il2cpp: bool Settings_UIRule__MatchesAllowedValues (Settings_UIRule_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5b3c6c0
// eh: try 0x5b3c7da..0x5b3c8a7 -> pad 0x5b3c8b3 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5b3c8cb..0x5b3c8d0 -> pad 0x5b3c8f6 cleanup
// eh: try 0x5b3c8f9..0x5b3c903 -> pad 0x5b3c90b catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3c8a7: jmp 0x5b3c8b3
// asm:   0x5b3c8a9: jmp 0x5b3c8b3
// asm:   0x5b3c8ab: jmp 0x5b3c8b3
// asm:   0x5b3c8ad: jmp 0x5b3c8b3
// asm:   0x5b3c8af: jmp 0x5b3c8b3
// asm:   0x5b3c8b1: jmp 0x5b3c8b3
// asm:   0x5b3c8b3: mov rbx, rax
// asm:   0x5b3c8b6: cmp edx, 1
// asm:   0x5b3c8b9: jne 0x5b3c8f9
// asm:   0x5b3c8bb: mov rdi, rbx
// asm:   0x5b3c8be: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3c8c3: mov r14, qword ptr [rax]
// asm:   0x5b3c8c6: mov qword ptr [rsp + 0x18], r14
// asm:   0x5b3c8cb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3c8d0: lea rax, [rip + 0x1752221]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x5b3c8d7: mov rsi, qword ptr [rax]
// asm:   0x5b3c8da: mov rdi, rsp
// asm:   0x5b3c8dd: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5b3c8e2: xor ebp, ebp
// asm:   0x5b3c8e4: mov ebx, 0
// asm:   0x5b3c8e9: test r14, r14
// asm:   0x5b3c8ec: je 0x5b3c888
// asm:   0x5b3c8ee: mov rdi, r14
// asm:   0x5b3c8f1: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5b3c8f6: mov rbx, rax
// asm:   0x5b3c8f9: lea rdi, [rsp + 0x18]
// asm:   0x5b3c8fe: call 0x2fd6c60  ; il2cpp_runtime_helper_02fd6c60()
// asm:   0x5b3c903: mov rdi, rbx
// asm:   0x5b3c906: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3c90b: mov rdi, rax
// asm:   0x5b3c90e: call 0x2ab61e0  ; __clang_call_terminate()

bool Settings_UIRule__MatchesAllowedValues
               (Settings_UIRule_o *__this,System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  Il2CppObject *str;
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  int iVar4;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_07547256 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&"\\*");
    il2cpp_codegen_initialize_runtime_metadata(&"^");
    il2cpp_codegen_initialize_runtime_metadata(&"$");
    il2cpp_codegen_initialize_runtime_metadata(&".*");
    Il2CppMethodInitialized_07547256 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  bVar2 = false;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  local_38 = (undefined1 *)&local_58;
  if (!bVar1) {
    __this_00 = (__this->fields).AllowedValues;
    if ((__this_00 == (System_Collections_Generic_List_string__o *)0x0) || ((__this_00->fields)._size == 0)) {
      bVar2 = false;
    }
    else {
      System_Collections_Generic_List_object___GetEnumerator
                (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
      local_40 = 0;
      do {
        bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                           (MethodInfo_4C45C50 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
        str = local_58.fields._current;
        if (!bVar2) {
          iVar4 = 7;
          goto label_05b3c876;
        }
        if ((TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
        }
        pSVar3 = System_Text_RegularExpressions_Regex__Escape((System_String_o *)str,(MethodInfo *)0x0);
        if (pSVar3 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar3 = System_String__Replace_5304550
                           (pSVar3,"\\*",".*",(MethodInfo *)0x0);
        pSVar3 = System_String__Concat_5301f10
                           ("^",pSVar3,"$",(MethodInfo *)0x0);
        bVar1 = System_Text_RegularExpressions_Regex__IsMatch_61e32f0(value,pSVar3,1,(MethodInfo *)0x0);
      } while (!bVar1);
      iVar4 = 6;
label_05b3c876:
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                 (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
      bVar2 = iVar4 == 6 && bVar2;
    }
  }
  return bVar2;
}


// Settings.UIRule$$MatchesRule
// il2cpp: bool Settings_UIRule__MatchesRule (Il2CppObject* value, Settings_UIRule_o* rule, const MethodInfo* method);
// 0x5b3c920

bool Settings_UIRule__MatchesRule(Il2CppObject *value,Settings_UIRule_o *rule,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  bool bVar1;
  System_String_o *a;
  System_String_o *b;
  Il2CppObject *pIVar2;
  
  bVar1 = false;
  if ((value != (Il2CppObject *)0x0) && (rule != (Settings_UIRule_o *)0x0)) {
    switch((rule->fields).Type) {
    case 0:
    case 1:
    case 3:
      bVar1 = true;
      break;
    case 2:
      pIVar2 = (rule->fields).DefaultValue;
      a = (System_String_o *)(*value->klass->vtable[3].methodPtr)(value);
      if (pIVar2 == (Il2CppObject *)0x0) {
        b = (System_String_o *)0x0;
      }
      else {
        b = (System_String_o *)(*pIVar2->klass->vtable[3].methodPtr)(pIVar2,pIVar2->klass->vtable[3].method);
      }
      bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
      return bVar1;
    case 4:
      bVar1 = Settings_UIRule__MatchesRange
                        (value,(System_Nullable_float__o)(rule->fields).Min.fields,
                         (System_Nullable_float__o)(rule->fields).Max.fields,
                         (MethodInfo *)&switchD_05b3c94e::switchdataD_010a58b4);
      return bVar1;
    case 5:
      __this = (rule->fields).AllowedValues;
      if (Il2CppMethodInitialized_07547258 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_Contains);
        Il2CppMethodInitialized_07547258 = '\x01';
      }
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pIVar2 = (Il2CppObject *)(*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method);
        bVar1 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)__this,pIVar2,
                           (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        return bVar1;
      }
    default:
      return false;
    }
  }
  return bVar1;
}


// Settings.UIRule$$MatchesDefault
// il2cpp: bool Settings_UIRule__MatchesDefault (Il2CppObject* value, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x5b3ca20

bool Settings_UIRule__MatchesDefault(Il2CppObject *value,Il2CppObject *defaultValue,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  System_String_o *b;
  
  if (value == (Il2CppObject *)0x0) {
    a = (System_String_o *)0x0;
  }
  else {
    a = (System_String_o *)(*value->klass->vtable[3].methodPtr)();
  }
  if (defaultValue == (Il2CppObject *)0x0) {
    b = (System_String_o *)0x0;
  }
  else {
    b = (System_String_o *)
        (*defaultValue->klass->vtable[3].methodPtr)(defaultValue,defaultValue->klass->vtable[3].method);
  }
  bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
  return bVar1;
}


// Settings.UIRule$$MatchesRange
// il2cpp: bool Settings_UIRule__MatchesRange (Il2CppObject* value, System_Nullable_float__o min, System_Nullable_float__o max, const MethodInfo* method);
// 0x5b3ca80
// eh: try 0x5b3cb0a..0x5b3cb58 -> pad 0x5b3cb67 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5b3cb91..0x5b3cbce -> pad 0x5b3cbce (+1 call sites) cleanup
// eh: try 0x5b3cbd1..0x5b3cbd6 -> pad 0x5b3cbde catch (...) [compiler noexcept guard]
// asm: 31 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b3cb67: jmp 0x5b3cb6d
// asm:   0x5b3cb69: jmp 0x5b3cb6d
// asm:   0x5b3cb6b: jmp 0x5b3cb6d
// asm:   0x5b3cb6d: mov rbx, rax
// asm:   0x5b3cb70: cmp edx, 1
// asm:   0x5b3cb73: jne 0x5b3cbd6
// asm:   0x5b3cb75: mov rdi, rbx
// asm:   0x5b3cb78: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5b3cb7d: mov rbx, rax
// asm:   0x5b3cb80: lea rax, [rip + 0x1a19b41]
// asm:   0x5b3cb87: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5b3cb8b: mov rax, qword ptr [rbx]
// asm:   0x5b3cb8e: mov rsi, qword ptr [rax]
// asm:   0x5b3cb91: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5b3cb96: test al, al
// asm:   0x5b3cb98: je 0x5b3cbad
// asm:   0x5b3cb9a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3cbad: mov edi, 8
// asm:   0x5b3cbb2: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5b3cbb7: mov rcx, qword ptr [rbx]
// asm:   0x5b3cbba: mov qword ptr [rax], rcx
// asm:   0x5b3cbbd: lea rsi, [rip + 0x12f093c]
// asm:   0x5b3cbc4: mov rdi, rax
// asm:   0x5b3cbc7: xor edx, edx
// asm:   0x5b3cbc9: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5b3cbce: mov rbx, rax
// asm:   0x5b3cbd1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5b3cbd6: mov rdi, rbx
// asm:   0x5b3cbd9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5b3cbde: mov rdi, rax
// asm:   0x5b3cbe1: call 0x2ab61e0  ; __clang_call_terminate()

bool Settings_UIRule__MatchesRange
               (Il2CppObject *value,System_Nullable_float__o min,System_Nullable_float__o max,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  float fVar3;
  float fVar4;
  System_Nullable_float__o SStack_28;
  System_Nullable_float__o SStack_20;
  
  SStack_28.fields = max.fields;
  SStack_20.fields = min.fields;
  if (Il2CppMethodInitialized_07547257 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IConvertible);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    Il2CppMethodInitialized_07547257 = '\x01';
  }
  pIVar1 = il2cpp_vm_Object_IsInst(value,(Il2CppClass *)TypeInfo_System_IConvertible);
  if (pIVar1 == (Il2CppObject *)0x0) {
label_05b3cb9f:
    bVar2 = false;
  }
  else {
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    fVar3 = System_Convert__ToSingle(value,(MethodInfo *)0x0);
    if (min.fields.hasValue != false) {
      fVar4 = System_Nullable_float___get_Value
                        (&SStack_20,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
      if (fVar3 < fVar4) goto label_05b3cb9f;
    }
    if (max.fields.hasValue != false) {
      fVar4 = System_Nullable_float___get_Value
                        (&SStack_28,(MethodInfo_3CDA2D0 *)MethodInfo_System_Nullable_float_get_Value);
      if (fVar4 < fVar3) goto label_05b3cb9f;
    }
    bVar2 = true;
  }
  return bVar2;
}


// Settings.UIRule$$MatchesAllowedValues
// il2cpp: bool Settings_UIRule__MatchesAllowedValues (Il2CppObject* value, System_Collections_Generic_List_string__o* allowedValues, const MethodInfo* method);
// 0x5b3cbf0

bool Settings_UIRule__MatchesAllowedValues_5a3cbf0
               (Il2CppObject *value,System_Collections_Generic_List_string__o *allowedValues,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *item;
  
  if (Il2CppMethodInitialized_07547258 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    Il2CppMethodInitialized_07547258 = '\x01';
  }
  if ((value == (Il2CppObject *)0x0) || (allowedValues == (System_Collections_Generic_List_string__o *)0x0)) {
    return false;
  }
  item = (Il2CppObject *)(*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method);
  bVar1 = System_Collections_Generic_List_object___Contains
                    ((System_Collections_Generic_List_object__o *)allowedValues,item,
                     (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_string_Contains);
  return bVar1;
}


// Settings.UIRule$$.ctor
// il2cpp: void Settings_UIRule___ctor (Settings_UIRule_o* __this, const MethodInfo* method);
// 0x5b3cc60

void Settings_UIRule___ctor(Settings_UIRule_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


