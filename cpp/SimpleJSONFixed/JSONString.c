// Type: SimpleJSONFixed.JSONString
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONString.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONString$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONString__get_Tag (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x180565fb0

int32_t
SimpleJSONFixed_JSONString__get_Tag(SimpleJSONFixed_JSONString_o* __this, MethodInfo* method)

{
  return 3;
}


// SimpleJSONFixed.JSONString$$get_IsString
// il2cpp: bool SimpleJSONFixed_JSONString__get_IsString (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
SimpleJSONFixed_JSONString__get_IsString(SimpleJSONFixed_JSONString_o* __this, MethodInfo* method)

{
  return true;
}


// SimpleJSONFixed.JSONString$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONString__GetEnumerator (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x181dc13a0

SimpleJSONFixed_JSONNode_Enumerator_o
SimpleJSONFixed_JSONString__GetEnumerator(SimpleJSONFixed_JSONString_o* __this, MethodInfo* method)

{
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  (__return_storage_ptr__->fields).m_Object.fields._version = 0;
  (__return_storage_ptr__->fields).m_Object.fields._index = 0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType = 0;
  (__return_storage_ptr__->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__return_storage_ptr__->fields).m_Array.fields._index = 0;
  (__return_storage_ptr__->fields).m_Array.fields._version = 0;
  (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONString$$get_Value
// il2cpp: System_String_o* SimpleJSONFixed_JSONString__get_Value (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
SimpleJSONFixed_JSONString__get_Value(SimpleJSONFixed_JSONString_o* __this, MethodInfo* method)

{
  return (__this->fields).m_Data;
}


// SimpleJSONFixed.JSONString$$set_Value
// il2cpp: void SimpleJSONFixed_JSONString__set_Value (SimpleJSONFixed_JSONString_o* __this, System_String_o* value, const MethodInfo* method);
// 0x180b8ac00

void
SimpleJSONFixed_JSONString__set_Value(SimpleJSONFixed_JSONString_o* __this, System_String_o* value, MethodInfo* method)

{
  (__this->fields).m_Data = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Data,value);
  return;
}


// SimpleJSONFixed.JSONString$$.ctor
// il2cpp: void SimpleJSONFixed_JSONString___ctor (SimpleJSONFixed_JSONString_o* __this, System_String_o* aData, const MethodInfo* method);
// 0x181dc7080

void SimpleJSONFixed_JSONString___ctor
               (SimpleJSONFixed_JSONString_o *__this,System_String_o *aData,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449bd = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Data = aData;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Data,aData);
  return;
}


// SimpleJSONFixed.JSONString$$Clone
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONString__Clone (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x181dc6d50

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONString__Clone(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  System_String_o *value;
  SimpleJSONFixed_JSONString_o *__this_00;
  
  if (Il2CppMethodInitialized_1843449be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_1843449be = '\x01';
  }
  value = (__this->fields).m_Data;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString);
  if (Il2CppMethodInitialized_1843449bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449bd = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).m_Data = value;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).m_Data,value);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONString$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONString__WriteToStringBuilder (SimpleJSONFixed_JSONString_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x181dc6fe0

void SimpleJSONFixed_JSONString__WriteToStringBuilder
               (SimpleJSONFixed_JSONString_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843449bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843449bf = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    pSVar1 = System_Text_StringBuilder__Append_197e090(aSB,0x22,(MethodInfo *)0x0);
    pSVar2 = (__this->fields).m_Data;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar2 = SimpleJSONFixed_JSONNode__Escape(pSVar2,(MethodInfo *)0x0);
    if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
      pSVar1 = System_Text_StringBuilder__Append_197dca0(pSVar1,pSVar2,(MethodInfo *)0x0);
      if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
        System_Text_StringBuilder__Append_197e090(pSVar1,0x22,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONString$$Equals
// il2cpp: bool SimpleJSONFixed_JSONString__Equals (SimpleJSONFixed_JSONString_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x181dc6df0
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181dc6e85: xor ebx, ebx
// asm:   0x181dc6e87: mov eax, esi
// asm:   0x181dc6e89: test eax, eax
// asm:   0x181dc6e8b: cmovne rbx, rdi
// asm:   0x181dc6e8f: jmp 0x181dc6ec0
// asm:   0x181dc6e9d: xor r8d, r8d

bool SimpleJSONFixed_JSONString__Equals
               (SimpleJSONFixed_JSONString_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  char cVar2;
  Il2CppObject *pIVar3;
  Il2CppClass *pIVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_1843449c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONString);
    Il2CppMethodInitialized_1843449c0 = '\x01';
  }
  if (__this == (SimpleJSONFixed_JSONString_o *)obj) {
    return true;
  }
  bVar5 = true;
  if (obj == (Il2CppObject *)0x0) {
    obj = (Il2CppObject *)0x0;
label_181dc6ec0:
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    if (Il2CppMethodInitialized_18434497d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_18434497d = '\x01';
    }
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    if (Il2CppMethodInitialized_18434497c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONLazyCreator);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNull);
      Il2CppMethodInitialized_18434497c = '\x01';
    }
    if (obj != (Il2CppObject *)0x0) {
      pIVar4 = obj->klass;
      bVar1 = (TypeInfo_SimpleJSONFixed_JSONNull->_2).typeHierarchyDepth;
      if (((pIVar4->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNull
         )) {
        bVar1 = (TypeInfo_SimpleJSONFixed_JSONLazyCreator->_2).typeHierarchyDepth;
        if (((pIVar4->_2).typeHierarchyDepth < bVar1) ||
           ((pIVar4->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONLazyCreator)) {
          bVar5 = false;
        }
        pIVar3 = (Il2CppObject *)0x0;
        if (bVar5) {
          pIVar3 = obj;
        }
        bVar5 = pIVar3 != (Il2CppObject *)0x0;
      }
      if ((!bVar5) && (cVar2 = (*pIVar4->vtable[0].methodPtr)(obj,0), cVar2 == '\0')) {
        pIVar4 = obj[1].klass;
        goto label_181dc6ea0;
      }
    }
    bVar5 = false;
  }
  else {
    pIVar4 = (Il2CppClass *)0x0;
    if (obj->klass == g_data_184354e50) {
      pIVar4 = (Il2CppClass *)obj;
    }
    if (pIVar4 == (Il2CppClass *)0x0) {
      bVar1 = (TypeInfo_SimpleJSONFixed_JSONString->_2).typeHierarchyDepth;
      if (((obj->klass->_2).typeHierarchyDepth < bVar1) ||
         ((obj->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONString)) {
        obj = (Il2CppObject *)0x0;
      }
      goto label_181dc6ec0;
    }
label_181dc6ea0:
    bVar5 = System_String__op_Equality((__this->fields).m_Data,(System_String_o *)pIVar4,(MethodInfo *)0x0);
  }
  return bVar5;
}


// SimpleJSONFixed.JSONString$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONString__GetHashCode (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x180c8d900

int32_t
SimpleJSONFixed_JSONString__GetHashCode(SimpleJSONFixed_JSONString_o* __this, MethodInfo* method)

{
  System_Type_o *pSVar1;
  int32_t iVar2;
  
  pSVar1 = (__this->fields).m_Data;
  if (pSVar1 != (System_Type_o *)0x0) {
    iVar2 = (*(pSVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable)._2_GetHashCode.method);
    return iVar2;
  }
  ThrowNullReferenceException();
}


// SimpleJSONFixed.JSONString$$Clear
// il2cpp: void SimpleJSONFixed_JSONString__Clear (SimpleJSONFixed_JSONString_o* __this, const MethodInfo* method);
// 0x181dc6d00

void SimpleJSONFixed_JSONString__Clear(SimpleJSONFixed_JSONString_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843449c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_1843449c1 = '\x01';
  }
  (__this->fields).m_Data = "";
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_Data,"");
  return;
}


