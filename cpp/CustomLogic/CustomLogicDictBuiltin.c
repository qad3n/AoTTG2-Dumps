// Type: CustomLogic.CustomLogicDictBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicDictBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicDictBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicDictBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicDictBuiltin_o* CustomLogic_CustomLogicDictBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3db7ec0

CustomLogic_CustomLogicDictBuiltin_o *
CustomLogic_CustomLogicDictBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  uint in_EAX;
  int iVar2;
  int32_t capacity;
  CustomLogic_CustomLogicDictBuiltin_o *__this;
  System_String_o *pSVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  undefined1 auVar5 [16];
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702810 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702810 = '\x01';
  }
  uVar1 = (uint)uStack_18;
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_CustomLogicDictBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicDictBuiltin);
      CustomLogic_CustomLogicDictBuiltin___ctor(__this,method);
    }
    else {
      iVar2 = (int)args->max_length;
      if (iVar2 != 1) {
        uStack_18 = CONCAT44(iVar2,uVar1);
        pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
        str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicDictBuiltin constructor found that takes ");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
        pSVar3 = System_String__Concat(str0,pSVar3,str2,(MethodInfo *)0x0);
        uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
        System_ArgumentException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
        uVar4 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicDictBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_00,uVar4);
      }
      obj = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      capacity = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
      auVar5 = il2cpp_runtime_glue(TypeInfo_CustomLogicDictBuiltin);
      __this = auVar5._0_8_;
      CustomLogic_CustomLogicDictBuiltin___ctor(__this,capacity,auVar5._8_8_);
    }
    return __this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3db8ee0

void CustomLogic_CustomLogicDictBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_0570281b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_0570281b = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3db8f50

void CustomLogic_CustomLogicDictBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Clear>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Clear_b__5_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db8f60

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_<>c__<__CreateMethodBinding__Clear>b__5_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDictBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__Clear(__c,(MethodInfo *)__c);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Get>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Get_b__6_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db8f80

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_<>c__<__CreateMethodBinding__Get>b__6_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDictBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Il2CppObject *local_20;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    key = __a->m_Items[0];
    if (iVar1 < 2) {
      pIVar3 = (Il2CppObject *)0x0;
    }
    else {
      pIVar3 = __a->m_Items[1];
    }
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      if (DAT_05702809 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
        DAT_05702809 = '\x01';
      }
      local_20 = (Il2CppObject *)0x0;
      __this_00 = (__c->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                          (__this_00,key,&local_20,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar2 != '\0') {
          pIVar3 = local_20;
        }
        return pIVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Set>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Set_b__7_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db9020

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_<>c__<__CreateMethodBinding__Set>b__7_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDictBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  Il2CppObject *key;
  Il2CppObject *value;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (__a != (System_Object_array *)0x0) {
    iVar2 = (int)__a->max_length;
    if ((iVar2 == 0) || (iVar2 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      key = __a->m_Items[0];
      value = __a->m_Items[1];
      if (DAT_0570280a == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
        DAT_0570280a = '\x01';
      }
      __this_00 = (__c->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (__this_00,key,value,MethodInfo_Void_set_Item);
        piVar1 = &(__c->fields)._version;
        *piVar1 = *piVar1 + 1;
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Remove>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Remove_b__8_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db90a0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_<>c__<__CreateMethodBinding__Remove>b__8_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDictBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int32_t *piVar1;
  Il2CppObject *key;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      key = __a->m_Items[0];
      if (DAT_0570280b == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
        DAT_0570280b = '\x01';
      }
      __this_00 = (__c->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary<object__object>__Remove
                          (__this_00,key,MethodInfo_Boolean_Remove);
        if ((char)bVar2 != '\0') {
          piVar1 = &(__c->fields)._version;
          *piVar1 = *piVar1 + 1;
        }
        return (Il2CppObject *)0x0;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicDictBuiltin.Bindings.<>c$$<__CreateMethodBinding__Contains>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings___c_____CreateMethodBinding__Contains_b__9_0 (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicDictBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3db9110

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings_<>c__<__CreateMethodBinding__Contains>b__9_0
          (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicDictBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (__c != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
      pIVar2 = __a->m_Items[0];
      uStack_18 = in_RAX;
      if (DAT_0570280c == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
        DAT_0570280c = '\x01';
      }
      __this_00 = (__c->fields)._dict;
      __this = (CustomLogic_CustomLogicDictBuiltin_Bindings___c_o *)0x0;
      if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                          (__this_00,pIVar2,MethodInfo_Boolean_ContainsKey);
        uStack_18 = CONCAT17((char)bVar1,(undefined7)uStack_18);
        pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
        return pIVar2;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicDictBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3db8010

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicDictBuiltin_Bindings__CreateMemberBinding
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
  System_Func_T__object__o *pSVar7;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  
  if (DAT_05702811 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"Remove");
    il2cpp_init_method_metadata(&"Keys");
    il2cpp_init_method_metadata(&"Values");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Count");
    il2cpp_init_method_metadata(&"Set");
    il2cpp_init_method_metadata(&"Contains");
    il2cpp_init_method_metadata(&"Get");
    DAT_05702811 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x602b32ee) {
    if (uVar3 < 0x21a5901e) {
      if (uVar3 == 0x4a57fc2) {
        bVar4 = System_String__op_Equality(name,"Clear",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702815 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__5_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702815 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x21a5901d) &&
              (bVar4 = System_String__op_Equality(name,"Remove",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702818 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Remove_b__8_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702818 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x28b19ea3) {
      bVar4 = System_String__op_Equality(name,"Set",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702817 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Set_b__7_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702817 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x602b32ed) &&
            (bVar4 = System_String__op_Equality(name,"Keys",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702813 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Keys_g____gette);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object);
        DAT_05702813 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 < 0x8d4d225c) {
    if (uVar3 == 0x8d4d225b) {
      bVar4 = System_String__op_Equality(name,"Values",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702814 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Values_g____get);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object);
          DAT_05702814 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x669c4958) &&
            (bVar4 = System_String__op_Equality(name,"Contains",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702819 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Contains_b__9_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702819 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x28,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0xb6973ef7) {
    bVar4 = System_String__op_Equality(name,"Get",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702816 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Get_b__6_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702816 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0xe1e7b894) &&
          (bVar4 = System_String__op_Equality(name,"Count",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702812 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Count_g____gett);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object);
      DAT_05702812 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object);
    System_Func<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicDictBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Count
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count (const MethodInfo* method);
// 0x3db8400

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Count(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this;
  
  if (DAT_05702812 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Count_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object);
    DAT_05702812 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Keys
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Keys (const MethodInfo* method);
// 0x3db84a0

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Keys(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this;
  
  if (DAT_05702813 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Keys_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object);
    DAT_05702813 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreatePropertyBinding__Values
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Values (const MethodInfo* method);
// 0x3db8540

CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreatePropertyBinding__Values(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *__this;
  
  if (DAT_05702814 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Values_g____get);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object);
    DAT_05702814 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicDictBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicDictBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicDictBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Clear
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Clear (const MethodInfo* method);
// 0x3db85e0

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Clear(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this;
  
  if (DAT_05702815 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Clear_b__5_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702815 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Get
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Get (const MethodInfo* method);
// 0x3db8730

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Get(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this;
  
  if (DAT_05702816 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Get_b__6_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702816 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Set
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Set (const MethodInfo* method);
// 0x3db8880

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Set(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this;
  
  if (DAT_05702817 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Set_b__7_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702817 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Remove
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Remove (const MethodInfo* method);
// 0x3db89d0

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Remove(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this;
  
  if (DAT_05702818 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Remove_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702818 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$__CreateMethodBinding__Contains
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o* CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Contains (const MethodInfo* method);
// 0x3db8b20

CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *
CustomLogic_CustomLogicDictBuiltin_Bindings____CreateMethodBinding__Contains(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *__this;
  
  if (DAT_05702819 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicDictBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicDictBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Contains_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702819 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicDictBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicDictBuiltin__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicDictBuiltin)
  ;
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicDictBuiltin);
  return __this;
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3db8c70

void CustomLogic_CustomLogicDictBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_0570281a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"Remove");
    il2cpp_init_method_metadata(&"Keys");
    il2cpp_init_method_metadata(&"Values");
    il2cpp_init_method_metadata(&"Clear");
    il2cpp_init_method_metadata(&"Count");
    il2cpp_init_method_metadata(&"Set");
    il2cpp_init_method_metadata(&"Contains");
    il2cpp_init_method_metadata(&"Get");
    DAT_0570281a = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Count",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Keys",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Values",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Clear",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Get",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Remove",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Contains",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Count>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Count_g____getter_2_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x3db8e30

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings__<__CreatePropertyBinding__Count>g____getter_2_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  Il2CppObject *pIVar1;
  int32_t local_c;
  
  if (__i != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    if (DAT_05702807 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
      DAT_05702807 = '\x01';
    }
    __this = (__i->fields)._dict;
    if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      local_c = System_Collections_Generic_Dictionary<object__object>__get_Count
                          (__this,MethodInfo_Int32_get_Count);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_c);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Keys>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Keys_g____getter_3_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x3db8ea0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings__<__CreatePropertyBinding__Keys>g____getter_3_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__i,method);
    return (Il2CppObject *)(__i->fields)._cachedKeys;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin.Bindings$$<__CreatePropertyBinding__Values>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin_Bindings_____CreatePropertyBinding__Values_g____getter_4_0 (CustomLogic_CustomLogicDictBuiltin_o* __i, const MethodInfo* method);
// 0x3db8ec0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin_Bindings__<__CreatePropertyBinding__Values>g____getter_4_0
          (CustomLogic_CustomLogicDictBuiltin_o *__i,MethodInfo *method)

{
  if (__i != (CustomLogic_CustomLogicDictBuiltin_o *)0x0) {
    CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__i,method);
    return (Il2CppObject *)(__i->fields)._cachedValues;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ctor (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db74b0

void CustomLogic_CustomLogicDictBuiltin___ctor
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05702805 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Object_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_object__object);
    DAT_05702805 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_object__object);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,MethodInfo_Dictionary_2_System_Object_System_Object);
  (__this->fields)._dict = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._dict,__this_00);
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ctor (CustomLogic_CustomLogicDictBuiltin_o* __this, int32_t capacity, const MethodInfo* method);
// 0x3db7550

void CustomLogic_CustomLogicDictBuiltin___ctor
               (CustomLogic_CustomLogicDictBuiltin_o *__this,int32_t capacity,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_05702806 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_Object_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_object__object);
    DAT_05702806 = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_object__object);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_00,capacity,MethodInfo_Dictionary_2_System_Object_System_Object);
  (__this->fields)._dict = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._dict,__this_00);
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$get_Count
// il2cpp: int32_t CustomLogic_CustomLogicDictBuiltin__get_Count (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db75f0

int32_t CustomLogic_CustomLogicDictBuiltin__get_Count
                  (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  int32_t iVar1;
  
  if (DAT_05702807 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05702807 = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar1 = System_Collections_Generic_Dictionary<object__object>__get_Count(__this_00,MethodInfo_Int32_get_Count)
    ;
    return iVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin$$get_Keys
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDictBuiltin__get_Keys (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db7630

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDictBuiltin__get_Keys
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this,method);
  return (__this->fields)._cachedKeys;
}


// CustomLogic.CustomLogicDictBuiltin$$get_Values
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicDictBuiltin__get_Values (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db7750

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicDictBuiltin__get_Values
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate(__this,method);
  return (__this->fields)._cachedValues;
}


// CustomLogic.CustomLogicDictBuiltin$$Clear
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Clear (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db7760

void CustomLogic_CustomLogicDictBuiltin__Clear
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  int32_t iVar3;
  
  if (DAT_05702808 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    DAT_05702808 = '\x01';
  }
  pSVar2 = (__this->fields)._dict;
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar3 = System_Collections_Generic_Dictionary<object__object>__get_Count(pSVar2,MethodInfo_Int32_get_Count);
    if (iVar3 != 0) {
      pSVar2 = (__this->fields)._dict;
      if (pSVar2 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
      goto LAB_03db77c6;
      System_Collections_Generic_Dictionary<object__object>__Clear(pSVar2,MethodInfo_Void_Clear);
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
    }
    return;
  }
LAB_03db77c6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin$$Get
// il2cpp: Il2CppObject* CustomLogic_CustomLogicDictBuiltin__Get (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, Il2CppObject* defaultValue, const MethodInfo* method);
// 0x3db77e0

Il2CppObject *
CustomLogic_CustomLogicDictBuiltin__Get
          (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,Il2CppObject *defaultValue
          ,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  Il2CppObject *local_20;
  
  if (DAT_05702809 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    DAT_05702809 = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  __this_00 = (__this->fields)._dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                      (__this_00,key,&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar1 != '\0') {
      defaultValue = local_20;
    }
    return defaultValue;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin$$Set
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Set (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, Il2CppObject* value, const MethodInfo* method);
// 0x3db7860

void CustomLogic_CustomLogicDictBuiltin__Set
               (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,Il2CppObject *value,
               MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (DAT_0570280a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    DAT_0570280a = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this_00,key,value,MethodInfo_Void_set_Item);
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin$$Remove
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__Remove (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, const MethodInfo* method);
// 0x3db78c0

void CustomLogic_CustomLogicDictBuiltin__Remove
               (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,MethodInfo *method)

{
  int32_t *piVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar2;
  
  if (DAT_0570280b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Remove);
    DAT_0570280b = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__Remove
                      (__this_00,key,MethodInfo_Boolean_Remove);
    if ((char)bVar2 != '\0') {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin$$Contains
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__Contains (CustomLogic_CustomLogicDictBuiltin_o* __this, Il2CppObject* key, const MethodInfo* method);
// 0x3db7920

bool_conflict
CustomLogic_CustomLogicDictBuiltin__Contains
          (CustomLogic_CustomLogicDictBuiltin_o *__this,Il2CppObject *key,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  
  if (DAT_0570280c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    DAT_0570280c = '\x01';
  }
  __this_00 = (__this->fields)._dict;
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    bVar1 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      (__this_00,key,MethodInfo_Boolean_ContainsKey);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin$$ToString
// il2cpp: System_String_o* CustomLogic_CustomLogicDictBuiltin__ToString (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db7970

System_String_o *
CustomLogic_CustomLogicDictBuiltin__ToString
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  int32_t iVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_Fields __this_02;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  MethodInfo *method_01;
  int iVar5;
  undefined8 in_stack_ffffffffffffff68;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppRGCTXData *pIVar7;
  _union_229680 obj;
  undefined1 auStack_58 [16];
  _union_229680 _Stack_48;
  Il2CppObject *pIStack_40;
  
  if (DAT_0570280d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Obje);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_Object_System_Object__get);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    il2cpp_init_method_metadata(&"{");
    il2cpp_init_method_metadata(&": ");
    il2cpp_init_method_metadata(&"}");
    il2cpp_init_method_metadata(&", ");
    il2cpp_init_method_metadata(&"{}");
    DAT_0570280d = '\x01';
  }
  pSVar1 = (__this->fields)._dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    iVar2 = System_Collections_Generic_Dictionary<object__object>__get_Count(pSVar1,MethodInfo_Int32_get_Count);
    if (iVar2 == 0) {
      return "{}";
    }
    __this_02.builder = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this_02.builder,(MethodInfo *)0x0);
    il2cpp_runtime_glue(&stack0xffffffffffffff70,__this_02.builder);
    if (__this_02.builder != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append(__this_02.builder,"{",(MethodInfo *)0x0);
      pSVar1 = (__this->fields)._dict;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        iVar2 = System_Collections_Generic_Dictionary<object__object>__get_Count
                          (pSVar1,MethodInfo_Int32_get_Count);
        pSVar1 = (__this->fields)._dict;
        if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          System_Collections_Generic_Dictionary<object__object>__GetEnumerator
                    ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
                     pSVar1,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Obje);
          iVar5 = 0;
          pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)auStack_58._0_8_;
          pIVar7 = (Il2CppRGCTXData *)auStack_58._8_8_;
          obj = _Stack_48;
          while (__this_00.fields._8_8_ = __this_02.builder,
                __this_00.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                     in_stack_ffffffffffffff68,
                __this_00.fields._current.fields.key = (Il2CppObject *)pSVar6,
                __this_00.fields._current.fields.value = (Il2CppObject *)pIVar7,
                __this_00.fields._32_8_ = obj.genericMethod,
                bVar3 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                                  (__this_00,(MethodInfo_31CFE90 *)&stack0xffffffffffffff78),
                (char)bVar3 != '\0') {
            CustomLogic_CustomLogicDictBuiltin__<ToString>g__Append_18_0
                      (obj.genericMethod,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)
                       &stack0xffffffffffffff70,method_00);
            if (__this_02.builder == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            System_Text_StringBuilder__Append(__this_02.builder,": ",(MethodInfo *)0x0);
            CustomLogic_CustomLogicDictBuiltin__<ToString>g__Append_18_0
                      (pIStack_40,
                       (CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *)
                       &stack0xffffffffffffff70,method_01);
            if (iVar5 < iVar2 + -1) {
              if (__this_02.builder == (System_Text_StringBuilder_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              System_Text_StringBuilder__Append(__this_02.builder,", ",(MethodInfo *)0x0);
            }
            iVar5 = iVar5 + 1;
          }
          __this_01.fields._8_8_ = __this_02.builder;
          __this_01.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff68;
          __this_01.fields._current.fields.key = (Il2CppObject *)pSVar6;
          __this_01.fields._current.fields.value = (Il2CppObject *)pIVar7;
          __this_01.fields._32_8_ = obj.genericMethod;
          System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
                    (__this_01,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff78);
          if ((__this_02.builder != (System_Text_StringBuilder_o *)0x0) &&
             (System_Text_StringBuilder__Append(__this_02.builder,"}",(MethodInfo *)0x0),
             __this_02.builder != (System_Text_StringBuilder_o *)0x0)) {
            pSVar4 = (System_String_o *)
                     (**(code **)(*(long *)__this_02.builder + 0x168))
                               (__this_02.builder,
                                *(undefined8 *)(*(long *)__this_02.builder + 0x170));
            return pSVar4;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin$$InvalidateCache
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__InvalidateCache (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db77d0

void CustomLogic_CustomLogicDictBuiltin__InvalidateCache
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  piVar1 = &(__this->fields)._version;
  *piVar1 = *piVar1 + 1;
  return;
}


// CustomLogic.CustomLogicDictBuiltin$$EnsureListsUpToDate
// il2cpp: void CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db7640

void CustomLogic_CustomLogicDictBuiltin__EnsureListsUpToDate
               (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *enumerable;
  CustomLogic_CustomLogicListBuiltin_o *pCVar2;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *enumerable_00;
  MethodInfo *in_RCX;
  
  if (DAT_0570280e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_O);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
    DAT_0570280e = '\x01';
  }
  if (((__this->fields)._listsVersion == (__this->fields)._version) &&
     ((__this->fields)._cachedKeys != (CustomLogic_CustomLogicListBuiltin_o *)0x0)) {
    return;
  }
  pSVar1 = (__this->fields)._dict;
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    enumerable = System_Collections_Generic_Dictionary<object__object>__get_Keys
                           (pSVar1,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_O);
    pCVar2 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
    CustomLogic_CustomLogicListBuiltin___ctor
              (pCVar2,(System_Collections_Generic_IEnumerable_object__o *)enumerable,1,in_RCX);
    (__this->fields)._cachedKeys = pCVar2;
    il2cpp_runtime_glue(&(__this->fields)._cachedKeys,pCVar2);
    pSVar1 = (__this->fields)._dict;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      enumerable_00 =
           System_Collections_Generic_Dictionary<object__object>__get_Values(pSVar1,MethodInfo_Dictionary_2_TKey_TValue__ValueCollection_System);
      pCVar2 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
      CustomLogic_CustomLogicListBuiltin___ctor
                (pCVar2,(System_Collections_Generic_IEnumerable_object__o *)enumerable_00,1,in_RCX);
      (__this->fields)._cachedValues = pCVar2;
      il2cpp_runtime_glue(&(__this->fields)._cachedValues,pCVar2);
      (__this->fields)._listsVersion = (__this->fields)._version;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicDictBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicDictBuiltin__get_ClassName (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db7e60

System_String_o *
CustomLogic_CustomLogicDictBuiltin__get_ClassName
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_0570280f == '\0') {
    il2cpp_init_method_metadata(&"Dict");
    DAT_0570280f = '\x01';
  }
  return "Dict";
}


// CustomLogic.CustomLogicDictBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_IsAbstract (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db7e90

bool_conflict
CustomLogic_CustomLogicDictBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicDictBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_IsStatic (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db7ea0

bool_conflict
CustomLogic_CustomLogicDictBuiltin__get_IsStatic
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicDictBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicDictBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicDictBuiltin_o* __this, const MethodInfo* method);
// 0x3db7eb0

bool_conflict
CustomLogic_CustomLogicDictBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicDictBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicDictBuiltin$$<ToString>g__Append|18_0
// il2cpp: void CustomLogic_CustomLogicDictBuiltin___ToString_g__Append_18_0 (Il2CppObject* obj, CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o* , const MethodInfo* method);
// 0x3db7ce0

void CustomLogic_CustomLogicDictBuiltin__<ToString>g__Append_18_0
               (Il2CppObject *obj,
               CustomLogic_CustomLogicDictBuiltin___c__DisplayClass18_0_o *param_2,
               MethodInfo *method)

{
  System_Text_StringBuilder_o *pSVar1;
  System_String_o *value;
  
  if (obj == (Il2CppObject *)0x0) {
    value = (System_String_o *)0x0;
    pSVar1 = (param_2->fields).builder;
  }
  else {
    value = (System_String_o *)0x0;
    if (obj->klass == DAT_057110b0) {
      value = (System_String_o *)obj;
    }
    pSVar1 = (param_2->fields).builder;
  }
  if (pSVar1 != (System_Text_StringBuilder_o *)0x0) {
    if (value == (System_String_o *)0x0) {
      System_Text_StringBuilder__Append(pSVar1,obj,(MethodInfo *)0x0);
      return;
    }
    pSVar1 = System_Text_StringBuilder__Append(pSVar1,0x22,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Text_StringBuilder_o *)0x0) &&
       (pSVar1 = System_Text_StringBuilder__Append(pSVar1,value,(MethodInfo *)0x0),
       pSVar1 != (System_Text_StringBuilder_o *)0x0)) {
      System_Text_StringBuilder__Append(pSVar1,0x22,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


