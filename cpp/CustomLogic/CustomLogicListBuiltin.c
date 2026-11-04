// Type: CustomLogic.CustomLogicListBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicListBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicListBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicListBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181ed8b20

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppObject *item;
  MethodInfo *pMVar4;
  CustomLogic_CustomLogicListBuiltin_o *pCVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  uint uVar7;
  
  if (Il2CppMethodInitialized_1843451ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    Il2CppMethodInitialized_1843451ae = '\x01';
  }
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
      CustomLogic_CustomLogicListBuiltin___ctor(pCVar5,(MethodInfo *)0x0);
      return pCVar5;
    }
    pCVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    if (Il2CppMethodInitialized_184345199 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
      Il2CppMethodInitialized_184345199 = '\x01';
    }
    pSVar6 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)pSVar6,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_object_ctor);
    (pCVar5->fields).List = pSVar6;
    Il2CppCodeGenWriteBarrier(&(pCVar5->fields).List,pSVar6);
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)pCVar5,(MethodInfo *)0x0);
    uVar7 = 0;
    do {
      pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
      if ((int)args->max_length <= (int)uVar7) {
        return pCVar5;
      }
      if ((uint)args->max_length <= uVar7) {
label_181ed8ccb:
        ThrowIndexOutOfRangeException();
      }
      pSVar6 = (pCVar5->fields).List;
      if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) break;
      pSVar3 = (pSVar6->fields)._items;
      item = args->m_Items[(int)uVar7];
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      if (pSVar3 == (System_Object_array *)0x0) break;
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar6->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) goto label_181ed8ccb;
        pSVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
        uVar7 = uVar7 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar6,item,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        uVar7 = uVar7 + 1;
      }
    } while( true );
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181ee3c50

void CustomLogic_CustomLogicListBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843451c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451c2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicListBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181eded60

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_object__o *pSVar2;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434519c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Clear);
      Il2CppMethodInitialized_18434519c = '\x01';
    }
    if ((__c->fields)._isReadOnly != false) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
      System_Exception___ctor_1b6abf0(__this_00,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Clear);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    pSVar2 = (__c->fields).List;
    if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
      length = (pSVar2->fields)._size;
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edf810

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  int32_t index;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843451c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451c3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar1,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_18434519d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_object_get_Count);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_object_get_Item);
        Il2CppMethodInitialized_18434519d = '\x01';
      }
      __this_00 = (__c->fields).List;
      if (index < 0) {
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181edf8e1;
        index = index + (__this_00->fields)._size;
      }
      else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181edf8e1;
      pIVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         (__this_00,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      return pIVar1;
    }
  }
label_181edf8e1:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee1a90

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_object__o *__this_00;
  int32_t index;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843451c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451c4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_181ee1b85;
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar1,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        pIVar1 = __a->m_Items[1];
        if (Il2CppMethodInitialized_18434519e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_object_get_Count);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_object_set_Item);
          Il2CppMethodInitialized_18434519e = '\x01';
        }
        if ((__c->fields)._isReadOnly != false) {
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
          System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
          lastManagedFrame =
               il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Set);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
        }
        __this_00 = (__c->fields).List;
        if (index < 0) {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181ee1b85;
          index = index + (__this_00->fields)._size;
        }
        else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181ee1b85;
        System_Collections_Generic_List_object___set_Item
                  (__this_00,index,pIVar1,
                   (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_object_set_Item);
        return (Il2CppObject *)0x0;
      }
label_181ee1b85:
      ThrowNullReferenceException();
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Add_b__6_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ede6f0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Add_b__6_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      CustomLogic_CustomLogicListBuiltin__Add(__c,__a->m_Items[0],(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__InsertAt>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__InsertAt_b__7_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edfa80

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__InsertAt_b__7_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  System_Collections_Generic_List_object__o *__this_00;
  int32_t index;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843451c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451c5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_181edfb75;
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (pIVar1,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        pIVar1 = __a->m_Items[1];
        if (Il2CppMethodInitialized_1843451a0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_object_Insert);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Collections_Generic_List_object_get_Count);
          Il2CppMethodInitialized_1843451a0 = '\x01';
        }
        if ((__c->fields)._isReadOnly != false) {
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
          System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
          lastManagedFrame =
               il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_InsertAt);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
        }
        __this_00 = (__c->fields).List;
        if (index < 0) {
          if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181edfb75;
          index = index + (__this_00->fields)._size;
        }
        else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181edfb75;
        System_Collections_Generic_List_object___Insert
                  (__this_00,index,pIVar1,
                   (MethodInfo_945FE0 *)MethodInfo_System_Collections_Generic_List_object_Insert);
        return (Il2CppObject *)0x0;
      }
label_181edfb75:
      ThrowNullReferenceException();
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveAt>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__RemoveAt_b__8_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee1410

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__RemoveAt_b__8_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_List_object__o *__this_00;
  int32_t index;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843451c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451c6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                      (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843451a1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_object_RemoveAt);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_object_get_Count);
        Il2CppMethodInitialized_1843451a1 = '\x01';
      }
      if ((__c->fields)._isReadOnly != false) {
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
        System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_RemoveAt);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
      __this_00 = (__c->fields).List;
      if (index < 0) {
        if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181ee14ea;
        index = index + (__this_00->fields)._size;
      }
      else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181ee14ea;
      System_Collections_Generic_List_object___RemoveAt
                (__this_00,index,
                 (MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_object_RemoveAt);
      return (Il2CppObject *)0x0;
    }
  }
label_181ee14ea:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__9_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee1630

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__9_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *item;
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      item = __a->m_Items[0];
      if (Il2CppMethodInitialized_1843451a2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Remove);
        Il2CppMethodInitialized_1843451a2 = '\x01';
      }
      if ((__c->fields)._isReadOnly != false) {
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
        System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Remove);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
      __this_00 = (__c->fields).List;
      if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
        System_Collections_Generic_List_object___Remove
                  (__this_00,item,
                   (MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_object_Remove);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__10_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edeea0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__10_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *object;
  System_Func_object__bool__o *__this_00;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pIVar1 = __a->m_Items[0];
      if (Il2CppMethodInitialized_1843451a3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_bool);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0_Contains_b__0);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0);
        Il2CppMethodInitialized_1843451a3 = '\x01';
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *)0x0) {
        (object->fields).value = pIVar1;
        Il2CppCodeGenWriteBarrier(&(object->fields).value,pIVar1);
        source = (__c->fields).List;
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_bool);
        System_Func_object__bool____ctor
                  ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0_Contains_b__0,
                   (MethodInfo_B61EB0 *)0x0);
        local_res18[0] =
             System_Linq_Enumerable__Any_object__6b6920
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)__this_00,
                        (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_object);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sort>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Sort_b__11_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2330

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Sort_b__11_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843451a4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Sort);
      Il2CppMethodInitialized_1843451a4 = '\x01';
    }
    if ((__c->fields)._isReadOnly != false) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
      System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Sort);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
    }
    __this_00 = (__c->fields).List;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Sort
                (__this_00,(MethodInfo_948480 *)MethodInfo_System_Collections_Generic_List_object_Sort);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__SortCustom>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__SortCustom_b__12_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2190

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__SortCustom_b__12_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_UserMethod_o *value;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *object;
  UnityEngine_Rendering_DynamicArray_SortComparer_T__o *__this_01;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843451c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451c7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843451a5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_System_Collections_Generic_List_object_Sort_40c5748);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0_SortCustom_b__0);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0);
        Il2CppMethodInitialized_1843451a5 = '\x01';
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *)0x0) {
        (object->fields).method = value;
        Il2CppCodeGenWriteBarrier(&(object->fields).method,value);
        if ((__c->fields)._isReadOnly != false) {
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
          System_Exception___ctor_1b6abf0(__this_02,message,(MethodInfo *)0x0);
          lastManagedFrame =
               il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_SortCustom);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
        }
        __this_00 = (__c->fields).List;
        __this_01 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_object);
        System_Comparison_object____ctor
                  (__this_01,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0_SortCustom_b__0
                   ,(MethodInfo_C980B0 *)0x0);
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          System_Collections_Generic_List_object___Sort_949260
                    (__this_00,(System_Comparison_T__o *)__this_01,
                     (MethodInfo_949260 *)MethodInfo_System_Collections_Generic_List_object_Sort_40c5748);
          return (Il2CppObject *)0x0;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Filter>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Filter_b__13_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edf490

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Filter_b__13_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_List_object__o *source;
  CustomLogic_UserMethod_o *value;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *object;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Func_object__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *value_00;
  
  if (Il2CppMethodInitialized_1843451c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451c8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843451a6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_bool);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0_Filter_b__0);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0);
        Il2CppMethodInitialized_1843451a6 = '\x01';
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *)0x0) {
        (object->fields).method = value;
        Il2CppCodeGenWriteBarrier(&(object->fields).method,value);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
        CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
        source = (__c->fields).List;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_bool);
        System_Func_object__bool____ctor
                  ((System_Predicate_object__o *)__this_01,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0_Filter_b__0,
                   (MethodInfo_B61EB0 *)0x0);
        source_00 = System_Linq_Enumerable__Where_float_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (System_Func_TSource__bool__o *)__this_01,
                               (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_object);
        value_00 = System_Linq_Enumerable__ToList_object_
                             (source_00,(MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_object);
        if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          (__this_00->fields).List = (System_Collections_Generic_List_object__o *)value_00;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).List,value_00);
          return (Il2CppObject *)__this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Map>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Map_b__14_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee0940

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Map_b__14_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_List_object__o *source;
  CustomLogic_UserMethod_o *value;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *object;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Func_object__object__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *value_00;
  
  if (Il2CppMethodInitialized_1843451c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451c9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843451a7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_object_object);
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0_Map_b__0);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0);
        Il2CppMethodInitialized_1843451a7 = '\x01';
      }
      object = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
      if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *)0x0) {
        (object->fields).method = value;
        Il2CppCodeGenWriteBarrier(&(object->fields).method,value);
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
        CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
        source = (__c->fields).List;
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,(Il2CppObject *)object
                   ,(intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0_Map_b__0,
                   (MethodInfo_16E67D0 *)0x0);
        source_00 = System_Linq_Enumerable__Select_Vector3__object_
                              ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                               (System_Func_TSource__TResult__o *)__this_01,
                               (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_object_object);
        value_00 = System_Linq_Enumerable__ToList_object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                              (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_object);
        if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
          (__this_00->fields).List = (System_Collections_Generic_List_object__o *)value_00;
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).List,value_00);
          return (Il2CppObject *)__this_00;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reduce>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Reduce_b__15_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee11a0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Reduce_b__15_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_UserMethod_o *value;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_00;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843451ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843451ca = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181ee1300:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar1,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        pIVar1 = __a->m_Items[1];
        if (Il2CppMethodInitialized_1843451a8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_System_Linq_Enumerable_Aggregate_object_object);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_object_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0_Reduce_b__0);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0);
          Il2CppMethodInitialized_1843451a8 = '\x01';
        }
        object = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
        if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *)0x0) {
          (object->fields).method = value;
          Il2CppCodeGenWriteBarrier(&(object->fields).method,value);
          source = (__c->fields).List;
          __this_00 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_object_object);
          System_Func_object__object__object____ctor
                    (__this_00,(Il2CppObject *)object,
                     (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0_Reduce_b__0,
                     (MethodInfo *)0x0);
          pIVar1 = System_Linq_Enumerable__Aggregate_object__object_
                             ((System_Collections_Generic_IEnumerable_TSource__o *)source,pIVar1,
                              (System_Func_TAccumulate__TSource__TAccumulate__o *)__this_00,
                              (MethodInfo_6B5840 *)MethodInfo_System_Linq_Enumerable_Aggregate_object_object);
          return pIVar1;
        }
      }
      goto label_181ee1300;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Randomize>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Randomize_b__16_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee1050

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Randomize_b__16_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *object;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Random_o *__this_01;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_02;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *value;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843451a9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_object_int);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_int);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0_Randomize_b__0);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0);
      Il2CppMethodInitialized_1843451a9 = '\x01';
    }
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
    System_Random___ctor(__this_01,(MethodInfo *)0x0);
    if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *)0x0) {
      (object->fields).r = __this_01;
      Il2CppCodeGenWriteBarrier(&(object->fields).r,__this_01);
      source = (__c->fields).List;
      __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_int);
      System_Func_object__int____ctor
                (__this_02,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0_Randomize_b__0,
                 (MethodInfo_AF4D50 *)0x0);
      source_00 = System_Linq_Enumerable__OrderBy_object__int_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                             (System_Func_TSource__TKey__o *)__this_02,
                             (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_object_int);
      value = System_Linq_Enumerable__ToList_object_
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                         (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_object);
      if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        (__this_00->fields).List = (System_Collections_Generic_List_object__o *)value;
        Il2CppCodeGenWriteBarrier(&(__this_00->fields).List,value);
        return (Il2CppObject *)__this_00;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToSet>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__ToSet_b__17_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181ee2430

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__ToSet_b__17_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicListBuiltin__ToSet(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Copy>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Copy_b__18_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181edf0d0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Copy_b__18_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,CustomLogic_CustomLogicListBuiltin_o *__c
          ,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Collections_Generic_List_TSource__o *value;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843451ab == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
      Il2CppMethodInitialized_1843451ab = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
    value = System_Linq_Enumerable__ToList_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)(__c->fields).List,
                       (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_object);
    if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_00->fields).List = (System_Collections_Generic_List_object__o *)value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).List,value);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicListBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181ebb010

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicListBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Func_CustomLogicListBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *__this_01;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_02;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_03;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicListBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_1843451af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"Filter");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Count");
    il2cpp_codegen_initialize_runtime_metadata(&"Sort");
    il2cpp_codegen_initialize_runtime_metadata(&"Randomize");
    il2cpp_codegen_initialize_runtime_metadata(&"SortCustom");
    il2cpp_codegen_initialize_runtime_metadata(&"Reduce");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"InsertAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    il2cpp_codegen_initialize_runtime_metadata(&"ToSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    Il2CppMethodInitialized_1843451af = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x658f3665) {
    if (uVar3 < 0x28b19ea4) {
      if (uVar3 < 0xbd14ccd) {
        if (uVar3 == 0x4a57fc2) {
          bVar2 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ebc483;
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843451b1 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843451b1 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__3_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__3_0 =
               (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__3_0;
        }
        else {
          if (uVar3 != 0xbd14ccc) goto label_181ebc483;
          bVar2 = System_String__op_Equality(name,"ToSet",(MethodInfo *)0x0);
          if (!bVar2) goto label_181ebc483;
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843451bf == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__ToSet_b__17_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843451bf = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__17_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
          if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__ToSet_b__17_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__17_0 =
               (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__17_0;
        }
      }
      else if (uVar3 == 0x21a5901d) {
        bVar2 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebc483;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451b7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Remove_b__9_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451b7 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__9_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Remove_b__9_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__9_0 =
             (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__9_0;
      }
      else {
        if (uVar3 != 0x28b19ea3) goto label_181ebc483;
        bVar2 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebc483;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451b3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451b3 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__5_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0,
                   (MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__5_0 =
             (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__5_0;
      }
    }
    else if (uVar3 < 0x486bbbe1) {
      if (uVar3 == 0x44a7f051) {
        bVar2 = System_String__op_Equality(name,"Map",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebc483;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451bc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Map_b__14_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451bc = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__14_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Map_b__14_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__14_0 =
             (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__14_0;
      }
      else {
        if (uVar3 != 0x486bbbe0) goto label_181ebc483;
        bVar2 = System_String__op_Equality(name,"RemoveAt",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebc483;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451b6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__RemoveAt_b__8_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451b6 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__8_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__RemoveAt_b__8_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__8_0 =
             (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__8_0;
      }
    }
    else if (uVar3 == 0x4b0b408d) {
      bVar2 = System_String__op_Equality(name,"InsertAt",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebc483;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843451b5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__InsertAt_b__7_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451b5 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__7_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__InsertAt_b__7_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__7_0 =
           (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__7_0;
    }
    else {
      if (uVar3 != 0x658f3664) goto label_181ebc483;
      bVar2 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebc483;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843451c0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Copy_b__18_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451c0 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__18_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Copy_b__18_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__18_0 =
           (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__18_0;
    }
  }
  else if (uVar3 < 0x9dc3aa15) {
    if (uVar3 < 0x8459a7f2) {
      if (uVar3 == 0x669c4958) {
        bVar2 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebc483;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451b8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Contains_b__10_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451b8 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__10_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Contains_b__10_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__10_0 =
             (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__10_0;
      }
      else {
        if (uVar3 != 0x8459a7f1) goto label_181ebc483;
        bVar2 = System_String__op_Equality(name,"Sort",(MethodInfo *)0x0);
        if (!bVar2) goto label_181ebc483;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451b9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Sort_b__11_0
                    );
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843451b9 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__11_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Sort_b__11_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__11_0 =
             (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__11_0;
      }
    }
    else if (uVar3 == 0x9450dd5c) {
      bVar2 = System_String__op_Equality(name,"Randomize",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebc483;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843451be == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Randomize_b__16_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451be = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__16_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Randomize_b__16_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__16_0 =
           (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__16_0;
    }
    else {
      if (uVar3 != 0x9dc3aa14) goto label_181ebc483;
      bVar2 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebc483;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843451b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Add_b__6_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451b4 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__6_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Add_b__6_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__6_0 =
           (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__6_0;
    }
  }
  else if (uVar3 < 0xb6973ef8) {
    if (uVar3 == 0xa42c4e6a) {
      bVar2 = System_String__op_Equality(name,"SortCustom",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebc483;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843451ba == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__SortCustom_b__12_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451ba = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__12_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__SortCustom_b__12_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__12_0 =
           (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__12_0;
    }
    else {
      if (uVar3 != 0xb6973ef7) goto label_181ebc483;
      bVar2 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
      if (!bVar2) goto label_181ebc483;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings)
        ;
      }
      if (Il2CppMethodInitialized_1843451b2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843451b2 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__4_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
      if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0,
                 (MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__4_0 =
           (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__4_0;
    }
  }
  else if (uVar3 == 0xbd680907) {
    bVar2 = System_String__op_Equality(name,"Reduce",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ebc483;
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843451bd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Reduce_b__15_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      Il2CppMethodInitialized_1843451bd = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__15_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Reduce_b__15_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__15_0;
  }
  else {
    if (uVar3 == 0xe1e7b894) {
      bVar2 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843451b0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicListBuiltin_object);
          Il2CppMethodInitialized_1843451b0 = '\x01';
        }
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object);
        System_Func_object__object____ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin);
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this_00,
                   (System_Action_T__object__o *)0x0,
                   (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin_ctor)
        ;
        return (CustomLogic_ICLMemberBinding_o *)__this_01;
      }
label_181ebc483:
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicListBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_03 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_03,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,lastManagedFrame);
    }
    if (uVar3 != 0xf4a9c097) goto label_181ebc483;
    bVar2 = System_String__op_Equality(name,"Filter",(MethodInfo *)0x0);
    if (!bVar2) goto label_181ebc483;
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843451bb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin)
      ;
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Filter_b__13_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
      Il2CppMethodInitialized_1843451bb = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__13_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181ebc44f;
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Filter_b__13_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__13_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_181ebc44f:
  __this_02 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_02,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_02;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x181ecaa60

CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_CustomLogicListBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843451b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicListBuiltin_object);
    Il2CppMethodInitialized_1843451b0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings___CreatePropertyBinding__Count_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicListBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x181ec4dd0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451b1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Clear_b__3_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x181ec5b60

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451b2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Get_b__4_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x181ec7f60

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451b3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Set_b__5_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Add
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Add (const MethodInfo* method);
// 0x181ec4710

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Add(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Add_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451b4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Add_b__6_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__InsertAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__InsertAt (const MethodInfo* method);
// 0x181ec5ec0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__InsertAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__InsertAt_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451b5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__InsertAt_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__RemoveAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__RemoveAt (const MethodInfo* method);
// 0x181ec7780

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__RemoveAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__RemoveAt_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451b6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__RemoveAt_b__8_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x181ec79c0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Remove_b__9_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451b7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Remove_b__9_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x181ec5250

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Contains_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451b8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Contains_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Sort
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Sort (const MethodInfo* method);
// 0x181ec8740

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Sort(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Sort_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451b9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Sort_b__11_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__SortCustom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__SortCustom (const MethodInfo* method);
// 0x181ec8620

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__SortCustom(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__SortCustom_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451ba = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__SortCustom_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Filter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Filter (const MethodInfo* method);
// 0x181ec5800

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Filter(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Filter_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451bb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Filter_b__13_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Map
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Map (const MethodInfo* method);
// 0x181ec6d60

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Map(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Map_b__14_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451bc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Map_b__14_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Reduce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Reduce (const MethodInfo* method);
// 0x181ec7540

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Reduce(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Reduce_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451bd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Reduce_b__15_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Randomize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Randomize (const MethodInfo* method);
// 0x181ec7420

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Randomize(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Randomize_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451be = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Randomize_b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__ToSet
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__ToSet (const MethodInfo* method);
// 0x181ec8aa0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__ToSet(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__ToSet_b__17_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451bf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__ToSet_b__17_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__17_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Copy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Copy (const MethodInfo* method);
// 0x181ec5370

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Copy(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843451c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Copy_b__18_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843451c0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__18_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c)
      ;
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicListBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c___CreateMethodBinding__Copy_b__18_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicListBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings_c->static_fields->__9__18_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicListBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181ecbf50

void CustomLogic_CustomLogicListBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843451c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Remove");
    il2cpp_codegen_initialize_runtime_metadata(&"Add");
    il2cpp_codegen_initialize_runtime_metadata(&"Filter");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Count");
    il2cpp_codegen_initialize_runtime_metadata(&"Sort");
    il2cpp_codegen_initialize_runtime_metadata(&"Randomize");
    il2cpp_codegen_initialize_runtime_metadata(&"SortCustom");
    il2cpp_codegen_initialize_runtime_metadata(&"Reduce");
    il2cpp_codegen_initialize_runtime_metadata(&"Copy");
    il2cpp_codegen_initialize_runtime_metadata(&"InsertAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Set");
    il2cpp_codegen_initialize_runtime_metadata(&"Map");
    il2cpp_codegen_initialize_runtime_metadata(&"ToSet");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"Get");
    Il2CppMethodInitialized_1843451c1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Count",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Clear",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Get",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Set",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Add",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"InsertAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Remove",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Contains",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Sort",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SortCustom",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Filter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Map",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reduce",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Randomize",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToSet",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Copy",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicListBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3950

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0
          (CustomLogic_CustomLogicListBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434519b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count)
      ;
      Il2CppMethodInitialized_18434519b = '\x01';
    }
    pSVar1 = (__i->fields).List;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      local_res8[0] = (pSVar1->fields)._size;
      pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass14_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___ctor(CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass14_0$$<Contains>b__0
// il2cpp: bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___Contains_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x181ee34c0

bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___Contains_b__0
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *__this,Il2CppObject *e,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843451cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_1843451cb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar1 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (__this_00,e,(__this->fields).value,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass16_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___ctor(CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass16_0$$<SortCustom>b__0
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___SortCustom_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x181ee3540

int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___SortCustom_b__0
                  (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *__this,Il2CppObject *a,
                  Il2CppObject *b,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  int32_t *piVar2;
  
  if (Il2CppMethodInitialized_1843451cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843451cc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  userMethod = (__this->fields).method;
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameterValues == (System_Object_array *)0x0) {
label_181ee3675:
    ThrowNullReferenceException();
  }
  if (a != (Il2CppObject *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst(a,(((parameterValues->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = a;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items,a);
    if (b != (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst(b,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[1] = b;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1,b);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                           (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        if (pIVar1 != (Il2CppObject *)0x0) {
          if ((pIVar1->klass->_1).element_class == *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
            piVar2 = il2cpp_object_unbox(pIVar1);
            return *piVar2;
          }
          il2cpp_codegen_raise_invalid_cast_exception(pIVar1,g_data_184354e08);
        }
      }
      goto label_181ee3675;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass17_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___ctor(CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass17_0$$<Filter>b__0
// il2cpp: bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___Filter_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x181ee36b0

bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___Filter_b__0
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *__this,Il2CppObject *e,
               MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  undefined1 *puVar2;
  
  if (Il2CppMethodInitialized_1843451cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843451cd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  userMethod = (__this->fields).method;
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameterValues != (System_Object_array *)0x0) {
    if (e != (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst(e,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = e;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items,e);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                         (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      if (pIVar1 != (Il2CppObject *)0x0) {
        if ((pIVar1->klass->_1).element_class == *(Il2CppClass **)(g_data_184354de8 + 0x40)) {
          puVar2 = il2cpp_object_unbox(pIVar1);
          return (bool)*puVar2;
        }
        il2cpp_codegen_raise_invalid_cast_exception(pIVar1,g_data_184354de8);
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass18_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___ctor(CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass18_0$$<Map>b__0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___Map_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x181ee37d0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___Map_b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *__this,Il2CppObject *e,
          MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843451ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843451ce = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  userMethod = (__this->fields).method;
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameterValues != (System_Object_array *)0x0) {
    if (e != (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst(e,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = e;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items,e);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                         (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass19_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___ctor(CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass19_0$$<Reduce>b__0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___Reduce_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o* __this, Il2CppObject* acc, Il2CppObject* e, const MethodInfo* method);
// 0x181ee38c0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___Reduce_b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *__this,Il2CppObject *acc,
          Il2CppObject *e,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843451cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_1843451cf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  userMethod = (__this->fields).method;
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
  if (parameterValues == (System_Object_array *)0x0) {
label_181ee39c9:
    ThrowNullReferenceException();
  }
  if (acc != (Il2CppObject *)0x0) {
    pIVar1 = il2cpp_vm_Object_IsInst(acc,(((parameterValues->obj).klass)->_1).element_class);
    if (pIVar1 == (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
      il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
    }
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = acc;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items,acc);
    if (e != (Il2CppObject *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst(e,(((parameterValues->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if (1 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[1] = e;
      Il2CppCodeGenWriteBarrier(parameterValues->m_Items + 1,e);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar1 = CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                           (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return pIVar1;
      }
      goto label_181ee39c9;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass20_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___ctor(CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass20_0$$<Randomize>b__0
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___Randomize_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o* __this, Il2CppObject* x, const MethodInfo* method);
// 0x181c702c0

int32_t
CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___Randomize_b__0(CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o* __this, Il2CppObject* x, MethodInfo* method)

{
  System_Linq_Expressions_Expression_o *pSVar1;
  System_Type_o *pSVar2;
  
  pSVar1 = (__this->fields).r;
  if (pSVar1 != (System_Linq_Expressions_Expression_o *)0x0) {
    pSVar2 = (*(pSVar1->klass->vtable)._5_get_Type.methodPtr)
                       (pSVar1,(pSVar1->klass->vtable)._5_get_Type.method);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x181ed1950

void CustomLogic_CustomLogicListBuiltin___ctor
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (Il2CppMethodInitialized_184345198 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    Il2CppMethodInitialized_184345198 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  (__this->fields).List = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields).List,__this_00);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, System_Object_array* parameterValues, const MethodInfo* method);
// 0x181ed1720
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ed17cf: nop 

void CustomLogic_CustomLogicListBuiltin___ctor_1ed1720
               (CustomLogic_CustomLogicListBuiltin_o *__this,System_Object_array *parameterValues,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  Il2CppObject *item;
  MethodInfo *pMVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184345199 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    Il2CppMethodInitialized_184345199 = '\x01';
  }
  pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar5,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  (__this->fields).List = pSVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).List,pSVar5);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (parameterValues != (System_Object_array *)0x0) {
    uVar6 = 0;
    do {
      pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
      if ((int)parameterValues->max_length <= (int)uVar6) {
        return;
      }
      if ((uint)parameterValues->max_length <= uVar6) {
label_181ed1857:
        ThrowIndexOutOfRangeException();
      }
      pSVar5 = (__this->fields).List;
      if (pSVar5 == (System_Collections_Generic_List_object__o *)0x0) break;
      pSVar3 = (pSVar5->fields)._items;
      item = parameterValues->m_Items[(int)uVar6];
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      if (pSVar3 == (System_Object_array *)0x0) break;
      uVar2 = (pSVar5->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar5->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) goto label_181ed1857;
        pSVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,item);
        uVar6 = uVar6 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar5,item,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
        uVar6 = uVar6 + 1;
      }
    } while( true );
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, System_Collections_Generic_IEnumerable_object__o* enumerable, bool isReadOnly, const MethodInfo* method);
// 0x181ed1870

void CustomLogic_CustomLogicListBuiltin___ctor_1ed1870
               (CustomLogic_CustomLogicListBuiltin_o *__this,
               System_Collections_Generic_IEnumerable_object__o *enumerable,bool isReadOnly,MethodInfo *method
               )

{
  System_Collections_Generic_List_object__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434519a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_ctor_40c4be8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    Il2CppMethodInitialized_18434519a = '\x01';
  }
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar1,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  (__this->fields).List = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).List,pSVar1);
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pSVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor_94fb10
            (pSVar1,(System_Collections_Generic_IEnumerable_T__o *)enumerable,
             (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_object_ctor_40c4be8);
  (__this->fields).List = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).List,pSVar1);
  (__this->fields)._isReadOnly = isReadOnly;
  return;
}


// CustomLogic.CustomLogicListBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin__get_Count (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x181ed1a20

int32_t CustomLogic_CustomLogicListBuiltin__get_Count
                  (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434519b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    Il2CppMethodInitialized_18434519b = '\x01';
  }
  pSVar1 = (__this->fields).List;
  if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
    return (pSVar1->fields)._size;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Clear (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x181ed07f0

void CustomLogic_CustomLogicListBuiltin__Clear
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_object__o *pSVar2;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_18434519c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Clear);
    Il2CppMethodInitialized_18434519c = '\x01';
  }
  if ((__this->fields)._isReadOnly != false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor_1b6abf0(__this_00,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Clear);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  pSVar2 = (__this->fields).List;
  if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  length = (pSVar2->fields)._size;
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  (pSVar2->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicListBuiltin$$Get
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin__Get (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x181ed0b50

Il2CppObject *
CustomLogic_CustomLogicListBuiltin__Get
          (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_18434519d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    Il2CppMethodInitialized_18434519d = '\x01';
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_181ed0bb6:
      ThrowNullReferenceException();
    }
    index = index + (__this_00->fields)._size;
  }
  else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181ed0bb6;
  pIVar1 = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                     (__this_00,index,
                      (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
  return pIVar1;
}


// CustomLogic.CustomLogicListBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Set (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, Il2CppObject* value, const MethodInfo* method);
// 0x181ed1150

void CustomLogic_CustomLogicListBuiltin__Set
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,Il2CppObject *value,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_18434519e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_set_Item);
    Il2CppMethodInitialized_18434519e = '\x01';
  }
  if ((__this->fields)._isReadOnly != false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Set)
    ;
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_181ed1215:
      ThrowNullReferenceException();
    }
    index = index + (__this_00->fields)._size;
  }
  else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181ed1215;
  System_Collections_Generic_List_object___set_Item
            (__this_00,index,value,
             (MethodInfo_950000 *)MethodInfo_System_Collections_Generic_List_object_set_Item);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$Add
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Add (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x181ed0740

void CustomLogic_CustomLogicListBuiltin__Add
               (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_18434519f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_18434519f = '\x01';
  }
  if ((__this->fields)._isReadOnly == false) {
    pSVar1 = (__this->fields).List;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_180012890(pSVar1,value,MethodInfo_System_Collections_Generic_List_object_Add);
      return;
    }
    ThrowNullReferenceException();
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
  System_Exception___ctor_1b6abf0(__this_00,message,(MethodInfo *)0x0);
  lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Add);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicListBuiltin$$InsertAt
// il2cpp: void CustomLogic_CustomLogicListBuiltin__InsertAt (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, Il2CppObject* value, const MethodInfo* method);
// 0x181ed0bc0

void CustomLogic_CustomLogicListBuiltin__InsertAt
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,Il2CppObject *value,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843451a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Insert);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    Il2CppMethodInitialized_1843451a0 = '\x01';
  }
  if ((__this->fields)._isReadOnly != false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_InsertAt);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_181ed0c85:
      ThrowNullReferenceException();
    }
    index = index + (__this_00->fields)._size;
  }
  else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181ed0c85;
  System_Collections_Generic_List_object___Insert
            (__this_00,index,value,
             (MethodInfo_945FE0 *)MethodInfo_System_Collections_Generic_List_object_Insert);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$RemoveAt
// il2cpp: void CustomLogic_CustomLogicListBuiltin__RemoveAt (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x181ed0fe0

void CustomLogic_CustomLogicListBuiltin__RemoveAt
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843451a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    Il2CppMethodInitialized_1843451a1 = '\x01';
  }
  if ((__this->fields)._isReadOnly != false) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_RemoveAt);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
label_181ed1095:
      ThrowNullReferenceException();
    }
    index = index + (__this_00->fields)._size;
  }
  else if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_181ed1095;
  System_Collections_Generic_List_object___RemoveAt
            (__this_00,index,(MethodInfo_947010 *)MethodInfo_System_Collections_Generic_List_object_RemoveAt);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Remove (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x181ed10a0

void CustomLogic_CustomLogicListBuiltin__Remove
               (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843451a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Remove);
    Il2CppMethodInitialized_1843451a2 = '\x01';
  }
  if ((__this->fields)._isReadOnly == false) {
    __this_00 = (__this->fields).List;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Remove
                (__this_00,value,(MethodInfo_947340 *)MethodInfo_System_Collections_Generic_List_object_Remove
                );
      return;
    }
    ThrowNullReferenceException();
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
  System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Remove);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicListBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__Contains (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x181ed08a0

bool CustomLogic_CustomLogicListBuiltin__Contains
               (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  bool bVar1;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *object;
  System_Func_object__bool__o *__this_00;
  
  if (Il2CppMethodInitialized_1843451a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0_Contains_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0);
    Il2CppMethodInitialized_1843451a3 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *)0x0) {
    (object->fields).value = value;
    Il2CppCodeGenWriteBarrier(&(object->fields).value,value);
    source = (__this->fields).List;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass14_0_Contains_b__0,
               (MethodInfo_B61EB0 *)0x0);
    bVar1 = System_Linq_Enumerable__Any_object__6b6920
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                       (System_Func_TSource__bool__o *)__this_00,
                       (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_object);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Sort
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Sort (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x181ed1350

void CustomLogic_CustomLogicListBuiltin__Sort(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843451a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Sort);
    Il2CppMethodInitialized_1843451a4 = '\x01';
  }
  if ((__this->fields)._isReadOnly == false) {
    __this_00 = (__this->fields).List;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Sort
                (__this_00,(MethodInfo_948480 *)MethodInfo_System_Collections_Generic_List_object_Sort);
      return;
    }
    ThrowNullReferenceException();
  }
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
  System_Exception___ctor_1b6abf0(__this_01,message,(MethodInfo *)0x0);
  lastManagedFrame = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_Sort);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
}


// CustomLogic.CustomLogicListBuiltin$$SortCustom
// il2cpp: void CustomLogic_CustomLogicListBuiltin__SortCustom (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x181ed1220

void CustomLogic_CustomLogicListBuiltin__SortCustom
               (CustomLogic_CustomLogicListBuiltin_o *__this,CustomLogic_UserMethod_o *method,
               MethodInfo *methodInfo)

{
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *object;
  UnityEngine_Rendering_DynamicArray_SortComparer_T__o *__this_01;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_1843451a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_Sort_40c5748);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0_SortCustom_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0);
    Il2CppMethodInitialized_1843451a5 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *)0x0) {
    (object->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(object->fields).method,method);
    if ((__this->fields)._isReadOnly != false) {
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      message = il2cpp_codegen_get_runtime_metadata(&"Cannot modify a read-only list.");
      System_Exception___ctor_1b6abf0(__this_02,message,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicListBuiltin_SortCustom);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
    }
    __this_00 = (__this->fields).List;
    __this_01 = (UnityEngine_Rendering_DynamicArray_SortComparer_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_object);
    System_Comparison_object____ctor
              (__this_01,(Il2CppObject *)object,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass16_0_SortCustom_b__0,
               (MethodInfo_C980B0 *)0x0);
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___Sort_949260
                (__this_00,(System_Comparison_T__o *)__this_01,
                 (MethodInfo_949260 *)MethodInfo_System_Collections_Generic_List_object_Sort_40c5748);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Filter
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Filter (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x181ed0a10

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Filter
          (CustomLogic_CustomLogicListBuiltin_o *__this,CustomLogic_UserMethod_o *method,
          MethodInfo *methodInfo)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *object;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Func_object__bool__o *__this_01;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *value;
  
  if (Il2CppMethodInitialized_1843451a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0_Filter_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0);
    Il2CppMethodInitialized_1843451a6 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *)0x0) {
    (object->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(object->fields).method,method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
    source = (__this->fields).List;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this_01,(Il2CppObject *)object,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass17_0_Filter_b__0,
               (MethodInfo_B61EB0 *)0x0);
    source_00 = System_Linq_Enumerable__Where_float_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__bool__o *)__this_01,
                           (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_object);
    value = System_Linq_Enumerable__ToList_object_
                      (source_00,(MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_object);
    if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_00->fields).List = (System_Collections_Generic_List_object__o *)value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).List,value);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Map
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Map (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x181ed0c90

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Map
          (CustomLogic_CustomLogicListBuiltin_o *__this,CustomLogic_UserMethod_o *method,
          MethodInfo *methodInfo)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *object;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Func_object__object__o *__this_01;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *value;
  
  if (Il2CppMethodInitialized_1843451a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_object_object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0_Map_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0);
    Il2CppMethodInitialized_1843451a7 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *)0x0) {
    (object->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(object->fields).method,method);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
    source = (__this->fields).List;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_object);
    System_Func_object__object____ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_01,(Il2CppObject *)object,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass18_0_Map_b__0,
               (MethodInfo_16E67D0 *)0x0);
    source_00 = System_Linq_Enumerable__Select_Vector3__object_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TResult__o *)__this_01,
                           (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_object_object);
    value = System_Linq_Enumerable__ToList_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                       (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_object);
    if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_00->fields).List = (System_Collections_Generic_List_object__o *)value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).List,value);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Reduce
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin__Reduce (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, Il2CppObject* initialValue, const MethodInfo* method);
// 0x181ed0f10

Il2CppObject *
CustomLogic_CustomLogicListBuiltin__Reduce
          (CustomLogic_CustomLogicListBuiltin_o *__this,CustomLogic_UserMethod_o *method,
          Il2CppObject *initialValue,MethodInfo *methodInfo)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this_00;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843451a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Aggregate_object_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_object_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0_Reduce_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0);
    Il2CppMethodInitialized_1843451a8 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *)0x0) {
    (object->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(object->fields).method,method);
    source = (__this->fields).List;
    __this_00 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_object_object);
    System_Func_object__object__object____ctor
              (__this_00,(Il2CppObject *)object,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass19_0_Reduce_b__0,
               (MethodInfo *)0x0);
    pIVar1 = System_Linq_Enumerable__Aggregate_object__object_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,initialValue,
                        (System_Func_TAccumulate__TSource__TAccumulate__o *)__this_00,
                        (MethodInfo_6B5840 *)MethodInfo_System_Linq_Enumerable_Aggregate_object_object);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Randomize
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Randomize (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x181ed0dd0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Randomize(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *object;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Random_o *__this_01;
  Newtonsoft_Json_Serialization_ObjectConstructor_T__o *__this_02;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *value;
  
  if (Il2CppMethodInitialized_1843451a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_OrderBy_object_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_object_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Random);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0_Randomize_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0);
    Il2CppMethodInitialized_1843451a9 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Random);
  System_Random___ctor(__this_01,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *)0x0) {
    (object->fields).r = __this_01;
    Il2CppCodeGenWriteBarrier(&(object->fields).r,__this_01);
    source = (__this->fields).List;
    __this_02 = (Newtonsoft_Json_Serialization_ObjectConstructor_T__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_object_int);
    System_Func_object__int____ctor
              (__this_02,(Il2CppObject *)object,
               (intptr_t)MethodInfo_CustomLogic_CustomLogicListBuiltin_c__DisplayClass20_0_Randomize_b__0,
               (MethodInfo_AF4D50 *)0x0);
    source_00 = System_Linq_Enumerable__OrderBy_object__int_
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                           (System_Func_TSource__TKey__o *)__this_02,
                           (MethodInfo_6C12E0 *)MethodInfo_System_Linq_Enumerable_OrderBy_object_int);
    value = System_Linq_Enumerable__ToList_object_
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,
                       (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_object);
    if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_00->fields).List = (System_Collections_Generic_List_object__o *)value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).List,value);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$ToSet
// il2cpp: CustomLogic_CustomLogicSetBuiltin_o* CustomLogic_CustomLogicListBuiltin__ToSet (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x181ed13f0
// eh: try 0x181ed14d0..0x181ed1557 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 20 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ed14c9: nop dword ptr [rax]
// asm:   0x181ed1517: mov rdx, qword ptr [rip + 0x21bd96a]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x181ed151e: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181ed1523: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x181ed1528: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181ed152d: test rcx, rcx
// asm:   0x181ed1530: jne 0x181ed1557
// asm:   0x181ed1532: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x181ed1557: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

CustomLogic_CustomLogicSetBuiltin_o *
CustomLogic_CustomLogicListBuiltin__ToSet(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  bool bVar1;
  CustomLogic_CustomLogicSetBuiltin_o *__this_02;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  System_Collections_Generic_List_Enumerator_object__o local_28;
  
  if (Il2CppMethodInitialized_1843451aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSetBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    Il2CppMethodInitialized_1843451aa = '\x01';
  }
  local_28.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_28.fields._index = 0;
  local_28.fields._version = 0;
  local_28.fields._current = (Il2CppObject *)0x0;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicSetBuiltin);
  CustomLogic_CustomLogicSetBuiltin___ctor(__this_02,(MethodInfo *)0x0);
  __this_00 = (__this->fields).List;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this_00,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    local_28.fields._list = (System_Collections_Generic_List_T__o *)local_40._0_8_;
    local_28.fields._index = local_40._8_4_;
    local_28.fields._version = local_40._12_4_;
    local_28.fields._current = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = &local_28;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        (&local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
      if (!bVar1) {
        System_Collections_Generic_List_Enumerator_object___Dispose
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_28,
                   MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
        return __this_02;
      }
      if (__this_02 == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) break;
      __this_01 = (__this_02->fields).Set;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
        ThrowNullReferenceException();
      }
      System_Collections_Generic_HashSet_object___Add
                (__this_01,local_28.fields._current,
                 (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_object_Add);
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$Copy
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Copy (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x181ed0980

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Copy(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Collections_Generic_List_TSource__o *value;
  
  if (Il2CppMethodInitialized_1843451ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToList_object);
    Il2CppMethodInitialized_1843451ab = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  value = System_Linq_Enumerable__ToList_object_
                    ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).List,
                     (MethodInfo_6C9C10 *)MethodInfo_System_Linq_Enumerable_ToList_object);
  if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    (__this_00->fields).List = (System_Collections_Generic_List_object__o *)value;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).List,value);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicListBuiltin__ToString (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x181ed1560
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181ed161b: nop dword ptr [rax + rax]
// asm:   0x181ed16da: jmp 0x181ed1620

System_String_o *
CustomLogic_CustomLogicListBuiltin__ToString(CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  System_Text_StringBuilder_o *__this_00;
  System_String_o *pSVar2;
  Il2CppObject *value;
  System_String_o *str1;
  int index;
  
  if (Il2CppMethodInitialized_1843451ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&", ");
    il2cpp_codegen_initialize_runtime_metadata(&"\"");
    il2cpp_codegen_initialize_runtime_metadata(&"[");
    il2cpp_codegen_initialize_runtime_metadata(&"]");
    Il2CppMethodInitialized_1843451ac = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    System_Text_StringBuilder__Append_197dca0(__this_00,"[",(MethodInfo *)0x0);
    index = 0;
    pSVar1 = (__this->fields).List;
    while (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      if ((pSVar1->fields)._size <= index) {
        System_Text_StringBuilder__Append_197dca0(__this_00,"]",(MethodInfo *)0x0);
        pSVar2 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                           (__this_00,(__this_00->klass->vtable)._3_ToString.method);
        return pSVar2;
      }
      pSVar1 = (__this->fields).List;
      if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) break;
      pSVar2 = (System_String_o *)
               System_Collections_Generic_List_object___System_Collections_IList_get_Item
                         (pSVar1,index,
                          (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
      if (pSVar2 == (System_String_o *)0x0) {
label_181ed1680:
        pSVar1 = (__this->fields).List;
        if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) break;
        value = System_Collections_Generic_List_object___System_Collections_IList_get_Item
                          (pSVar1,index,
                           (MethodInfo_92B830 *)MethodInfo_System_Collections_Generic_List_object_get_Item);
        System_Text_StringBuilder__Append_197de50(__this_00,value,(MethodInfo *)0x0);
      }
      else {
        str1 = (System_String_o *)0x0;
        if ((Il2CppClass *)pSVar2->klass == g_data_184354e50) {
          str1 = pSVar2;
        }
        if (str1 == (System_String_o *)0x0) goto label_181ed1680;
        pSVar2 = System_String__Concat_1969b70
                           ("\"",str1,"\"",(MethodInfo *)0x0);
        System_Text_StringBuilder__Append_197dca0(__this_00,pSVar2,(MethodInfo *)0x0);
      }
      pSVar1 = (__this->fields).List;
      if (pSVar1 == (System_Collections_Generic_List_object__o *)0x0) break;
      if (index != (pSVar1->fields)._size + -1) {
        System_Text_StringBuilder__Append_197dca0(__this_00,", ",(MethodInfo *)0x0);
      }
      index = index + 1;
      pSVar1 = (__this->fields).List;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicListBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicListBuiltin__get_ClassName (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x181ed19f0

System_String_o *
CustomLogic_CustomLogicListBuiltin__get_ClassName
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843451ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"List");
    Il2CppMethodInitialized_1843451ad = '\x01';
  }
  return "List";
}


// CustomLogic.CustomLogicListBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_IsAbstract (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicListBuiltin__get_IsAbstract(CustomLogic_CustomLogicListBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicListBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_IsStatic (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicListBuiltin__get_IsStatic(CustomLogic_CustomLogicListBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicListBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicListBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicListBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


