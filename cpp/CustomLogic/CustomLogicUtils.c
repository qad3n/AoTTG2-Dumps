// Type: CustomLogic.CustomLogicUtils
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicUtils.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicUtils.cs
// --------------------------------

// CustomLogic.CustomLogicUtils$$OperatorException
// il2cpp: System_Exception_o* CustomLogic_CustomLogicUtils__OperatorException (System_String_o* operatorName, Il2CppObject* lhs, Il2CppObject* rhs, const MethodInfo* method);
// 0x5b80e10

System_Exception_o *
CustomLogic_CustomLogicUtils__OperatorException
          (System_String_o *operatorName,Il2CppObject *lhs,Il2CppObject *rhs,MethodInfo *method)

{
  System_Type_o *arg1;
  System_Type_o *arg2;
  System_String_o *message;
  System_Exception_o *__this;
  
  if (Il2CppMethodInitialized_075473a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Exception);
    il2cpp_codegen_initialize_runtime_metadata(&"Operator {0} not defined for types {1} and {2}");
    Il2CppMethodInitialized_075473a2 = '\x01';
  }
  if (lhs != (Il2CppObject *)0x0) {
    arg1 = System_Object__GetType(lhs,(MethodInfo *)0x0);
    if (rhs != (Il2CppObject *)0x0) {
      arg2 = System_Object__GetType(rhs,(MethodInfo *)0x0);
      message = System_String__Format_5302ca0
                          ("Operator {0} not defined for types {1} and {2}",(Il2CppObject *)operatorName,(Il2CppObject *)arg1,
                           (Il2CppObject *)arg2,(MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Exception);
      System_Exception___ctor_54fa440(__this,message,(MethodInfo *)0x0);
      return __this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUtils$$SerializeAst
// il2cpp: System_String_o* CustomLogic_CustomLogicUtils__SerializeAst (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x5b80ec0
// asm: 8 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5b8162e: mov rsi, rax
// asm:   0x5b81631: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5b81636: lea rax, [rip + 0x174febb]  ; "/"
// asm:   0x5b8163d: mov rdi, qword ptr [rax]
// asm:   0x5b81640: mov rsi, rbx
// asm:   0x5b81643: xor edx, edx
// asm:   0x5b81645: call 0x54030a0  ; System_String__Join()
// asm:   0x5b8164a: jmp 0x5b8122f

System_String_o *
CustomLogic_CustomLogicUtils__SerializeAst(CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  CustomLogic_CustomLogicBaseAst_c *pCVar4;
  void *pvVar5;
  System_String_c *pSVar6;
  bool bVar7;
  int32_t a;
  int32_t r;
  int32_t g;
  int32_t b;
  CustomLogic_CustomLogicBaseAst_o *pCVar8;
  System_String_o *pSVar9;
  Utility_Color255_o *__this;
  char *pcVar10;
  System_String_o **ppSVar11;
  System_String_array *value;
  MethodInfo *pMVar12;
  System_Collections_Generic_List_object__o *__this_00;
  float fVar13;
  float extraout_XMM0_Db;
  float extraout_XMM0_Db_00;
  float extraout_XMM0_Db_01;
  float extraout_XMM0_Db_02;
  float extraout_XMM0_Db_03;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dc_00;
  undefined4 extraout_XMM0_Dc_01;
  undefined4 extraout_XMM0_Dc_02;
  undefined4 extraout_XMM0_Dc_03;
  undefined4 extraout_XMM0_Dd;
  undefined4 extraout_XMM0_Dd_00;
  undefined4 extraout_XMM0_Dd_01;
  undefined4 extraout_XMM0_Dd_02;
  undefined4 extraout_XMM0_Dd_03;
  float in_XMM1_Da;
  UnityEngine_Color_o color;
  undefined8 local_68;
  float local_60 [2];
  UnityEngine_Color_Fields local_58;
  float local_48;
  float fStack_44;
  undefined8 uStack_40;
  UnityEngine_Color_Fields local_38;
  
  if (Il2CppMethodInitialized_075473a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Color255);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapScriptComponent);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Color");
    il2cpp_codegen_initialize_runtime_metadata(&"false");
    il2cpp_codegen_initialize_runtime_metadata(&"/");
    il2cpp_codegen_initialize_runtime_metadata(&"Vector3");
    il2cpp_codegen_initialize_runtime_metadata(&"true");
    Il2CppMethodInitialized_075473a3 = '\x01';
  }
  local_60[0] = 0.0;
  local_68 = 0;
  if (ast != (CustomLogic_CustomLogicBaseAst_o *)0x0) {
    pCVar4 = ast->klass;
    bVar1 = (pCVar4->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
      bVar2 = (TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst->_2).typeHierarchyDepth;
      if ((bVar2 <= bVar1) &&
         ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] ==
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicClassInstantiateExpressionAst)) {
        if ((*(uint64_t *)((char *)ast + 0x20)) == (void *)0x0) goto label_05b8165b;
        iVar3 = *(int *)((long)(*(uint64_t *)((char *)ast + 0x20)) + 0x18);
        bVar7 = System_String__op_Equality
                          ((System_String_o *)(*(uint64_t *)((char *)ast + 0x18)),"Color",(MethodInfo *)0x0);
        if (!bVar7) {
          bVar7 = System_String__op_Equality
                            ((System_String_o *)(*(uint64_t *)((char *)ast + 0x18)),"Vector3",(MethodInfo *)0x0);
          if (!bVar7) goto label_05b81217;
          if (iVar3 == 3) {
            if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
            pMVar12 = (MethodInfo *)0x0;
            pCVar8 = System_Collections_Generic_List_object___get_Item
                               ((*(uint64_t *)((char *)ast + 0x20)),0,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
            local_58.r = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar8,pMVar12);
            local_58.g = extraout_XMM0_Db_01;
            local_58.a = (float)extraout_XMM0_Dd_01;
            local_58.b = (float)extraout_XMM0_Dc_01;
            if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
            pMVar12 = (MethodInfo *)0x1;
            pCVar8 = System_Collections_Generic_List_object___get_Item
                               ((*(uint64_t *)((char *)ast + 0x20)),1,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
            local_48 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar8,pMVar12);
            fStack_44 = extraout_XMM0_Db_02;
            uStack_40 = CONCAT44(extraout_XMM0_Dd_02,extraout_XMM0_Dc_02);
            __this_00 = (*(uint64_t *)((char *)ast + 0x20));
            if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
            pMVar12 = (MethodInfo *)0x2;
override_prt_5b81519_6c978d7a:
            pCVar8 = System_Collections_Generic_List_object___get_Item
                               (__this_00,(int32_t)pMVar12,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
            in_XMM1_Da = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar8,pMVar12);
            local_68 = CONCAT44(local_48,local_58.r);
          }
          else if (iVar3 == 2) {
            if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
            pMVar12 = (MethodInfo *)0x0;
            pCVar8 = System_Collections_Generic_List_object___get_Item
                               ((*(uint64_t *)((char *)ast + 0x20)),0,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
            local_58.r = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar8,pMVar12);
            local_58.g = extraout_XMM0_Db_03;
            local_58.a = (float)extraout_XMM0_Dd_03;
            local_58.b = (float)extraout_XMM0_Dc_03;
            if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
            pMVar12 = (MethodInfo *)0x1;
            pCVar8 = System_Collections_Generic_List_object___get_Item
                               ((*(uint64_t *)((char *)ast + 0x20)),1,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
            fVar13 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar8,pMVar12);
            local_68 = CONCAT44(fVar13,local_58.r);
            in_XMM1_Da = 0.0;
          }
          else {
            if (iVar3 == 1) {
              if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
              pMVar12 = (MethodInfo *)0x0;
              pCVar8 = System_Collections_Generic_List_object___get_Item
                                 ((*(uint64_t *)((char *)ast + 0x20)),0,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
              local_58.r = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar8,pMVar12);
              local_58.g = extraout_XMM0_Db;
              local_58.a = (float)extraout_XMM0_Dd;
              local_58.b = (float)extraout_XMM0_Dc;
              if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
              pMVar12 = (MethodInfo *)0x0;
              pCVar8 = System_Collections_Generic_List_object___get_Item
                                 ((*(uint64_t *)((char *)ast + 0x20)),0,
                                  (MethodInfo_395CF20 *)
                                  MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
              local_48 = CustomLogic_CustomLogicUtils__BaseAstToFloat(pCVar8,pMVar12);
              fStack_44 = extraout_XMM0_Db_00;
              uStack_40 = CONCAT44(extraout_XMM0_Dd_00,extraout_XMM0_Dc_00);
              __this_00 = (*(uint64_t *)((char *)ast + 0x20));
              if (__this_00 == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
              pMVar12 = (MethodInfo *)0x0;
              goto override_prt_5b81519_6c978d7a;
            }
            local_68 = il2cpp_runtime_helper_05b8d690(0);
          }
          local_60[0] = in_XMM1_Da;
          value = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
          pSVar9 = System_Single__ToString((float *)&local_68,(MethodInfo *)0x0);
          if (value == (System_String_array *)0x0) goto label_05b8165b;
          if ((int)value->max_length == 0) goto label_05b81660;
          value->m_Items[0] = pSVar9;
          Il2CppCodeGenWriteBarrier(value->m_Items);
          pSVar9 = System_Single__ToString((float *)((long)&local_68 + 4),(MethodInfo *)0x0);
          if ((value->max_length & 0xfffffffe) == 0) goto label_05b81660;
          value->m_Items[1] = pSVar9;
          Il2CppCodeGenWriteBarrier(value->m_Items + 1);
          pSVar9 = System_Single__ToString(local_60,(MethodInfo *)0x0);
          if ((uint)value->max_length < 3) goto label_05b81660;
          ppSVar11 = value->m_Items + 2;
          value->m_Items[2] = pSVar9;
          goto label_05b8162e;
        }
        local_38.r = 1.0;
        local_38.g = 1.0;
        local_38.b = 1.0;
        local_38.a = 1.0;
        if (iVar3 == 4) {
          if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
          pMVar12 = (MethodInfo *)0x0;
          pCVar8 = System_Collections_Generic_List_object___get_Item
                             ((*(uint64_t *)((char *)ast + 0x20)),0,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
          r = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar8,pMVar12);
          if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
          pMVar12 = (MethodInfo *)0x1;
          pCVar8 = System_Collections_Generic_List_object___get_Item
                             ((*(uint64_t *)((char *)ast + 0x20)),1,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
          g = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar8,pMVar12);
          if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
          pMVar12 = (MethodInfo *)0x2;
          pCVar8 = System_Collections_Generic_List_object___get_Item
                             ((*(uint64_t *)((char *)ast + 0x20)),2,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
          b = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar8,pMVar12);
          if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
          pMVar12 = (MethodInfo *)0x3;
          pCVar8 = System_Collections_Generic_List_object___get_Item
                             ((*(uint64_t *)((char *)ast + 0x20)),3,
                              (MethodInfo_395CF20 *)
                              MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
          a = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar8,pMVar12);
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
label_05b813c3:
          Utility_Color255___ctor(__this,r,g,b,a,(MethodInfo *)0x0);
        }
        else {
          if (iVar3 == 3) {
            if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
            pMVar12 = (MethodInfo *)0x0;
            pCVar8 = System_Collections_Generic_List_object___get_Item
                               ((*(uint64_t *)((char *)ast + 0x20)),0,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
            r = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar8,pMVar12);
            if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
            pMVar12 = (MethodInfo *)0x1;
            pCVar8 = System_Collections_Generic_List_object___get_Item
                               ((*(uint64_t *)((char *)ast + 0x20)),1,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
            g = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar8,pMVar12);
            if ((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) goto label_05b8165b;
            pMVar12 = (MethodInfo *)0x2;
            pCVar8 = System_Collections_Generic_List_object___get_Item
                               ((*(uint64_t *)((char *)ast + 0x20)),2,
                                (MethodInfo_395CF20 *)
                                MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item);
            b = CustomLogic_CustomLogicUtils__BaseAstToInt(pCVar8,pMVar12);
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
            a = 0xff;
            goto label_05b813c3;
          }
          if (iVar3 == 1) {
            if (((*(uint64_t *)((char *)ast + 0x20)) == (System_Collections_Generic_List_object__o *)0x0) ||
               (pCVar8 = System_Collections_Generic_List_object___get_Item
                                   ((*(uint64_t *)((char *)ast + 0x20)),0,
                                    (MethodInfo_395CF20 *)
                                    MethodInfo_System_Collections_Generic_List_CustomLogicBaseAst_get_Item),
               pCVar8 == (CustomLogic_CustomLogicBaseAst_o *)0x0)) goto label_05b8165b;
            bVar1 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
            if (((pCVar8->klass->_2).typeHierarchyDepth < bVar1) ||
               ((pCVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
              il2cpp_codegen_raise_invalid_cast_exception(pCVar8);
            }
            pCVar4 = (*(uint64_t *)((char *)pCVar8 + 0x18));
            if (pCVar4 == (CustomLogic_CustomLogicBaseAst_c *)0x0) goto label_05b8165b;
            pvVar5 = (pCVar4->_1).image;
            pSVar9 = (System_String_o *)
                     (**(code **)((long)pvVar5 + 0x168))(pCVar4,*(undefined8 *)((long)pvVar5 + 0x170));
            UnityEngine_ColorUtility__TryParseHtmlString
                      (pSVar9,(UnityEngine_Color_o *)&local_38,(MethodInfo *)0x0);
            local_58.r = local_38.r;
            local_58.g = local_38.g;
            local_58.b = 0.0;
            local_58.a = 0.0;
            local_48 = local_38.b;
            fStack_44 = local_38.a;
            uStack_40 = 0;
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
            color.fields.b = local_48;
            color.fields.a = fStack_44;
            color.fields.r = local_58.r;
            color.fields.g = local_58.g;
            Utility_Color255___ctor_5ce7790(__this,color,(MethodInfo *)0x0);
          }
          else {
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Utility_Color255);
            Utility_Color255___ctor_5ce7770(__this,(MethodInfo *)0x0);
          }
        }
        value = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
        if ((__this == (Utility_Color255_o *)0x0) ||
           (pSVar9 = System_Int32__ToString(&(__this->fields).R,(MethodInfo *)0x0),
           value == (System_String_array *)0x0)) {
label_05b8165b:
          ThrowNullReferenceException();
        }
        if ((int)value->max_length != 0) {
          value->m_Items[0] = pSVar9;
          Il2CppCodeGenWriteBarrier(value->m_Items);
          pSVar9 = System_Int32__ToString(&(__this->fields).G,(MethodInfo *)0x0);
          if ((value->max_length & 0xfffffffe) != 0) {
            value->m_Items[1] = pSVar9;
            Il2CppCodeGenWriteBarrier(value->m_Items + 1);
            pSVar9 = System_Int32__ToString(&(__this->fields).B,(MethodInfo *)0x0);
            if (2 < (uint)value->max_length) {
              value->m_Items[2] = pSVar9;
              Il2CppCodeGenWriteBarrier(value->m_Items + 2);
              pSVar9 = System_Int32__ToString(&(__this->fields).A,(MethodInfo *)0x0);
              if ((value->max_length & 0xfffffffc) != 0) {
                ppSVar11 = value->m_Items + 3;
                value->m_Items[3] = pSVar9;
label_05b8162e:
                Il2CppCodeGenWriteBarrier(ppSVar11);
                pSVar9 = System_String__Join("/",value,(MethodInfo *)0x0);
                return pSVar9;
              }
            }
          }
        }
label_05b81660:
        ThrowIndexOutOfRangeException();
      }
    }
    else {
      pCVar4 = (*(uint64_t *)((char *)ast + 0x18));
      if (pCVar4 != (CustomLogic_CustomLogicBaseAst_c *)0x0) {
        pSVar6 = (pCVar4->_1).image;
        if ((pSVar6 == g_data_07556740) || (pSVar6 == g_data_07556710)) {
          pSVar9 = (*(pSVar6->vtable)._3_ToString.methodPtr)(pCVar4,(pSVar6->vtable)._3_ToString.method);
          return pSVar9;
        }
        if (pSVar6 == g_data_075566f0) {
          pcVar10 = il2cpp_vm_Object_Unbox((Il2CppObject *)pCVar4);
          if (*pcVar10 == '\0') {
            ppSVar11 = &"false";
          }
          else {
            ppSVar11 = &"true";
          }
          goto label_05b8122c;
        }
        if (pSVar6 == g_data_07556758) {
          if ((TypeInfo_Map_MapScriptComponent->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Map_MapScriptComponent);
          }
          pSVar9 = Map_MapScriptComponent__SanitizeParameter((System_String_o *)pCVar4,(MethodInfo *)0x0);
          return pSVar9;
        }
      }
    }
  }
label_05b81217:
  ppSVar11 = &g_data_07556758->static_fields->Empty;
label_05b8122c:
  return ((System_String_StaticFields *)ppSVar11)->Empty;
}


// CustomLogic.CustomLogicUtils$$BaseAstToFloat
// il2cpp: float CustomLogic_CustomLogicUtils__BaseAstToFloat (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x5b817a0

float CustomLogic_CustomLogicUtils__BaseAstToFloat(CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  CustomLogic_CustomLogicBaseAst_c *pCVar4;
  Il2CppObject *obj;
  int *piVar5;
  CustomLogic_CustomLogicSymbol_c *method_00;
  float fVar6;
  
  if (Il2CppMethodInitialized_075473a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    Il2CppMethodInitialized_075473a4 = '\x01';
  }
  if (ast != (CustomLogic_CustomLogicBaseAst_o *)0x0) {
    pCVar4 = ast->klass;
    bVar1 = (pCVar4->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
      pCVar4 = (*(uint64_t *)((char *)ast + 0x18));
      if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
      }
      fVar6 = System_Convert__ToSingle((Il2CppObject *)pCVar4,(MethodInfo *)0x0);
      return fVar6;
    }
    bVar2 = (TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst)) {
      if (((*(uint64_t *)((char *)ast + 0x20)) == (void *)0x0) ||
         (obj = *(Il2CppObject **)((long)(*(uint64_t *)((char *)ast + 0x20)) + 0x18), obj == (Il2CppObject *)0x0)) {
        ThrowNullReferenceException();
      }
      if ((obj->klass->_1).element_class != (TypeInfo_CustomLogic_CustomLogicSymbol->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      method_00 = TypeInfo_CustomLogic_CustomLogicSymbol;
      piVar5 = il2cpp_vm_Object_Unbox(obj);
      iVar3 = *piVar5;
      fVar6 = CustomLogic_CustomLogicUtils__BaseAstToFloat
                        ((CustomLogic_CustomLogicBaseAst_o *)(*(uint64_t *)((char *)ast + 0x18)),(MethodInfo *)method_00);
      if (iVar3 == 0x21) {
        return fVar6;
      }
      if (iVar3 == 0x22) {
        return -fVar6;
      }
    }
  }
  return 0.0;
}


// CustomLogic.CustomLogicUtils$$BaseAstToInt
// il2cpp: int32_t CustomLogic_CustomLogicUtils__BaseAstToInt (CustomLogic_CustomLogicBaseAst_o* ast, const MethodInfo* method);
// 0x5b81670

int32_t CustomLogic_CustomLogicUtils__BaseAstToInt(CustomLogic_CustomLogicBaseAst_o *ast,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  int iVar3;
  CustomLogic_CustomLogicBaseAst_c *pCVar4;
  Il2CppObject *obj;
  int32_t iVar5;
  int *piVar6;
  CustomLogic_CustomLogicSymbol_c *method_00;
  
  if (Il2CppMethodInitialized_075473a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Convert);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicSymbol);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst);
    Il2CppMethodInitialized_075473a5 = '\x01';
  }
  if (ast != (CustomLogic_CustomLogicBaseAst_o *)0x0) {
    pCVar4 = ast->klass;
    bVar1 = (pCVar4->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPrimitiveExpressionAst)) {
      pCVar4 = (*(uint64_t *)((char *)ast + 0x18));
      if ((TypeInfo_System_Convert->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Convert);
      }
      iVar5 = System_Convert__ToInt32((Il2CppObject *)pCVar4,(MethodInfo *)0x0);
      return iVar5;
    }
    bVar2 = (TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnaryExpressionAst)) {
      if (((*(uint64_t *)((char *)ast + 0x20)) == (void *)0x0) ||
         (obj = *(Il2CppObject **)((long)(*(uint64_t *)((char *)ast + 0x20)) + 0x18), obj == (Il2CppObject *)0x0)) {
        ThrowNullReferenceException();
      }
      if ((obj->klass->_1).element_class != (TypeInfo_CustomLogic_CustomLogicSymbol->_1).element_class) {
        il2cpp_codegen_raise_invalid_cast_exception();
      }
      method_00 = TypeInfo_CustomLogic_CustomLogicSymbol;
      piVar6 = il2cpp_vm_Object_Unbox(obj);
      iVar3 = *piVar6;
      iVar5 = CustomLogic_CustomLogicUtils__BaseAstToInt
                        ((CustomLogic_CustomLogicBaseAst_o *)(*(uint64_t *)((char *)ast + 0x18)),(MethodInfo *)method_00);
      if (iVar3 == 0x21) {
        return iVar5;
      }
      if (iVar3 == 0x22) {
        return -iVar5;
      }
    }
  }
  return 0;
}


