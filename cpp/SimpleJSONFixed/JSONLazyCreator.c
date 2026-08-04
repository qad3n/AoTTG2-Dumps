// Type: SimpleJSONFixed.JSONLazyCreator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/SimpleJSONFixed/JSONLazyCreator.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SimpleJSON.cs
// --------------------------------

// SimpleJSONFixed.JSONLazyCreator$$get_Tag
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__get_Tag (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x4080580

int32_t SimpleJSONFixed_JSONLazyCreator__get_Tag(SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  return 7;
}


// SimpleJSONFixed.JSONLazyCreator$$GetEnumerator
// il2cpp: SimpleJSONFixed_JSONNode_Enumerator_o SimpleJSONFixed_JSONLazyCreator__GetEnumerator (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x4080590

SimpleJSONFixed_JSONNode_Enumerator_o *
SimpleJSONFixed_JSONLazyCreator__GetEnumerator
          (SimpleJSONFixed_JSONNode_Enumerator_o *__return_storage_ptr__,
          SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  (__return_storage_ptr__->fields).m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (__return_storage_ptr__->fields).m_Array.fields._index = 0;
  (__return_storage_ptr__->fields).m_Array.fields._version = 0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  *(undefined8 *)&(__return_storage_ptr__->fields).m_Object.fields._getEnumeratorRetType = 0;
  (__return_storage_ptr__->fields).m_Object.fields._version = 0;
  (__return_storage_ptr__->fields).m_Object.fields._index = 0;
  (__return_storage_ptr__->fields).m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  *(undefined8 *)&__return_storage_ptr__->fields = 0;
  (__return_storage_ptr__->fields).m_Object.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  (__return_storage_ptr__->fields).m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  return __return_storage_ptr__;
}


// SimpleJSONFixed.JSONLazyCreator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONLazyCreator___ctor (SimpleJSONFixed_JSONLazyCreator_o* __this, SimpleJSONFixed_JSONNode_o* aNode, const MethodInfo* method);
// 0x407d030

void SimpleJSONFixed_JSONLazyCreator___ctor
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,MethodInfo *method
               )

{
  if (g_data_057ac39e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac39e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  il2cpp_runtime_helper_022b4080(&__this->fields,aNode);
  (__this->fields).m_Key = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_Key,0);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$.ctor
// il2cpp: void SimpleJSONFixed_JSONLazyCreator___ctor (SimpleJSONFixed_JSONLazyCreator_o* __this, SimpleJSONFixed_JSONNode_o* aNode, System_String_o* aKey, const MethodInfo* method);
// 0x407e140

void SimpleJSONFixed_JSONLazyCreator___ctor_3f7e140
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aNode,
               System_String_o *aKey,MethodInfo *method)

{
  if (g_data_057ac39f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac39f = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).m_Node = aNode;
  il2cpp_runtime_helper_022b4080(&__this->fields,aNode);
  (__this->fields).m_Key = aKey;
  il2cpp_runtime_helper_022b4080(&(__this->fields).m_Key,aKey);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$Set<object>
// il2cpp: Il2CppObject* SimpleJSONFixed_JSONLazyCreator__Set_object_ (SimpleJSONFixed_JSONLazyCreator_o* __this, Il2CppObject* aVal, const MethodInfo_2565200* method);
// 0x2665200

Il2CppObject *
SimpleJSONFixed_JSONLazyCreator__Set_object_
          (SimpleJSONFixed_JSONLazyCreator_o *__this,Il2CppObject *aVal,MethodInfo_2565200 *method)

{
  byte bVar1;
  long lVar2;
  undefined8 uVar3;
  Newtonsoft_Json_Linq_JToken_o *pNVar4;
  Newtonsoft_Json_Linq_JToken_o *pNVar5;
  Newtonsoft_Json_Linq_JToken_o *pNVar6;
  Il2CppObject *pIVar7;
  Newtonsoft_Json_Linq_JToken__Annotations_d__185_T__o *__this_00;
  System_Collections_IEnumerable_o *source;
  System_Collections_Generic_IEnumerable_TResult__o *enumerable;
  long lVar8;
  System_String_o *pSVar9;
  Newtonsoft_Json_Linq_JToken_o *pNVar10;
  Newtonsoft_Json_Linq_JToken__Annotations_d__185_T__o *pNVar11;
  Il2CppObject *pIStack_88;
  undefined8 uStack_80;
  Newtonsoft_Json_Linq_JToken__Annotations_d__185_T__o *pNStack_78;
  Newtonsoft_Json_Linq_JToken_o *pNStack_70;
  Newtonsoft_Json_Linq_JToken_o *pNStack_68;
  undefined8 uStack_60;
  System_String_o *pSStack_58;
  undefined8 uStack_50;
  SimpleJSONFixed_JSONLazyCreator_o *pSStack_48;
  
  pNVar6 = (Newtonsoft_Json_Linq_JToken_o *)(__this->fields).m_Node;
  pSVar9 = (__this->fields).m_Key;
  if (pSVar9 == (System_String_o *)0x0) {
    if (pNVar6 != (Newtonsoft_Json_Linq_JToken_o *)0x0) {
      (*(pNVar6->klass->vtable)._21_get_Last.methodPtr)
                (pNVar6,aVal,(pNVar6->klass->vtable)._21_get_Last.method);
      goto label_02665249;
    }
  }
  else if (pNVar6 != (Newtonsoft_Json_Linq_JToken_o *)0x0) {
    (*(pNVar6->klass->vtable)._20_get_First.methodPtr)
              (pNVar6,pSVar9,aVal,(pNVar6->klass->vtable)._20_get_First.method);
label_02665249:
    (__this->fields).m_Node = (SimpleJSONFixed_JSONNode_o *)0x0;
    il2cpp_runtime_helper_022b4080(&__this->fields,0);
    return aVal;
  }
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  pSStack_48 = __this;
  if (pSVar9[2].monitor == (void *)0x0) {
    pSStack_58 = (System_String_o *)0x2665294;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    if (pSVar9[2].monitor == (void *)0x0) goto label_026653ba;
  }
  pNVar5 = (Newtonsoft_Json_Linq_JToken_o *)(pNVar6->fields)._annotations;
  pNVar4 = TypeInfo_object;
  while( true ) {
    if (pNVar5 == (Newtonsoft_Json_Linq_JToken_o *)0x0) {
      TypeInfo_object = pNVar4;
      return (Il2CppObject *)0x0;
    }
    pSStack_58 = (System_String_o *)0x26652bb;
    TypeInfo_object = pNVar4;
    lVar2 = il2cpp_runtime_helper_023051f0();
    if (lVar2 != 0) break;
    pIVar7 = (pNVar6->fields)._annotations;
    lVar2 = *(long *)pSVar9[2].monitor;
    if ((*(byte *)(lVar2 + 0x135) & 1) == 0) {
      pSStack_58 = (System_String_o *)0x266536e;
      lVar2 = il2cpp_runtime_helper_023009c0(lVar2);
    }
    pSStack_58 = (System_String_o *)0x2665379;
    lVar2 = il2cpp_runtime_helper_023051f0(pIVar7,lVar2);
    pNVar6 = *(Newtonsoft_Json_Linq_JToken_o **)pSVar9[2].monitor;
    if (((ulong)pNVar6[6].fields._parent & 0x10000000000) == 0) {
      pSStack_58 = (System_String_o *)0x2665394;
      pNVar6 = (Newtonsoft_Json_Linq_JToken_o *)il2cpp_runtime_helper_023009c0(pNVar6);
    }
    if (lVar2 == 0) {
      return (Il2CppObject *)0x0;
    }
    pSStack_58 = (System_String_o *)0x26653a7;
    pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(lVar2,pNVar6);
    if (pIVar7 != (Il2CppObject *)0x0) {
      return pIVar7;
    }
    pSStack_58 = (System_String_o *)0x26653ba;
    il2cpp_runtime_helper_022b2fd0(lVar2,pNVar6);
label_026653ba:
    pSStack_58 = (System_String_o *)0x26653c2;
    il2cpp_runtime_helper_02300a20(pSVar9);
    pNVar5 = (Newtonsoft_Json_Linq_JToken_o *)(pNVar6->fields)._annotations;
    pNVar4 = TypeInfo_object;
  }
  uVar3 = *(undefined8 *)(lVar2 + 0x18);
  if ((int)uVar3 < 1) {
    return (Il2CppObject *)0x0;
  }
  lVar8 = 0;
  do {
    if ((uint)uVar3 <= (uint)lVar8) {
label_02665402:
      pSStack_58 = (System_String_o *)0x2665407;
      il2cpp_runtime_helper_022b2ca0();
      pNStack_68 = pNVar6;
      uStack_60 = 0;
      pSStack_58 = pSVar9;
      if (pNVar4[1].monitor == (long *)0x0) {
        pNStack_70 = (Newtonsoft_Json_Linq_JToken_o *)0x266547e;
        il2cpp_runtime_helper_02300a20(pNVar4);
        lVar2 = *(long *)pNVar4[1].monitor;
        bVar1 = *(byte *)(lVar2 + 0x135);
      }
      else {
        lVar2 = *(long *)pNVar4[1].monitor;
        bVar1 = *(byte *)(lVar2 + 0x135);
      }
      if ((bVar1 & 1) == 0) {
        pNStack_70 = (Newtonsoft_Json_Linq_JToken_o *)0x2665435;
        lVar2 = il2cpp_runtime_helper_023009c0();
      }
      pNStack_70 = (Newtonsoft_Json_Linq_JToken_o *)0x266543d;
      __this_00 = (Newtonsoft_Json_Linq_JToken__Annotations_d__185_T__o *)il2cpp_runtime_helper_023052d0(lVar2);
      lVar2 = 0xfffffffe;
      pNStack_70 = (Newtonsoft_Json_Linq_JToken_o *)0x2665455;
      pNVar11 = __this_00;
      Newtonsoft_Json_Linq_JToken__Annotations_d__185_object____ctor
                (__this_00,-2,*(MethodInfo_27BBBC0 **)((long)pNVar4[1].monitor + 8));
      if (__this_00 == (Newtonsoft_Json_Linq_JToken__Annotations_d__185_T__o *)0x0) {
        pNStack_70 = (Newtonsoft_Json_Linq_JToken_o *)0x2665495;
        il2cpp_runtime_helper_022b2c90();
        pNStack_78 = __this_00;
        pNStack_70 = pNVar5;
        if ((*(long *)(lVar2 + 0x38) == 0) &&
           (il2cpp_runtime_helper_023445d0(&TypeInfo_JEnumerable_JToken), *(long *)(lVar2 + 0x38) == 0)) {
          il2cpp_runtime_helper_02300a20(lVar2);
        }
        uStack_80 = (*(code *)pNVar11->klass[1]._1.interfaceOffsets)(pNVar11,pNVar11->klass[1].static_fields);
        source = (System_Collections_IEnumerable_o *)il2cpp_runtime_helper_02304f30(TypeInfo_JEnumerable_JToken,&uStack_80);
        enumerable = System_Linq_Enumerable__OfType_object_
                               (source,(MethodInfo_25169D0 *)**(undefined8 **)(lVar2 + 0x38));
        pIStack_88 = (Il2CppObject *)0x0;
        Newtonsoft_Json_Linq_JEnumerable_object____ctor
                  ((Newtonsoft_Json_Linq_JEnumerable_object__o)&pIStack_88,
                   (System_Collections_Generic_IEnumerable_T__o *)enumerable,
                   *(MethodInfo_34CD1C0 **)(*(long *)(lVar2 + 0x38) + 0x18));
        return pIStack_88;
      }
      (__this_00->fields).__4__this = pNVar5;
      pNStack_70 = (Newtonsoft_Json_Linq_JToken_o *)0x266546d;
      il2cpp_runtime_helper_022b4080(&(__this_00->fields).__4__this,pNVar5);
      return (Il2CppObject *)__this_00;
    }
    pNVar10 = *(Newtonsoft_Json_Linq_JToken_o **)(lVar2 + 0x20 + lVar8 * 8);
    if (pNVar10 == (Newtonsoft_Json_Linq_JToken_o *)0x0) {
      return (Il2CppObject *)0x0;
    }
    pNVar4 = *(Newtonsoft_Json_Linq_JToken_o **)pSVar9[2].monitor;
    if (((ulong)pNVar4[6].fields._parent & 0x10000000000) == 0) {
      pSStack_58 = (System_String_o *)0x266530e;
      pNVar4 = (Newtonsoft_Json_Linq_JToken_o *)il2cpp_runtime_helper_023009c0(pNVar4);
    }
    pSStack_58 = (System_String_o *)0x2665319;
    pNVar5 = (Newtonsoft_Json_Linq_JToken_o *)il2cpp_runtime_helper_023051f0();
    pNVar6 = *(Newtonsoft_Json_Linq_JToken_o **)pSVar9[2].monitor;
    if (((ulong)pNVar6[6].fields._parent & 0x10000000000) == 0) {
      pSStack_58 = (System_String_o *)0x2665334;
      pNVar10 = pNVar6;
      pNVar6 = (Newtonsoft_Json_Linq_JToken_o *)il2cpp_runtime_helper_023009c0();
    }
    if (pNVar5 != (Newtonsoft_Json_Linq_JToken_o *)0x0) {
      pSStack_58 = (System_String_o *)0x26653ef;
      pIVar7 = (Il2CppObject *)il2cpp_runtime_helper_023051f0(pNVar5,pNVar6);
      if (pIVar7 != (Il2CppObject *)0x0) {
        return pIVar7;
      }
      pSStack_58 = (System_String_o *)0x2665402;
      pNVar4 = pNVar6;
      il2cpp_runtime_helper_022b2fd0();
      goto label_02665402;
    }
    uVar3 = *(undefined8 *)(lVar2 + 0x18);
    lVar8 = lVar8 + 1;
    pNVar5 = pNVar10;
    if ((int)uVar3 <= (int)lVar8) {
      return (Il2CppObject *)0x0;
    }
  } while( true );
}


// SimpleJSONFixed.JSONLazyCreator$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONLazyCreator__get_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t aIndex, const MethodInfo* method);
// 0x40805b0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONLazyCreator__get_Item
          (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t aIndex,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac3a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONLazyCreator);
    g_data_057ac3a0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONLazyCreator);
  if (g_data_057ac39e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac39e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
  __this_00[1].monitor = (void *)0x0;
  il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,0);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONLazyCreator$$set_Item
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t aIndex, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x4080660

void SimpleJSONFixed_JSONLazyCreator__set_Item
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t aIndex,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  SimpleJSONFixed_JSONArray_o *__this_00;
  Il2CppObject *pIVar2;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,aIndex);
  if (g_data_057ac3a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONArray_Set_JSONArray);
    g_data_057ac3a1 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this_00,method_00);
  pIVar2 = SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,(Il2CppObject *)__this_00,MethodInfo_JSONArray_Set_JSONArray);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar2->klass;
    vtableDispatch = pIVar1->vtable[0x15].methodPtr;
    (*vtableDispatch)(pIVar2,value,pIVar1->vtable[0x15].method,pIVar1,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONLazyCreator);
    g_data_057ac3a2 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONLazyCreator);
  if (g_data_057ac39f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac39f = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  pIVar2[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_helper_022b4080(pIVar2 + 1,__this);
  pIVar2[1].monitor = __this_00;
  il2cpp_runtime_helper_022b4080(&pIVar2[1].monitor,__this_00);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_Item
// il2cpp: SimpleJSONFixed_JSONNode_o* SimpleJSONFixed_JSONLazyCreator__get_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, const MethodInfo* method);
// 0x40806f0

SimpleJSONFixed_JSONNode_o *
SimpleJSONFixed_JSONLazyCreator__get_Item_3f806f0
          (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac3a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONLazyCreator);
    g_data_057ac3a2 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONLazyCreator);
  if (g_data_057ac39f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac39f = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)__this;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
  __this_00[1].monitor = aKey;
  il2cpp_runtime_helper_022b4080(&__this_00[1].monitor,aKey);
  return (SimpleJSONFixed_JSONNode_o *)__this_00;
}


// SimpleJSONFixed.JSONLazyCreator$$set_Item
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_Item (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x40807a0

void SimpleJSONFixed_JSONLazyCreator__set_Item_3f807a0
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *value,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  Il2CppClass *pIVar1;
  MethodInfo *__this_00;
  Il2CppObject *pIVar2;
  MethodInfo *__this_01;
  SimpleJSONFixed_JSONObject_o *__this_02;
  undefined8 extraout_RDX;
  MethodInfo *pMVar3;
  
  pMVar3 = (MethodInfo *)aKey;
  if (g_data_057ac3a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_Set_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    g_data_057ac3a3 = '\x01';
  }
  __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)__this_00,pMVar3);
  pIVar2 = SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,(Il2CppObject *)__this_00,MethodInfo_JSONObject_Set_JSONObject);
  if (pIVar2 != (Il2CppObject *)0x0) {
    vtableDispatch = pIVar2->klass->vtable[0x14].methodPtr;
    (*vtableDispatch)(pIVar2,aKey,value,pIVar2->klass->vtable[0x14].method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar3 = __this_00;
  if (g_data_057ac3a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONArray_Set_JSONArray);
    g_data_057ac3a4 = '\x01';
  }
  __this_01 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_01,pMVar3);
  pIVar2 = SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,(Il2CppObject *)__this_01,MethodInfo_JSONArray_Set_JSONArray);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar2->klass;
    vtableDispatch = pIVar1->vtable[0x15].methodPtr;
    (*vtableDispatch)(pIVar2,__this_00,pIVar1->vtable[0x15].method,pIVar1,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar3 = __this_01;
  if (g_data_057ac3a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_Set_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    g_data_057ac3a5 = '\x01';
  }
  __this_02 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_02,pMVar3);
  pIVar2 = SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,(Il2CppObject *)__this_02,MethodInfo_JSONObject_Set_JSONObject);
  if (pIVar2 != (Il2CppObject *)0x0) {
    vtableDispatch = pIVar2->klass->vtable[0x14].methodPtr;
    (*vtableDispatch)
              (pIVar2,__this_01,extraout_RDX,pIVar2->klass->vtable[0x14].method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$Add
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__Add (SimpleJSONFixed_JSONLazyCreator_o* __this, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x4080840

void SimpleJSONFixed_JSONLazyCreator__Add
               (SimpleJSONFixed_JSONLazyCreator_o *__this,SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method
               )

{
  Il2CppClass *pIVar1;
  Il2CppMethodPointer UNRECOVERED_JUMPTABLE_00;
  MethodInfo *__this_00;
  Il2CppObject *pIVar2;
  SimpleJSONFixed_JSONObject_o *__this_01;
  undefined8 extraout_RDX;
  MethodInfo *pMVar3;
  
  pMVar3 = (MethodInfo *)aItem;
  if (g_data_057ac3a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONArray_Set_JSONArray);
    g_data_057ac3a4 = '\x01';
  }
  __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_00,pMVar3);
  pIVar2 = SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,(Il2CppObject *)__this_00,MethodInfo_JSONArray_Set_JSONArray);
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar1 = pIVar2->klass;
    UNRECOVERED_JUMPTABLE_00 = pIVar1->vtable[0x15].methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)(pIVar2,aItem,pIVar1->vtable[0x15].method,pIVar1,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar3 = __this_00;
  if (g_data_057ac3a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_Set_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    g_data_057ac3a5 = '\x01';
  }
  __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_01,pMVar3);
  pIVar2 = SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,(Il2CppObject *)__this_01,MethodInfo_JSONObject_Set_JSONObject);
  if (pIVar2 != (Il2CppObject *)0x0) {
    UNRECOVERED_JUMPTABLE_00 = pIVar2->klass->vtable[0x14].methodPtr;
    (*UNRECOVERED_JUMPTABLE_00)
              (pIVar2,__this_00,extraout_RDX,pIVar2->klass->vtable[0x14].method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$Add
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__Add (SimpleJSONFixed_JSONLazyCreator_o* __this, System_String_o* aKey, SimpleJSONFixed_JSONNode_o* aItem, const MethodInfo* method);
// 0x40808d0

void SimpleJSONFixed_JSONLazyCreator__Add_3f808d0
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_String_o *aKey,
               SimpleJSONFixed_JSONNode_o *aItem,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  SimpleJSONFixed_JSONObject_o *__this_00;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)aKey;
  if (g_data_057ac3a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_Set_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    g_data_057ac3a5 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,method_00);
  pIVar1 = SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,(Il2CppObject *)__this_00,MethodInfo_JSONObject_Set_JSONObject);
  if (pIVar1 != (Il2CppObject *)0x0) {
    vtableDispatch = pIVar1->klass->vtable[0x14].methodPtr;
    (*vtableDispatch)(pIVar1,aKey,aItem,pIVar1->klass->vtable[0x14].method,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$op_Equality
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__op_Equality (SimpleJSONFixed_JSONLazyCreator_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x4080970

bool_conflict
SimpleJSONFixed_JSONLazyCreator__op_Equality
          (SimpleJSONFixed_JSONLazyCreator_o *a,Il2CppObject *b,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  a == (SimpleJSONFixed_JSONLazyCreator_o *)b || b == (Il2CppObject *)0x0);
}


// SimpleJSONFixed.JSONLazyCreator$$op_Inequality
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__op_Inequality (SimpleJSONFixed_JSONLazyCreator_o* a, Il2CppObject* b, const MethodInfo* method);
// 0x4080980

bool_conflict
SimpleJSONFixed_JSONLazyCreator__op_Inequality
          (SimpleJSONFixed_JSONLazyCreator_o *a,Il2CppObject *b,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  a != (SimpleJSONFixed_JSONLazyCreator_o *)b && b != (Il2CppObject *)0x0);
}


// SimpleJSONFixed.JSONLazyCreator$$Equals
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__Equals (SimpleJSONFixed_JSONLazyCreator_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x4080990

bool_conflict
SimpleJSONFixed_JSONLazyCreator__Equals
          (SimpleJSONFixed_JSONLazyCreator_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),
                  __this == (SimpleJSONFixed_JSONLazyCreator_o *)obj || obj == (Il2CppObject *)0x0);
}


// SimpleJSONFixed.JSONLazyCreator$$GetHashCode
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__GetHashCode (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x40809a0

int32_t SimpleJSONFixed_JSONLazyCreator__GetHashCode
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsInt
// il2cpp: int32_t SimpleJSONFixed_JSONLazyCreator__get_AsInt (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x40809b0

int32_t SimpleJSONFixed_JSONLazyCreator__get_AsInt
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac3a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac3a6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)0x0;
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsInt
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsInt (SimpleJSONFixed_JSONLazyCreator_o* __this, int32_t value, const MethodInfo* method);
// 0x4080a60

void SimpleJSONFixed_JSONLazyCreator__set_AsInt
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int32_t value,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac3a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac3a7 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)(double)value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsFloat
// il2cpp: float SimpleJSONFixed_JSONLazyCreator__get_AsFloat (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x4080b20

float SimpleJSONFixed_JSONLazyCreator__get_AsFloat
                (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac3a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac3a8 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)0x0;
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return 0.0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsFloat
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsFloat (SimpleJSONFixed_JSONLazyCreator_o* __this, float value, const MethodInfo* method);
// 0x4080bd0

void SimpleJSONFixed_JSONLazyCreator__set_AsFloat
               (SimpleJSONFixed_JSONLazyCreator_o *__this,float value,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac3a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac3a9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)(double)value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsDouble
// il2cpp: double SimpleJSONFixed_JSONLazyCreator__get_AsDouble (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x4080c90

double SimpleJSONFixed_JSONLazyCreator__get_AsDouble
                 (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac3aa == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac3aa = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)0x0;
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return 0.0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsDouble
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsDouble (SimpleJSONFixed_JSONLazyCreator_o* __this, double value, const MethodInfo* method);
// 0x4080d40

void SimpleJSONFixed_JSONLazyCreator__set_AsDouble
               (SimpleJSONFixed_JSONLazyCreator_o *__this,double value,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac3ab == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    g_data_057ac3ab = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = (Il2CppClass *)value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,__this_00,MethodInfo_JSONNumber_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsLong
// il2cpp: int64_t SimpleJSONFixed_JSONLazyCreator__get_AsLong (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x4080df0

int64_t SimpleJSONFixed_JSONLazyCreator__get_AsLong
                  (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_00;
  undefined8 *puVar4;
  
  if (g_data_057ac3ac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONString_Set_JSONString);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057ac3ac = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  if (cVar1 == '\0') {
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
    if (g_data_057ac38e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac38e = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = (Il2CppClass *)0x0;
    puVar4 = &MethodInfo_JSONNumber_Set_JSONNumber;
  }
  else {
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    pIVar3 = "0";
    if (g_data_057ac387 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac387 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar3);
    puVar4 = &MethodInfo_JSONString_Set_JSONString;
  }
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,__this_00,(MethodInfo_2565200 *)*puVar4);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsLong
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsLong (SimpleJSONFixed_JSONLazyCreator_o* __this, int64_t value, const MethodInfo* method);
// 0x4080fa0

void SimpleJSONFixed_JSONLazyCreator__set_AsLong
               (SimpleJSONFixed_JSONLazyCreator_o *__this,int64_t value,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  int64_t local_28;
  
  local_28 = value;
  if (g_data_057ac3ad == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONString_Set_JSONString);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    g_data_057ac3ad = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  if (cVar1 != '\0') {
    pIVar3 = (Il2CppClass *)System_Int64__ToString((int64_t)&local_28,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    if (g_data_057ac387 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac387 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    pIVar4[1].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(pIVar4 + 1,pIVar3);
    SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,pIVar4,MethodInfo_JSONString_Set_JSONString);
    return;
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  if (g_data_057ac38e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  pIVar4[1].klass = (Il2CppClass *)(double)value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,pIVar4,MethodInfo_JSONNumber_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsULong
// il2cpp: uint64_t SimpleJSONFixed_JSONLazyCreator__get_AsULong (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x4081170

uint64_t SimpleJSONFixed_JSONLazyCreator__get_AsULong
                   (SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *__this_00;
  undefined8 *puVar4;
  
  if (g_data_057ac3ae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONString_Set_JSONString);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    il2cpp_runtime_helper_023445d0(&"0");
    g_data_057ac3ae = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  if (cVar1 == '\0') {
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
    if (g_data_057ac38e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac38e = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = (Il2CppClass *)0x0;
    puVar4 = &MethodInfo_JSONNumber_Set_JSONNumber;
  }
  else {
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    pIVar3 = "0";
    if (g_data_057ac387 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac387 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    __this_00[1].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(__this_00 + 1,pIVar3);
    puVar4 = &MethodInfo_JSONString_Set_JSONString;
  }
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,__this_00,(MethodInfo_2565200 *)*puVar4);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsULong
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsULong (SimpleJSONFixed_JSONLazyCreator_o* __this, uint64_t value, const MethodInfo* method);
// 0x4081320

void SimpleJSONFixed_JSONLazyCreator__set_AsULong
               (SimpleJSONFixed_JSONLazyCreator_o *__this,uint64_t value,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  Il2CppObject *pIVar4;
  double dVar5;
  undefined1 auVar6 [16];
  double dVar7;
  uint64_t local_40;
  double local_38;
  double dStack_30;
  
  local_40 = value;
  if (g_data_057ac3af == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNumber_Set_JSONNumber);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONString_Set_JSONString);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONString);
    g_data_057ac3af = '\x01';
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 1);
  }
  if (cVar1 != '\0') {
    pIVar3 = (Il2CppClass *)System_UInt64__ToString((uint64_t)&local_40,(MethodInfo *)0x0);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONString);
    if (g_data_057ac387 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac387 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    pIVar4[1].klass = pIVar3;
    il2cpp_runtime_helper_022b4080(pIVar4 + 1,pIVar3);
    SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,pIVar4,MethodInfo_JSONString_Set_JSONString);
    return;
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
  auVar6._8_4_ = (int)(value >> 0x20);
  auVar6._0_8_ = value;
  auVar6._12_4_ = 0x45300000;
  dVar5 = (double)CONCAT44(0x43300000,(int)value) - 4503599627370496.0;
  dVar7 = auVar6._8_8_ - 1.9342813113834067e+25;
  if (g_data_057ac38e == '\0') {
    local_38 = dVar5;
    dStack_30 = dVar7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac38e = '\x01';
    dVar5 = local_38;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  pIVar4[1].klass = (Il2CppClass *)(dVar7 + dVar5);
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,pIVar4,MethodInfo_JSONNumber_Set_JSONNumber);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsBool
// il2cpp: bool SimpleJSONFixed_JSONLazyCreator__get_AsBool (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x4081520

bool_conflict
SimpleJSONFixed_JSONLazyCreator__get_AsBool(SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac3b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONBool_Set_JSONBool);
    g_data_057ac3b0 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
  if (g_data_057ac393 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac393 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined1 *)&__this_00[1].klass = 0;
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,__this_00,MethodInfo_JSONBool_Set_JSONBool);
  return 0;
}


// SimpleJSONFixed.JSONLazyCreator$$set_AsBool
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__set_AsBool (SimpleJSONFixed_JSONLazyCreator_o* __this, bool value, const MethodInfo* method);
// 0x40815d0

void SimpleJSONFixed_JSONLazyCreator__set_AsBool
               (SimpleJSONFixed_JSONLazyCreator_o *__this,bool_conflict value,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (g_data_057ac3b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONBool_Set_JSONBool);
    g_data_057ac3b1 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
  if (g_data_057ac393 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac393 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(char *)&__this_00[1].klass = (char)value;
  SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,__this_00,MethodInfo_JSONBool_Set_JSONBool);
  return;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsArray
// il2cpp: SimpleJSONFixed_JSONArray_o* SimpleJSONFixed_JSONLazyCreator__get_AsArray (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x4081670

SimpleJSONFixed_JSONArray_o *
SimpleJSONFixed_JSONLazyCreator__get_AsArray(SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONArray_o *pSVar1;
  
  if (g_data_057ac3b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONArray_Set_JSONArray);
    g_data_057ac3b2 = '\x01';
  }
  pSVar1 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(pSVar1,method);
  pSVar1 = (SimpleJSONFixed_JSONArray_o *)
           SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,(Il2CppObject *)pSVar1,MethodInfo_JSONArray_Set_JSONArray);
  return pSVar1;
}


// SimpleJSONFixed.JSONLazyCreator$$get_AsObject
// il2cpp: SimpleJSONFixed_JSONObject_o* SimpleJSONFixed_JSONLazyCreator__get_AsObject (SimpleJSONFixed_JSONLazyCreator_o* __this, const MethodInfo* method);
// 0x40816e0

SimpleJSONFixed_JSONObject_o *
SimpleJSONFixed_JSONLazyCreator__get_AsObject(SimpleJSONFixed_JSONLazyCreator_o *__this,MethodInfo *method)

{
  SimpleJSONFixed_JSONObject_o *pSVar1;
  
  if (g_data_057ac3b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_JSONObject_Set_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    g_data_057ac3b3 = '\x01';
  }
  pSVar1 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(pSVar1,method);
  pSVar1 = (SimpleJSONFixed_JSONObject_o *)
           SimpleJSONFixed_JSONLazyCreator__Set_object_(__this,(Il2CppObject *)pSVar1,MethodInfo_JSONObject_Set_JSONObject);
  return pSVar1;
}


// SimpleJSONFixed.JSONLazyCreator$$WriteToStringBuilder
// il2cpp: void SimpleJSONFixed_JSONLazyCreator__WriteToStringBuilder (SimpleJSONFixed_JSONLazyCreator_o* __this, System_Text_StringBuilder_o* aSB, int32_t aIndent, int32_t aIndentInc, int32_t aMode, const MethodInfo* method);
// 0x4081750

void SimpleJSONFixed_JSONLazyCreator__WriteToStringBuilder
               (SimpleJSONFixed_JSONLazyCreator_o *__this,System_Text_StringBuilder_o *aSB,int32_t aIndent,
               int32_t aIndentInc,int32_t aMode,MethodInfo *method)

{
  uint index;
  int iVar1;
  Il2CppClass *pIVar2;
  long lVar3;
  long *plVar4;
  code *pcVar5;
  ulong uVar6;
  Il2CppMethodPointer pIVar7;
  bool bVar8;
  byte bVar9;
  uint16_t uVar10;
  int32_t iVar11;
  bool_conflict bVar12;
  System_Globalization_CultureInfo_o *provider;
  Il2CppObject *pIVar13;
  System_String_o *pSVar14;
  System_Collections_Generic_Stack_object__o *pSVar15;
  System_Text_StringBuilder_o *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar16;
  SimpleJSONFixed_JSONLazyCreator_o *__this_02;
  undefined8 uVar17;
  System_Exception_o *__this_03;
  System_Collections_Generic_Dictionary_object__object__o *__this_04;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  MethodInfo *extraout_RDX_18;
  MethodInfo *extraout_RDX_19;
  MethodInfo *extraout_RDX_20;
  MethodInfo *extraout_RDX_21;
  MethodInfo *extraout_RDX_22;
  MethodInfo *extraout_RDX_23;
  undefined1 *puVar18;
  MethodInfo *unaff_RBP;
  MethodInfo *pMVar19;
  MethodInfo *method_00;
  undefined *puVar20;
  System_Exception_o *__this_05;
  System_String_o **__this_06;
  uint index_00;
  undefined8 unaff_R12;
  undefined8 unaff_R13;
  undefined8 unaff_R14;
  bool bVar21;
  undefined8 unaff_R15;
  undefined1 auVar22 [16];
  
  __this_06 = (System_String_o **)__this;
  if (g_data_057ac3b4 == '\0') {
    __this_06 = &"null";
    il2cpp_runtime_helper_023445d0();
    g_data_057ac3b4 = '\x01';
  }
  if (aSB != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_3b03f90(aSB,"null",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ac3b5 = '\x01';
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    puVar18 = &stack0xfffffffffffffff8;
  }
  else {
    puVar18 = &stack0xfffffffffffffff8;
  }
  do {
    *(MethodInfo **)(puVar18 + -8) = unaff_RBP;
    *(undefined8 *)(puVar18 + -0x10) = unaff_R15;
    *(undefined8 *)(puVar18 + -0x18) = unaff_R14;
    *(undefined8 *)(puVar18 + -0x20) = unaff_R13;
    *(undefined8 *)(puVar18 + -0x28) = unaff_R12;
    *(undefined8 *)(puVar18 + -0x30) = 0;
    if (g_data_057ac351 == '\0') {
      *(undefined8 *)(puVar18 + -0x70) = 0x407acea;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
      *(undefined8 *)(puVar18 + -0x70) = 0x407acf6;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)(puVar18 + -0x70) = 0x407ad02;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
      *(undefined8 *)(puVar18 + -0x70) = 0x407ad0e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Peek);
      *(undefined8 *)(puVar18 + -0x70) = 0x407ad1a;
      il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Pop);
      *(undefined8 *)(puVar18 + -0x70) = 0x407ad26;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Push);
      *(undefined8 *)(puVar18 + -0x70) = 0x407ad32;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
      *(undefined8 *)(puVar18 + -0x70) = 0x407ad3e;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
      *(undefined8 *)(puVar18 + -0x70) = 0x407ad4a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Stack_JSONNode);
      *(undefined8 *)(puVar18 + -0x70) = 0x407ad56;
      il2cpp_runtime_helper_023445d0(&TypeInfo_StringBuilder);
      *(undefined8 *)(puVar18 + -0x70) = 0x407ad62;
      il2cpp_runtime_helper_023445d0(&"");
      g_data_057ac351 = '\x01';
    }
    *(undefined8 *)(puVar18 + -0x70) = 0x407ad78;
    pSVar15 = (System_Collections_Generic_Stack_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Stack_JSONNode);
    *(System_Collections_Generic_Stack_object__o **)(puVar18 + -0x40) = pSVar15;
    *(undefined8 *)(puVar18 + -0x70) = 0x407ad8f;
    System_Collections_Generic_Stack_object____ctor(pSVar15,MethodInfo_Stack_1_SimpleJSONFixed_JSONNode);
    *(undefined8 *)(puVar18 + -0x70) = 0x407ad9e;
    __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringBuilder);
    *(undefined8 *)(puVar18 + -0x70) = 0x407adab;
    System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
    if ((SimpleJSONFixed_JSONLazyCreator_o *)__this_06 == (SimpleJSONFixed_JSONLazyCreator_o *)0x0) {
label_0407b618:
      *(undefined8 *)(puVar18 + -0x70) = 0x407b61d;
      il2cpp_runtime_helper_022b2c90();
label_0407b61d:
      *(undefined8 *)(puVar18 + -0x70) = 0x407b629;
      uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      *(undefined8 *)(puVar18 + -0x70) = 0x407b631;
      __this_03 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
      puVar20 = &"JSON Parse: Too many closing brackets";
label_0407b65b:
      *(undefined8 *)(puVar18 + -0x70) = 0x407b660;
      pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar20);
      *(undefined8 *)(puVar18 + -0x70) = 0x407b66d;
      System_Exception___ctor_3cf6120(__this_03,pSVar14,(MethodInfo *)0x0);
      *(undefined8 *)(puVar18 + -0x70) = 0x407b679;
      uVar17 = il2cpp_runtime_helper_023445d0(&MethodInfo_JSONNode_Parse);
      *(undefined8 *)(puVar18 + -0x70) = 0x407b684;
      __this_05 = __this_03;
      uVar17 = il2cpp_runtime_helper_022b2b10(__this_03,uVar17);
      *(System_Text_StringBuilder_o **)(puVar18 + -0x70) = __this_00;
      *(System_Exception_o **)(puVar18 + -0x78) = __this_03;
      *(undefined8 *)(puVar18 + -0x80) = uVar17;
      if (g_data_057ac382 == '\0') {
        *(undefined8 *)(puVar18 + -0x88) = 0x407b6ac;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
        *(undefined8 *)(puVar18 + -0x88) = 0x407b6b8;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_JSONNode);
        *(undefined8 *)(puVar18 + -0x88) = 0x407b6c4;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac382 = '\x01';
      }
      *(undefined8 *)(puVar18 + -0x88) = 0x407b6da;
      __this_04 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_JSONNode);
      *(undefined8 *)(puVar18 + -0x88) = 0x407b6ef;
      System_Collections_Generic_Dictionary_object__object____ctor(__this_04,MethodInfo_Dictionary_2_System_String_SimpleJSONFixed_JSONNode);
      (__this_05->fields)._className = (System_String_o *)__this_04;
      *(undefined8 *)(puVar18 + -0x88) = 0x407b6ff;
      il2cpp_runtime_helper_022b4080(&__this_05->fields);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar18 + -0x88) = 0x407b717;
        il2cpp_runtime_helper_02337ed0();
      }
      System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
      return;
    }
    index_00 = 0;
    if (0 < *(int *)&(((SimpleJSONFixed_JSONLazyCreator_o *)__this_06)->fields).m_Node) {
      *(undefined8 *)(puVar18 + -0x48) = "";
      bVar21 = false;
      *(undefined8 *)(puVar18 + -0x50) = 0;
      *(undefined8 *)(puVar18 + -0x60) = 0;
      *(undefined8 *)(puVar18 + -0x58) = 0;
      *(System_Text_StringBuilder_o **)(puVar18 + -0x38) = __this_00;
label_0407ae34:
      method_00 = (MethodInfo *)(ulong)index_00;
      *(undefined8 *)(puVar18 + -0x70) = 0x407ae41;
      uVar10 = System_String__get_Chars((System_String_o *)__this_06,index_00,(MethodInfo *)0x0);
      pMVar19 = extraout_RDX_00;
      bVar8 = bVar21;
      if (uVar10 < 0x30) {
        if (uVar10 < 0x21) {
          bVar8 = true;
          switch(uVar10) {
          case 9:
          case 0x20:
            bVar8 = bVar21;
            if ((puVar18[-0x60] & 1) != 0) goto switchD_0407ae72_caseD_2;
            break;
          case 10:
          case 0xd:
            break;
          default:
            goto switchD_0407ae72_caseD_2;
          }
          goto switchD_0407ae72_caseD_1;
        }
        if (uVar10 == 0x22) {
          bVar9 = ~(byte)*(undefined8 *)(puVar18 + -0x60);
          *(ulong *)(puVar18 + -0x60) =
               CONCAT71((int7)((ulong)*(undefined8 *)(puVar18 + -0x60) >> 8),bVar9) & 0xffffffffffffff01;
          *(ulong *)(puVar18 + -0x50) =
               CONCAT71((int7)((ulong)*(undefined8 *)(puVar18 + -0x50) >> 8),
                        (byte)*(undefined8 *)(puVar18 + -0x50) | bVar9) & 0xffffffffffffff01;
          goto switchD_0407ae72_caseD_1;
        }
        if (uVar10 == 0x2c) {
          if ((puVar18[-0x60] & 1) != 0) goto switchD_0407ae72_caseD_2;
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
          *(undefined8 *)(puVar18 + -0x70) = 0x407b173;
          iVar11 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
          uVar6 = *(ulong *)(puVar18 + -0x50);
          uVar17 = "";
          if (0 < iVar11 || (uVar6 & 1) != 0) {
            pMVar19 = (__this_00->klass->vtable)._3_ToString.method;
            pIVar7 = (__this_00->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)(puVar18 + -0x70) = 0x407b19a;
            auVar22 = (*pIVar7)(__this_00,pMVar19);
            pMVar19 = auVar22._8_8_;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)(puVar18 + -0x70) = 0x407b1b1;
              il2cpp_runtime_helper_02337ed0();
              pMVar19 = extraout_RDX_09;
            }
            *(undefined8 *)(puVar18 + -0x70) = 0x407b1bd;
            pSVar16 = SimpleJSONFixed_JSONNode__ParseElement(auVar22._0_8_,(uint)uVar6 & 1,pMVar19);
            plVar4 = *(long **)(puVar18 + -0x58);
            if (plVar4 != (long *)0x0) {
              uVar17 = *(undefined8 *)(*plVar4 + 0x280);
              pcVar5 = *(code **)(*plVar4 + 0x278);
              *(undefined8 *)(puVar18 + -0x70) = 0x407b1e3;
              (*pcVar5)(plVar4,*(undefined8 *)(puVar18 + -0x48),pSVar16,uVar17);
              uVar17 = "";
              goto label_0407b1f4;
            }
            goto label_0407b618;
          }
          goto label_0407b1f4;
        }
        if (uVar10 == 0x2f) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            *(undefined8 *)(puVar18 + -0x70) = 0x407b3bd;
            il2cpp_runtime_helper_02337ed0();
            bVar9 = puVar18[-0x60];
          }
          else {
            bVar9 = puVar18[-0x60];
          }
          if ((((bVar9 & 1) == 0) && (*(char *)(*(long *)(TypeInfo_JSONNode + 0xb8) + 2) != '\0')) &&
             (index = index_00 + 1,
             (int)index < *(int *)&(((SimpleJSONFixed_JSONLazyCreator_o *)__this_06)->fields).m_Node)) {
            *(undefined8 *)(puVar18 + -0x70) = 0x407af45;
            uVar10 = System_String__get_Chars((System_String_o *)__this_06,index,(MethodInfo *)0x0);
            pMVar19 = extraout_RDX_01;
            if (uVar10 == 0x2f) {
              do {
                index_00 = index;
                if (*(int *)&(((SimpleJSONFixed_JSONLazyCreator_o *)__this_06)->fields).m_Node <=
                    (int)index_00) break;
                *(undefined8 *)(puVar18 + -0x70) = 0x407af69;
                uVar10 = System_String__get_Chars((System_String_o *)__this_06,index_00,(MethodInfo *)0x0);
                pMVar19 = extraout_RDX_02;
                if (uVar10 == 10) break;
                *(undefined8 *)(puVar18 + -0x70) = 0x407af80;
                uVar10 = System_String__get_Chars((System_String_o *)__this_06,index_00,(MethodInfo *)0x0);
                pMVar19 = extraout_RDX_03;
                index = index_00 + 1;
              } while (uVar10 != 0xd);
              goto label_0407b3ef;
            }
          }
          *(undefined8 *)(puVar18 + -0x70) = 0x407b3d9;
          uVar10 = System_String__get_Chars((System_String_o *)__this_06,index_00,(MethodInfo *)0x0);
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
          *(undefined8 *)(puVar18 + -0x70) = 0x407b3ef;
          System_Text_StringBuilder__Append_3b048f0(__this_00,uVar10,(MethodInfo *)0x0);
          pMVar19 = extraout_RDX_14;
label_0407b3ef:
          index_00 = index_00 + 1;
          if (*(int *)&(((SimpleJSONFixed_JSONLazyCreator_o *)__this_06)->fields).m_Node <= (int)index_00)
          goto label_0407b581;
          goto label_0407ae34;
        }
      }
      else {
        if (0x5d < uVar10) {
          if (uVar10 == 0xfeff) goto switchD_0407ae72_caseD_1;
          if (uVar10 == 0x7d) goto switchD_0407aea8_caseD_23;
          if ((uVar10 != 0x7b) || ((puVar18[-0x60] & 1) != 0)) goto switchD_0407ae72_caseD_2;
          *(undefined8 *)(puVar18 + -0x70) = 0x407afc9;
          __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
          *(undefined8 *)(puVar18 + -0x70) = 0x407afd4;
          SimpleJSONFixed_JSONObject___ctor(__this_01,method_00);
          pSVar15 = *(System_Collections_Generic_Stack_object__o **)(puVar18 + -0x40);
          if (pSVar15 != (System_Collections_Generic_Stack_object__o *)0x0) goto label_0407b294;
          goto label_0407b618;
        }
        switch(uVar10) {
        case 0x3a:
          if ((puVar18[-0x60] & 1) == 0) {
            if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
            pIVar7 = (__this_00->klass->vtable)._3_ToString.methodPtr;
            *(undefined8 *)(puVar18 + -0x70) = 0x407aed1;
            uVar17 = (*pIVar7)(__this_00);
label_0407b1f4:
            *(undefined8 *)(puVar18 + -0x48) = uVar17;
            *(undefined8 *)(puVar18 + -0x50) = 0;
            *(undefined8 *)(puVar18 + -0x70) = 0x407b20c;
            System_Text_StringBuilder__set_Length(__this_00,0,(MethodInfo *)0x0);
            pMVar19 = extraout_RDX_10;
            goto switchD_0407ae72_caseD_1;
          }
          break;
        case 0x5b:
          if ((puVar18[-0x60] & 1) == 0) {
            *(undefined8 *)(puVar18 + -0x70) = 0x407b27b;
            __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
            *(undefined8 *)(puVar18 + -0x70) = 0x407b286;
            SimpleJSONFixed_JSONArray___ctor((SimpleJSONFixed_JSONArray_o *)__this_01,method_00);
            pSVar15 = *(System_Collections_Generic_Stack_object__o **)(puVar18 + -0x40);
            if (pSVar15 == (System_Collections_Generic_Stack_object__o *)0x0) goto label_0407b618;
label_0407b294:
            *(undefined8 *)(puVar18 + -0x70) = 0x407b2a6;
            System_Collections_Generic_Stack_object___Push(pSVar15,(Il2CppObject *)__this_01,MethodInfo_Void_Push);
            pSVar16 = *(SimpleJSONFixed_JSONNode_o **)(puVar18 + -0x58);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              *(undefined8 *)(puVar18 + -0x70) = 0x407b455;
              il2cpp_runtime_helper_02337ed0();
              pMVar19 = extraout_RDX_18;
              if (g_data_057ac34d == '\0') goto label_0407b462;
label_0407b2d0:
              iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
            }
            else {
              pMVar19 = extraout_RDX_11;
              if (g_data_057ac34d != '\0') goto label_0407b2d0;
label_0407b462:
              *(undefined8 *)(puVar18 + -0x70) = 0x407b46a;
              il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
              g_data_057ac34d = '\x01';
              iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
              pMVar19 = extraout_RDX_19;
            }
            if (iVar1 == 0) {
              *(undefined8 *)(puVar18 + -0x70) = 0x407b487;
              il2cpp_runtime_helper_02337ed0();
              pMVar19 = extraout_RDX_20;
            }
            *(undefined8 *)(puVar18 + -0x70) = 0x407b2eb;
            bVar12 = SimpleJSONFixed_JSONNode__op_Equality(pSVar16,(Il2CppObject *)0x0,pMVar19);
            if ((char)bVar12 == '\0') {
              *(undefined8 *)(puVar18 + -0x70) = 0x407b303;
              pIVar13 = System_Collections_Generic_Stack_object___Peek
                                  (*(System_Collections_Generic_Stack_object__o **)(puVar18 + -0x40),
                                   MethodInfo_JSONNode_Peek);
              if (pSVar16 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0407b618;
              pMVar19 = (pSVar16->klass->vtable)._20_Add.method;
              pIVar7 = (pSVar16->klass->vtable)._20_Add.methodPtr;
              *(undefined8 *)(puVar18 + -0x70) = 0x407b327;
              (*pIVar7)(pSVar16,*(undefined8 *)(puVar18 + -0x48),pIVar13,pMVar19);
            }
            if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
            *(undefined8 *)(puVar18 + -0x48) = "";
            *(undefined8 *)(puVar18 + -0x70) = 0x407b355;
            System_Text_StringBuilder__set_Length(__this_00,0,(MethodInfo *)0x0);
            *(undefined8 *)(puVar18 + -0x70) = 0x407b369;
            pIVar13 = System_Collections_Generic_Stack_object___Peek
                                (*(System_Collections_Generic_Stack_object__o **)(puVar18 + -0x40),
                                 MethodInfo_JSONNode_Peek);
            *(Il2CppObject **)(puVar18 + -0x58) = pIVar13;
            index_00 = index_00 + 1;
            bVar21 = false;
            pMVar19 = extraout_RDX_12;
            if (*(int *)&(((SimpleJSONFixed_JSONLazyCreator_o *)__this_06)->fields).m_Node <= (int)index_00)
            goto label_0407b581;
            goto label_0407ae34;
          }
          break;
        case 0x5c:
          if ((puVar18[-0x60] & 1) != 0) {
            *(undefined8 *)(puVar18 + -0x70) = 0x407b22d;
            uVar10 = System_String__get_Chars((System_String_o *)__this_06,index_00 + 1,(MethodInfo *)0x0);
            if (uVar10 < 0x67) {
              if (uVar10 == 0x62) {
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 8;
              }
              else {
                if (uVar10 != 0x66) goto switchD_0407b4a6_caseD_1;
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 0xc;
              }
            }
            else {
              switch(uVar10) {
              case 0x6e:
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 10;
                break;
              default:
switchD_0407b4a6_caseD_1:
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                break;
              case 0x72:
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 0xd;
                break;
              case 0x74:
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                uVar10 = 9;
                break;
              case 0x75:
                *(undefined8 *)(puVar18 + -0x70) = 0x407b53e;
                pSVar14 = System_String__Substring_3af8da0
                                    ((System_String_o *)__this_06,index_00 + 2,4,(MethodInfo *)0x0);
                *(undefined8 *)(puVar18 + -0x70) = 0x407b54d;
                iVar11 = System_Int32__Parse_3cb4720(pSVar14,0x200,(MethodInfo *)0x0);
                if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
                  *(undefined8 *)(puVar18 + -0x70) = 0x407b563;
                  System_Text_StringBuilder__Append_3b048f0(__this_00,(uint16_t)iVar11,(MethodInfo *)0x0);
                  index_00 = index_00 + 5;
                  pMVar19 = extraout_RDX_22;
                  goto label_0407b3ef;
                }
                goto label_0407b618;
              }
            }
            *(undefined8 *)(puVar18 + -0x70) = 0x407b50a;
            System_Text_StringBuilder__Append_3b048f0(__this_00,uVar10,(MethodInfo *)0x0);
            pMVar19 = extraout_RDX_21;
          }
          index_00 = index_00 + 2;
          if (*(int *)&(((SimpleJSONFixed_JSONLazyCreator_o *)__this_06)->fields).m_Node <= (int)index_00)
          goto label_0407b581;
          goto label_0407ae34;
        case 0x5d:
switchD_0407aea8_caseD_23:
          if ((puVar18[-0x60] & 1) == 0) {
            pSVar15 = *(System_Collections_Generic_Stack_object__o **)(puVar18 + -0x40);
            if (pSVar15 != (System_Collections_Generic_Stack_object__o *)0x0) {
              if ((pSVar15->fields)._size != 0) {
                *(undefined8 *)(puVar18 + -0x70) = 0x407b019;
                System_Collections_Generic_Stack_object___Pop(pSVar15,MethodInfo_JSONNode_Pop);
                if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
                *(undefined8 *)(puVar18 + -0x70) = 0x407b02c;
                iVar11 = System_Text_StringBuilder__get_Length(__this_00,(MethodInfo *)0x0);
                uVar6 = *(ulong *)(puVar18 + -0x50);
                __this_00 = (System_Text_StringBuilder_o *)(uVar6 & 0xffffffffffffff01);
                pMVar19 = extraout_RDX_04;
                if (0 < iVar11 || (char)__this_00 != '\0') {
                  lVar3 = **(long **)(puVar18 + -0x38);
                  uVar17 = *(undefined8 *)(lVar3 + 0x170);
                  pcVar5 = *(code **)(lVar3 + 0x168);
                  *(undefined8 *)(puVar18 + -0x70) = 0x407b055;
                  auVar22 = (*pcVar5)(*(long **)(puVar18 + -0x38),uVar17);
                  pMVar19 = auVar22._8_8_;
                  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                    *(undefined8 *)(puVar18 + -0x70) = 0x407b06a;
                    il2cpp_runtime_helper_02337ed0();
                    pMVar19 = extraout_RDX_05;
                  }
                  *(undefined8 *)(puVar18 + -0x70) = 0x407b076;
                  pSVar16 = SimpleJSONFixed_JSONNode__ParseElement(auVar22._0_8_,(uint)uVar6 & 1,pMVar19);
                  plVar4 = *(long **)(puVar18 + -0x58);
                  if (plVar4 == (long *)0x0) goto label_0407b618;
                  uVar17 = *(undefined8 *)(*plVar4 + 0x280);
                  pcVar5 = *(code **)(*plVar4 + 0x278);
                  *(undefined8 *)(puVar18 + -0x70) = 0x407b09c;
                  (*pcVar5)(plVar4,*(undefined8 *)(puVar18 + -0x48),pSVar16,uVar17);
                  pMVar19 = extraout_RDX_06;
                }
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  *(undefined8 *)(puVar18 + -0x70) = 0x407b414;
                  il2cpp_runtime_helper_02337ed0();
                  __this_00 = *(System_Text_StringBuilder_o **)(puVar18 + -0x38);
                  pMVar19 = extraout_RDX_15;
                  if (g_data_057ac34d == '\0') goto label_0407b426;
label_0407b0c6:
                  iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
                }
                else {
                  __this_00 = *(System_Text_StringBuilder_o **)(puVar18 + -0x38);
                  if (g_data_057ac34d != '\0') goto label_0407b0c6;
label_0407b426:
                  *(undefined8 *)(puVar18 + -0x70) = 0x407b42e;
                  il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
                  g_data_057ac34d = '\x01';
                  iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
                  pMVar19 = extraout_RDX_16;
                }
                if (iVar1 == 0) {
                  *(undefined8 *)(puVar18 + -0x70) = 0x407b44b;
                  il2cpp_runtime_helper_02337ed0();
                  pMVar19 = extraout_RDX_17;
                }
                *(undefined8 *)(puVar18 + -0x70) = 0x407b0e3;
                bVar12 = SimpleJSONFixed_JSONNode__op_Equality
                                   (*(SimpleJSONFixed_JSONNode_o **)(puVar18 + -0x58),(Il2CppObject *)0x0,
                                    pMVar19);
                if ((char)bVar12 == '\0') {
                  plVar4 = *(long **)(puVar18 + -0x58);
                  if (plVar4 == (long *)0x0) goto label_0407b618;
                  uVar17 = *(undefined8 *)(*plVar4 + 0x270);
                  pcVar5 = *(code **)(*plVar4 + 0x268);
                  *(undefined8 *)(puVar18 + -0x70) = 0x407b10f;
                  (*pcVar5)(plVar4,!bVar21,uVar17);
                }
                *(undefined8 *)(puVar18 + -0x48) = "";
                *(undefined8 *)(puVar18 + -0x70) = 0x407b12a;
                System_Text_StringBuilder__set_Length(__this_00,0,(MethodInfo *)0x0);
                pMVar19 = extraout_RDX_07;
                if (0 < ((*(System_Collections_Generic_Stack_object__o **)(puVar18 + -0x40))->fields)._size) {
                  *(undefined8 *)(puVar18 + -0x70) = 0x407b144;
                  pIVar13 = System_Collections_Generic_Stack_object___Peek
                                      (*(System_Collections_Generic_Stack_object__o **)(puVar18 + -0x40),
                                       MethodInfo_JSONNode_Peek);
                  *(Il2CppObject **)(puVar18 + -0x58) = pIVar13;
                  pMVar19 = extraout_RDX_08;
                }
                *(undefined8 *)(puVar18 + -0x50) = 0;
                goto switchD_0407ae72_caseD_1;
              }
              goto label_0407b61d;
            }
            goto label_0407b618;
          }
        }
      }
switchD_0407ae72_caseD_2:
      *(undefined8 *)(puVar18 + -0x70) = 0x407b39d;
      uVar10 = System_String__get_Chars((System_String_o *)__this_06,index_00,(MethodInfo *)0x0);
      if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
      *(undefined8 *)(puVar18 + -0x70) = 0x407b3b3;
      System_Text_StringBuilder__Append_3b048f0(__this_00,uVar10,(MethodInfo *)0x0);
      pMVar19 = extraout_RDX_13;
      bVar8 = bVar21;
switchD_0407ae72_caseD_1:
      bVar21 = bVar8;
      index_00 = index_00 + 1;
      if (*(int *)&(((SimpleJSONFixed_JSONLazyCreator_o *)__this_06)->fields).m_Node <= (int)index_00)
      goto label_0407b581;
      goto label_0407ae34;
    }
    *(undefined8 *)(puVar18 + -0x58) = 0;
    *(undefined8 *)(puVar18 + -0x60) = 0;
    *(undefined8 *)(puVar18 + -0x50) = 0;
    pMVar19 = extraout_RDX;
label_0407b581:
    if ((puVar18[-0x60] & 1) != 0) {
      *(undefined8 *)(puVar18 + -0x70) = 0x407b649;
      uVar17 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
      *(undefined8 *)(puVar18 + -0x70) = 0x407b651;
      __this_03 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar17);
      puVar20 = &"JSON Parse: Quotation marks seems to be messed up.";
      goto label_0407b65b;
    }
    pSVar16 = *(SimpleJSONFixed_JSONNode_o **)(puVar18 + -0x58);
    uVar6 = *(ulong *)(puVar18 + -0x50);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar18 + -0x70) = 0x407b5ae;
      il2cpp_runtime_helper_02337ed0();
      pMVar19 = extraout_RDX_23;
    }
    *(undefined8 *)(puVar18 + -0x70) = 0x407b5b8;
    bVar12 = SimpleJSONFixed_JSONNode__op_Equality(pSVar16,(Il2CppObject *)0x0,pMVar19);
    if ((char)bVar12 == '\0') {
      return;
    }
    if (__this_00 == (System_Text_StringBuilder_o *)0x0) goto label_0407b618;
    pMVar19 = (__this_00->klass->vtable)._3_ToString.method;
    pIVar7 = (__this_00->klass->vtable)._3_ToString.methodPtr;
    *(undefined8 *)(puVar18 + -0x70) = 0x407b5d4;
    __this_02 = (SimpleJSONFixed_JSONLazyCreator_o *)(*pIVar7)(__this_00,pMVar19);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar18 + -0x70) = 0x407b5e8;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_RBP = (MethodInfo *)(ulong)((byte)uVar6 & 1);
    unaff_R12 = *(undefined8 *)(puVar18 + -0x28);
    unaff_R13 = *(undefined8 *)(puVar18 + -0x20);
    unaff_R14 = *(undefined8 *)(puVar18 + -0x18);
    unaff_R15 = *(undefined8 *)(puVar18 + -0x10);
    *(undefined8 *)(puVar18 + -8) = *(undefined8 *)(puVar18 + -8);
    *(undefined8 *)(puVar18 + -0x10) = unaff_R14;
    *(undefined8 *)(puVar18 + -0x18) = *(undefined8 *)(puVar18 + -0x30);
    pMVar19 = unaff_RBP;
    __this_06 = (System_String_o **)__this_02;
    if (g_data_057ac350 == '\0') {
      *(undefined8 *)(puVar18 + -0x30) = 0x407aa32;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
      *(undefined8 *)(puVar18 + -0x30) = 0x407aa3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      *(undefined8 *)(puVar18 + -0x30) = 0x407aa4a;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNull);
      *(undefined8 *)(puVar18 + -0x30) = 0x407aa56;
      il2cpp_runtime_helper_023445d0(&"null");
      *(undefined8 *)(puVar18 + -0x30) = 0x407aa62;
      il2cpp_runtime_helper_023445d0(&"false");
      __this_06 = &"true";
      *(undefined8 *)(puVar18 + -0x30) = 0x407aa6e;
      il2cpp_runtime_helper_023445d0();
      g_data_057ac350 = '\x01';
    }
    *(undefined8 *)(puVar18 + -0x20) = 0;
    if ((uVar6 & 1) != 0) goto label_0407ab64;
    if (__this_02 != (SimpleJSONFixed_JSONLazyCreator_o *)0x0) break;
    *(undefined8 *)(puVar18 + -0x30) = 0x407acb3;
    il2cpp_runtime_helper_022b2c90();
    puVar18 = puVar18 + -0x28;
  } while( true );
  if (*(int *)&(__this_02->fields).m_Node < 6) {
    *(undefined8 *)(puVar18 + -0x30) = 0x407ab96;
    pSVar14 = System_String__ToLower((System_String_o *)__this_02,(MethodInfo *)0x0);
    *(undefined8 *)(puVar18 + -0x30) = 0x407abad;
    bVar12 = System_String__op_Equality(pSVar14,"false",(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
      *(undefined8 *)(puVar18 + -0x30) = 0x407abc5;
      bVar12 = System_String__op_Equality(pSVar14,"true",(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') {
        *(undefined8 *)(puVar18 + -0x30) = 0x407ac84;
        bVar12 = System_String__op_Equality(pSVar14,"null",(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          pMVar19 = TypeInfo_JSONNull;
          if (*(int *)((long)&TypeInfo_JSONNull[2].parameters + 4) == 0) {
            *(undefined8 *)(puVar18 + -0x30) = 0x407aca4;
            il2cpp_runtime_helper_02337ed0();
          }
          *(undefined8 *)(puVar18 + -0x30) = 0x407aca9;
          SimpleJSONFixed_JSONNull__CreateOrGet(pMVar19);
          return;
        }
        goto label_0407aa9a;
      }
    }
    *(undefined8 *)(puVar18 + -0x30) = 0x407abe1;
    bVar12 = System_String__op_Equality(pSVar14,"true",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar18 + -0x30) = 0x407abfb;
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ac349 == '\0') {
      *(undefined8 *)(puVar18 + -0x30) = 0x407ac10;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONBool);
      g_data_057ac349 = '\x01';
    }
    *(undefined8 *)(puVar18 + -0x30) = 0x407ac26;
    pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONBool);
    if (g_data_057ac393 == '\0') {
      *(undefined8 *)(puVar18 + -0x30) = 0x407ac3e;
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ac393 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      *(undefined8 *)(puVar18 + -0x30) = 0x407ac56;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar18 + -0x30) = 0x407ac60;
    System_Object___ctor(pIVar13,(MethodInfo *)0x0);
    *(char *)&pIVar13[1].klass = (char)bVar12;
  }
  else {
label_0407aa9a:
    if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
      *(undefined8 *)(puVar18 + -0x30) = 0x407aab2;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar18 + -0x30) = 0x407aab9;
    provider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
    pMVar19 = (MethodInfo *)&g_data_000000a7;
    *(undefined8 *)(puVar18 + -0x30) = 0x407aad1;
    bVar12 = System_Double__TryParse_3c9a570
                       ((System_String_o *)__this_02,0xa7,(System_IFormatProvider_o *)provider,
                        (double *)(puVar18 + -0x20),(MethodInfo *)0x0);
    if ((char)bVar12 == '\0') {
label_0407ab64:
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar18 + -0x30) = 0x407ab7c;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar18 + -0x30) = 0x407ab84;
      SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)__this_02,pMVar19);
    }
    else {
      pIVar2 = *(Il2CppClass **)(puVar18 + -0x20);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar18 + -0x30) = 0x407aaf6;
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ac33f == '\0') {
        *(undefined8 *)(puVar18 + -0x30) = 0x407ab0b;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNumber);
        g_data_057ac33f = '\x01';
      }
      *(undefined8 *)(puVar18 + -0x30) = 0x407ab21;
      pIVar13 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONNumber);
      if (g_data_057ac38e == '\0') {
        *(undefined8 *)(puVar18 + -0x30) = 0x407ab39;
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ac38e = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        *(undefined8 *)(puVar18 + -0x30) = 0x407ab51;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar18 + -0x30) = 0x407ab5b;
      System_Object___ctor(pIVar13,(MethodInfo *)0x0);
      pIVar13[1].klass = pIVar2;
    }
  }
  return;
}


