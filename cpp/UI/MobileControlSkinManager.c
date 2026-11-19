// Type: UI.MobileControlSkinManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp_body_deref/Scripts/UI/MobileControlSkinManager.cs
// Prior real C# source: none
// --------------------------------

// UI.MobileControlSkinManager.<>c$$.cctor
// il2cpp: void UI_MobileControlSkinManager___c___cctor (const MethodInfo* method);
// 0x5c77cb0

void UI_MobileControlSkinManager___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754794d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager_c);
    Il2CppMethodInitialized_0754794d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_UI_MobileControlSkinManager_c->static_fields->__9 = (UI_MobileControlSkinManager___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileControlSkinManager_c->static_fields->__9);
  return;
}


// UI.MobileControlSkinManager.<>c$$.ctor
// il2cpp: void UI_MobileControlSkinManager___c___ctor (UI_MobileControlSkinManager___c_o* __this, const MethodInfo* method);
// 0x5c77d20

void UI_MobileControlSkinManager___c___ctor(UI_MobileControlSkinManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileControlSkinManager.<>c$$<GetSkinOptions>b__7_0
// il2cpp: System_String_o* UI_MobileControlSkinManager___c___GetSkinOptions_b__7_0 (UI_MobileControlSkinManager___c_o* __this, System_String_o* path, const MethodInfo* method);
// 0x5c77d30

System_String_o *
UI_MobileControlSkinManager___c___GetSkinOptions_b__7_0
          (UI_MobileControlSkinManager___c_o *__this,System_String_o *path,MethodInfo *method)

{
  return path;
}


// UI.MobileControlSkinManager.<>c$$<GetBuiltinSkinOptions>b__14_0
// il2cpp: System_String_o* UI_MobileControlSkinManager___c___GetBuiltinSkinOptions_b__14_0 (UI_MobileControlSkinManager___c_o* __this, System_String_o* path, const MethodInfo* method);
// 0x5c77d40

System_String_o *
UI_MobileControlSkinManager___c___GetBuiltinSkinOptions_b__14_0
          (UI_MobileControlSkinManager___c_o *__this,System_String_o *path,MethodInfo *method)

{
  return path;
}


// UI.MobileControlSkinManager.<>c$$<GetCustomSkinOptions>b__26_1
// il2cpp: System_String_o* UI_MobileControlSkinManager___c___GetCustomSkinOptions_b__26_1 (UI_MobileControlSkinManager___c_o* __this, System_String_o* path, const MethodInfo* method);
// 0x5c77d50

System_String_o *
UI_MobileControlSkinManager___c___GetCustomSkinOptions_b__26_1
          (UI_MobileControlSkinManager___c_o *__this,System_String_o *path,MethodInfo *method)

{
  return path;
}


// UI.MobileControlSkinManager.<>c$$<CombineResourcePath>b__35_0
// il2cpp: bool UI_MobileControlSkinManager___c___CombineResourcePath_b__35_0 (UI_MobileControlSkinManager___c_o* __this, System_String_o* part, const MethodInfo* method);
// 0x5c77d60

bool UI_MobileControlSkinManager___c___CombineResourcePath_b__35_0
               (UI_MobileControlSkinManager___c_o *__this,System_String_o *part,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace(part,(MethodInfo *)0x0);
  return !bVar1;
}


// UI.MobileControlSkinManager.<>c$$<CombineResourcePath>b__35_1
// il2cpp: System_String_o* UI_MobileControlSkinManager___c___CombineResourcePath_b__35_1 (UI_MobileControlSkinManager___c_o* __this, System_String_o* part, const MethodInfo* method);
// 0x5c77d70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c77d90: test rbx, rbx
// asm:   0x5c77d95: jmp 0x5c77dc7

System_String_o *
UI_MobileControlSkinManager___c___CombineResourcePath_b__35_1
          (UI_MobileControlSkinManager___c_o *__this,System_String_o *part,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754794e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    Il2CppMethodInitialized_0754794e = '\x01';
    uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  if ((((part == (System_String_o *)0x0) &&
       (part = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), part == (System_String_o *)0x0)) ||
      (pSVar2 = System_String__Replace(part,0x5c,0x2f,(MethodInfo *)0x0), pSVar2 == (System_String_o *)0x0))
     || (pSVar2 = System_String__TrimStart_5307150(pSVar2,0x2f,(MethodInfo *)0x0),
        pSVar2 == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__Trim_5306ec0(pSVar2,0x2f,(MethodInfo *)0x0);
  return pSVar2;
}


// UI.MobileControlSkinManager.<>c$$<CombineResourcePath>b__35_2
// il2cpp: bool UI_MobileControlSkinManager___c___CombineResourcePath_b__35_2 (UI_MobileControlSkinManager___c_o* __this, System_String_o* part, const MethodInfo* method);
// 0x5c77e30

bool UI_MobileControlSkinManager___c___CombineResourcePath_b__35_2
               (UI_MobileControlSkinManager___c_o *__this,System_String_o *part,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace(part,(MethodInfo *)0x0);
  return !bVar1;
}


// UI.MobileControlSkinManager.<>c__DisplayClass12_0$$.ctor
// il2cpp: void UI_MobileControlSkinManager___c__DisplayClass12_0___ctor (UI_MobileControlSkinManager___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x5c75180

void UI_MobileControlSkinManager___c__DisplayClass12_0___ctor
               (UI_MobileControlSkinManager___c__DisplayClass12_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileControlSkinManager.<>c__DisplayClass12_0$$<GetSkinSourceName>b__0
// il2cpp: bool UI_MobileControlSkinManager___c__DisplayClass12_0___GetSkinSourceName_b__0 (UI_MobileControlSkinManager___c__DisplayClass12_0_o* __this, System_String_o* prefix, const MethodInfo* method);
// 0x5c77e40

bool UI_MobileControlSkinManager___c__DisplayClass12_0___GetSkinSourceName_b__0
               (UI_MobileControlSkinManager___c__DisplayClass12_0_o *__this,System_String_o *prefix,
               MethodInfo *method)

{
  System_String_o *__this_00;
  bool bVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_0754794f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_0754794f = '\x01';
  }
  __this_00 = (__this->fields).normalized;
  value = System_String__Concat_52f0320(prefix,"/",(MethodInfo *)0x0);
  if (__this_00 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__StartsWith_53002b0(__this_00,value,5,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MobileControlSkinManager.<>c__DisplayClass26_0$$.ctor
// il2cpp: void UI_MobileControlSkinManager___c__DisplayClass26_0___ctor (UI_MobileControlSkinManager___c__DisplayClass26_0_o* __this, const MethodInfo* method);
// 0x5c77460

void UI_MobileControlSkinManager___c__DisplayClass26_0___ctor
               (UI_MobileControlSkinManager___c__DisplayClass26_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileControlSkinManager.<>c__DisplayClass26_0$$<GetCustomSkinOptions>b__0
// il2cpp: System_String_o* UI_MobileControlSkinManager___c__DisplayClass26_0___GetCustomSkinOptions_b__0 (UI_MobileControlSkinManager___c__DisplayClass26_0_o* __this, System_String_o* path, const MethodInfo* method);
// 0x5c77eb0

System_String_o *
UI_MobileControlSkinManager___c__DisplayClass26_0___GetCustomSkinOptions_b__0
          (UI_MobileControlSkinManager___c__DisplayClass26_0_o *__this,System_String_o *path,
          MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (Il2CppMethodInitialized_07547950 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom/");
    Il2CppMethodInitialized_07547950 = '\x01';
    method = extraout_RDX;
  }
  pSVar1 = (__this->fields).root;
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    method = extraout_RDX_00;
  }
  pSVar1 = UI_MobileControlSkinManager__ToRelativePath(pSVar1,path,method);
  pSVar1 = System_String__Concat_52f0320("Custom/",pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// UI.MobileControlSkinManager.<>c__DisplayClass31_0$$.ctor
// il2cpp: void UI_MobileControlSkinManager___c__DisplayClass31_0___ctor (UI_MobileControlSkinManager___c__DisplayClass31_0_o* __this, const MethodInfo* method);
// 0x5c779d0

void UI_MobileControlSkinManager___c__DisplayClass31_0___ctor
               (UI_MobileControlSkinManager___c__DisplayClass31_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// UI.MobileControlSkinManager.<>c__DisplayClass31_0$$<IsImagePath>b__0
// il2cpp: bool UI_MobileControlSkinManager___c__DisplayClass31_0___IsImagePath_b__0 (UI_MobileControlSkinManager___c__DisplayClass31_0_o* __this, System_String_o* x, const MethodInfo* method);
// 0x5c77f30

bool UI_MobileControlSkinManager___c__DisplayClass31_0___IsImagePath_b__0
               (UI_MobileControlSkinManager___c__DisplayClass31_0_o *__this,System_String_o *x,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_52ffe30(x,(__this->fields).extension,5,(MethodInfo *)0x0);
  return bVar1;
}


// UI.MobileControlSkinManager$$GetSkinOptions
// il2cpp: System_String_array* UI_MobileControlSkinManager__GetSkinOptions (const MethodInfo* method);
// 0x5c73de0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c73ead: jmp 0x5c73ec8

System_String_array * UI_MobileControlSkinManager__GetSkinOptions(MethodInfo *method)

{
  Il2CppObject *object;
  System_Collections_Generic_IEnumerable_string__o *first;
  System_Collections_Generic_IEnumerable_string__o *second;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  UI_MobileControlSkinManager___c_StaticFields *pUVar1;
  System_Func_string__string__o *__this;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_String_array *pSVar2;
  UI_MobileControlSkinManager_c *method_00;
  
  if (Il2CppMethodInitialized_0754792f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Concat_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileControlSkinManager_c_GetSkinOptions_b__7_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager_c);
    Il2CppMethodInitialized_0754792f = '\x01';
  }
  method_00 = TypeInfo_UI_MobileControlSkinManager;
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  first = UI_MobileControlSkinManager__GetBuiltinSkinOptions((MethodInfo *)method_00);
  second = UI_MobileControlSkinManager__GetCustomSkinOptions((MethodInfo *)method_00);
  source = System_Linq_Enumerable__Concat_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                      (System_Collections_Generic_IEnumerable_TSource__o *)second,
                      (MethodInfo_34E5C10 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  if ((TypeInfo_UI_MobileControlSkinManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
    pUVar1 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    __this = pUVar1->__9__7_0;
  }
  else {
    pUVar1 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    __this = pUVar1->__9__7_0;
  }
  if (__this == (System_Func_string__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
      pUVar1 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    }
    object = (Il2CppObject *)pUVar1->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this,object,
               (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_GetSkinOptions_b__7_0,
               (MethodInfo_4F19B50 *)0x0);
    pUVar1 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    pUVar1->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pUVar1->__9__7_0);
  }
  source_00 = System_Linq_Enumerable__OrderBy_object__object_
                        (source,(System_Func_TSource__TKey__o *)__this,
                         (MethodInfo_34F1E50 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string);
  pSVar2 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar2;
}


// UI.MobileControlSkinManager$$GetSkinSourceOptions
// il2cpp: System_String_array* UI_MobileControlSkinManager__GetSkinSourceOptions (const MethodInfo* method);
// 0x5c745a0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c74697: cmp byte ptr [rip + 0x18ce1e8], 0
// asm:   0x5c7469e: je 0x5c746f0

System_String_array * UI_MobileControlSkinManager__GetSkinSourceOptions(MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_IEnumerable_string__o *first;
  Il2CppObject *second;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar2;
  System_String_array *pSVar3;
  UI_MobileControlSkinManager_c *method_00;
  
  if (Il2CppMethodInitialized_07547930 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Concat_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    Il2CppMethodInitialized_07547930 = '\x01';
  }
  method_00 = TypeInfo_UI_MobileControlSkinManager;
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  first = UI_MobileControlSkinManager__GetBuiltinSourcePrefixes((MethodInfo *)method_00);
  second = SZArrayNew(TypeInfo_string_array,1);
  if (second == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  if (*(int *)&second[1].monitor == 0) {
    ThrowIndexOutOfRangeException();
  }
  second[2].klass = (Il2CppClass *)"Custom";
  Il2CppCodeGenWriteBarrier(&second[2].klass);
  pSVar2 = System_Linq_Enumerable__Concat_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)first,
                      (System_Collections_Generic_IEnumerable_TSource__o *)second,
                      (MethodInfo_34E5C10 *)MethodInfo_System_Linq_Enumerable_Concat_string);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar2 = System_Linq_Enumerable__Distinct_object__34e8be0
                     (pSVar2,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_34E8BE0 *)MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
  pSVar3 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (pSVar2,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar3;
}


// UI.MobileControlSkinManager$$NormalizeSkinReference
// il2cpp: System_String_o* UI_MobileControlSkinManager__NormalizeSkinReference (System_String_o* path, const MethodInfo* method);
// 0x5c74b90
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c74bb3: test rbx, rbx
// asm:   0x5c74bb8: jmp 0x5c74bea
// asm:   0x5c74c60: jmp 0x5c74ca8

System_String_o *
UI_MobileControlSkinManager__NormalizeSkinReference(System_String_o *path,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547931 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    Il2CppMethodInitialized_07547931 = '\x01';
    uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  if (((path == (System_String_o *)0x0) &&
      (path = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), path == (System_String_o *)0x0)) ||
     (pSVar3 = System_String__Replace(path,0x5c,0x2f,(MethodInfo *)0x0), pSVar3 == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar3 = System_String__TrimStart_5307150(pSVar3,0x2f,(MethodInfo *)0x0);
  method_00 = (MethodInfo *)0x0;
  bVar2 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
      bVar2 = UI_MobileControlSkinManager__IsResourceReference(pSVar3,method_00);
      if (bVar2) {
        return pSVar3;
      }
    }
    else {
      bVar2 = UI_MobileControlSkinManager__IsResourceReference(pSVar3,method_00);
      if (bVar2) {
        return pSVar3;
      }
    }
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    bVar2 = UI_MobileControlSkinManager__IsCustomSkinReference(pSVar3,method_00);
    if (bVar2) {
      return pSVar3;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.MobileControlSkinManager$$IsCustomSkinReference
// il2cpp: bool UI_MobileControlSkinManager__IsCustomSkinReference (System_String_o* path, const MethodInfo* method);
// 0x5c74d90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c74db0: test rbx, rbx
// asm:   0x5c74db5: jmp 0x5c74df3

bool UI_MobileControlSkinManager__IsCustomSkinReference(System_String_o *path,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547932 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom/");
    Il2CppMethodInitialized_07547932 = '\x01';
    uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  if ((((path == (System_String_o *)0x0) &&
       (path = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), path == (System_String_o *)0x0)) ||
      (pSVar3 = System_String__Replace(path,0x5c,0x2f,(MethodInfo *)0x0), pSVar3 == (System_String_o *)0x0))
     || (pSVar3 = System_String__TrimStart_5307150(pSVar3,0x2f,(MethodInfo *)0x0),
        pSVar3 == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = System_String__StartsWith_53002b0(pSVar3,"Custom/",5,(MethodInfo *)0x0);
  return bVar2;
}


// UI.MobileControlSkinManager$$IsSkinReferenceFromSource
// il2cpp: bool UI_MobileControlSkinManager__IsSkinReferenceFromSource (System_String_o* path, System_String_o* source, const MethodInfo* method);
// 0x5c74e60
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c74e87: test rbx, rbx
// asm:   0x5c74e8c: jmp 0x5c74eca

bool UI_MobileControlSkinManager__IsSkinReferenceFromSource
               (System_String_o *path,System_String_o *source,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *a;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547933 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    Il2CppMethodInitialized_07547933 = '\x01';
    uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  if ((((source == (System_String_o *)0x0) &&
       (source = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), source == (System_String_o *)0x0)) ||
      (pSVar3 = System_String__Replace(source,0x5c,0x2f,(MethodInfo *)0x0), pSVar3 == (System_String_o *)0x0))
     || (pSVar3 = System_String__TrimStart_5307150(pSVar3,0x2f,(MethodInfo *)0x0),
        pSVar3 == (System_String_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar3 = System_String__Trim_5306ec0(pSVar3,0x2f,(MethodInfo *)0x0);
  bVar2 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
  if (bVar2) {
    return false;
  }
  method_00 = (MethodInfo *)"Custom";
  bVar2 = System_String__Equals_52ffe30(pSVar3,"Custom",5,(MethodInfo *)0x0);
  uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  if (!bVar2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    a = UI_MobileControlSkinManager__GetSkinSourceName(path,method_00);
    bVar2 = System_String__Equals_52ffe30(a,pSVar3,5,(MethodInfo *)0x0);
    return bVar2;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  bVar2 = UI_MobileControlSkinManager__IsCustomSkinReference(path,method_00);
  return bVar2;
}


// UI.MobileControlSkinManager$$GetSkinSourceName
// il2cpp: System_String_o* UI_MobileControlSkinManager__GetSkinSourceName (System_String_o* path, const MethodInfo* method);
// 0x5c74fc0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7504f: test r14, r14
// asm:   0x5c75052: jne 0x5c75081
// asm:   0x5c75054: jmp 0x5c75060

System_String_o * UI_MobileControlSkinManager__GetSkinSourceName(System_String_o *path,MethodInfo *method)

{
  bool bVar1;
  UI_MobileControlSkinManager___c__DisplayClass12_0_o *__this;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  System_String_o **ppSVar3;
  System_Collections_Generic_IEnumerable_string__o *source;
  System_Func_string__bool__o *__this_00;
  UI_MobileControlSkinManager_c *method_01;
  
  if (Il2CppMethodInitialized_07547934 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_71a8548);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileControlSkinManager_c__DisplayClass12_0_GetSkinSourceName_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager_c__DisplayClass12_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom");
    Il2CppMethodInitialized_07547934 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c__DisplayClass12_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  if ((((path == (System_String_o *)0x0) &&
       (path = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), path == (System_String_o *)0x0)) ||
      (pSVar2 = System_String__Replace(path,0x5c,0x2f,(MethodInfo *)0x0), pSVar2 == (System_String_o *)0x0))
     || ((pSVar2 = System_String__TrimStart_5307150(pSVar2,0x2f,(MethodInfo *)0x0),
         pSVar2 == (System_String_o *)0x0 ||
         (method_00 = (MethodInfo *)System_String__Trim_5306ec0(pSVar2,0x2f,(MethodInfo *)0x0),
         __this == (UI_MobileControlSkinManager___c__DisplayClass12_0_o *)0x0)))) {
    ThrowNullReferenceException();
  }
  (__this->fields).normalized = (System_String_o *)method_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).normalized);
  bVar1 = UI_MobileControlSkinManager__IsCustomSkinReference((__this->fields).normalized,method_00);
  if (bVar1) {
    ppSVar3 = &"Custom";
  }
  else {
    method_01 = TypeInfo_UI_MobileControlSkinManager;
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    source = UI_MobileControlSkinManager__GetBuiltinSourcePrefixes((MethodInfo *)method_01);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)MethodInfo_UI_MobileControlSkinManager_c__DisplayClass12_0_GetSkinSourceName_b__0,
               (MethodInfo_4F19300 *)0x0);
    pSVar2 = System_Linq_Enumerable__FirstOrDefault_object__34ed9e0
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)__this_00,
                        (MethodInfo_34ED9E0 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_string_71a8548)
    ;
    if (pSVar2 != (System_String_o *)0x0) {
      return pSVar2;
    }
    ppSVar3 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  return *ppSVar3;
}


// UI.MobileControlSkinManager$$GetSkinDisplayName
// il2cpp: System_String_o* UI_MobileControlSkinManager__GetSkinDisplayName (System_String_o* path, const MethodInfo* method);
// 0x5c75190

System_String_o * UI_MobileControlSkinManager__GetSkinDisplayName(System_String_o *path,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547935 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_07547935 = '\x01';
  }
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  pSVar2 = UI_MobileControlSkinManager__NormalizeSkinReference(path,method);
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  else {
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    pSVar3 = UI_MobileControlSkinManager__GetSkinSourceName(pSVar2,method_00);
    bVar1 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar3 = System_String__Concat_52f0320(pSVar3,"/",(MethodInfo *)0x0);
      if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
      }
      if (pSVar2 != (System_String_o *)0x0) {
        bVar1 = System_String__StartsWith_53002b0(pSVar2,pSVar3,5,(MethodInfo *)0x0);
        if (!bVar1) {
          return pSVar2;
        }
        if (pSVar3 != (System_String_o *)0x0) {
          pSVar2 = System_String__Substring(pSVar2,(pSVar3->fields)._stringLength,(MethodInfo *)0x0);
          return pSVar2;
        }
      }
      ThrowNullReferenceException();
    }
  }
  return pSVar2;
}


// UI.MobileControlSkinManager$$GetBuiltinSkinOptions
// il2cpp: System_Collections_Generic_IEnumerable_string__o* UI_MobileControlSkinManager__GetBuiltinSkinOptions (const MethodInfo* method);
// 0x5c73f60
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7411b: mov r15, rsp
// asm:   0x5c7411e: jmp 0x5c7413d
// asm:   0x5c74214: jmp 0x5c741c5
// asm:   0x5c7424f: jmp 0x5c7426a

System_Collections_Generic_IEnumerable_string__o *
UI_MobileControlSkinManager__GetBuiltinSkinOptions(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Il2CppObject *object;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_Collections_Generic_List_string__o *options;
  Il2CppClass *pIVar5;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  UI_MobileControlSkinManager___c_StaticFields *pUVar6;
  System_Func_string__string__o *__this;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Object_array *pSVar7;
  MethodInfo *pMVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UI_MobileControlSkinManager_c *method_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07547936 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileControlSkinManager_c_GetBuiltinSkinOptions_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Sources");
    Il2CppMethodInitialized_07547936 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  method_00 = TypeInfo_UI_MobileControlSkinManager;
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  pSVar4 = UI_MobileControlSkinManager__GetBuiltinSkinList((MethodInfo *)method_00);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
label_05c74183:
    pMVar8 = MethodInfo_System_Array_Empty_string;
    if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
      pIVar5 = *(Il2CppClass **)((long)(pMVar8->field7_0x38).methodMetadataHandle + 0x10);
      bVar1 = (pIVar5->_2).bitflags1;
    }
    else {
      pIVar5 = *(Il2CppClass **)
                ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
      bVar1 = (pIVar5->_2).bitflags1;
    }
    if ((bVar1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
      uVar2 = (pIVar5->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (pIVar5->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar5);
      pIVar5 = (pMVar8->field7_0x38).rgctx_data[2].klass;
      bVar1 = (pIVar5->_2).bitflags1;
    }
    else {
      pIVar5 = (pMVar8->field7_0x38).rgctx_data[2].klass;
      bVar1 = (pIVar5->_2).bitflags1;
    }
    if ((bVar1 & 1) == 0) {
      pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
    }
    return *(System_Collections_Generic_IEnumerable_string__o **)pIVar5->static_fields;
  }
  if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar3 = (*(pSVar4->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar4,"Sources",(pSVar4->klass->vtable)._28_HasKey.method);
    if (!bVar3) goto label_05c74183;
    options = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)options,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar4,"Sources",(pSVar4->klass->vtable)._7_get_Item.method);
    if (pSVar4 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      (*(pSVar4->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar4,(pSVar4->klass->vtable)._32_unknown.method);
      bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
      if (bVar3) {
        do {
          aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
          pMVar8 = extraout_RDX;
          if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
            pMVar8 = extraout_RDX_00;
          }
          UI_MobileControlSkinManager__AddBuiltinSourceOptions(pSVar4,options,pMVar8);
          bVar3 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        } while (bVar3);
      }
      source = System_Linq_Enumerable__Distinct_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)options,
                          (MethodInfo_34E8B20 *)MethodInfo_System_Linq_Enumerable_Distinct_string);
      if ((TypeInfo_UI_MobileControlSkinManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
        pUVar6 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
        __this = pUVar6->__9__14_0;
      }
      else {
        pUVar6 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
        __this = pUVar6->__9__14_0;
      }
      if (__this == (System_Func_string__string__o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
          pUVar6 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
        }
        object = (Il2CppObject *)pUVar6->__9;
        __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
        System_Func_object__object____ctor
                  ((System_Func_object__object__o *)__this,object,
                   (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_GetBuiltinSkinOptions_b__14_0,
                   (MethodInfo_4F19B50 *)0x0);
        pUVar6 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
        pUVar6->__9__14_0 = __this;
        Il2CppCodeGenWriteBarrier(&pUVar6->__9__14_0);
      }
      source_00 = System_Linq_Enumerable__OrderBy_object__object_
                            (source,(System_Func_TSource__TKey__o *)__this,
                             (MethodInfo_34F1E50 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string);
      pSVar7 = System_Linq_Enumerable__ToArray_object_
                         ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                          (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      return (System_Collections_Generic_IEnumerable_string__o *)pSVar7;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlSkinManager$$AddBuiltinSourceOptions
// il2cpp: void UI_MobileControlSkinManager__AddBuiltinSourceOptions (SimpleJSONFixed_JSONNode_o* source, System_Collections_Generic_List_string__o* options, const MethodInfo* method);
// 0x5c75530

void UI_MobileControlSkinManager__AddBuiltinSourceOptions
               (SimpleJSONFixed_JSONNode_o *source,System_Collections_Generic_List_string__o *options,
               MethodInfo *method)

{
  bool bVar1;
  System_String_o *root;
  System_String_o *prefix;
  MethodInfo *method_00;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07547937 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Groups");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins");
    Il2CppMethodInitialized_07547937 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(source,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((options != (System_Collections_Generic_List_string__o *)0x0) && (!bVar1)) {
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    root = UI_MobileControlSkinManager__GetBuiltinResourceRoot(source,method_00);
    prefix = UI_MobileControlSkinManager__GetBuiltinSourcePrefix(source,method_00);
    if (source == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(source->klass->vtable)._28_HasKey.methodPtr)
                      (source,"Skins",(source->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
      }
      UI_MobileControlSkinManager__AddBuiltinSkinSetOptions(source,root,prefix,options,in_R8);
    }
    bVar1 = (*(source->klass->vtable)._28_HasKey.methodPtr)
                      (source,"Groups",(source->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
      }
      UI_MobileControlSkinManager__AddBuiltinGroupOptions(source,root,prefix,options,in_R8);
      return;
    }
  }
  return;
}


// UI.MobileControlSkinManager$$AddBuiltinSkinSetOptions
// il2cpp: void UI_MobileControlSkinManager__AddBuiltinSkinSetOptions (SimpleJSONFixed_JSONNode_o* source, System_String_o* root, System_String_o* prefix, System_Collections_Generic_List_string__o* options, const MethodInfo* method);
// 0x5c75980
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c75b83: test rbx, rbx
// asm:   0x5c75b86: jne 0x5c75bbb
// asm:   0x5c75b88: jmp 0x5c75b9a
// asm:   0x5c75d39: test rbx, rbx
// asm:   0x5c75d3c: jne 0x5c75d6b
// asm:   0x5c75d3e: jmp 0x5c75d4a

void UI_MobileControlSkinManager__AddBuiltinSkinSetOptions
               (SimpleJSONFixed_JSONNode_o *source,System_String_o *root,System_String_o *prefix,
               System_Collections_Generic_List_string__o *options,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  MethodInfo *method_00;
  System_String_array *pSVar6;
  System_String_o *optionRoot;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar7;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_110;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07547938 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Groups");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_07547938 = '\x01';
  }
  local_c8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_c8.m_Array.fields._index = 0;
  local_c8.m_Array.fields._version = 0;
  local_c8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_c8.m_Object.fields._getEnumeratorRetType = 0;
  local_c8.m_Object.fields._36_4_ = 0;
  local_c8.m_Object.fields._version = 0;
  local_c8.m_Object.fields._index = 0;
  local_c8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_c8.type = 0;
  local_c8._4_4_ = 0;
  local_c8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_c8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((source == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar2 = (*(source->klass->vtable)._7_get_Item.methodPtr)
                         (source,"Skins",(source->klass->vtable)._7_get_Item.method),
     pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0)) {
label_05c75ef1:
    ThrowNullReferenceException();
  }
  (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
            (&local_110,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
  local_78.m_Array.fields._current = local_110.m_Array.fields._current;
  local_78.m_Array.fields._list = local_110.m_Array.fields._list;
  local_78.m_Array.fields._index = local_110.m_Array.fields._index;
  local_78.m_Array.fields._version = local_110.m_Array.fields._version;
  local_78.m_Object.fields._current.fields.value = local_110.m_Object.fields._current.fields.value;
  local_78.m_Object.fields._getEnumeratorRetType = local_110.m_Object.fields._getEnumeratorRetType;
  local_78.m_Object.fields._36_4_ = local_110.m_Object.fields._36_4_;
  local_78.m_Object.fields._version = local_110.m_Object.fields._version;
  local_78.m_Object.fields._index = local_110.m_Object.fields._index;
  local_78.m_Object.fields._current.fields.key = local_110.m_Object.fields._current.fields.key;
  local_78.type = local_110.type;
  local_78._4_4_ = local_110._4_4_;
  local_78.m_Object.fields._dictionary = local_110.m_Object.fields._dictionary;
  bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
  if (bVar1) {
    do {
      SVar7 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar7,(MethodInfo *)0x0);
      if ((pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar3 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar2,"Name",(pSVar2->klass->vtable)._7_get_Item.method),
         pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05c75ef1;
      pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
      }
      if ((((pSVar4 == (System_String_o *)0x0) &&
           (pSVar4 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar4 == (System_String_o *)0x0))
          || (pSVar4 = System_String__Replace(pSVar4,0x5c,0x2f,(MethodInfo *)0x0),
             pSVar4 == (System_String_o *)0x0)) ||
         (pSVar4 = System_String__TrimStart_5307150(pSVar4,0x2f,(MethodInfo *)0x0),
         pSVar4 == (System_String_o *)0x0)) goto label_05c75ef1;
      pSVar4 = System_String__Trim_5306ec0(pSVar4,0x2f,(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrWhiteSpace(pSVar4,(MethodInfo *)0x0);
      if ((!bVar1) &&
         (bVar1 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)
                            (pSVar2,"Groups",(pSVar2->klass->vtable)._28_HasKey.method), bVar1))
      {
        pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar2,"Groups",(pSVar2->klass->vtable)._7_get_Item.method);
        if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                    (&local_110,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
          local_c8.m_Array.fields._current = local_110.m_Array.fields._current;
          local_c8.m_Array.fields._list = local_110.m_Array.fields._list;
          local_c8.m_Array.fields._index = local_110.m_Array.fields._index;
          local_c8.m_Array.fields._version = local_110.m_Array.fields._version;
          local_c8.m_Object.fields._current.fields.value = local_110.m_Object.fields._current.fields.value;
          local_c8.m_Object.fields._getEnumeratorRetType = local_110.m_Object.fields._getEnumeratorRetType;
          local_c8.m_Object.fields._36_4_ = local_110.m_Object.fields._36_4_;
          local_c8.m_Object.fields._version = local_110.m_Object.fields._version;
          local_c8.m_Object.fields._index = local_110.m_Object.fields._index;
          local_c8.m_Object.fields._current.fields.key = local_110.m_Object.fields._current.fields.key;
          local_c8.type = local_110.type;
          local_c8._4_4_ = local_110._4_4_;
          local_c8.m_Object.fields._dictionary = local_110.m_Object.fields._dictionary;
label_05c75cc0:
          do {
            bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
            if (!bVar1) goto label_05c75ae0;
            SVar7 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar7,(MethodInfo *)0x0);
            if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) break;
            pSVar5 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
            if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
            }
            if ((pSVar5 == (System_String_o *)0x0) &&
               (pSVar5 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar5 == (System_String_o *)0x0
               )) break;
            method_01 = (MethodInfo *)0x0;
            pSVar5 = System_String__Replace(pSVar5,0x5c,0x2f,(MethodInfo *)0x0);
            if ((pSVar5 == (System_String_o *)0x0) ||
               (pSVar5 = System_String__TrimStart_5307150(pSVar5,0x2f,(MethodInfo *)0x0),
               pSVar5 == (System_String_o *)0x0)) break;
            method_00 = (MethodInfo *)System_String__Trim_5306ec0(pSVar5,0x2f,(MethodInfo *)0x0);
            bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)method_00,(MethodInfo *)0x0);
            if (!bVar1) {
              pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
              if (pSVar6 == (System_String_array *)0x0) break;
              if ((int)pSVar6->max_length != 0) {
                pSVar6->m_Items[0] = root;
                Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
                if ((pSVar6->max_length & 0xfffffffe) != 0) {
                  pSVar6->m_Items[1] = pSVar4;
                  Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1);
                  if (2 < (uint)pSVar6->max_length) {
                    pSVar6->m_Items[2] = (System_String_o *)method_00;
                    method_02 = method_00;
                    Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2);
                    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
                      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
                    }
                    pSVar5 = UI_MobileControlSkinManager__CombineResourcePath(pSVar6,method_02);
                    pSVar6 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
                    if (pSVar6 == (System_String_array *)0x0) break;
                    if ((int)pSVar6->max_length != 0) {
                      pSVar6->m_Items[0] = prefix;
                      Il2CppCodeGenWriteBarrier(pSVar6->m_Items);
                      if ((pSVar6->max_length & 0xfffffffe) != 0) {
                        pSVar6->m_Items[1] = pSVar4;
                        Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 1);
                        if (2 < (uint)pSVar6->max_length) {
                          pSVar6->m_Items[2] = (System_String_o *)method_00;
                          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + 2);
                          optionRoot = UI_MobileControlSkinManager__CombineResourcePath(pSVar6,method_00);
                          UI_MobileControlSkinManager__AddBuiltinTextureOptions
                                    (pSVar5,optionRoot,options,method_01);
                          goto label_05c75cc0;
                        }
                      }
                    }
                  }
                }
              }
              ThrowIndexOutOfRangeException();
            }
          } while( true );
        }
        goto label_05c75ef1;
      }
label_05c75ae0:
      bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
    } while (bVar1);
  }
  return;
}


// UI.MobileControlSkinManager$$AddBuiltinGroupOptions
// il2cpp: void UI_MobileControlSkinManager__AddBuiltinGroupOptions (SimpleJSONFixed_JSONNode_o* source, System_String_o* root, System_String_o* prefix, System_Collections_Generic_List_string__o* options, const MethodInfo* method);
// 0x5c75f00
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c76082: test rbx, rbx
// asm:   0x5c76085: jne 0x5c760bb
// asm:   0x5c76087: jmp 0x5c7609a

void UI_MobileControlSkinManager__AddBuiltinGroupOptions
               (SimpleJSONFixed_JSONNode_o *source,System_String_o *root,System_String_o *prefix,
               System_Collections_Generic_List_string__o *options,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  System_String_array *pSVar4;
  System_String_o *optionRoot;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  SimpleJSONFixed_JSONNode_Enumerator_Fields SStack_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields SStack_78;
  
  if (Il2CppMethodInitialized_07547939 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Groups");
    Il2CppMethodInitialized_07547939 = '\x01';
  }
  if ((source == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar2 = (*(source->klass->vtable)._7_get_Item.methodPtr)
                         (source,"Groups",(source->klass->vtable)._7_get_Item.method),
     pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0)) {
label_05c76210:
    ThrowNullReferenceException();
  }
  (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
            (&SStack_78,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
  SStack_c8.m_Array.fields._current = SStack_78.m_Array.fields._current;
  SStack_c8.m_Array.fields._list = SStack_78.m_Array.fields._list;
  SStack_c8.m_Array.fields._index = SStack_78.m_Array.fields._index;
  SStack_c8.m_Array.fields._version = SStack_78.m_Array.fields._version;
  SStack_c8.m_Object.fields._current.fields.value = SStack_78.m_Object.fields._current.fields.value;
  SStack_c8.m_Object.fields._getEnumeratorRetType = SStack_78.m_Object.fields._getEnumeratorRetType;
  SStack_c8.m_Object.fields._36_4_ = SStack_78.m_Object.fields._36_4_;
  SStack_c8.m_Object.fields._version = SStack_78.m_Object.fields._version;
  SStack_c8.m_Object.fields._index = SStack_78.m_Object.fields._index;
  SStack_c8.m_Object.fields._current.fields.key = SStack_78.m_Object.fields._current.fields.key;
  SStack_c8.type = SStack_78.type;
  SStack_c8._4_4_ = SStack_78._4_4_;
  SStack_c8.m_Object.fields._dictionary = SStack_78.m_Object.fields._dictionary;
  bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                    ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_c8,(MethodInfo *)0x0);
  if (bVar1) {
    do {
      aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_c8,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
      if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c76210;
      pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
      if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
      }
      if ((pSVar3 == (System_String_o *)0x0) &&
         (pSVar3 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar3 == (System_String_o *)0x0))
      goto label_05c76210;
      method_01 = (MethodInfo *)0x0;
      pSVar3 = System_String__Replace(pSVar3,0x5c,0x2f,(MethodInfo *)0x0);
      if ((pSVar3 == (System_String_o *)0x0) ||
         (pSVar3 = System_String__TrimStart_5307150(pSVar3,0x2f,(MethodInfo *)0x0),
         pSVar3 == (System_String_o *)0x0)) goto label_05c76210;
      method_00 = (MethodInfo *)System_String__Trim_5306ec0(pSVar3,0x2f,(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)method_00,(MethodInfo *)0x0);
      if (!bVar1) {
        pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        if (pSVar4 == (System_String_array *)0x0) goto label_05c76210;
        if ((int)pSVar4->max_length == 0) {
label_05c76215:
          ThrowIndexOutOfRangeException();
        }
        pSVar4->m_Items[0] = root;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
        if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_05c76215;
        pSVar4->m_Items[1] = (System_String_o *)method_00;
        method_02 = method_00;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
        if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
        }
        pSVar3 = UI_MobileControlSkinManager__CombineResourcePath(pSVar4,method_02);
        pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        if (pSVar4 == (System_String_array *)0x0) goto label_05c76210;
        if ((int)pSVar4->max_length == 0) goto label_05c76215;
        pSVar4->m_Items[0] = prefix;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
        if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_05c76215;
        pSVar4->m_Items[1] = (System_String_o *)method_00;
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
        optionRoot = UI_MobileControlSkinManager__CombineResourcePath(pSVar4,method_00);
        UI_MobileControlSkinManager__AddBuiltinTextureOptions(pSVar3,optionRoot,options,method_01);
      }
      bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&SStack_c8,(MethodInfo *)0x0);
    } while (bVar1);
  }
  return;
}


// UI.MobileControlSkinManager$$AddBuiltinTextureOptions
// il2cpp: void UI_MobileControlSkinManager__AddBuiltinTextureOptions (System_String_o* resourcePath, System_String_o* optionRoot, System_Collections_Generic_List_string__o* options, const MethodInfo* method);
// 0x5c764f0

void UI_MobileControlSkinManager__AddBuiltinTextureOptions
               (System_String_o *resourcePath,System_String_o *optionRoot,
               System_Collections_Generic_List_string__o *options,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_Object_o *pUVar3;
  bool bVar4;
  System_Object_array *pSVar5;
  ulong uVar6;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  MethodInfo *pMVar9;
  ulong uVar10;
  
  if (Il2CppMethodInitialized_0754793a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_LoadAll_Sprite);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_LoadAll_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754793a = '\x01';
  }
  pSVar5 = UnityEngine_Resources__LoadAll_object_
                     (resourcePath,(MethodInfo_3665CE0 *)MethodInfo_UnityEngine_Resources_LoadAll_Sprite);
  if (pSVar5 != (System_Object_array *)0x0) {
    if (0 < (int)pSVar5->max_length) {
      uVar6 = pSVar5->max_length & 0xffffffff;
      uVar10 = 0;
      do {
        if (uVar6 <= uVar10) goto label_05c768a8;
        pUVar3 = (UnityEngine_Object_o *)pSVar5->m_Items[uVar10];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (!bVar4) {
          if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_05c768ad;
          pSVar7 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
          bVar4 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
          if (!bVar4) {
            pSVar8 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
            if (pSVar8 == (System_String_array *)0x0) goto label_05c768ad;
            if ((int)pSVar8->max_length == 0) goto label_05c768a8;
            pSVar8->m_Items[0] = optionRoot;
            Il2CppCodeGenWriteBarrier(pSVar8->m_Items);
            pMVar9 = (MethodInfo *)UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
            if ((pSVar8->max_length & 0xfffffffe) == 0) goto label_05c768a8;
            pSVar8->m_Items[1] = (System_String_o *)pMVar9;
            Il2CppCodeGenWriteBarrier(pSVar8->m_Items + 1);
            if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
            }
            pSVar7 = UI_MobileControlSkinManager__CombineResourcePath(pSVar8,pMVar9);
            pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (options == (System_Collections_Generic_List_string__o *)0x0) goto label_05c768ad;
            piVar1 = &(options->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar8 = (options->fields)._items;
            if (pSVar8 == (System_String_array *)0x0) goto label_05c768ad;
            uVar2 = (options->fields)._size;
            if (uVar2 < (uint)pSVar8->max_length) {
              (options->fields)._size = uVar2 + 1;
              pSVar8->m_Items[(int)uVar2] = pSVar7;
              Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)options,(Il2CppObject *)pSVar7,
                         (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
            }
          }
        }
        uVar10 = uVar10 + 1;
        uVar2 = (uint)pSVar5->max_length;
        uVar6 = (ulong)uVar2;
      } while ((long)uVar10 < (long)(int)uVar2);
    }
    pSVar5 = UnityEngine_Resources__LoadAll_object_
                       (resourcePath,(MethodInfo_3665CE0 *)MethodInfo_UnityEngine_Resources_LoadAll_Texture2D)
    ;
    if (pSVar5 != (System_Object_array *)0x0) {
      if (0 < (int)pSVar5->max_length) {
        uVar6 = pSVar5->max_length & 0xffffffff;
        uVar10 = 0;
        do {
          if (uVar6 <= uVar10) {
label_05c768a8:
            ThrowIndexOutOfRangeException();
          }
          pUVar3 = (UnityEngine_Object_o *)pSVar5->m_Items[uVar10];
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar4 = UnityEngine_Object__op_Equality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar4) {
            if (pUVar3 == (UnityEngine_Object_o *)0x0) goto label_05c768ad;
            pSVar7 = UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
            bVar4 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
            if (!bVar4) {
              pSVar8 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
              if (pSVar8 == (System_String_array *)0x0) goto label_05c768ad;
              if ((int)pSVar8->max_length == 0) goto label_05c768a8;
              pSVar8->m_Items[0] = optionRoot;
              Il2CppCodeGenWriteBarrier(pSVar8->m_Items);
              pMVar9 = (MethodInfo *)UnityEngine_Object__get_name(pUVar3,(MethodInfo *)0x0);
              if ((pSVar8->max_length & 0xfffffffe) == 0) goto label_05c768a8;
              pSVar8->m_Items[1] = (System_String_o *)pMVar9;
              Il2CppCodeGenWriteBarrier(pSVar8->m_Items + 1);
              if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
              }
              pSVar7 = UI_MobileControlSkinManager__CombineResourcePath(pSVar8,pMVar9);
              pMVar9 = MethodInfo_System_Collections_Generic_List_string_Add;
              if (options == (System_Collections_Generic_List_string__o *)0x0) goto label_05c768ad;
              piVar1 = &(options->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar8 = (options->fields)._items;
              if (pSVar8 == (System_String_array *)0x0) goto label_05c768ad;
              uVar2 = (options->fields)._size;
              if (uVar2 < (uint)pSVar8->max_length) {
                (options->fields)._size = uVar2 + 1;
                pSVar8->m_Items[(int)uVar2] = pSVar7;
                Il2CppCodeGenWriteBarrier(pSVar8->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)options,(Il2CppObject *)pSVar7,
                           (MethodInfo_395D230 *)pMVar9->klass->rgctx_data[0xe].method);
              }
            }
          }
          uVar10 = uVar10 + 1;
          uVar2 = (uint)pSVar5->max_length;
          uVar6 = (ulong)uVar2;
        } while ((long)uVar10 < (long)(int)uVar2);
      }
      return;
    }
  }
label_05c768ad:
  ThrowNullReferenceException();
}


// UI.MobileControlSkinManager$$GetBuiltinResourcePath
// il2cpp: System_String_o* UI_MobileControlSkinManager__GetBuiltinResourcePath (System_String_o* builtinPath, const MethodInfo* method);
// 0x5c768c0

System_String_o *
UI_MobileControlSkinManager__GetBuiltinResourcePath(System_String_o *builtinPath,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *value;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  UI_MobileControlSkinManager_c *method_01;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o aKeyValue;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754793b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Sources");
    Il2CppMethodInitialized_0754793b = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  method_01 = TypeInfo_UI_MobileControlSkinManager;
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  pSVar2 = UI_MobileControlSkinManager__GetBuiltinSkinList((MethodInfo *)method_01);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05c76a7a:
      ThrowNullReferenceException();
    }
    bVar1 = (*(pSVar2->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar2,"Sources",(pSVar2->klass->vtable)._28_HasKey.method);
    if (bVar1) {
      pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,"Sources",(pSVar2->klass->vtable)._7_get_Item.method);
      if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c76a7a;
      (*(pSVar2->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar2,(pSVar2->klass->vtable)._32_unknown.method);
      while (bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0), bVar1)
      {
        aKeyValue = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(aKeyValue,(MethodInfo *)0x0);
        method_00 = extraout_RDX;
        if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
          method_00 = extraout_RDX_00;
        }
        value = UI_MobileControlSkinManager__GetBuiltinSourceResourcePath(pSVar2,builtinPath,method_00);
        bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
        if (!bVar1) {
          return value;
        }
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// UI.MobileControlSkinManager$$GetBuiltinSourceResourcePath
// il2cpp: System_String_o* UI_MobileControlSkinManager__GetBuiltinSourceResourcePath (SimpleJSONFixed_JSONNode_o* source, System_String_o* builtinPath, const MethodInfo* method);
// 0x5c76a80
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c76b0e: test rbx, rbx
// asm:   0x5c76b11: jne 0x5c76b40
// asm:   0x5c76b13: jmp 0x5c76b1f

System_String_o *
UI_MobileControlSkinManager__GetBuiltinSourceResourcePath
          (SimpleJSONFixed_JSONNode_o *source,System_String_o *builtinPath,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  MethodInfo *method_00;
  System_String_o *value;
  System_String_array *parts;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar3;
  
  if (Il2CppMethodInitialized_0754793c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_0754793c = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(source,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
label_05c76ca4:
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  if ((((builtinPath != (System_String_o *)0x0) ||
       (builtinPath = (System_String_o *)**(long **)(g_data_07556758 + 0xb8),
       builtinPath != (System_String_o *)0x0)) &&
      (pSVar2 = System_String__Replace(builtinPath,0x5c,0x2f,(MethodInfo *)0x0),
      pSVar2 != (System_String_o *)0x0)) &&
     (pSVar2 = System_String__TrimStart_5307150(pSVar2,0x2f,(MethodInfo *)0x0),
     pSVar2 != (System_String_o *)0x0)) {
    pMVar3 = (MethodInfo *)0x2f;
    method_00 = (MethodInfo *)System_String__Trim_5306ec0(pSVar2,0x2f,(MethodInfo *)0x0);
    pSVar2 = UI_MobileControlSkinManager__GetBuiltinSourcePrefix(source,pMVar3);
    bVar1 = System_String__IsNullOrWhiteSpace(pSVar2,(MethodInfo *)0x0);
    pMVar3 = extraout_RDX;
    if (!bVar1) {
      value = System_String__Concat_52f0320(pSVar2,"/",(MethodInfo *)0x0);
      if (method_00 == (MethodInfo *)0x0) goto label_05c76cc8;
      bVar1 = System_String__StartsWith_53002b0((System_String_o *)method_00,value,5,(MethodInfo *)0x0);
      if (!bVar1) goto label_05c76ca4;
      if ((pSVar2 == (System_String_o *)0x0) ||
         (pSVar2 = System_String__Substring
                             ((System_String_o *)method_00,(pSVar2->fields)._stringLength,(MethodInfo *)0x0),
         pSVar2 == (System_String_o *)0x0)) goto label_05c76cc8;
      method_00 = (MethodInfo *)System_String__TrimStart_5307150(pSVar2,0x2f,(MethodInfo *)0x0);
      pMVar3 = extraout_RDX_00;
    }
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
      pMVar3 = extraout_RDX_01;
    }
    bVar1 = UI_MobileControlSkinManager__SourceContainsBuiltinPath(source,(System_String_o *)method_00,pMVar3)
    ;
    if (!bVar1) goto label_05c76ca4;
    pMVar3 = (MethodInfo *)0x2;
    parts = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    pSVar2 = UI_MobileControlSkinManager__GetBuiltinResourceRoot(source,pMVar3);
    if (parts != (System_String_array *)0x0) {
      if ((int)parts->max_length != 0) {
        parts->m_Items[0] = pSVar2;
        Il2CppCodeGenWriteBarrier(parts->m_Items);
        if ((parts->max_length & 0xfffffffe) != 0) {
          parts->m_Items[1] = (System_String_o *)method_00;
          Il2CppCodeGenWriteBarrier(parts->m_Items + 1);
          pSVar2 = UI_MobileControlSkinManager__CombineResourcePath(parts,method_00);
          return pSVar2;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05c76cc8:
  ThrowNullReferenceException();
}


// UI.MobileControlSkinManager$$SourceContainsBuiltinPath
// il2cpp: bool UI_MobileControlSkinManager__SourceContainsBuiltinPath (SimpleJSONFixed_JSONNode_o* source, System_String_o* sourcePath, const MethodInfo* method);
// 0x5c76ce0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c76f13: test rbx, rbx
// asm:   0x5c76f16: jne 0x5c76f4b
// asm:   0x5c76f18: jmp 0x5c76f2a

bool UI_MobileControlSkinManager__SourceContainsBuiltinPath
               (SimpleJSONFixed_JSONNode_o *source,System_String_o *sourcePath,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  System_String_o *root;
  System_String_array *parts;
  MethodInfo *pMVar6;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar7;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_108;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c0;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_0754793d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Groups");
    il2cpp_codegen_initialize_runtime_metadata(&"Skins");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    Il2CppMethodInitialized_0754793d = '\x01';
  }
  local_108.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_108.m_Array.fields._index = 0;
  local_108.m_Array.fields._version = 0;
  local_108.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_108.m_Object.fields._getEnumeratorRetType = 0;
  local_108.m_Object.fields._36_4_ = 0;
  local_108.m_Object.fields._version = 0;
  local_108.m_Object.fields._index = 0;
  local_108.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_108.type = 0;
  local_108._4_4_ = 0;
  local_108.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_108.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (source == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05c772bc:
    ThrowNullReferenceException();
  }
  bVar1 = (*(source->klass->vtable)._28_HasKey.methodPtr)
                    (source,"Skins",(source->klass->vtable)._28_HasKey.method);
  if (bVar1) {
    pSVar3 = (*(source->klass->vtable)._7_get_Item.methodPtr)
                       (source,"Skins",(source->klass->vtable)._7_get_Item.method);
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c772bc;
    (*(pSVar3->klass->vtable)._32_unknown.methodPtr)
              (&local_c0,pSVar3,(pSVar3->klass->vtable)._32_unknown.method);
    local_108.m_Array.fields._current = local_c0.m_Array.fields._current;
    local_108.m_Array.fields._list = local_c0.m_Array.fields._list;
    local_108.m_Array.fields._index = local_c0.m_Array.fields._index;
    local_108.m_Array.fields._version = local_c0.m_Array.fields._version;
    local_108.m_Object.fields._current.fields.value = local_c0.m_Object.fields._current.fields.value;
    local_108.m_Object.fields._getEnumeratorRetType = local_c0.m_Object.fields._getEnumeratorRetType;
    local_108.m_Object.fields._36_4_ = local_c0.m_Object.fields._36_4_;
    local_108.m_Object.fields._version = local_c0.m_Object.fields._version;
    local_108.m_Object.fields._index = local_c0.m_Object.fields._index;
    local_108.m_Object.fields._current.fields.key = local_c0.m_Object.fields._current.fields.key;
    local_108.type = local_c0.type;
    local_108._4_4_ = local_c0._4_4_;
    local_108.m_Object.fields._dictionary = local_c0.m_Object.fields._dictionary;
    bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_108,(MethodInfo *)0x0);
    if (bVar1) {
      do {
        SVar7 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_108,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar7,(MethodInfo *)0x0);
        if ((pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
           (pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar3,"Name",(pSVar3->klass->vtable)._7_get_Item.method),
           pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05c772bc;
        pSVar5 = (*(pSVar4->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar4,(pSVar4->klass->vtable)._9_get_Value.method);
        if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
        }
        if ((((pSVar5 == (System_String_o *)0x0) &&
             (pSVar5 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar5 == (System_String_o *)0x0))
            || (pSVar5 = System_String__Replace(pSVar5,0x5c,0x2f,(MethodInfo *)0x0),
               pSVar5 == (System_String_o *)0x0)) ||
           (pSVar5 = System_String__TrimStart_5307150(pSVar5,0x2f,(MethodInfo *)0x0),
           pSVar5 == (System_String_o *)0x0)) goto label_05c772bc;
        pSVar5 = System_String__Trim_5306ec0(pSVar5,0x2f,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
        if ((!bVar1) &&
           (bVar1 = (*(pSVar3->klass->vtable)._28_HasKey.methodPtr)
                              (pSVar3,"Groups",(pSVar3->klass->vtable)._28_HasKey.method), bVar1)
           ) {
          pSVar3 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar3,"Groups",(pSVar3->klass->vtable)._7_get_Item.method);
          if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c772bc;
          (*(pSVar3->klass->vtable)._32_unknown.methodPtr)
                    (&local_c0,pSVar3,(pSVar3->klass->vtable)._32_unknown.method);
          local_78.m_Array.fields._current = local_c0.m_Array.fields._current;
          local_78.m_Array.fields._list = local_c0.m_Array.fields._list;
          local_78.m_Array.fields._index = local_c0.m_Array.fields._index;
          local_78.m_Array.fields._version = local_c0.m_Array.fields._version;
          local_78.m_Object.fields._current.fields.value = local_c0.m_Object.fields._current.fields.value;
          local_78.m_Object.fields._getEnumeratorRetType = local_c0.m_Object.fields._getEnumeratorRetType;
          local_78.m_Object.fields._36_4_ = local_c0.m_Object.fields._36_4_;
          local_78.m_Object.fields._version = local_c0.m_Object.fields._version;
          local_78.m_Object.fields._index = local_c0.m_Object.fields._index;
          local_78.m_Object.fields._current.fields.key = local_c0.m_Object.fields._current.fields.key;
          local_78.type = local_c0.type;
          local_78._4_4_ = local_c0._4_4_;
          local_78.m_Object.fields._dictionary = local_c0.m_Object.fields._dictionary;
          while (bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                   ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0),
                bVar1) {
            SVar7 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar7,(MethodInfo *)0x0);
            parts = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
            if (parts == (System_String_array *)0x0) goto label_05c772bc;
            if ((int)parts->max_length == 0) {
label_05c772c1:
              ThrowIndexOutOfRangeException();
            }
            parts->m_Items[0] = pSVar5;
            Il2CppCodeGenWriteBarrier(parts->m_Items);
            if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c772bc;
            pMVar6 = (MethodInfo *)
                     (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
            if ((parts->max_length & 0xfffffffe) == 0) goto label_05c772c1;
            parts->m_Items[1] = (System_String_o *)pMVar6;
            Il2CppCodeGenWriteBarrier(parts->m_Items + 1);
            if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
            }
            root = UI_MobileControlSkinManager__CombineResourcePath(parts,pMVar6);
            bVar1 = UI_MobileControlSkinManager__IsSameOrChildPath(sourcePath,root,method_00);
            if (bVar1) {
              return true;
            }
          }
        }
        bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_108,(MethodInfo *)0x0);
      } while (bVar1);
    }
  }
  bVar1 = (*(source->klass->vtable)._28_HasKey.methodPtr)
                    (source,"Groups",(source->klass->vtable)._28_HasKey.method);
  if (bVar1) {
    pSVar3 = (*(source->klass->vtable)._7_get_Item.methodPtr)
                       (source,"Groups",(source->klass->vtable)._7_get_Item.method);
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c772bc;
    (*(pSVar3->klass->vtable)._32_unknown.methodPtr)
              (&local_c0,pSVar3,(pSVar3->klass->vtable)._32_unknown.method);
    local_108.m_Array.fields._current = local_c0.m_Array.fields._current;
    local_108.m_Array.fields._list = local_c0.m_Array.fields._list;
    local_108.m_Array.fields._index = local_c0.m_Array.fields._index;
    local_108.m_Array.fields._version = local_c0.m_Array.fields._version;
    local_108.m_Object.fields._current.fields.value = local_c0.m_Object.fields._current.fields.value;
    local_108.m_Object.fields._getEnumeratorRetType = local_c0.m_Object.fields._getEnumeratorRetType;
    local_108.m_Object.fields._36_4_ = local_c0.m_Object.fields._36_4_;
    local_108.m_Object.fields._version = local_c0.m_Object.fields._version;
    local_108.m_Object.fields._index = local_c0.m_Object.fields._index;
    local_108.m_Object.fields._current.fields.key = local_c0.m_Object.fields._current.fields.key;
    local_108.type = local_c0.type;
    local_108._4_4_ = local_c0._4_4_;
    local_108.m_Object.fields._dictionary = local_c0.m_Object.fields._dictionary;
    do {
      bVar1 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_108,(MethodInfo *)0x0);
      if (!bVar1) {
        return bVar1;
      }
      SVar7 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_108,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar7,(MethodInfo *)0x0);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05c772bc;
      pSVar5 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
      pMVar6 = extraout_RDX;
      if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
        pMVar6 = extraout_RDX_00;
      }
      bVar2 = UI_MobileControlSkinManager__IsSameOrChildPath(sourcePath,pSVar5,pMVar6);
    } while (!bVar2);
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// UI.MobileControlSkinManager$$IsSameOrChildPath
// il2cpp: bool UI_MobileControlSkinManager__IsSameOrChildPath (System_String_o* path, System_String_o* root, const MethodInfo* method);
// 0x5c772d0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c772f7: test rbx, rbx
// asm:   0x5c772fc: jmp 0x5c7733a

bool UI_MobileControlSkinManager__IsSameOrChildPath
               (System_String_o *path,System_String_o *root,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_0754793e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_0754793e = '\x01';
    uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  if (((((path != (System_String_o *)0x0) ||
        (path = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), path != (System_String_o *)0x0)) &&
       (pSVar3 = System_String__Replace(path,0x5c,0x2f,(MethodInfo *)0x0), pSVar3 != (System_String_o *)0x0))
      && ((pSVar3 = System_String__TrimStart_5307150(pSVar3,0x2f,(MethodInfo *)0x0),
          pSVar3 != (System_String_o *)0x0 &&
          ((pSVar3 = System_String__Trim_5306ec0(pSVar3,0x2f,(MethodInfo *)0x0),
           root != (System_String_o *)0x0 ||
           (root = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), root != (System_String_o *)0x0))))))
     && ((pSVar4 = System_String__Replace(root,0x5c,0x2f,(MethodInfo *)0x0), pSVar4 != (System_String_o *)0x0
         && (pSVar4 = System_String__TrimStart_5307150(pSVar4,0x2f,(MethodInfo *)0x0),
            pSVar4 != (System_String_o *)0x0)))) {
    pSVar4 = System_String__Trim_5306ec0(pSVar4,0x2f,(MethodInfo *)0x0);
    bVar2 = System_String__Equals_52ffe30(pSVar3,pSVar4,5,(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
    pSVar4 = System_String__Concat_52f0320(pSVar4,"/",(MethodInfo *)0x0);
    if (pSVar3 != (System_String_o *)0x0) {
      bVar2 = System_String__StartsWith_53002b0(pSVar3,pSVar4,5,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlSkinManager$$GetBuiltinSourcePrefix
// il2cpp: System_String_o* UI_MobileControlSkinManager__GetBuiltinSourcePrefix (SimpleJSONFixed_JSONNode_o* source, const MethodInfo* method);
// 0x5c75810
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c758e5: test rbx, rbx
// asm:   0x5c758e8: jne 0x5c75933
// asm:   0x5c758ea: jmp 0x5c75916

System_String_o *
UI_MobileControlSkinManager__GetBuiltinSourcePrefix(SimpleJSONFixed_JSONNode_o *source,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_0754793f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Prefix");
    Il2CppMethodInitialized_0754793f = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(source,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
label_05c758ec:
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (source != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(source->klass->vtable)._28_HasKey.methodPtr)
                      (source,"Prefix",(source->klass->vtable)._28_HasKey.method);
    if (!bVar1) goto label_05c758ec;
    pSVar2 = (*(source->klass->vtable)._7_get_Item.methodPtr)
                       (source,"Prefix",(source->klass->vtable)._7_get_Item.method);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                         (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
      if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
      }
      if ((((pSVar3 != (System_String_o *)0x0) ||
           (pSVar3 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar3 != (System_String_o *)0x0))
          && (pSVar3 = System_String__Replace(pSVar3,0x5c,0x2f,(MethodInfo *)0x0),
             pSVar3 != (System_String_o *)0x0)) &&
         (pSVar3 = System_String__TrimStart_5307150(pSVar3,0x2f,(MethodInfo *)0x0),
         pSVar3 != (System_String_o *)0x0)) {
        pSVar3 = System_String__Trim_5306ec0(pSVar3,0x2f,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlSkinManager$$GetBuiltinSourcePrefixes
// il2cpp: System_Collections_Generic_IEnumerable_string__o* UI_MobileControlSkinManager__GetBuiltinSourcePrefixes (const MethodInfo* method);
// 0x5c74730
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c748df: nop 
// asm:   0x5c74963: cmp byte ptr [rip + 0x18cdf1c], 0
// asm:   0x5c7496a: je 0x5c74b55
// asm:   0x5c74b3e: jmp 0x5c749ff

System_Collections_Generic_IEnumerable_string__o *
UI_MobileControlSkinManager__GetBuiltinSourcePrefixes(MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint32_t uVar3;
  uint uVar4;
  System_String_array *pSVar5;
  bool bVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_Collections_Generic_List_string__o *__this;
  System_String_o *pSVar8;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Object_array *pSVar9;
  Il2CppClass *pIVar10;
  MethodInfo *pMVar11;
  UI_MobileControlSkinManager_c *method_00;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar12;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07547940 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"Sources");
    Il2CppMethodInitialized_07547940 = '\x01';
  }
  local_78.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_78.m_Array.fields._index = 0;
  local_78.m_Array.fields._version = 0;
  local_78.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_78.m_Object.fields._getEnumeratorRetType = 0;
  local_78.m_Object.fields._36_4_ = 0;
  local_78.m_Object.fields._version = 0;
  local_78.m_Object.fields._index = 0;
  local_78.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_78.type = 0;
  local_78._4_4_ = 0;
  local_78.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_78.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  method_00 = TypeInfo_UI_MobileControlSkinManager;
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  pSVar7 = UI_MobileControlSkinManager__GetBuiltinSkinList((MethodInfo *)method_00);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Equality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar6) {
label_05c749b1:
    pMVar11 = MethodInfo_System_Array_Empty_string;
    if ((MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle == (void *)0x0) {
      il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
      pIVar10 = *(Il2CppClass **)((long)(pMVar11->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar10->_2).bitflags1;
    }
    else {
      pIVar10 = *(Il2CppClass **)
                 ((long)(MethodInfo_System_Array_Empty_string->field7_0x38).methodMetadataHandle + 0x10);
      bVar2 = (pIVar10->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
      uVar3 = (pIVar10->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (pIVar10->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar10);
      pIVar10 = (pMVar11->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar10->_2).bitflags1;
    }
    else {
      pIVar10 = (pMVar11->field7_0x38).rgctx_data[2].klass;
      bVar2 = (pIVar10->_2).bitflags1;
    }
    if ((bVar2 & 1) == 0) {
      pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
    }
    return *(System_Collections_Generic_IEnumerable_string__o **)pIVar10->static_fields;
  }
  if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar6 = (*(pSVar7->klass->vtable)._28_HasKey.methodPtr)
                      (pSVar7,"Sources",(pSVar7->klass->vtable)._28_HasKey.method);
    if (!bVar6) goto label_05c749b1;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar7,"Sources",(pSVar7->klass->vtable)._7_get_Item.method);
    if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      (*(pSVar7->klass->vtable)._32_unknown.methodPtr)
                (&local_78,pSVar7,(pSVar7->klass->vtable)._32_unknown.method);
      bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
      if (bVar6) {
        if (__this == (System_Collections_Generic_List_string__o *)0x0) {
          do {
            SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
            pMVar11 = (MethodInfo *)SVar12.fields.value;
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar12,(MethodInfo *)0x0);
            if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
            }
            pSVar8 = UI_MobileControlSkinManager__GetBuiltinSourcePrefix(pSVar7,pMVar11);
            bVar6 = System_String__IsNullOrWhiteSpace(pSVar8,(MethodInfo *)0x0);
            if (!bVar6) goto label_05c74b85;
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          } while (bVar6);
        }
        else {
          do {
            SVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
            pMVar11 = (MethodInfo *)SVar12.fields.value;
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar12,(MethodInfo *)0x0);
            if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
            }
            pSVar8 = UI_MobileControlSkinManager__GetBuiltinSourcePrefix(pSVar7,pMVar11);
            bVar6 = System_String__IsNullOrWhiteSpace(pSVar8,(MethodInfo *)0x0);
            pMVar11 = MethodInfo_System_Collections_Generic_List_string_Add;
            if (!bVar6) {
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar5 = (__this->fields)._items;
              if (pSVar5 == (System_String_array *)0x0) goto label_05c74b85;
              uVar4 = (__this->fields)._size;
              if (uVar4 < (uint)pSVar5->max_length) {
                (__this->fields)._size = uVar4 + 1;
                pSVar5->m_Items[(int)uVar4] = pSVar8;
                Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar4);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar8,
                           (MethodInfo_395D230 *)pMVar11->klass->rgctx_data[0xe].method);
              }
            }
            bVar6 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,(MethodInfo *)0x0);
          } while (bVar6);
        }
      }
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      if (Il2CppMethodInitialized_07542886 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
        Il2CppMethodInitialized_07542886 = '\x01';
        uVar3 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
      }
      else {
        uVar3 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      source = System_Linq_Enumerable__Distinct_object__34e8be0
                         ((System_Collections_Generic_IEnumerable_TSource__o *)__this,
                          (System_Collections_Generic_IEqualityComparer_TSource__o *)
                          TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                          (MethodInfo_34E8BE0 *)MethodInfo_System_Linq_Enumerable_Distinct_string_71a8388);
      pSVar9 = System_Linq_Enumerable__ToArray_object_
                         (source,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
      return (System_Collections_Generic_IEnumerable_string__o *)pSVar9;
    }
  }
label_05c74b85:
  ThrowNullReferenceException();
}


// UI.MobileControlSkinManager$$GetBuiltinResourceRoot
// il2cpp: System_String_o* UI_MobileControlSkinManager__GetBuiltinResourceRoot (SimpleJSONFixed_JSONNode_o* source, const MethodInfo* method);
// 0x5c75690
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c75779: test rbx, rbx
// asm:   0x5c7577c: jne 0x5c757a7
// asm:   0x5c7577e: jmp 0x5c7578a

System_String_o *
UI_MobileControlSkinManager__GetBuiltinResourceRoot(SimpleJSONFixed_JSONNode_o *source,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07547941 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Root");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Mobile/Controls");
    Il2CppMethodInitialized_07547941 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(source,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (source != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar1 = (*(source->klass->vtable)._28_HasKey.methodPtr)
                        (source,"Root",(source->klass->vtable)._28_HasKey.method);
      if (!bVar1) {
        return "UI/Mobile/Controls";
      }
      pSVar2 = (*(source->klass->vtable)._7_get_Item.methodPtr)
                         (source,"Root",(source->klass->vtable)._7_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
        if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
        }
        if ((((pSVar3 != (System_String_o *)0x0) ||
             (pSVar3 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), pSVar3 != (System_String_o *)0x0))
            && (pSVar3 = System_String__Replace(pSVar3,0x5c,0x2f,(MethodInfo *)0x0),
               pSVar3 != (System_String_o *)0x0)) &&
           (pSVar3 = System_String__TrimStart_5307150(pSVar3,0x2f,(MethodInfo *)0x0),
           pSVar3 != (System_String_o *)0x0)) {
          pSVar3 = System_String__TrimEnd_53071b0(pSVar3,0x2f,(MethodInfo *)0x0);
          bVar1 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
          if (bVar1) {
            return "UI/Mobile/Controls";
          }
          return pSVar3;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return "UI/Mobile/Controls";
}


// UI.MobileControlSkinManager$$GetCustomSkinOptions
// il2cpp: System_Collections_Generic_IEnumerable_string__o* UI_MobileControlSkinManager__GetCustomSkinOptions (const MethodInfo* method);
// 0x5c74310
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c744f5: jmp 0x5c74510

System_Collections_Generic_IEnumerable_string__o *
UI_MobileControlSkinManager__GetCustomSkinOptions(MethodInfo *method)

{
  Il2CppObject *object;
  UI_MobileControlSkinManager___c__DisplayClass26_0_o *__this;
  System_String_array *source;
  System_Func_string__bool__o *__this_00;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Func_string__string__o *pSVar1;
  System_Collections_Generic_IEnumerable_TResult__o *source_01;
  UI_MobileControlSkinManager___c_StaticFields *pUVar2;
  System_Linq_IOrderedEnumerable_TSource__o *source_02;
  System_Object_array *pSVar3;
  
  if (Il2CppMethodInitialized_07547942 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UI_MobileControlSkinManager_IsImagePath);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileControlSkinManager_c_GetCustomSkinOptions_b__26_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileControlSkinManager_c__DisplayClass26_0_GetCustomSkinOptions_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager_c__DisplayClass26_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&"*.*");
    Il2CppMethodInitialized_07547942 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c__DisplayClass26_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  if (__this == (UI_MobileControlSkinManager___c__DisplayClass26_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).root = TypeInfo_Utility_FolderPaths->static_fields->CustomControlSkins;
  Il2CppCodeGenWriteBarrier(&(__this->fields).root);
  System_IO_Directory__CreateDirectory((__this->fields).root,(MethodInfo *)0x0);
  source = System_IO_Directory__GetFiles_5477030
                     ((__this->fields).root,"*.*",1,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_UI_MobileControlSkinManager_IsImagePath,(MethodInfo_4F19300 *)0x0);
  source_00 = System_Linq_Enumerable__Where_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                         (System_Func_TSource__bool__o *)__this_00,
                         (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)pSVar1,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MobileControlSkinManager_c__DisplayClass26_0_GetCustomSkinOptions_b__0,
             (MethodInfo_4F19B50 *)0x0);
  source_01 = System_Linq_Enumerable__Select_object__object_
                        (source_00,(System_Func_TSource__TResult__o *)pSVar1,
                         (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
  if ((TypeInfo_UI_MobileControlSkinManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
    pUVar2 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    pSVar1 = pUVar2->__9__26_1;
  }
  else {
    pUVar2 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    pSVar1 = pUVar2->__9__26_1;
  }
  if (pSVar1 == (System_Func_string__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
      pUVar2 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    }
    object = (Il2CppObject *)pUVar2->__9;
    pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)pSVar1,object,
               (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_GetCustomSkinOptions_b__26_1,
               (MethodInfo_4F19B50 *)0x0);
    pUVar2 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    pUVar2->__9__26_1 = pSVar1;
    Il2CppCodeGenWriteBarrier(&pUVar2->__9__26_1);
  }
  source_02 = System_Linq_Enumerable__OrderBy_object__object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,
                         (System_Func_TSource__TKey__o *)pSVar1,
                         (MethodInfo_34F1E50 *)MethodInfo_System_Linq_Enumerable_OrderBy_string_string);
  pSVar3 = System_Linq_Enumerable__ToArray_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source_02,
                      (MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return (System_Collections_Generic_IEnumerable_string__o *)pSVar3;
}


// UI.MobileControlSkinManager$$ApplySkin
// il2cpp: void UI_MobileControlSkinManager__ApplySkin (UnityEngine_UI_Image_o* image, UI_MobileInputSkin_o* skin, int32_t shape, const MethodInfo* method);
// 0x5c68660

void UI_MobileControlSkinManager__ApplySkin
               (UnityEngine_UI_Image_o *image,UI_MobileInputSkin_o *skin,int32_t shape,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  System_String_o *relativePath;
  bool bVar3;
  UnityEngine_Object_o *x;
  _func_32 *vtableDispatch;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  undefined8 uVar5;
  UnityEngine_Color_o UVar6;
  
  if (Il2CppMethodInitialized_07547943 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileInputSkin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07547943 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)image,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return;
  }
  if (skin == (UI_MobileInputSkin_o *)0x0) {
    skin = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileInputSkin);
    (skin->fields).Image = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    Il2CppCodeGenWriteBarrier(&(skin->fields).Image);
    (skin->fields).PreserveAspect = true;
    System_Object___ctor((Il2CppObject *)skin,(MethodInfo *)0x0);
    (skin->fields).R = 0.0;
    (skin->fields).G = 0.0;
    (skin->fields).B = 0.0;
    (skin->fields).A = 0.38;
  }
  x = (UnityEngine_Object_o *)0x0;
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = System_String__IsNullOrWhiteSpace((skin->fields).Image,(MethodInfo *)0x0);
  if (!bVar3) {
    relativePath = (skin->fields).Image;
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    x = (UnityEngine_Object_o *)UI_MobileControlSkinManager__GetSprite(relativePath,pMVar4);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (image == (UnityEngine_UI_Image_o *)0x0) {
label_05c68817:
      ThrowNullReferenceException();
    }
    UnityEngine_UI_Image__set_sprite(image,(UnityEngine_Sprite_o *)x,(MethodInfo *)0x0);
    UnityEngine_UI_Image__set_type(image,0,(MethodInfo *)0x0);
    UnityEngine_UI_Image__set_preserveAspect(image,(skin->fields).PreserveAspect,(MethodInfo *)0x0);
    vtableDispatch = (image->klass->vtable)._23_set_color.methodPtr;
    pMVar4 = (image->klass->vtable)._23_set_color.method;
    uVar5 = CONCAT44((skin->fields).A,0x3f800000);
    uVar1 = 0x3f800000;
    uVar2 = 0x3f800000;
  }
  else {
    UI_MobileInputShapeUtil__ApplyShape(image,shape,method_00);
    if (image == (UnityEngine_UI_Image_o *)0x0) goto label_05c68817;
    uVar1 = (skin->fields).R;
    uVar2 = (skin->fields).G;
    uVar5._0_4_ = (skin->fields).B;
    uVar5._4_4_ = (skin->fields).A;
    vtableDispatch = (image->klass->vtable)._23_set_color.methodPtr;
    pMVar4 = (image->klass->vtable)._23_set_color.method;
  }
  UVar6.fields.g = (float)uVar2;
  UVar6.fields.r = (float)uVar1;
  UVar6.fields.b = (float)(int)uVar5;
  UVar6.fields.a = (float)(int)((ulong)uVar5 >> 0x20);
  (*vtableDispatch)(image,UVar6,pMVar4);
  return;
}


// UI.MobileControlSkinManager$$GetSprite
// il2cpp: UnityEngine_Sprite_o* UI_MobileControlSkinManager__GetSprite (System_String_o* relativePath, const MethodInfo* method);
// 0x5c6d540

UnityEngine_Sprite_o *
UI_MobileControlSkinManager__GetSprite(System_String_o *relativePath,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  bool bVar2;
  UnityEngine_Sprite_o *value;
  MethodInfo *method_00;
  UnityEngine_Sprite_o *local_20;
  
  if (Il2CppMethodInitialized_07547944 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_TryGetValue);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    Il2CppMethodInitialized_07547944 = '\x01';
  }
  local_20 = (UnityEngine_Sprite_o *)0x0;
  bVar2 = System_String__IsNullOrWhiteSpace(relativePath,(MethodInfo *)0x0);
  value = (UnityEngine_Sprite_o *)0x0;
  if (!bVar2) {
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
             TypeInfo_UI_MobileControlSkinManager->static_fields->_sprites;
    if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
label_05c6d63b:
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)relativePath;
    bVar2 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                      (pSVar1,(Il2CppObject *)relativePath,(Il2CppObject **)&local_20,
                       (MethodInfo_4AAF440 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_TryGetValue);
    if (bVar2) {
      value = local_20;
    }
    else {
      if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
      }
      value = UI_MobileControlSkinManager__LoadSprite(relativePath,method_00);
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)
               TypeInfo_UI_MobileControlSkinManager->static_fields->_sprites;
      if (pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05c6d63b;
      System_Collections_Generic_Dictionary_object__object___set_Item
                (pSVar1,(Il2CppObject *)relativePath,(Il2CppObject *)value,
                 (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_set_Item
                );
    }
  }
  return value;
}


// UI.MobileControlSkinManager$$LoadSprite
// il2cpp: UnityEngine_Sprite_o* UI_MobileControlSkinManager__LoadSprite (System_String_o* relativePath, const MethodInfo* method);
// 0x5c77470

UnityEngine_Sprite_o *
UI_MobileControlSkinManager__LoadSprite(System_String_o *relativePath,MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  undefined1 auVar3 [16];
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  UnityEngine_Sprite_o *pUVar8;
  System_Byte_array *data;
  UnityEngine_Texture_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07547945 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&"Custom/");
    Il2CppMethodInitialized_07547945 = '\x01';
  }
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  pSVar7 = UI_MobileControlSkinManager__NormalizeSkinReference(relativePath,method);
  method_00 = (MethodInfo *)0x0;
  bVar4 = System_String__IsNullOrWhiteSpace(pSVar7,(MethodInfo *)0x0);
  if (bVar4) {
    return (UnityEngine_Sprite_o *)0x0;
  }
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  bVar4 = UI_MobileControlSkinManager__IsResourceReference(pSVar7,method_00);
  uVar1 = (TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor;
  if (bVar4) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    pUVar8 = UI_MobileControlSkinManager__GetBuiltinSprite(pSVar7,method_00);
    return pUVar8;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  pSVar2 = "Custom/";
  if (pSVar7 != (System_String_o *)0x0) {
    bVar4 = System_String__StartsWith_53002b0(pSVar7,"Custom/",5,(MethodInfo *)0x0);
    if (bVar4) {
      if (pSVar2 == (System_String_o *)0x0) goto label_05c77745;
      pSVar7 = System_String__Substring(pSVar7,(pSVar2->fields)._stringLength,(MethodInfo *)0x0);
    }
    if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
    }
    pSVar2 = TypeInfo_Utility_FolderPaths->static_fields->CustomControlSkins;
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    if (pSVar7 != (System_String_o *)0x0) {
      pSVar7 = System_String__Replace
                         (pSVar7,0x2f,TypeInfo_System_IO_Path->static_fields->DirectorySeparatorChar,
                          (MethodInfo *)0x0);
      pSVar7 = System_IO_Path__Combine(pSVar2,pSVar7,(MethodInfo *)0x0);
      bVar4 = System_IO_File__Exists(pSVar7,(MethodInfo *)0x0);
      if (bVar4) {
        data = System_IO_File__ReadAllBytes(pSVar7,(MethodInfo *)0x0);
        __this = (UnityEngine_Texture_o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
        UnityEngine_Texture2D___ctor_68efe30((UnityEngine_Texture2D_o *)__this,2,2,5,false,(MethodInfo *)0x0);
        if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
        }
        pSVar7 = System_IO_Path__GetFileNameWithoutExtension(pSVar7,(MethodInfo *)0x0);
        if (__this == (UnityEngine_Texture_o *)0x0) goto label_05c77745;
        UnityEngine_Object__set_name((UnityEngine_Object_o *)__this,pSVar7,(MethodInfo *)0x0);
        UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
        UnityEngine_Texture__set_filterMode(__this,1,(MethodInfo *)0x0);
        bVar4 = UnityEngine_ImageConversion__LoadImage_69780a0
                          ((UnityEngine_Texture2D_o *)__this,data,(MethodInfo *)0x0);
        if (bVar4) {
          iVar5 = (*(__this->klass->vtable)._5_get_width.methodPtr)
                            (__this,(__this->klass->vtable)._5_get_width.method);
          iVar6 = (*(__this->klass->vtable)._7_get_height.methodPtr)
                            (__this,(__this->klass->vtable)._7_get_height.method);
          auVar3._4_4_ = (float)iVar6;
          auVar3._0_4_ = (float)iVar5;
          auVar3._8_8_ = 0;
          pUVar8 = UnityEngine_Sprite__Create_68ba7d0
                             ((UnityEngine_Texture2D_o *)__this,(UnityEngine_Rect_o)(auVar3 << 0x40),
                              (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          return pUVar8;
        }
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        UnityEngine_Object__Destroy_69214e0((UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
      }
      return (UnityEngine_Sprite_o *)0x0;
    }
  }
label_05c77745:
  ThrowNullReferenceException();
}


// UI.MobileControlSkinManager$$GetBuiltinSprite
// il2cpp: UnityEngine_Sprite_o* UI_MobileControlSkinManager__GetBuiltinSprite (System_String_o* normalized, const MethodInfo* method);
// 0x5c77750

UnityEngine_Sprite_o *
UI_MobileControlSkinManager__GetBuiltinSprite(System_String_o *normalized,MethodInfo *method)

{
  undefined1 auVar1 [16];
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  System_String_o *path;
  UnityEngine_Object_o *x;
  UnityEngine_Texture2D_o *texture;
  UnityEngine_Sprite_o *pUVar5;
  
  if (Il2CppMethodInitialized_07547946 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Sprite);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_Texture2D);
    Il2CppMethodInitialized_07547946 = '\x01';
  }
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  path = UI_MobileControlSkinManager__GetBuiltinResourcePath(normalized,method);
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (path,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Sprite);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    texture = UnityEngine_Resources__Load_object_
                        (path,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_Texture2D);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    x = (UnityEngine_Object_o *)0x0;
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if (texture == (UnityEngine_Texture2D_o *)0x0) {
        ThrowNullReferenceException();
      }
      iVar3 = (*(texture->klass->vtable)._5_get_width.methodPtr)
                        (texture,(texture->klass->vtable)._5_get_width.method);
      iVar4 = (*(texture->klass->vtable)._7_get_height.methodPtr)
                        (texture,(texture->klass->vtable)._7_get_height.method);
      auVar1._4_4_ = (float)iVar4;
      auVar1._0_4_ = (float)iVar3;
      auVar1._8_8_ = 0;
      pUVar5 = UnityEngine_Sprite__Create_68ba7d0
                         (texture,(UnityEngine_Rect_o)(auVar1 << 0x40),
                          (UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
      return pUVar5;
    }
  }
  return (UnityEngine_Sprite_o *)x;
}


// UI.MobileControlSkinManager$$IsImagePath
// il2cpp: bool UI_MobileControlSkinManager__IsImagePath (System_String_o* path, const MethodInfo* method);
// 0x5c778a0

bool UI_MobileControlSkinManager__IsImagePath(System_String_o *path,MethodInfo *method)

{
  System_String_array *source;
  bool bVar1;
  UI_MobileControlSkinManager___c__DisplayClass31_0_o *__this;
  System_String_o *pSVar2;
  System_Func_string__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_07547947 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileControlSkinManager_c__DisplayClass31_0_IsImagePath_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager_c__DisplayClass31_0);
    Il2CppMethodInitialized_07547947 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c__DisplayClass31_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
  }
  pSVar2 = System_IO_Path__GetExtension(path,(MethodInfo *)0x0);
  if (__this == (UI_MobileControlSkinManager___c__DisplayClass31_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this->fields).extension = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).extension);
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  source = TypeInfo_UI_MobileControlSkinManager->static_fields->ImageExtensions;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Func_object__bool__o *)__this_00,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_UI_MobileControlSkinManager_c__DisplayClass31_0_IsImagePath_b__0,
             (MethodInfo_4F19300 *)0x0);
  bVar1 = System_Linq_Enumerable__Any_object__34dfce0
                    ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                     (System_Func_TSource__bool__o *)__this_00,
                     (MethodInfo_34DFCE0 *)MethodInfo_System_Linq_Enumerable_Any_string_71a8218);
  return bVar1;
}


// UI.MobileControlSkinManager$$ToRelativePath
// il2cpp: System_String_o* UI_MobileControlSkinManager__ToRelativePath (System_String_o* root, System_String_o* path, const MethodInfo* method);
// 0x5c779e0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c77acf: test rbx, rbx
// asm:   0x5c77ad2: jne 0x5c77afd
// asm:   0x5c77ad4: jmp 0x5c77ae0

System_String_o *
UI_MobileControlSkinManager__ToRelativePath(System_String_o *root,System_String_o *path,MethodInfo *method)

{
  int iVar1;
  System_IO_Path_StaticFields *pSVar2;
  System_String_o *pSVar3;
  System_Char_array *trimChars;
  
  if (Il2CppMethodInitialized_07547948 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_char_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IO_Path);
    Il2CppMethodInitialized_07547948 = '\x01';
  }
  if ((root != (System_String_o *)0x0) && (path != (System_String_o *)0x0)) {
    pSVar3 = System_String__Substring(path,(root->fields)._stringLength,(MethodInfo *)0x0);
    trimChars = (System_Char_array *)SZArrayNew(TypeInfo_char_array,2);
    if ((TypeInfo_System_IO_Path->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_IO_Path);
    }
    if (trimChars != (System_Char_array *)0x0) {
      iVar1 = (int)trimChars->max_length;
      if (iVar1 != 0) {
        pSVar2 = TypeInfo_System_IO_Path->static_fields;
        trimChars->m_Items[0] = pSVar2->DirectorySeparatorChar;
        if (iVar1 != 1) {
          trimChars->m_Items[1] = pSVar2->AltDirectorySeparatorChar;
          if (pSVar3 != (System_String_o *)0x0) {
            pSVar3 = System_String__TrimStart_5307170(pSVar3,trimChars,(MethodInfo *)0x0);
            if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
            }
            if (((pSVar3 != (System_String_o *)0x0) ||
                (pSVar3 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8),
                pSVar3 != (System_String_o *)0x0)) &&
               (pSVar3 = System_String__Replace(pSVar3,0x5c,0x2f,(MethodInfo *)0x0),
               pSVar3 != (System_String_o *)0x0)) {
              pSVar3 = System_String__TrimStart_5307150(pSVar3,0x2f,(MethodInfo *)0x0);
              return pSVar3;
            }
          }
          goto label_05c77b2a;
        }
      }
      ThrowIndexOutOfRangeException();
    }
  }
label_05c77b2a:
  ThrowNullReferenceException();
}


// UI.MobileControlSkinManager$$NormalizeRelativePath
// il2cpp: System_String_o* UI_MobileControlSkinManager__NormalizeRelativePath (System_String_o* path, const MethodInfo* method);
// 0x5c74cc0

System_String_o * UI_MobileControlSkinManager__NormalizeRelativePath(System_String_o *path,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if ((path != (System_String_o *)0x0) ||
     (path = (System_String_o *)**(long **)(g_data_07556758 + 0xb8), path != (System_String_o *)0x0)) {
    pSVar1 = System_String__Replace(path,0x5c,0x2f,(MethodInfo *)0x0);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__TrimStart_5307150(pSVar1,0x2f,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlSkinManager$$GetBuiltinSkinList
// il2cpp: SimpleJSONFixed_JSONNode_o* UI_MobileControlSkinManager__GetBuiltinSkinList (const MethodInfo* method);
// 0x5c75300
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c7545b: xor ebx, ebx
// asm:   0x5c75519: jmp 0x5c75470

SimpleJSONFixed_JSONNode_o * UI_MobileControlSkinManager__GetBuiltinSkinList(MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  UI_MobileControlSkinManager_StaticFields *pUVar3;
  bool bVar4;
  UnityEngine_Object_o *pUVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  UnityEngine_Object_o *x;
  
  if (Il2CppMethodInitialized_07547949 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&"{}");
    il2cpp_codegen_initialize_runtime_metadata(&"MobileControlSkinList");
    Il2CppMethodInitialized_07547949 = '\x01';
  }
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  pSVar7 = TypeInfo_UI_MobileControlSkinManager->static_fields->_builtinSkinList;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    goto label_05c754dc;
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar6 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar5 = ApplicationManagers_ResourceManager__LoadAsset
                     (pSVar6,"MobileControlSkinList",false,false,(MethodInfo *)0x0);
  if (pUVar5 == (UnityEngine_Object_o *)0x0) {
label_05c7545d:
    x = (UnityEngine_Object_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    bVar1 = (TypeInfo_UnityEngine_TextAsset->_2).typeHierarchyDepth;
    if ((pUVar5->klass->_2).typeHierarchyDepth < bVar1) goto label_05c7545d;
    x = (UnityEngine_Object_o *)0x0;
    if ((pUVar5->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_UnityEngine_TextAsset)
    {
      x = pUVar5;
    }
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if (x == (UnityEngine_Object_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar6 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
  }
  else {
    pSVar6 = "{}";
  }
  pSVar7 = SimpleJSONFixed_JSON__Parse(pSVar6,(MethodInfo *)0x0);
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  pUVar3 = TypeInfo_UI_MobileControlSkinManager->static_fields;
  pUVar3->_builtinSkinList = pSVar7;
  Il2CppCodeGenWriteBarrier(&pUVar3->_builtinSkinList);
label_05c754dc:
  return TypeInfo_UI_MobileControlSkinManager->static_fields->_builtinSkinList;
}


// UI.MobileControlSkinManager$$CombineResourcePath
// il2cpp: System_String_o* UI_MobileControlSkinManager__CombineResourcePath (System_String_array* parts, const MethodInfo* method);
// 0x5c76220
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5c76383: jmp 0x5c7639e
// asm:   0x5c76433: jmp 0x5c7644e

System_String_o *
UI_MobileControlSkinManager__CombineResourcePath(System_String_array *parts,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Func_string__bool__o *pSVar2;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  System_Func_string__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *source;
  UI_MobileControlSkinManager___c_StaticFields *pUVar4;
  System_String_array *value;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_0754794a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileControlSkinManager_c_CombineResourcePath_b__35_0);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileControlSkinManager_c_CombineResourcePath_b__35_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UI_MobileControlSkinManager_c_CombineResourcePath_b__35_2);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    Il2CppMethodInitialized_0754794a = '\x01';
  }
  if ((TypeInfo_UI_MobileControlSkinManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
  }
  pSVar5 = "/";
  pUVar4 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
  pSVar2 = pUVar4->__9__35_0;
  if (pSVar2 == (System_Func_string__bool__o *)0x0) {
    if ((TypeInfo_UI_MobileControlSkinManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
      pUVar4 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pUVar4->__9;
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar2,pIVar1,
               (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_CombineResourcePath_b__35_0,
               (MethodInfo_4F19300 *)0x0);
    pUVar4 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    pUVar4->__9__35_0 = pSVar2;
    Il2CppCodeGenWriteBarrier(&pUVar4->__9__35_0);
  }
  pSVar3 = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)parts,
                      (System_Func_TSource__bool__o *)pSVar2,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  if ((TypeInfo_UI_MobileControlSkinManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
    pUVar4 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    __this = pUVar4->__9__35_1;
  }
  else {
    pUVar4 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    __this = pUVar4->__9__35_1;
  }
  if (__this == (System_Func_string__string__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
      pUVar4 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pUVar4->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_string);
    System_Func_object__object____ctor
              ((System_Func_object__object__o *)__this,pIVar1,
               (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_CombineResourcePath_b__35_1,
               (MethodInfo_4F19B50 *)0x0);
    pUVar4 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    pUVar4->__9__35_1 = __this;
    Il2CppCodeGenWriteBarrier(&pUVar4->__9__35_1);
  }
  source = System_Linq_Enumerable__Select_object__object_
                     (pSVar3,(System_Func_TSource__TResult__o *)__this,
                      (MethodInfo_34F60F0 *)MethodInfo_System_Linq_Enumerable_Select_string_string);
  if ((TypeInfo_UI_MobileControlSkinManager_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
    pUVar4 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    pSVar2 = pUVar4->__9__35_2;
  }
  else {
    pUVar4 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    pSVar2 = pUVar4->__9__35_2;
  }
  if (pSVar2 == (System_Func_string__bool__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager_c);
      pUVar4 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    }
    pIVar1 = (Il2CppObject *)pUVar4->__9;
    pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Func_object__bool__o *)pSVar2,pIVar1,
               (intptr_t)MethodInfo_UI_MobileControlSkinManager_c_CombineResourcePath_b__35_2,
               (MethodInfo_4F19300 *)0x0);
    pUVar4 = TypeInfo_UI_MobileControlSkinManager_c->static_fields;
    pUVar4->__9__35_2 = pSVar2;
    Il2CppCodeGenWriteBarrier(&pUVar4->__9__35_2);
  }
  pSVar3 = System_Linq_Enumerable__Where_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                      (System_Func_TSource__bool__o *)pSVar2,
                      (MethodInfo_3502B70 *)MethodInfo_System_Linq_Enumerable_Where_string);
  value = (System_String_array *)
          System_Linq_Enumerable__ToArray_object_
                    (pSVar3,(MethodInfo_34FEA80 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  pSVar5 = System_String__Join(pSVar5,value,(MethodInfo *)0x0);
  return pSVar5;
}


// UI.MobileControlSkinManager$$IsResourceReference
// il2cpp: bool UI_MobileControlSkinManager__IsResourceReference (System_String_o* path, const MethodInfo* method);
// 0x5c74d10

bool UI_MobileControlSkinManager__IsResourceReference(System_String_o *path,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754794b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    Il2CppMethodInitialized_0754794b = '\x01';
  }
  if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
  }
  value = UI_MobileControlSkinManager__GetSkinSourceName(path,method);
  bVar2 = false;
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_UI_MobileControlSkinManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_MobileControlSkinManager);
    }
    bVar2 = UI_MobileControlSkinManager__IsCustomSkinReference(path,method_00);
    bVar2 = !bVar2;
  }
  return bVar2;
}


// UI.MobileControlSkinManager$$StripSourcePrefix
// il2cpp: System_String_o* UI_MobileControlSkinManager__StripSourcePrefix (System_String_o* path, System_String_o* prefix, const MethodInfo* method);
// 0x5c752b0

System_String_o *
UI_MobileControlSkinManager__StripSourcePrefix
          (System_String_o *path,System_String_o *prefix,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (path != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith_53002b0(path,prefix,5,(MethodInfo *)0x0);
    if (!bVar1) {
      return path;
    }
    if (prefix != (System_String_o *)0x0) {
      pSVar2 = System_String__Substring(path,(prefix->fields)._stringLength,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// UI.MobileControlSkinManager$$.cctor
// il2cpp: void UI_MobileControlSkinManager___cctor (const MethodInfo* method);
// 0x5c77b40

void UI_MobileControlSkinManager___cctor(MethodInfo *method)

{
  UI_MobileControlSkinManager_StaticFields *pUVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_Dictionary_string__Sprite__o *__this;
  
  if (Il2CppMethodInitialized_0754794c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_Sprite);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_MobileControlSkinManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&".jpg");
    il2cpp_codegen_initialize_runtime_metadata(&".jpeg");
    il2cpp_codegen_initialize_runtime_metadata(&".png");
    Il2CppMethodInitialized_0754794c = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
  if (pSVar2 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = ".png";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = ".jpg";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      if (2 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[2] = ".jpeg";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 2);
        TypeInfo_UI_MobileControlSkinManager->static_fields->ImageExtensions = pSVar2;
        Il2CppCodeGenWriteBarrier(&TypeInfo_UI_MobileControlSkinManager->static_fields->ImageExtensions);
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_Sprite);
        System_Collections_Generic_Dictionary_object__object____ctor
                  ((System_Collections_Generic_Dictionary_object__object__o *)__this,
                   (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_Sprite_ctor);
        pUVar1 = TypeInfo_UI_MobileControlSkinManager->static_fields;
        pUVar1->_sprites = __this;
        Il2CppCodeGenWriteBarrier(&pUVar1->_sprites);
        return;
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


