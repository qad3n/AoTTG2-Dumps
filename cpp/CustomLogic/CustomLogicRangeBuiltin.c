// Type: CustomLogic.CustomLogicRangeBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicRangeBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicRangeBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicRangeBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicRangeBuiltin_o* CustomLogic_CustomLogicRangeBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x40c9280

CustomLogic_CustomLogicRangeBuiltin_o *
CustomLogic_CustomLogicRangeBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t end;
  int32_t start;
  int32_t step;
  int iVar1;
  CustomLogic_CustomLogicRangeBuiltin_o *pCVar2;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  undefined8 uVar5;
  System_ArgumentException_o *__this;
  System_Exception_o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  MethodInfo *in_R8;
  int local_2c;
  
  if (g_data_057ac5cb == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicRangeBuiltin);
    g_data_057ac5cb = '\x01';
  }
  local_2c = 0;
  if (args != (System_Object_array *)0x0) {
    iVar1 = (int)args->max_length;
    if (iVar1 == 3) {
      __this = (System_ArgumentException_o *)args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)__this,MethodInfo_Int32_ConvertTo_Int32);
      if ((uint)args->max_length < 2) goto label_040c94bc;
      __this = (System_ArgumentException_o *)args->m_Items[1];
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)__this,MethodInfo_Int32_ConvertTo_Int32);
      if ((uint)args->max_length < 3) goto label_040c94bc;
      step = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(args->m_Items[2],MethodInfo_Int32_ConvertTo_Int32);
      pCVar2 = (CustomLogic_CustomLogicRangeBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicRangeBuiltin);
      goto label_040c9426;
    }
    if (iVar1 == 2) {
      __this = (System_ArgumentException_o *)args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      start = CustomLogic_CustomLogicEvaluator__ConvertTo_int_((Il2CppObject *)__this,MethodInfo_Int32_ConvertTo_Int32);
      if ((uint)args->max_length < 2) goto label_040c94bc;
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(args->m_Items[1],MethodInfo_Int32_ConvertTo_Int32);
      pCVar2 = (CustomLogic_CustomLogicRangeBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicRangeBuiltin);
    }
    else {
      if (iVar1 != 1) goto label_040c9440;
      obj = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      end = CustomLogic_CustomLogicEvaluator__ConvertTo_int_(obj,MethodInfo_Int32_ConvertTo_Int32);
      pCVar2 = (CustomLogic_CustomLogicRangeBuiltin_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicRangeBuiltin);
      start = 0;
    }
    step = 1;
label_040c9426:
    CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060(pCVar2,start,end,step,in_R8);
    return pCVar2;
  }
  iVar1 = il2cpp_runtime_helper_022b2c90();
label_040c9440:
  local_2c = iVar1;
  pSVar3 = System_Int32__ToString((int32_t)&local_2c,(MethodInfo *)0x0);
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"No CustomLogicRangeBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&" arguments");
  pSVar3 = System_String__Concat_3af7150(pSVar4,pSVar3,str2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_ArgumentException___ctor_3c12490(__this,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicRangeBuiltin_CreateInstance);
  il2cpp_runtime_helper_022b2b10(__this,uVar5);
label_040c94bc:
  il2cpp_runtime_helper_022b2ca0();
  pSVar3 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicRangeBuiltin not found");
  pSVar3 = System_String__Concat_3af7150(pSVar3,(System_String_o *)__this,pSVar4,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(__this_00,pSVar3,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar5);
  if (g_data_057ac5cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    g_data_057ac5cc = '\x01';
  }
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_01,MethodInfo_HashSet_1_System_String);
  **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_01;
  pCVar2 = (CustomLogic_CustomLogicRangeBuiltin_o *)
           il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_01);
  return pCVar2;
}


// CustomLogic.CustomLogicRangeBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicRangeBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x40c94d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicRangeBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str2;
  undefined8 uVar2;
  System_Exception_o *__this;
  System_Collections_Generic_HashSet_object__o *__this_00;
  CustomLogic_ICLMemberBinding_o *pCVar3;
  
  pSVar1 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Binding for '");
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"' in CustomLogicRangeBuiltin not found");
  pSVar1 = System_String__Concat_3af7150(pSVar1,name,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar2);
  System_Exception___ctor_3cf6120(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
  il2cpp_runtime_helper_022b2b10(__this,uVar2);
  if (g_data_057ac5cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    g_data_057ac5cc = '\x01';
  }
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this_00,MethodInfo_HashSet_1_System_String);
  **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this_00;
  pCVar3 = (CustomLogic_ICLMemberBinding_o *)
           il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this_00);
  return pCVar3;
}


// CustomLogic.CustomLogicRangeBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x40c9540

void CustomLogic_CustomLogicRangeBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (g_data_057ac5cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Bindings);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    g_data_057ac5cc = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(__this,MethodInfo_HashSet_1_System_String);
  **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t end, const MethodInfo* method);
// 0x40c9050

void CustomLogic_CustomLogicRangeBuiltin___ctor
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t end,MethodInfo *method)

{
  MethodInfo *in_R8;
  
  CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060(__this,0,end,1,in_R8);
  return;
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t start, int32_t end, const MethodInfo* method);
// 0x40c9210

void CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9210
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t start,int32_t end,MethodInfo *method)

{
  int32_t *piVar1;
  MethodInfo_362C220 *method_00;
  System_Object_array *pSVar2;
  long lVar3;
  Il2CppObject *item;
  undefined8 in_RAX;
  ulong uVar4;
  System_Collections_Generic_List_object__o *unaff_RBX;
  int iVar5;
  uint uVar6;
  ulong unaff_RBP;
  MethodInfo *method_01;
  undefined4 in_register_00000034;
  MethodInfo *pMVar7;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  undefined8 *unaff_R12;
  CustomLogic_CustomLogicListBuiltin_o *unaff_R13;
  ulong unaff_R14;
  undefined8 unaff_R15;
  undefined1 auVar8 [16];
  
  pMVar7 = (MethodInfo *)CONCAT44(in_register_00000034,start);
  uVar4 = (ulong)(uint)end;
  do {
    __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)__this;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(CustomLogic_CustomLogicListBuiltin_o **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = in_RAX;
    unaff_R15 = 1;
    unaff_R14 = uVar4 & 0xffffffff;
    unaff_RBP = (ulong)pMVar7 & 0xffffffff;
    method_01 = pMVar7;
    if (g_data_057ac5c9 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c908b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      g_data_057ac5c9 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c909a;
    CustomLogic_CustomLogicListBuiltin___ctor(__this_00,method_01);
    uVar6 = (uint)pMVar7;
    __this = (CustomLogic_CustomLogicRangeBuiltin_o *)g_data_057b9bb8;
    while( true ) {
      if ((int)uVar4 <= (int)uVar6) {
        g_data_057b9bb8 = (CustomLogic_CustomLogicListBuiltin_o *)__this;
        return;
      }
      unaff_RBX = (__this_00->fields).List;
      iVar5 = (int)unaff_RBP;
      *(int *)((long)register0x00000020 + -0x34) = iVar5;
      pMVar7 = (MethodInfo *)((long)register0x00000020 + -0x34);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c9103;
      g_data_057b9bb8 = (CustomLogic_CustomLogicListBuiltin_o *)__this;
      item = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
      lVar3 = MethodInfo_Void_Add;
      if (unaff_RBX == (System_Collections_Generic_List_object__o *)0x0) break;
      piVar1 = &(unaff_RBX->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar2 = (unaff_RBX->fields)._items;
      if (pSVar2 == (System_Object_array *)0x0) break;
      uVar6 = (unaff_RBX->fields)._size;
      if (uVar6 < (uint)pSVar2->max_length) {
        (unaff_RBX->fields)._size = uVar6 + 1;
        pSVar2->m_Items[(int)uVar6] = item;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c9145;
        il2cpp_runtime_helper_022b4080(pSVar2->m_Items + (int)uVar6,item);
        uVar6 = iVar5 + 1;
        unaff_RBP = (ulong)uVar6;
        __this = (CustomLogic_CustomLogicRangeBuiltin_o *)g_data_057b9bb8;
      }
      else {
        method_00 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c90da;
        System_Collections_Generic_List_object___AddWithResize(unaff_RBX,item,method_00);
        uVar6 = iVar5 + 1;
        unaff_RBP = (ulong)uVar6;
        __this = (CustomLogic_CustomLogicRangeBuiltin_o *)g_data_057b9bb8;
      }
    }
    unaff_R12 = &MethodInfo_Void_Add;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c9202;
    auVar8 = il2cpp_runtime_helper_022b2c90();
    uVar4 = auVar8._8_8_;
    in_RAX = auVar8._0_8_;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x38);
    unaff_R13 = __this_00;
  } while( true );
}


// CustomLogic.CustomLogicRangeBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicRangeBuiltin___ctor (CustomLogic_CustomLogicRangeBuiltin_o* __this, int32_t start, int32_t end, int32_t step, const MethodInfo* method);
// 0x40c9060

void CustomLogic_CustomLogicRangeBuiltin___ctor_3fc9060
               (CustomLogic_CustomLogicRangeBuiltin_o *__this,int32_t start,int32_t end,int32_t step,
               MethodInfo *method)

{
  int32_t *piVar1;
  MethodInfo_362C220 *pMVar2;
  System_Object_array *pSVar3;
  long lVar4;
  undefined8 in_RAX;
  Il2CppObject *pIVar5;
  ulong uVar6;
  System_Collections_Generic_List_object__o *unaff_RBX;
  int iVar7;
  uint uVar8;
  ulong unaff_RBP;
  undefined4 in_register_00000034;
  MethodInfo *pMVar9;
  MethodInfo *method_00;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  undefined8 *unaff_R12;
  CustomLogic_CustomLogicListBuiltin_o *unaff_R13;
  int iVar10;
  ulong unaff_R14;
  ulong unaff_R15;
  undefined1 auVar11 [16];
  
  pMVar9 = (MethodInfo *)CONCAT44(in_register_00000034,start);
  uVar6 = (ulong)(uint)end;
  do {
    __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)__this;
    *(ulong *)((long)register0x00000020 + -8) = unaff_RBP;
    *(ulong *)((long)register0x00000020 + -0x10) = unaff_R15;
    *(ulong *)((long)register0x00000020 + -0x18) = unaff_R14;
    *(CustomLogic_CustomLogicListBuiltin_o **)((long)register0x00000020 + -0x20) = unaff_R13;
    *(undefined8 **)((long)register0x00000020 + -0x28) = unaff_R12;
    *(System_Collections_Generic_List_object__o **)((long)register0x00000020 + -0x30) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x38) = in_RAX;
    unaff_R15 = (ulong)(uint)step;
    unaff_R14 = uVar6 & 0xffffffff;
    unaff_RBP = (ulong)pMVar9 & 0xffffffff;
    method_00 = pMVar9;
    if (g_data_057ac5c9 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c908b;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      g_data_057ac5c9 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c909a;
    CustomLogic_CustomLogicListBuiltin___ctor(__this_00,method_00);
    if (step == 0) {
      return;
    }
    uVar8 = (uint)pMVar9;
    iVar10 = (int)uVar6;
    __this = (CustomLogic_CustomLogicRangeBuiltin_o *)g_data_057b9bb8;
    if (0 < step) {
      do {
        if (iVar10 <= (int)uVar8) {
          return;
        }
        while( true ) {
          unaff_RBX = (__this_00->fields).List;
          iVar7 = (int)unaff_RBP;
          *(int *)((long)register0x00000020 + -0x34) = iVar7;
          pMVar9 = (MethodInfo *)((long)register0x00000020 + -0x34);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c9103;
          __this = (CustomLogic_CustomLogicRangeBuiltin_o *)g_data_057b9bb8;
          pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
          lVar4 = MethodInfo_Void_Add;
          if (unaff_RBX == (System_Collections_Generic_List_object__o *)0x0) goto label_040c91fd;
          piVar1 = &(unaff_RBX->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (unaff_RBX->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto label_040c91fd;
          uVar8 = (unaff_RBX->fields)._size;
          if (uVar8 < (uint)pSVar3->max_length) break;
          pMVar2 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
          *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c90da;
          System_Collections_Generic_List_object___AddWithResize(unaff_RBX,pIVar5,pMVar2);
          unaff_RBP = (ulong)(uint)(iVar7 + step);
          if (iVar10 <= iVar7 + step) {
            return;
          }
        }
        (unaff_RBX->fields)._size = uVar8 + 1;
        pSVar3->m_Items[(int)uVar8] = pIVar5;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c9145;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar8,pIVar5);
        uVar8 = iVar7 + step;
        unaff_RBP = (ulong)uVar8;
      } while( true );
    }
    while( true ) {
      if ((int)uVar8 <= iVar10) {
        g_data_057b9bb8 = (CustomLogic_CustomLogicListBuiltin_o *)__this;
        return;
      }
      unaff_RBX = (__this_00->fields).List;
      *(int *)((long)register0x00000020 + -0x38) = (int)unaff_RBP;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c91ac;
      pMVar9 = (MethodInfo *)((long)register0x00000020 + -0x38);
      g_data_057b9bb8 = (CustomLogic_CustomLogicListBuiltin_o *)__this;
      pIVar5 = (Il2CppObject *)il2cpp_runtime_helper_02304f30();
      lVar4 = MethodInfo_Void_Add;
      if (unaff_RBX == (System_Collections_Generic_List_object__o *)0x0) break;
      piVar1 = &(unaff_RBX->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (unaff_RBX->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) break;
      uVar8 = (unaff_RBX->fields)._size;
      if (uVar8 < (uint)pSVar3->max_length) {
        (unaff_RBX->fields)._size = uVar8 + 1;
        pSVar3->m_Items[(int)uVar8] = pIVar5;
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c91e6;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar8,pIVar5);
      }
      else {
        pMVar2 = *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70);
        *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c918a;
        System_Collections_Generic_List_object___AddWithResize(unaff_RBX,pIVar5,pMVar2);
      }
      uVar8 = (int)unaff_RBP + step;
      unaff_RBP = (ulong)uVar8;
      __this = (CustomLogic_CustomLogicRangeBuiltin_o *)g_data_057b9bb8;
    }
label_040c91fd:
    unaff_R12 = &MethodInfo_Void_Add;
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x40c9202;
    auVar11 = il2cpp_runtime_helper_022b2c90();
    uVar6 = auVar11._8_8_;
    in_RAX = auVar11._0_8_;
    step = 1;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x38);
    unaff_R13 = __this_00;
  } while( true );
}


// CustomLogic.CustomLogicRangeBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicRangeBuiltin__get_ClassName (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x40c9220

System_String_o *
CustomLogic_CustomLogicRangeBuiltin__get_ClassName
          (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  if (g_data_057ac5ca == '\0') {
    il2cpp_runtime_helper_023445d0(&"Range");
    g_data_057ac5ca = '\x01';
  }
  return "Range";
}


// CustomLogic.CustomLogicRangeBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_IsAbstract (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x40c9250

bool_conflict
CustomLogic_CustomLogicRangeBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicRangeBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_IsStatic (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x40c9260

bool_conflict
CustomLogic_CustomLogicRangeBuiltin__get_IsStatic
          (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicRangeBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicRangeBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicRangeBuiltin_o* __this, const MethodInfo* method);
// 0x40c9270

bool_conflict
CustomLogic_CustomLogicRangeBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicRangeBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


