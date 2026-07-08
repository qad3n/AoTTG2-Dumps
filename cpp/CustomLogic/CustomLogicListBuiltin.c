// Type: CustomLogic.CustomLogicListBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicListBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicListBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicListBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3dbc260

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  il2cpp_array_size_t iVar1;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  undefined1 auVar2 [16];
  
  if (DAT_05702845 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    DAT_05702845 = '\x01';
  }
  if (args != (System_Object_array *)0x0) {
    iVar1 = args->max_length;
    auVar2 = il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    __this = auVar2._0_8_;
    if (iVar1 == 0) {
      CustomLogic_CustomLogicListBuiltin___ctor(__this,method);
    }
    else {
      CustomLogic_CustomLogicListBuiltin___ctor(__this,args,auVar2._8_8_);
    }
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3dbe250

void CustomLogic_CustomLogicListBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702859 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702859 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3dbe2c0

void CustomLogic_CustomLogicListBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__3_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe2d0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Clear>b__3_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Clear(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Get_b__4_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe2f0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Get>b__4_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  int32_t index;
  Il2CppObject *pIVar1;
  
  if (DAT_0570285a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570285a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar1,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (DAT_05702834 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
        il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
        DAT_05702834 = '\x01';
      }
      __this_00 = (__c->fields).List;
      if (index < 0) {
        if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
          index = index + (__this_00->fields)._size;
          goto LAB_03dbe3aa;
        }
      }
      else if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
LAB_03dbe3aa:
        pIVar1 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_Object_get_Item);
        return pIVar1;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Set_b__5_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe3d0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Set>b__5_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  
  if (DAT_0570285b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570285b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dbe462:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        CustomLogic_CustomLogicListBuiltin__Set(__c,index,__a->m_Items[1],method);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03dbe462;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Add>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Add_b__6_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe470

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Add>b__6_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      CustomLogic_CustomLogicListBuiltin__Add(__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__InsertAt>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__InsertAt_b__7_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe4a0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__InsertAt>b__7_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  
  if (DAT_0570285c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570285c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dbe532:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        CustomLogic_CustomLogicListBuiltin__InsertAt(__c,index,__a->m_Items[1],method);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03dbe532;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveAt>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__RemoveAt_b__8_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe540

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__RemoveAt>b__8_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t index;
  MethodInfo *method_00;
  
  if (DAT_0570285d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570285d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    index = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      CustomLogic_CustomLogicListBuiltin__RemoveAt(__c,index,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__9_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe5d0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Remove>b__9_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      CustomLogic_CustomLogicListBuiltin__Remove(__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__10_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe600

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Contains>b__10_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar1 = CustomLogic_CustomLogicListBuiltin__Contains(__c,__a->m_Items[0],(MethodInfo *)__a);
      uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Sort>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Sort_b__11_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe650

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Sort>b__11_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    CustomLogic_CustomLogicListBuiltin__Sort(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__SortCustom>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__SortCustom_b__12_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe670

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__SortCustom>b__12_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  
  if (DAT_0570285e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570285e = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      CustomLogic_CustomLogicListBuiltin__SortCustom();
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Filter>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Filter_b__13_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe700

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Filter>b__13_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (DAT_0570285f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_0570285f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicListBuiltin__Filter();
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Map>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Map_b__14_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe790

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Map>b__14_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (DAT_05702860 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702860 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      pCVar1 = CustomLogic_CustomLogicListBuiltin__Map();
      return (Il2CppObject *)pCVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reduce>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Reduce_b__15_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe820

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Reduce>b__15_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_05702861 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702861 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03dbe8b0:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        pIVar1 = CustomLogic_CustomLogicListBuiltin__Reduce();
        return pIVar1;
      }
      goto LAB_03dbe8b0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Randomize>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Randomize_b__16_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe8c0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Randomize>b__16_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicListBuiltin__Randomize(__c,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToSet>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__ToSet_b__17_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe8e0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__ToSet>b__17_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicSetBuiltin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicListBuiltin__ToSet(__c,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings.<>c$$<__CreateMethodBinding__Copy>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings___c_____CreateMethodBinding__Copy_b__18_0 (CustomLogic_CustomLogicListBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicListBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3dbe900

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings_<>c__<__CreateMethodBinding__Copy>b__18_0
          (CustomLogic_CustomLogicListBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicListBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  if (__c != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicListBuiltin__Copy(__c,(MethodInfo *)__c);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicListBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3dbc2d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicListBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  uint32_t uVar3;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  undefined8 uVar6;
  System_Exception_o *__this;
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_T__o *__this_00;
  System_Func_T__object____object__o *pSVar7;
  CustomLogic_CLMethodBinding_T__o *pCVar8;
  
  if (DAT_05702846 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"RemoveAt");
    il2cpp_init_method_metadata(&"Remove");
    il2cpp_init_method_metadata(&"Add");
    il2cpp_init_method_metadata(&"Filter");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Count");
    il2cpp_init_method_metadata(&"Sort");
    il2cpp_init_method_metadata(&"Randomize");
    il2cpp_init_method_metadata(&"SortCustom");
    il2cpp_init_method_metadata(&"Reduce");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&"InsertAt");
    il2cpp_init_method_metadata(&"Set");
    il2cpp_init_method_metadata(&"Map");
    il2cpp_init_method_metadata(&"ToSet");
    il2cpp_init_method_metadata(&"Contains");
    il2cpp_init_method_metadata(&"Get");
    DAT_05702846 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x658f3665) {
    if (uVar3 < 0x28b19ea4) {
      if (uVar3 < 0xbd14ccd) {
        if (uVar3 == 0x4a57fc2) {
          bVar4 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702848 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__3_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702848 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 8,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0xbd14ccc) &&
                (bVar4 = System_String__op_Equality(name,"ToSet",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702856 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToSet_b__17_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702856 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x78,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x21a5901d) {
        bVar4 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_0570284e == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Remove_b__9_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_0570284e = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x38,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x28b19ea3) &&
              (bVar4 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570284a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Set_b__5_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570284a = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x486bbbe1) {
      if (uVar3 == 0x44a7f051) {
        bVar4 = System_String__op_Equality(name,"Map",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702853 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Map_b__14_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702853 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x60,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x486bbbe0) &&
              (bVar4 = System_String__op_Equality(name,"RemoveAt",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570284d == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveAt_b__8_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570284d = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x30,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x4b0b408d) {
      bVar4 = System_String__op_Equality(name,"InsertAt",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570284c == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__InsertAt_b__7_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570284c = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x658f3664) &&
            (bVar4 = System_String__op_Equality(name,"Copy",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702857 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Copy_b__18_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702857 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x80,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x9dc3aa15) {
    if (uVar3 < 0x8459a7f2) {
      if (uVar3 == 0x8459a7f1) {
        bVar4 = System_String__op_Equality(name,"Sort",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702850 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Sort_b__11_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702850 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x48,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x669c4958) &&
              (bVar4 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_0570284f == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Contains_b__10_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_0570284f = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x40,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x9450dd5c) {
      bVar4 = System_String__op_Equality(name,"Randomize",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702855 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Randomize_b__16_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702855 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x70,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x9dc3aa14) &&
            (bVar4 = System_String__op_Equality(name,"Add",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_0570284b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Add_b__6_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_0570284b = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x20,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xb6973ef8) {
    if (uVar3 == 0xa42c4e6a) {
      bVar4 = System_String__op_Equality(name,"SortCustom",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702851 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SortCustom_b__12);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702851 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x50,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xb6973ef7) &&
            (bVar4 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702849 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Get_b__4_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702849 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xbd680907) {
    bVar4 = System_String__op_Equality(name,"Reduce",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702854 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reduce_b__15_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702854 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x68,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xf4a9c097) {
    bVar4 = System_String__op_Equality(name,"Filter",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702852 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Filter_b__13_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702852 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x58,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xe1e7b894) &&
          (bVar4 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702847 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Count_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicListBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicListBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object);
      DAT_05702847 = '\x01';
    }
    getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object);
    System_Func<object__object>___ctor();
    __this_00 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicListBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor
              (__this_00,getter,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicListBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)__this_00;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicListBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x3dbc970

CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_05702847 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Count_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object);
    DAT_05702847 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicListBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicListBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x3dbca10

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_05702848 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__3_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702848 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x3dbcb60

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_05702849 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Get_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702849 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x3dbccb0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_0570284a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Set_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570284a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Add
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Add (const MethodInfo* method);
// 0x3dbce00

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Add(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_0570284b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Add_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570284b = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__InsertAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__InsertAt (const MethodInfo* method);
// 0x3dbcf50

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__InsertAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_0570284c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__InsertAt_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570284c = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__RemoveAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__RemoveAt (const MethodInfo* method);
// 0x3dbd0a0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__RemoveAt(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_0570284d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__RemoveAt_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570284d = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x3dbd1f0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_0570284e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Remove_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570284e = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x3dbd340

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_0570284f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Contains_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570284f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Sort
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Sort (const MethodInfo* method);
// 0x3dbd490

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Sort(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_05702850 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Sort_b__11_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702850 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__SortCustom
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__SortCustom (const MethodInfo* method);
// 0x3dbd5e0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__SortCustom(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_05702851 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SortCustom_b__12);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702851 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x50);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Filter
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Filter (const MethodInfo* method);
// 0x3dbd730

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Filter(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_05702852 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Filter_b__13_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702852 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x58);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Map
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Map (const MethodInfo* method);
// 0x3dbd880

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Map(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_05702853 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Map_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702853 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Reduce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Reduce (const MethodInfo* method);
// 0x3dbd9d0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Reduce(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_05702854 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Reduce_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702854 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Randomize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Randomize (const MethodInfo* method);
// 0x3dbdb20

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Randomize(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_05702855 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Randomize_b__16_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702855 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x70);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__ToSet
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__ToSet (const MethodInfo* method);
// 0x3dbdc70

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__ToSet(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_05702856 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToSet_b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702856 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$__CreateMethodBinding__Copy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o* CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Copy (const MethodInfo* method);
// 0x3dbddc0

CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *
CustomLogic_CustomLogicListBuiltin_Bindings____CreateMethodBinding__Copy(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *__this;
  
  if (DAT_05702857 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicListBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Copy_b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702857 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x80);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicListBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicListBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicListBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicListBuiltin);
  return __this;
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3dbdf10

void CustomLogic_CustomLogicListBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702858 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"RemoveAt");
    il2cpp_init_method_metadata(&"Remove");
    il2cpp_init_method_metadata(&"Add");
    il2cpp_init_method_metadata(&"Filter");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Count");
    il2cpp_init_method_metadata(&"Sort");
    il2cpp_init_method_metadata(&"Randomize");
    il2cpp_init_method_metadata(&"SortCustom");
    il2cpp_init_method_metadata(&"Reduce");
    il2cpp_init_method_metadata(&"Copy");
    il2cpp_init_method_metadata(&"InsertAt");
    il2cpp_init_method_metadata(&"Set");
    il2cpp_init_method_metadata(&"Map");
    il2cpp_init_method_metadata(&"ToSet");
    il2cpp_init_method_metadata(&"Contains");
    il2cpp_init_method_metadata(&"Get");
    DAT_05702858 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Count",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Clear",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Get",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Add",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"InsertAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RemoveAt",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Remove",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Contains",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Sort",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SortCustom",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Filter",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Map",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Reduce",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Randomize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToSet",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Copy",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicListBuiltin_o* __i, const MethodInfo* method);
// 0x3dbe1f0

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_Bindings__<__CreatePropertyBinding__Count>g____getter_2_0
          (CustomLogic_CustomLogicListBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  Il2CppObject *pIVar2;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    if (DAT_05702832 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
      DAT_05702832 = '\x01';
    }
    pSVar1 = (__i->fields).List;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      local_c = (pSVar1->fields)._size;
      pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass14_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o* __this, const MethodInfo* method);
// 0x3dbb640

void CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass14_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass14_0$$<Contains>b__0
// il2cpp: bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0___Contains_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x3dbe920

bool_conflict
CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass14_0__<Contains>b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass14_0_o *__this,Il2CppObject *e,
          MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_05702862 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05702862 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    bVar2 = CustomLogic_CustomLogicEvaluator__CheckEquals
                      (__this_00,e,(__this->fields).value,(MethodInfo *)0x0);
    return bVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass16_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o* __this, const MethodInfo* method);
// 0x3dbb800

void CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass16_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass16_0$$<SortCustom>b__0
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0___SortCustom_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o* __this, Il2CppObject* a, Il2CppObject* b, const MethodInfo* method);
// 0x3dbe9b0

int32_t CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass16_0__<SortCustom>b__0
                  (CustomLogic_CustomLogicListBuiltin___c__DisplayClass16_0_o *__this,
                  Il2CppObject *a,Il2CppObject *b,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  long lVar1;
  Il2CppObject *pIVar2;
  int32_t *piVar3;
  undefined8 uVar4;
  
  if (DAT_05702863 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05702863 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  if (parameterValues == (System_Object_array *)0x0) {
LAB_03dbeae3:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (a != (Il2CppObject *)0x0) {
    lVar1 = il2cpp_runtime_glue(a,(((parameterValues->obj).klass)->_1).element_class);
    if (lVar1 == 0) goto LAB_03dbeaed;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = a;
    il2cpp_runtime_glue(parameterValues->m_Items,a);
    if (b != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(b,(((parameterValues->obj).klass)->_1).element_class);
      if (lVar1 == 0) {
LAB_03dbeaed:
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if (1 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[1] = b;
      il2cpp_runtime_glue(parameterValues->m_Items + 1,b);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar2 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                           (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        if (pIVar2 != (Il2CppObject *)0x0) {
          if ((pIVar2->klass->_1).element_class == *(Il2CppClass **)(DAT_05711068 + 0x40)) {
            piVar3 = (int32_t *)il2cpp_glue_022c7330(pIVar2);
            return *piVar3;
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pIVar2);
        }
      }
      goto LAB_03dbeae3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass17_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o* __this, const MethodInfo* method);
// 0x3dbb950

void CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass17_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass17_0$$<Filter>b__0
// il2cpp: bool CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0___Filter_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x3dbeb10

bool_conflict
CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass17_0__<Filter>b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass17_0_o *__this,Il2CppObject *e,
          MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined1 *puVar3;
  undefined8 uVar4;
  
  if (DAT_05702864 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05702864 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameterValues != (System_Object_array *)0x0) {
    if (e != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(e,(((parameterValues->obj).klass)->_1).element_class);
      if (lVar1 == 0) {
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if ((int)parameterValues->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameterValues->m_Items[0] = e;
    il2cpp_runtime_glue(parameterValues->m_Items,e);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      if (pIVar2 != (Il2CppObject *)0x0) {
        if ((pIVar2->klass->_1).element_class == *(Il2CppClass **)(DAT_05711048 + 0x40)) {
          puVar3 = (undefined1 *)il2cpp_glue_022c7330(pIVar2);
          return (bool_conflict)CONCAT71((int7)((ulong)puVar3 >> 8),*puVar3);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pIVar2);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass18_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o* __this, const MethodInfo* method);
// 0x3dbbaa0

void CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass18_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass18_0$$<Map>b__0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0___Map_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o* __this, Il2CppObject* e, const MethodInfo* method);
// 0x3dbec30

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass18_0__<Map>b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass18_0_o *__this,Il2CppObject *e,
          MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  
  if (DAT_05702865 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05702865 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameterValues != (System_Object_array *)0x0) {
    if (e != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(e,(((parameterValues->obj).klass)->_1).element_class);
      if (lVar1 == 0) {
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if ((int)parameterValues->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameterValues->m_Items[0] = e;
    il2cpp_runtime_glue(parameterValues->m_Items,e);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass19_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o* __this, const MethodInfo* method);
// 0x3dbbb90

void CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass19_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass19_0$$<Reduce>b__0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0___Reduce_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o* __this, Il2CppObject* acc, Il2CppObject* e, const MethodInfo* method);
// 0x3dbed20

Il2CppObject *
CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass19_0__<Reduce>b__0
          (CustomLogic_CustomLogicListBuiltin___c__DisplayClass19_0_o *__this,Il2CppObject *acc,
          Il2CppObject *e,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  System_Object_array *parameterValues;
  long lVar1;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  
  if (DAT_05702866 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05702866 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
  if (parameterValues == (System_Object_array *)0x0) {
LAB_03dbee28:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (acc != (Il2CppObject *)0x0) {
    lVar1 = il2cpp_runtime_glue(acc,(((parameterValues->obj).klass)->_1).element_class);
    if (lVar1 == 0) goto LAB_03dbee2d;
  }
  if ((int)parameterValues->max_length != 0) {
    parameterValues->m_Items[0] = acc;
    il2cpp_runtime_glue(parameterValues->m_Items,acc);
    if (e != (Il2CppObject *)0x0) {
      lVar1 = il2cpp_runtime_glue(e,(((parameterValues->obj).klass)->_1).element_class);
      if (lVar1 == 0) {
LAB_03dbee2d:
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if (1 < (uint)parameterValues->max_length) {
      parameterValues->m_Items[1] = e;
      il2cpp_runtime_glue(parameterValues->m_Items + 1,e);
      if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pIVar2 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                           (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
        return pIVar2;
      }
      goto LAB_03dbee28;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass20_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___ctor (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o* __this, const MethodInfo* method);
// 0x3dbbd00

void CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass20_0___ctor
               (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin.<>c__DisplayClass20_0$$<Randomize>b__0
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0___Randomize_b__0 (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o* __this, Il2CppObject* x, const MethodInfo* method);
// 0x3dbee40

int32_t CustomLogic_CustomLogicListBuiltin_<>c__DisplayClass20_0__<Randomize>b__0
                  (CustomLogic_CustomLogicListBuiltin___c__DisplayClass20_0_o *__this,
                  Il2CppObject *x,MethodInfo *method)

{
  System_Random_o *pSVar1;
  Il2CppMethodPointer vtable_dispatch;
  int32_t iVar2;
  
  pSVar1 = (__this->fields).r;
  if (pSVar1 != (System_Random_o *)0x0) {
    vtable_dispatch = (pSVar1->klass->vtable)._5_Next.methodPtr;
    iVar2 = (*vtable_dispatch)
                      (pSVar1,(pSVar1->klass->vtable)._5_Next.method,method,vtable_dispatch);
    return iVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbae60

void CustomLogic_CustomLogicListBuiltin___ctor
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  
  if (DAT_0570282f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_List_object);
    DAT_0570282f = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_object);
  System_Collections_Generic_List<object>___ctor(__this_00,MethodInfo_List_1_System_Object);
  (__this->fields).List = __this_00;
  il2cpp_runtime_glue(&(__this->fields).List);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, System_Object_array* parameterValues, const MethodInfo* method);
// 0x3dbaf00

void CustomLogic_CustomLogicListBuiltin___ctor
               (CustomLogic_CustomLogicListBuiltin_o *__this,System_Object_array *parameterValues,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o **ppSVar1;
  int32_t *piVar2;
  uint uVar3;
  Il2CppObject *item;
  System_Object_array *pSVar4;
  long lVar5;
  System_Collections_Generic_List_object__o *pSVar6;
  ulong uVar7;
  
  if (DAT_05702830 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_List_object);
    DAT_05702830 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_object);
  System_Collections_Generic_List<object>___ctor(pSVar6,MethodInfo_List_1_System_Object);
  ppSVar1 = &(__this->fields).List;
  (__this->fields).List = pSVar6;
  il2cpp_runtime_glue(ppSVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  if (parameterValues != (System_Object_array *)0x0) {
    if ((int)parameterValues->max_length < 1) {
      return;
    }
    uVar7 = 0;
    if ((parameterValues->max_length & 0xffffffff) != 0) {
      do {
        lVar5 = MethodInfo_Void_Add;
        pSVar6 = *ppSVar1;
        if (pSVar6 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03dbb055;
        item = parameterValues->m_Items[uVar7];
        piVar2 = &(pSVar6->fields)._version;
        *piVar2 = *piVar2 + 1;
        pSVar4 = (pSVar6->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto LAB_03dbb055;
        uVar3 = (pSVar6->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (pSVar6->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = item;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar3);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar6,item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        uVar7 = uVar7 + 1;
        uVar3 = (uint)parameterValues->max_length;
        if ((long)(int)uVar3 <= (long)uVar7) {
          return;
        }
      } while (uVar7 < uVar3);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03dbb055:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicListBuiltin___ctor (CustomLogic_CustomLogicListBuiltin_o* __this, System_Collections_Generic_IEnumerable_object__o* enumerable, bool isReadOnly, const MethodInfo* method);
// 0x3db7d60

void CustomLogic_CustomLogicListBuiltin___ctor
               (CustomLogic_CustomLogicListBuiltin_o *__this,
               System_Collections_Generic_IEnumerable_object__o *enumerable,bool_conflict isReadOnly
               ,MethodInfo *method)

{
  System_Collections_Generic_List_object__o **ppSVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  
  if (DAT_05702831 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_List_object);
    DAT_05702831 = '\x01';
  }
  pSVar2 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_object);
  System_Collections_Generic_List<object>___ctor(pSVar2,MethodInfo_List_1_System_Object);
  ppSVar1 = &(__this->fields).List;
  (__this->fields).List = pSVar2;
  il2cpp_runtime_glue(ppSVar1);
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  pSVar2 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_object);
  System_Collections_Generic_List<object>___ctor
            (pSVar2,(System_Collections_Generic_IEnumerable_T__o *)enumerable,MethodInfo_List_1_System_Object);
  (__this->fields).List = pSVar2;
  il2cpp_runtime_glue(ppSVar1,pSVar2);
  *(char *)&(__this->fields)._isReadOnly = (char)isReadOnly;
  return;
}


// CustomLogic.CustomLogicListBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicListBuiltin__get_Count (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbb060

int32_t CustomLogic_CustomLogicListBuiltin__get_Count
                  (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  
  if (DAT_05702832 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05702832 = '\x01';
  }
  pSVar1 = (__this->fields).List;
  if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
    return (pSVar1->fields)._size;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Clear (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbb0a0

void CustomLogic_CustomLogicListBuiltin__Clear
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_object__o *pSVar2;
  undefined8 uVar3;
  System_Exception_o *__this_00;
  System_String_o *message;
  
  if (DAT_05702833 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05702833 = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly != '\0') {
    uVar3 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_00 = (System_Exception_o *)il2cpp_runtime_glue(uVar3);
    message = (System_String_o *)il2cpp_init_method_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor(__this_00,message,(MethodInfo *)0x0);
    uVar3 = il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar3);
  }
  pSVar2 = (__this->fields).List;
  if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  piVar1 = &(pSVar2->fields)._version;
  *piVar1 = *piVar1 + 1;
  length = (pSVar2->fields)._size;
  (pSVar2->fields)._size = 0;
  if (0 < length) {
    System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicListBuiltin$$Get
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin__Get (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x3dbb140

Il2CppObject *
CustomLogic_CustomLogicListBuiltin__Get
          (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  Il2CppObject *pIVar1;
  
  if (DAT_05702834 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    DAT_05702834 = '\x01';
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      index = index + (__this_00->fields)._size;
      goto LAB_03dbb188;
    }
  }
  else if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
LAB_03dbb188:
    pIVar1 = System_Collections_Generic_List<object>__get_Item(__this_00,index,MethodInfo_Object_get_Item);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Set (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, Il2CppObject* value, const MethodInfo* method);
// 0x3dbb1b0

void CustomLogic_CustomLogicListBuiltin__Set
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,Il2CppObject *value,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar1;
  System_Exception_o *__this_01;
  System_String_o *message;
  
  if (DAT_05702835 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_05702835 = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly != '\0') {
    uVar1 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar1);
    message = (System_String_o *)il2cpp_init_method_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
    uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_Set);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar1);
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      index = index + (__this_00->fields)._size;
      goto LAB_03dbb201;
    }
  }
  else if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
LAB_03dbb201:
    System_Collections_Generic_List<object>__set_Item(__this_00,index,value,MethodInfo_Void_set_Item);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$Add
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Add (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3dbb270

void CustomLogic_CustomLogicListBuiltin__Add
               (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  long lVar4;
  undefined8 uVar5;
  System_Exception_o *__this_01;
  System_String_o *message;
  
  if (DAT_05702836 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05702836 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
  if ((char)(__this->fields)._isReadOnly == '\0') {
    __this_00 = (__this->fields).List;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_00->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this_00->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (__this_00->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_00->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = value;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,value);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  (__this_00,value,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar5 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar5);
  message = (System_String_o *)il2cpp_init_method_metadata(&"Cannot modify a read-only list.");
  System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
  uVar5 = il2cpp_init_method_metadata(&MethodInfo_Void_Add);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar5);
}


// CustomLogic.CustomLogicListBuiltin$$InsertAt
// il2cpp: void CustomLogic_CustomLogicListBuiltin__InsertAt (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, Il2CppObject* value, const MethodInfo* method);
// 0x3dbb360

void CustomLogic_CustomLogicListBuiltin__InsertAt
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,Il2CppObject *value,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar1;
  System_Exception_o *__this_01;
  System_String_o *message;
  
  if (DAT_05702837 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Insert);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05702837 = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly != '\0') {
    uVar1 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar1);
    message = (System_String_o *)il2cpp_init_method_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
    uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_InsertAt);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar1);
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      index = index + (__this_00->fields)._size;
      goto LAB_03dbb3b1;
    }
  }
  else if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
LAB_03dbb3b1:
    System_Collections_Generic_List<object>__Insert(__this_00,index,value,MethodInfo_Void_Insert);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$RemoveAt
// il2cpp: void CustomLogic_CustomLogicListBuiltin__RemoveAt (CustomLogic_CustomLogicListBuiltin_o* __this, int32_t index, const MethodInfo* method);
// 0x3dbb420

void CustomLogic_CustomLogicListBuiltin__RemoveAt
               (CustomLogic_CustomLogicListBuiltin_o *__this,int32_t index,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar1;
  System_Exception_o *__this_01;
  System_String_o *message;
  
  if (DAT_05702838 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05702838 = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly != '\0') {
    uVar1 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar1);
    message = (System_String_o *)il2cpp_init_method_metadata(&"Cannot modify a read-only list.");
    System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
    uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_01,uVar1);
  }
  __this_00 = (__this->fields).List;
  if (index < 0) {
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      index = index + (__this_00->fields)._size;
      goto LAB_03dbb46d;
    }
  }
  else if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
LAB_03dbb46d:
    System_Collections_Generic_List<object>__RemoveAt(__this_00,index,MethodInfo_Void_RemoveAt);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Remove (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3dbb4d0

void CustomLogic_CustomLogicListBuiltin__Remove
               (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar1;
  System_Exception_o *__this_01;
  System_String_o *message;
  
  if (DAT_05702839 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_05702839 = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly == '\0') {
    __this_00 = (__this->fields).List;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__Remove(__this_00,value,MethodInfo_Boolean_Remove);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar1);
  message = (System_String_o *)il2cpp_init_method_metadata(&"Cannot modify a read-only list.");
  System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_Remove);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar1);
}


// CustomLogic.CustomLogicListBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__Contains (CustomLogic_CustomLogicListBuiltin_o* __this, Il2CppObject* value, const MethodInfo* method);
// 0x3dbb570

bool_conflict
CustomLogic_CustomLogicListBuiltin__Contains
          (CustomLogic_CustomLogicListBuiltin_o *__this,Il2CppObject *value,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  System_Func_TSource__bool__o *predicate;
  
  if (DAT_0570283a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_Object);
    il2cpp_init_method_metadata(&TypeInfo_Func_object__bool);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__Contains_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass14_0);
    DAT_0570283a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass14_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)value;
    il2cpp_runtime_glue(__this_00 + 1,value);
    source = (__this->fields).List;
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_object__bool);
    System_Func<object__bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                       MethodInfo_Boolean_Any_Object);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$Sort
// il2cpp: void CustomLogic_CustomLogicListBuiltin__Sort (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbb650

void CustomLogic_CustomLogicListBuiltin__Sort
               (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  undefined8 uVar1;
  System_Exception_o *__this_01;
  System_String_o *message;
  
  if (DAT_0570283b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    DAT_0570283b = '\x01';
  }
  if ((char)(__this->fields)._isReadOnly == '\0') {
    __this_00 = (__this->fields).List;
    if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__Sort(__this_00,MethodInfo_Void_Sort);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar1);
  message = (System_String_o *)il2cpp_init_method_metadata(&"Cannot modify a read-only list.");
  System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_01,uVar1);
}


// CustomLogic.CustomLogicListBuiltin$$SortCustom
// il2cpp: void CustomLogic_CustomLogicListBuiltin__SortCustom (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x3dbb6e0

void CustomLogic_CustomLogicListBuiltin__SortCustom(void)

{
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *__this_00;
  System_Comparison_T__o *comparison;
  undefined8 uVar1;
  System_Exception_o *__this_01;
  System_String_o *message;
  Il2CppClass *in_RSI;
  long in_RDI;
  
  if (DAT_0570283c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Comparison_object);
    il2cpp_init_method_metadata(&MethodInfo_Void_Sort);
    il2cpp_init_method_metadata(&MethodInfo_Int32__SortCustom_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass16_0);
    DAT_0570283c = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass16_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = in_RSI;
    il2cpp_runtime_glue(__this_00 + 1);
    if (*(char *)(in_RDI + 0x38) != '\0') {
      uVar1 = il2cpp_init_method_metadata(&TypeInfo_Exception);
      __this_01 = (System_Exception_o *)il2cpp_runtime_glue(uVar1);
      message = (System_String_o *)il2cpp_init_method_metadata(&"Cannot modify a read-only list.");
      System_Exception___ctor(__this_01,message,(MethodInfo *)0x0);
      uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_SortCustom);
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(__this_01,uVar1);
    }
    __this = *(System_Collections_Generic_List_object__o **)(in_RDI + 0x30);
    comparison = (System_Comparison_T__o *)il2cpp_runtime_glue(TypeInfo_Comparison_object);
    System_Comparison<object>___ctor();
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__Sort(__this,comparison,MethodInfo_Void_Sort);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$Filter
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Filter (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x3dbb810

CustomLogic_CustomLogicListBuiltin_o * CustomLogic_CustomLogicListBuiltin__Filter(void)

{
  Il2CppObject *__this;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar1;
  System_Collections_Generic_List_TSource__o *pSVar2;
  Il2CppClass *in_RSI;
  long in_RDI;
  
  if (DAT_0570283d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object__ToList_Object);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Object__Where_Object);
    il2cpp_init_method_metadata(&TypeInfo_Func_object__bool);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__Filter_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass17_0);
    DAT_0570283d = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass17_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = in_RSI;
    il2cpp_runtime_glue(__this + 1);
    __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)in_RSI);
    pSVar1 = *(System_Collections_Generic_IEnumerable_TSource__o **)(in_RDI + 0x30);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_object__bool);
    System_Func<object__bool>___ctor();
    pSVar1 = System_Linq_Enumerable__Where<object>(pSVar1,predicate,MethodInfo_IEnumerable_1_System_Object__Where_Object);
    pSVar2 = System_Linq_Enumerable__ToList<object>(pSVar1,MethodInfo_List_1_System_Object__ToList_Object);
    if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_00->fields).List = (System_Collections_Generic_List_object__o *)pSVar2;
      il2cpp_runtime_glue(&(__this_00->fields).List,pSVar2);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$Map
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Map (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, const MethodInfo* method);
// 0x3dbb960

CustomLogic_CustomLogicListBuiltin_o * CustomLogic_CustomLogicListBuiltin__Map(void)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Il2CppObject *__this;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  Il2CppClass *in_RSI;
  long in_RDI;
  
  if (DAT_0570283e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_Object__Select_Object_Objec);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object__ToList_Object);
    il2cpp_init_method_metadata(&TypeInfo_Func_object__object);
    il2cpp_init_method_metadata(&MethodInfo_Object__Map_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass18_0);
    DAT_0570283e = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass18_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = in_RSI;
    il2cpp_runtime_glue(__this + 1);
    __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)in_RSI);
    source = *(System_Collections_Generic_IEnumerable_TSource__o **)(in_RDI + 0x30);
    selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_object__object);
    System_Func<object__object>___ctor();
    source_00 = System_Linq_Enumerable__Select<object__object>(source,selector,MethodInfo_IEnumerable_1_System_Object__Select_Object_Objec);
    pSVar1 = System_Linq_Enumerable__ToList<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_Object__ToList_Object)
    ;
    if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_00->fields).List = (System_Collections_Generic_List_object__o *)pSVar1;
      il2cpp_runtime_glue(&(__this_00->fields).List,pSVar1);
      return __this_00;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$Reduce
// il2cpp: Il2CppObject* CustomLogic_CustomLogicListBuiltin__Reduce (CustomLogic_CustomLogicListBuiltin_o* __this, CustomLogic_UserMethod_o* method, Il2CppObject* initialValue, const MethodInfo* method);
// 0x3dbbab0

Il2CppObject * CustomLogic_CustomLogicListBuiltin__Reduce(void)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  Il2CppObject *pIVar1;
  System_Func_TAccumulate__TSource__TAccumulate__o *func;
  Il2CppObject *in_RDX;
  Il2CppClass *in_RSI;
  long in_RDI;
  
  if (DAT_0570283f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object_Aggregate_Object_Object);
    il2cpp_init_method_metadata(&TypeInfo_Func_object__object__object);
    il2cpp_init_method_metadata(&MethodInfo_Object__Reduce_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass19_0);
    DAT_0570283f = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass19_0);
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[1].klass = in_RSI;
    il2cpp_runtime_glue(pIVar1 + 1);
    source = *(System_Collections_Generic_IEnumerable_TSource__o **)(in_RDI + 0x30);
    func = (System_Func_TAccumulate__TSource__TAccumulate__o *)il2cpp_runtime_glue(TypeInfo_Func_object__object__object);
    System_Func<object__object__object>___ctor();
    pIVar1 = System_Linq_Enumerable__Aggregate<object__object>(source,in_RDX,func,MethodInfo_Object_Aggregate_Object_Object);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$Randomize
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Randomize (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbbba0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Randomize
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *source;
  Il2CppObject *__this_00;
  CustomLogic_CustomLogicListBuiltin_o *__this_01;
  Il2CppClass *__this_02;
  System_Func_TSource__TKey__o *keySelector;
  System_Linq_IOrderedEnumerable_TSource__o *source_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  MethodInfo *method_00;
  
  if (DAT_05702840 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_IOrderedEnumerable_1_System_Object__OrderBy_Obje);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object__ToList_Object);
    il2cpp_init_method_metadata(&TypeInfo_Func_object__int);
    il2cpp_init_method_metadata(&TypeInfo_Random);
    il2cpp_init_method_metadata(&MethodInfo_Int32__Randomize_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass20_0);
    DAT_05702840 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass20_0);
  method_00 = (MethodInfo *)0x0;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  __this_01 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_01,method_00);
  __this_02 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_Random);
  System_Random___ctor((System_Random_o *)__this_02,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = __this_02;
    il2cpp_runtime_glue(__this_00 + 1,__this_02);
    source = (__this->fields).List;
    keySelector = (System_Func_TSource__TKey__o *)il2cpp_runtime_glue(TypeInfo_Func_object__int);
    System_Func<object__int>___ctor();
    source_00 = System_Linq_Enumerable__OrderBy<object__int>
                          ((System_Collections_Generic_IEnumerable_TSource__o *)source,keySelector,
                           MethodInfo_IOrderedEnumerable_1_System_Object__OrderBy_Obje);
    pSVar1 = System_Linq_Enumerable__ToList<object>
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_Object__ToList_Object)
    ;
    if (__this_01 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      (__this_01->fields).List = (System_Collections_Generic_List_object__o *)pSVar1;
      il2cpp_runtime_glue(&(__this_01->fields).List,pSVar1);
      return __this_01;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$ToSet
// il2cpp: CustomLogic_CustomLogicSetBuiltin_o* CustomLogic_CustomLogicListBuiltin__ToSet (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbbd10

CustomLogic_CustomLogicSetBuiltin_o *
CustomLogic_CustomLogicListBuiltin__ToSet
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar1;
  CustomLogic_CustomLogicSetBuiltin_o *__this_05;
  System_Collections_Generic_List_Enumerator_T__c *pSVar2;
  Il2CppType *pIVar3;
  Il2CppObject *item;
  undefined1 local_38 [16];
  Il2CppObject *local_28;
  
  if (DAT_05702841 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSetBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    DAT_05702841 = '\x01';
  }
  __this_05 = (CustomLogic_CustomLogicSetBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicSetBuiltin);
  CustomLogic_CustomLogicSetBuiltin___ctor(__this_05,method);
  __this_00 = (__this->fields).List;
  if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_38,__this_00,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
  pSVar2 = (System_Collections_Generic_List_Enumerator_T__c *)local_38._0_8_;
  pIVar3 = (Il2CppType *)local_38._8_8_;
  item = local_28;
  if (__this_05 == (CustomLogic_CustomLogicSetBuiltin_o *)0x0) {
    __this_03.fields._index = local_38._8_4_;
    __this_03.fields._version = local_38._12_4_;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
    __this_03.fields._current = local_28;
    bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                      (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8);
    if ((char)bVar1 != '\0') {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  else {
    while (__this_02.fields._8_8_ = pIVar3,
          __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar2,
          __this_02.fields._current = item,
          bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffa8),
          local_38._0_8_ = pSVar2, local_38._8_8_ = pIVar3, local_28 = item, (char)bVar1 != '\0') {
      __this_01 = (__this_05->fields).Set;
      if (__this_01 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_HashSet<object>__Add(__this_01,item,MethodInfo_Boolean_Add);
    }
  }
  __this_04.fields._8_8_ = local_38._8_8_;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)local_38._0_8_;
  __this_04.fields._current = local_28;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffffa8);
  return __this_05;
}


// CustomLogic.CustomLogicListBuiltin$$Copy
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicListBuiltin__Copy (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbbfa0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicListBuiltin__Copy
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_Collections_Generic_List_TSource__o *pSVar1;
  
  if (DAT_05702842 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object__ToList_Object);
    DAT_05702842 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,method);
  pSVar1 = System_Linq_Enumerable__ToList<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)(__this->fields).List,
                      MethodInfo_List_1_System_Object__ToList_Object);
  if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    (__this_00->fields).List = (System_Collections_Generic_List_object__o *)pSVar1;
    il2cpp_runtime_glue(&(__this_00->fields).List,pSVar1);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicListBuiltin__ToString (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbc030

System_String_o *
CustomLogic_CustomLogicListBuiltin__ToString
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  System_Text_StringBuilder_o *__this_00;
  Il2CppObject *value;
  System_String_o *pSVar1;
  int index;
  System_Collections_Generic_List_object__o *pSVar2;
  
  if (DAT_05702843 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&", ");
    il2cpp_init_method_metadata(&"\"");
    il2cpp_init_method_metadata(&"[");
    il2cpp_init_method_metadata(&"]");
    DAT_05702843 = '\x01';
  }
  __this_00 = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
  System_Text_StringBuilder___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
    index = 0;
    System_Text_StringBuilder__Append(__this_00,"[",(MethodInfo *)0x0);
    pSVar2 = (__this->fields).List;
    if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
      if (0 < (pSVar2->fields)._size) {
        do {
          pSVar1 = (System_String_o *)
                   System_Collections_Generic_List<object>__get_Item(pSVar2,index,MethodInfo_Object_get_Item);
          if ((pSVar1 == (System_String_o *)0x0) || (pSVar1->klass != DAT_057110b0)) {
            pSVar2 = (__this->fields).List;
            if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03dbc1bd;
            value = System_Collections_Generic_List<object>__get_Item(pSVar2,index,MethodInfo_Object_get_Item);
            System_Text_StringBuilder__Append(__this_00,value,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).List;
          }
          else {
            pSVar1 = System_String__Concat("\"",pSVar1,"\"",(MethodInfo *)0x0);
            System_Text_StringBuilder__Append(__this_00,pSVar1,(MethodInfo *)0x0);
            pSVar2 = (__this->fields).List;
          }
          if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03dbc1bd;
          if (index != (pSVar2->fields)._size + -1) {
            System_Text_StringBuilder__Append(__this_00,", ",(MethodInfo *)0x0);
            pSVar2 = (__this->fields).List;
          }
          index = index + 1;
          if (pSVar2 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03dbc1bd;
        } while (index < (pSVar2->fields)._size);
      }
      System_Text_StringBuilder__Append(__this_00,"]",(MethodInfo *)0x0);
      pSVar1 = (System_String_o *)
               (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      return pSVar1;
    }
  }
LAB_03dbc1bd:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicListBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicListBuiltin__get_ClassName (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbc200

System_String_o *
CustomLogic_CustomLogicListBuiltin__get_ClassName
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702844 == '\0') {
    il2cpp_init_method_metadata(&"List");
    DAT_05702844 = '\x01';
  }
  return "List";
}


// CustomLogic.CustomLogicListBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_IsAbstract (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbc230

bool_conflict
CustomLogic_CustomLogicListBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicListBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_IsStatic (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbc240

bool_conflict
CustomLogic_CustomLogicListBuiltin__get_IsStatic
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicListBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicListBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicListBuiltin_o* __this, const MethodInfo* method);
// 0x3dbc250

bool_conflict
CustomLogic_CustomLogicListBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicListBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


