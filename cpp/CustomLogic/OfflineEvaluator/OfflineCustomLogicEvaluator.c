// Type: CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic.OfflineEvaluator/OfflineCustomLogicEvaluator.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.ctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* script, const MethodInfo* method);
// 0x427ac50

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *script,
               MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  int32_t iVar2;
  CustomLogic_CustomLogicCompiler_o *pCVar3;
  MethodInfo *pMVar4;
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this_01;
  
  if (g_data_057adc5a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    il2cpp_runtime_helper_023445d0(&"TestScript.cl");
    g_data_057adc5a = '\x01';
  }
  pMVar4 = (MethodInfo *)0x0;
  __this_01 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols(__this_01,pMVar4);
  pCVar3 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar3,(MethodInfo *)0x0);
  (__this->fields)._compiler = pCVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._compiler,pCVar3);
  pCVar3 = (__this->fields)._compiler;
  pMVar4 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
  CustomLogic_CustomLogicSourceFile___ctor
            ((CustomLogic_CustomLogicSourceFile_o *)pMVar4,"TestScript.cl",script,4,(MethodInfo *)0x0);
  if (pCVar3 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (pCVar3,(CustomLogic_CustomLogicSourceFile_o *)pMVar4,(MethodInfo *)0x0);
    CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize(__this,pMVar4);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057adc5b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8)
    ;
  }
  else {
    __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8)
    ;
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar2 = System_Collections_Generic_Dictionary_object__int___get_Count(__this_00,MethodInfo_Int32_get_Count);
    if (iVar2 != 0) {
      return;
    }
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) != 0) {
    CustomLogic_CustomLogicSymbols__Init((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_CustomLogicSymbols__Init((MethodInfo *)0x0);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.ctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, CustomLogic_CustomLogicCompiler_o* compiler, const MethodInfo* method);
// 0x427b110

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___ctor_417b110
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicCompiler_o *compiler,MethodInfo *method)

{
  System_Exception_Fields *pSVar1;
  CustomLogic_CustomLogicCompiler_o *__this_00;
  long lVar2;
  System_String_Fields SVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_c *__this_02;
  bool_conflict bVar4;
  System_String_o *pSVar5;
  MethodInfo *pMVar6;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_03;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *__this_04;
  Il2CppObject *pIVar7;
  System_String_o *str0;
  undefined8 uVar8;
  undefined8 in_RAX;
  undefined8 uVar9;
  MethodInfo *pMVar10;
  System_Exception_o *unaff_RBX;
  undefined *puVar11;
  System_Exception_o *__this_05;
  System_Exception_o *__this_06;
  System_Exception_o *unaff_R12;
  System_String_o *unaff_R14;
  CustomLogic_CustomLogicCompiler_o *unaff_R15;
  
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize:
  __this_05 = (System_Exception_o *)__this;
  *(System_String_o **)((long)register0x00000020 + -8) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x10) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
  pMVar6 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x427b121;
  __this_06 = __this_05;
  System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x427b126;
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols
            ((CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)__this_06,pMVar6);
  (__this_05->fields)._message = (System_String_o *)compiler;
  *(undefined8 *)((long)register0x00000020 + -0x20) = 0x427b136;
  uVar9 = il2cpp_runtime_helper_022b4080(&(__this_05->fields)._message);
  pMVar6 = *(MethodInfo **)((long)register0x00000020 + -0x10);
  uVar8 = *(undefined8 *)((long)register0x00000020 + -8);
  *(CustomLogic_CustomLogicCompiler_o **)((long)register0x00000020 + -8) = unaff_R15;
  *(undefined8 *)((long)register0x00000020 + -0x10) = uVar8;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_R12;
  *(MethodInfo **)((long)register0x00000020 + -0x20) = pMVar6;
  *(undefined8 *)((long)register0x00000020 + -0x28) = uVar9;
  if (g_data_057adc5c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae00;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae0c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae18;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae24;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae30;
    il2cpp_runtime_helper_023445d0(&"Main");
    g_data_057adc5c = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicCompiler_o *)(__this_05->fields)._message;
  if (__this_00 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae4c;
    pSVar5 = CustomLogic_CustomLogicCompiler__Compile(__this_00,(MethodInfo *)0x0);
    unaff_R15 = (CustomLogic_CustomLogicCompiler_o *)(__this_05->fields)._message;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae63;
    pMVar6 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae76;
    CustomLogic_CustomLogicLexer___ctor
              ((CustomLogic_CustomLogicLexer_o *)pMVar6,pSVar5,unaff_R15,(MethodInfo *)0x0);
    if (pMVar6 == (MethodInfo *)0x0) goto label_0427b084;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae89;
    tokens = CustomLogic_CustomLogicLexer__GetTokens
                       ((CustomLogic_CustomLogicLexer_o *)pMVar6,(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)pMVar6->return_type;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae97;
    bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto label_0427b089;
    unaff_R15 = (CustomLogic_CustomLogicCompiler_o *)(__this_05->fields)._message;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427aeb3;
    __this_03 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
    pMVar10 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427aec6;
    CustomLogic_CustomLogicParser___ctor(__this_03,tokens,unaff_R15,(MethodInfo *)0x0);
    pMVar6 = (MethodInfo *)0x0;
    if (__this_03 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0427b084;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427aed9;
    start = CustomLogic_CustomLogicParser__GetStartAst(__this_03,(MethodInfo *)0x0);
    pSVar5 = (__this_03->fields).Error;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427aee7;
    bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0a6;
      il2cpp_runtime_helper_01f681a0(__this_03);
      pSVar5 = (__this_03->fields).Error;
      puVar11 = &"Parser error: ";
      goto label_0427b0b1;
    }
    unaff_R15 = (CustomLogic_CustomLogicCompiler_o *)(__this_05->fields)._message;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af03;
    __this_04 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af14;
    CustomLogic_CustomLogicEvaluator___ctor(__this_04,start,unaff_R15,pMVar10);
    pSVar1 = &__this_05->fields;
    (__this_05->fields)._className = (System_String_o *)__this_04;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af29;
    il2cpp_runtime_helper_022b4080(pSVar1,__this_04);
    pMVar6 = (MethodInfo *)(__this_05->fields)._className;
    if (pMVar6 == (MethodInfo *)0x0) goto label_0427b084;
    *(undefined1 *)&pMVar6[1].token = 1;
    unaff_R15 = (CustomLogic_CustomLogicCompiler_o *)&TypeInfo_CustomLogicManager;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af56;
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(MethodInfo **)(lVar2 + 8) = pMVar6;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af70;
    pMVar10 = pMVar6;
    il2cpp_runtime_helper_022b4080(lVar2 + 8);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af78;
    CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses
              ((CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)__this_05,pMVar10);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af80;
    CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses
              ((CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)__this_05,pMVar10);
    if (g_data_057adc61 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af95;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427afa1;
      il2cpp_runtime_helper_023445d0(&"Main");
      g_data_057adc61 = '\x01';
    }
    if (pSVar1->_className != (System_String_o *)0x0) {
      SVar3 = pSVar1->_className[2].fields;
      if (SVar3 == (System_String_Fields)0x0) {
        return;
      }
      __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar3 + 0x18);
      if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        pMVar6 = (MethodInfo *)&"Main";
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427afe7;
        bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (__this_01,(Il2CppObject *)"Main",MethodInfo_Boolean_ContainsKey);
        unaff_R15 = "Main";
        if ((char)bVar4 == '\0') {
          return;
        }
        if (g_data_057adc60 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b003;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b00f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Item);
          g_data_057adc60 = '\x01';
        }
        if (pSVar1->_className != (System_String_o *)0x0) goto code_r0x0427b01e;
      }
    }
  }
label_0427b084:
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b089;
  il2cpp_runtime_helper_022b2c90();
label_0427b089:
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b091;
  il2cpp_runtime_helper_01f681a0(pMVar6);
  pSVar5 = (System_String_o *)pMVar6->return_type;
  puVar11 = &"Lexer error: ";
label_0427b0b1:
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0b6;
  str0 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar11);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0c3;
  unaff_R14 = System_String__Concat_3ae5ba0(str0,pSVar5,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0d2;
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0da;
  unaff_RBX = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0ea;
  System_Exception___ctor_3cf6120(unaff_RBX,unaff_R14,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0f6;
  compiler = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CompileAndInitialize);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b101;
  __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)unaff_RBX;
  in_RAX = il2cpp_runtime_helper_022b2b10();
  register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
  unaff_R12 = __this_05;
  goto CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize;
code_r0x0427b01e:
  __this_02 = pSVar1->_className[3].klass;
  if (__this_02 != (System_String_c *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b03c;
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                       (Il2CppObject *)unaff_R15,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b055;
      pIVar7 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                          (Il2CppObject *)unaff_R15,MethodInfo_CustomLogicClassInstance_get_Item);
      goto label_0427b068;
    }
  }
  pIVar7 = (Il2CppObject *)0x0;
label_0427b068:
  (__this_05->fields)._data = (System_Collections_IDictionary_o *)pIVar7;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._data);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$InitializeSymbols
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427ad30

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__int__o *__this_00;
  int32_t iVar2;
  
  if (g_data_057adc5b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    g_data_057adc5b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicSymbols + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8)
    ;
  }
  else {
    __this_00 = (System_Collections_Generic_Dictionary_object__int__o *)**(undefined8 **)(TypeInfo_CustomLogicSymbols + 0xb8)
    ;
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_object__int__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    iVar2 = System_Collections_Generic_Dictionary_object__int___get_Count(__this_00,MethodInfo_Int32_get_Count);
    if (iVar2 != 0) {
      return;
    }
  }
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) != 0) {
    CustomLogic_CustomLogicSymbols__Init((MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_CustomLogicSymbols__Init((MethodInfo *)0x0);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CompileAndInitialize
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427ade0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CompileAndInitialize
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  System_Exception_Fields *pSVar1;
  CustomLogic_CustomLogicCompiler_o *__this_00;
  long lVar2;
  System_String_Fields SVar3;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  System_String_c *__this_02;
  bool_conflict bVar4;
  undefined8 in_RAX;
  System_String_o *pSVar5;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_03;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *__this_04;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  System_Exception_o *pSVar9;
  MethodInfo *pMVar10;
  MethodInfo *unaff_RBX;
  System_Exception_o *__this_05;
  undefined *puVar11;
  System_Exception_o *unaff_R12;
  undefined8 unaff_R14;
  CustomLogic_CustomLogicCompiler_o *unaff_R15;
  
code_r0x0427ade0:
  __this_05 = (System_Exception_o *)__this;
  *(CustomLogic_CustomLogicCompiler_o **)((long)register0x00000020 + -8) = unaff_R15;
  *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
  *(System_Exception_o **)((long)register0x00000020 + -0x18) = unaff_R12;
  *(MethodInfo **)((long)register0x00000020 + -0x20) = unaff_RBX;
  *(undefined8 *)((long)register0x00000020 + -0x28) = in_RAX;
  if (g_data_057adc5c == '\0') {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae00;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae0c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae18;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae24;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae30;
    il2cpp_runtime_helper_023445d0(&"Main");
    g_data_057adc5c = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicCompiler_o *)(__this_05->fields)._message;
  if (__this_00 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae4c;
    pSVar5 = CustomLogic_CustomLogicCompiler__Compile(__this_00,(MethodInfo *)0x0);
    unaff_R15 = (CustomLogic_CustomLogicCompiler_o *)(__this_05->fields)._message;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae63;
    unaff_RBX = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae76;
    CustomLogic_CustomLogicLexer___ctor
              ((CustomLogic_CustomLogicLexer_o *)unaff_RBX,pSVar5,unaff_R15,(MethodInfo *)0x0);
    if (unaff_RBX == (MethodInfo *)0x0) goto label_0427b084;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae89;
    tokens = CustomLogic_CustomLogicLexer__GetTokens
                       ((CustomLogic_CustomLogicLexer_o *)unaff_RBX,(MethodInfo *)0x0);
    pSVar5 = (System_String_o *)unaff_RBX->return_type;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427ae97;
    bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto label_0427b089;
    unaff_R15 = (CustomLogic_CustomLogicCompiler_o *)(__this_05->fields)._message;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427aeb3;
    __this_03 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
    pMVar10 = (MethodInfo *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427aec6;
    CustomLogic_CustomLogicParser___ctor(__this_03,tokens,unaff_R15,(MethodInfo *)0x0);
    unaff_RBX = (MethodInfo *)0x0;
    if (__this_03 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_0427b084;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427aed9;
    start = CustomLogic_CustomLogicParser__GetStartAst(__this_03,(MethodInfo *)0x0);
    pSVar5 = (__this_03->fields).Error;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427aee7;
    bVar4 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0a6;
      il2cpp_runtime_helper_01f681a0(__this_03);
      pSVar5 = (__this_03->fields).Error;
      puVar11 = &"Parser error: ";
      goto label_0427b0b1;
    }
    unaff_R15 = (CustomLogic_CustomLogicCompiler_o *)(__this_05->fields)._message;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af03;
    __this_04 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af14;
    CustomLogic_CustomLogicEvaluator___ctor(__this_04,start,unaff_R15,pMVar10);
    pSVar1 = &__this_05->fields;
    (__this_05->fields)._className = (System_String_o *)__this_04;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af29;
    il2cpp_runtime_helper_022b4080(pSVar1,__this_04);
    unaff_RBX = (MethodInfo *)(__this_05->fields)._className;
    if (unaff_RBX == (MethodInfo *)0x0) goto label_0427b084;
    *(undefined1 *)&unaff_RBX[1].token = 1;
    unaff_R15 = (CustomLogic_CustomLogicCompiler_o *)&TypeInfo_CustomLogicManager;
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af56;
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(MethodInfo **)(lVar2 + 8) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af70;
    pMVar10 = unaff_RBX;
    il2cpp_runtime_helper_022b4080(lVar2 + 8);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af78;
    CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses
              ((CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)__this_05,pMVar10);
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af80;
    CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses
              ((CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)__this_05,pMVar10);
    if (g_data_057adc61 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427af95;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427afa1;
      il2cpp_runtime_helper_023445d0(&"Main");
      g_data_057adc61 = '\x01';
    }
    if (pSVar1->_className != (System_String_o *)0x0) {
      SVar3 = pSVar1->_className[2].fields;
      if (SVar3 == (System_String_Fields)0x0) {
        return;
      }
      __this_01 = *(System_Collections_Generic_Dictionary_object__object__o **)((long)SVar3 + 0x18);
      if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        unaff_RBX = (MethodInfo *)&"Main";
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427afe7;
        bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          (__this_01,(Il2CppObject *)"Main",MethodInfo_Boolean_ContainsKey);
        unaff_R15 = "Main";
        if ((char)bVar4 == '\0') {
          return;
        }
        if (g_data_057adc60 == '\0') {
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b003;
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
          *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b00f;
          il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Item);
          g_data_057adc60 = '\x01';
        }
        if (pSVar1->_className != (System_String_o *)0x0) goto code_r0x0427b01e;
      }
    }
  }
label_0427b084:
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b089;
  il2cpp_runtime_helper_022b2c90();
label_0427b089:
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b091;
  il2cpp_runtime_helper_01f681a0(unaff_RBX);
  pSVar5 = (System_String_o *)unaff_RBX->return_type;
  puVar11 = &"Lexer error: ";
label_0427b0b1:
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0b6;
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(puVar11);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0c3;
  pSVar5 = System_String__Concat_3ae5ba0(pSVar7,pSVar5,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0d2;
  uVar8 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0da;
  pSVar9 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar8);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0ea;
  System_Exception___ctor_3cf6120(pSVar9,pSVar5,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b0f6;
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CompileAndInitialize);
  *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b101;
  __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)pSVar9;
  uVar8 = il2cpp_runtime_helper_022b2b10();
  *(System_String_o **)((long)register0x00000020 + -0x30) = pSVar5;
  *(System_Exception_o **)((long)register0x00000020 + -0x38) = pSVar9;
  *(undefined8 *)((long)register0x00000020 + -0x40) = uVar8;
  pMVar10 = (MethodInfo *)0x0;
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427b121;
  pSVar9 = (System_Exception_o *)__this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427b126;
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeSymbols
            ((CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)pSVar9,pMVar10);
  (((System_Exception_o *)__this)->fields)._message = pSVar7;
  *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427b136;
  in_RAX = il2cpp_runtime_helper_022b4080(&(((System_Exception_o *)__this)->fields)._message);
  unaff_RBX = *(MethodInfo **)((long)register0x00000020 + -0x38);
  unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x30);
  register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
  unaff_R12 = __this_05;
  goto code_r0x0427ade0;
code_r0x0427b01e:
  __this_02 = pSVar1->_className[3].klass;
  if (__this_02 != (System_String_c *)0x0) {
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b03c;
    bVar4 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                       (Il2CppObject *)unaff_R15,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar4 != '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x427b055;
      pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                          (Il2CppObject *)unaff_R15,MethodInfo_CustomLogicClassInstance_get_Item);
      goto label_0427b068;
    }
  }
  pIVar6 = (Il2CppObject *)0x0;
label_0427b068:
  (__this_05->fields)._data = (System_Collections_IDictionary_o *)pIVar6;
  il2cpp_runtime_helper_022b4080(&(__this_05->fields)._data);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$InitializeStaticClasses
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427b150

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__InitializeStaticClasses
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  byte bVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  CustomLogic_CustomLogicStartAst_o *pCVar3;
  System_Collections_Generic_Dictionary_object__object__o *staticClasses;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *pSVar6;
  System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *pSVar7;
  long lVar8;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_05;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_06;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_07;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_08;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_09;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_10;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_11;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_12;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_13;
  System_Nullable_CustomLogicSourceType__o callerNamespace;
  bool_conflict bVar9;
  int32_t key;
  CustomLogic_BuiltinClassInstance_o *value;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_14;
  Il2CppObject *pIVar10;
  int *piVar11;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_15;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar12;
  CustomLogic_CustomLogicClassInstance_o *value_00;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *pSVar13;
  long *plVar14;
  MethodInfo *pMVar15;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *in_R9;
  _union_332950 *unaff_R12;
  _union_332950 *unaff_R14;
  System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
  *__this_16;
  undefined1 auVar16 [12];
  undefined8 in_stack_fffffffffffffee8;
  System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
  *in_stack_fffffffffffffef0;
  System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
  *pSVar17;
  char cVar18;
  undefined7 uVar19;
  System_Collections_Generic_Dictionary_object__object__o *local_f8;
  int32_t local_f0;
  int32_t local_ec;
  _union_332950 local_e8;
  undefined8 uStack_e0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_d8;
  System_Nullable_CustomLogicSourceType__Fields local_d0;
  _union_332950 local_c8;
  undefined8 uStack_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_b8;
  _union_332950 local_a8;
  undefined8 uStack_a0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_98;
  _union_332950 local_88;
  undefined8 uStack_80;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_78;
  _union_332950 local_68;
  undefined8 uStack_60;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_58;
  _union_332950 local_48;
  undefined8 uStack_40;
  System_Collections_Generic_Dictionary_TKey__TValue__o *local_38;
  
  if (g_data_057adc5d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicBuiltinTypes);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_CustomLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassDefinitionAst_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_CustomLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_D);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_CustomLogic_Cus);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_CustomLogicSourceType_CustomLogicClassInstanc);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_CustomLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicSourceType_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OfflineCustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"Main");
    g_data_057adc5d = '\x01';
  }
  local_c8.genericMethod = (void *)0x0;
  uStack_c0 = 0;
  local_b8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_68.genericMethod = (void *)0x0;
  uStack_60 = 0;
  local_58 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  cVar18 = '\0';
  uVar19 = 0;
  local_ec = 0;
  local_d0.hasValue = 0;
  local_d0.value = 0;
  local_f0 = 0;
  local_88.genericMethod = (void *)0x0;
  uStack_80 = 0;
  local_78 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a8.genericMethod = (void *)0x0;
  uStack_a0 = 0;
  local_98 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_48.genericMethod = (void *)0x0;
  uStack_40 = 0;
  local_38 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pCVar2 = (__this->fields)._evaluator;
  if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_0427bdb0;
  pCVar3 = (pCVar2->fields)._start;
  staticClasses = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields)._staticClasses;
  pSVar17 = (pCVar2->fields)._namespacedStaticClasses;
  unaff_R14 = (_union_332950 *)&TypeInfo_CustomLogicBuiltinTypes;
  if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x20);
  if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0427bdb0;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)&local_e8,pSVar4,MethodInfo_HashSet_1_T_Enumerator_System_String_GetEnumerator);
  local_b8 = local_d8;
  local_c8 = local_e8;
  uStack_c0 = uStack_e0;
  local_f8 = staticClasses;
  if (staticClasses == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    unaff_R14 = &local_c8;
    unaff_R12 = (_union_332950 *)&MethodInfo_Boolean_Contains;
    __this_16 = pSVar17;
    do {
      __this_01.fields._8_8_ = __this_16;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8;
      __this_01.fields._current._0_1_ = cVar18;
      __this_01.fields._current._1_7_ = uVar19;
      bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (__this_01,(MethodInfo_3219C40 *)unaff_R14);
      pSVar12 = local_b8;
      if ((char)bVar9 == '\0') goto label_0427b60e;
      pSVar17 = __this_16;
      if (*(int *)(TypeInfo_OfflineCustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar17 = __this_16;
      }
      if ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8) ==
          (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0427bd7b;
      bVar9 = System_Collections_Generic_HashSet_object___Contains
                        ((System_Collections_Generic_HashSet_object__o *)
                         **(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8),(Il2CppObject *)pSVar12,MethodInfo_Boolean_Contains);
      __this_16 = pSVar17;
    } while ((char)bVar9 == '\0');
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_16 = pSVar17;
    }
    pSVar5 = (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8);
    if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
              ((System_String_o *)pSVar12,pSVar5,(MethodInfo *)0x0);
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    unaff_R12 = (_union_332950 *)&MethodInfo_Boolean_MoveNext;
    unaff_R14 = &local_c8;
    while (__this_00.fields._8_8_ = pSVar17,
          __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8,
          __this_00.fields._current._0_1_ = cVar18, __this_00.fields._current._1_7_ = uVar19,
          bVar9 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                            (__this_00,(MethodInfo_3219C40 *)unaff_R14), pSVar12 = local_b8,
          __this_16 = pSVar17, (char)bVar9 != '\0') {
      if (*(int *)(TypeInfo_OfflineCustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if ((System_Collections_Generic_HashSet_object__o *)**(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8) ==
          (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0427bd7b;
      bVar9 = System_Collections_Generic_HashSet_object___Contains
                        ((System_Collections_Generic_HashSet_object__o *)
                         **(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8),(Il2CppObject *)pSVar12,MethodInfo_Boolean_Contains);
      if ((char)bVar9 != '\0') {
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8);
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value = CustomLogic_CustomLogicBuiltinTypes__CreateClassInstance
                          ((System_String_o *)pSVar12,pSVar5,(MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (staticClasses,(Il2CppObject *)pSVar12,(Il2CppObject *)value,
                   (MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
      }
    }
  }
label_0427b60e:
  unaff_R14 = &local_c8;
  __this_02.fields._8_8_ = __this_16;
  __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)in_stack_fffffffffffffee8;
  __this_02.fields._current._0_1_ = cVar18;
  __this_02.fields._current._1_7_ = uVar19;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose(__this_02,(MethodInfo_3219C30 *)&local_c8);
  in_stack_fffffffffffffef0 = __this_16;
  if (pCVar3 == (CustomLogic_CustomLogicStartAst_o *)0x0) goto label_0427bdb0;
  pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes;
  if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0427bdb0;
  pSVar17 = __this_16;
  __this_14 = System_Collections_Generic_Dictionary_object__object___get_Keys(pSVar6,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Cus);
  in_stack_fffffffffffffef0 = pSVar17;
  if (__this_14 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)
  goto label_0427bdb0;
  pMVar15 = (MethodInfo *)&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume;
  System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
            ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)&local_e8,
             __this_14,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
  local_58 = local_d8;
  local_68 = local_e8;
  uStack_60 = uStack_e0;
  unaff_R12 = &local_68;
  while (__this_03.fields._8_8_ = pSVar17,
        __this_03.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8,
        __this_03.fields._currentKey._0_1_ = cVar18, __this_03.fields._currentKey._1_7_ = uVar19,
        bVar9 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                          (__this_03,(MethodInfo_3251B20 *)unaff_R12), pSVar12 = local_58, (char)bVar9 != '\0'
        ) {
    bVar9 = System_String__op_Equality((System_String_o *)local_58,"Main",(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes;
      if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0427bd85;
      pIVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                          (pSVar6,(Il2CppObject *)pSVar12,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
      if (pIVar10 == (Il2CppObject *)0x0) goto label_0427bd8f;
      if (pIVar10[2].monitor == (void *)0x0) goto label_0427bd8a;
      plVar14 = *(long **)((long)pIVar10[2].monitor + 0x18);
      if (plVar14 == (long *)0x0) goto label_0427bd94;
      if (*(long *)(*plVar14 + 0x40) != *(long *)(g_data_057b9bb8 + 0x40)) goto label_0427bd99;
      piVar11 = (int *)il2cpp_runtime_helper_02305440();
      if (*piVar11 == 2) {
        cVar18 = '\0';
        uVar19 = 0;
        pSVar7 = (pCVar3->fields).ClassNamespaces;
        if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)
        goto label_0427bdbf;
        bVar9 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                           (Il2CppObject *)pSVar12,&local_ec,MethodInfo_Boolean_TryGetValue);
        if ((char)bVar9 != '\0') {
          System_Nullable_Int32Enum____ctor
                    ((System_Nullable_Int32Enum__o)&stack0xfffffffffffffef8,local_ec,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
        }
        pCVar2 = (__this->fields)._evaluator;
        if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_0427bdc4;
        callerNamespace.fields._1_7_ = uVar19;
        callerNamespace.fields.hasValue._0_1_ = cVar18;
        pMVar15 = (MethodInfo *)0x0;
        unaff_R14 = (_union_332950 *)
                    CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                              (pCVar2,(System_String_o *)pSVar12,
                               (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),0,callerNamespace
                               ,in_R9);
        if (unaff_R14 == (_union_332950 *)0x0) goto label_0427bdce;
        *(ulong *)((long)unaff_R14 + 0x24) = CONCAT71(uVar19,cVar18);
        if (*(int *)(TypeInfo_CustomLogicBuiltinTypes + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_CustomLogicBuiltinTypes + 0xb8) + 0x20);
        if (pSVar4 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0427bdba;
        bVar9 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar4,(Il2CppObject *)pSVar12,MethodInfo_Boolean_Contains);
        if ((char)bVar9 == '\0') {
          if (staticClasses == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto label_0427bdec;
          pMVar15 = MethodInfo_Void_set_Item;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (staticClasses,(Il2CppObject *)pSVar12,(Il2CppObject *)unaff_R14,
                     (MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
        }
        else {
          if (__this_16 ==
              (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
               *)0x0) goto label_0427bdf6;
          bVar9 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_16,
                             (Il2CppObject *)pSVar12,MethodInfo_Boolean_ContainsKey);
          if ((char)bVar9 == '\0') {
            __this_15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                        il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_CustomLogicSourceType_CustomLogicClassInstanc);
            System_Collections_Generic_Dictionary_Int32Enum__object____ctor(__this_15,MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_CustomLog);
            pMVar15 = MethodInfo_Void_set_Item;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_16,
                       (Il2CppObject *)pSVar12,(Il2CppObject *)__this_15,(MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
          }
          if (cVar18 != '\0') {
            pSVar12 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)__this_16,
                                 (Il2CppObject *)pSVar12,MethodInfo_Dictionary_2_CustomLogic_CustomLogicSourceType_CustomLog);
            key = System_Nullable_Int32Enum___get_Value
                            ((System_Nullable_Int32Enum__o)&stack0xfffffffffffffef8,MethodInfo_CustomLogicSourceType_get_Value);
            if (pSVar12 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0427be00;
            pMVar15 = MethodInfo_Void_set_Item;
            System_Collections_Generic_Dictionary_Int32Enum__object___set_Item
                      (pSVar12,key,(Il2CppObject *)unaff_R14,(MethodInfo_30D4460 *)MethodInfo_Void_set_Item);
          }
        }
      }
      else {
        pSVar6 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar3->fields).Classes;
        if (pSVar6 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_0427bdb5;
        pIVar10 = System_Collections_Generic_Dictionary_object__object___get_Item
                            (pSVar6,(Il2CppObject *)pSVar12,MethodInfo_CustomLogicClassDefinitionAst_get_Item);
        if (pIVar10 == (Il2CppObject *)0x0) goto label_0427bddd;
        if (pIVar10[2].monitor == (void *)0x0) goto label_0427bdd8;
        plVar14 = *(long **)((long)pIVar10[2].monitor + 0x18);
        if (plVar14 == (long *)0x0) goto label_0427bdd3;
        if (*(long *)(*plVar14 + 0x40) != *(long *)(g_data_057b9bb8 + 0x40)) goto label_0427bdc9;
        piVar11 = (int *)il2cpp_runtime_helper_02305440();
        if (*piVar11 == 3) {
          local_d0.hasValue = 0;
          local_d0.value = 0;
          pSVar7 = (pCVar3->fields).ClassNamespaces;
          if (pSVar7 == (System_Collections_Generic_Dictionary_string__CustomLogicSourceType__o *)0x0)
          goto label_0427bdfb;
          bVar9 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar7,
                             (Il2CppObject *)pSVar12,&local_f0,MethodInfo_Boolean_TryGetValue);
          if ((char)bVar9 != '\0') {
            System_Nullable_Int32Enum____ctor((System_Nullable_Int32Enum__o)&local_d0,local_f0,MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
          }
          pCVar2 = (__this->fields)._evaluator;
          if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_0427bde2;
          value_00 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                               (pCVar2,(System_String_o *)pSVar12,
                                (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),0,
                                (System_Nullable_CustomLogicSourceType__o)local_d0,in_R9);
          if (value_00 == (CustomLogic_CustomLogicClassInstance_o *)0x0) goto label_0427bde7;
          (value_00->fields)._Namespace_k__BackingField.fields = local_d0;
          if (staticClasses == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
          goto label_0427bdf1;
          pMVar15 = MethodInfo_Void_set_Item;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (staticClasses,(Il2CppObject *)pSVar12,(Il2CppObject *)value_00,
                     (MethodInfo_3104DF0 *)MethodInfo_Void_set_Item);
        }
      }
    }
    else {
      CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal
                (__this,(System_String_o *)pSVar12,
                 (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)staticClasses,
                 pMVar15);
    }
  }
  __this_04.fields._8_8_ = pSVar17;
  __this_04.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
  __this_04.fields._currentKey._0_1_ = cVar18;
  __this_04.fields._currentKey._1_7_ = uVar19;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251B10 *)&local_68);
label_0427ba9e:
  in_stack_fffffffffffffef0 = pSVar17;
  if ((local_f8 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) &&
     (pSVar13 = System_Collections_Generic_Dictionary_object__object___get_Values(local_f8,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C),
     in_stack_fffffffffffffef0 = pSVar17,
     pSVar13 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&local_e8,
               pSVar13,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    local_78 = local_d8;
    local_88 = local_e8;
    uStack_80 = uStack_e0;
    unaff_R14 = (_union_332950 *)&MethodInfo_Boolean_MoveNext;
label_0427bb10:
    __this_05.fields._8_8_ = pSVar17;
    __this_05.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
    __this_05.fields._currentValue._0_1_ = cVar18;
    __this_05.fields._currentValue._1_7_ = uVar19;
    bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                      (__this_05,(MethodInfo_3251CB0 *)&local_88);
    if ((char)bVar9 != '\0') {
      pMVar15 = extraout_RDX;
      if (local_78 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto code_r0x0427bb2c;
      goto label_0427bb50;
    }
    __this_06.fields._8_8_ = pSVar17;
    __this_06.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
    __this_06.fields._currentValue._0_1_ = cVar18;
    __this_06.fields._currentValue._1_7_ = uVar19;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_06,(MethodInfo_3251CA0 *)&local_88);
    unaff_R14 = (_union_332950 *)&MethodInfo_Boolean_MoveNext;
    in_stack_fffffffffffffef0 = pSVar17;
    if ((__this_16 ==
         (System_Collections_Generic_Dictionary_string__Dictionary_CustomLogicSourceType__CustomLogicClassInstance___o
          *)0x0) ||
       (pSVar13 = System_Collections_Generic_Dictionary_object__object___get_Values
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_16,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_D
                            ), in_stack_fffffffffffffef0 = pSVar17,
       pSVar13 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0))
    goto label_0427bdb0;
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&local_e8,
               pSVar13,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    local_98 = local_d8;
    local_a8 = local_e8;
    uStack_a0 = uStack_e0;
    unaff_R14 = (_union_332950 *)&MethodInfo_Boolean_MoveNext;
    while( true ) {
      __this_07.fields._8_8_ = pSVar17;
      __this_07.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
      __this_07.fields._currentValue._0_1_ = cVar18;
      __this_07.fields._currentValue._1_7_ = uVar19;
      bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        (__this_07,(MethodInfo_3251CB0 *)&local_a8);
      if ((char)bVar9 == '\0') {
        __this_10.fields._8_8_ = pSVar17;
        __this_10.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
        __this_10.fields._currentValue._0_1_ = cVar18;
        __this_10.fields._currentValue._1_7_ = uVar19;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_10,(MethodInfo_3251CA0 *)&local_a8);
        return;
      }
      if (local_98 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0427bd9e;
      pSVar13 = System_Collections_Generic_Dictionary_Int32Enum__object___get_Values(local_98,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_CustomLogic_Cus);
      if (pSVar13 == (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) break;
      System_Collections_Generic_Dictionary_ValueCollection_Int32Enum__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)&local_e8
                 ,pSVar13,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
      local_38 = local_d8;
      local_48 = local_e8;
      uStack_40 = uStack_e0;
label_0427bc60:
      __this_08.fields._8_8_ = pSVar17;
      __this_08.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
      __this_08.fields._currentValue._0_1_ = cVar18;
      __this_08.fields._currentValue._1_7_ = uVar19;
      bVar9 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___MoveNext
                        (__this_08,(MethodInfo_3249910 *)&local_48);
      if ((char)bVar9 != '\0') {
        pMVar15 = extraout_RDX_00;
        if (local_38 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto code_r0x0427bc7c;
        goto label_0427bca0;
      }
      unaff_R12 = (_union_332950 *)0x0;
      __this_09.fields._8_8_ = pSVar17;
      __this_09.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
      __this_09.fields._currentValue._0_1_ = cVar18;
      __this_09.fields._currentValue._1_7_ = uVar19;
      System_Collections_Generic_Dictionary_ValueCollection_Enumerator_Int32Enum__object___Dispose
                (__this_09,(MethodInfo_3249900 *)&local_48);
    }
    goto label_0427bda3;
  }
  goto label_0427bdb0;
code_r0x0427bb2c:
  bVar1 = (TypeInfo_BuiltinClassInstance->_2).naturalAligment;
  pMVar15 = (MethodInfo *)(ulong)bVar1;
  if (((local_78->klass->_2).naturalAligment < bVar1) ||
     ((local_78->klass->_2).typeHierarchy[(long)&pMVar15[-1].field_0x57] != TypeInfo_BuiltinClassInstance)) {
label_0427bb50:
    pCVar2 = (__this->fields)._evaluator;
    if (pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_0427bd80;
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)local_78,pMVar15);
  }
  goto label_0427bb10;
code_r0x0427bc7c:
  bVar1 = (TypeInfo_BuiltinClassInstance->_2).naturalAligment;
  pMVar15 = (MethodInfo *)(ulong)bVar1;
  if ((bVar1 <= (local_38->klass->_2).naturalAligment) &&
     ((local_38->klass->_2).typeHierarchy[(long)&pMVar15[-1].field_0x57] == TypeInfo_BuiltinClassInstance)) goto label_0427bc60;
label_0427bca0:
  pCVar2 = (__this->fields)._evaluator;
  if (pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)local_38,pMVar15);
    goto label_0427bc60;
  }
  il2cpp_runtime_helper_022b2c90();
label_0427bd7b:
  il2cpp_runtime_helper_022b2c90();
label_0427bd80:
  il2cpp_runtime_helper_022b2c90();
label_0427bd85:
  il2cpp_runtime_helper_022b2c90();
label_0427bd8a:
  il2cpp_runtime_helper_022b2c90();
label_0427bd8f:
  il2cpp_runtime_helper_022b2c90();
label_0427bd94:
  il2cpp_runtime_helper_022b2c90();
label_0427bd99:
  il2cpp_runtime_helper_022b2fd0();
label_0427bd9e:
  il2cpp_runtime_helper_022b2c90();
label_0427bda3:
  il2cpp_runtime_helper_022b2c90();
  il2cpp_runtime_helper_022fefe0(unaff_R12);
  in_stack_fffffffffffffef0 = pSVar17;
label_0427bdb0:
  pSVar17 = in_stack_fffffffffffffef0;
  il2cpp_runtime_helper_022b2c90();
label_0427bdb5:
  il2cpp_runtime_helper_022b2c90();
label_0427bdba:
  il2cpp_runtime_helper_022b2c90();
label_0427bdbf:
  il2cpp_runtime_helper_022b2c90();
label_0427bdc4:
  il2cpp_runtime_helper_022b2c90();
label_0427bdc9:
  il2cpp_runtime_helper_022b2fd0();
label_0427bdce:
  il2cpp_runtime_helper_022b2c90();
label_0427bdd3:
  il2cpp_runtime_helper_022b2c90();
label_0427bdd8:
  il2cpp_runtime_helper_022b2c90();
label_0427bddd:
  il2cpp_runtime_helper_022b2c90();
label_0427bde2:
  il2cpp_runtime_helper_022b2c90();
label_0427bde7:
  il2cpp_runtime_helper_022b2c90();
label_0427bdec:
  il2cpp_runtime_helper_022b2c90();
label_0427bdf1:
  il2cpp_runtime_helper_022b2c90();
label_0427bdf6:
  il2cpp_runtime_helper_022b2c90();
label_0427bdfb:
  il2cpp_runtime_helper_022b2c90();
label_0427be00:
  __this_16 = pSVar17;
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ != 1) {
    __this_12.fields._8_8_ = __this_16;
    __this_12.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
    __this_12.fields._currentKey._0_1_ = cVar18;
    __this_12.fields._currentKey._1_7_ = uVar19;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_12,(MethodInfo_3251B10 *)&local_68);
    unaff_R14 = auVar16._0_8_;
    goto label_0427c36e;
  }
  pSVar17 = __this_16;
  plVar14 = (long *)__cxa_begin_catch(auVar16._0_8_);
  lVar8 = *plVar14;
  __cxa_end_catch();
  __this_11.fields._8_8_ = pSVar17;
  __this_11.fields._dictionary =
       (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
  __this_11.fields._currentKey._0_1_ = cVar18;
  __this_11.fields._currentKey._1_7_ = uVar19;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_11,(MethodInfo_3251B10 *)&local_68);
  if (lVar8 != 0) {
    il2cpp_runtime_helper_022fefe0(lVar8);
    __this_13.fields._8_8_ = pSVar17;
    __this_13.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_fffffffffffffee8;
    __this_13.fields._currentValue._0_1_ = cVar18;
    __this_13.fields._currentValue._1_7_ = uVar19;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_13,(MethodInfo_3251CA0 *)&local_88);
label_0427c36e:
    _Unwind_Resume(unaff_R14);
  }
  goto label_0427ba9e;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CallInitOnStaticClasses
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427c390

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CallInitOnStaticClasses
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  long lVar2;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o __this_04;
  bool_conflict bVar3;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *__this_05;
  long *plVar4;
  MethodInfo *in_R9;
  undefined1 auVar5 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar6;
  Il2CppMethodPointer pIVar7;
  CustomLogic_CustomLogicClassInstance_o *pCVar8;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  
  if (g_data_057adc5e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    il2cpp_runtime_helper_023445d0(&"Init");
    g_data_057adc5e = '\x01';
  }
  pSVar6 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  pCVar8 = (CustomLogic_CustomLogicClassInstance_o *)0x0;
  pCVar1 = (__this->fields)._evaluator;
  if (((pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
      (__this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields)._staticClasses,
      __this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0)) &&
     (__this_05 = System_Collections_Generic_Dictionary_object__object___get_Values(__this_00,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_System_String_C),
     __this_05 != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0)) {
    System_Collections_Generic_Dictionary_ValueCollection_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_ValueCollection_Enumerator_TKey__TValue__o *)
               &stack0xffffffffffffffb8,__this_05,MethodInfo_Dictionary_2_TKey_TValue_ValueCollection_TKey_TValue_Enu);
    classInstance = pCVar8;
    while( true ) {
      __this_01.fields._8_8_ = pIVar7;
      __this_01.fields._dictionary = pSVar6;
      __this_01.fields._currentValue = (Il2CppObject *)classInstance;
      bVar3 = System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251CB0 *)&stack0xffffffffffffffb8);
      if ((char)bVar3 == '\0') {
        __this_02.fields._8_8_ = pIVar7;
        __this_02.fields._dictionary = pSVar6;
        __this_02.fields._currentValue = (Il2CppObject *)classInstance;
        System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
                  (__this_02,(MethodInfo_3251CA0 *)&stack0xffffffffffffffb8);
        return;
      }
      pCVar1 = (__this->fields)._evaluator;
      if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) break;
      pCVar8 = classInstance;
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (pCVar1,classInstance,"Init",(System_Object_array *)0x0,0,in_R9);
      if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) goto label_0427c4bf;
      *(undefined1 *)((long)&(classInstance->fields).Enabled + 1) = 1;
      classInstance = pCVar8;
    }
    il2cpp_runtime_helper_022b2c90();
    pCVar8 = classInstance;
label_0427c4bf:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar5 = il2cpp_runtime_helper_022b2c90();
  if (auVar5._8_4_ == 1) {
    plVar4 = (long *)__cxa_begin_catch(auVar5._0_8_);
    lVar2 = *plVar4;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._dictionary = pSVar6;
    __this_03.fields._currentValue = (Il2CppObject *)pCVar8;
    System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251CA0 *)&stack0xffffffffffffffb8);
    if (lVar2 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar2);
  }
  __this_04.fields._8_8_ = pIVar7;
  __this_04.fields._dictionary = pSVar6;
  __this_04.fields._currentValue = (Il2CppObject *)pCVar8;
  System_Collections_Generic_Dictionary_ValueCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251CA0 *)&stack0xffffffffffffffb8);
  _Unwind_Resume(auVar5._0_8_);
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateStaticClassInternal
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o* staticClasses, const MethodInfo* method);
// 0x427c6a0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClassInternal
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
               System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *staticClasses,
               MethodInfo *method)

{
  il2cpp_array_size_t iVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  System_Object_array *parameterValues;
  bool_conflict bVar2;
  CustomLogic_CustomLogicClassInstance_o *value;
  undefined8 uVar3;
  System_Object_array *__this_01;
  System_Object_array *unaff_RBX;
  CustomLogic_CustomLogicClassInstance_o *className_00;
  System_Object_array *pSVar4;
  MethodInfo *in_R9;
  CustomLogic_CustomLogicClassInstance_o *unaff_R12;
  System_Object_array *unaff_R14;
  System_Object_array *unaff_R15;
  undefined1 auVar5 [16];
  
  while( true ) {
    className_00 = (CustomLogic_CustomLogicClassInstance_o *)className;
    __this_01 = (System_Object_array *)staticClasses;
    *(System_Object_array **)((long)register0x00000020 + -8) = unaff_R15;
    *(System_Object_array **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(CustomLogic_CustomLogicClassInstance_o **)((long)register0x00000020 + -0x18) = unaff_R12;
    *(System_Object_array **)((long)register0x00000020 + -0x20) = unaff_RBX;
    className = (System_String_o *)className_00;
    pSVar4 = (System_Object_array *)__this;
    if (g_data_057adc5f == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c6c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c6d5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c6e1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c6ed;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      pSVar4 = (System_Object_array *)&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c6f9;
      il2cpp_runtime_helper_023445d0();
      g_data_057adc5f = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x2c) = 0;
    unaff_R15 = (System_Object_array *)__this;
    if (__this_01 != (System_Object_array *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c72f;
      className = (System_String_o *)className_00;
      pSVar4 = __this_01;
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                         (Il2CppObject *)className_00,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 != '\0') {
        return;
      }
      if (((System_Object_array *)__this)->bounds != (Il2CppArrayBounds *)0x0) {
        iVar1 = ((System_Object_array *)__this)->bounds[4].length;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
        if (iVar1 != 0) {
          __this_00 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(iVar1 + 0x20);
          pSVar4 = (System_Object_array *)0x0;
          if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c77e;
            className = (System_String_o *)className_00;
            bVar2 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                              (__this_00,(Il2CppObject *)className_00,
                               (int32_t *)((long)register0x00000020 + -0x2c),MethodInfo_Boolean_TryGetValue);
            if ((char)bVar2 != '\0') {
              className = (System_String_o *)(ulong)*(uint *)((long)register0x00000020 + -0x2c);
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c79a;
              System_Nullable_Int32Enum____ctor
                        ((System_Nullable_Int32Enum__o)((long)register0x00000020 + -0x28),
                         *(uint *)((long)register0x00000020 + -0x2c),MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
            }
            unaff_RBX = (System_Object_array *)((System_Object_array *)__this)->bounds;
            unaff_R15 = (System_Object_array *)&TypeInfo_CustomLogicEvaluator;
            pSVar4 = TypeInfo_CustomLogicEvaluator;
            if (*(int *)((long)TypeInfo_CustomLogicEvaluator->m_Items + 0xc4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c7b6;
              il2cpp_runtime_helper_02337ed0();
            }
            if (unaff_RBX != (System_Object_array *)0x0) {
              parameterValues = (System_Object_array *)TypeInfo_CustomLogicEvaluator->m_Items[0x13]->klass;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c7da;
              className = (System_String_o *)className_00;
              pSVar4 = unaff_RBX;
              value = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                                ((CustomLogic_CustomLogicEvaluator_o *)unaff_RBX,
                                 (System_String_o *)className_00,parameterValues,0,
                                 (System_Nullable_CustomLogicSourceType__o)
                                 *(System_Nullable_CustomLogicSourceType__Fields *)
                                  ((long)register0x00000020 + -0x28),in_R9);
              if (value != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                (value->fields)._Namespace_k__BackingField.fields =
                     *(System_Nullable_CustomLogicSourceType__Fields *)((long)register0x00000020 + -0x28);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c800;
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                           (Il2CppObject *)className_00,(Il2CppObject *)value,MethodInfo_Void_Add);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c811;
    auVar5 = il2cpp_runtime_helper_022b2c90();
    *(long *)((long)register0x00000020 + -0x40) = auVar5._0_8_;
    __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)
             ((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar4->bounds)->_networkCallback;
    if ((System_Object_array *)__this != (System_Object_array *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c835;
    uVar3 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x48) = uVar3;
    if (((System_Object_array *)__this)->bounds == (Il2CppArrayBounds *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x427c859;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    staticClasses =
         (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
         *(System_Object_array **)&((System_Object_array *)__this)->bounds[4].lower_bound;
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x40);
    unaff_R12 = className_00;
    unaff_R14 = __this_01;
  }
  CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
            ((CustomLogic_CustomLogicEvaluator_o *)__this,(CustomLogic_CustomLogicClassInstance_o *)className,
             auVar5._8_8_);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$RunAssignmentsClassInstance
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__RunAssignmentsClassInstance (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* classInstance, const MethodInfo* method);
// 0x427c820

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__RunAssignmentsClassInstance
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               CustomLogic_CustomLogicClassInstance_o *classInstance,MethodInfo *method)

{
  il2cpp_array_size_t iVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  System_Object_array *parameterValues;
  System_Object_array *__this_01;
  bool_conflict bVar2;
  CustomLogic_CustomLogicClassInstance_o *value;
  undefined8 in_RAX;
  undefined8 uVar3;
  System_Object_array *unaff_RBX;
  CustomLogic_CustomLogicClassInstance_o *classInstance_00;
  MethodInfo *in_R9;
  CustomLogic_CustomLogicClassInstance_o *unaff_R12;
  System_Object_array *unaff_R14;
  System_Object_array *__this_02;
  System_Object_array *unaff_R15;
  undefined1 auVar4 [16];
  
  auVar4._8_8_ = method;
  auVar4._0_8_ = in_RAX;
  while( true ) {
    classInstance_00 = classInstance;
    *(long *)((long)register0x00000020 + -8) = auVar4._0_8_;
    __this_02 = ((CustomLogic_CustomLogicEvaluator_Fields *)&((System_Object_array *)__this)->bounds)->
                _networkCallback;
    if (__this_02 != (System_Object_array *)0x0) {
      CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
                ((CustomLogic_CustomLogicEvaluator_o *)__this_02,classInstance_00,auVar4._8_8_);
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x10) = 0x427c835;
    uVar3 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar3;
    if (__this_02->bounds == (Il2CppArrayBounds *)0x0) break;
    __this_01 = *(System_Object_array **)&__this_02->bounds[4].lower_bound;
    *(System_Object_array **)((long)register0x00000020 + -0x10) = unaff_R15;
    *(System_Object_array **)((long)register0x00000020 + -0x18) = unaff_R14;
    *(CustomLogic_CustomLogicClassInstance_o **)((long)register0x00000020 + -0x20) = unaff_R12;
    *(System_Object_array **)((long)register0x00000020 + -0x28) = unaff_RBX;
    classInstance = classInstance_00;
    __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)__this_02;
    if (g_data_057adc5f == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c6c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c6d5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c6e1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c6ed;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType;
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c6f9;
      il2cpp_runtime_helper_023445d0();
      g_data_057adc5f = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x34) = 0;
    if (__this_01 != (System_Object_array *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c72f;
      classInstance = classInstance_00;
      __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)__this_01;
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                         (Il2CppObject *)classInstance_00,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 != '\0') {
        return;
      }
      if (__this_02->bounds != (Il2CppArrayBounds *)0x0) {
        iVar1 = __this_02->bounds[4].length;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
        if (iVar1 != 0) {
          __this_00 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(iVar1 + 0x20);
          __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)0x0;
          if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c77e;
            classInstance = classInstance_00;
            bVar2 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                              (__this_00,(Il2CppObject *)classInstance_00,
                               (int32_t *)((long)register0x00000020 + -0x34),MethodInfo_Boolean_TryGetValue);
            if ((char)bVar2 != '\0') {
              classInstance =
                   (CustomLogic_CustomLogicClassInstance_o *)
                   (ulong)*(uint *)((long)register0x00000020 + -0x34);
              *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c79a;
              System_Nullable_Int32Enum____ctor
                        ((System_Nullable_Int32Enum__o)((long)register0x00000020 + -0x30),
                         *(uint *)((long)register0x00000020 + -0x34),MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
            }
            unaff_RBX = (System_Object_array *)__this_02->bounds;
            __this_02 = (System_Object_array *)&TypeInfo_CustomLogicEvaluator;
            __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)TypeInfo_CustomLogicEvaluator;
            if (*(int *)((long)TypeInfo_CustomLogicEvaluator->m_Items + 0xc4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c7b6;
              il2cpp_runtime_helper_02337ed0();
            }
            if (unaff_RBX != (System_Object_array *)0x0) {
              parameterValues = (System_Object_array *)TypeInfo_CustomLogicEvaluator->m_Items[0x13]->klass;
              *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c7da;
              classInstance = classInstance_00;
              __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)unaff_RBX;
              value = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                                ((CustomLogic_CustomLogicEvaluator_o *)unaff_RBX,
                                 (System_String_o *)classInstance_00,parameterValues,0,
                                 (System_Nullable_CustomLogicSourceType__o)
                                 *(System_Nullable_CustomLogicSourceType__Fields *)
                                  ((long)register0x00000020 + -0x30),in_R9);
              if (value != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                (value->fields)._Namespace_k__BackingField.fields =
                     *(System_Nullable_CustomLogicSourceType__Fields *)((long)register0x00000020 + -0x30);
                *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c800;
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                           (Il2CppObject *)classInstance_00,(Il2CppObject *)value,MethodInfo_Void_Add);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c811;
    auVar4 = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x40);
    unaff_R12 = classInstance_00;
    unaff_R14 = __this_01;
    unaff_R15 = __this_02;
  }
  *(undefined8 *)((long)register0x00000020 + -0x18) = 0x427c859;
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStartAst
// il2cpp: CustomLogic_CustomLogicStartAst_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStartAst (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427c660

CustomLogic_CustomLogicStartAst_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStartAst
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  il2cpp_array_size_t iVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  System_Object_array *parameterValues;
  bool_conflict bVar3;
  undefined4 extraout_var;
  CustomLogic_CustomLogicClassInstance_o *value;
  CustomLogic_CustomLogicStartAst_o *extraout_RAX;
  CustomLogic_CustomLogicStartAst_o *extraout_RAX_00;
  undefined8 uVar4;
  System_Object_array *extraout_RDX;
  System_Object_array *__this_01;
  System_Object_array *unaff_RBX;
  undefined8 *puVar5;
  MethodInfo *className;
  System_Object_array *pSVar6;
  MethodInfo *in_R9;
  MethodInfo *unaff_R12;
  System_Object_array *unaff_R14;
  System_Object_array *unaff_R15;
  undefined1 auVar7 [16];
  undefined8 auStack_10 [2];
  
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields)._start;
  }
  auStack_10[0] = 0x427c675;
  auStack_10[0] = il2cpp_runtime_helper_022b2c90();
  if (((System_Object_array *)__this)->bounds == (Il2CppArrayBounds *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSVar6 = extraout_RDX;
    puVar5 = auStack_10;
    while( true ) {
      className = method;
      __this_01 = pSVar6;
      *(System_Object_array **)((long)puVar5 + -8) = unaff_R15;
      *(System_Object_array **)((long)puVar5 + -0x10) = unaff_R14;
      *(MethodInfo **)((long)puVar5 + -0x18) = unaff_R12;
      *(System_Object_array **)((long)puVar5 + -0x20) = unaff_RBX;
      method = className;
      pSVar6 = (System_Object_array *)__this;
      if (g_data_057adc5f == '\0') {
        *(undefined8 *)((long)puVar5 + -0x40) = 0x427c6c9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        *(undefined8 *)((long)puVar5 + -0x40) = 0x427c6d5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        *(undefined8 *)((long)puVar5 + -0x40) = 0x427c6e1;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)((long)puVar5 + -0x40) = 0x427c6ed;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
        pSVar6 = (System_Object_array *)&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType;
        *(undefined8 *)((long)puVar5 + -0x40) = 0x427c6f9;
        il2cpp_runtime_helper_023445d0();
        g_data_057adc5f = '\x01';
      }
      *(undefined8 *)((long)puVar5 + -0x28) = 0;
      *(undefined4 *)((long)puVar5 + -0x2c) = 0;
      unaff_R15 = (System_Object_array *)__this;
      if (__this_01 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)puVar5 + -0x40) = 0x427c72f;
        method = className;
        pSVar6 = __this_01;
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                           (Il2CppObject *)className,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 != '\0') {
          return (CustomLogic_CustomLogicStartAst_o *)CONCAT44(extraout_var,bVar3);
        }
        if (((System_Object_array *)__this)->bounds != (Il2CppArrayBounds *)0x0) {
          iVar2 = ((System_Object_array *)__this)->bounds[4].length;
          *(undefined8 *)((long)puVar5 + -0x28) = 0;
          if (iVar2 != 0) {
            __this_00 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(iVar2 + 0x20);
            pSVar6 = (System_Object_array *)0x0;
            if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
              *(undefined8 *)((long)puVar5 + -0x40) = 0x427c77e;
              method = className;
              bVar3 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                                (__this_00,(Il2CppObject *)className,(int32_t *)((long)puVar5 + -0x2c),
                                 MethodInfo_Boolean_TryGetValue);
              if ((char)bVar3 != '\0') {
                method = (MethodInfo *)(ulong)*(uint *)((long)puVar5 + -0x2c);
                *(undefined8 *)((long)puVar5 + -0x40) = 0x427c79a;
                System_Nullable_Int32Enum____ctor
                          ((System_Nullable_Int32Enum__o)((long)puVar5 + -0x28),
                           *(uint *)((long)puVar5 + -0x2c),MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
              }
              unaff_RBX = (System_Object_array *)((System_Object_array *)__this)->bounds;
              unaff_R15 = (System_Object_array *)&TypeInfo_CustomLogicEvaluator;
              pSVar6 = TypeInfo_CustomLogicEvaluator;
              if (*(int *)((long)TypeInfo_CustomLogicEvaluator->m_Items + 0xc4) == 0) {
                *(undefined8 *)((long)puVar5 + -0x40) = 0x427c7b6;
                il2cpp_runtime_helper_02337ed0();
              }
              if (unaff_RBX != (System_Object_array *)0x0) {
                parameterValues = (System_Object_array *)TypeInfo_CustomLogicEvaluator->m_Items[0x13]->klass;
                *(undefined8 *)((long)puVar5 + -0x40) = 0x427c7da;
                method = className;
                pSVar6 = unaff_RBX;
                value = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                                  ((CustomLogic_CustomLogicEvaluator_o *)unaff_RBX,
                                   (System_String_o *)className,parameterValues,0,
                                   (System_Nullable_CustomLogicSourceType__o)
                                   *(System_Nullable_CustomLogicSourceType__Fields *)((long)puVar5 + -0x28),
                                   in_R9);
                if (value != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                  (value->fields)._Namespace_k__BackingField.fields =
                       *(System_Nullable_CustomLogicSourceType__Fields *)((long)puVar5 + -0x28);
                  *(undefined8 *)((long)puVar5 + -0x40) = 0x427c800;
                  System_Collections_Generic_Dictionary_object__object___Add
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                             (Il2CppObject *)className,(Il2CppObject *)value,MethodInfo_Void_Add);
                  return extraout_RAX;
                }
              }
            }
          }
        }
      }
      *(undefined8 *)((long)puVar5 + -0x40) = 0x427c811;
      auVar7 = il2cpp_runtime_helper_022b2c90();
      *(long *)((long)puVar5 + -0x40) = auVar7._0_8_;
      __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)
               ((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar6->bounds)->_networkCallback;
      if ((System_Object_array *)__this != (System_Object_array *)0x0) break;
      *(undefined8 *)((long)puVar5 + -0x48) = 0x427c835;
      uVar4 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)puVar5 + -0x48) = uVar4;
      if (((System_Object_array *)__this)->bounds == (Il2CppArrayBounds *)0x0) {
        *(undefined8 *)((long)puVar5 + -0x50) = 0x427c859;
        il2cpp_runtime_helper_022b2c90();
        return (CustomLogic_CustomLogicStartAst_o *)((System_Object_array *)__this)->m_Items[0];
      }
      pSVar6 = *(System_Object_array **)&((System_Object_array *)__this)->bounds[4].lower_bound;
      puVar5 = (undefined8 *)((long)puVar5 + -0x40);
      unaff_R12 = className;
      unaff_R14 = __this_01;
    }
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              ((CustomLogic_CustomLogicEvaluator_o *)__this,(CustomLogic_CustomLogicClassInstance_o *)method,
               auVar7._8_8_);
    return extraout_RAX_00;
  }
  return *(CustomLogic_CustomLogicStartAst_o **)&((System_Object_array *)__this)->bounds[4].lower_bound;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStaticClassesDictionary
// il2cpp: System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClassesDictionary (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427c680

System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClassesDictionary
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  il2cpp_array_size_t iVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  System_Object_array *parameterValues;
  bool_conflict bVar3;
  undefined4 extraout_var;
  CustomLogic_CustomLogicClassInstance_o *value;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *extraout_RAX;
  System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *extraout_RAX_00;
  undefined8 uVar4;
  System_Object_array *extraout_RDX;
  System_Object_array *__this_01;
  System_Object_array *unaff_RBX;
  undefined1 *puVar5;
  MethodInfo *className;
  System_Object_array *pSVar6;
  MethodInfo *in_R9;
  MethodInfo *unaff_R12;
  System_Object_array *unaff_R14;
  System_Object_array *unaff_R15;
  undefined1 auVar7 [16];
  undefined1 auStack_8 [8];
  
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (pCVar1->fields)._staticClasses;
  }
  il2cpp_runtime_helper_022b2c90();
  pSVar6 = extraout_RDX;
  puVar5 = auStack_8;
  while( true ) {
    className = method;
    __this_01 = pSVar6;
    *(System_Object_array **)(puVar5 + -8) = unaff_R15;
    *(System_Object_array **)(puVar5 + -0x10) = unaff_R14;
    *(MethodInfo **)(puVar5 + -0x18) = unaff_R12;
    *(System_Object_array **)(puVar5 + -0x20) = unaff_RBX;
    method = className;
    pSVar6 = (System_Object_array *)__this;
    if (g_data_057adc5f == '\0') {
      *(undefined8 *)(puVar5 + -0x40) = 0x427c6c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      *(undefined8 *)(puVar5 + -0x40) = 0x427c6d5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)(puVar5 + -0x40) = 0x427c6e1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)(puVar5 + -0x40) = 0x427c6ed;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      pSVar6 = (System_Object_array *)&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType;
      *(undefined8 *)(puVar5 + -0x40) = 0x427c6f9;
      il2cpp_runtime_helper_023445d0();
      g_data_057adc5f = '\x01';
    }
    *(undefined8 *)(puVar5 + -0x28) = 0;
    *(undefined4 *)(puVar5 + -0x2c) = 0;
    unaff_R15 = (System_Object_array *)__this;
    if (__this_01 != (System_Object_array *)0x0) {
      *(undefined8 *)(puVar5 + -0x40) = 0x427c72f;
      method = className;
      pSVar6 = __this_01;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                         (Il2CppObject *)className,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 != '\0') {
        return (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
               CONCAT44(extraout_var,bVar3);
      }
      if (((System_Object_array *)__this)->bounds != (Il2CppArrayBounds *)0x0) {
        iVar2 = ((System_Object_array *)__this)->bounds[4].length;
        *(undefined8 *)(puVar5 + -0x28) = 0;
        if (iVar2 != 0) {
          __this_00 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(iVar2 + 0x20);
          pSVar6 = (System_Object_array *)0x0;
          if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
            *(undefined8 *)(puVar5 + -0x40) = 0x427c77e;
            method = className;
            bVar3 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                              (__this_00,(Il2CppObject *)className,(int32_t *)(puVar5 + -0x2c),MethodInfo_Boolean_TryGetValue);
            if ((char)bVar3 != '\0') {
              method = (MethodInfo *)(ulong)*(uint *)(puVar5 + -0x2c);
              *(undefined8 *)(puVar5 + -0x40) = 0x427c79a;
              System_Nullable_Int32Enum____ctor
                        ((System_Nullable_Int32Enum__o)((long)puVar5 + -0x28),*(uint *)(puVar5 + -0x2c),
                         MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
            }
            unaff_RBX = (System_Object_array *)((System_Object_array *)__this)->bounds;
            unaff_R15 = (System_Object_array *)&TypeInfo_CustomLogicEvaluator;
            pSVar6 = TypeInfo_CustomLogicEvaluator;
            if (*(int *)((long)TypeInfo_CustomLogicEvaluator->m_Items + 0xc4) == 0) {
              *(undefined8 *)(puVar5 + -0x40) = 0x427c7b6;
              il2cpp_runtime_helper_02337ed0();
            }
            if (unaff_RBX != (System_Object_array *)0x0) {
              parameterValues = (System_Object_array *)TypeInfo_CustomLogicEvaluator->m_Items[0x13]->klass;
              *(undefined8 *)(puVar5 + -0x40) = 0x427c7da;
              method = className;
              pSVar6 = unaff_RBX;
              value = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                                ((CustomLogic_CustomLogicEvaluator_o *)unaff_RBX,(System_String_o *)className,
                                 parameterValues,0,
                                 (System_Nullable_CustomLogicSourceType__o)
                                 *(System_Nullable_CustomLogicSourceType__Fields *)(puVar5 + -0x28),in_R9);
              if (value != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                (value->fields)._Namespace_k__BackingField.fields =
                     *(System_Nullable_CustomLogicSourceType__Fields *)(puVar5 + -0x28);
                *(undefined8 *)(puVar5 + -0x40) = 0x427c800;
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                           (Il2CppObject *)className,(Il2CppObject *)value,MethodInfo_Void_Add);
                return extraout_RAX;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar5 + -0x40) = 0x427c811;
    auVar7 = il2cpp_runtime_helper_022b2c90();
    *(long *)(puVar5 + -0x40) = auVar7._0_8_;
    __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)
             ((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar6->bounds)->_networkCallback;
    if ((System_Object_array *)__this != (System_Object_array *)0x0) break;
    *(undefined8 *)(puVar5 + -0x48) = 0x427c835;
    uVar4 = il2cpp_runtime_helper_022b2c90();
    *(undefined8 *)(puVar5 + -0x48) = uVar4;
    if (((System_Object_array *)__this)->bounds == (Il2CppArrayBounds *)0x0) {
      *(undefined8 *)(puVar5 + -0x50) = 0x427c859;
      il2cpp_runtime_helper_022b2c90();
      return (System_Collections_Generic_Dictionary_string__CustomLogicClassInstance__o *)
             ((System_Object_array *)__this)->m_Items[0];
    }
    pSVar6 = *(System_Object_array **)&((System_Object_array *)__this)->bounds[4].lower_bound;
    puVar5 = puVar5 + -0x40;
    unaff_R12 = className;
    unaff_R14 = __this_01;
  }
  CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
            ((CustomLogic_CustomLogicEvaluator_o *)__this,(CustomLogic_CustomLogicClassInstance_o *)method,
             auVar7._8_8_);
  return extraout_RAX_00;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetStaticClass
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x427c5d0

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetStaticClass
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
          MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  il2cpp_array_size_t iVar2;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_01;
  bool_conflict bVar3;
  CustomLogic_CustomLogicClassInstance_o *pCVar4;
  undefined4 extraout_var;
  CustomLogic_CustomLogicClassInstance_o *value;
  CustomLogic_CustomLogicClassInstance_o *extraout_RAX;
  CustomLogic_CustomLogicClassInstance_o *extraout_RAX_00;
  undefined8 uVar5;
  System_Object_array *extraout_RDX;
  System_Object_array *__this_02;
  undefined8 *puVar6;
  CustomLogic_CustomLogicClassInstance_o *className_00;
  System_Object_array *pSVar7;
  System_Object_array *pSVar8;
  MethodInfo *in_R9;
  CustomLogic_CustomLogicClassInstance_o *unaff_R12;
  System_Object_array *unaff_R15;
  undefined1 auVar9 [16];
  undefined8 uStack_28;
  undefined8 uStack_20;
  
  pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)className;
  pSVar7 = (System_Object_array *)__this;
  if (g_data_057adc60 == '\0') {
    uStack_20 = 0x427c5ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSVar7 = (System_Object_array *)&MethodInfo_CustomLogicClassInstance_get_Item;
    uStack_20 = 0x427c5fb;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc60 = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields)._staticClasses;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      uStack_20 = 0x427c629;
      bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (__this_00,(Il2CppObject *)className,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar3 != '\0') {
        pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)
                 System_Collections_Generic_Dictionary_object__object___get_Item
                           (__this_00,(Il2CppObject *)className,MethodInfo_CustomLogicClassInstance_get_Item);
        return pCVar4;
      }
    }
    return (CustomLogic_CustomLogicClassInstance_o *)0x0;
  }
  uStack_20 = 0x427c658;
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  if (pSVar7->bounds != (Il2CppArrayBounds *)0x0) {
    return (CustomLogic_CustomLogicClassInstance_o *)pSVar7->bounds[4].length;
  }
  uStack_28 = 0x427c675;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (pSVar7->bounds == (Il2CppArrayBounds *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSVar8 = extraout_RDX;
    puVar6 = &uStack_28;
    while( true ) {
      className_00 = pCVar4;
      __this_02 = pSVar8;
      *(System_Object_array **)((long)puVar6 + -8) = unaff_R15;
      *(System_String_o **)((long)puVar6 + -0x10) = className;
      *(CustomLogic_CustomLogicClassInstance_o **)((long)puVar6 + -0x18) = unaff_R12;
      *(CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o **)((long)puVar6 + -0x20) = __this;
      pCVar4 = className_00;
      pSVar8 = pSVar7;
      if (g_data_057adc5f == '\0') {
        *(undefined8 *)((long)puVar6 + -0x40) = 0x427c6c9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        *(undefined8 *)((long)puVar6 + -0x40) = 0x427c6d5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        *(undefined8 *)((long)puVar6 + -0x40) = 0x427c6e1;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)((long)puVar6 + -0x40) = 0x427c6ed;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
        pSVar8 = (System_Object_array *)&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType;
        *(undefined8 *)((long)puVar6 + -0x40) = 0x427c6f9;
        il2cpp_runtime_helper_023445d0();
        g_data_057adc5f = '\x01';
      }
      *(undefined8 *)((long)puVar6 + -0x28) = 0;
      *(undefined4 *)((long)puVar6 + -0x2c) = 0;
      unaff_R15 = pSVar7;
      if (__this_02 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)puVar6 + -0x40) = 0x427c72f;
        pCVar4 = className_00;
        pSVar8 = __this_02;
        bVar3 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                           (Il2CppObject *)className_00,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 != '\0') {
          return (CustomLogic_CustomLogicClassInstance_o *)CONCAT44(extraout_var,bVar3);
        }
        if (pSVar7->bounds != (Il2CppArrayBounds *)0x0) {
          iVar2 = pSVar7->bounds[4].length;
          *(undefined8 *)((long)puVar6 + -0x28) = 0;
          if (iVar2 != 0) {
            __this_01 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(iVar2 + 0x20);
            pSVar8 = (System_Object_array *)0x0;
            if (__this_01 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
              *(undefined8 *)((long)puVar6 + -0x40) = 0x427c77e;
              pCVar4 = className_00;
              bVar3 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                                (__this_01,(Il2CppObject *)className_00,(int32_t *)((long)puVar6 + -0x2c),
                                 MethodInfo_Boolean_TryGetValue);
              if ((char)bVar3 != '\0') {
                pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)(ulong)*(uint *)((long)puVar6 + -0x2c);
                *(undefined8 *)((long)puVar6 + -0x40) = 0x427c79a;
                System_Nullable_Int32Enum____ctor
                          ((System_Nullable_Int32Enum__o)((long)puVar6 + -0x28),
                           *(uint *)((long)puVar6 + -0x2c),MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
              }
              __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)pSVar7->bounds;
              unaff_R15 = (System_Object_array *)&TypeInfo_CustomLogicEvaluator;
              pSVar8 = TypeInfo_CustomLogicEvaluator;
              if (*(int *)((long)TypeInfo_CustomLogicEvaluator->m_Items + 0xc4) == 0) {
                *(undefined8 *)((long)puVar6 + -0x40) = 0x427c7b6;
                il2cpp_runtime_helper_02337ed0();
              }
              if ((CustomLogic_CustomLogicEvaluator_o *)__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                pSVar7 = (System_Object_array *)TypeInfo_CustomLogicEvaluator->m_Items[0x13]->klass;
                *(undefined8 *)((long)puVar6 + -0x40) = 0x427c7da;
                pCVar4 = className_00;
                pSVar8 = (System_Object_array *)__this;
                value = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                                  ((CustomLogic_CustomLogicEvaluator_o *)__this,
                                   (System_String_o *)className_00,pSVar7,0,
                                   (System_Nullable_CustomLogicSourceType__o)
                                   *(System_Nullable_CustomLogicSourceType__Fields *)((long)puVar6 + -0x28),
                                   in_R9);
                if (value != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                  (value->fields)._Namespace_k__BackingField.fields =
                       *(System_Nullable_CustomLogicSourceType__Fields *)((long)puVar6 + -0x28);
                  *(undefined8 *)((long)puVar6 + -0x40) = 0x427c800;
                  System_Collections_Generic_Dictionary_object__object___Add
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,
                             (Il2CppObject *)className_00,(Il2CppObject *)value,MethodInfo_Void_Add);
                  return extraout_RAX;
                }
              }
            }
          }
        }
      }
      *(undefined8 *)((long)puVar6 + -0x40) = 0x427c811;
      auVar9 = il2cpp_runtime_helper_022b2c90();
      *(long *)((long)puVar6 + -0x40) = auVar9._0_8_;
      pSVar7 = ((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar8->bounds)->_networkCallback;
      if (pSVar7 != (System_Object_array *)0x0) break;
      *(undefined8 *)((long)puVar6 + -0x48) = 0x427c835;
      uVar5 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)puVar6 + -0x48) = uVar5;
      if (pSVar7->bounds == (Il2CppArrayBounds *)0x0) {
        *(undefined8 *)((long)puVar6 + -0x50) = 0x427c859;
        il2cpp_runtime_helper_022b2c90();
        return (CustomLogic_CustomLogicClassInstance_o *)pSVar7->m_Items[0];
      }
      pSVar8 = *(System_Object_array **)&pSVar7->bounds[4].lower_bound;
      puVar6 = (undefined8 *)((long)puVar6 + -0x40);
      unaff_R12 = className_00;
      className = (System_String_o *)__this_02;
    }
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              ((CustomLogic_CustomLogicEvaluator_o *)pSVar7,pCVar4,auVar9._8_8_);
    return extraout_RAX_00;
  }
  return *(CustomLogic_CustomLogicClassInstance_o **)&pSVar7->bounds[4].lower_bound;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateStaticClass
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, const MethodInfo* method);
// 0x427c840

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateStaticClass
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
               MethodInfo *method)

{
  il2cpp_array_size_t iVar1;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  System_Object_array *parameterValues;
  System_Object_array *__this_01;
  bool_conflict bVar2;
  CustomLogic_CustomLogicClassInstance_o *value;
  undefined8 in_RAX;
  System_Object_array *unaff_RBX;
  CustomLogic_CustomLogicClassInstance_o *className_00;
  System_Object_array *pSVar3;
  MethodInfo *in_R9;
  CustomLogic_CustomLogicClassInstance_o *unaff_R12;
  System_Object_array *unaff_R14;
  System_Object_array *unaff_R15;
  undefined1 auVar4 [16];
  
  while( true ) {
    className_00 = (CustomLogic_CustomLogicClassInstance_o *)className;
    *(undefined8 *)((long)register0x00000020 + -8) = in_RAX;
    if (((System_Object_array *)__this)->bounds == (Il2CppArrayBounds *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x10) = 0x427c859;
      il2cpp_runtime_helper_022b2c90();
      return;
    }
    __this_01 = *(System_Object_array **)&((System_Object_array *)__this)->bounds[4].lower_bound;
    *(System_Object_array **)((long)register0x00000020 + -8) = unaff_R15;
    *(System_Object_array **)((long)register0x00000020 + -0x10) = unaff_R14;
    *(CustomLogic_CustomLogicClassInstance_o **)((long)register0x00000020 + -0x18) = unaff_R12;
    *(System_Object_array **)((long)register0x00000020 + -0x20) = unaff_RBX;
    className = (System_String_o *)className_00;
    pSVar3 = (System_Object_array *)__this;
    if (g_data_057adc5f == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c6c9;
      il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c6d5;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c6e1;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c6ed;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      pSVar3 = (System_Object_array *)&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType;
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c6f9;
      il2cpp_runtime_helper_023445d0();
      g_data_057adc5f = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
    *(undefined4 *)((long)register0x00000020 + -0x2c) = 0;
    unaff_R15 = (System_Object_array *)__this;
    if (__this_01 != (System_Object_array *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c72f;
      className = (System_String_o *)className_00;
      pSVar3 = __this_01;
      bVar2 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                         (Il2CppObject *)className_00,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar2 != '\0') {
        return;
      }
      if (((System_Object_array *)__this)->bounds != (Il2CppArrayBounds *)0x0) {
        iVar1 = ((System_Object_array *)__this)->bounds[4].length;
        *(undefined8 *)((long)register0x00000020 + -0x28) = 0;
        if (iVar1 != 0) {
          __this_00 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(iVar1 + 0x20);
          pSVar3 = (System_Object_array *)0x0;
          if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c77e;
            className = (System_String_o *)className_00;
            bVar2 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                              (__this_00,(Il2CppObject *)className_00,
                               (int32_t *)((long)register0x00000020 + -0x2c),MethodInfo_Boolean_TryGetValue);
            if ((char)bVar2 != '\0') {
              className = (System_String_o *)(ulong)*(uint *)((long)register0x00000020 + -0x2c);
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c79a;
              System_Nullable_Int32Enum____ctor
                        ((System_Nullable_Int32Enum__o)((long)register0x00000020 + -0x28),
                         *(uint *)((long)register0x00000020 + -0x2c),MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
            }
            unaff_RBX = (System_Object_array *)((System_Object_array *)__this)->bounds;
            unaff_R15 = (System_Object_array *)&TypeInfo_CustomLogicEvaluator;
            pSVar3 = TypeInfo_CustomLogicEvaluator;
            if (*(int *)((long)TypeInfo_CustomLogicEvaluator->m_Items + 0xc4) == 0) {
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c7b6;
              il2cpp_runtime_helper_02337ed0();
            }
            if (unaff_RBX != (System_Object_array *)0x0) {
              parameterValues = (System_Object_array *)TypeInfo_CustomLogicEvaluator->m_Items[0x13]->klass;
              *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c7da;
              className = (System_String_o *)className_00;
              pSVar3 = unaff_RBX;
              value = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                                ((CustomLogic_CustomLogicEvaluator_o *)unaff_RBX,
                                 (System_String_o *)className_00,parameterValues,0,
                                 (System_Nullable_CustomLogicSourceType__o)
                                 *(System_Nullable_CustomLogicSourceType__Fields *)
                                  ((long)register0x00000020 + -0x28),in_R9);
              if (value != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                (value->fields)._Namespace_k__BackingField.fields =
                     *(System_Nullable_CustomLogicSourceType__Fields *)((long)register0x00000020 + -0x28);
                *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c800;
                System_Collections_Generic_Dictionary_object__object___Add
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                           (Il2CppObject *)className_00,(Il2CppObject *)value,MethodInfo_Void_Add);
                return;
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x40) = 0x427c811;
    auVar4 = il2cpp_runtime_helper_022b2c90();
    *(long *)((long)register0x00000020 + -0x40) = auVar4._0_8_;
    __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)
             ((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar3->bounds)->_networkCallback;
    if ((System_Object_array *)__this != (System_Object_array *)0x0) break;
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x427c835;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x40);
    unaff_R12 = className_00;
    unaff_R14 = __this_01;
  }
  CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
            ((CustomLogic_CustomLogicEvaluator_o *)__this,(CustomLogic_CustomLogicClassInstance_o *)className,
             auVar4._8_8_);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$HasMainClass
// il2cpp: bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasMainClass (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427c560

bool_conflict
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasMainClass
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_CustomLogicStartAst_o *pCVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  il2cpp_array_size_t iVar4;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  bool_conflict bVar5;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  Il2CppObject *pIVar6;
  CustomLogic_CustomLogicClassInstance_o *value;
  undefined8 uVar7;
  System_Object_array *extraout_RDX;
  System_Object_array *__this_01;
  undefined8 *puVar8;
  System_Object_array *className;
  System_Object_array *classInstance;
  System_Object_array *__this_02;
  System_Object_array *pSVar9;
  System_Object_array *pSVar10;
  MethodInfo *in_R9;
  System_Object_array *unaff_R12;
  System_Object_array *unaff_R15;
  undefined1 auVar11 [16];
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *pCStack_18;
  
  __this_02 = (System_Object_array *)__this;
  if (g_data_057adc61 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    __this_02 = (System_Object_array *)&"Main";
    il2cpp_runtime_helper_023445d0();
    g_data_057adc61 = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar2 = (pCVar1->fields)._start;
    if (pCVar2 == (CustomLogic_CustomLogicStartAst_o *)0x0) {
      return 0;
    }
    pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar2->fields).Classes;
    __this_02 = (System_Object_array *)0x0;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar3,"Main",MethodInfo_Boolean_ContainsKey);
      return bVar5;
    }
  }
  uStack_20 = il2cpp_runtime_helper_022b2c90();
  classInstance = (System_Object_array *)method;
  pSVar9 = __this_02;
  pCStack_18 = __this;
  if (g_data_057adc60 == '\0') {
    uStack_28 = 0x427c5ef;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pSVar9 = (System_Object_array *)&MethodInfo_CustomLogicClassInstance_get_Item;
    uStack_28 = 0x427c5fb;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc60 = '\x01';
  }
  if (__this_02->bounds != (Il2CppArrayBounds *)0x0) {
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)&__this_02->bounds[4].lower_bound;
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      uStack_28 = 0x427c629;
      bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                        (pSVar3,(Il2CppObject *)method,MethodInfo_Boolean_ContainsKey);
      if ((char)bVar5 != '\0') {
        pIVar6 = System_Collections_Generic_Dictionary_object__object___get_Item
                           (pSVar3,(Il2CppObject *)method,MethodInfo_CustomLogicClassInstance_get_Item);
        return (bool_conflict)pIVar6;
      }
    }
    return 0;
  }
  uStack_28 = 0x427c658;
  uStack_28 = il2cpp_runtime_helper_022b2c90();
  if (pSVar9->bounds != (Il2CppArrayBounds *)0x0) {
    return (bool_conflict)pSVar9->bounds[4].length;
  }
  uStack_30 = 0x427c675;
  uStack_30 = il2cpp_runtime_helper_022b2c90();
  if (pSVar9->bounds == (Il2CppArrayBounds *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    pSVar10 = extraout_RDX;
    puVar8 = &uStack_30;
    while( true ) {
      className = classInstance;
      __this_01 = pSVar10;
      *(System_Object_array **)((long)puVar8 + -8) = unaff_R15;
      *(MethodInfo **)((long)puVar8 + -0x10) = method;
      *(System_Object_array **)((long)puVar8 + -0x18) = unaff_R12;
      *(System_Object_array **)((long)puVar8 + -0x20) = __this_02;
      classInstance = className;
      pSVar10 = pSVar9;
      if (g_data_057adc5f == '\0') {
        *(undefined8 *)((long)puVar8 + -0x40) = 0x427c6c9;
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
        *(undefined8 *)((long)puVar8 + -0x40) = 0x427c6d5;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
        *(undefined8 *)((long)puVar8 + -0x40) = 0x427c6e1;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
        *(undefined8 *)((long)puVar8 + -0x40) = 0x427c6ed;
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
        pSVar10 = (System_Object_array *)&MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType;
        *(undefined8 *)((long)puVar8 + -0x40) = 0x427c6f9;
        il2cpp_runtime_helper_023445d0();
        g_data_057adc5f = '\x01';
      }
      *(undefined8 *)((long)puVar8 + -0x28) = 0;
      *(undefined4 *)((long)puVar8 + -0x2c) = 0;
      unaff_R15 = pSVar9;
      if (__this_01 != (System_Object_array *)0x0) {
        *(undefined8 *)((long)puVar8 + -0x40) = 0x427c72f;
        classInstance = className;
        pSVar10 = __this_01;
        bVar5 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                          ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                           &className->obj,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar5 != '\0') {
          return bVar5;
        }
        if (pSVar9->bounds != (Il2CppArrayBounds *)0x0) {
          iVar4 = pSVar9->bounds[4].length;
          *(undefined8 *)((long)puVar8 + -0x28) = 0;
          if (iVar4 != 0) {
            __this_00 = *(System_Collections_Generic_Dictionary_TKey__TValue__o **)(iVar4 + 0x20);
            pSVar10 = (System_Object_array *)0x0;
            if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
              *(undefined8 *)((long)puVar8 + -0x40) = 0x427c77e;
              classInstance = className;
              bVar5 = System_Collections_Generic_Dictionary_object__Int32Enum___TryGetValue
                                (__this_00,&className->obj,(int32_t *)((long)puVar8 + -0x2c),MethodInfo_Boolean_TryGetValue);
              if ((char)bVar5 != '\0') {
                classInstance = (System_Object_array *)(ulong)*(uint *)((long)puVar8 + -0x2c);
                *(undefined8 *)((long)puVar8 + -0x40) = 0x427c79a;
                System_Nullable_Int32Enum____ctor
                          ((System_Nullable_Int32Enum__o)((long)puVar8 + -0x28),
                           *(uint *)((long)puVar8 + -0x2c),MethodInfo_Nullable_1_CustomLogic_CustomLogicSourceType);
              }
              __this_02 = (System_Object_array *)pSVar9->bounds;
              unaff_R15 = (System_Object_array *)&TypeInfo_CustomLogicEvaluator;
              pSVar10 = TypeInfo_CustomLogicEvaluator;
              if (*(int *)((long)TypeInfo_CustomLogicEvaluator->m_Items + 0xc4) == 0) {
                *(undefined8 *)((long)puVar8 + -0x40) = 0x427c7b6;
                il2cpp_runtime_helper_02337ed0();
              }
              if (__this_02 != (System_Object_array *)0x0) {
                pSVar9 = (System_Object_array *)TypeInfo_CustomLogicEvaluator->m_Items[0x13]->klass;
                *(undefined8 *)((long)puVar8 + -0x40) = 0x427c7da;
                classInstance = className;
                pSVar10 = __this_02;
                value = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                                  ((CustomLogic_CustomLogicEvaluator_o *)__this_02,
                                   (System_String_o *)className,pSVar9,0,
                                   (System_Nullable_CustomLogicSourceType__o)
                                   *(System_Nullable_CustomLogicSourceType__Fields *)((long)puVar8 + -0x28),
                                   in_R9);
                if (value != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
                  (value->fields)._Namespace_k__BackingField.fields =
                       *(System_Nullable_CustomLogicSourceType__Fields *)((long)puVar8 + -0x28);
                  *(undefined8 *)((long)puVar8 + -0x40) = 0x427c800;
                  System_Collections_Generic_Dictionary_object__object___Add
                            ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                             &className->obj,(Il2CppObject *)value,MethodInfo_Void_Add);
                  return extraout_EAX;
                }
              }
            }
          }
        }
      }
      *(undefined8 *)((long)puVar8 + -0x40) = 0x427c811;
      auVar11 = il2cpp_runtime_helper_022b2c90();
      *(long *)((long)puVar8 + -0x40) = auVar11._0_8_;
      pSVar9 = ((CustomLogic_CustomLogicEvaluator_Fields *)&pSVar10->bounds)->_networkCallback;
      if (pSVar9 != (System_Object_array *)0x0) break;
      *(undefined8 *)((long)puVar8 + -0x48) = 0x427c835;
      uVar7 = il2cpp_runtime_helper_022b2c90();
      *(undefined8 *)((long)puVar8 + -0x48) = uVar7;
      if (pSVar9->bounds == (Il2CppArrayBounds *)0x0) {
        *(undefined8 *)((long)puVar8 + -0x50) = 0x427c859;
        il2cpp_runtime_helper_022b2c90();
        return (bool_conflict)pSVar9->m_Items[0];
      }
      pSVar10 = *(System_Object_array **)&pSVar9->bounds[4].lower_bound;
      puVar8 = (undefined8 *)((long)puVar8 + -0x40);
      unaff_R12 = className;
      method = (MethodInfo *)__this_01;
    }
    CustomLogic_CustomLogicEvaluator__RunAssignmentsClassInstance
              ((CustomLogic_CustomLogicEvaluator_o *)pSVar9,
               (CustomLogic_CustomLogicClassInstance_o *)classInstance,auVar11._8_8_);
    return extraout_EAX_00;
  }
  return (bool_conflict)*(undefined8 *)&pSVar9->bounds[4].lower_bound;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetMainInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainInstance (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427c860

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainInstance
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._mainInstance;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x427c870

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
          CustomLogic_CustomLogicClassInstance_o *instance,System_String_o *methodName,
          System_Object_array *parameters,MethodInfo *method)

{
  System_Object_array *pSVar1;
  System_Collections_IDictionary_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *pIVar3;
  CustomLogic_CustomLogicClassInstance_o *pCVar4;
  CustomLogic_CustomLogicClassInstance_o *pCVar5;
  undefined8 uVar6;
  System_Exception_o *pSVar7;
  System_String_o *pSVar8;
  Il2CppObject *extraout_RAX;
  uint extraout_EDX;
  System_String_o *methodName_00;
  System_Object_array *parameterValues;
  Il2CppObject *value;
  CustomLogic_CustomLogicEvaluator_o *pCVar9;
  long lVar10;
  MethodInfo *in_R9;
  
  pCVar9 = (__this->fields)._evaluator;
  if (pCVar9 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pIVar3 = CustomLogic_CustomLogicEvaluator__EvaluateMethod(pCVar9,instance,methodName,parameters,0,in_R9);
    return pIVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = instance;
  if (g_data_057adc62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057adc62 = '\x01';
  }
  pSVar1 = (pCVar9->fields)._networkCallback;
  lVar10 = TypeInfo_CustomLogicEvaluator;
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pSVar1 != (System_Object_array *)0x0) {
    pCVar4 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                       ((CustomLogic_CustomLogicEvaluator_o *)pSVar1,(System_String_o *)instance,
                        (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),1,
                        (System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
    pSVar1 = (pCVar9->fields)._networkCallback;
    lVar10 = 0;
    pCVar5 = instance;
    if (pSVar1 != (System_Object_array *)0x0) {
      pIVar3 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         ((CustomLogic_CustomLogicEvaluator_o *)pSVar1,pCVar4,methodName_00,parameters,0,in_R9
                         );
      return pIVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar4 = pCVar5;
  if (g_data_057adc63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057adc63 = '\x01';
  }
  pCVar9 = *(CustomLogic_CustomLogicEvaluator_o **)(lVar10 + 0x10);
  lVar10 = TypeInfo_CustomLogicEvaluator;
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pCVar9 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar5 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                       (pCVar9,(System_String_o *)pCVar5,
                        (System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),extraout_EDX & 0xff,
                        (System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
    return (Il2CppObject *)pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = *(CustomLogic_CustomLogicClassInstance_o **)(lVar10 + 0x20);
  if (pCVar5 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
    System_Exception___ctor_3cf6120(pSVar7,pSVar8,(MethodInfo *)0x0);
    pCVar5 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_EvaluateMainMethod);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    pSVar7 = (System_Exception_o *)0x0;
    if (*(CustomLogic_CustomLogicEvaluator_o **)(lVar10 + 0x10) != (CustomLogic_CustomLogicEvaluator_o *)0x0)
    {
      pIVar3 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (*(CustomLogic_CustomLogicEvaluator_o **)(lVar10 + 0x10),pCVar5,
                          (System_String_o *)pCVar4,parameterValues,0,in_R9);
      return pIVar3;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar4 = (CustomLogic_CustomLogicClassInstance_o *)(pSVar7->fields)._data;
  if (pCVar4 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    pIVar3 = CustomLogic_CustomLogicClassInstance__GetVariable
                       (pCVar4,(System_String_o *)pCVar5,(MethodInfo *)0x0);
    return pIVar3;
  }
  uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar7 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
  pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
  System_Exception___ctor_3cf6120(pSVar7,pSVar8,(MethodInfo *)0x0);
  pIVar3 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetMainVariable);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adc64 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057adc64 = '\x01';
  }
  pSVar2 = (pSVar7->fields)._data;
  if (pSVar2 == (System_Collections_IDictionary_o *)0x0) {
    uVar6 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar7 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar6);
    pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
    System_Exception___ctor_3cf6120(pSVar7,pSVar8,(MethodInfo *)0x0);
    uVar6 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetMainVariable);
    il2cpp_runtime_helper_022b2b10(pSVar7,uVar6);
  }
  else {
    __this_00 = pSVar2[1].monitor;
    pSVar7 = (System_Exception_o *)0x0;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item(__this_00,pIVar3,value,MethodInfo_Void_set_Item);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (Il2CppObject *)(pSVar7->fields)._message;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x427c890

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMethod_417c890
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
          System_String_o *methodName,System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  CustomLogic_CustomLogicClassInstance_o *__this_00;
  System_Collections_IDictionary_o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  CustomLogic_CustomLogicClassInstance_o *pCVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  System_Exception_o *pSVar6;
  System_String_o *pSVar7;
  Il2CppObject *extraout_RAX;
  uint extraout_EDX;
  System_Object_array *parameterValues;
  Il2CppObject *value;
  System_String_o *methodName_00;
  long lVar8;
  MethodInfo *in_R9;
  
  pSVar7 = className;
  if (g_data_057adc62 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057adc62 = '\x01';
  }
  pCVar1 = (__this->fields)._evaluator;
  lVar8 = TypeInfo_CustomLogicEvaluator;
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar3 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                       (pCVar1,className,(System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),1,
                        (System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
    pCVar1 = (__this->fields)._evaluator;
    lVar8 = 0;
    pSVar7 = className;
    if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar4 = CustomLogic_CustomLogicEvaluator__EvaluateMethod(pCVar1,pCVar3,methodName,parameters,0,in_R9);
      return pIVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  methodName_00 = pSVar7;
  if (g_data_057adc63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057adc63 = '\x01';
  }
  pCVar1 = *(CustomLogic_CustomLogicEvaluator_o **)(lVar8 + 0x10);
  lVar8 = TypeInfo_CustomLogicEvaluator;
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (pCVar1 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar3 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                       (pCVar1,pSVar7,(System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),
                        extraout_EDX & 0xff,(System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
    return (Il2CppObject *)pCVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar3 = *(CustomLogic_CustomLogicClassInstance_o **)(lVar8 + 0x20);
  if (pCVar3 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar6 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
    System_Exception___ctor_3cf6120(pSVar6,pSVar7,(MethodInfo *)0x0);
    pCVar3 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_EvaluateMainMethod);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    pSVar6 = (System_Exception_o *)0x0;
    if (*(CustomLogic_CustomLogicEvaluator_o **)(lVar8 + 0x10) != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar4 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (*(CustomLogic_CustomLogicEvaluator_o **)(lVar8 + 0x10),pCVar3,methodName_00,
                          parameterValues,0,in_R9);
      return pIVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = (CustomLogic_CustomLogicClassInstance_o *)(pSVar6->fields)._data;
  if (__this_00 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    pIVar4 = CustomLogic_CustomLogicClassInstance__GetVariable
                       (__this_00,(System_String_o *)pCVar3,(MethodInfo *)0x0);
    return pIVar4;
  }
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar6 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
  System_Exception___ctor_3cf6120(pSVar6,pSVar7,(MethodInfo *)0x0);
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetMainVariable);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adc64 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057adc64 = '\x01';
  }
  pSVar2 = (pSVar6->fields)._data;
  if (pSVar2 == (System_Collections_IDictionary_o *)0x0) {
    uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar6 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
    pSVar7 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
    System_Exception___ctor_3cf6120(pSVar6,pSVar7,(MethodInfo *)0x0);
    uVar5 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetMainVariable);
    il2cpp_runtime_helper_022b2b10(pSVar6,uVar5);
  }
  else {
    __this_01 = pSVar2[1].monitor;
    pSVar6 = (System_Exception_o *)0x0;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item(__this_01,pIVar4,value,MethodInfo_Void_set_Item);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (Il2CppObject *)(pSVar6->fields)._message;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$CreateClassInstance
// il2cpp: CustomLogic_CustomLogicClassInstance_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateClassInstance (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* className, bool init, const MethodInfo* method);
// 0x427c940

CustomLogic_CustomLogicClassInstance_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__CreateClassInstance
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *className,
          bool_conflict init,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  System_Collections_IDictionary_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  CustomLogic_CustomLogicClassInstance_o *pCVar2;
  undefined8 uVar3;
  System_Exception_o *pSVar4;
  System_String_o *pSVar5;
  Il2CppObject *key;
  CustomLogic_CustomLogicClassInstance_o *extraout_RAX;
  System_Object_array *parameterValues;
  Il2CppObject *value;
  long lVar6;
  MethodInfo *in_R9;
  
  pSVar5 = className;
  if (g_data_057adc63 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    g_data_057adc63 = '\x01';
  }
  __this_00 = (__this->fields)._evaluator;
  lVar6 = TypeInfo_CustomLogicEvaluator;
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pCVar2 = CustomLogic_CustomLogicEvaluator__CreateClassInstance_416dd10
                       (__this_00,className,(System_Object_array *)**(undefined8 **)(TypeInfo_CustomLogicEvaluator + 0xb8),
                        init & 0xff,(System_Nullable_CustomLogicSourceType__o)0x0,in_R9);
    return pCVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar2 = *(CustomLogic_CustomLogicClassInstance_o **)(lVar6 + 0x20);
  if (pCVar2 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar4 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
    System_Exception___ctor_3cf6120(pSVar4,pSVar5,(MethodInfo *)0x0);
    pCVar2 = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_EvaluateMainMethod);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    pSVar4 = (System_Exception_o *)0x0;
    if (*(CustomLogic_CustomLogicEvaluator_o **)(lVar6 + 0x10) != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pCVar2 = (CustomLogic_CustomLogicClassInstance_o *)
               CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (*(CustomLogic_CustomLogicEvaluator_o **)(lVar6 + 0x10),pCVar2,pSVar5,parameterValues
                          ,0,in_R9);
      return pCVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (CustomLogic_CustomLogicClassInstance_o *)(pSVar4->fields)._data;
  if (__this_01 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    pCVar2 = (CustomLogic_CustomLogicClassInstance_o *)
             CustomLogic_CustomLogicClassInstance__GetVariable
                       (__this_01,(System_String_o *)pCVar2,(MethodInfo *)0x0);
    return pCVar2;
  }
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar4 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
  System_Exception___ctor_3cf6120(pSVar4,pSVar5,(MethodInfo *)0x0);
  key = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetMainVariable);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adc64 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057adc64 = '\x01';
  }
  pSVar1 = (pSVar4->fields)._data;
  if (pSVar1 == (System_Collections_IDictionary_o *)0x0) {
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar4 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
    System_Exception___ctor_3cf6120(pSVar4,pSVar5,(MethodInfo *)0x0);
    uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetMainVariable);
    il2cpp_runtime_helper_022b2b10(pSVar4,uVar3);
  }
  else {
    __this_02 = pSVar1[1].monitor;
    pSVar4 = (System_Exception_o *)0x0;
    if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item(__this_02,key,value,MethodInfo_Void_set_Item);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (CustomLogic_CustomLogicClassInstance_o *)(pSVar4->fields)._message;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$EvaluateMainMethod
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMainMethod (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* methodName, System_Object_array* parameters, const MethodInfo* method);
// 0x427c9c0

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__EvaluateMainMethod
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *methodName,
          System_Object_array *parameters,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicClassInstance_o *__this_01;
  System_Collections_IDictionary_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  Il2CppObject *pIVar2;
  CustomLogic_CustomLogicClassInstance_o *classInstance;
  undefined8 uVar3;
  System_Exception_o *pSVar4;
  System_String_o *pSVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *value;
  MethodInfo *in_R9;
  
  classInstance = (__this->fields)._mainInstance;
  if (classInstance == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar4 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
    System_Exception___ctor_3cf6120(pSVar4,pSVar5,(MethodInfo *)0x0);
    classInstance = (CustomLogic_CustomLogicClassInstance_o *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_EvaluateMainMethod);
    il2cpp_runtime_helper_022b2b10();
  }
  else {
    __this_00 = (__this->fields)._evaluator;
    pSVar4 = (System_Exception_o *)0x0;
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pIVar2 = CustomLogic_CustomLogicEvaluator__EvaluateMethod
                         (__this_00,classInstance,methodName,parameters,0,in_R9);
      return pIVar2;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_01 = (CustomLogic_CustomLogicClassInstance_o *)(pSVar4->fields)._data;
  if (__this_01 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    pIVar2 = CustomLogic_CustomLogicClassInstance__GetVariable
                       (__this_01,(System_String_o *)classInstance,(MethodInfo *)0x0);
    return pIVar2;
  }
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar4 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
  System_Exception___ctor_3cf6120(pSVar4,pSVar5,(MethodInfo *)0x0);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetMainVariable);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adc64 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057adc64 = '\x01';
  }
  pSVar1 = (pSVar4->fields)._data;
  if (pSVar1 == (System_Collections_IDictionary_o *)0x0) {
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar4 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
    System_Exception___ctor_3cf6120(pSVar4,pSVar5,(MethodInfo *)0x0);
    uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetMainVariable);
    il2cpp_runtime_helper_022b2b10(pSVar4,uVar3);
  }
  else {
    __this_02 = pSVar1[1].monitor;
    pSVar4 = (System_Exception_o *)0x0;
    if (__this_02 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item(__this_02,pIVar2,value,MethodInfo_Void_set_Item);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (Il2CppObject *)(pSVar4->fields)._message;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetMainVariable
// il2cpp: Il2CppObject* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainVariable (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* variableName, const MethodInfo* method);
// 0x427ca30

Il2CppObject *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetMainVariable
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,System_String_o *variableName,
          MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *__this_00;
  System_Collections_IDictionary_o *pSVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_01;
  Il2CppObject *pIVar2;
  undefined8 uVar3;
  System_Exception_o *pSVar4;
  System_String_o *pSVar5;
  Il2CppObject *extraout_RAX;
  Il2CppObject *value;
  
  __this_00 = (__this->fields)._mainInstance;
  if (__this_00 != (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    pIVar2 = CustomLogic_CustomLogicClassInstance__GetVariable(__this_00,variableName,(MethodInfo *)0x0);
    return pIVar2;
  }
  uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  pSVar4 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
  System_Exception___ctor_3cf6120(pSVar4,pSVar5,(MethodInfo *)0x0);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023445d0(&MethodInfo_Object_GetMainVariable);
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057adc64 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057adc64 = '\x01';
  }
  pSVar1 = (pSVar4->fields)._data;
  if (pSVar1 == (System_Collections_IDictionary_o *)0x0) {
    uVar3 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    pSVar4 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar3);
    pSVar5 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
    System_Exception___ctor_3cf6120(pSVar4,pSVar5,(MethodInfo *)0x0);
    uVar3 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetMainVariable);
    il2cpp_runtime_helper_022b2b10(pSVar4,uVar3);
  }
  else {
    __this_01 = pSVar1[1].monitor;
    pSVar4 = (System_Exception_o *)0x0;
    if (__this_01 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item(__this_01,pIVar2,value,MethodInfo_Void_set_Item);
      return extraout_RAX;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (Il2CppObject *)(pSVar4->fields)._message;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$SetMainVariable
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__SetMainVariable (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, System_String_o* variableName, Il2CppObject* value, const MethodInfo* method);
// 0x427ca90

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__SetMainVariable
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,
               System_String_o *variableName,Il2CppObject *value,MethodInfo *method)

{
  CustomLogic_CustomLogicClassInstance_o *pCVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 uVar2;
  System_Exception_o *__this_01;
  System_String_o *message;
  
  if (g_data_057adc64 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057adc64 = '\x01';
  }
  pCVar1 = (__this->fields)._mainInstance;
  if (pCVar1 == (CustomLogic_CustomLogicClassInstance_o *)0x0) {
    uVar2 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
    __this_01 = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar2);
    message = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Main class not found or not initialized");
    System_Exception___ctor_3cf6120(__this_01,message,(MethodInfo *)0x0);
    uVar2 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SetMainVariable);
    il2cpp_runtime_helper_022b2b10(__this_01,uVar2);
  }
  else {
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pCVar1->fields).Variables;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___set_Item
                (__this_00,(Il2CppObject *)variableName,value,MethodInfo_Void_set_Item);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetCompiler
// il2cpp: CustomLogic_CustomLogicCompiler_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCompiler (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427cb40

CustomLogic_CustomLogicCompiler_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCompiler
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  return (__this->fields)._compiler;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetCapturedErrors
// il2cpp: System_Collections_Generic_List_CustomLogicError__o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCapturedErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427cb50

System_Collections_Generic_List_CustomLogicError__o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetCapturedErrors
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  int iVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  CustomLogic_CustomLogicCompiler_o *pCVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_List_CustomLogicError__o *extraout_RAX;
  System_Collections_Generic_List_CustomLogicError__o *pSVar5;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Int32_array *pSVar6;
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *pCVar7;
  System_Collections_Generic_HashSet_object__o *__this_02;
  
  pCVar3 = (__this->fields)._evaluator;
  if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return (System_Collections_Generic_List_CustomLogicError__o *)(pCVar3->fields)._Compiler_k__BackingField;
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar7 = __this;
  if (g_data_057adc65 == '\0') {
    pCVar7 = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc65 = '\x01';
  }
  pCVar3 = (__this->fields)._evaluator;
  if ((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (pCVar4 = (pCVar3->fields)._Compiler_k__BackingField, pCVar4 != (CustomLogic_CustomLogicCompiler_o *)0x0)
     ) {
    return (System_Collections_Generic_List_CustomLogicError__o *)
           CONCAT71((int7)((ulong)pCVar4 >> 8),0 < *(int *)&(pCVar4->fields)._fileRanges);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar3 = (pCVar7->fields)._evaluator;
  if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if (g_data_057adc2f == '\0') {
      pCVar7 = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)&MethodInfo_Void_Clear;
      il2cpp_runtime_helper_023445d0();
      g_data_057adc2f = '\x01';
    }
    pSVar5 = (System_Collections_Generic_List_CustomLogicError__o *)(pCVar3->fields)._Compiler_k__BackingField
    ;
    if (pSVar5 != (System_Collections_Generic_List_CustomLogicError__o *)0x0) {
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar5->fields)._size;
      (pSVar5->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar5->fields)._items,0,length,(MethodInfo *)0x0);
        return extraout_RAX;
      }
      return pSVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc66 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicError_get_Item);
    g_data_057adc66 = '\x01';
  }
  pCVar3 = (pCVar7->fields)._evaluator;
  if ((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(pCVar3->fields)._Compiler_k__BackingField,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    iVar2 = (__this_00->fields)._size;
    if (0 < iVar2) {
      pSVar5 = (System_Collections_Generic_List_CustomLogicError__o *)
               System_Collections_Generic_List_object___get_Item(__this_00,iVar2 + -1,MethodInfo_CustomLogicError_get_Item);
      return pSVar5;
    }
    return (System_Collections_Generic_List_CustomLogicError__o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc67 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OfflineCustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&"Random");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Dict");
    il2cpp_runtime_helper_023445d0(&"Quaternion");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"List");
    il2cpp_runtime_helper_023445d0(&"Json");
    il2cpp_runtime_helper_023445d0(&"Math");
    il2cpp_runtime_helper_023445d0(&"Vector3");
    il2cpp_runtime_helper_023445d0(&"String");
    il2cpp_runtime_helper_023445d0(&"Vector2");
    il2cpp_runtime_helper_023445d0(&"Convert");
    il2cpp_runtime_helper_023445d0(&"Range");
    g_data_057adc67 = '\x01';
  }
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pSVar6 = MethodInfo_HashSet_1_System_String;
  __this_02 = __this_01;
  System_Collections_Generic_HashSet_object____ctor(__this_01,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this_01,"Math",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Convert",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Json",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Random",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"String",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"List",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Dict",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Range",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Vector2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Vector3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Quaternion",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Color",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8) = __this_01;
    pSVar5 = (System_Collections_Generic_List_CustomLogicError__o *)
             il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8),__this_01);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  (__this_02->fields)._buckets = pSVar6;
  pSVar5 = (System_Collections_Generic_List_CustomLogicError__o *)
           il2cpp_runtime_helper_022b4080(&__this_02->fields,pSVar6);
  return pSVar5;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$HasErrors
// il2cpp: bool CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427cb70

bool_conflict
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__HasErrors
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t length;
  int iVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  CustomLogic_CustomLogicCompiler_o *pCVar4;
  System_Collections_Generic_List_object__o *__this_00;
  bool_conflict extraout_EAX;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Int32_array *pSVar7;
  CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *pCVar8;
  System_Collections_Generic_HashSet_object__o *__this_02;
  
  pCVar8 = __this;
  if (g_data_057adc65 == '\0') {
    pCVar8 = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)&MethodInfo_Int32_get_Count;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc65 = '\x01';
  }
  pCVar3 = (__this->fields)._evaluator;
  if ((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (pCVar4 = (pCVar3->fields)._Compiler_k__BackingField, pCVar4 != (CustomLogic_CustomLogicCompiler_o *)0x0)
     ) {
    return (bool_conflict)CONCAT71((int7)((ulong)pCVar4 >> 8),0 < *(int *)&(pCVar4->fields)._fileRanges);
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar3 = (pCVar8->fields)._evaluator;
  if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if (g_data_057adc2f == '\0') {
      pCVar8 = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)&MethodInfo_Void_Clear;
      il2cpp_runtime_helper_023445d0();
      g_data_057adc2f = '\x01';
    }
    pCVar4 = (pCVar3->fields)._Compiler_k__BackingField;
    if (pCVar4 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
      piVar1 = (int *)((long)&(pCVar4->fields)._fileRanges + 4);
      *piVar1 = *piVar1 + 1;
      length = *(int32_t *)&(pCVar4->fields)._fileRanges;
      *(undefined4 *)&(pCVar4->fields)._fileRanges = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pCVar4->fields)._sourceFiles,0,length,(MethodInfo *)0x0);
        return extraout_EAX;
      }
      return (bool_conflict)pCVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc66 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicError_get_Item);
    g_data_057adc66 = '\x01';
  }
  pCVar3 = (pCVar8->fields)._evaluator;
  if ((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(pCVar3->fields)._Compiler_k__BackingField,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    iVar2 = (__this_00->fields)._size;
    if (0 < iVar2) {
      pIVar6 = System_Collections_Generic_List_object___get_Item(__this_00,iVar2 + -1,MethodInfo_CustomLogicError_get_Item);
      return (bool_conflict)pIVar6;
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc67 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OfflineCustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&"Random");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Dict");
    il2cpp_runtime_helper_023445d0(&"Quaternion");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"List");
    il2cpp_runtime_helper_023445d0(&"Json");
    il2cpp_runtime_helper_023445d0(&"Math");
    il2cpp_runtime_helper_023445d0(&"Vector3");
    il2cpp_runtime_helper_023445d0(&"String");
    il2cpp_runtime_helper_023445d0(&"Vector2");
    il2cpp_runtime_helper_023445d0(&"Convert");
    il2cpp_runtime_helper_023445d0(&"Range");
    g_data_057adc67 = '\x01';
  }
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pSVar7 = MethodInfo_HashSet_1_System_String;
  __this_02 = __this_01;
  System_Collections_Generic_HashSet_object____ctor(__this_01,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this_01,"Math",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Convert",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Json",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Random",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"String",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"List",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Dict",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Range",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Vector2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Vector3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Quaternion",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Color",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8) = __this_01;
    bVar5 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8),__this_01);
    return bVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  (__this_02->fields)._buckets = pSVar7;
  bVar5 = il2cpp_runtime_helper_022b4080(&__this_02->fields,pSVar7);
  return bVar5;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$ClearErrors
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__ClearErrors (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427cbc0

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__ClearErrors
               (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int *piVar1;
  int32_t length;
  int iVar2;
  CustomLogic_CustomLogicEvaluator_o *pCVar3;
  CustomLogic_CustomLogicCompiler_o *pCVar4;
  System_Collections_Generic_List_object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Int32_array *pSVar5;
  System_Collections_Generic_HashSet_object__o *__this_02;
  
  pCVar3 = (__this->fields)._evaluator;
  if (pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if (g_data_057adc2f == '\0') {
      __this = (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *)&MethodInfo_Void_Clear;
      il2cpp_runtime_helper_023445d0();
      g_data_057adc2f = '\x01';
    }
    pCVar4 = (pCVar3->fields)._Compiler_k__BackingField;
    if (pCVar4 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
      piVar1 = (int *)((long)&(pCVar4->fields)._fileRanges + 4);
      *piVar1 = *piVar1 + 1;
      length = *(int32_t *)&(pCVar4->fields)._fileRanges;
      *(undefined4 *)&(pCVar4->fields)._fileRanges = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pCVar4->fields)._sourceFiles,0,length,(MethodInfo *)0x0);
        return;
      }
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc66 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicError_get_Item);
    g_data_057adc66 = '\x01';
  }
  pCVar3 = (__this->fields)._evaluator;
  if ((pCVar3 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(pCVar3->fields)._Compiler_k__BackingField,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    iVar2 = (__this_00->fields)._size;
    if (0 < iVar2) {
      System_Collections_Generic_List_object___get_Item(__this_00,iVar2 + -1,MethodInfo_CustomLogicError_get_Item);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc67 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OfflineCustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&"Random");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Dict");
    il2cpp_runtime_helper_023445d0(&"Quaternion");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"List");
    il2cpp_runtime_helper_023445d0(&"Json");
    il2cpp_runtime_helper_023445d0(&"Math");
    il2cpp_runtime_helper_023445d0(&"Vector3");
    il2cpp_runtime_helper_023445d0(&"String");
    il2cpp_runtime_helper_023445d0(&"Vector2");
    il2cpp_runtime_helper_023445d0(&"Convert");
    il2cpp_runtime_helper_023445d0(&"Range");
    g_data_057adc67 = '\x01';
  }
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pSVar5 = MethodInfo_HashSet_1_System_String;
  __this_02 = __this_01;
  System_Collections_Generic_HashSet_object____ctor(__this_01,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this_01,"Math",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Convert",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Json",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Random",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"String",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"List",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Dict",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Range",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Vector2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Vector3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Quaternion",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Color",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8) = __this_01;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8),__this_01);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  (__this_02->fields)._buckets = pSVar5;
  il2cpp_runtime_helper_022b4080(&__this_02->fields,pSVar5);
  return;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$GetLastError
// il2cpp: CustomLogic_CustomLogicError_o* CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetLastError (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o* __this, const MethodInfo* method);
// 0x427cc20

CustomLogic_CustomLogicError_o *
CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator__GetLastError
          (CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_Collections_Generic_List_object__o *__this_00;
  CustomLogic_CustomLogicError_o *pCVar3;
  System_Collections_Generic_HashSet_object__o *__this_01;
  System_Int32_array *pSVar4;
  System_Collections_Generic_HashSet_object__o *__this_02;
  
  if (g_data_057adc66 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicError_get_Item);
    g_data_057adc66 = '\x01';
  }
  pCVar2 = (__this->fields)._evaluator;
  if ((pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
     (__this_00 = (System_Collections_Generic_List_object__o *)(pCVar2->fields)._Compiler_k__BackingField,
     __this_00 != (System_Collections_Generic_List_object__o *)0x0)) {
    iVar1 = (__this_00->fields)._size;
    if (0 < iVar1) {
      pCVar3 = (CustomLogic_CustomLogicError_o *)
               System_Collections_Generic_List_object___get_Item(__this_00,iVar1 + -1,MethodInfo_CustomLogicError_get_Item);
      return pCVar3;
    }
    return (CustomLogic_CustomLogicError_o *)0x0;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adc67 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OfflineCustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&"Random");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Dict");
    il2cpp_runtime_helper_023445d0(&"Quaternion");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"List");
    il2cpp_runtime_helper_023445d0(&"Json");
    il2cpp_runtime_helper_023445d0(&"Math");
    il2cpp_runtime_helper_023445d0(&"Vector3");
    il2cpp_runtime_helper_023445d0(&"String");
    il2cpp_runtime_helper_023445d0(&"Vector2");
    il2cpp_runtime_helper_023445d0(&"Convert");
    il2cpp_runtime_helper_023445d0(&"Range");
    g_data_057adc67 = '\x01';
  }
  __this_01 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pSVar4 = MethodInfo_HashSet_1_System_String;
  __this_02 = __this_01;
  System_Collections_Generic_HashSet_object____ctor(__this_01,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this_01,"Math",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Convert",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Json",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Random",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"String",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"List",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Dict",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Range",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Vector2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Vector3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Quaternion",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this_01,"Color",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8) = __this_01;
    pCVar3 = (CustomLogic_CustomLogicError_o *)
             il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8),__this_01);
    return pCVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  (__this_02->fields)._buckets = pSVar4;
  pCVar3 = (CustomLogic_CustomLogicError_o *)il2cpp_runtime_helper_022b4080(&__this_02->fields,pSVar4);
  return pCVar3;
}


// CustomLogic.OfflineEvaluator.OfflineCustomLogicEvaluator$$.cctor
// il2cpp: void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___cctor (const MethodInfo* method);
// 0x427cc90

void CustomLogic_OfflineEvaluator_OfflineCustomLogicEvaluator___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  System_Int32_array *pSVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (g_data_057adc67 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OfflineCustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&"Random");
    il2cpp_runtime_helper_023445d0(&"Color");
    il2cpp_runtime_helper_023445d0(&"Dict");
    il2cpp_runtime_helper_023445d0(&"Quaternion");
    il2cpp_runtime_helper_023445d0(&"Set");
    il2cpp_runtime_helper_023445d0(&"List");
    il2cpp_runtime_helper_023445d0(&"Json");
    il2cpp_runtime_helper_023445d0(&"Math");
    il2cpp_runtime_helper_023445d0(&"Vector3");
    il2cpp_runtime_helper_023445d0(&"String");
    il2cpp_runtime_helper_023445d0(&"Vector2");
    il2cpp_runtime_helper_023445d0(&"Convert");
    il2cpp_runtime_helper_023445d0(&"Range");
    g_data_057adc67 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  pSVar1 = MethodInfo_HashSet_1_System_String;
  __this_00 = __this;
  System_Collections_Generic_HashSet_object____ctor(__this,(MethodInfo_33E0570 *)MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add(__this,"Math",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Convert",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Json",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Random",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"String",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"List",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Set",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Dict",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Range",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Vector2",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Vector3",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Quaternion",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet_object___Add(__this,"Color",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_OfflineCustomLogicEvaluator + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._buckets = pSVar1;
  il2cpp_runtime_helper_022b4080(&__this_00->fields,pSVar1);
  return;
}


