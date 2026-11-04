// Type: CustomLogic.CustomLogicStringBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicStringBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicStringBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicStringBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicStringBuiltin_o* CustomLogic_CustomLogicStringBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x1820ab0d0

CustomLogic_CustomLogicStringBuiltin_o *
CustomLogic_CustomLogicStringBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184346874 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin);
    Il2CppMethodInitialized_184346874 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin);
      if (Il2CppMethodInitialized_18434686c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_18434686c = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicStringBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicStringBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x1820b50d0

void CustomLogic_CustomLogicStringBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184346889 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346889 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicStringBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__FormatFloat>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFloat_b__3_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820aec80

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFloat_b__3_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t decimalPlaces;
  System_String_o *pSVar1;
  float num;
  
  if (Il2CppMethodInitialized_18434688a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434688a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    num = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (1 < (uint)__a->max_length) {
      decimalPlaces =
           CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__a->m_Items[1],
                      (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (Il2CppMethodInitialized_18434686e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
        Il2CppMethodInitialized_18434686e = '\x01';
      }
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      pSVar1 = Utility_Util__FormatFloat(num,decimalPlaces,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__FormatFromList>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFromList_b__4_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820aed80

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFromList_b__4_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *pSVar1;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *args;
  
  if (Il2CppMethodInitialized_18434688b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434688b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820aee67:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (1 < (uint)__a->max_length) {
      pCVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
      if (Il2CppMethodInitialized_18434686f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ToArray)
        ;
        Il2CppMethodInitialized_18434686f = '\x01';
      }
      if ((pCVar2 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
         (__this_00 = (pCVar2->fields).List, __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
        args = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                         ((System_Collections_Generic_List_T__o *)__this_00,
                          (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_object_ToArray);
        pSVar1 = System_String__Format_196ceb0(pSVar1,(System_Object_array *)args,(MethodInfo *)0x0);
        return (Il2CppObject *)pSVar1;
      }
      goto label_1820aee67;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Split>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Split_b__5_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b3050

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Split_b__5_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *obj;
  bool removeEmptyEntries;
  System_String_o *toSplit;
  CustomLogic_CustomLogicListBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_18434688c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434688c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    toSplit = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar2,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      pIVar2 = __a->m_Items[1];
      removeEmptyEntries = false;
      uVar1 = (uint)__a->max_length;
      if (2 < (int)uVar1) {
        if (uVar1 < 3) goto label_1820b3138;
        obj = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        removeEmptyEntries =
             CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (obj,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      }
      pCVar3 = CustomLogic_CustomLogicStringBuiltin__Split
                         (toSplit,pIVar2,removeEmptyEntries,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
label_1820b3138:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Join>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Join_b__6_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af970

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Join_b__6_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicListBuiltin_o *list;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434688d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434688d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    list = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicListBuiltin);
    if (1 < (uint)__a->max_length) {
      pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      pSVar1 = CustomLogic_CustomLogicStringBuiltin__Join(list,pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Substring>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Substring_b__7_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b32d0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Substring_b__7_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t startIndex;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434688e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434688e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820b337a:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (1 < (uint)__a->max_length) {
      startIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (__a->m_Items[1],
                              (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if (pSVar1 != (System_String_o *)0x0) {
        pSVar1 = System_String__Substring(pSVar1,startIndex,(MethodInfo *)0x0);
        return (Il2CppObject *)pSVar1;
      }
      goto label_1820b337a;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__SubstringWithLength>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__SubstringWithLength_b__8_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b3390

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__SubstringWithLength_b__8_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t startIndex;
  int32_t length;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434688f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434688f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (1 < (uint)__a->max_length) {
        startIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                               (__a->m_Items[1],
                                (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int
                               );
        if (2 < (uint)__a->max_length) {
          length = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                             (__a->m_Items[2],
                              (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
          if (pSVar1 != (System_String_o *)0x0) {
            pSVar1 = System_String__Substring_1972740(pSVar1,startIndex,length,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar1;
          }
          goto label_1820b3467;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820b3467:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Length>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Length_b__9_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820afbd0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Length_b__9_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_184346890 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346890 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (pSVar1 != (System_String_o *)0x0) {
      local_res18[0] = (pSVar1->fields)._stringLength;
      pIVar2 = il2cpp_value_box(g_data_184354e08,local_res18);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Replace>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Replace_b__10_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b2800

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Replace_b__10_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  System_String_o *oldValue;
  System_String_o *newValue;
  
  if (Il2CppMethodInitialized_184346891 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346891 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (1 < (uint)__a->max_length) {
        oldValue = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                             (__a->m_Items[1],
                              (MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (2 < (uint)__a->max_length) {
          newValue = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                               (__a->m_Items[2],
                                (MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
          if (pSVar1 != (System_String_o *)0x0) {
            pSVar1 = System_String__Replace_1970e80(pSVar1,oldValue,newValue,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar1;
          }
          goto label_1820b28cd;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820b28cd:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__11_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ae240

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__11_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *__this_00;
  System_String_o *value;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_184346892 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346892 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820ae2f5:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __this_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (__this_00 != (System_String_o *)0x0) {
        local_res18[0] = System_String__Contains(__this_00,value,(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
      goto label_1820ae2f5;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__StartsWith>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__StartsWith_b__12_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b3200

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__StartsWith_b__12_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *__this_00;
  System_String_o *value;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_184346893 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346893 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820b32b5:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __this_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (__this_00 != (System_String_o *)0x0) {
        local_res18[0] = System_String__StartsWith(__this_00,value,(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
      goto label_1820b32b5;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__EndsWith>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__EndsWith_b__13_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820ae590

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__EndsWith_b__13_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *__this_00;
  System_String_o *value;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_184346894 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346894 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820ae645:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __this_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (__this_00 != (System_String_o *)0x0) {
        local_res18[0] = System_String__EndsWith(__this_00,value,(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
        return pIVar1;
      }
      goto label_1820ae645;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Trim>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Trim_b__14_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b4660

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Trim_b__14_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346895 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346895 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__Trim(pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Insert>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Insert_b__15_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af380

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Insert_b__15_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t startIndex;
  System_String_o *pSVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184346896 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346896 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (1 < (uint)__a->max_length) {
        value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
        if (2 < (uint)__a->max_length) {
          startIndex = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                                 (__a->m_Items[2],
                                  (MethodInfo_66E9A0 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
          if (pSVar1 != (System_String_o *)0x0) {
            pSVar1 = System_String__Insert(pSVar1,startIndex,value,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar1;
          }
          goto label_1820af458;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_1820af458:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Capitalize>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Capitalize_b__16_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820adf50

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Capitalize_b__16_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346897 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346897 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (Il2CppMethodInitialized_184346872 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
        Il2CppMethodInitialized_184346872 = '\x01';
      }
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      pSVar1 = MiscExtensions__UpperFirstLetter(pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToUpper>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToUpper_b__17_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b4160

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToUpper_b__17_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346898 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346898 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToUpper(pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToLower>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToLower_b__18_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820b40a0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToLower_b__18_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346899 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184346899 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLower(pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__IndexOf>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__IndexOf_b__19_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820af2b0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__IndexOf_b__19_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *__this_00;
  System_String_o *value;
  Il2CppObject *pIVar1;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_18434689a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434689a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820af373:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    __this_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (__a->m_Items[1],
                         (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (__this_00 != (System_String_o *)0x0) {
        local_res18[0] = System_String__IndexOf_196de90(__this_00,value,4,(MethodInfo *)0x0);
        pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
        return pIVar1;
      }
      goto label_1820af373;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicStringBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x18208d770

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicStringBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Func_CustomLogicStringBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *__this_01;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_02;
  System_String_o *pSVar4;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_03;
  MethodInfo *lastManagedFrame;
  System_Func_CustomLogicStringBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_184346875 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"Newline");
    il2cpp_codegen_initialize_runtime_metadata(&"Insert");
    il2cpp_codegen_initialize_runtime_metadata(&"Replace");
    il2cpp_codegen_initialize_runtime_metadata(&"IndexOf");
    il2cpp_codegen_initialize_runtime_metadata(&"StartsWith");
    il2cpp_codegen_initialize_runtime_metadata(&"Length");
    il2cpp_codegen_initialize_runtime_metadata(&"FormatFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"Join");
    il2cpp_codegen_initialize_runtime_metadata(&"Split");
    il2cpp_codegen_initialize_runtime_metadata(&"Trim");
    il2cpp_codegen_initialize_runtime_metadata(&"Capitalize");
    il2cpp_codegen_initialize_runtime_metadata(&"ToUpper");
    il2cpp_codegen_initialize_runtime_metadata(&"EndsWith");
    il2cpp_codegen_initialize_runtime_metadata(&"SubstringWithLength");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"ToLower");
    il2cpp_codegen_initialize_runtime_metadata(&"Substring");
    il2cpp_codegen_initialize_runtime_metadata(&"FormatFromList");
    Il2CppMethodInitialized_184346875 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x669c4959) {
    if (uVar3 < 0x3002539a) {
      if (uVar3 < 0xf317949) {
        if (uVar3 == 0x9390c03) {
          bVar2 = System_String__op_Equality(name,"Capitalize",(MethodInfo *)0x0);
          if (!bVar2) goto label_18208ed19;
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346884 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Capitalize_b__16_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346884 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__16_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object
                             );
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Capitalize_b__16_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__16_0 =
               (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__16_0;
        }
        else {
          if (uVar3 != 0xf317948) goto label_18208ed19;
          bVar2 = System_String__op_Equality(name,"Insert",(MethodInfo *)0x0);
          if (!bVar2) goto label_18208ed19;
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346883 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Insert_b__15_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
            Il2CppMethodInitialized_184346883 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__15_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object
                             );
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Insert_b__15_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__15_0 =
               (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
          targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__15_0;
        }
      }
      else if (uVar3 == 0x16a15383) {
        bVar2 = System_String__op_Equality(name,"Split",(MethodInfo *)0x0);
        if (!bVar2) goto label_18208ed19;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346879 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Split_b__5_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346879 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__5_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Split_b__5_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__5_0 =
             (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__5_0;
      }
      else {
        if (uVar3 != 0x30025399) goto label_18208ed19;
        bVar2 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0);
        if (!bVar2) goto label_18208ed19;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434687a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Join_b__6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434687a = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__6_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Join_b__6_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__6_0 =
             (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__6_0;
      }
    }
    else if (uVar3 < 0x38e8329d) {
      if (uVar3 == 0x325686ab) {
        bVar2 = System_String__op_Equality(name,"Newline",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184346876 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings___CreatePropertyBinding__Newline_g____getter_2_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStringBuiltin_object);
            Il2CppMethodInitialized_184346876 = '\x01';
          }
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object);
          System_Func_object__object____ctor
                    ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings___CreatePropertyBinding__Newline_g____getter_2_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin);
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this_00,
                     (System_Action_T__object__o *)0x0,
                     (MethodInfo_12B8EE0 *)
                     MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)__this_01;
        }
label_18208ed19:
        pSVar4 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicStringBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar4 = System_String__Concat_1969b70(str0,name,pSVar4,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_03 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_03,pSVar4,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,lastManagedFrame);
      }
      if (uVar3 != 0x38e8329c) goto label_18208ed19;
      bVar2 = System_String__op_Equality(name,"SubstringWithLength",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208ed19;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434687c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__SubstringWithLength_b__8
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434687c = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__8_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__SubstringWithLength_b__8
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__8_0 =
           (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__8_0;
    }
    else if (uVar3 == 0x43415f31) {
      bVar2 = System_String__op_Equality(name,"ToLower",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208ed19;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346886 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToLower_b__18_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346886 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__18_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToLower_b__18_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__18_0 =
           (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__18_0;
    }
    else if (uVar3 == 0x5101d130) {
      bVar2 = System_String__op_Equality(name,"FormatFloat",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208ed19;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346877 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFloat_b__3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346877 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__3_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFloat_b__3_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__3_0 =
           (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__3_0;
    }
    else {
      if (uVar3 != 0x669c4958) goto label_18208ed19;
      bVar2 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208ed19;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434687f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Contains_b__11_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434687f = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__11_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Contains_b__11_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__11_0 =
           (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__11_0;
    }
  }
  else if (uVar3 < 0xc2b173c9) {
    if (uVar3 < 0xb4ede919) {
      if (uVar3 == 0xaadc121e) {
        bVar2 = System_String__op_Equality(name,"IndexOf",(MethodInfo *)0x0);
        if (!bVar2) goto label_18208ed19;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346887 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__IndexOf_b__19_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346887 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__19_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__IndexOf_b__19_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__19_0 =
             (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__19_0;
      }
      else {
        if (uVar3 != 0xb4ede918) goto label_18208ed19;
        bVar2 = System_String__op_Equality(name,"ToUpper",(MethodInfo *)0x0);
        if (!bVar2) goto label_18208ed19;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184346885 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToUpper_b__17_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
          Il2CppMethodInitialized_184346885 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__17_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
        if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToUpper_b__17_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__17_0 =
             (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__17_0;
      }
    }
    else if (uVar3 == 0xbbed73fc) {
      bVar2 = System_String__op_Equality(name,"StartsWith",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208ed19;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184346880 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__StartsWith_b__12_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        Il2CppMethodInitialized_184346880 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__12_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__StartsWith_b__12_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__12_0 =
           (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__12_0;
    }
    else {
      if (uVar3 != 0xc2b173c8) goto label_18208ed19;
      bVar2 = System_String__op_Equality(name,"Substring",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208ed19;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434687b == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Substring_b__7_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434687b = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__7_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Substring_b__7_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__7_0 =
           (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__7_0;
    }
  }
  else if (uVar3 < 0xe4d54f64) {
    if (uVar3 == 0xcc5e1935) {
      bVar2 = System_String__op_Equality(name,"Length",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208ed19;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434687d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Length_b__9_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434687d = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__9_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Length_b__9_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__9_0 =
           (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__9_0;
    }
    else {
      if (uVar3 != 0xe4d54f63) goto label_18208ed19;
      bVar2 = System_String__op_Equality(name,"Replace",(MethodInfo *)0x0);
      if (!bVar2) goto label_18208ed19;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434687e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Replace_b__10_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434687e = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__10_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
      if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Replace_b__10_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__10_0 =
           (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__10_0;
    }
  }
  else if (uVar3 == 0xf5c087e9) {
    bVar2 = System_String__op_Equality(name,"Trim",(MethodInfo *)0x0);
    if (!bVar2) goto label_18208ed19;
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_184346882 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Trim_b__14_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346882 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__14_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Trim_b__14_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__14_0;
  }
  else if (uVar3 == 0xfe1f90a3) {
    bVar2 = System_String__op_Equality(name,"EndsWith",(MethodInfo *)0x0);
    if (!bVar2) goto label_18208ed19;
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_184346881 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__EndsWith_b__13_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346881 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__13_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__EndsWith_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__13_0;
  }
  else {
    if (uVar3 != 0xfefe1622) goto label_18208ed19;
    bVar2 = System_String__op_Equality(name,"FormatFromList",(MethodInfo *)0x0);
    if (!bVar2) goto label_18208ed19;
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings)
      ;
    }
    if (Il2CppMethodInitialized_184346878 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFromList_b__4_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
      Il2CppMethodInitialized_184346878 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__4_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_18208ece5;
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFromList_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__4_0;
  }
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_18208ece5:
  __this_02 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_02,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_02;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreatePropertyBinding__Newline
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline (const MethodInfo* method);
// 0x182099de0

CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline(MethodInfo *method)

{
  System_Func_CustomLogicStringBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184346876 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings___CreatePropertyBinding__Newline_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicStringBuiltin_object);
    Il2CppMethodInitialized_184346876 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings___CreatePropertyBinding__Newline_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__FormatFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFloat (const MethodInfo* method);
// 0x182095930

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFloat(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346877 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFloat_b__3_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346877 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__3_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFloat_b__3_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__3_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__3_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__FormatFromList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFromList (const MethodInfo* method);
// 0x182095a50

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFromList(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346878 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFromList_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346878 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__4_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__FormatFromList_b__4_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__4_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__4_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Split
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Split (const MethodInfo* method);
// 0x182098cb0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Split(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346879 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Split_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346879 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__5_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Split_b__5_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__5_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__5_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Join
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Join (const MethodInfo* method);
// 0x182096a40

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Join(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434687a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Join_b__6_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434687a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__6_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Join_b__6_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__6_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__6_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Substring
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Substring (const MethodInfo* method);
// 0x182099130

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Substring(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434687b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Substring_b__7_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434687b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__7_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Substring_b__7_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__7_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__7_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__SubstringWithLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__SubstringWithLength (const MethodInfo* method);
// 0x182099010

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__SubstringWithLength(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434687c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__SubstringWithLength_b__8
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434687c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__8_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__SubstringWithLength_b__8
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__8_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__8_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Length
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Length (const MethodInfo* method);
// 0x182096b60

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Length(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434687d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Length_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434687d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Length_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Replace
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Replace (const MethodInfo* method);
// 0x1820985c0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Replace(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434687e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Replace_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434687e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Replace_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x182095120

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434687f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Contains_b__11_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434687f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Contains_b__11_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__StartsWith
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__StartsWith (const MethodInfo* method);
// 0x182098ef0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__StartsWith(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346880 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__StartsWith_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346880 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__StartsWith_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__EndsWith
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__EndsWith (const MethodInfo* method);
// 0x1820955b0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__EndsWith(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346881 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__EndsWith_b__13_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346881 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__EndsWith_b__13_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Trim
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Trim (const MethodInfo* method);
// 0x182099a40

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Trim(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346882 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Trim_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346882 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Trim_b__14_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Insert
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Insert (const MethodInfo* method);
// 0x182096010

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Insert(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346883 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Insert_b__15_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346883 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__15_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Insert_b__15_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__15_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__15_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Capitalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Capitalize (const MethodInfo* method);
// 0x182094db0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Capitalize(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346884 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Capitalize_b__16_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346884 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__16_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__Capitalize_b__16_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__16_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__16_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__ToUpper
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToUpper (const MethodInfo* method);
// 0x182099920

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToUpper(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToUpper_b__17_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346885 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__17_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToUpper_b__17_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__17_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__17_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__ToLower
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToLower (const MethodInfo* method);
// 0x1820996d0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToLower(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToLower_b__18_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346886 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__18_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__ToLower_b__18_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__18_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__18_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__IndexOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__IndexOf (const MethodInfo* method);
// 0x182095ee0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__IndexOf(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184346887 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__IndexOf_b__19_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    Il2CppMethodInitialized_184346887 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__19_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicStringBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c___CreateMethodBinding__IndexOf_b__19_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__19_0 =
         (System_Func_CustomLogicStringBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings_c->static_fields->__9__19_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicStringBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x182099fc0

void CustomLogic_CustomLogicStringBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184346888 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"Newline");
    il2cpp_codegen_initialize_runtime_metadata(&"Insert");
    il2cpp_codegen_initialize_runtime_metadata(&"Replace");
    il2cpp_codegen_initialize_runtime_metadata(&"IndexOf");
    il2cpp_codegen_initialize_runtime_metadata(&"StartsWith");
    il2cpp_codegen_initialize_runtime_metadata(&"Length");
    il2cpp_codegen_initialize_runtime_metadata(&"FormatFloat");
    il2cpp_codegen_initialize_runtime_metadata(&"Join");
    il2cpp_codegen_initialize_runtime_metadata(&"Split");
    il2cpp_codegen_initialize_runtime_metadata(&"Trim");
    il2cpp_codegen_initialize_runtime_metadata(&"Capitalize");
    il2cpp_codegen_initialize_runtime_metadata(&"ToUpper");
    il2cpp_codegen_initialize_runtime_metadata(&"EndsWith");
    il2cpp_codegen_initialize_runtime_metadata(&"SubstringWithLength");
    il2cpp_codegen_initialize_runtime_metadata(&"Contains");
    il2cpp_codegen_initialize_runtime_metadata(&"ToLower");
    il2cpp_codegen_initialize_runtime_metadata(&"Substring");
    il2cpp_codegen_initialize_runtime_metadata(&"FormatFromList");
    Il2CppMethodInitialized_184346888 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Newline",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FormatFloat",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FormatFromList",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Split",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Join",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Substring",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SubstringWithLength",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Length",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Replace",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Contains",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StartsWith",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"EndsWith",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Trim",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Insert",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Capitalize",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToUpper",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ToLower",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IndexOf",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicStringBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$<__CreatePropertyBinding__Newline>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings_____CreatePropertyBinding__Newline_g____getter_2_0 (CustomLogic_CustomLogicStringBuiltin_o* __i, const MethodInfo* method);
// 0x182094060

Il2CppObject*
CustomLogic_CustomLogicStringBuiltin_Bindings_____CreatePropertyBinding__Newline_g____getter_2_0(CustomLogic_CustomLogicStringBuiltin_o* __i, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18434686d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_18434686d = '\x01';
  }
  return "\n";
}


// CustomLogic.CustomLogicStringBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin___ctor (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x1820aaf20

void CustomLogic_CustomLogicStringBuiltin___ctor
               (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434686c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_18434686c = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicStringBuiltin$$get_Newline
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__get_Newline (const MethodInfo* method);
// 0x182094060

System_String_o * CustomLogic_CustomLogicStringBuiltin__get_Newline(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434686d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    Il2CppMethodInitialized_18434686d = '\x01';
  }
  return "\n";
}


// CustomLogic.CustomLogicStringBuiltin$$FormatFloat
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__FormatFloat (float val, int32_t decimals, const MethodInfo* method);
// 0x1820aa6a0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__FormatFloat(float val,int32_t decimals,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434686e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_18434686e = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  pSVar1 = Utility_Util__FormatFloat(val,decimals,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$FormatFromList
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__FormatFromList (System_String_o* str, CustomLogic_CustomLogicListBuiltin_o* list, const MethodInfo* method);
// 0x1820aa700

System_String_o *
CustomLogic_CustomLogicStringBuiltin__FormatFromList
          (System_String_o *str,CustomLogic_CustomLogicListBuiltin_o *list,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *args;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434686f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ToArray);
    Il2CppMethodInitialized_18434686f = '\x01';
  }
  if ((list != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this = (list->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0)) {
    args = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                     ((System_Collections_Generic_List_T__o *)__this,
                      (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_object_ToArray);
    pSVar1 = System_String__Format_196ceb0(str,(System_Object_array *)args,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$Split
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicStringBuiltin__Split (System_String_o* toSplit, Il2CppObject* splitter, bool removeEmptyEntries, const MethodInfo* method);
// 0x1820aaa20
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820aab2e: nop 
// asm:   0x1820aad7e: nop 

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicStringBuiltin__Split
          (System_String_o *toSplit,Il2CppObject *splitter,bool removeEmptyEntries,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  uint16_t separator;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_String_o *value;
  uint uVar8;
  uint uVar9;
  
  uVar8 = (uint)removeEmptyEntries;
  if (Il2CppMethodInitialized_184346870 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184346870 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this,(MethodInfo *)0x0);
  if (splitter != (Il2CppObject *)0x0) {
    pSVar7 = (System_String_o *)0x0;
    if (splitter->klass == g_data_184354e50) {
      pSVar7 = (System_String_o *)splitter;
    }
    if (pSVar7 == (System_String_o *)0x0) {
      bVar2 = (TypeInfo_CustomLogic_CustomLogicListBuiltin->_2).typeHierarchyDepth;
      if (((splitter->klass->_2).typeHierarchyDepth < bVar2) ||
         ((splitter->klass->_2).typeHierarchy[(ulonglong)bVar2 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin)) {
        il2cpp_codegen_raise_invalid_cast_exception(splitter);
      }
      if (splitter[3].klass != (Il2CppClass *)0x0) {
        pSVar6 = (System_String_array *)
                 SZArrayNew(TypeInfo_string_array,*(uint32_t *)&((splitter[3].klass)->_1).namespaze);
        uVar9 = 0;
        while (splitter[3].klass != (Il2CppClass *)0x0) {
          if (*(int *)&((splitter[3].klass)->_1).namespaze <= (int)uVar9) {
            if ((toSplit != (System_String_o *)0x0) &&
               (pSVar6 = System_String__Split_1971fe0(toSplit,pSVar6,uVar8,(MethodInfo *)0x0),
               pSVar6 != (System_String_array *)0x0)) {
              uVar8 = 0;
              goto label_1820aabe0;
            }
            break;
          }
          if ((splitter[3].klass == (Il2CppClass *)0x0) ||
             (pSVar7 = (System_String_o *)
                       System_Collections_Generic_List_object___System_Collections_IList_get_Item
                                 ((System_Collections_Generic_List_object__o *)splitter[3].klass,uVar9,
                                  (MethodInfo_92B830 *)
                                  MethodInfo_System_Collections_Generic_List_object_get_Item),
             pSVar6 == (System_String_array *)0x0)) break;
          value = (System_String_o *)0x0;
          if (pSVar7 != (System_String_o *)0x0) {
            if ((Il2CppClass *)pSVar7->klass == g_data_184354e50) {
              value = pSVar7;
            }
            if (value == (System_String_o *)0x0) {
              il2cpp_codegen_raise_invalid_cast_exception(pSVar7,g_data_184354e50);
            }
          }
          if ((uint)pSVar6->max_length <= uVar9) goto label_1820aae4b;
          pSVar6->m_Items[(int)uVar9] = value;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar9,value);
          uVar9 = uVar9 + 1;
        }
      }
    }
    else if ((pSVar7->fields)._stringLength == 1) {
      separator = System_String__get_Chars(pSVar7,0,(MethodInfo *)0x0);
      if ((toSplit != (System_String_o *)0x0) &&
         (pSVar6 = System_String__Split(toSplit,separator,uVar8,(MethodInfo *)0x0),
         pSVar6 != (System_String_array *)0x0)) {
        uVar8 = 0;
        while( true ) {
          pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add;
          if ((int)pSVar6->max_length <= (int)uVar8) {
            return __this;
          }
          if ((uint)pSVar6->max_length <= uVar8) break;
          if ((__this == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
             (pSVar3 = (__this->fields).List, pSVar3 == (System_Collections_Generic_List_object__o *)0x0))
          goto label_1820aae30;
          pSVar4 = (pSVar3->fields)._items;
          pSVar7 = pSVar6->m_Items[(int)uVar8];
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          if (pSVar4 == (System_Object_array *)0x0) goto label_1820aae30;
          uVar9 = (pSVar3->fields)._size;
          if (uVar9 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar9 + 1;
            if ((uint)pSVar4->max_length <= uVar9) break;
            pSVar4->m_Items[(int)uVar9] = (Il2CppObject *)pSVar7;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar9,pSVar7);
            uVar8 = uVar8 + 1;
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar3,(Il2CppObject *)pSVar7,
                       (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
            uVar8 = uVar8 + 1;
          }
        }
        goto label_1820aae4b;
      }
    }
    else if ((toSplit != (System_String_o *)0x0) &&
            (pSVar6 = System_String__Split_1972090(toSplit,pSVar7,uVar8,(MethodInfo *)0x0),
            pSVar6 != (System_String_array *)0x0)) {
      uVar8 = 0;
      while( true ) {
        pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add;
        if ((int)pSVar6->max_length <= (int)uVar8) {
          return __this;
        }
        if ((uint)pSVar6->max_length <= uVar8) break;
        if ((__this == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
           (pSVar3 = (__this->fields).List, pSVar3 == (System_Collections_Generic_List_object__o *)0x0))
        goto label_1820aae30;
        pSVar4 = (pSVar3->fields)._items;
        pSVar7 = pSVar6->m_Items[(int)uVar8];
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        if (pSVar4 == (System_Object_array *)0x0) goto label_1820aae30;
        uVar9 = (pSVar3->fields)._size;
        if (uVar9 < (uint)pSVar4->max_length) {
          (pSVar3->fields)._size = uVar9 + 1;
          if ((uint)pSVar4->max_length <= uVar9) break;
          pSVar4->m_Items[(int)uVar9] = (Il2CppObject *)pSVar7;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar9,pSVar7);
          uVar8 = uVar8 + 1;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar3,(Il2CppObject *)pSVar7,(MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method)
          ;
          uVar8 = uVar8 + 1;
        }
      }
label_1820aae4b:
      ThrowIndexOutOfRangeException();
    }
  }
label_1820aae30:
  ThrowNullReferenceException();
label_1820aabe0:
  pMVar5 = MethodInfo_System_Collections_Generic_List_object_Add;
  if ((int)pSVar6->max_length <= (int)uVar8) {
    return __this;
  }
  if ((uint)pSVar6->max_length <= uVar8) goto label_1820aae4b;
  if ((__this == (CustomLogic_CustomLogicListBuiltin_o *)0x0) ||
     (pSVar3 = (__this->fields).List, pSVar3 == (System_Collections_Generic_List_object__o *)0x0))
  goto label_1820aae30;
  pSVar4 = (pSVar3->fields)._items;
  pSVar7 = pSVar6->m_Items[(int)uVar8];
  piVar1 = &(pSVar3->fields)._version;
  *piVar1 = *piVar1 + 1;
  if (pSVar4 == (System_Object_array *)0x0) goto label_1820aae30;
  uVar9 = (pSVar3->fields)._size;
  if (uVar9 < (uint)pSVar4->max_length) {
    (pSVar3->fields)._size = uVar9 + 1;
    if ((uint)pSVar4->max_length <= uVar9) goto label_1820aae4b;
    pSVar4->m_Items[(int)uVar9] = (Il2CppObject *)pSVar7;
    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar9,pSVar7);
    uVar8 = uVar8 + 1;
  }
  else {
    System_Collections_Generic_List_object___AddWithResize
              (pSVar3,(Il2CppObject *)pSVar7,(MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
    uVar8 = uVar8 + 1;
  }
  goto label_1820aabe0;
}


// CustomLogic.CustomLogicStringBuiltin$$Join
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Join (CustomLogic_CustomLogicListBuiltin_o* list, System_String_o* separator, const MethodInfo* method);
// 0x1820aa7d0
// eh: try 0x1820aa8e0..0x1820aa9f3 -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820aa8dc: nop dword ptr [rax]
// asm:   0x1820aa983: mov rdx, qword ptr [rip + 0x1fe44fe]  ; MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose
// asm:   0x1820aa98a: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1820aa98f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1820aa994: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x1820aa999: test rcx, rcx
// asm:   0x1820aa99c: jne 0x1820aa9f3
// asm:   0x1820aa99e: mov rsi, qword ptr [rsp + 0x78]
// asm:   0x1820aa9a3: mov rdi, qword ptr [rsp + 0x70]
// asm:   0x1820aa9f3: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Join
          (CustomLogic_CustomLogicListBuiltin_o *list,System_String_o *separator,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_String_array *pSVar3;
  MethodInfo *pMVar4;
  bool bVar5;
  System_Collections_Generic_List_string__o *__this_00;
  System_String_o *pSVar6;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  undefined1 local_40 [16];
  Il2CppObject *local_30;
  undefined1 local_28 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_20;
  Il2CppObject *local_18;
  
  if (Il2CppMethodInitialized_184346871 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_object_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_184346871 = '\x01';
  }
  local_28 = (undefined1  [8])0x0;
  pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_18 = (Il2CppObject *)0x0;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((list != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this = (list->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_40,
               (System_Collections_Generic_List_T__o *)__this,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_object_GetEnumerator);
    local_28 = (undefined1  [8])local_40._0_8_;
    pUStack_20 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_40._8_8_;
    local_18 = local_30;
    local_40._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_40._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28;
    while( true ) {
      bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_28,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_object_MoveNext);
      if (!bVar5) break;
      pSVar6 = CustomLogic_CustomLogicConvertBuiltin__ToString(local_18,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_string_Add;
      if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
        ThrowNullReferenceException();
      }
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) {
          ThrowIndexOutOfRangeException();
        }
        pSVar3->m_Items[(int)uVar2] = pSVar6;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,pSVar6);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pSVar6,
                   (MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method);
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_28,
               MethodInfo_System_Collections_Generic_List_Enumerator_object_Dispose);
    if (__this_00 != (System_Collections_Generic_List_string__o *)0x0) {
      value = System_Collections_Generic_List_object___ToArray
                        ((System_Collections_Generic_List_T__o *)__this_00,
                         (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      pSVar6 = System_String__Join(separator,(System_String_array *)value,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$Substring
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Substring (System_String_o* str, int32_t startIndex, const MethodInfo* method);
// 0x1820aaea0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Substring(System_String_o *str,int32_t startIndex,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__Substring(str,startIndex,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$SubstringWithLength
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__SubstringWithLength (System_String_o* str, int32_t startIndex, int32_t length, const MethodInfo* method);
// 0x1820aae80

System_String_o *
CustomLogic_CustomLogicStringBuiltin__SubstringWithLength
          (System_String_o *str,int32_t startIndex,int32_t length,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__Substring_1972740(str,startIndex,length,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$Length
// il2cpp: int32_t CustomLogic_CustomLogicStringBuiltin__Length (System_String_o* str, const MethodInfo* method);
// 0x1820aaa00

int32_t CustomLogic_CustomLogicStringBuiltin__Length(System_String_o *str,MethodInfo *method)

{
  if (str != (System_String_o *)0x0) {
    return (str->fields)._stringLength;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$Replace
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Replace (System_String_o* str, System_String_o* replace, System_String_o* with, const MethodInfo* method);
// 0x181c52e10

System_String_o*
CustomLogic_CustomLogicStringBuiltin__Replace(System_String_o* str, System_String_o* replace, System_String_o* with, MethodInfo* method)

{
  System_String_o *pSVar1;
  
  if (s != (System_String_o *)0x0) {
    pSVar1 = System_String__Replace_1970e80(s,oldValue,newValue,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__Contains (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x1820aa660

bool CustomLogic_CustomLogicStringBuiltin__Contains
               (System_String_o *str,System_String_o *match,MethodInfo *method)

{
  bool bVar1;
  
  if (str != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(str,match,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$StartsWith
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__StartsWith (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x1820aae60

bool CustomLogic_CustomLogicStringBuiltin__StartsWith
               (System_String_o *str,System_String_o *match,MethodInfo *method)

{
  bool bVar1;
  
  if (str != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(str,match,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$EndsWith
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__EndsWith (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x1820aa680

bool CustomLogic_CustomLogicStringBuiltin__EndsWith
               (System_String_o *str,System_String_o *match,MethodInfo *method)

{
  bool bVar1;
  
  if (str != (System_String_o *)0x0) {
    bVar1 = System_String__EndsWith(str,match,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$Trim
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Trim (System_String_o* str, const MethodInfo* method);
// 0x1820aaf00

System_String_o * CustomLogic_CustomLogicStringBuiltin__Trim(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__Trim(str,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$Insert
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Insert (System_String_o* str, System_String_o* insert, int32_t index, const MethodInfo* method);
// 0x1820aa7a0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Insert
          (System_String_o *str,System_String_o *insert,int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__Insert(str,index,insert,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$Capitalize
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Capitalize (System_String_o* str, const MethodInfo* method);
// 0x1820aa610

System_String_o * CustomLogic_CustomLogicStringBuiltin__Capitalize(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184346872 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    Il2CppMethodInitialized_184346872 = '\x01';
  }
  if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
  }
  pSVar1 = MiscExtensions__UpperFirstLetter(str,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$ToUpper
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__ToUpper (System_String_o* str, const MethodInfo* method);
// 0x1820aaee0

System_String_o * CustomLogic_CustomLogicStringBuiltin__ToUpper(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__ToUpper(str,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$ToLower
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__ToLower (System_String_o* str, const MethodInfo* method);
// 0x1820aaec0

System_String_o * CustomLogic_CustomLogicStringBuiltin__ToLower(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLower(str,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$IndexOf
// il2cpp: int32_t CustomLogic_CustomLogicStringBuiltin__IndexOf (System_String_o* str, System_String_o* substring, const MethodInfo* method);
// 0x1820aa770

int32_t CustomLogic_CustomLogicStringBuiltin__IndexOf
                  (System_String_o *str,System_String_o *substring,MethodInfo *method)

{
  int32_t iVar1;
  
  if (str != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf_196de90(str,substring,4,(MethodInfo *)0x0);
    return iVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicStringBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__get_ClassName (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x1820aaf70

System_String_o *
CustomLogic_CustomLogicStringBuiltin__get_ClassName
          (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184346873 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"String");
    Il2CppMethodInitialized_184346873 = '\x01';
  }
  return "String";
}


// CustomLogic.CustomLogicStringBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_IsAbstract (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicStringBuiltin__get_IsAbstract(CustomLogic_CustomLogicStringBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicStringBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_IsStatic (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicStringBuiltin__get_IsStatic(CustomLogic_CustomLogicStringBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicStringBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicStringBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicStringBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


