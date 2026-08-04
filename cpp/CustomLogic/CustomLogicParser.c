// Type: CustomLogic.CustomLogicParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicParser.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicParser.cs
// --------------------------------

// CustomLogic.CustomLogicParser$$get_Compiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_CustomLogicParser__get_Compiler (CustomLogic_CustomLogicParser_o* __this, const MethodInfo* method);
// 0x4262090

CustomLogic_CustomLogicCompiler_o *
CustomLogic_CustomLogicParser__get_Compiler(CustomLogic_CustomLogicParser_o *__this,MethodInfo *method)

{
  return (__this->fields)._Compiler_k__BackingField;
}


// CustomLogic.CustomLogicParser$$set_Compiler
// il2cpp: void CustomLogic_CustomLogicParser__set_Compiler (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicCompiler_o* value, const MethodInfo* method);
// 0x42620a0

void CustomLogic_CustomLogicParser__set_Compiler
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicCompiler_o *value,
               MethodInfo *method)

{
  (__this->fields)._Compiler_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Compiler_k__BackingField);
  return;
}


// CustomLogic.CustomLogicParser$$.ctor
// il2cpp: void CustomLogic_CustomLogicParser___ctor (CustomLogic_CustomLogicParser_o* __this, System_Collections_Generic_List_CustomLogicToken__o* tokens, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x42600d0

void CustomLogic_CustomLogicParser___ctor
               (CustomLogic_CustomLogicParser_o *__this,
               System_Collections_Generic_List_CustomLogicToken__o *tokens,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicToken__o *__this_00;
  
  if (g_data_057adc02 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_CustomLogic_CustomLogicToken);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_CustomLogicToken);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adc02 = '\x01';
  }
  __this_00 = (System_Collections_Generic_List_CustomLogicToken__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_CustomLogicToken);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicToken);
  (__this->fields)._tokens = __this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields,__this_00);
  (__this->fields).Error = "";
  il2cpp_runtime_helper_022b4080(&(__this->fields).Error);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._tokens = tokens;
  il2cpp_runtime_helper_022b4080(&__this->fields,tokens);
  (__this->fields)._Compiler_k__BackingField = compiler;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Compiler_k__BackingField,compiler);
  return;
}


// CustomLogic.CustomLogicParser$$GetLineNumberString
// il2cpp: System_String_o* CustomLogic_CustomLogicParser__GetLineNumberString (CustomLogic_CustomLogicParser_o* __this, int32_t line, const MethodInfo* method);
// 0x42620b0

System_String_o *
CustomLogic_CustomLogicParser__GetLineNumberString
          (CustomLogic_CustomLogicParser_o *__this,int32_t line,MethodInfo *method)

{
  CustomLogic_CustomLogicCompiler_o *__this_00;
  System_String_o *pSVar1;
  undefined1 local_4 [4];
  
  __this_00 = (__this->fields)._Compiler_k__BackingField;
  if (__this_00 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicCompiler__FormatLineNumber(__this_00,line,method);
    return pSVar1;
  }
  pSVar1 = System_Int32__ToString((int32_t)local_4,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicParser$$GetStartAst
// il2cpp: CustomLogic_CustomLogicStartAst_o* CustomLogic_CustomLogicParser__GetStartAst (CustomLogic_CustomLogicParser_o* __this, const MethodInfo* method);
// 0x42601a0

CustomLogic_CustomLogicStartAst_o *
CustomLogic_CustomLogicParser__GetStartAst(CustomLogic_CustomLogicParser_o *__this,MethodInfo *method)

{
  char cVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  long *plVar3;
  undefined8 uVar4;
  System_String_o *pSVar5;
  long lVar6;
  System_String_o *str0;
  long *plVar7;
  MethodInfo *in_RCX;
  bool bVar8;
  undefined1 auVar9 [12];
  
  if (g_data_057adc03 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicStartAst);
    g_data_057adc03 = '\x01';
  }
  pCVar2 = (CustomLogic_CustomLogicStartAst_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicStartAst);
  CustomLogic_CustomLogicStartAst___ctor(pCVar2,(MethodInfo *)0x0);
  CustomLogic_CustomLogicParser__ParseAst(__this,0,(CustomLogic_CustomLogicBaseAst_o *)pCVar2,in_RCX);
  if (pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
    CustomLogic_CustomLogicStartAst__AddEmptyMain(pCVar2,(MethodInfo *)0x0);
    return pCVar2;
  }
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ != 1) {
    _Unwind_Resume(auVar9._0_8_);
  }
  plVar3 = (long *)__cxa_begin_catch(auVar9._0_8_);
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar1 = il2cpp_runtime_helper_0233e000(uVar4,*(undefined8 *)*plVar3);
  if (cVar1 == '\0') goto label_04260387;
  plVar7 = (long *)*plVar3;
  __cxa_end_catch();
  if (plVar7 != (long *)0x0) {
    pSVar5 = (System_String_o *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
    (__this->fields).Error = pSVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields).Error,pSVar5);
    lVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    if (*(long *)(*(long *)(lVar6 + 0xb8) + 0x28) == 0) {
      bVar8 = false;
label_042602f0:
      pSVar5 = (System_String_o *)(**(code **)(*plVar7 + 0x188))(plVar7,*(undefined8 *)(*plVar7 + 400));
      str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Custom logic parsing error: ");
      pSVar5 = System_String__Concat_3ae5ba0(str0,pSVar5,(MethodInfo *)0x0);
      lVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_DebugConsole);
      if (*(int *)(lVar6 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar6);
      }
      ApplicationManagers_DebugConsole__LogCustomLogic(pSVar5,(uint)bVar8,(MethodInfo *)0x0);
      uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicStartAst);
      pCVar2 = (CustomLogic_CustomLogicStartAst_o *)il2cpp_runtime_helper_023052d0(uVar4);
      CustomLogic_CustomLogicStartAst___ctor(pCVar2,(MethodInfo *)0x0);
      plVar3 = (long *)0x0;
      if (pCVar2 != (CustomLogic_CustomLogicStartAst_o *)0x0) {
        CustomLogic_CustomLogicStartAst__AddEmptyMain(pCVar2,(MethodInfo *)0x0);
        return pCVar2;
      }
    }
    else {
      lVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
      lVar6 = *(long *)(*(long *)(lVar6 + 0xb8) + 0x28);
      if (lVar6 != 0) {
        lVar6 = *(long *)(lVar6 + 400);
        plVar3 = (long *)0x0;
        if (lVar6 != 0) {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
          bVar8 = *(char *)(lVar6 + 0x11) != '\0';
          goto label_042602f0;
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04260387:
  plVar7 = (long *)__cxa_allocate_exception(8);
  *plVar7 = *plVar3;
  __cxa_throw(plVar7,&PTR_PTR_05215060,0);
}


// CustomLogic.CustomLogicParser$$ParseExpression
// il2cpp: CustomLogic_CustomLogicBaseExpressionAst_o* CustomLogic_CustomLogicParser__ParseExpression (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicBaseExpressionAst_o* prev, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x4263640

CustomLogic_CustomLogicBaseExpressionAst_o *
CustomLogic_CustomLogicParser__ParseExpression
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicBaseExpressionAst_o *prev,
          int32_t startIndex,int32_t endIndex,MethodInfo *method)

{
  char **ppcVar1;
  int iVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  char *pcVar5;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  void *pvVar6;
  code *vtableDispatch;
  undefined1 *puVar7;
  int32_t iVar8;
  uint uVar9;
  bool_conflict bVar10;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar11;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar12;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar13;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar14;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar15;
  CustomLogic_CustomLogicBaseExpressionAst_Fields left;
  CustomLogic_CustomLogicBaseExpressionAst_Fields symbolValues;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar16;
  undefined8 uVar17;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar18;
  uint *puVar19;
  int *piVar20;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar21;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar22;
  undefined8 uVar24;
  System_String_array *pSVar25;
  System_String_o *pSVar26;
  System_Exception_o *__this_01;
  ulong uVar27;
  System_Int32_array *pSVar28;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar29;
  long lVar30;
  Il2CppObject *pIVar31;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar32;
  int32_t *piVar34;
  undefined4 extraout_var;
  System_String_array *pSVar35;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar36;
  System_Exception_o *pSVar37;
  System_String_o *pSVar38;
  System_String_o *str0;
  System_String_o *str2;
  undefined4 extraout_var_00;
  undefined4 *puVar39;
  undefined4 in_register_0000000c;
  MethodInfo *pMVar40;
  int extraout_EDX;
  int extraout_EDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ulong extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  ulong extraout_RDX_02;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar41;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar42;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar43;
  int iVar44;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar45;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar46;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar47;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar48;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar49;
  System_Collections_Generic_List_object__o *pSVar50;
  Il2CppClass *pIVar51;
  System_String_c *pSVar52;
  CustomLogic_CustomLogicBaseExpressionAst_Fields unaff_R12;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar53;
  ulong uVar54;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CVar55;
  uint uVar56;
  ulong uVar57;
  System_String_c *pSVar58;
  undefined1 uVar59;
  undefined1 auVar60 [16];
  System_Enum_o SStack_268;
  undefined4 uStack_258;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_250;
  undefined8 uStack_248;
  System_Exception_o *pSStack_240;
  System_String_o *pSStack_238;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_230;
  System_String_array *pSStack_228;
  System_String_c *pSStack_220;
  System_Enum_o SStack_218;
  int iStack_208;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_200;
  System_String_array *pSStack_1f8;
  System_String_c *pSStack_1f0;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_1e8;
  undefined8 uStack_1e0;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_1d8;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_1d0;
  undefined8 uStack_1c8;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCStack_1c0;
  ulong uStack_1b8;
  ulong uStack_1b0;
  System_String_c *pSStack_1a8;
  int iStack_194;
  System_String_o *pSStack_190;
  ulong uStack_188;
  System_Exception_o *pSStack_180;
  ulong uStack_178;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_170;
  System_String_c *pSStack_168;
  System_String_o *pSStack_160;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_158;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_150;
  System_String_array *pSStack_148;
  ulong uStack_140;
  System_Exception_o *pSStack_138;
  System_Enum_o SStack_130;
  int iStack_120;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_118;
  System_String_c *pSStack_110;
  ulong uStack_108;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_100;
  undefined8 uStack_f8;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_f0;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_e8;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_e0;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_d8;
  ulong uStack_d0;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_c8;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_c0;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_b8;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_b0;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_a8;
  ulong uStack_a0;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_98;
  uint uStack_84;
  int32_t iStack_80;
  uint uStack_7c;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_78;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_70;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_68;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_60;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_58;
  CustomLogic_CustomLogicBaseExpressionAst_Fields CStack_50;
  CustomLogic_CustomLogicBaseExpressionAst_Fields local_40;
  uint local_34;
  undefined8 uVar23;
  undefined8 uVar33;
  
  pMVar40 = (MethodInfo *)CONCAT44(in_register_0000000c,endIndex);
  CVar55.Line = 0;
  CVar55.Type = endIndex;
  local_40 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)__this;
  CVar21 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)prev;
  local_34 = endIndex;
joined_r0x04263670:
  CVar36 = CVar55;
  CVar16 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)prev;
  left.Line = 0;
  left.Type = startIndex;
  if (g_data_057adc04 == '\0') {
    CStack_50.Type = 0x426368c;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAssignmentExpressionAst);
    CStack_50.Type = 0x4263698;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBinopExpressionAst);
    CStack_50.Type = 0x42636a4;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstantiateExpressionAst);
    CStack_50.Type = 0x42636b0;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicFieldExpressionAst);
    CStack_50.Type = 0x42636bc;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMethodCallExpressionAst);
    CStack_50.Type = 0x42636c8;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNotExpressionAst);
    CStack_50.Type = 0x42636d4;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    CStack_50.Type = 0x42636e0;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUnaryExpressionAst);
    CStack_50.Type = 0x42636ec;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVariableExpressionAst);
    CStack_50.Type = 0x42636f8;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    CStack_50.Type = 0x4263704;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    CStack_50.Type = 0x4263710;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    CStack_50.Type = 0x4263718;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    CStack_50.Type = 0x4263724;
    CStack_50.Line = 0;
    il2cpp_runtime_helper_023445d0(&fld_5D8B4B09ABB99266596E0F938E9883F0254EF5FCDCE6ADBF340B1E55);
    g_data_057adc04 = '\x01';
  }
  symbolValues = (CustomLogic_CustomLogicBaseExpressionAst_Fields)&MethodInfo_CustomLogicToken_get_Item;
  CVar55 = CVar36;
  CVar47 = CVar21;
  CVar12 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)__this;
  prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)CVar16;
  if (*(System_Collections_Generic_List_object__o **)((long)__this + 0x10) !=
      (System_Collections_Generic_List_object__o *)0x0) {
    CStack_50.Type = 0x426379b;
    CStack_50.Line = 0;
    CVar47 = left;
    CVar11 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
             System_Collections_Generic_List_object___get_Item
                       (*(System_Collections_Generic_List_object__o **)((long)__this + 0x10),startIndex,
                        MethodInfo_CustomLogicToken_get_Item);
    iVar44 = CVar36.Type;
    if (iVar44 < startIndex) {
      uVar24._0_4_ = CVar16.Type;
      uVar24._4_4_ = CVar16.Line;
      return (CustomLogic_CustomLogicBaseExpressionAst_o *)uVar24;
    }
    pSVar50 = *(System_Collections_Generic_List_object__o **)((long)__this + 0x10);
    unaff_R12 = CVar16;
    if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) goto label_0426411a;
    if (startIndex < (pSVar50->fields)._size + -1) {
      CStack_50.Type = 0x42637cb;
      CStack_50.Line = 0;
      CVar12 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
               System_Collections_Generic_List_object___get_Item(pSVar50,startIndex + 1,MethodInfo_CustomLogicToken_get_Item);
    }
    else {
      CVar12.Type = 0;
      CVar12.Line = 0;
    }
    CStack_50.Type = 0x42637e2;
    CStack_50.Line = 0;
    CVar47 = left;
    iVar8 = CustomLogic_CustomLogicParser__FindLowestBinop
                      ((CustomLogic_CustomLogicParser_o *)local_40,startIndex,iVar44,pMVar40);
    CVar55 = local_40;
    prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)CVar11;
    if (0 < iVar8) {
      if (*(System_Collections_Generic_List_object__o **)((long)local_40 + 0x10) !=
          (System_Collections_Generic_List_object__o *)0x0) {
        CStack_50.Type = 0x4263f60;
        CStack_50.Line = 0;
        unaff_R12 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
                    System_Collections_Generic_List_object___get_Item
                              (*(System_Collections_Generic_List_object__o **)((long)local_40 + 0x10),iVar8,
                               MethodInfo_CustomLogicToken_get_Item);
        CStack_50.Type = 0x4263f73;
        CStack_50.Line = 0;
        left = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
               CustomLogic_CustomLogicParser__ParseExpression
                         ((CustomLogic_CustomLogicParser_o *)CVar55,
                          (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex,iVar8 + -1,method);
        pMVar40 = (MethodInfo *)(ulong)local_34;
        CStack_50.Type = 0x4263f89;
        CStack_50.Line = 0;
        CVar21 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
                 CustomLogic_CustomLogicParser__ParseExpression
                           ((CustomLogic_CustomLogicParser_o *)CVar55,
                            (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar8 + 1,local_34,method);
        CStack_50.Type = 0x4263fa0;
        CStack_50.Line = 0;
        symbolValues = (CustomLogic_CustomLogicBaseExpressionAst_Fields)il2cpp_runtime_helper_022b2a40(TypeInfo_int,5);
        CStack_50.Type = 0x4263fb7;
        CStack_50.Line = 0;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                  ((System_Array_o *)symbolValues,fld_5D8B4B09ABB99266596E0F938E9883F0254EF5FCDCE6ADBF340B1E55,(MethodInfo *)0x0);
        CStack_50.Type = 0x4263fc5;
        CStack_50.Line = 0;
        CVar47 = unaff_R12;
        bVar10 = CustomLogic_CustomLogicParser__IsAnySymbolValue
                           ((CustomLogic_CustomLogicParser_o *)CVar55,
                            (CustomLogic_CustomLogicToken_o *)unaff_R12,(System_Int32_array *)symbolValues,
                            pMVar40);
        CVar12 = CVar21;
        if ((char)bVar10 == '\0') {
          if (unaff_R12 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
            uVar56 = *(uint *)&((Il2CppType *)((long)unaff_R12 + 0x20))->data;
            prev._4_4_ = 0;
            prev._0_4_ = uVar56;
            CStack_50.Type = 0x426403c;
            CStack_50.Line = 0;
            CVar16 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicBinopExpressionAst);
            CStack_50.Type = 0x426404f;
            CStack_50.Line = 0;
            CVar47 = unaff_R12;
            CustomLogic_CustomLogicBinopExpressionAst___ctor
                      ((CustomLogic_CustomLogicBinopExpressionAst_o *)CVar16,
                       (CustomLogic_CustomLogicToken_o *)unaff_R12,uVar56,(MethodInfo *)0x0);
            symbolValues.Type = 0;
            symbolValues.Line = 0;
            if (CVar16 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
              *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)((long)CVar16 + 0x18) = left;
              CStack_50.Type = 0x4264068;
              CStack_50.Line = 0;
              il2cpp_runtime_helper_022b4080((char **)((long)CVar16 + 0x18),left);
              pSVar26 = (System_String_o *)((long)CVar16 + 0x20);
              *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)((long)CVar16 + 0x20) = CVar21;
              goto label_04264103;
            }
          }
        }
        else if (CVar11 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
          uVar56 = *(uint *)&((Il2CppType *)((long)CVar11 + 0x20))->data;
          prev._4_4_ = 0;
          prev._0_4_ = uVar56;
          CStack_50.Type = 0x4263fe5;
          CStack_50.Line = 0;
          CVar16 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicAssignmentExpressionAst);
          method = (MethodInfo *)0x0;
          CStack_50.Type = 0x4263ffc;
          CStack_50.Line = 0;
          CVar47 = left;
          CustomLogic_CustomLogicAssignmentExpressionAst___ctor
                    ((CustomLogic_CustomLogicAssignmentExpressionAst_o *)CVar16,
                     (CustomLogic_CustomLogicBaseExpressionAst_o *)left,
                     (CustomLogic_CustomLogicToken_o *)unaff_R12,uVar56,(MethodInfo *)0x0);
          symbolValues.Type = 0;
          symbolValues.Line = 0;
          if (CVar16 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
            pSVar26 = (System_String_o *)((long)CVar16 + 0x28);
            *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)((long)CVar16 + 0x28) = CVar21;
            goto label_04264103;
          }
        }
      }
      goto label_0426411a;
    }
    CVar55 = CVar36;
    if (CVar11 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) goto label_0426411a;
    iVar2 = *(int *)((long)CVar11 + 0x10);
    CVar14 = g_data_057b9bb8;
    if (iVar2 == 0) {
      if (*(long **)((long)CVar11 + 0x18) != (long *)0x0) {
        if (*(Il2CppClass **)(**(long **)((long)CVar11 + 0x18) + 0x40) !=
            ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264124;
        CStack_50.Type = 0x426388e;
        CStack_50.Line = 0;
        CVar47 = g_data_057b9bb8;
        auVar60 = il2cpp_runtime_helper_02305440();
        __this = (CustomLogic_CustomLogicParser_o *)local_40;
        if (*auVar60._0_8_ != 0xb) {
          iVar2 = *(int *)((long)CVar11 + 0x10);
          CVar14 = g_data_057b9bb8;
          goto joined_r0x0426389d;
        }
        CStack_50.Type = 0x4263740;
        CStack_50.Line = 0;
        uVar56 = CustomLogic_CustomLogicParser__FindClosingParen
                           ((CustomLogic_CustomLogicParser_o *)local_40,startIndex,auVar60._8_8_);
        pMVar40 = (MethodInfo *)(ulong)(uVar56 - 1);
        CVar21.Type = 0;
        CVar21.Line = 0;
        CStack_50.Type = 0x4263756;
        CStack_50.Line = 0;
        prev = CustomLogic_CustomLogicParser__ParseExpression
                         (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex + 1,uVar56 - 1,
                          method);
        startIndex = uVar56;
        goto joined_r0x0426376d;
      }
      goto label_0426411a;
    }
joined_r0x0426389d:
    g_data_057b9bb8 = CVar14;
    if (iVar2 != 0) {
      __this = (CustomLogic_CustomLogicParser_o *)local_40;
      if (iVar2 != 1) goto joined_r0x04263973;
      CVar21 = *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)((long)CVar11 + 0x18);
      iVar8 = *(int32_t *)&((Il2CppType *)((long)CVar11 + 0x20))->data;
      CStack_50.Type = 0x4263823;
      CStack_50.Line = 0;
      prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPrimitiveExpressionAst);
      CVar36.Line = 0;
      CVar36.Type = local_34;
      pMVar40 = (MethodInfo *)0x0;
      CStack_50.Type = 0x4263839;
      CStack_50.Line = 0;
      CustomLogic_CustomLogicPrimitiveExpressionAst___ctor
                ((CustomLogic_CustomLogicPrimitiveExpressionAst_o *)prev,(Il2CppObject *)CVar21,iVar8,
                 (MethodInfo *)0x0);
      __this = (CustomLogic_CustomLogicParser_o *)local_40;
joined_r0x0426376d:
      startIndex = startIndex + 1;
      CVar55 = CVar36;
      goto joined_r0x04263670;
    }
    if (*(long **)((long)CVar11 + 0x18) == (long *)0x0) goto label_0426411a;
    if (*(Il2CppClass **)(**(long **)((long)CVar11 + 0x18) + 0x40) !=
        ((Il2CppObject *)((long)CVar14 + 0x40))->klass) goto label_04264124;
    CStack_50.Type = 0x42638d1;
    CStack_50.Line = 0;
    piVar20 = (int *)il2cpp_runtime_helper_02305440();
    CVar47 = CVar14;
    if (*piVar20 == 0x10) {
      if (CVar12 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
        uVar56 = *(uint *)&((Il2CppType *)((long)CVar12 + 0x20))->data;
        CStack_50.Type = 0x4264097;
        CStack_50.Line = 0;
        CVar16 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNotExpressionAst);
        CStack_50.Type = 0x42640a7;
        CStack_50.Line = 0;
        CustomLogic_CustomLogicNotExpressionAst___ctor
                  ((CustomLogic_CustomLogicNotExpressionAst_o *)CVar16,uVar56,(MethodInfo *)0x0);
        CVar47 = CVar16;
label_042640e6:
        left.Type = startIndex + 1;
        CVar12.Line = 0;
        CVar12.Type = uVar56;
        left.Line = 0;
        CStack_50.Type = 0x42640f0;
        CStack_50.Line = 0;
        CVar21 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
                 CustomLogic_CustomLogicParser__ParseExpression
                           ((CustomLogic_CustomLogicParser_o *)local_40,
                            (CustomLogic_CustomLogicBaseExpressionAst_o *)CVar47,left.Type,iVar44,method);
        symbolValues.Type = 0;
        symbolValues.Line = 0;
        if (CVar16 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
          pSVar26 = (System_String_o *)((long)CVar16 + 0x18);
          ((System_String_o *)((long)CVar16 + 0x18))->klass = (System_String_c *)CVar21;
label_04264103:
          CStack_50.Type = 0x4264108;
          CStack_50.Line = 0;
          il2cpp_runtime_helper_022b4080(pSVar26,CVar21);
          uVar17._0_4_ = CVar16.Type;
          uVar17._4_4_ = CVar16.Line;
          return (CustomLogic_CustomLogicBaseExpressionAst_o *)uVar17;
        }
      }
      goto label_0426411a;
    }
    iVar2 = *(int *)((long)CVar11 + 0x10);
    __this = (CustomLogic_CustomLogicParser_o *)local_40;
    if (iVar2 != 0) goto joined_r0x04263973;
    if (*(long **)((long)CVar11 + 0x18) == (long *)0x0) goto label_0426411a;
    CVar14 = g_data_057b9bb8;
    if (*(Il2CppClass **)(**(long **)((long)CVar11 + 0x18) + 0x40) !=
        ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264124;
    CStack_50.Type = 0x4263914;
    CStack_50.Line = 0;
    CVar47 = g_data_057b9bb8;
    piVar20 = (int *)il2cpp_runtime_helper_02305440();
    if (*piVar20 == 0x1f) {
label_042640b5:
      uVar56 = *(uint *)&((Il2CppType *)((long)CVar11 + 0x20))->data;
      CStack_50.Type = 0x42640c8;
      CStack_50.Line = 0;
      CVar16 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicUnaryExpressionAst);
      CStack_50.Type = 0x42640db;
      CStack_50.Line = 0;
      CustomLogic_CustomLogicUnaryExpressionAst___ctor
                ((CustomLogic_CustomLogicUnaryExpressionAst_o *)CVar16,
                 (CustomLogic_CustomLogicToken_o *)CVar11,uVar56,(MethodInfo *)0x0);
      CVar47.Type = 0;
      CVar47.Line = 0;
      goto label_042640e6;
    }
    iVar2 = *(int *)((long)CVar11 + 0x10);
    __this = (CustomLogic_CustomLogicParser_o *)local_40;
    if (iVar2 != 0) goto joined_r0x04263973;
    if (*(long **)((long)CVar11 + 0x18) == (long *)0x0) goto label_0426411a;
    CVar14 = g_data_057b9bb8;
    if (*(Il2CppClass **)(**(long **)((long)CVar11 + 0x18) + 0x40) !=
        ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264124;
    CStack_50.Type = 0x4263953;
    CStack_50.Line = 0;
    CVar47 = g_data_057b9bb8;
    piVar20 = (int *)il2cpp_runtime_helper_02305440();
    if (*piVar20 == 0x1e) goto label_042640b5;
    iVar2 = *(int *)((long)CVar11 + 0x10);
    __this = (CustomLogic_CustomLogicParser_o *)local_40;
    if (iVar2 == 0) {
      if (*(long **)((long)CVar11 + 0x18) == (long *)0x0) goto label_0426411a;
      CVar14 = g_data_057b9bb8;
      if (*(Il2CppClass **)(**(long **)((long)CVar11 + 0x18) + 0x40) !=
          ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264124;
      CStack_50.Type = 0x4263c7b;
      CStack_50.Line = 0;
      CVar47 = g_data_057b9bb8;
      piVar20 = (int *)il2cpp_runtime_helper_02305440();
      CVar21 = local_40;
      if (*piVar20 != 0x26) {
        iVar2 = *(int *)((long)CVar11 + 0x10);
        __this = (CustomLogic_CustomLogicParser_o *)local_40;
        goto joined_r0x04263973;
      }
      CStack_50.Type = 0x4263c99;
      CStack_50.Line = 0;
      CVar47 = CVar12;
      CustomLogic_CustomLogicParser__AssertTokenType
                ((CustomLogic_CustomLogicParser_o *)local_40,(CustomLogic_CustomLogicToken_o *)CVar12,2,
                 pMVar40);
      symbolValues = CVar21;
      if (*(System_Collections_Generic_List_object__o **)((long)CVar21 + 0x10) !=
          (System_Collections_Generic_List_object__o *)0x0) {
        CVar36.Type = startIndex + 2;
        CVar36.Line = 0;
        CVar47.Line = 0;
        CVar47.Type = CVar36.Type;
        CStack_50.Type = 0x4263cbb;
        CStack_50.Line = 0;
        pIVar31 = System_Collections_Generic_List_object___get_Item
                            (*(System_Collections_Generic_List_object__o **)((long)CVar21 + 0x10),CVar36.Type,
                             MethodInfo_CustomLogicToken_get_Item);
        CVar55 = CVar36;
        if ((pIVar31 == (Il2CppObject *)0x0) || (*(int *)&pIVar31[1].klass != 0)) {
          uVar59 = false;
        }
        else {
          if (pIVar31[1].monitor == (long *)0x0) goto label_0426411a;
          CVar14 = g_data_057b9bb8;
          if (*(Il2CppClass **)(*(long *)pIVar31[1].monitor + 0x40) !=
              ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264124;
          CStack_50.Type = 0x4263f1f;
          CStack_50.Line = 0;
          CVar47 = g_data_057b9bb8;
          piVar20 = (int *)il2cpp_runtime_helper_02305440();
          uVar59 = *piVar20 == 0xb;
        }
        if (CVar12 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) goto label_0426411a;
        symbolValues = *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)((long)CVar12 + 0x18);
        uVar56 = *(uint *)&((Il2CppType *)((long)CVar11 + 0x20))->data;
        CVar12.Line = 0;
        CVar12.Type = uVar56;
        CVar47 = symbolValues;
        if ((bool)uVar59) {
          CStack_50.Type = 0x4263cf4;
          CStack_50.Line = 0;
          prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMethodCallExpressionAst);
          if ((symbolValues != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) &&
             (CVar14 = g_data_057b9c00,
             *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)symbolValues != g_data_057b9c00))
          goto label_04264131;
          pMVar40 = (MethodInfo *)0x0;
          CStack_50.Type = 0x4263d23;
          CStack_50.Line = 0;
          CustomLogic_CustomLogicMethodCallExpressionAst___ctor
                    ((CustomLogic_CustomLogicMethodCallExpressionAst_o *)prev,(System_String_o *)symbolValues,
                     uVar56,(MethodInfo *)0x0);
          if ((CustomLogic_CustomLogicBaseExpressionAst_Fields)prev !=
              (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
            *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)((long)prev + 0x28) = CVar16;
            CStack_50.Type = 0x4263d3f;
            CStack_50.Line = 0;
            il2cpp_runtime_helper_022b4080((uint *)((long)prev + 0x28),CVar16);
            CVar11 = local_40;
            CStack_50.Type = 0x4263d4e;
            CStack_50.Line = 0;
            uVar56 = CustomLogic_CustomLogicParser__FindClosingParen
                               ((CustomLogic_CustomLogicParser_o *)local_40,CVar36.Type,method_01);
            unaff_R12.Line = 0;
            unaff_R12.Type = uVar56;
            left.Type = startIndex + 3;
            left.Line = 0;
            CStack_50.Type = 0x4263d62;
            CStack_50.Line = 0;
            CVar14 = left;
            CVar21 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
                     CustomLogic_CustomLogicParser__FindCommas
                               ((CustomLogic_CustomLogicParser_o *)CVar11,left.Type,uVar56,pMVar40);
            symbolValues = CVar11;
            CVar47 = CVar14;
            if (CVar21 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
              uVar27 = *(il2cpp_array_size_t *)((long)CVar21 + 0x18);
              uVar9 = left.Type;
              if ((uVar27 != 0) && (0 < (int)uVar27)) {
                CVar12.Type = 0;
                CVar12.Line = 0;
                if ((uVar27 & 0xffffffff) == 0) goto label_0426411f;
                while( true ) {
                  uVar9 = ((int32_t *)((long)CVar21 + 0x20))[(long)CVar12];
                  symbolValues.Line = 0;
                  symbolValues.Type = uVar9;
                  CVar47.Type = 0;
                  CVar47.Line = 0;
                  CStack_50.Type = 0x4263df2;
                  CStack_50.Line = 0;
                  CVar14 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
                           CustomLogic_CustomLogicParser__ParseExpression
                                     ((CustomLogic_CustomLogicParser_o *)local_40,
                                      (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,left.Type,uVar9 - 1,
                                      method);
                  lVar30 = MethodInfo_Void_Add;
                  pSVar50 = ((Il2CppType *)((long)prev + 0x20))->data;
                  CVar55 = CVar21;
                  if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) goto label_0426411a;
                  piVar34 = &(pSVar50->fields)._version;
                  *piVar34 = *piVar34 + 1;
                  pSVar4 = (pSVar50->fields)._items;
                  if (pSVar4 == (System_Object_array *)0x0) goto label_0426411a;
                  uVar3 = (pSVar50->fields)._size;
                  if (uVar3 < (uint)pSVar4->max_length) {
                    (pSVar50->fields)._size = uVar3 + 1;
                    *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)(pSVar4->m_Items + (int)uVar3) =
                         CVar14;
                    CStack_50.Type = 0x4263e42;
                    CStack_50.Line = 0;
                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
                  }
                  else {
                    CStack_50.Type = 0x4263db7;
                    CStack_50.Line = 0;
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar50,(Il2CppObject *)CVar14,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                  }
                  CVar11.Type = uVar9 + 1;
                  CVar11.Line = 0;
                  CVar12 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)((long)CVar12 + 1);
                  left.Line = 0;
                  left.Type = CVar11.Type;
                  uVar9 = CVar11.Type;
                  if ((long)(int)*(uint *)((long)CVar21 + 0x18) <= (long)CVar12) break;
                  CVar15.Line = 0;
                  CVar15.Type = *(uint *)((long)CVar21 + 0x18);
                  if ((ulong)CVar15 <= (ulong)CVar12) goto label_0426411f;
                }
              }
              goto label_04263ba3;
            }
          }
        }
        else {
          CStack_50.Type = 0x4263e68;
          CStack_50.Line = 0;
          prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicFieldExpressionAst);
          if ((symbolValues != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) &&
             (CVar14 = g_data_057b9c00,
             *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)symbolValues != g_data_057b9c00))
          goto label_04264131;
          pMVar40 = (MethodInfo *)0x0;
          CStack_50.Type = 0x4263e97;
          CStack_50.Line = 0;
          CustomLogic_CustomLogicFieldExpressionAst___ctor
                    ((CustomLogic_CustomLogicFieldExpressionAst_o *)prev,(System_String_o *)symbolValues,
                     uVar56,(MethodInfo *)0x0);
          if ((CustomLogic_CustomLogicBaseExpressionAst_Fields)prev !=
              (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
            *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)((long)prev + 0x20) = CVar16;
            CStack_50.Type = 0x4263eb3;
            CStack_50.Line = 0;
            CVar21 = CVar16;
            il2cpp_runtime_helper_022b4080((Il2CppType *)((long)prev + 0x20));
            CVar55.Line = 0;
            CVar55.Type = local_34;
            __this = (CustomLogic_CustomLogicParser_o *)local_40;
            startIndex = CVar36.Type;
            goto joined_r0x04263670;
          }
        }
      }
    }
    else {
joined_r0x04263973:
      if (iVar2 != 2) {
        CVar16.Type = 0;
        CVar16.Line = 0;
        return (CustomLogic_CustomLogicBaseExpressionAst_o *)CVar16;
      }
      local_40 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)__this;
      if ((CVar12 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) ||
         (*(int *)((long)CVar12 + 0x10) != 0)) {
        CVar21 = *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)((long)CVar11 + 0x18);
        symbolValues.Line = 0;
        symbolValues.Type = *(uint *)&((Il2CppType *)((long)CVar11 + 0x20))->data;
label_04263992:
        CStack_50.Type = 0x42639a1;
        CStack_50.Line = 0;
        prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVariableExpressionAst);
        if ((CVar21 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) &&
           (CVar36 = CVar21, CVar14 = g_data_057b9c00,
           CVar12 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)__this,
           *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)CVar21 != g_data_057b9c00)) goto label_04264129;
        pMVar40 = (MethodInfo *)0x0;
        CStack_50.Type = 0x42639d0;
        CStack_50.Line = 0;
        CustomLogic_CustomLogicVariableExpressionAst___ctor
                  ((CustomLogic_CustomLogicVariableExpressionAst_o *)prev,(System_String_o *)CVar21,
                   symbolValues.Type,(MethodInfo *)0x0);
        startIndex = startIndex + 1;
        CVar55.Line = 0;
        CVar55.Type = local_34;
        goto joined_r0x04263670;
      }
      ppcVar1 = (char **)((long)CVar12 + 0x18);
      if ((long *)*ppcVar1 == (long *)0x0) goto label_0426411a;
      CVar14 = g_data_057b9bb8;
      CVar12 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)__this;
      if (*(Il2CppClass **)(*(long *)*ppcVar1 + 0x40) != ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass)
      goto label_04264124;
      CStack_50.Type = 0x4263a33;
      CStack_50.Line = 0;
      piVar20 = (int *)il2cpp_runtime_helper_02305440();
      CVar21 = *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)((long)CVar11 + 0x18);
      uVar56 = *(uint *)&((Il2CppType *)((long)CVar11 + 0x20))->data;
      symbolValues.Line = 0;
      symbolValues.Type = uVar56;
      if (*piVar20 != 0xb) goto label_04263992;
      CStack_50.Type = 0x4263a53;
      CStack_50.Line = 0;
      prev = (CustomLogic_CustomLogicBaseExpressionAst_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicClassInstantiateExpressionAst);
      if ((CVar21 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) &&
         (CVar36 = CVar21, CVar14 = g_data_057b9c00,
         *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)CVar21 != g_data_057b9c00)) goto label_04264129;
      pMVar40 = (MethodInfo *)0x0;
      CStack_50.Type = 0x4263a82;
      CStack_50.Line = 0;
      CVar47 = CVar21;
      CustomLogic_CustomLogicClassInstantiateExpressionAst___ctor
                ((CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)prev,(System_String_o *)CVar21,
                 uVar56,(MethodInfo *)0x0);
      CVar55 = CVar21;
      if ((CustomLogic_CustomLogicBaseExpressionAst_Fields)prev ==
          (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) goto label_0426411a;
      *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)((long)prev + 0x28) = CVar16;
      CStack_50.Type = 0x4263a9e;
      CStack_50.Line = 0;
      il2cpp_runtime_helper_022b4080((uint *)((long)prev + 0x28),CVar16);
      CStack_50.Type = 0x4263aaa;
      CStack_50.Line = 0;
      uVar56 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex + 1,method_00);
      unaff_R12.Line = 0;
      unaff_R12.Type = uVar56;
      left.Type = startIndex + 2;
      left.Line = 0;
      CStack_50.Type = 0x4263abe;
      CStack_50.Line = 0;
      CVar14 = left;
      CVar11 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
               CustomLogic_CustomLogicParser__FindCommas(__this,left.Type,uVar56,pMVar40);
      CVar47 = CVar14;
      if (CVar11 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) goto label_0426411a;
      uVar27 = *(il2cpp_array_size_t *)((long)CVar11 + 0x18);
      uVar9 = left.Type;
      if ((uVar27 != 0) && (0 < (int)uVar27)) {
        CVar12.Type = 0;
        CVar12.Line = 0;
        if ((uVar27 & 0xffffffff) != 0) {
          while( true ) {
            uVar9 = ((int32_t *)((long)CVar11 + 0x20))[(long)CVar12];
            CVar55.Line = 0;
            CVar55.Type = uVar9;
            CVar47.Type = 0;
            CVar47.Line = 0;
            CStack_50.Type = 0x4263b3e;
            CStack_50.Line = 0;
            CVar14 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
                     CustomLogic_CustomLogicParser__ParseExpression
                               ((CustomLogic_CustomLogicParser_o *)local_40,
                                (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,left.Type,uVar9 - 1,method);
            lVar30 = MethodInfo_Void_Add;
            pSVar50 = ((Il2CppType *)((long)prev + 0x20))->data;
            symbolValues = CVar11;
            if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) goto label_0426411a;
            piVar34 = &(pSVar50->fields)._version;
            *piVar34 = *piVar34 + 1;
            pSVar4 = (pSVar50->fields)._items;
            if (pSVar4 == (System_Object_array *)0x0) goto label_0426411a;
            uVar3 = (pSVar50->fields)._size;
            if (uVar3 < (uint)pSVar4->max_length) {
              (pSVar50->fields)._size = uVar3 + 1;
              *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)(pSVar4->m_Items + (int)uVar3) = CVar14;
              CStack_50.Type = 0x4263b8a;
              CStack_50.Line = 0;
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
            }
            else {
              CStack_50.Type = 0x4263b07;
              CStack_50.Line = 0;
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar50,(Il2CppObject *)CVar14,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
            }
            CVar21.Type = uVar9 + 1;
            CVar21.Line = 0;
            CVar12 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)((long)CVar12 + 1);
            left.Line = 0;
            left.Type = CVar21.Type;
            uVar9 = CVar21.Type;
            if ((long)(int)*(uint *)((long)CVar11 + 0x18) <= (long)CVar12) break;
            CVar13.Line = 0;
            CVar13.Type = *(uint *)((long)CVar11 + 0x18);
            if ((ulong)CVar13 <= (ulong)CVar12) goto label_0426411f;
          }
          goto label_04263ba3;
        }
        goto label_0426411f;
      }
label_04263ba3:
      __this = (CustomLogic_CustomLogicParser_o *)local_40;
      CVar21.Type = 0;
      CVar21.Line = 0;
      pMVar40 = (MethodInfo *)(ulong)(uVar56 - 1);
      CStack_50.Type = 0x4263ba8;
      CStack_50.Line = 0;
      CVar36 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
               CustomLogic_CustomLogicParser__ParseExpression
                         ((CustomLogic_CustomLogicParser_o *)local_40,
                          (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar9,uVar56 - 1,method);
      lVar30 = MethodInfo_Void_Add;
      CVar55.Line = 0;
      CVar55.Type = local_34;
      if (CVar36 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
label_04263c04:
        unaff_R12.Type = unaff_R12.Type + 1;
        unaff_R12.Line = 0;
        startIndex = unaff_R12.Type;
        goto joined_r0x04263670;
      }
      pIVar51 = ((Il2CppObject *)((long)prev + 0x20))->klass;
      symbolValues = (CustomLogic_CustomLogicBaseExpressionAst_Fields)&MethodInfo_CustomLogicToken_get_Item;
      CVar47 = CVar21;
      CVar12 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)__this;
      if (pIVar51 != (Il2CppClass *)0x0) {
        puVar7 = (undefined1 *)((long)&(pIVar51->_1).namespaze + 4);
        *(int *)puVar7 = *(int *)puVar7 + 1;
        pMVar40 = (MethodInfo *)(pIVar51->_1).name;
        if (pMVar40 == (MethodInfo *)0x0) goto label_0426411a;
        uVar56 = *(uint *)&(pIVar51->_1).namespaze;
        if (uVar56 < *(uint *)&pMVar40->name) {
          *(uint *)&(pIVar51->_1).namespaze = uVar56 + 1;
          *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)(&pMVar40->klass + (int)uVar56) = CVar36;
          CStack_50.Type = 0x4263c04;
          CStack_50.Line = 0;
          il2cpp_runtime_helper_022b4080(&pMVar40->klass + (int)uVar56);
          CVar21 = CVar36;
          goto label_04263c04;
        }
        pMVar40 = *(MethodInfo **)(*(long *)(lVar30 + 0x20) + 0xc0);
        CStack_50.Type = 0x4263c34;
        CStack_50.Line = 0;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pIVar51,(Il2CppObject *)CVar36,
                   (MethodInfo_362C220 *)pMVar40[1].name);
        unaff_R12.Type = unaff_R12.Type + 1;
        unaff_R12.Line = 0;
        CVar21 = CVar36;
        startIndex = unaff_R12.Type;
        goto joined_r0x04263670;
      }
    }
  }
label_0426411a:
  CVar14 = CVar47;
  CVar11 = symbolValues;
  CStack_50.Type = 0x426411f;
  CStack_50.Line = 0;
  il2cpp_runtime_helper_022b2c90();
  CVar21 = CVar55;
label_0426411f:
  CStack_50.Type = 0x4264124;
  CStack_50.Line = 0;
  il2cpp_runtime_helper_022b2ca0();
  symbolValues = CVar11;
  CVar36 = CVar21;
  CVar16 = unaff_R12;
label_04264124:
  CStack_50.Type = 0x4264129;
  CStack_50.Line = 0;
  il2cpp_runtime_helper_022b2fd0();
label_04264129:
  CStack_50.Type = 0x4264131;
  CStack_50.Line = 0;
  il2cpp_runtime_helper_022b2fd0(CVar36);
label_04264131:
  CStack_50.Type = 0x4264139;
  CStack_50.Line = 0;
  CVar21 = symbolValues;
  il2cpp_runtime_helper_022b2fd0();
  CVar53 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)(extraout_RDX & 0xffffffff);
  CVar41 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)((ulong)CVar14 & 0xffffffff);
  CVar48 = CVar14;
  CStack_78 = symbolValues;
  CStack_70 = CVar16;
  CStack_68 = left;
  CStack_60 = CVar12;
  CStack_58 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)prev;
  CStack_50 = CVar36;
  if (g_data_057adc07 == '\0') {
    CStack_98.Type = 0x426416b;
    CStack_98.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    CStack_98.Type = 0x4264177;
    CStack_98.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    CStack_98.Type = 0x4264183;
    CStack_98.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc07 = '\x01';
  }
  uStack_84 = 0xffffffff;
  uStack_7c = (uint)extraout_RDX;
  if ((int)uStack_7c <= CVar14.Type) {
label_04264453:
    return (CustomLogic_CustomLogicBaseExpressionAst_o *)(ulong)uStack_84;
  }
  iStack_80 = 0x7fffffff;
  uStack_84 = 0xffffffff;
  uVar27 = 0;
  CVar14.Type = 0;
  CVar14.Line = 0;
  pSVar50 = *(System_Collections_Generic_List_object__o **)((long)CVar21 + 0x10);
  while (CVar55 = CVar21, pSVar50 != (System_Collections_Generic_List_object__o *)0x0) {
    uVar56 = CVar41.Type;
    CStack_98.Type = 0x4264207;
    CStack_98.Line = 0;
    CVar48 = CVar41;
    CVar36 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
             System_Collections_Generic_List_object___get_Item(pSVar50,uVar56,MethodInfo_CustomLogicToken_get_Item);
    pMVar40 = extraout_RDX_00;
    if ((CVar36 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) ||
       (*(int *)((long)CVar36 + 0x10) != 0)) {
label_042641d0:
      if (0 < CVar14.Type) goto label_042641d9;
label_042642a0:
      if ((CVar36 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) &&
         (*(int *)((long)CVar36 + 0x10) == 0)) {
        pSVar50 = *(System_Collections_Generic_List_object__o **)((long)CVar36 + 0x18);
        if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) break;
        CVar48 = g_data_057b9bb8;
        if ((pSVar50->klass->_1).element_class != ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass)
        goto label_0426446b;
        CStack_98.Type = 0x42643a1;
        CStack_98.Line = 0;
        auVar60 = il2cpp_runtime_helper_02305440();
        pMVar40 = auVar60._8_8_;
        if (*auVar60._0_8_ == 0x1f) {
label_042643a6:
          if ((int)uVar27 == 0) goto label_042641d9;
          pSVar50 = *(System_Collections_Generic_List_object__o **)((long)CVar21 + 0x10);
          if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) break;
          CVar48.Type = uVar56 - 1;
          CVar48.Line = 0;
          CStack_98.Type = 0x42643ce;
          CStack_98.Line = 0;
          pIVar31 = System_Collections_Generic_List_object___get_Item(pSVar50,CVar48.Type,MethodInfo_CustomLogicToken_get_Item);
          if (pIVar31 == (Il2CppObject *)0x0) break;
          pMVar40 = extraout_RDX_01;
          if (*(int *)&pIVar31[1].klass == 0) {
            pSVar50 = pIVar31[1].monitor;
            if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) break;
            CVar48 = g_data_057b9bb8;
            if ((pSVar50->klass->_1).element_class != ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass)
            goto label_0426446b;
            CStack_98.Type = 0x4264407;
            CStack_98.Line = 0;
            auVar60 = il2cpp_runtime_helper_02305440();
            pMVar40 = auVar60._8_8_;
            if (*auVar60._0_8_ != 0xc) goto label_042641d9;
          }
        }
        else if (*(int *)((long)CVar36 + 0x10) == 0) {
          pSVar50 = *(System_Collections_Generic_List_object__o **)((long)CVar36 + 0x18);
          if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) break;
          CVar48 = g_data_057b9bb8;
          if ((pSVar50->klass->_1).element_class != ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass)
          goto label_0426446b;
          CStack_98.Type = 0x4264445;
          CStack_98.Line = 0;
          auVar60 = il2cpp_runtime_helper_02305440();
          pMVar40 = auVar60._8_8_;
          if (*auVar60._0_8_ == 0x1e) goto label_042643a6;
        }
      }
      CStack_98.Type = 0x42642b7;
      CStack_98.Line = 0;
      CVar48 = CVar36;
      bVar10 = CustomLogic_CustomLogicParser__IsSymbolBinop
                         ((CustomLogic_CustomLogicParser_o *)pSVar50,(CustomLogic_CustomLogicToken_o *)CVar36,
                          pMVar40);
      if ((char)bVar10 == '\0') goto label_042641d9;
      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
        CStack_98.Type = 0x42642d8;
        CStack_98.Line = 0;
        il2cpp_runtime_helper_02337ed0();
      }
      CVar53 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)&TypeInfo_CustomLogicSymbols;
      if (((CVar36 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) ||
          (CVar55 = *(CustomLogic_CustomLogicBaseExpressionAst_Fields *)
                     (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18), CVar53 = CVar21,
          CVar55 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0)) ||
         (*(long **)((long)CVar36 + 0x18) == (long *)0x0)) break;
      CVar48 = g_data_057b9bb8;
      if (*(Il2CppClass **)(**(long **)((long)CVar36 + 0x18) + 0x40) !=
          ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_0426446b;
      CStack_98.Type = 0x426432a;
      CStack_98.Line = 0;
      puVar19 = (uint *)il2cpp_runtime_helper_02305440();
      CVar48.Line = 0;
      CVar48.Type = *puVar19;
      CStack_98.Type = 0x426433e;
      CStack_98.Line = 0;
      iVar8 = System_Collections_Generic_Dictionary_int__int___get_Item
                        ((System_Collections_Generic_Dictionary_int__int__o *)CVar55,*puVar19,MethodInfo_Int32_get_Item);
      if (iVar8 <= iStack_80) {
        uStack_84 = uVar56;
        iStack_80 = iVar8;
      }
      CVar53.Line = 0;
      CVar53.Type = uStack_7c;
      if (uStack_7c == uVar56 + 1) goto label_04264453;
    }
    else {
      pSVar50 = *(System_Collections_Generic_List_object__o **)((long)CVar36 + 0x18);
      if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) break;
      CVar48 = g_data_057b9bb8;
      if ((pSVar50->klass->_1).element_class != ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass)
      goto label_0426446b;
      CStack_98.Type = 0x4264243;
      CStack_98.Line = 0;
      auVar60 = il2cpp_runtime_helper_02305440();
      pMVar40 = auVar60._8_8_;
      if (*auVar60._0_8_ == 0xb) {
        CVar14.Type = CVar14.Type + 1;
        CVar14.Line = 0;
        goto label_042641d0;
      }
      if (*(int *)((long)CVar36 + 0x10) != 0) goto label_042641d0;
      pSVar50 = *(System_Collections_Generic_List_object__o **)((long)CVar36 + 0x18);
      if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) break;
      CVar48 = g_data_057b9bb8;
      if ((pSVar50->klass->_1).element_class != ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass)
      goto label_0426446b;
      CStack_98.Type = 0x4264284;
      CStack_98.Line = 0;
      auVar60 = il2cpp_runtime_helper_02305440();
      pMVar40 = auVar60._8_8_;
      CVar14.Type = CVar14.Type - (uint)(*auVar60._0_8_ == 0xc);
      CVar14.Line = 0;
      if ((int)CVar14.Type < 1) goto label_042642a0;
label_042641d9:
      if (CVar53.Type == uVar56 + 1) goto label_04264453;
    }
    CVar41.Type = uVar56 + 1;
    uVar27 = (ulong)((int)uVar27 - 1);
    CVar41.Line = 0;
    pSVar50 = *(System_Collections_Generic_List_object__o **)((long)CVar21 + 0x10);
  }
  CStack_98.Type = 0x426446b;
  CStack_98.Line = 0;
  il2cpp_runtime_helper_022b2c90();
label_0426446b:
  CStack_98 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)CustomLogic_CustomLogicParser__IsAnySymbolValue
  ;
  il2cpp_runtime_helper_022b2fd0();
  CVar42 = CVar41;
  CVar21 = CVar48;
  CStack_b8 = CVar41;
  CStack_b0 = CVar53;
  CStack_a8 = CVar14;
  uStack_a0 = uVar27;
  CStack_98 = CVar36;
  if (extraout_RDX_02 != 0) {
    uVar56 = (uint)*(ulong *)(extraout_RDX_02 + 0x18);
    if (CVar48 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
      uVar9 = 0;
      if ((int)uVar56 < 1) {
        return (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0;
      }
      while (uVar9 < uVar56) {
        uVar9 = uVar9 + 1;
        if ((int)uVar56 <= (int)uVar9) {
          return (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0;
        }
      }
    }
    else {
      if ((int)uVar56 < 1) {
        return (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0;
      }
      CVar42.Type = 0;
      CVar42.Line = 0;
      CVar53 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)&g_data_057b9b70;
      if ((*(ulong *)(extraout_RDX_02 + 0x18) & 0xffffffff) != 0) {
        do {
          if (*(int *)&((Il2CppObject *)((long)CVar48 + 0x10))->klass == 0) {
            pSVar58 = ((System_String_o *)((long)CVar48 + 0x18))->klass;
            CVar14 = CVar48;
            uVar27 = extraout_RDX_02;
            if (pSVar58 == (System_String_c *)0x0) goto label_0426452b;
            CVar21 = g_data_057b9bb8;
            if (*(Il2CppClass **)((long)(pSVar58->_1).image + 0x40) !=
                ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264530;
            uVar56 = *(uint *)(extraout_RDX_02 + 0x20 + (long)CVar42 * 4);
            CVar36.Line = 0;
            CVar36.Type = uVar56;
            CStack_c0.Type = 0x42644f3;
            CStack_c0.Line = 0;
            puVar19 = (uint *)il2cpp_runtime_helper_02305440();
            if (*puVar19 == uVar56) {
              return (CustomLogic_CustomLogicBaseExpressionAst_o *)CONCAT71((int7)((ulong)puVar19 >> 8),1);
            }
          }
          CVar42 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)((long)CVar42 + 1);
          if ((long)(int)*(uint *)(extraout_RDX_02 + 0x18) <= (long)CVar42) {
            return (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0;
          }
          CVar18.Line = 0;
          CVar18.Type = *(uint *)(extraout_RDX_02 + 0x18);
        } while ((ulong)CVar42 < (ulong)CVar18);
      }
    }
    CStack_c0.Type = 0x426452b;
    CStack_c0.Line = 0;
    il2cpp_runtime_helper_022b2ca0();
    CVar14 = CVar48;
    uVar27 = extraout_RDX_02;
  }
label_0426452b:
  CStack_c0.Type = 0x4264530;
  CStack_c0.Line = 0;
  il2cpp_runtime_helper_022b2c90();
  CVar48 = CVar14;
label_04264530:
  CStack_c0.Type = 0x4264535;
  CStack_c0.Line = 0;
  il2cpp_runtime_helper_022b2fd0();
  if ((CVar21 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) ||
     (*(int *)&((Il2CppObject *)((long)CVar21 + 0x10))->klass != 0)) {
    return (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0;
  }
  pSVar58 = ((System_String_o *)((long)CVar21 + 0x18))->klass;
  CStack_c0 = CVar42;
  if (pSVar58 == (System_String_c *)0x0) {
    CStack_c8.Type = 0x4264584;
    CStack_c8.Line = 0;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    CVar21 = g_data_057b9bb8;
    if (*(Il2CppClass **)((long)(pSVar58->_1).image + 0x40) ==
        ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) {
      CStack_c8.Type = 0x4264578;
      CStack_c8.Line = 0;
      piVar20 = (int *)il2cpp_runtime_helper_02305440();
      return (CustomLogic_CustomLogicBaseExpressionAst_o *)
             CONCAT71((int7)((ulong)piVar20 >> 8),*piVar20 == extraout_EDX);
    }
  }
  CStack_c8.Type = 0x4264589;
  CStack_c8.Line = 0;
  uStack_f8 = il2cpp_runtime_helper_022b2fd0();
  CVar45 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)((ulong)CVar21 & 0xffffffff);
  CVar16 = CVar21;
  CStack_f0 = CVar42;
  CStack_e8 = CVar53;
  CStack_e0 = CVar55;
  CStack_d8 = CVar48;
  uStack_d0 = uVar27;
  CStack_c8 = CVar36;
  if (g_data_057adc09 == '\0') {
    CStack_100.Type = 0x42645b5;
    CStack_100.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    CStack_100.Type = 0x42645c1;
    CStack_100.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc09 = '\x01';
  }
  pSVar50 = (System_Collections_Generic_List_object__o *)(pSVar58->_1).name;
  pSVar52 = (System_String_c *)0x0;
  if (pSVar50 != (System_Collections_Generic_List_object__o *)0x0) {
    uVar27 = 0;
    CVar53 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)&MethodInfo_CustomLogicToken_get_Item;
    CVar55 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)&g_data_057b9b70;
    if (CVar21.Type < (pSVar50->fields)._size) {
      do {
        CStack_100.Type = 0x4264620;
        CStack_100.Line = 0;
        CVar16 = CVar45;
        CVar21 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
                 System_Collections_Generic_List_object___get_Item(pSVar50,CVar45.Type,MethodInfo_CustomLogicToken_get_Item);
        if ((CVar21 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) &&
           (CVar42 = CVar21, ((System_String_Fields *)((long)CVar21 + 0x10))->_stringLength == 0)) {
          pSVar52 = ((System_String_o *)((long)CVar21 + 0x18))->klass;
          if (pSVar52 == (System_String_c *)0x0) goto label_0426469e;
          CVar16 = g_data_057b9bb8;
          if (*(Il2CppClass **)((long)(pSVar52->_1).image + 0x40) !=
              ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_042646a3;
          CStack_100.Type = 0x426464d;
          CStack_100.Line = 0;
          piVar20 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar20 == 0xb) {
            uVar27 = (ulong)((int)uVar27 + 1);
          }
          else if (((System_String_Fields *)((long)CVar21 + 0x10))->_stringLength == 0) {
            pSVar52 = ((System_String_o *)((long)CVar21 + 0x18))->klass;
            if (pSVar52 == (System_String_c *)0x0) goto label_0426469e;
            CVar16 = g_data_057b9bb8;
            if (*(Il2CppClass **)((long)(pSVar52->_1).image + 0x40) !=
                ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_042646a3;
            CStack_100.Type = 0x4264677;
            CStack_100.Line = 0;
            piVar20 = (int *)il2cpp_runtime_helper_02305440();
            if ((*piVar20 == 0xc) && (uVar56 = (int)uVar27 - 1, uVar27 = (ulong)uVar56, uVar56 == 0)) {
              uVar23._0_4_ = CVar45.Type;
              uVar23._4_4_ = CVar45.Line;
              return (CustomLogic_CustomLogicBaseExpressionAst_o *)uVar23;
            }
          }
        }
        CVar45.Type = CVar45.Type + 1;
        CVar45.Line = 0;
        pSVar50 = (System_Collections_Generic_List_object__o *)(pSVar58->_1).name;
        pSVar52 = (System_String_c *)0x0;
        if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) goto label_0426469e;
      } while ((int)CVar45.Type < (pSVar50->fields)._size);
    }
    CVar22.Type = -1;
    CVar22.Line = 0;
    return (CustomLogic_CustomLogicBaseExpressionAst_o *)CVar22;
  }
label_0426469e:
  CStack_100.Type = 0x42646a3;
  CStack_100.Line = 0;
  il2cpp_runtime_helper_022b2c90();
label_042646a3:
  CStack_100.Type = 0x42646a8;
  CStack_100.Line = 0;
  auVar60 = il2cpp_runtime_helper_022b2fd0();
  uVar57 = auVar60._8_8_ & 0xffffffff;
  iStack_120 = auVar60._8_4_;
  if ((CVar16 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) &&
     (*(int *)((long)CVar16 + 0x10) == iStack_120)) {
    return auVar60._0_8_;
  }
  pSStack_138 = (System_Exception_o *)0x42646e5;
  CStack_118 = CVar42;
  pSStack_110 = pSVar58;
  uStack_108 = uVar27;
  CStack_100 = CVar45;
  uVar24 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
  pSStack_138 = (System_Exception_o *)0x42646f2;
  pSVar25 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar24,6);
  pSStack_138 = (System_Exception_o *)0x42646fd;
  il2cpp_runtime_helper_01f681a0(pSVar25);
  pSStack_138 = (System_Exception_o *)0x4264709;
  uVar24 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_138 = (System_Exception_o *)0x4264716;
  il2cpp_runtime_helper_01f6dff0(pSVar25,0,uVar24);
  pSStack_138 = (System_Exception_o *)0x426471e;
  il2cpp_runtime_helper_01f681a0(CVar16);
  pSStack_138 = (System_Exception_o *)0x4264729;
  pSVar26 = CustomLogic_CustomLogicParser__GetLineNumberString
                      ((CustomLogic_CustomLogicParser_o *)pSVar52,
                       *(int32_t *)&((Il2CppType *)((long)CVar16 + 0x20))->data,method_02);
  pSStack_138 = (System_Exception_o *)0x4264734;
  il2cpp_runtime_helper_01f681a0(pSVar25);
  pSStack_138 = (System_Exception_o *)0x4264744;
  il2cpp_runtime_helper_01f6dff0(pSVar25,1,pSVar26);
  pSStack_138 = (System_Exception_o *)0x426474c;
  il2cpp_runtime_helper_01f681a0(pSVar25);
  pSStack_138 = (System_Exception_o *)0x4264758;
  uVar24 = il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_138 = (System_Exception_o *)0x4264768;
  pSVar35 = pSVar25;
  il2cpp_runtime_helper_01f6dff0(pSVar25,2,uVar24);
  pSStack_138 = (System_Exception_o *)0x4264770;
  pSVar26 = CustomLogic_CustomLogicParser__GetTokenString
                      ((CustomLogic_CustomLogicParser_o *)pSVar35,(CustomLogic_CustomLogicToken_o *)CVar16,
                       method_03);
  pSStack_138 = (System_Exception_o *)0x426477b;
  il2cpp_runtime_helper_01f681a0(pSVar25);
  pSStack_138 = (System_Exception_o *)0x426478b;
  il2cpp_runtime_helper_01f6dff0(pSVar25,3,pSVar26);
  pSStack_138 = (System_Exception_o *)0x4264793;
  il2cpp_runtime_helper_01f681a0(pSVar25);
  pSStack_138 = (System_Exception_o *)0x426479f;
  uVar24 = il2cpp_runtime_helper_023445d0(&", expected ");
  pSStack_138 = (System_Exception_o *)0x42647af;
  il2cpp_runtime_helper_01f6dff0(pSVar25,4,uVar24);
  pSStack_138 = (System_Exception_o *)0x42647bb;
  SStack_130.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTokenType);
  SStack_130.monitor = (void *)0xffffffffffffffff;
  pSStack_138 = (System_Exception_o *)0x42647d7;
  pSVar26 = System_Enum__ToString(&SStack_130,(MethodInfo *)0x0);
  pSStack_138 = (System_Exception_o *)0x42647e2;
  il2cpp_runtime_helper_01f681a0(pSVar25);
  pSStack_138 = (System_Exception_o *)0x42647f2;
  il2cpp_runtime_helper_01f6dff0(pSVar25,5,pSVar26);
  pSStack_138 = (System_Exception_o *)0x42647fc;
  pSVar26 = System_String__Concat_3af7570(pSVar25,(MethodInfo *)0x0);
  pSStack_138 = (System_Exception_o *)0x426480b;
  uVar24 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_138 = (System_Exception_o *)0x4264813;
  __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar24);
  pSStack_138 = (System_Exception_o *)0x4264823;
  System_Exception___ctor_3cf6120(__this_01,pSVar26,(MethodInfo *)0x0);
  pSStack_138 = (System_Exception_o *)0x426482f;
  uVar27 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertTokenType);
  pSStack_138 = (System_Exception_o *)0x426483a;
  pSVar37 = __this_01;
  auVar60 = il2cpp_runtime_helper_022b2b10();
  pSStack_168 = auVar60._0_8_;
  uVar54 = auVar60._8_8_ & 0xffffffff;
  CVar46 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)(uVar27 & 0xffffffff);
  pSStack_160 = pSVar26;
  CStack_158 = CVar53;
  CStack_150 = CVar55;
  pSStack_148 = pSVar25;
  uStack_140 = uVar57;
  pSStack_138 = __this_01;
  if (g_data_057adc08 == '\0') {
    CStack_170.Type = 0x4264868;
    CStack_170.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    CStack_170.Type = 0x4264874;
    CStack_170.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ToArray);
    CStack_170.Type = 0x4264880;
    CStack_170.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    CStack_170.Type = 0x426488c;
    CStack_170.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    CStack_170.Type = 0x4264898;
    CStack_170.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    g_data_057adc08 = '\x01';
  }
  CStack_170.Type = 0x42648ae;
  CStack_170.Line = 0;
  pSStack_168 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  CStack_170.Type = 0x42648c4;
  CStack_170.Line = 0;
  CVar21 = MethodInfo_List_1_System_Int32;
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_List_int__o *)pSStack_168,(MethodInfo_35FD6C0 *)MethodInfo_List_1_System_Int32);
  uVar56 = auVar60._8_4_;
  if ((int)uVar27 < (int)uVar56) {
    if (pSStack_168 == (System_String_c *)0x0) {
      uVar57 = 0;
      pSVar50 = (System_Collections_Generic_List_object__o *)(pSVar37->fields)._className;
      pSVar38 = pSVar26;
      uVar27 = 0;
      if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) {
        pSVar58 = (System_String_c *)0x0;
      }
      else {
        do {
          uVar57 = uVar27;
          CStack_170.Type = 0x4264934;
          CStack_170.Line = 0;
          CVar21 = CVar46;
          pSVar26 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar50,CVar46.Type,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar26 != (System_String_o *)0x0) && (pSVar38 = pSVar26, (pSVar26->fields)._stringLength == 0)
             ) {
            pSVar58 = pSVar26[1].klass;
            if (pSVar58 == (System_String_c *)0x0) break;
            CVar21 = g_data_057b9bb8;
            if (*(Il2CppClass **)((long)(pSVar58->_1).image + 0x40) !=
                ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264b82;
            CStack_170.Type = 0x4264970;
            CStack_170.Line = 0;
            piVar20 = (int *)il2cpp_runtime_helper_02305440();
            uVar9 = (int)uVar57 + (uint)(*piVar20 == 0xb);
            uVar57 = (ulong)uVar9;
            if ((pSVar26->fields)._stringLength == 0) {
              pSVar58 = pSVar26[1].klass;
              if (pSVar58 == (System_String_c *)0x0) break;
              CVar21 = g_data_057b9bb8;
              if (*(Il2CppClass **)((long)(pSVar58->_1).image + 0x40) !=
                  ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264b82;
              CStack_170.Type = 0x42649af;
              CStack_170.Line = 0;
              piVar20 = (int *)il2cpp_runtime_helper_02305440();
              uVar9 = uVar9 - (*piVar20 == 0xc);
              uVar57 = (ulong)uVar9;
              if ((pSVar26->fields)._stringLength == 0) {
                pSVar58 = pSVar26[1].klass;
                if (pSVar58 == (System_String_c *)0x0) break;
                CVar21 = g_data_057b9bb8;
                if (*(Il2CppClass **)((long)(pSVar58->_1).image + 0x40) !=
                    ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264b82;
                CStack_170.Type = 0x42649f2;
                CStack_170.Line = 0;
                piVar20 = (int *)il2cpp_runtime_helper_02305440();
                if ((uVar9 == 0) && (*piVar20 == 0x25)) break;
              }
            }
          }
          pSVar26 = pSVar38;
          CVar46.Type = CVar46.Type + 1;
          CVar46.Line = 0;
          if (uVar56 == CVar46.Type) goto label_04264b57;
          pSVar50 = (System_Collections_Generic_List_object__o *)(pSVar37->fields)._className;
          pSVar58 = (System_String_c *)0x0;
          pSVar38 = pSVar26;
          uVar27 = uVar57;
        } while (pSVar50 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
    else {
      uVar57 = 0;
      pSVar50 = (System_Collections_Generic_List_object__o *)(pSVar37->fields)._className;
      if (pSVar50 == (System_Collections_Generic_List_object__o *)0x0) {
        pSVar58 = (System_String_c *)0x0;
      }
      else {
        do {
          iVar44 = CVar46.Type;
          CStack_170.Type = 0x4264a54;
          CStack_170.Line = 0;
          CVar21 = CVar46;
          pSVar38 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar50,iVar44,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar38 != (System_String_o *)0x0) && (pSVar26 = pSVar38, (pSVar38->fields)._stringLength == 0)
             ) {
            pSVar58 = pSVar38[1].klass;
            if (pSVar58 == (System_String_c *)0x0) break;
            CVar21 = g_data_057b9bb8;
            if (*(Il2CppClass **)((long)(pSVar58->_1).image + 0x40) !=
                ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264b82;
            CStack_170.Type = 0x4264a90;
            CStack_170.Line = 0;
            piVar20 = (int *)il2cpp_runtime_helper_02305440();
            uVar9 = (int)uVar57 + (uint)(*piVar20 == 0xb);
            uVar57 = (ulong)uVar9;
            if ((pSVar38->fields)._stringLength == 0) {
              pSVar58 = pSVar38[1].klass;
              if (pSVar58 == (System_String_c *)0x0) break;
              CVar21 = g_data_057b9bb8;
              if (*(Il2CppClass **)((long)(pSVar58->_1).image + 0x40) !=
                  ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264b82;
              CStack_170.Type = 0x4264acf;
              CStack_170.Line = 0;
              piVar20 = (int *)il2cpp_runtime_helper_02305440();
              uVar9 = uVar9 - (*piVar20 == 0xc);
              uVar57 = (ulong)uVar9;
              if ((pSVar38->fields)._stringLength == 0) {
                pSVar58 = pSVar38[1].klass;
                if (pSVar58 == (System_String_c *)0x0) break;
                CVar21 = g_data_057b9bb8;
                if (*(Il2CppClass **)((long)(pSVar58->_1).image + 0x40) !=
                    ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264b82;
                CStack_170.Type = 0x4264b0e;
                CStack_170.Line = 0;
                piVar20 = (int *)il2cpp_runtime_helper_02305440();
                lVar30 = MethodInfo_Void_Add;
                if ((uVar9 == 0) && (*piVar20 == 0x25)) {
                  puVar7 = (undefined1 *)((long)&(pSStack_168->_1).namespaze + 4);
                  *(int *)puVar7 = *(int *)puVar7 + 1;
                  pcVar5 = (pSStack_168->_1).name;
                  pSVar58 = pSStack_168;
                  if (pcVar5 == (char *)0x0) break;
                  uVar9 = *(uint *)&(pSStack_168->_1).namespaze;
                  if (uVar9 < *(uint *)(pcVar5 + 0x18)) {
                    *(uint *)&(pSStack_168->_1).namespaze = uVar9 + 1;
                    *(int *)(pcVar5 + (long)(int)uVar9 * 4 + 0x20) = iVar44;
                    CVar46 = CVar21;
                  }
                  else {
                    CStack_170.Type = 0x4264a1f;
                    CStack_170.Line = 0;
                    System_Collections_Generic_List_int___AddWithResize
                              ((System_Collections_Generic_List_int__o *)pSStack_168,iVar44,
                               *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar30 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar57 = 0;
                  CVar21 = CVar46;
                }
              }
            }
          }
          CVar46.Type = iVar44 + 1;
          CVar46.Line = 0;
          if (uVar56 == CVar46.Type) goto label_04264b57;
          pSVar50 = (System_Collections_Generic_List_object__o *)(pSVar37->fields)._className;
          pSVar58 = (System_String_c *)0x0;
        } while (pSVar50 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
  }
  else {
label_04264b57:
    pSVar58 = (System_String_c *)0x0;
    if (pSStack_168 != (System_String_c *)0x0) {
      pSVar28 = System_Collections_Generic_List_int___ToArray
                          ((System_Collections_Generic_List_int__o *)pSStack_168,MethodInfo_Int32_ToArray);
      return (CustomLogic_CustomLogicBaseExpressionAst_o *)pSVar28;
    }
  }
  CStack_170.Type = 0x4264b82;
  CStack_170.Line = 0;
  il2cpp_runtime_helper_022b2c90();
label_04264b82:
  uVar56 = CVar21.Type;
  CStack_170.Type = 0x4264b87;
  CStack_170.Line = 0;
  il2cpp_runtime_helper_022b2fd0();
  pMVar40 = extraout_RDX_03;
  pSStack_190 = pSVar26;
  uStack_188 = uVar54;
  pSStack_180 = pSVar37;
  uStack_178 = uVar57;
  CStack_170 = CVar46;
  if (g_data_057adc05 == '\0') {
    pSStack_1a8 = (System_String_c *)0x4264bb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057adc05 = '\x01';
    pMVar40 = extraout_RDX_04;
  }
  pSStack_1a8 = (System_String_c *)0x4264bc9;
  uVar9 = CustomLogic_CustomLogicParser__FindSemicolon
                    ((CustomLogic_CustomLogicParser_o *)pSVar58,uVar56,pMVar40);
  uVar27 = (ulong)uVar9;
  pSStack_1a8 = (System_String_c *)0x4264be0;
  pCVar29 = (CustomLogic_CustomLogicBaseExpressionAst_o *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  iStack_194 = uVar9 + 1;
  CVar49 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)&iStack_194;
  pSStack_1a8 = (System_String_c *)0x4264c01;
  CVar21 = g_data_057b9bb8;
  CVar55 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)il2cpp_runtime_helper_02304f30();
  if (pCVar29 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
    if (CVar55 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
label_04264c26:
      if (*(int *)&pCVar29[1].klass != 0) {
        pCVar29[1].monitor = (void *)CVar55;
        pSStack_1a8 = (System_String_c *)0x4264c3c;
        il2cpp_runtime_helper_022b4080(&pCVar29[1].monitor);
        uVar27 = (ulong)(uVar9 - 1);
        pSStack_1a8 = (System_String_c *)0x4264c50;
        CVar55 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
                 CustomLogic_CustomLogicParser__ParseExpression
                           ((CustomLogic_CustomLogicParser_o *)pSVar58,
                            (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar56,uVar9 - 1,method);
        if (CVar55 != (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
          pSStack_1a8 = (System_String_c *)0x4264c67;
          lVar30 = il2cpp_runtime_helper_023051f0(CVar55);
          if (lVar30 == 0) goto label_04264c9a;
        }
        if (1 < *(uint *)&pCVar29[1].klass) {
          pCVar29[1].fields = CVar55;
          pSStack_1a8 = (System_String_c *)0x4264c85;
          il2cpp_runtime_helper_022b4080(&pCVar29[1].fields,CVar55);
          return pCVar29;
        }
      }
      pSStack_1a8 = (System_String_c *)0x4264c9a;
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pSStack_1a8 = (System_String_c *)0x4264c21;
      lVar30 = il2cpp_runtime_helper_023051f0(CVar55);
      if (lVar30 != 0) goto label_04264c26;
    }
label_04264c9a:
    pSStack_1a8 = (System_String_c *)0x4264c9f;
    CVar21 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)il2cpp_runtime_helper_0231b270();
    CVar49.Type = 0;
    CVar49.Line = 0;
    pSStack_1a8 = (System_String_c *)0x4264ca9;
    il2cpp_runtime_helper_022b2b10();
    CVar46 = CVar55;
  }
  pSStack_1a8 = (System_String_c *)0x4264cae;
  uStack_1c8 = il2cpp_runtime_helper_022b2c90();
  CVar43 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)((ulong)CVar49 & 0xffffffff);
  CVar55 = CVar49;
  pCStack_1c0 = pCVar29;
  uStack_1b8 = uVar27;
  uStack_1b0 = (ulong)uVar56;
  pSStack_1a8 = pSVar58;
  if (g_data_057adc0a == '\0') {
    CStack_1d0.Type = 0x4264cd2;
    CStack_1d0.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    CStack_1d0.Type = 0x4264cde;
    CStack_1d0.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc0a = '\x01';
  }
  pIVar51 = ((Il2CppObject *)((long)CVar21 + 0x10))->klass;
  pSVar52 = (System_String_c *)0x0;
  if (pIVar51 != (Il2CppClass *)0x0) {
    pSVar58 = (System_String_c *)&MethodInfo_CustomLogicToken_get_Item;
    if (CVar49.Type < *(int *)&(pIVar51->_1).namespaze) {
      do {
        CStack_1d0.Type = 0x4264d2b;
        CStack_1d0.Line = 0;
        CVar55 = CVar43;
        pIVar31 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pIVar51,CVar43.Type,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar31 != (Il2CppObject *)0x0) && (*(int *)&pIVar31[1].klass == 0)) {
          pSVar52 = pIVar31[1].monitor;
          if (pSVar52 == (System_String_c *)0x0) goto label_04264d70;
          CVar55 = g_data_057b9bb8;
          if (*(Il2CppClass **)((long)(pSVar52->_1).image + 0x40) !=
              ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) goto label_04264d75;
          CStack_1d0.Type = 0x4264d56;
          CStack_1d0.Line = 0;
          piVar20 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar20 == 0x23) {
            uVar33._0_4_ = CVar43.Type;
            uVar33._4_4_ = CVar43.Line;
            return (CustomLogic_CustomLogicBaseExpressionAst_o *)uVar33;
          }
        }
        CVar43.Type = CVar43.Type + 1;
        CVar43.Line = 0;
        pIVar51 = ((Il2CppObject *)((long)CVar21 + 0x10))->klass;
        pSVar52 = (System_String_c *)0x0;
        if (pIVar51 == (Il2CppClass *)0x0) goto label_04264d70;
      } while ((int)CVar43.Type < *(int *)&(pIVar51->_1).namespaze);
    }
    CVar32.Type = -1;
    CVar32.Line = 0;
    return (CustomLogic_CustomLogicBaseExpressionAst_o *)CVar32;
  }
label_04264d70:
  CStack_1d0.Type = 0x4264d75;
  CStack_1d0.Line = 0;
  il2cpp_runtime_helper_022b2c90();
label_04264d75:
  CStack_1d0.Type = 0x4264d7a;
  CStack_1d0.Line = 0;
  auVar60 = il2cpp_runtime_helper_022b2fd0();
  pSVar35 = auVar60._8_8_;
  uStack_1e0 = auVar60._0_8_;
  CVar36 = CVar55;
  CStack_1d8 = CVar43;
  CStack_1d0 = CVar21;
  if (g_data_057adc0b == '\0') {
    pSVar52 = (System_String_c *)&MethodInfo_Boolean_Contains;
    CStack_1e8.Type = 0x4264d9f;
    CStack_1e8.Line = 0;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc0b = '\x01';
  }
  if ((CVar55 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) ||
     (*(int *)&((Il2CppObject *)((long)CVar55 + 0x10))->klass != 0)) {
    return (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0;
  }
  if ((pSVar35 == (System_String_array *)0x0) ||
     (pSVar52 = ((System_String_o *)((long)CVar55 + 0x18))->klass, pSVar52 == (System_String_c *)0x0)) {
    CStack_1e8.Type = 0x4264e06;
    CStack_1e8.Line = 0;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    CVar36 = g_data_057b9bb8;
    if (*(Il2CppClass **)((long)(pSVar52->_1).image + 0x40) ==
        ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) {
      CStack_1e8.Type = 0x4264de6;
      CStack_1e8.Line = 0;
      piVar34 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar10 = System_Collections_Generic_HashSet_int___Contains
                         ((System_Collections_Generic_HashSet_int__o *)pSVar35,*piVar34,MethodInfo_Boolean_Contains);
      return (CustomLogic_CustomLogicBaseExpressionAst_o *)CONCAT44(extraout_var,bVar10);
    }
  }
  CStack_1e8.Type = 0x4264e0b;
  CStack_1e8.Line = 0;
  il2cpp_runtime_helper_022b2fd0();
  CStack_200 = CVar55;
  pSStack_1f8 = pSVar35;
  pSStack_1f0 = pSVar58;
  CStack_1e8 = CVar46;
  if ((CVar36 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) || (*(int *)((long)CVar36 + 0x10) != 0)
     ) {
label_04264e6a:
    pSStack_220 = (System_String_c *)0x4264e76;
    uVar24 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pSStack_220 = (System_String_c *)0x4264e83;
    pSVar35 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar24,6);
    pSStack_220 = (System_String_c *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(pSVar35);
    pSStack_220 = (System_String_c *)0x4264e9a;
    uVar24 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pSStack_220 = (System_String_c *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(pSVar35,0,uVar24);
    pSStack_220 = (System_String_c *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(CVar36);
    pSStack_220 = (System_String_c *)0x4264eba;
    pSVar52 = (System_String_c *)
              CustomLogic_CustomLogicParser__GetLineNumberString
                        ((CustomLogic_CustomLogicParser_o *)pSVar52,
                         *(int32_t *)&((Il2CppType *)((long)CVar36 + 0x20))->data,method_04);
    pSStack_220 = (System_String_c *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(pSVar35);
    pSStack_220 = (System_String_c *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(pSVar35,1,pSVar52);
    pSStack_220 = (System_String_c *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(pSVar35);
    pSStack_220 = (System_String_c *)0x4264ee9;
    uVar24 = il2cpp_runtime_helper_023445d0(&", got ");
    pSStack_220 = (System_String_c *)0x4264ef9;
    pSVar25 = pSVar35;
    il2cpp_runtime_helper_01f6dff0(pSVar35,2,uVar24);
    pSStack_220 = (System_String_c *)0x4264f01;
    pSVar26 = CustomLogic_CustomLogicParser__GetTokenString
                        ((CustomLogic_CustomLogicParser_o *)pSVar25,(CustomLogic_CustomLogicToken_o *)CVar36,
                         method_05);
    pSStack_220 = (System_String_c *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(pSVar35);
    pSStack_220 = (System_String_c *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(pSVar35,3,pSVar26);
    pSStack_220 = (System_String_c *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(pSVar35);
    pSStack_220 = (System_String_c *)0x4264f30;
    uVar24 = il2cpp_runtime_helper_023445d0(&", expected ");
    pSStack_220 = (System_String_c *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(pSVar35,4,uVar24);
    pSStack_220 = (System_String_c *)0x4264f4c;
    SStack_218.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    SStack_218.monitor = (void *)0xffffffffffffffff;
    pSStack_220 = (System_String_c *)0x4264f67;
    iStack_208 = extraout_EDX_00;
    pSVar26 = System_Enum__ToString(&SStack_218,(MethodInfo *)0x0);
    pSStack_220 = (System_String_c *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(pSVar35);
    pSStack_220 = (System_String_c *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(pSVar35,5,pSVar26);
    pSStack_220 = (System_String_c *)0x4264f8c;
    CVar36 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)
             System_String__Concat_3af7570(pSVar35,(MethodInfo *)0x0);
    pSStack_220 = (System_String_c *)0x4264f9b;
    uVar24 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSStack_220 = (System_String_c *)0x4264fa3;
    pSVar37 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar24);
    pSStack_220 = (System_String_c *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar37,(System_String_o *)CVar36,(MethodInfo *)0x0);
    pSStack_220 = (System_String_c *)0x4264fbf;
    CVar21 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pSStack_220 = (System_String_c *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pSStack_220 = (System_String_c *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar37 = *(System_Exception_o **)((long)CVar36 + 0x18);
    CVar21 = CVar36;
    if (pSVar37 == (System_Exception_o *)0x0) goto label_04264fca;
    CVar21 = g_data_057b9bb8;
    if ((pSVar37->klass->_1).element_class == ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) {
      pSStack_220 = (System_String_c *)0x4264e5b;
      pCVar29 = (CustomLogic_CustomLogicBaseExpressionAst_o *)il2cpp_runtime_helper_02305440();
      if (*(int *)&pCVar29->klass == extraout_EDX_00) {
        return pCVar29;
      }
      goto label_04264e6a;
    }
  }
  pSStack_220 = (System_String_c *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_238 = (System_String_o *)0x4264ff3;
  CStack_230 = CVar36;
  pSStack_228 = pSVar35;
  pSStack_220 = pSVar52;
  il2cpp_runtime_helper_01f681a0(CVar21);
  pSStack_238 = (System_String_o *)0x4264ffe;
  pSVar26 = CustomLogic_CustomLogicParser__GetLineNumberString
                      ((CustomLogic_CustomLogicParser_o *)pSVar37,
                       *(int32_t *)&((Il2CppType *)((long)CVar21 + 0x20))->data,method_06);
  pSStack_238 = (System_String_o *)0x4265009;
  pSVar38 = CustomLogic_CustomLogicParser__GetTokenString
                      ((CustomLogic_CustomLogicParser_o *)pSVar37,(CustomLogic_CustomLogicToken_o *)CVar21,
                       method_07);
  pSStack_238 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_238 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_238 = (System_String_o *)0x426503b;
  pSVar26 = System_String__Concat_3af7470(str0,pSVar26,str2,pSVar38,(MethodInfo *)0x0);
  pSStack_238 = (System_String_o *)0x426504a;
  uVar24 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_238 = (System_String_o *)0x4265052;
  pSVar37 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar24);
  pSStack_238 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar37,pSVar26,(MethodInfo *)0x0);
  pSStack_238 = (System_String_o *)0x426506e;
  CVar55 = (CustomLogic_CustomLogicBaseExpressionAst_Fields)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_238 = (System_String_o *)0x4265079;
  uStack_248 = il2cpp_runtime_helper_022b2b10(pSVar37);
  CVar21 = CVar55;
  pSStack_240 = pSVar37;
  pSStack_238 = pSVar26;
  if (g_data_057adc0c == '\0') {
    CStack_250.Type = 0x426509c;
    CStack_250.Line = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    CStack_250.Type = 0x42650a8;
    CStack_250.Line = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((CVar55 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) ||
     (*(int *)&((Il2CppObject *)((long)CVar55 + 0x10))->klass != 0)) {
    return (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    CStack_250.Type = 0x42650dc;
    CStack_250.Line = 0;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     (pSVar58 = ((System_String_o *)((long)CVar55 + 0x18))->klass, pSVar58 == (System_String_c *)0x0)) {
    CStack_250.Type = 0x4265135;
    CStack_250.Line = 0;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    CVar21 = g_data_057b9bb8;
    if (*(Il2CppClass **)((long)(pSVar58->_1).image + 0x40) ==
        ((Il2CppObject *)((long)g_data_057b9bb8 + 0x40))->klass) {
      CStack_250.Type = 0x4265115;
      CStack_250.Line = 0;
      piVar34 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar10 = System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar34,MethodInfo_Boolean_ContainsKey);
      return (CustomLogic_CustomLogicBaseExpressionAst_o *)CONCAT44(extraout_var_00,bVar10);
    }
  }
  CStack_250.Type = 0x426513a;
  CStack_250.Line = 0;
  il2cpp_runtime_helper_022b2fd0();
  uVar24 = extraout_RDX_05;
  CStack_250 = CVar55;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar24 = extraout_RDX_06;
  }
  if (CVar21 == (CustomLogic_CustomLogicBaseExpressionAst_Fields)0x0) {
    return "null";
  }
  pSVar58 = ((System_String_o *)((long)CVar21 + 0x18))->klass;
  if (*(int *)&((Il2CppObject *)((long)CVar21 + 0x10))->klass == 0) {
    if (pSVar58 != (System_String_c *)0x0) {
      if (*(Il2CppClass **)((long)(pSVar58->_1).image + 0x40) == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar39 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_258 = *puVar39;
        SStack_268.klass = TypeInfo_CustomLogicSymbol;
        SStack_268.monitor = (void *)0xffffffffffffffff;
        pSVar26 = System_Enum__ToString(&SStack_268,(MethodInfo *)0x0);
        return (CustomLogic_CustomLogicBaseExpressionAst_o *)pSVar26;
      }
      goto label_042651fb;
    }
  }
  else if (pSVar58 != (System_String_c *)0x0) {
    pvVar6 = (pSVar58->_1).image;
    vtableDispatch = *(code **)((long)pvVar6 + 0x168);
    pCVar29 = (CustomLogic_CustomLogicBaseExpressionAst_o *)
              (*vtableDispatch)
                        (pSVar58,*(undefined8 *)((long)pvVar6 + 0x170),uVar24,vtableDispatch);
    return pCVar29;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (CustomLogic_CustomLogicBaseExpressionAst_o *)(pSVar58->_1).name;
}


// CustomLogic.CustomLogicParser$$ParseExpressionAst
// il2cpp: System_Object_array* CustomLogic_CustomLogicParser__ParseExpressionAst (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x4264b90

System_Object_array *
CustomLogic_CustomLogicParser__ParseExpressionAst
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  code *vtableDispatch;
  uint uVar1;
  bool_conflict bVar2;
  System_Object_array *pSVar3;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar4;
  long lVar5;
  System_Object_array *pSVar6;
  Il2CppObject *pIVar7;
  int *piVar8;
  int32_t *piVar9;
  undefined4 extraout_var;
  undefined8 uVar10;
  System_String_array *values;
  System_String_o *pSVar11;
  System_Object_array *pSVar12;
  System_Exception_o *pSVar13;
  System_String_o *str3;
  System_String_o *str0;
  System_String_o *str2;
  undefined4 extraout_var_00;
  undefined4 *puVar14;
  int extraout_EDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  System_Object_array *pSVar15;
  CustomLogic_CustomLogicBaseExpressionAst_o *unaff_RBP;
  System_Object_array *pSVar16;
  System_Collections_Generic_List_object__o *__this_01;
  CustomLogic_CustomLogicParser_o *__this_02;
  System_String_array *__this_03;
  long *plVar17;
  MethodInfo *in_R8;
  ulong uVar18;
  undefined1 auVar19 [16];
  System_Enum_o SStack_100;
  undefined4 uStack_f0;
  System_Object_array *pSStack_e8;
  undefined8 uStack_e0;
  System_Exception_o *pSStack_d8;
  System_String_o *pSStack_d0;
  System_Object_array *pSStack_c8;
  System_String_array *pSStack_c0;
  CustomLogic_CustomLogicParser_o *pCStack_b8;
  System_Enum_o SStack_b0;
  int iStack_a0;
  System_Object_array *pSStack_98;
  System_String_array *pSStack_90;
  CustomLogic_CustomLogicParser_o *pCStack_88;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCStack_80;
  undefined8 uStack_78;
  System_Object_array *pSStack_70;
  System_Object_array *pSStack_68;
  undefined8 uStack_60;
  System_Object_array *pSStack_58;
  ulong uStack_50;
  ulong uStack_48;
  CustomLogic_CustomLogicParser_o *pCStack_40;
  int local_2c;
  
  if (g_data_057adc05 == '\0') {
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264bb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057adc05 = '\x01';
    method = extraout_RDX;
  }
  pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264bc9;
  uVar1 = CustomLogic_CustomLogicParser__FindSemicolon(__this,startIndex,method);
  uVar18 = (ulong)uVar1;
  pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264be0;
  pSVar3 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  local_2c = uVar1 + 1;
  pSVar12 = (System_Object_array *)&stack0xffffffffffffffd4;
  pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264c01;
  pSVar6 = g_data_057b9bb8;
  pCVar4 = (CustomLogic_CustomLogicBaseExpressionAst_o *)il2cpp_runtime_helper_02304f30();
  if (pSVar3 != (System_Object_array *)0x0) {
    if (pCVar4 == (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
label_04264c26:
      if ((int)pSVar3->max_length != 0) {
        pSVar3->m_Items[0] = (Il2CppObject *)pCVar4;
        pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264c3c;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
        uVar18 = (ulong)(uVar1 - 1);
        pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264c50;
        pCVar4 = CustomLogic_CustomLogicParser__ParseExpression
                           (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,startIndex,uVar1 - 1,
                            in_R8);
        if (pCVar4 != (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0) {
          pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264c67;
          lVar5 = il2cpp_runtime_helper_023051f0(pCVar4);
          if (lVar5 == 0) goto label_04264c9a;
        }
        if (1 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[1] = (Il2CppObject *)pCVar4;
          pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264c85;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 1,pCVar4);
          return pSVar3;
        }
      }
      pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264c9a;
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264c21;
      lVar5 = il2cpp_runtime_helper_023051f0(pCVar4);
      if (lVar5 != 0) goto label_04264c26;
    }
label_04264c9a:
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264c9f;
    pSVar6 = (System_Object_array *)il2cpp_runtime_helper_0231b270();
    pSVar12 = (System_Object_array *)0x0;
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264ca9;
    il2cpp_runtime_helper_022b2b10();
    unaff_RBP = pCVar4;
  }
  pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264cae;
  uStack_60 = il2cpp_runtime_helper_022b2c90();
  pSVar15 = (System_Object_array *)((ulong)pSVar12 & 0xffffffff);
  pSVar16 = pSVar12;
  pSStack_58 = pSVar3;
  uStack_50 = uVar18;
  uStack_48 = (ulong)(uint)startIndex;
  pCStack_40 = __this;
  if (g_data_057adc0a == '\0') {
    pSStack_68 = (System_Object_array *)0x4264cd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_68 = (System_Object_array *)0x4264cde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc0a = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)pSVar6->bounds;
  __this_02 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    __this = (CustomLogic_CustomLogicParser_o *)&MethodInfo_CustomLogicToken_get_Item;
    if ((int)pSVar12 < (__this_01->fields)._size) {
      do {
        pSStack_68 = (System_Object_array *)0x4264d2b;
        pSVar16 = pSVar15;
        pIVar7 = System_Collections_Generic_List_object___get_Item(__this_01,(int)pSVar15,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar7 != (Il2CppObject *)0x0) && (*(int *)&pIVar7[1].klass == 0)) {
          __this_02 = pIVar7[1].monitor;
          if (__this_02 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_04264d70;
          pSVar16 = g_data_057b9bb8;
          if ((__this_02->klass->_1).element_class != (Il2CppClass *)g_data_057b9bb8->m_Items[4])
          goto label_04264d75;
          pSStack_68 = (System_Object_array *)0x4264d56;
          piVar8 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar8 == 0x23) {
            return pSVar15;
          }
        }
        uVar1 = (int)pSVar15 + 1;
        pSVar15 = (System_Object_array *)(ulong)uVar1;
        __this_01 = (System_Collections_Generic_List_object__o *)pSVar6->bounds;
        __this_02 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04264d70;
      } while ((int)uVar1 < (__this_01->fields)._size);
    }
    return (System_Object_array *)&g_data_ffffffff;
  }
label_04264d70:
  pSStack_68 = (System_Object_array *)0x4264d75;
  il2cpp_runtime_helper_022b2c90();
label_04264d75:
  pSStack_68 = (System_Object_array *)0x4264d7a;
  auVar19 = il2cpp_runtime_helper_022b2fd0();
  values = auVar19._8_8_;
  uStack_78 = auVar19._0_8_;
  pSVar12 = pSVar16;
  pSStack_70 = pSVar15;
  pSStack_68 = pSVar6;
  if (g_data_057adc0b == '\0') {
    __this_02 = (CustomLogic_CustomLogicParser_o *)&MethodInfo_Boolean_Contains;
    pCStack_80 = (CustomLogic_CustomLogicBaseExpressionAst_o *)0x4264d9f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc0b = '\x01';
  }
  if ((pSVar16 == (System_Object_array *)0x0) || (*(int *)&pSVar16->bounds != 0)) {
    return (System_Object_array *)0x0;
  }
  if ((values == (System_String_array *)0x0) ||
     (__this_02 = (CustomLogic_CustomLogicParser_o *)pSVar16->max_length,
     __this_02 == (CustomLogic_CustomLogicParser_o *)0x0)) {
    pCStack_80 = (CustomLogic_CustomLogicBaseExpressionAst_o *)0x4264e06;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar12 = g_data_057b9bb8;
    if ((__this_02->klass->_1).element_class == (Il2CppClass *)g_data_057b9bb8->m_Items[4]) {
      pCStack_80 = (CustomLogic_CustomLogicBaseExpressionAst_o *)0x4264de6;
      piVar9 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar2 = System_Collections_Generic_HashSet_int___Contains
                        ((System_Collections_Generic_HashSet_int__o *)values,*piVar9,MethodInfo_Boolean_Contains);
      return (System_Object_array *)CONCAT44(extraout_var,bVar2);
    }
  }
  pCStack_80 = (CustomLogic_CustomLogicBaseExpressionAst_o *)0x4264e0b;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_98 = pSVar16;
  pSStack_90 = values;
  pCStack_88 = __this;
  pCStack_80 = unaff_RBP;
  if ((pSVar12 == (System_Object_array *)0x0) || (*(int *)&pSVar12->bounds != 0)) {
label_04264e6a:
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264e76;
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264e83;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar10,6);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264e9a;
    uVar10 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(values,0,uVar10);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(pSVar12);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264eba;
    __this_02 = (CustomLogic_CustomLogicParser_o *)
                CustomLogic_CustomLogicParser__GetLineNumberString
                          (__this_02,*(int32_t *)pSVar12->m_Items,method_00);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(values,1,__this_02);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264ee9;
    uVar10 = il2cpp_runtime_helper_023445d0(&", got ");
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264ef9;
    __this_03 = values;
    il2cpp_runtime_helper_01f6dff0(values,2,uVar10);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f01;
    pSVar11 = CustomLogic_CustomLogicParser__GetTokenString
                        ((CustomLogic_CustomLogicParser_o *)__this_03,
                         (CustomLogic_CustomLogicToken_o *)pSVar12,method_01);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(values,3,pSVar11);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f30;
    uVar10 = il2cpp_runtime_helper_023445d0(&", expected ");
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(values,4,uVar10);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f4c;
    SStack_b0.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    SStack_b0.monitor = (void *)0xffffffffffffffff;
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f67;
    iStack_a0 = extraout_EDX;
    pSVar11 = System_Enum__ToString(&SStack_b0,(MethodInfo *)0x0);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(values,5,pSVar11);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f8c;
    pSVar12 = (System_Object_array *)System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264f9b;
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264fa3;
    pSVar13 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar10);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar13,(System_String_o *)pSVar12,(MethodInfo *)0x0);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264fbf;
    pSVar6 = (System_Object_array *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar13 = (System_Exception_o *)pSVar12->max_length;
    pSVar6 = pSVar12;
    if (pSVar13 == (System_Exception_o *)0x0) goto label_04264fca;
    pSVar6 = g_data_057b9bb8;
    if ((pSVar13->klass->_1).element_class == (Il2CppClass *)g_data_057b9bb8->m_Items[4]) {
      pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264e5b;
      pSVar6 = (System_Object_array *)il2cpp_runtime_helper_02305440();
      if (*(int *)&(pSVar6->obj).klass == extraout_EDX) {
        return pSVar6;
      }
      goto label_04264e6a;
    }
  }
  pCStack_b8 = (CustomLogic_CustomLogicParser_o *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_d0 = (System_String_o *)0x4264ff3;
  pSStack_c8 = pSVar12;
  pSStack_c0 = values;
  pCStack_b8 = __this_02;
  il2cpp_runtime_helper_01f681a0(pSVar6);
  pSStack_d0 = (System_String_o *)0x4264ffe;
  pSVar11 = CustomLogic_CustomLogicParser__GetLineNumberString
                      ((CustomLogic_CustomLogicParser_o *)pSVar13,*(int32_t *)pSVar6->m_Items,method_02);
  pSStack_d0 = (System_String_o *)0x4265009;
  str3 = CustomLogic_CustomLogicParser__GetTokenString
                   ((CustomLogic_CustomLogicParser_o *)pSVar13,(CustomLogic_CustomLogicToken_o *)pSVar6,
                    method_03);
  pSStack_d0 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_d0 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_d0 = (System_String_o *)0x426503b;
  pSVar11 = System_String__Concat_3af7470(str0,pSVar11,str2,str3,(MethodInfo *)0x0);
  pSStack_d0 = (System_String_o *)0x426504a;
  uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_d0 = (System_String_o *)0x4265052;
  pSVar13 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar10);
  pSStack_d0 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar13,pSVar11,(MethodInfo *)0x0);
  pSStack_d0 = (System_String_o *)0x426506e;
  pSVar6 = (System_Object_array *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_d0 = (System_String_o *)0x4265079;
  uStack_e0 = il2cpp_runtime_helper_022b2b10(pSVar13);
  pSVar12 = pSVar6;
  pSStack_d8 = pSVar13;
  pSStack_d0 = pSVar11;
  if (g_data_057adc0c == '\0') {
    pSStack_e8 = (System_Object_array *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pSStack_e8 = (System_Object_array *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((pSVar6 == (System_Object_array *)0x0) || (*(int *)&pSVar6->bounds != 0)) {
    return (System_Object_array *)0x0;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    pSStack_e8 = (System_Object_array *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     ((long *)pSVar6->max_length == (long *)0x0)) {
    pSStack_e8 = (System_Object_array *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar12 = g_data_057b9bb8;
    if (*(Il2CppObject **)(*(long *)pSVar6->max_length + 0x40) == g_data_057b9bb8->m_Items[4]) {
      pSStack_e8 = (System_Object_array *)0x4265115;
      piVar9 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar2 = System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar9,MethodInfo_Boolean_ContainsKey);
      return (System_Object_array *)CONCAT44(extraout_var_00,bVar2);
    }
  }
  pSStack_e8 = (System_Object_array *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar10 = extraout_RDX_00;
  pSStack_e8 = pSVar6;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar10 = extraout_RDX_01;
  }
  if (pSVar12 == (System_Object_array *)0x0) {
    return "null";
  }
  plVar17 = (long *)pSVar12->max_length;
  if (*(int *)&pSVar12->bounds == 0) {
    if (plVar17 != (long *)0x0) {
      if (*(Il2CppClass **)(*plVar17 + 0x40) == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar14 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_f0 = *puVar14;
        SStack_100.klass = TypeInfo_CustomLogicSymbol;
        SStack_100.monitor = (void *)0xffffffffffffffff;
        pSVar12 = (System_Object_array *)System_Enum__ToString(&SStack_100,(MethodInfo *)0x0);
        return pSVar12;
      }
      goto label_042651fb;
    }
  }
  else if (plVar17 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar17 + 0x168);
    pSVar12 = (System_Object_array *)
              (*vtableDispatch)(plVar17,*(undefined8 *)(*plVar17 + 0x170),uVar10,vtableDispatch)
    ;
    return pSVar12;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (System_Object_array *)plVar17[2];
}


// CustomLogic.CustomLogicParser$$ParseAst
// il2cpp: int32_t CustomLogic_CustomLogicParser__ParseAst (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, CustomLogic_CustomLogicBaseAst_o* prev, const MethodInfo* method);
// 0x42620e0

int32_t CustomLogic_CustomLogicParser__ParseAst
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,
                  CustomLogic_CustomLogicBaseAst_o *prev,MethodInfo *method)

{
  char **ppcVar1;
  Il2CppObject **ppIVar2;
  int iVar3;
  uint uVar4;
  void *pvVar5;
  char *pcVar6;
  code *vtableDispatch;
  undefined1 *puVar7;
  uint uVar8;
  int32_t iVar9;
  uint uVar10;
  bool_conflict bVar11;
  System_Object_array *pSVar12;
  uint *puVar13;
  CustomLogic_CustomLogicCompiler_FileRange_o *pCVar14;
  undefined4 extraout_var;
  CustomLogic_CustomLogicBaseExpressionAst_o *pCVar15;
  CustomLogic_CustomLogicToken_o *pCVar16;
  System_Object_array *pSVar17;
  System_Object_array *pSVar18;
  System_Object_array *pSVar19;
  System_Object_array *item;
  System_Object_array *pSVar20;
  uint *puVar21;
  int *piVar22;
  undefined8 uVar23;
  System_String_array *pSVar24;
  System_String_o *pSVar25;
  System_Exception_o *__this_00;
  ulong uVar26;
  System_Int32_array *pSVar27;
  long lVar28;
  System_Object_array *pSVar29;
  long lVar30;
  System_Object_array *pSVar31;
  Il2CppObject *pIVar32;
  int32_t *piVar33;
  System_String_array *pSVar34;
  System_Exception_o *pSVar35;
  System_Object_array *pSVar36;
  System_String_o *pSVar37;
  System_String_o *str0;
  System_String_o *str2;
  undefined4 *puVar38;
  MethodInfo *pMVar39;
  uint extraout_EDX;
  int extraout_EDX_00;
  int extraout_EDX_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_10;
  MethodInfo *method_02;
  MethodInfo *extraout_RDX_11;
  MethodInfo *extraout_RDX_12;
  MethodInfo *extraout_RDX_13;
  MethodInfo *extraout_RDX_14;
  MethodInfo *method_04;
  MethodInfo *method_05;
  ulong extraout_RDX_15;
  MethodInfo *extraout_RDX_16;
  MethodInfo *extraout_RDX_17;
  ulong extraout_RDX_18;
  ulong extraout_RDX_19;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *extraout_RDX_20;
  MethodInfo *extraout_RDX_21;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  undefined8 extraout_RDX_22;
  undefined8 extraout_RDX_23;
  int iVar40;
  System_Object_array *unaff_RBX;
  System_Object_array *unaff_RBP;
  System_Object_array *pSVar41;
  System_Object_array *pSVar42;
  System_Object_array *pSVar43;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar44;
  Il2CppType *pIVar45;
  System_Collections_Generic_List_object__o *pSVar46;
  long *plVar47;
  CustomLogic_CustomLogicParser_o *pCVar48;
  MethodInfo *in_R8;
  System_Object_array *pSVar49;
  ulong uVar50;
  System_Object_array *unaff_R13;
  ulong uVar51;
  System_String_c *pSVar52;
  bool bVar53;
  undefined1 uVar54;
  undefined1 auVar55 [16];
  System_Enum_o SStack_2d0;
  undefined4 uStack_2c0;
  System_Object_array *pSStack_2b8;
  undefined8 uStack_2b0;
  System_Exception_o *pSStack_2a8;
  System_String_o *pSStack_2a0;
  System_Object_array *pSStack_298;
  System_String_array *pSStack_290;
  CustomLogic_CustomLogicParser_o *pCStack_288;
  System_Enum_o SStack_280;
  int iStack_270;
  System_Object_array *pSStack_268;
  System_String_array *pSStack_260;
  System_String_c *pSStack_258;
  System_Object_array *pSStack_250;
  undefined8 uStack_248;
  System_Object_array *pSStack_240;
  System_Object_array *pSStack_238;
  undefined8 uStack_230;
  long lStack_228;
  ulong uStack_220;
  ulong uStack_218;
  System_String_c *pSStack_210;
  undefined1 auStack_1fc [108];
  Il2CppObject *pIStack_190;
  int iStack_188;
  System_Object_array *pSStack_180;
  long *plStack_178;
  ulong uStack_170;
  System_Object_array *pSStack_168;
  Il2CppObject *pIStack_160;
  System_Object_array *pSStack_158;
  System_Object_array *pSStack_150;
  System_Object_array *pSStack_148;
  System_Object_array *pSStack_140;
  ulong uStack_138;
  System_Object_array *pSStack_130;
  System_Object_array *pSStack_128;
  System_Object_array *pSStack_120;
  System_Object_array *pSStack_118;
  System_Object_array *pSStack_110;
  ulong uStack_108;
  System_Object_array *apSStack_100 [2];
  int32_t iStack_ec;
  int32_t iStack_e8;
  uint uStack_e4;
  System_Object_array *pSStack_e0;
  System_Object_array *pSStack_d8;
  System_Object_array *pSStack_d0;
  System_Object_array *pSStack_c8;
  System_Object_array *pSStack_c0;
  System_Object_array *apSStack_b8 [2];
  System_Object_array *pSStack_a8;
  uint uStack_9c;
  System_Object_array *pSStack_98;
  System_Object_array *pSStack_90;
  System_Object_array *pSStack_88;
  CustomLogic_CustomLogicParser_o *pCStack_80;
  System_Object_array *pSStack_78;
  System_Object_array *pSStack_70;
  System_Object_array *local_68;
  System_Object_array *local_60;
  System_Object_array *local_58;
  System_Object_array *local_50;
  void *local_48;
  void *local_40;
  System_Object_array *local_38;
  MethodInfo_362C220 *method_03;
  
  pSVar36 = (System_Object_array *)(ulong)(uint)startIndex;
  if (g_data_057adc06 == '\0') {
    pSStack_70 = (System_Object_array *)0x4262110;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAssignmentExpressionAst);
    pSStack_70 = (System_Object_array *)0x426211c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBaseExpressionAst);
    pSStack_70 = (System_Object_array *)0x4262128;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBlockAst);
    pSStack_70 = (System_Object_array *)0x4262134;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBreakExpressionAst);
    pSStack_70 = (System_Object_array *)0x4262140;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassDefinitionAst);
    pSStack_70 = (System_Object_array *)0x426214c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicConditionalBlockAst);
    pSStack_70 = (System_Object_array *)0x4262158;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicContinueExpressionAst);
    pSStack_70 = (System_Object_array *)0x4262164;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicForBlockAst);
    pSStack_70 = (System_Object_array *)0x4262170;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMethodDefinitionAst);
    pSStack_70 = (System_Object_array *)0x426217c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    pSStack_70 = (System_Object_array *)0x4262188;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicReturnExpressionAst);
    pSStack_70 = (System_Object_array *)0x4262194;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicStartAst);
    pSStack_70 = (System_Object_array *)0x42621a0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pSStack_70 = (System_Object_array *)0x42621ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVariableExpressionAst);
    pSStack_70 = (System_Object_array *)0x42621b8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicWaitExpressionAst);
    pSStack_70 = (System_Object_array *)0x42621c4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_70 = (System_Object_array *)0x42621d0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_70 = (System_Object_array *)0x42621dc;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_70 = (System_Object_array *)0x42621e8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_70 = (System_Object_array *)0x42621f4;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    pSStack_70 = (System_Object_array *)0x4262200;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
    pSStack_70 = (System_Object_array *)0x426220c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pSStack_70 = (System_Object_array *)0x4262218;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSourceType_get_Value);
    g_data_057adc06 = '\x01';
  }
  local_40 = (void *)0x0;
  pSVar44 = (__this->fields)._tokens;
  if (pSVar44 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
label_04263501:
    do {
      pSStack_70 = (System_Object_array *)0x4263506;
      il2cpp_runtime_helper_022b2c90();
      pSVar29 = unaff_RBX;
label_04263506:
      pSVar44 = (__this->fields)._tokens;
      unaff_RBX = pSVar29;
    } while (pSVar44 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0);
    pSStack_70 = (System_Object_array *)0x426351b;
    pCVar16 = (CustomLogic_CustomLogicToken_o *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar44,(int)unaff_RBP + -1,
                         (MethodInfo_362BED0 *)((Il2CppClass_1 *)&pSVar36->obj)->image);
    pSStack_70 = (System_Object_array *)0x426352b;
    CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar16,9,method);
    pSStack_70 = (System_Object_array *)0x4263538;
    uVar8 = CustomLogic_CustomLogicParser__ParseAst
                      (__this,(int)unaff_RBP,(CustomLogic_CustomLogicBaseAst_o *)unaff_R13,method);
    prev = (CustomLogic_CustomLogicBaseAst_o *)local_60;
    pSVar36 = (System_Object_array *)(ulong)uVar8;
    pvVar5 = ((Il2CppClass_1 *)&local_60->obj)->image;
    method = (MethodInfo *)(ulong)*(byte *)((Il2CppType *)TypeInfo_CustomLogicClassDefinitionAst->m_Items + 0x11);
    pSVar12 = unaff_RBP;
    pSVar42 = TypeInfo_CustomLogicClassDefinitionAst;
    if ((*(byte *)((long)pvVar5 + 0x130) < *(byte *)((Il2CppType *)TypeInfo_CustomLogicClassDefinitionAst->m_Items + 0x11)) ||
       (*(System_Object_array **)(*(long *)((long)pvVar5 + 200) + -8 + (long)method * 8) != TypeInfo_CustomLogicClassDefinitionAst)) {
label_04263603:
      pSStack_70 = (System_Object_array *)0x426360b;
      pSVar17 = (System_Object_array *)il2cpp_runtime_helper_022b2fd0(prev);
      pSVar49 = pSVar12;
      pSVar20 = (System_Object_array *)prev;
    }
    else {
      pSVar42 = (System_Object_array *)local_50->max_length;
      if ((pSVar42 == (System_Object_array *)0x0) ||
         (pSVar49 = unaff_RBP, pSVar17 = g_data_057b9c00, pSVar20 = local_60,
         (System_Object_array *)(pSVar42->obj).klass == g_data_057b9c00)) {
        puVar21 = (uint *)0x0;
        pSStack_70 = (System_Object_array *)0x42635a0;
        CustomLogic_CustomLogicClassDefinitionAst__AddMethod
                  ((CustomLogic_CustomLogicClassDefinitionAst_o *)local_60,(System_String_o *)pSVar42,
                   (CustomLogic_CustomLogicMethodDefinitionAst_o *)unaff_R13,(MethodInfo *)0x0);
        bVar53 = uVar8 != (uint)local_58;
        pMVar39 = extraout_RDX_14;
        pSVar12 = local_68;
        if (bVar53) {
label_042635ab:
          pSStack_70 = (System_Object_array *)0x42635b9;
          iVar9 = CustomLogic_CustomLogicParser__ParseAst(__this,(int32_t)pSVar36,prev,(MethodInfo *)puVar21);
          return iVar9;
        }
switchD_042622b4_caseD_3:
        pSStack_70 = (System_Object_array *)0x4263603;
        pSVar42 = pSVar12;
        CustomLogic_CustomLogicParser__AssertFalse(__this,(CustomLogic_CustomLogicToken_o *)pSVar12,pMVar39);
        method = (MethodInfo *)puVar21;
        goto label_04263603;
      }
    }
label_04263611:
    pSStack_70 = (System_Object_array *)0x4263616;
    il2cpp_runtime_helper_022b2fd0(pSVar42);
    puVar21 = (uint *)method;
    pSVar12 = pSVar49;
label_04263616:
    pSStack_70 = (System_Object_array *)0x426361b;
    il2cpp_runtime_helper_022b2ca0();
label_0426361b:
    pSStack_70 = (System_Object_array *)0x4263625;
    il2cpp_runtime_helper_022b2fd0(local_60);
label_04263625:
    pSStack_70 = (System_Object_array *)0x426362d;
    il2cpp_runtime_helper_022b2fd0(pSVar29);
    unaff_RBP = pSVar12;
    pSVar12 = pSVar36;
  }
  else {
    if ((pSVar44->fields)._size <= startIndex) {
      return startIndex;
    }
    unaff_R13 = (System_Object_array *)&MethodInfo_CustomLogicToken_get_Item;
    pSStack_70 = (System_Object_array *)0x4262252;
    pSVar12 = (System_Object_array *)
              System_Collections_Generic_List_object___get_Item
                        ((System_Collections_Generic_List_object__o *)pSVar44,startIndex,MethodInfo_CustomLogicToken_get_Item);
    pSVar44 = (__this->fields)._tokens;
    if (pSVar44 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_04263501;
    unaff_RBP = pSVar12;
    if ((pSVar44->fields)._size + -1 <= startIndex) {
      pSVar31 = (System_Object_array *)0x0;
      pMVar39 = extraout_RDX;
      unaff_RBX = pSVar31;
      if (prev != (CustomLogic_CustomLogicBaseAst_o *)0x0) goto label_04262293;
      goto label_04263501;
    }
    pSStack_70 = (System_Object_array *)0x426227b;
    unaff_RBX = (System_Object_array *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar44,startIndex + 1,MethodInfo_CustomLogicToken_get_Item);
    pMVar39 = extraout_RDX_00;
    pSVar31 = unaff_RBX;
    if (prev == (CustomLogic_CustomLogicBaseAst_o *)0x0) goto label_04263501;
label_04262293:
    puVar21 = &switchD_042622b4::switchdataD_00d9950c;
    pSVar29 = pSVar31;
    local_58 = pSVar36;
    pSVar17 = g_data_057b9bb8;
    unaff_RBX = pSVar31;
    method = (MethodInfo *)puVar21;
    pSVar49 = pSVar12;
    pSVar20 = (System_Object_array *)prev;
    switch((prev->fields).Type) {
    case 0:
      pSVar29 = (System_Object_array *)&TypeInfo_CustomLogicSymbols;
      local_50 = pSVar31;
      if (*(int *)((long)&TypeInfo_CustomLogicSymbols[5].fields.Error + 4) == 0) {
        pSStack_70 = (System_Object_array *)0x4262666;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_70 = (System_Object_array *)0x426267c;
      bVar11 = CustomLogic_CustomLogicParser__IsSymbolIn
                         (TypeInfo_CustomLogicSymbols,(CustomLogic_CustomLogicToken_o *)pSVar12,
                          TypeInfo_CustomLogicSymbols[4].fields.Error[1].monitor,(MethodInfo *)puVar21);
      pMVar39 = extraout_RDX_03;
      if ((char)bVar11 == '\0') goto switchD_042622b4_caseD_3;
      method = (MethodInfo *)puVar21;
      unaff_RBX = pSVar29;
      if (pSVar12 == (System_Object_array *)0x0) goto label_04263501;
      iVar9 = *(int32_t *)&((Il2CppType *)pSVar12->m_Items)->data;
      pSStack_70 = (System_Object_array *)0x426269f;
      pSVar31 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicClassDefinitionAst);
      method = (MethodInfo *)0x0;
      pSStack_70 = (System_Object_array *)0x42626b5;
      local_68 = pSVar12;
      CustomLogic_CustomLogicClassDefinitionAst___ctor
                ((CustomLogic_CustomLogicClassDefinitionAst_o *)pSVar31,
                 (CustomLogic_CustomLogicToken_o *)pSVar12,iVar9,(MethodInfo *)0x0);
      pSVar29 = (System_Object_array *)(__this->fields)._Compiler_k__BackingField;
      pSVar12 = pSVar31;
      if (pSVar29 == (System_Object_array *)0x0) {
label_042629c6:
        pSVar44 = (__this->fields)._tokens;
      }
      else {
        iVar9 = *(int32_t *)&((Il2CppType *)local_68->m_Items)->data;
        pMVar39 = extraout_RDX_04;
        local_38 = pSVar31;
        if (g_data_057adbcf == '\0') {
          pSStack_70 = (System_Object_array *)0x42626e3;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
          g_data_057adbcf = '\x01';
          pMVar39 = extraout_RDX_05;
        }
        pSStack_70 = (System_Object_array *)0x42626f4;
        pCVar14 = CustomLogic_CustomLogicCompiler__FindFileRange
                            ((CustomLogic_CustomLogicCompiler_o *)pSVar29,iVar9,pMVar39);
        if (pCVar14 == (CustomLogic_CustomLogicCompiler_FileRange_o *)0x0) {
          local_40 = (void *)0x0;
          pSVar12 = local_38;
          pSVar36 = local_58;
          goto label_042629c6;
        }
        local_48 = (void *)0x0;
        pSVar29 = (System_Object_array *)&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType;
        pSStack_70 = (System_Object_array *)0x426271d;
        System_Nullable_Int32Enum____ctor
                  ((System_Nullable_Int32Enum__o)&local_48,(pCVar14->fields)._Type_k__BackingField,
                   MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
        pSVar12 = local_38;
        pSVar36 = local_58;
        local_40 = local_48;
        unaff_R13 = (System_Object_array *)&MethodInfo_CustomLogicToken_get_Item;
        if ((char)local_48 == '\0') goto label_042629c6;
        pSStack_70 = (System_Object_array *)0x4262754;
        iVar9 = System_Nullable_Int32Enum___get_Value((System_Nullable_Int32Enum__o)&local_40,MethodInfo_CustomLogicSourceType_get_Value);
        local_48 = (void *)0x0;
        pSStack_70 = (System_Object_array *)0x426276c;
        System_Nullable_Int32Enum____ctor((System_Nullable_Int32Enum__o)&local_48,iVar9,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
        unaff_RBX = pSVar29;
        unaff_RBP = pSVar12;
        if (pSVar12 == (System_Object_array *)0x0) goto label_04263501;
        ((Il2CppType *)pSVar12->m_Items)[1].data = local_48;
        pSVar44 = (__this->fields)._tokens;
      }
      unaff_R13 = (System_Object_array *)&MethodInfo_CustomLogicToken_get_Item;
      unaff_RBX = pSVar29;
      unaff_RBP = pSVar12;
      if (pSVar44 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_04263501;
      unaff_R13 = (System_Object_array *)&MethodInfo_CustomLogicToken_get_Item;
      pSStack_70 = (System_Object_array *)0x42629e1;
      pCVar16 = (CustomLogic_CustomLogicToken_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar44,(int)pSVar36 + 2,MethodInfo_CustomLogicToken_get_Item)
      ;
      pSStack_70 = (System_Object_array *)0x42629f1;
      CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar16,9,method);
      pSStack_70 = (System_Object_array *)0x4262a01;
      uVar8 = CustomLogic_CustomLogicParser__ParseAst
                        (__this,(int)pSVar36 + 3,(CustomLogic_CustomLogicBaseAst_o *)pSVar12,method);
      if (local_50 == (System_Object_array *)0x0) goto label_04263501;
      pSVar36 = (System_Object_array *)(ulong)uVar8;
      method = (MethodInfo *)(ulong)*(byte *)((Il2CppType *)TypeInfo_CustomLogicStartAst->m_Items + 0x11);
      pSVar42 = TypeInfo_CustomLogicStartAst;
      if ((*(byte *)((Il2CppType *)TypeInfo_CustomLogicStartAst->m_Items + 0x11) <= (prev->klass->_2).naturalAligment) &&
         ((System_Object_array *)
          (prev->klass->_2).typeHierarchy
          [(long)((long)((System_Object_array *)((long)method + -0x80018))->m_Items + 0x7fff7)] ==
          TypeInfo_CustomLogicStartAst)) {
        pSVar42 = (System_Object_array *)local_50->max_length;
        if ((pSVar42 != (System_Object_array *)0x0) &&
           (pSVar49 = pSVar12, pSVar17 = g_data_057b9c00, ((Il2CppClass_1 *)&pSVar42->obj)->image != g_data_057b9c00
           )) goto label_04263611;
        puVar21 = (uint *)0x0;
        pSStack_70 = (System_Object_array *)0x4262a71;
        CustomLogic_CustomLogicStartAst__AddClass
                  ((CustomLogic_CustomLogicStartAst_o *)prev,(System_String_o *)pSVar42,
                   (CustomLogic_CustomLogicClassDefinitionAst_o *)pSVar12,(MethodInfo *)0x0);
        pMVar39 = extraout_RDX_07;
        pSVar12 = local_68;
        if (uVar8 != (uint)local_58) goto label_042635ab;
        goto switchD_042622b4_caseD_3;
      }
      goto label_04263603;
    case 1:
      if (pSVar12 == (System_Object_array *)0x0) goto label_04263501;
      iVar40 = *(int *)&pSVar12->bounds;
      if (iVar40 == 0) {
        pSVar42 = (System_Object_array *)pSVar12->max_length;
        if (pSVar42 != (System_Object_array *)0x0) {
          if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
          goto label_04263611;
          pSStack_70 = (System_Object_array *)0x4262977;
          auVar55 = il2cpp_runtime_helper_02305440();
          pMVar39 = auVar55._8_8_;
          if (*auVar55._0_8_ != 5) {
            iVar40 = *(int *)&pSVar12->bounds;
            if (iVar40 == 0) {
              pSVar42 = (System_Object_array *)pSVar12->max_length;
              method = (MethodInfo *)puVar21;
              if (pSVar42 == (System_Object_array *)0x0) goto label_04263501;
              pSVar17 = g_data_057b9bb8;
              if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
              goto label_04263611;
              pSStack_70 = (System_Object_array *)0x4262aea;
              auVar55 = il2cpp_runtime_helper_02305440();
              pMVar39 = auVar55._8_8_;
              if (*auVar55._0_8_ == 6) goto label_04262980;
              iVar40 = *(int *)&pSVar12->bounds;
            }
            goto joined_r0x04262af8;
          }
label_04262980:
          pSStack_70 = (System_Object_array *)0x4262990;
          CustomLogic_CustomLogicParser__AssertTokenType
                    (__this,(CustomLogic_CustomLogicToken_o *)pSVar31,2,(MethodInfo *)puVar21);
          if (*(int *)&pSVar12->bounds == 0) {
            pSVar42 = (System_Object_array *)pSVar12->max_length;
            method = (MethodInfo *)puVar21;
            local_60 = (System_Object_array *)prev;
            local_50 = pSVar31;
            if (pSVar42 == (System_Object_array *)0x0) goto label_04263501;
            pSVar17 = g_data_057b9bb8;
            if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
            goto label_04263611;
            pSStack_70 = (System_Object_array *)0x42632c7;
            piVar22 = (int *)il2cpp_runtime_helper_02305440();
            pSVar20 = (System_Object_array *)CONCAT71((int7)((ulong)prev >> 8),*piVar22 == 6);
          }
          else {
            pSVar20 = (System_Object_array *)0x0;
            local_60 = (System_Object_array *)prev;
            local_50 = pSVar31;
          }
          uVar8 = *(uint *)&((Il2CppType *)pSVar12->m_Items)->data;
          unaff_RBX = (System_Object_array *)(ulong)uVar8;
          pSStack_70 = (System_Object_array *)0x42632e4;
          local_68 = pSVar12;
          unaff_R13 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMethodDefinitionAst);
          method = (MethodInfo *)0x0;
          pSStack_70 = (System_Object_array *)0x42632f7;
          CustomLogic_CustomLogicMethodDefinitionAst___ctor
                    ((CustomLogic_CustomLogicMethodDefinitionAst_o *)unaff_R13,uVar8,(uint)pSVar20 & 0xff,
                     (MethodInfo *)0x0);
          pSVar17 = g_data_057b9c00;
          if ((local_50 != (System_Object_array *)0x0) && (unaff_R13 != (System_Object_array *)0x0)) {
            pSVar42 = (System_Object_array *)local_50->max_length;
            if (pSVar42 == (System_Object_array *)0x0) {
              ((Il2CppType *)unaff_R13->m_Items)[1].data = (void *)0x0;
              pSStack_70 = (System_Object_array *)0x4263369;
              il2cpp_runtime_helper_022b4080((Il2CppType *)unaff_R13->m_Items + 1);
              pSVar44 = (__this->fields)._tokens;
            }
            else {
              pSVar29 = unaff_RBX;
              if ((((Il2CppClass_1 *)&pSVar42->obj)->image != g_data_057b9c00) ||
                 (((Il2CppType *)unaff_R13->m_Items)[1].data = pSVar42,
                 ((Il2CppClass_1 *)&pSVar42->obj)->image != pSVar17)) goto label_04263611;
              pSStack_70 = (System_Object_array *)0x4263347;
              il2cpp_runtime_helper_022b4080((Il2CppType *)unaff_R13->m_Items + 1);
              pSVar44 = (__this->fields)._tokens;
            }
            if (pSVar44 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
              pSStack_70 = (System_Object_array *)0x426338a;
              pCVar16 = (CustomLogic_CustomLogicToken_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar44,startIndex + 2,
                                   MethodInfo_CustomLogicToken_get_Item);
              pSStack_70 = (System_Object_array *)0x426339a;
              CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar16,0xb,method);
              pSVar44 = (__this->fields)._tokens;
              unaff_RBX = (System_Object_array *)&MethodInfo_CustomLogicToken_get_Item;
              if (pSVar44 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
                pSVar36 = (System_Object_array *)&MethodInfo_CustomLogicToken_get_Item;
                pSStack_70 = (System_Object_array *)0x42633b7;
                pSVar29 = (System_Object_array *)
                          System_Collections_Generic_List_object___get_Item
                                    ((System_Collections_Generic_List_object__o *)pSVar44,startIndex + 3,
                                     MethodInfo_CustomLogicToken_get_Item);
                if (pSVar29 != (System_Object_array *)0x0) {
                  unaff_RBP = (System_Object_array *)(ulong)((int)local_58 + 5);
                  iVar40 = *(int *)&pSVar29->bounds;
                  pSVar20 = (System_Object_array *)&MethodInfo_Void_Add;
                  if (iVar40 != 0) goto label_04263423;
label_042634a0:
                  pSVar42 = (System_Object_array *)pSVar29->max_length;
                  unaff_RBX = pSVar29;
                  if (pSVar42 != (System_Object_array *)0x0) {
                    pSVar49 = unaff_RBP;
                    pSVar17 = g_data_057b9bb8;
                    if ((((pSVar42->obj).klass)->_1).element_class !=
                        ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04263611;
                    pSStack_70 = (System_Object_array *)0x42634ca;
                    piVar22 = (int *)il2cpp_runtime_helper_02305440();
                    if (*piVar22 == 0xc) goto label_04263506;
                    if (*(int *)&pSVar29->bounds == 2) goto label_04263428;
label_042633e0:
                    pSStack_70 = (System_Object_array *)0x42633f0;
                    CustomLogic_CustomLogicParser__AssertSymbolValue
                              (__this,(CustomLogic_CustomLogicToken_o *)pSVar29,0x25,method);
                    pSVar44 = (__this->fields)._tokens;
                    unaff_RBX = pSVar29;
                    while (pSVar44 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
                      while( true ) {
                        pSStack_70 = (System_Object_array *)0x4263409;
                        pSVar29 = (System_Object_array *)
                                  System_Collections_Generic_List_object___get_Item
                                            ((System_Collections_Generic_List_object__o *)pSVar44,
                                             (int)unaff_RBP + -1,MethodInfo_CustomLogicToken_get_Item);
                        unaff_RBP = (System_Object_array *)(ulong)((int)unaff_RBP + 1);
                        unaff_RBX = pSVar29;
                        if (pSVar29 == (System_Object_array *)0x0) goto label_04263501;
                        iVar40 = *(int *)&pSVar29->bounds;
                        if (iVar40 == 0) goto label_042634a0;
label_04263423:
                        unaff_RBX = pSVar29;
                        if (iVar40 != 2) goto label_042633e0;
label_04263428:
                        pSVar12 = MethodInfo_Void_Add;
                        pSVar46 = ((Il2CppType *)unaff_R13->m_Items)->data;
                        if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) goto label_04263501;
                        pSVar42 = (System_Object_array *)unaff_RBX->max_length;
                        if ((pSVar42 != (System_Object_array *)0x0) &&
                           (pSVar29 = unaff_RBX, pSVar49 = unaff_RBP, pSVar17 = g_data_057b9c00,
                           ((Il2CppClass_1 *)&pSVar42->obj)->image != g_data_057b9c00)) goto label_04263611;
                        piVar33 = &(pSVar46->fields)._version;
                        *piVar33 = *piVar33 + 1;
                        pSVar31 = (pSVar46->fields)._items;
                        method = (MethodInfo *)pSVar12;
                        if (pSVar31 == (System_Object_array *)0x0) goto label_04263501;
                        uVar8 = (pSVar46->fields)._size;
                        if ((uint)pSVar31->max_length <= uVar8) break;
                        method = (MethodInfo *)(ulong)(uVar8 + 1);
                        (pSVar46->fields)._size = uVar8 + 1;
                        pSVar31->m_Items[(int)uVar8] = (Il2CppObject *)pSVar42;
                        pSStack_70 = (System_Object_array *)0x426348a;
                        il2cpp_runtime_helper_022b4080(pSVar31->m_Items + (int)uVar8);
                        pSVar44 = (__this->fields)._tokens;
                        if (pSVar44 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)
                        goto label_04263501;
                      }
                      pSStack_70 = (System_Object_array *)0x42634f4;
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar46,(Il2CppObject *)pSVar42,
                                 *(MethodInfo_362C220 **)
                                  (*(long *)((long)((Il2CppType *)pSVar12->m_Items)->data + 0xc0) + 0x70));
                      method = (MethodInfo *)pSVar12;
                      pSVar44 = (__this->fields)._tokens;
                    }
                  }
                }
              }
            }
          }
        }
        goto label_04263501;
      }
joined_r0x04262af8:
      if (iVar40 == 0) {
        pSVar42 = (System_Object_array *)pSVar12->max_length;
        method = (MethodInfo *)puVar21;
        if (pSVar42 == (System_Object_array *)0x0) goto label_04263501;
        pSVar17 = g_data_057b9bb8;
        if ((((pSVar42->obj).klass)->_1).element_class == ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) {
label_04262b27:
          pSStack_70 = (System_Object_array *)0x4262b2c;
          auVar55 = il2cpp_runtime_helper_02305440();
          pMVar39 = auVar55._8_8_;
          pSVar29 = pSVar31;
          if (*auVar55._0_8_ == 10) {
            return startIndex + 1;
          }
          goto switchD_042622b4_caseD_3;
        }
        goto label_04263611;
      }
      local_60 = (System_Object_array *)prev;
      if (iVar40 != 2) goto switchD_042622b4_caseD_3;
      pSStack_70 = (System_Object_array *)0x42624e8;
      local_50 = pSVar31;
      CustomLogic_CustomLogicParser__AssertSymbolValue
                (__this,(CustomLogic_CustomLogicToken_o *)pSVar31,0x11,(MethodInfo *)puVar21);
      pSVar29 = (System_Object_array *)pSVar12->max_length;
      uVar8 = *(uint *)&((Il2CppType *)pSVar12->m_Items)->data;
      pSVar36 = (System_Object_array *)(ulong)uVar8;
      pSStack_70 = (System_Object_array *)0x4262503;
      local_68 = pSVar12;
      unaff_R13 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVariableExpressionAst);
      if ((pSVar29 == (System_Object_array *)0x0) ||
         (pSVar17 = g_data_057b9c00, ((Il2CppClass_1 *)&pSVar29->obj)->image == g_data_057b9c00)) {
        pSStack_70 = (System_Object_array *)0x4262532;
        CustomLogic_CustomLogicVariableExpressionAst___ctor
                  ((CustomLogic_CustomLogicVariableExpressionAst_o *)unaff_R13,(System_String_o *)pSVar29,
                   uVar8,(MethodInfo *)0x0);
        iVar9 = *(int32_t *)&((Il2CppType *)local_68->m_Items)->data;
        pSStack_70 = (System_Object_array *)0x4262548;
        pSVar20 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicAssignmentExpressionAst);
        in_R8 = (MethodInfo *)0x0;
        pSStack_70 = (System_Object_array *)0x4262560;
        CustomLogic_CustomLogicAssignmentExpressionAst___ctor
                  ((CustomLogic_CustomLogicAssignmentExpressionAst_o *)pSVar20,
                   (CustomLogic_CustomLogicBaseExpressionAst_o *)unaff_R13,
                   (CustomLogic_CustomLogicToken_o *)local_50,iVar9,(MethodInfo *)0x0);
        pSVar29 = local_58;
        iVar9 = (int32_t)local_58;
        pSStack_70 = (System_Object_array *)0x426256f;
        uVar8 = CustomLogic_CustomLogicParser__FindSemicolon(__this,iVar9,method_00);
        pSVar36 = (System_Object_array *)(ulong)uVar8;
        method = (MethodInfo *)(ulong)(uVar8 - 1);
        pSStack_70 = (System_Object_array *)0x4262584;
        pCVar15 = CustomLogic_CustomLogicParser__ParseExpression
                            (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar9 + 2,uVar8 - 1,
                             in_R8);
        unaff_RBX = pSVar29;
        if (pSVar20 == (System_Object_array *)0x0) goto label_04263501;
        *(CustomLogic_CustomLogicBaseExpressionAst_o **)&((Il2CppType *)pSVar20->m_Items)->bits = pCVar15;
        pSStack_70 = (System_Object_array *)0x42625a0;
        il2cpp_runtime_helper_022b4080(&((Il2CppType *)pSVar20->m_Items)->bits,pCVar15);
        pSVar49 = local_68;
        pSVar31 = MethodInfo_Void_Add;
        pvVar5 = ((Il2CppClass_1 *)&local_60->obj)->image;
        puVar21 = (uint *)(ulong)*(byte *)((Il2CppType *)TypeInfo_CustomLogicClassDefinitionAst->m_Items + 0x11);
        pSVar17 = TypeInfo_CustomLogicClassDefinitionAst;
        if ((*(byte *)((Il2CppType *)TypeInfo_CustomLogicClassDefinitionAst->m_Items + 0x11) <= *(byte *)((long)pvVar5 + 0x130)) &&
           (*(System_Object_array **)(*(long *)((long)pvVar5 + 200) + -8 + (long)puVar21 * 8) == TypeInfo_CustomLogicClassDefinitionAst)
           ) {
          pSVar46 = (System_Collections_Generic_List_object__o *)local_60->max_length;
          method = (MethodInfo *)puVar21;
          unaff_RBP = local_68;
          if (pSVar46 != (System_Collections_Generic_List_object__o *)0x0) {
            piVar33 = &(pSVar46->fields)._version;
            *piVar33 = *piVar33 + 1;
            pSVar12 = (pSVar46->fields)._items;
            method = (MethodInfo *)pSVar31;
            unaff_RBP = local_68;
            if (pSVar12 != (System_Object_array *)0x0) {
              pSVar36 = (System_Object_array *)(ulong)(uVar8 + 1);
              uVar10 = (pSVar46->fields)._size;
              if (uVar10 < (uint)pSVar12->max_length) {
                puVar21 = (uint *)(ulong)(uVar10 + 1);
                (pSVar46->fields)._size = uVar10 + 1;
                pSVar12->m_Items[(int)uVar10] = (Il2CppObject *)pSVar20;
                pSStack_70 = (System_Object_array *)0x4262634;
                il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar10,pSVar20);
                pMVar39 = extraout_RDX_02;
                prev = (CustomLogic_CustomLogicBaseAst_o *)local_60;
              }
              else {
                pSStack_70 = (System_Object_array *)0x4262a9c;
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar46,(Il2CppObject *)pSVar20,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((Il2CppType *)pSVar31->m_Items)->data + 0xc0) + 0x70));
                puVar21 = (uint *)pSVar31;
                pMVar39 = extraout_RDX_08;
                prev = (CustomLogic_CustomLogicBaseAst_o *)local_60;
              }
              pSVar12 = pSVar49;
              local_60 = (System_Object_array *)prev;
              if (uVar8 + 1 != (uint)local_58) goto label_042635ab;
              goto switchD_042622b4_caseD_3;
            }
          }
          goto label_04263501;
        }
        goto label_0426361b;
      }
      goto label_04263625;
    case 2:
    case 0x10:
    case 0x11:
      local_60 = (System_Object_array *)prev;
      if (pSVar12 == (System_Object_array *)0x0) goto label_04263501;
      iVar40 = *(int *)&pSVar12->bounds;
      if (iVar40 != 0) goto joined_r0x04262c09;
      pSVar42 = (System_Object_array *)pSVar12->max_length;
      if (pSVar42 == (System_Object_array *)0x0) goto label_04263501;
      pSVar20 = (System_Object_array *)&g_data_057b9b70;
      if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
      goto label_04263611;
      pSStack_70 = (System_Object_array *)0x4262431;
      auVar55 = il2cpp_runtime_helper_02305440();
      pMVar39 = auVar55._8_8_;
      pSVar17 = g_data_057b9bb8;
      method = (MethodInfo *)puVar21;
      if (*auVar55._0_8_ == 0xd) {
        if ((pSVar31 != (System_Object_array *)0x0) && (*(int *)&pSVar31->bounds == 0)) {
          pSVar42 = (System_Object_array *)pSVar31->max_length;
          if (pSVar42 == (System_Object_array *)0x0) goto label_04263501;
          if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
          goto label_04263611;
          pSStack_70 = (System_Object_array *)0x4262474;
          auVar55 = il2cpp_runtime_helper_02305440();
          pMVar39 = auVar55._8_8_;
          if (*auVar55._0_8_ != 0x23) goto label_042628ae;
          iVar9 = *(int32_t *)&((Il2CppType *)pSVar12->m_Items)->data;
          pSStack_70 = (System_Object_array *)0x426248f;
          prev = (CustomLogic_CustomLogicBaseAst_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPrimitiveExpressionAst);
          pSStack_70 = (System_Object_array *)0x42624a0;
          CustomLogic_CustomLogicPrimitiveExpressionAst___ctor
                    ((CustomLogic_CustomLogicPrimitiveExpressionAst_o *)prev,(Il2CppObject *)0x0,iVar9,
                     (MethodInfo *)0x0);
          pSVar36 = (System_Object_array *)(ulong)(startIndex + 2);
          goto label_04262b41;
        }
label_042628ae:
        pSVar17 = (System_Object_array *)(ulong)(startIndex + 1U);
        pSStack_70 = (System_Object_array *)0x42628bb;
        pSVar29 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex + 1U,pMVar39);
        method = (MethodInfo *)puVar21;
        if (pSVar29 != (System_Object_array *)0x0) {
          if ((int)pSVar29->max_length == 0) goto label_04263616;
          pSVar42 = (System_Object_array *)pSVar29->m_Items[0];
          unaff_RBX = pSVar29;
          if (pSVar42 != (System_Object_array *)0x0) {
            pSVar17 = g_data_057b9bb8;
            if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
            goto label_04263611;
            pSStack_70 = (System_Object_array *)0x42628f8;
            puVar13 = (uint *)il2cpp_runtime_helper_02305440();
            if ((uint)pSVar29->max_length < 2) goto label_04263616;
            pSVar36 = (System_Object_array *)(ulong)*puVar13;
            prev = (CustomLogic_CustomLogicBaseAst_o *)pSVar29->m_Items[1];
            if ((System_Object_array *)prev == (System_Object_array *)0x0) {
              prev = (CustomLogic_CustomLogicBaseAst_o *)0x0;
            }
            else {
              pvVar5 = ((Il2CppClass_1 *)&((System_Object_array *)prev)->obj)->image;
              method = (MethodInfo *)(ulong)*(byte *)((Il2CppType *)TypeInfo_CustomLogicBaseExpressionAst->m_Items + 0x11);
              pSVar42 = TypeInfo_CustomLogicBaseExpressionAst;
              if ((*(byte *)((long)pvVar5 + 0x130) < *(byte *)((Il2CppType *)TypeInfo_CustomLogicBaseExpressionAst->m_Items + 0x11)) ||
                 (*(System_Object_array **)(*(long *)((long)pvVar5 + 200) + -8 + (long)method * 8) !=
                  TypeInfo_CustomLogicBaseExpressionAst)) goto label_04263603;
            }
label_04262b41:
            uVar8 = *(uint *)&((Il2CppType *)pSVar12->m_Items)->data;
            pSVar29 = (System_Object_array *)(ulong)uVar8;
            pSStack_70 = (System_Object_array *)0x4262b57;
            local_68 = pSVar12;
            pSVar49 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicReturnExpressionAst);
            pSStack_70 = (System_Object_array *)0x4262b69;
            CustomLogic_CustomLogicReturnExpressionAst___ctor
                      ((CustomLogic_CustomLogicReturnExpressionAst_o *)pSVar49,
                       (CustomLogic_CustomLogicBaseExpressionAst_o *)prev,uVar8,(MethodInfo *)0x0);
label_04262b69:
            puVar21 = (uint *)MethodInfo_Void_Add;
            pvVar5 = ((Il2CppClass_1 *)&local_60->obj)->image;
            method = (MethodInfo *)(ulong)*(byte *)((Il2CppType *)TypeInfo_CustomLogicBlockAst->m_Items + 0x11);
            pSVar42 = TypeInfo_CustomLogicBlockAst;
            unaff_R13 = pSVar49;
            prev = (CustomLogic_CustomLogicBaseAst_o *)local_60;
            if ((*(byte *)((long)pvVar5 + 0x130) < *(byte *)((Il2CppType *)TypeInfo_CustomLogicBlockAst->m_Items + 0x11)) ||
               (*(System_Object_array **)(*(long *)((long)pvVar5 + 200) + -8 + (long)method * 8) !=
                TypeInfo_CustomLogicBlockAst)) goto label_04263603;
            pSVar46 = (System_Collections_Generic_List_object__o *)local_60->max_length;
            unaff_RBX = pSVar29;
            unaff_RBP = pSVar12;
            if (pSVar46 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar33 = &(pSVar46->fields)._version;
              *piVar33 = *piVar33 + 1;
              pSVar12 = (pSVar46->fields)._items;
              method = (MethodInfo *)puVar21;
              if (pSVar12 != (System_Object_array *)0x0) {
                uVar8 = (pSVar46->fields)._size;
                if (uVar8 < (uint)pSVar12->max_length) {
                  uVar10 = uVar8 + 1;
                  (pSVar46->fields)._size = uVar10;
                  ppIVar2 = pSVar12->m_Items + (long)(int)uVar8 + -4;
                  pSVar12->m_Items[(int)uVar8] = &pSVar49->obj;
                  goto label_042630aa;
                }
                method_03 = *(MethodInfo_362C220 **)
                             (*(long *)((long)((Il2CppType *)((System_Object_array *)puVar21)->m_Items)->data
                                       + 0xc0) + 0x70);
label_04263146:
                pSStack_70 = (System_Object_array *)0x426314b;
                System_Collections_Generic_List_object___AddWithResize(pSVar46,&pSVar49->obj,method_03);
                pMVar39 = extraout_RDX_12;
                pSVar12 = local_68;
                if ((int)pSVar36 != (uint)local_58) goto label_042635ab;
                goto switchD_042622b4_caseD_3;
              }
            }
          }
        }
        goto label_04263501;
      }
      iVar40 = *(int *)&pSVar12->bounds;
      if (iVar40 == 0) {
        pSVar42 = (System_Object_array *)pSVar12->max_length;
        if (pSVar42 == (System_Object_array *)0x0) goto label_04263501;
        if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
        goto label_04263611;
        pSStack_70 = (System_Object_array *)0x42627e6;
        auVar55 = il2cpp_runtime_helper_02305440();
        pMVar39 = auVar55._8_8_;
        if (*auVar55._0_8_ != 7) {
          iVar40 = *(int *)&pSVar12->bounds;
          goto joined_r0x04262c09;
        }
        pSVar17 = (System_Object_array *)(ulong)(startIndex + 1U);
        pSStack_70 = (System_Object_array *)0x42627fc;
        pSVar29 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex + 1U,pMVar39);
        method = (MethodInfo *)puVar21;
        if (pSVar29 != (System_Object_array *)0x0) {
          if ((int)pSVar29->max_length == 0) goto label_04263616;
          pSVar42 = (System_Object_array *)pSVar29->m_Items[0];
          unaff_RBX = pSVar29;
          if (pSVar42 != (System_Object_array *)0x0) {
            pSVar17 = g_data_057b9bb8;
            if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
            goto label_04263611;
            pSStack_70 = (System_Object_array *)0x4262839;
            puVar13 = (uint *)il2cpp_runtime_helper_02305440();
            if ((uint)pSVar29->max_length < 2) goto label_04263616;
            pSVar36 = (System_Object_array *)(ulong)*puVar13;
            pSVar29 = (System_Object_array *)pSVar29->m_Items[1];
            uVar8 = *(uint *)&((Il2CppType *)pSVar12->m_Items)->data;
            pSVar31 = (System_Object_array *)(ulong)uVar8;
            pSStack_70 = (System_Object_array *)0x4262860;
            local_68 = pSVar12;
            unaff_R13 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicWaitExpressionAst);
            if (pSVar29 != (System_Object_array *)0x0) {
              pvVar5 = ((Il2CppClass_1 *)&pSVar29->obj)->image;
              puVar21 = (uint *)(ulong)*(byte *)((Il2CppType *)TypeInfo_CustomLogicBaseExpressionAst->m_Items + 0x11);
              pSVar12 = pSVar31;
              pSVar17 = TypeInfo_CustomLogicBaseExpressionAst;
              if ((*(byte *)((long)pvVar5 + 0x130) < *(byte *)((Il2CppType *)TypeInfo_CustomLogicBaseExpressionAst->m_Items + 0x11)) ||
                 (*(System_Object_array **)(*(long *)((long)pvVar5 + 200) + -8 + (long)puVar21 * 8) !=
                  TypeInfo_CustomLogicBaseExpressionAst)) goto label_04263625;
            }
            pSStack_70 = (System_Object_array *)0x42628a9;
            CustomLogic_CustomLogicWaitExpressionAst___ctor
                      ((CustomLogic_CustomLogicWaitExpressionAst_o *)unaff_R13,
                       (CustomLogic_CustomLogicBaseExpressionAst_o *)pSVar29,uVar8,(MethodInfo *)0x0);
            pSVar12 = pSVar31;
            pSVar49 = unaff_R13;
            goto label_04262b69;
          }
        }
        goto label_04263501;
      }
joined_r0x04262c09:
      if (iVar40 == 2) {
        pSVar17 = (System_Object_array *)(ulong)(uint)startIndex;
        pSStack_70 = (System_Object_array *)0x42622e3;
        pSVar29 = CustomLogic_CustomLogicParser__ParseExpressionAst(__this,startIndex,pMVar39);
        prev = (CustomLogic_CustomLogicBaseAst_o *)local_60;
        method = (MethodInfo *)puVar21;
        if (pSVar29 == (System_Object_array *)0x0) goto label_04263501;
        pSVar20 = (System_Object_array *)prev;
        if ((int)pSVar29->max_length != 0) {
          pSVar42 = (System_Object_array *)pSVar29->m_Items[0];
          unaff_RBX = pSVar29;
          if (pSVar42 != (System_Object_array *)0x0) {
            pSVar17 = g_data_057b9bb8;
            if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
            goto label_04263611;
            pSStack_70 = (System_Object_array *)0x426232c;
            puVar13 = (uint *)il2cpp_runtime_helper_02305440();
            pSVar31 = MethodInfo_Void_Add;
            method = ((Il2CppClass_1 *)&((System_Object_array *)prev)->obj)->image;
            pSVar42 = TypeInfo_CustomLogicBlockAst;
            if ((*(byte *)((Il2CppType *)((System_Object_array *)method)->m_Items + 0x11) <
                 *(byte *)((Il2CppType *)TypeInfo_CustomLogicBlockAst->m_Items + 0x11)) ||
               (method = *(MethodInfo **)
                          ((long)((Il2CppType *)((System_Object_array *)method)->m_Items + 10) + 8),
               *(System_Object_array **)
                ((long)((System_Object_array *)method)->m_Items +
                (ulong)*(byte *)((Il2CppType *)TypeInfo_CustomLogicBlockAst->m_Items + 0x11) * 8 + -0x28) != TypeInfo_CustomLogicBlockAst))
            goto label_04263603;
            puVar21 = (uint *)method;
            pSVar17 = TypeInfo_CustomLogicBlockAst;
            if ((uint)pSVar29->max_length < 2) goto label_04263616;
            pSVar46 = (System_Collections_Generic_List_object__o *)((System_Object_array *)prev)->max_length;
            if (pSVar46 != (System_Collections_Generic_List_object__o *)0x0) {
              uVar8 = *puVar13;
              pSVar36 = (System_Object_array *)(ulong)uVar8;
              pSVar42 = (System_Object_array *)pSVar29->m_Items[1];
              if (pSVar42 != (System_Object_array *)0x0) {
                method = (MethodInfo *)(pSVar42->obj).klass;
                pSVar17 = TypeInfo_CustomLogicBaseExpressionAst;
                if ((*(byte *)((Il2CppType *)((System_Object_array *)method)->m_Items + 0x11) <
                     *(byte *)((Il2CppType *)TypeInfo_CustomLogicBaseExpressionAst->m_Items + 0x11)) ||
                   (method = *(MethodInfo **)
                              ((long)((Il2CppType *)((System_Object_array *)method)->m_Items + 10) + 8),
                   *(System_Object_array **)
                    ((long)((System_Object_array *)method)->m_Items +
                    (ulong)*(byte *)((Il2CppType *)TypeInfo_CustomLogicBaseExpressionAst->m_Items + 0x11) * 8 + -0x28) != TypeInfo_CustomLogicBaseExpressionAst)
                   ) goto label_04263611;
              }
              piVar33 = &(pSVar46->fields)._version;
              *piVar33 = *piVar33 + 1;
              pSVar17 = (pSVar46->fields)._items;
              method = (MethodInfo *)pSVar31;
              if (pSVar17 != (System_Object_array *)0x0) {
                uVar10 = (pSVar46->fields)._size;
                if (uVar10 < (uint)pSVar17->max_length) {
                  puVar21 = (uint *)(ulong)(uVar10 + 1);
                  (pSVar46->fields)._size = uVar10 + 1;
                  pSVar17->m_Items[(int)uVar10] = (Il2CppObject *)pSVar42;
                  pSStack_70 = (System_Object_array *)0x42623f3;
                  il2cpp_runtime_helper_022b4080(pSVar17->m_Items + (int)uVar10);
                  pMVar39 = extraout_RDX_01;
                }
                else {
                  pSStack_70 = (System_Object_array *)0x42627a4;
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar46,(Il2CppObject *)pSVar42,
                             *(MethodInfo_362C220 **)
                              (*(long *)((long)((Il2CppType *)pSVar31->m_Items)->data + 0xc0) + 0x70));
                  puVar21 = (uint *)pSVar31;
                  pMVar39 = extraout_RDX_06;
                }
                if (uVar8 != (uint)local_58) goto label_042635ab;
                goto switchD_042622b4_caseD_3;
              }
            }
          }
          goto label_04263501;
        }
        goto label_04263616;
      }
      if (*(int *)((long)&(((CustomLogic_CustomLogicParser_o *)((long)TypeInfo_CustomLogicSymbols + 200))->fields).Error + 4)
          == 0) {
        pSStack_70 = (System_Object_array *)0x4262c2a;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_70 = (System_Object_array *)0x4262c40;
      bVar11 = CustomLogic_CustomLogicParser__IsSymbolIn
                         (TypeInfo_CustomLogicSymbols,(CustomLogic_CustomLogicToken_o *)pSVar12,
                          (System_Collections_Generic_HashSet_int__o *)TypeInfo_CustomLogicSymbols[4].fields.Error[1].fields,
                          (MethodInfo *)puVar21);
      prev = (CustomLogic_CustomLogicBaseAst_o *)local_60;
      unaff_R13 = pSVar31;
      if ((char)bVar11 != '\0') {
        iVar9 = *(int32_t *)&((Il2CppType *)pSVar12->m_Items)->data;
        pSStack_70 = (System_Object_array *)0x4262c60;
        pSVar49 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicConditionalBlockAst);
        pSVar36 = local_58;
        method = (MethodInfo *)0x0;
        pSStack_70 = (System_Object_array *)0x4262c7b;
        CustomLogic_CustomLogicConditionalBlockAst___ctor
                  ((CustomLogic_CustomLogicConditionalBlockAst_o *)pSVar49,
                   (CustomLogic_CustomLogicToken_o *)pSVar12,iVar9,(MethodInfo *)0x0);
        iVar40 = (int)pSVar36;
        local_68 = pSVar12;
        unaff_RBP = pSVar49;
        if (*(int *)&pSVar12->bounds != 0) {
label_04262f9e:
          pSStack_70 = (System_Object_array *)0x4262fae;
          CustomLogic_CustomLogicParser__AssertSymbolValue
                    (__this,(CustomLogic_CustomLogicToken_o *)pSVar31,0xb,method);
          pSStack_70 = (System_Object_array *)0x4262fbb;
          uVar8 = CustomLogic_CustomLogicParser__FindClosingParen(__this,iVar40 + 1,method_02);
          method = (MethodInfo *)(ulong)(uVar8 - 1);
          pSStack_70 = (System_Object_array *)0x4262fcf;
          pCVar15 = CustomLogic_CustomLogicParser__ParseExpression
                              (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar40 + 2,uVar8 - 1,
                               in_R8);
          unaff_RBX = (System_Object_array *)(ulong)uVar8;
          if (pSVar49 != (System_Object_array *)0x0) {
            ((Il2CppType *)pSVar49->m_Items)->data = pCVar15;
            pSStack_70 = (System_Object_array *)0x4262feb;
            il2cpp_runtime_helper_022b4080((Il2CppType *)pSVar49->m_Items,pCVar15);
            pSVar44 = (__this->fields)._tokens;
            if (pSVar44 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
              pSStack_70 = (System_Object_array *)0x426300a;
              pCVar16 = (CustomLogic_CustomLogicToken_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar44,uVar8 + 1,MethodInfo_CustomLogicToken_get_Item
                                  );
              pSStack_70 = (System_Object_array *)0x426301a;
              CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar16,9,method);
              uVar8 = uVar8 + 2;
              pSVar29 = (System_Object_array *)(ulong)uVar8;
              goto label_04263022;
            }
          }
          goto label_04263501;
        }
        pSVar42 = (System_Object_array *)pSVar12->max_length;
        unaff_RBX = pSVar12;
        if (pSVar42 == (System_Object_array *)0x0) goto label_04263501;
        pSVar29 = pSVar12;
        pSVar17 = g_data_057b9bb8;
        pSVar20 = (System_Object_array *)prev;
        if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
        goto label_04263611;
        pSStack_70 = (System_Object_array *)0x4262cbb;
        piVar22 = (int *)il2cpp_runtime_helper_02305440();
        if (*piVar22 != 0x28) goto label_04262f9e;
        pSVar44 = (__this->fields)._tokens;
        if (pSVar44 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_04263501;
        pSStack_70 = (System_Object_array *)0x4262ce5;
        pCVar16 = (CustomLogic_CustomLogicToken_o *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar44,iVar40 + 1,MethodInfo_CustomLogicToken_get_Item);
        pSStack_70 = (System_Object_array *)0x4262cf5;
        CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar16,9,method);
        uVar8 = iVar40 + 2;
label_04263022:
        pSStack_70 = (System_Object_array *)0x426302a;
        uVar8 = CustomLogic_CustomLogicParser__ParseAst
                          (__this,uVar8,(CustomLogic_CustomLogicBaseAst_o *)pSVar49,method);
        puVar21 = (uint *)MethodInfo_Void_Add;
        pSVar36 = (System_Object_array *)(ulong)uVar8;
        pvVar5 = ((Il2CppClass_1 *)&((System_Object_array *)prev)->obj)->image;
        method = (MethodInfo *)(ulong)*(byte *)((Il2CppType *)TypeInfo_CustomLogicBlockAst->m_Items + 0x11);
        pSVar12 = pSVar49;
        pSVar42 = TypeInfo_CustomLogicBlockAst;
        if ((*(byte *)((Il2CppType *)TypeInfo_CustomLogicBlockAst->m_Items + 0x11) <= *(byte *)((long)pvVar5 + 0x130)) &&
           (*(System_Object_array **)(*(long *)((long)pvVar5 + 200) + -8 + (long)method * 8) == TypeInfo_CustomLogicBlockAst))
        {
          pSVar46 = (System_Collections_Generic_List_object__o *)((System_Object_array *)prev)->max_length;
          unaff_RBX = pSVar29;
          if (pSVar46 != (System_Collections_Generic_List_object__o *)0x0) {
            piVar33 = &(pSVar46->fields)._version;
            *piVar33 = *piVar33 + 1;
            pSVar12 = (pSVar46->fields)._items;
            method = (MethodInfo *)puVar21;
            if (pSVar12 != (System_Object_array *)0x0) {
              uVar8 = (pSVar46->fields)._size;
              if ((uint)pSVar12->max_length <= uVar8) {
                method_03 = *(MethodInfo_362C220 **)
                             (*(long *)((long)((Il2CppType *)((System_Object_array *)puVar21)->m_Items)->data
                                       + 0xc0) + 0x70);
                goto label_04263146;
              }
              uVar10 = uVar8 + 1;
              (pSVar46->fields)._size = uVar10;
              ppIVar2 = pSVar12->m_Items + (long)(int)uVar8 + -4;
              pSVar12->m_Items[(int)uVar8] = (Il2CppObject *)pSVar49;
label_042630aa:
              puVar21 = (uint *)(ulong)uVar10;
              pSStack_70 = (System_Object_array *)0x42630af;
              il2cpp_runtime_helper_022b4080(ppIVar2 + 4,pSVar49);
              pMVar39 = extraout_RDX_11;
              pSVar12 = local_68;
              if ((int)pSVar36 != (uint)local_58) goto label_042635ab;
              goto switchD_042622b4_caseD_3;
            }
          }
          goto label_04263501;
        }
        goto label_04263603;
      }
      pMVar39 = extraout_RDX_09;
      pSVar29 = (System_Object_array *)&TypeInfo_CustomLogicSymbols;
      if (*(int *)&pSVar12->bounds != 0) goto switchD_042622b4_caseD_3;
      pSVar42 = (System_Object_array *)pSVar12->max_length;
      prev = (CustomLogic_CustomLogicBaseAst_o *)&MethodInfo_CustomLogicToken_get_Item;
      method = (MethodInfo *)puVar21;
      unaff_RBX = (System_Object_array *)&TypeInfo_CustomLogicSymbols;
      if (pSVar42 == (System_Object_array *)0x0) goto label_04263501;
      unaff_R13 = (System_Object_array *)&g_data_057b9b70;
      pSVar29 = pSVar31;
      pSVar17 = g_data_057b9bb8;
      pSVar20 = (System_Object_array *)prev;
      if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
      goto label_04263611;
      pSStack_70 = (System_Object_array *)0x4262d44;
      auVar55 = il2cpp_runtime_helper_02305440();
      pMVar39 = auVar55._8_8_;
      if (*auVar55._0_8_ != 0x2b) {
        if (*(int *)&pSVar12->bounds != 0) goto switchD_042622b4_caseD_3;
        pSVar42 = (System_Object_array *)pSVar12->max_length;
        method = (MethodInfo *)puVar21;
        unaff_RBX = pSVar31;
        if (pSVar42 != (System_Object_array *)0x0) {
          pSVar17 = g_data_057b9bb8;
          if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
          goto label_04263611;
          pSStack_70 = (System_Object_array *)0x42630f4;
          auVar55 = il2cpp_runtime_helper_02305440();
          pMVar39 = auVar55._8_8_;
          if (*auVar55._0_8_ == 0xe) {
            pSStack_70 = (System_Object_array *)0x4263109;
            CustomLogic_CustomLogicParser__AssertSymbolValue
                      (__this,(CustomLogic_CustomLogicToken_o *)pSVar31,0x23,(MethodInfo *)puVar21);
            uVar8 = *(uint *)&((Il2CppType *)pSVar12->m_Items)->data;
            pSStack_70 = (System_Object_array *)0x426311b;
            pSVar29 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicContinueExpressionAst);
            prev = (CustomLogic_CustomLogicBaseAst_o *)local_60;
            pSStack_70 = (System_Object_array *)0x426312f;
            CustomLogic_CustomLogicContinueExpressionAst___ctor
                      ((CustomLogic_CustomLogicContinueExpressionAst_o *)pSVar29,uVar8,(MethodInfo *)0x0);
label_042631cf:
            puVar21 = (uint *)MethodInfo_Void_Add;
            pSVar12 = (System_Object_array *)(ulong)uVar8;
            pvVar5 = ((Il2CppClass_1 *)&((System_Object_array *)prev)->obj)->image;
            method = (MethodInfo *)(ulong)*(byte *)((Il2CppType *)TypeInfo_CustomLogicBlockAst->m_Items + 0x11);
            pSVar42 = TypeInfo_CustomLogicBlockAst;
            if ((*(byte *)((long)pvVar5 + 0x130) < *(byte *)((Il2CppType *)TypeInfo_CustomLogicBlockAst->m_Items + 0x11)) ||
               (*(System_Object_array **)(*(long *)((long)pvVar5 + 200) + -8 + (long)method * 8) !=
                TypeInfo_CustomLogicBlockAst)) goto label_04263603;
            pSVar46 = (System_Collections_Generic_List_object__o *)((System_Object_array *)prev)->max_length;
            unaff_RBX = pSVar29;
            unaff_RBP = pSVar12;
            if (pSVar46 != (System_Collections_Generic_List_object__o *)0x0) {
              piVar33 = &(pSVar46->fields)._version;
              *piVar33 = *piVar33 + 1;
              pSVar12 = (pSVar46->fields)._items;
              method = (MethodInfo *)puVar21;
              if (pSVar12 != (System_Object_array *)0x0) {
                pSVar36 = (System_Object_array *)(ulong)(startIndex + 2);
                uVar8 = (pSVar46->fields)._size;
                if (uVar8 < (uint)pSVar12->max_length) {
                  puVar21 = (uint *)(ulong)(uVar8 + 1);
                  (pSVar46->fields)._size = uVar8 + 1;
                  pSVar12->m_Items[(int)uVar8] = &pSVar29->obj;
                  pSStack_70 = (System_Object_array *)0x4263251;
                  il2cpp_runtime_helper_022b4080(pSVar12->m_Items + (int)uVar8,pSVar29);
                }
                else {
                  pSStack_70 = (System_Object_array *)0x4263294;
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar46,&pSVar29->obj,
                             *(MethodInfo_362C220 **)
                              (*(long *)((long)((Il2CppType *)((System_Object_array *)puVar21)->m_Items)->data
                                        + 0xc0) + 0x70));
                }
                goto label_042635ab;
              }
            }
          }
          else {
            if (*(int *)&pSVar12->bounds != 0) goto switchD_042622b4_caseD_3;
            pSVar42 = (System_Object_array *)pSVar12->max_length;
            method = (MethodInfo *)puVar21;
            if (pSVar42 != (System_Object_array *)0x0) {
              pSVar17 = g_data_057b9bb8;
              if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
              goto label_04263611;
              pSStack_70 = (System_Object_array *)0x4263190;
              auVar55 = il2cpp_runtime_helper_02305440();
              pMVar39 = auVar55._8_8_;
              if (*auVar55._0_8_ == 0xf) {
                pSStack_70 = (System_Object_array *)0x42631a9;
                CustomLogic_CustomLogicParser__AssertSymbolValue
                          (__this,(CustomLogic_CustomLogicToken_o *)pSVar31,0x23,(MethodInfo *)puVar21);
                uVar8 = *(uint *)&((Il2CppType *)pSVar12->m_Items)->data;
                pSStack_70 = (System_Object_array *)0x42631bb;
                pSVar29 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicBreakExpressionAst);
                prev = (CustomLogic_CustomLogicBaseAst_o *)local_60;
                pSStack_70 = (System_Object_array *)0x42631cf;
                CustomLogic_CustomLogicBreakExpressionAst___ctor
                          ((CustomLogic_CustomLogicBreakExpressionAst_o *)pSVar29,uVar8,(MethodInfo *)0x0);
                goto label_042631cf;
              }
              if (*(int *)&pSVar12->bounds != 0) goto switchD_042622b4_caseD_3;
              pSVar42 = (System_Object_array *)pSVar12->max_length;
              method = (MethodInfo *)puVar21;
              if (pSVar42 == (System_Object_array *)0x0) goto label_04263501;
              pSVar17 = g_data_057b9bb8;
              if ((((pSVar42->obj).klass)->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
              goto label_04263611;
              goto label_04262b27;
            }
          }
        }
        goto label_04263501;
      }
      pSStack_70 = (System_Object_array *)0x4262d5d;
      CustomLogic_CustomLogicParser__AssertSymbolValue
                (__this,(CustomLogic_CustomLogicToken_o *)pSVar31,0xb,(MethodInfo *)puVar21);
      pSStack_70 = (System_Object_array *)0x4262d68;
      iVar9 = CustomLogic_CustomLogicParser__FindClosingParen(__this,startIndex,method_01);
      local_68 = (System_Object_array *)CONCAT44(extraout_var,iVar9);
      uVar8 = *(uint *)&((Il2CppType *)pSVar12->m_Items)->data;
      pSStack_70 = (System_Object_array *)0x4262d7e;
      pSVar20 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicForBlockAst);
      pSStack_70 = (System_Object_array *)0x4262d8d;
      CustomLogic_CustomLogicForBlockAst___ctor
                ((CustomLogic_CustomLogicForBlockAst_o *)pSVar20,uVar8,(MethodInfo *)0x0);
      pSVar44 = (__this->fields)._tokens;
      method = (MethodInfo *)puVar21;
      unaff_RBX = (System_Object_array *)(ulong)uVar8;
      unaff_R13 = pSVar20;
      if (pSVar44 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_04263501;
      uVar8 = startIndex + 2;
      unaff_RBX = (System_Object_array *)(ulong)uVar8;
      pSStack_70 = (System_Object_array *)0x4262da9;
      pCVar16 = (CustomLogic_CustomLogicToken_o *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar44,uVar8,MethodInfo_CustomLogicToken_get_Item);
      pSStack_70 = (System_Object_array *)0x4262db9;
      CustomLogic_CustomLogicParser__AssertTokenType(__this,pCVar16,2,(MethodInfo *)puVar21);
      pSVar44 = (__this->fields)._tokens;
      method = (MethodInfo *)puVar21;
      if (pSVar44 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_04263501;
      pSStack_70 = (System_Object_array *)0x4262dd0;
      pIVar32 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar44,uVar8,MethodInfo_CustomLogicToken_get_Item);
      method = (MethodInfo *)puVar21;
      if ((pIVar32 == (Il2CppObject *)0x0) ||
         (pSVar44 = (__this->fields)._tokens,
         pSVar44 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0)) goto label_04263501;
      unaff_RBP = pIVar32[1].monitor;
      pSStack_70 = (System_Object_array *)0x4262e01;
      pIVar32 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)pSVar44,uVar8,MethodInfo_CustomLogicToken_get_Item);
      method = (MethodInfo *)puVar21;
      pSVar36 = pSVar12;
      if (pIVar32 == (Il2CppObject *)0x0) goto label_04263501;
      uVar8 = *(uint *)&pIVar32[2].klass;
      unaff_R13 = (System_Object_array *)(ulong)uVar8;
      pSStack_70 = (System_Object_array *)0x4262e1d;
      pSVar29 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVariableExpressionAst);
      if ((unaff_RBP == (System_Object_array *)0x0) ||
         (pSVar17 = g_data_057b9c00, ((Il2CppClass_1 *)&unaff_RBP->obj)->image == g_data_057b9c00)) {
        method = (MethodInfo *)0x0;
        pSStack_70 = (System_Object_array *)0x4262e4d;
        CustomLogic_CustomLogicVariableExpressionAst___ctor
                  ((CustomLogic_CustomLogicVariableExpressionAst_o *)pSVar29,(System_String_o *)unaff_RBP,
                   uVar8,(MethodInfo *)0x0);
        unaff_RBX = pSVar29;
        if (pSVar20 != (System_Object_array *)0x0) {
          ((Il2CppType *)pSVar20->m_Items)->data = pSVar29;
          pSStack_70 = (System_Object_array *)0x4262e69;
          il2cpp_runtime_helper_022b4080((Il2CppType *)pSVar20->m_Items,pSVar29);
          prev = (CustomLogic_CustomLogicBaseAst_o *)local_60;
          pSVar44 = (__this->fields)._tokens;
          unaff_R13 = pSVar20;
          if (pSVar44 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
            iVar40 = (int)local_58;
            pSVar36 = (System_Object_array *)&MethodInfo_CustomLogicToken_get_Item;
            pSStack_70 = (System_Object_array *)0x4262e99;
            pCVar16 = (CustomLogic_CustomLogicToken_o *)
                      System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar44,iVar40 + 3,MethodInfo_CustomLogicToken_get_Item)
            ;
            pSStack_70 = (System_Object_array *)0x4262ea9;
            CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar16,0x2c,method);
            unaff_RBX = local_68;
            iVar3 = (int)local_68;
            method = (MethodInfo *)(ulong)(iVar3 - 1U);
            pSStack_70 = (System_Object_array *)0x4262ebd;
            pCVar15 = CustomLogic_CustomLogicParser__ParseExpression
                                (__this,(CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar40 + 4,
                                 iVar3 - 1U,in_R8);
            *(CustomLogic_CustomLogicBaseExpressionAst_o **)&((Il2CppType *)pSVar20->m_Items)->bits = pCVar15;
            pSStack_70 = (System_Object_array *)0x4262ed0;
            il2cpp_runtime_helper_022b4080(&((Il2CppType *)pSVar20->m_Items)->bits,pCVar15);
            pSVar44 = (__this->fields)._tokens;
            unaff_RBP = pSVar12;
            if (pSVar44 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
              pSStack_70 = (System_Object_array *)0x4262ee9;
              pCVar16 = (CustomLogic_CustomLogicToken_o *)
                        System_Collections_Generic_List_object___get_Item
                                  ((System_Collections_Generic_List_object__o *)pSVar44,iVar3 + 1,MethodInfo_CustomLogicToken_get_Item
                                  );
              pSStack_70 = (System_Object_array *)0x4262ef9;
              CustomLogic_CustomLogicParser__AssertSymbolValue(__this,pCVar16,9,method);
              pSVar29 = (System_Object_array *)(ulong)(iVar3 + 2U);
              pSStack_70 = (System_Object_array *)0x4262f09;
              uVar8 = CustomLogic_CustomLogicParser__ParseAst
                                (__this,iVar3 + 2U,(CustomLogic_CustomLogicBaseAst_o *)pSVar20,method);
              puVar21 = (uint *)MethodInfo_Void_Add;
              pSVar36 = (System_Object_array *)(ulong)uVar8;
              pvVar5 = ((Il2CppClass_1 *)&((System_Object_array *)prev)->obj)->image;
              method = (MethodInfo *)(ulong)*(byte *)((Il2CppType *)TypeInfo_CustomLogicBlockAst->m_Items + 0x11);
              pSVar42 = TypeInfo_CustomLogicBlockAst;
              if ((*(byte *)((long)pvVar5 + 0x130) < *(byte *)((Il2CppType *)TypeInfo_CustomLogicBlockAst->m_Items + 0x11)) ||
                 (*(System_Object_array **)(*(long *)((long)pvVar5 + 200) + -8 + (long)method * 8) !=
                  TypeInfo_CustomLogicBlockAst)) goto label_04263603;
              pSVar46 = (System_Collections_Generic_List_object__o *)((System_Object_array *)prev)->max_length
              ;
              unaff_RBX = pSVar29;
              if (pSVar46 != (System_Collections_Generic_List_object__o *)0x0) {
                piVar33 = &(pSVar46->fields)._version;
                *piVar33 = *piVar33 + 1;
                pSVar31 = (pSVar46->fields)._items;
                method = (MethodInfo *)puVar21;
                if (pSVar31 != (System_Object_array *)0x0) {
                  uVar10 = (pSVar46->fields)._size;
                  if (uVar10 < (uint)pSVar31->max_length) {
                    puVar21 = (uint *)(ulong)(uVar10 + 1);
                    (pSVar46->fields)._size = uVar10 + 1;
                    pSVar31->m_Items[(int)uVar10] = (Il2CppObject *)pSVar20;
                    pSStack_70 = (System_Object_array *)0x4262f8e;
                    il2cpp_runtime_helper_022b4080(pSVar31->m_Items + (int)uVar10,pSVar20);
                    pMVar39 = extraout_RDX_10;
                  }
                  else {
                    pSStack_70 = (System_Object_array *)0x426326d;
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar46,(Il2CppObject *)pSVar20,
                               *(MethodInfo_362C220 **)
                                (*(long *)((long)((Il2CppType *)((System_Object_array *)puVar21)->m_Items)->
                                                 data + 0xc0) + 0x70));
                    pMVar39 = extraout_RDX_13;
                  }
                  if (uVar8 != (uint)local_58) goto label_042635ab;
                  goto switchD_042622b4_caseD_3;
                }
              }
            }
          }
        }
        goto label_04263501;
      }
      break;
    default:
      goto switchD_042622b4_caseD_3;
    }
  }
  pSStack_70 = (System_Object_array *)0x4263635;
  pSVar49 = unaff_RBP;
  il2cpp_runtime_helper_022b2fd0();
  uStack_9c = (uint)puVar21;
  pSVar31 = (System_Object_array *)((ulong)puVar21 & 0xffffffff);
  pCStack_80 = __this;
  pSStack_98 = pSVar29;
  pSStack_70 = unaff_RBP;
  pSVar36 = pSVar17;
  pSStack_a8 = pSVar49;
  pSStack_90 = pSVar12;
  pSStack_88 = unaff_R13;
  pSStack_78 = pSVar20;
  uVar8 = extraout_EDX;
joined_r0x04263670:
  pSVar29 = pSVar17;
  pSVar20 = (System_Object_array *)(ulong)uVar8;
  if (g_data_057adc04 == '\0') {
    apSStack_b8[0] = (System_Object_array *)0x426368c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAssignmentExpressionAst);
    apSStack_b8[0] = (System_Object_array *)0x4263698;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBinopExpressionAst);
    apSStack_b8[0] = (System_Object_array *)0x42636a4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicClassInstantiateExpressionAst);
    apSStack_b8[0] = (System_Object_array *)0x42636b0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicFieldExpressionAst);
    apSStack_b8[0] = (System_Object_array *)0x42636bc;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicMethodCallExpressionAst);
    apSStack_b8[0] = (System_Object_array *)0x42636c8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicNotExpressionAst);
    apSStack_b8[0] = (System_Object_array *)0x42636d4;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicPrimitiveExpressionAst);
    apSStack_b8[0] = (System_Object_array *)0x42636e0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUnaryExpressionAst);
    apSStack_b8[0] = (System_Object_array *)0x42636ec;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicVariableExpressionAst);
    apSStack_b8[0] = (System_Object_array *)0x42636f8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_int);
    apSStack_b8[0] = (System_Object_array *)0x4263704;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    apSStack_b8[0] = (System_Object_array *)0x4263710;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    apSStack_b8[0] = (System_Object_array *)0x4263718;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    apSStack_b8[0] = (System_Object_array *)0x4263724;
    il2cpp_runtime_helper_023445d0(&fld_5D8B4B09ABB99266596E0F938E9883F0254EF5FCDCE6ADBF340B1E55);
    g_data_057adc04 = '\x01';
  }
  pSVar42 = (System_Object_array *)&MethodInfo_CustomLogicToken_get_Item;
  pSVar41 = pSVar31;
  pSVar43 = pSVar36;
  pSVar19 = pSVar49;
  pSVar17 = pSVar29;
  if ((System_Collections_Generic_List_object__o *)pSVar49->bounds ==
      (System_Collections_Generic_List_object__o *)0x0) goto label_0426411a;
  apSStack_b8[0] = (System_Object_array *)0x426379b;
  pSVar43 = pSVar20;
  pSVar18 = (System_Object_array *)
            System_Collections_Generic_List_object___get_Item
                      ((System_Collections_Generic_List_object__o *)pSVar49->bounds,uVar8,MethodInfo_CustomLogicToken_get_Item);
  iVar40 = (int)pSVar31;
  if (iVar40 < (int)uVar8) goto label_04264108;
  pSVar46 = (System_Collections_Generic_List_object__o *)pSVar49->bounds;
  pSVar12 = pSVar29;
  if (pSVar46 != (System_Collections_Generic_List_object__o *)0x0) {
    if ((int)uVar8 < (pSVar46->fields)._size + -1) {
      apSStack_b8[0] = (System_Object_array *)0x42637cb;
      pSVar19 = (System_Object_array *)
                System_Collections_Generic_List_object___get_Item(pSVar46,uVar8 + 1,MethodInfo_CustomLogicToken_get_Item);
    }
    else {
      pSVar19 = (System_Object_array *)0x0;
    }
    apSStack_b8[0] = (System_Object_array *)0x42637e2;
    pSVar43 = pSVar20;
    iVar9 = CustomLogic_CustomLogicParser__FindLowestBinop
                      ((CustomLogic_CustomLogicParser_o *)pSStack_a8,uVar8,iVar40,(MethodInfo *)puVar21);
    pSVar41 = pSStack_a8;
    pSVar17 = pSVar18;
    if (0 < iVar9) {
      if ((System_Collections_Generic_List_object__o *)pSStack_a8->bounds !=
          (System_Collections_Generic_List_object__o *)0x0) {
        apSStack_b8[0] = (System_Object_array *)0x4263f60;
        pSVar12 = (System_Object_array *)
                  System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSStack_a8->bounds,iVar9,
                             MethodInfo_CustomLogicToken_get_Item);
        apSStack_b8[0] = (System_Object_array *)0x4263f73;
        pSVar20 = (System_Object_array *)
                  CustomLogic_CustomLogicParser__ParseExpression
                            ((CustomLogic_CustomLogicParser_o *)pSVar41,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar8,iVar9 + -1,in_R8);
        pMVar39 = (MethodInfo *)(ulong)uStack_9c;
        apSStack_b8[0] = (System_Object_array *)0x4263f89;
        pSVar36 = (System_Object_array *)
                  CustomLogic_CustomLogicParser__ParseExpression
                            ((CustomLogic_CustomLogicParser_o *)pSVar41,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,iVar9 + 1,uStack_9c,in_R8);
        apSStack_b8[0] = (System_Object_array *)0x4263fa0;
        pSVar42 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_int,5);
        apSStack_b8[0] = (System_Object_array *)0x4263fb7;
        System_Runtime_CompilerServices_RuntimeHelpers__InitializeArray_3bc4140
                  ((System_Array_o *)pSVar42,fld_5D8B4B09ABB99266596E0F938E9883F0254EF5FCDCE6ADBF340B1E55,(MethodInfo *)0x0);
        apSStack_b8[0] = (System_Object_array *)0x4263fc5;
        pSVar43 = pSVar12;
        bVar11 = CustomLogic_CustomLogicParser__IsAnySymbolValue
                           ((CustomLogic_CustomLogicParser_o *)pSVar41,
                            (CustomLogic_CustomLogicToken_o *)pSVar12,(System_Int32_array *)pSVar42,pMVar39);
        pSVar19 = pSVar36;
        if ((char)bVar11 == '\0') {
          if (pSVar12 != (System_Object_array *)0x0) {
            uVar8 = *(uint *)&((Il2CppType *)pSVar12->m_Items)->data;
            pSVar17 = (System_Object_array *)(ulong)uVar8;
            apSStack_b8[0] = (System_Object_array *)0x426403c;
            pSVar29 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicBinopExpressionAst);
            apSStack_b8[0] = (System_Object_array *)0x426404f;
            pSVar43 = pSVar12;
            CustomLogic_CustomLogicBinopExpressionAst___ctor
                      ((CustomLogic_CustomLogicBinopExpressionAst_o *)pSVar29,
                       (CustomLogic_CustomLogicToken_o *)pSVar12,uVar8,(MethodInfo *)0x0);
            pSVar42 = (System_Object_array *)0x0;
            if (pSVar29 != (System_Object_array *)0x0) {
              pSVar29->max_length = (il2cpp_array_size_t)pSVar20;
              apSStack_b8[0] = (System_Object_array *)0x4264068;
              il2cpp_runtime_helper_022b4080(&pSVar29->max_length,pSVar20);
              pIVar45 = (Il2CppType *)pSVar29->m_Items;
              ((Il2CppType *)pSVar29->m_Items)->data = pSVar36;
              goto label_04264103;
            }
          }
        }
        else if (pSVar18 != (System_Object_array *)0x0) {
          uVar8 = *(uint *)&((Il2CppType *)pSVar18->m_Items)->data;
          apSStack_b8[0] = (System_Object_array *)0x4263fe5;
          pSVar29 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicAssignmentExpressionAst);
          in_R8 = (MethodInfo *)0x0;
          apSStack_b8[0] = (System_Object_array *)0x4263ffc;
          pSVar43 = pSVar20;
          CustomLogic_CustomLogicAssignmentExpressionAst___ctor
                    ((CustomLogic_CustomLogicAssignmentExpressionAst_o *)pSVar29,
                     (CustomLogic_CustomLogicBaseExpressionAst_o *)pSVar20,
                     (CustomLogic_CustomLogicToken_o *)pSVar12,uVar8,(MethodInfo *)0x0);
          pSVar42 = (System_Object_array *)0x0;
          pSVar17 = (System_Object_array *)(ulong)uVar8;
          if (pSVar29 != (System_Object_array *)0x0) {
            pIVar45 = (Il2CppType *)&((Il2CppType *)pSVar29->m_Items)->bits;
            *(System_Object_array **)&((Il2CppType *)pSVar29->m_Items)->bits = pSVar36;
label_04264103:
            apSStack_b8[0] = (System_Object_array *)0x4264108;
            il2cpp_runtime_helper_022b4080(pIVar45,pSVar36);
            goto label_04264108;
          }
        }
      }
      goto label_0426411a;
    }
    pSVar41 = pSVar31;
    if (pSVar18 == (System_Object_array *)0x0) goto label_0426411a;
    iVar3 = *(int *)&pSVar18->bounds;
    item = g_data_057b9bb8;
    if (iVar3 == 0) {
      if ((long *)pSVar18->max_length != (long *)0x0) {
        if (*(Il2CppClass **)(*(long *)pSVar18->max_length + 0x40) !=
            ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264124;
        apSStack_b8[0] = (System_Object_array *)0x426388e;
        pSVar43 = g_data_057b9bb8;
        auVar55 = il2cpp_runtime_helper_02305440();
        pSVar49 = pSStack_a8;
        if (*auVar55._0_8_ != 0xb) {
          iVar3 = *(int *)&pSVar18->bounds;
          item = g_data_057b9bb8;
          goto joined_r0x0426389d;
        }
        apSStack_b8[0] = (System_Object_array *)0x4263740;
        uVar10 = CustomLogic_CustomLogicParser__FindClosingParen
                           ((CustomLogic_CustomLogicParser_o *)pSStack_a8,uVar8,auVar55._8_8_);
        puVar21 = (uint *)(ulong)(uVar10 - 1);
        pSVar36 = (System_Object_array *)0x0;
        apSStack_b8[0] = (System_Object_array *)0x4263756;
        pSVar17 = (System_Object_array *)
                  CustomLogic_CustomLogicParser__ParseExpression
                            ((CustomLogic_CustomLogicParser_o *)pSVar49,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar8 + 1,uVar10 - 1,in_R8);
        uVar8 = uVar10;
        goto joined_r0x0426376d;
      }
      goto label_0426411a;
    }
joined_r0x0426389d:
    g_data_057b9bb8 = item;
    if (iVar3 != 0) {
      pSVar49 = pSStack_a8;
      if (iVar3 != 1) goto joined_r0x04263973;
      pSVar36 = (System_Object_array *)pSVar18->max_length;
      iVar9 = *(int32_t *)&((Il2CppType *)pSVar18->m_Items)->data;
      apSStack_b8[0] = (System_Object_array *)0x4263823;
      pSVar17 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicPrimitiveExpressionAst);
      pSVar31 = (System_Object_array *)(ulong)uStack_9c;
      puVar21 = (uint *)0x0;
      apSStack_b8[0] = (System_Object_array *)0x4263839;
      CustomLogic_CustomLogicPrimitiveExpressionAst___ctor
                ((CustomLogic_CustomLogicPrimitiveExpressionAst_o *)pSVar17,(Il2CppObject *)pSVar36,iVar9,
                 (MethodInfo *)0x0);
      pSVar49 = pSStack_a8;
joined_r0x0426376d:
      uVar8 = uVar8 + 1;
      goto joined_r0x04263670;
    }
    if ((long *)pSVar18->max_length == (long *)0x0) goto label_0426411a;
    if (*(Il2CppClass **)(*(long *)pSVar18->max_length + 0x40) != ((Il2CppType *)item->m_Items)[2].data)
    goto label_04264124;
    apSStack_b8[0] = (System_Object_array *)0x42638d1;
    piVar22 = (int *)il2cpp_runtime_helper_02305440();
    pSVar43 = item;
    if (*piVar22 == 0x10) {
      if (pSVar19 != (System_Object_array *)0x0) {
        uVar10 = *(uint *)&((Il2CppType *)pSVar19->m_Items)->data;
        apSStack_b8[0] = (System_Object_array *)0x4264097;
        pSVar29 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicNotExpressionAst);
        apSStack_b8[0] = (System_Object_array *)0x42640a7;
        CustomLogic_CustomLogicNotExpressionAst___ctor
                  ((CustomLogic_CustomLogicNotExpressionAst_o *)pSVar29,uVar10,(MethodInfo *)0x0);
        pSVar43 = pSVar29;
label_042640e6:
        pSVar20 = (System_Object_array *)(ulong)(uVar8 + 1);
        apSStack_b8[0] = (System_Object_array *)0x42640f0;
        pSVar36 = (System_Object_array *)
                  CustomLogic_CustomLogicParser__ParseExpression
                            ((CustomLogic_CustomLogicParser_o *)pSStack_a8,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)pSVar43,uVar8 + 1,iVar40,in_R8);
        pSVar42 = (System_Object_array *)0x0;
        pSVar19 = (System_Object_array *)(ulong)uVar10;
        if (pSVar29 != (System_Object_array *)0x0) {
          pIVar45 = (Il2CppType *)&pSVar29->max_length;
          pSVar29->max_length = (il2cpp_array_size_t)pSVar36;
          goto label_04264103;
        }
      }
      goto label_0426411a;
    }
    iVar3 = *(int *)&pSVar18->bounds;
    pSVar49 = pSStack_a8;
    if (iVar3 != 0) goto joined_r0x04263973;
    if ((long *)pSVar18->max_length == (long *)0x0) goto label_0426411a;
    item = g_data_057b9bb8;
    if (*(Il2CppClass **)(*(long *)pSVar18->max_length + 0x40) !=
        ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264124;
    apSStack_b8[0] = (System_Object_array *)0x4263914;
    pSVar43 = g_data_057b9bb8;
    piVar22 = (int *)il2cpp_runtime_helper_02305440();
    if (*piVar22 == 0x1f) {
label_042640b5:
      uVar10 = *(uint *)&((Il2CppType *)pSVar18->m_Items)->data;
      apSStack_b8[0] = (System_Object_array *)0x42640c8;
      pSVar29 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicUnaryExpressionAst);
      apSStack_b8[0] = (System_Object_array *)0x42640db;
      CustomLogic_CustomLogicUnaryExpressionAst___ctor
                ((CustomLogic_CustomLogicUnaryExpressionAst_o *)pSVar29,
                 (CustomLogic_CustomLogicToken_o *)pSVar18,uVar10,(MethodInfo *)0x0);
      pSVar43 = (System_Object_array *)0x0;
      goto label_042640e6;
    }
    iVar3 = *(int *)&pSVar18->bounds;
    pSVar49 = pSStack_a8;
    if (iVar3 != 0) goto joined_r0x04263973;
    if ((long *)pSVar18->max_length == (long *)0x0) goto label_0426411a;
    item = g_data_057b9bb8;
    if (*(Il2CppClass **)(*(long *)pSVar18->max_length + 0x40) !=
        ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264124;
    apSStack_b8[0] = (System_Object_array *)0x4263953;
    pSVar43 = g_data_057b9bb8;
    piVar22 = (int *)il2cpp_runtime_helper_02305440();
    if (*piVar22 == 0x1e) goto label_042640b5;
    iVar3 = *(int *)&pSVar18->bounds;
    pSVar49 = pSStack_a8;
    if (iVar3 == 0) {
      if ((long *)pSVar18->max_length == (long *)0x0) goto label_0426411a;
      item = g_data_057b9bb8;
      if (*(Il2CppClass **)(*(long *)pSVar18->max_length + 0x40) !=
          ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264124;
      apSStack_b8[0] = (System_Object_array *)0x4263c7b;
      pSVar43 = g_data_057b9bb8;
      piVar22 = (int *)il2cpp_runtime_helper_02305440();
      pSVar36 = pSStack_a8;
      if (*piVar22 != 0x26) {
        iVar3 = *(int *)&pSVar18->bounds;
        pSVar49 = pSStack_a8;
        goto joined_r0x04263973;
      }
      apSStack_b8[0] = (System_Object_array *)0x4263c99;
      pSVar43 = pSVar19;
      CustomLogic_CustomLogicParser__AssertTokenType
                ((CustomLogic_CustomLogicParser_o *)pSStack_a8,(CustomLogic_CustomLogicToken_o *)pSVar19,2,
                 (MethodInfo *)puVar21);
      pSVar42 = pSVar36;
      if ((System_Collections_Generic_List_object__o *)pSVar36->bounds !=
          (System_Collections_Generic_List_object__o *)0x0) {
        uVar10 = uVar8 + 2;
        pSVar31 = (System_Object_array *)(ulong)uVar10;
        pSVar43 = (System_Object_array *)(ulong)uVar10;
        apSStack_b8[0] = (System_Object_array *)0x4263cbb;
        pIVar32 = System_Collections_Generic_List_object___get_Item
                            ((System_Collections_Generic_List_object__o *)pSVar36->bounds,uVar10,MethodInfo_CustomLogicToken_get_Item)
        ;
        pSVar41 = pSVar31;
        if ((pIVar32 == (Il2CppObject *)0x0) || (*(int *)&pIVar32[1].klass != 0)) {
          uVar54 = false;
        }
        else {
          if (pIVar32[1].monitor == (long *)0x0) goto label_0426411a;
          item = g_data_057b9bb8;
          if (*(Il2CppClass **)(*(long *)pIVar32[1].monitor + 0x40) !=
              ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264124;
          apSStack_b8[0] = (System_Object_array *)0x4263f1f;
          pSVar43 = g_data_057b9bb8;
          piVar22 = (int *)il2cpp_runtime_helper_02305440();
          uVar54 = *piVar22 == 0xb;
        }
        if (pSVar19 == (System_Object_array *)0x0) goto label_0426411a;
        pSVar42 = (System_Object_array *)pSVar19->max_length;
        uVar4 = *(uint *)&((Il2CppType *)pSVar18->m_Items)->data;
        pSVar19 = (System_Object_array *)(ulong)uVar4;
        pSVar43 = pSVar42;
        if ((bool)uVar54) {
          apSStack_b8[0] = (System_Object_array *)0x4263cf4;
          pSVar17 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicMethodCallExpressionAst);
          if ((pSVar42 != (System_Object_array *)0x0) &&
             (item = g_data_057b9c00, ((Il2CppClass_1 *)&pSVar42->obj)->image != g_data_057b9c00))
          goto label_04264131;
          pMVar39 = (MethodInfo *)0x0;
          apSStack_b8[0] = (System_Object_array *)0x4263d23;
          CustomLogic_CustomLogicMethodCallExpressionAst___ctor
                    ((CustomLogic_CustomLogicMethodCallExpressionAst_o *)pSVar17,(System_String_o *)pSVar42,
                     uVar4,(MethodInfo *)0x0);
          if (pSVar17 != (System_Object_array *)0x0) {
            *(System_Object_array **)&((Il2CppType *)pSVar17->m_Items)->bits = pSVar29;
            apSStack_b8[0] = (System_Object_array *)0x4263d3f;
            il2cpp_runtime_helper_022b4080(&((Il2CppType *)pSVar17->m_Items)->bits,pSVar29);
            pSVar31 = pSStack_a8;
            apSStack_b8[0] = (System_Object_array *)0x4263d4e;
            uVar10 = CustomLogic_CustomLogicParser__FindClosingParen
                               ((CustomLogic_CustomLogicParser_o *)pSStack_a8,uVar10,method_05);
            pSVar12 = (System_Object_array *)(ulong)uVar10;
            uVar8 = uVar8 + 3;
            pSVar20 = (System_Object_array *)(ulong)uVar8;
            apSStack_b8[0] = (System_Object_array *)0x4263d62;
            item = pSVar20;
            pSVar36 = (System_Object_array *)
                      CustomLogic_CustomLogicParser__FindCommas
                                ((CustomLogic_CustomLogicParser_o *)pSVar31,uVar8,uVar10,pMVar39);
            pSVar42 = pSVar31;
            pSVar43 = item;
            if (pSVar36 != (System_Object_array *)0x0) {
              uVar26 = pSVar36->max_length;
              if ((uVar26 != 0) && (0 < (int)uVar26)) {
                pSVar19 = (System_Object_array *)0x0;
                if ((uVar26 & 0xffffffff) == 0) goto label_0426411f;
                while( true ) {
                  uVar8 = *(uint *)((long)pSVar36->m_Items + (long)pSVar19 * 4);
                  pSVar43 = (System_Object_array *)0x0;
                  apSStack_b8[0] = (System_Object_array *)0x4263df2;
                  item = (System_Object_array *)
                         CustomLogic_CustomLogicParser__ParseExpression
                                   ((CustomLogic_CustomLogicParser_o *)pSStack_a8,
                                    (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,(int32_t)pSVar20,
                                    uVar8 - 1,in_R8);
                  pSVar31 = MethodInfo_Void_Add;
                  pSVar46 = ((Il2CppType *)pSVar17->m_Items)->data;
                  pSVar42 = (System_Object_array *)(ulong)uVar8;
                  pSVar41 = pSVar36;
                  if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) goto label_0426411a;
                  piVar33 = &(pSVar46->fields)._version;
                  *piVar33 = *piVar33 + 1;
                  pSVar29 = (pSVar46->fields)._items;
                  if (pSVar29 == (System_Object_array *)0x0) goto label_0426411a;
                  uVar4 = (pSVar46->fields)._size;
                  if (uVar4 < (uint)pSVar29->max_length) {
                    (pSVar46->fields)._size = uVar4 + 1;
                    pSVar29->m_Items[(int)uVar4] = (Il2CppObject *)item;
                    apSStack_b8[0] = (System_Object_array *)0x4263e42;
                    il2cpp_runtime_helper_022b4080(pSVar29->m_Items + (int)uVar4);
                  }
                  else {
                    apSStack_b8[0] = (System_Object_array *)0x4263db7;
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar46,(Il2CppObject *)item,
                               *(MethodInfo_362C220 **)
                                (*(long *)((long)((Il2CppType *)pSVar31->m_Items)->data + 0xc0) + 0x70));
                  }
                  uVar8 = uVar8 + 1;
                  pSVar31 = (System_Object_array *)(ulong)uVar8;
                  pSVar19 = (System_Object_array *)((long)&((Il2CppClass_1 *)&pSVar19->obj)->image + 1);
                  uVar4 = (uint)pSVar36->max_length;
                  pSVar20 = (System_Object_array *)(ulong)uVar8;
                  if ((long)(int)uVar4 <= (long)pSVar19) break;
                  if ((System_Object_array *)(ulong)uVar4 <= pSVar19) goto label_0426411f;
                }
              }
              goto label_04263ba3;
            }
          }
        }
        else {
          apSStack_b8[0] = (System_Object_array *)0x4263e68;
          pSVar17 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicFieldExpressionAst);
          if ((pSVar42 != (System_Object_array *)0x0) &&
             (item = g_data_057b9c00, ((Il2CppClass_1 *)&pSVar42->obj)->image != g_data_057b9c00))
          goto label_04264131;
          puVar21 = (uint *)0x0;
          apSStack_b8[0] = (System_Object_array *)0x4263e97;
          CustomLogic_CustomLogicFieldExpressionAst___ctor
                    ((CustomLogic_CustomLogicFieldExpressionAst_o *)pSVar17,(System_String_o *)pSVar42,uVar4,
                     (MethodInfo *)0x0);
          if (pSVar17 != (System_Object_array *)0x0) {
            ((Il2CppType *)pSVar17->m_Items)->data = pSVar29;
            apSStack_b8[0] = (System_Object_array *)0x4263eb3;
            pSVar36 = pSVar29;
            il2cpp_runtime_helper_022b4080((Il2CppType *)pSVar17->m_Items);
            pSVar31 = (System_Object_array *)(ulong)uStack_9c;
            pSVar49 = pSStack_a8;
            uVar8 = uVar10;
            goto joined_r0x04263670;
          }
        }
      }
    }
    else {
joined_r0x04263973:
      if (iVar3 != 2) {
        pSVar29 = (System_Object_array *)0x0;
label_04264108:
        return (int32_t)pSVar29;
      }
      pSStack_a8 = pSVar49;
      if ((pSVar19 == (System_Object_array *)0x0) || (*(int *)&pSVar19->bounds != 0)) {
        pSVar36 = (System_Object_array *)pSVar18->max_length;
        pSVar42 = (System_Object_array *)(ulong)*(uint *)&((Il2CppType *)pSVar18->m_Items)->data;
label_04263992:
        apSStack_b8[0] = (System_Object_array *)0x42639a1;
        pSVar17 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicVariableExpressionAst);
        if ((pSVar36 != (System_Object_array *)0x0) &&
           (pSVar31 = pSVar36, item = g_data_057b9c00, pSVar19 = pSVar49,
           ((Il2CppClass_1 *)&pSVar36->obj)->image != g_data_057b9c00)) goto label_04264129;
        puVar21 = (uint *)0x0;
        apSStack_b8[0] = (System_Object_array *)0x42639d0;
        CustomLogic_CustomLogicVariableExpressionAst___ctor
                  ((CustomLogic_CustomLogicVariableExpressionAst_o *)pSVar17,(System_String_o *)pSVar36,
                   (int32_t)pSVar42,(MethodInfo *)0x0);
        uVar8 = uVar8 + 1;
        pSVar31 = (System_Object_array *)(ulong)uStack_9c;
        goto joined_r0x04263670;
      }
      ppcVar1 = (char **)&pSVar19->max_length;
      if ((long *)*ppcVar1 == (long *)0x0) goto label_0426411a;
      item = g_data_057b9bb8;
      pSVar19 = pSVar49;
      if (*(Il2CppClass **)(*(long *)*ppcVar1 + 0x40) != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
      goto label_04264124;
      apSStack_b8[0] = (System_Object_array *)0x4263a33;
      piVar22 = (int *)il2cpp_runtime_helper_02305440();
      pSVar36 = (System_Object_array *)pSVar18->max_length;
      uVar10 = *(uint *)&((Il2CppType *)pSVar18->m_Items)->data;
      pSVar42 = (System_Object_array *)(ulong)uVar10;
      if (*piVar22 != 0xb) goto label_04263992;
      apSStack_b8[0] = (System_Object_array *)0x4263a53;
      pSVar17 = (System_Object_array *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicClassInstantiateExpressionAst);
      if ((pSVar36 != (System_Object_array *)0x0) &&
         (pSVar31 = pSVar36, item = g_data_057b9c00, ((Il2CppClass_1 *)&pSVar36->obj)->image != g_data_057b9c00))
      goto label_04264129;
      pMVar39 = (MethodInfo *)0x0;
      apSStack_b8[0] = (System_Object_array *)0x4263a82;
      pSVar43 = pSVar36;
      CustomLogic_CustomLogicClassInstantiateExpressionAst___ctor
                ((CustomLogic_CustomLogicClassInstantiateExpressionAst_o *)pSVar17,(System_String_o *)pSVar36,
                 uVar10,(MethodInfo *)0x0);
      pSVar41 = pSVar36;
      if (pSVar17 == (System_Object_array *)0x0) goto label_0426411a;
      *(System_Object_array **)&((Il2CppType *)pSVar17->m_Items)->bits = pSVar29;
      apSStack_b8[0] = (System_Object_array *)0x4263a9e;
      il2cpp_runtime_helper_022b4080(&((Il2CppType *)pSVar17->m_Items)->bits,pSVar29);
      apSStack_b8[0] = (System_Object_array *)0x4263aaa;
      uVar10 = CustomLogic_CustomLogicParser__FindClosingParen
                         ((CustomLogic_CustomLogicParser_o *)pSVar49,uVar8 + 1,method_04);
      pSVar12 = (System_Object_array *)(ulong)uVar10;
      uVar8 = uVar8 + 2;
      pSVar20 = (System_Object_array *)(ulong)uVar8;
      apSStack_b8[0] = (System_Object_array *)0x4263abe;
      item = pSVar20;
      pSVar31 = (System_Object_array *)
                CustomLogic_CustomLogicParser__FindCommas
                          ((CustomLogic_CustomLogicParser_o *)pSVar49,uVar8,uVar10,pMVar39);
      pSVar43 = item;
      if (pSVar31 == (System_Object_array *)0x0) goto label_0426411a;
      uVar26 = pSVar31->max_length;
      if ((uVar26 != 0) && (0 < (int)uVar26)) {
        pSVar19 = (System_Object_array *)0x0;
        if ((uVar26 & 0xffffffff) != 0) {
          while( true ) {
            uVar8 = *(uint *)((long)pSVar31->m_Items + (long)pSVar19 * 4);
            pSVar43 = (System_Object_array *)0x0;
            apSStack_b8[0] = (System_Object_array *)0x4263b3e;
            item = (System_Object_array *)
                   CustomLogic_CustomLogicParser__ParseExpression
                             ((CustomLogic_CustomLogicParser_o *)pSStack_a8,
                              (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,(int32_t)pSVar20,uVar8 - 1,
                              in_R8);
            pSVar36 = MethodInfo_Void_Add;
            pSVar46 = ((Il2CppType *)pSVar17->m_Items)->data;
            pSVar42 = pSVar31;
            pSVar41 = (System_Object_array *)(ulong)uVar8;
            if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) goto label_0426411a;
            piVar33 = &(pSVar46->fields)._version;
            *piVar33 = *piVar33 + 1;
            pSVar29 = (pSVar46->fields)._items;
            if (pSVar29 == (System_Object_array *)0x0) goto label_0426411a;
            uVar4 = (pSVar46->fields)._size;
            if (uVar4 < (uint)pSVar29->max_length) {
              (pSVar46->fields)._size = uVar4 + 1;
              pSVar29->m_Items[(int)uVar4] = (Il2CppObject *)item;
              apSStack_b8[0] = (System_Object_array *)0x4263b8a;
              il2cpp_runtime_helper_022b4080(pSVar29->m_Items + (int)uVar4);
            }
            else {
              apSStack_b8[0] = (System_Object_array *)0x4263b07;
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar46,(Il2CppObject *)item,
                         *(MethodInfo_362C220 **)
                          (*(long *)((long)((Il2CppType *)pSVar36->m_Items)->data + 0xc0) + 0x70));
            }
            uVar8 = uVar8 + 1;
            pSVar19 = (System_Object_array *)((long)&((Il2CppClass_1 *)&pSVar19->obj)->image + 1);
            uVar4 = (uint)pSVar31->max_length;
            pSVar20 = (System_Object_array *)(ulong)uVar8;
            if ((long)(int)uVar4 <= (long)pSVar19) break;
            pSVar36 = (System_Object_array *)(ulong)uVar8;
            if ((System_Object_array *)(ulong)uVar4 <= pSVar19) goto label_0426411f;
          }
          goto label_04263ba3;
        }
        goto label_0426411f;
      }
label_04263ba3:
      pSVar49 = pSStack_a8;
      pSVar36 = (System_Object_array *)0x0;
      puVar21 = (uint *)(ulong)(uVar10 - 1);
      apSStack_b8[0] = (System_Object_array *)0x4263ba8;
      pSVar18 = (System_Object_array *)
                CustomLogic_CustomLogicParser__ParseExpression
                          ((CustomLogic_CustomLogicParser_o *)pSStack_a8,
                           (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar8,uVar10 - 1,in_R8);
      pSVar29 = MethodInfo_Void_Add;
      pSVar31 = (System_Object_array *)(ulong)uStack_9c;
      if (pSVar18 == (System_Object_array *)0x0) {
label_04263c04:
        uVar8 = (int)pSVar12 + 1;
        pSVar12 = (System_Object_array *)(ulong)uVar8;
        goto joined_r0x04263670;
      }
      pSVar46 = ((Il2CppType *)pSVar17->m_Items)->data;
      pSVar42 = (System_Object_array *)&MethodInfo_CustomLogicToken_get_Item;
      pSVar41 = pSVar31;
      pSVar43 = pSVar36;
      pSVar19 = pSVar49;
      if (pSVar46 != (System_Collections_Generic_List_object__o *)0x0) {
        piVar33 = &(pSVar46->fields)._version;
        *piVar33 = *piVar33 + 1;
        puVar21 = (uint *)(pSVar46->fields)._items;
        if ((System_Object_array *)puVar21 == (System_Object_array *)0x0) goto label_0426411a;
        uVar8 = (pSVar46->fields)._size;
        if (uVar8 < *(uint *)&((System_Object_array *)puVar21)->max_length) {
          (pSVar46->fields)._size = uVar8 + 1;
          (&((Il2CppType *)((System_Object_array *)puVar21)->m_Items)->data)[(int)uVar8] = pSVar18;
          apSStack_b8[0] = (System_Object_array *)0x4263c04;
          il2cpp_runtime_helper_022b4080(&((Il2CppType *)((System_Object_array *)puVar21)->m_Items)->data + (int)uVar8);
          pSVar36 = pSVar18;
          goto label_04263c04;
        }
        puVar21 = *(uint **)((long)((Il2CppType *)pSVar29->m_Items)->data + 0xc0);
        apSStack_b8[0] = (System_Object_array *)0x4263c34;
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar46,(Il2CppObject *)pSVar18,
                   ((Il2CppType *)((System_Object_array *)puVar21)->m_Items)[5].data);
        uVar8 = (int)pSVar12 + 1;
        pSVar36 = pSVar18;
        pSVar12 = (System_Object_array *)(ulong)uVar8;
        goto joined_r0x04263670;
      }
    }
  }
label_0426411a:
  item = pSVar43;
  pSVar31 = pSVar42;
  apSStack_b8[0] = (System_Object_array *)0x426411f;
  il2cpp_runtime_helper_022b2c90();
  pSVar36 = pSVar41;
label_0426411f:
  apSStack_b8[0] = (System_Object_array *)0x4264124;
  il2cpp_runtime_helper_022b2ca0();
  pSVar42 = pSVar31;
  pSVar31 = pSVar36;
  pSVar29 = pSVar12;
label_04264124:
  apSStack_b8[0] = (System_Object_array *)0x4264129;
  il2cpp_runtime_helper_022b2fd0();
label_04264129:
  apSStack_b8[0] = (System_Object_array *)0x4264131;
  il2cpp_runtime_helper_022b2fd0(pSVar31);
label_04264131:
  apSStack_b8[0] = (System_Object_array *)0x4264139;
  pSVar43 = pSVar42;
  il2cpp_runtime_helper_022b2fd0();
  pSVar49 = (System_Object_array *)(extraout_RDX_15 & 0xffffffff);
  pSVar36 = (System_Object_array *)((ulong)item & 0xffffffff);
  pSVar12 = item;
  pSStack_e0 = pSVar42;
  pSStack_d8 = pSVar29;
  pSStack_d0 = pSVar20;
  pSStack_c8 = pSVar19;
  pSStack_c0 = pSVar17;
  apSStack_b8[0] = pSVar31;
  if (g_data_057adc07 == '\0') {
    apSStack_100[0] = (System_Object_array *)0x426416b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    apSStack_100[0] = (System_Object_array *)0x4264177;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    apSStack_100[0] = (System_Object_array *)0x4264183;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc07 = '\x01';
  }
  uStack_e4 = (uint)extraout_RDX_15;
  if ((int)uStack_e4 <= (int)item) {
    return -1;
  }
  iStack_e8 = 0x7fffffff;
  iStack_ec = -1;
  uVar26 = 0;
  pSVar29 = (System_Object_array *)0x0;
  pSVar46 = (System_Collections_Generic_List_object__o *)pSVar43->bounds;
  while (pSVar17 = pSVar43, pSVar46 != (System_Collections_Generic_List_object__o *)0x0) {
    iVar40 = (int)pSVar36;
    apSStack_100[0] = (System_Object_array *)0x4264207;
    pSVar12 = pSVar36;
    pSVar31 = (System_Object_array *)
              System_Collections_Generic_List_object___get_Item(pSVar46,iVar40,MethodInfo_CustomLogicToken_get_Item);
    pMVar39 = extraout_RDX_16;
    if ((pSVar31 == (System_Object_array *)0x0) || (*(int *)&pSVar31->bounds != 0)) {
label_042641d0:
      if (0 < (int)pSVar29) goto label_042641d9;
label_042642a0:
      if ((pSVar31 != (System_Object_array *)0x0) && (*(int *)&pSVar31->bounds == 0)) {
        pSVar46 = (System_Collections_Generic_List_object__o *)pSVar31->max_length;
        if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) break;
        pSVar12 = g_data_057b9bb8;
        if ((pSVar46->klass->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
        goto label_0426446b;
        apSStack_100[0] = (System_Object_array *)0x42643a1;
        auVar55 = il2cpp_runtime_helper_02305440();
        pMVar39 = auVar55._8_8_;
        if (*auVar55._0_8_ == 0x1f) {
label_042643a6:
          if ((int)uVar26 == 0) goto label_042641d9;
          pSVar46 = (System_Collections_Generic_List_object__o *)pSVar43->bounds;
          if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) break;
          pSVar12 = (System_Object_array *)(ulong)(iVar40 - 1U);
          apSStack_100[0] = (System_Object_array *)0x42643ce;
          pIVar32 = System_Collections_Generic_List_object___get_Item(pSVar46,iVar40 - 1U,MethodInfo_CustomLogicToken_get_Item);
          if (pIVar32 == (Il2CppObject *)0x0) break;
          pMVar39 = extraout_RDX_17;
          if (*(int *)&pIVar32[1].klass == 0) {
            pSVar46 = pIVar32[1].monitor;
            if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) break;
            pSVar12 = g_data_057b9bb8;
            if ((pSVar46->klass->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
            goto label_0426446b;
            apSStack_100[0] = (System_Object_array *)0x4264407;
            auVar55 = il2cpp_runtime_helper_02305440();
            pMVar39 = auVar55._8_8_;
            if (*auVar55._0_8_ != 0xc) goto label_042641d9;
          }
        }
        else if (*(int *)&pSVar31->bounds == 0) {
          pSVar46 = (System_Collections_Generic_List_object__o *)pSVar31->max_length;
          if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) break;
          pSVar12 = g_data_057b9bb8;
          if ((pSVar46->klass->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
          goto label_0426446b;
          apSStack_100[0] = (System_Object_array *)0x4264445;
          auVar55 = il2cpp_runtime_helper_02305440();
          pMVar39 = auVar55._8_8_;
          if (*auVar55._0_8_ == 0x1e) goto label_042643a6;
        }
      }
      apSStack_100[0] = (System_Object_array *)0x42642b7;
      pSVar12 = pSVar31;
      bVar11 = CustomLogic_CustomLogicParser__IsSymbolBinop
                         ((CustomLogic_CustomLogicParser_o *)pSVar46,(CustomLogic_CustomLogicToken_o *)pSVar31
                          ,pMVar39);
      if ((char)bVar11 == '\0') goto label_042641d9;
      if (*(int *)((long)&TypeInfo_CustomLogicSymbols[5].fields.Error + 4) == 0) {
        apSStack_100[0] = (System_Object_array *)0x42642d8;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar49 = (System_Object_array *)&TypeInfo_CustomLogicSymbols;
      if (((pSVar31 == (System_Object_array *)0x0) ||
          (pSVar17 = (System_Object_array *)TypeInfo_CustomLogicSymbols[4].fields.Error[1].klass, pSVar49 = pSVar43,
          pSVar17 == (System_Object_array *)0x0)) || ((long *)pSVar31->max_length == (long *)0x0)) break;
      pSVar12 = g_data_057b9bb8;
      if (*(Il2CppClass **)(*(long *)pSVar31->max_length + 0x40) !=
          ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_0426446b;
      apSStack_100[0] = (System_Object_array *)0x426432a;
      puVar21 = (uint *)il2cpp_runtime_helper_02305440();
      pSVar12 = (System_Object_array *)(ulong)*puVar21;
      apSStack_100[0] = (System_Object_array *)0x426433e;
      iVar9 = System_Collections_Generic_Dictionary_int__int___get_Item
                        ((System_Collections_Generic_Dictionary_int__int__o *)pSVar17,*puVar21,MethodInfo_Int32_get_Item);
      if (iVar9 <= iStack_e8) {
        iStack_ec = iVar40;
        iStack_e8 = iVar9;
      }
      pSVar49 = (System_Object_array *)(ulong)uStack_e4;
      if (uStack_e4 == iVar40 + 1U) {
        return iStack_ec;
      }
    }
    else {
      pSVar46 = (System_Collections_Generic_List_object__o *)pSVar31->max_length;
      if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) break;
      pSVar12 = g_data_057b9bb8;
      if ((pSVar46->klass->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
      goto label_0426446b;
      apSStack_100[0] = (System_Object_array *)0x4264243;
      auVar55 = il2cpp_runtime_helper_02305440();
      pMVar39 = auVar55._8_8_;
      if (*auVar55._0_8_ == 0xb) {
        pSVar29 = (System_Object_array *)(ulong)((int)pSVar29 + 1);
        goto label_042641d0;
      }
      if (*(int *)&pSVar31->bounds != 0) goto label_042641d0;
      pSVar46 = (System_Collections_Generic_List_object__o *)pSVar31->max_length;
      if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) break;
      pSVar12 = g_data_057b9bb8;
      if ((pSVar46->klass->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
      goto label_0426446b;
      apSStack_100[0] = (System_Object_array *)0x4264284;
      auVar55 = il2cpp_runtime_helper_02305440();
      pMVar39 = auVar55._8_8_;
      uVar8 = (int)pSVar29 - (uint)(*auVar55._0_8_ == 0xc);
      pSVar29 = (System_Object_array *)(ulong)uVar8;
      if ((int)uVar8 < 1) goto label_042642a0;
label_042641d9:
      if ((int)pSVar49 == iVar40 + 1) {
        return iStack_ec;
      }
    }
    uVar26 = (ulong)((int)uVar26 - 1);
    pSVar36 = (System_Object_array *)(ulong)(iVar40 + 1);
    pSVar46 = (System_Collections_Generic_List_object__o *)pSVar43->bounds;
  }
  apSStack_100[0] = (System_Object_array *)0x426446b;
  il2cpp_runtime_helper_022b2c90();
label_0426446b:
  apSStack_100[0] = (System_Object_array *)CustomLogic_CustomLogicParser__IsAnySymbolValue;
  il2cpp_runtime_helper_022b2fd0();
  pSVar20 = pSVar12;
  pSStack_120 = pSVar36;
  pSStack_118 = pSVar49;
  pSStack_110 = pSVar29;
  uStack_108 = uVar26;
  apSStack_100[0] = pSVar31;
  if (extraout_RDX_18 != 0) {
    uVar8 = (uint)*(ulong *)(extraout_RDX_18 + 0x18);
    if (pSVar12 == (System_Object_array *)0x0) {
      uVar10 = 0;
      if ((int)uVar8 < 1) {
        return 0;
      }
      while (uVar10 < uVar8) {
        uVar10 = uVar10 + 1;
        if ((int)uVar8 <= (int)uVar10) {
          return 0;
        }
      }
    }
    else {
      if ((int)uVar8 < 1) {
        return 0;
      }
      pSVar36 = (System_Object_array *)0x0;
      pSVar49 = (System_Object_array *)&g_data_057b9b70;
      if ((*(ulong *)(extraout_RDX_18 + 0x18) & 0xffffffff) != 0) {
        do {
          if (*(int *)&pSVar12->bounds == 0) {
            pSVar29 = pSVar12;
            uVar26 = extraout_RDX_18;
            if ((long *)pSVar12->max_length == (long *)0x0) goto label_0426452b;
            pSVar20 = g_data_057b9bb8;
            if (*(Il2CppClass **)(*(long *)pSVar12->max_length + 0x40) !=
                ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264530;
            uVar8 = *(uint *)(extraout_RDX_18 + 0x20 + (long)pSVar36 * 4);
            pSVar31 = (System_Object_array *)(ulong)uVar8;
            pSStack_128 = (System_Object_array *)0x42644f3;
            puVar21 = (uint *)il2cpp_runtime_helper_02305440();
            if (*puVar21 == uVar8) {
              return (int32_t)CONCAT71((int7)((ulong)puVar21 >> 8),1);
            }
          }
          pSVar36 = (System_Object_array *)((long)&((Il2CppClass_1 *)&pSVar36->obj)->image + 1);
          if ((long)(int)*(uint *)(extraout_RDX_18 + 0x18) <= (long)pSVar36) {
            return 0;
          }
        } while (pSVar36 < (System_Object_array *)(ulong)*(uint *)(extraout_RDX_18 + 0x18));
      }
    }
    pSStack_128 = (System_Object_array *)0x426452b;
    il2cpp_runtime_helper_022b2ca0();
    pSVar29 = pSVar12;
    uVar26 = extraout_RDX_18;
  }
label_0426452b:
  pSStack_128 = (System_Object_array *)0x4264530;
  il2cpp_runtime_helper_022b2c90();
  pSVar12 = pSVar29;
label_04264530:
  pSStack_128 = (System_Object_array *)0x4264535;
  il2cpp_runtime_helper_022b2fd0();
  if ((pSVar20 == (System_Object_array *)0x0) || (*(int *)&pSVar20->bounds != 0)) {
    return 0;
  }
  plVar47 = (long *)pSVar20->max_length;
  pSStack_128 = pSVar36;
  if (plVar47 == (long *)0x0) {
    pSStack_130 = (System_Object_array *)0x4264584;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar20 = g_data_057b9bb8;
    if (*(Il2CppClass **)(*plVar47 + 0x40) == ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) {
      pSStack_130 = (System_Object_array *)0x4264578;
      piVar22 = (int *)il2cpp_runtime_helper_02305440();
      return (int32_t)CONCAT71((int7)((ulong)piVar22 >> 8),*piVar22 == extraout_EDX_00);
    }
  }
  pSStack_130 = (System_Object_array *)0x4264589;
  pIStack_160 = (Il2CppObject *)il2cpp_runtime_helper_022b2fd0();
  pSVar42 = (System_Object_array *)((ulong)pSVar20 & 0xffffffff);
  pSVar29 = pSVar20;
  pSStack_158 = pSVar36;
  pSStack_150 = pSVar49;
  pSStack_148 = pSVar17;
  pSStack_140 = pSVar12;
  uStack_138 = uVar26;
  pSStack_130 = pSVar31;
  if (g_data_057adc09 == '\0') {
    pSStack_168 = (System_Object_array *)0x42645b5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_168 = (System_Object_array *)0x42645c1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc09 = '\x01';
  }
  pSVar46 = (System_Collections_Generic_List_object__o *)plVar47[2];
  pCVar48 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (pSVar46 != (System_Collections_Generic_List_object__o *)0x0) {
    uVar26 = 0;
    pSVar49 = (System_Object_array *)&MethodInfo_CustomLogicToken_get_Item;
    pSVar17 = (System_Object_array *)&g_data_057b9b70;
    if ((int)pSVar20 < (pSVar46->fields)._size) {
      do {
        pSStack_168 = (System_Object_array *)0x4264620;
        pSVar29 = pSVar42;
        pSVar12 = (System_Object_array *)
                  System_Collections_Generic_List_object___get_Item(pSVar46,(int)pSVar42,MethodInfo_CustomLogicToken_get_Item);
        if ((pSVar12 != (System_Object_array *)0x0) && (pSVar36 = pSVar12, *(int *)&pSVar12->bounds == 0)) {
          pCVar48 = (CustomLogic_CustomLogicParser_o *)pSVar12->max_length;
          if (pCVar48 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0426469e;
          pSVar29 = g_data_057b9bb8;
          if ((pCVar48->klass->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
          goto label_042646a3;
          pSStack_168 = (System_Object_array *)0x426464d;
          piVar22 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar22 == 0xb) {
            uVar26 = (ulong)((int)uVar26 + 1);
          }
          else if (*(int *)&pSVar12->bounds == 0) {
            pCVar48 = (CustomLogic_CustomLogicParser_o *)pSVar12->max_length;
            if (pCVar48 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0426469e;
            pSVar29 = g_data_057b9bb8;
            if ((pCVar48->klass->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
            goto label_042646a3;
            pSStack_168 = (System_Object_array *)0x4264677;
            piVar22 = (int *)il2cpp_runtime_helper_02305440();
            if ((*piVar22 == 0xc) && (uVar8 = (int)uVar26 - 1, uVar26 = (ulong)uVar8, uVar8 == 0))
            goto label_0426468d;
          }
        }
        uVar8 = (int)pSVar42 + 1;
        pSVar42 = (System_Object_array *)(ulong)uVar8;
        pSVar46 = (System_Collections_Generic_List_object__o *)plVar47[2];
        pCVar48 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) goto label_0426469e;
      } while ((int)uVar8 < (pSVar46->fields)._size);
    }
    pSVar42 = (System_Object_array *)&g_data_ffffffff;
label_0426468d:
    return (int32_t)pSVar42;
  }
label_0426469e:
  pSStack_168 = (System_Object_array *)0x42646a3;
  il2cpp_runtime_helper_022b2c90();
label_042646a3:
  pSStack_168 = (System_Object_array *)0x42646a8;
  iVar9 = il2cpp_runtime_helper_022b2fd0();
  uVar51 = extraout_RDX_19 & 0xffffffff;
  iStack_188 = (int)extraout_RDX_19;
  if ((pSVar29 != (System_Object_array *)0x0) && (*(int *)&pSVar29->bounds == iStack_188)) {
    return iVar9;
  }
  auStack_1fc._92_8_ = 0x42646e5;
  pSStack_180 = pSVar36;
  plStack_178 = plVar47;
  uStack_170 = uVar26;
  pSStack_168 = pSVar42;
  uVar23 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
  auStack_1fc._92_8_ = 0x42646f2;
  pSVar24 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar23,6);
  auStack_1fc._92_8_ = 0x42646fd;
  il2cpp_runtime_helper_01f681a0(pSVar24);
  auStack_1fc._92_8_ = 0x4264709;
  uVar23 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  auStack_1fc._92_8_ = 0x4264716;
  il2cpp_runtime_helper_01f6dff0(pSVar24,0,uVar23);
  auStack_1fc._92_8_ = 0x426471e;
  il2cpp_runtime_helper_01f681a0(pSVar29);
  auStack_1fc._92_8_ = 0x4264729;
  pSVar25 = CustomLogic_CustomLogicParser__GetLineNumberString
                      (pCVar48,*(int32_t *)&((Il2CppType *)pSVar29->m_Items)->data,method_06);
  auStack_1fc._92_8_ = 0x4264734;
  il2cpp_runtime_helper_01f681a0(pSVar24);
  auStack_1fc._92_8_ = 0x4264744;
  il2cpp_runtime_helper_01f6dff0(pSVar24,1,pSVar25);
  auStack_1fc._92_8_ = 0x426474c;
  il2cpp_runtime_helper_01f681a0(pSVar24);
  auStack_1fc._92_8_ = 0x4264758;
  uVar23 = il2cpp_runtime_helper_023445d0(&", got ");
  auStack_1fc._92_8_ = 0x4264768;
  pSVar34 = pSVar24;
  il2cpp_runtime_helper_01f6dff0(pSVar24,2,uVar23);
  auStack_1fc._92_8_ = 0x4264770;
  pSVar25 = CustomLogic_CustomLogicParser__GetTokenString
                      ((CustomLogic_CustomLogicParser_o *)pSVar34,(CustomLogic_CustomLogicToken_o *)pSVar29,
                       method_07);
  auStack_1fc._92_8_ = 0x426477b;
  il2cpp_runtime_helper_01f681a0(pSVar24);
  auStack_1fc._92_8_ = 0x426478b;
  il2cpp_runtime_helper_01f6dff0(pSVar24,3,pSVar25);
  auStack_1fc._92_8_ = 0x4264793;
  il2cpp_runtime_helper_01f681a0(pSVar24);
  auStack_1fc._92_8_ = 0x426479f;
  uVar23 = il2cpp_runtime_helper_023445d0(&", expected ");
  auStack_1fc._92_8_ = 0x42647af;
  il2cpp_runtime_helper_01f6dff0(pSVar24,4,uVar23);
  auStack_1fc._92_8_ = 0x42647bb;
  auStack_1fc._100_8_ = il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTokenType);
  pIStack_190 = (Il2CppObject *)0xffffffffffffffff;
  auStack_1fc._92_8_ = 0x42647d7;
  pSVar25 = System_Enum__ToString((System_Enum_o *)(auStack_1fc + 100),(MethodInfo *)0x0);
  auStack_1fc._92_8_ = 0x42647e2;
  il2cpp_runtime_helper_01f681a0(pSVar24);
  auStack_1fc._92_8_ = 0x42647f2;
  il2cpp_runtime_helper_01f6dff0(pSVar24,5,pSVar25);
  auStack_1fc._92_8_ = 0x42647fc;
  pSVar25 = System_String__Concat_3af7570(pSVar24,(MethodInfo *)0x0);
  auStack_1fc._92_8_ = 0x426480b;
  uVar23 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  auStack_1fc._92_8_ = 0x4264813;
  __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar23);
  auStack_1fc._92_8_ = 0x4264823;
  System_Exception___ctor_3cf6120(__this_00,pSVar25,(MethodInfo *)0x0);
  auStack_1fc._92_8_ = 0x426482f;
  uVar26 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertTokenType);
  auStack_1fc._92_8_ = 0x426483a;
  pSVar35 = __this_00;
  auVar55 = il2cpp_runtime_helper_022b2b10();
  auStack_1fc._44_8_ = auVar55._0_8_;
  uVar50 = auVar55._8_8_ & 0xffffffff;
  pSVar36 = (System_Object_array *)(uVar26 & 0xffffffff);
  auStack_1fc._52_8_ = pSVar25;
  auStack_1fc._60_8_ = pSVar49;
  auStack_1fc._68_8_ = pSVar17;
  auStack_1fc._76_8_ = pSVar24;
  auStack_1fc._84_8_ = uVar51;
  auStack_1fc._92_8_ = __this_00;
  if (g_data_057adc08 == '\0') {
    auStack_1fc._36_8_ = 0x4264868;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStack_1fc._36_8_ = 0x4264874;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ToArray);
    auStack_1fc._36_8_ = 0x4264880;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    auStack_1fc._36_8_ = 0x426488c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    auStack_1fc._36_8_ = 0x4264898;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    g_data_057adc08 = '\x01';
  }
  auStack_1fc._36_8_ = 0x42648ae;
  auStack_1fc._44_8_ = il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  auStack_1fc._36_8_ = 0x42648c4;
  pSVar12 = MethodInfo_List_1_System_Int32;
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_List_int__o *)auStack_1fc._44_8_,(MethodInfo_35FD6C0 *)MethodInfo_List_1_System_Int32);
  uVar8 = auVar55._8_4_;
  if ((int)uVar26 < (int)uVar8) {
    if ((System_String_c *)auStack_1fc._44_8_ == (System_String_c *)0x0) {
      uVar51 = 0;
      pSVar46 = (System_Collections_Generic_List_object__o *)(pSVar35->fields)._className;
      pSVar37 = pSVar25;
      uVar26 = 0;
      if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) {
        pSVar52 = (System_String_c *)0x0;
      }
      else {
        do {
          uVar51 = uVar26;
          auStack_1fc._36_8_ = 0x4264934;
          pSVar12 = pSVar36;
          pSVar25 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar46,(int)pSVar36,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar25 != (System_String_o *)0x0) && (pSVar37 = pSVar25, (pSVar25->fields)._stringLength == 0)
             ) {
            pSVar52 = pSVar25[1].klass;
            if (pSVar52 == (System_String_c *)0x0) break;
            pSVar12 = g_data_057b9bb8;
            if (*(Il2CppClass **)((long)(pSVar52->_1).image + 0x40) !=
                ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264b82;
            auStack_1fc._36_8_ = 0x4264970;
            piVar22 = (int *)il2cpp_runtime_helper_02305440();
            uVar10 = (int)uVar51 + (uint)(*piVar22 == 0xb);
            uVar51 = (ulong)uVar10;
            if ((pSVar25->fields)._stringLength == 0) {
              pSVar52 = pSVar25[1].klass;
              if (pSVar52 == (System_String_c *)0x0) break;
              pSVar12 = g_data_057b9bb8;
              if (*(Il2CppClass **)((long)(pSVar52->_1).image + 0x40) !=
                  ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264b82;
              auStack_1fc._36_8_ = 0x42649af;
              piVar22 = (int *)il2cpp_runtime_helper_02305440();
              uVar10 = uVar10 - (*piVar22 == 0xc);
              uVar51 = (ulong)uVar10;
              if ((pSVar25->fields)._stringLength == 0) {
                pSVar52 = pSVar25[1].klass;
                if (pSVar52 == (System_String_c *)0x0) break;
                pSVar12 = g_data_057b9bb8;
                if (*(Il2CppClass **)((long)(pSVar52->_1).image + 0x40) !=
                    ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264b82;
                auStack_1fc._36_8_ = 0x42649f2;
                piVar22 = (int *)il2cpp_runtime_helper_02305440();
                if ((uVar10 == 0) && (*piVar22 == 0x25)) break;
              }
            }
          }
          pSVar25 = pSVar37;
          uVar10 = (int)pSVar36 + 1;
          pSVar36 = (System_Object_array *)(ulong)uVar10;
          if (uVar8 == uVar10) goto label_04264b57;
          pSVar46 = (System_Collections_Generic_List_object__o *)(pSVar35->fields)._className;
          pSVar52 = (System_String_c *)0x0;
          pSVar37 = pSVar25;
          uVar26 = uVar51;
        } while (pSVar46 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
    else {
      uVar51 = 0;
      pSVar46 = (System_Collections_Generic_List_object__o *)(pSVar35->fields)._className;
      if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) {
        pSVar52 = (System_String_c *)0x0;
      }
      else {
        do {
          iVar40 = (int)pSVar36;
          auStack_1fc._36_8_ = 0x4264a54;
          pSVar12 = pSVar36;
          pSVar37 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar46,iVar40,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar37 != (System_String_o *)0x0) && (pSVar25 = pSVar37, (pSVar37->fields)._stringLength == 0)
             ) {
            pSVar52 = pSVar37[1].klass;
            if (pSVar52 == (System_String_c *)0x0) break;
            pSVar12 = g_data_057b9bb8;
            if (*(Il2CppClass **)((long)(pSVar52->_1).image + 0x40) !=
                ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264b82;
            auStack_1fc._36_8_ = 0x4264a90;
            piVar22 = (int *)il2cpp_runtime_helper_02305440();
            uVar10 = (int)uVar51 + (uint)(*piVar22 == 0xb);
            uVar51 = (ulong)uVar10;
            if ((pSVar37->fields)._stringLength == 0) {
              pSVar52 = pSVar37[1].klass;
              if (pSVar52 == (System_String_c *)0x0) break;
              pSVar12 = g_data_057b9bb8;
              if (*(Il2CppClass **)((long)(pSVar52->_1).image + 0x40) !=
                  ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264b82;
              auStack_1fc._36_8_ = 0x4264acf;
              piVar22 = (int *)il2cpp_runtime_helper_02305440();
              uVar10 = uVar10 - (*piVar22 == 0xc);
              uVar51 = (ulong)uVar10;
              if ((pSVar37->fields)._stringLength == 0) {
                pSVar52 = pSVar37[1].klass;
                if (pSVar52 == (System_String_c *)0x0) break;
                pSVar12 = g_data_057b9bb8;
                if (*(Il2CppClass **)((long)(pSVar52->_1).image + 0x40) !=
                    ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) goto label_04264b82;
                auStack_1fc._36_8_ = 0x4264b0e;
                piVar22 = (int *)il2cpp_runtime_helper_02305440();
                lVar28 = MethodInfo_Void_Add;
                if ((uVar10 == 0) && (*piVar22 == 0x25)) {
                  puVar7 = (undefined1 *)((long)&((Il2CppClass_1 *)auStack_1fc._44_8_)->namespaze + 4);
                  *(int *)puVar7 = *(int *)puVar7 + 1;
                  pcVar6 = ((Il2CppClass_1 *)auStack_1fc._44_8_)->name;
                  pSVar52 = (System_String_c *)auStack_1fc._44_8_;
                  if (pcVar6 == (char *)0x0) break;
                  uVar10 = *(uint *)&((Il2CppClass_1 *)auStack_1fc._44_8_)->namespaze;
                  if (uVar10 < *(uint *)(pcVar6 + 0x18)) {
                    *(uint *)&((Il2CppClass_1 *)auStack_1fc._44_8_)->namespaze = uVar10 + 1;
                    *(int *)(pcVar6 + (long)(int)uVar10 * 4 + 0x20) = iVar40;
                    pSVar36 = pSVar12;
                  }
                  else {
                    auStack_1fc._36_8_ = 0x4264a1f;
                    System_Collections_Generic_List_int___AddWithResize
                              ((System_Collections_Generic_List_int__o *)auStack_1fc._44_8_,iVar40,
                               *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar28 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar51 = 0;
                  pSVar12 = pSVar36;
                }
              }
            }
          }
          pSVar36 = (System_Object_array *)(ulong)(iVar40 + 1U);
          if (uVar8 == iVar40 + 1U) goto label_04264b57;
          pSVar46 = (System_Collections_Generic_List_object__o *)(pSVar35->fields)._className;
          pSVar52 = (System_String_c *)0x0;
        } while (pSVar46 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
  }
  else {
label_04264b57:
    pSVar52 = (System_String_c *)0x0;
    if ((System_String_c *)auStack_1fc._44_8_ != (System_String_c *)0x0) {
      pSVar27 = System_Collections_Generic_List_int___ToArray
                          ((System_Collections_Generic_List_int__o *)auStack_1fc._44_8_,MethodInfo_Int32_ToArray);
      return (int32_t)pSVar27;
    }
  }
  auStack_1fc._36_8_ = 0x4264b82;
  il2cpp_runtime_helper_022b2c90();
label_04264b82:
  uVar8 = (uint)pSVar12;
  auStack_1fc._36_8_ = 0x4264b87;
  il2cpp_runtime_helper_022b2fd0();
  pMVar39 = extraout_RDX_20;
  auStack_1fc._4_8_ = pSVar25;
  auStack_1fc._12_8_ = uVar50;
  auStack_1fc._20_8_ = pSVar35;
  auStack_1fc._28_8_ = uVar51;
  auStack_1fc._36_8_ = pSVar36;
  if (g_data_057adc05 == '\0') {
    pSStack_210 = (System_String_c *)0x4264bb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057adc05 = '\x01';
    pMVar39 = extraout_RDX_21;
  }
  pSStack_210 = (System_String_c *)0x4264bc9;
  uVar10 = CustomLogic_CustomLogicParser__FindSemicolon
                     ((CustomLogic_CustomLogicParser_o *)pSVar52,uVar8,pMVar39);
  uVar26 = (ulong)uVar10;
  pSStack_210 = (System_String_c *)0x4264be0;
  lVar28 = il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  auStack_1fc._0_4_ = uVar10 + 1;
  pSVar12 = (System_Object_array *)auStack_1fc;
  pSStack_210 = (System_String_c *)0x4264c01;
  pSVar31 = g_data_057b9bb8;
  pSVar29 = (System_Object_array *)il2cpp_runtime_helper_02304f30();
  if (lVar28 != 0) {
    if (pSVar29 == (System_Object_array *)0x0) {
label_04264c26:
      if (*(int *)(lVar28 + 0x18) != 0) {
        *(System_Object_array **)(lVar28 + 0x20) = pSVar29;
        pSStack_210 = (System_String_c *)0x4264c3c;
        il2cpp_runtime_helper_022b4080(lVar28 + 0x20);
        uVar26 = (ulong)(uVar10 - 1);
        pSStack_210 = (System_String_c *)0x4264c50;
        pSVar29 = (System_Object_array *)
                  CustomLogic_CustomLogicParser__ParseExpression
                            ((CustomLogic_CustomLogicParser_o *)pSVar52,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar8,uVar10 - 1,in_R8);
        if (pSVar29 != (System_Object_array *)0x0) {
          pSStack_210 = (System_String_c *)0x4264c67;
          lVar30 = il2cpp_runtime_helper_023051f0(pSVar29);
          if (lVar30 == 0) goto label_04264c9a;
        }
        if (1 < *(uint *)(lVar28 + 0x18)) {
          *(System_Object_array **)(lVar28 + 0x28) = pSVar29;
          pSStack_210 = (System_String_c *)0x4264c85;
          il2cpp_runtime_helper_022b4080(lVar28 + 0x28,pSVar29);
          return (int32_t)lVar28;
        }
      }
      pSStack_210 = (System_String_c *)0x4264c9a;
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pSStack_210 = (System_String_c *)0x4264c21;
      lVar30 = il2cpp_runtime_helper_023051f0(pSVar29);
      if (lVar30 != 0) goto label_04264c26;
    }
label_04264c9a:
    pSStack_210 = (System_String_c *)0x4264c9f;
    pSVar31 = (System_Object_array *)il2cpp_runtime_helper_0231b270();
    pSVar12 = (System_Object_array *)0x0;
    pSStack_210 = (System_String_c *)0x4264ca9;
    il2cpp_runtime_helper_022b2b10();
    pSVar36 = pSVar29;
  }
  pSStack_210 = (System_String_c *)0x4264cae;
  uStack_230 = il2cpp_runtime_helper_022b2c90();
  pSVar17 = (System_Object_array *)((ulong)pSVar12 & 0xffffffff);
  pSVar29 = pSVar12;
  lStack_228 = lVar28;
  uStack_220 = uVar26;
  uStack_218 = (ulong)uVar8;
  pSStack_210 = pSVar52;
  if (g_data_057adc0a == '\0') {
    pSStack_238 = (System_Object_array *)0x4264cd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_238 = (System_Object_array *)0x4264cde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc0a = '\x01';
  }
  pSVar46 = (System_Collections_Generic_List_object__o *)pSVar31->bounds;
  pCVar48 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (pSVar46 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar52 = (System_String_c *)&MethodInfo_CustomLogicToken_get_Item;
    if ((int)pSVar12 < (pSVar46->fields)._size) {
      do {
        pSStack_238 = (System_Object_array *)0x4264d2b;
        pSVar29 = pSVar17;
        pIVar32 = System_Collections_Generic_List_object___get_Item(pSVar46,(int)pSVar17,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar32 != (Il2CppObject *)0x0) && (*(int *)&pIVar32[1].klass == 0)) {
          pCVar48 = pIVar32[1].monitor;
          if (pCVar48 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_04264d70;
          pSVar29 = g_data_057b9bb8;
          if ((pCVar48->klass->_1).element_class != ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data)
          goto label_04264d75;
          pSStack_238 = (System_Object_array *)0x4264d56;
          piVar22 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar22 == 0x23) goto label_04264d62;
        }
        uVar8 = (int)pSVar17 + 1;
        pSVar17 = (System_Object_array *)(ulong)uVar8;
        pSVar46 = (System_Collections_Generic_List_object__o *)pSVar31->bounds;
        pCVar48 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (pSVar46 == (System_Collections_Generic_List_object__o *)0x0) goto label_04264d70;
      } while ((int)uVar8 < (pSVar46->fields)._size);
    }
    pSVar17 = (System_Object_array *)&g_data_ffffffff;
label_04264d62:
    return (int32_t)pSVar17;
  }
label_04264d70:
  pSStack_238 = (System_Object_array *)0x4264d75;
  il2cpp_runtime_helper_022b2c90();
label_04264d75:
  pSStack_238 = (System_Object_array *)0x4264d7a;
  auVar55 = il2cpp_runtime_helper_022b2fd0();
  pSVar34 = auVar55._8_8_;
  uStack_248 = auVar55._0_8_;
  pSVar12 = pSVar29;
  pSStack_240 = pSVar17;
  pSStack_238 = pSVar31;
  if (g_data_057adc0b == '\0') {
    pCVar48 = (CustomLogic_CustomLogicParser_o *)&MethodInfo_Boolean_Contains;
    pSStack_250 = (System_Object_array *)0x4264d9f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc0b = '\x01';
  }
  if ((pSVar29 == (System_Object_array *)0x0) || (*(int *)&pSVar29->bounds != 0)) {
    return 0;
  }
  if ((pSVar34 == (System_String_array *)0x0) ||
     (pCVar48 = (CustomLogic_CustomLogicParser_o *)pSVar29->max_length,
     pCVar48 == (CustomLogic_CustomLogicParser_o *)0x0)) {
    pSStack_250 = (System_Object_array *)0x4264e06;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar12 = g_data_057b9bb8;
    if ((pCVar48->klass->_1).element_class == ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) {
      pSStack_250 = (System_Object_array *)0x4264de6;
      piVar33 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar11 = System_Collections_Generic_HashSet_int___Contains
                         ((System_Collections_Generic_HashSet_int__o *)pSVar34,*piVar33,MethodInfo_Boolean_Contains);
      return bVar11;
    }
  }
  pSStack_250 = (System_Object_array *)0x4264e0b;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_268 = pSVar29;
  pSStack_260 = pSVar34;
  pSStack_258 = pSVar52;
  pSStack_250 = pSVar36;
  if ((pSVar12 == (System_Object_array *)0x0) || (*(int *)&pSVar12->bounds != 0)) {
label_04264e6a:
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264e76;
    uVar23 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264e83;
    pSVar34 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar23,6);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(pSVar34);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264e9a;
    uVar23 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(pSVar34,0,uVar23);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(pSVar12);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264eba;
    pCVar48 = (CustomLogic_CustomLogicParser_o *)
              CustomLogic_CustomLogicParser__GetLineNumberString
                        (pCVar48,*(int32_t *)&((Il2CppType *)pSVar12->m_Items)->data,method_08);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(pSVar34);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(pSVar34,1,pCVar48);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(pSVar34);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264ee9;
    uVar23 = il2cpp_runtime_helper_023445d0(&", got ");
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264ef9;
    pSVar24 = pSVar34;
    il2cpp_runtime_helper_01f6dff0(pSVar34,2,uVar23);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f01;
    pSVar25 = CustomLogic_CustomLogicParser__GetTokenString
                        ((CustomLogic_CustomLogicParser_o *)pSVar24,(CustomLogic_CustomLogicToken_o *)pSVar12,
                         method_09);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(pSVar34);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(pSVar34,3,pSVar25);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(pSVar34);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f30;
    uVar23 = il2cpp_runtime_helper_023445d0(&", expected ");
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(pSVar34,4,uVar23);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f4c;
    SStack_280.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    SStack_280.monitor = (void *)0xffffffffffffffff;
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f67;
    iStack_270 = extraout_EDX_01;
    pSVar25 = System_Enum__ToString(&SStack_280,(MethodInfo *)0x0);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(pSVar34);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(pSVar34,5,pSVar25);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f8c;
    pSVar12 = (System_Object_array *)System_String__Concat_3af7570(pSVar34,(MethodInfo *)0x0);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264f9b;
    uVar23 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264fa3;
    pSVar35 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar23);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar35,(System_String_o *)pSVar12,(MethodInfo *)0x0);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264fbf;
    pSVar36 = (System_Object_array *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar35 = (System_Exception_o *)pSVar12->max_length;
    pSVar36 = pSVar12;
    if (pSVar35 == (System_Exception_o *)0x0) goto label_04264fca;
    pSVar36 = g_data_057b9bb8;
    if ((pSVar35->klass->_1).element_class == ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) {
      pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264e5b;
      piVar22 = (int *)il2cpp_runtime_helper_02305440();
      if (*piVar22 == extraout_EDX_01) {
        return (int32_t)piVar22;
      }
      goto label_04264e6a;
    }
  }
  pCStack_288 = (CustomLogic_CustomLogicParser_o *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_2a0 = (System_String_o *)0x4264ff3;
  pSStack_298 = pSVar12;
  pSStack_290 = pSVar34;
  pCStack_288 = pCVar48;
  il2cpp_runtime_helper_01f681a0(pSVar36);
  pSStack_2a0 = (System_String_o *)0x4264ffe;
  pSVar25 = CustomLogic_CustomLogicParser__GetLineNumberString
                      ((CustomLogic_CustomLogicParser_o *)pSVar35,
                       *(int32_t *)&((Il2CppType *)pSVar36->m_Items)->data,method_10);
  pSStack_2a0 = (System_String_o *)0x4265009;
  pSVar37 = CustomLogic_CustomLogicParser__GetTokenString
                      ((CustomLogic_CustomLogicParser_o *)pSVar35,(CustomLogic_CustomLogicToken_o *)pSVar36,
                       method_11);
  pSStack_2a0 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_2a0 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_2a0 = (System_String_o *)0x426503b;
  pSVar25 = System_String__Concat_3af7470(str0,pSVar25,str2,pSVar37,(MethodInfo *)0x0);
  pSStack_2a0 = (System_String_o *)0x426504a;
  uVar23 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_2a0 = (System_String_o *)0x4265052;
  pSVar35 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar23);
  pSStack_2a0 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar35,pSVar25,(MethodInfo *)0x0);
  pSStack_2a0 = (System_String_o *)0x426506e;
  pSVar12 = (System_Object_array *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_2a0 = (System_String_o *)0x4265079;
  uStack_2b0 = il2cpp_runtime_helper_022b2b10(pSVar35);
  pSVar36 = pSVar12;
  pSStack_2a8 = pSVar35;
  pSStack_2a0 = pSVar25;
  if (g_data_057adc0c == '\0') {
    pSStack_2b8 = (System_Object_array *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pSStack_2b8 = (System_Object_array *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((pSVar12 == (System_Object_array *)0x0) || (*(int *)&pSVar12->bounds != 0)) {
    return 0;
  }
  if (*(int *)((long)&TypeInfo_CustomLogicSymbols[5].fields.Error + 4) == 0) {
    pSStack_2b8 = (System_Object_array *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar52 = TypeInfo_CustomLogicSymbols[4].fields.Error[1].klass;
  if ((pSVar52 == (System_String_c *)0x0) || ((long *)pSVar12->max_length == (long *)0x0)) {
    pSStack_2b8 = (System_Object_array *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar36 = g_data_057b9bb8;
    if (*(Il2CppClass **)(*(long *)pSVar12->max_length + 0x40) ==
        ((Il2CppType *)g_data_057b9bb8->m_Items)[2].data) {
      pSStack_2b8 = (System_Object_array *)0x4265115;
      piVar33 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar11 = System_Collections_Generic_Dictionary_int__int___ContainsKey
                         ((System_Collections_Generic_Dictionary_int__int__o *)pSVar52,*piVar33,MethodInfo_Boolean_ContainsKey);
      return bVar11;
    }
  }
  pSStack_2b8 = (System_Object_array *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar23 = extraout_RDX_22;
  pSStack_2b8 = pSVar12;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar23 = extraout_RDX_23;
  }
  if (pSVar36 == (System_Object_array *)0x0) {
    return (int32_t)"null";
  }
  plVar47 = (long *)pSVar36->max_length;
  if (*(int *)&pSVar36->bounds == 0) {
    if (plVar47 != (long *)0x0) {
      if (*(Il2CppClass **)(*plVar47 + 0x40) == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar38 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_2c0 = *puVar38;
        SStack_2d0.klass = TypeInfo_CustomLogicSymbol;
        SStack_2d0.monitor = (void *)0xffffffffffffffff;
        pSVar25 = System_Enum__ToString(&SStack_2d0,(MethodInfo *)0x0);
        return (int32_t)pSVar25;
      }
      goto label_042651fb;
    }
  }
  else if (plVar47 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar47 + 0x168);
    iVar9 = (*vtableDispatch)(plVar47,*(undefined8 *)(*plVar47 + 0x170),uVar23,vtableDispatch);
    return iVar9;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (int32_t)plVar47[2];
}


// CustomLogic.CustomLogicParser$$FindLowestBinop
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindLowestBinop (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x4264140

int32_t CustomLogic_CustomLogicParser__FindLowestBinop
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,int32_t endIndex,
                  MethodInfo *method)

{
  char *pcVar1;
  code *vtableDispatch;
  undefined1 *puVar2;
  int32_t iVar3;
  uint uVar4;
  bool_conflict bVar5;
  uint *puVar6;
  int *piVar7;
  MethodInfo_35FD6C0 *pMVar8;
  undefined8 uVar9;
  System_String_array *pSVar10;
  System_String_o *pSVar11;
  System_Exception_o *__this_00;
  ulong uVar12;
  System_Int32_array *pSVar13;
  long lVar14;
  MethodInfo_35FD6C0 *pMVar15;
  long lVar16;
  MethodInfo_35FD6C0 *pMVar17;
  Il2CppObject *pIVar18;
  int32_t *piVar19;
  System_String_array *pSVar20;
  MethodInfo_35FD6C0 *pMVar21;
  System_Exception_o *pSVar22;
  System_String_o *pSVar23;
  System_String_o *str0;
  System_String_o *str2;
  undefined4 *puVar24;
  int extraout_EDX;
  int extraout_EDX_00;
  MethodInfo *extraout_RDX;
  MethodInfo *pMVar25;
  MethodInfo *extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong extraout_RDX_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  int index;
  MethodInfo_35FD6C0 *unaff_RBP;
  MethodInfo_35FD6C0 *pMVar26;
  undefined4 in_register_00000034;
  System_Collections_Generic_List_CustomLogicToken__o *__this_01;
  long *plVar27;
  CustomLogic_CustomLogicParser_o *__this_02;
  System_Collections_Generic_List_object__o *pSVar28;
  MethodInfo *in_R8;
  CustomLogic_CustomLogicParser_o *pCVar29;
  ulong uVar30;
  System_Collections_Generic_Dictionary_int__int__o *pSVar31;
  uint uVar32;
  ulong uVar33;
  System_String_c *__this_03;
  undefined1 auVar34 [16];
  System_Enum_o SStack_220;
  undefined4 uStack_210;
  MethodInfo_35FD6C0 *pMStack_208;
  undefined8 uStack_200;
  System_Exception_o *pSStack_1f8;
  System_String_o *pSStack_1f0;
  MethodInfo_35FD6C0 *pMStack_1e8;
  System_String_array *pSStack_1e0;
  CustomLogic_CustomLogicParser_o *pCStack_1d8;
  System_Enum_o SStack_1d0;
  int iStack_1c0;
  MethodInfo_35FD6C0 *pMStack_1b8;
  System_String_array *pSStack_1b0;
  System_String_c *pSStack_1a8;
  MethodInfo_35FD6C0 *pMStack_1a0;
  undefined8 uStack_198;
  MethodInfo_35FD6C0 *pMStack_190;
  MethodInfo_35FD6C0 *pMStack_188;
  undefined8 uStack_180;
  long lStack_178;
  ulong uStack_170;
  ulong uStack_168;
  System_String_c *pSStack_160;
  undefined1 auStack_14c [84];
  ulong uStack_f8;
  System_Exception_o *pSStack_f0;
  System_Enum_o SStack_e8;
  int iStack_d8;
  MethodInfo_35FD6C0 *pMStack_d0;
  long *plStack_c8;
  ulong uStack_c0;
  MethodInfo_35FD6C0 *pMStack_b8;
  undefined8 uStack_b0;
  MethodInfo_35FD6C0 *pMStack_a8;
  CustomLogic_CustomLogicParser_o *pCStack_a0;
  System_Collections_Generic_Dictionary_int__int__o *pSStack_98;
  MethodInfo_35FD6C0 *pMStack_90;
  ulong uStack_88;
  MethodInfo_35FD6C0 *pMStack_80;
  MethodInfo_35FD6C0 *pMStack_78;
  MethodInfo_35FD6C0 *pMStack_70;
  CustomLogic_CustomLogicParser_o *pCStack_68;
  MethodInfo_35FD6C0 *pMStack_60;
  ulong uStack_58;
  MethodInfo_35FD6C0 *pMStack_50;
  uint local_3c;
  int32_t local_38;
  uint local_34;
  
  pMVar8 = (MethodInfo_35FD6C0 *)CONCAT44(in_register_00000034,startIndex);
  pCVar29 = (CustomLogic_CustomLogicParser_o *)(ulong)(uint)endIndex;
  if (g_data_057adc07 == '\0') {
    pMStack_50 = (MethodInfo_35FD6C0 *)0x426416b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pMStack_50 = (MethodInfo_35FD6C0 *)0x4264177;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Item);
    pMStack_50 = (MethodInfo_35FD6C0 *)0x4264183;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc07 = '\x01';
  }
  if (endIndex <= startIndex) {
    return -1;
  }
  local_38 = 0x7fffffff;
  local_3c = 0xffffffff;
  uVar12 = 0;
  pMVar21 = (MethodInfo_35FD6C0 *)0x0;
  __this_01 = (__this->fields)._tokens;
  local_34 = endIndex;
  while (pMVar17 = (MethodInfo_35FD6C0 *)(ulong)(uint)startIndex,
        pSVar31 = (System_Collections_Generic_Dictionary_int__int__o *)__this,
        __this_01 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    pMStack_50 = (MethodInfo_35FD6C0 *)0x4264207;
    pMVar8 = pMVar17;
    unaff_RBP = (MethodInfo_35FD6C0 *)
                System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_01,startIndex,MethodInfo_CustomLogicToken_get_Item);
    pMVar25 = extraout_RDX;
    if ((unaff_RBP == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&unaff_RBP->invoker_method != 0)) {
label_042641d0:
      if (0 < (int)pMVar21) goto label_042641d9;
label_042642a0:
      if ((unaff_RBP != (MethodInfo_35FD6C0 *)0x0) && (*(int *)&unaff_RBP->invoker_method == 0)) {
        __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)unaff_RBP->name;
        if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
        pMVar8 = g_data_057b9bb8;
        if ((__this_01->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
        goto label_0426446b;
        pMStack_50 = (MethodInfo_35FD6C0 *)0x42643a1;
        auVar34 = il2cpp_runtime_helper_02305440();
        pMVar25 = auVar34._8_8_;
        if (*auVar34._0_8_ == 0x1f) {
label_042643a6:
          if ((int)uVar12 == 0) goto label_042641d9;
          __this_01 = (__this->fields)._tokens;
          if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
          pMVar8 = (MethodInfo_35FD6C0 *)(ulong)(startIndex - 1U);
          pMStack_50 = (MethodInfo_35FD6C0 *)0x42643ce;
          pIVar18 = System_Collections_Generic_List_object___get_Item
                              ((System_Collections_Generic_List_object__o *)__this_01,startIndex - 1U,
                               MethodInfo_CustomLogicToken_get_Item);
          if (pIVar18 == (Il2CppObject *)0x0) break;
          pMVar25 = extraout_RDX_00;
          if (*(int *)&pIVar18[1].klass == 0) {
            __this_01 = pIVar18[1].monitor;
            if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
            pMVar8 = g_data_057b9bb8;
            if ((__this_01->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_0426446b;
            pMStack_50 = (MethodInfo_35FD6C0 *)0x4264407;
            auVar34 = il2cpp_runtime_helper_02305440();
            pMVar25 = auVar34._8_8_;
            if (*auVar34._0_8_ != 0xc) goto label_042641d9;
          }
        }
        else if (*(int *)&unaff_RBP->invoker_method == 0) {
          __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)unaff_RBP->name;
          if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
          pMVar8 = g_data_057b9bb8;
          if ((__this_01->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
          goto label_0426446b;
          pMStack_50 = (MethodInfo_35FD6C0 *)0x4264445;
          auVar34 = il2cpp_runtime_helper_02305440();
          pMVar25 = auVar34._8_8_;
          if (*auVar34._0_8_ == 0x1e) goto label_042643a6;
        }
      }
      pMStack_50 = (MethodInfo_35FD6C0 *)0x42642b7;
      pMVar8 = unaff_RBP;
      bVar5 = CustomLogic_CustomLogicParser__IsSymbolBinop
                        ((CustomLogic_CustomLogicParser_o *)__this_01,
                         (CustomLogic_CustomLogicToken_o *)unaff_RBP,pMVar25);
      if ((char)bVar5 == '\0') goto label_042641d9;
      if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
        pMStack_50 = (MethodInfo_35FD6C0 *)0x42642d8;
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar29 = (CustomLogic_CustomLogicParser_o *)&TypeInfo_CustomLogicSymbols;
      if (((unaff_RBP == (MethodInfo_35FD6C0 *)0x0) ||
          (pSVar31 = *(System_Collections_Generic_Dictionary_int__int__o **)
                      (*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18), pCVar29 = __this,
          pSVar31 == (System_Collections_Generic_Dictionary_int__int__o *)0x0)) ||
         ((long *)unaff_RBP->name == (long *)0x0)) break;
      pMVar8 = g_data_057b9bb8;
      if (*(void **)(*(long *)unaff_RBP->name + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
      goto label_0426446b;
      pMStack_50 = (MethodInfo_35FD6C0 *)0x426432a;
      puVar6 = (uint *)il2cpp_runtime_helper_02305440();
      pMVar8 = (MethodInfo_35FD6C0 *)(ulong)*puVar6;
      pMStack_50 = (MethodInfo_35FD6C0 *)0x426433e;
      iVar3 = System_Collections_Generic_Dictionary_int__int___get_Item(pSVar31,*puVar6,MethodInfo_Int32_get_Item);
      if (iVar3 <= local_38) {
        local_3c = startIndex;
        local_38 = iVar3;
      }
      pCVar29 = (CustomLogic_CustomLogicParser_o *)(ulong)local_34;
      if (local_34 == startIndex + 1U) {
        return local_3c;
      }
    }
    else {
      __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)unaff_RBP->name;
      if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
      pMVar8 = g_data_057b9bb8;
      if ((__this_01->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
      goto label_0426446b;
      pMStack_50 = (MethodInfo_35FD6C0 *)0x4264243;
      auVar34 = il2cpp_runtime_helper_02305440();
      pMVar25 = auVar34._8_8_;
      if (*auVar34._0_8_ == 0xb) {
        pMVar21 = (MethodInfo_35FD6C0 *)(ulong)((int)pMVar21 + 1);
        goto label_042641d0;
      }
      if (*(int *)&unaff_RBP->invoker_method != 0) goto label_042641d0;
      __this_01 = (System_Collections_Generic_List_CustomLogicToken__o *)unaff_RBP->name;
      if (__this_01 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) break;
      pMVar8 = g_data_057b9bb8;
      if ((__this_01->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
      goto label_0426446b;
      pMStack_50 = (MethodInfo_35FD6C0 *)0x4264284;
      auVar34 = il2cpp_runtime_helper_02305440();
      pMVar25 = auVar34._8_8_;
      uVar32 = (int)pMVar21 - (uint)(*auVar34._0_8_ == 0xc);
      pMVar21 = (MethodInfo_35FD6C0 *)(ulong)uVar32;
      if ((int)uVar32 < 1) goto label_042642a0;
label_042641d9:
      if ((int)pCVar29 == startIndex + 1U) {
        return local_3c;
      }
    }
    startIndex = startIndex + 1;
    uVar12 = (ulong)((int)uVar12 - 1);
    __this_01 = (__this->fields)._tokens;
  }
  pMStack_50 = (MethodInfo_35FD6C0 *)0x426446b;
  il2cpp_runtime_helper_022b2c90();
label_0426446b:
  pMStack_50 = (MethodInfo_35FD6C0 *)CustomLogic_CustomLogicParser__IsAnySymbolValue;
  il2cpp_runtime_helper_022b2fd0();
  pMVar15 = pMVar8;
  pMStack_70 = pMVar17;
  pCStack_68 = pCVar29;
  pMStack_60 = pMVar21;
  uStack_58 = uVar12;
  pMStack_50 = unaff_RBP;
  if (extraout_RDX_01 != 0) {
    uVar32 = (uint)*(ulong *)(extraout_RDX_01 + 0x18);
    if (pMVar8 == (MethodInfo_35FD6C0 *)0x0) {
      uVar4 = 0;
      if ((int)uVar32 < 1) {
        return 0;
      }
      while (uVar4 < uVar32) {
        uVar4 = uVar4 + 1;
        if ((int)uVar32 <= (int)uVar4) {
          return 0;
        }
      }
    }
    else {
      if ((int)uVar32 < 1) {
        return 0;
      }
      pMVar17 = (MethodInfo_35FD6C0 *)0x0;
      pCVar29 = (CustomLogic_CustomLogicParser_o *)&g_data_057b9b70;
      if ((*(ulong *)(extraout_RDX_01 + 0x18) & 0xffffffff) != 0) {
        do {
          if (*(int *)&pMVar8->invoker_method == 0) {
            pMVar21 = pMVar8;
            uVar12 = extraout_RDX_01;
            if ((long *)pMVar8->name == (long *)0x0) goto label_0426452b;
            pMVar15 = g_data_057b9bb8;
            if (*(void **)(*(long *)pMVar8->name + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264530;
            uVar32 = *(uint *)(extraout_RDX_01 + 0x20 + (long)pMVar17 * 4);
            unaff_RBP = (MethodInfo_35FD6C0 *)(ulong)uVar32;
            pMStack_78 = (MethodInfo_35FD6C0 *)0x42644f3;
            puVar6 = (uint *)il2cpp_runtime_helper_02305440();
            if (*puVar6 == uVar32) {
              return (int32_t)CONCAT71((int7)((ulong)puVar6 >> 8),1);
            }
          }
          pMVar17 = (MethodInfo_35FD6C0 *)((long)&pMVar17->methodPointer + 1);
          if ((long)(int)*(uint *)(extraout_RDX_01 + 0x18) <= (long)pMVar17) {
            return 0;
          }
        } while (pMVar17 < (MethodInfo_35FD6C0 *)(ulong)*(uint *)(extraout_RDX_01 + 0x18));
      }
    }
    pMStack_78 = (MethodInfo_35FD6C0 *)0x426452b;
    il2cpp_runtime_helper_022b2ca0();
    pMVar21 = pMVar8;
    uVar12 = extraout_RDX_01;
  }
label_0426452b:
  pMStack_78 = (MethodInfo_35FD6C0 *)0x4264530;
  il2cpp_runtime_helper_022b2c90();
  pMVar8 = pMVar21;
label_04264530:
  pMStack_78 = (MethodInfo_35FD6C0 *)0x4264535;
  il2cpp_runtime_helper_022b2fd0();
  if ((pMVar15 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar15->invoker_method != 0)) {
    return 0;
  }
  plVar27 = (long *)pMVar15->name;
  pMStack_78 = pMVar17;
  if (plVar27 == (long *)0x0) {
    pMStack_80 = (MethodInfo_35FD6C0 *)0x4264584;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar15 = g_data_057b9bb8;
    if (*(void **)(*plVar27 + 0x40) == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pMStack_80 = (MethodInfo_35FD6C0 *)0x4264578;
      piVar7 = (int *)il2cpp_runtime_helper_02305440();
      return (int32_t)CONCAT71((int7)((ulong)piVar7 >> 8),*piVar7 == extraout_EDX);
    }
  }
  pMStack_80 = (MethodInfo_35FD6C0 *)0x4264589;
  uStack_b0 = il2cpp_runtime_helper_022b2fd0();
  pMVar26 = (MethodInfo_35FD6C0 *)((ulong)pMVar15 & 0xffffffff);
  pMVar21 = pMVar15;
  pMStack_a8 = pMVar17;
  pCStack_a0 = pCVar29;
  pSStack_98 = pSVar31;
  pMStack_90 = pMVar8;
  uStack_88 = uVar12;
  pMStack_80 = unaff_RBP;
  if (g_data_057adc09 == '\0') {
    pMStack_b8 = (MethodInfo_35FD6C0 *)0x42645b5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMStack_b8 = (MethodInfo_35FD6C0 *)0x42645c1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc09 = '\x01';
  }
  pSVar28 = (System_Collections_Generic_List_object__o *)plVar27[2];
  __this_02 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (pSVar28 != (System_Collections_Generic_List_object__o *)0x0) {
    uVar12 = 0;
    pCVar29 = (CustomLogic_CustomLogicParser_o *)&MethodInfo_CustomLogicToken_get_Item;
    pSVar31 = (System_Collections_Generic_Dictionary_int__int__o *)&g_data_057b9b70;
    if ((int)pMVar15 < (pSVar28->fields)._size) {
      do {
        pMStack_b8 = (MethodInfo_35FD6C0 *)0x4264620;
        pMVar21 = pMVar26;
        pMVar8 = (MethodInfo_35FD6C0 *)
                 System_Collections_Generic_List_object___get_Item(pSVar28,(int)pMVar26,MethodInfo_CustomLogicToken_get_Item);
        if ((pMVar8 != (MethodInfo_35FD6C0 *)0x0) && (pMVar17 = pMVar8, *(int *)&pMVar8->invoker_method == 0))
        {
          __this_02 = (CustomLogic_CustomLogicParser_o *)pMVar8->name;
          if (__this_02 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0426469e;
          pMVar21 = g_data_057b9bb8;
          if ((__this_02->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
          goto label_042646a3;
          pMStack_b8 = (MethodInfo_35FD6C0 *)0x426464d;
          piVar7 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar7 == 0xb) {
            uVar12 = (ulong)((int)uVar12 + 1);
          }
          else if (*(int *)&pMVar8->invoker_method == 0) {
            __this_02 = (CustomLogic_CustomLogicParser_o *)pMVar8->name;
            if (__this_02 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0426469e;
            pMVar21 = g_data_057b9bb8;
            if ((__this_02->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_042646a3;
            pMStack_b8 = (MethodInfo_35FD6C0 *)0x4264677;
            piVar7 = (int *)il2cpp_runtime_helper_02305440();
            if ((*piVar7 == 0xc) && (uVar32 = (int)uVar12 - 1, uVar12 = (ulong)uVar32, uVar32 == 0))
            goto label_0426468d;
          }
        }
        uVar32 = (int)pMVar26 + 1;
        pMVar26 = (MethodInfo_35FD6C0 *)(ulong)uVar32;
        pSVar28 = (System_Collections_Generic_List_object__o *)plVar27[2];
        __this_02 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (pSVar28 == (System_Collections_Generic_List_object__o *)0x0) goto label_0426469e;
      } while ((int)uVar32 < (pSVar28->fields)._size);
    }
    pMVar26 = (MethodInfo_35FD6C0 *)&g_data_ffffffff;
label_0426468d:
    return (int32_t)pMVar26;
  }
label_0426469e:
  pMStack_b8 = (MethodInfo_35FD6C0 *)0x42646a3;
  il2cpp_runtime_helper_022b2c90();
label_042646a3:
  pMStack_b8 = (MethodInfo_35FD6C0 *)0x42646a8;
  iVar3 = il2cpp_runtime_helper_022b2fd0();
  uVar33 = extraout_RDX_02 & 0xffffffff;
  iStack_d8 = (int)extraout_RDX_02;
  if ((pMVar21 != (MethodInfo_35FD6C0 *)0x0) && (*(int *)&pMVar21->invoker_method == iStack_d8)) {
    return iVar3;
  }
  pSStack_f0 = (System_Exception_o *)0x42646e5;
  pMStack_d0 = pMVar17;
  plStack_c8 = plVar27;
  uStack_c0 = uVar12;
  pMStack_b8 = pMVar26;
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
  pSStack_f0 = (System_Exception_o *)0x42646f2;
  pSVar10 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar9,6);
  pSStack_f0 = (System_Exception_o *)0x42646fd;
  il2cpp_runtime_helper_01f681a0(pSVar10);
  pSStack_f0 = (System_Exception_o *)0x4264709;
  uVar9 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_f0 = (System_Exception_o *)0x4264716;
  il2cpp_runtime_helper_01f6dff0(pSVar10,0,uVar9);
  pSStack_f0 = (System_Exception_o *)0x426471e;
  il2cpp_runtime_helper_01f681a0(pMVar21);
  pSStack_f0 = (System_Exception_o *)0x4264729;
  pSVar11 = CustomLogic_CustomLogicParser__GetLineNumberString
                      (__this_02,*(int32_t *)&pMVar21->klass,method_00);
  pSStack_f0 = (System_Exception_o *)0x4264734;
  il2cpp_runtime_helper_01f681a0(pSVar10);
  pSStack_f0 = (System_Exception_o *)0x4264744;
  il2cpp_runtime_helper_01f6dff0(pSVar10,1,pSVar11);
  pSStack_f0 = (System_Exception_o *)0x426474c;
  il2cpp_runtime_helper_01f681a0(pSVar10);
  pSStack_f0 = (System_Exception_o *)0x4264758;
  uVar9 = il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_f0 = (System_Exception_o *)0x4264768;
  pSVar20 = pSVar10;
  il2cpp_runtime_helper_01f6dff0(pSVar10,2,uVar9);
  pSStack_f0 = (System_Exception_o *)0x4264770;
  pSVar11 = CustomLogic_CustomLogicParser__GetTokenString
                      ((CustomLogic_CustomLogicParser_o *)pSVar20,(CustomLogic_CustomLogicToken_o *)pMVar21,
                       method_01);
  pSStack_f0 = (System_Exception_o *)0x426477b;
  il2cpp_runtime_helper_01f681a0(pSVar10);
  pSStack_f0 = (System_Exception_o *)0x426478b;
  il2cpp_runtime_helper_01f6dff0(pSVar10,3,pSVar11);
  pSStack_f0 = (System_Exception_o *)0x4264793;
  il2cpp_runtime_helper_01f681a0(pSVar10);
  pSStack_f0 = (System_Exception_o *)0x426479f;
  uVar9 = il2cpp_runtime_helper_023445d0(&", expected ");
  pSStack_f0 = (System_Exception_o *)0x42647af;
  il2cpp_runtime_helper_01f6dff0(pSVar10,4,uVar9);
  pSStack_f0 = (System_Exception_o *)0x42647bb;
  SStack_e8.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTokenType);
  SStack_e8.monitor = (void *)0xffffffffffffffff;
  pSStack_f0 = (System_Exception_o *)0x42647d7;
  pSVar11 = System_Enum__ToString(&SStack_e8,(MethodInfo *)0x0);
  pSStack_f0 = (System_Exception_o *)0x42647e2;
  il2cpp_runtime_helper_01f681a0(pSVar10);
  pSStack_f0 = (System_Exception_o *)0x42647f2;
  il2cpp_runtime_helper_01f6dff0(pSVar10,5,pSVar11);
  pSStack_f0 = (System_Exception_o *)0x42647fc;
  pSVar11 = System_String__Concat_3af7570(pSVar10,(MethodInfo *)0x0);
  pSStack_f0 = (System_Exception_o *)0x426480b;
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_f0 = (System_Exception_o *)0x4264813;
  __this_00 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSStack_f0 = (System_Exception_o *)0x4264823;
  System_Exception___ctor_3cf6120(__this_00,pSVar11,(MethodInfo *)0x0);
  pSStack_f0 = (System_Exception_o *)0x426482f;
  uVar12 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertTokenType);
  pSStack_f0 = (System_Exception_o *)0x426483a;
  pSVar22 = __this_00;
  auVar34 = il2cpp_runtime_helper_022b2b10();
  auStack_14c._44_8_ = auVar34._0_8_;
  uVar30 = auVar34._8_8_ & 0xffffffff;
  pMVar8 = (MethodInfo_35FD6C0 *)(uVar12 & 0xffffffff);
  auStack_14c._52_8_ = pSVar11;
  auStack_14c._60_8_ = pCVar29;
  auStack_14c._68_8_ = pSVar31;
  auStack_14c._76_8_ = pSVar10;
  uStack_f8 = uVar33;
  pSStack_f0 = __this_00;
  if (g_data_057adc08 == '\0') {
    auStack_14c._36_8_ = 0x4264868;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStack_14c._36_8_ = 0x4264874;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ToArray);
    auStack_14c._36_8_ = 0x4264880;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    auStack_14c._36_8_ = 0x426488c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    auStack_14c._36_8_ = 0x4264898;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    g_data_057adc08 = '\x01';
  }
  auStack_14c._36_8_ = 0x42648ae;
  auStack_14c._44_8_ = il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  auStack_14c._36_8_ = 0x42648c4;
  pMVar21 = MethodInfo_List_1_System_Int32;
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_List_int__o *)auStack_14c._44_8_,MethodInfo_List_1_System_Int32);
  uVar32 = auVar34._8_4_;
  if ((int)uVar12 < (int)uVar32) {
    if ((System_String_c *)auStack_14c._44_8_ == (System_String_c *)0x0) {
      uVar33 = 0;
      pSVar28 = (System_Collections_Generic_List_object__o *)(pSVar22->fields)._className;
      pSVar23 = pSVar11;
      uVar12 = 0;
      if (pSVar28 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_03 = (System_String_c *)0x0;
      }
      else {
        do {
          uVar33 = uVar12;
          auStack_14c._36_8_ = 0x4264934;
          pMVar21 = pMVar8;
          pSVar11 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar28,(int)pMVar8,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar11 != (System_String_o *)0x0) && (pSVar23 = pSVar11, (pSVar11->fields)._stringLength == 0)
             ) {
            __this_03 = pSVar11[1].klass;
            if (__this_03 == (System_String_c *)0x0) break;
            pMVar21 = g_data_057b9bb8;
            if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264b82;
            auStack_14c._36_8_ = 0x4264970;
            piVar7 = (int *)il2cpp_runtime_helper_02305440();
            uVar4 = (int)uVar33 + (uint)(*piVar7 == 0xb);
            uVar33 = (ulong)uVar4;
            if ((pSVar11->fields)._stringLength == 0) {
              __this_03 = pSVar11[1].klass;
              if (__this_03 == (System_String_c *)0x0) break;
              pMVar21 = g_data_057b9bb8;
              if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
              goto label_04264b82;
              auStack_14c._36_8_ = 0x42649af;
              piVar7 = (int *)il2cpp_runtime_helper_02305440();
              uVar4 = uVar4 - (*piVar7 == 0xc);
              uVar33 = (ulong)uVar4;
              if ((pSVar11->fields)._stringLength == 0) {
                __this_03 = pSVar11[1].klass;
                if (__this_03 == (System_String_c *)0x0) break;
                pMVar21 = g_data_057b9bb8;
                if (*(void **)((long)(__this_03->_1).image + 0x40) !=
                    (g_data_057b9bb8->field8_0x40).genericMethod) goto label_04264b82;
                auStack_14c._36_8_ = 0x42649f2;
                piVar7 = (int *)il2cpp_runtime_helper_02305440();
                if ((uVar4 == 0) && (*piVar7 == 0x25)) break;
              }
            }
          }
          pSVar11 = pSVar23;
          uVar4 = (int)pMVar8 + 1;
          pMVar8 = (MethodInfo_35FD6C0 *)(ulong)uVar4;
          if (uVar32 == uVar4) goto label_04264b57;
          pSVar28 = (System_Collections_Generic_List_object__o *)(pSVar22->fields)._className;
          __this_03 = (System_String_c *)0x0;
          pSVar23 = pSVar11;
          uVar12 = uVar33;
        } while (pSVar28 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
    else {
      uVar33 = 0;
      pSVar28 = (System_Collections_Generic_List_object__o *)(pSVar22->fields)._className;
      if (pSVar28 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_03 = (System_String_c *)0x0;
      }
      else {
        do {
          index = (int)pMVar8;
          auStack_14c._36_8_ = 0x4264a54;
          pMVar21 = pMVar8;
          pSVar23 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar28,index,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar23 != (System_String_o *)0x0) && (pSVar11 = pSVar23, (pSVar23->fields)._stringLength == 0)
             ) {
            __this_03 = pSVar23[1].klass;
            if (__this_03 == (System_String_c *)0x0) break;
            pMVar21 = g_data_057b9bb8;
            if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264b82;
            auStack_14c._36_8_ = 0x4264a90;
            piVar7 = (int *)il2cpp_runtime_helper_02305440();
            uVar4 = (int)uVar33 + (uint)(*piVar7 == 0xb);
            uVar33 = (ulong)uVar4;
            if ((pSVar23->fields)._stringLength == 0) {
              __this_03 = pSVar23[1].klass;
              if (__this_03 == (System_String_c *)0x0) break;
              pMVar21 = g_data_057b9bb8;
              if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
              goto label_04264b82;
              auStack_14c._36_8_ = 0x4264acf;
              piVar7 = (int *)il2cpp_runtime_helper_02305440();
              uVar4 = uVar4 - (*piVar7 == 0xc);
              uVar33 = (ulong)uVar4;
              if ((pSVar23->fields)._stringLength == 0) {
                __this_03 = pSVar23[1].klass;
                if (__this_03 == (System_String_c *)0x0) break;
                pMVar21 = g_data_057b9bb8;
                if (*(void **)((long)(__this_03->_1).image + 0x40) !=
                    (g_data_057b9bb8->field8_0x40).genericMethod) goto label_04264b82;
                auStack_14c._36_8_ = 0x4264b0e;
                piVar7 = (int *)il2cpp_runtime_helper_02305440();
                lVar14 = MethodInfo_Void_Add;
                if ((uVar4 == 0) && (*piVar7 == 0x25)) {
                  puVar2 = (undefined1 *)((long)&((Il2CppClass_1 *)auStack_14c._44_8_)->namespaze + 4);
                  *(int *)puVar2 = *(int *)puVar2 + 1;
                  pcVar1 = ((Il2CppClass_1 *)auStack_14c._44_8_)->name;
                  __this_03 = (System_String_c *)auStack_14c._44_8_;
                  if (pcVar1 == (char *)0x0) break;
                  uVar4 = *(uint *)&((Il2CppClass_1 *)auStack_14c._44_8_)->namespaze;
                  if (uVar4 < *(uint *)(pcVar1 + 0x18)) {
                    *(uint *)&((Il2CppClass_1 *)auStack_14c._44_8_)->namespaze = uVar4 + 1;
                    *(int *)(pcVar1 + (long)(int)uVar4 * 4 + 0x20) = index;
                    pMVar8 = pMVar21;
                  }
                  else {
                    auStack_14c._36_8_ = 0x4264a1f;
                    System_Collections_Generic_List_int___AddWithResize
                              ((System_Collections_Generic_List_int__o *)auStack_14c._44_8_,index,
                               *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar14 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar33 = 0;
                  pMVar21 = pMVar8;
                }
              }
            }
          }
          pMVar8 = (MethodInfo_35FD6C0 *)(ulong)(index + 1U);
          if (uVar32 == index + 1U) goto label_04264b57;
          pSVar28 = (System_Collections_Generic_List_object__o *)(pSVar22->fields)._className;
          __this_03 = (System_String_c *)0x0;
        } while (pSVar28 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
  }
  else {
label_04264b57:
    __this_03 = (System_String_c *)0x0;
    if ((System_String_c *)auStack_14c._44_8_ != (System_String_c *)0x0) {
      pSVar13 = System_Collections_Generic_List_int___ToArray
                          ((System_Collections_Generic_List_int__o *)auStack_14c._44_8_,MethodInfo_Int32_ToArray);
      return (int32_t)pSVar13;
    }
  }
  auStack_14c._36_8_ = 0x4264b82;
  il2cpp_runtime_helper_022b2c90();
label_04264b82:
  uVar32 = (uint)pMVar21;
  auStack_14c._36_8_ = 0x4264b87;
  il2cpp_runtime_helper_022b2fd0();
  pMVar25 = extraout_RDX_03;
  auStack_14c._4_8_ = pSVar11;
  auStack_14c._12_8_ = uVar30;
  auStack_14c._20_8_ = pSVar22;
  auStack_14c._28_8_ = uVar33;
  auStack_14c._36_8_ = pMVar8;
  if (g_data_057adc05 == '\0') {
    pSStack_160 = (System_String_c *)0x4264bb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057adc05 = '\x01';
    pMVar25 = extraout_RDX_04;
  }
  pSStack_160 = (System_String_c *)0x4264bc9;
  uVar4 = CustomLogic_CustomLogicParser__FindSemicolon
                    ((CustomLogic_CustomLogicParser_o *)__this_03,uVar32,pMVar25);
  uVar12 = (ulong)uVar4;
  pSStack_160 = (System_String_c *)0x4264be0;
  lVar14 = il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  auStack_14c._0_4_ = uVar4 + 1;
  pMVar21 = (MethodInfo_35FD6C0 *)auStack_14c;
  pSStack_160 = (System_String_c *)0x4264c01;
  pMVar17 = g_data_057b9bb8;
  pMVar15 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_02304f30();
  if (lVar14 != 0) {
    if (pMVar15 == (MethodInfo_35FD6C0 *)0x0) {
label_04264c26:
      if (*(int *)(lVar14 + 0x18) != 0) {
        *(MethodInfo_35FD6C0 **)(lVar14 + 0x20) = pMVar15;
        pSStack_160 = (System_String_c *)0x4264c3c;
        il2cpp_runtime_helper_022b4080(lVar14 + 0x20);
        uVar12 = (ulong)(uVar4 - 1);
        pSStack_160 = (System_String_c *)0x4264c50;
        pMVar15 = (MethodInfo_35FD6C0 *)
                  CustomLogic_CustomLogicParser__ParseExpression
                            ((CustomLogic_CustomLogicParser_o *)__this_03,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar32,uVar4 - 1,in_R8);
        if (pMVar15 != (MethodInfo_35FD6C0 *)0x0) {
          pSStack_160 = (System_String_c *)0x4264c67;
          lVar16 = il2cpp_runtime_helper_023051f0(pMVar15);
          if (lVar16 == 0) goto label_04264c9a;
        }
        if (1 < *(uint *)(lVar14 + 0x18)) {
          *(MethodInfo_35FD6C0 **)(lVar14 + 0x28) = pMVar15;
          pSStack_160 = (System_String_c *)0x4264c85;
          il2cpp_runtime_helper_022b4080(lVar14 + 0x28,pMVar15);
          return (int32_t)lVar14;
        }
      }
      pSStack_160 = (System_String_c *)0x4264c9a;
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pSStack_160 = (System_String_c *)0x4264c21;
      lVar16 = il2cpp_runtime_helper_023051f0(pMVar15);
      if (lVar16 != 0) goto label_04264c26;
    }
label_04264c9a:
    pSStack_160 = (System_String_c *)0x4264c9f;
    pMVar17 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_0231b270();
    pMVar21 = (MethodInfo_35FD6C0 *)0x0;
    pSStack_160 = (System_String_c *)0x4264ca9;
    il2cpp_runtime_helper_022b2b10();
    pMVar8 = pMVar15;
  }
  pSStack_160 = (System_String_c *)0x4264cae;
  uStack_180 = il2cpp_runtime_helper_022b2c90();
  pMVar26 = (MethodInfo_35FD6C0 *)((ulong)pMVar21 & 0xffffffff);
  pMVar15 = pMVar21;
  lStack_178 = lVar14;
  uStack_170 = uVar12;
  uStack_168 = (ulong)uVar32;
  pSStack_160 = __this_03;
  if (g_data_057adc0a == '\0') {
    pMStack_188 = (MethodInfo_35FD6C0 *)0x4264cd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMStack_188 = (MethodInfo_35FD6C0 *)0x4264cde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc0a = '\x01';
  }
  pSVar28 = (System_Collections_Generic_List_object__o *)pMVar17->invoker_method;
  pCVar29 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (pSVar28 != (System_Collections_Generic_List_object__o *)0x0) {
    __this_03 = (System_String_c *)&MethodInfo_CustomLogicToken_get_Item;
    if ((int)pMVar21 < (pSVar28->fields)._size) {
      do {
        pMStack_188 = (MethodInfo_35FD6C0 *)0x4264d2b;
        pMVar15 = pMVar26;
        pIVar18 = System_Collections_Generic_List_object___get_Item(pSVar28,(int)pMVar26,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar18 != (Il2CppObject *)0x0) && (*(int *)&pIVar18[1].klass == 0)) {
          pCVar29 = pIVar18[1].monitor;
          if (pCVar29 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_04264d70;
          pMVar15 = g_data_057b9bb8;
          if ((pCVar29->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
          goto label_04264d75;
          pMStack_188 = (MethodInfo_35FD6C0 *)0x4264d56;
          piVar7 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar7 == 0x23) goto label_04264d62;
        }
        uVar32 = (int)pMVar26 + 1;
        pMVar26 = (MethodInfo_35FD6C0 *)(ulong)uVar32;
        pSVar28 = (System_Collections_Generic_List_object__o *)pMVar17->invoker_method;
        pCVar29 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (pSVar28 == (System_Collections_Generic_List_object__o *)0x0) goto label_04264d70;
      } while ((int)uVar32 < (pSVar28->fields)._size);
    }
    pMVar26 = (MethodInfo_35FD6C0 *)&g_data_ffffffff;
label_04264d62:
    return (int32_t)pMVar26;
  }
label_04264d70:
  pMStack_188 = (MethodInfo_35FD6C0 *)0x4264d75;
  il2cpp_runtime_helper_022b2c90();
label_04264d75:
  pMStack_188 = (MethodInfo_35FD6C0 *)0x4264d7a;
  auVar34 = il2cpp_runtime_helper_022b2fd0();
  pSVar20 = auVar34._8_8_;
  uStack_198 = auVar34._0_8_;
  pMVar21 = pMVar15;
  pMStack_190 = pMVar26;
  pMStack_188 = pMVar17;
  if (g_data_057adc0b == '\0') {
    pCVar29 = (CustomLogic_CustomLogicParser_o *)&MethodInfo_Boolean_Contains;
    pMStack_1a0 = (MethodInfo_35FD6C0 *)0x4264d9f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc0b = '\x01';
  }
  if ((pMVar15 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar15->invoker_method != 0)) {
    return 0;
  }
  if ((pSVar20 == (System_String_array *)0x0) ||
     (pCVar29 = (CustomLogic_CustomLogicParser_o *)pMVar15->name,
     pCVar29 == (CustomLogic_CustomLogicParser_o *)0x0)) {
    pMStack_1a0 = (MethodInfo_35FD6C0 *)0x4264e06;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar21 = g_data_057b9bb8;
    if ((pCVar29->klass->_1).element_class == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pMStack_1a0 = (MethodInfo_35FD6C0 *)0x4264de6;
      piVar19 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar5 = System_Collections_Generic_HashSet_int___Contains
                        ((System_Collections_Generic_HashSet_int__o *)pSVar20,*piVar19,MethodInfo_Boolean_Contains);
      return bVar5;
    }
  }
  pMStack_1a0 = (MethodInfo_35FD6C0 *)0x4264e0b;
  il2cpp_runtime_helper_022b2fd0();
  pMStack_1b8 = pMVar15;
  pSStack_1b0 = pSVar20;
  pSStack_1a8 = __this_03;
  pMStack_1a0 = pMVar8;
  if ((pMVar21 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar21->invoker_method != 0)) {
label_04264e6a:
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264e76;
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264e83;
    pSVar20 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar9,6);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(pSVar20);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264e9a;
    uVar9 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(pSVar20,0,uVar9);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(pMVar21);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264eba;
    pCVar29 = (CustomLogic_CustomLogicParser_o *)
              CustomLogic_CustomLogicParser__GetLineNumberString
                        (pCVar29,*(int32_t *)&pMVar21->klass,method_02);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(pSVar20);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(pSVar20,1,pCVar29);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(pSVar20);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264ee9;
    uVar9 = il2cpp_runtime_helper_023445d0(&", got ");
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264ef9;
    pSVar10 = pSVar20;
    il2cpp_runtime_helper_01f6dff0(pSVar20,2,uVar9);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f01;
    pSVar11 = CustomLogic_CustomLogicParser__GetTokenString
                        ((CustomLogic_CustomLogicParser_o *)pSVar10,(CustomLogic_CustomLogicToken_o *)pMVar21,
                         method_03);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(pSVar20);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(pSVar20,3,pSVar11);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(pSVar20);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f30;
    uVar9 = il2cpp_runtime_helper_023445d0(&", expected ");
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(pSVar20,4,uVar9);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f4c;
    SStack_1d0.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    SStack_1d0.monitor = (void *)0xffffffffffffffff;
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f67;
    iStack_1c0 = extraout_EDX_00;
    pSVar11 = System_Enum__ToString(&SStack_1d0,(MethodInfo *)0x0);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(pSVar20);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(pSVar20,5,pSVar11);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f8c;
    pMVar21 = (MethodInfo_35FD6C0 *)System_String__Concat_3af7570(pSVar20,(MethodInfo *)0x0);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264f9b;
    uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264fa3;
    pSVar22 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar22,(System_String_o *)pMVar21,(MethodInfo *)0x0);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264fbf;
    pMVar8 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar22 = (System_Exception_o *)pMVar21->name;
    pMVar8 = pMVar21;
    if (pSVar22 == (System_Exception_o *)0x0) goto label_04264fca;
    pMVar8 = g_data_057b9bb8;
    if ((pSVar22->klass->_1).element_class == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264e5b;
      piVar7 = (int *)il2cpp_runtime_helper_02305440();
      if (*piVar7 == extraout_EDX_00) {
        return (int32_t)piVar7;
      }
      goto label_04264e6a;
    }
  }
  pCStack_1d8 = (CustomLogic_CustomLogicParser_o *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_1f0 = (System_String_o *)0x4264ff3;
  pMStack_1e8 = pMVar21;
  pSStack_1e0 = pSVar20;
  pCStack_1d8 = pCVar29;
  il2cpp_runtime_helper_01f681a0(pMVar8);
  pSStack_1f0 = (System_String_o *)0x4264ffe;
  pSVar11 = CustomLogic_CustomLogicParser__GetLineNumberString
                      ((CustomLogic_CustomLogicParser_o *)pSVar22,*(int32_t *)&pMVar8->klass,method_04);
  pSStack_1f0 = (System_String_o *)0x4265009;
  pSVar23 = CustomLogic_CustomLogicParser__GetTokenString
                      ((CustomLogic_CustomLogicParser_o *)pSVar22,(CustomLogic_CustomLogicToken_o *)pMVar8,
                       method_05);
  pSStack_1f0 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_1f0 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_1f0 = (System_String_o *)0x426503b;
  pSVar11 = System_String__Concat_3af7470(str0,pSVar11,str2,pSVar23,(MethodInfo *)0x0);
  pSStack_1f0 = (System_String_o *)0x426504a;
  uVar9 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_1f0 = (System_String_o *)0x4265052;
  pSVar22 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar9);
  pSStack_1f0 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar22,pSVar11,(MethodInfo *)0x0);
  pSStack_1f0 = (System_String_o *)0x426506e;
  pMVar21 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_1f0 = (System_String_o *)0x4265079;
  uStack_200 = il2cpp_runtime_helper_022b2b10(pSVar22);
  pMVar8 = pMVar21;
  pSStack_1f8 = pSVar22;
  pSStack_1f0 = pSVar11;
  if (g_data_057adc0c == '\0') {
    pMStack_208 = (MethodInfo_35FD6C0 *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pMStack_208 = (MethodInfo_35FD6C0 *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((pMVar21 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar21->invoker_method != 0)) {
    return 0;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    pMStack_208 = (MethodInfo_35FD6C0 *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar31 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((pSVar31 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     ((long *)pMVar21->name == (long *)0x0)) {
    pMStack_208 = (MethodInfo_35FD6C0 *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar8 = g_data_057b9bb8;
    if (*(void **)(*(long *)pMVar21->name + 0x40) == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pMStack_208 = (MethodInfo_35FD6C0 *)0x4265115;
      piVar19 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar5 = System_Collections_Generic_Dictionary_int__int___ContainsKey(pSVar31,*piVar19,MethodInfo_Boolean_ContainsKey);
      return bVar5;
    }
  }
  pMStack_208 = (MethodInfo_35FD6C0 *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar9 = extraout_RDX_05;
  pMStack_208 = pMVar21;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar9 = extraout_RDX_06;
  }
  if (pMVar8 == (MethodInfo_35FD6C0 *)0x0) {
    return (int32_t)"null";
  }
  plVar27 = (long *)pMVar8->name;
  if (*(int *)&pMVar8->invoker_method == 0) {
    if (plVar27 != (long *)0x0) {
      if (*(Il2CppClass **)(*plVar27 + 0x40) == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar24 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_210 = *puVar24;
        SStack_220.klass = TypeInfo_CustomLogicSymbol;
        SStack_220.monitor = (void *)0xffffffffffffffff;
        pSVar11 = System_Enum__ToString(&SStack_220,(MethodInfo *)0x0);
        return (int32_t)pSVar11;
      }
      goto label_042651fb;
    }
  }
  else if (plVar27 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar27 + 0x168);
    iVar3 = (*vtableDispatch)(plVar27,*(undefined8 *)(*plVar27 + 0x170),uVar9,vtableDispatch);
    return iVar3;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (int32_t)plVar27[2];
}


// CustomLogic.CustomLogicParser$$FindCommas
// il2cpp: System_Int32_array* CustomLogic_CustomLogicParser__FindCommas (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, int32_t endIndex, const MethodInfo* method);
// 0x4264840

System_Int32_array *
CustomLogic_CustomLogicParser__FindCommas
          (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,int32_t endIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  code *vtableDispatch;
  uint uVar1;
  bool_conflict bVar2;
  System_Int32_array *pSVar3;
  System_Int32_array *pSVar4;
  long lVar5;
  System_Int32_array *pSVar6;
  Il2CppObject *pIVar7;
  int *piVar8;
  int32_t *piVar9;
  undefined4 extraout_var;
  System_Int32_array *pSVar10;
  undefined8 uVar11;
  System_String_array *values;
  System_String_o *pSVar12;
  System_Int32_array *pSVar13;
  System_Exception_o *pSVar14;
  System_String_o *str3;
  System_String_o *str0;
  System_String_o *str2;
  undefined4 extraout_var_00;
  undefined4 *puVar15;
  int extraout_EDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint uVar16;
  Il2CppObject *unaff_RBX;
  System_Int32_array *pSVar17;
  int index;
  System_Collections_Generic_List_CustomLogicToken__o *pSVar18;
  System_Collections_Generic_List_object__o *__this_01;
  CustomLogic_CustomLogicParser_o *__this_02;
  System_String_array *__this_03;
  long *plVar19;
  MethodInfo *in_R8;
  ulong uVar20;
  ulong unaff_R15;
  System_Collections_Generic_List_int__o *__this_04;
  undefined1 auVar21 [16];
  System_Enum_o SStack_138;
  undefined4 uStack_128;
  System_Int32_array *pSStack_120;
  undefined8 uStack_118;
  System_Exception_o *pSStack_110;
  System_String_o *pSStack_108;
  System_Int32_array *pSStack_100;
  System_String_array *pSStack_f8;
  CustomLogic_CustomLogicParser_o *pCStack_f0;
  System_Enum_o SStack_e8;
  int iStack_d8;
  System_Int32_array *pSStack_d0;
  System_String_array *pSStack_c8;
  System_Collections_Generic_List_int__o *pSStack_c0;
  System_Int32_array *pSStack_b8;
  undefined8 uStack_b0;
  System_Int32_array *pSStack_a8;
  System_Int32_array *pSStack_a0;
  undefined8 uStack_98;
  System_Int32_array *pSStack_90;
  ulong uStack_88;
  ulong uStack_80;
  System_Collections_Generic_List_int__o *pSStack_78;
  undefined1 auStack_64 [36];
  undefined8 uStack_40;
  System_Collections_Generic_List_int__o *local_38;
  
  pSVar10 = (System_Int32_array *)(ulong)(uint)startIndex;
  if (g_data_057adc08 == '\0') {
    uStack_40._0_4_ = 0x4264868;
    uStack_40._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    uStack_40._0_4_ = 0x4264874;
    uStack_40._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ToArray);
    uStack_40._0_4_ = 0x4264880;
    uStack_40._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    uStack_40._0_4_ = 0x426488c;
    uStack_40._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    uStack_40._0_4_ = 0x4264898;
    uStack_40._4_4_ = 0;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    g_data_057adc08 = '\x01';
  }
  uStack_40._0_4_ = 0x42648ae;
  uStack_40._4_4_ = 0;
  local_38 = (System_Collections_Generic_List_int__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  uStack_40._0_4_ = 0x42648c4;
  uStack_40._4_4_ = 0;
  pSVar13 = MethodInfo_List_1_System_Int32;
  System_Collections_Generic_List_int____ctor(local_38,(MethodInfo_35FD6C0 *)MethodInfo_List_1_System_Int32);
  if (startIndex < endIndex) {
    if (local_38 == (System_Collections_Generic_List_int__o *)0x0) {
      unaff_R15 = 0;
      pSVar18 = (__this->fields)._tokens;
      pIVar7 = unaff_RBX;
      uVar20 = 0;
      if (pSVar18 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
        __this_04 = (System_Collections_Generic_List_int__o *)0x0;
      }
      else {
        do {
          unaff_R15 = uVar20;
          uStack_40._0_4_ = 0x4264934;
          uStack_40._4_4_ = 0;
          pSVar13 = pSVar10;
          unaff_RBX = System_Collections_Generic_List_object___get_Item
                                ((System_Collections_Generic_List_object__o *)pSVar18,(int)pSVar10,
                                 MethodInfo_CustomLogicToken_get_Item);
          if ((unaff_RBX != (Il2CppObject *)0x0) && (pIVar7 = unaff_RBX, *(int *)&unaff_RBX[1].klass == 0)) {
            __this_04 = unaff_RBX[1].monitor;
            if (__this_04 == (System_Collections_Generic_List_int__o *)0x0) break;
            pSVar13 = g_data_057b9bb8;
            if ((__this_04->klass->_1).element_class !=
                ((_union_251131 *)((long)g_data_057b9bb8->m_Items + 0x20))->genericMethod) goto label_04264b82;
            uStack_40._0_4_ = 0x4264970;
            uStack_40._4_4_ = 0;
            piVar8 = (int *)il2cpp_runtime_helper_02305440();
            uVar16 = (int)unaff_R15 + (uint)(*piVar8 == 0xb);
            unaff_R15 = (ulong)uVar16;
            if (*(int *)&unaff_RBX[1].klass == 0) {
              __this_04 = unaff_RBX[1].monitor;
              if (__this_04 == (System_Collections_Generic_List_int__o *)0x0) break;
              pSVar13 = g_data_057b9bb8;
              if ((__this_04->klass->_1).element_class !=
                  ((_union_251131 *)((long)g_data_057b9bb8->m_Items + 0x20))->genericMethod) goto label_04264b82;
              uStack_40._0_4_ = 0x42649af;
              uStack_40._4_4_ = 0;
              piVar8 = (int *)il2cpp_runtime_helper_02305440();
              uVar16 = uVar16 - (*piVar8 == 0xc);
              unaff_R15 = (ulong)uVar16;
              if (*(int *)&unaff_RBX[1].klass == 0) {
                __this_04 = unaff_RBX[1].monitor;
                if (__this_04 == (System_Collections_Generic_List_int__o *)0x0) break;
                pSVar13 = g_data_057b9bb8;
                if ((__this_04->klass->_1).element_class !=
                    ((_union_251131 *)((long)g_data_057b9bb8->m_Items + 0x20))->genericMethod) goto label_04264b82;
                uStack_40._0_4_ = 0x42649f2;
                uStack_40._4_4_ = 0;
                piVar8 = (int *)il2cpp_runtime_helper_02305440();
                if ((uVar16 == 0) && (*piVar8 == 0x25)) break;
              }
            }
          }
          unaff_RBX = pIVar7;
          uVar16 = (int)pSVar10 + 1;
          pSVar10 = (System_Int32_array *)(ulong)uVar16;
          if (endIndex == uVar16) goto label_04264b57;
          pSVar18 = (__this->fields)._tokens;
          __this_04 = (System_Collections_Generic_List_int__o *)0x0;
          pIVar7 = unaff_RBX;
          uVar20 = unaff_R15;
        } while (pSVar18 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0);
      }
    }
    else {
      unaff_R15 = 0;
      pSVar18 = (__this->fields)._tokens;
      if (pSVar18 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
        __this_04 = (System_Collections_Generic_List_int__o *)0x0;
      }
      else {
        do {
          index = (int)pSVar10;
          uStack_40._0_4_ = 0x4264a54;
          uStack_40._4_4_ = 0;
          pSVar13 = pSVar10;
          pIVar7 = System_Collections_Generic_List_object___get_Item
                             ((System_Collections_Generic_List_object__o *)pSVar18,index,MethodInfo_CustomLogicToken_get_Item);
          if ((pIVar7 != (Il2CppObject *)0x0) && (unaff_RBX = pIVar7, *(int *)&pIVar7[1].klass == 0)) {
            __this_04 = pIVar7[1].monitor;
            if (__this_04 == (System_Collections_Generic_List_int__o *)0x0) break;
            pSVar13 = g_data_057b9bb8;
            if ((__this_04->klass->_1).element_class !=
                ((_union_251131 *)((long)g_data_057b9bb8->m_Items + 0x20))->genericMethod) goto label_04264b82;
            uStack_40._0_4_ = 0x4264a90;
            uStack_40._4_4_ = 0;
            piVar8 = (int *)il2cpp_runtime_helper_02305440();
            uVar16 = (int)unaff_R15 + (uint)(*piVar8 == 0xb);
            unaff_R15 = (ulong)uVar16;
            if (*(int *)&pIVar7[1].klass == 0) {
              __this_04 = pIVar7[1].monitor;
              if (__this_04 == (System_Collections_Generic_List_int__o *)0x0) break;
              pSVar13 = g_data_057b9bb8;
              if ((__this_04->klass->_1).element_class !=
                  ((_union_251131 *)((long)g_data_057b9bb8->m_Items + 0x20))->genericMethod) goto label_04264b82;
              uStack_40._0_4_ = 0x4264acf;
              uStack_40._4_4_ = 0;
              piVar8 = (int *)il2cpp_runtime_helper_02305440();
              uVar16 = uVar16 - (*piVar8 == 0xc);
              unaff_R15 = (ulong)uVar16;
              if (*(int *)&pIVar7[1].klass == 0) {
                __this_04 = pIVar7[1].monitor;
                if (__this_04 == (System_Collections_Generic_List_int__o *)0x0) break;
                pSVar13 = g_data_057b9bb8;
                if ((__this_04->klass->_1).element_class !=
                    ((_union_251131 *)((long)g_data_057b9bb8->m_Items + 0x20))->genericMethod) goto label_04264b82;
                uStack_40._0_4_ = 0x4264b0e;
                uStack_40._4_4_ = 0;
                piVar8 = (int *)il2cpp_runtime_helper_02305440();
                lVar5 = MethodInfo_Void_Add;
                if ((uVar16 == 0) && (*piVar8 == 0x25)) {
                  piVar9 = &(local_38->fields)._version;
                  *piVar9 = *piVar9 + 1;
                  pSVar6 = (local_38->fields)._items;
                  __this_04 = local_38;
                  if (pSVar6 == (System_Int32_array *)0x0) break;
                  uVar16 = (local_38->fields)._size;
                  if (uVar16 < (uint)pSVar6->max_length) {
                    (local_38->fields)._size = uVar16 + 1;
                    pSVar6->m_Items[(int)uVar16] = index;
                    pSVar10 = pSVar13;
                  }
                  else {
                    uStack_40._0_4_ = 0x4264a1f;
                    uStack_40._4_4_ = 0;
                    System_Collections_Generic_List_int___AddWithResize
                              (local_38,index,
                               *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  unaff_R15 = 0;
                  pSVar13 = pSVar10;
                }
              }
            }
          }
          pSVar10 = (System_Int32_array *)(ulong)(index + 1U);
          if (endIndex == index + 1U) goto label_04264b57;
          pSVar18 = (__this->fields)._tokens;
          __this_04 = (System_Collections_Generic_List_int__o *)0x0;
        } while (pSVar18 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0);
      }
    }
  }
  else {
label_04264b57:
    __this_04 = (System_Collections_Generic_List_int__o *)0x0;
    if (local_38 != (System_Collections_Generic_List_int__o *)0x0) {
      pSVar10 = System_Collections_Generic_List_int___ToArray(local_38,MethodInfo_Int32_ToArray);
      return pSVar10;
    }
  }
  uStack_40._0_4_ = 0x4264b82;
  uStack_40._4_4_ = 0;
  il2cpp_runtime_helper_022b2c90();
label_04264b82:
  uVar16 = (uint)pSVar13;
  uStack_40._0_4_ = 0x4264b87;
  uStack_40._4_4_ = 0;
  il2cpp_runtime_helper_022b2fd0();
  method_00 = extraout_RDX;
  auStack_64._4_8_ = unaff_RBX;
  auStack_64._12_8_ = (ulong)(uint)endIndex;
  auStack_64._20_8_ = __this;
  auStack_64._28_8_ = unaff_R15;
  uStack_40 = pSVar10;
  if (g_data_057adc05 == '\0') {
    pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264bb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057adc05 = '\x01';
    method_00 = extraout_RDX_00;
  }
  pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264bc9;
  uVar1 = CustomLogic_CustomLogicParser__FindSemicolon
                    ((CustomLogic_CustomLogicParser_o *)__this_04,uVar16,method_00);
  uVar20 = (ulong)uVar1;
  pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264be0;
  pSVar3 = (System_Int32_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  auStack_64._0_4_ = uVar1 + 1;
  pSVar13 = (System_Int32_array *)auStack_64;
  pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264c01;
  pSVar6 = g_data_057b9bb8;
  pSVar4 = (System_Int32_array *)il2cpp_runtime_helper_02304f30();
  if (pSVar3 != (System_Int32_array *)0x0) {
    if (pSVar4 == (System_Int32_array *)0x0) {
label_04264c26:
      if ((int)pSVar3->max_length != 0) {
        *(System_Int32_array **)pSVar3->m_Items = pSVar4;
        pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264c3c;
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items);
        uVar20 = (ulong)(uVar1 - 1);
        pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264c50;
        pSVar4 = (System_Int32_array *)
                 CustomLogic_CustomLogicParser__ParseExpression
                           ((CustomLogic_CustomLogicParser_o *)__this_04,
                            (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar16,uVar1 - 1,in_R8);
        if (pSVar4 != (System_Int32_array *)0x0) {
          pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264c67;
          lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
          if (lVar5 == 0) goto label_04264c9a;
        }
        if (1 < (uint)pSVar3->max_length) {
          *(System_Int32_array **)(pSVar3->m_Items + 2) = pSVar4;
          pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264c85;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + 2,pSVar4);
          return pSVar3;
        }
      }
      pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264c9a;
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264c21;
      lVar5 = il2cpp_runtime_helper_023051f0(pSVar4);
      if (lVar5 != 0) goto label_04264c26;
    }
label_04264c9a:
    pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264c9f;
    pSVar6 = (System_Int32_array *)il2cpp_runtime_helper_0231b270();
    pSVar13 = (System_Int32_array *)0x0;
    pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264ca9;
    il2cpp_runtime_helper_022b2b10();
    pSVar10 = pSVar4;
  }
  pSStack_78 = (System_Collections_Generic_List_int__o *)0x4264cae;
  uStack_98 = il2cpp_runtime_helper_022b2c90();
  pSVar17 = (System_Int32_array *)((ulong)pSVar13 & 0xffffffff);
  pSVar4 = pSVar13;
  pSStack_90 = pSVar3;
  uStack_88 = uVar20;
  uStack_80 = (ulong)uVar16;
  pSStack_78 = __this_04;
  if (g_data_057adc0a == '\0') {
    pSStack_a0 = (System_Int32_array *)0x4264cd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pSStack_a0 = (System_Int32_array *)0x4264cde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc0a = '\x01';
  }
  __this_01 = (System_Collections_Generic_List_object__o *)pSVar6->bounds;
  __this_02 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
    __this_04 = (System_Collections_Generic_List_int__o *)&MethodInfo_CustomLogicToken_get_Item;
    if ((int)pSVar13 < (__this_01->fields)._size) {
      do {
        pSStack_a0 = (System_Int32_array *)0x4264d2b;
        pSVar4 = pSVar17;
        pIVar7 = System_Collections_Generic_List_object___get_Item(__this_01,(int)pSVar17,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar7 != (Il2CppObject *)0x0) && (*(int *)&pIVar7[1].klass == 0)) {
          __this_02 = pIVar7[1].monitor;
          if (__this_02 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_04264d70;
          pSVar4 = g_data_057b9bb8;
          if ((__this_02->klass->_1).element_class !=
              ((_union_251131 *)((long)g_data_057b9bb8->m_Items + 0x20))->genericMethod) goto label_04264d75;
          pSStack_a0 = (System_Int32_array *)0x4264d56;
          piVar8 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar8 == 0x23) {
            return pSVar17;
          }
        }
        uVar16 = (int)pSVar17 + 1;
        pSVar17 = (System_Int32_array *)(ulong)uVar16;
        __this_01 = (System_Collections_Generic_List_object__o *)pSVar6->bounds;
        __this_02 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_04264d70;
      } while ((int)uVar16 < (__this_01->fields)._size);
    }
    return (System_Int32_array *)&g_data_ffffffff;
  }
label_04264d70:
  pSStack_a0 = (System_Int32_array *)0x4264d75;
  il2cpp_runtime_helper_022b2c90();
label_04264d75:
  pSStack_a0 = (System_Int32_array *)0x4264d7a;
  auVar21 = il2cpp_runtime_helper_022b2fd0();
  values = auVar21._8_8_;
  uStack_b0 = auVar21._0_8_;
  pSVar13 = pSVar4;
  pSStack_a8 = pSVar17;
  pSStack_a0 = pSVar6;
  if (g_data_057adc0b == '\0') {
    __this_02 = (CustomLogic_CustomLogicParser_o *)&MethodInfo_Boolean_Contains;
    pSStack_b8 = (System_Int32_array *)0x4264d9f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc0b = '\x01';
  }
  if ((pSVar4 == (System_Int32_array *)0x0) || (*(int *)&pSVar4->bounds != 0)) {
    return (System_Int32_array *)0x0;
  }
  if ((values == (System_String_array *)0x0) ||
     (__this_02 = (CustomLogic_CustomLogicParser_o *)pSVar4->max_length,
     __this_02 == (CustomLogic_CustomLogicParser_o *)0x0)) {
    pSStack_b8 = (System_Int32_array *)0x4264e06;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar13 = g_data_057b9bb8;
    if ((__this_02->klass->_1).element_class ==
        ((_union_251131 *)((long)g_data_057b9bb8->m_Items + 0x20))->genericMethod) {
      pSStack_b8 = (System_Int32_array *)0x4264de6;
      piVar9 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar2 = System_Collections_Generic_HashSet_int___Contains
                        ((System_Collections_Generic_HashSet_int__o *)values,*piVar9,MethodInfo_Boolean_Contains);
      return (System_Int32_array *)CONCAT44(extraout_var,bVar2);
    }
  }
  pSStack_b8 = (System_Int32_array *)0x4264e0b;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_d0 = pSVar4;
  pSStack_c8 = values;
  pSStack_c0 = __this_04;
  pSStack_b8 = pSVar10;
  if ((pSVar13 == (System_Int32_array *)0x0) || (*(int *)&pSVar13->bounds != 0)) {
label_04264e6a:
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264e76;
    uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264e83;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar11,6);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264e9a;
    uVar11 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(values,0,uVar11);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(pSVar13);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264eba;
    __this_02 = (CustomLogic_CustomLogicParser_o *)
                CustomLogic_CustomLogicParser__GetLineNumberString(__this_02,pSVar13->m_Items[0],method_01);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(values,1,__this_02);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264ee9;
    uVar11 = il2cpp_runtime_helper_023445d0(&", got ");
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264ef9;
    __this_03 = values;
    il2cpp_runtime_helper_01f6dff0(values,2,uVar11);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f01;
    pSVar12 = CustomLogic_CustomLogicParser__GetTokenString
                        ((CustomLogic_CustomLogicParser_o *)__this_03,
                         (CustomLogic_CustomLogicToken_o *)pSVar13,method_02);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(values,3,pSVar12);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f30;
    uVar11 = il2cpp_runtime_helper_023445d0(&", expected ");
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(values,4,uVar11);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f4c;
    SStack_e8.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    SStack_e8.monitor = (void *)0xffffffffffffffff;
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f67;
    iStack_d8 = extraout_EDX;
    pSVar12 = System_Enum__ToString(&SStack_e8,(MethodInfo *)0x0);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(values,5,pSVar12);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f8c;
    pSVar13 = (System_Int32_array *)System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264f9b;
    uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264fa3;
    pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar11);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar14,(System_String_o *)pSVar13,(MethodInfo *)0x0);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264fbf;
    pSVar10 = (System_Int32_array *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar14 = (System_Exception_o *)pSVar13->max_length;
    pSVar10 = pSVar13;
    if (pSVar14 == (System_Exception_o *)0x0) goto label_04264fca;
    pSVar10 = g_data_057b9bb8;
    if ((pSVar14->klass->_1).element_class ==
        ((_union_251131 *)((long)g_data_057b9bb8->m_Items + 0x20))->genericMethod) {
      pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264e5b;
      pSVar10 = (System_Int32_array *)il2cpp_runtime_helper_02305440();
      if (*(int *)&(pSVar10->obj).klass == extraout_EDX) {
        return pSVar10;
      }
      goto label_04264e6a;
    }
  }
  pCStack_f0 = (CustomLogic_CustomLogicParser_o *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_108 = (System_String_o *)0x4264ff3;
  pSStack_100 = pSVar13;
  pSStack_f8 = values;
  pCStack_f0 = __this_02;
  il2cpp_runtime_helper_01f681a0(pSVar10);
  pSStack_108 = (System_String_o *)0x4264ffe;
  pSVar12 = CustomLogic_CustomLogicParser__GetLineNumberString
                      ((CustomLogic_CustomLogicParser_o *)pSVar14,pSVar10->m_Items[0],method_03);
  pSStack_108 = (System_String_o *)0x4265009;
  str3 = CustomLogic_CustomLogicParser__GetTokenString
                   ((CustomLogic_CustomLogicParser_o *)pSVar14,(CustomLogic_CustomLogicToken_o *)pSVar10,
                    method_04);
  pSStack_108 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_108 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_108 = (System_String_o *)0x426503b;
  pSVar12 = System_String__Concat_3af7470(str0,pSVar12,str2,str3,(MethodInfo *)0x0);
  pSStack_108 = (System_String_o *)0x426504a;
  uVar11 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_108 = (System_String_o *)0x4265052;
  pSVar14 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar11);
  pSStack_108 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar14,pSVar12,(MethodInfo *)0x0);
  pSStack_108 = (System_String_o *)0x426506e;
  pSVar13 = (System_Int32_array *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_108 = (System_String_o *)0x4265079;
  uStack_118 = il2cpp_runtime_helper_022b2b10(pSVar14);
  pSVar10 = pSVar13;
  pSStack_110 = pSVar14;
  pSStack_108 = pSVar12;
  if (g_data_057adc0c == '\0') {
    pSStack_120 = (System_Int32_array *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pSStack_120 = (System_Int32_array *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((pSVar13 == (System_Int32_array *)0x0) || (*(int *)&pSVar13->bounds != 0)) {
    return (System_Int32_array *)0x0;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    pSStack_120 = (System_Int32_array *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     ((long *)pSVar13->max_length == (long *)0x0)) {
    pSStack_120 = (System_Int32_array *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar10 = g_data_057b9bb8;
    if (*(void **)(*(long *)pSVar13->max_length + 0x40) ==
        ((_union_251131 *)((long)g_data_057b9bb8->m_Items + 0x20))->genericMethod) {
      pSStack_120 = (System_Int32_array *)0x4265115;
      piVar9 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar2 = System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar9,MethodInfo_Boolean_ContainsKey);
      return (System_Int32_array *)CONCAT44(extraout_var_00,bVar2);
    }
  }
  pSStack_120 = (System_Int32_array *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar11 = extraout_RDX_01;
  pSStack_120 = pSVar13;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar11 = extraout_RDX_02;
  }
  if (pSVar10 == (System_Int32_array *)0x0) {
    return "null";
  }
  plVar19 = (long *)pSVar10->max_length;
  if (*(int *)&pSVar10->bounds == 0) {
    if (plVar19 != (long *)0x0) {
      if (*(Il2CppClass **)(*plVar19 + 0x40) == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar15 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_128 = *puVar15;
        SStack_138.klass = TypeInfo_CustomLogicSymbol;
        SStack_138.monitor = (void *)0xffffffffffffffff;
        pSVar10 = (System_Int32_array *)System_Enum__ToString(&SStack_138,(MethodInfo *)0x0);
        return pSVar10;
      }
      goto label_042651fb;
    }
  }
  else if (plVar19 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar19 + 0x168);
    pSVar10 = (System_Int32_array *)
              (*vtableDispatch)(plVar19,*(undefined8 *)(*plVar19 + 0x170),uVar11,vtableDispatch)
    ;
    return pSVar10;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (System_Int32_array *)plVar19[2];
}


// CustomLogic.CustomLogicParser$$FindClosingParen
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindClosingParen (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x4264590

int32_t CustomLogic_CustomLogicParser__FindClosingParen
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  char *pcVar1;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  code *vtableDispatch;
  undefined1 *puVar2;
  int32_t iVar3;
  uint uVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  int *piVar7;
  undefined8 uVar8;
  System_String_array *pSVar9;
  System_String_o *pSVar10;
  System_Exception_o *__this_01;
  ulong uVar11;
  System_Int32_array *pSVar12;
  long lVar13;
  MethodInfo_35FD6C0 *pMVar14;
  long lVar15;
  MethodInfo_35FD6C0 *pMVar16;
  int32_t *piVar17;
  System_String_array *pSVar18;
  MethodInfo_35FD6C0 *pMVar19;
  System_Exception_o *pSVar20;
  System_String_o *pSVar21;
  System_String_o *str0;
  System_String_o *str2;
  undefined4 *puVar22;
  int extraout_EDX;
  ulong extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  Il2CppObject *unaff_RBX;
  MethodInfo_35FD6C0 *pMVar23;
  int index;
  MethodInfo_35FD6C0 *pMVar24;
  undefined4 in_register_00000034;
  System_Collections_Generic_List_CustomLogicToken__o *__this_02;
  System_Collections_Generic_List_object__o *pSVar25;
  CustomLogic_CustomLogicParser_o *pCVar26;
  long *plVar27;
  MethodInfo *in_R8;
  undefined8 *unaff_R12;
  ulong uVar28;
  undefined8 *unaff_R13;
  uint uVar29;
  ulong unaff_R15;
  ulong uVar30;
  System_String_c *__this_03;
  undefined1 auVar31 [16];
  System_Enum_o SStack_1a8;
  undefined4 uStack_198;
  MethodInfo_35FD6C0 *pMStack_190;
  undefined8 uStack_188;
  System_Exception_o *pSStack_180;
  System_String_o *pSStack_178;
  MethodInfo_35FD6C0 *pMStack_170;
  System_String_array *pSStack_168;
  CustomLogic_CustomLogicParser_o *pCStack_160;
  System_Enum_o SStack_158;
  int iStack_148;
  MethodInfo_35FD6C0 *pMStack_140;
  System_String_array *pSStack_138;
  System_String_c *pSStack_130;
  MethodInfo_35FD6C0 *pMStack_128;
  undefined8 uStack_120;
  MethodInfo_35FD6C0 *pMStack_118;
  MethodInfo_35FD6C0 *pMStack_110;
  undefined8 uStack_108;
  long lStack_100;
  ulong uStack_f8;
  ulong uStack_f0;
  System_String_c *pSStack_e8;
  undefined1 auStack_d4 [84];
  ulong uStack_80;
  System_Exception_o *pSStack_78;
  System_Enum_o SStack_70;
  int iStack_60;
  Il2CppObject *pIStack_58;
  CustomLogic_CustomLogicParser_o *pCStack_50;
  ulong uStack_48;
  MethodInfo_35FD6C0 *pMStack_40;
  
  pMVar19 = (MethodInfo_35FD6C0 *)CONCAT44(in_register_00000034,startIndex);
  pMVar24 = (MethodInfo_35FD6C0 *)(ulong)(uint)startIndex;
  if (g_data_057adc09 == '\0') {
    pMStack_40 = (MethodInfo_35FD6C0 *)0x42645b5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMStack_40 = (MethodInfo_35FD6C0 *)0x42645c1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc09 = '\x01';
  }
  __this_02 = (__this->fields)._tokens;
  pCVar26 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (__this_02 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    unaff_R15 = 0;
    unaff_R12 = &MethodInfo_CustomLogicToken_get_Item;
    unaff_R13 = &g_data_057b9b70;
    if (startIndex < (__this_02->fields)._size) {
      do {
        pMStack_40 = (MethodInfo_35FD6C0 *)0x4264620;
        pMVar19 = pMVar24;
        pIVar6 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,(int)pMVar24,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar6 != (Il2CppObject *)0x0) && (unaff_RBX = pIVar6, *(int *)&pIVar6[1].klass == 0)) {
          pCVar26 = pIVar6[1].monitor;
          if (pCVar26 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0426469e;
          pMVar19 = g_data_057b9bb8;
          if ((pCVar26->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
          goto label_042646a3;
          pMStack_40 = (MethodInfo_35FD6C0 *)0x426464d;
          piVar7 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar7 == 0xb) {
            unaff_R15 = (ulong)((int)unaff_R15 + 1);
          }
          else if (*(int *)&pIVar6[1].klass == 0) {
            pCVar26 = pIVar6[1].monitor;
            if (pCVar26 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0426469e;
            pMVar19 = g_data_057b9bb8;
            if ((pCVar26->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_042646a3;
            pMStack_40 = (MethodInfo_35FD6C0 *)0x4264677;
            piVar7 = (int *)il2cpp_runtime_helper_02305440();
            if ((*piVar7 == 0xc) && (uVar29 = (int)unaff_R15 - 1, unaff_R15 = (ulong)uVar29, uVar29 == 0))
            goto label_0426468d;
          }
        }
        uVar29 = (int)pMVar24 + 1;
        pMVar24 = (MethodInfo_35FD6C0 *)(ulong)uVar29;
        __this_02 = (__this->fields)._tokens;
        pCVar26 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (__this_02 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_0426469e;
      } while ((int)uVar29 < (__this_02->fields)._size);
    }
    pMVar24 = (MethodInfo_35FD6C0 *)&g_data_ffffffff;
label_0426468d:
    return (int32_t)pMVar24;
  }
label_0426469e:
  pMStack_40 = (MethodInfo_35FD6C0 *)0x42646a3;
  il2cpp_runtime_helper_022b2c90();
label_042646a3:
  pMStack_40 = (MethodInfo_35FD6C0 *)0x42646a8;
  iVar3 = il2cpp_runtime_helper_022b2fd0();
  uVar30 = extraout_RDX & 0xffffffff;
  iStack_60 = (int)extraout_RDX;
  if ((pMVar19 != (MethodInfo_35FD6C0 *)0x0) && (*(int *)&pMVar19->invoker_method == iStack_60)) {
    return iVar3;
  }
  pSStack_78 = (System_Exception_o *)0x42646e5;
  pIStack_58 = unaff_RBX;
  pCStack_50 = __this;
  uStack_48 = unaff_R15;
  pMStack_40 = pMVar24;
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
  pSStack_78 = (System_Exception_o *)0x42646f2;
  pSVar9 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar8,6);
  pSStack_78 = (System_Exception_o *)0x42646fd;
  il2cpp_runtime_helper_01f681a0(pSVar9);
  pSStack_78 = (System_Exception_o *)0x4264709;
  uVar8 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_78 = (System_Exception_o *)0x4264716;
  il2cpp_runtime_helper_01f6dff0(pSVar9,0,uVar8);
  pSStack_78 = (System_Exception_o *)0x426471e;
  il2cpp_runtime_helper_01f681a0(pMVar19);
  pSStack_78 = (System_Exception_o *)0x4264729;
  pSVar10 = CustomLogic_CustomLogicParser__GetLineNumberString(pCVar26,*(int32_t *)&pMVar19->klass,method_00);
  pSStack_78 = (System_Exception_o *)0x4264734;
  il2cpp_runtime_helper_01f681a0(pSVar9);
  pSStack_78 = (System_Exception_o *)0x4264744;
  il2cpp_runtime_helper_01f6dff0(pSVar9,1,pSVar10);
  pSStack_78 = (System_Exception_o *)0x426474c;
  il2cpp_runtime_helper_01f681a0(pSVar9);
  pSStack_78 = (System_Exception_o *)0x4264758;
  uVar8 = il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_78 = (System_Exception_o *)0x4264768;
  pSVar18 = pSVar9;
  il2cpp_runtime_helper_01f6dff0(pSVar9,2,uVar8);
  pSStack_78 = (System_Exception_o *)0x4264770;
  pSVar10 = CustomLogic_CustomLogicParser__GetTokenString
                      ((CustomLogic_CustomLogicParser_o *)pSVar18,(CustomLogic_CustomLogicToken_o *)pMVar19,
                       method_01);
  pSStack_78 = (System_Exception_o *)0x426477b;
  il2cpp_runtime_helper_01f681a0(pSVar9);
  pSStack_78 = (System_Exception_o *)0x426478b;
  il2cpp_runtime_helper_01f6dff0(pSVar9,3,pSVar10);
  pSStack_78 = (System_Exception_o *)0x4264793;
  il2cpp_runtime_helper_01f681a0(pSVar9);
  pSStack_78 = (System_Exception_o *)0x426479f;
  uVar8 = il2cpp_runtime_helper_023445d0(&", expected ");
  pSStack_78 = (System_Exception_o *)0x42647af;
  il2cpp_runtime_helper_01f6dff0(pSVar9,4,uVar8);
  pSStack_78 = (System_Exception_o *)0x42647bb;
  SStack_70.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTokenType);
  SStack_70.monitor = (void *)0xffffffffffffffff;
  pSStack_78 = (System_Exception_o *)0x42647d7;
  pSVar10 = System_Enum__ToString(&SStack_70,(MethodInfo *)0x0);
  pSStack_78 = (System_Exception_o *)0x42647e2;
  il2cpp_runtime_helper_01f681a0(pSVar9);
  pSStack_78 = (System_Exception_o *)0x42647f2;
  il2cpp_runtime_helper_01f6dff0(pSVar9,5,pSVar10);
  pSStack_78 = (System_Exception_o *)0x42647fc;
  pSVar10 = System_String__Concat_3af7570(pSVar9,(MethodInfo *)0x0);
  pSStack_78 = (System_Exception_o *)0x426480b;
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_78 = (System_Exception_o *)0x4264813;
  __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
  pSStack_78 = (System_Exception_o *)0x4264823;
  System_Exception___ctor_3cf6120(__this_01,pSVar10,(MethodInfo *)0x0);
  pSStack_78 = (System_Exception_o *)0x426482f;
  uVar11 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertTokenType);
  pSStack_78 = (System_Exception_o *)0x426483a;
  pSVar20 = __this_01;
  auVar31 = il2cpp_runtime_helper_022b2b10();
  auStack_d4._44_8_ = auVar31._0_8_;
  uVar28 = auVar31._8_8_ & 0xffffffff;
  pMVar24 = (MethodInfo_35FD6C0 *)(uVar11 & 0xffffffff);
  auStack_d4._52_8_ = pSVar10;
  auStack_d4._60_8_ = unaff_R12;
  auStack_d4._68_8_ = unaff_R13;
  auStack_d4._76_8_ = pSVar9;
  uStack_80 = uVar30;
  pSStack_78 = __this_01;
  if (g_data_057adc08 == '\0') {
    auStack_d4._36_8_ = 0x4264868;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStack_d4._36_8_ = 0x4264874;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ToArray);
    auStack_d4._36_8_ = 0x4264880;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    auStack_d4._36_8_ = 0x426488c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    auStack_d4._36_8_ = 0x4264898;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    g_data_057adc08 = '\x01';
  }
  auStack_d4._36_8_ = 0x42648ae;
  auStack_d4._44_8_ = il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  auStack_d4._36_8_ = 0x42648c4;
  pMVar19 = MethodInfo_List_1_System_Int32;
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_List_int__o *)auStack_d4._44_8_,MethodInfo_List_1_System_Int32);
  uVar29 = auVar31._8_4_;
  if ((int)uVar11 < (int)uVar29) {
    if ((System_String_c *)auStack_d4._44_8_ == (System_String_c *)0x0) {
      uVar30 = 0;
      pSVar25 = (System_Collections_Generic_List_object__o *)(pSVar20->fields)._className;
      pSVar21 = pSVar10;
      uVar11 = 0;
      if (pSVar25 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_03 = (System_String_c *)0x0;
      }
      else {
        do {
          uVar30 = uVar11;
          auStack_d4._36_8_ = 0x4264934;
          pMVar19 = pMVar24;
          pSVar10 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar25,(int)pMVar24,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar10 != (System_String_o *)0x0) && (pSVar21 = pSVar10, (pSVar10->fields)._stringLength == 0)
             ) {
            __this_03 = pSVar10[1].klass;
            if (__this_03 == (System_String_c *)0x0) break;
            pMVar19 = g_data_057b9bb8;
            if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264b82;
            auStack_d4._36_8_ = 0x4264970;
            piVar7 = (int *)il2cpp_runtime_helper_02305440();
            uVar4 = (int)uVar30 + (uint)(*piVar7 == 0xb);
            uVar30 = (ulong)uVar4;
            if ((pSVar10->fields)._stringLength == 0) {
              __this_03 = pSVar10[1].klass;
              if (__this_03 == (System_String_c *)0x0) break;
              pMVar19 = g_data_057b9bb8;
              if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
              goto label_04264b82;
              auStack_d4._36_8_ = 0x42649af;
              piVar7 = (int *)il2cpp_runtime_helper_02305440();
              uVar4 = uVar4 - (*piVar7 == 0xc);
              uVar30 = (ulong)uVar4;
              if ((pSVar10->fields)._stringLength == 0) {
                __this_03 = pSVar10[1].klass;
                if (__this_03 == (System_String_c *)0x0) break;
                pMVar19 = g_data_057b9bb8;
                if (*(void **)((long)(__this_03->_1).image + 0x40) !=
                    (g_data_057b9bb8->field8_0x40).genericMethod) goto label_04264b82;
                auStack_d4._36_8_ = 0x42649f2;
                piVar7 = (int *)il2cpp_runtime_helper_02305440();
                if ((uVar4 == 0) && (*piVar7 == 0x25)) break;
              }
            }
          }
          pSVar10 = pSVar21;
          uVar4 = (int)pMVar24 + 1;
          pMVar24 = (MethodInfo_35FD6C0 *)(ulong)uVar4;
          if (uVar29 == uVar4) goto label_04264b57;
          pSVar25 = (System_Collections_Generic_List_object__o *)(pSVar20->fields)._className;
          __this_03 = (System_String_c *)0x0;
          pSVar21 = pSVar10;
          uVar11 = uVar30;
        } while (pSVar25 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
    else {
      uVar30 = 0;
      pSVar25 = (System_Collections_Generic_List_object__o *)(pSVar20->fields)._className;
      if (pSVar25 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_03 = (System_String_c *)0x0;
      }
      else {
        do {
          index = (int)pMVar24;
          auStack_d4._36_8_ = 0x4264a54;
          pMVar19 = pMVar24;
          pSVar21 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar25,index,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar21 != (System_String_o *)0x0) && (pSVar10 = pSVar21, (pSVar21->fields)._stringLength == 0)
             ) {
            __this_03 = pSVar21[1].klass;
            if (__this_03 == (System_String_c *)0x0) break;
            pMVar19 = g_data_057b9bb8;
            if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264b82;
            auStack_d4._36_8_ = 0x4264a90;
            piVar7 = (int *)il2cpp_runtime_helper_02305440();
            uVar4 = (int)uVar30 + (uint)(*piVar7 == 0xb);
            uVar30 = (ulong)uVar4;
            if ((pSVar21->fields)._stringLength == 0) {
              __this_03 = pSVar21[1].klass;
              if (__this_03 == (System_String_c *)0x0) break;
              pMVar19 = g_data_057b9bb8;
              if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
              goto label_04264b82;
              auStack_d4._36_8_ = 0x4264acf;
              piVar7 = (int *)il2cpp_runtime_helper_02305440();
              uVar4 = uVar4 - (*piVar7 == 0xc);
              uVar30 = (ulong)uVar4;
              if ((pSVar21->fields)._stringLength == 0) {
                __this_03 = pSVar21[1].klass;
                if (__this_03 == (System_String_c *)0x0) break;
                pMVar19 = g_data_057b9bb8;
                if (*(void **)((long)(__this_03->_1).image + 0x40) !=
                    (g_data_057b9bb8->field8_0x40).genericMethod) goto label_04264b82;
                auStack_d4._36_8_ = 0x4264b0e;
                piVar7 = (int *)il2cpp_runtime_helper_02305440();
                lVar13 = MethodInfo_Void_Add;
                if ((uVar4 == 0) && (*piVar7 == 0x25)) {
                  puVar2 = (undefined1 *)((long)&((Il2CppClass_1 *)auStack_d4._44_8_)->namespaze + 4);
                  *(int *)puVar2 = *(int *)puVar2 + 1;
                  pcVar1 = ((Il2CppClass_1 *)auStack_d4._44_8_)->name;
                  __this_03 = (System_String_c *)auStack_d4._44_8_;
                  if (pcVar1 == (char *)0x0) break;
                  uVar4 = *(uint *)&((Il2CppClass_1 *)auStack_d4._44_8_)->namespaze;
                  if (uVar4 < *(uint *)(pcVar1 + 0x18)) {
                    *(uint *)&((Il2CppClass_1 *)auStack_d4._44_8_)->namespaze = uVar4 + 1;
                    *(int *)(pcVar1 + (long)(int)uVar4 * 4 + 0x20) = index;
                    pMVar24 = pMVar19;
                  }
                  else {
                    auStack_d4._36_8_ = 0x4264a1f;
                    System_Collections_Generic_List_int___AddWithResize
                              ((System_Collections_Generic_List_int__o *)auStack_d4._44_8_,index,
                               *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar30 = 0;
                  pMVar19 = pMVar24;
                }
              }
            }
          }
          pMVar24 = (MethodInfo_35FD6C0 *)(ulong)(index + 1U);
          if (uVar29 == index + 1U) goto label_04264b57;
          pSVar25 = (System_Collections_Generic_List_object__o *)(pSVar20->fields)._className;
          __this_03 = (System_String_c *)0x0;
        } while (pSVar25 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
  }
  else {
label_04264b57:
    __this_03 = (System_String_c *)0x0;
    if ((System_String_c *)auStack_d4._44_8_ != (System_String_c *)0x0) {
      pSVar12 = System_Collections_Generic_List_int___ToArray
                          ((System_Collections_Generic_List_int__o *)auStack_d4._44_8_,MethodInfo_Int32_ToArray);
      return (int32_t)pSVar12;
    }
  }
  auStack_d4._36_8_ = 0x4264b82;
  il2cpp_runtime_helper_022b2c90();
label_04264b82:
  uVar29 = (uint)pMVar19;
  auStack_d4._36_8_ = 0x4264b87;
  il2cpp_runtime_helper_022b2fd0();
  method_02 = extraout_RDX_00;
  auStack_d4._4_8_ = pSVar10;
  auStack_d4._12_8_ = uVar28;
  auStack_d4._20_8_ = pSVar20;
  auStack_d4._28_8_ = uVar30;
  auStack_d4._36_8_ = pMVar24;
  if (g_data_057adc05 == '\0') {
    pSStack_e8 = (System_String_c *)0x4264bb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057adc05 = '\x01';
    method_02 = extraout_RDX_01;
  }
  pSStack_e8 = (System_String_c *)0x4264bc9;
  uVar4 = CustomLogic_CustomLogicParser__FindSemicolon
                    ((CustomLogic_CustomLogicParser_o *)__this_03,uVar29,method_02);
  uVar30 = (ulong)uVar4;
  pSStack_e8 = (System_String_c *)0x4264be0;
  lVar13 = il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  auStack_d4._0_4_ = uVar4 + 1;
  pMVar19 = (MethodInfo_35FD6C0 *)auStack_d4;
  pSStack_e8 = (System_String_c *)0x4264c01;
  pMVar16 = g_data_057b9bb8;
  pMVar14 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_02304f30();
  if (lVar13 != 0) {
    if (pMVar14 == (MethodInfo_35FD6C0 *)0x0) {
label_04264c26:
      if (*(int *)(lVar13 + 0x18) != 0) {
        *(MethodInfo_35FD6C0 **)(lVar13 + 0x20) = pMVar14;
        pSStack_e8 = (System_String_c *)0x4264c3c;
        il2cpp_runtime_helper_022b4080(lVar13 + 0x20);
        uVar30 = (ulong)(uVar4 - 1);
        pSStack_e8 = (System_String_c *)0x4264c50;
        pMVar14 = (MethodInfo_35FD6C0 *)
                  CustomLogic_CustomLogicParser__ParseExpression
                            ((CustomLogic_CustomLogicParser_o *)__this_03,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar29,uVar4 - 1,in_R8);
        if (pMVar14 != (MethodInfo_35FD6C0 *)0x0) {
          pSStack_e8 = (System_String_c *)0x4264c67;
          lVar15 = il2cpp_runtime_helper_023051f0(pMVar14);
          if (lVar15 == 0) goto label_04264c9a;
        }
        if (1 < *(uint *)(lVar13 + 0x18)) {
          *(MethodInfo_35FD6C0 **)(lVar13 + 0x28) = pMVar14;
          pSStack_e8 = (System_String_c *)0x4264c85;
          il2cpp_runtime_helper_022b4080(lVar13 + 0x28,pMVar14);
          return (int32_t)lVar13;
        }
      }
      pSStack_e8 = (System_String_c *)0x4264c9a;
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pSStack_e8 = (System_String_c *)0x4264c21;
      lVar15 = il2cpp_runtime_helper_023051f0(pMVar14);
      if (lVar15 != 0) goto label_04264c26;
    }
label_04264c9a:
    pSStack_e8 = (System_String_c *)0x4264c9f;
    pMVar16 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_0231b270();
    pMVar19 = (MethodInfo_35FD6C0 *)0x0;
    pSStack_e8 = (System_String_c *)0x4264ca9;
    il2cpp_runtime_helper_022b2b10();
    pMVar24 = pMVar14;
  }
  pSStack_e8 = (System_String_c *)0x4264cae;
  uStack_108 = il2cpp_runtime_helper_022b2c90();
  pMVar23 = (MethodInfo_35FD6C0 *)((ulong)pMVar19 & 0xffffffff);
  pMVar14 = pMVar19;
  lStack_100 = lVar13;
  uStack_f8 = uVar30;
  uStack_f0 = (ulong)uVar29;
  pSStack_e8 = __this_03;
  if (g_data_057adc0a == '\0') {
    pMStack_110 = (MethodInfo_35FD6C0 *)0x4264cd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMStack_110 = (MethodInfo_35FD6C0 *)0x4264cde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc0a = '\x01';
  }
  pSVar25 = (System_Collections_Generic_List_object__o *)pMVar16->invoker_method;
  pCVar26 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (pSVar25 != (System_Collections_Generic_List_object__o *)0x0) {
    __this_03 = (System_String_c *)&MethodInfo_CustomLogicToken_get_Item;
    if ((int)pMVar19 < (pSVar25->fields)._size) {
      do {
        pMStack_110 = (MethodInfo_35FD6C0 *)0x4264d2b;
        pMVar14 = pMVar23;
        pIVar6 = System_Collections_Generic_List_object___get_Item(pSVar25,(int)pMVar23,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar6 != (Il2CppObject *)0x0) && (*(int *)&pIVar6[1].klass == 0)) {
          pCVar26 = pIVar6[1].monitor;
          if (pCVar26 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_04264d70;
          pMVar14 = g_data_057b9bb8;
          if ((pCVar26->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
          goto label_04264d75;
          pMStack_110 = (MethodInfo_35FD6C0 *)0x4264d56;
          piVar7 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar7 == 0x23) goto label_04264d62;
        }
        uVar29 = (int)pMVar23 + 1;
        pMVar23 = (MethodInfo_35FD6C0 *)(ulong)uVar29;
        pSVar25 = (System_Collections_Generic_List_object__o *)pMVar16->invoker_method;
        pCVar26 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (pSVar25 == (System_Collections_Generic_List_object__o *)0x0) goto label_04264d70;
      } while ((int)uVar29 < (pSVar25->fields)._size);
    }
    pMVar23 = (MethodInfo_35FD6C0 *)&g_data_ffffffff;
label_04264d62:
    return (int32_t)pMVar23;
  }
label_04264d70:
  pMStack_110 = (MethodInfo_35FD6C0 *)0x4264d75;
  il2cpp_runtime_helper_022b2c90();
label_04264d75:
  pMStack_110 = (MethodInfo_35FD6C0 *)0x4264d7a;
  auVar31 = il2cpp_runtime_helper_022b2fd0();
  pSVar18 = auVar31._8_8_;
  uStack_120 = auVar31._0_8_;
  pMVar19 = pMVar14;
  pMStack_118 = pMVar23;
  pMStack_110 = pMVar16;
  if (g_data_057adc0b == '\0') {
    pCVar26 = (CustomLogic_CustomLogicParser_o *)&MethodInfo_Boolean_Contains;
    pMStack_128 = (MethodInfo_35FD6C0 *)0x4264d9f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc0b = '\x01';
  }
  if ((pMVar14 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar14->invoker_method != 0)) {
    return 0;
  }
  if ((pSVar18 == (System_String_array *)0x0) ||
     (pCVar26 = (CustomLogic_CustomLogicParser_o *)pMVar14->name,
     pCVar26 == (CustomLogic_CustomLogicParser_o *)0x0)) {
    pMStack_128 = (MethodInfo_35FD6C0 *)0x4264e06;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar19 = g_data_057b9bb8;
    if ((pCVar26->klass->_1).element_class == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pMStack_128 = (MethodInfo_35FD6C0 *)0x4264de6;
      piVar17 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar5 = System_Collections_Generic_HashSet_int___Contains
                        ((System_Collections_Generic_HashSet_int__o *)pSVar18,*piVar17,MethodInfo_Boolean_Contains);
      return bVar5;
    }
  }
  pMStack_128 = (MethodInfo_35FD6C0 *)0x4264e0b;
  il2cpp_runtime_helper_022b2fd0();
  pMStack_140 = pMVar14;
  pSStack_138 = pSVar18;
  pSStack_130 = __this_03;
  pMStack_128 = pMVar24;
  if ((pMVar19 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar19->invoker_method != 0)) {
label_04264e6a:
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264e76;
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264e83;
    pSVar18 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar8,6);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264e9a;
    uVar8 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(pSVar18,0,uVar8);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(pMVar19);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264eba;
    pCVar26 = (CustomLogic_CustomLogicParser_o *)
              CustomLogic_CustomLogicParser__GetLineNumberString
                        (pCVar26,*(int32_t *)&pMVar19->klass,method_03);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(pSVar18,1,pCVar26);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264ee9;
    uVar8 = il2cpp_runtime_helper_023445d0(&", got ");
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264ef9;
    pSVar9 = pSVar18;
    il2cpp_runtime_helper_01f6dff0(pSVar18,2,uVar8);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f01;
    pSVar10 = CustomLogic_CustomLogicParser__GetTokenString
                        ((CustomLogic_CustomLogicParser_o *)pSVar9,(CustomLogic_CustomLogicToken_o *)pMVar19,
                         method_04);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(pSVar18,3,pSVar10);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f30;
    uVar8 = il2cpp_runtime_helper_023445d0(&", expected ");
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(pSVar18,4,uVar8);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f4c;
    SStack_158.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    SStack_158.monitor = (void *)0xffffffffffffffff;
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f67;
    iStack_148 = extraout_EDX;
    pSVar10 = System_Enum__ToString(&SStack_158,(MethodInfo *)0x0);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(pSVar18,5,pSVar10);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f8c;
    pMVar19 = (MethodInfo_35FD6C0 *)System_String__Concat_3af7570(pSVar18,(MethodInfo *)0x0);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264f9b;
    uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264fa3;
    pSVar20 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar20,(System_String_o *)pMVar19,(MethodInfo *)0x0);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264fbf;
    pMVar24 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar20 = (System_Exception_o *)pMVar19->name;
    pMVar24 = pMVar19;
    if (pSVar20 == (System_Exception_o *)0x0) goto label_04264fca;
    pMVar24 = g_data_057b9bb8;
    if ((pSVar20->klass->_1).element_class == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264e5b;
      piVar7 = (int *)il2cpp_runtime_helper_02305440();
      if (*piVar7 == extraout_EDX) {
        return (int32_t)piVar7;
      }
      goto label_04264e6a;
    }
  }
  pCStack_160 = (CustomLogic_CustomLogicParser_o *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_178 = (System_String_o *)0x4264ff3;
  pMStack_170 = pMVar19;
  pSStack_168 = pSVar18;
  pCStack_160 = pCVar26;
  il2cpp_runtime_helper_01f681a0(pMVar24);
  pSStack_178 = (System_String_o *)0x4264ffe;
  pSVar10 = CustomLogic_CustomLogicParser__GetLineNumberString
                      ((CustomLogic_CustomLogicParser_o *)pSVar20,*(int32_t *)&pMVar24->klass,method_05);
  pSStack_178 = (System_String_o *)0x4265009;
  pSVar21 = CustomLogic_CustomLogicParser__GetTokenString
                      ((CustomLogic_CustomLogicParser_o *)pSVar20,(CustomLogic_CustomLogicToken_o *)pMVar24,
                       method_06);
  pSStack_178 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_178 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_178 = (System_String_o *)0x426503b;
  pSVar10 = System_String__Concat_3af7470(str0,pSVar10,str2,pSVar21,(MethodInfo *)0x0);
  pSStack_178 = (System_String_o *)0x426504a;
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_178 = (System_String_o *)0x4265052;
  pSVar20 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
  pSStack_178 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar20,pSVar10,(MethodInfo *)0x0);
  pSStack_178 = (System_String_o *)0x426506e;
  pMVar19 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_178 = (System_String_o *)0x4265079;
  uStack_188 = il2cpp_runtime_helper_022b2b10(pSVar20);
  pMVar24 = pMVar19;
  pSStack_180 = pSVar20;
  pSStack_178 = pSVar10;
  if (g_data_057adc0c == '\0') {
    pMStack_190 = (MethodInfo_35FD6C0 *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pMStack_190 = (MethodInfo_35FD6C0 *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((pMVar19 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar19->invoker_method != 0)) {
    return 0;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    pMStack_190 = (MethodInfo_35FD6C0 *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     ((long *)pMVar19->name == (long *)0x0)) {
    pMStack_190 = (MethodInfo_35FD6C0 *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar24 = g_data_057b9bb8;
    if (*(void **)(*(long *)pMVar19->name + 0x40) == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pMStack_190 = (MethodInfo_35FD6C0 *)0x4265115;
      piVar17 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar5 = System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar17,MethodInfo_Boolean_ContainsKey);
      return bVar5;
    }
  }
  pMStack_190 = (MethodInfo_35FD6C0 *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar8 = extraout_RDX_02;
  pMStack_190 = pMVar19;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar8 = extraout_RDX_03;
  }
  if (pMVar24 == (MethodInfo_35FD6C0 *)0x0) {
    return (int32_t)"null";
  }
  plVar27 = (long *)pMVar24->name;
  if (*(int *)&pMVar24->invoker_method == 0) {
    if (plVar27 != (long *)0x0) {
      if (*(Il2CppClass **)(*plVar27 + 0x40) == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar22 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_198 = *puVar22;
        SStack_1a8.klass = TypeInfo_CustomLogicSymbol;
        SStack_1a8.monitor = (void *)0xffffffffffffffff;
        pSVar10 = System_Enum__ToString(&SStack_1a8,(MethodInfo *)0x0);
        return (int32_t)pSVar10;
      }
      goto label_042651fb;
    }
  }
  else if (plVar27 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar27 + 0x168);
    iVar3 = (*vtableDispatch)(plVar27,*(undefined8 *)(*plVar27 + 0x170),uVar8,vtableDispatch);
    return iVar3;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (int32_t)plVar27[2];
}


// CustomLogic.CustomLogicParser$$FindSemicolon
// il2cpp: int32_t CustomLogic_CustomLogicParser__FindSemicolon (CustomLogic_CustomLogicParser_o* __this, int32_t startIndex, const MethodInfo* method);
// 0x4264cb0

int32_t CustomLogic_CustomLogicParser__FindSemicolon
                  (CustomLogic_CustomLogicParser_o *__this,int32_t startIndex,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  int32_t iVar2;
  Il2CppObject *pIVar3;
  int *piVar4;
  int32_t *piVar5;
  undefined8 uVar6;
  System_String_array *values;
  System_String_o *pSVar7;
  CustomLogic_CustomLogicToken_o *pCVar8;
  System_Exception_o *pSVar9;
  CustomLogic_CustomLogicToken_o *pCVar10;
  System_String_o *str3;
  System_String_o *str0;
  System_String_o *str2;
  undefined4 *puVar11;
  int extraout_EDX;
  System_String_array *__this_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined4 in_register_00000034;
  System_Collections_Generic_List_CustomLogicToken__o *__this_02;
  MethodInfo_33D4DF0 **__this_03;
  System_String_array *__this_04;
  MethodInfo_362BED0 **unaff_R15;
  System_Enum_o SStack_c8;
  undefined4 uStack_b8;
  CustomLogic_CustomLogicToken_o *pCStack_b0;
  undefined8 uStack_a8;
  System_Exception_o *pSStack_a0;
  System_String_o *pSStack_98;
  CustomLogic_CustomLogicToken_o *pCStack_90;
  System_String_array *pSStack_88;
  CustomLogic_CustomLogicParser_o *pCStack_80;
  System_Enum_o SStack_78;
  int iStack_68;
  CustomLogic_CustomLogicToken_o *pCStack_60;
  System_String_array *pSStack_58;
  MethodInfo_362BED0 **ppMStack_50;
  
  pCVar10 = (CustomLogic_CustomLogicToken_o *)CONCAT44(in_register_00000034,startIndex);
  if (g_data_057adc0a == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc0a = '\x01';
  }
  __this_02 = (__this->fields)._tokens;
  __this_03 = (MethodInfo_33D4DF0 **)0x0;
  if (__this_02 != (System_Collections_Generic_List_CustomLogicToken__o *)0x0) {
    unaff_R15 = &MethodInfo_CustomLogicToken_get_Item;
    if (startIndex < (__this_02->fields)._size) {
      do {
        pCVar10 = (CustomLogic_CustomLogicToken_o *)(ulong)(uint)startIndex;
        pIVar3 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,startIndex,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar3 != (Il2CppObject *)0x0) && (*(int *)&pIVar3[1].klass == 0)) {
          __this_03 = pIVar3[1].monitor;
          if ((CustomLogic_CustomLogicParser_o *)__this_03 == (CustomLogic_CustomLogicParser_o *)0x0)
          goto label_04264d70;
          pCVar10 = g_data_057b9bb8;
          if ((((Il2CppClass *)((CustomLogic_CustomLogicParser_o *)__this_03)->klass)->_1).element_class !=
              (Il2CppClass *)g_data_057b9bb8[1].fields.Value) goto label_04264d75;
          piVar4 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar4 == 0x23) {
            return startIndex;
          }
        }
        startIndex = startIndex + 1;
        __this_02 = (__this->fields)._tokens;
        __this_03 = (MethodInfo_33D4DF0 **)0x0;
        if (__this_02 == (System_Collections_Generic_List_CustomLogicToken__o *)0x0) goto label_04264d70;
      } while (startIndex < (__this_02->fields)._size);
    }
    return -1;
  }
label_04264d70:
  il2cpp_runtime_helper_022b2c90();
label_04264d75:
  il2cpp_runtime_helper_022b2fd0();
  pCVar8 = pCVar10;
  if (g_data_057adc0b == '\0') {
    __this_03 = &MethodInfo_Boolean_Contains;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc0b = '\x01';
  }
  if ((pCVar10 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar10->fields).Type != 0)) {
    return 0;
  }
  if ((__this_01 == (System_String_array *)0x0) ||
     (__this_03 = (MethodInfo_33D4DF0 **)(pCVar10->fields).Value,
     (CustomLogic_CustomLogicParser_o *)__this_03 == (CustomLogic_CustomLogicParser_o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar8 = g_data_057b9bb8;
    if ((((Il2CppClass *)((CustomLogic_CustomLogicParser_o *)__this_03)->klass)->_1).element_class ==
        (Il2CppClass *)g_data_057b9bb8[1].fields.Value) {
      piVar5 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar1 = System_Collections_Generic_HashSet_int___Contains
                        ((System_Collections_Generic_HashSet_int__o *)__this_01,*piVar5,MethodInfo_Boolean_Contains);
      return bVar1;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pCStack_60 = pCVar10;
  pSStack_58 = __this_01;
  ppMStack_50 = unaff_R15;
  if ((pCVar8 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar8->fields).Type != 0)) {
label_04264e6a:
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264e76;
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264e83;
    values = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar6,6);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264e9a;
    uVar6 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(values,0,uVar6);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(pCVar8);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264eba;
    __this_03 = (MethodInfo_33D4DF0 **)
                CustomLogic_CustomLogicParser__GetLineNumberString
                          ((CustomLogic_CustomLogicParser_o *)__this_03,(pCVar8->fields).Line,method_00);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(values,1,__this_03);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264ee9;
    uVar6 = il2cpp_runtime_helper_023445d0(&", got ");
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264ef9;
    __this_04 = values;
    il2cpp_runtime_helper_01f6dff0(values,2,uVar6);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f01;
    pSVar7 = CustomLogic_CustomLogicParser__GetTokenString
                       ((CustomLogic_CustomLogicParser_o *)__this_04,pCVar8,method_01);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(values,3,pSVar7);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f30;
    uVar6 = il2cpp_runtime_helper_023445d0(&", expected ");
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(values,4,uVar6);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f4c;
    SStack_78.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    SStack_78.monitor = (void *)0xffffffffffffffff;
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f67;
    iStack_68 = extraout_EDX;
    pSVar7 = System_Enum__ToString(&SStack_78,(MethodInfo *)0x0);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(values);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(values,5,pSVar7);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f8c;
    pCVar8 = (CustomLogic_CustomLogicToken_o *)System_String__Concat_3af7570(values,(MethodInfo *)0x0);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264f9b;
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264fa3;
    pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar9,(System_String_o *)pCVar8,(MethodInfo *)0x0);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264fbf;
    pCVar10 = (CustomLogic_CustomLogicToken_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar9 = (System_Exception_o *)(pCVar8->fields).Value;
    pCVar10 = pCVar8;
    values = __this_01;
    if (pSVar9 == (System_Exception_o *)0x0) goto label_04264fca;
    pCVar10 = g_data_057b9bb8;
    if ((pSVar9->klass->_1).element_class == (Il2CppClass *)g_data_057b9bb8[1].fields.Value) {
      pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264e5b;
      piVar4 = (int *)il2cpp_runtime_helper_02305440();
      if (*piVar4 == extraout_EDX) {
        return (int32_t)piVar4;
      }
      goto label_04264e6a;
    }
  }
  pCStack_80 = (CustomLogic_CustomLogicParser_o *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_98 = (System_String_o *)0x4264ff3;
  pCStack_90 = pCVar8;
  pSStack_88 = values;
  pCStack_80 = (CustomLogic_CustomLogicParser_o *)__this_03;
  il2cpp_runtime_helper_01f681a0(pCVar10);
  pSStack_98 = (System_String_o *)0x4264ffe;
  pSVar7 = CustomLogic_CustomLogicParser__GetLineNumberString
                     ((CustomLogic_CustomLogicParser_o *)pSVar9,(pCVar10->fields).Line,method_02);
  pSStack_98 = (System_String_o *)0x4265009;
  str3 = CustomLogic_CustomLogicParser__GetTokenString
                   ((CustomLogic_CustomLogicParser_o *)pSVar9,pCVar10,method_03);
  pSStack_98 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_98 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_98 = (System_String_o *)0x426503b;
  pSVar7 = System_String__Concat_3af7470(str0,pSVar7,str2,str3,(MethodInfo *)0x0);
  pSStack_98 = (System_String_o *)0x426504a;
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_98 = (System_String_o *)0x4265052;
  pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
  pSStack_98 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar9,pSVar7,(MethodInfo *)0x0);
  pSStack_98 = (System_String_o *)0x426506e;
  pCVar8 = (CustomLogic_CustomLogicToken_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_98 = (System_String_o *)0x4265079;
  uStack_a8 = il2cpp_runtime_helper_022b2b10(pSVar9);
  pCVar10 = pCVar8;
  pSStack_a0 = pSVar9;
  pSStack_98 = pSVar7;
  if (g_data_057adc0c == '\0') {
    pCStack_b0 = (CustomLogic_CustomLogicToken_o *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pCStack_b0 = (CustomLogic_CustomLogicToken_o *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((pCVar8 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar8->fields).Type != 0)) {
    return 0;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    pCStack_b0 = (CustomLogic_CustomLogicToken_o *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     (pIVar3 = (pCVar8->fields).Value, pIVar3 == (Il2CppObject *)0x0)) {
    pCStack_b0 = (CustomLogic_CustomLogicToken_o *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar10 = g_data_057b9bb8;
    if ((pIVar3->klass->_1).element_class == (Il2CppClass *)g_data_057b9bb8[1].fields.Value) {
      pCStack_b0 = (CustomLogic_CustomLogicToken_o *)0x4265115;
      piVar5 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar1 = System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar5,MethodInfo_Boolean_ContainsKey);
      return bVar1;
    }
  }
  pCStack_b0 = (CustomLogic_CustomLogicToken_o *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar6 = extraout_RDX;
  pCStack_b0 = pCVar8;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar6 = extraout_RDX_00;
  }
  if (pCVar10 == (CustomLogic_CustomLogicToken_o *)0x0) {
    return (int32_t)"null";
  }
  pIVar3 = (pCVar10->fields).Value;
  if ((pCVar10->fields).Type == 0) {
    if (pIVar3 != (Il2CppObject *)0x0) {
      if ((pIVar3->klass->_1).element_class == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar11 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_b8 = *puVar11;
        SStack_c8.klass = TypeInfo_CustomLogicSymbol;
        SStack_c8.monitor = (void *)0xffffffffffffffff;
        pSVar7 = System_Enum__ToString(&SStack_c8,(MethodInfo *)0x0);
        return (int32_t)pSVar7;
      }
      goto label_042651fb;
    }
  }
  else if (pIVar3 != (Il2CppObject *)0x0) {
    vtableDispatch = pIVar3->klass->vtable[3].methodPtr;
    iVar2 = (*vtableDispatch)(pIVar3,pIVar3->klass->vtable[3].method,uVar6,vtableDispatch);
    return iVar2;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (int32_t)pIVar3[1].klass;
}


// CustomLogic.CustomLogicParser$$IsSymbolIn
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolIn (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, System_Collections_Generic_HashSet_int__o* symbols, const MethodInfo* method);
// 0x4264d80

bool_conflict
CustomLogic_CustomLogicParser__IsSymbolIn
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
          System_Collections_Generic_HashSet_int__o *symbols,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  int32_t *piVar2;
  int *piVar3;
  undefined8 uVar4;
  System_String_o *pSVar5;
  CustomLogic_CustomLogicToken_o *pCVar6;
  System_Exception_o *pSVar7;
  CustomLogic_CustomLogicToken_o *pCVar8;
  System_String_o *str3;
  System_String_o *str0;
  System_String_o *str2;
  undefined4 *puVar9;
  int extraout_EDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  MethodInfo_33D4DF0 **ppMVar10;
  System_String_array *__this_01;
  Il2CppObject *pIVar11;
  System_Enum_o SStack_a0;
  undefined4 uStack_90;
  CustomLogic_CustomLogicToken_o *pCStack_88;
  undefined8 uStack_80;
  System_Exception_o *pSStack_78;
  System_String_o *pSStack_70;
  CustomLogic_CustomLogicToken_o *pCStack_68;
  System_String_array *pSStack_60;
  CustomLogic_CustomLogicParser_o *pCStack_58;
  System_Enum_o SStack_50;
  int iStack_40;
  CustomLogic_CustomLogicToken_o *pCStack_38;
  System_Collections_Generic_HashSet_int__o *pSStack_30;
  
  pCVar6 = token;
  if (g_data_057adc0b == '\0') {
    ppMVar10 = &MethodInfo_Boolean_Contains;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc0b = '\x01';
    __this = (CustomLogic_CustomLogicParser_o *)ppMVar10;
  }
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != 0)) {
    return 0;
  }
  if ((symbols == (System_Collections_Generic_HashSet_int__o *)0x0) ||
     (__this = (CustomLogic_CustomLogicParser_o *)(token->fields).Value,
     __this == (CustomLogic_CustomLogicParser_o *)0x0)) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar6 = g_data_057b9bb8;
    if ((((Il2CppClass *)__this->klass)->_1).element_class == (Il2CppClass *)g_data_057b9bb8[1].fields.Value) {
      piVar2 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar1 = System_Collections_Generic_HashSet_int___Contains(symbols,*piVar2,MethodInfo_Boolean_Contains);
      return bVar1;
    }
  }
  il2cpp_runtime_helper_022b2fd0();
  pCStack_38 = token;
  pSStack_30 = symbols;
  if ((pCVar6 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar6->fields).Type != 0)) {
label_04264e6a:
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264e76;
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264e83;
    symbols = (System_Collections_Generic_HashSet_int__o *)il2cpp_runtime_helper_022b2a40(uVar4,6);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(symbols);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264e9a;
    uVar4 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(symbols,0,uVar4);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(pCVar6);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264eba;
    __this = (CustomLogic_CustomLogicParser_o *)
             CustomLogic_CustomLogicParser__GetLineNumberString(__this,(pCVar6->fields).Line,method_00);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(symbols);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(symbols,1,__this);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(symbols);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264ee9;
    uVar4 = il2cpp_runtime_helper_023445d0(&", got ");
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264ef9;
    __this_01 = (System_String_array *)symbols;
    il2cpp_runtime_helper_01f6dff0(symbols,2,uVar4);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f01;
    pSVar5 = CustomLogic_CustomLogicParser__GetTokenString
                       ((CustomLogic_CustomLogicParser_o *)__this_01,pCVar6,method_01);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(symbols);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(symbols,3,pSVar5);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(symbols);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f30;
    uVar4 = il2cpp_runtime_helper_023445d0(&", expected ");
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(symbols,4,uVar4);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f4c;
    SStack_50.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    SStack_50.monitor = (void *)0xffffffffffffffff;
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f67;
    iStack_40 = extraout_EDX;
    pSVar5 = System_Enum__ToString(&SStack_50,(MethodInfo *)0x0);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(symbols);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(symbols,5,pSVar5);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f8c;
    pCVar6 = (CustomLogic_CustomLogicToken_o *)
             System_String__Concat_3af7570((System_String_array *)symbols,(MethodInfo *)0x0);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264f9b;
    uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264fa3;
    pSVar7 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar4);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar7,(System_String_o *)pCVar6,(MethodInfo *)0x0);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264fbf;
    pCVar8 = (CustomLogic_CustomLogicToken_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar7 = (System_Exception_o *)(pCVar6->fields).Value;
    pCVar8 = pCVar6;
    if (pSVar7 == (System_Exception_o *)0x0) goto label_04264fca;
    pCVar8 = g_data_057b9bb8;
    if ((pSVar7->klass->_1).element_class == (Il2CppClass *)g_data_057b9bb8[1].fields.Value) {
      pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264e5b;
      piVar3 = (int *)il2cpp_runtime_helper_02305440();
      if (*piVar3 == extraout_EDX) {
        return (bool_conflict)piVar3;
      }
      goto label_04264e6a;
    }
  }
  pCStack_58 = (CustomLogic_CustomLogicParser_o *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_70 = (System_String_o *)0x4264ff3;
  pCStack_68 = pCVar6;
  pSStack_60 = (System_String_array *)symbols;
  pCStack_58 = __this;
  il2cpp_runtime_helper_01f681a0(pCVar8);
  pSStack_70 = (System_String_o *)0x4264ffe;
  pSVar5 = CustomLogic_CustomLogicParser__GetLineNumberString
                     ((CustomLogic_CustomLogicParser_o *)pSVar7,(pCVar8->fields).Line,method_02);
  pSStack_70 = (System_String_o *)0x4265009;
  str3 = CustomLogic_CustomLogicParser__GetTokenString
                   ((CustomLogic_CustomLogicParser_o *)pSVar7,pCVar8,method_03);
  pSStack_70 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_70 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_70 = (System_String_o *)0x426503b;
  pSVar5 = System_String__Concat_3af7470(str0,pSVar5,str2,str3,(MethodInfo *)0x0);
  pSStack_70 = (System_String_o *)0x426504a;
  uVar4 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_70 = (System_String_o *)0x4265052;
  pSVar7 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar4);
  pSStack_70 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar7,pSVar5,(MethodInfo *)0x0);
  pSStack_70 = (System_String_o *)0x426506e;
  pCVar8 = (CustomLogic_CustomLogicToken_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_70 = (System_String_o *)0x4265079;
  uStack_80 = il2cpp_runtime_helper_022b2b10(pSVar7);
  pCVar6 = pCVar8;
  pSStack_78 = pSVar7;
  pSStack_70 = pSVar5;
  if (g_data_057adc0c == '\0') {
    pCStack_88 = (CustomLogic_CustomLogicToken_o *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pCStack_88 = (CustomLogic_CustomLogicToken_o *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((pCVar8 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar8->fields).Type != 0)) {
    return 0;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    pCStack_88 = (CustomLogic_CustomLogicToken_o *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     (pIVar11 = (pCVar8->fields).Value, pIVar11 == (Il2CppObject *)0x0)) {
    pCStack_88 = (CustomLogic_CustomLogicToken_o *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar6 = g_data_057b9bb8;
    if ((pIVar11->klass->_1).element_class == (Il2CppClass *)g_data_057b9bb8[1].fields.Value) {
      pCStack_88 = (CustomLogic_CustomLogicToken_o *)0x4265115;
      piVar2 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar1 = System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar2,MethodInfo_Boolean_ContainsKey);
      return bVar1;
    }
  }
  pCStack_88 = (CustomLogic_CustomLogicToken_o *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar4 = extraout_RDX;
  pCStack_88 = pCVar8;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar4 = extraout_RDX_00;
  }
  if (pCVar6 == (CustomLogic_CustomLogicToken_o *)0x0) {
    return (bool_conflict)"null";
  }
  pIVar11 = (pCVar6->fields).Value;
  if ((pCVar6->fields).Type == 0) {
    if (pIVar11 != (Il2CppObject *)0x0) {
      if ((pIVar11->klass->_1).element_class == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar9 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_90 = *puVar9;
        SStack_a0.klass = TypeInfo_CustomLogicSymbol;
        SStack_a0.monitor = (void *)0xffffffffffffffff;
        pSVar5 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
        return (bool_conflict)pSVar5;
      }
      goto label_042651fb;
    }
  }
  else if (pIVar11 != (Il2CppObject *)0x0) {
    vtableDispatch = pIVar11->klass->vtable[3].methodPtr;
    bVar1 = (*vtableDispatch)(pIVar11,pIVar11->klass->vtable[3].method,uVar4,vtableDispatch);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)pIVar11[1].klass;
}


// CustomLogic.CustomLogicParser$$IsSymbolBinop
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolBinop (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x4265080

bool_conflict
CustomLogic_CustomLogicParser__IsSymbolBinop
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  int32_t *piVar2;
  undefined4 *puVar3;
  System_String_o *pSVar4;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 uVar5;
  CustomLogic_CustomLogicToken_o *pCVar6;
  Il2CppObject *pIVar7;
  System_Enum_o SStack_38;
  undefined4 uStack_28;
  CustomLogic_CustomLogicToken_o *pCStack_20;
  
  pCVar6 = token;
  if (g_data_057adc0c == '\0') {
    pCStack_20 = (CustomLogic_CustomLogicToken_o *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pCStack_20 = (CustomLogic_CustomLogicToken_o *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != 0)) {
    return 0;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    pCStack_20 = (CustomLogic_CustomLogicToken_o *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     (pIVar7 = (token->fields).Value, pIVar7 == (Il2CppObject *)0x0)) {
    pCStack_20 = (CustomLogic_CustomLogicToken_o *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar6 = g_data_057b9bb8;
    if ((pIVar7->klass->_1).element_class == (Il2CppClass *)g_data_057b9bb8[1].fields.Value) {
      pCStack_20 = (CustomLogic_CustomLogicToken_o *)0x4265115;
      piVar2 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar1 = System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar2,MethodInfo_Boolean_ContainsKey);
      return bVar1;
    }
  }
  pCStack_20 = (CustomLogic_CustomLogicToken_o *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar5 = extraout_RDX;
  pCStack_20 = token;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar5 = extraout_RDX_00;
  }
  if (pCVar6 == (CustomLogic_CustomLogicToken_o *)0x0) {
    return (bool_conflict)"null";
  }
  pIVar7 = (pCVar6->fields).Value;
  if ((pCVar6->fields).Type == 0) {
    if (pIVar7 != (Il2CppObject *)0x0) {
      if ((pIVar7->klass->_1).element_class == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar3 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_28 = *puVar3;
        SStack_38.klass = TypeInfo_CustomLogicSymbol;
        SStack_38.monitor = (void *)0xffffffffffffffff;
        pSVar4 = System_Enum__ToString(&SStack_38,(MethodInfo *)0x0);
        return (bool_conflict)pSVar4;
      }
      goto label_042651fb;
    }
  }
  else if (pIVar7 != (Il2CppObject *)0x0) {
    vtableDispatch = pIVar7->klass->vtable[3].methodPtr;
    bVar1 = (*vtableDispatch)(pIVar7,pIVar7->klass->vtable[3].method,uVar5,vtableDispatch);
    return bVar1;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)pIVar7[1].klass;
}


// CustomLogic.CustomLogicParser$$IsSymbolValue
// il2cpp: bool CustomLogic_CustomLogicParser__IsSymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t symbolValue, const MethodInfo* method);
// 0x4264540

bool_conflict
CustomLogic_CustomLogicParser__IsSymbolValue
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,int32_t symbolValue,
          MethodInfo *method)

{
  char *pcVar1;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  code *vtableDispatch;
  undefined1 *puVar2;
  bool_conflict bVar3;
  uint uVar4;
  int *piVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  System_Exception_o *__this_01;
  ulong uVar10;
  System_Int32_array *pSVar11;
  long lVar12;
  MethodInfo_35FD6C0 *pMVar13;
  long lVar14;
  MethodInfo_35FD6C0 *pMVar15;
  Il2CppObject *pIVar16;
  int32_t *piVar17;
  System_String_array *pSVar18;
  System_Exception_o *pSVar19;
  MethodInfo_35FD6C0 *pMVar20;
  System_String_o *pSVar21;
  System_String_o *str0;
  System_String_o *str2;
  undefined4 *puVar22;
  int extraout_EDX;
  ulong extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  Il2CppObject *unaff_RBX;
  MethodInfo_35FD6C0 *pMVar23;
  int index;
  MethodInfo_35FD6C0 *pMVar24;
  Il2CppClass *__this_02;
  System_Collections_Generic_List_object__o *pSVar25;
  CustomLogic_CustomLogicParser_o *pCVar26;
  long *plVar27;
  MethodInfo *in_R8;
  undefined8 *unaff_R12;
  ulong uVar28;
  undefined8 *unaff_R13;
  uint uVar29;
  ulong unaff_R15;
  ulong uVar30;
  System_String_c *__this_03;
  undefined1 auVar31 [16];
  System_Enum_o SStack_1b0;
  undefined4 uStack_1a0;
  MethodInfo_35FD6C0 *pMStack_198;
  undefined8 uStack_190;
  System_Exception_o *pSStack_188;
  System_String_o *pSStack_180;
  MethodInfo_35FD6C0 *pMStack_178;
  System_String_array *pSStack_170;
  CustomLogic_CustomLogicParser_o *pCStack_168;
  System_Enum_o SStack_160;
  int iStack_150;
  MethodInfo_35FD6C0 *pMStack_148;
  System_String_array *pSStack_140;
  System_String_c *pSStack_138;
  MethodInfo_35FD6C0 *pMStack_130;
  undefined8 uStack_128;
  MethodInfo_35FD6C0 *pMStack_120;
  MethodInfo_35FD6C0 *pMStack_118;
  undefined8 uStack_110;
  long lStack_108;
  ulong uStack_100;
  ulong uStack_f8;
  System_String_c *pSStack_f0;
  undefined1 auStack_dc [84];
  ulong uStack_88;
  System_Exception_o *pSStack_80;
  System_Enum_o SStack_78;
  int iStack_68;
  Il2CppObject *pIStack_60;
  Il2CppObject *pIStack_58;
  ulong uStack_50;
  MethodInfo_35FD6C0 *pMStack_48;
  undefined8 uStack_40;
  
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != 0)) {
    return 0;
  }
  pIVar16 = (token->fields).Value;
  if (pIVar16 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    token = (CustomLogic_CustomLogicToken_o *)g_data_057b9bb8;
    if ((pIVar16->klass->_1).element_class == (g_data_057b9bb8->field8_0x40).genericMethod) {
      piVar5 = (int *)il2cpp_runtime_helper_02305440();
      return (bool_conflict)CONCAT71((int7)((ulong)piVar5 >> 8),*piVar5 == symbolValue);
    }
  }
  uStack_40 = il2cpp_runtime_helper_022b2fd0();
  pMVar24 = (MethodInfo_35FD6C0 *)((ulong)token & 0xffffffff);
  pMVar20 = (MethodInfo_35FD6C0 *)token;
  if (g_data_057adc09 == '\0') {
    pMStack_48 = (MethodInfo_35FD6C0 *)0x42645b5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMStack_48 = (MethodInfo_35FD6C0 *)0x42645c1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc09 = '\x01';
  }
  __this_02 = pIVar16[1].klass;
  pCVar26 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (__this_02 != (Il2CppClass *)0x0) {
    unaff_R15 = 0;
    unaff_R12 = &MethodInfo_CustomLogicToken_get_Item;
    unaff_R13 = &g_data_057b9b70;
    if ((int)token < *(int *)&(__this_02->_1).namespaze) {
      do {
        pMStack_48 = (MethodInfo_35FD6C0 *)0x4264620;
        pMVar20 = pMVar24;
        pIVar6 = System_Collections_Generic_List_object___get_Item
                           ((System_Collections_Generic_List_object__o *)__this_02,(int)pMVar24,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar6 != (Il2CppObject *)0x0) && (unaff_RBX = pIVar6, *(int *)&pIVar6[1].klass == 0)) {
          pCVar26 = pIVar6[1].monitor;
          if (pCVar26 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0426469e;
          pMVar20 = g_data_057b9bb8;
          if ((pCVar26->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
          goto label_042646a3;
          pMStack_48 = (MethodInfo_35FD6C0 *)0x426464d;
          piVar5 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar5 == 0xb) {
            unaff_R15 = (ulong)((int)unaff_R15 + 1);
          }
          else if (*(int *)&pIVar6[1].klass == 0) {
            pCVar26 = pIVar6[1].monitor;
            if (pCVar26 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0426469e;
            pMVar20 = g_data_057b9bb8;
            if ((pCVar26->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_042646a3;
            pMStack_48 = (MethodInfo_35FD6C0 *)0x4264677;
            piVar5 = (int *)il2cpp_runtime_helper_02305440();
            if ((*piVar5 == 0xc) && (uVar29 = (int)unaff_R15 - 1, unaff_R15 = (ulong)uVar29, uVar29 == 0))
            goto label_0426468d;
          }
        }
        uVar29 = (int)pMVar24 + 1;
        pMVar24 = (MethodInfo_35FD6C0 *)(ulong)uVar29;
        __this_02 = pIVar16[1].klass;
        pCVar26 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (__this_02 == (Il2CppClass *)0x0) goto label_0426469e;
      } while ((int)uVar29 < *(int *)&(__this_02->_1).namespaze);
    }
    pMVar24 = (MethodInfo_35FD6C0 *)&g_data_ffffffff;
label_0426468d:
    return (bool_conflict)pMVar24;
  }
label_0426469e:
  pMStack_48 = (MethodInfo_35FD6C0 *)0x42646a3;
  il2cpp_runtime_helper_022b2c90();
label_042646a3:
  pMStack_48 = (MethodInfo_35FD6C0 *)0x42646a8;
  bVar3 = il2cpp_runtime_helper_022b2fd0();
  uVar30 = extraout_RDX & 0xffffffff;
  iStack_68 = (int)extraout_RDX;
  if ((pMVar20 != (MethodInfo_35FD6C0 *)0x0) && (*(int *)&pMVar20->invoker_method == iStack_68)) {
    return bVar3;
  }
  pSStack_80 = (System_Exception_o *)0x42646e5;
  pIStack_60 = unaff_RBX;
  pIStack_58 = pIVar16;
  uStack_50 = unaff_R15;
  pMStack_48 = pMVar24;
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
  pSStack_80 = (System_Exception_o *)0x42646f2;
  pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar7,6);
  pSStack_80 = (System_Exception_o *)0x42646fd;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_80 = (System_Exception_o *)0x4264709;
  uVar7 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_80 = (System_Exception_o *)0x4264716;
  il2cpp_runtime_helper_01f6dff0(pSVar8,0,uVar7);
  pSStack_80 = (System_Exception_o *)0x426471e;
  il2cpp_runtime_helper_01f681a0(pMVar20);
  pSStack_80 = (System_Exception_o *)0x4264729;
  pSVar9 = CustomLogic_CustomLogicParser__GetLineNumberString(pCVar26,*(int32_t *)&pMVar20->klass,method_00);
  pSStack_80 = (System_Exception_o *)0x4264734;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_80 = (System_Exception_o *)0x4264744;
  il2cpp_runtime_helper_01f6dff0(pSVar8,1,pSVar9);
  pSStack_80 = (System_Exception_o *)0x426474c;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_80 = (System_Exception_o *)0x4264758;
  uVar7 = il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_80 = (System_Exception_o *)0x4264768;
  pSVar18 = pSVar8;
  il2cpp_runtime_helper_01f6dff0(pSVar8,2,uVar7);
  pSStack_80 = (System_Exception_o *)0x4264770;
  pSVar9 = CustomLogic_CustomLogicParser__GetTokenString
                     ((CustomLogic_CustomLogicParser_o *)pSVar18,(CustomLogic_CustomLogicToken_o *)pMVar20,
                      method_01);
  pSStack_80 = (System_Exception_o *)0x426477b;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_80 = (System_Exception_o *)0x426478b;
  il2cpp_runtime_helper_01f6dff0(pSVar8,3,pSVar9);
  pSStack_80 = (System_Exception_o *)0x4264793;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_80 = (System_Exception_o *)0x426479f;
  uVar7 = il2cpp_runtime_helper_023445d0(&", expected ");
  pSStack_80 = (System_Exception_o *)0x42647af;
  il2cpp_runtime_helper_01f6dff0(pSVar8,4,uVar7);
  pSStack_80 = (System_Exception_o *)0x42647bb;
  SStack_78.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTokenType);
  SStack_78.monitor = (void *)0xffffffffffffffff;
  pSStack_80 = (System_Exception_o *)0x42647d7;
  pSVar9 = System_Enum__ToString(&SStack_78,(MethodInfo *)0x0);
  pSStack_80 = (System_Exception_o *)0x42647e2;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_80 = (System_Exception_o *)0x42647f2;
  il2cpp_runtime_helper_01f6dff0(pSVar8,5,pSVar9);
  pSStack_80 = (System_Exception_o *)0x42647fc;
  pSVar9 = System_String__Concat_3af7570(pSVar8,(MethodInfo *)0x0);
  pSStack_80 = (System_Exception_o *)0x426480b;
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_80 = (System_Exception_o *)0x4264813;
  __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
  pSStack_80 = (System_Exception_o *)0x4264823;
  System_Exception___ctor_3cf6120(__this_01,pSVar9,(MethodInfo *)0x0);
  pSStack_80 = (System_Exception_o *)0x426482f;
  uVar10 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertTokenType);
  pSStack_80 = (System_Exception_o *)0x426483a;
  pSVar19 = __this_01;
  auVar31 = il2cpp_runtime_helper_022b2b10();
  auStack_dc._44_8_ = auVar31._0_8_;
  uVar28 = auVar31._8_8_ & 0xffffffff;
  pMVar20 = (MethodInfo_35FD6C0 *)(uVar10 & 0xffffffff);
  auStack_dc._52_8_ = pSVar9;
  auStack_dc._60_8_ = unaff_R12;
  auStack_dc._68_8_ = unaff_R13;
  auStack_dc._76_8_ = pSVar8;
  uStack_88 = uVar30;
  pSStack_80 = __this_01;
  if (g_data_057adc08 == '\0') {
    auStack_dc._36_8_ = 0x4264868;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStack_dc._36_8_ = 0x4264874;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ToArray);
    auStack_dc._36_8_ = 0x4264880;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    auStack_dc._36_8_ = 0x426488c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    auStack_dc._36_8_ = 0x4264898;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    g_data_057adc08 = '\x01';
  }
  auStack_dc._36_8_ = 0x42648ae;
  auStack_dc._44_8_ = il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  auStack_dc._36_8_ = 0x42648c4;
  pMVar24 = MethodInfo_List_1_System_Int32;
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_List_int__o *)auStack_dc._44_8_,MethodInfo_List_1_System_Int32);
  uVar29 = auVar31._8_4_;
  if ((int)uVar10 < (int)uVar29) {
    if ((System_String_c *)auStack_dc._44_8_ == (System_String_c *)0x0) {
      uVar30 = 0;
      pSVar25 = (System_Collections_Generic_List_object__o *)(pSVar19->fields)._className;
      pSVar21 = pSVar9;
      uVar10 = 0;
      if (pSVar25 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_03 = (System_String_c *)0x0;
      }
      else {
        do {
          uVar30 = uVar10;
          auStack_dc._36_8_ = 0x4264934;
          pMVar24 = pMVar20;
          pSVar9 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item(pSVar25,(int)pMVar20,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar9 != (System_String_o *)0x0) && (pSVar21 = pSVar9, (pSVar9->fields)._stringLength == 0)) {
            __this_03 = pSVar9[1].klass;
            if (__this_03 == (System_String_c *)0x0) break;
            pMVar24 = g_data_057b9bb8;
            if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264b82;
            auStack_dc._36_8_ = 0x4264970;
            piVar5 = (int *)il2cpp_runtime_helper_02305440();
            uVar4 = (int)uVar30 + (uint)(*piVar5 == 0xb);
            uVar30 = (ulong)uVar4;
            if ((pSVar9->fields)._stringLength == 0) {
              __this_03 = pSVar9[1].klass;
              if (__this_03 == (System_String_c *)0x0) break;
              pMVar24 = g_data_057b9bb8;
              if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
              goto label_04264b82;
              auStack_dc._36_8_ = 0x42649af;
              piVar5 = (int *)il2cpp_runtime_helper_02305440();
              uVar4 = uVar4 - (*piVar5 == 0xc);
              uVar30 = (ulong)uVar4;
              if ((pSVar9->fields)._stringLength == 0) {
                __this_03 = pSVar9[1].klass;
                if (__this_03 == (System_String_c *)0x0) break;
                pMVar24 = g_data_057b9bb8;
                if (*(void **)((long)(__this_03->_1).image + 0x40) !=
                    (g_data_057b9bb8->field8_0x40).genericMethod) goto label_04264b82;
                auStack_dc._36_8_ = 0x42649f2;
                piVar5 = (int *)il2cpp_runtime_helper_02305440();
                if ((uVar4 == 0) && (*piVar5 == 0x25)) break;
              }
            }
          }
          pSVar9 = pSVar21;
          uVar4 = (int)pMVar20 + 1;
          pMVar20 = (MethodInfo_35FD6C0 *)(ulong)uVar4;
          if (uVar29 == uVar4) goto label_04264b57;
          pSVar25 = (System_Collections_Generic_List_object__o *)(pSVar19->fields)._className;
          __this_03 = (System_String_c *)0x0;
          pSVar21 = pSVar9;
          uVar10 = uVar30;
        } while (pSVar25 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
    else {
      uVar30 = 0;
      pSVar25 = (System_Collections_Generic_List_object__o *)(pSVar19->fields)._className;
      if (pSVar25 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_03 = (System_String_c *)0x0;
      }
      else {
        do {
          index = (int)pMVar20;
          auStack_dc._36_8_ = 0x4264a54;
          pMVar24 = pMVar20;
          pSVar21 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar25,index,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar21 != (System_String_o *)0x0) && (pSVar9 = pSVar21, (pSVar21->fields)._stringLength == 0))
          {
            __this_03 = pSVar21[1].klass;
            if (__this_03 == (System_String_c *)0x0) break;
            pMVar24 = g_data_057b9bb8;
            if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264b82;
            auStack_dc._36_8_ = 0x4264a90;
            piVar5 = (int *)il2cpp_runtime_helper_02305440();
            uVar4 = (int)uVar30 + (uint)(*piVar5 == 0xb);
            uVar30 = (ulong)uVar4;
            if ((pSVar21->fields)._stringLength == 0) {
              __this_03 = pSVar21[1].klass;
              if (__this_03 == (System_String_c *)0x0) break;
              pMVar24 = g_data_057b9bb8;
              if (*(void **)((long)(__this_03->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
              goto label_04264b82;
              auStack_dc._36_8_ = 0x4264acf;
              piVar5 = (int *)il2cpp_runtime_helper_02305440();
              uVar4 = uVar4 - (*piVar5 == 0xc);
              uVar30 = (ulong)uVar4;
              if ((pSVar21->fields)._stringLength == 0) {
                __this_03 = pSVar21[1].klass;
                if (__this_03 == (System_String_c *)0x0) break;
                pMVar24 = g_data_057b9bb8;
                if (*(void **)((long)(__this_03->_1).image + 0x40) !=
                    (g_data_057b9bb8->field8_0x40).genericMethod) goto label_04264b82;
                auStack_dc._36_8_ = 0x4264b0e;
                piVar5 = (int *)il2cpp_runtime_helper_02305440();
                lVar12 = MethodInfo_Void_Add;
                if ((uVar4 == 0) && (*piVar5 == 0x25)) {
                  puVar2 = (undefined1 *)((long)&((Il2CppClass_1 *)auStack_dc._44_8_)->namespaze + 4);
                  *(int *)puVar2 = *(int *)puVar2 + 1;
                  pcVar1 = ((Il2CppClass_1 *)auStack_dc._44_8_)->name;
                  __this_03 = (System_String_c *)auStack_dc._44_8_;
                  if (pcVar1 == (char *)0x0) break;
                  uVar4 = *(uint *)&((Il2CppClass_1 *)auStack_dc._44_8_)->namespaze;
                  if (uVar4 < *(uint *)(pcVar1 + 0x18)) {
                    *(uint *)&((Il2CppClass_1 *)auStack_dc._44_8_)->namespaze = uVar4 + 1;
                    *(int *)(pcVar1 + (long)(int)uVar4 * 4 + 0x20) = index;
                    pMVar20 = pMVar24;
                  }
                  else {
                    auStack_dc._36_8_ = 0x4264a1f;
                    System_Collections_Generic_List_int___AddWithResize
                              ((System_Collections_Generic_List_int__o *)auStack_dc._44_8_,index,
                               *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar30 = 0;
                  pMVar24 = pMVar20;
                }
              }
            }
          }
          pMVar20 = (MethodInfo_35FD6C0 *)(ulong)(index + 1U);
          if (uVar29 == index + 1U) goto label_04264b57;
          pSVar25 = (System_Collections_Generic_List_object__o *)(pSVar19->fields)._className;
          __this_03 = (System_String_c *)0x0;
        } while (pSVar25 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
  }
  else {
label_04264b57:
    __this_03 = (System_String_c *)0x0;
    if ((System_String_c *)auStack_dc._44_8_ != (System_String_c *)0x0) {
      pSVar11 = System_Collections_Generic_List_int___ToArray
                          ((System_Collections_Generic_List_int__o *)auStack_dc._44_8_,MethodInfo_Int32_ToArray);
      return (bool_conflict)pSVar11;
    }
  }
  auStack_dc._36_8_ = 0x4264b82;
  il2cpp_runtime_helper_022b2c90();
label_04264b82:
  uVar29 = (uint)pMVar24;
  auStack_dc._36_8_ = 0x4264b87;
  il2cpp_runtime_helper_022b2fd0();
  method_02 = extraout_RDX_00;
  auStack_dc._4_8_ = pSVar9;
  auStack_dc._12_8_ = uVar28;
  auStack_dc._20_8_ = pSVar19;
  auStack_dc._28_8_ = uVar30;
  auStack_dc._36_8_ = pMVar20;
  if (g_data_057adc05 == '\0') {
    pSStack_f0 = (System_String_c *)0x4264bb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057adc05 = '\x01';
    method_02 = extraout_RDX_01;
  }
  pSStack_f0 = (System_String_c *)0x4264bc9;
  uVar4 = CustomLogic_CustomLogicParser__FindSemicolon
                    ((CustomLogic_CustomLogicParser_o *)__this_03,uVar29,method_02);
  uVar30 = (ulong)uVar4;
  pSStack_f0 = (System_String_c *)0x4264be0;
  lVar12 = il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  auStack_dc._0_4_ = uVar4 + 1;
  pMVar24 = (MethodInfo_35FD6C0 *)auStack_dc;
  pSStack_f0 = (System_String_c *)0x4264c01;
  pMVar15 = g_data_057b9bb8;
  pMVar13 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_02304f30();
  if (lVar12 != 0) {
    if (pMVar13 == (MethodInfo_35FD6C0 *)0x0) {
label_04264c26:
      if (*(int *)(lVar12 + 0x18) != 0) {
        *(MethodInfo_35FD6C0 **)(lVar12 + 0x20) = pMVar13;
        pSStack_f0 = (System_String_c *)0x4264c3c;
        il2cpp_runtime_helper_022b4080(lVar12 + 0x20);
        uVar30 = (ulong)(uVar4 - 1);
        pSStack_f0 = (System_String_c *)0x4264c50;
        pMVar13 = (MethodInfo_35FD6C0 *)
                  CustomLogic_CustomLogicParser__ParseExpression
                            ((CustomLogic_CustomLogicParser_o *)__this_03,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar29,uVar4 - 1,in_R8);
        if (pMVar13 != (MethodInfo_35FD6C0 *)0x0) {
          pSStack_f0 = (System_String_c *)0x4264c67;
          lVar14 = il2cpp_runtime_helper_023051f0(pMVar13);
          if (lVar14 == 0) goto label_04264c9a;
        }
        if (1 < *(uint *)(lVar12 + 0x18)) {
          *(MethodInfo_35FD6C0 **)(lVar12 + 0x28) = pMVar13;
          pSStack_f0 = (System_String_c *)0x4264c85;
          il2cpp_runtime_helper_022b4080(lVar12 + 0x28,pMVar13);
          return (bool_conflict)lVar12;
        }
      }
      pSStack_f0 = (System_String_c *)0x4264c9a;
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pSStack_f0 = (System_String_c *)0x4264c21;
      lVar14 = il2cpp_runtime_helper_023051f0(pMVar13);
      if (lVar14 != 0) goto label_04264c26;
    }
label_04264c9a:
    pSStack_f0 = (System_String_c *)0x4264c9f;
    pMVar15 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_0231b270();
    pMVar24 = (MethodInfo_35FD6C0 *)0x0;
    pSStack_f0 = (System_String_c *)0x4264ca9;
    il2cpp_runtime_helper_022b2b10();
    pMVar20 = pMVar13;
  }
  pSStack_f0 = (System_String_c *)0x4264cae;
  uStack_110 = il2cpp_runtime_helper_022b2c90();
  pMVar23 = (MethodInfo_35FD6C0 *)((ulong)pMVar24 & 0xffffffff);
  pMVar13 = pMVar24;
  lStack_108 = lVar12;
  uStack_100 = uVar30;
  uStack_f8 = (ulong)uVar29;
  pSStack_f0 = __this_03;
  if (g_data_057adc0a == '\0') {
    pMStack_118 = (MethodInfo_35FD6C0 *)0x4264cd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMStack_118 = (MethodInfo_35FD6C0 *)0x4264cde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc0a = '\x01';
  }
  pSVar25 = (System_Collections_Generic_List_object__o *)pMVar15->invoker_method;
  pCVar26 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (pSVar25 != (System_Collections_Generic_List_object__o *)0x0) {
    __this_03 = (System_String_c *)&MethodInfo_CustomLogicToken_get_Item;
    if ((int)pMVar24 < (pSVar25->fields)._size) {
      do {
        pMStack_118 = (MethodInfo_35FD6C0 *)0x4264d2b;
        pMVar13 = pMVar23;
        pIVar16 = System_Collections_Generic_List_object___get_Item(pSVar25,(int)pMVar23,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar16 != (Il2CppObject *)0x0) && (*(int *)&pIVar16[1].klass == 0)) {
          pCVar26 = pIVar16[1].monitor;
          if (pCVar26 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_04264d70;
          pMVar13 = g_data_057b9bb8;
          if ((pCVar26->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
          goto label_04264d75;
          pMStack_118 = (MethodInfo_35FD6C0 *)0x4264d56;
          piVar5 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar5 == 0x23) goto label_04264d62;
        }
        uVar29 = (int)pMVar23 + 1;
        pMVar23 = (MethodInfo_35FD6C0 *)(ulong)uVar29;
        pSVar25 = (System_Collections_Generic_List_object__o *)pMVar15->invoker_method;
        pCVar26 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (pSVar25 == (System_Collections_Generic_List_object__o *)0x0) goto label_04264d70;
      } while ((int)uVar29 < (pSVar25->fields)._size);
    }
    pMVar23 = (MethodInfo_35FD6C0 *)&g_data_ffffffff;
label_04264d62:
    return (bool_conflict)pMVar23;
  }
label_04264d70:
  pMStack_118 = (MethodInfo_35FD6C0 *)0x4264d75;
  il2cpp_runtime_helper_022b2c90();
label_04264d75:
  pMStack_118 = (MethodInfo_35FD6C0 *)0x4264d7a;
  auVar31 = il2cpp_runtime_helper_022b2fd0();
  pSVar18 = auVar31._8_8_;
  uStack_128 = auVar31._0_8_;
  pMVar24 = pMVar13;
  pMStack_120 = pMVar23;
  pMStack_118 = pMVar15;
  if (g_data_057adc0b == '\0') {
    pCVar26 = (CustomLogic_CustomLogicParser_o *)&MethodInfo_Boolean_Contains;
    pMStack_130 = (MethodInfo_35FD6C0 *)0x4264d9f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc0b = '\x01';
  }
  if ((pMVar13 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar13->invoker_method != 0)) {
    return 0;
  }
  if ((pSVar18 == (System_String_array *)0x0) ||
     (pCVar26 = (CustomLogic_CustomLogicParser_o *)pMVar13->name,
     pCVar26 == (CustomLogic_CustomLogicParser_o *)0x0)) {
    pMStack_130 = (MethodInfo_35FD6C0 *)0x4264e06;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar24 = g_data_057b9bb8;
    if ((pCVar26->klass->_1).element_class == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pMStack_130 = (MethodInfo_35FD6C0 *)0x4264de6;
      piVar17 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar3 = System_Collections_Generic_HashSet_int___Contains
                        ((System_Collections_Generic_HashSet_int__o *)pSVar18,*piVar17,MethodInfo_Boolean_Contains);
      return bVar3;
    }
  }
  pMStack_130 = (MethodInfo_35FD6C0 *)0x4264e0b;
  il2cpp_runtime_helper_022b2fd0();
  pMStack_148 = pMVar13;
  pSStack_140 = pSVar18;
  pSStack_138 = __this_03;
  pMStack_130 = pMVar20;
  if ((pMVar24 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar24->invoker_method != 0)) {
label_04264e6a:
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264e76;
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264e83;
    pSVar18 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar7,6);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264e9a;
    uVar7 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(pSVar18,0,uVar7);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(pMVar24);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264eba;
    pCVar26 = (CustomLogic_CustomLogicParser_o *)
              CustomLogic_CustomLogicParser__GetLineNumberString
                        (pCVar26,*(int32_t *)&pMVar24->klass,method_03);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(pSVar18,1,pCVar26);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264ee9;
    uVar7 = il2cpp_runtime_helper_023445d0(&", got ");
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264ef9;
    pSVar8 = pSVar18;
    il2cpp_runtime_helper_01f6dff0(pSVar18,2,uVar7);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f01;
    pSVar9 = CustomLogic_CustomLogicParser__GetTokenString
                       ((CustomLogic_CustomLogicParser_o *)pSVar8,(CustomLogic_CustomLogicToken_o *)pMVar24,
                        method_04);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(pSVar18,3,pSVar9);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f30;
    uVar7 = il2cpp_runtime_helper_023445d0(&", expected ");
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(pSVar18,4,uVar7);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f4c;
    SStack_160.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    SStack_160.monitor = (void *)0xffffffffffffffff;
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f67;
    iStack_150 = extraout_EDX;
    pSVar9 = System_Enum__ToString(&SStack_160,(MethodInfo *)0x0);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(pSVar18);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(pSVar18,5,pSVar9);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f8c;
    pMVar24 = (MethodInfo_35FD6C0 *)System_String__Concat_3af7570(pSVar18,(MethodInfo *)0x0);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264f9b;
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264fa3;
    pSVar19 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar19,(System_String_o *)pMVar24,(MethodInfo *)0x0);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264fbf;
    pMVar20 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar19 = (System_Exception_o *)pMVar24->name;
    pMVar20 = pMVar24;
    if (pSVar19 == (System_Exception_o *)0x0) goto label_04264fca;
    pMVar20 = g_data_057b9bb8;
    if ((pSVar19->klass->_1).element_class == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264e5b;
      piVar5 = (int *)il2cpp_runtime_helper_02305440();
      if (*piVar5 == extraout_EDX) {
        return (bool_conflict)piVar5;
      }
      goto label_04264e6a;
    }
  }
  pCStack_168 = (CustomLogic_CustomLogicParser_o *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_180 = (System_String_o *)0x4264ff3;
  pMStack_178 = pMVar24;
  pSStack_170 = pSVar18;
  pCStack_168 = pCVar26;
  il2cpp_runtime_helper_01f681a0(pMVar20);
  pSStack_180 = (System_String_o *)0x4264ffe;
  pSVar9 = CustomLogic_CustomLogicParser__GetLineNumberString
                     ((CustomLogic_CustomLogicParser_o *)pSVar19,*(int32_t *)&pMVar20->klass,method_05);
  pSStack_180 = (System_String_o *)0x4265009;
  pSVar21 = CustomLogic_CustomLogicParser__GetTokenString
                      ((CustomLogic_CustomLogicParser_o *)pSVar19,(CustomLogic_CustomLogicToken_o *)pMVar20,
                       method_06);
  pSStack_180 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_180 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_180 = (System_String_o *)0x426503b;
  pSVar9 = System_String__Concat_3af7470(str0,pSVar9,str2,pSVar21,(MethodInfo *)0x0);
  pSStack_180 = (System_String_o *)0x426504a;
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_180 = (System_String_o *)0x4265052;
  pSVar19 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
  pSStack_180 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar19,pSVar9,(MethodInfo *)0x0);
  pSStack_180 = (System_String_o *)0x426506e;
  pMVar24 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_180 = (System_String_o *)0x4265079;
  uStack_190 = il2cpp_runtime_helper_022b2b10(pSVar19);
  pMVar20 = pMVar24;
  pSStack_188 = pSVar19;
  pSStack_180 = pSVar9;
  if (g_data_057adc0c == '\0') {
    pMStack_198 = (MethodInfo_35FD6C0 *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pMStack_198 = (MethodInfo_35FD6C0 *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((pMVar24 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar24->invoker_method != 0)) {
    return 0;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    pMStack_198 = (MethodInfo_35FD6C0 *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     ((long *)pMVar24->name == (long *)0x0)) {
    pMStack_198 = (MethodInfo_35FD6C0 *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar20 = g_data_057b9bb8;
    if (*(void **)(*(long *)pMVar24->name + 0x40) == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pMStack_198 = (MethodInfo_35FD6C0 *)0x4265115;
      piVar17 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar3 = System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar17,MethodInfo_Boolean_ContainsKey);
      return bVar3;
    }
  }
  pMStack_198 = (MethodInfo_35FD6C0 *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar7 = extraout_RDX_02;
  pMStack_198 = pMVar24;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar7 = extraout_RDX_03;
  }
  if (pMVar20 == (MethodInfo_35FD6C0 *)0x0) {
    return (bool_conflict)"null";
  }
  plVar27 = (long *)pMVar20->name;
  if (*(int *)&pMVar20->invoker_method == 0) {
    if (plVar27 != (long *)0x0) {
      if (*(Il2CppClass **)(*plVar27 + 0x40) == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar22 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_1a0 = *puVar22;
        SStack_1b0.klass = TypeInfo_CustomLogicSymbol;
        SStack_1b0.monitor = (void *)0xffffffffffffffff;
        pSVar9 = System_Enum__ToString(&SStack_1b0,(MethodInfo *)0x0);
        return (bool_conflict)pSVar9;
      }
      goto label_042651fb;
    }
  }
  else if (plVar27 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar27 + 0x168);
    bVar3 = (*vtableDispatch)(plVar27,*(undefined8 *)(*plVar27 + 0x170),uVar7,vtableDispatch);
    return bVar3;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)plVar27[2];
}


// CustomLogic.CustomLogicParser$$IsAnySymbolValue
// il2cpp: bool CustomLogic_CustomLogicParser__IsAnySymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, System_Int32_array* symbolValues, const MethodInfo* method);
// 0x4264470

bool_conflict
CustomLogic_CustomLogicParser__IsAnySymbolValue
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
          System_Int32_array *symbolValues,MethodInfo *method)

{
  char *pcVar1;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  code *vtableDispatch;
  undefined1 *puVar2;
  bool_conflict bVar3;
  uint uVar4;
  int *piVar5;
  Il2CppObject *pIVar6;
  undefined8 uVar7;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  System_Exception_o *__this_01;
  ulong uVar10;
  System_Int32_array *pSVar11;
  long lVar12;
  MethodInfo_35FD6C0 *pMVar13;
  long lVar14;
  int32_t *piVar15;
  System_String_array *pSVar16;
  MethodInfo_35FD6C0 *pMVar17;
  System_Exception_o *pSVar18;
  MethodInfo_35FD6C0 *pMVar19;
  System_String_o *pSVar20;
  System_String_o *str0;
  System_String_o *str2;
  undefined4 *puVar21;
  int extraout_EDX;
  int extraout_EDX_00;
  ulong extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  Il2CppObject *unaff_RBX;
  MethodInfo_35FD6C0 *pMVar22;
  int iVar23;
  MethodInfo_35FD6C0 *pMVar24;
  long *plVar25;
  System_Collections_Generic_List_object__o *pSVar26;
  CustomLogic_CustomLogicParser_o *pCVar27;
  MethodInfo *in_R8;
  undefined8 *unaff_R12;
  ulong uVar28;
  undefined8 *unaff_R13;
  uint uVar29;
  System_Int32_array *unaff_R15;
  ulong uVar30;
  System_String_c *__this_02;
  undefined1 auVar31 [16];
  System_Enum_o SStack_1d8;
  undefined4 uStack_1c8;
  MethodInfo_35FD6C0 *pMStack_1c0;
  undefined8 uStack_1b8;
  System_Exception_o *pSStack_1b0;
  System_String_o *pSStack_1a8;
  MethodInfo_35FD6C0 *pMStack_1a0;
  System_String_array *pSStack_198;
  CustomLogic_CustomLogicParser_o *pCStack_190;
  System_Enum_o SStack_188;
  int iStack_178;
  MethodInfo_35FD6C0 *pMStack_170;
  System_String_array *pSStack_168;
  System_String_c *pSStack_160;
  MethodInfo_35FD6C0 *pMStack_158;
  undefined8 uStack_150;
  MethodInfo_35FD6C0 *pMStack_148;
  MethodInfo_35FD6C0 *pMStack_140;
  undefined8 uStack_138;
  long lStack_130;
  ulong uStack_128;
  ulong uStack_120;
  System_String_c *pSStack_118;
  undefined1 auStack_104 [84];
  ulong uStack_b0;
  System_Exception_o *pSStack_a8;
  System_Enum_o SStack_a0;
  int iStack_90;
  Il2CppObject *pIStack_88;
  long *plStack_80;
  System_Int32_array *pSStack_78;
  MethodInfo_35FD6C0 *pMStack_70;
  undefined8 uStack_68;
  Il2CppObject *pIStack_60;
  undefined8 *puStack_58;
  
  pMVar19 = (MethodInfo_35FD6C0 *)token;
  if (symbolValues != (System_Int32_array *)0x0) {
    uVar29 = (uint)symbolValues->max_length;
    unaff_R15 = symbolValues;
    if (token == (CustomLogic_CustomLogicToken_o *)0x0) {
      uVar4 = 0;
      if ((int)uVar29 < 1) {
        return 0;
      }
      while (uVar4 < uVar29) {
        uVar4 = uVar4 + 1;
        if ((int)uVar29 <= (int)uVar4) {
          return 0;
        }
      }
    }
    else {
      if ((int)uVar29 < 1) {
        return 0;
      }
      unaff_RBX = (Il2CppObject *)0x0;
      unaff_R12 = &g_data_057b9b70;
      if ((symbolValues->max_length & 0xffffffff) != 0) {
        do {
          if ((token->fields).Type == 0) {
            pIVar6 = (token->fields).Value;
            if (pIVar6 == (Il2CppObject *)0x0) goto label_0426452b;
            pMVar19 = g_data_057b9bb8;
            if ((pIVar6->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264530;
            iVar23 = symbolValues->m_Items[(long)unaff_RBX];
            piVar5 = (int *)il2cpp_runtime_helper_02305440();
            if (*piVar5 == iVar23) {
              return (bool_conflict)CONCAT71((int7)((ulong)piVar5 >> 8),1);
            }
          }
          unaff_RBX = (Il2CppObject *)((long)&unaff_RBX->klass + 1);
          uVar29 = (uint)symbolValues->max_length;
          if ((long)(int)uVar29 <= (long)unaff_RBX) {
            return 0;
          }
        } while (unaff_RBX < (Il2CppObject *)(ulong)uVar29);
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
label_0426452b:
  il2cpp_runtime_helper_022b2c90();
  symbolValues = unaff_R15;
label_04264530:
  il2cpp_runtime_helper_022b2fd0();
  if ((pMVar19 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar19->invoker_method != 0)) {
    return 0;
  }
  plVar25 = (long *)pMVar19->name;
  if (plVar25 == (long *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar19 = g_data_057b9bb8;
    if (*(void **)(*plVar25 + 0x40) == (g_data_057b9bb8->field8_0x40).genericMethod) {
      piVar5 = (int *)il2cpp_runtime_helper_02305440();
      return (bool_conflict)CONCAT71((int7)((ulong)piVar5 >> 8),*piVar5 == extraout_EDX);
    }
  }
  uStack_68 = il2cpp_runtime_helper_022b2fd0();
  pMVar24 = (MethodInfo_35FD6C0 *)((ulong)pMVar19 & 0xffffffff);
  pMVar17 = pMVar19;
  pIStack_60 = unaff_RBX;
  puStack_58 = unaff_R12;
  if (g_data_057adc09 == '\0') {
    pMStack_70 = (MethodInfo_35FD6C0 *)0x42645b5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMStack_70 = (MethodInfo_35FD6C0 *)0x42645c1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc09 = '\x01';
  }
  pSVar26 = (System_Collections_Generic_List_object__o *)plVar25[2];
  pCVar27 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (pSVar26 != (System_Collections_Generic_List_object__o *)0x0) {
    symbolValues = (System_Int32_array *)0x0;
    unaff_R12 = &MethodInfo_CustomLogicToken_get_Item;
    unaff_R13 = &g_data_057b9b70;
    if ((int)pMVar19 < (pSVar26->fields)._size) {
      do {
        pMStack_70 = (MethodInfo_35FD6C0 *)0x4264620;
        pMVar17 = pMVar24;
        pIVar6 = System_Collections_Generic_List_object___get_Item(pSVar26,(int)pMVar24,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar6 != (Il2CppObject *)0x0) && (unaff_RBX = pIVar6, *(int *)&pIVar6[1].klass == 0)) {
          pCVar27 = pIVar6[1].monitor;
          if (pCVar27 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0426469e;
          pMVar17 = g_data_057b9bb8;
          if ((pCVar27->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
          goto label_042646a3;
          pMStack_70 = (MethodInfo_35FD6C0 *)0x426464d;
          piVar5 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar5 == 0xb) {
            symbolValues = (System_Int32_array *)(ulong)((int)symbolValues + 1);
          }
          else if (*(int *)&pIVar6[1].klass == 0) {
            pCVar27 = pIVar6[1].monitor;
            if (pCVar27 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0426469e;
            pMVar17 = g_data_057b9bb8;
            if ((pCVar27->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_042646a3;
            pMStack_70 = (MethodInfo_35FD6C0 *)0x4264677;
            piVar5 = (int *)il2cpp_runtime_helper_02305440();
            if ((*piVar5 == 0xc) &&
               (uVar29 = (int)symbolValues - 1, symbolValues = (System_Int32_array *)(ulong)uVar29,
               uVar29 == 0)) goto label_0426468d;
          }
        }
        uVar29 = (int)pMVar24 + 1;
        pMVar24 = (MethodInfo_35FD6C0 *)(ulong)uVar29;
        pSVar26 = (System_Collections_Generic_List_object__o *)plVar25[2];
        pCVar27 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (pSVar26 == (System_Collections_Generic_List_object__o *)0x0) goto label_0426469e;
      } while ((int)uVar29 < (pSVar26->fields)._size);
    }
    pMVar24 = (MethodInfo_35FD6C0 *)&g_data_ffffffff;
label_0426468d:
    return (bool_conflict)pMVar24;
  }
label_0426469e:
  pMStack_70 = (MethodInfo_35FD6C0 *)0x42646a3;
  il2cpp_runtime_helper_022b2c90();
label_042646a3:
  pMStack_70 = (MethodInfo_35FD6C0 *)0x42646a8;
  bVar3 = il2cpp_runtime_helper_022b2fd0();
  uVar30 = extraout_RDX & 0xffffffff;
  iStack_90 = (int)extraout_RDX;
  if ((pMVar17 != (MethodInfo_35FD6C0 *)0x0) && (*(int *)&pMVar17->invoker_method == iStack_90)) {
    return bVar3;
  }
  pSStack_a8 = (System_Exception_o *)0x42646e5;
  pIStack_88 = unaff_RBX;
  plStack_80 = plVar25;
  pSStack_78 = symbolValues;
  pMStack_70 = pMVar24;
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
  pSStack_a8 = (System_Exception_o *)0x42646f2;
  pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar7,6);
  pSStack_a8 = (System_Exception_o *)0x42646fd;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_a8 = (System_Exception_o *)0x4264709;
  uVar7 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_a8 = (System_Exception_o *)0x4264716;
  il2cpp_runtime_helper_01f6dff0(pSVar8,0,uVar7);
  pSStack_a8 = (System_Exception_o *)0x426471e;
  il2cpp_runtime_helper_01f681a0(pMVar17);
  pSStack_a8 = (System_Exception_o *)0x4264729;
  pSVar9 = CustomLogic_CustomLogicParser__GetLineNumberString(pCVar27,*(int32_t *)&pMVar17->klass,method_00);
  pSStack_a8 = (System_Exception_o *)0x4264734;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_a8 = (System_Exception_o *)0x4264744;
  il2cpp_runtime_helper_01f6dff0(pSVar8,1,pSVar9);
  pSStack_a8 = (System_Exception_o *)0x426474c;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_a8 = (System_Exception_o *)0x4264758;
  uVar7 = il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_a8 = (System_Exception_o *)0x4264768;
  pSVar16 = pSVar8;
  il2cpp_runtime_helper_01f6dff0(pSVar8,2,uVar7);
  pSStack_a8 = (System_Exception_o *)0x4264770;
  pSVar9 = CustomLogic_CustomLogicParser__GetTokenString
                     ((CustomLogic_CustomLogicParser_o *)pSVar16,(CustomLogic_CustomLogicToken_o *)pMVar17,
                      method_01);
  pSStack_a8 = (System_Exception_o *)0x426477b;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_a8 = (System_Exception_o *)0x426478b;
  il2cpp_runtime_helper_01f6dff0(pSVar8,3,pSVar9);
  pSStack_a8 = (System_Exception_o *)0x4264793;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_a8 = (System_Exception_o *)0x426479f;
  uVar7 = il2cpp_runtime_helper_023445d0(&", expected ");
  pSStack_a8 = (System_Exception_o *)0x42647af;
  il2cpp_runtime_helper_01f6dff0(pSVar8,4,uVar7);
  pSStack_a8 = (System_Exception_o *)0x42647bb;
  SStack_a0.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTokenType);
  SStack_a0.monitor = (void *)0xffffffffffffffff;
  pSStack_a8 = (System_Exception_o *)0x42647d7;
  pSVar9 = System_Enum__ToString(&SStack_a0,(MethodInfo *)0x0);
  pSStack_a8 = (System_Exception_o *)0x42647e2;
  il2cpp_runtime_helper_01f681a0(pSVar8);
  pSStack_a8 = (System_Exception_o *)0x42647f2;
  il2cpp_runtime_helper_01f6dff0(pSVar8,5,pSVar9);
  pSStack_a8 = (System_Exception_o *)0x42647fc;
  pSVar9 = System_String__Concat_3af7570(pSVar8,(MethodInfo *)0x0);
  pSStack_a8 = (System_Exception_o *)0x426480b;
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_a8 = (System_Exception_o *)0x4264813;
  __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
  pSStack_a8 = (System_Exception_o *)0x4264823;
  System_Exception___ctor_3cf6120(__this_01,pSVar9,(MethodInfo *)0x0);
  pSStack_a8 = (System_Exception_o *)0x426482f;
  uVar10 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertTokenType);
  pSStack_a8 = (System_Exception_o *)0x426483a;
  pSVar18 = __this_01;
  auVar31 = il2cpp_runtime_helper_022b2b10();
  auStack_104._44_8_ = auVar31._0_8_;
  uVar28 = auVar31._8_8_ & 0xffffffff;
  pMVar19 = (MethodInfo_35FD6C0 *)(uVar10 & 0xffffffff);
  auStack_104._52_8_ = pSVar9;
  auStack_104._60_8_ = unaff_R12;
  auStack_104._68_8_ = unaff_R13;
  auStack_104._76_8_ = pSVar8;
  uStack_b0 = uVar30;
  pSStack_a8 = __this_01;
  if (g_data_057adc08 == '\0') {
    auStack_104._36_8_ = 0x4264868;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    auStack_104._36_8_ = 0x4264874;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ToArray);
    auStack_104._36_8_ = 0x4264880;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    auStack_104._36_8_ = 0x426488c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    auStack_104._36_8_ = 0x4264898;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    g_data_057adc08 = '\x01';
  }
  auStack_104._36_8_ = 0x42648ae;
  auStack_104._44_8_ = il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  auStack_104._36_8_ = 0x42648c4;
  pMVar17 = MethodInfo_List_1_System_Int32;
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_List_int__o *)auStack_104._44_8_,MethodInfo_List_1_System_Int32);
  uVar29 = auVar31._8_4_;
  if ((int)uVar10 < (int)uVar29) {
    if ((System_String_c *)auStack_104._44_8_ == (System_String_c *)0x0) {
      uVar30 = 0;
      pSVar26 = (System_Collections_Generic_List_object__o *)(pSVar18->fields)._className;
      pSVar20 = pSVar9;
      uVar10 = 0;
      if (pSVar26 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_02 = (System_String_c *)0x0;
      }
      else {
        do {
          uVar30 = uVar10;
          auStack_104._36_8_ = 0x4264934;
          pMVar17 = pMVar19;
          pSVar9 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item(pSVar26,(int)pMVar19,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar9 != (System_String_o *)0x0) && (pSVar20 = pSVar9, (pSVar9->fields)._stringLength == 0)) {
            __this_02 = pSVar9[1].klass;
            if (__this_02 == (System_String_c *)0x0) break;
            pMVar17 = g_data_057b9bb8;
            if (*(void **)((long)(__this_02->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264b82;
            auStack_104._36_8_ = 0x4264970;
            piVar5 = (int *)il2cpp_runtime_helper_02305440();
            uVar4 = (int)uVar30 + (uint)(*piVar5 == 0xb);
            uVar30 = (ulong)uVar4;
            if ((pSVar9->fields)._stringLength == 0) {
              __this_02 = pSVar9[1].klass;
              if (__this_02 == (System_String_c *)0x0) break;
              pMVar17 = g_data_057b9bb8;
              if (*(void **)((long)(__this_02->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
              goto label_04264b82;
              auStack_104._36_8_ = 0x42649af;
              piVar5 = (int *)il2cpp_runtime_helper_02305440();
              uVar4 = uVar4 - (*piVar5 == 0xc);
              uVar30 = (ulong)uVar4;
              if ((pSVar9->fields)._stringLength == 0) {
                __this_02 = pSVar9[1].klass;
                if (__this_02 == (System_String_c *)0x0) break;
                pMVar17 = g_data_057b9bb8;
                if (*(void **)((long)(__this_02->_1).image + 0x40) !=
                    (g_data_057b9bb8->field8_0x40).genericMethod) goto label_04264b82;
                auStack_104._36_8_ = 0x42649f2;
                piVar5 = (int *)il2cpp_runtime_helper_02305440();
                if ((uVar4 == 0) && (*piVar5 == 0x25)) break;
              }
            }
          }
          pSVar9 = pSVar20;
          uVar4 = (int)pMVar19 + 1;
          pMVar19 = (MethodInfo_35FD6C0 *)(ulong)uVar4;
          if (uVar29 == uVar4) goto label_04264b57;
          pSVar26 = (System_Collections_Generic_List_object__o *)(pSVar18->fields)._className;
          __this_02 = (System_String_c *)0x0;
          pSVar20 = pSVar9;
          uVar10 = uVar30;
        } while (pSVar26 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
    else {
      uVar30 = 0;
      pSVar26 = (System_Collections_Generic_List_object__o *)(pSVar18->fields)._className;
      if (pSVar26 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_02 = (System_String_c *)0x0;
      }
      else {
        do {
          iVar23 = (int)pMVar19;
          auStack_104._36_8_ = 0x4264a54;
          pMVar17 = pMVar19;
          pSVar20 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar26,iVar23,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar20 != (System_String_o *)0x0) && (pSVar9 = pSVar20, (pSVar20->fields)._stringLength == 0))
          {
            __this_02 = pSVar20[1].klass;
            if (__this_02 == (System_String_c *)0x0) break;
            pMVar17 = g_data_057b9bb8;
            if (*(void **)((long)(__this_02->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264b82;
            auStack_104._36_8_ = 0x4264a90;
            piVar5 = (int *)il2cpp_runtime_helper_02305440();
            uVar4 = (int)uVar30 + (uint)(*piVar5 == 0xb);
            uVar30 = (ulong)uVar4;
            if ((pSVar20->fields)._stringLength == 0) {
              __this_02 = pSVar20[1].klass;
              if (__this_02 == (System_String_c *)0x0) break;
              pMVar17 = g_data_057b9bb8;
              if (*(void **)((long)(__this_02->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
              goto label_04264b82;
              auStack_104._36_8_ = 0x4264acf;
              piVar5 = (int *)il2cpp_runtime_helper_02305440();
              uVar4 = uVar4 - (*piVar5 == 0xc);
              uVar30 = (ulong)uVar4;
              if ((pSVar20->fields)._stringLength == 0) {
                __this_02 = pSVar20[1].klass;
                if (__this_02 == (System_String_c *)0x0) break;
                pMVar17 = g_data_057b9bb8;
                if (*(void **)((long)(__this_02->_1).image + 0x40) !=
                    (g_data_057b9bb8->field8_0x40).genericMethod) goto label_04264b82;
                auStack_104._36_8_ = 0x4264b0e;
                piVar5 = (int *)il2cpp_runtime_helper_02305440();
                lVar12 = MethodInfo_Void_Add;
                if ((uVar4 == 0) && (*piVar5 == 0x25)) {
                  puVar2 = (undefined1 *)((long)&((Il2CppClass_1 *)auStack_104._44_8_)->namespaze + 4);
                  *(int *)puVar2 = *(int *)puVar2 + 1;
                  pcVar1 = ((Il2CppClass_1 *)auStack_104._44_8_)->name;
                  __this_02 = (System_String_c *)auStack_104._44_8_;
                  if (pcVar1 == (char *)0x0) break;
                  uVar4 = *(uint *)&((Il2CppClass_1 *)auStack_104._44_8_)->namespaze;
                  if (uVar4 < *(uint *)(pcVar1 + 0x18)) {
                    *(uint *)&((Il2CppClass_1 *)auStack_104._44_8_)->namespaze = uVar4 + 1;
                    *(int *)(pcVar1 + (long)(int)uVar4 * 4 + 0x20) = iVar23;
                    pMVar19 = pMVar17;
                  }
                  else {
                    auStack_104._36_8_ = 0x4264a1f;
                    System_Collections_Generic_List_int___AddWithResize
                              ((System_Collections_Generic_List_int__o *)auStack_104._44_8_,iVar23,
                               *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar12 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar30 = 0;
                  pMVar17 = pMVar19;
                }
              }
            }
          }
          pMVar19 = (MethodInfo_35FD6C0 *)(ulong)(iVar23 + 1U);
          if (uVar29 == iVar23 + 1U) goto label_04264b57;
          pSVar26 = (System_Collections_Generic_List_object__o *)(pSVar18->fields)._className;
          __this_02 = (System_String_c *)0x0;
        } while (pSVar26 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
  }
  else {
label_04264b57:
    __this_02 = (System_String_c *)0x0;
    if ((System_String_c *)auStack_104._44_8_ != (System_String_c *)0x0) {
      pSVar11 = System_Collections_Generic_List_int___ToArray
                          ((System_Collections_Generic_List_int__o *)auStack_104._44_8_,MethodInfo_Int32_ToArray);
      return (bool_conflict)pSVar11;
    }
  }
  auStack_104._36_8_ = 0x4264b82;
  il2cpp_runtime_helper_022b2c90();
label_04264b82:
  uVar29 = (uint)pMVar17;
  auStack_104._36_8_ = 0x4264b87;
  il2cpp_runtime_helper_022b2fd0();
  method_02 = extraout_RDX_00;
  auStack_104._4_8_ = pSVar9;
  auStack_104._12_8_ = uVar28;
  auStack_104._20_8_ = pSVar18;
  auStack_104._28_8_ = uVar30;
  auStack_104._36_8_ = pMVar19;
  if (g_data_057adc05 == '\0') {
    pSStack_118 = (System_String_c *)0x4264bb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057adc05 = '\x01';
    method_02 = extraout_RDX_01;
  }
  pSStack_118 = (System_String_c *)0x4264bc9;
  uVar4 = CustomLogic_CustomLogicParser__FindSemicolon
                    ((CustomLogic_CustomLogicParser_o *)__this_02,uVar29,method_02);
  uVar30 = (ulong)uVar4;
  pSStack_118 = (System_String_c *)0x4264be0;
  lVar12 = il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  auStack_104._0_4_ = uVar4 + 1;
  pMVar17 = (MethodInfo_35FD6C0 *)auStack_104;
  pSStack_118 = (System_String_c *)0x4264c01;
  pMVar24 = g_data_057b9bb8;
  pMVar13 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_02304f30();
  if (lVar12 != 0) {
    if (pMVar13 == (MethodInfo_35FD6C0 *)0x0) {
label_04264c26:
      if (*(int *)(lVar12 + 0x18) != 0) {
        *(MethodInfo_35FD6C0 **)(lVar12 + 0x20) = pMVar13;
        pSStack_118 = (System_String_c *)0x4264c3c;
        il2cpp_runtime_helper_022b4080(lVar12 + 0x20);
        uVar30 = (ulong)(uVar4 - 1);
        pSStack_118 = (System_String_c *)0x4264c50;
        pMVar13 = (MethodInfo_35FD6C0 *)
                  CustomLogic_CustomLogicParser__ParseExpression
                            ((CustomLogic_CustomLogicParser_o *)__this_02,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar29,uVar4 - 1,in_R8);
        if (pMVar13 != (MethodInfo_35FD6C0 *)0x0) {
          pSStack_118 = (System_String_c *)0x4264c67;
          lVar14 = il2cpp_runtime_helper_023051f0(pMVar13);
          if (lVar14 == 0) goto label_04264c9a;
        }
        if (1 < *(uint *)(lVar12 + 0x18)) {
          *(MethodInfo_35FD6C0 **)(lVar12 + 0x28) = pMVar13;
          pSStack_118 = (System_String_c *)0x4264c85;
          il2cpp_runtime_helper_022b4080(lVar12 + 0x28,pMVar13);
          return (bool_conflict)lVar12;
        }
      }
      pSStack_118 = (System_String_c *)0x4264c9a;
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pSStack_118 = (System_String_c *)0x4264c21;
      lVar14 = il2cpp_runtime_helper_023051f0(pMVar13);
      if (lVar14 != 0) goto label_04264c26;
    }
label_04264c9a:
    pSStack_118 = (System_String_c *)0x4264c9f;
    pMVar24 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_0231b270();
    pMVar17 = (MethodInfo_35FD6C0 *)0x0;
    pSStack_118 = (System_String_c *)0x4264ca9;
    il2cpp_runtime_helper_022b2b10();
    pMVar19 = pMVar13;
  }
  pSStack_118 = (System_String_c *)0x4264cae;
  uStack_138 = il2cpp_runtime_helper_022b2c90();
  pMVar22 = (MethodInfo_35FD6C0 *)((ulong)pMVar17 & 0xffffffff);
  pMVar13 = pMVar17;
  lStack_130 = lVar12;
  uStack_128 = uVar30;
  uStack_120 = (ulong)uVar29;
  pSStack_118 = __this_02;
  if (g_data_057adc0a == '\0') {
    pMStack_140 = (MethodInfo_35FD6C0 *)0x4264cd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMStack_140 = (MethodInfo_35FD6C0 *)0x4264cde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc0a = '\x01';
  }
  pSVar26 = (System_Collections_Generic_List_object__o *)pMVar24->invoker_method;
  pCVar27 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (pSVar26 != (System_Collections_Generic_List_object__o *)0x0) {
    __this_02 = (System_String_c *)&MethodInfo_CustomLogicToken_get_Item;
    if ((int)pMVar17 < (pSVar26->fields)._size) {
      do {
        pMStack_140 = (MethodInfo_35FD6C0 *)0x4264d2b;
        pMVar13 = pMVar22;
        pIVar6 = System_Collections_Generic_List_object___get_Item(pSVar26,(int)pMVar22,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar6 != (Il2CppObject *)0x0) && (*(int *)&pIVar6[1].klass == 0)) {
          pCVar27 = pIVar6[1].monitor;
          if (pCVar27 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_04264d70;
          pMVar13 = g_data_057b9bb8;
          if ((pCVar27->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
          goto label_04264d75;
          pMStack_140 = (MethodInfo_35FD6C0 *)0x4264d56;
          piVar5 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar5 == 0x23) goto label_04264d62;
        }
        uVar29 = (int)pMVar22 + 1;
        pMVar22 = (MethodInfo_35FD6C0 *)(ulong)uVar29;
        pSVar26 = (System_Collections_Generic_List_object__o *)pMVar24->invoker_method;
        pCVar27 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (pSVar26 == (System_Collections_Generic_List_object__o *)0x0) goto label_04264d70;
      } while ((int)uVar29 < (pSVar26->fields)._size);
    }
    pMVar22 = (MethodInfo_35FD6C0 *)&g_data_ffffffff;
label_04264d62:
    return (bool_conflict)pMVar22;
  }
label_04264d70:
  pMStack_140 = (MethodInfo_35FD6C0 *)0x4264d75;
  il2cpp_runtime_helper_022b2c90();
label_04264d75:
  pMStack_140 = (MethodInfo_35FD6C0 *)0x4264d7a;
  auVar31 = il2cpp_runtime_helper_022b2fd0();
  pSVar16 = auVar31._8_8_;
  uStack_150 = auVar31._0_8_;
  pMVar17 = pMVar13;
  pMStack_148 = pMVar22;
  pMStack_140 = pMVar24;
  if (g_data_057adc0b == '\0') {
    pCVar27 = (CustomLogic_CustomLogicParser_o *)&MethodInfo_Boolean_Contains;
    pMStack_158 = (MethodInfo_35FD6C0 *)0x4264d9f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc0b = '\x01';
  }
  if ((pMVar13 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar13->invoker_method != 0)) {
    return 0;
  }
  if ((pSVar16 == (System_String_array *)0x0) ||
     (pCVar27 = (CustomLogic_CustomLogicParser_o *)pMVar13->name,
     pCVar27 == (CustomLogic_CustomLogicParser_o *)0x0)) {
    pMStack_158 = (MethodInfo_35FD6C0 *)0x4264e06;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar17 = g_data_057b9bb8;
    if ((pCVar27->klass->_1).element_class == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pMStack_158 = (MethodInfo_35FD6C0 *)0x4264de6;
      piVar15 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar3 = System_Collections_Generic_HashSet_int___Contains
                        ((System_Collections_Generic_HashSet_int__o *)pSVar16,*piVar15,MethodInfo_Boolean_Contains);
      return bVar3;
    }
  }
  pMStack_158 = (MethodInfo_35FD6C0 *)0x4264e0b;
  il2cpp_runtime_helper_022b2fd0();
  pMStack_170 = pMVar13;
  pSStack_168 = pSVar16;
  pSStack_160 = __this_02;
  pMStack_158 = pMVar19;
  if ((pMVar17 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar17->invoker_method != 0)) {
label_04264e6a:
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264e76;
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264e83;
    pSVar16 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar7,6);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(pSVar16);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264e9a;
    uVar7 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(pSVar16,0,uVar7);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(pMVar17);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264eba;
    pCVar27 = (CustomLogic_CustomLogicParser_o *)
              CustomLogic_CustomLogicParser__GetLineNumberString
                        (pCVar27,*(int32_t *)&pMVar17->klass,method_03);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(pSVar16);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(pSVar16,1,pCVar27);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(pSVar16);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264ee9;
    uVar7 = il2cpp_runtime_helper_023445d0(&", got ");
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264ef9;
    pSVar8 = pSVar16;
    il2cpp_runtime_helper_01f6dff0(pSVar16,2,uVar7);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f01;
    pSVar9 = CustomLogic_CustomLogicParser__GetTokenString
                       ((CustomLogic_CustomLogicParser_o *)pSVar8,(CustomLogic_CustomLogicToken_o *)pMVar17,
                        method_04);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(pSVar16);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(pSVar16,3,pSVar9);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(pSVar16);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f30;
    uVar7 = il2cpp_runtime_helper_023445d0(&", expected ");
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(pSVar16,4,uVar7);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f4c;
    SStack_188.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    SStack_188.monitor = (void *)0xffffffffffffffff;
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f67;
    iStack_178 = extraout_EDX_00;
    pSVar9 = System_Enum__ToString(&SStack_188,(MethodInfo *)0x0);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(pSVar16);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(pSVar16,5,pSVar9);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f8c;
    pMVar17 = (MethodInfo_35FD6C0 *)System_String__Concat_3af7570(pSVar16,(MethodInfo *)0x0);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264f9b;
    uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264fa3;
    pSVar18 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar18,(System_String_o *)pMVar17,(MethodInfo *)0x0);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264fbf;
    pMVar19 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar18 = (System_Exception_o *)pMVar17->name;
    pMVar19 = pMVar17;
    if (pSVar18 == (System_Exception_o *)0x0) goto label_04264fca;
    pMVar19 = g_data_057b9bb8;
    if ((pSVar18->klass->_1).element_class == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264e5b;
      piVar5 = (int *)il2cpp_runtime_helper_02305440();
      if (*piVar5 == extraout_EDX_00) {
        return (bool_conflict)piVar5;
      }
      goto label_04264e6a;
    }
  }
  pCStack_190 = (CustomLogic_CustomLogicParser_o *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_1a8 = (System_String_o *)0x4264ff3;
  pMStack_1a0 = pMVar17;
  pSStack_198 = pSVar16;
  pCStack_190 = pCVar27;
  il2cpp_runtime_helper_01f681a0(pMVar19);
  pSStack_1a8 = (System_String_o *)0x4264ffe;
  pSVar9 = CustomLogic_CustomLogicParser__GetLineNumberString
                     ((CustomLogic_CustomLogicParser_o *)pSVar18,*(int32_t *)&pMVar19->klass,method_05);
  pSStack_1a8 = (System_String_o *)0x4265009;
  pSVar20 = CustomLogic_CustomLogicParser__GetTokenString
                      ((CustomLogic_CustomLogicParser_o *)pSVar18,(CustomLogic_CustomLogicToken_o *)pMVar19,
                       method_06);
  pSStack_1a8 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_1a8 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_1a8 = (System_String_o *)0x426503b;
  pSVar9 = System_String__Concat_3af7470(str0,pSVar9,str2,pSVar20,(MethodInfo *)0x0);
  pSStack_1a8 = (System_String_o *)0x426504a;
  uVar7 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_1a8 = (System_String_o *)0x4265052;
  pSVar18 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar7);
  pSStack_1a8 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar18,pSVar9,(MethodInfo *)0x0);
  pSStack_1a8 = (System_String_o *)0x426506e;
  pMVar17 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_1a8 = (System_String_o *)0x4265079;
  uStack_1b8 = il2cpp_runtime_helper_022b2b10(pSVar18);
  pMVar19 = pMVar17;
  pSStack_1b0 = pSVar18;
  pSStack_1a8 = pSVar9;
  if (g_data_057adc0c == '\0') {
    pMStack_1c0 = (MethodInfo_35FD6C0 *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pMStack_1c0 = (MethodInfo_35FD6C0 *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((pMVar17 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar17->invoker_method != 0)) {
    return 0;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    pMStack_1c0 = (MethodInfo_35FD6C0 *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     ((long *)pMVar17->name == (long *)0x0)) {
    pMStack_1c0 = (MethodInfo_35FD6C0 *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar19 = g_data_057b9bb8;
    if (*(void **)(*(long *)pMVar17->name + 0x40) == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pMStack_1c0 = (MethodInfo_35FD6C0 *)0x4265115;
      piVar15 = (int32_t *)il2cpp_runtime_helper_02305440();
      bVar3 = System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar15,MethodInfo_Boolean_ContainsKey);
      return bVar3;
    }
  }
  pMStack_1c0 = (MethodInfo_35FD6C0 *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar7 = extraout_RDX_02;
  pMStack_1c0 = pMVar17;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar7 = extraout_RDX_03;
  }
  if (pMVar19 == (MethodInfo_35FD6C0 *)0x0) {
    return (bool_conflict)"null";
  }
  plVar25 = (long *)pMVar19->name;
  if (*(int *)&pMVar19->invoker_method == 0) {
    if (plVar25 != (long *)0x0) {
      if (*(Il2CppClass **)(*plVar25 + 0x40) == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar21 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_1c8 = *puVar21;
        SStack_1d8.klass = TypeInfo_CustomLogicSymbol;
        SStack_1d8.monitor = (void *)0xffffffffffffffff;
        pSVar9 = System_Enum__ToString(&SStack_1d8,(MethodInfo *)0x0);
        return (bool_conflict)pSVar9;
      }
      goto label_042651fb;
    }
  }
  else if (plVar25 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar25 + 0x168);
    bVar3 = (*vtableDispatch)(plVar25,*(undefined8 *)(*plVar25 + 0x170),uVar7,vtableDispatch);
    return bVar3;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (bool_conflict)plVar25[2];
}


// CustomLogic.CustomLogicParser$$AssertSymbolValue
// il2cpp: void CustomLogic_CustomLogicParser__AssertSymbolValue (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t symbolValue, const MethodInfo* method);
// 0x4264e10

void CustomLogic_CustomLogicParser__AssertSymbolValue
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               int32_t symbolValue,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  Il2CppObject *pIVar1;
  Il2CppMethodPointer vtableDispatch;
  int *piVar2;
  undefined8 uVar3;
  System_String_o *pSVar4;
  System_Exception_o *pSVar5;
  CustomLogic_CustomLogicToken_o *pCVar6;
  System_String_o *str3;
  System_String_o *str0;
  System_String_o *str2;
  CustomLogic_CustomLogicToken_o *pCVar7;
  int32_t *piVar8;
  undefined4 *puVar9;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  System_String_array *__this_01;
  System_String_array *unaff_R14;
  System_Enum_o SStack_88;
  undefined4 uStack_78;
  CustomLogic_CustomLogicToken_o *pCStack_70;
  undefined8 uStack_68;
  System_Exception_o *pSStack_60;
  System_String_o *pSStack_58;
  CustomLogic_CustomLogicToken_o *pCStack_50;
  System_String_array *pSStack_48;
  CustomLogic_CustomLogicParser_o *pCStack_40;
  System_Enum_o local_38;
  int32_t local_28;
  
  if ((token == (CustomLogic_CustomLogicToken_o *)0x0) || ((token->fields).Type != 0)) {
label_04264e6a:
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264e76;
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264e83;
    unaff_R14 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar3,6);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(unaff_R14);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264e9a;
    uVar3 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(unaff_R14,0,uVar3);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(token);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264eba;
    __this = (CustomLogic_CustomLogicParser_o *)
             CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,method_00);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(unaff_R14);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(unaff_R14,1,__this);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(unaff_R14);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264ee9;
    uVar3 = il2cpp_runtime_helper_023445d0(&", got ");
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264ef9;
    __this_01 = unaff_R14;
    il2cpp_runtime_helper_01f6dff0(unaff_R14,2,uVar3);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f01;
    pSVar4 = CustomLogic_CustomLogicParser__GetTokenString
                       ((CustomLogic_CustomLogicParser_o *)__this_01,token,method_01);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(unaff_R14);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(unaff_R14,3,pSVar4);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(unaff_R14);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f30;
    uVar3 = il2cpp_runtime_helper_023445d0(&", expected ");
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(unaff_R14,4,uVar3);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f4c;
    local_38.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    local_38.monitor = (void *)0xffffffffffffffff;
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f67;
    local_28 = symbolValue;
    pSVar4 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(unaff_R14);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(unaff_R14,5,pSVar4);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f8c;
    token = (CustomLogic_CustomLogicToken_o *)System_String__Concat_3af7570(unaff_R14,(MethodInfo *)0x0);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264f9b;
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264fa3;
    pSVar5 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar5,(System_String_o *)token,(MethodInfo *)0x0);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264fbf;
    pCVar6 = (CustomLogic_CustomLogicToken_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar5 = (System_Exception_o *)(token->fields).Value;
    pCVar6 = token;
    if (pSVar5 == (System_Exception_o *)0x0) goto label_04264fca;
    pCVar6 = g_data_057b9bb8;
    if ((pSVar5->klass->_1).element_class == (Il2CppClass *)g_data_057b9bb8[1].fields.Value) {
      pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264e5b;
      piVar2 = (int *)il2cpp_runtime_helper_02305440();
      if (*piVar2 == symbolValue) {
        return;
      }
      goto label_04264e6a;
    }
  }
  pCStack_40 = (CustomLogic_CustomLogicParser_o *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_58 = (System_String_o *)0x4264ff3;
  pCStack_50 = token;
  pSStack_48 = unaff_R14;
  pCStack_40 = __this;
  il2cpp_runtime_helper_01f681a0(pCVar6);
  pSStack_58 = (System_String_o *)0x4264ffe;
  pSVar4 = CustomLogic_CustomLogicParser__GetLineNumberString
                     ((CustomLogic_CustomLogicParser_o *)pSVar5,(pCVar6->fields).Line,method_02);
  pSStack_58 = (System_String_o *)0x4265009;
  str3 = CustomLogic_CustomLogicParser__GetTokenString
                   ((CustomLogic_CustomLogicParser_o *)pSVar5,pCVar6,method_03);
  pSStack_58 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_58 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_58 = (System_String_o *)0x426503b;
  pSVar4 = System_String__Concat_3af7470(str0,pSVar4,str2,str3,(MethodInfo *)0x0);
  pSStack_58 = (System_String_o *)0x426504a;
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_58 = (System_String_o *)0x4265052;
  pSVar5 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  pSStack_58 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar5,pSVar4,(MethodInfo *)0x0);
  pSStack_58 = (System_String_o *)0x426506e;
  pCVar7 = (CustomLogic_CustomLogicToken_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_58 = (System_String_o *)0x4265079;
  uStack_68 = il2cpp_runtime_helper_022b2b10(pSVar5);
  pCVar6 = pCVar7;
  pSStack_60 = pSVar5;
  pSStack_58 = pSVar4;
  if (g_data_057adc0c == '\0') {
    pCStack_70 = (CustomLogic_CustomLogicToken_o *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pCStack_70 = (CustomLogic_CustomLogicToken_o *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((pCVar7 == (CustomLogic_CustomLogicToken_o *)0x0) || ((pCVar7->fields).Type != 0)) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    pCStack_70 = (CustomLogic_CustomLogicToken_o *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     (pIVar1 = (pCVar7->fields).Value, pIVar1 == (Il2CppObject *)0x0)) {
    pCStack_70 = (CustomLogic_CustomLogicToken_o *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pCVar6 = g_data_057b9bb8;
    if ((pIVar1->klass->_1).element_class == (Il2CppClass *)g_data_057b9bb8[1].fields.Value) {
      pCStack_70 = (CustomLogic_CustomLogicToken_o *)0x4265115;
      piVar8 = (int32_t *)il2cpp_runtime_helper_02305440();
      System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar8,MethodInfo_Boolean_ContainsKey);
      return;
    }
  }
  pCStack_70 = (CustomLogic_CustomLogicToken_o *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar3 = extraout_RDX;
  pCStack_70 = pCVar7;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar3 = extraout_RDX_00;
  }
  if (pCVar6 == (CustomLogic_CustomLogicToken_o *)0x0) {
    return;
  }
  pIVar1 = (pCVar6->fields).Value;
  if ((pCVar6->fields).Type == 0) {
    if (pIVar1 != (Il2CppObject *)0x0) {
      if ((pIVar1->klass->_1).element_class == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar9 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_78 = *puVar9;
        SStack_88.klass = TypeInfo_CustomLogicSymbol;
        SStack_88.monitor = (void *)0xffffffffffffffff;
        System_Enum__ToString(&SStack_88,(MethodInfo *)0x0);
        return;
      }
      goto label_042651fb;
    }
  }
  else if (pIVar1 != (Il2CppObject *)0x0) {
    vtableDispatch = pIVar1->klass->vtable[3].methodPtr;
    (*vtableDispatch)(pIVar1,pIVar1->klass->vtable[3].method,uVar3,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return;
}


// CustomLogic.CustomLogicParser$$AssertTokenType
// il2cpp: void CustomLogic_CustomLogicParser__AssertTokenType (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, int32_t type, const MethodInfo* method);
// 0x42646b0

void CustomLogic_CustomLogicParser__AssertTokenType
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,int32_t type,
               MethodInfo *method)

{
  char *pcVar1;
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  long *plVar2;
  code *vtableDispatch;
  undefined1 *puVar3;
  uint uVar4;
  undefined8 uVar5;
  System_String_array *pSVar6;
  System_String_o *pSVar7;
  System_Exception_o *pSVar8;
  ulong uVar9;
  long lVar10;
  MethodInfo_35FD6C0 *pMVar11;
  long lVar12;
  MethodInfo_35FD6C0 *pMVar13;
  Il2CppObject *pIVar14;
  int *piVar15;
  int32_t *piVar16;
  System_String_array *pSVar17;
  MethodInfo_35FD6C0 *pMVar18;
  MethodInfo_35FD6C0 *pMVar19;
  System_String_o *pSVar20;
  System_String_o *str0;
  System_String_o *str2;
  undefined4 *puVar21;
  int extraout_EDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  uint uVar22;
  MethodInfo_35FD6C0 *pMVar23;
  int index;
  System_Collections_Generic_List_object__o *pSVar24;
  CustomLogic_CustomLogicParser_o *__this_01;
  MethodInfo *in_R8;
  ulong uVar25;
  ulong uVar26;
  System_String_c *__this_02;
  undefined1 auVar27 [16];
  System_Enum_o SStack_170;
  undefined4 uStack_160;
  MethodInfo_35FD6C0 *pMStack_158;
  undefined8 uStack_150;
  System_Exception_o *pSStack_148;
  System_String_o *pSStack_140;
  MethodInfo_35FD6C0 *pMStack_138;
  System_String_array *pSStack_130;
  CustomLogic_CustomLogicParser_o *pCStack_128;
  System_Enum_o SStack_120;
  int iStack_110;
  MethodInfo_35FD6C0 *pMStack_108;
  System_String_array *pSStack_100;
  System_String_c *pSStack_f8;
  MethodInfo_35FD6C0 *pMStack_f0;
  undefined8 uStack_e8;
  MethodInfo_35FD6C0 *pMStack_e0;
  MethodInfo_35FD6C0 *pMStack_d8;
  undefined8 uStack_d0;
  long lStack_c8;
  ulong uStack_c0;
  ulong uStack_b8;
  System_String_c *pSStack_b0;
  int iStack_9c;
  System_String_o *pSStack_98;
  ulong uStack_90;
  System_Exception_o *pSStack_88;
  ulong uStack_80;
  MethodInfo_35FD6C0 *pMStack_78;
  System_String_c *pSStack_70;
  System_String_o *pSStack_68;
  System_Enum_o local_38;
  int32_t local_28;
  
  uVar26 = (ulong)(uint)type;
  if ((token != (CustomLogic_CustomLogicToken_o *)0x0) && ((token->fields).Type == type)) {
    return;
  }
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
  pSVar6 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar5,6);
  il2cpp_runtime_helper_01f681a0(pSVar6);
  uVar5 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  il2cpp_runtime_helper_01f6dff0(pSVar6,0,uVar5);
  il2cpp_runtime_helper_01f681a0(token);
  pSVar7 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,method_00);
  il2cpp_runtime_helper_01f681a0(pSVar6);
  il2cpp_runtime_helper_01f6dff0(pSVar6,1,pSVar7);
  il2cpp_runtime_helper_01f681a0(pSVar6);
  uVar5 = il2cpp_runtime_helper_023445d0(&", got ");
  pSVar17 = pSVar6;
  il2cpp_runtime_helper_01f6dff0(pSVar6,2,uVar5);
  pSVar7 = CustomLogic_CustomLogicParser__GetTokenString
                     ((CustomLogic_CustomLogicParser_o *)pSVar17,token,method_01);
  il2cpp_runtime_helper_01f681a0(pSVar6);
  il2cpp_runtime_helper_01f6dff0(pSVar6,3,pSVar7);
  il2cpp_runtime_helper_01f681a0(pSVar6);
  uVar5 = il2cpp_runtime_helper_023445d0(&", expected ");
  il2cpp_runtime_helper_01f6dff0(pSVar6,4,uVar5);
  local_38.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTokenType);
  local_38.monitor = (void *)0xffffffffffffffff;
  local_28 = type;
  pSVar7 = System_Enum__ToString(&local_38,(MethodInfo *)0x0);
  il2cpp_runtime_helper_01f681a0(pSVar6);
  il2cpp_runtime_helper_01f6dff0(pSVar6,5,pSVar7);
  pSVar7 = System_String__Concat_3af7570(pSVar6,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(pSVar8,pSVar7,(MethodInfo *)0x0);
  uVar9 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertTokenType);
  auVar27 = il2cpp_runtime_helper_022b2b10();
  pSStack_70 = auVar27._0_8_;
  uVar25 = auVar27._8_8_ & 0xffffffff;
  pMVar19 = (MethodInfo_35FD6C0 *)(uVar9 & 0xffffffff);
  pSStack_68 = pSVar7;
  if (g_data_057adc08 == '\0') {
    pMStack_78 = (MethodInfo_35FD6C0 *)0x4264868;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pMStack_78 = (MethodInfo_35FD6C0 *)0x4264874;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_ToArray);
    pMStack_78 = (MethodInfo_35FD6C0 *)0x4264880;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Int32);
    pMStack_78 = (MethodInfo_35FD6C0 *)0x426488c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    pMStack_78 = (MethodInfo_35FD6C0 *)0x4264898;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_int);
    g_data_057adc08 = '\x01';
  }
  pMStack_78 = (MethodInfo_35FD6C0 *)0x42648ae;
  pSStack_70 = (System_String_c *)il2cpp_runtime_helper_023052d0(TypeInfo_List_int);
  pMStack_78 = (MethodInfo_35FD6C0 *)0x42648c4;
  pMVar18 = MethodInfo_List_1_System_Int32;
  System_Collections_Generic_List_int____ctor
            ((System_Collections_Generic_List_int__o *)pSStack_70,MethodInfo_List_1_System_Int32);
  uVar22 = auVar27._8_4_;
  if ((int)uVar9 < (int)uVar22) {
    if (pSStack_70 == (System_String_c *)0x0) {
      uVar26 = 0;
      pSVar24 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._className;
      pSVar20 = pSVar7;
      uVar9 = 0;
      if (pSVar24 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_02 = (System_String_c *)0x0;
      }
      else {
        do {
          uVar26 = uVar9;
          pMStack_78 = (MethodInfo_35FD6C0 *)0x4264934;
          pMVar18 = pMVar19;
          pSVar7 = (System_String_o *)
                   System_Collections_Generic_List_object___get_Item(pSVar24,(int)pMVar19,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar7 != (System_String_o *)0x0) && (pSVar20 = pSVar7, (pSVar7->fields)._stringLength == 0)) {
            __this_02 = pSVar7[1].klass;
            if (__this_02 == (System_String_c *)0x0) break;
            pMVar18 = g_data_057b9bb8;
            if (*(void **)((long)(__this_02->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264b82;
            pMStack_78 = (MethodInfo_35FD6C0 *)0x4264970;
            piVar15 = (int *)il2cpp_runtime_helper_02305440();
            uVar4 = (int)uVar26 + (uint)(*piVar15 == 0xb);
            uVar26 = (ulong)uVar4;
            if ((pSVar7->fields)._stringLength == 0) {
              __this_02 = pSVar7[1].klass;
              if (__this_02 == (System_String_c *)0x0) break;
              pMVar18 = g_data_057b9bb8;
              if (*(void **)((long)(__this_02->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
              goto label_04264b82;
              pMStack_78 = (MethodInfo_35FD6C0 *)0x42649af;
              piVar15 = (int *)il2cpp_runtime_helper_02305440();
              uVar4 = uVar4 - (*piVar15 == 0xc);
              uVar26 = (ulong)uVar4;
              if ((pSVar7->fields)._stringLength == 0) {
                __this_02 = pSVar7[1].klass;
                if (__this_02 == (System_String_c *)0x0) break;
                pMVar18 = g_data_057b9bb8;
                if (*(void **)((long)(__this_02->_1).image + 0x40) !=
                    (g_data_057b9bb8->field8_0x40).genericMethod) goto label_04264b82;
                pMStack_78 = (MethodInfo_35FD6C0 *)0x42649f2;
                piVar15 = (int *)il2cpp_runtime_helper_02305440();
                if ((uVar4 == 0) && (*piVar15 == 0x25)) break;
              }
            }
          }
          pSVar7 = pSVar20;
          uVar4 = (int)pMVar19 + 1;
          pMVar19 = (MethodInfo_35FD6C0 *)(ulong)uVar4;
          if (uVar22 == uVar4) goto label_04264b57;
          pSVar24 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._className;
          __this_02 = (System_String_c *)0x0;
          pSVar20 = pSVar7;
          uVar9 = uVar26;
        } while (pSVar24 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
    else {
      uVar26 = 0;
      pSVar24 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._className;
      if (pSVar24 == (System_Collections_Generic_List_object__o *)0x0) {
        __this_02 = (System_String_c *)0x0;
      }
      else {
        do {
          index = (int)pMVar19;
          pMStack_78 = (MethodInfo_35FD6C0 *)0x4264a54;
          pMVar18 = pMVar19;
          pSVar20 = (System_String_o *)
                    System_Collections_Generic_List_object___get_Item(pSVar24,index,MethodInfo_CustomLogicToken_get_Item);
          if ((pSVar20 != (System_String_o *)0x0) && (pSVar7 = pSVar20, (pSVar20->fields)._stringLength == 0))
          {
            __this_02 = pSVar20[1].klass;
            if (__this_02 == (System_String_c *)0x0) break;
            pMVar18 = g_data_057b9bb8;
            if (*(void **)((long)(__this_02->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
            goto label_04264b82;
            pMStack_78 = (MethodInfo_35FD6C0 *)0x4264a90;
            piVar15 = (int *)il2cpp_runtime_helper_02305440();
            uVar4 = (int)uVar26 + (uint)(*piVar15 == 0xb);
            uVar26 = (ulong)uVar4;
            if ((pSVar20->fields)._stringLength == 0) {
              __this_02 = pSVar20[1].klass;
              if (__this_02 == (System_String_c *)0x0) break;
              pMVar18 = g_data_057b9bb8;
              if (*(void **)((long)(__this_02->_1).image + 0x40) != (g_data_057b9bb8->field8_0x40).genericMethod)
              goto label_04264b82;
              pMStack_78 = (MethodInfo_35FD6C0 *)0x4264acf;
              piVar15 = (int *)il2cpp_runtime_helper_02305440();
              uVar4 = uVar4 - (*piVar15 == 0xc);
              uVar26 = (ulong)uVar4;
              if ((pSVar20->fields)._stringLength == 0) {
                __this_02 = pSVar20[1].klass;
                if (__this_02 == (System_String_c *)0x0) break;
                pMVar18 = g_data_057b9bb8;
                if (*(void **)((long)(__this_02->_1).image + 0x40) !=
                    (g_data_057b9bb8->field8_0x40).genericMethod) goto label_04264b82;
                pMStack_78 = (MethodInfo_35FD6C0 *)0x4264b0e;
                piVar15 = (int *)il2cpp_runtime_helper_02305440();
                lVar10 = MethodInfo_Void_Add;
                if ((uVar4 == 0) && (*piVar15 == 0x25)) {
                  puVar3 = (undefined1 *)((long)&(pSStack_70->_1).namespaze + 4);
                  *(int *)puVar3 = *(int *)puVar3 + 1;
                  pcVar1 = (pSStack_70->_1).name;
                  __this_02 = pSStack_70;
                  if (pcVar1 == (char *)0x0) break;
                  uVar4 = *(uint *)&(pSStack_70->_1).namespaze;
                  if (uVar4 < *(uint *)(pcVar1 + 0x18)) {
                    *(uint *)&(pSStack_70->_1).namespaze = uVar4 + 1;
                    *(int *)(pcVar1 + (long)(int)uVar4 * 4 + 0x20) = index;
                    pMVar19 = pMVar18;
                  }
                  else {
                    pMStack_78 = (MethodInfo_35FD6C0 *)0x4264a1f;
                    System_Collections_Generic_List_int___AddWithResize
                              ((System_Collections_Generic_List_int__o *)pSStack_70,index,
                               *(MethodInfo_35FDFF0 **)(*(long *)(*(long *)(lVar10 + 0x20) + 0xc0) + 0x70));
                  }
                  uVar26 = 0;
                  pMVar18 = pMVar19;
                }
              }
            }
          }
          pMVar19 = (MethodInfo_35FD6C0 *)(ulong)(index + 1U);
          if (uVar22 == index + 1U) goto label_04264b57;
          pSVar24 = (System_Collections_Generic_List_object__o *)(pSVar8->fields)._className;
          __this_02 = (System_String_c *)0x0;
        } while (pSVar24 != (System_Collections_Generic_List_object__o *)0x0);
      }
    }
  }
  else {
label_04264b57:
    __this_02 = (System_String_c *)0x0;
    if (pSStack_70 != (System_String_c *)0x0) {
      System_Collections_Generic_List_int___ToArray
                ((System_Collections_Generic_List_int__o *)pSStack_70,MethodInfo_Int32_ToArray);
      return;
    }
  }
  pMStack_78 = (MethodInfo_35FD6C0 *)0x4264b82;
  il2cpp_runtime_helper_022b2c90();
label_04264b82:
  uVar22 = (uint)pMVar18;
  pMStack_78 = (MethodInfo_35FD6C0 *)0x4264b87;
  il2cpp_runtime_helper_022b2fd0();
  method_02 = extraout_RDX;
  pSStack_98 = pSVar7;
  uStack_90 = uVar25;
  pSStack_88 = pSVar8;
  uStack_80 = uVar26;
  pMStack_78 = pMVar19;
  if (g_data_057adc05 == '\0') {
    pSStack_b0 = (System_String_c *)0x4264bb7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057adc05 = '\x01';
    method_02 = extraout_RDX_00;
  }
  pSStack_b0 = (System_String_c *)0x4264bc9;
  uVar4 = CustomLogic_CustomLogicParser__FindSemicolon
                    ((CustomLogic_CustomLogicParser_o *)__this_02,uVar22,method_02);
  uVar26 = (ulong)uVar4;
  pSStack_b0 = (System_String_c *)0x4264be0;
  lVar10 = il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
  iStack_9c = uVar4 + 1;
  pMVar18 = (MethodInfo_35FD6C0 *)&iStack_9c;
  pSStack_b0 = (System_String_c *)0x4264c01;
  pMVar13 = g_data_057b9bb8;
  pMVar11 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_02304f30();
  if (lVar10 != 0) {
    if (pMVar11 == (MethodInfo_35FD6C0 *)0x0) {
label_04264c26:
      if (*(int *)(lVar10 + 0x18) != 0) {
        *(MethodInfo_35FD6C0 **)(lVar10 + 0x20) = pMVar11;
        pSStack_b0 = (System_String_c *)0x4264c3c;
        il2cpp_runtime_helper_022b4080(lVar10 + 0x20);
        uVar26 = (ulong)(uVar4 - 1);
        pSStack_b0 = (System_String_c *)0x4264c50;
        pMVar11 = (MethodInfo_35FD6C0 *)
                  CustomLogic_CustomLogicParser__ParseExpression
                            ((CustomLogic_CustomLogicParser_o *)__this_02,
                             (CustomLogic_CustomLogicBaseExpressionAst_o *)0x0,uVar22,uVar4 - 1,in_R8);
        if (pMVar11 != (MethodInfo_35FD6C0 *)0x0) {
          pSStack_b0 = (System_String_c *)0x4264c67;
          lVar12 = il2cpp_runtime_helper_023051f0(pMVar11);
          if (lVar12 == 0) goto label_04264c9a;
        }
        if (1 < *(uint *)(lVar10 + 0x18)) {
          *(MethodInfo_35FD6C0 **)(lVar10 + 0x28) = pMVar11;
          pSStack_b0 = (System_String_c *)0x4264c85;
          il2cpp_runtime_helper_022b4080(lVar10 + 0x28,pMVar11);
          return;
        }
      }
      pSStack_b0 = (System_String_c *)0x4264c9a;
      il2cpp_runtime_helper_022b2ca0();
    }
    else {
      pSStack_b0 = (System_String_c *)0x4264c21;
      lVar12 = il2cpp_runtime_helper_023051f0(pMVar11);
      if (lVar12 != 0) goto label_04264c26;
    }
label_04264c9a:
    pSStack_b0 = (System_String_c *)0x4264c9f;
    pMVar13 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_0231b270();
    pMVar18 = (MethodInfo_35FD6C0 *)0x0;
    pSStack_b0 = (System_String_c *)0x4264ca9;
    il2cpp_runtime_helper_022b2b10();
    pMVar19 = pMVar11;
  }
  pSStack_b0 = (System_String_c *)0x4264cae;
  uStack_d0 = il2cpp_runtime_helper_022b2c90();
  pMVar23 = (MethodInfo_35FD6C0 *)((ulong)pMVar18 & 0xffffffff);
  pMVar11 = pMVar18;
  lStack_c8 = lVar10;
  uStack_c0 = uVar26;
  uStack_b8 = (ulong)uVar22;
  pSStack_b0 = __this_02;
  if (g_data_057adc0a == '\0') {
    pMStack_d8 = (MethodInfo_35FD6C0 *)0x4264cd2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    pMStack_d8 = (MethodInfo_35FD6C0 *)0x4264cde;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicToken_get_Item);
    g_data_057adc0a = '\x01';
  }
  pSVar24 = (System_Collections_Generic_List_object__o *)pMVar13->invoker_method;
  __this_01 = (CustomLogic_CustomLogicParser_o *)0x0;
  if (pSVar24 != (System_Collections_Generic_List_object__o *)0x0) {
    __this_02 = (System_String_c *)&MethodInfo_CustomLogicToken_get_Item;
    if ((int)pMVar18 < (pSVar24->fields)._size) {
      do {
        pMStack_d8 = (MethodInfo_35FD6C0 *)0x4264d2b;
        pMVar11 = pMVar23;
        pIVar14 = System_Collections_Generic_List_object___get_Item(pSVar24,(int)pMVar23,MethodInfo_CustomLogicToken_get_Item);
        if ((pIVar14 != (Il2CppObject *)0x0) && (*(int *)&pIVar14[1].klass == 0)) {
          __this_01 = pIVar14[1].monitor;
          if (__this_01 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_04264d70;
          pMVar11 = g_data_057b9bb8;
          if ((__this_01->klass->_1).element_class != (g_data_057b9bb8->field8_0x40).genericMethod)
          goto label_04264d75;
          pMStack_d8 = (MethodInfo_35FD6C0 *)0x4264d56;
          piVar15 = (int *)il2cpp_runtime_helper_02305440();
          if (*piVar15 == 0x23) {
            return;
          }
        }
        uVar22 = (int)pMVar23 + 1;
        pMVar23 = (MethodInfo_35FD6C0 *)(ulong)uVar22;
        pSVar24 = (System_Collections_Generic_List_object__o *)pMVar13->invoker_method;
        __this_01 = (CustomLogic_CustomLogicParser_o *)0x0;
        if (pSVar24 == (System_Collections_Generic_List_object__o *)0x0) goto label_04264d70;
      } while ((int)uVar22 < (pSVar24->fields)._size);
    }
    return;
  }
label_04264d70:
  pMStack_d8 = (MethodInfo_35FD6C0 *)0x4264d75;
  il2cpp_runtime_helper_022b2c90();
label_04264d75:
  pMStack_d8 = (MethodInfo_35FD6C0 *)0x4264d7a;
  auVar27 = il2cpp_runtime_helper_022b2fd0();
  pSVar17 = auVar27._8_8_;
  uStack_e8 = auVar27._0_8_;
  pMVar18 = pMVar11;
  pMStack_e0 = pMVar23;
  pMStack_d8 = pMVar13;
  if (g_data_057adc0b == '\0') {
    __this_01 = (CustomLogic_CustomLogicParser_o *)&MethodInfo_Boolean_Contains;
    pMStack_f0 = (MethodInfo_35FD6C0 *)0x4264d9f;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc0b = '\x01';
  }
  if ((pMVar11 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar11->invoker_method != 0)) {
    return;
  }
  if ((pSVar17 == (System_String_array *)0x0) ||
     (__this_01 = (CustomLogic_CustomLogicParser_o *)pMVar11->name,
     __this_01 == (CustomLogic_CustomLogicParser_o *)0x0)) {
    pMStack_f0 = (MethodInfo_35FD6C0 *)0x4264e06;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar18 = g_data_057b9bb8;
    if ((__this_01->klass->_1).element_class == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pMStack_f0 = (MethodInfo_35FD6C0 *)0x4264de6;
      piVar16 = (int32_t *)il2cpp_runtime_helper_02305440();
      System_Collections_Generic_HashSet_int___Contains
                ((System_Collections_Generic_HashSet_int__o *)pSVar17,*piVar16,MethodInfo_Boolean_Contains);
      return;
    }
  }
  pMStack_f0 = (MethodInfo_35FD6C0 *)0x4264e0b;
  il2cpp_runtime_helper_022b2fd0();
  pMStack_108 = pMVar11;
  pSStack_100 = pSVar17;
  pSStack_f8 = __this_02;
  pMStack_f0 = pMVar19;
  if ((pMVar18 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar18->invoker_method != 0)) {
label_04264e6a:
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264e76;
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264e83;
    pSVar17 = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar5,6);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264e8e;
    il2cpp_runtime_helper_01f681a0(pSVar17);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264e9a;
    uVar5 = il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264ea7;
    il2cpp_runtime_helper_01f6dff0(pSVar17,0,uVar5);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264eaf;
    il2cpp_runtime_helper_01f681a0(pMVar18);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264eba;
    __this_01 = (CustomLogic_CustomLogicParser_o *)
                CustomLogic_CustomLogicParser__GetLineNumberString
                          (__this_01,*(int32_t *)&pMVar18->klass,method_03);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264ec5;
    il2cpp_runtime_helper_01f681a0(pSVar17);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264ed5;
    il2cpp_runtime_helper_01f6dff0(pSVar17,1,__this_01);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264edd;
    il2cpp_runtime_helper_01f681a0(pSVar17);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264ee9;
    uVar5 = il2cpp_runtime_helper_023445d0(&", got ");
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264ef9;
    pSVar6 = pSVar17;
    il2cpp_runtime_helper_01f6dff0(pSVar17,2,uVar5);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f01;
    pSVar7 = CustomLogic_CustomLogicParser__GetTokenString
                       ((CustomLogic_CustomLogicParser_o *)pSVar6,(CustomLogic_CustomLogicToken_o *)pMVar18,
                        method_04);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f0c;
    il2cpp_runtime_helper_01f681a0(pSVar17);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f1c;
    il2cpp_runtime_helper_01f6dff0(pSVar17,3,pSVar7);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f24;
    il2cpp_runtime_helper_01f681a0(pSVar17);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f30;
    uVar5 = il2cpp_runtime_helper_023445d0(&", expected ");
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f40;
    il2cpp_runtime_helper_01f6dff0(pSVar17,4,uVar5);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f4c;
    SStack_120.klass = (System_Enum_c *)il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    SStack_120.monitor = (void *)0xffffffffffffffff;
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f67;
    iStack_110 = extraout_EDX;
    pSVar7 = System_Enum__ToString(&SStack_120,(MethodInfo *)0x0);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f72;
    il2cpp_runtime_helper_01f681a0(pSVar17);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f82;
    il2cpp_runtime_helper_01f6dff0(pSVar17,5,pSVar7);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f8c;
    pMVar18 = (MethodInfo_35FD6C0 *)System_String__Concat_3af7570(pSVar17,(MethodInfo *)0x0);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264f9b;
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264fa3;
    pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264fb3;
    System_Exception___ctor_3cf6120(pSVar8,(System_String_o *)pMVar18,(MethodInfo *)0x0);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264fbf;
    pMVar19 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertSymbolValue);
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264fca;
    il2cpp_runtime_helper_022b2b10();
label_04264fca:
    pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264fcf;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar8 = (System_Exception_o *)pMVar18->name;
    pMVar19 = pMVar18;
    if (pSVar8 == (System_Exception_o *)0x0) goto label_04264fca;
    pMVar19 = g_data_057b9bb8;
    if ((pSVar8->klass->_1).element_class == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264e5b;
      piVar15 = (int *)il2cpp_runtime_helper_02305440();
      if (*piVar15 == extraout_EDX) {
        return;
      }
      goto label_04264e6a;
    }
  }
  pCStack_128 = (CustomLogic_CustomLogicParser_o *)0x4264fd4;
  il2cpp_runtime_helper_022b2fd0();
  pSStack_140 = (System_String_o *)0x4264ff3;
  pMStack_138 = pMVar18;
  pSStack_130 = pSVar17;
  pCStack_128 = __this_01;
  il2cpp_runtime_helper_01f681a0(pMVar19);
  pSStack_140 = (System_String_o *)0x4264ffe;
  pSVar7 = CustomLogic_CustomLogicParser__GetLineNumberString
                     ((CustomLogic_CustomLogicParser_o *)pSVar8,*(int32_t *)&pMVar19->klass,method_05);
  pSStack_140 = (System_String_o *)0x4265009;
  pSVar20 = CustomLogic_CustomLogicParser__GetTokenString
                      ((CustomLogic_CustomLogicParser_o *)pSVar8,(CustomLogic_CustomLogicToken_o *)pMVar19,
                       method_06);
  pSStack_140 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_140 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_140 = (System_String_o *)0x426503b;
  pSVar7 = System_String__Concat_3af7470(str0,pSVar7,str2,pSVar20,(MethodInfo *)0x0);
  pSStack_140 = (System_String_o *)0x426504a;
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_140 = (System_String_o *)0x4265052;
  pSVar8 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSStack_140 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(pSVar8,pSVar7,(MethodInfo *)0x0);
  pSStack_140 = (System_String_o *)0x426506e;
  pMVar18 = (MethodInfo_35FD6C0 *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_140 = (System_String_o *)0x4265079;
  uStack_150 = il2cpp_runtime_helper_022b2b10(pSVar8);
  pMVar19 = pMVar18;
  pSStack_148 = pSVar8;
  pSStack_140 = pSVar7;
  if (g_data_057adc0c == '\0') {
    pMStack_158 = (MethodInfo_35FD6C0 *)0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    pMStack_158 = (MethodInfo_35FD6C0 *)0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((pMVar18 == (MethodInfo_35FD6C0 *)0x0) || (*(int *)&pMVar18->invoker_method != 0)) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    pMStack_158 = (MethodInfo_35FD6C0 *)0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     ((long *)pMVar18->name == (long *)0x0)) {
    pMStack_158 = (MethodInfo_35FD6C0 *)0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pMVar19 = g_data_057b9bb8;
    if (*(void **)(*(long *)pMVar18->name + 0x40) == (g_data_057b9bb8->field8_0x40).genericMethod) {
      pMStack_158 = (MethodInfo_35FD6C0 *)0x4265115;
      piVar16 = (int32_t *)il2cpp_runtime_helper_02305440();
      System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar16,MethodInfo_Boolean_ContainsKey);
      return;
    }
  }
  pMStack_158 = (MethodInfo_35FD6C0 *)0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar5 = extraout_RDX_01;
  pMStack_158 = pMVar18;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar5 = extraout_RDX_02;
  }
  if (pMVar19 == (MethodInfo_35FD6C0 *)0x0) {
    return;
  }
  plVar2 = (long *)pMVar19->name;
  if (*(int *)&pMVar19->invoker_method == 0) {
    if (plVar2 != (long *)0x0) {
      if (*(Il2CppClass **)(*plVar2 + 0x40) == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar21 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_160 = *puVar21;
        SStack_170.klass = TypeInfo_CustomLogicSymbol;
        SStack_170.monitor = (void *)0xffffffffffffffff;
        System_Enum__ToString(&SStack_170,(MethodInfo *)0x0);
        return;
      }
      goto label_042651fb;
    }
  }
  else if (plVar2 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar2 + 0x168);
    (*vtableDispatch)(plVar2,*(undefined8 *)(*plVar2 + 0x170),uVar5,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return;
}


// CustomLogic.CustomLogicParser$$AssertFalse
// il2cpp: void CustomLogic_CustomLogicParser__AssertFalse (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x4264fe0

void CustomLogic_CustomLogicParser__AssertFalse
               (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_int__int__o *__this_00;
  long *plVar1;
  code *vtableDispatch;
  System_String_o *pSVar2;
  System_String_o *str3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar3;
  System_Exception_o *__this_01;
  long lVar4;
  int32_t *piVar5;
  undefined4 *puVar6;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  long lVar7;
  System_Enum_o SStack_50;
  undefined4 uStack_40;
  long lStack_38;
  undefined8 uStack_30;
  System_Exception_o *pSStack_28;
  System_String_o *pSStack_20;
  
  pSStack_20 = (System_String_o *)0x4264ff3;
  il2cpp_runtime_helper_01f681a0(token);
  pSStack_20 = (System_String_o *)0x4264ffe;
  pSVar2 = CustomLogic_CustomLogicParser__GetLineNumberString(__this,(token->fields).Line,method_00);
  pSStack_20 = (System_String_o *)0x4265009;
  str3 = CustomLogic_CustomLogicParser__GetTokenString(__this,token,method_01);
  pSStack_20 = (System_String_o *)0x4265018;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Parsing error at line ");
  pSStack_20 = (System_String_o *)0x4265027;
  str2 = (System_String_o *)il2cpp_runtime_helper_023445d0(&", got ");
  pSStack_20 = (System_String_o *)0x426503b;
  pSVar2 = System_String__Concat_3af7470(str0,pSVar2,str2,str3,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x426504a;
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSStack_20 = (System_String_o *)0x4265052;
  __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  pSStack_20 = (System_String_o *)0x4265062;
  System_Exception___ctor_3cf6120(__this_01,pSVar2,(MethodInfo *)0x0);
  pSStack_20 = (System_String_o *)0x426506e;
  lVar4 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AssertFalse);
  pSStack_20 = (System_String_o *)0x4265079;
  uStack_30 = il2cpp_runtime_helper_022b2b10(__this_01);
  lVar7 = lVar4;
  pSStack_28 = __this_01;
  pSStack_20 = pSVar2;
  if (g_data_057adc0c == '\0') {
    lStack_38 = 0x426509c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    lStack_38 = 0x42650a8;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    g_data_057adc0c = '\x01';
  }
  if ((lVar4 == 0) || (*(int *)(lVar4 + 0x10) != 0)) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    lStack_38 = 0x42650dc;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(System_Collections_Generic_Dictionary_int__int__o **)(*(long *)(TypeInfo_CustomLogicSymbols + 0xb8) + 0x18);
  if ((__this_00 == (System_Collections_Generic_Dictionary_int__int__o *)0x0) ||
     (*(long **)(lVar4 + 0x18) == (long *)0x0)) {
    lStack_38 = 0x4265135;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    lVar7 = g_data_057b9bb8;
    if (*(long *)(**(long **)(lVar4 + 0x18) + 0x40) == *(long *)(g_data_057b9bb8 + 0x40)) {
      lStack_38 = 0x4265115;
      piVar5 = (int32_t *)il2cpp_runtime_helper_02305440();
      System_Collections_Generic_Dictionary_int__int___ContainsKey(__this_00,*piVar5,MethodInfo_Boolean_ContainsKey);
      return;
    }
  }
  lStack_38 = 0x426513a;
  il2cpp_runtime_helper_022b2fd0();
  uVar3 = extraout_RDX;
  lStack_38 = lVar4;
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    uVar3 = extraout_RDX_00;
  }
  if (lVar7 == 0) {
    return;
  }
  plVar1 = *(long **)(lVar7 + 0x18);
  if (*(int *)(lVar7 + 0x10) == 0) {
    if (plVar1 != (long *)0x0) {
      if (*(Il2CppClass **)(*plVar1 + 0x40) == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar6 = (undefined4 *)il2cpp_runtime_helper_02305440();
        uStack_40 = *puVar6;
        SStack_50.klass = TypeInfo_CustomLogicSymbol;
        SStack_50.monitor = (void *)0xffffffffffffffff;
        System_Enum__ToString(&SStack_50,(MethodInfo *)0x0);
        return;
      }
      goto label_042651fb;
    }
  }
  else if (plVar1 != (long *)0x0) {
    vtableDispatch = *(code **)(*plVar1 + 0x168);
    (*vtableDispatch)(plVar1,*(undefined8 *)(*plVar1 + 0x170),uVar3,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return;
}


// CustomLogic.CustomLogicParser$$GetTokenString
// il2cpp: System_String_o* CustomLogic_CustomLogicParser__GetTokenString (CustomLogic_CustomLogicParser_o* __this, CustomLogic_CustomLogicToken_o* token, const MethodInfo* method);
// 0x4265140

System_String_o *
CustomLogic_CustomLogicParser__GetTokenString
          (CustomLogic_CustomLogicParser_o *__this,CustomLogic_CustomLogicToken_o *token,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar1;
  undefined4 *puVar2;
  MethodInfo *extraout_RDX;
  Il2CppObject *pIVar3;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (g_data_057adc0d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbol);
    il2cpp_runtime_helper_023445d0(&"null");
    g_data_057adc0d = '\x01';
    method = extraout_RDX;
  }
  if (token == (CustomLogic_CustomLogicToken_o *)0x0) {
    return "null";
  }
  pIVar3 = (token->fields).Value;
  if ((token->fields).Type == 0) {
    if (pIVar3 != (Il2CppObject *)0x0) {
      if ((pIVar3->klass->_1).element_class == (TypeInfo_CustomLogicSymbol->_1).element_class) {
        puVar2 = (undefined4 *)il2cpp_runtime_helper_02305440(pIVar3,TypeInfo_CustomLogicSymbol,method);
        local_10 = *puVar2;
        local_20.klass = TypeInfo_CustomLogicSymbol;
        local_20.monitor = (void *)0xffffffffffffffff;
        pSVar1 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
        return pSVar1;
      }
      goto label_042651fb;
    }
  }
  else if (pIVar3 != (Il2CppObject *)0x0) {
    vtableDispatch = pIVar3->klass->vtable[3].methodPtr;
    pSVar1 = (System_String_o *)
             (*vtableDispatch)(pIVar3,pIVar3->klass->vtable[3].method,method,vtableDispatch);
    return pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
label_042651fb:
  il2cpp_runtime_helper_022b2fd0();
  return (System_String_o *)pIVar3[1].klass;
}


