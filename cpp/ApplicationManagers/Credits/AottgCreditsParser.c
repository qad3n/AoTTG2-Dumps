// Type: ApplicationManagers.Credits.AottgCreditsParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsParser.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsParser$$TryParse
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParse (System_String_o* json, ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x44c6560

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryParse
          (System_String_o *json,ApplicationManagers_Credits_AottgCreditsResponse_o **credits,
          System_String_o **error,MethodInfo *method)

{
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *root;
  
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  il2cpp_runtime_helper_022b4080(credits);
  *error = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(error);
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    root = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryParse_43c6700(root,credits,error,method);
  }
  else {
    if (g_data_057aeae1 == '\0') {
      il2cpp_runtime_helper_023445d0(&"bad_response");
      g_data_057aeae1 = '\x01';
    }
    *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    bVar1 = 0;
    il2cpp_runtime_helper_022b4080(credits,0);
    *error = "bad_response";
    il2cpp_runtime_helper_022b4080(error,"bad_response");
  }
  return bVar1;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParse
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParse (SimpleJSONFixed_JSONNode_o* root, ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x44c6700

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryParse_43c6700
          (SimpleJSONFixed_JSONNode_o *root,ApplicationManagers_Credits_AottgCreditsResponse_o **credits,
          System_String_o **error,MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  undefined1 uVar3;
  byte bVar4;
  int32_t length;
  void *pvVar5;
  System_Object_array *pSVar6;
  Il2CppArrayBounds *pIVar7;
  char *pcVar8;
  unkuint10 Var9;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAVar10;
  System_String_o *title;
  ApplicationManagers_Credits_AottgCreditGroup_array *groups;
  ApplicationManagers_Credits_AottgCreditCategory_o *description;
  ApplicationManagers_Credits_AottgCreditCategory_o *name;
  char cVar11;
  bool_conflict bVar12;
  undefined4 uVar13;
  int iVar14;
  uint uVar15;
  bool_conflict extraout_EAX;
  long lVar16;
  Il2CppClass *__this;
  Il2CppClass *pIVar17;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar18;
  System_TimeSpan_Fields SVar19;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar20;
  System_TimeSpan_o t1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar21;
  System_Object_array *pSVar22;
  undefined8 uVar23;
  undefined8 *puVar24;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAVar25;
  ApplicationManagers_Credits_AottgCreditsResponse_o *__this_00;
  ApplicationManagers_Credits_AottgCreditCategory_c *__this_01;
  long *plVar26;
  SimpleJSONFixed_JSONNode_o *pSVar27;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAVar28;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAVar29;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAVar30;
  System_Object_array *pSVar31;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAVar32;
  ApplicationManagers_Credits_AottgCreditGroup_o *__this_02;
  Il2CppObject *pIVar33;
  System_String_o *pSVar34;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_03;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_04;
  Il2CppClass *pIVar35;
  Il2CppClass *onResult;
  Il2CppClass *pIVar36;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  ApplicationManagers_Credits_AottgCreditCategory_array *extraout_RDX_01;
  MethodInfo *method_04;
  MethodInfo *method_05;
  ulong uVar37;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAVar38;
  MethodInfo **ppMVar39;
  char **ppcVar40;
  System_TimeSpan_Fields SVar41;
  Il2CppClass **unaff_RBP;
  System_TimeSpan_Fields SVar42;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAVar43;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAVar44;
  MethodInfo *method_06;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSVar45;
  Il2CppClass *__this_05;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar46;
  Il2CppClass *pIVar47;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  ApplicationManagers_Credits_AottgCreditCategory_array *unaff_R12;
  Il2CppClass **unaff_R13;
  ApplicationManagers_Credits_AottgCreditCategory_array **ppAVar48;
  undefined1 auVar49 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_06;
  unkbyte10 Var50;
  System_Object_array *pSStack_2b8;
  undefined4 uStack_2ae;
  undefined2 uStack_2aa;
  Il2CppClass *pIStack_2a8;
  Il2CppClass *pIStack_2a0;
  System_DateTime_Fields SStack_298;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_290;
  char cStack_288;
  undefined7 uStack_287;
  undefined8 uStack_280;
  MethodInfo *pMStack_270;
  Il2CppClass *pIStack_268;
  Il2CppClass *pIStack_260;
  Il2CppClass *pIStack_258;
  Il2CppClass *pIStack_250;
  Il2CppClass *pIStack_248;
  Il2CppClass *pIStack_240;
  Il2CppClass *pIStack_238;
  Il2CppClass *pIStack_230;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_228;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_220;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_218;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSStack_210;
  long lStack_208;
  Il2CppClass *pIStack_200;
  undefined8 uStack_1f8;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_1f0;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_1e8;
  undefined8 *puStack_1e0;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_1d8;
  MethodInfo **ppMStack_1d0;
  Il2CppClass *pIStack_1c0;
  System_Guid_Fields SStack_1b8;
  undefined8 uStack_1a0;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_198;
  Il2CppClass *pIStack_190;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_188;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAStack_178;
  System_String_o *pSStack_170;
  System_String_o *pSStack_168;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_160;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_158;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_150;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_148;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_140;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_138;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_130;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_128;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_120;
  Il2CppClass *pIStack_118;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_110;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_108;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_100;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_f8;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_f0;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_e8;
  Il2CppClass *pIStack_e0;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAStack_d8;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_d0;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_c8;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_c0;
  Il2CppClass *pIStack_b8;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAStack_b0;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAStack_a8;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_a0;
  ApplicationManagers_Credits_AottgCreditGroup_array *pAStack_90;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAStack_88;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAStack_80;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAStack_78;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_70;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_68;
  ApplicationManagers_Credits_AottgCreditCategory_array *pAStack_60;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAStack_58;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAStack_50;
  Il2CppClass *pIStack_48;
  ApplicationManagers_Credits_AottgCreditCategory_o *pAStack_40;
  MethodInfo_37EC980 *method_00;
  
  if (g_data_057aead8 == '\0') {
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c6729;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditCategory);
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c6735;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResponse);
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c6741;
    il2cpp_runtime_helper_023445d0(&"categories");
    g_data_057aead8 = '\x01';
  }
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c6759;
  il2cpp_runtime_helper_022b4080(credits);
  *error = (System_String_o *)0x0;
  pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c676a;
  il2cpp_runtime_helper_022b4080(error);
  if (g_data_057aeae0 == '\0') {
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c677f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c679e;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c67aa;
  bVar12 = SimpleJSONFixed_JSONNode__op_Inequality(root,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') goto label_044c6955;
  if (root == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044c69ad;
  pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c67ce;
  cVar11 = (*(root->klass->vtable)._17_get_IsObject.methodPtr)
                     (root,(root->klass->vtable)._17_get_IsObject.method);
  if (cVar11 == '\0') {
label_044c6955:
    if (g_data_057aeae1 == '\0') {
      pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c696a;
      il2cpp_runtime_helper_023445d0(&"bad_response");
      g_data_057aeae1 = '\x01';
    }
    *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c6984;
    il2cpp_runtime_helper_022b4080(credits,0);
    *error = "bad_response";
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c699c;
    il2cpp_runtime_helper_022b4080(error,"bad_response");
    return 0;
  }
  unaff_RBP = (Il2CppClass **)&"categories";
  pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c67f4;
  cVar11 = (*(root->klass->vtable)._28_HasKey.methodPtr)
                     (root,"categories",(root->klass->vtable)._28_HasKey.method);
  if (cVar11 == '\0') goto label_044c6955;
  pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c6813;
  puVar24 = (undefined8 *)
            (*(root->klass->vtable)._7_get_Item.methodPtr)
                      (root,"categories",(root->klass->vtable)._7_get_Item.method);
  if (puVar24 == (undefined8 *)0x0) goto label_044c69ad;
  method = (MethodInfo *)*puVar24;
  pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c682f;
  cVar11 = (*((Il2CppClass *)method)->vtable[0x10].methodPtr)
                     (puVar24,((Il2CppClass *)method)->vtable[0x10].method);
  if (cVar11 == '\0') goto label_044c6955;
  pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c684e;
  puVar24 = (undefined8 *)
            (*(root->klass->vtable)._7_get_Item.methodPtr)
                      (root,"categories",(root->klass->vtable)._7_get_Item.method);
  if (puVar24 == (undefined8 *)0x0) {
label_044c69ad:
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c69b2;
    il2cpp_runtime_helper_022b2c90();
label_044c69b2:
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c69b7;
    il2cpp_runtime_helper_022b2ca0();
  }
  else {
    method = (MethodInfo *)*puVar24;
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c686a;
    pAVar25 = (ApplicationManagers_Credits_AottgCreditCategory_array *)
              (*((Il2CppClass *)method)->vtable[0x2d].methodPtr)(puVar24);
    if (pAVar25 == (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) goto label_044c69ad;
    now.fields._8_8_ = (pAVar25->obj).klass;
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c6889;
    uVar13 = (*(now.fields._8_8_)->vtable[0xb].methodPtr)(pAVar25,(now.fields._8_8_)->vtable[0xb].method);
    method = (MethodInfo *)&TypeInfo_AottgCreditCategory;
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c689a;
    unaff_R12 = (ApplicationManagers_Credits_AottgCreditCategory_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgCreditCategory,uVar13);
    pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c68b1;
    iVar14 = (*((pAVar25->obj).klass)->vtable[0xb].methodPtr)(pAVar25);
    if (iVar14 < 1) {
label_044c6926:
      pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c6935;
      auVar49 = il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResponse);
      __this_00 = auVar49._0_8_;
      pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c6943;
      ApplicationManagers_Credits_AottgCreditsResponse___ctor(__this_00,unaff_R12,auVar49._8_8_);
      *credits = __this_00;
      pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c6951;
      il2cpp_runtime_helper_022b4080(credits,__this_00);
      return (bool_conflict)CONCAT71(auVar49._1_7_,1);
    }
    unaff_R13 = (Il2CppClass **)pAVar25;
    if (unaff_R12 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
      root = (SimpleJSONFixed_JSONNode_o *)unaff_R12->m_Items;
      unaff_RBP = (Il2CppClass **)0x0;
      do {
        now.fields._8_8_ = (pAVar25->obj).klass;
        pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c68e6;
        auVar49 = (*(now.fields._8_8_)->vtable[5].methodPtr)
                            (pAVar25,(ulong)unaff_RBP & 0xffffffff,(now.fields._8_8_)->vtable[5].method);
        method = (MethodInfo *)(ulong)(uint)unaff_R12->max_length;
        if (method <= unaff_RBP) goto label_044c69b2;
        pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c68ff;
        bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory
                           (auVar49._0_8_,(ApplicationManagers_Credits_AottgCreditCategory_o **)root,
                            auVar49._8_8_);
        if ((char)bVar12 == '\0') goto label_044c6955;
        unaff_RBP = (Il2CppClass **)((long)&(((Il2CppClass *)unaff_RBP)->_1).image + 1);
        now.fields._8_8_ = (pAVar25->obj).klass;
        pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c691b;
        iVar14 = (*(now.fields._8_8_)->vtable[0xb].methodPtr)(pAVar25,(now.fields._8_8_)->vtable[0xb].method);
        root = (SimpleJSONFixed_JSONNode_o *)
               &((ApplicationManagers_Credits_AottgCreditCategory_o *)root)->monitor;
      } while ((long)unaff_RBP < (long)iVar14);
      goto label_044c6926;
    }
  }
  now.fields._8_8_ = (((ApplicationManagers_Credits_AottgCreditCategory_array *)unaff_R13)->obj).klass;
  pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c69cd;
  pAVar25 = (ApplicationManagers_Credits_AottgCreditCategory_array *)unaff_R13;
  (*(now.fields._8_8_)->vtable[5].methodPtr)(unaff_R13,0,(now.fields._8_8_)->vtable[5].method);
  pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x44c69d2;
  il2cpp_runtime_helper_022b2c90();
  pAStack_40 = (ApplicationManagers_Credits_AottgCreditCategory_o *)root;
  if (g_data_057aeae0 == '\0') {
    pIStack_48 = (Il2CppClass *)0x44c69f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pIStack_48 = (Il2CppClass *)0x44c6a18;
    il2cpp_runtime_helper_02337ed0();
  }
  pAVar43 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0;
  pIStack_48 = (Il2CppClass *)0x44c6a24;
  pAVar30 = pAVar25;
  bVar12 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pAVar25,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return 0;
  }
  if (pAVar25 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    now.fields._8_8_ = (pAVar25->obj).klass;
    bVar12 = (*(now.fields._8_8_)->vtable[0x11].methodPtr)(pAVar25,(now.fields._8_8_)->vtable[0x11].method);
    return bVar12;
  }
  pIStack_48 = (Il2CppClass *)0x44c6a4d;
  il2cpp_runtime_helper_022b2c90();
  pAStack_70 = pAVar25;
  pAStack_68 = unaff_R12;
  pAStack_60 = (ApplicationManagers_Credits_AottgCreditCategory_array *)unaff_R13;
  pAStack_58 = (ApplicationManagers_Credits_AottgCreditCategory_o *)error;
  pAStack_50 = (ApplicationManagers_Credits_AottgCreditCategory_o *)credits;
  pIStack_48 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aead9 == '\0') {
    pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6a79;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditCategory);
    pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6a85;
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aead9 = '\x01';
  }
  pAStack_78 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0;
  pAStack_80 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0;
  pAStack_88 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  pAStack_90 = (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0;
  pAVar43->klass = (ApplicationManagers_Credits_AottgCreditCategory_c *)0x0;
  pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6ac1;
  il2cpp_runtime_helper_022b4080(pAVar43);
  if (g_data_057aeae0 == '\0') {
    pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6ad6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6af5;
    il2cpp_runtime_helper_02337ed0();
  }
  pAVar32 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0;
  pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6b03;
  pAVar25 = pAVar30;
  bVar12 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pAVar30,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return 0;
  }
  if (pAVar30 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    now.fields._8_8_ = (pAVar30->obj).klass;
    pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6b27;
    cVar11 = (*(now.fields._8_8_)->vtable[0x11].methodPtr)(pAVar30,(now.fields._8_8_)->vtable[0x11].method);
    if (cVar11 != '\0') {
      pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6b46;
      bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)pAVar30,"name",
                          (System_String_o **)&stack0xffffffffffffff88,method);
      if ((char)bVar12 != '\0') {
        pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6b57;
        bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                           ((SimpleJSONFixed_JSONNode_o *)pAVar30,(System_String_o **)&stack0xffffffffffffff80
                            ,method_01);
        if ((char)bVar12 != '\0') {
          pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6b68;
          bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                             ((SimpleJSONFixed_JSONNode_o *)pAVar30,&stack0xffffffffffffff78,method_02);
          if ((char)bVar12 != '\0') {
            pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6b79;
            bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups
                               ((SimpleJSONFixed_JSONNode_o *)pAVar30,&stack0xffffffffffffff70,method_03);
            name = pAStack_78;
            description = pAStack_80;
            pAVar10 = pAStack_88;
            groups = pAStack_90;
            if ((char)bVar12 != '\0') {
              pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6ba0;
              __this_01 = (ApplicationManagers_Credits_AottgCreditCategory_c *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditCategory);
              pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6bb7;
              ApplicationManagers_Credits_AottgCreditCategory___ctor
                        ((ApplicationManagers_Credits_AottgCreditCategory_o *)__this_01,
                         (System_String_o *)name,(System_String_o *)description,pAVar10,groups,in_R9);
              pAVar43->klass = __this_01;
              pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6bc5;
              il2cpp_runtime_helper_022b4080(pAVar43,__this_01);
              return (bool_conflict)CONCAT71((int7)((ulong)name >> 8),1);
            }
          }
        }
      }
    }
    return 0;
  }
  pAStack_a0 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c6be1;
  il2cpp_runtime_helper_022b2c90();
  pAStack_b0 = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0;
  (extraout_RDX_01->obj).klass = (Il2CppClass *)0x0;
  pAVar44 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0;
  pIStack_b8 = (Il2CppClass *)0x44c6c0f;
  pAVar38 = extraout_RDX_01;
  pAStack_a8 = pAVar43;
  pAStack_a0 = pAVar30;
  il2cpp_runtime_helper_022b4080();
  if (pAVar25 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    now.fields._8_8_ = (pAVar25->obj).klass;
    pIStack_b8 = (Il2CppClass *)0x44c6c2e;
    cVar11 = (*(now.fields._8_8_)->vtable[0x1c].methodPtr)
                       (pAVar25,pAVar32,(now.fields._8_8_)->vtable[0x1c].method);
    if (cVar11 == '\0') {
      return 0;
    }
    now.fields._8_8_ = (pAVar25->obj).klass;
    pIStack_b8 = (Il2CppClass *)0x44c6c48;
    pAVar44 = pAVar32;
    pAVar38 = pAVar25;
    plVar26 = (long *)(*(now.fields._8_8_)->vtable[7].methodPtr)
                                (pAVar25,pAVar32,(now.fields._8_8_)->vtable[7].method);
    if (plVar26 != (long *)0x0) {
      pIStack_b8 = (Il2CppClass *)0x44c6c60;
      cVar11 = (**(code **)(*plVar26 + 0x208))(plVar26,*(undefined8 *)(*plVar26 + 0x210));
      if (cVar11 != '\0') {
        now.fields._8_8_ = (pAVar25->obj).klass;
        pIStack_b8 = (Il2CppClass *)0x44c6c7a;
        pSVar27 = (SimpleJSONFixed_JSONNode_o *)
                  (*(now.fields._8_8_)->vtable[7].methodPtr)
                            (pAVar25,pAVar32,(now.fields._8_8_)->vtable[7].method);
        pIStack_b8 = (Il2CppClass *)0x44c6c82;
        now.fields._8_8_ =
             (Il2CppClass *)
             ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar27,(MethodInfo *)pAVar32);
        (extraout_RDX_01->obj).klass = now.fields._8_8_;
        pIStack_b8 = (Il2CppClass *)0x44c6c90;
        il2cpp_runtime_helper_022b4080(extraout_RDX_01);
        pIStack_b8 = (Il2CppClass *)0x44c6c9a;
        uVar15 = System_String__IsNullOrEmpty
                           ((System_String_o *)(extraout_RDX_01->obj).klass,(MethodInfo *)0x0);
        return uVar15 ^ 1;
      }
      return 0;
    }
  }
  pIStack_b8 = (Il2CppClass *)0x44c6caf;
  pAStack_d8 = (ApplicationManagers_Credits_AottgCreditCategory_o *)il2cpp_runtime_helper_022b2c90();
  pAStack_d0 = pAVar25;
  pAStack_c8 = pAVar32;
  pAStack_c0 = extraout_RDX_01;
  pIStack_b8 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeade == '\0') {
    pIStack_e0 = (Il2CppClass *)0x44c6cd2;
    il2cpp_runtime_helper_023445d0(&"description");
    g_data_057aeade = '\x01';
  }
  (pAVar44->obj).klass = (Il2CppClass *)0x0;
  pAVar25 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0;
  pIStack_e0 = (Il2CppClass *)0x44c6cea;
  pAVar30 = pAVar44;
  il2cpp_runtime_helper_022b4080();
  ppAVar48 = (ApplicationManagers_Credits_AottgCreditCategory_array **)extraout_RDX_01;
  if (pAVar38 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    ppAVar48 = &"description";
    now.fields._8_8_ = (pAVar38->obj).klass;
    pIStack_e0 = (Il2CppClass *)0x44c6d10;
    cVar11 = (*(now.fields._8_8_)->vtable[0x1c].methodPtr)
                       (pAVar38,"description",(now.fields._8_8_)->vtable[0x1c].method);
    if (cVar11 == '\0') {
label_044c6db1:
      unaff_RBP = (Il2CppClass **)0x0;
label_044c6db3:
      return (bool_conflict)unaff_RBP;
    }
    now.fields._8_8_ = (pAVar38->obj).klass;
    pIStack_e0 = (Il2CppClass *)0x44c6d2e;
    pAVar25 = "description";
    pAVar30 = pAVar38;
    puVar24 = (undefined8 *)
              (*(now.fields._8_8_)->vtable[7].methodPtr)
                        (pAVar38,"description",(now.fields._8_8_)->vtable[7].method);
    if (puVar24 != (undefined8 *)0x0) {
      method = (MethodInfo *)*puVar24;
      pIStack_e0 = (Il2CppClass *)0x44c6d4a;
      cVar11 = (*((Il2CppClass *)method)->vtable[0xf].methodPtr)
                         (puVar24,((Il2CppClass *)method)->vtable[0xf].method);
      unaff_RBP = (Il2CppClass **)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
      if (cVar11 != '\0') goto label_044c6db3;
      now.fields._8_8_ = (pAVar38->obj).klass;
      pIStack_e0 = (Il2CppClass *)0x44c6d67;
      pAVar25 = "description";
      pAVar30 = pAVar38;
      plVar26 = (long *)(*(now.fields._8_8_)->vtable[7].methodPtr)
                                  (pAVar38,"description",(now.fields._8_8_)->vtable[7].method);
      if (plVar26 != (long *)0x0) {
        pIStack_e0 = (Il2CppClass *)0x44c6d7f;
        cVar11 = (**(code **)(*plVar26 + 0x208))(plVar26,*(undefined8 *)(*plVar26 + 0x210));
        if (cVar11 != '\0') {
          now.fields._8_8_ = (pAVar38->obj).klass;
          pIStack_e0 = (Il2CppClass *)0x44c6d99;
          pAVar25 = "description";
          pSVar27 = (SimpleJSONFixed_JSONNode_o *)
                    (*(now.fields._8_8_)->vtable[7].methodPtr)
                              (pAVar38,"description",(now.fields._8_8_)->vtable[7].method);
          pIStack_e0 = (Il2CppClass *)0x44c6da1;
          now.fields._8_8_ =
               (Il2CppClass *)
               ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar27,(MethodInfo *)pAVar25);
          (pAVar44->obj).klass = now.fields._8_8_;
          pIStack_e0 = (Il2CppClass *)0x44c6daf;
          il2cpp_runtime_helper_022b4080(pAVar44,now.fields._8_8_);
          goto label_044c6db3;
        }
        goto label_044c6db1;
      }
    }
  }
  pIStack_e0 = (Il2CppClass *)0x44c6dc5;
  pAStack_110 = (ApplicationManagers_Credits_AottgCreditCategory_array *)il2cpp_runtime_helper_022b2c90();
  pAVar32 = (ApplicationManagers_Credits_AottgCreditCategory_array *)&stack0xfffffffffffffef0;
  pAStack_108 = pAVar38;
  pAStack_100 = unaff_R12;
  pAStack_f8 = (ApplicationManagers_Credits_AottgCreditCategory_array *)unaff_R13;
  pAStack_f0 = pAVar44;
  pAStack_e8 = (ApplicationManagers_Credits_AottgCreditCategory_array *)ppAVar48;
  pIStack_e0 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeadc == '\0') {
    pIStack_118 = (Il2CppClass *)0x44c6df6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_118 = (Il2CppClass *)0x44c6e02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditContributor_ToArray);
    pIStack_118 = (Il2CppClass *)0x44c6e0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
    pIStack_118 = (Il2CppClass *)0x44c6e1a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgCreditContributor);
    pIStack_118 = (Il2CppClass *)0x44c6e26;
    il2cpp_runtime_helper_023445d0(&"contributors");
    g_data_057aeadc = '\x01';
  }
  pAStack_110 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0;
  (pAVar25->obj).klass = (Il2CppClass *)0x0;
  pAVar44 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0;
  pIStack_118 = (Il2CppClass *)0x44c6e46;
  pAVar38 = pAVar25;
  il2cpp_runtime_helper_022b4080();
  if (pAVar30 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    now.fields._8_8_ = (pAVar30->obj).klass;
    pIStack_118 = (Il2CppClass *)0x44c6e6d;
    cVar11 = (*(now.fields._8_8_)->vtable[0x1c].methodPtr)
                       (pAVar30,"contributors",(now.fields._8_8_)->vtable[0x1c].method);
    if (cVar11 == '\0') {
      return 0;
    }
    now.fields._8_8_ = (pAVar30->obj).klass;
    pIStack_118 = (Il2CppClass *)0x44c6e8c;
    pAVar44 = "contributors";
    pAVar38 = pAVar30;
    puVar24 = (undefined8 *)
              (*(now.fields._8_8_)->vtable[7].methodPtr)
                        (pAVar30,"contributors",(now.fields._8_8_)->vtable[7].method);
    unaff_RBP = (Il2CppClass **)&"contributors";
    if (puVar24 != (undefined8 *)0x0) {
      method = (MethodInfo *)*puVar24;
      pIStack_118 = (Il2CppClass *)0x44c6ea8;
      cVar11 = (*((Il2CppClass *)method)->vtable[0x10].methodPtr)
                         (puVar24,((Il2CppClass *)method)->vtable[0x10].method);
      if (cVar11 == '\0') {
        return 0;
      }
      now.fields._8_8_ = (pAVar30->obj).klass;
      pIStack_118 = (Il2CppClass *)0x44c6ec7;
      pAVar44 = "contributors";
      pAVar38 = pAVar30;
      pAVar28 = (ApplicationManagers_Credits_AottgCreditCategory_array *)
                (*(now.fields._8_8_)->vtable[7].methodPtr)
                          (pAVar30,"contributors",(now.fields._8_8_)->vtable[7].method);
      if (pAVar28 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
        method = (MethodInfo *)(pAVar28->obj).klass;
        pAVar44 = (ApplicationManagers_Credits_AottgCreditCategory_array *)
                  ((Il2CppClass *)method)->vtable[0x2d].method;
        pIStack_118 = (Il2CppClass *)0x44c6ee3;
        pAVar29 = (ApplicationManagers_Credits_AottgCreditCategory_array *)
                  (*((Il2CppClass *)method)->vtable[0x2d].methodPtr)();
        pAVar38 = pAVar28;
        if (pAVar29 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
          now.fields._8_8_ = (pAVar29->obj).klass;
          pIStack_118 = (Il2CppClass *)0x44c6f02;
          uVar15 = (*(now.fields._8_8_)->vtable[0xb].methodPtr)
                             (pAVar29,(now.fields._8_8_)->vtable[0xb].method);
          unaff_RBP = (Il2CppClass **)(ulong)uVar15;
          pIStack_118 = (Il2CppClass *)0x44c6f13;
          pAVar30 = (ApplicationManagers_Credits_AottgCreditCategory_array *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgCreditContributor);
          pIStack_118 = (Il2CppClass *)0x44c6f2a;
          System_Collections_Generic_List_object____ctor_362b930
                    ((System_Collections_Generic_List_object__o *)pAVar30,uVar15,MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
          now.fields._8_8_ = (pAVar29->obj).klass;
          pAVar44 = (ApplicationManagers_Credits_AottgCreditCategory_array *)
                    (now.fields._8_8_)->vtable[0xb].method;
          pIStack_118 = (Il2CppClass *)0x44c6f3d;
          pAVar38 = pAVar29;
          iVar14 = (*(now.fields._8_8_)->vtable[0xb].methodPtr)();
          ppAVar48 = (ApplicationManagers_Credits_AottgCreditCategory_array **)pAVar29;
          if (iVar14 < 1) {
            if (pAVar30 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) goto label_044c7009;
          }
          else {
            if (pAVar30 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
              unaff_RBP = (Il2CppClass **)0x0;
              unaff_R13 = &MethodInfo_Void_Add;
              do {
                now.fields._8_8_ = (pAVar29->obj).klass;
                pIStack_118 = (Il2CppClass *)0x44c6fa6;
                auVar49 = (*(now.fields._8_8_)->vtable[5].methodPtr)
                                    (pAVar29,unaff_RBP,(now.fields._8_8_)->vtable[5].method);
                pAVar38 = auVar49._0_8_;
                pIStack_118 = (Il2CppClass *)0x44c6fb1;
                bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                                   ((SimpleJSONFixed_JSONNode_o *)pAVar38,
                                    (ApplicationManagers_Credits_AottgCreditContributor_o **)
                                    &stack0xfffffffffffffef0,auVar49._8_8_);
                method = (MethodInfo *)MethodInfo_Void_Add;
                if ((char)bVar12 == '\0') {
                  return 0;
                }
                piVar1 = (int *)((long)&pAVar30->max_length + 4);
                *piVar1 = *piVar1 + 1;
                pIVar7 = pAVar30->bounds;
                pAVar44 = pAStack_110;
                unaff_R12 = (ApplicationManagers_Credits_AottgCreditCategory_array *)&stack0xfffffffffffffef0;
                if (pIVar7 == (Il2CppArrayBounds *)0x0) goto label_044c7053;
                uVar15 = *(uint *)&pAVar30->max_length;
                if (uVar15 < (uint)pIVar7[1].lower_bound) {
                  *(uint *)&pAVar30->max_length = uVar15 + 1;
                  (&pIVar7[2].length)[(int)uVar15] = (il2cpp_array_size_t)pAStack_110;
                  pIStack_118 = (Il2CppClass *)0x44c6fef;
                  il2cpp_runtime_helper_022b4080(&pIVar7[2].length + (int)uVar15);
                }
                else {
                  pIStack_118 = (Il2CppClass *)0x44c6f77;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pAVar30,&pAStack_110->obj,
                             *(MethodInfo_362C220 **)
                              (*(long *)((long)(((Il2CppClass *)method)->_1).byval_arg.data + 0xc0) + 0x70));
                }
                uVar15 = (int)unaff_RBP + 1;
                unaff_RBP = (Il2CppClass **)(ulong)uVar15;
                now.fields._8_8_ = (pAVar29->obj).klass;
                pIStack_118 = (Il2CppClass *)0x44c6f8d;
                iVar14 = (*(now.fields._8_8_)->vtable[0xb].methodPtr)
                                   (pAVar29,(now.fields._8_8_)->vtable[0xb].method);
              } while ((int)uVar15 < iVar14);
label_044c7009:
              pIStack_118 = (Il2CppClass *)0x44c701b;
              pSVar31 = System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_object__o *)pAVar30,MethodInfo_AottgCreditContributor_ToArray);
              (pAVar25->obj).klass = (Il2CppClass *)pSVar31;
              pIStack_118 = (Il2CppClass *)0x44c7029;
              il2cpp_runtime_helper_022b4080(pAVar25,pSVar31);
              return (bool_conflict)CONCAT71((int7)((ulong)pAVar30 >> 8),1);
            }
            now.fields._8_8_ = (pAVar29->obj).klass;
            pAVar30 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0;
            pIStack_118 = (Il2CppClass *)0x44c7044;
            auVar49 = (*(now.fields._8_8_)->vtable[5].methodPtr)
                                (pAVar29,0,(now.fields._8_8_)->vtable[5].method);
            pAVar38 = auVar49._0_8_;
            pIStack_118 = (Il2CppClass *)0x44c704f;
            bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                               ((SimpleJSONFixed_JSONNode_o *)pAVar38,
                                (ApplicationManagers_Credits_AottgCreditContributor_o **)
                                &stack0xfffffffffffffef0,auVar49._8_8_);
            pAVar44 = pAVar32;
            if ((char)bVar12 == '\0') {
              return 0;
            }
          }
        }
      }
    }
  }
label_044c7053:
  pIStack_118 = (Il2CppClass *)0x44c7058;
  il2cpp_runtime_helper_022b2c90();
  pAStack_138 = pAVar30;
  pAStack_130 = unaff_R12;
  pAStack_128 = pAVar25;
  pAStack_120 = (ApplicationManagers_Credits_AottgCreditCategory_array *)ppAVar48;
  pIStack_118 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeada == '\0') {
    pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7083;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c708f;
    il2cpp_runtime_helper_023445d0(&"groups");
    g_data_057aeada = '\x01';
  }
  (pAVar44->obj).klass = (Il2CppClass *)0x0;
  now.fields._8_8_ = (Il2CppClass *)0x0;
  pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c70a7;
  pAVar25 = pAVar44;
  il2cpp_runtime_helper_022b4080();
  if (pAVar38 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    unaff_RBP = &"groups";
    now.fields._8_8_ = (pAVar38->obj).klass;
    pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c70ce;
    cVar11 = (*(now.fields._8_8_)->vtable[0x1c].methodPtr)
                       (pAVar38,"groups",(now.fields._8_8_)->vtable[0x1c].method);
    if (cVar11 == '\0') {
label_044c720a:
      ppAVar48 = (ApplicationManagers_Credits_AottgCreditCategory_array **)0x0;
label_044c720d:
      return (bool_conflict)ppAVar48;
    }
    pIVar35 = (pAVar38->obj).klass;
    pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c70ed;
    now.fields._8_8_ = "groups";
    pAVar25 = pAVar38;
    puVar24 = (undefined8 *)(*pIVar35->vtable[7].methodPtr)(pAVar38,"groups",pIVar35->vtable[7].method);
    if (puVar24 != (undefined8 *)0x0) {
      method = (MethodInfo *)*puVar24;
      pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7109;
      cVar11 = (*((Il2CppClass *)method)->vtable[0x10].methodPtr)
                         (puVar24,((Il2CppClass *)method)->vtable[0x10].method);
      if (cVar11 == '\0') goto label_044c720a;
      pIVar35 = (pAVar38->obj).klass;
      pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7128;
      now.fields._8_8_ = "groups";
      pAVar25 = pAVar38;
      pAVar30 = (ApplicationManagers_Credits_AottgCreditCategory_array *)
                (*pIVar35->vtable[7].methodPtr)(pAVar38,"groups",pIVar35->vtable[7].method);
      if (pAVar30 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
        method = (MethodInfo *)(pAVar30->obj).klass;
        now.fields._8_8_ = (Il2CppClass *)((Il2CppClass *)method)->vtable[0x2d].method;
        pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7144;
        pAVar32 = (ApplicationManagers_Credits_AottgCreditCategory_array *)
                  (*((Il2CppClass *)method)->vtable[0x2d].methodPtr)();
        pAVar25 = pAVar30;
        if (pAVar32 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
          now.fields._8_8_ = (pAVar32->obj).klass;
          pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7163;
          uVar13 = (*(now.fields._8_8_)->vtable[0xb].methodPtr)
                             (pAVar32,(now.fields._8_8_)->vtable[0xb].method);
          method = (MethodInfo *)&TypeInfo_AottgCreditGroup;
          pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7174;
          now.fields._8_8_ = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgCreditGroup,uVar13);
          (pAVar44->obj).klass = now.fields._8_8_;
          pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7182;
          il2cpp_runtime_helper_022b4080(pAVar44,now.fields._8_8_);
          now.fields._8_8_ = (pAVar32->obj).klass;
          pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7196;
          iVar14 = (*(now.fields._8_8_)->vtable[0xb].methodPtr)
                             (pAVar32,(now.fields._8_8_)->vtable[0xb].method);
          ppAVar48 = (ApplicationManagers_Credits_AottgCreditCategory_array **)
                     CONCAT71((int7)((ulong)ppAVar48 >> 8),1);
          if (0 < iVar14) {
            pAVar38 = (ApplicationManagers_Credits_AottgCreditCategory_array *)&g_data_00000020;
            unaff_RBP = (Il2CppClass **)0x0;
            do {
              now.fields._8_8_ = (pAVar32->obj).klass;
              pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c71c6;
              pAVar25 = pAVar32;
              auVar49 = (*(now.fields._8_8_)->vtable[5].methodPtr)
                                  (pAVar32,(ulong)unaff_RBP & 0xffffffff,(now.fields._8_8_)->vtable[5].method)
              ;
              now.fields._8_8_ = (pAVar44->obj).klass;
              unaff_R12 = pAVar32;
              if (now.fields._8_8_ == (Il2CppClass *)0x0) goto label_044c7219;
              method = (MethodInfo *)(ulong)*(uint *)&((now.fields._8_8_)->_1).namespaze;
              if (method <= unaff_RBP) goto label_044c721e;
              pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c71e1;
              bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
                                 (auVar49._0_8_,
                                  (ApplicationManagers_Credits_AottgCreditGroup_o **)
                                  ((long)&((now.fields._8_8_)->_1).image + (long)pAVar38),auVar49._8_8_);
              if ((char)bVar12 == '\0') goto label_044c720a;
              unaff_RBP = (Il2CppClass **)((long)&(((Il2CppClass *)unaff_RBP)->_1).image + 1);
              now.fields._8_8_ = (pAVar32->obj).klass;
              pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c71fd;
              iVar14 = (*(now.fields._8_8_)->vtable[0xb].methodPtr)
                                 (pAVar32,(now.fields._8_8_)->vtable[0xb].method);
              pAVar38 = (ApplicationManagers_Credits_AottgCreditCategory_array *)&(pAVar38->obj).monitor;
            } while ((long)unaff_RBP < (long)iVar14);
          }
          goto label_044c720d;
        }
      }
    }
  }
label_044c7219:
  pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c721e;
  il2cpp_runtime_helper_022b2c90();
label_044c721e:
  pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7223;
  il2cpp_runtime_helper_022b2ca0();
  pAStack_160 = pAVar38;
  pAStack_158 = unaff_R12;
  pAStack_150 = (ApplicationManagers_Credits_AottgCreditCategory_array *)unaff_R13;
  pAStack_148 = pAVar44;
  pAStack_140 = (ApplicationManagers_Credits_AottgCreditCategory_array *)ppAVar48;
  if (g_data_057aeadb == '\0') {
    pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7258;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7264;
    il2cpp_runtime_helper_023445d0(&"title");
    g_data_057aeadb = '\x01';
  }
  pSStack_168 = (System_String_o *)0x0;
  pSStack_170 = (System_String_o *)0x0;
  pAStack_178 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  ((now.fields._8_8_)->_1).image = (Il2CppMethodPointer)0x0;
  pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7297;
  il2cpp_runtime_helper_022b4080(now.fields._8_8_);
  if (g_data_057aeae0 == '\0') {
    pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c72ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c72cb;
    il2cpp_runtime_helper_02337ed0();
  }
  puVar24 = (undefined8 *)0x0;
  pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c72d9;
  pAVar30 = pAVar25;
  bVar12 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pAVar25,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return 0;
  }
  if (pAVar25 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    pIVar35 = (pAVar25->obj).klass;
    pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c72fd;
    cVar11 = (*pIVar35->vtable[0x11].methodPtr)(pAVar25,pIVar35->vtable[0x11].method);
    if (cVar11 != '\0') {
      pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c731c;
      bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)pAVar25,"title",&pSStack_168,method);
      if ((char)bVar12 != '\0') {
        pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c732d;
        bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                           ((SimpleJSONFixed_JSONNode_o *)pAVar25,&pSStack_170,method_04);
        if ((char)bVar12 != '\0') {
          pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c733e;
          bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                             ((SimpleJSONFixed_JSONNode_o *)pAVar25,&pAStack_178,method_05);
          title = pSStack_168;
          pSVar34 = pSStack_170;
          pAVar10 = pAStack_178;
          if ((char)bVar12 != '\0') {
            pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7360;
            __this_02 = (ApplicationManagers_Credits_AottgCreditGroup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditGroup);
            pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7374;
            ApplicationManagers_Credits_AottgCreditGroup___ctor(__this_02,title,pSVar34,pAVar10,in_R8);
            ((now.fields._8_8_)->_1).image = __this_02;
            pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7382;
            il2cpp_runtime_helper_022b4080(now.fields._8_8_,__this_02);
            return (bool_conflict)CONCAT71((int7)((ulong)__this_02 >> 8),1);
          }
        }
      }
    }
    return 0;
  }
  pAStack_188 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c739d;
  il2cpp_runtime_helper_022b2c90();
  uStack_1a0 = 0;
  pAStack_198 = unaff_R12;
  pIStack_190 = now.fields._8_8_;
  pAStack_188 = pAVar25;
  if (g_data_057aeadd == '\0') {
    ppMStack_1d0 = (MethodInfo **)0x44c73c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditContributor);
    ppMStack_1d0 = (MethodInfo **)0x44c73d2;
    il2cpp_runtime_helper_023445d0(&"accountId");
    ppMStack_1d0 = (MethodInfo **)0x44c73de;
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aeadd = '\x01';
  }
  pIStack_1c0 = (Il2CppClass *)0x0;
  SStack_1b8._a = 0;
  SStack_1b8._b = 0;
  SStack_1b8._c = 0;
  SStack_1b8._d = '\0';
  SStack_1b8._e = '\0';
  SStack_1b8._f = '\0';
  SStack_1b8._g = '\0';
  SStack_1b8._h = '\0';
  SStack_1b8._i = '\0';
  SStack_1b8._j = '\0';
  SStack_1b8._k = '\0';
  *puVar24 = 0;
  ppMStack_1d0 = (MethodInfo **)0x44c7407;
  il2cpp_runtime_helper_022b4080(puVar24);
  if (g_data_057aeae0 == '\0') {
    ppMStack_1d0 = (MethodInfo **)0x44c741c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    ppMStack_1d0 = (MethodInfo **)0x44c743b;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar39 = (MethodInfo **)0x0;
  ppMStack_1d0 = (MethodInfo **)0x44c7449;
  pAVar25 = pAVar30;
  bVar12 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pAVar30,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return 0;
  }
  if (pAVar30 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    now.fields._8_8_ = (pAVar30->obj).klass;
    ppMStack_1d0 = (MethodInfo **)0x44c746d;
    cVar11 = (*(now.fields._8_8_)->vtable[0x11].methodPtr)(pAVar30,(now.fields._8_8_)->vtable[0x11].method);
    if (cVar11 == '\0') {
      return 0;
    }
    ppMStack_1d0 = (MethodInfo **)0x44c748c;
    bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                       ((SimpleJSONFixed_JSONNode_o *)pAVar30,"name",(System_String_o **)&pIStack_1c0,
                        method);
    if ((char)bVar12 == '\0') {
      return 0;
    }
    ppMVar39 = &"accountId";
    now.fields._8_8_ = (pAVar30->obj).klass;
    ppMStack_1d0 = (MethodInfo **)0x44c74b1;
    cVar11 = (*(now.fields._8_8_)->vtable[0x1c].methodPtr)
                       (pAVar30,"accountId",(now.fields._8_8_)->vtable[0x1c].method);
    if (cVar11 == '\0') {
      return 0;
    }
    now.fields._8_8_ = (pAVar30->obj).klass;
    ppMStack_1d0 = (MethodInfo **)0x44c74cf;
    pAVar25 = pAVar30;
    plVar26 = (long *)(*(now.fields._8_8_)->vtable[7].methodPtr)
                                (pAVar30,"accountId",(now.fields._8_8_)->vtable[7].method);
    if (plVar26 != (long *)0x0) {
      ppMStack_1d0 = (MethodInfo **)0x44c74eb;
      cVar11 = (**(code **)(*plVar26 + 0x228))(plVar26);
      if (cVar11 != '\0') {
        pSVar34 = (System_String_o *)0x0;
label_044c74f2:
        now.fields._8_8_ = pIStack_1c0;
        ppMStack_1d0 = (MethodInfo **)0x44c7506;
        pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditContributor);
        ppMStack_1d0 = (MethodInfo **)0x44c7513;
        System_Object___ctor(pIVar33,(MethodInfo *)0x0);
        pIVar33[1].klass = now.fields._8_8_;
        ppMStack_1d0 = (MethodInfo **)0x44c7523;
        il2cpp_runtime_helper_022b4080(pIVar33 + 1,now.fields._8_8_);
        pIVar33[1].monitor = pSVar34;
        ppMStack_1d0 = (MethodInfo **)0x44c7533;
        il2cpp_runtime_helper_022b4080(&pIVar33[1].monitor,pSVar34);
        *puVar24 = pIVar33;
        ppMStack_1d0 = (MethodInfo **)0x44c7541;
        il2cpp_runtime_helper_022b4080(puVar24,pIVar33);
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar33 >> 8),1);
      }
      now.fields._8_8_ = (pAVar30->obj).klass;
      ppMStack_1d0 = (MethodInfo **)0x44c755e;
      pAVar25 = pAVar30;
      plVar26 = (long *)(*(now.fields._8_8_)->vtable[7].methodPtr)
                                  (pAVar30,"accountId",(now.fields._8_8_)->vtable[7].method);
      if (plVar26 != (long *)0x0) {
        ppMStack_1d0 = (MethodInfo **)0x44c7576;
        cVar11 = (**(code **)(*plVar26 + 0x208))(plVar26,*(undefined8 *)(*plVar26 + 0x210));
        if (cVar11 == '\0') {
          return 0;
        }
        now.fields._8_8_ = (pAVar30->obj).klass;
        ppMStack_1d0 = (MethodInfo **)0x44c7590;
        method_06 = "accountId";
        pSVar27 = (SimpleJSONFixed_JSONNode_o *)
                  (*(now.fields._8_8_)->vtable[7].methodPtr)
                            (pAVar30,"accountId",(now.fields._8_8_)->vtable[7].method);
        ppMStack_1d0 = (MethodInfo **)0x44c7598;
        pSVar34 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar27,method_06);
        ppMStack_1d0 = (MethodInfo **)0x44c75a7;
        bVar12 = System_String__IsNullOrEmpty(pSVar34,(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          return 0;
        }
        ppMStack_1d0 = (MethodInfo **)0x44c75bc;
        bVar12 = System_Guid__TryParse(pSVar34,(System_Guid_o *)&SStack_1b8,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
          return 0;
        }
        goto label_044c74f2;
      }
    }
  }
  ppMStack_1d0 = (MethodInfo **)0x44c75db;
  il2cpp_runtime_helper_022b2c90();
  ppMStack_1d0 = ppMVar39;
  if (g_data_057aeadf == '\0') {
    pAStack_1d8 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c75f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeadf = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pAStack_1d8 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7618;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_1d8 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7624;
  bVar12 = SimpleJSONFixed_JSONNode__op_Equality
                     ((SimpleJSONFixed_JSONNode_o *)pAVar25,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return 0;
  }
  if (pAVar25 != (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
    now.fields._8_8_ = (pAVar25->obj).klass;
    pAStack_1d8 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c7640;
    cVar11 = (*(now.fields._8_8_)->vtable[0xf].methodPtr)(pAVar25,(now.fields._8_8_)->vtable[0xf].method);
    if (cVar11 != '\0') {
      return 0;
    }
    pAStack_1d8 = (ApplicationManagers_Credits_AottgCreditCategory_array *)0x44c765b;
    pSVar34 = (System_String_o *)(*((pAVar25->obj).klass)->vtable[9].methodPtr)(pAVar25);
    if (pSVar34 != (System_String_o *)0x0) {
      pSVar34 = System_String__Trim(pSVar34,(MethodInfo *)0x0);
      return (bool_conflict)pSVar34;
    }
  }
  pAStack_1d8 = (ApplicationManagers_Credits_AottgCreditCategory_array *)
                ApplicationManagers_Credits_AottgCreditsService__Init;
  uStack_1f8 = il2cpp_runtime_helper_022b2c90();
  pAStack_1f0 = pAVar25;
  pAStack_1e8 = unaff_R12;
  puStack_1e0 = puVar24;
  pAStack_1d8 = pAVar30;
  if (g_data_057aeae2 == '\0') {
    pIStack_200 = (Il2CppClass *)0x44c768d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
    pIStack_200 = (Il2CppClass *)0x44c7699;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    pIStack_200 = (Il2CppClass *)0x44c76a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchCredits);
    pIStack_200 = (Il2CppClass *)0x44c76b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pIStack_200 = (Il2CppClass *)0x44c76bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
    pIStack_200 = (Il2CppClass *)0x44c76c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
    pIStack_200 = (Il2CppClass *)0x44c76d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pIStack_200 = (Il2CppClass *)0x44c76e1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
    g_data_057aeae2 = '\x01';
  }
  pIStack_200 = (Il2CppClass *)0x44c770b;
  pIVar33 = Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar33;
  pIStack_200 = (Il2CppClass *)0x44c772a;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar33);
  lVar16 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  pIStack_200 = (Il2CppClass *)0x44c7746;
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
  pIStack_200 = (Il2CppClass *)0x44c7760;
  System_Action_AottgCreditsService_UnitKey__object____ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    pIStack_200 = (Il2CppClass *)0x44c7778;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar19._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  pIStack_200 = (Il2CppClass *)0x44c7794;
  __this_03 = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  pIStack_200 = (Il2CppClass *)0x44c77ac;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_03,(System_TimeSpan_o)SVar19._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  pIStack_200 = (Il2CppClass *)0x44c77bb;
  __this_04 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
  pIStack_200 = (Il2CppClass *)0x44c77d8;
  pSVar45 = fetch;
  pAVar46 = __this_04;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            (__this_04,fetch,(System_Func_DateTimeOffset__o *)0x0,__this_03,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
  if (lVar16 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar16 + 0x20) = __this_04;
    bVar12 = il2cpp_runtime_helper_022b4080(lVar16 + 0x20,__this_04);
    return bVar12;
  }
  pIStack_200 = (Il2CppClass *)ApplicationManagers_Credits_AottgCreditsService__GetCredits;
  il2cpp_runtime_helper_022b2c90();
  pAStack_220 = (ApplicationManagers_Api_AottgQueryPolicy_o *)__this_04;
  pAStack_218 = (ApplicationManagers_Credits_AottgCreditCategory_array *)__this_03;
  pSStack_210 = fetch;
  lStack_208 = lVar16;
  pIStack_200 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeae3 == '\0') {
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c788d;
  pIVar35 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c789a;
  now.fields._8_8_ = pIVar35;
  System_Object___ctor((Il2CppObject *)pIVar35,(MethodInfo *)0x0);
  if (pIVar35 == (Il2CppClass *)0x0) {
label_044c7a30:
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)now.fields._8_8_,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  ppcVar40 = &(pIVar35->_1).name;
  (pIVar35->_1).name = (char *)pAVar46;
  pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar40);
  now.fields._8_8_ = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78f2;
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)now.fields._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar35 = "not_initialized";
  if ((char)bVar12 != '\0') {
    pcVar8 = *ppcVar40;
    if (pcVar8 == (char *)0x0) {
      return bVar12;
    }
    if (g_data_057aead4 == '\0') {
      pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7925;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c793b;
    pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7948;
    System_Object___ctor(pIVar33,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar33[1].klass = 3;
    pIVar33[1].monitor = (void *)0x0;
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7962;
    il2cpp_runtime_helper_022b4080(&pIVar33[1].monitor,0);
    pIVar33[2].klass = pIVar35;
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7972;
    il2cpp_runtime_helper_022b4080(pIVar33 + 2,pIVar35);
    *(undefined2 *)&pIVar33[2].monitor = 0;
    *(undefined1 *)((long)&pIVar33[2].monitor + 2) = 0;
    bVar12 = (**(code **)(pcVar8 + 0x18))
                       (*(undefined8 *)(pcVar8 + 0x40),pIVar33,*(undefined8 *)(pcVar8 + 0x28));
    return bVar12;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar35 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79e3;
  onResult = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79fd;
  now.fields._8_8_ = onResult;
  System_Action_object____ctor();
  pAStack_228 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pAStack_220;
  SVar19._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar35 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar4;
  pIVar36 = (Il2CppClass *)((ulong)pSVar45 & 0xff);
  pAStack_220 = (ApplicationManagers_Api_AottgQueryPolicy_o *)pAStack_218;
  pIStack_230 = (Il2CppClass *)0x0;
  lVar16 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pIVar36;
  pIVar47 = MethodInfo_Void_Get;
  pAStack_218 = (ApplicationManagers_Credits_AottgCreditCategory_array *)unaff_R13;
  if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
    pIStack_238 = (Il2CppClass *)0x341a1ae;
    lVar16 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_238 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar16);
  pIVar18 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)SVar19._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_238 = (Il2CppClass *)0x341a1d0;
  __this_05 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar18);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar35;
    pIStack_238 = (Il2CppClass *)0x341a1ec;
    pIVar18 = pIVar35;
    pIVar17 = (Il2CppClass *)il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar4;
    if (onResult == (Il2CppClass *)0x0) goto label_0341a444;
    __this_05 = *(Il2CppClass **)&(pIVar35->_1).byval_arg.bits;
    if (__this_05 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(Il2CppClass **)
            (*(long *)((long)(((Il2CppClass *)SVar19._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_238 = (Il2CppClass *)0x341a221;
      pIVar18 = (Il2CppClass *)t2._ticks;
      bVar12 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (__this_05,t2._ticks,&pIStack_230);
      if ((char)bVar12 == '\0') {
        lVar16 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar19._ticks)->_1).byval_arg.data + 0xc0) + 0x58)
        ;
        if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
          pIStack_238 = (Il2CppClass *)0x341a242;
          lVar16 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_238 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar16);
        pIVar18 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)SVar19._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_238 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar18);
        __this_05 = *(Il2CppClass **)&(pIVar35->_1).byval_arg.bits;
        pIStack_230 = (Il2CppClass *)t2._ticks;
        if (__this_05 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar18 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_238 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_05,pIVar18,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)SVar19._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (Il2CppClass *)(pIVar35->_1).namespaze;
      if (now.fields._8_8_ != (Il2CppClass *)0x0) {
        pIVar18 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_05 = ((now.fields._8_8_)->_1).element_class;
        pIStack_238 = (Il2CppClass *)0x341a2ad;
        auVar49 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)pSVar45 == '\0') {
          now.fields._8_8_ = (Il2CppClass *)(auVar49._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo **)
                   (*(long *)((long)(((Il2CppClass *)SVar19._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_238 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar49._0_8_;
          pIVar18 = pIStack_230;
          __this_05 = pIVar35;
          pIVar47 = onResult;
          uVar15 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar35,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_230,now
                              ,(System_Action_AottgQueryResult_TValue___o *)onResult,
                              (MethodInfo_331A460 *)in_R9);
          pIVar17 = (Il2CppClass *)(ulong)uVar15;
          if ((char)uVar15 != '\0') goto label_0341a444;
        }
        if (pIStack_230 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_230->_1).this_arg.bits == '\0') {
            pIStack_238 = (Il2CppClass *)0x341a327;
            pIVar18 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar19._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIStack_238 = (Il2CppClass *)0x341a30e;
            pIVar18 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_230->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar19._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          __this_05 = (onResult->_1).element_class;
          pIStack_238 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult->_1).namespaze)(__this_05,pIVar18,*(undefined8 *)&(onResult->_1).byval_arg.bits)
          ;
          if ((pIStack_230 != (Il2CppClass *)0x0) &&
             (__this_05 = (Il2CppClass *)(pIStack_230->_1).name, __this_05 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(Il2CppClass **)
                  (*(long *)((long)(((Il2CppClass *)SVar19._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_05->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar8 = (__this_05->_1).name;
            if (pcVar8 != (char *)0x0) {
              uVar15 = *(uint *)&(__this_05->_1).namespaze;
              pIVar18 = onResult;
              if (uVar15 < *(uint *)(pcVar8 + 0x18)) {
                now.fields._8_8_ = (Il2CppClass *)(ulong)(uVar15 + 1);
                *(uint *)&(__this_05->_1).namespaze = uVar15 + 1;
                __this_05 = (Il2CppClass *)(pcVar8 + (long)(int)uVar15 * 8 + 0x20);
                *(Il2CppClass **)(pcVar8 + (long)(int)uVar15 * 8 + 0x20) = onResult;
                pIStack_238 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pIVar17 = pIStack_230;
              }
              else {
                pIStack_238 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_05,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
                pIVar17 = pIStack_230;
              }
              pIStack_230 = pIVar17;
              if (pIVar17 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIVar17->_1).this_arg.bits + 2) != '\0') {
label_0341a444:
                  return (bool_conflict)pIVar17;
                }
                *(undefined1 *)((long)&(pIVar17->_1).this_arg.bits + 2) = 1;
                pcVar8 = (pIVar35->_1).name;
                uVar3 = *(undefined1 *)&(__this->_1).namespaze;
                onResult = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar3);
                lVar16 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar19._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xe8);
                if ((*(byte *)(lVar16 + 0x135) & 1) == 0) {
                  pIStack_238 = (Il2CppClass *)0x341a3fe;
                  lVar16 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_238 = (Il2CppClass *)0x341a406;
                pIVar35 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar16);
                now.fields._8_8_ =
                     *(Il2CppClass **)
                      (*(long *)((long)(((Il2CppClass *)SVar19._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_238 = (Il2CppClass *)0x341a42d;
                pIVar18 = __this;
                __this_05 = pIVar35;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar8 != (char *)0x0) {
                  pIStack_238 = (Il2CppClass *)0x341a444;
                  pIVar17 = (Il2CppClass *)
                            (**(code **)(pcVar8 + 0x18))
                                      (*(undefined8 *)(pcVar8 + 0x40),uVar3,pIVar35,
                                       *(undefined8 *)(pcVar8 + 0x28));
                  goto label_0341a444;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pIStack_238 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_248 = (Il2CppClass *)SVar19._ticks;
  pIVar17 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar42._ticks = (int64_t)pIVar18;
  plVar26 = (long *)__this_05;
  pMStack_270 = in_R9;
  pIStack_268 = pIVar47;
  pIStack_260 = __this;
  pIStack_258 = onResult;
  pIStack_250 = pIVar36;
  pIStack_240 = pIVar35;
  pIStack_238 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar26 = &TypeInfo_TimeSpan;
    pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_288 = '\0';
  uStack_287 = 0;
  uStack_280 = 0;
  if (pIVar18 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar18->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar18->_1).this_arg.bits + 1) == '\0') {
        return 0;
      }
      pvVar5 = (__this_05->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        cStack_288 = *(char *)((long)pvVar5 + 0x18);
        uStack_280 = *(undefined8 *)((long)pvVar5 + 0x20);
        if (cStack_288 == '\0') {
          return 0;
        }
        ppIVar2 = (Il2CppType **)&(pIVar18->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var9 = *(unkuint10 *)ppIVar2;
        SVar19._ticks = (int64_t)*(ushort *)&(pIVar18->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a5ed;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var9;
        left_00.fields._8_8_ = pIVar17;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ = (Il2CppClass *)SVar19._ticks;
        plVar26 = (long *)extraout_RDX.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar5 = (__this_05->_1).byval_arg.data;
        SVar42._ticks = (int64_t)pIVar17;
        if (pvVar5 != (void *)0x0) {
          cStack_288 = *(char *)((long)pvVar5 + 0x18);
          uStack_280 = *(undefined8 *)((long)pvVar5 + 0x20);
          pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a61f;
          __this_06.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_06.fields._0_8_ = &cStack_288;
          SVar19._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_06,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar41._ticks = 0;
          t2._ticks = 0;
          pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a649;
          bVar12 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)SVar19._ticks,(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            return 0;
          }
          plVar26 = (pIVar18->_1).byval_arg.data;
          SVar42._ticks = 1;
          pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a672;
          pAVar20 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar26,1,
                               (MethodInfo_331B520 *)pMStack_270->klass->rgctx_data[0x21].method);
          now.fields._8_8_ = (Il2CppClass *)0x0;
          if (pIStack_268 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a68a;
            (*(code *)(pIStack_268->_1).namespaze)
                      ((pIStack_268->_1).element_class,pAVar20,
                       *(undefined8 *)&(pIStack_268->_1).byval_arg.bits);
            return (bool_conflict)CONCAT71((int7)((ulong)SVar41._ticks >> 8),1);
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar18->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var9 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (Il2CppClass *)(ulong)*(ushort *)&(pIVar18->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var9;
      left.fields._8_8_ = pIVar17;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar42._ticks = (int64_t)pIVar17;
      plVar26 = (long *)extraout_RDX.fields._dateData;
      SVar19._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar5 = (__this_05->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar5 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a54d;
        SVar42._ticks = t2._ticks;
        plVar26 = (long *)SVar19._ticks;
        bVar12 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar19._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') goto label_0341a589;
        plVar26 = (long *)(pIVar18->_1).namespaze;
        SVar42._ticks = 1;
        pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a576;
        pAVar20 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar26,1,
                             (MethodInfo_331B380 *)pMStack_270->klass->rgctx_data[0x20].method);
        SVar41._ticks = t2._ticks;
        if (pIStack_268 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (Il2CppClass *)0x0;
      }
    }
  }
  pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_2a8 = pIVar18;
  pIStack_2a0 = (Il2CppClass *)SVar19._ticks;
  SStack_298 = extraout_RDX.fields._dateData;
  pAStack_290 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pSStack_2b8 = (System_Object_array *)0x0;
  pSVar31 = *(System_Object_array **)&(((Il2CppClass *)plVar26)->_1).byval_arg.bits;
  if (pSVar31 != (System_Object_array *)0x0) {
    uVar15 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pSVar31,SVar42._ticks & 0xff,&pSStack_2b8);
    if ((char)uVar15 == '\0') {
      return uVar15;
    }
    if ((pSStack_2b8 != (System_Object_array *)0x0) &&
       (((*(undefined1 *)((long)pSStack_2b8->m_Items + 0x1a) = 0, pAVar21 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pSVar31 = "unknown_error",
         pAVar21 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             ((System_String_o *)"unknown_error",
                              *(MethodInfo_331AB10 **)
                               (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar21 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) &&
        (pSVar31 = pSStack_2b8, pSStack_2b8 != (System_Object_array *)0x0)))) {
      if ((char)(pAVar21->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(pSStack_2b8->m_Items + 3) == '\0') {
label_0341a96a:
          *(undefined2 *)(pSStack_2b8->m_Items + 3) = 0x100;
          pSStack_2b8->max_length = 0;
          pSStack_2b8->m_Items[0] = (Il2CppObject *)(pAVar21->fields)._Error_k__BackingField;
          pSVar31 = (System_Object_array *)pSStack_2b8->m_Items;
          il2cpp_runtime_helper_022b4080();
          pSVar22 = pSStack_2b8;
          pcVar8 = (((Il2CppClass *)plVar26)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar31 = *(System_Object_array **)(pcVar8 + 0x40);
            Var50 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar22 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar22->m_Items + 1) = Var50;
              *(undefined4 *)((long)pSVar22->m_Items + 0x12) = uStack_2ae;
              *(undefined2 *)((long)pSVar22->m_Items + 0x16) = uStack_2aa;
              pSVar31 = (System_Object_array *)(pAVar21->fields)._Error_k__BackingField;
              pAVar20 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                  ((System_String_o *)pSVar31,0,
                                   *(MethodInfo_331B520 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108))
              ;
joined_r0x0341a95f:
              if (((pSStack_2b8 != (System_Object_array *)0x0) &&
                  (pSVar31 = ((System_Collections_Generic_List_object__Fields *)&pSStack_2b8->bounds)->_items,
                  pSVar31 != (System_Object_array *)0x0)) &&
                 ((pSVar22 = System_Collections_Generic_List_object___ToArray
                                       ((System_Collections_Generic_List_object__o *)pSVar31,
                                        *(MethodInfo_362E340 **)
                                         (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) +
                                         0x148)), pSStack_2b8 != (System_Object_array *)0x0 &&
                  (pSVar6 = ((System_Collections_Generic_List_object__Fields *)&pSStack_2b8->bounds)->_items,
                  pSVar6 != (System_Object_array *)0x0)))) {
                piVar1 = (int *)((long)&pSVar6->max_length + 4);
                *piVar1 = *piVar1 + 1;
                length = (int32_t)pSVar6->max_length;
                *(undefined4 *)&pSVar6->max_length = 0;
                if (0 < length) {
                  pSVar31 = (System_Object_array *)pSVar6->bounds;
                  System_Array__Clear((System_Array_o *)pSVar31,0,length,(MethodInfo *)0x0);
                }
                if (pSVar22 != (System_Object_array *)0x0) {
                  uVar15 = (uint)pSVar22->max_length;
                  if ((int)uVar15 < 1) {
                    return uVar15;
                  }
                  uVar37 = 0;
                  if ((pSVar22->max_length & 0xffffffff) != 0) {
                    do {
                      pIVar33 = pSVar22->m_Items[uVar37];
                      if (pIVar33 != (Il2CppObject *)0x0) {
                        if (pIVar33 == (Il2CppObject *)0x0) goto label_0341a9ed;
                        pSVar31 = (System_Object_array *)pIVar33[4].klass;
                        (*pIVar33[1].monitor)(pSVar31,pAVar20,pIVar33[2].monitor);
                      }
                      uVar37 = uVar37 + 1;
                      uVar15 = (uint)pSVar22->max_length;
                      if ((long)(int)uVar15 <= (long)uVar37) {
                        return uVar15;
                      }
                    } while (uVar37 < uVar15);
                  }
                  goto label_0341a9f2;
                }
              }
            }
          }
        }
        else {
          pvVar5 = (((Il2CppClass *)plVar26)->_1).byval_arg.data;
          if (pvVar5 != (void *)0x0) {
            if (*(char *)((long)pvVar5 + 0x28) == '\0') goto label_0341a96a;
            pSStack_2b8->m_Items[0] = (Il2CppObject *)(pAVar21->fields)._Error_k__BackingField;
            pSVar31 = (System_Object_array *)pSStack_2b8->m_Items;
            il2cpp_runtime_helper_022b4080();
            if (pSStack_2b8 != (System_Object_array *)0x0) {
              pSVar31 = (System_Object_array *)pSStack_2b8->max_length;
              pAVar20 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  ((Il2CppObject *)pSVar31,(pAVar21->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
              ;
              goto joined_r0x0341a95f;
            }
          }
        }
      }
      else {
        *(undefined2 *)(pSStack_2b8->m_Items + 3) = 1;
        pSStack_2b8->max_length = (il2cpp_array_size_t)(pAVar21->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(&pSStack_2b8->max_length);
        pSVar31 = (System_Object_array *)0x0;
        if (pSStack_2b8 != (System_Object_array *)0x0) {
          pSStack_2b8->m_Items[0] = (Il2CppObject *)0x0;
          pSVar31 = (System_Object_array *)pSStack_2b8->m_Items;
          il2cpp_runtime_helper_022b4080(pSVar31,0);
          pSVar22 = pSStack_2b8;
          pcVar8 = (((Il2CppClass *)plVar26)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar31 = *(System_Object_array **)(pcVar8 + 0x40);
            Var50 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar22 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar22->m_Items + 1) = Var50;
              *(undefined2 *)((long)pSVar22->m_Items + 0x16) = uStack_2aa;
              *(undefined4 *)((long)pSVar22->m_Items + 0x12) = uStack_2ae;
              if (pSStack_2b8 != (System_Object_array *)0x0) {
                pSVar31 = (System_Object_array *)pSStack_2b8->max_length;
                pAVar20 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                    ((Il2CppObject *)pSVar31,0,
                                     *(MethodInfo_331B380 **)
                                      (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100
                                      ));
                goto joined_r0x0341a95f;
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  uVar23 = il2cpp_runtime_helper_022b2ca0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)uVar23 >> 8),
                  *(undefined1 *)&((System_Collections_Generic_List_object__Fields *)&pSVar31->bounds)->_items
                 );
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseCategory
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditCategory_o** category, const MethodInfo* method);
// 0x44c6a50

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory
          (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Credits_AottgCreditCategory_o **category,
          MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  undefined1 uVar3;
  byte bVar4;
  int32_t length;
  void *pvVar5;
  System_Object_array *pSVar6;
  InvokerMethod pIVar7;
  char *pcVar8;
  unkuint10 Var9;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAVar10;
  System_String_o *pSVar11;
  ApplicationManagers_Credits_AottgCreditGroup_array *groups;
  char cVar12;
  bool_conflict bVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  bool_conflict extraout_EAX;
  long lVar17;
  Il2CppClass *__this;
  Il2CppClass *pIVar18;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar19;
  System_TimeSpan_Fields SVar20;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar21;
  System_TimeSpan_o t1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar22;
  System_Object_array *pSVar23;
  undefined8 uVar24;
  ApplicationManagers_Credits_AottgCreditCategory_o *__this_00;
  long *plVar25;
  SimpleJSONFixed_JSONNode_o *pSVar26;
  undefined8 *puVar27;
  MethodInfo *pMVar28;
  MethodInfo *pMVar29;
  MethodInfo *pMVar30;
  System_Object_array *pSVar31;
  MethodInfo *pMVar32;
  Il2CppClass *pIVar33;
  Il2CppObject *pIVar34;
  System_String_o *pSVar35;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_01;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_02;
  Il2CppClass *onResult;
  Il2CppClass *in_RCX;
  Il2CppClass *pIVar36;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_02;
  MethodInfo *method_04;
  MethodInfo *method_05;
  ulong uVar37;
  MethodInfo *node_00;
  char **ppcVar38;
  System_TimeSpan_Fields SVar39;
  System_Collections_Generic_List_object__c **unaff_RBP;
  System_TimeSpan_Fields SVar40;
  MethodInfo *pMVar41;
  MethodInfo *pMVar42;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSVar43;
  Il2CppClass *__this_03;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar44;
  Il2CppClass *pIVar45;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  MethodInfo *unaff_R12;
  System_Collections_Generic_List_object__c **unaff_R13;
  MethodInfo **ppMVar46;
  undefined1 auVar47 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_04;
  unkbyte10 Var48;
  System_Object_array *pSStack_278;
  undefined4 uStack_26e;
  undefined2 uStack_26a;
  Il2CppClass *pIStack_268;
  Il2CppClass *pIStack_260;
  System_DateTime_Fields SStack_258;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_250;
  char cStack_248;
  undefined7 uStack_247;
  undefined8 uStack_240;
  MethodInfo *pMStack_230;
  Il2CppClass *pIStack_228;
  Il2CppClass *pIStack_220;
  Il2CppClass *pIStack_218;
  Il2CppClass *pIStack_210;
  Il2CppClass *pIStack_208;
  Il2CppClass *pIStack_200;
  Il2CppClass *pIStack_1f8;
  Il2CppClass *pIStack_1f0;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_1e8;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_1e0;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_1d8;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSStack_1d0;
  long lStack_1c8;
  Il2CppClass *pIStack_1c0;
  undefined8 uStack_1b8;
  MethodInfo *pMStack_1b0;
  MethodInfo *pMStack_1a8;
  undefined8 *puStack_1a0;
  MethodInfo *pMStack_198;
  MethodInfo **ppMStack_190;
  Il2CppClass *pIStack_180;
  System_Guid_Fields SStack_178;
  undefined8 uStack_160;
  MethodInfo *pMStack_158;
  Il2CppClass *pIStack_150;
  MethodInfo *pMStack_148;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAStack_138;
  System_String_o *pSStack_130;
  System_String_o *pSStack_128;
  MethodInfo *pMStack_120;
  MethodInfo *pMStack_118;
  System_Collections_Generic_List_object__c **ppSStack_110;
  MethodInfo *pMStack_108;
  MethodInfo *pMStack_100;
  MethodInfo *pMStack_f8;
  MethodInfo *pMStack_f0;
  MethodInfo *pMStack_e8;
  MethodInfo *pMStack_e0;
  Il2CppClass *pIStack_d8;
  MethodInfo *pMStack_d0;
  MethodInfo *pMStack_c8;
  ApplicationManagers_Credits_AottgCreditGroup_array *local_50;
  ApplicationManagers_Credits_AottgCreditContributor_array *local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  MethodInfo_37EC980 *method_00;
  
  if (g_data_057aead9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditCategory);
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aead9 = '\x01';
    method = extraout_RDX_01;
  }
  local_38 = (System_String_o *)0x0;
  local_40 = (System_String_o *)0x0;
  local_48 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  local_50 = (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0;
  *category = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0;
  il2cpp_runtime_helper_022b4080(category,0,method);
  if (g_data_057aeae0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar30 = (MethodInfo *)0x0;
  pMVar41 = (MethodInfo *)node;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar12 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                       (node,(node->klass->vtable)._17_get_IsObject.method);
    if ((((cVar12 != '\0') &&
         (bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                             (node,"name",&local_38,(MethodInfo *)in_RCX), (char)bVar13 != '\0')) &&
        (bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription(node,&local_40,method_01)
        , (char)bVar13 != '\0')) &&
       ((bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                            (node,&local_48,method_02), (char)bVar13 != '\0' &&
        (bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups(node,&local_50,method_03),
        pSVar11 = local_38, pSVar35 = local_40, pAVar10 = local_48, groups = local_50, (char)bVar13 != '\0')))
       ) {
      __this_00 = (ApplicationManagers_Credits_AottgCreditCategory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditCategory);
      ApplicationManagers_Credits_AottgCreditCategory___ctor(__this_00,pSVar11,pSVar35,pAVar10,groups,in_R9);
      *category = __this_00;
      il2cpp_runtime_helper_022b4080(category,__this_00);
      return (bool_conflict)CONCAT71((int7)((ulong)pSVar11 >> 8),1);
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  extraout_RDX_02->methodPointer = (Il2CppMethodPointer)0x0;
  pMVar32 = (MethodInfo *)0x0;
  pMVar42 = extraout_RDX_02;
  il2cpp_runtime_helper_022b4080();
  if (pMVar41 != (MethodInfo *)0x0) {
    cVar12 = (*((Il2CppClass *)pMVar41->methodPointer)->vtable[0x1c].methodPtr)
                       (pMVar41,pMVar30,((Il2CppClass *)pMVar41->methodPointer)->vtable[0x1c].method);
    if (cVar12 == '\0') {
      return 0;
    }
    pMVar32 = pMVar30;
    pMVar42 = pMVar41;
    plVar25 = (long *)(*((Il2CppClass *)pMVar41->methodPointer)->vtable[7].methodPtr)
                                (pMVar41,pMVar30,((Il2CppClass *)pMVar41->methodPointer)->vtable[7].method);
    if (plVar25 != (long *)0x0) {
      cVar12 = (**(code **)(*plVar25 + 0x208))(plVar25,*(undefined8 *)(*plVar25 + 0x210));
      if (cVar12 != '\0') {
        pSVar26 = (SimpleJSONFixed_JSONNode_o *)
                  (*((Il2CppClass *)pMVar41->methodPointer)->vtable[7].methodPtr)
                            (pMVar41,pMVar30,((Il2CppClass *)pMVar41->methodPointer)->vtable[7].method);
        now.fields._8_8_ =
             (Il2CppClass *)ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar26,pMVar30);
        extraout_RDX_02->methodPointer = (Il2CppMethodPointer)now.fields._8_8_;
        il2cpp_runtime_helper_022b4080(extraout_RDX_02);
        uVar14 = System_String__IsNullOrEmpty
                           ((System_String_o *)extraout_RDX_02->methodPointer,(MethodInfo *)0x0);
        return uVar14 ^ 1;
      }
      return 0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeade == '\0') {
    il2cpp_runtime_helper_023445d0(&"description");
    g_data_057aeade = '\x01';
  }
  pMVar32->methodPointer = (Il2CppMethodPointer)0x0;
  pMVar41 = (MethodInfo *)0x0;
  pMVar30 = pMVar32;
  il2cpp_runtime_helper_022b4080();
  ppMVar46 = (MethodInfo **)extraout_RDX_02;
  if (pMVar42 != (MethodInfo *)0x0) {
    ppMVar46 = &"description";
    cVar12 = (*((Il2CppClass *)pMVar42->methodPointer)->vtable[0x1c].methodPtr)
                       (pMVar42,"description",((Il2CppClass *)pMVar42->methodPointer)->vtable[0x1c].method);
    if (cVar12 == '\0') {
label_044c6db1:
      unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
label_044c6db3:
      return (bool_conflict)unaff_RBP;
    }
    pMVar41 = "description";
    pMVar30 = pMVar42;
    puVar27 = (undefined8 *)
              (*((Il2CppClass *)pMVar42->methodPointer)->vtable[7].methodPtr)
                        (pMVar42,"description",((Il2CppClass *)pMVar42->methodPointer)->vtable[7].method);
    if (puVar27 != (undefined8 *)0x0) {
      in_RCX = (Il2CppClass *)*puVar27;
      cVar12 = (*(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->_15_Remove).methodPtr)
                         (puVar27,(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                                  _15_Remove).method);
      unaff_RBP = (System_Collections_Generic_List_object__c **)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
      if (cVar12 != '\0') goto label_044c6db3;
      pMVar41 = "description";
      pMVar30 = pMVar42;
      plVar25 = (long *)(*((Il2CppClass *)pMVar42->methodPointer)->vtable[7].methodPtr)
                                  (pMVar42,"description",
                                   ((Il2CppClass *)pMVar42->methodPointer)->vtable[7].method);
      if (plVar25 != (long *)0x0) {
        cVar12 = (**(code **)(*plVar25 + 0x208))(plVar25,*(undefined8 *)(*plVar25 + 0x210));
        if (cVar12 != '\0') {
          pMVar41 = "description";
          pSVar26 = (SimpleJSONFixed_JSONNode_o *)
                    (*((Il2CppClass *)pMVar42->methodPointer)->vtable[7].methodPtr)
                              (pMVar42,"description",((Il2CppClass *)pMVar42->methodPointer)->vtable[7].method)
          ;
          now.fields._8_8_ =
               (Il2CppClass *)ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar26,pMVar41);
          pMVar32->methodPointer = (Il2CppMethodPointer)now.fields._8_8_;
          il2cpp_runtime_helper_022b4080(pMVar32,now.fields._8_8_);
          goto label_044c6db3;
        }
        goto label_044c6db1;
      }
    }
  }
  pMStack_d0 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
  pMVar32 = (MethodInfo *)&pMStack_d0;
  pMStack_c8 = pMVar42;
  if (g_data_057aeadc == '\0') {
    pIStack_d8 = (Il2CppClass *)0x44c6df6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_d8 = (Il2CppClass *)0x44c6e02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditContributor_ToArray);
    pIStack_d8 = (Il2CppClass *)0x44c6e0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
    pIStack_d8 = (Il2CppClass *)0x44c6e1a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgCreditContributor);
    pIStack_d8 = (Il2CppClass *)0x44c6e26;
    il2cpp_runtime_helper_023445d0(&"contributors");
    g_data_057aeadc = '\x01';
  }
  pMStack_d0 = (MethodInfo *)0x0;
  pMVar41->methodPointer = (Il2CppMethodPointer)0x0;
  pMVar42 = (MethodInfo *)0x0;
  pIStack_d8 = (Il2CppClass *)0x44c6e46;
  node_00 = pMVar41;
  il2cpp_runtime_helper_022b4080();
  if (pMVar30 != (MethodInfo *)0x0) {
    pIStack_d8 = (Il2CppClass *)0x44c6e6d;
    cVar12 = (*((Il2CppClass *)pMVar30->methodPointer)->vtable[0x1c].methodPtr)
                       (pMVar30,"contributors",((Il2CppClass *)pMVar30->methodPointer)->vtable[0x1c].method);
    if (cVar12 == '\0') {
      return 0;
    }
    pIStack_d8 = (Il2CppClass *)0x44c6e8c;
    pMVar42 = "contributors";
    node_00 = pMVar30;
    puVar27 = (undefined8 *)
              (*((Il2CppClass *)pMVar30->methodPointer)->vtable[7].methodPtr)
                        (pMVar30,"contributors",((Il2CppClass *)pMVar30->methodPointer)->vtable[7].method);
    unaff_RBP = (System_Collections_Generic_List_object__c **)&"contributors";
    if (puVar27 != (undefined8 *)0x0) {
      in_RCX = (Il2CppClass *)*puVar27;
      pIStack_d8 = (Il2CppClass *)0x44c6ea8;
      cVar12 = (*(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                 _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).methodPtr)
                         (puVar27,(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                                  _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).method);
      if (cVar12 == '\0') {
        return 0;
      }
      pIStack_d8 = (Il2CppClass *)0x44c6ec7;
      pMVar42 = "contributors";
      node_00 = pMVar30;
      pMVar28 = (MethodInfo *)
                (*((Il2CppClass *)pMVar30->methodPointer)->vtable[7].methodPtr)
                          (pMVar30,"contributors",((Il2CppClass *)pMVar30->methodPointer)->vtable[7].method);
      if (pMVar28 != (MethodInfo *)0x0) {
        in_RCX = (Il2CppClass *)pMVar28->methodPointer;
        pMVar42 = (MethodInfo *)
                  (((System_Collections_Generic_List_object__c *)(in_RCX->vtable + 0x23))->_1).
                  implementedInterfaces;
        pIStack_d8 = (Il2CppClass *)0x44c6ee3;
        pMVar29 = (MethodInfo *)(*in_RCX->vtable[0x2d].methodPtr)();
        node_00 = pMVar28;
        if (pMVar29 != (MethodInfo *)0x0) {
          pIStack_d8 = (Il2CppClass *)0x44c6f02;
          uVar14 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar29,((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].method);
          unaff_RBP = (System_Collections_Generic_List_object__c **)(ulong)uVar14;
          pIStack_d8 = (Il2CppClass *)0x44c6f13;
          pMVar30 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgCreditContributor);
          pIStack_d8 = (Il2CppClass *)0x44c6f2a;
          System_Collections_Generic_List_object____ctor_362b930
                    ((System_Collections_Generic_List_object__o *)pMVar30,uVar14,MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
          pMVar42 = ((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].method;
          pIStack_d8 = (Il2CppClass *)0x44c6f3d;
          node_00 = pMVar29;
          iVar15 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].methodPtr)();
          ppMVar46 = (MethodInfo **)pMVar29;
          if (iVar15 < 1) {
            if (pMVar30 != (MethodInfo *)0x0) goto label_044c7009;
          }
          else {
            if (pMVar30 != (MethodInfo *)0x0) {
              unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
              unaff_R13 = &MethodInfo_Void_Add;
              do {
                pIStack_d8 = (Il2CppClass *)0x44c6fa6;
                auVar47 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[5].methodPtr)
                                    (pMVar29,unaff_RBP,
                                     ((Il2CppClass *)pMVar29->methodPointer)->vtable[5].method);
                node_00 = auVar47._0_8_;
                pIStack_d8 = (Il2CppClass *)0x44c6fb1;
                bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                                   ((SimpleJSONFixed_JSONNode_o *)node_00,
                                    (ApplicationManagers_Credits_AottgCreditContributor_o **)&pMStack_d0,
                                    auVar47._8_8_);
                in_RCX = (Il2CppClass *)MethodInfo_Void_Add;
                if ((char)bVar13 == '\0') {
                  return 0;
                }
                piVar1 = (int *)((long)&pMVar30->name + 4);
                *piVar1 = *piVar1 + 1;
                pIVar7 = pMVar30->invoker_method;
                pMVar42 = pMStack_d0;
                unaff_R12 = (MethodInfo *)&pMStack_d0;
                if (pIVar7 == (InvokerMethod)0x0) goto label_044c7053;
                uVar14 = *(uint *)&pMVar30->name;
                if (uVar14 < *(uint *)(pIVar7 + 0x18)) {
                  *(uint *)&pMVar30->name = uVar14 + 1;
                  *(MethodInfo **)(pIVar7 + (long)(int)uVar14 * 8 + 0x20) = pMStack_d0;
                  pIStack_d8 = (Il2CppClass *)0x44c6fef;
                  il2cpp_runtime_helper_022b4080(pIVar7 + (long)(int)uVar14 * 8 + 0x20);
                }
                else {
                  pIStack_d8 = (Il2CppClass *)0x44c6f77;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pMVar30,(Il2CppObject *)pMStack_d0,
                             *(MethodInfo_362C220 **)
                              (*(long *)((long)(((System_Collections_Generic_List_object__c *)in_RCX)->_1).
                                               byval_arg.data + 0xc0) + 0x70));
                }
                uVar14 = (int)unaff_RBP + 1;
                unaff_RBP = (System_Collections_Generic_List_object__c **)(ulong)uVar14;
                pIStack_d8 = (Il2CppClass *)0x44c6f8d;
                iVar15 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].methodPtr)
                                   (pMVar29,((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].method);
              } while ((int)uVar14 < iVar15);
label_044c7009:
              pIStack_d8 = (Il2CppClass *)0x44c701b;
              pSVar31 = System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_object__o *)pMVar30,MethodInfo_AottgCreditContributor_ToArray);
              pMVar41->methodPointer = (Il2CppMethodPointer)pSVar31;
              pIStack_d8 = (Il2CppClass *)0x44c7029;
              il2cpp_runtime_helper_022b4080(pMVar41,pSVar31);
              return (bool_conflict)CONCAT71((int7)((ulong)pMVar30 >> 8),1);
            }
            pMVar30 = (MethodInfo *)0x0;
            pIStack_d8 = (Il2CppClass *)0x44c7044;
            auVar47 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[5].methodPtr)
                                (pMVar29,0,((Il2CppClass *)pMVar29->methodPointer)->vtable[5].method);
            node_00 = auVar47._0_8_;
            pIStack_d8 = (Il2CppClass *)0x44c704f;
            bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                               ((SimpleJSONFixed_JSONNode_o *)node_00,
                                (ApplicationManagers_Credits_AottgCreditContributor_o **)&pMStack_d0,
                                auVar47._8_8_);
            pMVar42 = pMVar32;
            if ((char)bVar13 == '\0') {
              return 0;
            }
          }
        }
      }
    }
  }
label_044c7053:
  pIStack_d8 = (Il2CppClass *)0x44c7058;
  il2cpp_runtime_helper_022b2c90();
  pMStack_f8 = pMVar30;
  pMStack_f0 = unaff_R12;
  pMStack_e8 = pMVar41;
  pMStack_e0 = (MethodInfo *)ppMVar46;
  pIStack_d8 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeada == '\0') {
    pMStack_100 = (MethodInfo *)0x44c7083;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pMStack_100 = (MethodInfo *)0x44c708f;
    il2cpp_runtime_helper_023445d0(&"groups");
    g_data_057aeada = '\x01';
  }
  pMVar42->methodPointer = (Il2CppMethodPointer)0x0;
  now.fields._8_8_ = (Il2CppClass *)0x0;
  pMStack_100 = (MethodInfo *)0x44c70a7;
  pMVar41 = pMVar42;
  il2cpp_runtime_helper_022b4080();
  if (node_00 != (MethodInfo *)0x0) {
    unaff_RBP = &"groups";
    pMStack_100 = (MethodInfo *)0x44c70ce;
    cVar12 = (*((Il2CppClass *)node_00->methodPointer)->vtable[0x1c].methodPtr)
                       (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[0x1c].method);
    if (cVar12 == '\0') {
label_044c720a:
      ppMVar46 = (MethodInfo **)0x0;
label_044c720d:
      return (bool_conflict)ppMVar46;
    }
    pMStack_100 = (MethodInfo *)0x44c70ed;
    now.fields._8_8_ = (Il2CppClass *)"groups";
    pMVar41 = node_00;
    puVar27 = (undefined8 *)
              (*((Il2CppClass *)node_00->methodPointer)->vtable[7].methodPtr)
                        (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[7].method);
    if (puVar27 != (undefined8 *)0x0) {
      in_RCX = (Il2CppClass *)*puVar27;
      pMStack_100 = (MethodInfo *)0x44c7109;
      cVar12 = (*(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                 _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).methodPtr)
                         (puVar27,(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                                  _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).method);
      if (cVar12 == '\0') goto label_044c720a;
      pMStack_100 = (MethodInfo *)0x44c7128;
      now.fields._8_8_ = (Il2CppClass *)"groups";
      pMVar41 = node_00;
      pMVar30 = (MethodInfo *)
                (*((Il2CppClass *)node_00->methodPointer)->vtable[7].methodPtr)
                          (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[7].method);
      if (pMVar30 != (MethodInfo *)0x0) {
        in_RCX = (Il2CppClass *)pMVar30->methodPointer;
        now.fields._8_8_ =
             (Il2CppClass *)
             (((System_Collections_Generic_List_object__c *)(in_RCX->vtable + 0x23))->_1).
             implementedInterfaces;
        pMStack_100 = (MethodInfo *)0x44c7144;
        pMVar32 = (MethodInfo *)
                  (*(code *)(((System_Collections_Generic_List_object__c *)(in_RCX->vtable + 0x23))->_1).
                            nestedTypes)();
        pMVar41 = pMVar30;
        if (pMVar32 != (MethodInfo *)0x0) {
          pMStack_100 = (MethodInfo *)0x44c7163;
          uVar16 = (*((Il2CppClass *)pMVar32->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar32,((Il2CppClass *)pMVar32->methodPointer)->vtable[0xb].method);
          in_RCX = (Il2CppClass *)&TypeInfo_AottgCreditGroup;
          pMStack_100 = (MethodInfo *)0x44c7174;
          now.fields._8_8_ = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgCreditGroup,uVar16);
          pMVar42->methodPointer = (Il2CppMethodPointer)now.fields._8_8_;
          pMStack_100 = (MethodInfo *)0x44c7182;
          il2cpp_runtime_helper_022b4080(pMVar42,now.fields._8_8_);
          pMStack_100 = (MethodInfo *)0x44c7196;
          iVar15 = (*((Il2CppClass *)pMVar32->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar32,((Il2CppClass *)pMVar32->methodPointer)->vtable[0xb].method);
          ppMVar46 = (MethodInfo **)CONCAT71((int7)((ulong)ppMVar46 >> 8),1);
          if (0 < iVar15) {
            node_00 = (MethodInfo *)&g_data_00000020;
            unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
            do {
              pMStack_100 = (MethodInfo *)0x44c71c6;
              pMVar41 = pMVar32;
              auVar47 = (*((Il2CppClass *)pMVar32->methodPointer)->vtable[5].methodPtr)
                                  (pMVar32,(ulong)unaff_RBP & 0xffffffff,
                                   ((Il2CppClass *)pMVar32->methodPointer)->vtable[5].method);
              now.fields._8_8_ = (Il2CppClass *)pMVar42->methodPointer;
              unaff_R12 = pMVar32;
              if (now.fields._8_8_ == (Il2CppClass *)0x0) goto label_044c7219;
              in_RCX = (Il2CppClass *)(ulong)*(uint *)&((now.fields._8_8_)->_1).namespaze;
              if (in_RCX <= unaff_RBP) goto label_044c721e;
              pMStack_100 = (MethodInfo *)0x44c71e1;
              bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
                                 (auVar47._0_8_,
                                  (ApplicationManagers_Credits_AottgCreditGroup_o **)
                                  ((long)&((now.fields._8_8_)->_1).image + (long)node_00),auVar47._8_8_);
              if ((char)bVar13 == '\0') goto label_044c720a;
              unaff_RBP = (System_Collections_Generic_List_object__c **)
                          ((long)&(((Il2CppClass *)unaff_RBP)->_1).image + 1);
              pMStack_100 = (MethodInfo *)0x44c71fd;
              iVar15 = (*((Il2CppClass *)pMVar32->methodPointer)->vtable[0xb].methodPtr)
                                 (pMVar32,((Il2CppClass *)pMVar32->methodPointer)->vtable[0xb].method);
              node_00 = (MethodInfo *)&node_00->virtualMethodPointer;
            } while ((long)unaff_RBP < (long)iVar15);
          }
          goto label_044c720d;
        }
      }
    }
  }
label_044c7219:
  pMStack_100 = (MethodInfo *)0x44c721e;
  il2cpp_runtime_helper_022b2c90();
label_044c721e:
  pMStack_100 = (MethodInfo *)0x44c7223;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_120 = node_00;
  pMStack_118 = unaff_R12;
  ppSStack_110 = unaff_R13;
  pMStack_108 = pMVar42;
  pMStack_100 = (MethodInfo *)ppMVar46;
  if (g_data_057aeadb == '\0') {
    pMStack_148 = (MethodInfo *)0x44c7258;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pMStack_148 = (MethodInfo *)0x44c7264;
    il2cpp_runtime_helper_023445d0(&"title");
    g_data_057aeadb = '\x01';
  }
  pSStack_128 = (System_String_o *)0x0;
  pSStack_130 = (System_String_o *)0x0;
  pAStack_138 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  ((now.fields._8_8_)->_1).image = (Il2CppClass *)0x0;
  pMStack_148 = (MethodInfo *)0x44c7297;
  il2cpp_runtime_helper_022b4080(now.fields._8_8_);
  if (g_data_057aeae0 == '\0') {
    pMStack_148 = (MethodInfo *)0x44c72ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pMStack_148 = (MethodInfo *)0x44c72cb;
    il2cpp_runtime_helper_02337ed0();
  }
  puVar27 = (undefined8 *)0x0;
  pMStack_148 = (MethodInfo *)0x44c72d9;
  pMVar30 = pMVar41;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar41,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (pMVar41 != (MethodInfo *)0x0) {
    pMStack_148 = (MethodInfo *)0x44c72fd;
    cVar12 = (**(code **)(pMVar41->methodPointer + 0x248))
                       (pMVar41,*(undefined8 *)(pMVar41->methodPointer + 0x250));
    if (cVar12 != '\0') {
      pMStack_148 = (MethodInfo *)0x44c731c;
      bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)pMVar41,"title",&pSStack_128,(MethodInfo *)in_RCX
                         );
      if ((char)bVar13 != '\0') {
        pMStack_148 = (MethodInfo *)0x44c732d;
        bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                           ((SimpleJSONFixed_JSONNode_o *)pMVar41,&pSStack_130,method_04);
        if ((char)bVar13 != '\0') {
          pMStack_148 = (MethodInfo *)0x44c733e;
          bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                             ((SimpleJSONFixed_JSONNode_o *)pMVar41,&pAStack_138,method_05);
          pSVar11 = pSStack_128;
          pSVar35 = pSStack_130;
          pAVar10 = pAStack_138;
          if ((char)bVar13 != '\0') {
            pMStack_148 = (MethodInfo *)0x44c7360;
            pIVar33 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditGroup);
            pMStack_148 = (MethodInfo *)0x44c7374;
            ApplicationManagers_Credits_AottgCreditGroup___ctor
                      ((ApplicationManagers_Credits_AottgCreditGroup_o *)pIVar33,pSVar11,pSVar35,pAVar10,in_R8
                      );
            ((now.fields._8_8_)->_1).image = pIVar33;
            pMStack_148 = (MethodInfo *)0x44c7382;
            il2cpp_runtime_helper_022b4080(now.fields._8_8_,pIVar33);
            return (bool_conflict)CONCAT71((int7)((ulong)pIVar33 >> 8),1);
          }
        }
      }
    }
    return 0;
  }
  pMStack_148 = (MethodInfo *)0x44c739d;
  il2cpp_runtime_helper_022b2c90();
  uStack_160 = 0;
  pMStack_158 = unaff_R12;
  pIStack_150 = now.fields._8_8_;
  pMStack_148 = pMVar41;
  if (g_data_057aeadd == '\0') {
    ppMStack_190 = (MethodInfo **)0x44c73c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditContributor);
    ppMStack_190 = (MethodInfo **)0x44c73d2;
    il2cpp_runtime_helper_023445d0(&"accountId");
    ppMStack_190 = (MethodInfo **)0x44c73de;
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aeadd = '\x01';
  }
  pIStack_180 = (Il2CppClass *)0x0;
  SStack_178._a = 0;
  SStack_178._b = 0;
  SStack_178._c = 0;
  SStack_178._d = '\0';
  SStack_178._e = '\0';
  SStack_178._f = '\0';
  SStack_178._g = '\0';
  SStack_178._h = '\0';
  SStack_178._i = '\0';
  SStack_178._j = '\0';
  SStack_178._k = '\0';
  *puVar27 = 0;
  ppMStack_190 = (MethodInfo **)0x44c7407;
  il2cpp_runtime_helper_022b4080(puVar27);
  if (g_data_057aeae0 == '\0') {
    ppMStack_190 = (MethodInfo **)0x44c741c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    ppMStack_190 = (MethodInfo **)0x44c743b;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar46 = (MethodInfo **)0x0;
  ppMStack_190 = (MethodInfo **)0x44c7449;
  pMVar41 = pMVar30;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar30,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (pMVar30 != (MethodInfo *)0x0) {
    ppMStack_190 = (MethodInfo **)0x44c746d;
    cVar12 = (**(code **)(pMVar30->methodPointer + 0x248))
                       (pMVar30,*(undefined8 *)(pMVar30->methodPointer + 0x250));
    if (cVar12 == '\0') {
      return 0;
    }
    ppMStack_190 = (MethodInfo **)0x44c748c;
    bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar30,"name",(System_String_o **)&pIStack_180,
                        (MethodInfo *)in_RCX);
    if ((char)bVar13 == '\0') {
      return 0;
    }
    ppMVar46 = &"accountId";
    ppMStack_190 = (MethodInfo **)0x44c74b1;
    cVar12 = (**(code **)(pMVar30->methodPointer + 0x2f8))
                       (pMVar30,"accountId",*(undefined8 *)(pMVar30->methodPointer + 0x300));
    if (cVar12 == '\0') {
      return 0;
    }
    ppMStack_190 = (MethodInfo **)0x44c74cf;
    pMVar41 = pMVar30;
    plVar25 = (long *)(**(code **)(pMVar30->methodPointer + 0x1a8))
                                (pMVar30,"accountId",*(undefined8 *)(pMVar30->methodPointer + 0x1b0));
    if (plVar25 != (long *)0x0) {
      ppMStack_190 = (MethodInfo **)0x44c74eb;
      cVar12 = (**(code **)(*plVar25 + 0x228))(plVar25);
      if (cVar12 != '\0') {
        pSVar35 = (System_String_o *)0x0;
label_044c74f2:
        now.fields._8_8_ = pIStack_180;
        ppMStack_190 = (MethodInfo **)0x44c7506;
        pIVar34 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditContributor);
        ppMStack_190 = (MethodInfo **)0x44c7513;
        System_Object___ctor(pIVar34,(MethodInfo *)0x0);
        pIVar34[1].klass = now.fields._8_8_;
        ppMStack_190 = (MethodInfo **)0x44c7523;
        il2cpp_runtime_helper_022b4080(pIVar34 + 1,now.fields._8_8_);
        pIVar34[1].monitor = pSVar35;
        ppMStack_190 = (MethodInfo **)0x44c7533;
        il2cpp_runtime_helper_022b4080(&pIVar34[1].monitor,pSVar35);
        *puVar27 = pIVar34;
        ppMStack_190 = (MethodInfo **)0x44c7541;
        il2cpp_runtime_helper_022b4080(puVar27,pIVar34);
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar34 >> 8),1);
      }
      ppMStack_190 = (MethodInfo **)0x44c755e;
      pMVar41 = pMVar30;
      plVar25 = (long *)(**(code **)(pMVar30->methodPointer + 0x1a8))
                                  (pMVar30,"accountId",*(undefined8 *)(pMVar30->methodPointer + 0x1b0));
      if (plVar25 != (long *)0x0) {
        ppMStack_190 = (MethodInfo **)0x44c7576;
        cVar12 = (**(code **)(*plVar25 + 0x208))(plVar25,*(undefined8 *)(*plVar25 + 0x210));
        if (cVar12 == '\0') {
          return 0;
        }
        ppMStack_190 = (MethodInfo **)0x44c7590;
        pMVar41 = "accountId";
        pSVar26 = (SimpleJSONFixed_JSONNode_o *)
                  (**(code **)(pMVar30->methodPointer + 0x1a8))
                            (pMVar30,"accountId",*(undefined8 *)(pMVar30->methodPointer + 0x1b0));
        ppMStack_190 = (MethodInfo **)0x44c7598;
        pSVar35 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar26,pMVar41);
        ppMStack_190 = (MethodInfo **)0x44c75a7;
        bVar13 = System_String__IsNullOrEmpty(pSVar35,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          return 0;
        }
        ppMStack_190 = (MethodInfo **)0x44c75bc;
        bVar13 = System_Guid__TryParse(pSVar35,(System_Guid_o *)&SStack_178,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return 0;
        }
        goto label_044c74f2;
      }
    }
  }
  ppMStack_190 = (MethodInfo **)0x44c75db;
  il2cpp_runtime_helper_022b2c90();
  ppMStack_190 = ppMVar46;
  if (g_data_057aeadf == '\0') {
    pMStack_198 = (MethodInfo *)0x44c75f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeadf = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pMStack_198 = (MethodInfo *)0x44c7618;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_198 = (MethodInfo *)0x44c7624;
  bVar13 = SimpleJSONFixed_JSONNode__op_Equality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar41,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return 0;
  }
  if (pMVar41 != (MethodInfo *)0x0) {
    pMStack_198 = (MethodInfo *)0x44c7640;
    cVar12 = (**(code **)(pMVar41->methodPointer + 0x228))
                       (pMVar41,*(undefined8 *)(pMVar41->methodPointer + 0x230));
    if (cVar12 != '\0') {
      return 0;
    }
    pMStack_198 = (MethodInfo *)0x44c765b;
    pSVar35 = (System_String_o *)(**(code **)(pMVar41->methodPointer + 0x1c8))(pMVar41);
    if (pSVar35 != (System_String_o *)0x0) {
      pSVar35 = System_String__Trim(pSVar35,(MethodInfo *)0x0);
      return (bool_conflict)pSVar35;
    }
  }
  pMStack_198 = (MethodInfo *)ApplicationManagers_Credits_AottgCreditsService__Init;
  uStack_1b8 = il2cpp_runtime_helper_022b2c90();
  pMStack_1b0 = pMVar41;
  pMStack_1a8 = unaff_R12;
  puStack_1a0 = puVar27;
  pMStack_198 = pMVar30;
  if (g_data_057aeae2 == '\0') {
    pIStack_1c0 = (Il2CppClass *)0x44c768d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
    pIStack_1c0 = (Il2CppClass *)0x44c7699;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    pIStack_1c0 = (Il2CppClass *)0x44c76a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchCredits);
    pIStack_1c0 = (Il2CppClass *)0x44c76b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pIStack_1c0 = (Il2CppClass *)0x44c76bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
    pIStack_1c0 = (Il2CppClass *)0x44c76c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
    pIStack_1c0 = (Il2CppClass *)0x44c76d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pIStack_1c0 = (Il2CppClass *)0x44c76e1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
    g_data_057aeae2 = '\x01';
  }
  pIStack_1c0 = (Il2CppClass *)0x44c770b;
  pIVar34 = Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar34;
  pIStack_1c0 = (Il2CppClass *)0x44c772a;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar34);
  lVar17 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  pIStack_1c0 = (Il2CppClass *)0x44c7746;
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
  pIStack_1c0 = (Il2CppClass *)0x44c7760;
  System_Action_AottgCreditsService_UnitKey__object____ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    pIStack_1c0 = (Il2CppClass *)0x44c7778;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar20._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  pIStack_1c0 = (Il2CppClass *)0x44c7794;
  __this_01 = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  pIStack_1c0 = (Il2CppClass *)0x44c77ac;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_01,(System_TimeSpan_o)SVar20._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  pIStack_1c0 = (Il2CppClass *)0x44c77bb;
  __this_02 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
  pIStack_1c0 = (Il2CppClass *)0x44c77d8;
  pSVar43 = fetch;
  pAVar44 = __this_02;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            (__this_02,fetch,(System_Func_DateTimeOffset__o *)0x0,__this_01,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
  if (lVar17 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar17 + 0x20) = __this_02;
    bVar13 = il2cpp_runtime_helper_022b4080(lVar17 + 0x20,__this_02);
    return bVar13;
  }
  pIStack_1c0 = (Il2CppClass *)ApplicationManagers_Credits_AottgCreditsService__GetCredits;
  il2cpp_runtime_helper_022b2c90();
  pAStack_1e0 = (ApplicationManagers_Api_AottgQueryPolicy_o *)__this_02;
  pAStack_1d8 = __this_01;
  pSStack_1d0 = fetch;
  lStack_1c8 = lVar17;
  pIStack_1c0 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeae3 == '\0') {
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c788d;
  pIVar33 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c789a;
  now.fields._8_8_ = pIVar33;
  System_Object___ctor((Il2CppObject *)pIVar33,(MethodInfo *)0x0);
  if (pIVar33 == (Il2CppClass *)0x0) {
label_044c7a30:
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)now.fields._8_8_,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  ppcVar38 = &(pIVar33->_1).name;
  (pIVar33->_1).name = (char *)pAVar44;
  pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar38);
  now.fields._8_8_ = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78f2;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)now.fields._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar33 = "not_initialized";
  if ((char)bVar13 != '\0') {
    pcVar8 = *ppcVar38;
    if (pcVar8 == (char *)0x0) {
      return bVar13;
    }
    if (g_data_057aead4 == '\0') {
      pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7925;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c793b;
    pIVar34 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7948;
    System_Object___ctor(pIVar34,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar34[1].klass = 3;
    pIVar34[1].monitor = (void *)0x0;
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7962;
    il2cpp_runtime_helper_022b4080(&pIVar34[1].monitor,0);
    pIVar34[2].klass = pIVar33;
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7972;
    il2cpp_runtime_helper_022b4080(pIVar34 + 2,pIVar33);
    *(undefined2 *)&pIVar34[2].monitor = 0;
    *(undefined1 *)((long)&pIVar34[2].monitor + 2) = 0;
    bVar13 = (**(code **)(pcVar8 + 0x18))
                       (*(undefined8 *)(pcVar8 + 0x40),pIVar34,*(undefined8 *)(pcVar8 + 0x28));
    return bVar13;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar33 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79e3;
  onResult = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79fd;
  now.fields._8_8_ = onResult;
  System_Action_object____ctor();
  pAStack_1e8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pAStack_1e0;
  SVar20._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar33 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar4;
  pIVar36 = (Il2CppClass *)((ulong)pSVar43 & 0xff);
  pAStack_1e0 = pAStack_1d8;
  pIStack_1f0 = (Il2CppClass *)0x0;
  lVar17 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pIVar36;
  pIVar45 = MethodInfo_Void_Get;
  pAStack_1d8 = (ApplicationManagers_Api_AottgQueryPolicy_o *)unaff_R13;
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    pIStack_1f8 = (Il2CppClass *)0x341a1ae;
    lVar17 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_1f8 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar17);
  pIVar19 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_1f8 = (Il2CppClass *)0x341a1d0;
  __this_03 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar19);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar33;
    pIStack_1f8 = (Il2CppClass *)0x341a1ec;
    pIVar19 = pIVar33;
    pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar4;
    if (onResult == (Il2CppClass *)0x0) goto label_0341a444;
    __this_03 = *(Il2CppClass **)&(pIVar33->_1).byval_arg.bits;
    if (__this_03 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(Il2CppClass **)
            (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_1f8 = (Il2CppClass *)0x341a221;
      pIVar19 = (Il2CppClass *)t2._ticks;
      bVar13 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (__this_03,t2._ticks,&pIStack_1f0);
      if ((char)bVar13 == '\0') {
        lVar17 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x58)
        ;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          pIStack_1f8 = (Il2CppClass *)0x341a242;
          lVar17 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_1f8 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar17);
        pIVar19 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_1f8 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar19);
        __this_03 = *(Il2CppClass **)&(pIVar33->_1).byval_arg.bits;
        pIStack_1f0 = (Il2CppClass *)t2._ticks;
        if (__this_03 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar19 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_1f8 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_03,pIVar19,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (Il2CppClass *)(pIVar33->_1).namespaze;
      if (now.fields._8_8_ != (Il2CppClass *)0x0) {
        pIVar19 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_03 = ((now.fields._8_8_)->_1).element_class;
        pIStack_1f8 = (Il2CppClass *)0x341a2ad;
        auVar47 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)pSVar43 == '\0') {
          now.fields._8_8_ = (Il2CppClass *)(auVar47._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo **)
                   (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_1f8 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar47._0_8_;
          pIVar19 = pIStack_1f0;
          __this_03 = pIVar33;
          pIVar45 = onResult;
          uVar14 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar33,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_1f0,now
                              ,(System_Action_AottgQueryResult_TValue___o *)onResult,
                              (MethodInfo_331A460 *)in_R9);
          pIVar18 = (Il2CppClass *)(ulong)uVar14;
          if ((char)uVar14 != '\0') goto label_0341a444;
        }
        if (pIStack_1f0 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_1f0->_1).this_arg.bits == '\0') {
            pIStack_1f8 = (Il2CppClass *)0x341a327;
            pIVar19 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIStack_1f8 = (Il2CppClass *)0x341a30e;
            pIVar19 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_1f0->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          __this_03 = (onResult->_1).element_class;
          pIStack_1f8 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult->_1).namespaze)(__this_03,pIVar19,*(undefined8 *)&(onResult->_1).byval_arg.bits)
          ;
          if ((pIStack_1f0 != (Il2CppClass *)0x0) &&
             (__this_03 = (Il2CppClass *)(pIStack_1f0->_1).name, __this_03 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(Il2CppClass **)
                  (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_03->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar8 = (__this_03->_1).name;
            if (pcVar8 != (char *)0x0) {
              uVar14 = *(uint *)&(__this_03->_1).namespaze;
              pIVar19 = onResult;
              if (uVar14 < *(uint *)(pcVar8 + 0x18)) {
                now.fields._8_8_ = (Il2CppClass *)(ulong)(uVar14 + 1);
                *(uint *)&(__this_03->_1).namespaze = uVar14 + 1;
                __this_03 = (Il2CppClass *)(pcVar8 + (long)(int)uVar14 * 8 + 0x20);
                *(Il2CppClass **)(pcVar8 + (long)(int)uVar14 * 8 + 0x20) = onResult;
                pIStack_1f8 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pIVar18 = pIStack_1f0;
              }
              else {
                pIStack_1f8 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
                pIVar18 = pIStack_1f0;
              }
              pIStack_1f0 = pIVar18;
              if (pIVar18 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIVar18->_1).this_arg.bits + 2) != '\0') {
label_0341a444:
                  return (bool_conflict)pIVar18;
                }
                *(undefined1 *)((long)&(pIVar18->_1).this_arg.bits + 2) = 1;
                pcVar8 = (pIVar33->_1).name;
                uVar3 = *(undefined1 *)&(__this->_1).namespaze;
                onResult = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar3);
                lVar17 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xe8);
                if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                  pIStack_1f8 = (Il2CppClass *)0x341a3fe;
                  lVar17 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_1f8 = (Il2CppClass *)0x341a406;
                pIVar33 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar17);
                now.fields._8_8_ =
                     *(Il2CppClass **)
                      (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_1f8 = (Il2CppClass *)0x341a42d;
                pIVar19 = __this;
                __this_03 = pIVar33;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar8 != (char *)0x0) {
                  pIStack_1f8 = (Il2CppClass *)0x341a444;
                  pIVar18 = (Il2CppClass *)
                            (**(code **)(pcVar8 + 0x18))
                                      (*(undefined8 *)(pcVar8 + 0x40),uVar3,pIVar33,
                                       *(undefined8 *)(pcVar8 + 0x28));
                  goto label_0341a444;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pIStack_1f8 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_208 = (Il2CppClass *)SVar20._ticks;
  pIVar18 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar40._ticks = (int64_t)pIVar19;
  plVar25 = (long *)__this_03;
  pMStack_230 = in_R9;
  pIStack_228 = pIVar45;
  pIStack_220 = __this;
  pIStack_218 = onResult;
  pIStack_210 = pIVar36;
  pIStack_200 = pIVar33;
  pIStack_1f8 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar25 = &TypeInfo_TimeSpan;
    pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_248 = '\0';
  uStack_247 = 0;
  uStack_240 = 0;
  if (pIVar19 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar19->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar19->_1).this_arg.bits + 1) == '\0') {
        return 0;
      }
      pvVar5 = (__this_03->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        cStack_248 = *(char *)((long)pvVar5 + 0x18);
        uStack_240 = *(undefined8 *)((long)pvVar5 + 0x20);
        if (cStack_248 == '\0') {
          return 0;
        }
        ppIVar2 = (Il2CppType **)&(pIVar19->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var9 = *(unkuint10 *)ppIVar2;
        SVar20._ticks = (int64_t)*(ushort *)&(pIVar19->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a5ed;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var9;
        left_00.fields._8_8_ = pIVar18;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ = (Il2CppClass *)SVar20._ticks;
        plVar25 = (long *)extraout_RDX.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar5 = (__this_03->_1).byval_arg.data;
        SVar40._ticks = (int64_t)pIVar18;
        if (pvVar5 != (void *)0x0) {
          cStack_248 = *(char *)((long)pvVar5 + 0x18);
          uStack_240 = *(undefined8 *)((long)pvVar5 + 0x20);
          pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a61f;
          __this_04.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_04.fields._0_8_ = &cStack_248;
          SVar20._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_04,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar39._ticks = 0;
          t2._ticks = 0;
          pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a649;
          bVar13 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)SVar20._ticks,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return 0;
          }
          plVar25 = (pIVar19->_1).byval_arg.data;
          SVar40._ticks = 1;
          pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a672;
          pAVar21 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar25,1,
                               (MethodInfo_331B520 *)pMStack_230->klass->rgctx_data[0x21].method);
          now.fields._8_8_ = (Il2CppClass *)0x0;
          if (pIStack_228 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a68a;
            (*(code *)(pIStack_228->_1).namespaze)
                      ((pIStack_228->_1).element_class,pAVar21,
                       *(undefined8 *)&(pIStack_228->_1).byval_arg.bits);
            return (bool_conflict)CONCAT71((int7)((ulong)SVar39._ticks >> 8),1);
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar19->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var9 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (Il2CppClass *)(ulong)*(ushort *)&(pIVar19->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var9;
      left.fields._8_8_ = pIVar18;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar40._ticks = (int64_t)pIVar18;
      plVar25 = (long *)extraout_RDX.fields._dateData;
      SVar20._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar5 = (__this_03->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar5 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a54d;
        SVar40._ticks = t2._ticks;
        plVar25 = (long *)SVar20._ticks;
        bVar13 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar20._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_0341a589;
        plVar25 = (long *)(pIVar19->_1).namespaze;
        SVar40._ticks = 1;
        pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a576;
        pAVar21 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar25,1,
                             (MethodInfo_331B380 *)pMStack_230->klass->rgctx_data[0x20].method);
        SVar39._ticks = t2._ticks;
        if (pIStack_228 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (Il2CppClass *)0x0;
      }
    }
  }
  pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_268 = pIVar19;
  pIStack_260 = (Il2CppClass *)SVar20._ticks;
  SStack_258 = extraout_RDX.fields._dateData;
  pAStack_250 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pSStack_278 = (System_Object_array *)0x0;
  pSVar31 = *(System_Object_array **)&(((Il2CppClass *)plVar25)->_1).byval_arg.bits;
  if (pSVar31 != (System_Object_array *)0x0) {
    uVar14 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pSVar31,SVar40._ticks & 0xff,&pSStack_278);
    if ((char)uVar14 == '\0') {
      return uVar14;
    }
    if ((pSStack_278 != (System_Object_array *)0x0) &&
       (((*(undefined1 *)((long)pSStack_278->m_Items + 0x1a) = 0, pAVar22 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pSVar31 = "unknown_error",
         pAVar22 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             ((System_String_o *)"unknown_error",
                              *(MethodInfo_331AB10 **)
                               (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar22 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) &&
        (pSVar31 = pSStack_278, pSStack_278 != (System_Object_array *)0x0)))) {
      if ((char)(pAVar22->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(pSStack_278->m_Items + 3) == '\0') {
label_0341a96a:
          *(undefined2 *)(pSStack_278->m_Items + 3) = 0x100;
          pSStack_278->max_length = 0;
          pSStack_278->m_Items[0] = (Il2CppObject *)(pAVar22->fields)._Error_k__BackingField;
          pSVar31 = (System_Object_array *)pSStack_278->m_Items;
          il2cpp_runtime_helper_022b4080();
          pSVar23 = pSStack_278;
          pcVar8 = (((Il2CppClass *)plVar25)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar31 = *(System_Object_array **)(pcVar8 + 0x40);
            Var48 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar23 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar23->m_Items + 1) = Var48;
              *(undefined4 *)((long)pSVar23->m_Items + 0x12) = uStack_26e;
              *(undefined2 *)((long)pSVar23->m_Items + 0x16) = uStack_26a;
              pSVar31 = (System_Object_array *)(pAVar22->fields)._Error_k__BackingField;
              pAVar21 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                  ((System_String_o *)pSVar31,0,
                                   *(MethodInfo_331B520 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108))
              ;
joined_r0x0341a95f:
              if (((pSStack_278 != (System_Object_array *)0x0) &&
                  (pSVar31 = ((System_Collections_Generic_List_object__Fields *)&pSStack_278->bounds)->_items,
                  pSVar31 != (System_Object_array *)0x0)) &&
                 ((pSVar23 = System_Collections_Generic_List_object___ToArray
                                       ((System_Collections_Generic_List_object__o *)pSVar31,
                                        *(MethodInfo_362E340 **)
                                         (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) +
                                         0x148)), pSStack_278 != (System_Object_array *)0x0 &&
                  (pSVar6 = ((System_Collections_Generic_List_object__Fields *)&pSStack_278->bounds)->_items,
                  pSVar6 != (System_Object_array *)0x0)))) {
                piVar1 = (int *)((long)&pSVar6->max_length + 4);
                *piVar1 = *piVar1 + 1;
                length = (int32_t)pSVar6->max_length;
                *(undefined4 *)&pSVar6->max_length = 0;
                if (0 < length) {
                  pSVar31 = (System_Object_array *)pSVar6->bounds;
                  System_Array__Clear((System_Array_o *)pSVar31,0,length,(MethodInfo *)0x0);
                }
                if (pSVar23 != (System_Object_array *)0x0) {
                  uVar14 = (uint)pSVar23->max_length;
                  if ((int)uVar14 < 1) {
                    return uVar14;
                  }
                  uVar37 = 0;
                  if ((pSVar23->max_length & 0xffffffff) != 0) {
                    do {
                      pIVar34 = pSVar23->m_Items[uVar37];
                      if (pIVar34 != (Il2CppObject *)0x0) {
                        if (pIVar34 == (Il2CppObject *)0x0) goto label_0341a9ed;
                        pSVar31 = (System_Object_array *)pIVar34[4].klass;
                        (*pIVar34[1].monitor)(pSVar31,pAVar21,pIVar34[2].monitor);
                      }
                      uVar37 = uVar37 + 1;
                      uVar14 = (uint)pSVar23->max_length;
                      if ((long)(int)uVar14 <= (long)uVar37) {
                        return uVar14;
                      }
                    } while (uVar37 < uVar14);
                  }
                  goto label_0341a9f2;
                }
              }
            }
          }
        }
        else {
          pvVar5 = (((Il2CppClass *)plVar25)->_1).byval_arg.data;
          if (pvVar5 != (void *)0x0) {
            if (*(char *)((long)pvVar5 + 0x28) == '\0') goto label_0341a96a;
            pSStack_278->m_Items[0] = (Il2CppObject *)(pAVar22->fields)._Error_k__BackingField;
            pSVar31 = (System_Object_array *)pSStack_278->m_Items;
            il2cpp_runtime_helper_022b4080();
            if (pSStack_278 != (System_Object_array *)0x0) {
              pSVar31 = (System_Object_array *)pSStack_278->max_length;
              pAVar21 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  ((Il2CppObject *)pSVar31,(pAVar22->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
              ;
              goto joined_r0x0341a95f;
            }
          }
        }
      }
      else {
        *(undefined2 *)(pSStack_278->m_Items + 3) = 1;
        pSStack_278->max_length = (il2cpp_array_size_t)(pAVar22->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(&pSStack_278->max_length);
        pSVar31 = (System_Object_array *)0x0;
        if (pSStack_278 != (System_Object_array *)0x0) {
          pSStack_278->m_Items[0] = (Il2CppObject *)0x0;
          pSVar31 = (System_Object_array *)pSStack_278->m_Items;
          il2cpp_runtime_helper_022b4080(pSVar31,0);
          pSVar23 = pSStack_278;
          pcVar8 = (((Il2CppClass *)plVar25)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar31 = *(System_Object_array **)(pcVar8 + 0x40);
            Var48 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar23 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar23->m_Items + 1) = Var48;
              *(undefined2 *)((long)pSVar23->m_Items + 0x16) = uStack_26a;
              *(undefined4 *)((long)pSVar23->m_Items + 0x12) = uStack_26e;
              if (pSStack_278 != (System_Object_array *)0x0) {
                pSVar31 = (System_Object_array *)pSStack_278->max_length;
                pAVar21 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                    ((Il2CppObject *)pSVar31,0,
                                     *(MethodInfo_331B380 **)
                                      (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100
                                      ));
                goto joined_r0x0341a95f;
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  uVar24 = il2cpp_runtime_helper_022b2ca0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)uVar24 >> 8),
                  *(undefined1 *)&((System_Collections_Generic_List_object__Fields *)&pSVar31->bounds)->_items
                 );
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadGroups
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditGroup_array** groups, const MethodInfo* method);
// 0x44c7060

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups
          (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Credits_AottgCreditGroup_array **groups,
          MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  undefined1 uVar3;
  byte bVar4;
  int32_t length;
  void *pvVar5;
  System_Object_array *pSVar6;
  char *pcVar7;
  unkuint10 Var8;
  ApplicationManagers_Credits_AottgCreditContributor_array *contributors;
  System_String_o *title;
  char cVar9;
  uint uVar10;
  undefined4 uVar11;
  int iVar12;
  bool_conflict bVar13;
  bool_conflict bVar14;
  bool_conflict extraout_EAX;
  long lVar15;
  Il2CppClass *__this;
  Il2CppClass *pIVar16;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar17;
  System_TimeSpan_Fields SVar18;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar19;
  System_TimeSpan_o t1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar20;
  System_Object_array *pSVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  SimpleJSONFixed_JSONNode_o *pSVar24;
  SimpleJSONFixed_JSONNode_o *pSVar25;
  ApplicationManagers_Credits_AottgCreditGroup_array *pAVar26;
  long *plVar27;
  Il2CppObject *pIVar28;
  SimpleJSONFixed_JSONNode_o *pSVar29;
  System_String_o *pSVar30;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_01;
  Il2CppClass *pIVar31;
  Il2CppClass *onResult;
  ApplicationManagers_Credits_AottgCreditGroup_array *in_RCX;
  Il2CppClass *pIVar32;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ulong uVar33;
  char **ppcVar34;
  System_TimeSpan_Fields SVar35;
  ApplicationManagers_Credits_AottgCreditGroup_array *pAVar36;
  System_TimeSpan_Fields SVar37;
  MethodInfo *method_03;
  Il2CppClass *__this_02;
  System_Object_array *__this_03;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar38;
  Il2CppClass *pIVar39;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  SimpleJSONFixed_JSONNode_o *unaff_R12;
  undefined8 unaff_R15;
  undefined1 auVar40 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_04;
  unkbyte10 Var41;
  System_Object_array *pSStack_1a8;
  undefined4 uStack_19e;
  undefined2 uStack_19a;
  Il2CppClass *pIStack_198;
  Il2CppClass *pIStack_190;
  System_DateTime_Fields SStack_188;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_180;
  char cStack_178;
  undefined7 uStack_177;
  undefined8 uStack_170;
  MethodInfo *pMStack_160;
  Il2CppClass *pIStack_158;
  Il2CppClass *pIStack_150;
  Il2CppClass *pIStack_148;
  Il2CppClass *pIStack_140;
  Il2CppClass *pIStack_138;
  Il2CppClass *pIStack_130;
  Il2CppClass *pIStack_128;
  Il2CppClass *pIStack_120;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_118;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_110;
  Il2CppClass *pIStack_b0;
  System_Guid_Fields SStack_a8;
  undefined8 uStack_90;
  SimpleJSONFixed_JSONNode_o *pSStack_88;
  ApplicationManagers_Credits_AottgCreditGroup_array *pAStack_80;
  SimpleJSONFixed_JSONNode_o *pSStack_78;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  SimpleJSONFixed_JSONNode_o *pSStack_50;
  SimpleJSONFixed_JSONNode_o *pSStack_48;
  MethodInfo_37EC980 *method_00;
  
  if (g_data_057aeada == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&"groups");
    g_data_057aeada = '\x01';
    method = extraout_RDX_01;
  }
  *groups = (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0;
  pAVar26 = (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0;
  pSVar29 = (SimpleJSONFixed_JSONNode_o *)groups;
  il2cpp_runtime_helper_022b4080(groups,0,method);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar9 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,"groups",(node->klass->vtable)._28_HasKey.method);
    if (cVar9 == '\0') {
      return 0;
    }
    pAVar26 = "groups";
    pSVar29 = node;
    puVar23 = (undefined8 *)
              (*(node->klass->vtable)._7_get_Item.methodPtr)
                        (node,"groups",(node->klass->vtable)._7_get_Item.method);
    if (puVar23 != (undefined8 *)0x0) {
      in_RCX = (ApplicationManagers_Credits_AottgCreditGroup_array *)*puVar23;
      cVar9 = (*(code *)in_RCX->m_Items[0x43])(puVar23,in_RCX->m_Items[0x44]);
      if (cVar9 == '\0') {
        return 0;
      }
      pAVar26 = "groups";
      pSVar29 = node;
      pSVar24 = (SimpleJSONFixed_JSONNode_o *)
                (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,"groups",(node->klass->vtable)._7_get_Item.method);
      if (pSVar24 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        in_RCX = (ApplicationManagers_Credits_AottgCreditGroup_array *)pSVar24->klass;
        pAVar26 = (ApplicationManagers_Credits_AottgCreditGroup_array *)in_RCX->m_Items[0x7e];
        pSVar25 = (SimpleJSONFixed_JSONNode_o *)(*(code *)in_RCX->m_Items[0x7d])();
        pSVar29 = pSVar24;
        if (pSVar25 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          uVar11 = (*(code *)((ApplicationManagers_Credits_AottgCreditGroup_array *)pSVar25->klass)->m_Items
                             [0x39])(pSVar25,((ApplicationManagers_Credits_AottgCreditGroup_array *)
                                             pSVar25->klass)->m_Items[0x3a]);
          in_RCX = (ApplicationManagers_Credits_AottgCreditGroup_array *)&TypeInfo_AottgCreditGroup;
          pAVar26 = (ApplicationManagers_Credits_AottgCreditGroup_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgCreditGroup,uVar11);
          *groups = pAVar26;
          il2cpp_runtime_helper_022b4080(groups,pAVar26);
          iVar12 = (*(code *)((ApplicationManagers_Credits_AottgCreditGroup_array *)pSVar25->klass)->m_Items
                             [0x39])(pSVar25,((ApplicationManagers_Credits_AottgCreditGroup_array *)
                                             pSVar25->klass)->m_Items[0x3a]);
          bVar14 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
          if (iVar12 < 1) {
            return bVar14;
          }
          node = (SimpleJSONFixed_JSONNode_o *)&g_data_00000020;
          pAVar36 = (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0;
          while( true ) {
            pSVar29 = pSVar25;
            auVar40 = (*(code *)((ApplicationManagers_Credits_AottgCreditGroup_array *)pSVar25->klass)->
                                m_Items[0x2d])
                                (pSVar25,(ulong)pAVar36 & 0xffffffff,
                                 ((ApplicationManagers_Credits_AottgCreditGroup_array *)pSVar25->klass)->
                                 m_Items[0x2e]);
            pAVar26 = *groups;
            unaff_R12 = pSVar25;
            if (pAVar26 == (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0) break;
            in_RCX = (ApplicationManagers_Credits_AottgCreditGroup_array *)(ulong)(uint)pAVar26->max_length;
            if (in_RCX <= pAVar36) goto label_044c721e;
            bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
                               (auVar40._0_8_,
                                (ApplicationManagers_Credits_AottgCreditGroup_o **)
                                ((long)pAVar26->m_Items + (long)(node + -2)),auVar40._8_8_);
            if ((char)bVar13 == '\0') {
              return 0;
            }
            pAVar36 = (ApplicationManagers_Credits_AottgCreditGroup_array *)((long)&(pAVar36->obj).klass + 1);
            iVar12 = (*(code *)((ApplicationManagers_Credits_AottgCreditGroup_array *)pSVar25->klass)->m_Items
                               [0x39])(pSVar25,((ApplicationManagers_Credits_AottgCreditGroup_array *)
                                               pSVar25->klass)->m_Items[0x3a]);
            node = (SimpleJSONFixed_JSONNode_o *)&node->monitor;
            if ((long)iVar12 <= (long)pAVar36) {
              return bVar14;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044c721e:
  il2cpp_runtime_helper_022b2ca0();
  pSStack_50 = node;
  pSStack_48 = unaff_R12;
  if (g_data_057aeadb == '\0') {
    pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c7258;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c7264;
    il2cpp_runtime_helper_023445d0(&"title");
    g_data_057aeadb = '\x01';
  }
  pSStack_58 = (System_String_o *)0x0;
  pSStack_60 = (System_String_o *)0x0;
  pAStack_68 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  (pAVar26->obj).klass = (Il2CppClass *)0x0;
  pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c7297;
  il2cpp_runtime_helper_022b4080(pAVar26);
  if (g_data_057aeae0 == '\0') {
    pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c72ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c72cb;
    il2cpp_runtime_helper_02337ed0();
  }
  puVar23 = (undefined8 *)0x0;
  pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c72d9;
  pSVar24 = pSVar29;
  bVar14 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar29,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    return 0;
  }
  if (pSVar29 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c72fd;
    cVar9 = (*(pSVar29->klass->vtable)._17_get_IsObject.methodPtr)
                      (pSVar29,(pSVar29->klass->vtable)._17_get_IsObject.method);
    if (cVar9 != '\0') {
      pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c731c;
      bVar14 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                         (pSVar29,"title",&pSStack_58,(MethodInfo *)in_RCX);
      if ((char)bVar14 != '\0') {
        pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c732d;
        bVar14 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                           (pSVar29,&pSStack_60,method_01);
        if ((char)bVar14 != '\0') {
          pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c733e;
          bVar14 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                             (pSVar29,&pAStack_68,method_02);
          title = pSStack_58;
          pSVar30 = pSStack_60;
          contributors = pAStack_68;
          if ((char)bVar14 != '\0') {
            pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c7360;
            now.fields._8_8_ = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditGroup);
            pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c7374;
            ApplicationManagers_Credits_AottgCreditGroup___ctor
                      ((ApplicationManagers_Credits_AottgCreditGroup_o *)now.fields._8_8_,title,pSVar30,
                       contributors,in_R8);
            (pAVar26->obj).klass = now.fields._8_8_;
            pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c7382;
            il2cpp_runtime_helper_022b4080(pAVar26,now.fields._8_8_);
            return (bool_conflict)CONCAT71((int7)((ulong)now.fields._8_8_ >> 8),1);
          }
        }
      }
    }
    return 0;
  }
  pSStack_78 = (SimpleJSONFixed_JSONNode_o *)0x44c739d;
  il2cpp_runtime_helper_022b2c90();
  uStack_90 = 0;
  pSStack_88 = unaff_R12;
  pAStack_80 = pAVar26;
  pSStack_78 = pSVar29;
  if (g_data_057aeadd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&"accountId");
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aeadd = '\x01';
  }
  pIStack_b0 = (Il2CppClass *)0x0;
  SStack_a8._a = 0;
  SStack_a8._b = 0;
  SStack_a8._c = 0;
  SStack_a8._d = '\0';
  SStack_a8._e = '\0';
  SStack_a8._f = '\0';
  SStack_a8._g = '\0';
  SStack_a8._h = '\0';
  SStack_a8._i = '\0';
  SStack_a8._j = '\0';
  SStack_a8._k = '\0';
  *puVar23 = 0;
  il2cpp_runtime_helper_022b4080(puVar23);
  if (g_data_057aeae0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar29 = pSVar24;
  bVar14 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar24,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 == '\0') {
    return 0;
  }
  if (pSVar24 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar9 = (*(pSVar24->klass->vtable)._17_get_IsObject.methodPtr)
                      (pSVar24,(pSVar24->klass->vtable)._17_get_IsObject.method);
    if (((cVar9 == '\0') ||
        (bVar14 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                            (pSVar24,"name",(System_String_o **)&pIStack_b0,(MethodInfo *)in_RCX),
        (char)bVar14 == '\0')) ||
       (cVar9 = (*(pSVar24->klass->vtable)._28_HasKey.methodPtr)
                          (pSVar24,"accountId",(pSVar24->klass->vtable)._28_HasKey.method), cVar9 == '\0')) {
      return 0;
    }
    pSVar29 = pSVar24;
    plVar27 = (long *)(*(pSVar24->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar24,"accountId",(pSVar24->klass->vtable)._7_get_Item.method);
    if (plVar27 != (long *)0x0) {
      cVar9 = (**(code **)(*plVar27 + 0x228))(plVar27);
      if (cVar9 != '\0') {
        pSVar30 = (System_String_o *)0x0;
label_044c74f2:
        now.fields._8_8_ = pIStack_b0;
        pIVar28 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditContributor);
        System_Object___ctor(pIVar28,(MethodInfo *)0x0);
        pIVar28[1].klass = now.fields._8_8_;
        il2cpp_runtime_helper_022b4080(pIVar28 + 1,now.fields._8_8_);
        pIVar28[1].monitor = pSVar30;
        il2cpp_runtime_helper_022b4080(&pIVar28[1].monitor,pSVar30);
        *puVar23 = pIVar28;
        il2cpp_runtime_helper_022b4080(puVar23,pIVar28);
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar28 >> 8),1);
      }
      pSVar29 = pSVar24;
      plVar27 = (long *)(*(pSVar24->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar24,"accountId",(pSVar24->klass->vtable)._7_get_Item.method);
      if (plVar27 != (long *)0x0) {
        cVar9 = (**(code **)(*plVar27 + 0x208))(plVar27,*(undefined8 *)(*plVar27 + 0x210));
        if (cVar9 == '\0') {
          return 0;
        }
        method_03 = "accountId";
        pSVar29 = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar24->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar24,"accountId",(pSVar24->klass->vtable)._7_get_Item.method);
        pSVar30 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar29,method_03);
        bVar14 = System_String__IsNullOrEmpty(pSVar30,(MethodInfo *)0x0);
        if ((char)bVar14 != '\0') {
          return 0;
        }
        bVar14 = System_Guid__TryParse(pSVar30,(System_Guid_o *)&SStack_a8,(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') {
          return 0;
        }
        goto label_044c74f2;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeadf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeadf = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar14 = SimpleJSONFixed_JSONNode__op_Equality(pSVar29,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar14 != '\0') {
    return 0;
  }
  if (pSVar29 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar9 = (*(pSVar29->klass->vtable)._15_get_IsNull.methodPtr)
                      (pSVar29,(pSVar29->klass->vtable)._15_get_IsNull.method);
    if (cVar9 != '\0') {
      return 0;
    }
    pSVar30 = (System_String_o *)(*(pSVar29->klass->vtable)._9_get_Value.methodPtr)(pSVar29);
    if (pSVar30 != (System_String_o *)0x0) {
      pSVar30 = System_String__Trim(pSVar30,(MethodInfo *)0x0);
      return (bool_conflict)pSVar30;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeae2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
    g_data_057aeae2 = '\x01';
  }
  pIVar28 = Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar28;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar28);
  lVar15 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
  System_Action_AottgCreditsService_UnitKey__object____ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar18._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  __this_00 = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_00,(System_TimeSpan_o)SVar18._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  __this_01 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
  pAVar38 = __this_01;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            (__this_01,fetch,(System_Func_DateTimeOffset__o *)0x0,__this_00,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
  if (lVar15 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar15 + 0x20) = __this_01;
    bVar14 = il2cpp_runtime_helper_022b4080(lVar15 + 0x20,__this_01);
    return bVar14;
  }
  il2cpp_runtime_helper_022b2c90();
  pAStack_110 = (ApplicationManagers_Api_AottgQueryPolicy_o *)__this_01;
  if (g_data_057aeae3 == '\0') {
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c788d;
  pIVar31 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c789a;
  now.fields._8_8_ = pIVar31;
  System_Object___ctor((Il2CppObject *)pIVar31,(MethodInfo *)0x0);
  if (pIVar31 == (Il2CppClass *)0x0) {
label_044c7a30:
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)now.fields._8_8_,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  ppcVar34 = &(pIVar31->_1).name;
  (pIVar31->_1).name = (char *)pAVar38;
  pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar34);
  now.fields._8_8_ = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78f2;
  bVar14 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)now.fields._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar31 = "not_initialized";
  if ((char)bVar14 != '\0') {
    pcVar7 = *ppcVar34;
    if (pcVar7 == (char *)0x0) {
      return bVar14;
    }
    if (g_data_057aead4 == '\0') {
      pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7925;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c793b;
    pIVar28 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7948;
    System_Object___ctor(pIVar28,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar28[1].klass = 3;
    pIVar28[1].monitor = (void *)0x0;
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7962;
    il2cpp_runtime_helper_022b4080(&pIVar28[1].monitor,0);
    pIVar28[2].klass = pIVar31;
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7972;
    il2cpp_runtime_helper_022b4080(pIVar28 + 2,pIVar31);
    *(undefined2 *)&pIVar28[2].monitor = 0;
    *(undefined1 *)((long)&pIVar28[2].monitor + 2) = 0;
    bVar14 = (**(code **)(pcVar7 + 0x18))
                       (*(undefined8 *)(pcVar7 + 0x40),pIVar28,*(undefined8 *)(pcVar7 + 0x28));
    return bVar14;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar31 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79e3;
  onResult = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79fd;
  now.fields._8_8_ = onResult;
  System_Action_object____ctor();
  SVar18._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar31 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar4;
  pIVar32 = (Il2CppClass *)((ulong)fetch & 0xff);
  pAStack_118 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pAStack_110;
  pIStack_120 = (Il2CppClass *)0x0;
  lVar15 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pIVar32;
  pIVar39 = MethodInfo_Void_Get;
  pAStack_110 = __this_00;
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    pIStack_128 = (Il2CppClass *)0x341a1ae;
    lVar15 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_128 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar15);
  pIVar17 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_128 = (Il2CppClass *)0x341a1d0;
  __this_02 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar17);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar31;
    pIStack_128 = (Il2CppClass *)0x341a1ec;
    pIVar17 = pIVar31;
    pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar4;
    if (onResult == (Il2CppClass *)0x0) goto label_0341a444;
    __this_02 = *(Il2CppClass **)&(pIVar31->_1).byval_arg.bits;
    if (__this_02 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(Il2CppClass **)
            (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_128 = (Il2CppClass *)0x341a221;
      pIVar17 = (Il2CppClass *)t2._ticks;
      bVar14 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (__this_02,t2._ticks,&pIStack_120);
      if ((char)bVar14 == '\0') {
        lVar15 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x58)
        ;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          pIStack_128 = (Il2CppClass *)0x341a242;
          lVar15 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_128 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar15);
        pIVar17 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_128 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar17);
        __this_02 = *(Il2CppClass **)&(pIVar31->_1).byval_arg.bits;
        pIStack_120 = (Il2CppClass *)t2._ticks;
        if (__this_02 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar17 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_128 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_02,pIVar17,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (Il2CppClass *)(pIVar31->_1).namespaze;
      if (now.fields._8_8_ != (Il2CppClass *)0x0) {
        pIVar17 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_02 = ((now.fields._8_8_)->_1).element_class;
        pIStack_128 = (Il2CppClass *)0x341a2ad;
        auVar40 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)fetch == '\0') {
          now.fields._8_8_ = (Il2CppClass *)(auVar40._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo **)
                   (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_128 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar40._0_8_;
          pIVar17 = pIStack_120;
          __this_02 = pIVar31;
          pIVar39 = onResult;
          uVar10 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar31,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_120,now
                              ,(System_Action_AottgQueryResult_TValue___o *)onResult,
                              (MethodInfo_331A460 *)in_R9);
          pIVar16 = (Il2CppClass *)(ulong)uVar10;
          if ((char)uVar10 != '\0') goto label_0341a444;
        }
        if (pIStack_120 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_120->_1).this_arg.bits == '\0') {
            pIStack_128 = (Il2CppClass *)0x341a327;
            pIVar17 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIStack_128 = (Il2CppClass *)0x341a30e;
            pIVar17 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_120->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          __this_02 = (onResult->_1).element_class;
          pIStack_128 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult->_1).namespaze)(__this_02,pIVar17,*(undefined8 *)&(onResult->_1).byval_arg.bits)
          ;
          if ((pIStack_120 != (Il2CppClass *)0x0) &&
             (__this_02 = (Il2CppClass *)(pIStack_120->_1).name, __this_02 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(Il2CppClass **)
                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_02->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar7 = (__this_02->_1).name;
            if (pcVar7 != (char *)0x0) {
              uVar10 = *(uint *)&(__this_02->_1).namespaze;
              pIVar17 = onResult;
              if (uVar10 < *(uint *)(pcVar7 + 0x18)) {
                now.fields._8_8_ = (Il2CppClass *)(ulong)(uVar10 + 1);
                *(uint *)&(__this_02->_1).namespaze = uVar10 + 1;
                __this_02 = (Il2CppClass *)(pcVar7 + (long)(int)uVar10 * 8 + 0x20);
                *(Il2CppClass **)(pcVar7 + (long)(int)uVar10 * 8 + 0x20) = onResult;
                pIStack_128 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pIVar16 = pIStack_120;
              }
              else {
                pIStack_128 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
                pIVar16 = pIStack_120;
              }
              pIStack_120 = pIVar16;
              if (pIVar16 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIVar16->_1).this_arg.bits + 2) != '\0') {
label_0341a444:
                  return (bool_conflict)pIVar16;
                }
                *(undefined1 *)((long)&(pIVar16->_1).this_arg.bits + 2) = 1;
                pcVar7 = (pIVar31->_1).name;
                uVar3 = *(undefined1 *)&(__this->_1).namespaze;
                onResult = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar3);
                lVar15 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xe8);
                if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                  pIStack_128 = (Il2CppClass *)0x341a3fe;
                  lVar15 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_128 = (Il2CppClass *)0x341a406;
                pIVar31 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar15);
                now.fields._8_8_ =
                     *(Il2CppClass **)
                      (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_128 = (Il2CppClass *)0x341a42d;
                pIVar17 = __this;
                __this_02 = pIVar31;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar7 != (char *)0x0) {
                  pIStack_128 = (Il2CppClass *)0x341a444;
                  pIVar16 = (Il2CppClass *)
                            (**(code **)(pcVar7 + 0x18))
                                      (*(undefined8 *)(pcVar7 + 0x40),uVar3,pIVar31,
                                       *(undefined8 *)(pcVar7 + 0x28));
                  goto label_0341a444;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pIStack_128 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_138 = (Il2CppClass *)SVar18._ticks;
  pIVar16 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar37._ticks = (int64_t)pIVar17;
  plVar27 = (long *)__this_02;
  pMStack_160 = in_R9;
  pIStack_158 = pIVar39;
  pIStack_150 = __this;
  pIStack_148 = onResult;
  pIStack_140 = pIVar32;
  pIStack_130 = pIVar31;
  pIStack_128 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar27 = &TypeInfo_TimeSpan;
    pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_178 = '\0';
  uStack_177 = 0;
  uStack_170 = 0;
  if (pIVar17 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar17->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar17->_1).this_arg.bits + 1) == '\0') {
        return 0;
      }
      pvVar5 = (__this_02->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        cStack_178 = *(char *)((long)pvVar5 + 0x18);
        uStack_170 = *(undefined8 *)((long)pvVar5 + 0x20);
        if (cStack_178 == '\0') {
          return 0;
        }
        ppIVar2 = (Il2CppType **)&(pIVar17->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var8 = *(unkuint10 *)ppIVar2;
        SVar18._ticks = (int64_t)*(ushort *)&(pIVar17->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a5ed;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var8;
        left_00.fields._8_8_ = pIVar16;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ = (Il2CppClass *)SVar18._ticks;
        plVar27 = (long *)extraout_RDX.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar5 = (__this_02->_1).byval_arg.data;
        SVar37._ticks = (int64_t)pIVar16;
        if (pvVar5 != (void *)0x0) {
          cStack_178 = *(char *)((long)pvVar5 + 0x18);
          uStack_170 = *(undefined8 *)((long)pvVar5 + 0x20);
          pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a61f;
          __this_04.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_04.fields._0_8_ = &cStack_178;
          SVar18._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_04,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar35._ticks = 0;
          t2._ticks = 0;
          pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a649;
          bVar14 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)SVar18._ticks,(MethodInfo *)0x0);
          if ((char)bVar14 == '\0') {
            return 0;
          }
          plVar27 = (pIVar17->_1).byval_arg.data;
          SVar37._ticks = 1;
          pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a672;
          pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar27,1,
                               (MethodInfo_331B520 *)pMStack_160->klass->rgctx_data[0x21].method);
          now.fields._8_8_ = (Il2CppClass *)0x0;
          if (pIStack_158 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a68a;
            (*(code *)(pIStack_158->_1).namespaze)
                      ((pIStack_158->_1).element_class,pAVar19,
                       *(undefined8 *)&(pIStack_158->_1).byval_arg.bits);
            return (bool_conflict)CONCAT71((int7)((ulong)SVar35._ticks >> 8),1);
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar17->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var8 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (Il2CppClass *)(ulong)*(ushort *)&(pIVar17->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var8;
      left.fields._8_8_ = pIVar16;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar37._ticks = (int64_t)pIVar16;
      plVar27 = (long *)extraout_RDX.fields._dateData;
      SVar18._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar5 = (__this_02->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar5 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a54d;
        SVar37._ticks = t2._ticks;
        plVar27 = (long *)SVar18._ticks;
        bVar14 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar18._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar14 == '\0') goto label_0341a589;
        plVar27 = (long *)(pIVar17->_1).namespaze;
        SVar37._ticks = 1;
        pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a576;
        pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar27,1,
                             (MethodInfo_331B380 *)pMStack_160->klass->rgctx_data[0x20].method);
        SVar35._ticks = t2._ticks;
        if (pIStack_158 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (Il2CppClass *)0x0;
      }
    }
  }
  pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_198 = pIVar17;
  pIStack_190 = (Il2CppClass *)SVar18._ticks;
  SStack_188 = extraout_RDX.fields._dateData;
  pAStack_180 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pSStack_1a8 = (System_Object_array *)0x0;
  __this_03 = *(System_Object_array **)&(((Il2CppClass *)plVar27)->_1).byval_arg.bits;
  if (__this_03 != (System_Object_array *)0x0) {
    uVar10 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (__this_03,SVar37._ticks & 0xff,&pSStack_1a8);
    if ((char)uVar10 == '\0') {
      return uVar10;
    }
    if (((pSStack_1a8 != (System_Object_array *)0x0) &&
        ((*(undefined1 *)((long)pSStack_1a8->m_Items + 0x1a) = 0, pAVar20 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (__this_03 = "unknown_error",
         pAVar20 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             ((System_String_o *)"unknown_error",
                              *(MethodInfo_331AB10 **)
                               (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar20 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)))) &&
       (__this_03 = pSStack_1a8, pSStack_1a8 != (System_Object_array *)0x0)) {
      if ((char)(pAVar20->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(pSStack_1a8->m_Items + 3) == '\0') {
label_0341a96a:
          *(undefined2 *)(pSStack_1a8->m_Items + 3) = 0x100;
          pSStack_1a8->max_length = 0;
          pSStack_1a8->m_Items[0] = (Il2CppObject *)(pAVar20->fields)._Error_k__BackingField;
          __this_03 = (System_Object_array *)pSStack_1a8->m_Items;
          il2cpp_runtime_helper_022b4080();
          pSVar21 = pSStack_1a8;
          pcVar7 = (((Il2CppClass *)plVar27)->_1).namespaze;
          if (pcVar7 != (char *)0x0) {
            __this_03 = *(System_Object_array **)(pcVar7 + 0x40);
            Var41 = (**(code **)(pcVar7 + 0x18))();
            if (pSVar21 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar21->m_Items + 1) = Var41;
              *(undefined4 *)((long)pSVar21->m_Items + 0x12) = uStack_19e;
              *(undefined2 *)((long)pSVar21->m_Items + 0x16) = uStack_19a;
              __this_03 = (System_Object_array *)(pAVar20->fields)._Error_k__BackingField;
              pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                  ((System_String_o *)__this_03,0,
                                   *(MethodInfo_331B520 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108))
              ;
joined_r0x0341a95f:
              if ((((pSStack_1a8 != (System_Object_array *)0x0) &&
                   (__this_03 = ((System_Collections_Generic_List_object__Fields *)&pSStack_1a8->bounds)->
                                _items, __this_03 != (System_Object_array *)0x0)) &&
                  (pSVar21 = System_Collections_Generic_List_object___ToArray
                                       ((System_Collections_Generic_List_object__o *)__this_03,
                                        *(MethodInfo_362E340 **)
                                         (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) +
                                         0x148)), pSStack_1a8 != (System_Object_array *)0x0)) &&
                 (pSVar6 = ((System_Collections_Generic_List_object__Fields *)&pSStack_1a8->bounds)->_items,
                 pSVar6 != (System_Object_array *)0x0)) {
                piVar1 = (int *)((long)&pSVar6->max_length + 4);
                *piVar1 = *piVar1 + 1;
                length = (int32_t)pSVar6->max_length;
                *(undefined4 *)&pSVar6->max_length = 0;
                if (0 < length) {
                  __this_03 = (System_Object_array *)pSVar6->bounds;
                  System_Array__Clear((System_Array_o *)__this_03,0,length,(MethodInfo *)0x0);
                }
                if (pSVar21 != (System_Object_array *)0x0) {
                  uVar10 = (uint)pSVar21->max_length;
                  if ((int)uVar10 < 1) {
                    return uVar10;
                  }
                  uVar33 = 0;
                  if ((pSVar21->max_length & 0xffffffff) != 0) {
                    do {
                      pIVar28 = pSVar21->m_Items[uVar33];
                      if (pIVar28 != (Il2CppObject *)0x0) {
                        if (pIVar28 == (Il2CppObject *)0x0) goto label_0341a9ed;
                        __this_03 = (System_Object_array *)pIVar28[4].klass;
                        (*pIVar28[1].monitor)(__this_03,pAVar19,pIVar28[2].monitor);
                      }
                      uVar33 = uVar33 + 1;
                      uVar10 = (uint)pSVar21->max_length;
                      if ((long)(int)uVar10 <= (long)uVar33) {
                        return uVar10;
                      }
                    } while (uVar33 < uVar10);
                  }
                  goto label_0341a9f2;
                }
              }
            }
          }
        }
        else {
          pvVar5 = (((Il2CppClass *)plVar27)->_1).byval_arg.data;
          if (pvVar5 != (void *)0x0) {
            if (*(char *)((long)pvVar5 + 0x28) == '\0') goto label_0341a96a;
            pSStack_1a8->m_Items[0] = (Il2CppObject *)(pAVar20->fields)._Error_k__BackingField;
            __this_03 = (System_Object_array *)pSStack_1a8->m_Items;
            il2cpp_runtime_helper_022b4080();
            if (pSStack_1a8 != (System_Object_array *)0x0) {
              __this_03 = (System_Object_array *)pSStack_1a8->max_length;
              pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  ((Il2CppObject *)__this_03,(pAVar20->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
              ;
              goto joined_r0x0341a95f;
            }
          }
        }
      }
      else {
        *(undefined2 *)(pSStack_1a8->m_Items + 3) = 1;
        pSStack_1a8->max_length = (il2cpp_array_size_t)(pAVar20->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(&pSStack_1a8->max_length);
        __this_03 = (System_Object_array *)0x0;
        if (pSStack_1a8 != (System_Object_array *)0x0) {
          pSStack_1a8->m_Items[0] = (Il2CppObject *)0x0;
          __this_03 = (System_Object_array *)pSStack_1a8->m_Items;
          il2cpp_runtime_helper_022b4080(__this_03,0);
          pSVar21 = pSStack_1a8;
          pcVar7 = (((Il2CppClass *)plVar27)->_1).namespaze;
          if (pcVar7 != (char *)0x0) {
            __this_03 = *(System_Object_array **)(pcVar7 + 0x40);
            Var41 = (**(code **)(pcVar7 + 0x18))();
            if (pSVar21 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar21->m_Items + 1) = Var41;
              *(undefined2 *)((long)pSVar21->m_Items + 0x16) = uStack_19a;
              *(undefined4 *)((long)pSVar21->m_Items + 0x12) = uStack_19e;
              if (pSStack_1a8 != (System_Object_array *)0x0) {
                __this_03 = (System_Object_array *)pSStack_1a8->max_length;
                pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                    ((Il2CppObject *)__this_03,0,
                                     *(MethodInfo_331B380 **)
                                      (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100
                                      ));
                goto joined_r0x0341a95f;
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  uVar22 = il2cpp_runtime_helper_022b2ca0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)uVar22 >> 8),
                  *(undefined1 *)
                   &((System_Collections_Generic_List_object__Fields *)&__this_03->bounds)->_items);
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseGroup
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditGroup_o** group, const MethodInfo* method);
// 0x44c7230

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
          (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Credits_AottgCreditGroup_o **group,
          MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  undefined1 uVar3;
  byte bVar4;
  int32_t length;
  void *pvVar5;
  System_Object_array *pSVar6;
  char *pcVar7;
  unkuint10 Var8;
  ApplicationManagers_Credits_AottgCreditContributor_array *contributors;
  System_String_o *title;
  char cVar9;
  uint uVar10;
  bool_conflict bVar11;
  bool_conflict extraout_EAX;
  long lVar12;
  Il2CppClass *__this;
  Il2CppClass *pIVar13;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar14;
  System_TimeSpan_Fields SVar15;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar16;
  System_TimeSpan_o t1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar17;
  System_Object_array *pSVar18;
  undefined8 uVar19;
  ApplicationManagers_Credits_AottgCreditGroup_o *__this_00;
  long *plVar20;
  Il2CppObject *pIVar21;
  SimpleJSONFixed_JSONNode_o *pSVar22;
  System_String_o *pSVar23;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_01;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_02;
  Il2CppClass *pIVar24;
  Il2CppClass *onResult;
  MethodInfo *in_RCX;
  Il2CppClass *pIVar25;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ulong uVar26;
  char **ppcVar27;
  System_TimeSpan_Fields SVar28;
  System_TimeSpan_Fields SVar29;
  undefined8 *puVar30;
  MethodInfo *method_03;
  Il2CppClass *__this_03;
  System_Object_array *__this_04;
  SimpleJSONFixed_JSONNode_o *a;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar31;
  Il2CppClass *pIVar32;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  undefined1 auVar33 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_05;
  unkbyte10 Var34;
  System_Object_array *pSStack_180;
  undefined4 uStack_176;
  undefined2 uStack_172;
  Il2CppClass *pIStack_170;
  Il2CppClass *pIStack_168;
  System_DateTime_Fields SStack_160;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_158;
  char cStack_150;
  undefined7 uStack_14f;
  undefined8 uStack_148;
  MethodInfo *pMStack_138;
  Il2CppClass *pIStack_130;
  Il2CppClass *pIStack_128;
  Il2CppClass *pIStack_120;
  Il2CppClass *pIStack_118;
  Il2CppClass *pIStack_110;
  Il2CppClass *pIStack_108;
  Il2CppClass *pIStack_100;
  Il2CppClass *pIStack_f8;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_f0;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_e8;
  Il2CppClass *pIStack_88;
  System_Guid_Fields SStack_80;
  undefined8 uStack_68;
  ApplicationManagers_Credits_AottgCreditContributor_array *local_40;
  System_String_o *local_38;
  System_String_o *local_30;
  MethodInfo_37EC980 *method_00;
  
  if (g_data_057aeadb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    il2cpp_runtime_helper_023445d0(&"title");
    g_data_057aeadb = '\x01';
    method = extraout_RDX_01;
  }
  local_30 = (System_String_o *)0x0;
  local_38 = (System_String_o *)0x0;
  local_40 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  *group = (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0;
  il2cpp_runtime_helper_022b4080(group,0,method);
  if (g_data_057aeae0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  puVar30 = (undefined8 *)0x0;
  pSVar22 = node;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return 0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar9 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    if ((((cVar9 != '\0') &&
         (bVar11 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                             (node,"title",&local_30,in_RCX), (char)bVar11 != '\0')) &&
        (bVar11 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription(node,&local_38,method_01)
        , (char)bVar11 != '\0')) &&
       (bVar11 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors(node,&local_40,method_02)
       , title = local_30, pSVar23 = local_38, contributors = local_40, (char)bVar11 != '\0')) {
      __this_00 = (ApplicationManagers_Credits_AottgCreditGroup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditGroup);
      ApplicationManagers_Credits_AottgCreditGroup___ctor(__this_00,title,pSVar23,contributors,in_R8);
      *group = __this_00;
      il2cpp_runtime_helper_022b4080(group,__this_00);
      return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  uStack_68 = 0;
  if (g_data_057aeadd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&"accountId");
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aeadd = '\x01';
  }
  pIStack_88 = (Il2CppClass *)0x0;
  SStack_80._a = 0;
  SStack_80._b = 0;
  SStack_80._c = 0;
  SStack_80._d = '\0';
  SStack_80._e = '\0';
  SStack_80._f = '\0';
  SStack_80._g = '\0';
  SStack_80._h = '\0';
  SStack_80._i = '\0';
  SStack_80._j = '\0';
  SStack_80._k = '\0';
  *puVar30 = 0;
  il2cpp_runtime_helper_022b4080(puVar30);
  if (g_data_057aeae0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  a = pSVar22;
  bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar22,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 == '\0') {
    return 0;
  }
  if (pSVar22 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar9 = (*(pSVar22->klass->vtable)._17_get_IsObject.methodPtr)
                      (pSVar22,(pSVar22->klass->vtable)._17_get_IsObject.method);
    if (((cVar9 == '\0') ||
        (bVar11 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                            (pSVar22,"name",(System_String_o **)&pIStack_88,in_RCX),
        (char)bVar11 == '\0')) ||
       (cVar9 = (*(pSVar22->klass->vtable)._28_HasKey.methodPtr)
                          (pSVar22,"accountId",(pSVar22->klass->vtable)._28_HasKey.method), cVar9 == '\0')) {
      return 0;
    }
    a = pSVar22;
    plVar20 = (long *)(*(pSVar22->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar22,"accountId",(pSVar22->klass->vtable)._7_get_Item.method);
    if (plVar20 != (long *)0x0) {
      cVar9 = (**(code **)(*plVar20 + 0x228))(plVar20);
      if (cVar9 != '\0') {
        pSVar23 = (System_String_o *)0x0;
label_044c74f2:
        now.fields._8_8_ = pIStack_88;
        pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditContributor);
        System_Object___ctor(pIVar21,(MethodInfo *)0x0);
        pIVar21[1].klass = now.fields._8_8_;
        il2cpp_runtime_helper_022b4080(pIVar21 + 1,now.fields._8_8_);
        pIVar21[1].monitor = pSVar23;
        il2cpp_runtime_helper_022b4080(&pIVar21[1].monitor,pSVar23);
        *puVar30 = pIVar21;
        il2cpp_runtime_helper_022b4080(puVar30,pIVar21);
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar21 >> 8),1);
      }
      a = pSVar22;
      plVar20 = (long *)(*(pSVar22->klass->vtable)._7_get_Item.methodPtr)
                                  (pSVar22,"accountId",(pSVar22->klass->vtable)._7_get_Item.method);
      if (plVar20 != (long *)0x0) {
        cVar9 = (**(code **)(*plVar20 + 0x208))(plVar20,*(undefined8 *)(*plVar20 + 0x210));
        if (cVar9 == '\0') {
          return 0;
        }
        method_03 = "accountId";
        pSVar22 = (SimpleJSONFixed_JSONNode_o *)
                  (*(pSVar22->klass->vtable)._7_get_Item.methodPtr)
                            (pSVar22,"accountId",(pSVar22->klass->vtable)._7_get_Item.method);
        pSVar23 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar22,method_03);
        bVar11 = System_String__IsNullOrEmpty(pSVar23,(MethodInfo *)0x0);
        if ((char)bVar11 != '\0') {
          return 0;
        }
        bVar11 = System_Guid__TryParse(pSVar23,(System_Guid_o *)&SStack_80,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          return 0;
        }
        goto label_044c74f2;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeadf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeadf = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return 0;
  }
  if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar9 = (*(a->klass->vtable)._15_get_IsNull.methodPtr)(a,(a->klass->vtable)._15_get_IsNull.method);
    if (cVar9 != '\0') {
      return 0;
    }
    pSVar23 = (System_String_o *)(*(a->klass->vtable)._9_get_Value.methodPtr)(a);
    if (pSVar23 != (System_String_o *)0x0) {
      pSVar23 = System_String__Trim(pSVar23,(MethodInfo *)0x0);
      return (bool_conflict)pSVar23;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeae2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
    g_data_057aeae2 = '\x01';
  }
  pIVar21 = Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar21;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar21);
  lVar12 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
  System_Action_AottgCreditsService_UnitKey__object____ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar15._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  __this_01 = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_01,(System_TimeSpan_o)SVar15._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  __this_02 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
  pAVar31 = __this_02;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            (__this_02,fetch,(System_Func_DateTimeOffset__o *)0x0,__this_01,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
  if (lVar12 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar12 + 0x20) = __this_02;
    bVar11 = il2cpp_runtime_helper_022b4080(lVar12 + 0x20,__this_02);
    return bVar11;
  }
  il2cpp_runtime_helper_022b2c90();
  pAStack_e8 = (ApplicationManagers_Api_AottgQueryPolicy_o *)__this_02;
  if (g_data_057aeae3 == '\0') {
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c788d;
  pIVar24 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c789a;
  now.fields._8_8_ = pIVar24;
  System_Object___ctor((Il2CppObject *)pIVar24,(MethodInfo *)0x0);
  if (pIVar24 == (Il2CppClass *)0x0) {
label_044c7a30:
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)now.fields._8_8_,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  ppcVar27 = &(pIVar24->_1).name;
  (pIVar24->_1).name = (char *)pAVar31;
  pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar27);
  now.fields._8_8_ = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78f2;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)now.fields._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar24 = "not_initialized";
  if ((char)bVar11 != '\0') {
    pcVar7 = *ppcVar27;
    if (pcVar7 == (char *)0x0) {
      return bVar11;
    }
    if (g_data_057aead4 == '\0') {
      pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7925;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c793b;
    pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7948;
    System_Object___ctor(pIVar21,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar21[1].klass = 3;
    pIVar21[1].monitor = (void *)0x0;
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7962;
    il2cpp_runtime_helper_022b4080(&pIVar21[1].monitor,0);
    pIVar21[2].klass = pIVar24;
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7972;
    il2cpp_runtime_helper_022b4080(pIVar21 + 2,pIVar24);
    *(undefined2 *)&pIVar21[2].monitor = 0;
    *(undefined1 *)((long)&pIVar21[2].monitor + 2) = 0;
    bVar11 = (**(code **)(pcVar7 + 0x18))
                       (*(undefined8 *)(pcVar7 + 0x40),pIVar21,*(undefined8 *)(pcVar7 + 0x28));
    return bVar11;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar24 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79e3;
  onResult = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79fd;
  now.fields._8_8_ = onResult;
  System_Action_object____ctor();
  SVar15._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar24 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar4;
  pIVar25 = (Il2CppClass *)((ulong)fetch & 0xff);
  pAStack_f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pAStack_e8;
  pIStack_f8 = (Il2CppClass *)0x0;
  lVar12 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pIVar25;
  pIVar32 = MethodInfo_Void_Get;
  pAStack_e8 = __this_01;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    pIStack_100 = (Il2CppClass *)0x341a1ae;
    lVar12 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_100 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar12);
  pIVar14 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_100 = (Il2CppClass *)0x341a1d0;
  __this_03 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar14);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar24;
    pIStack_100 = (Il2CppClass *)0x341a1ec;
    pIVar14 = pIVar24;
    pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar4;
    if (onResult == (Il2CppClass *)0x0) goto label_0341a444;
    __this_03 = *(Il2CppClass **)&(pIVar24->_1).byval_arg.bits;
    if (__this_03 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(Il2CppClass **)
            (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_100 = (Il2CppClass *)0x341a221;
      pIVar14 = (Il2CppClass *)t2._ticks;
      bVar11 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (__this_03,t2._ticks,&pIStack_f8);
      if ((char)bVar11 == '\0') {
        lVar12 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x58)
        ;
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          pIStack_100 = (Il2CppClass *)0x341a242;
          lVar12 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_100 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar12);
        pIVar14 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_100 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar14);
        __this_03 = *(Il2CppClass **)&(pIVar24->_1).byval_arg.bits;
        pIStack_f8 = (Il2CppClass *)t2._ticks;
        if (__this_03 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar14 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_100 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_03,pIVar14,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (Il2CppClass *)(pIVar24->_1).namespaze;
      if (now.fields._8_8_ != (Il2CppClass *)0x0) {
        pIVar14 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_03 = ((now.fields._8_8_)->_1).element_class;
        pIStack_100 = (Il2CppClass *)0x341a2ad;
        auVar33 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)fetch == '\0') {
          now.fields._8_8_ = (Il2CppClass *)(auVar33._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo **)
                   (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_100 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar33._0_8_;
          pIVar14 = pIStack_f8;
          __this_03 = pIVar24;
          pIVar32 = onResult;
          uVar10 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar24,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_f8,now,
                              (System_Action_AottgQueryResult_TValue___o *)onResult,
                              (MethodInfo_331A460 *)in_R9);
          pIVar13 = (Il2CppClass *)(ulong)uVar10;
          if ((char)uVar10 != '\0') goto label_0341a444;
        }
        if (pIStack_f8 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_f8->_1).this_arg.bits == '\0') {
            pIStack_100 = (Il2CppClass *)0x341a327;
            pIVar14 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIStack_100 = (Il2CppClass *)0x341a30e;
            pIVar14 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_f8->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          __this_03 = (onResult->_1).element_class;
          pIStack_100 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult->_1).namespaze)(__this_03,pIVar14,*(undefined8 *)&(onResult->_1).byval_arg.bits)
          ;
          if ((pIStack_f8 != (Il2CppClass *)0x0) &&
             (__this_03 = (Il2CppClass *)(pIStack_f8->_1).name, __this_03 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(Il2CppClass **)
                  (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_03->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar7 = (__this_03->_1).name;
            if (pcVar7 != (char *)0x0) {
              uVar10 = *(uint *)&(__this_03->_1).namespaze;
              pIVar14 = onResult;
              if (uVar10 < *(uint *)(pcVar7 + 0x18)) {
                now.fields._8_8_ = (Il2CppClass *)(ulong)(uVar10 + 1);
                *(uint *)&(__this_03->_1).namespaze = uVar10 + 1;
                __this_03 = (Il2CppClass *)(pcVar7 + (long)(int)uVar10 * 8 + 0x20);
                *(Il2CppClass **)(pcVar7 + (long)(int)uVar10 * 8 + 0x20) = onResult;
                pIStack_100 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pIVar13 = pIStack_f8;
              }
              else {
                pIStack_100 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
                pIVar13 = pIStack_f8;
              }
              pIStack_f8 = pIVar13;
              if (pIVar13 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIVar13->_1).this_arg.bits + 2) != '\0') {
label_0341a444:
                  return (bool_conflict)pIVar13;
                }
                *(undefined1 *)((long)&(pIVar13->_1).this_arg.bits + 2) = 1;
                pcVar7 = (pIVar24->_1).name;
                uVar3 = *(undefined1 *)&(__this->_1).namespaze;
                onResult = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar3);
                lVar12 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xe8);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  pIStack_100 = (Il2CppClass *)0x341a3fe;
                  lVar12 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_100 = (Il2CppClass *)0x341a406;
                pIVar24 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar12);
                now.fields._8_8_ =
                     *(Il2CppClass **)
                      (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_100 = (Il2CppClass *)0x341a42d;
                pIVar14 = __this;
                __this_03 = pIVar24;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar7 != (char *)0x0) {
                  pIStack_100 = (Il2CppClass *)0x341a444;
                  pIVar13 = (Il2CppClass *)
                            (**(code **)(pcVar7 + 0x18))
                                      (*(undefined8 *)(pcVar7 + 0x40),uVar3,pIVar24,
                                       *(undefined8 *)(pcVar7 + 0x28));
                  goto label_0341a444;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pIStack_100 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_110 = (Il2CppClass *)SVar15._ticks;
  pIVar13 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar29._ticks = (int64_t)pIVar14;
  plVar20 = (long *)__this_03;
  pMStack_138 = in_R9;
  pIStack_130 = pIVar32;
  pIStack_128 = __this;
  pIStack_120 = onResult;
  pIStack_118 = pIVar25;
  pIStack_108 = pIVar24;
  pIStack_100 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar20 = &TypeInfo_TimeSpan;
    pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_150 = '\0';
  uStack_14f = 0;
  uStack_148 = 0;
  if (pIVar14 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar14->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar14->_1).this_arg.bits + 1) == '\0') {
        return 0;
      }
      pvVar5 = (__this_03->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        cStack_150 = *(char *)((long)pvVar5 + 0x18);
        uStack_148 = *(undefined8 *)((long)pvVar5 + 0x20);
        if (cStack_150 == '\0') {
          return 0;
        }
        ppIVar2 = (Il2CppType **)&(pIVar14->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var8 = *(unkuint10 *)ppIVar2;
        SVar15._ticks = (int64_t)*(ushort *)&(pIVar14->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a5ed;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var8;
        left_00.fields._8_8_ = pIVar13;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ = (Il2CppClass *)SVar15._ticks;
        plVar20 = (long *)extraout_RDX.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar5 = (__this_03->_1).byval_arg.data;
        SVar29._ticks = (int64_t)pIVar13;
        if (pvVar5 != (void *)0x0) {
          cStack_150 = *(char *)((long)pvVar5 + 0x18);
          uStack_148 = *(undefined8 *)((long)pvVar5 + 0x20);
          pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a61f;
          __this_05.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_05.fields._0_8_ = &cStack_150;
          SVar15._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_05,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar28._ticks = 0;
          t2._ticks = 0;
          pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a649;
          bVar11 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)SVar15._ticks,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') {
            return 0;
          }
          plVar20 = (pIVar14->_1).byval_arg.data;
          SVar29._ticks = 1;
          pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a672;
          pAVar16 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar20,1,
                               (MethodInfo_331B520 *)pMStack_138->klass->rgctx_data[0x21].method);
          now.fields._8_8_ = (Il2CppClass *)0x0;
          if (pIStack_130 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a68a;
            (*(code *)(pIStack_130->_1).namespaze)
                      ((pIStack_130->_1).element_class,pAVar16,
                       *(undefined8 *)&(pIStack_130->_1).byval_arg.bits);
            return (bool_conflict)CONCAT71((int7)((ulong)SVar28._ticks >> 8),1);
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar14->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var8 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (Il2CppClass *)(ulong)*(ushort *)&(pIVar14->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var8;
      left.fields._8_8_ = pIVar13;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar29._ticks = (int64_t)pIVar13;
      plVar20 = (long *)extraout_RDX.fields._dateData;
      SVar15._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar5 = (__this_03->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar5 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a54d;
        SVar29._ticks = t2._ticks;
        plVar20 = (long *)SVar15._ticks;
        bVar11 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar15._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') goto label_0341a589;
        plVar20 = (long *)(pIVar14->_1).namespaze;
        SVar29._ticks = 1;
        pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a576;
        pAVar16 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar20,1,
                             (MethodInfo_331B380 *)pMStack_138->klass->rgctx_data[0x20].method);
        SVar28._ticks = t2._ticks;
        if (pIStack_130 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (Il2CppClass *)0x0;
      }
    }
  }
  pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_170 = pIVar14;
  pIStack_168 = (Il2CppClass *)SVar15._ticks;
  SStack_160 = extraout_RDX.fields._dateData;
  pAStack_158 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pSStack_180 = (System_Object_array *)0x0;
  __this_04 = *(System_Object_array **)&(((Il2CppClass *)plVar20)->_1).byval_arg.bits;
  if (__this_04 != (System_Object_array *)0x0) {
    uVar10 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (__this_04,SVar29._ticks & 0xff,&pSStack_180);
    if ((char)uVar10 == '\0') {
      return uVar10;
    }
    if ((pSStack_180 != (System_Object_array *)0x0) &&
       (((*(undefined1 *)((long)pSStack_180->m_Items + 0x1a) = 0, pAVar17 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (__this_04 = "unknown_error",
         pAVar17 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             ((System_String_o *)"unknown_error",
                              *(MethodInfo_331AB10 **)
                               (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar17 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) &&
        (__this_04 = pSStack_180, pSStack_180 != (System_Object_array *)0x0)))) {
      if ((char)(pAVar17->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(pSStack_180->m_Items + 3) == '\0') {
label_0341a96a:
          *(undefined2 *)(pSStack_180->m_Items + 3) = 0x100;
          pSStack_180->max_length = 0;
          pSStack_180->m_Items[0] = (Il2CppObject *)(pAVar17->fields)._Error_k__BackingField;
          __this_04 = (System_Object_array *)pSStack_180->m_Items;
          il2cpp_runtime_helper_022b4080();
          pSVar18 = pSStack_180;
          pcVar7 = (((Il2CppClass *)plVar20)->_1).namespaze;
          if (pcVar7 != (char *)0x0) {
            __this_04 = *(System_Object_array **)(pcVar7 + 0x40);
            Var34 = (**(code **)(pcVar7 + 0x18))();
            if (pSVar18 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar18->m_Items + 1) = Var34;
              *(undefined4 *)((long)pSVar18->m_Items + 0x12) = uStack_176;
              *(undefined2 *)((long)pSVar18->m_Items + 0x16) = uStack_172;
              __this_04 = (System_Object_array *)(pAVar17->fields)._Error_k__BackingField;
              pAVar16 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                  ((System_String_o *)__this_04,0,
                                   *(MethodInfo_331B520 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108))
              ;
joined_r0x0341a95f:
              if (((pSStack_180 != (System_Object_array *)0x0) &&
                  (__this_04 = ((System_Collections_Generic_List_object__Fields *)&pSStack_180->bounds)->
                               _items, __this_04 != (System_Object_array *)0x0)) &&
                 ((pSVar18 = System_Collections_Generic_List_object___ToArray
                                       ((System_Collections_Generic_List_object__o *)__this_04,
                                        *(MethodInfo_362E340 **)
                                         (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) +
                                         0x148)), pSStack_180 != (System_Object_array *)0x0 &&
                  (pSVar6 = ((System_Collections_Generic_List_object__Fields *)&pSStack_180->bounds)->_items,
                  pSVar6 != (System_Object_array *)0x0)))) {
                piVar1 = (int *)((long)&pSVar6->max_length + 4);
                *piVar1 = *piVar1 + 1;
                length = (int32_t)pSVar6->max_length;
                *(undefined4 *)&pSVar6->max_length = 0;
                if (0 < length) {
                  __this_04 = (System_Object_array *)pSVar6->bounds;
                  System_Array__Clear((System_Array_o *)__this_04,0,length,(MethodInfo *)0x0);
                }
                if (pSVar18 != (System_Object_array *)0x0) {
                  uVar10 = (uint)pSVar18->max_length;
                  if ((int)uVar10 < 1) {
                    return uVar10;
                  }
                  uVar26 = 0;
                  if ((pSVar18->max_length & 0xffffffff) != 0) {
                    do {
                      pIVar21 = pSVar18->m_Items[uVar26];
                      if (pIVar21 != (Il2CppObject *)0x0) {
                        if (pIVar21 == (Il2CppObject *)0x0) goto label_0341a9ed;
                        __this_04 = (System_Object_array *)pIVar21[4].klass;
                        (*pIVar21[1].monitor)(__this_04,pAVar16,pIVar21[2].monitor);
                      }
                      uVar26 = uVar26 + 1;
                      uVar10 = (uint)pSVar18->max_length;
                      if ((long)(int)uVar10 <= (long)uVar26) {
                        return uVar10;
                      }
                    } while (uVar26 < uVar10);
                  }
                  goto label_0341a9f2;
                }
              }
            }
          }
        }
        else {
          pvVar5 = (((Il2CppClass *)plVar20)->_1).byval_arg.data;
          if (pvVar5 != (void *)0x0) {
            if (*(char *)((long)pvVar5 + 0x28) == '\0') goto label_0341a96a;
            pSStack_180->m_Items[0] = (Il2CppObject *)(pAVar17->fields)._Error_k__BackingField;
            __this_04 = (System_Object_array *)pSStack_180->m_Items;
            il2cpp_runtime_helper_022b4080();
            if (pSStack_180 != (System_Object_array *)0x0) {
              __this_04 = (System_Object_array *)pSStack_180->max_length;
              pAVar16 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  ((Il2CppObject *)__this_04,(pAVar17->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
              ;
              goto joined_r0x0341a95f;
            }
          }
        }
      }
      else {
        *(undefined2 *)(pSStack_180->m_Items + 3) = 1;
        pSStack_180->max_length = (il2cpp_array_size_t)(pAVar17->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(&pSStack_180->max_length);
        __this_04 = (System_Object_array *)0x0;
        if (pSStack_180 != (System_Object_array *)0x0) {
          pSStack_180->m_Items[0] = (Il2CppObject *)0x0;
          __this_04 = (System_Object_array *)pSStack_180->m_Items;
          il2cpp_runtime_helper_022b4080(__this_04,0);
          pSVar18 = pSStack_180;
          pcVar7 = (((Il2CppClass *)plVar20)->_1).namespaze;
          if (pcVar7 != (char *)0x0) {
            __this_04 = *(System_Object_array **)(pcVar7 + 0x40);
            Var34 = (**(code **)(pcVar7 + 0x18))();
            if (pSVar18 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar18->m_Items + 1) = Var34;
              *(undefined2 *)((long)pSVar18->m_Items + 0x16) = uStack_172;
              *(undefined4 *)((long)pSVar18->m_Items + 0x12) = uStack_176;
              if (pSStack_180 != (System_Object_array *)0x0) {
                __this_04 = (System_Object_array *)pSStack_180->max_length;
                pAVar16 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                    ((Il2CppObject *)__this_04,0,
                                     *(MethodInfo_331B380 **)
                                      (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100
                                      ));
                goto joined_r0x0341a95f;
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  uVar19 = il2cpp_runtime_helper_022b2ca0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)uVar19 >> 8),
                  *(undefined1 *)
                   &((System_Collections_Generic_List_object__Fields *)&__this_04->bounds)->_items);
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadContributors
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditContributor_array** contributors, const MethodInfo* method);
// 0x44c6dd0

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
          (SimpleJSONFixed_JSONNode_o *node,
          ApplicationManagers_Credits_AottgCreditContributor_array **contributors,MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  int32_t *piVar3;
  undefined1 uVar4;
  byte bVar5;
  int32_t length;
  void *pvVar6;
  System_Object_array *pSVar7;
  char *pcVar8;
  unkuint10 Var9;
  System_String_o *title;
  char cVar10;
  uint uVar11;
  int iVar12;
  bool_conflict bVar13;
  undefined4 uVar14;
  bool_conflict extraout_EAX;
  long lVar15;
  Il2CppClass *__this;
  Il2CppClass *pIVar16;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar17;
  System_TimeSpan_Fields SVar18;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar19;
  System_TimeSpan_o t1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar20;
  System_Object_array *pSVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  MethodInfo *pMVar24;
  MethodInfo *pMVar25;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAVar26;
  Il2CppMethodPointer pIVar27;
  ApplicationManagers_Credits_AottgCreditGroup_o *__this_00;
  long *plVar28;
  Il2CppObject *pIVar29;
  SimpleJSONFixed_JSONNode_o *node_00;
  System_String_o *pSVar30;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_01;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_02;
  Il2CppClass *pIVar31;
  Il2CppClass *onResult;
  SimpleJSONFixed_JSONNode_c *in_RCX;
  Il2CppClass *pIVar32;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ulong uVar33;
  MethodInfo *node_01;
  MethodInfo **ppMVar34;
  char **ppcVar35;
  System_TimeSpan_Fields SVar36;
  SimpleJSONFixed_JSONNode_c **unaff_RBP;
  System_TimeSpan_Fields SVar37;
  MethodInfo *pMVar38;
  MethodInfo *pMVar39;
  SimpleJSONFixed_JSONNode_c *pSVar40;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSVar41;
  Il2CppClass *__this_03;
  System_Object_array *pSVar42;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar43;
  Il2CppClass *pIVar44;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  MethodInfo *unaff_R12;
  SimpleJSONFixed_JSONNode_c **unaff_R13;
  MethodInfo *unaff_R15;
  undefined1 auVar45 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_04;
  unkbyte10 Var46;
  System_Object_array *pSStack_1e0;
  undefined4 uStack_1d6;
  undefined2 uStack_1d2;
  Il2CppClass *pIStack_1d0;
  Il2CppClass *pIStack_1c8;
  System_DateTime_Fields SStack_1c0;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_1b8;
  char cStack_1b0;
  undefined7 uStack_1af;
  undefined8 uStack_1a8;
  MethodInfo *pMStack_198;
  Il2CppClass *pIStack_190;
  Il2CppClass *pIStack_188;
  Il2CppClass *pIStack_180;
  Il2CppClass *pIStack_178;
  Il2CppClass *pIStack_170;
  Il2CppClass *pIStack_168;
  Il2CppClass *pIStack_160;
  Il2CppClass *pIStack_158;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_150;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_148;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_140;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSStack_138;
  long lStack_130;
  SimpleJSONFixed_JSONNode_c *pSStack_128;
  undefined8 uStack_120;
  MethodInfo *pMStack_118;
  MethodInfo *pMStack_110;
  undefined8 *puStack_108;
  MethodInfo *pMStack_100;
  MethodInfo **ppMStack_f8;
  Il2CppClass *pIStack_e8;
  System_Guid_Fields SStack_e0;
  undefined8 uStack_c8;
  MethodInfo *pMStack_c0;
  SimpleJSONFixed_JSONNode_c *pSStack_b8;
  MethodInfo *pMStack_b0;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAStack_a0;
  System_String_o *pSStack_98;
  System_String_o *pSStack_90;
  MethodInfo *pMStack_88;
  MethodInfo *pMStack_80;
  SimpleJSONFixed_JSONNode_c **ppSStack_78;
  MethodInfo *pMStack_70;
  MethodInfo *pMStack_68;
  System_Collections_Generic_List_object__o *pSStack_60;
  MethodInfo *pMStack_58;
  ApplicationManagers_Credits_AottgCreditContributor_array **ppAStack_50;
  MethodInfo *pMStack_48;
  SimpleJSONFixed_JSONNode_c *pSStack_40;
  MethodInfo *local_38;
  MethodInfo_37EC980 *method_00;
  
  pMVar39 = (MethodInfo *)&stack0xffffffffffffffc8;
  if (g_data_057aeadc == '\0') {
    pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6df6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6e02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditContributor_ToArray);
    pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6e0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
    pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6e1a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgCreditContributor);
    pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6e26;
    il2cpp_runtime_helper_023445d0(&"contributors");
    g_data_057aeadc = '\x01';
    method = extraout_RDX_01;
  }
  local_38 = (MethodInfo *)0x0;
  *contributors = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  pMVar38 = (MethodInfo *)0x0;
  pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6e46;
  node_01 = (MethodInfo *)contributors;
  il2cpp_runtime_helper_022b4080(contributors,0,method);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6e6d;
    cVar10 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                       (node,"contributors",(node->klass->vtable)._28_HasKey.method);
    if (cVar10 == '\0') {
      return 0;
    }
    pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6e8c;
    pMVar38 = "contributors";
    node_01 = (MethodInfo *)node;
    puVar23 = (undefined8 *)
              (*(node->klass->vtable)._7_get_Item.methodPtr)
                        (node,"contributors",(node->klass->vtable)._7_get_Item.method);
    unaff_RBP = (SimpleJSONFixed_JSONNode_c **)&"contributors";
    if (puVar23 != (undefined8 *)0x0) {
      in_RCX = (SimpleJSONFixed_JSONNode_c *)*puVar23;
      pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6ea8;
      cVar10 = (*(in_RCX->vtable)._16_get_IsArray.methodPtr)(puVar23,(in_RCX->vtable)._16_get_IsArray.method);
      if (cVar10 == '\0') {
        return 0;
      }
      pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6ec7;
      pMVar38 = "contributors";
      node_01 = (MethodInfo *)node;
      pMVar24 = (MethodInfo *)
                (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,"contributors",(node->klass->vtable)._7_get_Item.method);
      if (pMVar24 != (MethodInfo *)0x0) {
        in_RCX = (SimpleJSONFixed_JSONNode_c *)pMVar24->methodPointer;
        pMVar38 = (in_RCX->vtable)._45_get_AsArray.method;
        pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6ee3;
        pMVar25 = (MethodInfo *)(*(in_RCX->vtable)._45_get_AsArray.methodPtr)();
        node_01 = pMVar24;
        if (pMVar25 != (MethodInfo *)0x0) {
          pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6f02;
          uVar11 = (**(code **)(pMVar25->methodPointer + 0x1e8))
                             (pMVar25,*(undefined8 *)(pMVar25->methodPointer + 0x1f0));
          unaff_RBP = (SimpleJSONFixed_JSONNode_c **)(ulong)uVar11;
          pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6f13;
          node = (SimpleJSONFixed_JSONNode_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgCreditContributor);
          pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6f2a;
          System_Collections_Generic_List_object____ctor_362b930
                    ((System_Collections_Generic_List_object__o *)node,uVar11,MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
          pMVar38 = *(MethodInfo **)(pMVar25->methodPointer + 0x1f0);
          pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6f3d;
          node_01 = pMVar25;
          iVar12 = (**(code **)(pMVar25->methodPointer + 0x1e8))();
          unaff_R15 = pMVar25;
          if (iVar12 < 1) {
            if ((System_Collections_Generic_List_object__o *)node !=
                (System_Collections_Generic_List_object__o *)0x0) goto label_044c7009;
          }
          else {
            if ((System_Collections_Generic_List_object__o *)node !=
                (System_Collections_Generic_List_object__o *)0x0) {
              unaff_RBP = (SimpleJSONFixed_JSONNode_c **)0x0;
              unaff_R13 = &MethodInfo_Void_Add;
              do {
                pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6fa6;
                auVar45 = (**(code **)(pMVar25->methodPointer + 0x188))
                                    (pMVar25,unaff_RBP,*(undefined8 *)(pMVar25->methodPointer + 400));
                node_01 = auVar45._0_8_;
                pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6fb1;
                bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                                   ((SimpleJSONFixed_JSONNode_o *)node_01,
                                    (ApplicationManagers_Credits_AottgCreditContributor_o **)
                                    &stack0xffffffffffffffc8,auVar45._8_8_);
                in_RCX = MethodInfo_Void_Add;
                if ((char)bVar13 == '\0') {
                  return 0;
                }
                piVar3 = &(((System_Collections_Generic_List_object__o *)node)->fields)._version;
                *piVar3 = *piVar3 + 1;
                pSVar42 = (((System_Collections_Generic_List_object__o *)node)->fields)._items;
                pMVar38 = local_38;
                unaff_R12 = (MethodInfo *)&stack0xffffffffffffffc8;
                if (pSVar42 == (System_Object_array *)0x0) goto label_044c7053;
                uVar11 = (((System_Collections_Generic_List_object__o *)node)->fields)._size;
                if (uVar11 < (uint)pSVar42->max_length) {
                  (((System_Collections_Generic_List_object__o *)node)->fields)._size = uVar11 + 1;
                  pSVar42->m_Items[(int)uVar11] = (Il2CppObject *)local_38;
                  pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6fef;
                  il2cpp_runtime_helper_022b4080(pSVar42->m_Items + (int)uVar11);
                }
                else {
                  pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6f77;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)node,(Il2CppObject *)local_38,
                             *(MethodInfo_362C220 **)
                              (*(long *)((long)(in_RCX->_1).byval_arg.data + 0xc0) + 0x70));
                }
                uVar11 = (int)unaff_RBP + 1;
                unaff_RBP = (SimpleJSONFixed_JSONNode_c **)(ulong)uVar11;
                pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c6f8d;
                iVar12 = (**(code **)(pMVar25->methodPointer + 0x1e8))
                                   (pMVar25,*(undefined8 *)(pMVar25->methodPointer + 0x1f0));
              } while ((int)uVar11 < iVar12);
label_044c7009:
              pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c701b;
              pAVar26 = (ApplicationManagers_Credits_AottgCreditContributor_array *)
                        System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_object__o *)node,MethodInfo_AottgCreditContributor_ToArray);
              *contributors = pAVar26;
              pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c7029;
              il2cpp_runtime_helper_022b4080(contributors,pAVar26);
              return (bool_conflict)CONCAT71((int7)((ulong)node >> 8),1);
            }
            node = (SimpleJSONFixed_JSONNode_o *)0x0;
            pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c7044;
            auVar45 = (**(code **)(pMVar25->methodPointer + 0x188))
                                (pMVar25,0,*(undefined8 *)(pMVar25->methodPointer + 400));
            node_01 = auVar45._0_8_;
            pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c704f;
            bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                               ((SimpleJSONFixed_JSONNode_o *)node_01,
                                (ApplicationManagers_Credits_AottgCreditContributor_o **)
                                &stack0xffffffffffffffc8,auVar45._8_8_);
            pMVar38 = pMVar39;
            if ((char)bVar13 == '\0') {
              return 0;
            }
          }
        }
      }
    }
  }
label_044c7053:
  pSStack_40 = (SimpleJSONFixed_JSONNode_c *)0x44c7058;
  il2cpp_runtime_helper_022b2c90();
  pSStack_60 = (System_Collections_Generic_List_object__o *)node;
  pMStack_58 = unaff_R12;
  ppAStack_50 = contributors;
  pMStack_48 = unaff_R15;
  pSStack_40 = (SimpleJSONFixed_JSONNode_c *)unaff_RBP;
  if (g_data_057aeada == '\0') {
    pMStack_68 = (MethodInfo *)0x44c7083;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pMStack_68 = (MethodInfo *)0x44c708f;
    il2cpp_runtime_helper_023445d0(&"groups");
    g_data_057aeada = '\x01';
  }
  pMVar38->methodPointer = (Il2CppMethodPointer)0x0;
  pSVar40 = (SimpleJSONFixed_JSONNode_c *)0x0;
  pMStack_68 = (MethodInfo *)0x44c70a7;
  pMVar39 = pMVar38;
  il2cpp_runtime_helper_022b4080();
  if (node_01 != (MethodInfo *)0x0) {
    unaff_RBP = &"groups";
    pMStack_68 = (MethodInfo *)0x44c70ce;
    cVar10 = (**(code **)(node_01->methodPointer + 0x2f8))
                       (node_01,"groups",*(undefined8 *)(node_01->methodPointer + 0x300));
    if (cVar10 == '\0') {
label_044c720a:
      unaff_R15 = (MethodInfo *)0x0;
label_044c720d:
      return (bool_conflict)unaff_R15;
    }
    pMStack_68 = (MethodInfo *)0x44c70ed;
    pSVar40 = "groups";
    pMVar39 = node_01;
    puVar23 = (undefined8 *)
              (**(code **)(node_01->methodPointer + 0x1a8))
                        (node_01,"groups",*(undefined8 *)(node_01->methodPointer + 0x1b0));
    if (puVar23 != (undefined8 *)0x0) {
      in_RCX = (SimpleJSONFixed_JSONNode_c *)*puVar23;
      pMStack_68 = (MethodInfo *)0x44c7109;
      cVar10 = (*(in_RCX->vtable)._16_get_IsArray.methodPtr)(puVar23,(in_RCX->vtable)._16_get_IsArray.method);
      if (cVar10 == '\0') goto label_044c720a;
      pMStack_68 = (MethodInfo *)0x44c7128;
      pSVar40 = "groups";
      pMVar39 = node_01;
      pMVar24 = (MethodInfo *)
                (**(code **)(node_01->methodPointer + 0x1a8))
                          (node_01,"groups",*(undefined8 *)(node_01->methodPointer + 0x1b0));
      if (pMVar24 != (MethodInfo *)0x0) {
        in_RCX = (SimpleJSONFixed_JSONNode_c *)pMVar24->methodPointer;
        pSVar40 = (SimpleJSONFixed_JSONNode_c *)(in_RCX->vtable)._45_get_AsArray.method;
        pMStack_68 = (MethodInfo *)0x44c7144;
        pMVar25 = (MethodInfo *)(*(in_RCX->vtable)._45_get_AsArray.methodPtr)();
        pMVar39 = pMVar24;
        if (pMVar25 != (MethodInfo *)0x0) {
          pMStack_68 = (MethodInfo *)0x44c7163;
          uVar14 = (**(code **)(pMVar25->methodPointer + 0x1e8))
                             (pMVar25,*(undefined8 *)(pMVar25->methodPointer + 0x1f0));
          in_RCX = (SimpleJSONFixed_JSONNode_c *)&TypeInfo_AottgCreditGroup;
          pMStack_68 = (MethodInfo *)0x44c7174;
          pIVar27 = (Il2CppMethodPointer)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgCreditGroup,uVar14);
          pMVar38->methodPointer = pIVar27;
          pMStack_68 = (MethodInfo *)0x44c7182;
          il2cpp_runtime_helper_022b4080(pMVar38,pIVar27);
          pMStack_68 = (MethodInfo *)0x44c7196;
          iVar12 = (**(code **)(pMVar25->methodPointer + 0x1e8))
                             (pMVar25,*(undefined8 *)(pMVar25->methodPointer + 0x1f0));
          unaff_R15 = (MethodInfo *)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
          if (0 < iVar12) {
            node_01 = (MethodInfo *)&g_data_00000020;
            unaff_RBP = (SimpleJSONFixed_JSONNode_c **)0x0;
            do {
              pMStack_68 = (MethodInfo *)0x44c71c6;
              pMVar39 = pMVar25;
              auVar45 = (**(code **)(pMVar25->methodPointer + 0x188))
                                  (pMVar25,(ulong)unaff_RBP & 0xffffffff,
                                   *(undefined8 *)(pMVar25->methodPointer + 400));
              pSVar40 = (SimpleJSONFixed_JSONNode_c *)pMVar38->methodPointer;
              unaff_R12 = pMVar25;
              if (pSVar40 == (SimpleJSONFixed_JSONNode_c *)0x0) goto label_044c7219;
              in_RCX = (SimpleJSONFixed_JSONNode_c *)(ulong)*(uint *)&(pSVar40->_1).namespaze;
              if (in_RCX <= unaff_RBP) goto label_044c721e;
              pMStack_68 = (MethodInfo *)0x44c71e1;
              bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
                                 (auVar45._0_8_,
                                  (ApplicationManagers_Credits_AottgCreditGroup_o **)
                                  ((long)&(pSVar40->_1).image + (long)node_01),auVar45._8_8_);
              if ((char)bVar13 == '\0') goto label_044c720a;
              unaff_RBP = (SimpleJSONFixed_JSONNode_c **)
                          ((long)&(((SimpleJSONFixed_JSONNode_c *)unaff_RBP)->_1).image + 1);
              pMStack_68 = (MethodInfo *)0x44c71fd;
              iVar12 = (**(code **)(pMVar25->methodPointer + 0x1e8))
                                 (pMVar25,*(undefined8 *)(pMVar25->methodPointer + 0x1f0));
              node_01 = (MethodInfo *)&node_01->virtualMethodPointer;
            } while ((long)unaff_RBP < (long)iVar12);
          }
          goto label_044c720d;
        }
      }
    }
  }
label_044c7219:
  pMStack_68 = (MethodInfo *)0x44c721e;
  il2cpp_runtime_helper_022b2c90();
label_044c721e:
  pMStack_68 = (MethodInfo *)0x44c7223;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_88 = node_01;
  pMStack_80 = unaff_R12;
  ppSStack_78 = unaff_R13;
  pMStack_70 = pMVar38;
  pMStack_68 = unaff_R15;
  if (g_data_057aeadb == '\0') {
    pMStack_b0 = (MethodInfo *)0x44c7258;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pMStack_b0 = (MethodInfo *)0x44c7264;
    il2cpp_runtime_helper_023445d0(&"title");
    g_data_057aeadb = '\x01';
  }
  pSStack_90 = (System_String_o *)0x0;
  pSStack_98 = (System_String_o *)0x0;
  pAStack_a0 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  (pSVar40->_1).image = (Il2CppMethodPointer)0x0;
  pMStack_b0 = (MethodInfo *)0x44c7297;
  il2cpp_runtime_helper_022b4080(pSVar40);
  if (g_data_057aeae0 == '\0') {
    pMStack_b0 = (MethodInfo *)0x44c72ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pMStack_b0 = (MethodInfo *)0x44c72cb;
    il2cpp_runtime_helper_02337ed0();
  }
  puVar23 = (undefined8 *)0x0;
  pMStack_b0 = (MethodInfo *)0x44c72d9;
  pMVar38 = pMVar39;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar39,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (pMVar39 != (MethodInfo *)0x0) {
    pMStack_b0 = (MethodInfo *)0x44c72fd;
    cVar10 = (**(code **)(pMVar39->methodPointer + 0x248))
                       (pMVar39,*(undefined8 *)(pMVar39->methodPointer + 0x250));
    if (cVar10 != '\0') {
      pMStack_b0 = (MethodInfo *)0x44c731c;
      bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)pMVar39,"title",&pSStack_90,(MethodInfo *)in_RCX)
      ;
      if ((char)bVar13 != '\0') {
        pMStack_b0 = (MethodInfo *)0x44c732d;
        bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                           ((SimpleJSONFixed_JSONNode_o *)pMVar39,&pSStack_98,method_01);
        if ((char)bVar13 != '\0') {
          pMStack_b0 = (MethodInfo *)0x44c733e;
          bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                             ((SimpleJSONFixed_JSONNode_o *)pMVar39,&pAStack_a0,method_02);
          title = pSStack_90;
          pSVar30 = pSStack_98;
          pAVar26 = pAStack_a0;
          if ((char)bVar13 != '\0') {
            pMStack_b0 = (MethodInfo *)0x44c7360;
            __this_00 = (ApplicationManagers_Credits_AottgCreditGroup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditGroup);
            pMStack_b0 = (MethodInfo *)0x44c7374;
            ApplicationManagers_Credits_AottgCreditGroup___ctor(__this_00,title,pSVar30,pAVar26,in_R8);
            (pSVar40->_1).image = __this_00;
            pMStack_b0 = (MethodInfo *)0x44c7382;
            il2cpp_runtime_helper_022b4080(pSVar40,__this_00);
            return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
          }
        }
      }
    }
    return 0;
  }
  pMStack_b0 = (MethodInfo *)0x44c739d;
  il2cpp_runtime_helper_022b2c90();
  uStack_c8 = 0;
  pMStack_c0 = unaff_R12;
  pSStack_b8 = pSVar40;
  pMStack_b0 = pMVar39;
  if (g_data_057aeadd == '\0') {
    ppMStack_f8 = (MethodInfo **)0x44c73c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditContributor);
    ppMStack_f8 = (MethodInfo **)0x44c73d2;
    il2cpp_runtime_helper_023445d0(&"accountId");
    ppMStack_f8 = (MethodInfo **)0x44c73de;
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aeadd = '\x01';
  }
  pIStack_e8 = (Il2CppClass *)0x0;
  SStack_e0._a = 0;
  SStack_e0._b = 0;
  SStack_e0._c = 0;
  SStack_e0._d = '\0';
  SStack_e0._e = '\0';
  SStack_e0._f = '\0';
  SStack_e0._g = '\0';
  SStack_e0._h = '\0';
  SStack_e0._i = '\0';
  SStack_e0._j = '\0';
  SStack_e0._k = '\0';
  *puVar23 = 0;
  ppMStack_f8 = (MethodInfo **)0x44c7407;
  il2cpp_runtime_helper_022b4080(puVar23);
  if (g_data_057aeae0 == '\0') {
    ppMStack_f8 = (MethodInfo **)0x44c741c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    ppMStack_f8 = (MethodInfo **)0x44c743b;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar34 = (MethodInfo **)0x0;
  ppMStack_f8 = (MethodInfo **)0x44c7449;
  pMVar39 = pMVar38;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar38,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (pMVar38 != (MethodInfo *)0x0) {
    ppMStack_f8 = (MethodInfo **)0x44c746d;
    cVar10 = (**(code **)(pMVar38->methodPointer + 0x248))
                       (pMVar38,*(undefined8 *)(pMVar38->methodPointer + 0x250));
    if (cVar10 == '\0') {
      return 0;
    }
    ppMStack_f8 = (MethodInfo **)0x44c748c;
    bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar38,"name",(System_String_o **)&pIStack_e8,
                        (MethodInfo *)in_RCX);
    if ((char)bVar13 == '\0') {
      return 0;
    }
    ppMVar34 = &"accountId";
    ppMStack_f8 = (MethodInfo **)0x44c74b1;
    cVar10 = (**(code **)(pMVar38->methodPointer + 0x2f8))
                       (pMVar38,"accountId",*(undefined8 *)(pMVar38->methodPointer + 0x300));
    if (cVar10 == '\0') {
      return 0;
    }
    ppMStack_f8 = (MethodInfo **)0x44c74cf;
    pMVar39 = pMVar38;
    plVar28 = (long *)(**(code **)(pMVar38->methodPointer + 0x1a8))
                                (pMVar38,"accountId",*(undefined8 *)(pMVar38->methodPointer + 0x1b0));
    if (plVar28 != (long *)0x0) {
      ppMStack_f8 = (MethodInfo **)0x44c74eb;
      cVar10 = (**(code **)(*plVar28 + 0x228))(plVar28);
      if (cVar10 != '\0') {
        pSVar30 = (System_String_o *)0x0;
label_044c74f2:
        now.fields._8_8_ = pIStack_e8;
        ppMStack_f8 = (MethodInfo **)0x44c7506;
        pIVar29 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditContributor);
        ppMStack_f8 = (MethodInfo **)0x44c7513;
        System_Object___ctor(pIVar29,(MethodInfo *)0x0);
        pIVar29[1].klass = now.fields._8_8_;
        ppMStack_f8 = (MethodInfo **)0x44c7523;
        il2cpp_runtime_helper_022b4080(pIVar29 + 1,now.fields._8_8_);
        pIVar29[1].monitor = pSVar30;
        ppMStack_f8 = (MethodInfo **)0x44c7533;
        il2cpp_runtime_helper_022b4080(&pIVar29[1].monitor,pSVar30);
        *puVar23 = pIVar29;
        ppMStack_f8 = (MethodInfo **)0x44c7541;
        il2cpp_runtime_helper_022b4080(puVar23,pIVar29);
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar29 >> 8),1);
      }
      ppMStack_f8 = (MethodInfo **)0x44c755e;
      pMVar39 = pMVar38;
      plVar28 = (long *)(**(code **)(pMVar38->methodPointer + 0x1a8))
                                  (pMVar38,"accountId",*(undefined8 *)(pMVar38->methodPointer + 0x1b0));
      if (plVar28 != (long *)0x0) {
        ppMStack_f8 = (MethodInfo **)0x44c7576;
        cVar10 = (**(code **)(*plVar28 + 0x208))(plVar28,*(undefined8 *)(*plVar28 + 0x210));
        if (cVar10 == '\0') {
          return 0;
        }
        ppMStack_f8 = (MethodInfo **)0x44c7590;
        pMVar39 = "accountId";
        node_00 = (SimpleJSONFixed_JSONNode_o *)
                  (**(code **)(pMVar38->methodPointer + 0x1a8))
                            (pMVar38,"accountId",*(undefined8 *)(pMVar38->methodPointer + 0x1b0));
        ppMStack_f8 = (MethodInfo **)0x44c7598;
        pSVar30 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(node_00,pMVar39);
        ppMStack_f8 = (MethodInfo **)0x44c75a7;
        bVar13 = System_String__IsNullOrEmpty(pSVar30,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          return 0;
        }
        ppMStack_f8 = (MethodInfo **)0x44c75bc;
        bVar13 = System_Guid__TryParse(pSVar30,(System_Guid_o *)&SStack_e0,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return 0;
        }
        goto label_044c74f2;
      }
    }
  }
  ppMStack_f8 = (MethodInfo **)0x44c75db;
  il2cpp_runtime_helper_022b2c90();
  ppMStack_f8 = ppMVar34;
  if (g_data_057aeadf == '\0') {
    pMStack_100 = (MethodInfo *)0x44c75f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeadf = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pMStack_100 = (MethodInfo *)0x44c7618;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_100 = (MethodInfo *)0x44c7624;
  bVar13 = SimpleJSONFixed_JSONNode__op_Equality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar39,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return 0;
  }
  if (pMVar39 != (MethodInfo *)0x0) {
    pMStack_100 = (MethodInfo *)0x44c7640;
    cVar10 = (**(code **)(pMVar39->methodPointer + 0x228))
                       (pMVar39,*(undefined8 *)(pMVar39->methodPointer + 0x230));
    if (cVar10 != '\0') {
      return 0;
    }
    pMStack_100 = (MethodInfo *)0x44c765b;
    pSVar30 = (System_String_o *)(**(code **)(pMVar39->methodPointer + 0x1c8))(pMVar39);
    if (pSVar30 != (System_String_o *)0x0) {
      pSVar30 = System_String__Trim(pSVar30,(MethodInfo *)0x0);
      return (bool_conflict)pSVar30;
    }
  }
  pMStack_100 = (MethodInfo *)ApplicationManagers_Credits_AottgCreditsService__Init;
  uStack_120 = il2cpp_runtime_helper_022b2c90();
  pMStack_118 = pMVar39;
  pMStack_110 = unaff_R12;
  puStack_108 = puVar23;
  pMStack_100 = pMVar38;
  if (g_data_057aeae2 == '\0') {
    pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c768d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
    pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c7699;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c76a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchCredits);
    pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c76b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c76bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
    pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c76c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
    pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c76d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c76e1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
    g_data_057aeae2 = '\x01';
  }
  pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c770b;
  pIVar29 = Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar29;
  pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c772a;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar29);
  lVar15 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c7746;
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
  pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c7760;
  System_Action_AottgCreditsService_UnitKey__object____ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c7778;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar18._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c7794;
  __this_01 = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c77ac;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_01,(System_TimeSpan_o)SVar18._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c77bb;
  __this_02 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
  pSStack_128 = (SimpleJSONFixed_JSONNode_c *)0x44c77d8;
  pSVar41 = fetch;
  pAVar43 = __this_02;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            (__this_02,fetch,(System_Func_DateTimeOffset__o *)0x0,__this_01,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
  if (lVar15 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar15 + 0x20) = __this_02;
    bVar13 = il2cpp_runtime_helper_022b4080(lVar15 + 0x20,__this_02);
    return bVar13;
  }
  pSStack_128 = (SimpleJSONFixed_JSONNode_c *)ApplicationManagers_Credits_AottgCreditsService__GetCredits;
  il2cpp_runtime_helper_022b2c90();
  pAStack_148 = (ApplicationManagers_Api_AottgQueryPolicy_o *)__this_02;
  pAStack_140 = __this_01;
  pSStack_138 = fetch;
  lStack_130 = lVar15;
  pSStack_128 = (SimpleJSONFixed_JSONNode_c *)unaff_RBP;
  if (g_data_057aeae3 == '\0') {
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c788d;
  pIVar31 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c789a;
  now.fields._8_8_ = pIVar31;
  System_Object___ctor((Il2CppObject *)pIVar31,(MethodInfo *)0x0);
  if (pIVar31 == (Il2CppClass *)0x0) {
label_044c7a30:
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)now.fields._8_8_,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  ppcVar35 = &(pIVar31->_1).name;
  (pIVar31->_1).name = (char *)pAVar43;
  pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar35);
  now.fields._8_8_ = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78f2;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)now.fields._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar31 = "not_initialized";
  if ((char)bVar13 != '\0') {
    pcVar8 = *ppcVar35;
    if (pcVar8 == (char *)0x0) {
      return bVar13;
    }
    if (g_data_057aead4 == '\0') {
      pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7925;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c793b;
    pIVar29 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7948;
    System_Object___ctor(pIVar29,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar29[1].klass = 3;
    pIVar29[1].monitor = (void *)0x0;
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7962;
    il2cpp_runtime_helper_022b4080(&pIVar29[1].monitor,0);
    pIVar29[2].klass = pIVar31;
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7972;
    il2cpp_runtime_helper_022b4080(pIVar29 + 2,pIVar31);
    *(undefined2 *)&pIVar29[2].monitor = 0;
    *(undefined1 *)((long)&pIVar29[2].monitor + 2) = 0;
    bVar13 = (**(code **)(pcVar8 + 0x18))
                       (*(undefined8 *)(pcVar8 + 0x40),pIVar29,*(undefined8 *)(pcVar8 + 0x28));
    return bVar13;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar31 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79e3;
  onResult = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79fd;
  now.fields._8_8_ = onResult;
  System_Action_object____ctor();
  pAStack_150 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pAStack_148;
  SVar18._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar31 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar5;
  pIVar32 = (Il2CppClass *)((ulong)pSVar41 & 0xff);
  pAStack_148 = pAStack_140;
  pIStack_158 = (Il2CppClass *)0x0;
  lVar15 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pIVar32;
  pIVar44 = MethodInfo_Void_Get;
  pAStack_140 = (ApplicationManagers_Api_AottgQueryPolicy_o *)unaff_R13;
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    pIStack_160 = (Il2CppClass *)0x341a1ae;
    lVar15 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_160 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar15);
  pIVar17 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_160 = (Il2CppClass *)0x341a1d0;
  __this_03 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar17);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar31;
    pIStack_160 = (Il2CppClass *)0x341a1ec;
    pIVar17 = pIVar31;
    pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar5;
    if (onResult == (Il2CppClass *)0x0) goto label_0341a444;
    __this_03 = *(Il2CppClass **)&(pIVar31->_1).byval_arg.bits;
    if (__this_03 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(Il2CppClass **)
            (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_160 = (Il2CppClass *)0x341a221;
      pIVar17 = (Il2CppClass *)t2._ticks;
      bVar13 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (__this_03,t2._ticks,&pIStack_158);
      if ((char)bVar13 == '\0') {
        lVar15 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x58)
        ;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          pIStack_160 = (Il2CppClass *)0x341a242;
          lVar15 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_160 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar15);
        pIVar17 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_160 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar17);
        __this_03 = *(Il2CppClass **)&(pIVar31->_1).byval_arg.bits;
        pIStack_158 = (Il2CppClass *)t2._ticks;
        if (__this_03 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar17 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_160 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_03,pIVar17,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (Il2CppClass *)(pIVar31->_1).namespaze;
      if (now.fields._8_8_ != (Il2CppClass *)0x0) {
        pIVar17 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_03 = ((now.fields._8_8_)->_1).element_class;
        pIStack_160 = (Il2CppClass *)0x341a2ad;
        auVar45 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)pSVar41 == '\0') {
          now.fields._8_8_ = (Il2CppClass *)(auVar45._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo **)
                   (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_160 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar45._0_8_;
          pIVar17 = pIStack_158;
          __this_03 = pIVar31;
          pIVar44 = onResult;
          uVar11 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar31,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_158,now
                              ,(System_Action_AottgQueryResult_TValue___o *)onResult,
                              (MethodInfo_331A460 *)in_R9);
          pIVar16 = (Il2CppClass *)(ulong)uVar11;
          if ((char)uVar11 != '\0') goto label_0341a444;
        }
        if (pIStack_158 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_158->_1).this_arg.bits == '\0') {
            pIStack_160 = (Il2CppClass *)0x341a327;
            pIVar17 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIStack_160 = (Il2CppClass *)0x341a30e;
            pIVar17 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_158->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          __this_03 = (onResult->_1).element_class;
          pIStack_160 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult->_1).namespaze)(__this_03,pIVar17,*(undefined8 *)&(onResult->_1).byval_arg.bits)
          ;
          if ((pIStack_158 != (Il2CppClass *)0x0) &&
             (__this_03 = (Il2CppClass *)(pIStack_158->_1).name, __this_03 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(Il2CppClass **)
                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_03->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar8 = (__this_03->_1).name;
            if (pcVar8 != (char *)0x0) {
              uVar11 = *(uint *)&(__this_03->_1).namespaze;
              pIVar17 = onResult;
              if (uVar11 < *(uint *)(pcVar8 + 0x18)) {
                now.fields._8_8_ = (Il2CppClass *)(ulong)(uVar11 + 1);
                *(uint *)&(__this_03->_1).namespaze = uVar11 + 1;
                __this_03 = (Il2CppClass *)(pcVar8 + (long)(int)uVar11 * 8 + 0x20);
                *(Il2CppClass **)(pcVar8 + (long)(int)uVar11 * 8 + 0x20) = onResult;
                pIStack_160 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pIVar16 = pIStack_158;
              }
              else {
                pIStack_160 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
                pIVar16 = pIStack_158;
              }
              pIStack_158 = pIVar16;
              if (pIVar16 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIVar16->_1).this_arg.bits + 2) != '\0') {
label_0341a444:
                  return (bool_conflict)pIVar16;
                }
                *(undefined1 *)((long)&(pIVar16->_1).this_arg.bits + 2) = 1;
                pcVar8 = (pIVar31->_1).name;
                uVar4 = *(undefined1 *)&(__this->_1).namespaze;
                onResult = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar4);
                lVar15 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xe8);
                if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                  pIStack_160 = (Il2CppClass *)0x341a3fe;
                  lVar15 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_160 = (Il2CppClass *)0x341a406;
                pIVar31 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar15);
                now.fields._8_8_ =
                     *(Il2CppClass **)
                      (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_160 = (Il2CppClass *)0x341a42d;
                pIVar17 = __this;
                __this_03 = pIVar31;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar8 != (char *)0x0) {
                  pIStack_160 = (Il2CppClass *)0x341a444;
                  pIVar16 = (Il2CppClass *)
                            (**(code **)(pcVar8 + 0x18))
                                      (*(undefined8 *)(pcVar8 + 0x40),uVar4,pIVar31,
                                       *(undefined8 *)(pcVar8 + 0x28));
                  goto label_0341a444;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pIStack_160 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_170 = (Il2CppClass *)SVar18._ticks;
  pIVar16 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar37._ticks = (int64_t)pIVar17;
  plVar28 = (long *)__this_03;
  pMStack_198 = in_R9;
  pIStack_190 = pIVar44;
  pIStack_188 = __this;
  pIStack_180 = onResult;
  pIStack_178 = pIVar32;
  pIStack_168 = pIVar31;
  pIStack_160 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar28 = &TypeInfo_TimeSpan;
    pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_1b0 = '\0';
  uStack_1af = 0;
  uStack_1a8 = 0;
  if (pIVar17 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar17->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar17->_1).this_arg.bits + 1) == '\0') {
        return 0;
      }
      pvVar6 = (__this_03->_1).byval_arg.data;
      if (pvVar6 != (void *)0x0) {
        cStack_1b0 = *(char *)((long)pvVar6 + 0x18);
        uStack_1a8 = *(undefined8 *)((long)pvVar6 + 0x20);
        if (cStack_1b0 == '\0') {
          return 0;
        }
        ppIVar2 = (Il2CppType **)&(pIVar17->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var9 = *(unkuint10 *)ppIVar2;
        SVar18._ticks = (int64_t)*(ushort *)&(pIVar17->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a5ed;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var9;
        left_00.fields._8_8_ = pIVar16;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ = (Il2CppClass *)SVar18._ticks;
        plVar28 = (long *)extraout_RDX.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar6 = (__this_03->_1).byval_arg.data;
        SVar37._ticks = (int64_t)pIVar16;
        if (pvVar6 != (void *)0x0) {
          cStack_1b0 = *(char *)((long)pvVar6 + 0x18);
          uStack_1a8 = *(undefined8 *)((long)pvVar6 + 0x20);
          pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a61f;
          __this_04.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_04.fields._0_8_ = &cStack_1b0;
          SVar18._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_04,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar36._ticks = 0;
          t2._ticks = 0;
          pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a649;
          bVar13 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)SVar18._ticks,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return 0;
          }
          plVar28 = (pIVar17->_1).byval_arg.data;
          SVar37._ticks = 1;
          pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a672;
          pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar28,1,
                               (MethodInfo_331B520 *)pMStack_198->klass->rgctx_data[0x21].method);
          now.fields._8_8_ = (Il2CppClass *)0x0;
          if (pIStack_190 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a68a;
            (*(code *)(pIStack_190->_1).namespaze)
                      ((pIStack_190->_1).element_class,pAVar19,
                       *(undefined8 *)&(pIStack_190->_1).byval_arg.bits);
            return (bool_conflict)CONCAT71((int7)((ulong)SVar36._ticks >> 8),1);
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar17->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var9 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (Il2CppClass *)(ulong)*(ushort *)&(pIVar17->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var9;
      left.fields._8_8_ = pIVar16;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar37._ticks = (int64_t)pIVar16;
      plVar28 = (long *)extraout_RDX.fields._dateData;
      SVar18._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar6 = (__this_03->_1).byval_arg.data;
      if (pvVar6 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar6 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a54d;
        SVar37._ticks = t2._ticks;
        plVar28 = (long *)SVar18._ticks;
        bVar13 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar18._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_0341a589;
        plVar28 = (long *)(pIVar17->_1).namespaze;
        SVar37._ticks = 1;
        pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a576;
        pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar28,1,
                             (MethodInfo_331B380 *)pMStack_198->klass->rgctx_data[0x20].method);
        SVar36._ticks = t2._ticks;
        if (pIStack_190 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (Il2CppClass *)0x0;
      }
    }
  }
  pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_1d0 = pIVar17;
  pIStack_1c8 = (Il2CppClass *)SVar18._ticks;
  SStack_1c0 = extraout_RDX.fields._dateData;
  pAStack_1b8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pSStack_1e0 = (System_Object_array *)0x0;
  pSVar42 = *(System_Object_array **)&(((Il2CppClass *)plVar28)->_1).byval_arg.bits;
  if (pSVar42 != (System_Object_array *)0x0) {
    uVar11 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pSVar42,SVar37._ticks & 0xff,&pSStack_1e0);
    if ((char)uVar11 == '\0') {
      return uVar11;
    }
    if ((pSStack_1e0 != (System_Object_array *)0x0) &&
       (((*(undefined1 *)((long)pSStack_1e0->m_Items + 0x1a) = 0, pAVar20 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pSVar42 = "unknown_error",
         pAVar20 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             ((System_String_o *)"unknown_error",
                              *(MethodInfo_331AB10 **)
                               (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar20 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) &&
        (pSVar42 = pSStack_1e0, pSStack_1e0 != (System_Object_array *)0x0)))) {
      if ((char)(pAVar20->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(pSStack_1e0->m_Items + 3) == '\0') {
label_0341a96a:
          *(undefined2 *)(pSStack_1e0->m_Items + 3) = 0x100;
          pSStack_1e0->max_length = 0;
          pSStack_1e0->m_Items[0] = (Il2CppObject *)(pAVar20->fields)._Error_k__BackingField;
          pSVar42 = (System_Object_array *)pSStack_1e0->m_Items;
          il2cpp_runtime_helper_022b4080();
          pSVar21 = pSStack_1e0;
          pcVar8 = (((Il2CppClass *)plVar28)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar42 = *(System_Object_array **)(pcVar8 + 0x40);
            Var46 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar21 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar21->m_Items + 1) = Var46;
              *(undefined4 *)((long)pSVar21->m_Items + 0x12) = uStack_1d6;
              *(undefined2 *)((long)pSVar21->m_Items + 0x16) = uStack_1d2;
              pSVar42 = (System_Object_array *)(pAVar20->fields)._Error_k__BackingField;
              pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                  ((System_String_o *)pSVar42,0,
                                   *(MethodInfo_331B520 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108))
              ;
joined_r0x0341a95f:
              if (((pSStack_1e0 != (System_Object_array *)0x0) &&
                  (pSVar42 = ((System_Collections_Generic_List_object__Fields *)&pSStack_1e0->bounds)->_items,
                  pSVar42 != (System_Object_array *)0x0)) &&
                 ((pSVar21 = System_Collections_Generic_List_object___ToArray
                                       ((System_Collections_Generic_List_object__o *)pSVar42,
                                        *(MethodInfo_362E340 **)
                                         (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) +
                                         0x148)), pSStack_1e0 != (System_Object_array *)0x0 &&
                  (pSVar7 = ((System_Collections_Generic_List_object__Fields *)&pSStack_1e0->bounds)->_items,
                  pSVar7 != (System_Object_array *)0x0)))) {
                piVar1 = (int *)((long)&pSVar7->max_length + 4);
                *piVar1 = *piVar1 + 1;
                length = (int32_t)pSVar7->max_length;
                *(undefined4 *)&pSVar7->max_length = 0;
                if (0 < length) {
                  pSVar42 = (System_Object_array *)pSVar7->bounds;
                  System_Array__Clear((System_Array_o *)pSVar42,0,length,(MethodInfo *)0x0);
                }
                if (pSVar21 != (System_Object_array *)0x0) {
                  uVar11 = (uint)pSVar21->max_length;
                  if ((int)uVar11 < 1) {
                    return uVar11;
                  }
                  uVar33 = 0;
                  if ((pSVar21->max_length & 0xffffffff) != 0) {
                    do {
                      pIVar29 = pSVar21->m_Items[uVar33];
                      if (pIVar29 != (Il2CppObject *)0x0) {
                        if (pIVar29 == (Il2CppObject *)0x0) goto label_0341a9ed;
                        pSVar42 = (System_Object_array *)pIVar29[4].klass;
                        (*pIVar29[1].monitor)(pSVar42,pAVar19,pIVar29[2].monitor);
                      }
                      uVar33 = uVar33 + 1;
                      uVar11 = (uint)pSVar21->max_length;
                      if ((long)(int)uVar11 <= (long)uVar33) {
                        return uVar11;
                      }
                    } while (uVar33 < uVar11);
                  }
                  goto label_0341a9f2;
                }
              }
            }
          }
        }
        else {
          pvVar6 = (((Il2CppClass *)plVar28)->_1).byval_arg.data;
          if (pvVar6 != (void *)0x0) {
            if (*(char *)((long)pvVar6 + 0x28) == '\0') goto label_0341a96a;
            pSStack_1e0->m_Items[0] = (Il2CppObject *)(pAVar20->fields)._Error_k__BackingField;
            pSVar42 = (System_Object_array *)pSStack_1e0->m_Items;
            il2cpp_runtime_helper_022b4080();
            if (pSStack_1e0 != (System_Object_array *)0x0) {
              pSVar42 = (System_Object_array *)pSStack_1e0->max_length;
              pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  ((Il2CppObject *)pSVar42,(pAVar20->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
              ;
              goto joined_r0x0341a95f;
            }
          }
        }
      }
      else {
        *(undefined2 *)(pSStack_1e0->m_Items + 3) = 1;
        pSStack_1e0->max_length = (il2cpp_array_size_t)(pAVar20->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(&pSStack_1e0->max_length);
        pSVar42 = (System_Object_array *)0x0;
        if (pSStack_1e0 != (System_Object_array *)0x0) {
          pSStack_1e0->m_Items[0] = (Il2CppObject *)0x0;
          pSVar42 = (System_Object_array *)pSStack_1e0->m_Items;
          il2cpp_runtime_helper_022b4080(pSVar42,0);
          pSVar21 = pSStack_1e0;
          pcVar8 = (((Il2CppClass *)plVar28)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar42 = *(System_Object_array **)(pcVar8 + 0x40);
            Var46 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar21 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar21->m_Items + 1) = Var46;
              *(undefined2 *)((long)pSVar21->m_Items + 0x16) = uStack_1d2;
              *(undefined4 *)((long)pSVar21->m_Items + 0x12) = uStack_1d6;
              if (pSStack_1e0 != (System_Object_array *)0x0) {
                pSVar42 = (System_Object_array *)pSStack_1e0->max_length;
                pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                    ((Il2CppObject *)pSVar42,0,
                                     *(MethodInfo_331B380 **)
                                      (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100
                                      ));
                goto joined_r0x0341a95f;
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  uVar22 = il2cpp_runtime_helper_022b2ca0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)uVar22 >> 8),
                  *(undefined1 *)&((System_Collections_Generic_List_object__Fields *)&pSVar42->bounds)->_items
                 );
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseContributor
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditContributor_o** contributor, const MethodInfo* method);
// 0x44c73a0

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
          (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Credits_AottgCreditContributor_o **contributor
          ,MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  undefined1 uVar3;
  byte bVar4;
  int32_t length;
  void *pvVar5;
  System_Object_array *pSVar6;
  char *pcVar7;
  unkuint10 Var8;
  System_String_o *pSVar9;
  char cVar10;
  uint uVar11;
  bool_conflict bVar12;
  bool_conflict extraout_EAX;
  long lVar13;
  Il2CppClass *__this;
  Il2CppClass *pIVar14;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar15;
  System_TimeSpan_Fields SVar16;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar17;
  System_TimeSpan_o t1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar18;
  System_Object_array *pSVar19;
  undefined8 uVar20;
  long *plVar21;
  ApplicationManagers_Credits_AottgCreditContributor_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar22;
  System_String_o *pSVar23;
  Il2CppObject *pIVar24;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_01;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_02;
  Il2CppClass *pIVar25;
  Il2CppClass *onResult;
  MethodInfo *in_RCX;
  Il2CppClass *pIVar26;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  ulong uVar27;
  char **ppcVar28;
  System_TimeSpan_Fields SVar29;
  System_TimeSpan_Fields SVar30;
  MethodInfo *method_01;
  Il2CppClass *__this_03;
  System_Object_array *__this_04;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar31;
  Il2CppClass *pIVar32;
  MethodInfo *in_R9;
  undefined1 auVar33 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_05;
  unkbyte10 Var34;
  System_Object_array *pSStack_138;
  undefined4 uStack_12e;
  undefined2 uStack_12a;
  Il2CppClass *pIStack_128;
  Il2CppClass *pIStack_120;
  System_DateTime_Fields SStack_118;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_110;
  char cStack_108;
  undefined7 uStack_107;
  undefined8 uStack_100;
  MethodInfo *pMStack_f0;
  Il2CppClass *pIStack_e8;
  Il2CppClass *pIStack_e0;
  Il2CppClass *pIStack_d8;
  Il2CppClass *pIStack_d0;
  Il2CppClass *pIStack_c8;
  Il2CppClass *pIStack_c0;
  Il2CppClass *pIStack_b8;
  Il2CppClass *pIStack_b0;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_a8;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_a0;
  System_String_o *local_40;
  System_Guid_Fields local_38;
  MethodInfo_37EC980 *method_00;
  
  if (g_data_057aeadd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditContributor);
    il2cpp_runtime_helper_023445d0(&"accountId");
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aeadd = '\x01';
    method = extraout_RDX_01;
  }
  local_40 = (System_String_o *)0x0;
  local_38._a = 0;
  local_38._b = 0;
  local_38._c = 0;
  local_38._d = '\0';
  local_38._e = '\0';
  local_38._f = '\0';
  local_38._g = '\0';
  local_38._h = '\0';
  local_38._i = '\0';
  local_38._j = '\0';
  local_38._k = '\0';
  *contributor = (ApplicationManagers_Credits_AottgCreditContributor_o *)0x0;
  il2cpp_runtime_helper_022b4080(contributor,0,method);
  if (g_data_057aeae0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar22 = node;
  bVar12 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 == '\0') {
    return 0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar10 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                       (node,(node->klass->vtable)._17_get_IsObject.method);
    if (((cVar10 == '\0') ||
        (bVar12 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                            (node,"name",&local_40,in_RCX), (char)bVar12 == '\0')) ||
       (cVar10 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                           (node,"accountId",(node->klass->vtable)._28_HasKey.method), cVar10 == '\0')) {
      return 0;
    }
    pSVar22 = node;
    plVar21 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                (node,"accountId",(node->klass->vtable)._7_get_Item.method);
    if (plVar21 != (long *)0x0) {
      cVar10 = (**(code **)(*plVar21 + 0x228))(plVar21);
      if (cVar10 != '\0') {
        pSVar23 = (System_String_o *)0x0;
label_044c74f2:
        pSVar9 = local_40;
        __this_00 = (ApplicationManagers_Credits_AottgCreditContributor_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditContributor);
        System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
        (__this_00->fields)._Name_k__BackingField = pSVar9;
        il2cpp_runtime_helper_022b4080(&__this_00->fields,pSVar9);
        (__this_00->fields)._AccountId_k__BackingField = pSVar23;
        il2cpp_runtime_helper_022b4080(&(__this_00->fields)._AccountId_k__BackingField,pSVar23);
        *contributor = __this_00;
        il2cpp_runtime_helper_022b4080(contributor,__this_00);
        return (bool_conflict)CONCAT71((int7)((ulong)__this_00 >> 8),1);
      }
      pSVar22 = node;
      plVar21 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                  (node,"accountId",(node->klass->vtable)._7_get_Item.method);
      if (plVar21 != (long *)0x0) {
        cVar10 = (**(code **)(*plVar21 + 0x208))(plVar21,*(undefined8 *)(*plVar21 + 0x210));
        if (cVar10 == '\0') {
          return 0;
        }
        method_01 = "accountId";
        pSVar22 = (SimpleJSONFixed_JSONNode_o *)
                  (*(node->klass->vtable)._7_get_Item.methodPtr)
                            (node,"accountId",(node->klass->vtable)._7_get_Item.method);
        pSVar23 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar22,method_01);
        bVar12 = System_String__IsNullOrEmpty(pSVar23,(MethodInfo *)0x0);
        if ((char)bVar12 != '\0') {
          return 0;
        }
        bVar12 = System_Guid__TryParse(pSVar23,(System_Guid_o *)&local_38,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') {
          return 0;
        }
        goto label_044c74f2;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeadf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeadf = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar12 = SimpleJSONFixed_JSONNode__op_Equality(pSVar22,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    return 0;
  }
  if (pSVar22 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar10 = (*(pSVar22->klass->vtable)._15_get_IsNull.methodPtr)
                       (pSVar22,(pSVar22->klass->vtable)._15_get_IsNull.method);
    if (cVar10 != '\0') {
      return 0;
    }
    pSVar23 = (System_String_o *)(*(pSVar22->klass->vtable)._9_get_Value.methodPtr)(pSVar22);
    if (pSVar23 != (System_String_o *)0x0) {
      pSVar23 = System_String__Trim(pSVar23,(MethodInfo *)0x0);
      return (bool_conflict)pSVar23;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeae2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
    g_data_057aeae2 = '\x01';
  }
  pIVar24 = Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar24;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar24);
  lVar13 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
  System_Action_AottgCreditsService_UnitKey__object____ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar16._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  __this_01 = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_01,(System_TimeSpan_o)SVar16._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  __this_02 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
  pAVar31 = __this_02;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            (__this_02,fetch,(System_Func_DateTimeOffset__o *)0x0,__this_01,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
  if (lVar13 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar13 + 0x20) = __this_02;
    bVar12 = il2cpp_runtime_helper_022b4080(lVar13 + 0x20,__this_02);
    return bVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  pAStack_a0 = (ApplicationManagers_Api_AottgQueryPolicy_o *)__this_02;
  if (g_data_057aeae3 == '\0') {
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c788d;
  pIVar25 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c789a;
  now.fields._8_8_ = pIVar25;
  System_Object___ctor((Il2CppObject *)pIVar25,(MethodInfo *)0x0);
  if (pIVar25 == (Il2CppClass *)0x0) {
label_044c7a30:
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)now.fields._8_8_,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  ppcVar28 = &(pIVar25->_1).name;
  (pIVar25->_1).name = (char *)pAVar31;
  pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar28);
  now.fields._8_8_ = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78f2;
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)now.fields._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar25 = "not_initialized";
  if ((char)bVar12 != '\0') {
    pcVar7 = *ppcVar28;
    if (pcVar7 == (char *)0x0) {
      return bVar12;
    }
    if (g_data_057aead4 == '\0') {
      pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7925;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c793b;
    pIVar24 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7948;
    System_Object___ctor(pIVar24,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar24[1].klass = 3;
    pIVar24[1].monitor = (void *)0x0;
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7962;
    il2cpp_runtime_helper_022b4080(&pIVar24[1].monitor,0);
    pIVar24[2].klass = pIVar25;
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7972;
    il2cpp_runtime_helper_022b4080(pIVar24 + 2,pIVar25);
    *(undefined2 *)&pIVar24[2].monitor = 0;
    *(undefined1 *)((long)&pIVar24[2].monitor + 2) = 0;
    bVar12 = (**(code **)(pcVar7 + 0x18))
                       (*(undefined8 *)(pcVar7 + 0x40),pIVar24,*(undefined8 *)(pcVar7 + 0x28));
    return bVar12;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar25 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79e3;
  onResult = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79fd;
  now.fields._8_8_ = onResult;
  System_Action_object____ctor();
  SVar16._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar25 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar4;
  pIVar26 = (Il2CppClass *)((ulong)fetch & 0xff);
  pAStack_a8 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pAStack_a0;
  pIStack_b0 = (Il2CppClass *)0x0;
  lVar13 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pIVar26;
  pIVar32 = MethodInfo_Void_Get;
  pAStack_a0 = __this_01;
  if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
    pIStack_b8 = (Il2CppClass *)0x341a1ae;
    lVar13 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_b8 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar13);
  pIVar15 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)SVar16._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_b8 = (Il2CppClass *)0x341a1d0;
  __this_03 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar15);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar25;
    pIStack_b8 = (Il2CppClass *)0x341a1ec;
    pIVar15 = pIVar25;
    pIVar14 = (Il2CppClass *)il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar4;
    if (onResult == (Il2CppClass *)0x0) goto label_0341a444;
    __this_03 = *(Il2CppClass **)&(pIVar25->_1).byval_arg.bits;
    if (__this_03 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(Il2CppClass **)
            (*(long *)((long)(((Il2CppClass *)SVar16._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_b8 = (Il2CppClass *)0x341a221;
      pIVar15 = (Il2CppClass *)t2._ticks;
      bVar12 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (__this_03,t2._ticks,&pIStack_b0);
      if ((char)bVar12 == '\0') {
        lVar13 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar16._ticks)->_1).byval_arg.data + 0xc0) + 0x58)
        ;
        if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
          pIStack_b8 = (Il2CppClass *)0x341a242;
          lVar13 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_b8 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar13);
        pIVar15 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)SVar16._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_b8 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar15);
        __this_03 = *(Il2CppClass **)&(pIVar25->_1).byval_arg.bits;
        pIStack_b0 = (Il2CppClass *)t2._ticks;
        if (__this_03 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar15 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_b8 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_03,pIVar15,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)SVar16._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (Il2CppClass *)(pIVar25->_1).namespaze;
      if (now.fields._8_8_ != (Il2CppClass *)0x0) {
        pIVar15 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_03 = ((now.fields._8_8_)->_1).element_class;
        pIStack_b8 = (Il2CppClass *)0x341a2ad;
        auVar33 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)fetch == '\0') {
          now.fields._8_8_ = (Il2CppClass *)(auVar33._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo **)
                   (*(long *)((long)(((Il2CppClass *)SVar16._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_b8 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar33._0_8_;
          pIVar15 = pIStack_b0;
          __this_03 = pIVar25;
          pIVar32 = onResult;
          uVar11 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar25,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_b0,now,
                              (System_Action_AottgQueryResult_TValue___o *)onResult,
                              (MethodInfo_331A460 *)in_R9);
          pIVar14 = (Il2CppClass *)(ulong)uVar11;
          if ((char)uVar11 != '\0') goto label_0341a444;
        }
        if (pIStack_b0 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_b0->_1).this_arg.bits == '\0') {
            pIStack_b8 = (Il2CppClass *)0x341a327;
            pIVar15 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar16._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIStack_b8 = (Il2CppClass *)0x341a30e;
            pIVar15 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_b0->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar16._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          __this_03 = (onResult->_1).element_class;
          pIStack_b8 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult->_1).namespaze)(__this_03,pIVar15,*(undefined8 *)&(onResult->_1).byval_arg.bits)
          ;
          if ((pIStack_b0 != (Il2CppClass *)0x0) &&
             (__this_03 = (Il2CppClass *)(pIStack_b0->_1).name, __this_03 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(Il2CppClass **)
                  (*(long *)((long)(((Il2CppClass *)SVar16._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_03->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar7 = (__this_03->_1).name;
            if (pcVar7 != (char *)0x0) {
              uVar11 = *(uint *)&(__this_03->_1).namespaze;
              pIVar15 = onResult;
              if (uVar11 < *(uint *)(pcVar7 + 0x18)) {
                now.fields._8_8_ = (Il2CppClass *)(ulong)(uVar11 + 1);
                *(uint *)&(__this_03->_1).namespaze = uVar11 + 1;
                __this_03 = (Il2CppClass *)(pcVar7 + (long)(int)uVar11 * 8 + 0x20);
                *(Il2CppClass **)(pcVar7 + (long)(int)uVar11 * 8 + 0x20) = onResult;
                pIStack_b8 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pIVar14 = pIStack_b0;
              }
              else {
                pIStack_b8 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
                pIVar14 = pIStack_b0;
              }
              pIStack_b0 = pIVar14;
              if (pIVar14 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIVar14->_1).this_arg.bits + 2) != '\0') {
label_0341a444:
                  return (bool_conflict)pIVar14;
                }
                *(undefined1 *)((long)&(pIVar14->_1).this_arg.bits + 2) = 1;
                pcVar7 = (pIVar25->_1).name;
                uVar3 = *(undefined1 *)&(__this->_1).namespaze;
                onResult = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar3);
                lVar13 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar16._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xe8);
                if ((*(byte *)(lVar13 + 0x135) & 1) == 0) {
                  pIStack_b8 = (Il2CppClass *)0x341a3fe;
                  lVar13 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_b8 = (Il2CppClass *)0x341a406;
                pIVar25 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar13);
                now.fields._8_8_ =
                     *(Il2CppClass **)
                      (*(long *)((long)(((Il2CppClass *)SVar16._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_b8 = (Il2CppClass *)0x341a42d;
                pIVar15 = __this;
                __this_03 = pIVar25;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar7 != (char *)0x0) {
                  pIStack_b8 = (Il2CppClass *)0x341a444;
                  pIVar14 = (Il2CppClass *)
                            (**(code **)(pcVar7 + 0x18))
                                      (*(undefined8 *)(pcVar7 + 0x40),uVar3,pIVar25,
                                       *(undefined8 *)(pcVar7 + 0x28));
                  goto label_0341a444;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pIStack_b8 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_c8 = (Il2CppClass *)SVar16._ticks;
  pIVar14 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar30._ticks = (int64_t)pIVar15;
  plVar21 = (long *)__this_03;
  pMStack_f0 = in_R9;
  pIStack_e8 = pIVar32;
  pIStack_e0 = __this;
  pIStack_d8 = onResult;
  pIStack_d0 = pIVar26;
  pIStack_c0 = pIVar25;
  pIStack_b8 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar21 = &TypeInfo_TimeSpan;
    pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_108 = '\0';
  uStack_107 = 0;
  uStack_100 = 0;
  if (pIVar15 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar15->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar15->_1).this_arg.bits + 1) == '\0') {
        return 0;
      }
      pvVar5 = (__this_03->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        cStack_108 = *(char *)((long)pvVar5 + 0x18);
        uStack_100 = *(undefined8 *)((long)pvVar5 + 0x20);
        if (cStack_108 == '\0') {
          return 0;
        }
        ppIVar2 = (Il2CppType **)&(pIVar15->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var8 = *(unkuint10 *)ppIVar2;
        SVar16._ticks = (int64_t)*(ushort *)&(pIVar15->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a5ed;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var8;
        left_00.fields._8_8_ = pIVar14;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ = (Il2CppClass *)SVar16._ticks;
        plVar21 = (long *)extraout_RDX.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar5 = (__this_03->_1).byval_arg.data;
        SVar30._ticks = (int64_t)pIVar14;
        if (pvVar5 != (void *)0x0) {
          cStack_108 = *(char *)((long)pvVar5 + 0x18);
          uStack_100 = *(undefined8 *)((long)pvVar5 + 0x20);
          pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a61f;
          __this_05.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_05.fields._0_8_ = &cStack_108;
          SVar16._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_05,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar29._ticks = 0;
          t2._ticks = 0;
          pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a649;
          bVar12 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)SVar16._ticks,(MethodInfo *)0x0);
          if ((char)bVar12 == '\0') {
            return 0;
          }
          plVar21 = (pIVar15->_1).byval_arg.data;
          SVar30._ticks = 1;
          pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a672;
          pAVar17 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar21,1,
                               (MethodInfo_331B520 *)pMStack_f0->klass->rgctx_data[0x21].method);
          now.fields._8_8_ = (Il2CppClass *)0x0;
          if (pIStack_e8 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a68a;
            (*(code *)(pIStack_e8->_1).namespaze)
                      ((pIStack_e8->_1).element_class,pAVar17,*(undefined8 *)&(pIStack_e8->_1).byval_arg.bits)
            ;
            return (bool_conflict)CONCAT71((int7)((ulong)SVar29._ticks >> 8),1);
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar15->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var8 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (Il2CppClass *)(ulong)*(ushort *)&(pIVar15->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var8;
      left.fields._8_8_ = pIVar14;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar30._ticks = (int64_t)pIVar14;
      plVar21 = (long *)extraout_RDX.fields._dateData;
      SVar16._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar5 = (__this_03->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar5 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a54d;
        SVar30._ticks = t2._ticks;
        plVar21 = (long *)SVar16._ticks;
        bVar12 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar16._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar12 == '\0') goto label_0341a589;
        plVar21 = (long *)(pIVar15->_1).namespaze;
        SVar30._ticks = 1;
        pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a576;
        pAVar17 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar21,1,
                             (MethodInfo_331B380 *)pMStack_f0->klass->rgctx_data[0x20].method);
        SVar29._ticks = t2._ticks;
        if (pIStack_e8 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (Il2CppClass *)0x0;
      }
    }
  }
  pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_128 = pIVar15;
  pIStack_120 = (Il2CppClass *)SVar16._ticks;
  SStack_118 = extraout_RDX.fields._dateData;
  pAStack_110 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pSStack_138 = (System_Object_array *)0x0;
  __this_04 = *(System_Object_array **)&(((Il2CppClass *)plVar21)->_1).byval_arg.bits;
  if (__this_04 != (System_Object_array *)0x0) {
    uVar11 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (__this_04,SVar30._ticks & 0xff,&pSStack_138);
    if ((char)uVar11 == '\0') {
      return uVar11;
    }
    if (((pSStack_138 != (System_Object_array *)0x0) &&
        ((*(undefined1 *)((long)pSStack_138->m_Items + 0x1a) = 0, pAVar18 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (__this_04 = "unknown_error",
         pAVar18 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             ((System_String_o *)"unknown_error",
                              *(MethodInfo_331AB10 **)
                               (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar18 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)))) &&
       (__this_04 = pSStack_138, pSStack_138 != (System_Object_array *)0x0)) {
      if ((char)(pAVar18->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(pSStack_138->m_Items + 3) == '\0') {
label_0341a96a:
          *(undefined2 *)(pSStack_138->m_Items + 3) = 0x100;
          pSStack_138->max_length = 0;
          pSStack_138->m_Items[0] = (Il2CppObject *)(pAVar18->fields)._Error_k__BackingField;
          __this_04 = (System_Object_array *)pSStack_138->m_Items;
          il2cpp_runtime_helper_022b4080();
          pSVar19 = pSStack_138;
          pcVar7 = (((Il2CppClass *)plVar21)->_1).namespaze;
          if (pcVar7 != (char *)0x0) {
            __this_04 = *(System_Object_array **)(pcVar7 + 0x40);
            Var34 = (**(code **)(pcVar7 + 0x18))();
            if (pSVar19 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar19->m_Items + 1) = Var34;
              *(undefined4 *)((long)pSVar19->m_Items + 0x12) = uStack_12e;
              *(undefined2 *)((long)pSVar19->m_Items + 0x16) = uStack_12a;
              __this_04 = (System_Object_array *)(pAVar18->fields)._Error_k__BackingField;
              pAVar17 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                  ((System_String_o *)__this_04,0,
                                   *(MethodInfo_331B520 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108))
              ;
joined_r0x0341a95f:
              if ((((pSStack_138 != (System_Object_array *)0x0) &&
                   (__this_04 = ((System_Collections_Generic_List_object__Fields *)&pSStack_138->bounds)->
                                _items, __this_04 != (System_Object_array *)0x0)) &&
                  (pSVar19 = System_Collections_Generic_List_object___ToArray
                                       ((System_Collections_Generic_List_object__o *)__this_04,
                                        *(MethodInfo_362E340 **)
                                         (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) +
                                         0x148)), pSStack_138 != (System_Object_array *)0x0)) &&
                 (pSVar6 = ((System_Collections_Generic_List_object__Fields *)&pSStack_138->bounds)->_items,
                 pSVar6 != (System_Object_array *)0x0)) {
                piVar1 = (int *)((long)&pSVar6->max_length + 4);
                *piVar1 = *piVar1 + 1;
                length = (int32_t)pSVar6->max_length;
                *(undefined4 *)&pSVar6->max_length = 0;
                if (0 < length) {
                  __this_04 = (System_Object_array *)pSVar6->bounds;
                  System_Array__Clear((System_Array_o *)__this_04,0,length,(MethodInfo *)0x0);
                }
                if (pSVar19 != (System_Object_array *)0x0) {
                  uVar11 = (uint)pSVar19->max_length;
                  if ((int)uVar11 < 1) {
                    return uVar11;
                  }
                  uVar27 = 0;
                  if ((pSVar19->max_length & 0xffffffff) != 0) {
                    do {
                      pIVar24 = pSVar19->m_Items[uVar27];
                      if (pIVar24 != (Il2CppObject *)0x0) {
                        if (pIVar24 == (Il2CppObject *)0x0) goto label_0341a9ed;
                        __this_04 = (System_Object_array *)pIVar24[4].klass;
                        (*pIVar24[1].monitor)(__this_04,pAVar17,pIVar24[2].monitor);
                      }
                      uVar27 = uVar27 + 1;
                      uVar11 = (uint)pSVar19->max_length;
                      if ((long)(int)uVar11 <= (long)uVar27) {
                        return uVar11;
                      }
                    } while (uVar27 < uVar11);
                  }
                  goto label_0341a9f2;
                }
              }
            }
          }
        }
        else {
          pvVar5 = (((Il2CppClass *)plVar21)->_1).byval_arg.data;
          if (pvVar5 != (void *)0x0) {
            if (*(char *)((long)pvVar5 + 0x28) == '\0') goto label_0341a96a;
            pSStack_138->m_Items[0] = (Il2CppObject *)(pAVar18->fields)._Error_k__BackingField;
            __this_04 = (System_Object_array *)pSStack_138->m_Items;
            il2cpp_runtime_helper_022b4080();
            if (pSStack_138 != (System_Object_array *)0x0) {
              __this_04 = (System_Object_array *)pSStack_138->max_length;
              pAVar17 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  ((Il2CppObject *)__this_04,(pAVar18->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
              ;
              goto joined_r0x0341a95f;
            }
          }
        }
      }
      else {
        *(undefined2 *)(pSStack_138->m_Items + 3) = 1;
        pSStack_138->max_length = (il2cpp_array_size_t)(pAVar18->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(&pSStack_138->max_length);
        __this_04 = (System_Object_array *)0x0;
        if (pSStack_138 != (System_Object_array *)0x0) {
          pSStack_138->m_Items[0] = (Il2CppObject *)0x0;
          __this_04 = (System_Object_array *)pSStack_138->m_Items;
          il2cpp_runtime_helper_022b4080(__this_04,0);
          pSVar19 = pSStack_138;
          pcVar7 = (((Il2CppClass *)plVar21)->_1).namespaze;
          if (pcVar7 != (char *)0x0) {
            __this_04 = *(System_Object_array **)(pcVar7 + 0x40);
            Var34 = (**(code **)(pcVar7 + 0x18))();
            if (pSVar19 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar19->m_Items + 1) = Var34;
              *(undefined2 *)((long)pSVar19->m_Items + 0x16) = uStack_12a;
              *(undefined4 *)((long)pSVar19->m_Items + 0x12) = uStack_12e;
              if (pSStack_138 != (System_Object_array *)0x0) {
                __this_04 = (System_Object_array *)pSStack_138->max_length;
                pAVar17 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                    ((Il2CppObject *)__this_04,0,
                                     *(MethodInfo_331B380 **)
                                      (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100
                                      ));
                goto joined_r0x0341a95f;
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  uVar20 = il2cpp_runtime_helper_022b2ca0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)uVar20 >> 8),
                  *(undefined1 *)
                   &((System_Collections_Generic_List_object__Fields *)&__this_04->bounds)->_items);
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadDescription
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription (SimpleJSONFixed_JSONNode_o* node, System_String_o** description, const MethodInfo* method);
// 0x44c6cb0

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
          (SimpleJSONFixed_JSONNode_o *node,System_String_o **description,MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  undefined1 uVar3;
  byte bVar4;
  int32_t length;
  void *pvVar5;
  System_Object_array *pSVar6;
  InvokerMethod pIVar7;
  char *pcVar8;
  unkuint10 Var9;
  ApplicationManagers_Credits_AottgCreditContributor_array *contributors;
  System_String_o *title;
  char cVar10;
  uint uVar11;
  int iVar12;
  bool_conflict bVar13;
  undefined4 uVar14;
  bool_conflict extraout_EAX;
  long lVar15;
  Il2CppClass *__this;
  Il2CppClass *pIVar16;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar17;
  System_TimeSpan_Fields SVar18;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar19;
  System_TimeSpan_o t1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar20;
  System_Object_array *pSVar21;
  undefined8 uVar22;
  undefined8 *puVar23;
  long *plVar24;
  SimpleJSONFixed_JSONNode_o *pSVar25;
  System_String_o *pSVar26;
  MethodInfo *pMVar27;
  MethodInfo *pMVar28;
  MethodInfo *pMVar29;
  System_Object_array *pSVar30;
  MethodInfo *pMVar31;
  Il2CppClass *pIVar32;
  Il2CppObject *pIVar33;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_01;
  Il2CppClass *onResult;
  Il2CppClass *in_RCX;
  Il2CppClass *pIVar34;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ulong uVar35;
  MethodInfo *node_00;
  MethodInfo **ppMVar36;
  char **ppcVar37;
  System_TimeSpan_Fields SVar38;
  System_Collections_Generic_List_object__c **unaff_RBP;
  System_TimeSpan_Fields SVar39;
  MethodInfo *pMVar40;
  MethodInfo *pMVar41;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSVar42;
  Il2CppClass *__this_02;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar43;
  Il2CppClass *pIVar44;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  MethodInfo *unaff_R12;
  System_Collections_Generic_List_object__c **unaff_R13;
  MethodInfo **unaff_R15;
  undefined1 auVar45 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_03;
  unkbyte10 Var46;
  System_Object_array *pSStack_208;
  undefined4 uStack_1fe;
  undefined2 uStack_1fa;
  Il2CppClass *pIStack_1f8;
  Il2CppClass *pIStack_1f0;
  System_DateTime_Fields SStack_1e8;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_1e0;
  char cStack_1d8;
  undefined7 uStack_1d7;
  undefined8 uStack_1d0;
  MethodInfo *pMStack_1c0;
  Il2CppClass *pIStack_1b8;
  Il2CppClass *pIStack_1b0;
  Il2CppClass *pIStack_1a8;
  Il2CppClass *pIStack_1a0;
  Il2CppClass *pIStack_198;
  Il2CppClass *pIStack_190;
  Il2CppClass *pIStack_188;
  Il2CppClass *pIStack_180;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_178;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_170;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_168;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSStack_160;
  long lStack_158;
  Il2CppClass *pIStack_150;
  undefined8 uStack_148;
  MethodInfo *pMStack_140;
  MethodInfo *pMStack_138;
  undefined8 *puStack_130;
  MethodInfo *pMStack_128;
  MethodInfo **ppMStack_120;
  Il2CppClass *pIStack_110;
  System_Guid_Fields SStack_108;
  undefined8 uStack_f0;
  MethodInfo *pMStack_e8;
  Il2CppClass *pIStack_e0;
  MethodInfo *pMStack_d8;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAStack_c8;
  System_String_o *pSStack_c0;
  System_String_o *pSStack_b8;
  MethodInfo *pMStack_b0;
  MethodInfo *pMStack_a8;
  System_Collections_Generic_List_object__c **ppSStack_a0;
  MethodInfo *pMStack_98;
  MethodInfo *pMStack_90;
  MethodInfo *pMStack_88;
  MethodInfo *pMStack_80;
  MethodInfo *pMStack_78;
  MethodInfo *pMStack_70;
  Il2CppClass *pIStack_68;
  MethodInfo *pMStack_60;
  SimpleJSONFixed_JSONNode_o *pSStack_58;
  MethodInfo_37EC980 *method_00;
  
  if (g_data_057aeade == '\0') {
    il2cpp_runtime_helper_023445d0(&"description");
    g_data_057aeade = '\x01';
    method = extraout_RDX_01;
  }
  *description = (System_String_o *)0x0;
  pMVar40 = (MethodInfo *)0x0;
  pMVar29 = (MethodInfo *)description;
  il2cpp_runtime_helper_022b4080(description,0,method);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    unaff_R15 = &"description";
    cVar10 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                       (node,"description",(node->klass->vtable)._28_HasKey.method);
    if (cVar10 == '\0') {
label_044c6db1:
      unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
label_044c6db3:
      return (bool_conflict)unaff_RBP;
    }
    pMVar40 = "description";
    pMVar29 = (MethodInfo *)node;
    puVar23 = (undefined8 *)
              (*(node->klass->vtable)._7_get_Item.methodPtr)
                        (node,"description",(node->klass->vtable)._7_get_Item.method);
    if (puVar23 != (undefined8 *)0x0) {
      in_RCX = (Il2CppClass *)*puVar23;
      cVar10 = (*(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->_15_Remove).methodPtr)
                         (puVar23,(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                                  _15_Remove).method);
      unaff_RBP = (System_Collections_Generic_List_object__c **)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
      if (cVar10 != '\0') goto label_044c6db3;
      pMVar40 = "description";
      pMVar29 = (MethodInfo *)node;
      plVar24 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                  (node,"description",(node->klass->vtable)._7_get_Item.method);
      if (plVar24 != (long *)0x0) {
        cVar10 = (**(code **)(*plVar24 + 0x208))(plVar24,*(undefined8 *)(*plVar24 + 0x210));
        if (cVar10 != '\0') {
          pMVar40 = "description";
          pSVar25 = (SimpleJSONFixed_JSONNode_o *)
                    (*(node->klass->vtable)._7_get_Item.methodPtr)
                              (node,"description",(node->klass->vtable)._7_get_Item.method);
          pSVar26 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar25,pMVar40);
          *description = pSVar26;
          il2cpp_runtime_helper_022b4080(description,pSVar26);
          goto label_044c6db3;
        }
        goto label_044c6db1;
      }
    }
  }
  pMStack_60 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
  pMVar31 = (MethodInfo *)&pMStack_60;
  pSStack_58 = node;
  if (g_data_057aeadc == '\0') {
    pIStack_68 = (Il2CppClass *)0x44c6df6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_68 = (Il2CppClass *)0x44c6e02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditContributor_ToArray);
    pIStack_68 = (Il2CppClass *)0x44c6e0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
    pIStack_68 = (Il2CppClass *)0x44c6e1a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgCreditContributor);
    pIStack_68 = (Il2CppClass *)0x44c6e26;
    il2cpp_runtime_helper_023445d0(&"contributors");
    g_data_057aeadc = '\x01';
  }
  pMStack_60 = (MethodInfo *)0x0;
  pMVar40->methodPointer = (Il2CppMethodPointer)0x0;
  pMVar41 = (MethodInfo *)0x0;
  pIStack_68 = (Il2CppClass *)0x44c6e46;
  node_00 = pMVar40;
  il2cpp_runtime_helper_022b4080();
  if (pMVar29 != (MethodInfo *)0x0) {
    pIStack_68 = (Il2CppClass *)0x44c6e6d;
    cVar10 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[0x1c].methodPtr)
                       (pMVar29,"contributors",((Il2CppClass *)pMVar29->methodPointer)->vtable[0x1c].method);
    if (cVar10 == '\0') {
      return 0;
    }
    pIStack_68 = (Il2CppClass *)0x44c6e8c;
    pMVar41 = "contributors";
    node_00 = pMVar29;
    puVar23 = (undefined8 *)
              (*((Il2CppClass *)pMVar29->methodPointer)->vtable[7].methodPtr)
                        (pMVar29,"contributors",((Il2CppClass *)pMVar29->methodPointer)->vtable[7].method);
    unaff_RBP = (System_Collections_Generic_List_object__c **)&"contributors";
    if (puVar23 != (undefined8 *)0x0) {
      in_RCX = (Il2CppClass *)*puVar23;
      pIStack_68 = (Il2CppClass *)0x44c6ea8;
      cVar10 = (*(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                 _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).methodPtr)
                         (puVar23,(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                                  _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).method);
      if (cVar10 == '\0') {
        return 0;
      }
      pIStack_68 = (Il2CppClass *)0x44c6ec7;
      pMVar41 = "contributors";
      node_00 = pMVar29;
      pMVar27 = (MethodInfo *)
                (*((Il2CppClass *)pMVar29->methodPointer)->vtable[7].methodPtr)
                          (pMVar29,"contributors",((Il2CppClass *)pMVar29->methodPointer)->vtable[7].method);
      if (pMVar27 != (MethodInfo *)0x0) {
        in_RCX = (Il2CppClass *)pMVar27->methodPointer;
        pMVar41 = (MethodInfo *)
                  (((System_Collections_Generic_List_object__c *)(in_RCX->vtable + 0x23))->_1).
                  implementedInterfaces;
        pIStack_68 = (Il2CppClass *)0x44c6ee3;
        pMVar28 = (MethodInfo *)(*in_RCX->vtable[0x2d].methodPtr)();
        node_00 = pMVar27;
        if (pMVar28 != (MethodInfo *)0x0) {
          pIStack_68 = (Il2CppClass *)0x44c6f02;
          uVar11 = (*((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar28,((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].method);
          unaff_RBP = (System_Collections_Generic_List_object__c **)(ulong)uVar11;
          pIStack_68 = (Il2CppClass *)0x44c6f13;
          pMVar29 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgCreditContributor);
          pIStack_68 = (Il2CppClass *)0x44c6f2a;
          System_Collections_Generic_List_object____ctor_362b930
                    ((System_Collections_Generic_List_object__o *)pMVar29,uVar11,MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
          pMVar41 = ((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].method;
          pIStack_68 = (Il2CppClass *)0x44c6f3d;
          node_00 = pMVar28;
          iVar12 = (*((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].methodPtr)();
          unaff_R15 = (MethodInfo **)pMVar28;
          if (iVar12 < 1) {
            if (pMVar29 != (MethodInfo *)0x0) goto label_044c7009;
          }
          else {
            if (pMVar29 != (MethodInfo *)0x0) {
              unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
              unaff_R13 = &MethodInfo_Void_Add;
              do {
                pIStack_68 = (Il2CppClass *)0x44c6fa6;
                auVar45 = (*((Il2CppClass *)pMVar28->methodPointer)->vtable[5].methodPtr)
                                    (pMVar28,unaff_RBP,
                                     ((Il2CppClass *)pMVar28->methodPointer)->vtable[5].method);
                node_00 = auVar45._0_8_;
                pIStack_68 = (Il2CppClass *)0x44c6fb1;
                bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                                   ((SimpleJSONFixed_JSONNode_o *)node_00,
                                    (ApplicationManagers_Credits_AottgCreditContributor_o **)&pMStack_60,
                                    auVar45._8_8_);
                in_RCX = (Il2CppClass *)MethodInfo_Void_Add;
                if ((char)bVar13 == '\0') {
                  return 0;
                }
                piVar1 = (int *)((long)&pMVar29->name + 4);
                *piVar1 = *piVar1 + 1;
                pIVar7 = pMVar29->invoker_method;
                pMVar41 = pMStack_60;
                unaff_R12 = (MethodInfo *)&pMStack_60;
                if (pIVar7 == (InvokerMethod)0x0) goto label_044c7053;
                uVar11 = *(uint *)&pMVar29->name;
                if (uVar11 < *(uint *)(pIVar7 + 0x18)) {
                  *(uint *)&pMVar29->name = uVar11 + 1;
                  *(MethodInfo **)(pIVar7 + (long)(int)uVar11 * 8 + 0x20) = pMStack_60;
                  pIStack_68 = (Il2CppClass *)0x44c6fef;
                  il2cpp_runtime_helper_022b4080(pIVar7 + (long)(int)uVar11 * 8 + 0x20);
                }
                else {
                  pIStack_68 = (Il2CppClass *)0x44c6f77;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pMVar29,(Il2CppObject *)pMStack_60,
                             *(MethodInfo_362C220 **)
                              (*(long *)((long)(((System_Collections_Generic_List_object__c *)in_RCX)->_1).
                                               byval_arg.data + 0xc0) + 0x70));
                }
                uVar11 = (int)unaff_RBP + 1;
                unaff_RBP = (System_Collections_Generic_List_object__c **)(ulong)uVar11;
                pIStack_68 = (Il2CppClass *)0x44c6f8d;
                iVar12 = (*((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].methodPtr)
                                   (pMVar28,((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].method);
              } while ((int)uVar11 < iVar12);
label_044c7009:
              pIStack_68 = (Il2CppClass *)0x44c701b;
              pSVar30 = System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_object__o *)pMVar29,MethodInfo_AottgCreditContributor_ToArray);
              pMVar40->methodPointer = (Il2CppMethodPointer)pSVar30;
              pIStack_68 = (Il2CppClass *)0x44c7029;
              il2cpp_runtime_helper_022b4080(pMVar40,pSVar30);
              return (bool_conflict)CONCAT71((int7)((ulong)pMVar29 >> 8),1);
            }
            pMVar29 = (MethodInfo *)0x0;
            pIStack_68 = (Il2CppClass *)0x44c7044;
            auVar45 = (*((Il2CppClass *)pMVar28->methodPointer)->vtable[5].methodPtr)
                                (pMVar28,0,((Il2CppClass *)pMVar28->methodPointer)->vtable[5].method);
            node_00 = auVar45._0_8_;
            pIStack_68 = (Il2CppClass *)0x44c704f;
            bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                               ((SimpleJSONFixed_JSONNode_o *)node_00,
                                (ApplicationManagers_Credits_AottgCreditContributor_o **)&pMStack_60,
                                auVar45._8_8_);
            pMVar41 = pMVar31;
            if ((char)bVar13 == '\0') {
              return 0;
            }
          }
        }
      }
    }
  }
label_044c7053:
  pIStack_68 = (Il2CppClass *)0x44c7058;
  il2cpp_runtime_helper_022b2c90();
  pMStack_88 = pMVar29;
  pMStack_80 = unaff_R12;
  pMStack_78 = pMVar40;
  pMStack_70 = (MethodInfo *)unaff_R15;
  pIStack_68 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeada == '\0') {
    pMStack_90 = (MethodInfo *)0x44c7083;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pMStack_90 = (MethodInfo *)0x44c708f;
    il2cpp_runtime_helper_023445d0(&"groups");
    g_data_057aeada = '\x01';
  }
  pMVar41->methodPointer = (Il2CppMethodPointer)0x0;
  now.fields._8_8_ = (Il2CppClass *)0x0;
  pMStack_90 = (MethodInfo *)0x44c70a7;
  pMVar40 = pMVar41;
  il2cpp_runtime_helper_022b4080();
  if (node_00 != (MethodInfo *)0x0) {
    unaff_RBP = &"groups";
    pMStack_90 = (MethodInfo *)0x44c70ce;
    cVar10 = (*((Il2CppClass *)node_00->methodPointer)->vtable[0x1c].methodPtr)
                       (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[0x1c].method);
    if (cVar10 == '\0') {
label_044c720a:
      unaff_R15 = (MethodInfo **)0x0;
label_044c720d:
      return (bool_conflict)unaff_R15;
    }
    pMStack_90 = (MethodInfo *)0x44c70ed;
    now.fields._8_8_ = (Il2CppClass *)"groups";
    pMVar40 = node_00;
    puVar23 = (undefined8 *)
              (*((Il2CppClass *)node_00->methodPointer)->vtable[7].methodPtr)
                        (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[7].method);
    if (puVar23 != (undefined8 *)0x0) {
      in_RCX = (Il2CppClass *)*puVar23;
      pMStack_90 = (MethodInfo *)0x44c7109;
      cVar10 = (*(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                 _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).methodPtr)
                         (puVar23,(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                                  _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).method);
      if (cVar10 == '\0') goto label_044c720a;
      pMStack_90 = (MethodInfo *)0x44c7128;
      now.fields._8_8_ = (Il2CppClass *)"groups";
      pMVar40 = node_00;
      pMVar29 = (MethodInfo *)
                (*((Il2CppClass *)node_00->methodPointer)->vtable[7].methodPtr)
                          (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[7].method);
      if (pMVar29 != (MethodInfo *)0x0) {
        in_RCX = (Il2CppClass *)pMVar29->methodPointer;
        now.fields._8_8_ =
             (Il2CppClass *)
             (((System_Collections_Generic_List_object__c *)(in_RCX->vtable + 0x23))->_1).
             implementedInterfaces;
        pMStack_90 = (MethodInfo *)0x44c7144;
        pMVar31 = (MethodInfo *)
                  (*(code *)(((System_Collections_Generic_List_object__c *)(in_RCX->vtable + 0x23))->_1).
                            nestedTypes)();
        pMVar40 = pMVar29;
        if (pMVar31 != (MethodInfo *)0x0) {
          pMStack_90 = (MethodInfo *)0x44c7163;
          uVar14 = (*((Il2CppClass *)pMVar31->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar31,((Il2CppClass *)pMVar31->methodPointer)->vtable[0xb].method);
          in_RCX = (Il2CppClass *)&TypeInfo_AottgCreditGroup;
          pMStack_90 = (MethodInfo *)0x44c7174;
          now.fields._8_8_ = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgCreditGroup,uVar14);
          pMVar41->methodPointer = (Il2CppMethodPointer)now.fields._8_8_;
          pMStack_90 = (MethodInfo *)0x44c7182;
          il2cpp_runtime_helper_022b4080(pMVar41,now.fields._8_8_);
          pMStack_90 = (MethodInfo *)0x44c7196;
          iVar12 = (*((Il2CppClass *)pMVar31->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar31,((Il2CppClass *)pMVar31->methodPointer)->vtable[0xb].method);
          unaff_R15 = (MethodInfo **)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
          if (0 < iVar12) {
            node_00 = (MethodInfo *)&g_data_00000020;
            unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
            do {
              pMStack_90 = (MethodInfo *)0x44c71c6;
              pMVar40 = pMVar31;
              auVar45 = (*((Il2CppClass *)pMVar31->methodPointer)->vtable[5].methodPtr)
                                  (pMVar31,(ulong)unaff_RBP & 0xffffffff,
                                   ((Il2CppClass *)pMVar31->methodPointer)->vtable[5].method);
              now.fields._8_8_ = (Il2CppClass *)pMVar41->methodPointer;
              unaff_R12 = pMVar31;
              if (now.fields._8_8_ == (Il2CppClass *)0x0) goto label_044c7219;
              in_RCX = (Il2CppClass *)(ulong)*(uint *)&((now.fields._8_8_)->_1).namespaze;
              if (in_RCX <= unaff_RBP) goto label_044c721e;
              pMStack_90 = (MethodInfo *)0x44c71e1;
              bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
                                 (auVar45._0_8_,
                                  (ApplicationManagers_Credits_AottgCreditGroup_o **)
                                  ((long)&((now.fields._8_8_)->_1).image + (long)node_00),auVar45._8_8_);
              if ((char)bVar13 == '\0') goto label_044c720a;
              unaff_RBP = (System_Collections_Generic_List_object__c **)
                          ((long)&(((Il2CppClass *)unaff_RBP)->_1).image + 1);
              pMStack_90 = (MethodInfo *)0x44c71fd;
              iVar12 = (*((Il2CppClass *)pMVar31->methodPointer)->vtable[0xb].methodPtr)
                                 (pMVar31,((Il2CppClass *)pMVar31->methodPointer)->vtable[0xb].method);
              node_00 = (MethodInfo *)&node_00->virtualMethodPointer;
            } while ((long)unaff_RBP < (long)iVar12);
          }
          goto label_044c720d;
        }
      }
    }
  }
label_044c7219:
  pMStack_90 = (MethodInfo *)0x44c721e;
  il2cpp_runtime_helper_022b2c90();
label_044c721e:
  pMStack_90 = (MethodInfo *)0x44c7223;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_b0 = node_00;
  pMStack_a8 = unaff_R12;
  ppSStack_a0 = unaff_R13;
  pMStack_98 = pMVar41;
  pMStack_90 = (MethodInfo *)unaff_R15;
  if (g_data_057aeadb == '\0') {
    pMStack_d8 = (MethodInfo *)0x44c7258;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pMStack_d8 = (MethodInfo *)0x44c7264;
    il2cpp_runtime_helper_023445d0(&"title");
    g_data_057aeadb = '\x01';
  }
  pSStack_b8 = (System_String_o *)0x0;
  pSStack_c0 = (System_String_o *)0x0;
  pAStack_c8 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  ((now.fields._8_8_)->_1).image = (Il2CppClass *)0x0;
  pMStack_d8 = (MethodInfo *)0x44c7297;
  il2cpp_runtime_helper_022b4080(now.fields._8_8_);
  if (g_data_057aeae0 == '\0') {
    pMStack_d8 = (MethodInfo *)0x44c72ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pMStack_d8 = (MethodInfo *)0x44c72cb;
    il2cpp_runtime_helper_02337ed0();
  }
  puVar23 = (undefined8 *)0x0;
  pMStack_d8 = (MethodInfo *)0x44c72d9;
  pMVar29 = pMVar40;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar40,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (pMVar40 != (MethodInfo *)0x0) {
    pMStack_d8 = (MethodInfo *)0x44c72fd;
    cVar10 = (**(code **)(pMVar40->methodPointer + 0x248))
                       (pMVar40,*(undefined8 *)(pMVar40->methodPointer + 0x250));
    if (cVar10 != '\0') {
      pMStack_d8 = (MethodInfo *)0x44c731c;
      bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)pMVar40,"title",&pSStack_b8,(MethodInfo *)in_RCX)
      ;
      if ((char)bVar13 != '\0') {
        pMStack_d8 = (MethodInfo *)0x44c732d;
        bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                           ((SimpleJSONFixed_JSONNode_o *)pMVar40,&pSStack_c0,method_01);
        if ((char)bVar13 != '\0') {
          pMStack_d8 = (MethodInfo *)0x44c733e;
          bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                             ((SimpleJSONFixed_JSONNode_o *)pMVar40,&pAStack_c8,method_02);
          title = pSStack_b8;
          pSVar26 = pSStack_c0;
          contributors = pAStack_c8;
          if ((char)bVar13 != '\0') {
            pMStack_d8 = (MethodInfo *)0x44c7360;
            pIVar32 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditGroup);
            pMStack_d8 = (MethodInfo *)0x44c7374;
            ApplicationManagers_Credits_AottgCreditGroup___ctor
                      ((ApplicationManagers_Credits_AottgCreditGroup_o *)pIVar32,title,pSVar26,contributors,
                       in_R8);
            ((now.fields._8_8_)->_1).image = pIVar32;
            pMStack_d8 = (MethodInfo *)0x44c7382;
            il2cpp_runtime_helper_022b4080(now.fields._8_8_,pIVar32);
            return (bool_conflict)CONCAT71((int7)((ulong)pIVar32 >> 8),1);
          }
        }
      }
    }
    return 0;
  }
  pMStack_d8 = (MethodInfo *)0x44c739d;
  il2cpp_runtime_helper_022b2c90();
  uStack_f0 = 0;
  pMStack_e8 = unaff_R12;
  pIStack_e0 = now.fields._8_8_;
  pMStack_d8 = pMVar40;
  if (g_data_057aeadd == '\0') {
    ppMStack_120 = (MethodInfo **)0x44c73c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditContributor);
    ppMStack_120 = (MethodInfo **)0x44c73d2;
    il2cpp_runtime_helper_023445d0(&"accountId");
    ppMStack_120 = (MethodInfo **)0x44c73de;
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aeadd = '\x01';
  }
  pIStack_110 = (Il2CppClass *)0x0;
  SStack_108._a = 0;
  SStack_108._b = 0;
  SStack_108._c = 0;
  SStack_108._d = '\0';
  SStack_108._e = '\0';
  SStack_108._f = '\0';
  SStack_108._g = '\0';
  SStack_108._h = '\0';
  SStack_108._i = '\0';
  SStack_108._j = '\0';
  SStack_108._k = '\0';
  *puVar23 = 0;
  ppMStack_120 = (MethodInfo **)0x44c7407;
  il2cpp_runtime_helper_022b4080(puVar23);
  if (g_data_057aeae0 == '\0') {
    ppMStack_120 = (MethodInfo **)0x44c741c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    ppMStack_120 = (MethodInfo **)0x44c743b;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar36 = (MethodInfo **)0x0;
  ppMStack_120 = (MethodInfo **)0x44c7449;
  pMVar40 = pMVar29;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar29,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (pMVar29 != (MethodInfo *)0x0) {
    ppMStack_120 = (MethodInfo **)0x44c746d;
    cVar10 = (**(code **)(pMVar29->methodPointer + 0x248))
                       (pMVar29,*(undefined8 *)(pMVar29->methodPointer + 0x250));
    if (cVar10 == '\0') {
      return 0;
    }
    ppMStack_120 = (MethodInfo **)0x44c748c;
    bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar29,"name",(System_String_o **)&pIStack_110,
                        (MethodInfo *)in_RCX);
    if ((char)bVar13 == '\0') {
      return 0;
    }
    ppMVar36 = &"accountId";
    ppMStack_120 = (MethodInfo **)0x44c74b1;
    cVar10 = (**(code **)(pMVar29->methodPointer + 0x2f8))
                       (pMVar29,"accountId",*(undefined8 *)(pMVar29->methodPointer + 0x300));
    if (cVar10 == '\0') {
      return 0;
    }
    ppMStack_120 = (MethodInfo **)0x44c74cf;
    pMVar40 = pMVar29;
    plVar24 = (long *)(**(code **)(pMVar29->methodPointer + 0x1a8))
                                (pMVar29,"accountId",*(undefined8 *)(pMVar29->methodPointer + 0x1b0));
    if (plVar24 != (long *)0x0) {
      ppMStack_120 = (MethodInfo **)0x44c74eb;
      cVar10 = (**(code **)(*plVar24 + 0x228))(plVar24);
      if (cVar10 != '\0') {
        pSVar26 = (System_String_o *)0x0;
label_044c74f2:
        now.fields._8_8_ = pIStack_110;
        ppMStack_120 = (MethodInfo **)0x44c7506;
        pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditContributor);
        ppMStack_120 = (MethodInfo **)0x44c7513;
        System_Object___ctor(pIVar33,(MethodInfo *)0x0);
        pIVar33[1].klass = now.fields._8_8_;
        ppMStack_120 = (MethodInfo **)0x44c7523;
        il2cpp_runtime_helper_022b4080(pIVar33 + 1,now.fields._8_8_);
        pIVar33[1].monitor = pSVar26;
        ppMStack_120 = (MethodInfo **)0x44c7533;
        il2cpp_runtime_helper_022b4080(&pIVar33[1].monitor,pSVar26);
        *puVar23 = pIVar33;
        ppMStack_120 = (MethodInfo **)0x44c7541;
        il2cpp_runtime_helper_022b4080(puVar23,pIVar33);
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar33 >> 8),1);
      }
      ppMStack_120 = (MethodInfo **)0x44c755e;
      pMVar40 = pMVar29;
      plVar24 = (long *)(**(code **)(pMVar29->methodPointer + 0x1a8))
                                  (pMVar29,"accountId",*(undefined8 *)(pMVar29->methodPointer + 0x1b0));
      if (plVar24 != (long *)0x0) {
        ppMStack_120 = (MethodInfo **)0x44c7576;
        cVar10 = (**(code **)(*plVar24 + 0x208))(plVar24,*(undefined8 *)(*plVar24 + 0x210));
        if (cVar10 == '\0') {
          return 0;
        }
        ppMStack_120 = (MethodInfo **)0x44c7590;
        pMVar40 = "accountId";
        pSVar25 = (SimpleJSONFixed_JSONNode_o *)
                  (**(code **)(pMVar29->methodPointer + 0x1a8))
                            (pMVar29,"accountId",*(undefined8 *)(pMVar29->methodPointer + 0x1b0));
        ppMStack_120 = (MethodInfo **)0x44c7598;
        pSVar26 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar25,pMVar40);
        ppMStack_120 = (MethodInfo **)0x44c75a7;
        bVar13 = System_String__IsNullOrEmpty(pSVar26,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          return 0;
        }
        ppMStack_120 = (MethodInfo **)0x44c75bc;
        bVar13 = System_Guid__TryParse(pSVar26,(System_Guid_o *)&SStack_108,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return 0;
        }
        goto label_044c74f2;
      }
    }
  }
  ppMStack_120 = (MethodInfo **)0x44c75db;
  il2cpp_runtime_helper_022b2c90();
  ppMStack_120 = ppMVar36;
  if (g_data_057aeadf == '\0') {
    pMStack_128 = (MethodInfo *)0x44c75f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeadf = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pMStack_128 = (MethodInfo *)0x44c7618;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_128 = (MethodInfo *)0x44c7624;
  bVar13 = SimpleJSONFixed_JSONNode__op_Equality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar40,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return 0;
  }
  if (pMVar40 != (MethodInfo *)0x0) {
    pMStack_128 = (MethodInfo *)0x44c7640;
    cVar10 = (**(code **)(pMVar40->methodPointer + 0x228))
                       (pMVar40,*(undefined8 *)(pMVar40->methodPointer + 0x230));
    if (cVar10 != '\0') {
      return 0;
    }
    pMStack_128 = (MethodInfo *)0x44c765b;
    pSVar26 = (System_String_o *)(**(code **)(pMVar40->methodPointer + 0x1c8))(pMVar40);
    if (pSVar26 != (System_String_o *)0x0) {
      pSVar26 = System_String__Trim(pSVar26,(MethodInfo *)0x0);
      return (bool_conflict)pSVar26;
    }
  }
  pMStack_128 = (MethodInfo *)ApplicationManagers_Credits_AottgCreditsService__Init;
  uStack_148 = il2cpp_runtime_helper_022b2c90();
  pMStack_140 = pMVar40;
  pMStack_138 = unaff_R12;
  puStack_130 = puVar23;
  pMStack_128 = pMVar29;
  if (g_data_057aeae2 == '\0') {
    pIStack_150 = (Il2CppClass *)0x44c768d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
    pIStack_150 = (Il2CppClass *)0x44c7699;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    pIStack_150 = (Il2CppClass *)0x44c76a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchCredits);
    pIStack_150 = (Il2CppClass *)0x44c76b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pIStack_150 = (Il2CppClass *)0x44c76bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
    pIStack_150 = (Il2CppClass *)0x44c76c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
    pIStack_150 = (Il2CppClass *)0x44c76d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pIStack_150 = (Il2CppClass *)0x44c76e1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
    g_data_057aeae2 = '\x01';
  }
  pIStack_150 = (Il2CppClass *)0x44c770b;
  pIVar33 = Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar33;
  pIStack_150 = (Il2CppClass *)0x44c772a;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar33);
  lVar15 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  pIStack_150 = (Il2CppClass *)0x44c7746;
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
  pIStack_150 = (Il2CppClass *)0x44c7760;
  System_Action_AottgCreditsService_UnitKey__object____ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    pIStack_150 = (Il2CppClass *)0x44c7778;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar18._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  pIStack_150 = (Il2CppClass *)0x44c7794;
  __this_00 = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  pIStack_150 = (Il2CppClass *)0x44c77ac;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_00,(System_TimeSpan_o)SVar18._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  pIStack_150 = (Il2CppClass *)0x44c77bb;
  __this_01 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
  pIStack_150 = (Il2CppClass *)0x44c77d8;
  pSVar42 = fetch;
  pAVar43 = __this_01;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            (__this_01,fetch,(System_Func_DateTimeOffset__o *)0x0,__this_00,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
  if (lVar15 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar15 + 0x20) = __this_01;
    bVar13 = il2cpp_runtime_helper_022b4080(lVar15 + 0x20,__this_01);
    return bVar13;
  }
  pIStack_150 = (Il2CppClass *)ApplicationManagers_Credits_AottgCreditsService__GetCredits;
  il2cpp_runtime_helper_022b2c90();
  pAStack_170 = (ApplicationManagers_Api_AottgQueryPolicy_o *)__this_01;
  pAStack_168 = __this_00;
  pSStack_160 = fetch;
  lStack_158 = lVar15;
  pIStack_150 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeae3 == '\0') {
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c788d;
  pIVar32 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c789a;
  now.fields._8_8_ = pIVar32;
  System_Object___ctor((Il2CppObject *)pIVar32,(MethodInfo *)0x0);
  if (pIVar32 == (Il2CppClass *)0x0) {
label_044c7a30:
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)now.fields._8_8_,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  ppcVar37 = &(pIVar32->_1).name;
  (pIVar32->_1).name = (char *)pAVar43;
  pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar37);
  now.fields._8_8_ = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78f2;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)now.fields._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar32 = "not_initialized";
  if ((char)bVar13 != '\0') {
    pcVar8 = *ppcVar37;
    if (pcVar8 == (char *)0x0) {
      return bVar13;
    }
    if (g_data_057aead4 == '\0') {
      pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7925;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c793b;
    pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7948;
    System_Object___ctor(pIVar33,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar33[1].klass = 3;
    pIVar33[1].monitor = (void *)0x0;
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7962;
    il2cpp_runtime_helper_022b4080(&pIVar33[1].monitor,0);
    pIVar33[2].klass = pIVar32;
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7972;
    il2cpp_runtime_helper_022b4080(pIVar33 + 2,pIVar32);
    *(undefined2 *)&pIVar33[2].monitor = 0;
    *(undefined1 *)((long)&pIVar33[2].monitor + 2) = 0;
    bVar13 = (**(code **)(pcVar8 + 0x18))
                       (*(undefined8 *)(pcVar8 + 0x40),pIVar33,*(undefined8 *)(pcVar8 + 0x28));
    return bVar13;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar32 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79e3;
  onResult = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79fd;
  now.fields._8_8_ = onResult;
  System_Action_object____ctor();
  pAStack_178 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pAStack_170;
  SVar18._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar32 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar4;
  pIVar34 = (Il2CppClass *)((ulong)pSVar42 & 0xff);
  pAStack_170 = pAStack_168;
  pIStack_180 = (Il2CppClass *)0x0;
  lVar15 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pIVar34;
  pIVar44 = MethodInfo_Void_Get;
  pAStack_168 = (ApplicationManagers_Api_AottgQueryPolicy_o *)unaff_R13;
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    pIStack_188 = (Il2CppClass *)0x341a1ae;
    lVar15 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_188 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar15);
  pIVar17 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_188 = (Il2CppClass *)0x341a1d0;
  __this_02 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar17);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar32;
    pIStack_188 = (Il2CppClass *)0x341a1ec;
    pIVar17 = pIVar32;
    pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar4;
    if (onResult == (Il2CppClass *)0x0) goto label_0341a444;
    __this_02 = *(Il2CppClass **)&(pIVar32->_1).byval_arg.bits;
    if (__this_02 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(Il2CppClass **)
            (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_188 = (Il2CppClass *)0x341a221;
      pIVar17 = (Il2CppClass *)t2._ticks;
      bVar13 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (__this_02,t2._ticks,&pIStack_180);
      if ((char)bVar13 == '\0') {
        lVar15 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x58)
        ;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          pIStack_188 = (Il2CppClass *)0x341a242;
          lVar15 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_188 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar15);
        pIVar17 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_188 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar17);
        __this_02 = *(Il2CppClass **)&(pIVar32->_1).byval_arg.bits;
        pIStack_180 = (Il2CppClass *)t2._ticks;
        if (__this_02 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar17 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_188 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_02,pIVar17,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (Il2CppClass *)(pIVar32->_1).namespaze;
      if (now.fields._8_8_ != (Il2CppClass *)0x0) {
        pIVar17 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_02 = ((now.fields._8_8_)->_1).element_class;
        pIStack_188 = (Il2CppClass *)0x341a2ad;
        auVar45 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)pSVar42 == '\0') {
          now.fields._8_8_ = (Il2CppClass *)(auVar45._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo **)
                   (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_188 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar45._0_8_;
          pIVar17 = pIStack_180;
          __this_02 = pIVar32;
          pIVar44 = onResult;
          uVar11 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar32,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_180,now
                              ,(System_Action_AottgQueryResult_TValue___o *)onResult,
                              (MethodInfo_331A460 *)in_R9);
          pIVar16 = (Il2CppClass *)(ulong)uVar11;
          if ((char)uVar11 != '\0') goto label_0341a444;
        }
        if (pIStack_180 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_180->_1).this_arg.bits == '\0') {
            pIStack_188 = (Il2CppClass *)0x341a327;
            pIVar17 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIStack_188 = (Il2CppClass *)0x341a30e;
            pIVar17 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_180->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          __this_02 = (onResult->_1).element_class;
          pIStack_188 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult->_1).namespaze)(__this_02,pIVar17,*(undefined8 *)&(onResult->_1).byval_arg.bits)
          ;
          if ((pIStack_180 != (Il2CppClass *)0x0) &&
             (__this_02 = (Il2CppClass *)(pIStack_180->_1).name, __this_02 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(Il2CppClass **)
                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_02->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar8 = (__this_02->_1).name;
            if (pcVar8 != (char *)0x0) {
              uVar11 = *(uint *)&(__this_02->_1).namespaze;
              pIVar17 = onResult;
              if (uVar11 < *(uint *)(pcVar8 + 0x18)) {
                now.fields._8_8_ = (Il2CppClass *)(ulong)(uVar11 + 1);
                *(uint *)&(__this_02->_1).namespaze = uVar11 + 1;
                __this_02 = (Il2CppClass *)(pcVar8 + (long)(int)uVar11 * 8 + 0x20);
                *(Il2CppClass **)(pcVar8 + (long)(int)uVar11 * 8 + 0x20) = onResult;
                pIStack_188 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pIVar16 = pIStack_180;
              }
              else {
                pIStack_188 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
                pIVar16 = pIStack_180;
              }
              pIStack_180 = pIVar16;
              if (pIVar16 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIVar16->_1).this_arg.bits + 2) != '\0') {
label_0341a444:
                  return (bool_conflict)pIVar16;
                }
                *(undefined1 *)((long)&(pIVar16->_1).this_arg.bits + 2) = 1;
                pcVar8 = (pIVar32->_1).name;
                uVar3 = *(undefined1 *)&(__this->_1).namespaze;
                onResult = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar3);
                lVar15 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xe8);
                if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                  pIStack_188 = (Il2CppClass *)0x341a3fe;
                  lVar15 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_188 = (Il2CppClass *)0x341a406;
                pIVar32 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar15);
                now.fields._8_8_ =
                     *(Il2CppClass **)
                      (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_188 = (Il2CppClass *)0x341a42d;
                pIVar17 = __this;
                __this_02 = pIVar32;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar8 != (char *)0x0) {
                  pIStack_188 = (Il2CppClass *)0x341a444;
                  pIVar16 = (Il2CppClass *)
                            (**(code **)(pcVar8 + 0x18))
                                      (*(undefined8 *)(pcVar8 + 0x40),uVar3,pIVar32,
                                       *(undefined8 *)(pcVar8 + 0x28));
                  goto label_0341a444;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pIStack_188 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_198 = (Il2CppClass *)SVar18._ticks;
  pIVar16 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar39._ticks = (int64_t)pIVar17;
  plVar24 = (long *)__this_02;
  pMStack_1c0 = in_R9;
  pIStack_1b8 = pIVar44;
  pIStack_1b0 = __this;
  pIStack_1a8 = onResult;
  pIStack_1a0 = pIVar34;
  pIStack_190 = pIVar32;
  pIStack_188 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar24 = &TypeInfo_TimeSpan;
    pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_1d8 = '\0';
  uStack_1d7 = 0;
  uStack_1d0 = 0;
  if (pIVar17 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar17->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar17->_1).this_arg.bits + 1) == '\0') {
        return 0;
      }
      pvVar5 = (__this_02->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        cStack_1d8 = *(char *)((long)pvVar5 + 0x18);
        uStack_1d0 = *(undefined8 *)((long)pvVar5 + 0x20);
        if (cStack_1d8 == '\0') {
          return 0;
        }
        ppIVar2 = (Il2CppType **)&(pIVar17->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var9 = *(unkuint10 *)ppIVar2;
        SVar18._ticks = (int64_t)*(ushort *)&(pIVar17->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a5ed;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var9;
        left_00.fields._8_8_ = pIVar16;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ = (Il2CppClass *)SVar18._ticks;
        plVar24 = (long *)extraout_RDX.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar5 = (__this_02->_1).byval_arg.data;
        SVar39._ticks = (int64_t)pIVar16;
        if (pvVar5 != (void *)0x0) {
          cStack_1d8 = *(char *)((long)pvVar5 + 0x18);
          uStack_1d0 = *(undefined8 *)((long)pvVar5 + 0x20);
          pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a61f;
          __this_03.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_03.fields._0_8_ = &cStack_1d8;
          SVar18._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_03,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar38._ticks = 0;
          t2._ticks = 0;
          pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a649;
          bVar13 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)SVar18._ticks,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return 0;
          }
          plVar24 = (pIVar17->_1).byval_arg.data;
          SVar39._ticks = 1;
          pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a672;
          pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar24,1,
                               (MethodInfo_331B520 *)pMStack_1c0->klass->rgctx_data[0x21].method);
          now.fields._8_8_ = (Il2CppClass *)0x0;
          if (pIStack_1b8 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a68a;
            (*(code *)(pIStack_1b8->_1).namespaze)
                      ((pIStack_1b8->_1).element_class,pAVar19,
                       *(undefined8 *)&(pIStack_1b8->_1).byval_arg.bits);
            return (bool_conflict)CONCAT71((int7)((ulong)SVar38._ticks >> 8),1);
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar17->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var9 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (Il2CppClass *)(ulong)*(ushort *)&(pIVar17->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var9;
      left.fields._8_8_ = pIVar16;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar39._ticks = (int64_t)pIVar16;
      plVar24 = (long *)extraout_RDX.fields._dateData;
      SVar18._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar5 = (__this_02->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar5 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a54d;
        SVar39._ticks = t2._ticks;
        plVar24 = (long *)SVar18._ticks;
        bVar13 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar18._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_0341a589;
        plVar24 = (long *)(pIVar17->_1).namespaze;
        SVar39._ticks = 1;
        pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a576;
        pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar24,1,
                             (MethodInfo_331B380 *)pMStack_1c0->klass->rgctx_data[0x20].method);
        SVar38._ticks = t2._ticks;
        if (pIStack_1b8 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (Il2CppClass *)0x0;
      }
    }
  }
  pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_1f8 = pIVar17;
  pIStack_1f0 = (Il2CppClass *)SVar18._ticks;
  SStack_1e8 = extraout_RDX.fields._dateData;
  pAStack_1e0 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pSStack_208 = (System_Object_array *)0x0;
  pSVar30 = *(System_Object_array **)&(((Il2CppClass *)plVar24)->_1).byval_arg.bits;
  if (pSVar30 != (System_Object_array *)0x0) {
    uVar11 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pSVar30,SVar39._ticks & 0xff,&pSStack_208);
    if ((char)uVar11 == '\0') {
      return uVar11;
    }
    if ((pSStack_208 != (System_Object_array *)0x0) &&
       (((*(undefined1 *)((long)pSStack_208->m_Items + 0x1a) = 0, pAVar20 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pSVar30 = "unknown_error",
         pAVar20 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             ((System_String_o *)"unknown_error",
                              *(MethodInfo_331AB10 **)
                               (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar20 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) &&
        (pSVar30 = pSStack_208, pSStack_208 != (System_Object_array *)0x0)))) {
      if ((char)(pAVar20->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(pSStack_208->m_Items + 3) == '\0') {
label_0341a96a:
          *(undefined2 *)(pSStack_208->m_Items + 3) = 0x100;
          pSStack_208->max_length = 0;
          pSStack_208->m_Items[0] = (Il2CppObject *)(pAVar20->fields)._Error_k__BackingField;
          pSVar30 = (System_Object_array *)pSStack_208->m_Items;
          il2cpp_runtime_helper_022b4080();
          pSVar21 = pSStack_208;
          pcVar8 = (((Il2CppClass *)plVar24)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar30 = *(System_Object_array **)(pcVar8 + 0x40);
            Var46 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar21 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar21->m_Items + 1) = Var46;
              *(undefined4 *)((long)pSVar21->m_Items + 0x12) = uStack_1fe;
              *(undefined2 *)((long)pSVar21->m_Items + 0x16) = uStack_1fa;
              pSVar30 = (System_Object_array *)(pAVar20->fields)._Error_k__BackingField;
              pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                  ((System_String_o *)pSVar30,0,
                                   *(MethodInfo_331B520 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108))
              ;
joined_r0x0341a95f:
              if (((pSStack_208 != (System_Object_array *)0x0) &&
                  (pSVar30 = ((System_Collections_Generic_List_object__Fields *)&pSStack_208->bounds)->_items,
                  pSVar30 != (System_Object_array *)0x0)) &&
                 ((pSVar21 = System_Collections_Generic_List_object___ToArray
                                       ((System_Collections_Generic_List_object__o *)pSVar30,
                                        *(MethodInfo_362E340 **)
                                         (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) +
                                         0x148)), pSStack_208 != (System_Object_array *)0x0 &&
                  (pSVar6 = ((System_Collections_Generic_List_object__Fields *)&pSStack_208->bounds)->_items,
                  pSVar6 != (System_Object_array *)0x0)))) {
                piVar1 = (int *)((long)&pSVar6->max_length + 4);
                *piVar1 = *piVar1 + 1;
                length = (int32_t)pSVar6->max_length;
                *(undefined4 *)&pSVar6->max_length = 0;
                if (0 < length) {
                  pSVar30 = (System_Object_array *)pSVar6->bounds;
                  System_Array__Clear((System_Array_o *)pSVar30,0,length,(MethodInfo *)0x0);
                }
                if (pSVar21 != (System_Object_array *)0x0) {
                  uVar11 = (uint)pSVar21->max_length;
                  if ((int)uVar11 < 1) {
                    return uVar11;
                  }
                  uVar35 = 0;
                  if ((pSVar21->max_length & 0xffffffff) != 0) {
                    do {
                      pIVar33 = pSVar21->m_Items[uVar35];
                      if (pIVar33 != (Il2CppObject *)0x0) {
                        if (pIVar33 == (Il2CppObject *)0x0) goto label_0341a9ed;
                        pSVar30 = (System_Object_array *)pIVar33[4].klass;
                        (*pIVar33[1].monitor)(pSVar30,pAVar19,pIVar33[2].monitor);
                      }
                      uVar35 = uVar35 + 1;
                      uVar11 = (uint)pSVar21->max_length;
                      if ((long)(int)uVar11 <= (long)uVar35) {
                        return uVar11;
                      }
                    } while (uVar35 < uVar11);
                  }
                  goto label_0341a9f2;
                }
              }
            }
          }
        }
        else {
          pvVar5 = (((Il2CppClass *)plVar24)->_1).byval_arg.data;
          if (pvVar5 != (void *)0x0) {
            if (*(char *)((long)pvVar5 + 0x28) == '\0') goto label_0341a96a;
            pSStack_208->m_Items[0] = (Il2CppObject *)(pAVar20->fields)._Error_k__BackingField;
            pSVar30 = (System_Object_array *)pSStack_208->m_Items;
            il2cpp_runtime_helper_022b4080();
            if (pSStack_208 != (System_Object_array *)0x0) {
              pSVar30 = (System_Object_array *)pSStack_208->max_length;
              pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  ((Il2CppObject *)pSVar30,(pAVar20->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
              ;
              goto joined_r0x0341a95f;
            }
          }
        }
      }
      else {
        *(undefined2 *)(pSStack_208->m_Items + 3) = 1;
        pSStack_208->max_length = (il2cpp_array_size_t)(pAVar20->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(&pSStack_208->max_length);
        pSVar30 = (System_Object_array *)0x0;
        if (pSStack_208 != (System_Object_array *)0x0) {
          pSStack_208->m_Items[0] = (Il2CppObject *)0x0;
          pSVar30 = (System_Object_array *)pSStack_208->m_Items;
          il2cpp_runtime_helper_022b4080(pSVar30,0);
          pSVar21 = pSStack_208;
          pcVar8 = (((Il2CppClass *)plVar24)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar30 = *(System_Object_array **)(pcVar8 + 0x40);
            Var46 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar21 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar21->m_Items + 1) = Var46;
              *(undefined2 *)((long)pSVar21->m_Items + 0x16) = uStack_1fa;
              *(undefined4 *)((long)pSVar21->m_Items + 0x12) = uStack_1fe;
              if (pSStack_208 != (System_Object_array *)0x0) {
                pSVar30 = (System_Object_array *)pSStack_208->max_length;
                pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                    ((Il2CppObject *)pSVar30,0,
                                     *(MethodInfo_331B380 **)
                                      (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100
                                      ));
                goto joined_r0x0341a95f;
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  uVar22 = il2cpp_runtime_helper_022b2ca0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)uVar22 >> 8),
                  *(undefined1 *)&((System_Collections_Generic_List_object__Fields *)&pSVar30->bounds)->_items
                 );
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadRequiredString
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x44c6bf0

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  undefined1 uVar3;
  byte bVar4;
  int32_t length;
  void *pvVar5;
  System_Object_array *pSVar6;
  InvokerMethod pIVar7;
  char *pcVar8;
  unkuint10 Var9;
  ApplicationManagers_Credits_AottgCreditContributor_array *contributors;
  System_String_o *title;
  char cVar10;
  uint uVar11;
  int iVar12;
  bool_conflict bVar13;
  undefined4 uVar14;
  bool_conflict extraout_EAX;
  long lVar15;
  Il2CppClass *__this;
  Il2CppClass *pIVar16;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar17;
  System_TimeSpan_Fields SVar18;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar19;
  System_TimeSpan_o t1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar20;
  System_Object_array *pSVar21;
  undefined8 uVar22;
  long *plVar23;
  SimpleJSONFixed_JSONNode_o *pSVar24;
  System_String_o *pSVar25;
  undefined8 *puVar26;
  MethodInfo *pMVar27;
  MethodInfo *pMVar28;
  MethodInfo *pMVar29;
  System_Object_array *pSVar30;
  MethodInfo *pMVar31;
  Il2CppClass *pIVar32;
  Il2CppObject *pIVar33;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_01;
  Il2CppClass *onResult;
  Il2CppClass *pIVar34;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  ulong uVar35;
  MethodInfo *node_00;
  MethodInfo **ppMVar36;
  char **ppcVar37;
  System_TimeSpan_Fields SVar38;
  System_Collections_Generic_List_object__c **unaff_RBP;
  System_TimeSpan_Fields SVar39;
  MethodInfo *pMVar40;
  MethodInfo *pMVar41;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSVar42;
  Il2CppClass *__this_02;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar43;
  Il2CppClass *pIVar44;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  MethodInfo *unaff_R12;
  System_Collections_Generic_List_object__c **unaff_R13;
  undefined1 auVar45 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_03;
  unkbyte10 Var46;
  System_Object_array *pSStack_220;
  undefined4 uStack_216;
  undefined2 uStack_212;
  Il2CppClass *pIStack_210;
  Il2CppClass *pIStack_208;
  System_DateTime_Fields SStack_200;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_1f8;
  char cStack_1f0;
  undefined7 uStack_1ef;
  undefined8 uStack_1e8;
  MethodInfo *pMStack_1d8;
  Il2CppClass *pIStack_1d0;
  Il2CppClass *pIStack_1c8;
  Il2CppClass *pIStack_1c0;
  Il2CppClass *pIStack_1b8;
  Il2CppClass *pIStack_1b0;
  Il2CppClass *pIStack_1a8;
  Il2CppClass *pIStack_1a0;
  Il2CppClass *pIStack_198;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_190;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_188;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_180;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSStack_178;
  long lStack_170;
  Il2CppClass *pIStack_168;
  undefined8 uStack_160;
  MethodInfo *pMStack_158;
  MethodInfo *pMStack_150;
  undefined8 *puStack_148;
  MethodInfo *pMStack_140;
  MethodInfo **ppMStack_138;
  Il2CppClass *pIStack_128;
  System_Guid_Fields SStack_120;
  undefined8 uStack_108;
  MethodInfo *pMStack_100;
  Il2CppClass *pIStack_f8;
  MethodInfo *pMStack_f0;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAStack_e0;
  System_String_o *pSStack_d8;
  System_String_o *pSStack_d0;
  MethodInfo *pMStack_c8;
  MethodInfo *pMStack_c0;
  System_Collections_Generic_List_object__c **ppSStack_b8;
  MethodInfo *pMStack_b0;
  MethodInfo *pMStack_a8;
  MethodInfo *pMStack_a0;
  MethodInfo *pMStack_98;
  MethodInfo *pMStack_90;
  MethodInfo *pMStack_88;
  Il2CppClass *pIStack_80;
  MethodInfo *pMStack_78;
  MethodInfo *pMStack_70;
  MethodInfo_37EC980 *method_00;
  
  *value = (System_String_o *)0x0;
  pMVar40 = (MethodInfo *)0x0;
  pMVar41 = (MethodInfo *)value;
  il2cpp_runtime_helper_022b4080();
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar10 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar10 == '\0') {
      return 0;
    }
    pMVar40 = (MethodInfo *)key;
    pMVar41 = (MethodInfo *)node;
    plVar23 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                (node,key,(node->klass->vtable)._7_get_Item.method);
    if (plVar23 != (long *)0x0) {
      cVar10 = (**(code **)(*plVar23 + 0x208))(plVar23,*(undefined8 *)(*plVar23 + 0x210));
      if (cVar10 != '\0') {
        pSVar24 = (SimpleJSONFixed_JSONNode_o *)
                  (*(node->klass->vtable)._7_get_Item.methodPtr)
                            (node,key,(node->klass->vtable)._7_get_Item.method);
        pSVar25 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar24,(MethodInfo *)key);
        *value = pSVar25;
        il2cpp_runtime_helper_022b4080(value);
        uVar11 = System_String__IsNullOrEmpty(*value,(MethodInfo *)0x0);
        return uVar11 ^ 1;
      }
      return 0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeade == '\0') {
    il2cpp_runtime_helper_023445d0(&"description");
    g_data_057aeade = '\x01';
  }
  pMVar40->methodPointer = (Il2CppMethodPointer)0x0;
  pMVar31 = (MethodInfo *)0x0;
  pMVar29 = pMVar40;
  il2cpp_runtime_helper_022b4080();
  if (pMVar41 != (MethodInfo *)0x0) {
    cVar10 = (*((Il2CppClass *)pMVar41->methodPointer)->vtable[0x1c].methodPtr)
                       (pMVar41,"description",((Il2CppClass *)pMVar41->methodPointer)->vtable[0x1c].method);
    if (cVar10 == '\0') {
label_044c6db1:
      unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
label_044c6db3:
      return (bool_conflict)unaff_RBP;
    }
    pMVar31 = "description";
    pMVar29 = pMVar41;
    puVar26 = (undefined8 *)
              (*((Il2CppClass *)pMVar41->methodPointer)->vtable[7].methodPtr)
                        (pMVar41,"description",((Il2CppClass *)pMVar41->methodPointer)->vtable[7].method);
    value = (System_String_o **)&"description";
    if (puVar26 != (undefined8 *)0x0) {
      method = (MethodInfo *)*puVar26;
      cVar10 = (*(((System_Collections_Generic_List_object__VTable *)((Il2CppClass *)method)->vtable)->
                 _15_Remove).methodPtr)
                         (puVar26,(((System_Collections_Generic_List_object__VTable *)
                                   ((Il2CppClass *)method)->vtable)->_15_Remove).method);
      unaff_RBP = (System_Collections_Generic_List_object__c **)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
      if (cVar10 != '\0') goto label_044c6db3;
      pMVar31 = "description";
      pMVar29 = pMVar41;
      plVar23 = (long *)(*((Il2CppClass *)pMVar41->methodPointer)->vtable[7].methodPtr)
                                  (pMVar41,"description",
                                   ((Il2CppClass *)pMVar41->methodPointer)->vtable[7].method);
      if (plVar23 != (long *)0x0) {
        cVar10 = (**(code **)(*plVar23 + 0x208))(plVar23,*(undefined8 *)(*plVar23 + 0x210));
        if (cVar10 != '\0') {
          pMVar31 = "description";
          pSVar24 = (SimpleJSONFixed_JSONNode_o *)
                    (*((Il2CppClass *)pMVar41->methodPointer)->vtable[7].methodPtr)
                              (pMVar41,"description",((Il2CppClass *)pMVar41->methodPointer)->vtable[7].method)
          ;
          now.fields._8_8_ =
               (Il2CppClass *)ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar24,pMVar31);
          pMVar40->methodPointer = (Il2CppMethodPointer)now.fields._8_8_;
          il2cpp_runtime_helper_022b4080(pMVar40,now.fields._8_8_);
          goto label_044c6db3;
        }
        goto label_044c6db1;
      }
    }
  }
  pMStack_78 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
  pMVar40 = (MethodInfo *)&pMStack_78;
  pMStack_70 = pMVar41;
  if (g_data_057aeadc == '\0') {
    pIStack_80 = (Il2CppClass *)0x44c6df6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_80 = (Il2CppClass *)0x44c6e02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditContributor_ToArray);
    pIStack_80 = (Il2CppClass *)0x44c6e0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
    pIStack_80 = (Il2CppClass *)0x44c6e1a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgCreditContributor);
    pIStack_80 = (Il2CppClass *)0x44c6e26;
    il2cpp_runtime_helper_023445d0(&"contributors");
    g_data_057aeadc = '\x01';
  }
  pMStack_78 = (MethodInfo *)0x0;
  pMVar31->methodPointer = (Il2CppMethodPointer)0x0;
  pMVar41 = (MethodInfo *)0x0;
  pIStack_80 = (Il2CppClass *)0x44c6e46;
  node_00 = pMVar31;
  il2cpp_runtime_helper_022b4080();
  if (pMVar29 != (MethodInfo *)0x0) {
    pIStack_80 = (Il2CppClass *)0x44c6e6d;
    cVar10 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[0x1c].methodPtr)
                       (pMVar29,"contributors",((Il2CppClass *)pMVar29->methodPointer)->vtable[0x1c].method);
    if (cVar10 == '\0') {
      return 0;
    }
    pIStack_80 = (Il2CppClass *)0x44c6e8c;
    pMVar41 = "contributors";
    node_00 = pMVar29;
    puVar26 = (undefined8 *)
              (*((Il2CppClass *)pMVar29->methodPointer)->vtable[7].methodPtr)
                        (pMVar29,"contributors",((Il2CppClass *)pMVar29->methodPointer)->vtable[7].method);
    unaff_RBP = (System_Collections_Generic_List_object__c **)&"contributors";
    if (puVar26 != (undefined8 *)0x0) {
      method = (MethodInfo *)*puVar26;
      pIStack_80 = (Il2CppClass *)0x44c6ea8;
      cVar10 = (*(((System_Collections_Generic_List_object__VTable *)((Il2CppClass *)method)->vtable)->
                 _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).methodPtr)
                         (puVar26,(((System_Collections_Generic_List_object__VTable *)
                                   ((Il2CppClass *)method)->vtable)->
                                  _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).method);
      if (cVar10 == '\0') {
        return 0;
      }
      pIStack_80 = (Il2CppClass *)0x44c6ec7;
      pMVar41 = "contributors";
      node_00 = pMVar29;
      pMVar27 = (MethodInfo *)
                (*((Il2CppClass *)pMVar29->methodPointer)->vtable[7].methodPtr)
                          (pMVar29,"contributors",((Il2CppClass *)pMVar29->methodPointer)->vtable[7].method);
      if (pMVar27 != (MethodInfo *)0x0) {
        method = (MethodInfo *)pMVar27->methodPointer;
        pMVar41 = (MethodInfo *)
                  (((System_Collections_Generic_List_object__c *)(((Il2CppClass *)method)->vtable + 0x23))->_1
                  ).implementedInterfaces;
        pIStack_80 = (Il2CppClass *)0x44c6ee3;
        pMVar28 = (MethodInfo *)(*((Il2CppClass *)method)->vtable[0x2d].methodPtr)();
        node_00 = pMVar27;
        if (pMVar28 != (MethodInfo *)0x0) {
          pIStack_80 = (Il2CppClass *)0x44c6f02;
          uVar11 = (*((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar28,((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].method);
          unaff_RBP = (System_Collections_Generic_List_object__c **)(ulong)uVar11;
          pIStack_80 = (Il2CppClass *)0x44c6f13;
          pMVar29 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgCreditContributor);
          pIStack_80 = (Il2CppClass *)0x44c6f2a;
          System_Collections_Generic_List_object____ctor_362b930
                    ((System_Collections_Generic_List_object__o *)pMVar29,uVar11,MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
          pMVar41 = ((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].method;
          pIStack_80 = (Il2CppClass *)0x44c6f3d;
          node_00 = pMVar28;
          iVar12 = (*((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].methodPtr)();
          value = (System_String_o **)pMVar28;
          if (iVar12 < 1) {
            if (pMVar29 != (MethodInfo *)0x0) goto label_044c7009;
          }
          else {
            if (pMVar29 != (MethodInfo *)0x0) {
              unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
              unaff_R13 = &MethodInfo_Void_Add;
              do {
                pIStack_80 = (Il2CppClass *)0x44c6fa6;
                auVar45 = (*((Il2CppClass *)pMVar28->methodPointer)->vtable[5].methodPtr)
                                    (pMVar28,unaff_RBP,
                                     ((Il2CppClass *)pMVar28->methodPointer)->vtable[5].method);
                node_00 = auVar45._0_8_;
                pIStack_80 = (Il2CppClass *)0x44c6fb1;
                bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                                   ((SimpleJSONFixed_JSONNode_o *)node_00,
                                    (ApplicationManagers_Credits_AottgCreditContributor_o **)&pMStack_78,
                                    auVar45._8_8_);
                method = (MethodInfo *)MethodInfo_Void_Add;
                if ((char)bVar13 == '\0') {
                  return 0;
                }
                piVar1 = (int *)((long)&pMVar29->name + 4);
                *piVar1 = *piVar1 + 1;
                pIVar7 = pMVar29->invoker_method;
                pMVar41 = pMStack_78;
                unaff_R12 = (MethodInfo *)&pMStack_78;
                if (pIVar7 == (InvokerMethod)0x0) goto label_044c7053;
                uVar11 = *(uint *)&pMVar29->name;
                if (uVar11 < *(uint *)(pIVar7 + 0x18)) {
                  *(uint *)&pMVar29->name = uVar11 + 1;
                  *(MethodInfo **)(pIVar7 + (long)(int)uVar11 * 8 + 0x20) = pMStack_78;
                  pIStack_80 = (Il2CppClass *)0x44c6fef;
                  il2cpp_runtime_helper_022b4080(pIVar7 + (long)(int)uVar11 * 8 + 0x20);
                }
                else {
                  pIStack_80 = (Il2CppClass *)0x44c6f77;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pMVar29,(Il2CppObject *)pMStack_78,
                             *(MethodInfo_362C220 **)
                              (*(long *)((long)(((System_Collections_Generic_List_object__c *)method)->_1).
                                               byval_arg.data + 0xc0) + 0x70));
                }
                uVar11 = (int)unaff_RBP + 1;
                unaff_RBP = (System_Collections_Generic_List_object__c **)(ulong)uVar11;
                pIStack_80 = (Il2CppClass *)0x44c6f8d;
                iVar12 = (*((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].methodPtr)
                                   (pMVar28,((Il2CppClass *)pMVar28->methodPointer)->vtable[0xb].method);
              } while ((int)uVar11 < iVar12);
label_044c7009:
              pIStack_80 = (Il2CppClass *)0x44c701b;
              pSVar30 = System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_object__o *)pMVar29,MethodInfo_AottgCreditContributor_ToArray);
              pMVar31->methodPointer = (Il2CppMethodPointer)pSVar30;
              pIStack_80 = (Il2CppClass *)0x44c7029;
              il2cpp_runtime_helper_022b4080(pMVar31,pSVar30);
              return (bool_conflict)CONCAT71((int7)((ulong)pMVar29 >> 8),1);
            }
            pMVar29 = (MethodInfo *)0x0;
            pIStack_80 = (Il2CppClass *)0x44c7044;
            auVar45 = (*((Il2CppClass *)pMVar28->methodPointer)->vtable[5].methodPtr)
                                (pMVar28,0,((Il2CppClass *)pMVar28->methodPointer)->vtable[5].method);
            node_00 = auVar45._0_8_;
            pIStack_80 = (Il2CppClass *)0x44c704f;
            bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                               ((SimpleJSONFixed_JSONNode_o *)node_00,
                                (ApplicationManagers_Credits_AottgCreditContributor_o **)&pMStack_78,
                                auVar45._8_8_);
            pMVar41 = pMVar40;
            if ((char)bVar13 == '\0') {
              return 0;
            }
          }
        }
      }
    }
  }
label_044c7053:
  pIStack_80 = (Il2CppClass *)0x44c7058;
  il2cpp_runtime_helper_022b2c90();
  pMStack_a0 = pMVar29;
  pMStack_98 = unaff_R12;
  pMStack_90 = pMVar31;
  pMStack_88 = (MethodInfo *)value;
  pIStack_80 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeada == '\0') {
    pMStack_a8 = (MethodInfo *)0x44c7083;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pMStack_a8 = (MethodInfo *)0x44c708f;
    il2cpp_runtime_helper_023445d0(&"groups");
    g_data_057aeada = '\x01';
  }
  pMVar41->methodPointer = (Il2CppMethodPointer)0x0;
  now.fields._8_8_ = (Il2CppClass *)0x0;
  pMStack_a8 = (MethodInfo *)0x44c70a7;
  pMVar40 = pMVar41;
  il2cpp_runtime_helper_022b4080();
  if (node_00 != (MethodInfo *)0x0) {
    unaff_RBP = &"groups";
    pMStack_a8 = (MethodInfo *)0x44c70ce;
    cVar10 = (*((Il2CppClass *)node_00->methodPointer)->vtable[0x1c].methodPtr)
                       (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[0x1c].method);
    if (cVar10 == '\0') {
label_044c720a:
      value = (System_String_o **)0x0;
label_044c720d:
      return (bool_conflict)value;
    }
    pMStack_a8 = (MethodInfo *)0x44c70ed;
    now.fields._8_8_ = (Il2CppClass *)"groups";
    pMVar40 = node_00;
    puVar26 = (undefined8 *)
              (*((Il2CppClass *)node_00->methodPointer)->vtable[7].methodPtr)
                        (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[7].method);
    if (puVar26 != (undefined8 *)0x0) {
      method = (MethodInfo *)*puVar26;
      pMStack_a8 = (MethodInfo *)0x44c7109;
      cVar10 = (*(((System_Collections_Generic_List_object__VTable *)((Il2CppClass *)method)->vtable)->
                 _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).methodPtr)
                         (puVar26,(((System_Collections_Generic_List_object__VTable *)
                                   ((Il2CppClass *)method)->vtable)->
                                  _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).method);
      if (cVar10 == '\0') goto label_044c720a;
      pMStack_a8 = (MethodInfo *)0x44c7128;
      now.fields._8_8_ = (Il2CppClass *)"groups";
      pMVar40 = node_00;
      pMVar31 = (MethodInfo *)
                (*((Il2CppClass *)node_00->methodPointer)->vtable[7].methodPtr)
                          (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[7].method);
      if (pMVar31 != (MethodInfo *)0x0) {
        method = (MethodInfo *)pMVar31->methodPointer;
        now.fields._8_8_ =
             (Il2CppClass *)
             (((System_Collections_Generic_List_object__c *)(((Il2CppClass *)method)->vtable + 0x23))->_1).
             implementedInterfaces;
        pMStack_a8 = (MethodInfo *)0x44c7144;
        pMVar29 = (MethodInfo *)
                  (*(code *)(((System_Collections_Generic_List_object__c *)
                             (((Il2CppClass *)method)->vtable + 0x23))->_1).nestedTypes)();
        pMVar40 = pMVar31;
        if (pMVar29 != (MethodInfo *)0x0) {
          pMStack_a8 = (MethodInfo *)0x44c7163;
          uVar14 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar29,((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].method);
          method = (MethodInfo *)&TypeInfo_AottgCreditGroup;
          pMStack_a8 = (MethodInfo *)0x44c7174;
          now.fields._8_8_ = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgCreditGroup,uVar14);
          pMVar41->methodPointer = (Il2CppMethodPointer)now.fields._8_8_;
          pMStack_a8 = (MethodInfo *)0x44c7182;
          il2cpp_runtime_helper_022b4080(pMVar41,now.fields._8_8_);
          pMStack_a8 = (MethodInfo *)0x44c7196;
          iVar12 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar29,((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].method);
          value = (System_String_o **)CONCAT71((int7)((ulong)value >> 8),1);
          if (0 < iVar12) {
            node_00 = (MethodInfo *)&g_data_00000020;
            unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
            do {
              pMStack_a8 = (MethodInfo *)0x44c71c6;
              pMVar40 = pMVar29;
              auVar45 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[5].methodPtr)
                                  (pMVar29,(ulong)unaff_RBP & 0xffffffff,
                                   ((Il2CppClass *)pMVar29->methodPointer)->vtable[5].method);
              now.fields._8_8_ = (Il2CppClass *)pMVar41->methodPointer;
              unaff_R12 = pMVar29;
              if (now.fields._8_8_ == (Il2CppClass *)0x0) goto label_044c7219;
              method = (MethodInfo *)(ulong)*(uint *)&((now.fields._8_8_)->_1).namespaze;
              if (method <= unaff_RBP) goto label_044c721e;
              pMStack_a8 = (MethodInfo *)0x44c71e1;
              bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
                                 (auVar45._0_8_,
                                  (ApplicationManagers_Credits_AottgCreditGroup_o **)
                                  ((long)&((now.fields._8_8_)->_1).image + (long)node_00),auVar45._8_8_);
              if ((char)bVar13 == '\0') goto label_044c720a;
              unaff_RBP = (System_Collections_Generic_List_object__c **)
                          ((long)&(((Il2CppClass *)unaff_RBP)->_1).image + 1);
              pMStack_a8 = (MethodInfo *)0x44c71fd;
              iVar12 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].methodPtr)
                                 (pMVar29,((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].method);
              node_00 = (MethodInfo *)&node_00->virtualMethodPointer;
            } while ((long)unaff_RBP < (long)iVar12);
          }
          goto label_044c720d;
        }
      }
    }
  }
label_044c7219:
  pMStack_a8 = (MethodInfo *)0x44c721e;
  il2cpp_runtime_helper_022b2c90();
label_044c721e:
  pMStack_a8 = (MethodInfo *)0x44c7223;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_c8 = node_00;
  pMStack_c0 = unaff_R12;
  ppSStack_b8 = unaff_R13;
  pMStack_b0 = pMVar41;
  pMStack_a8 = (MethodInfo *)value;
  if (g_data_057aeadb == '\0') {
    pMStack_f0 = (MethodInfo *)0x44c7258;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pMStack_f0 = (MethodInfo *)0x44c7264;
    il2cpp_runtime_helper_023445d0(&"title");
    g_data_057aeadb = '\x01';
  }
  pSStack_d0 = (System_String_o *)0x0;
  pSStack_d8 = (System_String_o *)0x0;
  pAStack_e0 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  ((now.fields._8_8_)->_1).image = (Il2CppClass *)0x0;
  pMStack_f0 = (MethodInfo *)0x44c7297;
  il2cpp_runtime_helper_022b4080(now.fields._8_8_);
  if (g_data_057aeae0 == '\0') {
    pMStack_f0 = (MethodInfo *)0x44c72ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pMStack_f0 = (MethodInfo *)0x44c72cb;
    il2cpp_runtime_helper_02337ed0();
  }
  puVar26 = (undefined8 *)0x0;
  pMStack_f0 = (MethodInfo *)0x44c72d9;
  pMVar41 = pMVar40;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar40,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (pMVar40 != (MethodInfo *)0x0) {
    pMStack_f0 = (MethodInfo *)0x44c72fd;
    cVar10 = (**(code **)(pMVar40->methodPointer + 0x248))
                       (pMVar40,*(undefined8 *)(pMVar40->methodPointer + 0x250));
    if (cVar10 != '\0') {
      pMStack_f0 = (MethodInfo *)0x44c731c;
      bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)pMVar40,"title",&pSStack_d0,method);
      if ((char)bVar13 != '\0') {
        pMStack_f0 = (MethodInfo *)0x44c732d;
        bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                           ((SimpleJSONFixed_JSONNode_o *)pMVar40,&pSStack_d8,method_01);
        if ((char)bVar13 != '\0') {
          pMStack_f0 = (MethodInfo *)0x44c733e;
          bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                             ((SimpleJSONFixed_JSONNode_o *)pMVar40,&pAStack_e0,method_02);
          title = pSStack_d0;
          pSVar25 = pSStack_d8;
          contributors = pAStack_e0;
          if ((char)bVar13 != '\0') {
            pMStack_f0 = (MethodInfo *)0x44c7360;
            pIVar32 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditGroup);
            pMStack_f0 = (MethodInfo *)0x44c7374;
            ApplicationManagers_Credits_AottgCreditGroup___ctor
                      ((ApplicationManagers_Credits_AottgCreditGroup_o *)pIVar32,title,pSVar25,contributors,
                       in_R8);
            ((now.fields._8_8_)->_1).image = pIVar32;
            pMStack_f0 = (MethodInfo *)0x44c7382;
            il2cpp_runtime_helper_022b4080(now.fields._8_8_,pIVar32);
            return (bool_conflict)CONCAT71((int7)((ulong)pIVar32 >> 8),1);
          }
        }
      }
    }
    return 0;
  }
  pMStack_f0 = (MethodInfo *)0x44c739d;
  il2cpp_runtime_helper_022b2c90();
  uStack_108 = 0;
  pMStack_100 = unaff_R12;
  pIStack_f8 = now.fields._8_8_;
  pMStack_f0 = pMVar40;
  if (g_data_057aeadd == '\0') {
    ppMStack_138 = (MethodInfo **)0x44c73c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditContributor);
    ppMStack_138 = (MethodInfo **)0x44c73d2;
    il2cpp_runtime_helper_023445d0(&"accountId");
    ppMStack_138 = (MethodInfo **)0x44c73de;
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aeadd = '\x01';
  }
  pIStack_128 = (Il2CppClass *)0x0;
  SStack_120._a = 0;
  SStack_120._b = 0;
  SStack_120._c = 0;
  SStack_120._d = '\0';
  SStack_120._e = '\0';
  SStack_120._f = '\0';
  SStack_120._g = '\0';
  SStack_120._h = '\0';
  SStack_120._i = '\0';
  SStack_120._j = '\0';
  SStack_120._k = '\0';
  *puVar26 = 0;
  ppMStack_138 = (MethodInfo **)0x44c7407;
  il2cpp_runtime_helper_022b4080(puVar26);
  if (g_data_057aeae0 == '\0') {
    ppMStack_138 = (MethodInfo **)0x44c741c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    ppMStack_138 = (MethodInfo **)0x44c743b;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar36 = (MethodInfo **)0x0;
  ppMStack_138 = (MethodInfo **)0x44c7449;
  pMVar40 = pMVar41;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar41,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (pMVar41 != (MethodInfo *)0x0) {
    ppMStack_138 = (MethodInfo **)0x44c746d;
    cVar10 = (**(code **)(pMVar41->methodPointer + 0x248))
                       (pMVar41,*(undefined8 *)(pMVar41->methodPointer + 0x250));
    if (cVar10 == '\0') {
      return 0;
    }
    ppMStack_138 = (MethodInfo **)0x44c748c;
    bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar41,"name",(System_String_o **)&pIStack_128,
                        method);
    if ((char)bVar13 == '\0') {
      return 0;
    }
    ppMVar36 = &"accountId";
    ppMStack_138 = (MethodInfo **)0x44c74b1;
    cVar10 = (**(code **)(pMVar41->methodPointer + 0x2f8))
                       (pMVar41,"accountId",*(undefined8 *)(pMVar41->methodPointer + 0x300));
    if (cVar10 == '\0') {
      return 0;
    }
    ppMStack_138 = (MethodInfo **)0x44c74cf;
    pMVar40 = pMVar41;
    plVar23 = (long *)(**(code **)(pMVar41->methodPointer + 0x1a8))
                                (pMVar41,"accountId",*(undefined8 *)(pMVar41->methodPointer + 0x1b0));
    if (plVar23 != (long *)0x0) {
      ppMStack_138 = (MethodInfo **)0x44c74eb;
      cVar10 = (**(code **)(*plVar23 + 0x228))(plVar23);
      if (cVar10 != '\0') {
        pSVar25 = (System_String_o *)0x0;
label_044c74f2:
        now.fields._8_8_ = pIStack_128;
        ppMStack_138 = (MethodInfo **)0x44c7506;
        pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditContributor);
        ppMStack_138 = (MethodInfo **)0x44c7513;
        System_Object___ctor(pIVar33,(MethodInfo *)0x0);
        pIVar33[1].klass = now.fields._8_8_;
        ppMStack_138 = (MethodInfo **)0x44c7523;
        il2cpp_runtime_helper_022b4080(pIVar33 + 1,now.fields._8_8_);
        pIVar33[1].monitor = pSVar25;
        ppMStack_138 = (MethodInfo **)0x44c7533;
        il2cpp_runtime_helper_022b4080(&pIVar33[1].monitor,pSVar25);
        *puVar26 = pIVar33;
        ppMStack_138 = (MethodInfo **)0x44c7541;
        il2cpp_runtime_helper_022b4080(puVar26,pIVar33);
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar33 >> 8),1);
      }
      ppMStack_138 = (MethodInfo **)0x44c755e;
      pMVar40 = pMVar41;
      plVar23 = (long *)(**(code **)(pMVar41->methodPointer + 0x1a8))
                                  (pMVar41,"accountId",*(undefined8 *)(pMVar41->methodPointer + 0x1b0));
      if (plVar23 != (long *)0x0) {
        ppMStack_138 = (MethodInfo **)0x44c7576;
        cVar10 = (**(code **)(*plVar23 + 0x208))(plVar23,*(undefined8 *)(*plVar23 + 0x210));
        if (cVar10 == '\0') {
          return 0;
        }
        ppMStack_138 = (MethodInfo **)0x44c7590;
        pMVar40 = "accountId";
        pSVar24 = (SimpleJSONFixed_JSONNode_o *)
                  (**(code **)(pMVar41->methodPointer + 0x1a8))
                            (pMVar41,"accountId",*(undefined8 *)(pMVar41->methodPointer + 0x1b0));
        ppMStack_138 = (MethodInfo **)0x44c7598;
        pSVar25 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar24,pMVar40);
        ppMStack_138 = (MethodInfo **)0x44c75a7;
        bVar13 = System_String__IsNullOrEmpty(pSVar25,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          return 0;
        }
        ppMStack_138 = (MethodInfo **)0x44c75bc;
        bVar13 = System_Guid__TryParse(pSVar25,(System_Guid_o *)&SStack_120,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return 0;
        }
        goto label_044c74f2;
      }
    }
  }
  ppMStack_138 = (MethodInfo **)0x44c75db;
  il2cpp_runtime_helper_022b2c90();
  ppMStack_138 = ppMVar36;
  if (g_data_057aeadf == '\0') {
    pMStack_140 = (MethodInfo *)0x44c75f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeadf = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pMStack_140 = (MethodInfo *)0x44c7618;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_140 = (MethodInfo *)0x44c7624;
  bVar13 = SimpleJSONFixed_JSONNode__op_Equality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar40,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return 0;
  }
  if (pMVar40 != (MethodInfo *)0x0) {
    pMStack_140 = (MethodInfo *)0x44c7640;
    cVar10 = (**(code **)(pMVar40->methodPointer + 0x228))
                       (pMVar40,*(undefined8 *)(pMVar40->methodPointer + 0x230));
    if (cVar10 != '\0') {
      return 0;
    }
    pMStack_140 = (MethodInfo *)0x44c765b;
    pSVar25 = (System_String_o *)(**(code **)(pMVar40->methodPointer + 0x1c8))(pMVar40);
    if (pSVar25 != (System_String_o *)0x0) {
      pSVar25 = System_String__Trim(pSVar25,(MethodInfo *)0x0);
      return (bool_conflict)pSVar25;
    }
  }
  pMStack_140 = (MethodInfo *)ApplicationManagers_Credits_AottgCreditsService__Init;
  uStack_160 = il2cpp_runtime_helper_022b2c90();
  pMStack_158 = pMVar40;
  pMStack_150 = unaff_R12;
  puStack_148 = puVar26;
  pMStack_140 = pMVar41;
  if (g_data_057aeae2 == '\0') {
    pIStack_168 = (Il2CppClass *)0x44c768d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
    pIStack_168 = (Il2CppClass *)0x44c7699;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    pIStack_168 = (Il2CppClass *)0x44c76a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchCredits);
    pIStack_168 = (Il2CppClass *)0x44c76b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pIStack_168 = (Il2CppClass *)0x44c76bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
    pIStack_168 = (Il2CppClass *)0x44c76c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
    pIStack_168 = (Il2CppClass *)0x44c76d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pIStack_168 = (Il2CppClass *)0x44c76e1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
    g_data_057aeae2 = '\x01';
  }
  pIStack_168 = (Il2CppClass *)0x44c770b;
  pIVar33 = Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar33;
  pIStack_168 = (Il2CppClass *)0x44c772a;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar33);
  lVar15 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  pIStack_168 = (Il2CppClass *)0x44c7746;
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
  pIStack_168 = (Il2CppClass *)0x44c7760;
  System_Action_AottgCreditsService_UnitKey__object____ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    pIStack_168 = (Il2CppClass *)0x44c7778;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar18._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  pIStack_168 = (Il2CppClass *)0x44c7794;
  __this_00 = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  pIStack_168 = (Il2CppClass *)0x44c77ac;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_00,(System_TimeSpan_o)SVar18._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  pIStack_168 = (Il2CppClass *)0x44c77bb;
  __this_01 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
  pIStack_168 = (Il2CppClass *)0x44c77d8;
  pSVar42 = fetch;
  pAVar43 = __this_01;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            (__this_01,fetch,(System_Func_DateTimeOffset__o *)0x0,__this_00,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
  if (lVar15 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar15 + 0x20) = __this_01;
    bVar13 = il2cpp_runtime_helper_022b4080(lVar15 + 0x20,__this_01);
    return bVar13;
  }
  pIStack_168 = (Il2CppClass *)ApplicationManagers_Credits_AottgCreditsService__GetCredits;
  il2cpp_runtime_helper_022b2c90();
  pAStack_188 = (ApplicationManagers_Api_AottgQueryPolicy_o *)__this_01;
  pAStack_180 = __this_00;
  pSStack_178 = fetch;
  lStack_170 = lVar15;
  pIStack_168 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeae3 == '\0') {
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c788d;
  pIVar32 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c789a;
  now.fields._8_8_ = pIVar32;
  System_Object___ctor((Il2CppObject *)pIVar32,(MethodInfo *)0x0);
  if (pIVar32 == (Il2CppClass *)0x0) {
label_044c7a30:
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)now.fields._8_8_,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  ppcVar37 = &(pIVar32->_1).name;
  (pIVar32->_1).name = (char *)pAVar43;
  pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar37);
  now.fields._8_8_ = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78f2;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)now.fields._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar32 = "not_initialized";
  if ((char)bVar13 != '\0') {
    pcVar8 = *ppcVar37;
    if (pcVar8 == (char *)0x0) {
      return bVar13;
    }
    if (g_data_057aead4 == '\0') {
      pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7925;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c793b;
    pIVar33 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7948;
    System_Object___ctor(pIVar33,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar33[1].klass = 3;
    pIVar33[1].monitor = (void *)0x0;
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7962;
    il2cpp_runtime_helper_022b4080(&pIVar33[1].monitor,0);
    pIVar33[2].klass = pIVar32;
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7972;
    il2cpp_runtime_helper_022b4080(pIVar33 + 2,pIVar32);
    *(undefined2 *)&pIVar33[2].monitor = 0;
    *(undefined1 *)((long)&pIVar33[2].monitor + 2) = 0;
    bVar13 = (**(code **)(pcVar8 + 0x18))
                       (*(undefined8 *)(pcVar8 + 0x40),pIVar33,*(undefined8 *)(pcVar8 + 0x28));
    return bVar13;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar32 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79e3;
  onResult = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79fd;
  now.fields._8_8_ = onResult;
  System_Action_object____ctor();
  pAStack_190 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pAStack_188;
  SVar18._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar32 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar4;
  pIVar34 = (Il2CppClass *)((ulong)pSVar42 & 0xff);
  pAStack_188 = pAStack_180;
  pIStack_198 = (Il2CppClass *)0x0;
  lVar15 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pIVar34;
  pIVar44 = MethodInfo_Void_Get;
  pAStack_180 = (ApplicationManagers_Api_AottgQueryPolicy_o *)unaff_R13;
  if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
    pIStack_1a0 = (Il2CppClass *)0x341a1ae;
    lVar15 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_1a0 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar15);
  pIVar17 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_1a0 = (Il2CppClass *)0x341a1d0;
  __this_02 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar17);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar32;
    pIStack_1a0 = (Il2CppClass *)0x341a1ec;
    pIVar17 = pIVar32;
    pIVar16 = (Il2CppClass *)il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar4;
    if (onResult == (Il2CppClass *)0x0) goto label_0341a444;
    __this_02 = *(Il2CppClass **)&(pIVar32->_1).byval_arg.bits;
    if (__this_02 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(Il2CppClass **)
            (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_1a0 = (Il2CppClass *)0x341a221;
      pIVar17 = (Il2CppClass *)t2._ticks;
      bVar13 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (__this_02,t2._ticks,&pIStack_198);
      if ((char)bVar13 == '\0') {
        lVar15 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x58)
        ;
        if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
          pIStack_1a0 = (Il2CppClass *)0x341a242;
          lVar15 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_1a0 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar15);
        pIVar17 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_1a0 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar17);
        __this_02 = *(Il2CppClass **)&(pIVar32->_1).byval_arg.bits;
        pIStack_198 = (Il2CppClass *)t2._ticks;
        if (__this_02 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar17 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_1a0 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_02,pIVar17,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (Il2CppClass *)(pIVar32->_1).namespaze;
      if (now.fields._8_8_ != (Il2CppClass *)0x0) {
        pIVar17 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_02 = ((now.fields._8_8_)->_1).element_class;
        pIStack_1a0 = (Il2CppClass *)0x341a2ad;
        auVar45 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)pSVar42 == '\0') {
          now.fields._8_8_ = (Il2CppClass *)(auVar45._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo **)
                   (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_1a0 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar45._0_8_;
          pIVar17 = pIStack_198;
          __this_02 = pIVar32;
          pIVar44 = onResult;
          uVar11 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar32,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_198,now
                              ,(System_Action_AottgQueryResult_TValue___o *)onResult,
                              (MethodInfo_331A460 *)in_R9);
          pIVar16 = (Il2CppClass *)(ulong)uVar11;
          if ((char)uVar11 != '\0') goto label_0341a444;
        }
        if (pIStack_198 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_198->_1).this_arg.bits == '\0') {
            pIStack_1a0 = (Il2CppClass *)0x341a327;
            pIVar17 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIStack_1a0 = (Il2CppClass *)0x341a30e;
            pIVar17 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_198->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          __this_02 = (onResult->_1).element_class;
          pIStack_1a0 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult->_1).namespaze)(__this_02,pIVar17,*(undefined8 *)&(onResult->_1).byval_arg.bits)
          ;
          if ((pIStack_198 != (Il2CppClass *)0x0) &&
             (__this_02 = (Il2CppClass *)(pIStack_198->_1).name, __this_02 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(Il2CppClass **)
                  (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_02->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar8 = (__this_02->_1).name;
            if (pcVar8 != (char *)0x0) {
              uVar11 = *(uint *)&(__this_02->_1).namespaze;
              pIVar17 = onResult;
              if (uVar11 < *(uint *)(pcVar8 + 0x18)) {
                now.fields._8_8_ = (Il2CppClass *)(ulong)(uVar11 + 1);
                *(uint *)&(__this_02->_1).namespaze = uVar11 + 1;
                __this_02 = (Il2CppClass *)(pcVar8 + (long)(int)uVar11 * 8 + 0x20);
                *(Il2CppClass **)(pcVar8 + (long)(int)uVar11 * 8 + 0x20) = onResult;
                pIStack_1a0 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pIVar16 = pIStack_198;
              }
              else {
                pIStack_1a0 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_02,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
                pIVar16 = pIStack_198;
              }
              pIStack_198 = pIVar16;
              if (pIVar16 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIVar16->_1).this_arg.bits + 2) != '\0') {
label_0341a444:
                  return (bool_conflict)pIVar16;
                }
                *(undefined1 *)((long)&(pIVar16->_1).this_arg.bits + 2) = 1;
                pcVar8 = (pIVar32->_1).name;
                uVar3 = *(undefined1 *)&(__this->_1).namespaze;
                onResult = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar3);
                lVar15 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xe8);
                if ((*(byte *)(lVar15 + 0x135) & 1) == 0) {
                  pIStack_1a0 = (Il2CppClass *)0x341a3fe;
                  lVar15 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_1a0 = (Il2CppClass *)0x341a406;
                pIVar32 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar15);
                now.fields._8_8_ =
                     *(Il2CppClass **)
                      (*(long *)((long)(((Il2CppClass *)SVar18._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_1a0 = (Il2CppClass *)0x341a42d;
                pIVar17 = __this;
                __this_02 = pIVar32;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar8 != (char *)0x0) {
                  pIStack_1a0 = (Il2CppClass *)0x341a444;
                  pIVar16 = (Il2CppClass *)
                            (**(code **)(pcVar8 + 0x18))
                                      (*(undefined8 *)(pcVar8 + 0x40),uVar3,pIVar32,
                                       *(undefined8 *)(pcVar8 + 0x28));
                  goto label_0341a444;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pIStack_1a0 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_1b0 = (Il2CppClass *)SVar18._ticks;
  pIVar16 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar39._ticks = (int64_t)pIVar17;
  plVar23 = (long *)__this_02;
  pMStack_1d8 = in_R9;
  pIStack_1d0 = pIVar44;
  pIStack_1c8 = __this;
  pIStack_1c0 = onResult;
  pIStack_1b8 = pIVar34;
  pIStack_1a8 = pIVar32;
  pIStack_1a0 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar23 = &TypeInfo_TimeSpan;
    pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_1f0 = '\0';
  uStack_1ef = 0;
  uStack_1e8 = 0;
  if (pIVar17 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar17->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar17->_1).this_arg.bits + 1) == '\0') {
        return 0;
      }
      pvVar5 = (__this_02->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        cStack_1f0 = *(char *)((long)pvVar5 + 0x18);
        uStack_1e8 = *(undefined8 *)((long)pvVar5 + 0x20);
        if (cStack_1f0 == '\0') {
          return 0;
        }
        ppIVar2 = (Il2CppType **)&(pIVar17->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var9 = *(unkuint10 *)ppIVar2;
        SVar18._ticks = (int64_t)*(ushort *)&(pIVar17->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a5ed;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var9;
        left_00.fields._8_8_ = pIVar16;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ = (Il2CppClass *)SVar18._ticks;
        plVar23 = (long *)extraout_RDX.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar5 = (__this_02->_1).byval_arg.data;
        SVar39._ticks = (int64_t)pIVar16;
        if (pvVar5 != (void *)0x0) {
          cStack_1f0 = *(char *)((long)pvVar5 + 0x18);
          uStack_1e8 = *(undefined8 *)((long)pvVar5 + 0x20);
          pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a61f;
          __this_03.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_03.fields._0_8_ = &cStack_1f0;
          SVar18._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_03,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar38._ticks = 0;
          t2._ticks = 0;
          pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a649;
          bVar13 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)SVar18._ticks,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return 0;
          }
          plVar23 = (pIVar17->_1).byval_arg.data;
          SVar39._ticks = 1;
          pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a672;
          pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar23,1,
                               (MethodInfo_331B520 *)pMStack_1d8->klass->rgctx_data[0x21].method);
          now.fields._8_8_ = (Il2CppClass *)0x0;
          if (pIStack_1d0 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a68a;
            (*(code *)(pIStack_1d0->_1).namespaze)
                      ((pIStack_1d0->_1).element_class,pAVar19,
                       *(undefined8 *)&(pIStack_1d0->_1).byval_arg.bits);
            return (bool_conflict)CONCAT71((int7)((ulong)SVar38._ticks >> 8),1);
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar17->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var9 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (Il2CppClass *)(ulong)*(ushort *)&(pIVar17->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var9;
      left.fields._8_8_ = pIVar16;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar39._ticks = (int64_t)pIVar16;
      plVar23 = (long *)extraout_RDX.fields._dateData;
      SVar18._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar5 = (__this_02->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar5 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a54d;
        SVar39._ticks = t2._ticks;
        plVar23 = (long *)SVar18._ticks;
        bVar13 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar18._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_0341a589;
        plVar23 = (long *)(pIVar17->_1).namespaze;
        SVar39._ticks = 1;
        pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a576;
        pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar23,1,
                             (MethodInfo_331B380 *)pMStack_1d8->klass->rgctx_data[0x20].method);
        SVar38._ticks = t2._ticks;
        if (pIStack_1d0 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (Il2CppClass *)0x0;
      }
    }
  }
  pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_210 = pIVar17;
  pIStack_208 = (Il2CppClass *)SVar18._ticks;
  SStack_200 = extraout_RDX.fields._dateData;
  pAStack_1f8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pSStack_220 = (System_Object_array *)0x0;
  pSVar30 = *(System_Object_array **)&(((Il2CppClass *)plVar23)->_1).byval_arg.bits;
  if (pSVar30 != (System_Object_array *)0x0) {
    uVar11 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pSVar30,SVar39._ticks & 0xff,&pSStack_220);
    if ((char)uVar11 == '\0') {
      return uVar11;
    }
    if ((pSStack_220 != (System_Object_array *)0x0) &&
       (((*(undefined1 *)((long)pSStack_220->m_Items + 0x1a) = 0, pAVar20 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pSVar30 = "unknown_error",
         pAVar20 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             ((System_String_o *)"unknown_error",
                              *(MethodInfo_331AB10 **)
                               (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar20 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) &&
        (pSVar30 = pSStack_220, pSStack_220 != (System_Object_array *)0x0)))) {
      if ((char)(pAVar20->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(pSStack_220->m_Items + 3) == '\0') {
label_0341a96a:
          *(undefined2 *)(pSStack_220->m_Items + 3) = 0x100;
          pSStack_220->max_length = 0;
          pSStack_220->m_Items[0] = (Il2CppObject *)(pAVar20->fields)._Error_k__BackingField;
          pSVar30 = (System_Object_array *)pSStack_220->m_Items;
          il2cpp_runtime_helper_022b4080();
          pSVar21 = pSStack_220;
          pcVar8 = (((Il2CppClass *)plVar23)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar30 = *(System_Object_array **)(pcVar8 + 0x40);
            Var46 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar21 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar21->m_Items + 1) = Var46;
              *(undefined4 *)((long)pSVar21->m_Items + 0x12) = uStack_216;
              *(undefined2 *)((long)pSVar21->m_Items + 0x16) = uStack_212;
              pSVar30 = (System_Object_array *)(pAVar20->fields)._Error_k__BackingField;
              pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                  ((System_String_o *)pSVar30,0,
                                   *(MethodInfo_331B520 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108))
              ;
joined_r0x0341a95f:
              if (((pSStack_220 != (System_Object_array *)0x0) &&
                  (pSVar30 = ((System_Collections_Generic_List_object__Fields *)&pSStack_220->bounds)->_items,
                  pSVar30 != (System_Object_array *)0x0)) &&
                 ((pSVar21 = System_Collections_Generic_List_object___ToArray
                                       ((System_Collections_Generic_List_object__o *)pSVar30,
                                        *(MethodInfo_362E340 **)
                                         (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) +
                                         0x148)), pSStack_220 != (System_Object_array *)0x0 &&
                  (pSVar6 = ((System_Collections_Generic_List_object__Fields *)&pSStack_220->bounds)->_items,
                  pSVar6 != (System_Object_array *)0x0)))) {
                piVar1 = (int *)((long)&pSVar6->max_length + 4);
                *piVar1 = *piVar1 + 1;
                length = (int32_t)pSVar6->max_length;
                *(undefined4 *)&pSVar6->max_length = 0;
                if (0 < length) {
                  pSVar30 = (System_Object_array *)pSVar6->bounds;
                  System_Array__Clear((System_Array_o *)pSVar30,0,length,(MethodInfo *)0x0);
                }
                if (pSVar21 != (System_Object_array *)0x0) {
                  uVar11 = (uint)pSVar21->max_length;
                  if ((int)uVar11 < 1) {
                    return uVar11;
                  }
                  uVar35 = 0;
                  if ((pSVar21->max_length & 0xffffffff) != 0) {
                    do {
                      pIVar33 = pSVar21->m_Items[uVar35];
                      if (pIVar33 != (Il2CppObject *)0x0) {
                        if (pIVar33 == (Il2CppObject *)0x0) goto label_0341a9ed;
                        pSVar30 = (System_Object_array *)pIVar33[4].klass;
                        (*pIVar33[1].monitor)(pSVar30,pAVar19,pIVar33[2].monitor);
                      }
                      uVar35 = uVar35 + 1;
                      uVar11 = (uint)pSVar21->max_length;
                      if ((long)(int)uVar11 <= (long)uVar35) {
                        return uVar11;
                      }
                    } while (uVar35 < uVar11);
                  }
                  goto label_0341a9f2;
                }
              }
            }
          }
        }
        else {
          pvVar5 = (((Il2CppClass *)plVar23)->_1).byval_arg.data;
          if (pvVar5 != (void *)0x0) {
            if (*(char *)((long)pvVar5 + 0x28) == '\0') goto label_0341a96a;
            pSStack_220->m_Items[0] = (Il2CppObject *)(pAVar20->fields)._Error_k__BackingField;
            pSVar30 = (System_Object_array *)pSStack_220->m_Items;
            il2cpp_runtime_helper_022b4080();
            if (pSStack_220 != (System_Object_array *)0x0) {
              pSVar30 = (System_Object_array *)pSStack_220->max_length;
              pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  ((Il2CppObject *)pSVar30,(pAVar20->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
              ;
              goto joined_r0x0341a95f;
            }
          }
        }
      }
      else {
        *(undefined2 *)(pSStack_220->m_Items + 3) = 1;
        pSStack_220->max_length = (il2cpp_array_size_t)(pAVar20->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(&pSStack_220->max_length);
        pSVar30 = (System_Object_array *)0x0;
        if (pSStack_220 != (System_Object_array *)0x0) {
          pSStack_220->m_Items[0] = (Il2CppObject *)0x0;
          pSVar30 = (System_Object_array *)pSStack_220->m_Items;
          il2cpp_runtime_helper_022b4080(pSVar30,0);
          pSVar21 = pSStack_220;
          pcVar8 = (((Il2CppClass *)plVar23)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar30 = *(System_Object_array **)(pcVar8 + 0x40);
            Var46 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar21 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar21->m_Items + 1) = Var46;
              *(undefined2 *)((long)pSVar21->m_Items + 0x16) = uStack_212;
              *(undefined4 *)((long)pSVar21->m_Items + 0x12) = uStack_216;
              if (pSStack_220 != (System_Object_array *)0x0) {
                pSVar30 = (System_Object_array *)pSStack_220->max_length;
                pAVar19 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                    ((Il2CppObject *)pSVar30,0,
                                     *(MethodInfo_331B380 **)
                                      (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100
                                      ));
                goto joined_r0x0341a95f;
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  uVar22 = il2cpp_runtime_helper_022b2ca0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)uVar22 >> 8),
                  *(undefined1 *)&((System_Collections_Generic_List_object__Fields *)&pSVar30->bounds)->_items
                 );
}


// ApplicationManagers.Credits.AottgCreditsParser$$Trimmed
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditsParser__Trimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44c75e0

System_String_o *
ApplicationManagers_Credits_AottgCreditsParser__Trimmed(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  undefined1 uVar3;
  byte bVar4;
  uint uVar5;
  int32_t length;
  void *pvVar6;
  System_Object_array *pSVar7;
  char *pcVar8;
  unkuint10 Var9;
  char cVar10;
  bool_conflict bVar11;
  long lVar12;
  Il2CppClass *__this;
  Il2CppClass *pIVar13;
  System_TimeSpan_Fields t2;
  undefined4 extraout_var;
  Il2CppClass *pIVar14;
  System_TimeSpan_Fields SVar15;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar16;
  System_TimeSpan_o t1;
  undefined4 extraout_var_00;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar17;
  System_Object_array *pSVar18;
  undefined8 uVar19;
  System_String_o *pSVar20;
  Il2CppObject *pIVar21;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_00;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_01;
  Il2CppClass *pIVar22;
  undefined4 extraout_var_01;
  Il2CppClass *onResult;
  System_String_o *extraout_RAX;
  Il2CppClass *pIVar23;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  ulong uVar24;
  char **ppcVar25;
  System_TimeSpan_Fields SVar26;
  System_TimeSpan_Fields SVar27;
  Il2CppClass *pIVar28;
  long *error;
  System_Object_array *__this_02;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar29;
  Il2CppClass *pIVar30;
  MethodInfo *in_R9;
  undefined1 auVar31 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_03;
  unkbyte10 Var32;
  System_Object_array *pSStack_f0;
  undefined4 uStack_e6;
  undefined2 uStack_e2;
  Il2CppClass *pIStack_e0;
  Il2CppClass *pIStack_d8;
  System_DateTime_Fields SStack_d0;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_c8;
  char cStack_c0;
  undefined7 uStack_bf;
  undefined8 uStack_b8;
  MethodInfo *pMStack_a8;
  Il2CppClass *pIStack_a0;
  Il2CppClass *pIStack_98;
  Il2CppClass *pIStack_90;
  Il2CppClass *pIStack_88;
  Il2CppClass *pIStack_80;
  Il2CppClass *pIStack_78;
  Il2CppClass *pIStack_70;
  Il2CppClass *pIStack_68;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_60;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_58;
  MethodInfo_37EC980 *method_00;
  
  if (g_data_057aeadf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeadf = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return (System_String_o *)0x0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar10 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                       (node,(node->klass->vtable)._15_get_IsNull.method);
    if (cVar10 != '\0') {
      return (System_String_o *)0x0;
    }
    pSVar20 = (System_String_o *)(*(node->klass->vtable)._9_get_Value.methodPtr)(node);
    if (pSVar20 != (System_String_o *)0x0) {
      pSVar20 = System_String__Trim(pSVar20,(MethodInfo *)0x0);
      return pSVar20;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeae2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchCredits);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
    g_data_057aeae2 = '\x01';
  }
  pIVar21 = Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar21;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar21);
  lVar12 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
  System_Action_AottgCreditsService_UnitKey__object____ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  SVar15._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  __this_00 = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_00,(System_TimeSpan_o)SVar15._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  __this_01 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
  pAVar29 = __this_01;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            (__this_01,fetch,(System_Func_DateTimeOffset__o *)0x0,__this_00,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
  if (lVar12 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar12 + 0x20) = __this_01;
    pSVar20 = (System_String_o *)il2cpp_runtime_helper_022b4080(lVar12 + 0x20,__this_01);
    return pSVar20;
  }
  il2cpp_runtime_helper_022b2c90();
  pAStack_58 = (ApplicationManagers_Api_AottgQueryPolicy_o *)__this_01;
  if (g_data_057aeae3 == '\0') {
    pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c788d;
  pIVar22 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c789a;
  now.fields._8_8_ = pIVar22;
  System_Object___ctor((Il2CppObject *)pIVar22,(MethodInfo *)0x0);
  if (pIVar22 == (Il2CppClass *)0x0) {
label_044c7a30:
    pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)now.fields._8_8_,(MethodInfo *)0x0);
    return extraout_RAX;
  }
  ppcVar25 = &(pIVar22->_1).name;
  (pIVar22->_1).name = (char *)pAVar29;
  pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar25);
  now.fields._8_8_ = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78f2;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)now.fields._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar22 = "not_initialized";
  if ((char)bVar11 != '\0') {
    pcVar8 = *ppcVar25;
    if (pcVar8 != (char *)0x0) {
      if (g_data_057aead4 == '\0') {
        pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7925;
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
        g_data_057aead4 = '\x01';
      }
      pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c793b;
      pIVar21 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
      pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7948;
      System_Object___ctor(pIVar21,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar21[1].klass = 3;
      pIVar21[1].monitor = (void *)0x0;
      pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7962;
      il2cpp_runtime_helper_022b4080(&pIVar21[1].monitor,0);
      pIVar21[2].klass = pIVar22;
      pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7972;
      il2cpp_runtime_helper_022b4080(pIVar21 + 2,pIVar22);
      *(undefined2 *)&pIVar21[2].monitor = 0;
      *(undefined1 *)((long)&pIVar21[2].monitor + 2) = 0;
      pSVar20 = (System_String_o *)
                (**(code **)(pcVar8 + 0x18))
                          (*(undefined8 *)(pcVar8 + 0x40),pIVar21,*(undefined8 *)(pcVar8 + 0x28));
      return pSVar20;
    }
    return (System_String_o *)CONCAT44(extraout_var_01,bVar11);
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar22 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79e3;
  onResult = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79fd;
  now.fields._8_8_ = onResult;
  System_Action_object____ctor();
  SVar15._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar22 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar4;
  pIVar23 = (Il2CppClass *)((ulong)fetch & 0xff);
  pAStack_60 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pAStack_58;
  pIStack_68 = (Il2CppClass *)0x0;
  lVar12 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pIVar23;
  pIVar30 = MethodInfo_Void_Get;
  pAStack_58 = __this_00;
  if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
    pIStack_70 = (Il2CppClass *)0x341a1ae;
    lVar12 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_70 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar12);
  pIVar14 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_70 = (Il2CppClass *)0x341a1d0;
  pIVar13 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar14);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar22;
    pIStack_70 = (Il2CppClass *)0x341a1ec;
    pIVar14 = pIVar22;
    pIVar13 = (Il2CppClass *)il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar4;
    if (onResult == (Il2CppClass *)0x0) {
      return (System_String_o *)pIVar13;
    }
    pIVar13 = *(Il2CppClass **)&(pIVar22->_1).byval_arg.bits;
    if (pIVar13 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(Il2CppClass **)
            (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_70 = (Il2CppClass *)0x341a221;
      pIVar14 = (Il2CppClass *)t2._ticks;
      bVar11 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (pIVar13,t2._ticks,&pIStack_68);
      if ((char)bVar11 == '\0') {
        lVar12 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x58)
        ;
        if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
          pIStack_70 = (Il2CppClass *)0x341a242;
          lVar12 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_70 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar12);
        pIVar14 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_70 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar14);
        pIVar13 = *(Il2CppClass **)&(pIVar22->_1).byval_arg.bits;
        pIStack_68 = (Il2CppClass *)t2._ticks;
        if (pIVar13 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar14 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_70 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (pIVar13,pIVar14,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (Il2CppClass *)(pIVar22->_1).namespaze;
      if (now.fields._8_8_ != (Il2CppClass *)0x0) {
        pIVar14 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        pIVar13 = ((now.fields._8_8_)->_1).element_class;
        pIStack_70 = (Il2CppClass *)0x341a2ad;
        auVar31 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)fetch == '\0') {
          now.fields._8_8_ = (Il2CppClass *)(auVar31._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo **)
                   (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_70 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar31._0_8_;
          pIVar14 = pIStack_68;
          pIVar13 = pIVar22;
          pIVar30 = onResult;
          bVar11 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar22,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_68,now,
                              (System_Action_AottgQueryResult_TValue___o *)onResult,
                              (MethodInfo_331A460 *)in_R9);
          if ((char)bVar11 != '\0') {
            return (System_String_o *)(Il2CppClass *)CONCAT44(extraout_var,bVar11);
          }
        }
        if (pIStack_68 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_68->_1).this_arg.bits == '\0') {
            pIStack_70 = (Il2CppClass *)0x341a327;
            pIVar14 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIStack_70 = (Il2CppClass *)0x341a30e;
            pIVar14 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_68->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          pIVar13 = (onResult->_1).element_class;
          pIStack_70 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult->_1).namespaze)(pIVar13,pIVar14,*(undefined8 *)&(onResult->_1).byval_arg.bits);
          if ((pIStack_68 != (Il2CppClass *)0x0) &&
             (pIVar13 = (Il2CppClass *)(pIStack_68->_1).name, pIVar13 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(Il2CppClass **)
                  (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(pIVar13->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar8 = (pIVar13->_1).name;
            if (pcVar8 != (char *)0x0) {
              uVar5 = *(uint *)&(pIVar13->_1).namespaze;
              pIVar14 = onResult;
              if (uVar5 < *(uint *)(pcVar8 + 0x18)) {
                now.fields._8_8_ = (Il2CppClass *)(ulong)(uVar5 + 1);
                *(uint *)&(pIVar13->_1).namespaze = uVar5 + 1;
                pIVar13 = (Il2CppClass *)(pcVar8 + (long)(int)uVar5 * 8 + 0x20);
                *(Il2CppClass **)(pcVar8 + (long)(int)uVar5 * 8 + 0x20) = onResult;
                pIStack_70 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
              }
              else {
                pIStack_70 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)pIVar13,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
              }
              if (pIStack_68 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIStack_68->_1).this_arg.bits + 2) != '\0') {
                  return (System_String_o *)pIStack_68;
                }
                *(undefined1 *)((long)&(pIStack_68->_1).this_arg.bits + 2) = 1;
                pcVar8 = (pIVar22->_1).name;
                uVar3 = *(undefined1 *)&(__this->_1).namespaze;
                onResult = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar3);
                lVar12 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xe8);
                if ((*(byte *)(lVar12 + 0x135) & 1) == 0) {
                  pIStack_70 = (Il2CppClass *)0x341a3fe;
                  lVar12 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_70 = (Il2CppClass *)0x341a406;
                pIVar22 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar12);
                now.fields._8_8_ =
                     *(Il2CppClass **)
                      (*(long *)((long)(((Il2CppClass *)SVar15._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_70 = (Il2CppClass *)0x341a42d;
                pIVar14 = __this;
                pIVar13 = pIVar22;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar8 != (char *)0x0) {
                  pIStack_70 = (Il2CppClass *)0x341a444;
                  now.fields._8_8_ =
                       (Il2CppClass *)
                       (**(code **)(pcVar8 + 0x18))
                                 (*(undefined8 *)(pcVar8 + 0x40),uVar3,pIVar22,*(undefined8 *)(pcVar8 + 0x28))
                  ;
                  return (System_String_o *)now.fields._8_8_;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pIStack_70 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_80 = (Il2CppClass *)SVar15._ticks;
  pIVar28 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar27._ticks = (int64_t)pIVar14;
  error = (long *)pIVar13;
  pMStack_a8 = in_R9;
  pIStack_a0 = pIVar30;
  pIStack_98 = __this;
  pIStack_90 = onResult;
  pIStack_88 = pIVar23;
  pIStack_78 = pIVar22;
  pIStack_70 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    error = &TypeInfo_TimeSpan;
    pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_c0 = '\0';
  uStack_bf = 0;
  uStack_b8 = 0;
  if (pIVar14 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar14->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar14->_1).this_arg.bits + 1) == '\0') {
label_0341a68f:
        SVar26._ticks = 0;
label_0341a691:
        return (System_String_o *)(SVar26._ticks & 0xffffffff);
      }
      pvVar6 = (pIVar13->_1).byval_arg.data;
      if (pvVar6 != (void *)0x0) {
        cStack_c0 = *(char *)((long)pvVar6 + 0x18);
        uStack_b8 = *(undefined8 *)((long)pvVar6 + 0x20);
        if (cStack_c0 == '\0') goto label_0341a68f;
        ppIVar2 = (Il2CppType **)&(pIVar14->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var9 = *(unkuint10 *)ppIVar2;
        SVar15._ticks = (int64_t)*(ushort *)&(pIVar14->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a5ed
        ;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var9;
        left_00.fields._8_8_ = pIVar28;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ = (Il2CppClass *)SVar15._ticks;
        error = (long *)extraout_RDX.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar6 = (pIVar13->_1).byval_arg.data;
        SVar27._ticks = (int64_t)pIVar28;
        if (pvVar6 != (void *)0x0) {
          cStack_c0 = *(char *)((long)pvVar6 + 0x18);
          uStack_b8 = *(undefined8 *)((long)pvVar6 + 0x20);
          pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a61f;
          __this_03.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_03.fields._0_8_ = &cStack_c0;
          SVar15._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_03,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                         0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar26._ticks = 0;
          t2._ticks = 0;
          pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a649;
          bVar11 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)SVar15._ticks,(MethodInfo *)0x0);
          if ((char)bVar11 == '\0') goto label_0341a691;
          error = (pIVar14->_1).byval_arg.data;
          SVar27._ticks = 1;
          pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a672;
          pAVar16 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)error,1,
                               (MethodInfo_331B520 *)pMStack_a8->klass->rgctx_data[0x21].method);
          now.fields._8_8_ = (Il2CppClass *)0x0;
          if (pIStack_a0 != (Il2CppClass *)0x0) goto label_0341a67c;
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar14->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var9 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (Il2CppClass *)(ulong)*(ushort *)&(pIVar14->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4ff
        ;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var9;
      left.fields._8_8_ = pIVar28;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar27._ticks = (int64_t)pIVar28;
      error = (long *)extraout_RDX.fields._dateData;
      SVar15._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar6 = (pIVar13->_1).byval_arg.data;
      if (pvVar6 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar6 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                       0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a54d
        ;
        SVar27._ticks = t2._ticks;
        error = (long *)SVar15._ticks;
        bVar11 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar15._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') goto label_0341a589;
        error = (long *)(pIVar14->_1).namespaze;
        SVar27._ticks = 1;
        pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a576
        ;
        pAVar16 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)error,1,
                             (MethodInfo_331B380 *)pMStack_a8->klass->rgctx_data[0x20].method);
        SVar26._ticks = t2._ticks;
        if (pIStack_a0 == (Il2CppClass *)0x0) {
          now.fields._8_8_ = (Il2CppClass *)0x0;
          goto label_0341a6a2;
        }
label_0341a67c:
        pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a68a
        ;
        (*(code *)(pIStack_a0->_1).namespaze)
                  ((pIStack_a0->_1).element_class,pAVar16,*(undefined8 *)&(pIStack_a0->_1).byval_arg.bits);
        SVar26._ticks = CONCAT71((int7)((ulong)SVar26._ticks >> 8),1);
        goto label_0341a691;
      }
    }
  }
label_0341a6a2:
  pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_e0 = pIVar14;
  pIStack_d8 = (Il2CppClass *)SVar15._ticks;
  SStack_d0 = extraout_RDX.fields._dateData;
  pAStack_c8 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pSStack_f0 = (System_Object_array *)0x0;
  __this_02 = *(System_Object_array **)&(((Il2CppClass *)error)->_1).byval_arg.bits;
  if (__this_02 != (System_Object_array *)0x0) {
    bVar11 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (__this_02,SVar27._ticks & 0xff,&pSStack_f0);
    if ((char)bVar11 == '\0') {
      return (System_String_o *)CONCAT44(extraout_var_00,bVar11);
    }
    if ((pSStack_f0 != (System_Object_array *)0x0) &&
       (((*(undefined1 *)((long)pSStack_f0->m_Items + 0x1a) = 0, pAVar17 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (__this_02 = "unknown_error",
         pAVar17 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             ((System_String_o *)"unknown_error",
                              *(MethodInfo_331AB10 **)
                               (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar17 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) &&
        (__this_02 = pSStack_f0, pSStack_f0 != (System_Object_array *)0x0)))) {
      if ((char)(pAVar17->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(pSStack_f0->m_Items + 3) == '\0') {
label_0341a96a:
          *(undefined2 *)(pSStack_f0->m_Items + 3) = 0x100;
          pSStack_f0->max_length = 0;
          pSStack_f0->m_Items[0] = (Il2CppObject *)(pAVar17->fields)._Error_k__BackingField;
          __this_02 = (System_Object_array *)pSStack_f0->m_Items;
          il2cpp_runtime_helper_022b4080();
          pSVar18 = pSStack_f0;
          pcVar8 = (((Il2CppClass *)error)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            __this_02 = *(System_Object_array **)(pcVar8 + 0x40);
            Var32 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar18 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar18->m_Items + 1) = Var32;
              *(undefined4 *)((long)pSVar18->m_Items + 0x12) = uStack_e6;
              *(undefined2 *)((long)pSVar18->m_Items + 0x16) = uStack_e2;
              __this_02 = (System_Object_array *)(pAVar17->fields)._Error_k__BackingField;
              pAVar16 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                  ((System_String_o *)__this_02,0,
                                   *(MethodInfo_331B520 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108))
              ;
joined_r0x0341a95f:
              if (((pSStack_f0 != (System_Object_array *)0x0) &&
                  (__this_02 = ((System_Collections_Generic_List_object__Fields *)&pSStack_f0->bounds)->_items
                  , __this_02 != (System_Object_array *)0x0)) &&
                 ((pSVar18 = System_Collections_Generic_List_object___ToArray
                                       ((System_Collections_Generic_List_object__o *)__this_02,
                                        *(MethodInfo_362E340 **)
                                         (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) +
                                         0x148)), pSStack_f0 != (System_Object_array *)0x0 &&
                  (pSVar7 = ((System_Collections_Generic_List_object__Fields *)&pSStack_f0->bounds)->_items,
                  pSVar7 != (System_Object_array *)0x0)))) {
                piVar1 = (int *)((long)&pSVar7->max_length + 4);
                *piVar1 = *piVar1 + 1;
                length = (int32_t)pSVar7->max_length;
                *(undefined4 *)&pSVar7->max_length = 0;
                if (0 < length) {
                  __this_02 = (System_Object_array *)pSVar7->bounds;
                  System_Array__Clear((System_Array_o *)__this_02,0,length,(MethodInfo *)0x0);
                }
                if (pSVar18 != (System_Object_array *)0x0) {
                  pSVar20 = (System_String_o *)pSVar18->max_length;
                  if ((int)pSVar20 < 1) {
                    return pSVar20;
                  }
                  uVar24 = 0;
                  if (((ulong)pSVar20 & 0xffffffff) != 0) {
                    do {
                      pIVar21 = pSVar18->m_Items[uVar24];
                      if (pIVar21 != (Il2CppObject *)0x0) {
                        if (pIVar21 == (Il2CppObject *)0x0) goto label_0341a9ed;
                        __this_02 = (System_Object_array *)pIVar21[4].klass;
                        (*pIVar21[1].monitor)(__this_02,pAVar16,pIVar21[2].monitor);
                      }
                      uVar24 = uVar24 + 1;
                      uVar5 = (uint)pSVar18->max_length;
                      if ((long)(int)uVar5 <= (long)uVar24) {
                        return (System_String_o *)(ulong)uVar5;
                      }
                    } while (uVar24 < uVar5);
                  }
                  goto label_0341a9f2;
                }
              }
            }
          }
        }
        else {
          pvVar6 = (((Il2CppClass *)error)->_1).byval_arg.data;
          if (pvVar6 != (void *)0x0) {
            if (*(char *)((long)pvVar6 + 0x28) == '\0') goto label_0341a96a;
            pSStack_f0->m_Items[0] = (Il2CppObject *)(pAVar17->fields)._Error_k__BackingField;
            __this_02 = (System_Object_array *)pSStack_f0->m_Items;
            il2cpp_runtime_helper_022b4080();
            if (pSStack_f0 != (System_Object_array *)0x0) {
              __this_02 = (System_Object_array *)pSStack_f0->max_length;
              pAVar16 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  ((Il2CppObject *)__this_02,(pAVar17->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
              ;
              goto joined_r0x0341a95f;
            }
          }
        }
      }
      else {
        *(undefined2 *)(pSStack_f0->m_Items + 3) = 1;
        pSStack_f0->max_length = (il2cpp_array_size_t)(pAVar17->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(&pSStack_f0->max_length);
        __this_02 = (System_Object_array *)0x0;
        if (pSStack_f0 != (System_Object_array *)0x0) {
          pSStack_f0->m_Items[0] = (Il2CppObject *)0x0;
          __this_02 = (System_Object_array *)pSStack_f0->m_Items;
          il2cpp_runtime_helper_022b4080(__this_02,0);
          pSVar18 = pSStack_f0;
          pcVar8 = (((Il2CppClass *)error)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            __this_02 = *(System_Object_array **)(pcVar8 + 0x40);
            Var32 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar18 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar18->m_Items + 1) = Var32;
              *(undefined2 *)((long)pSVar18->m_Items + 0x16) = uStack_e2;
              *(undefined4 *)((long)pSVar18->m_Items + 0x12) = uStack_e6;
              if (pSStack_f0 != (System_Object_array *)0x0) {
                __this_02 = (System_Object_array *)pSStack_f0->max_length;
                pAVar16 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                    ((Il2CppObject *)__this_02,0,
                                     *(MethodInfo_331B380 **)
                                      (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100
                                      ));
                goto joined_r0x0341a95f;
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  uVar19 = il2cpp_runtime_helper_022b2ca0();
  return (System_String_o *)
         CONCAT71((int7)((ulong)uVar19 >> 8),
                  *(undefined1 *)
                   &((System_Collections_Generic_List_object__Fields *)&__this_02->bounds)->_items);
}


// ApplicationManagers.Credits.AottgCreditsParser$$IsObject
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__IsObject (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44c69e0

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__IsObject(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int *piVar1;
  Il2CppType **ppIVar2;
  undefined1 uVar3;
  byte bVar4;
  int32_t length;
  void *pvVar5;
  System_Object_array *pSVar6;
  InvokerMethod pIVar7;
  char *pcVar8;
  unkuint10 Var9;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAVar10;
  System_String_o *pSVar11;
  ApplicationManagers_Credits_AottgCreditGroup_array *groups;
  char cVar12;
  bool_conflict bVar13;
  uint uVar14;
  int iVar15;
  undefined4 uVar16;
  bool_conflict extraout_EAX;
  long lVar17;
  Il2CppClass *__this;
  Il2CppClass *pIVar18;
  System_TimeSpan_Fields t2;
  Il2CppClass *pIVar19;
  System_TimeSpan_Fields SVar20;
  ApplicationManagers_Api_AottgQueryResult_TValue__o *pAVar21;
  System_TimeSpan_o t1;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *pAVar22;
  System_Object_array *pSVar23;
  undefined8 uVar24;
  ApplicationManagers_Credits_AottgCreditCategory_o *__this_00;
  long *plVar25;
  SimpleJSONFixed_JSONNode_o *pSVar26;
  undefined8 *puVar27;
  MethodInfo *pMVar28;
  MethodInfo *pMVar29;
  MethodInfo *pMVar30;
  System_Object_array *pSVar31;
  MethodInfo *pMVar32;
  Il2CppClass *pIVar33;
  Il2CppObject *pIVar34;
  System_String_o *pSVar35;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *fetch;
  ApplicationManagers_Api_AottgQueryPolicy_o *__this_01;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *__this_02;
  Il2CppClass *onResult;
  Il2CppClass *in_RCX;
  Il2CppClass *pIVar36;
  System_DateTime_o extraout_RDX;
  ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_04;
  MethodInfo *method_05;
  ulong uVar37;
  MethodInfo *node_00;
  char **ppcVar38;
  System_TimeSpan_Fields SVar39;
  System_Collections_Generic_List_object__c **unaff_RBP;
  System_TimeSpan_Fields SVar40;
  MethodInfo *pMVar41;
  MethodInfo *pMVar42;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSVar43;
  Il2CppClass *__this_03;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAVar44;
  Il2CppClass *pIVar45;
  MethodInfo *in_R8;
  MethodInfo *in_R9;
  MethodInfo *unaff_R12;
  System_Collections_Generic_List_object__c **unaff_R13;
  MethodInfo **ppMVar46;
  undefined1 auVar47 [16];
  System_DateTimeOffset_o now;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_Nullable_TimeSpan__o __this_04;
  unkbyte10 Var48;
  System_Object_array *pSStack_280;
  undefined4 uStack_276;
  undefined2 uStack_272;
  Il2CppClass *pIStack_270;
  Il2CppClass *pIStack_268;
  System_DateTime_Fields SStack_260;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *pAStack_258;
  char cStack_250;
  undefined7 uStack_24f;
  undefined8 uStack_248;
  MethodInfo *pMStack_238;
  Il2CppClass *pIStack_230;
  Il2CppClass *pIStack_228;
  Il2CppClass *pIStack_220;
  Il2CppClass *pIStack_218;
  Il2CppClass *pIStack_210;
  Il2CppClass *pIStack_208;
  Il2CppClass *pIStack_200;
  Il2CppClass *pIStack_1f8;
  ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *pAStack_1f0;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_1e8;
  ApplicationManagers_Api_AottgQueryPolicy_o *pAStack_1e0;
  System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *pSStack_1d8;
  long lStack_1d0;
  Il2CppClass *pIStack_1c8;
  undefined8 uStack_1c0;
  MethodInfo *pMStack_1b8;
  MethodInfo *pMStack_1b0;
  undefined8 *puStack_1a8;
  MethodInfo *pMStack_1a0;
  MethodInfo **ppMStack_198;
  Il2CppClass *pIStack_188;
  System_Guid_Fields SStack_180;
  undefined8 uStack_168;
  MethodInfo *pMStack_160;
  Il2CppClass *pIStack_158;
  MethodInfo *pMStack_150;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAStack_140;
  System_String_o *pSStack_138;
  System_String_o *pSStack_130;
  MethodInfo *pMStack_128;
  MethodInfo *pMStack_120;
  System_Collections_Generic_List_object__c **ppSStack_118;
  MethodInfo *pMStack_110;
  MethodInfo *pMStack_108;
  MethodInfo *pMStack_100;
  MethodInfo *pMStack_f8;
  MethodInfo *pMStack_f0;
  MethodInfo *pMStack_e8;
  Il2CppClass *pIStack_e0;
  MethodInfo *pMStack_d8;
  MethodInfo *pMStack_d0;
  ApplicationManagers_Credits_AottgCreditGroup_array *pAStack_58;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  SimpleJSONFixed_JSONNode_o *pSStack_38;
  MethodInfo_37EC980 *method_00;
  
  if (g_data_057aeae0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  puVar27 = (undefined8 *)0x0;
  pMVar41 = (MethodInfo *)node;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar13 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                       (node,(node->klass->vtable)._17_get_IsObject.method);
    return bVar13;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_38 = node;
  if (g_data_057aead9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditCategory);
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aead9 = '\x01';
  }
  pSStack_40 = (System_String_o *)0x0;
  pSStack_48 = (System_String_o *)0x0;
  pAStack_50 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  pAStack_58 = (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0;
  *puVar27 = 0;
  il2cpp_runtime_helper_022b4080(puVar27);
  if (g_data_057aeae0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar30 = (MethodInfo *)0x0;
  pMVar32 = pMVar41;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar41,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (pMVar41 != (MethodInfo *)0x0) {
    cVar12 = (**(code **)(pMVar41->methodPointer + 0x248))
                       (pMVar41,*(undefined8 *)(pMVar41->methodPointer + 0x250));
    if ((((cVar12 != '\0') &&
         (bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                             ((SimpleJSONFixed_JSONNode_o *)pMVar41,"name",&pSStack_40,
                              (MethodInfo *)in_RCX), (char)bVar13 != '\0')) &&
        (bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                            ((SimpleJSONFixed_JSONNode_o *)pMVar41,&pSStack_48,method_01),
        (char)bVar13 != '\0')) &&
       ((bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                            ((SimpleJSONFixed_JSONNode_o *)pMVar41,&pAStack_50,method_02),
        (char)bVar13 != '\0' &&
        (bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups
                            ((SimpleJSONFixed_JSONNode_o *)pMVar41,&pAStack_58,method_03),
        pSVar11 = pSStack_40, pSVar35 = pSStack_48, pAVar10 = pAStack_50, groups = pAStack_58,
        (char)bVar13 != '\0')))) {
      __this_00 = (ApplicationManagers_Credits_AottgCreditCategory_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditCategory);
      ApplicationManagers_Credits_AottgCreditCategory___ctor(__this_00,pSVar11,pSVar35,pAVar10,groups,in_R9);
      *puVar27 = __this_00;
      il2cpp_runtime_helper_022b4080(puVar27,__this_00);
      return (bool_conflict)CONCAT71((int7)((ulong)pSVar11 >> 8),1);
    }
    return 0;
  }
  il2cpp_runtime_helper_022b2c90();
  extraout_RDX_01->methodPointer = (Il2CppMethodPointer)0x0;
  pMVar41 = (MethodInfo *)0x0;
  pMVar42 = extraout_RDX_01;
  il2cpp_runtime_helper_022b4080();
  if (pMVar32 != (MethodInfo *)0x0) {
    cVar12 = (*((Il2CppClass *)pMVar32->methodPointer)->vtable[0x1c].methodPtr)
                       (pMVar32,pMVar30,((Il2CppClass *)pMVar32->methodPointer)->vtable[0x1c].method);
    if (cVar12 == '\0') {
      return 0;
    }
    pMVar41 = pMVar30;
    pMVar42 = pMVar32;
    plVar25 = (long *)(*((Il2CppClass *)pMVar32->methodPointer)->vtable[7].methodPtr)
                                (pMVar32,pMVar30,((Il2CppClass *)pMVar32->methodPointer)->vtable[7].method);
    if (plVar25 != (long *)0x0) {
      cVar12 = (**(code **)(*plVar25 + 0x208))(plVar25,*(undefined8 *)(*plVar25 + 0x210));
      if (cVar12 != '\0') {
        pSVar26 = (SimpleJSONFixed_JSONNode_o *)
                  (*((Il2CppClass *)pMVar32->methodPointer)->vtable[7].methodPtr)
                            (pMVar32,pMVar30,((Il2CppClass *)pMVar32->methodPointer)->vtable[7].method);
        now.fields._8_8_ =
             (Il2CppClass *)ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar26,pMVar30);
        extraout_RDX_01->methodPointer = (Il2CppMethodPointer)now.fields._8_8_;
        il2cpp_runtime_helper_022b4080(extraout_RDX_01);
        uVar14 = System_String__IsNullOrEmpty
                           ((System_String_o *)extraout_RDX_01->methodPointer,(MethodInfo *)0x0);
        return uVar14 ^ 1;
      }
      return 0;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeade == '\0') {
    il2cpp_runtime_helper_023445d0(&"description");
    g_data_057aeade = '\x01';
  }
  pMVar41->methodPointer = (Il2CppMethodPointer)0x0;
  pMVar32 = (MethodInfo *)0x0;
  pMVar30 = pMVar41;
  il2cpp_runtime_helper_022b4080();
  ppMVar46 = (MethodInfo **)extraout_RDX_01;
  if (pMVar42 != (MethodInfo *)0x0) {
    ppMVar46 = &"description";
    cVar12 = (*((Il2CppClass *)pMVar42->methodPointer)->vtable[0x1c].methodPtr)
                       (pMVar42,"description",((Il2CppClass *)pMVar42->methodPointer)->vtable[0x1c].method);
    if (cVar12 == '\0') {
label_044c6db1:
      unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
label_044c6db3:
      return (bool_conflict)unaff_RBP;
    }
    pMVar32 = "description";
    pMVar30 = pMVar42;
    puVar27 = (undefined8 *)
              (*((Il2CppClass *)pMVar42->methodPointer)->vtable[7].methodPtr)
                        (pMVar42,"description",((Il2CppClass *)pMVar42->methodPointer)->vtable[7].method);
    if (puVar27 != (undefined8 *)0x0) {
      in_RCX = (Il2CppClass *)*puVar27;
      cVar12 = (*(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->_15_Remove).methodPtr)
                         (puVar27,(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                                  _15_Remove).method);
      unaff_RBP = (System_Collections_Generic_List_object__c **)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
      if (cVar12 != '\0') goto label_044c6db3;
      pMVar32 = "description";
      pMVar30 = pMVar42;
      plVar25 = (long *)(*((Il2CppClass *)pMVar42->methodPointer)->vtable[7].methodPtr)
                                  (pMVar42,"description",
                                   ((Il2CppClass *)pMVar42->methodPointer)->vtable[7].method);
      if (plVar25 != (long *)0x0) {
        cVar12 = (**(code **)(*plVar25 + 0x208))(plVar25,*(undefined8 *)(*plVar25 + 0x210));
        if (cVar12 != '\0') {
          pMVar32 = "description";
          pSVar26 = (SimpleJSONFixed_JSONNode_o *)
                    (*((Il2CppClass *)pMVar42->methodPointer)->vtable[7].methodPtr)
                              (pMVar42,"description",((Il2CppClass *)pMVar42->methodPointer)->vtable[7].method)
          ;
          now.fields._8_8_ =
               (Il2CppClass *)ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar26,pMVar32);
          pMVar41->methodPointer = (Il2CppMethodPointer)now.fields._8_8_;
          il2cpp_runtime_helper_022b4080(pMVar41,now.fields._8_8_);
          goto label_044c6db3;
        }
        goto label_044c6db1;
      }
    }
  }
  pMStack_d8 = (MethodInfo *)il2cpp_runtime_helper_022b2c90();
  pMVar41 = (MethodInfo *)&pMStack_d8;
  pMStack_d0 = pMVar42;
  if (g_data_057aeadc == '\0') {
    pIStack_e0 = (Il2CppClass *)0x44c6df6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    pIStack_e0 = (Il2CppClass *)0x44c6e02;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditContributor_ToArray);
    pIStack_e0 = (Il2CppClass *)0x44c6e0e;
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
    pIStack_e0 = (Il2CppClass *)0x44c6e1a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgCreditContributor);
    pIStack_e0 = (Il2CppClass *)0x44c6e26;
    il2cpp_runtime_helper_023445d0(&"contributors");
    g_data_057aeadc = '\x01';
  }
  pMStack_d8 = (MethodInfo *)0x0;
  pMVar32->methodPointer = (Il2CppMethodPointer)0x0;
  pMVar42 = (MethodInfo *)0x0;
  pIStack_e0 = (Il2CppClass *)0x44c6e46;
  node_00 = pMVar32;
  il2cpp_runtime_helper_022b4080();
  if (pMVar30 != (MethodInfo *)0x0) {
    pIStack_e0 = (Il2CppClass *)0x44c6e6d;
    cVar12 = (*((Il2CppClass *)pMVar30->methodPointer)->vtable[0x1c].methodPtr)
                       (pMVar30,"contributors",((Il2CppClass *)pMVar30->methodPointer)->vtable[0x1c].method);
    if (cVar12 == '\0') {
      return 0;
    }
    pIStack_e0 = (Il2CppClass *)0x44c6e8c;
    pMVar42 = "contributors";
    node_00 = pMVar30;
    puVar27 = (undefined8 *)
              (*((Il2CppClass *)pMVar30->methodPointer)->vtable[7].methodPtr)
                        (pMVar30,"contributors",((Il2CppClass *)pMVar30->methodPointer)->vtable[7].method);
    unaff_RBP = (System_Collections_Generic_List_object__c **)&"contributors";
    if (puVar27 != (undefined8 *)0x0) {
      in_RCX = (Il2CppClass *)*puVar27;
      pIStack_e0 = (Il2CppClass *)0x44c6ea8;
      cVar12 = (*(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                 _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).methodPtr)
                         (puVar27,(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                                  _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).method);
      if (cVar12 == '\0') {
        return 0;
      }
      pIStack_e0 = (Il2CppClass *)0x44c6ec7;
      pMVar42 = "contributors";
      node_00 = pMVar30;
      pMVar28 = (MethodInfo *)
                (*((Il2CppClass *)pMVar30->methodPointer)->vtable[7].methodPtr)
                          (pMVar30,"contributors",((Il2CppClass *)pMVar30->methodPointer)->vtable[7].method);
      if (pMVar28 != (MethodInfo *)0x0) {
        in_RCX = (Il2CppClass *)pMVar28->methodPointer;
        pMVar42 = (MethodInfo *)
                  (((System_Collections_Generic_List_object__c *)(in_RCX->vtable + 0x23))->_1).
                  implementedInterfaces;
        pIStack_e0 = (Il2CppClass *)0x44c6ee3;
        pMVar29 = (MethodInfo *)(*in_RCX->vtable[0x2d].methodPtr)();
        node_00 = pMVar28;
        if (pMVar29 != (MethodInfo *)0x0) {
          pIStack_e0 = (Il2CppClass *)0x44c6f02;
          uVar14 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar29,((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].method);
          unaff_RBP = (System_Collections_Generic_List_object__c **)(ulong)uVar14;
          pIStack_e0 = (Il2CppClass *)0x44c6f13;
          pMVar30 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgCreditContributor);
          pIStack_e0 = (Il2CppClass *)0x44c6f2a;
          System_Collections_Generic_List_object____ctor_362b930
                    ((System_Collections_Generic_List_object__o *)pMVar30,uVar14,MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditContributo);
          pMVar42 = ((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].method;
          pIStack_e0 = (Il2CppClass *)0x44c6f3d;
          node_00 = pMVar29;
          iVar15 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].methodPtr)();
          ppMVar46 = (MethodInfo **)pMVar29;
          if (iVar15 < 1) {
            if (pMVar30 != (MethodInfo *)0x0) goto label_044c7009;
          }
          else {
            if (pMVar30 != (MethodInfo *)0x0) {
              unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
              unaff_R13 = &MethodInfo_Void_Add;
              do {
                pIStack_e0 = (Il2CppClass *)0x44c6fa6;
                auVar47 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[5].methodPtr)
                                    (pMVar29,unaff_RBP,
                                     ((Il2CppClass *)pMVar29->methodPointer)->vtable[5].method);
                node_00 = auVar47._0_8_;
                pIStack_e0 = (Il2CppClass *)0x44c6fb1;
                bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                                   ((SimpleJSONFixed_JSONNode_o *)node_00,
                                    (ApplicationManagers_Credits_AottgCreditContributor_o **)&pMStack_d8,
                                    auVar47._8_8_);
                in_RCX = (Il2CppClass *)MethodInfo_Void_Add;
                if ((char)bVar13 == '\0') {
                  return 0;
                }
                piVar1 = (int *)((long)&pMVar30->name + 4);
                *piVar1 = *piVar1 + 1;
                pIVar7 = pMVar30->invoker_method;
                pMVar42 = pMStack_d8;
                unaff_R12 = (MethodInfo *)&pMStack_d8;
                if (pIVar7 == (InvokerMethod)0x0) goto label_044c7053;
                uVar14 = *(uint *)&pMVar30->name;
                if (uVar14 < *(uint *)(pIVar7 + 0x18)) {
                  *(uint *)&pMVar30->name = uVar14 + 1;
                  *(MethodInfo **)(pIVar7 + (long)(int)uVar14 * 8 + 0x20) = pMStack_d8;
                  pIStack_e0 = (Il2CppClass *)0x44c6fef;
                  il2cpp_runtime_helper_022b4080(pIVar7 + (long)(int)uVar14 * 8 + 0x20);
                }
                else {
                  pIStack_e0 = (Il2CppClass *)0x44c6f77;
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)pMVar30,(Il2CppObject *)pMStack_d8,
                             *(MethodInfo_362C220 **)
                              (*(long *)((long)(((System_Collections_Generic_List_object__c *)in_RCX)->_1).
                                               byval_arg.data + 0xc0) + 0x70));
                }
                uVar14 = (int)unaff_RBP + 1;
                unaff_RBP = (System_Collections_Generic_List_object__c **)(ulong)uVar14;
                pIStack_e0 = (Il2CppClass *)0x44c6f8d;
                iVar15 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].methodPtr)
                                   (pMVar29,((Il2CppClass *)pMVar29->methodPointer)->vtable[0xb].method);
              } while ((int)uVar14 < iVar15);
label_044c7009:
              pIStack_e0 = (Il2CppClass *)0x44c701b;
              pSVar31 = System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_object__o *)pMVar30,MethodInfo_AottgCreditContributor_ToArray);
              pMVar32->methodPointer = (Il2CppMethodPointer)pSVar31;
              pIStack_e0 = (Il2CppClass *)0x44c7029;
              il2cpp_runtime_helper_022b4080(pMVar32,pSVar31);
              return (bool_conflict)CONCAT71((int7)((ulong)pMVar30 >> 8),1);
            }
            pMVar30 = (MethodInfo *)0x0;
            pIStack_e0 = (Il2CppClass *)0x44c7044;
            auVar47 = (*((Il2CppClass *)pMVar29->methodPointer)->vtable[5].methodPtr)
                                (pMVar29,0,((Il2CppClass *)pMVar29->methodPointer)->vtable[5].method);
            node_00 = auVar47._0_8_;
            pIStack_e0 = (Il2CppClass *)0x44c704f;
            bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                               ((SimpleJSONFixed_JSONNode_o *)node_00,
                                (ApplicationManagers_Credits_AottgCreditContributor_o **)&pMStack_d8,
                                auVar47._8_8_);
            pMVar42 = pMVar41;
            if ((char)bVar13 == '\0') {
              return 0;
            }
          }
        }
      }
    }
  }
label_044c7053:
  pIStack_e0 = (Il2CppClass *)0x44c7058;
  il2cpp_runtime_helper_022b2c90();
  pMStack_100 = pMVar30;
  pMStack_f8 = unaff_R12;
  pMStack_f0 = pMVar32;
  pMStack_e8 = (MethodInfo *)ppMVar46;
  pIStack_e0 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeada == '\0') {
    pMStack_108 = (MethodInfo *)0x44c7083;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pMStack_108 = (MethodInfo *)0x44c708f;
    il2cpp_runtime_helper_023445d0(&"groups");
    g_data_057aeada = '\x01';
  }
  pMVar42->methodPointer = (Il2CppMethodPointer)0x0;
  now.fields._8_8_ = (Il2CppClass *)0x0;
  pMStack_108 = (MethodInfo *)0x44c70a7;
  pMVar41 = pMVar42;
  il2cpp_runtime_helper_022b4080();
  if (node_00 != (MethodInfo *)0x0) {
    unaff_RBP = &"groups";
    pMStack_108 = (MethodInfo *)0x44c70ce;
    cVar12 = (*((Il2CppClass *)node_00->methodPointer)->vtable[0x1c].methodPtr)
                       (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[0x1c].method);
    if (cVar12 == '\0') {
label_044c720a:
      ppMVar46 = (MethodInfo **)0x0;
label_044c720d:
      return (bool_conflict)ppMVar46;
    }
    pMStack_108 = (MethodInfo *)0x44c70ed;
    now.fields._8_8_ = (Il2CppClass *)"groups";
    pMVar41 = node_00;
    puVar27 = (undefined8 *)
              (*((Il2CppClass *)node_00->methodPointer)->vtable[7].methodPtr)
                        (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[7].method);
    if (puVar27 != (undefined8 *)0x0) {
      in_RCX = (Il2CppClass *)*puVar27;
      pMStack_108 = (MethodInfo *)0x44c7109;
      cVar12 = (*(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                 _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).methodPtr)
                         (puVar27,(((System_Collections_Generic_List_object__VTable *)in_RCX->vtable)->
                                  _16_System_Collections_Generic_IEnumerable_T__GetEnumerator).method);
      if (cVar12 == '\0') goto label_044c720a;
      pMStack_108 = (MethodInfo *)0x44c7128;
      now.fields._8_8_ = (Il2CppClass *)"groups";
      pMVar41 = node_00;
      pMVar32 = (MethodInfo *)
                (*((Il2CppClass *)node_00->methodPointer)->vtable[7].methodPtr)
                          (node_00,"groups",((Il2CppClass *)node_00->methodPointer)->vtable[7].method);
      if (pMVar32 != (MethodInfo *)0x0) {
        in_RCX = (Il2CppClass *)pMVar32->methodPointer;
        now.fields._8_8_ =
             (Il2CppClass *)
             (((System_Collections_Generic_List_object__c *)(in_RCX->vtable + 0x23))->_1).
             implementedInterfaces;
        pMStack_108 = (MethodInfo *)0x44c7144;
        pMVar30 = (MethodInfo *)
                  (*(code *)(((System_Collections_Generic_List_object__c *)(in_RCX->vtable + 0x23))->_1).
                            nestedTypes)();
        pMVar41 = pMVar32;
        if (pMVar30 != (MethodInfo *)0x0) {
          pMStack_108 = (MethodInfo *)0x44c7163;
          uVar16 = (*((Il2CppClass *)pMVar30->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar30,((Il2CppClass *)pMVar30->methodPointer)->vtable[0xb].method);
          in_RCX = (Il2CppClass *)&TypeInfo_AottgCreditGroup;
          pMStack_108 = (MethodInfo *)0x44c7174;
          now.fields._8_8_ = (Il2CppClass *)il2cpp_runtime_helper_022b2a40(TypeInfo_AottgCreditGroup,uVar16);
          pMVar42->methodPointer = (Il2CppMethodPointer)now.fields._8_8_;
          pMStack_108 = (MethodInfo *)0x44c7182;
          il2cpp_runtime_helper_022b4080(pMVar42,now.fields._8_8_);
          pMStack_108 = (MethodInfo *)0x44c7196;
          iVar15 = (*((Il2CppClass *)pMVar30->methodPointer)->vtable[0xb].methodPtr)
                             (pMVar30,((Il2CppClass *)pMVar30->methodPointer)->vtable[0xb].method);
          ppMVar46 = (MethodInfo **)CONCAT71((int7)((ulong)ppMVar46 >> 8),1);
          if (0 < iVar15) {
            node_00 = (MethodInfo *)&g_data_00000020;
            unaff_RBP = (System_Collections_Generic_List_object__c **)0x0;
            do {
              pMStack_108 = (MethodInfo *)0x44c71c6;
              pMVar41 = pMVar30;
              auVar47 = (*((Il2CppClass *)pMVar30->methodPointer)->vtable[5].methodPtr)
                                  (pMVar30,(ulong)unaff_RBP & 0xffffffff,
                                   ((Il2CppClass *)pMVar30->methodPointer)->vtable[5].method);
              now.fields._8_8_ = (Il2CppClass *)pMVar42->methodPointer;
              unaff_R12 = pMVar30;
              if (now.fields._8_8_ == (Il2CppClass *)0x0) goto label_044c7219;
              in_RCX = (Il2CppClass *)(ulong)*(uint *)&((now.fields._8_8_)->_1).namespaze;
              if (in_RCX <= unaff_RBP) goto label_044c721e;
              pMStack_108 = (MethodInfo *)0x44c71e1;
              bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
                                 (auVar47._0_8_,
                                  (ApplicationManagers_Credits_AottgCreditGroup_o **)
                                  ((long)&((now.fields._8_8_)->_1).image + (long)node_00),auVar47._8_8_);
              if ((char)bVar13 == '\0') goto label_044c720a;
              unaff_RBP = (System_Collections_Generic_List_object__c **)
                          ((long)&(((Il2CppClass *)unaff_RBP)->_1).image + 1);
              pMStack_108 = (MethodInfo *)0x44c71fd;
              iVar15 = (*((Il2CppClass *)pMVar30->methodPointer)->vtable[0xb].methodPtr)
                                 (pMVar30,((Il2CppClass *)pMVar30->methodPointer)->vtable[0xb].method);
              node_00 = (MethodInfo *)&node_00->virtualMethodPointer;
            } while ((long)unaff_RBP < (long)iVar15);
          }
          goto label_044c720d;
        }
      }
    }
  }
label_044c7219:
  pMStack_108 = (MethodInfo *)0x44c721e;
  il2cpp_runtime_helper_022b2c90();
label_044c721e:
  pMStack_108 = (MethodInfo *)0x44c7223;
  il2cpp_runtime_helper_022b2ca0();
  pMStack_128 = node_00;
  pMStack_120 = unaff_R12;
  ppSStack_118 = unaff_R13;
  pMStack_110 = pMVar42;
  pMStack_108 = (MethodInfo *)ppMVar46;
  if (g_data_057aeadb == '\0') {
    pMStack_150 = (MethodInfo *)0x44c7258;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditGroup);
    pMStack_150 = (MethodInfo *)0x44c7264;
    il2cpp_runtime_helper_023445d0(&"title");
    g_data_057aeadb = '\x01';
  }
  pSStack_130 = (System_String_o *)0x0;
  pSStack_138 = (System_String_o *)0x0;
  pAStack_140 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  ((now.fields._8_8_)->_1).image = (Il2CppClass *)0x0;
  pMStack_150 = (MethodInfo *)0x44c7297;
  il2cpp_runtime_helper_022b4080(now.fields._8_8_);
  if (g_data_057aeae0 == '\0') {
    pMStack_150 = (MethodInfo *)0x44c72ac;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pMStack_150 = (MethodInfo *)0x44c72cb;
    il2cpp_runtime_helper_02337ed0();
  }
  puVar27 = (undefined8 *)0x0;
  pMStack_150 = (MethodInfo *)0x44c72d9;
  pMVar32 = pMVar41;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar41,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (pMVar41 != (MethodInfo *)0x0) {
    pMStack_150 = (MethodInfo *)0x44c72fd;
    cVar12 = (**(code **)(pMVar41->methodPointer + 0x248))
                       (pMVar41,*(undefined8 *)(pMVar41->methodPointer + 0x250));
    if (cVar12 != '\0') {
      pMStack_150 = (MethodInfo *)0x44c731c;
      bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                         ((SimpleJSONFixed_JSONNode_o *)pMVar41,"title",&pSStack_130,(MethodInfo *)in_RCX
                         );
      if ((char)bVar13 != '\0') {
        pMStack_150 = (MethodInfo *)0x44c732d;
        bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                           ((SimpleJSONFixed_JSONNode_o *)pMVar41,&pSStack_138,method_04);
        if ((char)bVar13 != '\0') {
          pMStack_150 = (MethodInfo *)0x44c733e;
          bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                             ((SimpleJSONFixed_JSONNode_o *)pMVar41,&pAStack_140,method_05);
          pSVar11 = pSStack_130;
          pSVar35 = pSStack_138;
          pAVar10 = pAStack_140;
          if ((char)bVar13 != '\0') {
            pMStack_150 = (MethodInfo *)0x44c7360;
            pIVar33 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditGroup);
            pMStack_150 = (MethodInfo *)0x44c7374;
            ApplicationManagers_Credits_AottgCreditGroup___ctor
                      ((ApplicationManagers_Credits_AottgCreditGroup_o *)pIVar33,pSVar11,pSVar35,pAVar10,in_R8
                      );
            ((now.fields._8_8_)->_1).image = pIVar33;
            pMStack_150 = (MethodInfo *)0x44c7382;
            il2cpp_runtime_helper_022b4080(now.fields._8_8_,pIVar33);
            return (bool_conflict)CONCAT71((int7)((ulong)pIVar33 >> 8),1);
          }
        }
      }
    }
    return 0;
  }
  pMStack_150 = (MethodInfo *)0x44c739d;
  il2cpp_runtime_helper_022b2c90();
  uStack_168 = 0;
  pMStack_160 = unaff_R12;
  pIStack_158 = now.fields._8_8_;
  pMStack_150 = pMVar41;
  if (g_data_057aeadd == '\0') {
    ppMStack_198 = (MethodInfo **)0x44c73c6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditContributor);
    ppMStack_198 = (MethodInfo **)0x44c73d2;
    il2cpp_runtime_helper_023445d0(&"accountId");
    ppMStack_198 = (MethodInfo **)0x44c73de;
    il2cpp_runtime_helper_023445d0(&"name");
    g_data_057aeadd = '\x01';
  }
  pIStack_188 = (Il2CppClass *)0x0;
  SStack_180._a = 0;
  SStack_180._b = 0;
  SStack_180._c = 0;
  SStack_180._d = '\0';
  SStack_180._e = '\0';
  SStack_180._f = '\0';
  SStack_180._g = '\0';
  SStack_180._h = '\0';
  SStack_180._i = '\0';
  SStack_180._j = '\0';
  SStack_180._k = '\0';
  *puVar27 = 0;
  ppMStack_198 = (MethodInfo **)0x44c7407;
  il2cpp_runtime_helper_022b4080(puVar27);
  if (g_data_057aeae0 == '\0') {
    ppMStack_198 = (MethodInfo **)0x44c741c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeae0 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    ppMStack_198 = (MethodInfo **)0x44c743b;
    il2cpp_runtime_helper_02337ed0();
  }
  ppMVar46 = (MethodInfo **)0x0;
  ppMStack_198 = (MethodInfo **)0x44c7449;
  pMVar41 = pMVar32;
  bVar13 = SimpleJSONFixed_JSONNode__op_Inequality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar32,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 == '\0') {
    return 0;
  }
  if (pMVar32 != (MethodInfo *)0x0) {
    ppMStack_198 = (MethodInfo **)0x44c746d;
    cVar12 = (**(code **)(pMVar32->methodPointer + 0x248))
                       (pMVar32,*(undefined8 *)(pMVar32->methodPointer + 0x250));
    if (cVar12 == '\0') {
      return 0;
    }
    ppMStack_198 = (MethodInfo **)0x44c748c;
    bVar13 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                       ((SimpleJSONFixed_JSONNode_o *)pMVar32,"name",(System_String_o **)&pIStack_188,
                        (MethodInfo *)in_RCX);
    if ((char)bVar13 == '\0') {
      return 0;
    }
    ppMVar46 = &"accountId";
    ppMStack_198 = (MethodInfo **)0x44c74b1;
    cVar12 = (**(code **)(pMVar32->methodPointer + 0x2f8))
                       (pMVar32,"accountId",*(undefined8 *)(pMVar32->methodPointer + 0x300));
    if (cVar12 == '\0') {
      return 0;
    }
    ppMStack_198 = (MethodInfo **)0x44c74cf;
    pMVar41 = pMVar32;
    plVar25 = (long *)(**(code **)(pMVar32->methodPointer + 0x1a8))
                                (pMVar32,"accountId",*(undefined8 *)(pMVar32->methodPointer + 0x1b0));
    if (plVar25 != (long *)0x0) {
      ppMStack_198 = (MethodInfo **)0x44c74eb;
      cVar12 = (**(code **)(*plVar25 + 0x228))(plVar25);
      if (cVar12 != '\0') {
        pSVar35 = (System_String_o *)0x0;
label_044c74f2:
        now.fields._8_8_ = pIStack_188;
        ppMStack_198 = (MethodInfo **)0x44c7506;
        pIVar34 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditContributor);
        ppMStack_198 = (MethodInfo **)0x44c7513;
        System_Object___ctor(pIVar34,(MethodInfo *)0x0);
        pIVar34[1].klass = now.fields._8_8_;
        ppMStack_198 = (MethodInfo **)0x44c7523;
        il2cpp_runtime_helper_022b4080(pIVar34 + 1,now.fields._8_8_);
        pIVar34[1].monitor = pSVar35;
        ppMStack_198 = (MethodInfo **)0x44c7533;
        il2cpp_runtime_helper_022b4080(&pIVar34[1].monitor,pSVar35);
        *puVar27 = pIVar34;
        ppMStack_198 = (MethodInfo **)0x44c7541;
        il2cpp_runtime_helper_022b4080(puVar27,pIVar34);
        return (bool_conflict)CONCAT71((int7)((ulong)pIVar34 >> 8),1);
      }
      ppMStack_198 = (MethodInfo **)0x44c755e;
      pMVar41 = pMVar32;
      plVar25 = (long *)(**(code **)(pMVar32->methodPointer + 0x1a8))
                                  (pMVar32,"accountId",*(undefined8 *)(pMVar32->methodPointer + 0x1b0));
      if (plVar25 != (long *)0x0) {
        ppMStack_198 = (MethodInfo **)0x44c7576;
        cVar12 = (**(code **)(*plVar25 + 0x208))(plVar25,*(undefined8 *)(*plVar25 + 0x210));
        if (cVar12 == '\0') {
          return 0;
        }
        ppMStack_198 = (MethodInfo **)0x44c7590;
        pMVar41 = "accountId";
        pSVar26 = (SimpleJSONFixed_JSONNode_o *)
                  (**(code **)(pMVar32->methodPointer + 0x1a8))
                            (pMVar32,"accountId",*(undefined8 *)(pMVar32->methodPointer + 0x1b0));
        ppMStack_198 = (MethodInfo **)0x44c7598;
        pSVar35 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar26,pMVar41);
        ppMStack_198 = (MethodInfo **)0x44c75a7;
        bVar13 = System_String__IsNullOrEmpty(pSVar35,(MethodInfo *)0x0);
        if ((char)bVar13 != '\0') {
          return 0;
        }
        ppMStack_198 = (MethodInfo **)0x44c75bc;
        bVar13 = System_Guid__TryParse(pSVar35,(System_Guid_o *)&SStack_180,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') {
          return 0;
        }
        goto label_044c74f2;
      }
    }
  }
  ppMStack_198 = (MethodInfo **)0x44c75db;
  il2cpp_runtime_helper_022b2c90();
  ppMStack_198 = ppMVar46;
  if (g_data_057aeadf == '\0') {
    pMStack_1a0 = (MethodInfo *)0x44c75f9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeadf = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pMStack_1a0 = (MethodInfo *)0x44c7618;
    il2cpp_runtime_helper_02337ed0();
  }
  pMStack_1a0 = (MethodInfo *)0x44c7624;
  bVar13 = SimpleJSONFixed_JSONNode__op_Equality
                     ((SimpleJSONFixed_JSONNode_o *)pMVar41,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar13 != '\0') {
    return 0;
  }
  if (pMVar41 != (MethodInfo *)0x0) {
    pMStack_1a0 = (MethodInfo *)0x44c7640;
    cVar12 = (**(code **)(pMVar41->methodPointer + 0x228))
                       (pMVar41,*(undefined8 *)(pMVar41->methodPointer + 0x230));
    if (cVar12 != '\0') {
      return 0;
    }
    pMStack_1a0 = (MethodInfo *)0x44c765b;
    pSVar35 = (System_String_o *)(**(code **)(pMVar41->methodPointer + 0x1c8))(pMVar41);
    if (pSVar35 != (System_String_o *)0x0) {
      pSVar35 = System_String__Trim(pSVar35,(MethodInfo *)0x0);
      return (bool_conflict)pSVar35;
    }
  }
  pMStack_1a0 = (MethodInfo *)ApplicationManagers_Credits_AottgCreditsService__Init;
  uStack_1c0 = il2cpp_runtime_helper_022b2c90();
  pMStack_1b8 = pMVar41;
  pMStack_1b0 = unaff_R12;
  puStack_1a8 = puVar27;
  pMStack_1a0 = pMVar32;
  if (g_data_057aeae2 == '\0') {
    pIStack_1c8 = (Il2CppClass *)0x44c768d;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
    pIStack_1c8 = (Il2CppClass *)0x44c7699;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsCache);
    pIStack_1c8 = (Il2CppClass *)0x44c76a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_FetchCredits);
    pIStack_1c8 = (Il2CppClass *)0x44c76b1;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pIStack_1c8 = (Il2CppClass *)0x44c76bd;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
    pIStack_1c8 = (Il2CppClass *)0x44c76c9;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
    pIStack_1c8 = (Il2CppClass *)0x44c76d5;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgQueryPolicy);
    pIStack_1c8 = (Il2CppClass *)0x44c76e1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
    g_data_057aeae2 = '\x01';
  }
  pIStack_1c8 = (Il2CppClass *)0x44c770b;
  pIVar34 = Utility_SingletonFactory__CreateSingleton_object_
                      ((Il2CppObject *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8),MethodInfo_AottgCreditsService_CreateSingleton_AottgCreditsService);
  **(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8) = pIVar34;
  pIStack_1c8 = (Il2CppClass *)0x44c772a;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgCreditsService + 0xb8),pIVar34);
  lVar17 = **(long **)(TypeInfo_AottgCreditsService + 0xb8);
  pIStack_1c8 = (Il2CppClass *)0x44c7746;
  fetch = (System_Action_TKey__Action_AottgQueryFetchResult_TValue____o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_UnitKey_Action_AottgQueryFetchResult_AottgCredits);
  pIStack_1c8 = (Il2CppClass *)0x44c7760;
  System_Action_AottgCreditsService_UnitKey__object____ctor();
  if (*(int *)(TypeInfo_AottgCreditsCache + 0xe4) == 0) {
    pIStack_1c8 = (Il2CppClass *)0x44c7778;
    il2cpp_runtime_helper_02337ed0();
  }
  SVar20._ticks = (*(System_TimeSpan_Fields **)(TypeInfo_AottgCreditsCache + 0xb8))->_ticks;
  pIStack_1c8 = (Il2CppClass *)0x44c7794;
  __this_01 = (ApplicationManagers_Api_AottgQueryPolicy_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryPolicy);
  pIStack_1c8 = (Il2CppClass *)0x44c77ac;
  ApplicationManagers_Api_AottgQueryPolicy___ctor
            (__this_01,(System_TimeSpan_o)SVar20._ticks,(System_Nullable_TimeSpan__o)ZEXT816(0),1,in_R9);
  pIStack_1c8 = (Il2CppClass *)0x44c77bb;
  __this_02 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgQueryCache_UnitKey_AottgCreditsResponse);
  pIStack_1c8 = (Il2CppClass *)0x44c77d8;
  pSVar43 = fetch;
  pAVar44 = __this_02;
  ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object____ctor
            (__this_02,fetch,(System_Func_DateTimeOffset__o *)0x0,__this_01,MethodInfo_AottgQueryCache_2_ApplicationManagers_Credits_AottgCredi);
  if (lVar17 != 0) {
    *(ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o **)(lVar17 + 0x20) = __this_02;
    bVar13 = il2cpp_runtime_helper_022b4080(lVar17 + 0x20,__this_02);
    return bVar13;
  }
  pIStack_1c8 = (Il2CppClass *)ApplicationManagers_Credits_AottgCreditsService__GetCredits;
  il2cpp_runtime_helper_022b2c90();
  pAStack_1e8 = (ApplicationManagers_Api_AottgQueryPolicy_o *)__this_02;
  pAStack_1e0 = __this_01;
  pSStack_1d8 = fetch;
  lStack_1d0 = lVar17;
  pIStack_1c8 = (Il2CppClass *)unaff_RBP;
  if (g_data_057aeae3 == '\0') {
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7823;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c782f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsService);
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c783b;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Get);
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7847;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7853;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCredits_b__0);
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c785f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass3_0);
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c786b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_UnitKey);
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7877;
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057aeae3 = '\x01';
  }
  pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c788d;
  pIVar33 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass3_0);
  pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c789a;
  now.fields._8_8_ = pIVar33;
  System_Object___ctor((Il2CppObject *)pIVar33,(MethodInfo *)0x0);
  if (pIVar33 == (Il2CppClass *)0x0) {
label_044c7a30:
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7a35;
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor((Il2CppObject *)now.fields._8_8_,(MethodInfo *)0x0);
    return extraout_EAX;
  }
  ppcVar38 = &(pIVar33->_1).name;
  (pIVar33->_1).name = (char *)pAVar44;
  pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78ba;
  il2cpp_runtime_helper_022b4080(ppcVar38);
  now.fields._8_8_ = (Il2CppClass *)**(undefined8 **)(TypeInfo_AottgCreditsService + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78e6;
    il2cpp_runtime_helper_02337ed0();
  }
  pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c78f2;
  bVar13 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)now.fields._8_8_,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pIVar33 = "not_initialized";
  if ((char)bVar13 != '\0') {
    pcVar8 = *ppcVar38;
    if (pcVar8 == (char *)0x0) {
      return bVar13;
    }
    if (g_data_057aead4 == '\0') {
      pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7925;
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgCreditsResult);
      g_data_057aead4 = '\x01';
    }
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c793b;
    pIVar34 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgCreditsResult);
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7948;
    System_Object___ctor(pIVar34,(MethodInfo *)0x0);
    *(undefined4 *)&pIVar34[1].klass = 3;
    pIVar34[1].monitor = (void *)0x0;
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7962;
    il2cpp_runtime_helper_022b4080(&pIVar34[1].monitor,0);
    pIVar34[2].klass = pIVar33;
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c7972;
    il2cpp_runtime_helper_022b4080(pIVar34 + 2,pIVar33);
    *(undefined2 *)&pIVar34[2].monitor = 0;
    *(undefined1 *)((long)&pIVar34[2].monitor + 2) = 0;
    bVar13 = (**(code **)(pcVar8 + 0x18))
                       (*(undefined8 *)(pcVar8 + 0x40),pIVar34,*(undefined8 *)(pcVar8 + 0x28));
    return bVar13;
  }
  if (**(long **)(TypeInfo_AottgCreditsService + 0xb8) == 0) goto label_044c7a30;
  pIVar33 = *(Il2CppClass **)(**(long **)(TypeInfo_AottgCreditsService + 0xb8) + 0x20);
  if (*(int *)(TypeInfo_UnitKey + 0xe4) == 0) {
    pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79c7;
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = **(byte **)(TypeInfo_UnitKey + 0xb8);
  pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79e3;
  onResult = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgQueryResult_AottgCreditsResponse);
  pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)0x44c79fd;
  now.fields._8_8_ = onResult;
  System_Action_object____ctor();
  pAStack_1f0 = (ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pAStack_1e8;
  SVar20._ticks = (int64_t)MethodInfo_Void_Get;
  if (pIVar33 == (Il2CppClass *)0x0) goto label_044c7a30;
  t2._ticks = (int64_t)bVar4;
  pIVar36 = (Il2CppClass *)((ulong)pSVar43 & 0xff);
  pAStack_1e8 = pAStack_1e0;
  pIStack_1f8 = (Il2CppClass *)0x0;
  lVar17 = *(long *)(*(long *)((long)(MethodInfo_Void_Get->_1).byval_arg.data + 0xc0) + 0x70);
  now.fields._8_8_ = pIVar36;
  pIVar45 = MethodInfo_Void_Get;
  pAStack_1e0 = (ApplicationManagers_Api_AottgQueryPolicy_o *)unaff_R13;
  if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
    pIStack_200 = (Il2CppClass *)0x341a1ae;
    lVar17 = il2cpp_runtime_helper_023009c0();
  }
  pIStack_200 = (Il2CppClass *)0x341a1b6;
  __this = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar17);
  pIVar19 = *(Il2CppClass **)
             (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x78);
  pIStack_200 = (Il2CppClass *)0x341a1d0;
  __this_03 = __this;
  ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_AottgCreditsService_UnitKey__object____ctor
            ((ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__o *)__this,
             (MethodInfo_27BBA90 *)pIVar19);
  if (__this != (Il2CppClass *)0x0) {
    (__this->_1).name = (char *)pIVar33;
    pIStack_200 = (Il2CppClass *)0x341a1ec;
    pIVar19 = pIVar33;
    pIVar18 = (Il2CppClass *)il2cpp_runtime_helper_022b4080(&(__this->_1).name);
    *(byte *)&(__this->_1).namespaze = bVar4;
    if (onResult == (Il2CppClass *)0x0) goto label_0341a444;
    __this_03 = *(Il2CppClass **)&(pIVar33->_1).byval_arg.bits;
    if (__this_03 != (Il2CppClass *)0x0) {
      now.fields._8_8_ =
           *(Il2CppClass **)
            (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x48);
      pIStack_200 = (Il2CppClass *)0x341a221;
      pIVar19 = (Il2CppClass *)t2._ticks;
      bVar13 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                         (__this_03,t2._ticks,&pIStack_1f8);
      if ((char)bVar13 == '\0') {
        lVar17 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x58)
        ;
        if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
          pIStack_200 = (Il2CppClass *)0x341a242;
          lVar17 = il2cpp_runtime_helper_023009c0();
        }
        pIStack_200 = (Il2CppClass *)0x341a24a;
        t2._ticks = il2cpp_runtime_helper_023052d0(lVar17);
        pIVar19 = *(Il2CppClass **)
                   (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x88);
        pIStack_200 = (Il2CppClass *)0x341a267;
        ApplicationManagers_Api_AottgQueryCache_Entry_AottgCreditsService_UnitKey__object____ctor
                  ((ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)t2._ticks,
                   (MethodInfo_31EFB10 *)pIVar19);
        __this_03 = *(Il2CppClass **)&(pIVar33->_1).byval_arg.bits;
        pIStack_1f8 = (Il2CppClass *)t2._ticks;
        if (__this_03 == (Il2CppClass *)0x0) goto label_0341a453;
        pIVar19 = (Il2CppClass *)(ulong)*(uint *)&(__this->_1).namespaze;
        pIStack_200 = (Il2CppClass *)0x341a295;
        System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___set_Item
                  (__this_03,pIVar19,t2._ticks,
                   *(undefined8 *)
                    (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x90));
      }
      now.fields._8_8_ = (Il2CppClass *)(pIVar33->_1).namespaze;
      if (now.fields._8_8_ != (Il2CppClass *)0x0) {
        pIVar19 = *(Il2CppClass **)&((now.fields._8_8_)->_1).byval_arg.bits;
        __this_03 = ((now.fields._8_8_)->_1).element_class;
        pIStack_200 = (Il2CppClass *)0x341a2ad;
        auVar47 = (*(code *)((now.fields._8_8_)->_1).namespaze)();
        if ((char)pSVar43 == '\0') {
          now.fields._8_8_ = (Il2CppClass *)(auVar47._8_8_ & 0xffffffff);
          in_R9 = *(MethodInfo **)
                   (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0x98);
          pIStack_200 = (Il2CppClass *)0x341a2d8;
          now.fields._dateTime.fields._dateData = (System_DateTime_Fields)(uint64_t)auVar47._0_8_;
          pIVar19 = pIStack_1f8;
          __this_03 = pIVar33;
          pIVar45 = onResult;
          uVar14 = ApplicationManagers_Api_AottgQueryCache_AottgCreditsService_UnitKey__object___TryEmitFresh
                             ((ApplicationManagers_Api_AottgQueryCache_TKey__TValue__o *)pIVar33,
                              (ApplicationManagers_Api_AottgQueryCache_Entry_TKey__TValue__o *)pIStack_1f8,now
                              ,(System_Action_AottgQueryResult_TValue___o *)onResult,
                              (MethodInfo_331A460 *)in_R9);
          pIVar18 = (Il2CppClass *)(ulong)uVar14;
          if ((char)uVar14 != '\0') goto label_0341a444;
        }
        if (pIStack_1f8 != (Il2CppClass *)0x0) {
          if ((char)(pIStack_1f8->_1).this_arg.bits == '\0') {
            pIStack_200 = (Il2CppClass *)0x341a327;
            pIVar19 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___LoadingNoCache
                                (*(MethodInfo_331B2F0 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0)
                                  + 200));
          }
          else {
            pIStack_200 = (Il2CppClass *)0x341a30e;
            pIVar19 = (Il2CppClass *)
                      ApplicationManagers_Api_AottgQueryResult_object___ReadyStaleRefreshing
                                ((Il2CppObject *)(pIStack_1f8->_1).namespaze,
                                 *(MethodInfo_331B450 **)
                                  (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xa8));
          }
          __this_03 = (onResult->_1).element_class;
          pIStack_200 = (Il2CppClass *)0x341a339;
          (*(code *)(onResult->_1).namespaze)(__this_03,pIVar19,*(undefined8 *)&(onResult->_1).byval_arg.bits)
          ;
          if ((pIStack_1f8 != (Il2CppClass *)0x0) &&
             (__this_03 = (Il2CppClass *)(pIStack_1f8->_1).name, __this_03 != (Il2CppClass *)0x0)) {
            now.fields._8_8_ =
                 *(Il2CppClass **)
                  (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0xd8);
            piVar1 = (int *)((long)&(__this_03->_1).namespaze + 4);
            *piVar1 = *piVar1 + 1;
            pcVar8 = (__this_03->_1).name;
            if (pcVar8 != (char *)0x0) {
              uVar14 = *(uint *)&(__this_03->_1).namespaze;
              pIVar19 = onResult;
              if (uVar14 < *(uint *)(pcVar8 + 0x18)) {
                now.fields._8_8_ = (Il2CppClass *)(ulong)(uVar14 + 1);
                *(uint *)&(__this_03->_1).namespaze = uVar14 + 1;
                __this_03 = (Il2CppClass *)(pcVar8 + (long)(int)uVar14 * 8 + 0x20);
                *(Il2CppClass **)(pcVar8 + (long)(int)uVar14 * 8 + 0x20) = onResult;
                pIStack_200 = (Il2CppClass *)0x341a39a;
                il2cpp_runtime_helper_022b4080();
                pIVar18 = pIStack_1f8;
              }
              else {
                pIStack_200 = (Il2CppClass *)0x341a3bf;
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this_03,(Il2CppObject *)onResult,
                           *(MethodInfo_362C220 **)
                            (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x70));
                pIVar18 = pIStack_1f8;
              }
              pIStack_1f8 = pIVar18;
              if (pIVar18 != (Il2CppClass *)0x0) {
                if (*(char *)((long)&(pIVar18->_1).this_arg.bits + 2) != '\0') {
label_0341a444:
                  return (bool_conflict)pIVar18;
                }
                *(undefined1 *)((long)&(pIVar18->_1).this_arg.bits + 2) = 1;
                pcVar8 = (pIVar33->_1).name;
                uVar3 = *(undefined1 *)&(__this->_1).namespaze;
                onResult = (Il2CppClass *)CONCAT71((int7)((ulong)onResult >> 8),uVar3);
                lVar17 = *(long *)(*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0)
                                  + 0xe8);
                if ((*(byte *)(lVar17 + 0x135) & 1) == 0) {
                  pIStack_200 = (Il2CppClass *)0x341a3fe;
                  lVar17 = il2cpp_runtime_helper_023009c0();
                }
                pIStack_200 = (Il2CppClass *)0x341a406;
                pIVar33 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(lVar17);
                now.fields._8_8_ =
                     *(Il2CppClass **)
                      (*(long *)((long)(((Il2CppClass *)SVar20._ticks)->_1).byval_arg.data + 0xc0) + 0xf0);
                pIStack_200 = (Il2CppClass *)0x341a42d;
                pIVar19 = __this;
                __this_03 = pIVar33;
                System_Action_object____ctor();
                t2._ticks = 0;
                if (pcVar8 != (char *)0x0) {
                  pIStack_200 = (Il2CppClass *)0x341a444;
                  pIVar18 = (Il2CppClass *)
                            (**(code **)(pcVar8 + 0x18))
                                      (*(undefined8 *)(pcVar8 + 0x40),uVar3,pIVar33,
                                       *(undefined8 *)(pcVar8 + 0x28));
                  goto label_0341a444;
                }
              }
            }
          }
        }
      }
    }
  }
label_0341a453:
  pIStack_200 = (Il2CppClass *)0x341a458;
  il2cpp_runtime_helper_022b2c90();
  pIStack_210 = (Il2CppClass *)SVar20._ticks;
  pIVar18 = (Il2CppClass *)((ulong)now.fields._8_8_ & 0xffffffff);
  SVar40._ticks = (int64_t)pIVar19;
  plVar25 = (long *)__this_03;
  pMStack_238 = in_R9;
  pIStack_230 = pIVar45;
  pIStack_228 = __this;
  pIStack_220 = onResult;
  pIStack_218 = pIVar36;
  pIStack_208 = pIVar33;
  pIStack_200 = (Il2CppClass *)t2._ticks;
  if (g_data_057a8cf0 == '\0') {
    pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a499;
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4a5;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_HasValue);
    pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4b1;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TimeSpan_get_Value);
    plVar25 = &TypeInfo_TimeSpan;
    pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a4bd;
    il2cpp_runtime_helper_023445d0();
    g_data_057a8cf0 = '\x01';
  }
  cStack_250 = '\0';
  uStack_24f = 0;
  uStack_248 = 0;
  if (pIVar19 != (Il2CppClass *)0x0) {
    if (*(char *)&(pIVar19->_1).this_arg.bits == '\0') {
label_0341a589:
      if (*(char *)((long)&(pIVar19->_1).this_arg.bits + 1) == '\0') {
        return 0;
      }
      pvVar5 = (__this_03->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        cStack_250 = *(char *)((long)pvVar5 + 0x18);
        uStack_248 = *(undefined8 *)((long)pvVar5 + 0x20);
        if (cStack_250 == '\0') {
          return 0;
        }
        ppIVar2 = (Il2CppType **)&(pIVar19->_1).byval_arg.bits;
        t2._ticks = (int64_t)*ppIVar2;
        Var9 = *(unkuint10 *)ppIVar2;
        SVar20._ticks = (int64_t)*(ushort *)&(pIVar19->_1).this_arg.data;
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a5d9;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a5ed;
        right_00.fields._10_6_ = 0;
        right_00.fields._0_10_ = Var9;
        left_00.fields._8_8_ = pIVar18;
        left_00.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
        now.fields._8_8_ = (Il2CppClass *)SVar20._ticks;
        plVar25 = (long *)extraout_RDX.fields._dateData;
        t1 = System_DateTimeOffset__op_Subtraction(left_00,right_00,(MethodInfo *)0x0);
        pvVar5 = (__this_03->_1).byval_arg.data;
        SVar40._ticks = (int64_t)pIVar18;
        if (pvVar5 != (void *)0x0) {
          cStack_250 = *(char *)((long)pvVar5 + 0x18);
          uStack_248 = *(undefined8 *)((long)pvVar5 + 0x20);
          pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a61f;
          __this_04.fields.value.fields._ticks =
               (System_TimeSpan_Fields)(System_TimeSpan_Fields)MethodInfo_TimeSpan_get_Value._ticks;
          __this_04.fields._0_8_ = &cStack_250;
          SVar20._ticks = (int64_t)System_Nullable_TimeSpan___get_Value(__this_04,method_00);
          if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
            pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a63a;
            il2cpp_runtime_helper_02337ed0();
          }
          SVar39._ticks = 0;
          t2._ticks = 0;
          pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a649;
          bVar13 = System_TimeSpan__op_LessThan(t1,(System_TimeSpan_o)SVar20._ticks,(MethodInfo *)0x0);
          if ((char)bVar13 == '\0') {
            return 0;
          }
          plVar25 = (pIVar19->_1).byval_arg.data;
          SVar40._ticks = 1;
          pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a672;
          pAVar21 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                              ((System_String_o *)plVar25,1,
                               (MethodInfo_331B520 *)pMStack_238->klass->rgctx_data[0x21].method);
          now.fields._8_8_ = (Il2CppClass *)0x0;
          if (pIStack_230 != (Il2CppClass *)0x0) {
label_0341a67c:
            pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                          0x341a68a;
            (*(code *)(pIStack_230->_1).namespaze)
                      ((pIStack_230->_1).element_class,pAVar21,
                       *(undefined8 *)&(pIStack_230->_1).byval_arg.bits);
            return (bool_conflict)CONCAT71((int7)((ulong)SVar39._ticks >> 8),1);
          }
        }
      }
    }
    else {
      ppIVar2 = (Il2CppType **)&(pIVar19->_1).byval_arg.bits;
      t2._ticks = (int64_t)*ppIVar2;
      Var9 = *(unkuint10 *)ppIVar2;
      now.fields._8_8_ = (Il2CppClass *)(ulong)*(ushort *)&(pIVar19->_1).this_arg.data;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a4ff;
        il2cpp_runtime_helper_02337ed0();
      }
      pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a513;
      right.fields._10_6_ = 0;
      right.fields._0_10_ = Var9;
      left.fields._8_8_ = pIVar18;
      left.fields._dateTime.fields._dateData = extraout_RDX.fields._dateData;
      SVar40._ticks = (int64_t)pIVar18;
      plVar25 = (long *)extraout_RDX.fields._dateData;
      SVar20._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(left,right,(MethodInfo *)0x0);
      pvVar5 = (__this_03->_1).byval_arg.data;
      if (pvVar5 != (void *)0x0) {
        t2._ticks = ((System_TimeSpan_Fields *)((long)pvVar5 + 0x10))->_ticks;
        if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
          pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                        0x341a540;
          il2cpp_runtime_helper_02337ed0();
        }
        pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a54d;
        SVar40._ticks = t2._ticks;
        plVar25 = (long *)SVar20._ticks;
        bVar13 = System_TimeSpan__op_LessThan
                           ((System_TimeSpan_o)SVar20._ticks,(System_TimeSpan_o)t2._ticks,(MethodInfo *)0x0);
        if ((char)bVar13 == '\0') goto label_0341a589;
        plVar25 = (long *)(pIVar19->_1).namespaze;
        SVar40._ticks = 1;
        pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)
                      0x341a576;
        pAVar21 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                            ((Il2CppObject *)plVar25,1,
                             (MethodInfo_331B380 *)pMStack_238->klass->rgctx_data[0x20].method);
        SVar39._ticks = t2._ticks;
        if (pIStack_230 != (Il2CppClass *)0x0) goto label_0341a67c;
        now.fields._8_8_ = (Il2CppClass *)0x0;
      }
    }
  }
  pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)0x341a6a7;
  il2cpp_runtime_helper_022b2c90();
  pIStack_270 = pIVar19;
  pIStack_268 = (Il2CppClass *)SVar20._ticks;
  SStack_260 = extraout_RDX.fields._dateData;
  pAStack_258 = (ApplicationManagers_Api_AottgQueryCache___c__DisplayClass9_0_TKey__TValue__c *)t2._ticks;
  if (g_data_057a8cf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    g_data_057a8cf1 = '\x01';
  }
  pSStack_280 = (System_Object_array *)0x0;
  pSVar31 = *(System_Object_array **)&(((Il2CppClass *)plVar25)->_1).byval_arg.bits;
  if (pSVar31 != (System_Object_array *)0x0) {
    uVar14 = System_Collections_Generic_Dictionary_AottgCreditsService_UnitKey__object___TryGetValue
                       (pSVar31,SVar40._ticks & 0xff,&pSStack_280);
    if ((char)uVar14 == '\0') {
      return uVar14;
    }
    if ((pSStack_280 != (System_Object_array *)0x0) &&
       (((*(undefined1 *)((long)pSStack_280->m_Items + 0x1a) = 0, pAVar22 = extraout_RDX_00,
         extraout_RDX_00 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0 ||
         (pSVar31 = "unknown_error",
         pAVar22 = ApplicationManagers_Api_AottgQueryFetchResult_object___Fail
                             ((System_String_o *)"unknown_error",
                              *(MethodInfo_331AB10 **)
                               (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x118)),
         pAVar22 != (ApplicationManagers_Api_AottgQueryFetchResult_TValue__o *)0x0)) &&
        (pSVar31 = pSStack_280, pSStack_280 != (System_Object_array *)0x0)))) {
      if ((char)(pAVar22->fields)._Success_k__BackingField == '\0') {
        if (*(char *)(pSStack_280->m_Items + 3) == '\0') {
label_0341a96a:
          *(undefined2 *)(pSStack_280->m_Items + 3) = 0x100;
          pSStack_280->max_length = 0;
          pSStack_280->m_Items[0] = (Il2CppObject *)(pAVar22->fields)._Error_k__BackingField;
          pSVar31 = (System_Object_array *)pSStack_280->m_Items;
          il2cpp_runtime_helper_022b4080();
          pSVar23 = pSStack_280;
          pcVar8 = (((Il2CppClass *)plVar25)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar31 = *(System_Object_array **)(pcVar8 + 0x40);
            Var48 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar23 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar23->m_Items + 1) = Var48;
              *(undefined4 *)((long)pSVar23->m_Items + 0x12) = uStack_276;
              *(undefined2 *)((long)pSVar23->m_Items + 0x16) = uStack_272;
              pSVar31 = (System_Object_array *)(pAVar22->fields)._Error_k__BackingField;
              pAVar21 = ApplicationManagers_Api_AottgQueryResult_object___FailedNoCache
                                  ((System_String_o *)pSVar31,0,
                                   *(MethodInfo_331B520 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x108))
              ;
joined_r0x0341a95f:
              if (((pSStack_280 != (System_Object_array *)0x0) &&
                  (pSVar31 = ((System_Collections_Generic_List_object__Fields *)&pSStack_280->bounds)->_items,
                  pSVar31 != (System_Object_array *)0x0)) &&
                 ((pSVar23 = System_Collections_Generic_List_object___ToArray
                                       ((System_Collections_Generic_List_object__o *)pSVar31,
                                        *(MethodInfo_362E340 **)
                                         (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) +
                                         0x148)), pSStack_280 != (System_Object_array *)0x0 &&
                  (pSVar6 = ((System_Collections_Generic_List_object__Fields *)&pSStack_280->bounds)->_items,
                  pSVar6 != (System_Object_array *)0x0)))) {
                piVar1 = (int *)((long)&pSVar6->max_length + 4);
                *piVar1 = *piVar1 + 1;
                length = (int32_t)pSVar6->max_length;
                *(undefined4 *)&pSVar6->max_length = 0;
                if (0 < length) {
                  pSVar31 = (System_Object_array *)pSVar6->bounds;
                  System_Array__Clear((System_Array_o *)pSVar31,0,length,(MethodInfo *)0x0);
                }
                if (pSVar23 != (System_Object_array *)0x0) {
                  uVar14 = (uint)pSVar23->max_length;
                  if ((int)uVar14 < 1) {
                    return uVar14;
                  }
                  uVar37 = 0;
                  if ((pSVar23->max_length & 0xffffffff) != 0) {
                    do {
                      pIVar34 = pSVar23->m_Items[uVar37];
                      if (pIVar34 != (Il2CppObject *)0x0) {
                        if (pIVar34 == (Il2CppObject *)0x0) goto label_0341a9ed;
                        pSVar31 = (System_Object_array *)pIVar34[4].klass;
                        (*pIVar34[1].monitor)(pSVar31,pAVar21,pIVar34[2].monitor);
                      }
                      uVar37 = uVar37 + 1;
                      uVar14 = (uint)pSVar23->max_length;
                      if ((long)(int)uVar14 <= (long)uVar37) {
                        return uVar14;
                      }
                    } while (uVar37 < uVar14);
                  }
                  goto label_0341a9f2;
                }
              }
            }
          }
        }
        else {
          pvVar5 = (((Il2CppClass *)plVar25)->_1).byval_arg.data;
          if (pvVar5 != (void *)0x0) {
            if (*(char *)((long)pvVar5 + 0x28) == '\0') goto label_0341a96a;
            pSStack_280->m_Items[0] = (Il2CppObject *)(pAVar22->fields)._Error_k__BackingField;
            pSVar31 = (System_Object_array *)pSStack_280->m_Items;
            il2cpp_runtime_helper_022b4080();
            if (pSStack_280 != (System_Object_array *)0x0) {
              pSVar31 = (System_Object_array *)pSStack_280->max_length;
              pAVar21 = ApplicationManagers_Api_AottgQueryResult_object___FailedRefreshStale
                                  ((Il2CppObject *)pSVar31,(pAVar22->fields)._Error_k__BackingField,
                                   *(MethodInfo_331B660 **)
                                    (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x140))
              ;
              goto joined_r0x0341a95f;
            }
          }
        }
      }
      else {
        *(undefined2 *)(pSStack_280->m_Items + 3) = 1;
        pSStack_280->max_length = (il2cpp_array_size_t)(pAVar22->fields)._Value_k__BackingField;
        il2cpp_runtime_helper_022b4080(&pSStack_280->max_length);
        pSVar31 = (System_Object_array *)0x0;
        if (pSStack_280 != (System_Object_array *)0x0) {
          pSStack_280->m_Items[0] = (Il2CppObject *)0x0;
          pSVar31 = (System_Object_array *)pSStack_280->m_Items;
          il2cpp_runtime_helper_022b4080(pSVar31,0);
          pSVar23 = pSStack_280;
          pcVar8 = (((Il2CppClass *)plVar25)->_1).namespaze;
          if (pcVar8 != (char *)0x0) {
            pSVar31 = *(System_Object_array **)(pcVar8 + 0x40);
            Var48 = (**(code **)(pcVar8 + 0x18))();
            if (pSVar23 != (System_Object_array *)0x0) {
              *(unkbyte10 *)(pSVar23->m_Items + 1) = Var48;
              *(undefined2 *)((long)pSVar23->m_Items + 0x16) = uStack_272;
              *(undefined4 *)((long)pSVar23->m_Items + 0x12) = uStack_276;
              if (pSStack_280 != (System_Object_array *)0x0) {
                pSVar31 = (System_Object_array *)pSStack_280->max_length;
                pAVar21 = ApplicationManagers_Api_AottgQueryResult_object___ReadyFresh
                                    ((Il2CppObject *)pSVar31,0,
                                     *(MethodInfo_331B380 **)
                                      (*(long *)((long)((now.fields._8_8_)->_1).byval_arg.data + 0xc0) + 0x100
                                      ));
                goto joined_r0x0341a95f;
              }
            }
          }
        }
      }
    }
  }
label_0341a9ed:
  il2cpp_runtime_helper_022b2c90();
label_0341a9f2:
  uVar24 = il2cpp_runtime_helper_022b2ca0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)uVar24 >> 8),
                  *(undefined1 *)&((System_Collections_Generic_List_object__Fields *)&pSVar31->bounds)->_items
                 );
}


// ApplicationManagers.Credits.AottgCreditsParser$$Fail
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__Fail (ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x44c66a0

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__Fail
          (ApplicationManagers_Credits_AottgCreditsResponse_o **credits,System_String_o **error,
          MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  
  if (g_data_057aeae1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"bad_response");
    g_data_057aeae1 = '\x01';
    method = extraout_RDX;
  }
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  il2cpp_runtime_helper_022b4080(credits,0,method);
  *error = "bad_response";
  il2cpp_runtime_helper_022b4080(error,"bad_response");
  return 0;
}


