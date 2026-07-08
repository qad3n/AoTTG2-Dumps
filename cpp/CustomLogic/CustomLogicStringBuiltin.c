// Type: CustomLogic.CustomLogicStringBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicStringBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicStringBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicStringBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicStringBuiltin_o* CustomLogic_CustomLogicStringBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3f45ec0

CustomLogic_CustomLogicStringBuiltin_o *
CustomLogic_CustomLogicStringBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05703df7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicStringBuiltin);
    DAT_05703df7 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicStringBuiltin);
      if (DAT_05703def == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_05703def = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,method);
      return (CustomLogic_CustomLogicStringBuiltin_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicStringBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicStringBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3f48100

void CustomLogic_CustomLogicStringBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703e0c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e0c = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3f48170

void CustomLogic_CustomLogicStringBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__FormatFloat>b__3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFloat_b__3_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48180

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__FormatFloat>b__3_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t decimalPlaces;
  System_String_o *pSVar1;
  float num;
  
  if (DAT_05703e0d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e0d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    num = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (1 < (uint)__a->max_length) {
      decimalPlaces = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32)
      ;
      if (DAT_05703df1 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Util);
        DAT_05703df1 = '\x01';
      }
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = Utility_Util__FormatFloat(num,decimalPlaces,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__FormatFromList>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__FormatFromList_b__4_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48280

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__FormatFromList>b__4_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  System_Object_array *args;
  
  if (DAT_05703e0e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e0e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f48368:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
      if (DAT_05703df2 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object___ToArray);
        DAT_05703df2 = '\x01';
      }
      if ((pIVar2 != (Il2CppObject *)0x0) && (pIVar2[3].klass != (Il2CppClass *)0x0)) {
        args = System_Collections_Generic_List<object>__ToArray
                         ((System_Collections_Generic_List_object__o *)pIVar2[3].klass,MethodInfo_Object___ToArray)
        ;
        pSVar1 = System_String__Format(pSVar1,args,(MethodInfo *)0x0);
        return (Il2CppObject *)pSVar1;
      }
      goto LAB_03f48368;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Split>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Split_b__5_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48380

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__Split>b__5_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *separator;
  uint16_t separator_00;
  int iVar6;
  uint uVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  ulong uVar11;
  System_String_c *pSVar12;
  long lVar13;
  
  if (DAT_05703e0f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e0f = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
LAB_03f4845a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pIVar5 = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar10 = (System_String_o *)
            CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar5,MethodInfo_String_ConvertTo_String);
  uVar7 = (uint)__a->max_length;
  if (uVar7 < 2) goto LAB_03f4845a;
  separator = (System_String_o *)__a->m_Items[1];
  if ((int)uVar7 < 3) {
    uVar7 = 0;
  }
  else {
    pIVar5 = __a->m_Items[2];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar7 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(pIVar5,MethodInfo_Boolean_ConvertTo_Boolean);
  }
  uVar7 = uVar7 & 0xff;
  if (DAT_05703df3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_05703df3 = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  if (separator == (System_String_o *)0x0) goto LAB_03f459a1;
  pSVar12 = separator->klass;
  if (pSVar12 == DAT_057110b0) {
    if ((separator->fields)._stringLength == 1) {
      separator_00 = System_String__get_Chars(separator,0,(MethodInfo *)0x0);
      if ((pSVar10 == (System_String_o *)0x0) ||
         (pSVar8 = System_String__Split(pSVar10,separator_00,uVar7,(MethodInfo *)0x0),
         pSVar8 == (System_String_array *)0x0)) goto LAB_03f459a1;
      iVar6 = (int)pSVar8->max_length;
      if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        if (iVar6 < 1) {
          return (Il2CppObject *)__this_00;
        }
        uVar11 = 0;
        if ((pSVar8->max_length & 0xffffffff) != 0) {
          do {
            lVar13 = MethodInfo_Void_Add;
            pSVar3 = (__this_00->fields).List;
            if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f459a1;
            pSVar10 = pSVar8->m_Items[uVar11];
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar3->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto LAB_03f459a1;
            uVar7 = (pSVar3->fields)._size;
            if (uVar7 < (uint)pSVar4->max_length) {
              (pSVar3->fields)._size = uVar7 + 1;
              pSVar4->m_Items[(int)uVar7] = (Il2CppObject *)pSVar10;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar7);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar3,(Il2CppObject *)pSVar10,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                        );
            }
            uVar11 = uVar11 + 1;
            uVar7 = (uint)pSVar8->max_length;
            if ((long)(int)uVar7 <= (long)uVar11) {
              return (Il2CppObject *)__this_00;
            }
          } while (uVar11 < uVar7);
        }
LAB_03f459a6:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      if ((pSVar10 == (System_String_o *)0x0) ||
         (pSVar8 = System_String__Split(pSVar10,separator,uVar7,(MethodInfo *)0x0),
         pSVar8 == (System_String_array *)0x0)) goto LAB_03f459a1;
      iVar6 = (int)pSVar8->max_length;
      if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        if (iVar6 < 1) {
          return (Il2CppObject *)__this_00;
        }
        uVar11 = 0;
        if ((pSVar8->max_length & 0xffffffff) != 0) {
          do {
            lVar13 = MethodInfo_Void_Add;
            pSVar3 = (__this_00->fields).List;
            if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f459a1;
            pSVar10 = pSVar8->m_Items[uVar11];
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar3->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto LAB_03f459a1;
            uVar7 = (pSVar3->fields)._size;
            if (uVar7 < (uint)pSVar4->max_length) {
              (pSVar3->fields)._size = uVar7 + 1;
              pSVar4->m_Items[(int)uVar7] = (Il2CppObject *)pSVar10;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar7);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar3,(Il2CppObject *)pSVar10,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70)
                        );
            }
            uVar11 = uVar11 + 1;
            uVar7 = (uint)pSVar8->max_length;
            if ((long)(int)uVar7 <= (long)uVar11) {
              return (Il2CppObject *)__this_00;
            }
          } while (uVar11 < uVar7);
        }
        goto LAB_03f459a6;
      }
    }
  }
  else {
    bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    if (((pSVar12->_2).naturalAligment < bVar2) ||
       ((pSVar12->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicListBuiltin)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(separator);
    }
    if (separator[2].klass == (System_String_c *)0x0) goto LAB_03f459a1;
    pSVar8 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
    pSVar12 = separator[2].klass;
    if (pSVar12 == (System_String_c *)0x0) goto LAB_03f459a1;
    if (pSVar8 != (System_String_array *)0x0) {
      lVar13 = 0;
      uVar11 = 0;
      do {
        if ((long)*(int *)&(pSVar12->_1).namespaze <= (long)uVar11) goto LAB_03f457f5;
        pSVar9 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pSVar12,(int32_t)uVar11,
                            MethodInfo_Object_get_Item);
        if ((pSVar9 != (System_String_o *)0x0) && (pSVar9->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar9);
        }
        if ((uint)pSVar8->max_length <= uVar11) goto LAB_03f459a6;
        pSVar8->m_Items[uVar11] = pSVar9;
        il2cpp_runtime_glue((long)pSVar8->m_Items + lVar13,pSVar9);
        uVar11 = uVar11 + 1;
        pSVar12 = separator[2].klass;
        lVar13 = lVar13 + 8;
      } while (pSVar12 != (System_String_c *)0x0);
      goto LAB_03f459a1;
    }
    if (0 < *(int *)&(pSVar12->_1).namespaze) {
      System_Collections_Generic_List<object>__get_Item
                ((System_Collections_Generic_List_object__o *)pSVar12,0,MethodInfo_Object_get_Item);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_03f457f5:
    if ((pSVar10 == (System_String_o *)0x0) ||
       (pSVar8 = System_String__Split(pSVar10,pSVar8,uVar7,(MethodInfo *)0x0),
       pSVar8 == (System_String_array *)0x0)) goto LAB_03f459a1;
    iVar6 = (int)pSVar8->max_length;
    if (__this_00 != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (iVar6 < 1) {
        return (Il2CppObject *)__this_00;
      }
      uVar11 = 0;
      if ((pSVar8->max_length & 0xffffffff) != 0) {
        do {
          lVar13 = MethodInfo_Void_Add;
          pSVar3 = (__this_00->fields).List;
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f459a1;
          pSVar10 = pSVar8->m_Items[uVar11];
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar3->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto LAB_03f459a1;
          uVar7 = (pSVar3->fields)._size;
          if (uVar7 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar7 + 1;
            pSVar4->m_Items[(int)uVar7] = (Il2CppObject *)pSVar10;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar7);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar3,(Il2CppObject *)pSVar10,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar11 = uVar11 + 1;
          uVar7 = (uint)pSVar8->max_length;
          if ((long)(int)uVar7 <= (long)uVar11) {
            return (Il2CppObject *)__this_00;
          }
        } while (uVar11 < uVar7);
      }
      goto LAB_03f459a6;
    }
  }
  if (iVar6 < 1) {
    return (Il2CppObject *)__this_00;
  }
LAB_03f459a1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Join>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Join_b__6_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48470

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__Join>b__6_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_03;
  System_String_array *value;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  System_Collections_Generic_List_Enumerator_T__c *pSVar8;
  Il2CppType *pIVar9;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (DAT_05703e10 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e10 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar6 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar6,MethodInfo_CustomLogicListBuiltin_ConvertTo_CustomLogicList);
    if (1 < (uint)__a->max_length) {
      pSVar7 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      if (DAT_05703df4 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
        il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
        il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
        il2cpp_init_method_metadata(&MethodInfo_Void_Add);
        il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
        il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
        il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
        il2cpp_init_method_metadata(&TypeInfo_List_string);
        DAT_05703df4 = '\x01';
      }
      __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
      System_Collections_Generic_List<object>___ctor(__this_03,MethodInfo_List_1_System_String);
      if ((pIVar6 != (Il2CppObject *)0x0) && (pIVar6[3].klass != (Il2CppClass *)0x0)) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
                   (System_Collections_Generic_List_object__o *)pIVar6[3].klass,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
        pSVar8 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
        pIVar9 = (Il2CppType *)auStack_48._8_8_;
        pIVar6 = pIStack_38;
        if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
          __this_01.fields._index = auStack_48._8_4_;
          __this_01.fields._version = auStack_48._12_4_;
          __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
          __this_01.fields._current = pIStack_38;
          bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                            (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
          if ((char)bVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
        }
        else {
          while (__this_00.fields._8_8_ = pIVar9,
                __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar8,
                __this_00.fields._current = pIVar6,
                bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                lVar4 = MethodInfo_Void_Add, auStack_48._0_8_ = pSVar8, auStack_48._8_8_ = pIVar9,
                pIStack_38 = pIVar6, (char)bVar5 != '\0') {
            if ((pIVar6 != (Il2CppObject *)0x0) && (pIVar6->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
              il2cpp_unwind_resume(pIVar6,DAT_057110b0);
            }
            piVar1 = &(__this_03->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this_03->fields)._items;
            if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            uVar2 = (__this_03->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this_03->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = pIVar6;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this_03,pIVar6,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
          }
        }
        __this_02.fields._8_8_ = auStack_48._8_8_;
        __this_02.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
        __this_02.fields._current = pIStack_38;
        System_Collections_Generic_List_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
          value = (System_String_array *)
                  System_Collections_Generic_List<object>__ToArray(__this_03,MethodInfo_String___ToArray);
          pSVar7 = System_String__Join(pSVar7,value,(MethodInfo *)0x0);
          return (Il2CppObject *)pSVar7;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Substring>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Substring_b__7_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48520

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__Substring>b__7_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t startIndex;
  System_String_o *pSVar1;
  
  if (DAT_05703e11 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e11 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f485cd:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      startIndex = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      if (pSVar1 != (System_String_o *)0x0) {
        pSVar1 = System_String__Substring(pSVar1,startIndex,(MethodInfo *)0x0);
        return (Il2CppObject *)pSVar1;
      }
      goto LAB_03f485cd;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__SubstringWithLength>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__SubstringWithLength_b__8_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f485e0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__SubstringWithLength>b__8_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t startIndex;
  int32_t length;
  System_String_o *pSVar1;
  
  if (DAT_05703e12 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e12 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        startIndex = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
        if (2 < (uint)__a->max_length) {
          length = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__a->m_Items[2],MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar1 != (System_String_o *)0x0) {
            pSVar1 = System_String__Substring(pSVar1,startIndex,length,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar1;
          }
          goto LAB_03f486ad;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f486ad:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Length>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Length_b__9_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f486c0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__Length>b__9_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined4 local_c;
  
  if (DAT_05703e13 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e13 = '\x01';
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
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if (pIVar1 != (Il2CppObject *)0x0) {
      local_c = *(undefined4 *)&pIVar1[1].klass;
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Replace>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Replace_b__10_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48760

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__Replace>b__10_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  System_String_o *oldValue;
  System_String_o *newValue;
  
  if (DAT_05703e14 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e14 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        oldValue = (System_String_o *)
                   CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String)
        ;
        if (2 < (uint)__a->max_length) {
          newValue = (System_String_o *)
                     CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                               (__a->m_Items[2],MethodInfo_String_ConvertTo_String);
          if (pSVar1 != (System_String_o *)0x0) {
            pSVar1 = System_String__Replace(pSVar1,oldValue,newValue,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar1;
          }
          goto LAB_03f48822;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f48822:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__11_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48830

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__Contains>b__11_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *__this_00;
  System_String_o *value;
  Il2CppObject *pIVar2;
  undefined1 local_19;
  
  if (DAT_05703e15 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e15 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f488f0:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      value = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      if (__this_00 != (System_String_o *)0x0) {
        bVar1 = System_String__Contains(__this_00,value,(MethodInfo *)0x0);
        local_19 = (undefined1)bVar1;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_19);
        return pIVar2;
      }
      goto LAB_03f488f0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__StartsWith>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__StartsWith_b__12_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48900

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__StartsWith>b__12_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *__this_00;
  System_String_o *value;
  Il2CppObject *pIVar2;
  undefined1 local_19;
  
  if (DAT_05703e16 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e16 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f489c0:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      value = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      if (__this_00 != (System_String_o *)0x0) {
        bVar1 = System_String__StartsWith(__this_00,value,(MethodInfo *)0x0);
        local_19 = (undefined1)bVar1;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_19);
        return pIVar2;
      }
      goto LAB_03f489c0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__EndsWith>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__EndsWith_b__13_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f489d0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__EndsWith>b__13_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *__this_00;
  System_String_o *value;
  Il2CppObject *pIVar2;
  undefined1 local_19;
  
  if (DAT_05703e17 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e17 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f48a90:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar2,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      value = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      if (__this_00 != (System_String_o *)0x0) {
        bVar1 = System_String__EndsWith(__this_00,value,(MethodInfo *)0x0);
        local_19 = (undefined1)bVar1;
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&local_19);
        return pIVar2;
      }
      goto LAB_03f48a90;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Trim>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Trim_b__14_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48aa0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__Trim>b__14_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (DAT_05703e18 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e18 = '\x01';
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
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__Trim(pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Insert>b__15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Insert_b__15_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48b20

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__Insert>b__15_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t startIndex;
  System_String_o *pSVar1;
  System_String_o *value;
  
  if (DAT_05703e19 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e19 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = (System_String_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
      if (1 < (uint)__a->max_length) {
        value = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
        if (2 < (uint)__a->max_length) {
          startIndex = CustomLogic_CustomLogicEvaluator__ConvertTo<int>
                                 (__a->m_Items[2],MethodInfo_Int32_ConvertTo_Int32);
          if (pSVar1 != (System_String_o *)0x0) {
            pSVar1 = System_String__Insert(pSVar1,startIndex,value,(MethodInfo *)0x0);
            return (Il2CppObject *)pSVar1;
          }
          goto LAB_03f48be8;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f48be8:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__Capitalize>b__16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__Capitalize_b__16_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48bf0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__Capitalize>b__16_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  System_String_o *pSVar2;
  
  if (DAT_05703e1a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e1a = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  obj = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = (System_String_o *)CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
  if (DAT_05703df5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05703df5 = '\x01';
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = MiscExtensions__UpperFirstLetter(pSVar2,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar2;
  }
  il2cpp_init_class();
  pSVar2 = MiscExtensions__UpperFirstLetter(pSVar2,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar2;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToUpper>b__17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToUpper_b__17_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48cd0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__ToUpper>b__17_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (DAT_05703e1b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e1b = '\x01';
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
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToUpper(pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__ToLower>b__18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__ToLower_b__18_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48d50

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__ToLower>b__18_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *pSVar1;
  
  if (DAT_05703e1c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e1c = '\x01';
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
    pSVar1 = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if (pSVar1 != (System_String_o *)0x0) {
      pSVar1 = System_String__ToLower(pSVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings.<>c$$<__CreateMethodBinding__IndexOf>b__19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings___c_____CreateMethodBinding__IndexOf_b__19_0 (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicStringBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3f48dd0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings_<>c__<__CreateMethodBinding__IndexOf>b__19_0
          (CustomLogic_CustomLogicStringBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicStringBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_String_o *__this_00;
  System_String_o *value;
  Il2CppObject *pIVar1;
  int32_t local_1c;
  
  if (DAT_05703e1d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05703e1d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03f48e95:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this_00 = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_String_ConvertTo_String);
    if (1 < (uint)__a->max_length) {
      value = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      if (__this_00 != (System_String_o *)0x0) {
        local_1c = System_String__IndexOf(__this_00,value,4,(MethodInfo *)0x0);
        pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_1c);
        return pIVar1;
      }
      goto LAB_03f48e95;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicStringBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3f45fe0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicStringBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05703df8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Newline");
    il2cpp_init_method_metadata(&"Insert");
    il2cpp_init_method_metadata(&"Replace");
    il2cpp_init_method_metadata(&"IndexOf");
    il2cpp_init_method_metadata(&"StartsWith");
    il2cpp_init_method_metadata(&"Length");
    il2cpp_init_method_metadata(&"FormatFloat");
    il2cpp_init_method_metadata(&"Join");
    il2cpp_init_method_metadata(&"Split");
    il2cpp_init_method_metadata(&"Trim");
    il2cpp_init_method_metadata(&"Capitalize");
    il2cpp_init_method_metadata(&"ToUpper");
    il2cpp_init_method_metadata(&"EndsWith");
    il2cpp_init_method_metadata(&"SubstringWithLength");
    il2cpp_init_method_metadata(&"Contains");
    il2cpp_init_method_metadata(&"ToLower");
    il2cpp_init_method_metadata(&"Substring");
    il2cpp_init_method_metadata(&"FormatFromList");
    DAT_05703df8 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x669c4959) {
    if (uVar3 < 0x3002539a) {
      if (uVar3 < 0xf317949) {
        if (uVar3 == 0x9390c03) {
          bVar4 = System_String__op_Equality(name,"Capitalize",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05703e07 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Capitalize_b__16);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05703e07 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x70);
            }
            else {
              pSVar7 = *(System_Func_T__object____object__o **)
                        (*(long *)(TypeInfo_c + 0xb8) + 0x70);
            }
            if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x70) = pSVar7;
              il2cpp_runtime_glue(lVar2 + 0x70,pSVar7);
            }
            pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar8;
          }
        }
        else if ((uVar3 == 0xf317948) &&
                (bVar4 = System_String__op_Equality(name,"Insert",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703e06 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Insert_b__15_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703e06 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x68)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x68) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x68,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if (uVar3 == 0x16a15383) {
        bVar4 = System_String__op_Equality(name,"Split",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703dfc == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Split_b__5_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703dfc = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x18,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x30025399) &&
              (bVar4 = System_String__op_Equality(name,"Join",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703dfd == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Join_b__6_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703dfd = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 < 0x38e8329d) {
      if (uVar3 == 0x325686ab) {
        bVar4 = System_String__op_Equality(name,"Newline",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703df9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Newline_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicStringBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicStringBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object);
            DAT_05703df9 = '\x01';
          }
          getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object);
          System_Func<object__object>___ctor();
          __this_00 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicStringBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (__this_00,getter,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicStringBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)__this_00;
        }
      }
      else if ((uVar3 == 0x38e8329c) &&
              (bVar4 = System_String__op_Equality(name,"SubstringWithLength",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703dff == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SubstringWithLeng);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703dff = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x30,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x43415f31) {
      bVar4 = System_String__op_Equality(name,"ToLower",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703e09 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToLower_b__18_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703e09 = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x80) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x80,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x5101d130) {
      bVar4 = System_String__op_Equality(name,"FormatFloat",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703dfa == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FormatFloat_b__3);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703dfa = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 8,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x669c4958) &&
            (bVar4 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703e02 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Contains_b__11_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703e02 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x48,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xc2b173c9) {
    if (uVar3 < 0xb4ede919) {
      if (uVar3 == 0xaadc121e) {
        bVar4 = System_String__op_Equality(name,"IndexOf",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05703e0a == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IndexOf_b__19_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05703e0a = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88)
            ;
          }
          else {
            pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88)
            ;
          }
          if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x88) = pSVar7;
            il2cpp_runtime_glue(lVar2 + 0x88,pSVar7);
          }
          pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0xb4ede918) &&
              (bVar4 = System_String__op_Equality(name,"ToUpper",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703e08 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToUpper_b__17_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703e08 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x78);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x78) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x78,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0xbbed73fc) {
      bVar4 = System_String__op_Equality(name,"StartsWith",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703e03 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StartsWith_b__12);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703e03 = '\x01';
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
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x50) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x50,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xc2b173c8) &&
            (bVar4 = System_String__op_Equality(name,"Substring",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703dfe == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Substring_b__7_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703dfe = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x28,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0xe4d54f64) {
    if (uVar3 == 0xcc5e1935) {
      bVar4 = System_String__op_Equality(name,"Length",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05703e00 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Length_b__9_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05703e00 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        else {
          pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
        }
        if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar7;
          il2cpp_runtime_glue(lVar2 + 0x38,pSVar7);
        }
        pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0xe4d54f63) &&
            (bVar4 = System_String__op_Equality(name,"Replace",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703e01 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Replace_b__10_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703e01 = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x40,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xf5c087e9) {
    bVar4 = System_String__op_Equality(name,"Trim",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703e05 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Trim_b__14_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703e05 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      else {
        pSVar7 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x60);
      }
      if (pSVar7 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x60) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x60,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xfe1f90a3) {
    bVar4 = System_String__op_Equality(name,"EndsWith",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05703e04 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__EndsWith_b__13_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05703e04 = '\x01';
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
        pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x58) = pSVar7;
        il2cpp_runtime_glue(lVar2 + 0x58,pSVar7);
      }
      pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xfefe1622) &&
          (bVar4 = System_String__op_Equality(name,"FormatFromList",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05703dfb == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FormatFromList_b);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05703dfb = '\x01';
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
      pSVar7 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar7;
      il2cpp_runtime_glue(lVar2 + 0x10,pSVar7);
    }
    pCVar8 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar8,pSVar7,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicStringBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreatePropertyBinding__Newline
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline (const MethodInfo* method);
// 0x3f466e0

CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreatePropertyBinding__Newline(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703df9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Newline_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object);
    DAT_05703df9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicStringBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__FormatFloat
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFloat (const MethodInfo* method);
// 0x3f46780

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFloat
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703dfa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FormatFloat_b__3);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703dfa = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__FormatFromList
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFromList (const MethodInfo* method);
// 0x3f468d0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__FormatFromList
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703dfb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FormatFromList_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703dfb = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Split
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Split (const MethodInfo* method);
// 0x3f46a20

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Split(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703dfc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Split_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703dfc = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Join
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Join (const MethodInfo* method);
// 0x3f46b70

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Join(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703dfd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Join_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703dfd = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Substring
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Substring (const MethodInfo* method);
// 0x3f46cc0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Substring(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703dfe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Substring_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703dfe = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__SubstringWithLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__SubstringWithLength (const MethodInfo* method);
// 0x3f46e10

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__SubstringWithLength
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703dff == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SubstringWithLeng);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703dff = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Length
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Length (const MethodInfo* method);
// 0x3f46f60

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Length(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703e00 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Length_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e00 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Replace
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Replace (const MethodInfo* method);
// 0x3f470b0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Replace(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703e01 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Replace_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e01 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x3f47200

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703e02 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Contains_b__11_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e02 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__StartsWith
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__StartsWith (const MethodInfo* method);
// 0x3f47350

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__StartsWith(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703e03 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StartsWith_b__12);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e03 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x50) = function;
    il2cpp_runtime_glue(lVar2 + 0x50,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__EndsWith
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__EndsWith (const MethodInfo* method);
// 0x3f474a0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__EndsWith(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703e04 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__EndsWith_b__13_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e04 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x58) = function;
    il2cpp_runtime_glue(lVar2 + 0x58,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Trim
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Trim (const MethodInfo* method);
// 0x3f475f0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Trim(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703e05 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Trim_b__14_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e05 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x60) = function;
    il2cpp_runtime_glue(lVar2 + 0x60,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Insert
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Insert (const MethodInfo* method);
// 0x3f47740

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Insert(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703e06 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Insert_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e06 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x68) = function;
    il2cpp_runtime_glue(lVar2 + 0x68,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__Capitalize
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Capitalize (const MethodInfo* method);
// 0x3f47890

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__Capitalize(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703e07 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Capitalize_b__16);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e07 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x70) = function;
    il2cpp_runtime_glue(lVar2 + 0x70,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__ToUpper
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToUpper (const MethodInfo* method);
// 0x3f479e0

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToUpper(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703e08 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToUpper_b__17_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e08 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x78) = function;
    il2cpp_runtime_glue(lVar2 + 0x78,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__ToLower
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToLower (const MethodInfo* method);
// 0x3f47b30

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__ToLower(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703e09 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ToLower_b__18_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e09 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x80) = function;
    il2cpp_runtime_glue(lVar2 + 0x80,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$__CreateMethodBinding__IndexOf
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o* CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__IndexOf (const MethodInfo* method);
// 0x3f47c80

CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *
CustomLogic_CustomLogicStringBuiltin_Bindings____CreateMethodBinding__IndexOf(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *__this;
  
  if (DAT_05703e0a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__IndexOf_b__19_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e0a = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x88);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicStringBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x88) = function;
    il2cpp_runtime_glue(lVar2 + 0x88,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicStringBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicStringBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicStringBuiltin);
  return __this;
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3f47dd0

void CustomLogic_CustomLogicStringBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05703e0b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Newline");
    il2cpp_init_method_metadata(&"Insert");
    il2cpp_init_method_metadata(&"Replace");
    il2cpp_init_method_metadata(&"IndexOf");
    il2cpp_init_method_metadata(&"StartsWith");
    il2cpp_init_method_metadata(&"Length");
    il2cpp_init_method_metadata(&"FormatFloat");
    il2cpp_init_method_metadata(&"Join");
    il2cpp_init_method_metadata(&"Split");
    il2cpp_init_method_metadata(&"Trim");
    il2cpp_init_method_metadata(&"Capitalize");
    il2cpp_init_method_metadata(&"ToUpper");
    il2cpp_init_method_metadata(&"EndsWith");
    il2cpp_init_method_metadata(&"SubstringWithLength");
    il2cpp_init_method_metadata(&"Contains");
    il2cpp_init_method_metadata(&"ToLower");
    il2cpp_init_method_metadata(&"Substring");
    il2cpp_init_method_metadata(&"FormatFromList");
    DAT_05703e0b = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Newline",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FormatFloat",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FormatFromList",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Split",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Join",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Substring",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SubstringWithLength",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Length",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Replace",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Contains",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"StartsWith",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"EndsWith",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Trim",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Insert",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Capitalize",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToUpper",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ToLower",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IndexOf",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin.Bindings$$<__CreatePropertyBinding__Newline>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicStringBuiltin_Bindings_____CreatePropertyBinding__Newline_g____getter_2_0 (CustomLogic_CustomLogicStringBuiltin_o* __i, const MethodInfo* method);
// 0x3f480d0

Il2CppObject *
CustomLogic_CustomLogicStringBuiltin_Bindings__<__CreatePropertyBinding__Newline>g____getter_2_0
          (CustomLogic_CustomLogicStringBuiltin_o *__i,MethodInfo *method)

{
  if (DAT_05703df0 == '\0') {
    il2cpp_init_method_metadata(&"\n");
    DAT_05703df0 = '\x01';
  }
  return "\n";
}


// CustomLogic.CustomLogicStringBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicStringBuiltin___ctor (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x3f45410

void CustomLogic_CustomLogicStringBuiltin___ctor
               (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703def == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_05703def = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method);
  return;
}


// CustomLogic.CustomLogicStringBuiltin$$get_Newline
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__get_Newline (const MethodInfo* method);
// 0x3f45470

System_String_o * CustomLogic_CustomLogicStringBuiltin__get_Newline(MethodInfo *method)

{
  if (DAT_05703df0 == '\0') {
    il2cpp_init_method_metadata(&"\n");
    DAT_05703df0 = '\x01';
  }
  return "\n";
}


// CustomLogic.CustomLogicStringBuiltin$$FormatFloat
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__FormatFloat (float val, int32_t decimals, const MethodInfo* method);
// 0x3f454a0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__FormatFloat(float val,int32_t decimals,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05703df1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05703df1 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = Utility_Util__FormatFloat(val,decimals,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicStringBuiltin$$FormatFromList
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__FormatFromList (System_String_o* str, CustomLogic_CustomLogicListBuiltin_o* list, const MethodInfo* method);
// 0x3f45510

System_String_o *
CustomLogic_CustomLogicStringBuiltin__FormatFromList
          (System_String_o *str,CustomLogic_CustomLogicListBuiltin_o *list,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *args;
  System_String_o *pSVar1;
  
  if (DAT_05703df2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object___ToArray);
    DAT_05703df2 = '\x01';
  }
  if ((list != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this = (list->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0)) {
    args = System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_Object___ToArray);
    pSVar1 = System_String__Format(str,args,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$Split
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicStringBuiltin__Split (System_String_o* toSplit, Il2CppObject* splitter, bool removeEmptyEntries, const MethodInfo* method);
// 0x3f45570

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicStringBuiltin__Split
          (System_String_o *toSplit,Il2CppObject *splitter,bool_conflict removeEmptyEntries,
          MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  uint16_t separator;
  int iVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  uint uVar8;
  ulong uVar9;
  Il2CppClass *pIVar10;
  long lVar11;
  
  if (DAT_05703df3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_string);
    DAT_05703df3 = '\x01';
  }
  __this = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this,(MethodInfo *)0x0);
  if (splitter == (Il2CppObject *)0x0) goto LAB_03f459a1;
  uVar8 = removeEmptyEntries & 0xff;
  pIVar10 = splitter->klass;
  if (pIVar10 == DAT_057110b0) {
    if (*(int *)&splitter[1].klass == 1) {
      separator = System_String__get_Chars((System_String_o *)splitter,0,(MethodInfo *)0x0);
      if ((toSplit == (System_String_o *)0x0) ||
         (pSVar6 = System_String__Split(toSplit,separator,uVar8,(MethodInfo *)0x0),
         pSVar6 == (System_String_array *)0x0)) goto LAB_03f459a1;
      iVar5 = (int)pSVar6->max_length;
      if (__this != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        if (iVar5 < 1) {
          return __this;
        }
        uVar9 = 0;
        if ((pSVar6->max_length & 0xffffffff) != 0) {
          do {
            lVar11 = MethodInfo_Void_Add;
            pSVar3 = (__this->fields).List;
            if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f459a1;
            pSVar7 = pSVar6->m_Items[uVar9];
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar3->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto LAB_03f459a1;
            uVar8 = (pSVar3->fields)._size;
            if (uVar8 < (uint)pSVar4->max_length) {
              (pSVar3->fields)._size = uVar8 + 1;
              pSVar4->m_Items[(int)uVar8] = (Il2CppObject *)pSVar7;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar8);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar3,(Il2CppObject *)pSVar7,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                        );
            }
            uVar9 = uVar9 + 1;
            uVar8 = (uint)pSVar6->max_length;
            if ((long)(int)uVar8 <= (long)uVar9) {
              return __this;
            }
          } while (uVar9 < uVar8);
        }
LAB_03f459a6:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      if ((toSplit == (System_String_o *)0x0) ||
         (pSVar6 = System_String__Split(toSplit,(System_String_o *)splitter,uVar8,(MethodInfo *)0x0)
         , pSVar6 == (System_String_array *)0x0)) goto LAB_03f459a1;
      iVar5 = (int)pSVar6->max_length;
      if (__this != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
        if (iVar5 < 1) {
          return __this;
        }
        uVar9 = 0;
        if ((pSVar6->max_length & 0xffffffff) != 0) {
          do {
            lVar11 = MethodInfo_Void_Add;
            pSVar3 = (__this->fields).List;
            if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f459a1;
            pSVar7 = pSVar6->m_Items[uVar9];
            piVar1 = &(pSVar3->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar3->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto LAB_03f459a1;
            uVar8 = (pSVar3->fields)._size;
            if (uVar8 < (uint)pSVar4->max_length) {
              (pSVar3->fields)._size = uVar8 + 1;
              pSVar4->m_Items[(int)uVar8] = (Il2CppObject *)pSVar7;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar8);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar3,(Il2CppObject *)pSVar7,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70)
                        );
            }
            uVar9 = uVar9 + 1;
            uVar8 = (uint)pSVar6->max_length;
            if ((long)(int)uVar8 <= (long)uVar9) {
              return __this;
            }
          } while (uVar9 < uVar8);
        }
        goto LAB_03f459a6;
      }
    }
  }
  else {
    bVar2 = (TypeInfo_CustomLogicListBuiltin->_2).naturalAligment;
    if (((pIVar10->_2).naturalAligment < bVar2) ||
       ((pIVar10->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicListBuiltin)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(splitter);
    }
    if (splitter[3].klass == (Il2CppClass *)0x0) goto LAB_03f459a1;
    pSVar6 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
    pIVar10 = splitter[3].klass;
    if (pIVar10 == (Il2CppClass *)0x0) goto LAB_03f459a1;
    if (pSVar6 != (System_String_array *)0x0) {
      lVar11 = 0;
      uVar9 = 0;
      do {
        if ((long)*(int *)&(pIVar10->_1).namespaze <= (long)uVar9) goto LAB_03f457f5;
        pSVar7 = (System_String_o *)
                 System_Collections_Generic_List<object>__get_Item
                           ((System_Collections_Generic_List_object__o *)pIVar10,(int32_t)uVar9,
                            MethodInfo_Object_get_Item);
        if ((pSVar7 != (System_String_o *)0x0) && ((Il2CppClass *)pSVar7->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(pSVar7);
        }
        if ((uint)pSVar6->max_length <= uVar9) goto LAB_03f459a6;
        pSVar6->m_Items[uVar9] = pSVar7;
        il2cpp_runtime_glue((long)pSVar6->m_Items + lVar11,pSVar7);
        uVar9 = uVar9 + 1;
        pIVar10 = splitter[3].klass;
        lVar11 = lVar11 + 8;
      } while (pIVar10 != (Il2CppClass *)0x0);
      goto LAB_03f459a1;
    }
    if (0 < *(int *)&(pIVar10->_1).namespaze) {
      System_Collections_Generic_List<object>__get_Item
                ((System_Collections_Generic_List_object__o *)pIVar10,0,MethodInfo_Object_get_Item);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_03f457f5:
    if ((toSplit == (System_String_o *)0x0) ||
       (pSVar6 = System_String__Split(toSplit,pSVar6,uVar8,(MethodInfo *)0x0),
       pSVar6 == (System_String_array *)0x0)) goto LAB_03f459a1;
    iVar5 = (int)pSVar6->max_length;
    if (__this != (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (iVar5 < 1) {
        return __this;
      }
      uVar9 = 0;
      if ((pSVar6->max_length & 0xffffffff) != 0) {
        do {
          lVar11 = MethodInfo_Void_Add;
          pSVar3 = (__this->fields).List;
          if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03f459a1;
          pSVar7 = pSVar6->m_Items[uVar9];
          piVar1 = &(pSVar3->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar3->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto LAB_03f459a1;
          uVar8 = (pSVar3->fields)._size;
          if (uVar8 < (uint)pSVar4->max_length) {
            (pSVar3->fields)._size = uVar8 + 1;
            pSVar4->m_Items[(int)uVar8] = (Il2CppObject *)pSVar7;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar8);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar3,(Il2CppObject *)pSVar7,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = uVar9 + 1;
          uVar8 = (uint)pSVar6->max_length;
          if ((long)(int)uVar8 <= (long)uVar9) {
            return __this;
          }
        } while (uVar9 < uVar8);
      }
      goto LAB_03f459a6;
    }
  }
  if (iVar5 < 1) {
    return __this;
  }
LAB_03f459a1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$Join
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Join (CustomLogic_CustomLogicListBuiltin_o* list, System_String_o* separator, const MethodInfo* method);
// 0x3f459e0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Join
          (CustomLogic_CustomLogicListBuiltin_o *list,System_String_o *separator,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar3;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  long lVar4;
  bool_conflict bVar5;
  System_Collections_Generic_List_object__o *__this_03;
  System_String_array *value;
  System_String_o *pSVar6;
  System_Collections_Generic_List_Enumerator_T__c *pSVar7;
  Il2CppType *pIVar8;
  Il2CppObject *item;
  undefined1 auStack_48 [16];
  Il2CppObject *pIStack_38;
  
  if (DAT_05703df4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    DAT_05703df4 = '\x01';
  }
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this_03,MethodInfo_List_1_System_String);
  if ((list != (CustomLogic_CustomLogicListBuiltin_o *)0x0) &&
     (__this = (list->fields).List, __this != (System_Collections_Generic_List_object__o *)0x0)) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,__this,MethodInfo_List_1_T__Enumerator_System_Object__GetEnumerato);
    pSVar7 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_48._0_8_;
    pIVar8 = (Il2CppType *)auStack_48._8_8_;
    item = pIStack_38;
    if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
      __this_01.fields._index = auStack_48._8_4_;
      __this_01.fields._version = auStack_48._12_4_;
      __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
      __this_01.fields._current = pIStack_38;
      bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar5 != '\0') {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      while (__this_00.fields._8_8_ = pIVar8,
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar7,
            __this_00.fields._current = item,
            bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            lVar4 = MethodInfo_Void_Add, auStack_48._0_8_ = pSVar7, auStack_48._8_8_ = pIVar8,
            pIStack_38 = item, (char)bVar5 != '\0') {
        if ((item != (Il2CppObject *)0x0) && (item->klass != DAT_057110b0)) {
                    /* WARNING: Subroutine does not return */
          il2cpp_unwind_resume(item,DAT_057110b0);
        }
        piVar1 = &(__this_03->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this_03->fields)._items;
        if (pSVar3 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this_03->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this_03->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = item;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this_03,item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
    __this_02.fields._8_8_ = auStack_48._8_8_;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
    __this_02.fields._current = pIStack_38;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
    if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
      value = (System_String_array *)
              System_Collections_Generic_List<object>__ToArray(__this_03,MethodInfo_String___ToArray);
      pSVar6 = System_String__Join(separator,value,(MethodInfo *)0x0);
      return pSVar6;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$Substring
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Substring (System_String_o* str, int32_t startIndex, const MethodInfo* method);
// 0x3f45c80

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Substring
          (System_String_o *str,int32_t startIndex,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__Substring(str,startIndex,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$SubstringWithLength
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__SubstringWithLength (System_String_o* str, int32_t startIndex, int32_t length, const MethodInfo* method);
// 0x3f45ca0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__SubstringWithLength
          (System_String_o *str,int32_t startIndex,int32_t length,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__Substring(str,startIndex,length,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$Length
// il2cpp: int32_t CustomLogic_CustomLogicStringBuiltin__Length (System_String_o* str, const MethodInfo* method);
// 0x3f45cc0

int32_t CustomLogic_CustomLogicStringBuiltin__Length(System_String_o *str,MethodInfo *method)

{
  if (str != (System_String_o *)0x0) {
    return (str->fields)._stringLength;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$Replace
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Replace (System_String_o* str, System_String_o* replace, System_String_o* with, const MethodInfo* method);
// 0x3f45cd0

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Replace
          (System_String_o *str,System_String_o *replace,System_String_o *with,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__Replace(str,replace,with,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__Contains (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x3f45cf0

bool_conflict
CustomLogic_CustomLogicStringBuiltin__Contains
          (System_String_o *str,System_String_o *match,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (str != (System_String_o *)0x0) {
    bVar1 = System_String__Contains(str,match,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$StartsWith
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__StartsWith (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x3f45d10

bool_conflict
CustomLogic_CustomLogicStringBuiltin__StartsWith
          (System_String_o *str,System_String_o *match,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (str != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(str,match,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$EndsWith
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__EndsWith (System_String_o* str, System_String_o* match, const MethodInfo* method);
// 0x3f45d30

bool_conflict
CustomLogic_CustomLogicStringBuiltin__EndsWith
          (System_String_o *str,System_String_o *match,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (str != (System_String_o *)0x0) {
    bVar1 = System_String__EndsWith(str,match,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$Trim
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Trim (System_String_o* str, const MethodInfo* method);
// 0x3f45d50

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Trim(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__Trim(str,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$Insert
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Insert (System_String_o* str, System_String_o* insert, int32_t index, const MethodInfo* method);
// 0x3f45d70

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Insert
          (System_String_o *str,System_String_o *insert,int32_t index,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__Insert(str,index,insert,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$Capitalize
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__Capitalize (System_String_o* str, const MethodInfo* method);
// 0x3f45d90

System_String_o *
CustomLogic_CustomLogicStringBuiltin__Capitalize(System_String_o *str,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (DAT_05703df5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    DAT_05703df5 = '\x01';
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_MiscExtensions + 0xe4);
  }
  if (iVar1 != 0) {
    pSVar2 = MiscExtensions__UpperFirstLetter(str,(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_init_class();
  pSVar2 = MiscExtensions__UpperFirstLetter(str,(MethodInfo *)0x0);
  return pSVar2;
}


// CustomLogic.CustomLogicStringBuiltin$$ToUpper
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__ToUpper (System_String_o* str, const MethodInfo* method);
// 0x3f45e00

System_String_o *
CustomLogic_CustomLogicStringBuiltin__ToUpper(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__ToUpper(str,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$ToLower
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__ToLower (System_String_o* str, const MethodInfo* method);
// 0x3f45e20

System_String_o *
CustomLogic_CustomLogicStringBuiltin__ToLower(System_String_o *str,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (str != (System_String_o *)0x0) {
    pSVar1 = System_String__ToLower(str,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$IndexOf
// il2cpp: int32_t CustomLogic_CustomLogicStringBuiltin__IndexOf (System_String_o* str, System_String_o* substring, const MethodInfo* method);
// 0x3f45e40

int32_t CustomLogic_CustomLogicStringBuiltin__IndexOf
                  (System_String_o *str,System_String_o *substring,MethodInfo *method)

{
  int32_t iVar1;
  
  if (str != (System_String_o *)0x0) {
    iVar1 = System_String__IndexOf(str,substring,4,(MethodInfo *)0x0);
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicStringBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicStringBuiltin__get_ClassName (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x3f45e60

System_String_o *
CustomLogic_CustomLogicStringBuiltin__get_ClassName
          (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05703df6 == '\0') {
    il2cpp_init_method_metadata(&"String");
    DAT_05703df6 = '\x01';
  }
  return "String";
}


// CustomLogic.CustomLogicStringBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_IsAbstract (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x3f45e90

bool_conflict
CustomLogic_CustomLogicStringBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicStringBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_IsStatic (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x3f45ea0

bool_conflict
CustomLogic_CustomLogicStringBuiltin__get_IsStatic
          (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicStringBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicStringBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicStringBuiltin_o* __this, const MethodInfo* method);
// 0x3f45eb0

bool_conflict
CustomLogic_CustomLogicStringBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicStringBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


