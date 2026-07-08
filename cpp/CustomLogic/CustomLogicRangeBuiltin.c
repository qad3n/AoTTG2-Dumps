// Type: CustomLogic.CustomLogicRangeBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRangeBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicRangeBuiltin.cs  [prior source available (delta unverified)]
// --------------------------------

// CustomLogic.CustomLogicRangeBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRangeBuiltin_o* CustomLogic_CustomLogicRangeBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3dc39a0

CustomLogic_CustomLogicRangeBuiltin_o *
CustomLogic_CustomLogicRangeBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *pIVar2;
  int32_t end;
  int32_t start;
  int32_t step;
  CustomLogic_CustomLogicRangeBuiltin_o *__this;
  System_String_o *pSVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_ArgumentException_o *__this_00;
  MethodInfo *in_R8;
  int local_2c;
  
  if (DAT_0570289b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicRangeBuiltin);
    DAT_0570289b = '\x01';
  }
  local_2c = 0;
  if (args == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = (int)args->max_length;
  if (iVar1 != 3) {
    if (iVar1 == 2) {
      pIVar2 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
      if ((uint)args->max_length < 2) goto LAB_03dc3bdc;
      end = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(args->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      __this = (CustomLogic_CustomLogicRangeBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicRangeBuiltin);
    }
    else {
      if (iVar1 != 1) {
        local_2c = iVar1;
        pSVar3 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
        str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicRangeBuiltin constructor found that takes ");
        str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
        pSVar3 = System_String__Concat(str0,pSVar3,str2,(MethodInfo *)0x0);
        uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
        System_ArgumentException___ctor(__this_00,pSVar3,(MethodInfo *)0x0);
        uVar4 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicRangeBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(__this_00,uVar4);
      }
      pIVar2 = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      end = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
      __this = (CustomLogic_CustomLogicRangeBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicRangeBuiltin);
      start = 0;
    }
    step = 1;
LAB_03dc3b46:
    CustomLogic_CustomLogicRangeBuiltin___ctor(__this,start,end,step,in_R8);
    return __this;
  }
  pIVar2 = args->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  start = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(pIVar2,MethodInfo_Int32_ConvertTo_Int32);
  if (1 < (uint)args->max_length) {
    end = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(args->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
    if (2 < (uint)args->max_length) {
      step = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(args->m_Items[2],MethodInfo_Int32_ConvertTo_Int32);
      __this = (CustomLogic_CustomLogicRangeBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicRangeBuiltin);
      goto LAB_03dc3b46;
    }
  }
LAB_03dc3bdc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicRangeBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRangeBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3dc3bf0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRangeBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  undefined8 uVar2;
  System_Exception_o *__this;
  
  pSVar1 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicRangeBuiltin not found");
  pSVar1 = System_String__Concat(pSVar1,name,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar2);
  System_Exception___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicRangeBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3dc3c60

void CustomLogic_CustomLogicRangeBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_0570289c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    DAT_0570289c = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t end, const MethodInfo* method);
// 0x3dc3770

void CustomLogic_CustomLogicRangeBuiltin___ctor
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t end,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  CustomLogic_CustomLogicRangeBuiltin___ctor(__this,0,end,1,in_R8);
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t start, int32_t end, const MethodInfo* method);
// 0x3dc3930

void CustomLogic_CustomLogicRangeBuiltin___ctor
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t start,int32_t end,
               MethodInfo *method)

{
  MethodInfo *in_R8;
  
  CustomLogic_CustomLogicRangeBuiltin___ctor(__this,start,end,1,in_R8);
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t start, int32_t end, int32_t step, const MethodInfo* method);
// 0x3dc3780

void CustomLogic_CustomLogicRangeBuiltin___ctor
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t start,int32_t end,int32_t step
               ,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *pSVar4;
  long lVar5;
  undefined8 in_RAX;
  Il2CppObject *pIVar6;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  undefined8 local_38;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,start);
  local_38 = in_RAX;
  if (DAT_05702899 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05702899 = '\x01';
  }
  CustomLogic_CustomLogicListBuiltin___ctor
            ((CustomLogic_CustomLogicListBuiltin_o *)__this,method_00);
  if (step == 0) {
    return;
  }
  if (step < 1) {
    do {
      if (start <= end) {
        return;
      }
      while( true ) {
        pSVar3 = (__this->fields).List;
        local_38 = CONCAT44(local_38._4_4_,start);
        pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_38);
        lVar5 = MethodInfo_Void_Add;
        if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03dc391d;
        piVar1 = &(pSVar3->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar3->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) goto LAB_03dc391d;
        uVar2 = (pSVar3->fields)._size;
        if ((uint)pSVar4->max_length <= uVar2) break;
        (pSVar3->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = pIVar6;
        il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pIVar6);
        start = start + step;
        if (start <= end) {
          return;
        }
      }
      System_Collections_Generic_List<object>__AddWithResize
                (pSVar3,pIVar6,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      start = start + step;
    } while( true );
  }
joined_r0x03dc37cc:
  if (end <= start) {
    return;
  }
  do {
    pSVar3 = (__this->fields).List;
    local_38 = CONCAT44(start,(undefined4)local_38);
    pIVar6 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,(long)&local_38 + 4);
    lVar5 = MethodInfo_Void_Add;
    if (pSVar3 == (System_Collections_Generic_List_object__o *)0x0) {
LAB_03dc391d:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (pSVar3->fields)._items;
    if (pSVar4 == (System_Object_array *)0x0) goto LAB_03dc391d;
    uVar2 = (pSVar3->fields)._size;
    if ((uint)pSVar4->max_length <= uVar2) break;
    (pSVar3->fields)._size = uVar2 + 1;
    pSVar4->m_Items[(int)uVar2] = pIVar6;
    il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,pIVar6);
    start = start + step;
    if (end <= start) {
      return;
    }
  } while( true );
  System_Collections_Generic_List<object>__AddWithResize
            (pSVar3,pIVar6,
             *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
  start = start + step;
  goto joined_r0x03dc37cc;
}


// CustomLogic.CustomLogicRangeBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRangeBuiltin__get_ClassName (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x3dc3940

System_String_o *
CustomLogic_CustomLogicRangeBuiltin__get_ClassName
          (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_0570289a == '\0') {
    il2cpp_init_method_metadata(&"Range");
    DAT_0570289a = '\x01';
  }
  return "Range";
}


// CustomLogic.CustomLogicRangeBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_IsAbstract (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x3dc3970

bool_conflict
CustomLogic_CustomLogicRangeBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicRangeBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_IsStatic (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x3dc3980

bool_conflict
CustomLogic_CustomLogicRangeBuiltin__get_IsStatic
          (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicRangeBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x3dc3990

bool_conflict
CustomLogic_CustomLogicRangeBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


