// Type: Settings.UIRule
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Settings/UIRule.cs
// Prior real C# source: none
// --------------------------------

// Settings.UIRule$$MatchesAllowedValues
// il2cpp: bool Settings_UIRule__MatchesAllowedValues (Settings_UIRule_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181dd1d90
// eh: try 0x181dd1ea4..0x181dd1f9d -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 18 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dd1f6a: mov rdx, qword ptr [rip + 0x22c59a7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose
// asm:   0x181dd1f71: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181dd1f76: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181dd1f7b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181dd1f80: test rcx, rcx
// asm:   0x181dd1f83: jne 0x181dd1f9d
// asm:   0x181dd1f9d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

bool Settings_UIRule__MatchesAllowedValues
               (Settings_UIRule_o *__this,System_String_o *value,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this_00;
  Il2CppObject *str;
  bool bVar1;
  System_String_o *pSVar2;
  undefined1 local_40 [16];
  System_String_o *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_184344a39 == '\0') {
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
    Il2CppMethodInitialized_184344a39 = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (((!bVar1) && ((__this->fields).AllowedValues != (System_Collections_Generic_List_string__o *)0x0)) &&
     (__this_00 = (__this->fields).AllowedValues, (__this_00->fields)._size != 0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_string_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = (Il2CppObject *)local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_string_MoveNext);
      str = local_28.fields._current;
      if (!bVar1) break;
      if ((TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
      }
      pSVar2 = System_Text_RegularExpressions_Regex__Escape((System_String_o *)str,(MethodInfo *)0x0);
      if (pSVar2 == (System_String_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar2 = System_String__Replace_1970e80
                         (pSVar2,"\\*",".*",(MethodInfo *)0x0);
      pSVar2 = System_String__Concat_1969b70
                         ("^",pSVar2,"$",(MethodInfo *)0x0);
      bVar1 = System_Text_RegularExpressions_Regex__IsMatch_285c920(value,pSVar2,1,(MethodInfo *)0x0);
      if (bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
        return true;
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_string_Dispose);
  }
  return false;
}


// Settings.UIRule$$MatchesRule
// il2cpp: bool Settings_UIRule__MatchesRule (Il2CppObject* value, Settings_UIRule_o* rule, const MethodInfo* method);
// 0x181dd20f0

bool Settings_UIRule__MatchesRule(Il2CppObject *value,Settings_UIRule_o *rule,MethodInfo *method)

{
  System_Collections_Generic_List_string__o *__this;
  bool bVar1;
  System_String_o *a;
  System_String_o *b;
  Il2CppObject *pIVar2;
  
  if ((value != (Il2CppObject *)0x0) && (rule != (Settings_UIRule_o *)0x0)) {
    switch((rule->fields).Type) {
    case 0:
    case 1:
    case 3:
      return true;
    case 2:
      pIVar2 = (rule->fields).DefaultValue;
      a = (System_String_o *)(*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method);
      if (pIVar2 == (Il2CppObject *)0x0) {
        bVar1 = System_String__op_Equality(a,(System_String_o *)0x0,(MethodInfo *)0x0);
        return bVar1;
      }
      b = (System_String_o *)(*pIVar2->klass->vtable[3].methodPtr)(pIVar2,pIVar2->klass->vtable[3].method);
      bVar1 = System_String__op_Equality(a,b,(MethodInfo *)0x0);
      return bVar1;
    case 4:
      bVar1 = Settings_UIRule__MatchesRange
                        (value,(System_Nullable_float__o)(rule->fields).Min.fields,
                         (System_Nullable_float__o)(rule->fields).Max.fields,(MethodInfo *)0x0);
      return bVar1;
    case 5:
      __this = (rule->fields).AllowedValues;
      if (Il2CppMethodInitialized_184344a3b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_string_Contains);
        Il2CppMethodInitialized_184344a3b = '\x01';
      }
      if (__this != (System_Collections_Generic_List_string__o *)0x0) {
        pIVar2 = (Il2CppObject *)(*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method);
        bVar1 = System_Collections_Generic_List_object___Contains
                          ((System_Collections_Generic_List_object__o *)__this,pIVar2,
                           (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
        return bVar1;
      }
    }
  }
  return false;
}


// Settings.UIRule$$MatchesDefault
// il2cpp: bool Settings_UIRule__MatchesDefault (Il2CppObject* value, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x181dd1fb0

bool Settings_UIRule__MatchesDefault(Il2CppObject *value,Il2CppObject *defaultValue,MethodInfo *method)

{
  bool bVar1;
  System_String_o *a;
  System_String_o *b;
  
  if (value == (Il2CppObject *)0x0) {
    a = (System_String_o *)0x0;
  }
  else {
    a = (System_String_o *)(*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method);
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
// 0x181dd2010
// eh: try 0x181dd207b..0x181dd20f0 -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 23 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

bool Settings_UIRule__MatchesRange
               (Il2CppObject *value,System_Nullable_float__o min,System_Nullable_float__o max,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *pIVar2;
  float fVar3;
  float fVar4;
  System_Nullable_float__Fields local_res10;
  System_Nullable_float__Fields local_res18 [2];
  
  local_res10 = min.fields;
  local_res18[0] = max.fields;
  if (Il2CppMethodInitialized_184344a3a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IConvertible);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_float_get_Value);
    Il2CppMethodInitialized_184344a3a = '\x01';
  }
  pIVar2 = il2cpp_vm_Object_IsInst(value,(Il2CppClass *)TypeInfo_System_IConvertible);
  if (pIVar2 == (Il2CppObject *)0x0) {
    bVar1 = false;
  }
  else {
    if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
    }
    fVar3 = System_Convert__ToSingle(value,(MethodInfo *)0x0);
    if ((local_res10.hasValue != false) &&
       (fVar4 = System_Nullable_float___get_Value
                          ((System_Nullable_float__o *)&local_res10,
                           (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value), fVar3 < fVar4)) {
      return false;
    }
    if ((local_res18[0].hasValue != false) &&
       (fVar4 = System_Nullable_float___get_Value
                          ((System_Nullable_float__o *)local_res18,
                           (MethodInfo_AE2E30 *)MethodInfo_System_Nullable_float_get_Value), fVar4 < fVar3)) {
      return false;
    }
    bVar1 = true;
  }
  return bVar1;
}


// Settings.UIRule$$MatchesAllowedValues
// il2cpp: bool Settings_UIRule__MatchesAllowedValues (Il2CppObject* value, System_Collections_Generic_List_string__o* allowedValues, const MethodInfo* method);
// 0x181dd1d10

bool Settings_UIRule__MatchesAllowedValues_1dd1d10
               (Il2CppObject *value,System_Collections_Generic_List_string__o *allowedValues,
               MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *item;
  
  if (Il2CppMethodInitialized_184344a3b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Contains);
    Il2CppMethodInitialized_184344a3b = '\x01';
  }
  if ((allowedValues != (System_Collections_Generic_List_string__o *)0x0) && (value != (Il2CppObject *)0x0)) {
    item = (Il2CppObject *)(*value->klass->vtable[3].methodPtr)(value,value->klass->vtable[3].method);
    bVar1 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)allowedValues,item,
                       (MethodInfo_93FC70 *)MethodInfo_System_Collections_Generic_List_string_Contains);
    return bVar1;
  }
  return false;
}


// Settings.UIRule$$.ctor
// il2cpp: void Settings_UIRule___ctor (Settings_UIRule_o* __this, const MethodInfo* method);
// 0x18054c890

void
Settings_UIRule___ctor(Settings_UIRule_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


