// Type: Gisketch.Aottg2UI.State.GisketchUIBinding
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIBinding.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIBinding$$Setup
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__Setup (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o* definition, Gisketch_Aottg2UI_State_GisketchUIState_o* state, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x3b44b10

void Gisketch_Aottg2UI_State_GisketchUIBinding__Setup
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,
               Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *definition,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  System_Delegate_o *b;
  System_Action_string__o *pSVar2;
  System_Delegate_o *pSVar3;
  MethodInfo *pMVar4;
  System_Action_string__o *a;
  bool bVar5;
  
  if (g_data_057a9c9c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057a9c9c = '\x01';
  }
  (__this->fields)._definition = definition;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._definition,definition);
  (__this->fields)._enter = enter;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._enter,enter);
  (__this->fields)._exit = exit;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._exit,exit);
  (__this->fields)._state = state;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._state);
  pGVar1 = (__this->fields)._state;
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    b = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    if (g_data_057a9ca8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      g_data_057a9ca8 = '\x01';
    }
    a = (pGVar1->fields).Changed;
    do {
      pSVar3 = System_Delegate__Combine((System_Delegate_o *)a,b,(MethodInfo *)0x0);
      pMVar4 = TypeInfo_Action_string;
      state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
      if (pSVar3 != (System_Delegate_o *)0x0) {
        state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_string);
        if ((MethodInfo *)state == (MethodInfo *)0x0) {
          il2cpp_runtime_helper_022b2fd0(pSVar3);
          state = (Gisketch_Aottg2UI_State_GisketchUIState_o *)pMVar4;
          break;
        }
      }
      pSVar2 = (System_Action_string__o *)il2cpp_runtime_helper_02300640(&(pGVar1->fields).Changed,state,a);
      bVar5 = a != pSVar2;
      a = pSVar2;
    } while (bVar5);
  }
  Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh(__this,(MethodInfo *)state);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__OnDestroy (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3b45160

void Gisketch_Aottg2UI_State_GisketchUIBinding__OnDestroy
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  DG_Tweening_Tween_o *t;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  undefined8 uVar2;
  System_Delegate_o *value;
  System_Action_string__o *pSVar3;
  System_Delegate_o *pSVar4;
  long lVar5;
  System_Action_string__o *source;
  bool bVar6;
  
  if (g_data_057a9c9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057a9c9d = '\x01';
  }
  t = (__this->fields)._visibilityTween;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  pGVar1 = (__this->fields)._state;
  if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    value = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    if (g_data_057a9ca9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      g_data_057a9ca9 = '\x01';
    }
    source = (pGVar1->fields).Changed;
    do {
      pSVar4 = System_Delegate__Remove((System_Delegate_o *)source,value,(MethodInfo *)0x0);
      uVar2 = TypeInfo_Action_string;
      lVar5 = 0;
      if ((pSVar4 != (System_Delegate_o *)0x0) &&
         (lVar5 = il2cpp_runtime_helper_023051f0(pSVar4,TypeInfo_Action_string), lVar5 == 0)) {
        il2cpp_runtime_helper_022b2fd0(pSVar4,uVar2);
        return;
      }
      pSVar3 = (System_Action_string__o *)il2cpp_runtime_helper_02300640(&(pGVar1->fields).Changed,lVar5,source);
      bVar6 = source != pSVar3;
      source = pSVar3;
    } while (bVar6);
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$OnStateChanged
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__OnStateChanged (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, System_String_o* key, const MethodInfo* method);
// 0x3b45330

void Gisketch_Aottg2UI_State_GisketchUIBinding__OnStateChanged
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,System_String_o *key,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  Il2CppObject *pIVar2;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar3;
  UnityEngine_Material_o *pUVar4;
  System_String_o *key_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  System_Collections_Generic_IEqualityComparer_TKey__o *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *t;
  System_Int32_array *__this_01;
  undefined4 uVar7;
  undefined4 uVar8;
  char cVar9;
  bool_conflict bVar10;
  uint uVar11;
  int32_t iVar12;
  float fVar13;
  bool_conflict bVar14;
  System_Action_string__o *pSVar15;
  long lVar16;
  System_Delegate_o *x;
  TMPro_TMP_Text_o *pTVar17;
  TMPro_TMP_Text_o *pTVar18;
  UnityEngine_GameObject_o *pUVar19;
  System_String_o *pSVar20;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar21;
  UnityEngine_Object_o *__this_02;
  TMPro_TMP_Text_o *__this_03;
  UnityEngine_RectTransform_o *pUVar22;
  Gilzoide_FlexUi_Yoga_YGValue_Fields value;
  TMPro_TMP_Text_o *pTVar23;
  DG_Tweening_Tween_o *pDVar24;
  DG_Tweening_TweenCallback_o *action;
  System_String_o **ppSVar25;
  System_Object_array *pSVar26;
  Gilzoide_FlexUi_FlexLayout_o *pGVar27;
  Gilzoide_FlexUi_FlexLayout_o *pGVar28;
  System_String_o **in_RCX;
  Gilzoide_FlexUi_FlexLayout_c **ppGVar29;
  char extraout_DL;
  ulong extraout_RDX;
  byte bVar30;
  uint uVar31;
  System_Action_string__o *unaff_RBX;
  int index;
  TMPro_TMP_Text_o *unaff_RBP;
  Il2CppClass *method_00;
  MethodInfo *pMVar32;
  long *__this_04;
  UnityEngine_RectTransform_o *rect;
  MethodInfo_25F3760 **ppMVar33;
  System_String_o **__this_05;
  MethodInfo_255AB70 **__this_06;
  TMPro_TMP_Text_o *unaff_R12;
  System_Delegate_o *unaff_R13;
  int iVar34;
  ulong uVar35;
  Gilzoide_FlexUi_FlexLayout_o *rect_00;
  bool bVar36;
  UnityEngine_Vector2_o UVar37;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined1 auVar38 [16];
  undefined1 auVar39 [16];
  undefined4 extraout_XMM0_Dd;
  float fVar40;
  float fVar41;
  float fVar42;
  undefined4 uVar43;
  undefined4 uVar44;
  float fVar45;
  float fVar46;
  UnityEngine_Rect_o UVar47;
  TMPro_TMP_Text_o *pTStack_138;
  TMPro_TMP_Text_o *pTStack_130;
  TMPro_TMP_Text_o *pTStack_128;
  TMPro_TMP_Text_o *pTStack_120;
  undefined8 uStack_118;
  TMPro_TMP_Text_o *pTStack_110;
  TMPro_TMP_Text_o *pTStack_108;
  TMPro_TMP_Text_o *pTStack_100;
  TMPro_TMP_Text_o *pTStack_f8;
  float fStack_f0;
  float fStack_ec;
  undefined4 uStack_e8;
  undefined4 uStack_e4;
  float fStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  TMPro_TMP_Text_o *pTStack_c8;
  TMPro_TMP_Text_o *pTStack_c0;
  ulong uStack_b8;
  System_Delegate_o *pSStack_b0;
  float fStack_9c;
  TMPro_TMP_Text_o *pTStack_98;
  Il2CppClass *pIStack_90;
  TMPro_TMP_Text_o *pTStack_88;
  System_Delegate_o *pSStack_80;
  ulong uStack_78;
  System_Delegate_o *pSStack_70;
  TMPro_TMP_Text_o *pTStack_68;
  Il2CppObject *pIStack_58;
  System_Action_string__o *pSStack_50;
  System_Delegate_o *pSStack_48;
  System_Action_string__o *pSStack_40;
  undefined8 extraout_XMM0_Qb;
  
  if (g_data_057a9c9e == '\0') {
    pSStack_40 = (System_Action_string__o *)0x3b45356;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    pSStack_40 = (System_Action_string__o *)0x3b45362;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    pSStack_40 = (System_Action_string__o *)0x3b4536e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c9e = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pSStack_40 = (System_Action_string__o *)0x3b4538d;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_40 = (System_Action_string__o *)0x3b45399;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    pGVar1 = (__this->fields)._state;
    if (pGVar1 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      pSStack_40 = (System_Action_string__o *)0x3b453bd;
      key = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
      in_RCX = (System_String_o **)0x0;
      pSStack_40 = (System_Action_string__o *)0x3b453d7;
      System_Action_object____ctor();
      if (g_data_057a9ca9 == '\0') {
        pSStack_40 = (System_Action_string__o *)0x3b453ec;
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
        g_data_057a9ca9 = '\x01';
      }
      unaff_R12 = (TMPro_TMP_Text_o *)&(pGVar1->fields).Changed;
      unaff_RBX = (pGVar1->fields).Changed;
      do {
        pSStack_40 = (System_Action_string__o *)0x3b4543a;
        unaff_R13 = System_Delegate__Remove
                              ((System_Delegate_o *)unaff_RBX,(System_Delegate_o *)key,(MethodInfo *)0x0);
        unaff_RBP = TypeInfo_Action_string;
        lVar16 = 0;
        if (unaff_R13 != (System_Delegate_o *)0x0) {
          pSStack_40 = (System_Action_string__o *)0x3b4545c;
          lVar16 = il2cpp_runtime_helper_023051f0(unaff_R13,TypeInfo_Action_string);
          if (lVar16 == 0) {
            pSStack_40 = (System_Action_string__o *)0x3b4546c;
            il2cpp_runtime_helper_022b2fd0(unaff_R13,unaff_RBP);
            __this = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)unaff_RBX;
            goto label_03b4546c;
          }
        }
        pSStack_40 = (System_Action_string__o *)0x3b4541e;
        pSVar15 = (System_Action_string__o *)il2cpp_runtime_helper_02300640(unaff_R12,lVar16,unaff_RBX);
        bVar36 = unaff_RBX != pSVar15;
        unaff_RBX = pSVar15;
      } while (bVar36);
    }
    return;
  }
label_03b4546c:
  pIVar2 = (((System_Action_string__o *)__this)->fields).m_target;
  if (pIVar2 == (Il2CppObject *)0x0) {
    return;
  }
  method_00 = pIVar2[1].klass;
  pSStack_40 = (System_Action_string__o *)0x3b45483;
  x = (System_Delegate_o *)key;
  bVar10 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') goto label_03b454d8;
  pIVar2 = (((System_Action_string__o *)__this)->fields).m_target;
  if (pIVar2 != (Il2CppObject *)0x0) {
    method_00 = pIVar2[1].monitor;
    pSStack_40 = (System_Action_string__o *)0x3b4549e;
    x = (System_Delegate_o *)key;
    bVar10 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') goto label_03b454d8;
    pIVar2 = (((System_Action_string__o *)__this)->fields).m_target;
    if (pIVar2 != (Il2CppObject *)0x0) {
      method_00 = pIVar2[2].klass;
      pSStack_40 = (System_Action_string__o *)0x3b454b9;
      x = (System_Delegate_o *)key;
      bVar10 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
label_03b454d8:
        Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh(__this,(MethodInfo *)method_00);
        return;
      }
      pIVar2 = (((System_Action_string__o *)__this)->fields).m_target;
      if (pIVar2 != (Il2CppObject *)0x0) {
        method_00 = pIVar2[2].monitor;
        pSStack_40 = (System_Action_string__o *)0x3b454d4;
        bVar10 = System_String__op_Equality(key,(System_String_o *)method_00,(MethodInfo *)0x0);
        if ((char)bVar10 == '\0') {
          return;
        }
        goto label_03b454d8;
      }
    }
  }
  pSStack_40 = (System_Action_string__o *)0x3b45502;
  il2cpp_runtime_helper_022b2c90();
  pSStack_50 = unaff_RBX;
  pSStack_48 = (System_Delegate_o *)key;
  pSStack_40 = (System_Action_string__o *)__this;
  if (g_data_057a9cac == '\0') {
    pTStack_68 = (TMPro_TMP_Text_o *)0x3b45537;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057a9cac = '\x01';
  }
  pIStack_58 = (Il2CppObject *)0x0;
  pTVar23 = (TMPro_TMP_Text_o *)0x0;
  pTStack_68 = (TMPro_TMP_Text_o *)0x3b45551;
  bVar10 = System_String__IsNullOrEmpty((System_String_o *)method_00,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  __this_03 = (TMPro_TMP_Text_o *)(x->fields).method_ptr;
  if (__this_03 != (TMPro_TMP_Text_o *)0x0) {
    pTStack_68 = (TMPro_TMP_Text_o *)0x3b45575;
    System_Collections_Generic_Dictionary_object__object___TryGetValue
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,(Il2CppObject *)method_00,
               &pIStack_58,MethodInfo_Boolean_TryGetValue);
    return;
  }
  pTStack_68 = (TMPro_TMP_Text_o *)Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth;
  il2cpp_runtime_helper_022b2c90();
  __this_04 = (long *)__this_03;
  pIStack_90 = method_00;
  pTStack_88 = unaff_R12;
  pSStack_80 = unaff_R13;
  uStack_78 = extraout_RDX;
  pSStack_70 = x;
  pTStack_68 = unaff_RBP;
  if (g_data_057a9ca3 == '\0') {
    pSStack_b0 = (System_Delegate_o *)0x3b455b6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pSStack_b0 = (System_Delegate_o *)0x3b455c2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pSStack_b0 = (System_Delegate_o *)0x3b455ce;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponentInChildren_HorizontalL);
    pSStack_b0 = (System_Delegate_o *)0x3b455da;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    pSStack_b0 = (System_Delegate_o *)0x3b455e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSStack_b0 = (System_Delegate_o *)0x3b455f2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    pSStack_b0 = (System_Delegate_o *)0x3b455fe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pSStack_b0 = (System_Delegate_o *)0x3b4560a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    __this_04 = &TypeInfo_YGValue;
    pSStack_b0 = (System_Delegate_o *)0x3b45616;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca3 = '\x01';
  }
  uVar35 = extraout_RDX;
  if (__this_03 != (TMPro_TMP_Text_o *)0x0) {
    pSStack_b0 = (System_Delegate_o *)0x3b45638;
    x = (System_Delegate_o *)
        UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_03,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pSStack_b0 = (System_Delegate_o *)0x3b45652;
    unaff_R12 = (TMPro_TMP_Text_o *)
                UnityEngine_GameObject__GetComponentInChildren_object__255a400
                          ((UnityEngine_GameObject_o *)__this_03,1,MethodInfo_HorizontalLayoutGroup_GetComponentInChildren_HorizontalL);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pSStack_b0 = (System_Delegate_o *)0x3b4566d;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_b0 = (System_Delegate_o *)0x3b45679;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pSStack_b0 = (System_Delegate_o *)0x3b45695;
      il2cpp_runtime_helper_02337ed0();
    }
    pTVar23 = (TMPro_TMP_Text_o *)0x0;
    pSStack_b0 = (System_Delegate_o *)0x3b456a1;
    __this_04 = (long *)unaff_R12;
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    if (unaff_R12 != (TMPro_TMP_Text_o *)0x0) {
      __this_00 = (UnityEngine_RectOffset_o *)(unaff_R12->fields).m_Material;
      __this_04 = (long *)(TMPro_TMP_Text_o *)0x0;
      if (__this_00 != (UnityEngine_RectOffset_o *)0x0) {
        uVar35 = 0;
        pSStack_b0 = (System_Delegate_o *)0x3b456da;
        pTStack_98 = __this_03;
        uVar11 = UnityEngine_RectOffset__get_horizontal(__this_00,(MethodInfo *)0x0);
        pTVar23 = (TMPro_TMP_Text_o *)0x0;
        pSStack_b0 = (System_Delegate_o *)0x3b456e6;
        __this_04 = (long *)unaff_R12;
        pTVar17 = (TMPro_TMP_Text_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)unaff_R12,(MethodInfo *)0x0)
        ;
        __this_03 = (TMPro_TMP_Text_o *)(ulong)uVar11;
        if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
          fStack_9c = (float)(int)uVar11;
          pTVar18 = (TMPro_TMP_Text_o *)0x0;
          uVar35 = 0;
          do {
            pTVar23 = (TMPro_TMP_Text_o *)0x0;
            pSStack_b0 = (System_Delegate_o *)0x3b4574c;
            iVar12 = UnityEngine_Transform__get_childCount
                               ((UnityEngine_Transform_o *)pTVar17,(MethodInfo *)0x0);
            unaff_RBP = pTStack_98;
            index = (int)pTVar18;
            iVar34 = (int)uVar35;
            if (iVar12 <= index) {
              if (1 < iVar34) {
                uVar35 = (ulong)(iVar34 - 1U);
                fStack_9c = fStack_9c +
                            (float)(int)(iVar34 - 1U) * *(float *)&(unaff_R12->fields).m_CanvasRenderer;
              }
              __this_04 = (long *)pTVar17;
              if (x == (System_Delegate_o *)0x0) break;
              pSStack_b0 = (System_Delegate_o *)0x3b4587c;
              (*(code *)x->klass[1].vtable._4_unknown.method)(x,x->klass[1].vtable._5_unknown.methodPtr);
              pSStack_b0 = (System_Delegate_o *)0x3b4588f;
              auVar38._0_8_ =
                   (**(code **)&x->klass[1]._2.naturalAligment)(x,x->klass[1].vtable._0_Equals.methodPtr);
              auVar38._8_8_ = extraout_XMM0_Qb;
              if ((float)auVar38._0_8_ <= fStack_9c) {
                auVar39._4_12_ = auVar38._4_12_;
                auVar39._0_4_ = fStack_9c;
                auVar38._0_8_ = auVar39._0_8_;
              }
              pSStack_b0 = (System_Delegate_o *)0x3b458a8;
              (*(code *)x->klass[1].vtable._0_Equals.method)
                        (auVar38._0_8_,x,x->klass[1].vtable._1_Finalize.methodPtr);
              pSStack_b0 = (System_Delegate_o *)0x3b458ba;
              __this_03 = (TMPro_TMP_Text_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)unaff_RBP,MethodInfo_FlexLayout_GetComponent_FlexLayout);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pSStack_b0 = (System_Delegate_o *)0x3b458d5;
                il2cpp_runtime_helper_02337ed0();
              }
              pTVar23 = (TMPro_TMP_Text_o *)0x0;
              pSStack_b0 = (System_Delegate_o *)0x3b458e1;
              __this_04 = (long *)__this_03;
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar10 != '\0') {
                if (__this_03 == (TMPro_TMP_Text_o *)0x0) break;
                if (*(int *)((long)&(__this_03->fields).m_OnDirtyLayoutCallback + 4) != 2) {
                  if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                    pSStack_b0 = (System_Delegate_o *)0x3b4590c;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStack_b0 = (System_Delegate_o *)0x3b45919;
                  GVar21 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fStack_9c,(MethodInfo *)0x0);
                  pSStack_b0 = (System_Delegate_o *)0x3b45926;
                  Gilzoide_FlexUi_FlexLayout__set_Width
                            ((Gilzoide_FlexUi_FlexLayout_o *)__this_03,GVar21,(MethodInfo *)0x0);
                }
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pSStack_b0 = (System_Delegate_o *)0x3b4593e;
                il2cpp_runtime_helper_02337ed0();
              }
              pTVar23 = (TMPro_TMP_Text_o *)0x0;
              pSStack_b0 = (System_Delegate_o *)0x3b4594a;
              __this_04 = (long *)__this_03;
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar10 != '\0') {
                if (__this_03 == (TMPro_TMP_Text_o *)0x0) break;
                pUVar3 = (__this_03->fields).m_OnDirtyMaterialCallback;
                if (((ulong)pUVar3 >> 0x20 != 1) || (SUB84(pUVar3,0) < fStack_9c)) {
                  if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                    pSStack_b0 = (System_Delegate_o *)0x3b45992;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSStack_b0 = (System_Delegate_o *)0x3b4599f;
                  GVar21 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fStack_9c,(MethodInfo *)0x0);
                  pSStack_b0 = (System_Delegate_o *)0x3b459ac;
                  Gilzoide_FlexUi_FlexLayout__set_MinWidth
                            ((Gilzoide_FlexUi_FlexLayout_o *)__this_03,GVar21,(MethodInfo *)0x0);
                }
              }
              pSStack_b0 = (System_Delegate_o *)0x3b459b6;
              pUVar22 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)unaff_RBP,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                pSStack_b0 = (System_Delegate_o *)0x3b459eb;
                il2cpp_runtime_helper_02337ed0();
              }
              if (pUVar22 == (UnityEngine_RectTransform_o *)0x0) {
                rect = (UnityEngine_RectTransform_o *)0x0;
              }
              else {
                rect = (UnityEngine_RectTransform_o *)0x0;
                if ((Gilzoide_FlexUi_FlexLayout_c *)pUVar22->klass == TypeInfo_RectTransform) {
                  rect = pUVar22;
                }
              }
              UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
              return;
            }
            pTVar23 = (TMPro_TMP_Text_o *)0x0;
            pSStack_b0 = (System_Delegate_o *)0x3b4575e;
            __this_04 = (long *)unaff_R12;
            pTVar17 = (TMPro_TMP_Text_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)unaff_R12,(MethodInfo *)0x0);
            unaff_RBP = pTVar18;
            if (pTVar17 == (TMPro_TMP_Text_o *)0x0) break;
            pSStack_b0 = (System_Delegate_o *)0x3b45773;
            pTVar23 = pTVar18;
            pTVar18 = (TMPro_TMP_Text_o *)
                      UnityEngine_Transform__GetChild
                                ((UnityEngine_Transform_o *)pTVar17,index,(MethodInfo *)0x0);
            __this_04 = (long *)pTVar17;
            if (pTVar18 == (TMPro_TMP_Text_o *)0x0) break;
            pTVar23 = (TMPro_TMP_Text_o *)0x0;
            pSStack_b0 = (System_Delegate_o *)0x3b45789;
            __this_04 = (long *)pTVar18;
            pUVar19 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar18,(MethodInfo *)0x0);
            __this_03 = pTVar18;
            if (pUVar19 == (UnityEngine_GameObject_o *)0x0) break;
            pSStack_b0 = (System_Delegate_o *)0x3b4579c;
            bVar10 = UnityEngine_GameObject__get_activeInHierarchy(pUVar19,(MethodInfo *)0x0);
            if ((char)bVar10 != '\0') {
              pSStack_b0 = (System_Delegate_o *)0x3b457b2;
              pTVar17 = (TMPro_TMP_Text_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pTVar18,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pSStack_b0 = (System_Delegate_o *)0x3b457cd;
                il2cpp_runtime_helper_02337ed0();
              }
              uVar35 = (ulong)(iVar34 + 1);
              pTVar23 = (TMPro_TMP_Text_o *)0x0;
              pSStack_b0 = (System_Delegate_o *)0x3b457dd;
              __this_04 = (long *)pTVar17;
              bVar10 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pTVar17,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                pSStack_b0 = (System_Delegate_o *)0x3b45712;
                pUVar22 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pTVar18,MethodInfo_RectTransform_GetComponent_RectTransform);
                pSStack_b0 = (System_Delegate_o *)0x3b4571c;
                fVar40 = UnityEngine_UI_LayoutUtility__GetPreferredWidth(pUVar22,(MethodInfo *)0x0);
              }
              else {
                if (pTVar17 == (TMPro_TMP_Text_o *)0x0) break;
                in_RCX = (System_String_o **)(pTVar17->klass->vtable)._106_ForceMeshUpdate.method;
                pSStack_b0 = (System_Delegate_o *)0x3b45806;
                (*(pTVar17->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar17,0,0);
                pSStack_b0 = (System_Delegate_o *)0x3b4581a;
                pSVar20 = (System_String_o *)
                          (*(pTVar17->klass->vtable)._65_get_text.methodPtr)
                                    (pTVar17,(pTVar17->klass->vtable)._65_get_text.method);
                pSStack_b0 = (System_Delegate_o *)0x3b45827;
                UVar37 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0(pTVar17,pSVar20,(MethodInfo *)0x0);
                fVar40 = UVar37.fields.x;
              }
              fStack_9c = fStack_9c + fVar40;
            }
            unaff_RBP = (TMPro_TMP_Text_o *)(ulong)(index + 1);
            pTVar23 = (TMPro_TMP_Text_o *)0x0;
            pSStack_b0 = (System_Delegate_o *)0x3b45739;
            __this_04 = (long *)unaff_R12;
            pTVar17 = (TMPro_TMP_Text_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)unaff_R12,(MethodInfo *)0x0);
            pTVar18 = unaff_RBP;
          } while (pTVar17 != (TMPro_TMP_Text_o *)0x0);
        }
      }
    }
  }
  pSStack_b0 = (System_Delegate_o *)0x3b45a0c;
  il2cpp_runtime_helper_022b2c90();
  pTStack_c8 = __this_03;
  pTStack_c0 = unaff_R12;
  uStack_b8 = uVar35;
  pSStack_b0 = x;
  if (g_data_057a9ca4 == '\0') {
    pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45a36;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45a42;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45a4e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45a5a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45a66;
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    g_data_057a9ca4 = '\x01';
  }
  pSVar20 = (System_String_o *)0x0;
  pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45a77;
  pTVar17 = (TMPro_TMP_Text_o *)__this_04;
  __this_02 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_Object_o *)0x0) {
    pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45a8a;
    pTVar17 = (TMPro_TMP_Text_o *)UnityEngine_Object__get_name(__this_02,(MethodInfo *)0x0);
    in_RCX = &"public-profile-hover-bio";
    pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45a9e;
    pSVar20 = "public-profile-hover-bio";
    bVar10 = System_String__op_Inequality((System_String_o *)pTVar17,"public-profile-hover-bio",(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    if (pTVar23 != (TMPro_TMP_Text_o *)0x0) {
      pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45abe;
      TMPro_TMP_Text__set_maxVisibleLines(pTVar23,5,(MethodInfo *)0x0);
      pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45acd;
      TMPro_TMP_Text__set_overflowMode(pTVar23,1,(MethodInfo *)0x0);
      pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45ad7;
      __this_03 = (TMPro_TMP_Text_o *)TMPro_TMP_Text__get_rectTransform(pTVar23,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45af3;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar20 = (System_String_o *)0x0;
      pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45aff;
      pTVar17 = __this_03;
      bVar10 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar40 = 0.0;
      fVar42 = 0.0;
      uVar43 = 0;
      uVar44 = 0;
      if ((char)bVar10 == '\0') {
label_03b45b26:
        fStack_f0 = fVar40;
        fStack_ec = fVar42;
        uStack_e8 = uVar43;
        uStack_e4 = uVar44;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45b3c;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar20 = (System_String_o *)0x0;
        pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45b48;
        pTVar17 = __this_03;
        bVar10 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar40 = fStack_f0;
        fVar13 = fStack_f0;
        fVar42 = fStack_ec;
        fVar45 = fStack_ec;
        uVar43 = uStack_e8;
        uVar7 = uStack_e8;
        uVar44 = uStack_e4;
        uVar8 = uStack_e4;
        if ((char)bVar10 != '\0') {
          if (__this_03 == (TMPro_TMP_Text_o *)0x0) goto label_03b45d55;
          pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45b5f;
          pUVar22 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
          fVar40 = fStack_f0;
          fVar13 = fStack_f0;
          fVar42 = fStack_ec;
          fVar45 = fStack_ec;
          uVar43 = uStack_e8;
          uVar7 = uStack_e8;
          uVar44 = uStack_e4;
          uVar8 = uStack_e4;
          if ((pUVar22 != (UnityEngine_RectTransform_o *)0x0) &&
             (ppGVar29 = &TypeInfo_RectTransform, in_RCX = (System_String_o **)ppGVar29,
             (Gilzoide_FlexUi_FlexLayout_c *)pUVar22->klass == TypeInfo_RectTransform)) {
            pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45b85;
            UVar47 = UnityEngine_RectTransform__get_rect(pUVar22,(MethodInfo *)0x0);
            in_RCX = (System_String_o **)ppGVar29;
            fVar40 = UVar47.fields.m_Width;
            fVar13 = fStack_f0;
            fVar42 = UVar47.fields.m_Height;
            fVar45 = fStack_ec;
            uVar7 = uStack_e8;
            uVar8 = uStack_e4;
          }
        }
      }
      else {
        if (__this_03 == (TMPro_TMP_Text_o *)0x0) goto label_03b45d55;
        pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45b19;
        UVar47 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)__this_03,(MethodInfo *)0x0);
        fVar40 = UVar47.fields.m_Width;
        fVar42 = UVar47.fields.m_Height;
        fVar13 = fStack_f0;
        fVar45 = fStack_ec;
        uVar7 = uStack_e8;
        uVar8 = uStack_e4;
        if (fVar40 <= 1.0) goto label_03b45b26;
      }
      uStack_e4 = uVar44;
      uStack_e8 = uVar43;
      fStack_ec = fVar42;
      fStack_f0 = fVar40;
      fVar40 = 24.0;
      if (1.0 < fStack_f0) {
        pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45bc4;
        pSVar20 = (System_String_o *)
                  (*(pTVar23->klass->vtable)._65_get_text.methodPtr)
                            (pTVar23,(pTVar23->klass->vtable)._65_get_text.method);
        pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45bd8;
        UVar37 = TMPro_TMP_Text__GetPreferredValues_4c70170(pTVar23,pSVar20,fStack_f0,0.0,(MethodInfo *)0x0);
        fVar40 = UVar37.fields.y;
        fVar13 = fStack_f0;
        fVar45 = fStack_ec;
        uVar7 = uStack_e8;
        uVar8 = uStack_e4;
      }
      uStack_e4 = uVar8;
      uStack_e8 = uVar7;
      fStack_ec = fVar45;
      fStack_f0 = fVar13;
      pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45be1;
      fStack_f0 = ceilf(fVar40);
      pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45bf7;
      fStack_ec = extraout_XMM0_Db;
      uStack_e8 = extraout_XMM0_Dc;
      uStack_e4 = extraout_XMM0_Dd;
      pTVar18 = (TMPro_TMP_Text_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_04,MethodInfo_FlexLayout_GetComponent_FlexLayout)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45c0c;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar20 = (System_String_o *)0x0;
      pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45c18;
      pTVar17 = pTVar18;
      bVar10 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pTVar18,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        return;
      }
      __this_03 = (TMPro_TMP_Text_o *)0x0;
      if (pTVar18 != (TMPro_TMP_Text_o *)0x0) {
        fVar40 = 120.0;
        if (fStack_f0 <= 120.0) {
          fVar40 = fStack_f0;
        }
        fVar40 = (float)(~-(uint)(24.0 <= fStack_f0) & 0x41c00000 | (uint)fVar40 & -(uint)(24.0 <= fStack_f0))
        ;
        fVar42 = 0.0;
        uVar43 = 0;
        uVar44 = 0;
        pUVar3 = (pTVar18->fields).m_OnDirtyVertsCallback;
        if ((ulong)pUVar3 >> 0x20 == 1) {
          fVar13 = SUB84(pUVar3,0);
          if (g_data_057a68c8 == '\0') {
            fStack_ec = 0.0;
            uStack_e8 = 0;
            uStack_e4 = 0;
            uStack_dc = 0;
            uStack_d8 = 0;
            uStack_d4 = 0;
            pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45c92;
            fStack_f0 = fVar40;
            fStack_e0 = fVar13;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
            g_data_057a68c8 = '\x01';
            fVar40 = fStack_f0;
            fVar42 = fStack_ec;
            uVar43 = uStack_e8;
            uVar44 = uStack_e4;
            fVar13 = fStack_e0;
          }
          fVar45 = ABS(fVar13);
          if (ABS(fVar13) <= ABS(fVar40)) {
            fVar45 = ABS(fVar40);
          }
          fVar41 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
          fVar46 = fVar45 * 1e-06;
          if (fVar45 * 1e-06 <= fVar41) {
            fVar46 = fVar41;
          }
          if (ABS(fVar40 - fVar13) < fVar46) {
            return;
          }
        }
        if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
          pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45d0c;
          fStack_f0 = fVar40;
          fStack_ec = fVar42;
          uStack_e8 = uVar43;
          uStack_e4 = uVar44;
          il2cpp_runtime_helper_02337ed0();
          fVar40 = fStack_f0;
        }
        pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45d17;
        value = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
                Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar40,(MethodInfo *)0x0);
        pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45d24;
        Gilzoide_FlexUi_FlexLayout__set_Height
                  ((Gilzoide_FlexUi_FlexLayout_o *)pTVar18,(Gilzoide_FlexUi_Yoga_YGValue_o)value,
                   (MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                  ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)__this_04,(MethodInfo *)value);
        return;
      }
    }
  }
label_03b45d55:
  pTStack_f8 = (TMPro_TMP_Text_o *)0x3b45d5a;
  uStack_118 = il2cpp_runtime_helper_022b2c90();
  ppMVar33 = (MethodInfo_25F3760 **)pTVar17;
  pTStack_110 = __this_03;
  pTStack_108 = (TMPro_TMP_Text_o *)__this_04;
  pTStack_100 = pTVar23;
  pTStack_f8 = unaff_RBP;
  if (g_data_057a9ca0 == '\0') {
    pTStack_120 = (TMPro_TMP_Text_o *)0x3b45d7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pTStack_120 = (TMPro_TMP_Text_o *)0x3b45d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    pTStack_120 = (TMPro_TMP_Text_o *)0x3b45d97;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshVisibility_b__14_0);
    pTStack_120 = (TMPro_TMP_Text_o *)0x3b45da3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    ppMVar33 = &MethodInfo_Tween_OnComplete_Tween;
    pTStack_120 = (TMPro_TMP_Text_o *)0x3b45daf;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca0 = '\x01';
  }
  pUVar4 = (pTVar17->fields).m_Material;
  if (pUVar4 != (UnityEngine_Material_o *)0x0) {
    __this_03 = *(TMPro_TMP_Text_o **)&(pTVar17->fields).m_SkipLayoutUpdate;
    key_00 = pUVar4[1].monitor;
    pSVar20 = (System_String_o *)0x0;
    pTStack_120 = (TMPro_TMP_Text_o *)0x3b45dd5;
    ppMVar33 = (MethodInfo_25F3760 **)pTVar17;
    pTVar23 = (TMPro_TMP_Text_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
    if (pTVar23 != (TMPro_TMP_Text_o *)0x0) {
      pSVar20 = (System_String_o *)0x0;
      pTStack_120 = (TMPro_TMP_Text_o *)0x3b45de8;
      uVar11 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pTVar23,(MethodInfo *)0x0);
      ppMVar33 = (MethodInfo_25F3760 **)pTVar23;
      if (__this_03 != (TMPro_TMP_Text_o *)0x0) {
        pTStack_120 = (TMPro_TMP_Text_o *)0x3b45dff;
        uVar11 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                           ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_03,key_00,uVar11 & 0xff,
                            (MethodInfo *)in_RCX);
        __this_03 = (TMPro_TMP_Text_o *)(ulong)uVar11;
        bVar30 = (byte)uVar11;
        if (*(char *)&(pTVar17->fields).m_RaycastPadding.fields.x == '\0') {
          pSVar20 = (System_String_o *)0x0;
          pTStack_120 = (TMPro_TMP_Text_o *)0x3b45f47;
          ppMVar33 = (MethodInfo_25F3760 **)pTVar17;
          pUVar19 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
          if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
            pTStack_120 = (TMPro_TMP_Text_o *)0x3b45f5a;
            bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar19,(MethodInfo *)0x0);
            *(undefined1 *)&(pTVar17->fields).m_RaycastPadding.fields.x = 1;
            *(byte *)((long)&(pTVar17->fields).m_RaycastPadding.fields.x + 1) = bVar30;
            pSVar20 = (System_String_o *)0x0;
            pTStack_120 = (TMPro_TMP_Text_o *)0x3b45f6f;
            ppMVar33 = (MethodInfo_25F3760 **)pTVar17;
            pUVar19 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
            if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b45f85;
              UnityEngine_GameObject__SetActive(pUVar19,uVar11 & 0xff,(MethodInfo *)0x0);
              if (bVar30 == 0) {
                return;
              }
              pMVar32 = (MethodInfo *)0x0;
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b45f97;
              pUVar19 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b45f9f;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar19,pMVar32);
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b45fa7;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pTVar17,pMVar32);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                pTStack_120 = (TMPro_TMP_Text_o *)0x3b45fbf;
                il2cpp_runtime_helper_02337ed0();
              }
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b45fc6;
              bVar14 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if ((char)bVar14 == '\0') {
                return;
              }
              if ((char)bVar10 == '\x01') {
                return;
              }
              lVar16 = *(long *)&(pTVar17->fields).m_Color.fields;
              if (lVar16 == 0) {
                return;
              }
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b45ff0;
              bVar10 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar16 + 0x10),(MethodInfo *)0x0);
              if ((char)bVar10 != '\0') {
                return;
              }
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b46002;
              pUVar19 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
              pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                        &(pTVar17->fields).m_Color.fields;
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                pTStack_120 = (TMPro_TMP_Text_o *)0x3b46021;
                il2cpp_runtime_helper_02337ed0();
              }
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b46036;
              pDVar24 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                  (pUVar19,pGVar5,1,0,(MethodInfo *)0x0);
              *(DG_Tweening_Tween_o **)&(pTVar17->fields).m_RaycastTarget = pDVar24;
              goto label_03b46041;
            }
          }
        }
        else {
          if ((uint)*(byte *)((long)&(pTVar17->fields).m_RaycastPadding.fields.x + 1) == (uVar11 & 0xff)) {
            pSVar20 = (System_String_o *)0x0;
            pTStack_120 = (TMPro_TMP_Text_o *)0x3b45e22;
            ppMVar33 = (MethodInfo_25F3760 **)pTVar17;
            pUVar19 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
            if (pUVar19 == (UnityEngine_GameObject_o *)0x0) goto label_03b46192;
            pTStack_120 = (TMPro_TMP_Text_o *)0x3b45e35;
            bVar10 = UnityEngine_GameObject__get_activeSelf(pUVar19,(MethodInfo *)0x0);
            if ((byte)((byte)bVar10 ^ bVar30) != 1) {
              return;
            }
          }
          *(byte *)((long)&(pTVar17->fields).m_RaycastPadding.fields.x + 1) = bVar30;
          __this_04 = (long *)&(pTVar17->fields).m_RaycastTarget;
          pDVar24 = *(DG_Tweening_Tween_o **)&(pTVar17->fields).m_RaycastTarget;
          if (pDVar24 != (DG_Tweening_Tween_o *)0x0) {
            pTStack_120 = (TMPro_TMP_Text_o *)0x3b45e59;
            DG_Tweening_TweenExtensions__Kill(pDVar24,0,(MethodInfo *)0x0);
          }
          *__this_04 = 0;
          pTStack_120 = (TMPro_TMP_Text_o *)0x3b45e6a;
          il2cpp_runtime_helper_022b4080(__this_04);
          if (bVar30 == 0) {
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b46156;
              il2cpp_runtime_helper_02337ed0();
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b4615d;
              bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar9 = (char)bVar10;
            }
            else {
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b46071;
              bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar9 = (char)bVar10;
            }
            if ((cVar9 != '\0') &&
               (pSVar6 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                          &(pTVar17->fields).m_Color.fields.b,
               pSVar6 != (System_Collections_Generic_IEqualityComparer_TKey__o *)0x0)) {
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b46091;
              bVar10 = System_String__IsNullOrEmpty((System_String_o *)pSVar6[1].klass,(MethodInfo *)0x0);
              if ((char)bVar10 == '\0') {
                pTStack_120 = (TMPro_TMP_Text_o *)0x3b460a3;
                pUVar19 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
                pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                          &(pTVar17->fields).m_Color.fields.b;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  pTStack_120 = (TMPro_TMP_Text_o *)0x3b460c2;
                  il2cpp_runtime_helper_02337ed0();
                }
                pTStack_120 = (TMPro_TMP_Text_o *)0x3b460d4;
                pDVar24 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                    (pUVar19,pGVar5,0,0,(MethodInfo *)0x0);
                *__this_04 = (long)pDVar24;
                pTStack_120 = (TMPro_TMP_Text_o *)0x3b460e2;
                il2cpp_runtime_helper_022b4080(__this_04);
                t = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)*__this_04;
                __this_03 = (TMPro_TMP_Text_o *)0x0;
                if (t != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                  pTStack_120 = (TMPro_TMP_Text_o *)0x3b460f9;
                  action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                  pTStack_120 = (TMPro_TMP_Text_o *)0x3b46113;
                  DG_Tweening_TweenCallback___ctor();
                  DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                            ((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
                  return;
                }
              }
            }
            pSVar20 = (System_String_o *)0x0;
            pTStack_120 = (TMPro_TMP_Text_o *)0x3b4616f;
            ppMVar33 = (MethodInfo_25F3760 **)pTVar17;
            pUVar19 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
            if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
              pMVar32 = (MethodInfo *)0x0;
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b46180;
              UnityEngine_GameObject__SetActive(pUVar19,0,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pTVar17,pMVar32);
              return;
            }
          }
          else {
            pSVar20 = (System_String_o *)0x0;
            pTStack_120 = (TMPro_TMP_Text_o *)0x3b45e7c;
            ppMVar33 = (MethodInfo_25F3760 **)pTVar17;
            pUVar19 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
            if (pUVar19 != (UnityEngine_GameObject_o *)0x0) {
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b45e94;
              UnityEngine_GameObject__SetActive(pUVar19,1,(MethodInfo *)0x0);
              pMVar32 = (MethodInfo *)0x0;
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b45e9e;
              pUVar19 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b45ea6;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar19,pMVar32);
              pTStack_120 = (TMPro_TMP_Text_o *)0x3b45eae;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pTVar17,pMVar32);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                pTStack_120 = (TMPro_TMP_Text_o *)0x3b46137;
                il2cpp_runtime_helper_02337ed0();
                pTStack_120 = (TMPro_TMP_Text_o *)0x3b4613e;
                bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                cVar9 = (char)bVar10;
              }
              else {
                pTStack_120 = (TMPro_TMP_Text_o *)0x3b45ecc;
                bVar10 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                cVar9 = (char)bVar10;
              }
              if ((cVar9 != '\0') && (lVar16 = *(long *)&(pTVar17->fields).m_Color.fields, lVar16 != 0)) {
                pTStack_120 = (TMPro_TMP_Text_o *)0x3b45eec;
                bVar10 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar16 + 0x10),(MethodInfo *)0x0);
                if ((char)bVar10 == '\0') {
                  pTStack_120 = (TMPro_TMP_Text_o *)0x3b45efe;
                  pUVar19 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
                  pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                            &(pTVar17->fields).m_Color.fields;
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    pTStack_120 = (TMPro_TMP_Text_o *)0x3b45f1d;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pTStack_120 = (TMPro_TMP_Text_o *)0x3b45f32;
                  pDVar24 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                      (pUVar19,pGVar5,1,0,(MethodInfo *)0x0);
                  *__this_04 = (long)pDVar24;
label_03b46041:
                  il2cpp_runtime_helper_022b4080(&(pTVar17->fields).m_RaycastTarget,pDVar24);
                  return;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
label_03b46192:
  pTStack_120 = (TMPro_TMP_Text_o *)0x3b46197;
  il2cpp_runtime_helper_022b2c90();
  __this_05 = (System_String_o **)ppMVar33;
  pTStack_130 = __this_03;
  pTStack_128 = (TMPro_TMP_Text_o *)__this_04;
  pTStack_120 = pTVar17;
  if (g_data_057a9cad == '\0') {
    il2cpp_runtime_helper_023445d0(&"false");
    il2cpp_runtime_helper_023445d0(&"true");
    __this_05 = &"1";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cad = '\x01';
  }
  if (extraout_DL == '\0') {
    ppSVar25 = (System_String_o **)&"false";
  }
  else {
    ppSVar25 = &"true";
  }
  if ((TMPro_TMP_Text_o *)ppMVar33 != (TMPro_TMP_Text_o *)0x0) {
    pTVar23 = (TMPro_TMP_Text_o *)*ppSVar25;
    if (g_data_057a9cac == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      g_data_057a9cac = '\x01';
    }
    pTStack_138 = (TMPro_TMP_Text_o *)0x0;
    bVar10 = System_String__IsNullOrEmpty(pSVar20,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') {
      __this_01 = (System_Int32_array *)(((TMPro_TMP_Text_o *)ppMVar33)->fields).m_CachedPtr;
      __this_05 = (System_String_o **)0x0;
      if (__this_01 == (System_Int32_array *)0x0) goto label_03b462ad;
      bVar10 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                          (Il2CppObject *)pSVar20,(Il2CppObject **)&pTStack_138,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar10 != '\0') {
        pTVar23 = pTStack_138;
      }
    }
    __this_05 = (System_String_o **)pTVar23;
    bVar10 = System_String__op_Equality((System_String_o *)pTVar23,"1",(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    if (pTVar23 != (TMPro_TMP_Text_o *)0x0) {
      System_String__Equals_3af4de0((System_String_o *)pTVar23,"true",5,(MethodInfo *)0x0);
      return;
    }
  }
label_03b462ad:
  il2cpp_runtime_helper_022b2c90();
  __this_06 = (MethodInfo_255AB70 **)__this_05;
  if (g_data_057a9ca2 == '\0') {
    __this_06 = &MethodInfo_Button_GetComponentsInChildren_Button;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca2 = '\x01';
  }
  if (((TMPro_TMP_Text_o *)__this_05 != (TMPro_TMP_Text_o *)0x0) &&
     (pSVar26 = UnityEngine_GameObject__GetComponentsInChildren_object_
                          ((UnityEngine_GameObject_o *)__this_05,1,MethodInfo_Button_GetComponentsInChildren_Button),
     __this_06 = (MethodInfo_255AB70 **)__this_05, pSVar26 != (System_Object_array *)0x0)) {
    uVar11 = (uint)pSVar26->max_length;
    if (0 < (int)uVar11) {
      uVar31 = 0;
      do {
        if (uVar11 <= uVar31) {
          il2cpp_runtime_helper_022b2ca0();
          __this_06 = (MethodInfo_255AB70 **)__this_05;
          goto label_03b46348;
        }
        __this_06 = (MethodInfo_255AB70 **)(TMPro_TMP_Text_o *)0x0;
        if ((UnityEngine_Component_o *)pSVar26->m_Items[(int)uVar31] == (UnityEngine_Component_o *)0x0)
        goto label_03b46348;
        pMVar32 = (MethodInfo *)0x0;
        __this_05 = (System_String_o **)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pSVar26->m_Items[(int)uVar31],(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth
                  ((UnityEngine_GameObject_o *)__this_05,pMVar32);
        uVar31 = uVar31 + 1;
        uVar11 = (uint)pSVar26->max_length;
      } while ((int)uVar31 < (int)uVar11);
    }
    return;
  }
label_03b46348:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ca1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9ca1 = '\x01';
  }
  pGVar27 = (Gilzoide_FlexUi_FlexLayout_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_06,(MethodInfo *)0x0);
  pGVar28 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  if ((pGVar27 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
     (pGVar28 = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar27->klass == TypeInfo_RectTransform)) {
    pGVar28 = pGVar27;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar27 = pGVar28;
  bVar10 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pGVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return;
  }
  if (pGVar28 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    pGVar27 = (Gilzoide_FlexUi_FlexLayout_o *)
              UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar28,(MethodInfo *)0x0);
    rect_00 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if ((pGVar27 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
       (rect_00 = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar27->klass == TypeInfo_RectTransform)) {
      rect_00 = pGVar27;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)rect_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar10 != '\0') {
      UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
                ((UnityEngine_RectTransform_o *)pGVar28,(MethodInfo *)0x0);
      return;
    }
    pGVar27 = rect_00;
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
              ((UnityEngine_RectTransform_o *)rect_00,(MethodInfo *)0x0);
    if (rect_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGVar28 = (Gilzoide_FlexUi_FlexLayout_o *)
                UnityEngine_Component__GetComponentInParent_object_
                          ((UnityEngine_Component_o *)rect_00,MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar27 = pGVar28;
      bVar10 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pGVar28,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 != '\0') {
        if (pGVar28 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b464eb;
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(pGVar28,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                ((UnityEngine_RectTransform_o *)rect_00,(MethodInfo *)0x0);
      return;
    }
  }
label_03b464eb:
  il2cpp_runtime_helper_022b2c90();
  if (pGVar27 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    System_String__IsNullOrEmpty((System_String_o *)(pGVar27->fields).m_CachedPtr,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$Refresh
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3b44d20

void Gisketch_Aottg2UI_State_GisketchUIBinding__Refresh
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  System_String_o *pSVar3;
  System_Collections_Generic_Dictionary_object__object__o *pSVar4;
  DG_Tweening_Tween_o *t;
  UnityEngine_UI_Selectable_o *pUVar5;
  undefined8 uVar6;
  bool_conflict bVar7;
  uint uVar8;
  TMPro_TextMeshProUGUI_o *in_RAX;
  TMPro_TextMeshProUGUI_o *pTVar9;
  TMPro_TextMeshProUGUI_o *pTVar10;
  UnityEngine_GameObject_o *root;
  UnityEngine_Sprite_o *value;
  System_Object_array *pSVar11;
  System_Delegate_o *value_00;
  System_Delegate_o *pSVar12;
  uint uVar13;
  MethodInfo *method_00;
  long lVar14;
  MethodInfo *pMVar15;
  TMPro_TextMeshProUGUI_o *__this_00;
  System_Delegate_o *source;
  bool bVar16;
  TMPro_TextMeshProUGUI_o *local_38;
  
  local_38 = in_RAX;
  if (g_data_057a9c9f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponentInChildren_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_GetComponent_Image);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Selectable_GetComponentsInChildren_Selectable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9c9f = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    return;
  }
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    return;
  }
  if ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    return;
  }
  __this_00 = (TMPro_TextMeshProUGUI_o *)(pGVar1->fields).text;
  bVar7 = System_String__IsNullOrEmpty((System_String_o *)__this_00,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pTVar9 = (TMPro_TextMeshProUGUI_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) {
      pTVar9 = (TMPro_TextMeshProUGUI_o *)
               UnityEngine_Component__GetComponentInChildren_object__24e7d50
                         ((UnityEngine_Component_o *)__this,MethodInfo_TextMeshProUGUI_GetComponentInChildren_TextMeshProUGUI);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = pTVar9;
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') goto label_03b44f0b;
    pGVar1 = (__this->fields)._definition;
    if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) &&
       (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0)) {
      pGVar2 = (__this->fields)._state;
      pSVar3 = (pGVar1->fields).text;
      __this_00 = pTVar9;
      pTVar10 = (TMPro_TextMeshProUGUI_o *)(*(pTVar9->klass->vtable)._65_get_text.methodPtr)();
      if (pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        if (g_data_057a9cac == '\0') {
          il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
          g_data_057a9cac = '\x01';
        }
        local_38 = (TMPro_TextMeshProUGUI_o *)0x0;
        bVar7 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar2->fields)._values;
          __this_00 = (TMPro_TextMeshProUGUI_o *)0x0;
          if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_03b4514d;
          bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                            (pSVar4,(Il2CppObject *)pSVar3,(Il2CppObject **)&local_38,MethodInfo_Boolean_TryGetValue);
          if ((char)bVar7 != '\0') {
            pTVar10 = local_38;
          }
        }
        (*(pTVar9->klass->vtable)._66_set_text.methodPtr)
                  (pTVar9,pTVar10,(pTVar9->klass->vtable)._66_set_text.method);
        pMVar15 = (MethodInfo *)0x0;
        root = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth(root,pMVar15);
        __this_00 = (TMPro_TextMeshProUGUI_o *)__this;
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight(__this,pTVar9,method_00);
        goto label_03b44f0b;
      }
    }
  }
  else {
label_03b44f0b:
    pGVar1 = (__this->fields)._definition;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      __this_00 = (TMPro_TextMeshProUGUI_o *)(pGVar1->fields).sprite;
      bVar7 = System_String__IsNullOrEmpty((System_String_o *)__this_00,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        pTVar9 = (TMPro_TextMeshProUGUI_o *)
                 UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_Image_GetComponent_Image);
        if (pTVar9 == (TMPro_TextMeshProUGUI_o *)0x0) {
          pTVar9 = (TMPro_TextMeshProUGUI_o *)
                   UnityEngine_Component__GetComponentInChildren_object_
                             ((UnityEngine_Component_o *)__this,1,MethodInfo_Image_GetComponentInChildren_Image);
        }
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this_00 = pTVar9;
        bVar7 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)pTVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          pGVar1 = (__this->fields)._definition;
          if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) &&
             (pGVar2 = (__this->fields)._state, pGVar2 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0)) {
            pSVar3 = (pGVar1->fields).sprite;
            pTVar10 = (TMPro_TextMeshProUGUI_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            if (g_data_057a9cac == '\0') {
              il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
              g_data_057a9cac = '\x01';
            }
            local_38 = (TMPro_TextMeshProUGUI_o *)0x0;
            bVar7 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
            __this_00 = pTVar10;
            if ((char)bVar7 == '\0') {
              pSVar4 = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar2->fields)._values;
              __this_00 = (TMPro_TextMeshProUGUI_o *)0x0;
              if (pSVar4 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_03b4514d;
              bVar7 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                                (pSVar4,(Il2CppObject *)pSVar3,(Il2CppObject **)&local_38,MethodInfo_Boolean_TryGetValue);
              __this_00 = pTVar10;
              if ((char)bVar7 != '\0') {
                __this_00 = local_38;
              }
            }
            if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load
                              ((System_String_o *)__this_00,(MethodInfo *)0x0);
            if (pTVar9 != (TMPro_TextMeshProUGUI_o *)0x0) {
              UnityEngine_UI_Image__set_sprite((UnityEngine_UI_Image_o *)pTVar9,value,(MethodInfo *)0x0);
              __this_00 = pTVar9;
              goto label_03b4504f;
            }
          }
          goto label_03b4514d;
        }
      }
label_03b4504f:
      pGVar1 = (__this->fields)._definition;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
        __this_00 = (TMPro_TextMeshProUGUI_o *)(pGVar1->fields).visible;
        pMVar15 = (MethodInfo *)0x0;
        bVar7 = System_String__IsNullOrEmpty((System_String_o *)__this_00,(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          __this_00 = (TMPro_TextMeshProUGUI_o *)__this;
          Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility(__this,pMVar15);
        }
        pGVar1 = (__this->fields)._definition;
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
          bVar7 = System_String__IsNullOrEmpty((pGVar1->fields).enabled,(MethodInfo *)0x0);
          if ((char)bVar7 != '\0') {
            return;
          }
          __this_00 = (TMPro_TextMeshProUGUI_o *)__this;
          pSVar11 = UnityEngine_Component__GetComponentsInChildren_object_
                              ((UnityEngine_Component_o *)__this,1,MethodInfo_Selectable_GetComponentsInChildren_Selectable);
          if (pSVar11 != (System_Object_array *)0x0) {
            if (pSVar11->max_length == 0) {
              bVar16 = true;
              pMVar15 = (MethodInfo *)(__this->fields)._definition;
            }
            else {
              if ((int)pSVar11->max_length == 0) goto label_03b45152;
              if (pSVar11->m_Items[0] == (Il2CppObject *)0x0) goto label_03b4514d;
              bVar16 = *(char *)&pSVar11->m_Items[0][0xd].monitor != '\0';
              pMVar15 = (MethodInfo *)(__this->fields)._definition;
            }
            if ((pMVar15 != (MethodInfo *)0x0) &&
               (__this_00 = (TMPro_TextMeshProUGUI_o *)(__this->fields)._state,
               __this_00 != (TMPro_TextMeshProUGUI_o *)0x0)) {
              uVar8 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                                ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_00,
                                 (System_String_o *)pMVar15->return_type,(uint)bVar16,pMVar15);
              uVar13 = (uint)pSVar11->max_length;
              if (0 < (int)uVar13) {
                lVar14 = 0;
                do {
                  if (uVar13 <= (uint)lVar14) goto label_03b45152;
                  __this_00 = (TMPro_TextMeshProUGUI_o *)pSVar11->m_Items[lVar14];
                  if (__this_00 == (TMPro_TextMeshProUGUI_o *)0x0) goto label_03b4514d;
                  UnityEngine_UI_Selectable__set_interactable
                            ((UnityEngine_UI_Selectable_o *)__this_00,uVar8 & 0xff,(MethodInfo *)0x0);
                  uVar13 = (uint)pSVar11->max_length;
                  lVar14 = lVar14 + 1;
                } while ((int)lVar14 < (int)uVar13);
              }
              return;
            }
          }
        }
      }
    }
  }
label_03b4514d:
  il2cpp_runtime_helper_022b2c90();
label_03b45152:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057a9c9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnStateChanged);
    g_data_057a9c9d = '\x01';
  }
  t = *(DG_Tweening_Tween_o **)&(__this_00->fields).m_RaycastTarget;
  if (t != (DG_Tweening_Tween_o *)0x0) {
    DG_Tweening_TweenExtensions__Kill(t,0,(MethodInfo *)0x0);
  }
  pUVar5 = *(UnityEngine_UI_Selectable_o **)&(__this_00->fields).m_SkipLayoutUpdate;
  if (pUVar5 != (UnityEngine_UI_Selectable_o *)0x0) {
    value_00 = (System_Delegate_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
    System_Action_object____ctor();
    if (g_data_057a9ca9 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
      g_data_057a9ca9 = '\x01';
    }
    source = (System_Delegate_o *)(pUVar5->fields).m_CancellationTokenSource;
    do {
      pSVar12 = System_Delegate__Remove(source,value_00,(MethodInfo *)0x0);
      uVar6 = TypeInfo_Action_string;
      lVar14 = 0;
      if ((pSVar12 != (System_Delegate_o *)0x0) &&
         (lVar14 = il2cpp_runtime_helper_023051f0(pSVar12,TypeInfo_Action_string), lVar14 == 0)) {
        il2cpp_runtime_helper_022b2fd0(pSVar12,uVar6);
        return;
      }
      pSVar12 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(&(pUVar5->fields).m_CancellationTokenSource,lVar14,source);
      bVar16 = source != pSVar12;
      source = pSVar12;
    } while (bVar16);
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshVisibility
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3b45d60

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibility
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *pGVar1;
  System_String_o *key;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  char cVar3;
  uint uVar4;
  bool_conflict bVar5;
  bool_conflict bVar6;
  Gisketch_Aottg2UI_State_GisketchUIBinding_o *pGVar7;
  UnityEngine_GameObject_o *pUVar8;
  DG_Tweening_Tween_o *pDVar9;
  DG_Tweening_TweenCallback_o *action;
  undefined8 *puVar10;
  System_Object_array *pSVar11;
  Gilzoide_FlexUi_FlexLayout_o *pGVar12;
  Gilzoide_FlexUi_FlexLayout_o *pGVar13;
  MethodInfo *in_RCX;
  char extraout_DL;
  byte bVar14;
  uint uVar15;
  Gisketch_Aottg2UI_State_GisketchUIState_o *unaff_RBX;
  Gisketch_Aottg2UI_State_GisketchUIBinding_o *a;
  MethodInfo *pMVar16;
  Gisketch_Aottg2UI_State_GisketchUIBinding_o *pGVar17;
  DG_Tweening_Tween_o **unaff_R14;
  Gilzoide_FlexUi_FlexLayout_o *rect;
  Gisketch_Aottg2UI_State_GisketchUIBinding_o *pGStack_48;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGStack_40;
  DG_Tweening_Tween_o **ppDStack_38;
  Gisketch_Aottg2UI_State_GisketchUIBinding_o *pGStack_30;
  
  pGVar17 = __this;
  if (g_data_057a9ca0 == '\0') {
    pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45d7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45d97;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshVisibility_b__14_0);
    pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45da3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    pGVar17 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)&MethodInfo_Tween_OnComplete_Tween;
    pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45daf;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca0 = '\x01';
  }
  pGVar1 = (__this->fields)._definition;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
    unaff_RBX = (__this->fields)._state;
    key = (pGVar1->fields).visible;
    method = (MethodInfo *)0x0;
    pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45dd5;
    pGVar17 = __this;
    pGVar7 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)
             UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (pGVar7 != (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x0) {
      method = (MethodInfo *)0x0;
      pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45de8;
      uVar4 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pGVar7,(MethodInfo *)0x0);
      pGVar17 = pGVar7;
      if (unaff_RBX != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45dff;
        uVar4 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool(unaff_RBX,key,uVar4 & 0xff,in_RCX);
        unaff_RBX = (Gisketch_Aottg2UI_State_GisketchUIState_o *)(ulong)uVar4;
        bVar14 = (byte)uVar4;
        if ((char)(__this->fields)._visibilityInitialized == '\0') {
          method = (MethodInfo *)0x0;
          pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45f47;
          pGVar17 = __this;
          pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
            pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45f5a;
            bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
            *(undefined1 *)&(__this->fields)._visibilityInitialized = 1;
            *(byte *)((long)&(__this->fields)._visibilityInitialized + 1) = bVar14;
            method = (MethodInfo *)0x0;
            pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45f6f;
            pGVar17 = __this;
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45f85;
              UnityEngine_GameObject__SetActive(pUVar8,uVar4 & 0xff,(MethodInfo *)0x0);
              if (bVar14 == 0) {
                return;
              }
              pMVar16 = (MethodInfo *)0x0;
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45f97;
              pUVar8 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45f9f;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar8,pMVar16);
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45fa7;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,pMVar16);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45fbf;
                il2cpp_runtime_helper_02337ed0();
              }
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45fc6;
              bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                return;
              }
              if ((char)bVar5 == '\x01') {
                return;
              }
              pGVar2 = (__this->fields)._enter;
              if (pGVar2 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
                return;
              }
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45ff0;
              bVar5 = System_String__IsNullOrEmpty((pGVar2->fields).preset,(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') {
                return;
              }
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b46002;
              pUVar8 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pGVar2 = (__this->fields)._enter;
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b46021;
                il2cpp_runtime_helper_02337ed0();
              }
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b46036;
              pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                 (pUVar8,pGVar2,1,0,(MethodInfo *)0x0);
              (__this->fields)._visibilityTween = pDVar9;
              goto label_03b46041;
            }
          }
        }
        else {
          if ((uint)*(byte *)((long)&(__this->fields)._visibilityInitialized + 1) == (uVar4 & 0xff)) {
            method = (MethodInfo *)0x0;
            pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45e22;
            pGVar17 = __this;
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar8 == (UnityEngine_GameObject_o *)0x0) goto label_03b46192;
            pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45e35;
            bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar8,(MethodInfo *)0x0);
            if ((byte)((byte)bVar5 ^ bVar14) != 1) {
              return;
            }
          }
          *(byte *)((long)&(__this->fields)._visibilityInitialized + 1) = bVar14;
          unaff_R14 = &(__this->fields)._visibilityTween;
          pDVar9 = (__this->fields)._visibilityTween;
          if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
            pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45e59;
            DG_Tweening_TweenExtensions__Kill(pDVar9,0,(MethodInfo *)0x0);
          }
          *unaff_R14 = (DG_Tweening_Tween_o *)0x0;
          pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45e6a;
          il2cpp_runtime_helper_022b4080(unaff_R14);
          if (bVar14 == 0) {
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b46156;
              il2cpp_runtime_helper_02337ed0();
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b4615d;
              bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar3 = (char)bVar5;
            }
            else {
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b46071;
              bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar3 = (char)bVar5;
            }
            if ((cVar3 != '\0') &&
               (pGVar2 = (__this->fields)._exit,
               pGVar2 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) {
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b46091;
              bVar5 = System_String__IsNullOrEmpty((pGVar2->fields).preset,(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b460a3;
                pUVar8 = UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                pGVar2 = (__this->fields)._exit;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b460c2;
                  il2cpp_runtime_helper_02337ed0();
                }
                pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b460d4;
                pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                   (pUVar8,pGVar2,0,0,(MethodInfo *)0x0);
                *unaff_R14 = pDVar9;
                pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b460e2;
                il2cpp_runtime_helper_022b4080(unaff_R14);
                pDVar9 = *unaff_R14;
                unaff_RBX = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
                if (pDVar9 != (DG_Tweening_Tween_o *)0x0) {
                  pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b460f9;
                  action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                  pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b46113;
                  DG_Tweening_TweenCallback___ctor();
                  DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                            ((Il2CppObject *)pDVar9,action,MethodInfo_Tween_OnComplete_Tween);
                  return;
                }
              }
            }
            method = (MethodInfo *)0x0;
            pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b4616f;
            pGVar17 = __this;
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              pMVar16 = (MethodInfo *)0x0;
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b46180;
              UnityEngine_GameObject__SetActive(pUVar8,0,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,pMVar16);
              return;
            }
          }
          else {
            method = (MethodInfo *)0x0;
            pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45e7c;
            pGVar17 = __this;
            pUVar8 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45e94;
              UnityEngine_GameObject__SetActive(pUVar8,1,(MethodInfo *)0x0);
              pMVar16 = (MethodInfo *)0x0;
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45e9e;
              pUVar8 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45ea6;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar8,pMVar16);
              pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45eae;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,pMVar16);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b46137;
                il2cpp_runtime_helper_02337ed0();
                pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b4613e;
                bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                cVar3 = (char)bVar5;
              }
              else {
                pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45ecc;
                bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                cVar3 = (char)bVar5;
              }
              if ((cVar3 != '\0') &&
                 (pGVar2 = (__this->fields)._enter,
                 pGVar2 != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0)) {
                pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45eec;
                bVar5 = System_String__IsNullOrEmpty((pGVar2->fields).preset,(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') {
                  pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45efe;
                  pUVar8 = UnityEngine_Component__get_gameObject
                                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
                  pGVar2 = (__this->fields)._enter;
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45f1d;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b45f32;
                  pDVar9 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                     (pUVar8,pGVar2,1,0,(MethodInfo *)0x0);
                  *unaff_R14 = pDVar9;
label_03b46041:
                  il2cpp_runtime_helper_022b4080(&(__this->fields)._visibilityTween,pDVar9);
                  return;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
label_03b46192:
  pGStack_30 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x3b46197;
  il2cpp_runtime_helper_022b2c90();
  pGVar7 = pGVar17;
  pGStack_40 = unaff_RBX;
  ppDStack_38 = unaff_R14;
  pGStack_30 = __this;
  if (g_data_057a9cad == '\0') {
    il2cpp_runtime_helper_023445d0(&"false");
    il2cpp_runtime_helper_023445d0(&"true");
    pGVar7 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)&"1";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cad = '\x01';
  }
  if (extraout_DL == '\0') {
    puVar10 = &"false";
  }
  else {
    puVar10 = &"true";
  }
  if (pGVar17 != (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x0) {
    a = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)*puVar10;
    if (g_data_057a9cac == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      g_data_057a9cac = '\x01';
    }
    pGStack_48 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x0;
    bVar5 = System_String__IsNullOrEmpty((System_String_o *)method,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar17->fields).m_CachedPtr;
      pGVar7 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x0;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_03b462ad;
      bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)method,(Il2CppObject **)&pGStack_48,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar5 != '\0') {
        a = pGStack_48;
      }
    }
    pGVar7 = a;
    bVar5 = System_String__op_Equality((System_String_o *)a,"1",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    if (a != (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x0) {
      System_String__Equals_3af4de0((System_String_o *)a,"true",5,(MethodInfo *)0x0);
      return;
    }
  }
label_03b462ad:
  il2cpp_runtime_helper_022b2c90();
  pGVar17 = pGVar7;
  if (g_data_057a9ca2 == '\0') {
    pGVar17 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)&MethodInfo_Button_GetComponentsInChildren_Button;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca2 = '\x01';
  }
  if ((pGVar7 != (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x0) &&
     (pSVar11 = UnityEngine_GameObject__GetComponentsInChildren_object_
                          ((UnityEngine_GameObject_o *)pGVar7,1,MethodInfo_Button_GetComponentsInChildren_Button), pGVar17 = pGVar7,
     pSVar11 != (System_Object_array *)0x0)) {
    uVar4 = (uint)pSVar11->max_length;
    if (0 < (int)uVar4) {
      uVar15 = 0;
      do {
        if (uVar4 <= uVar15) {
          il2cpp_runtime_helper_022b2ca0();
          pGVar17 = pGVar7;
          goto label_03b46348;
        }
        pGVar17 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)0x0;
        if ((UnityEngine_Component_o *)pSVar11->m_Items[(int)uVar15] == (UnityEngine_Component_o *)0x0)
        goto label_03b46348;
        pMVar16 = (MethodInfo *)0x0;
        pGVar7 = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)
                 UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)pSVar11->m_Items[(int)uVar15],(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth
                  ((UnityEngine_GameObject_o *)pGVar7,pMVar16);
        uVar15 = uVar15 + 1;
        uVar4 = (uint)pSVar11->max_length;
      } while ((int)uVar15 < (int)uVar4);
    }
    return;
  }
label_03b46348:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ca1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9ca1 = '\x01';
  }
  pGVar12 = (Gilzoide_FlexUi_FlexLayout_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar17,(MethodInfo *)0x0);
  pGVar13 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  if ((pGVar12 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
     (pGVar13 = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar12->klass == TypeInfo_RectTransform)) {
    pGVar13 = pGVar12;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar12 = pGVar13;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (pGVar13 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    pGVar12 = (Gilzoide_FlexUi_FlexLayout_o *)
              UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar13,(MethodInfo *)0x0);
    rect = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if ((pGVar12 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
       (rect = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar12->klass == TypeInfo_RectTransform)) {
      rect = pGVar12;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar5 != '\0') {
      UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
                ((UnityEngine_RectTransform_o *)pGVar13,(MethodInfo *)0x0);
      return;
    }
    pGVar12 = rect;
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
              ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
    if (rect != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGVar13 = (Gilzoide_FlexUi_FlexLayout_o *)
                UnityEngine_Component__GetComponentInParent_object_
                          ((UnityEngine_Component_o *)rect,MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar12 = pGVar13;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (pGVar13 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b464eb;
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(pGVar13,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
      return;
    }
  }
label_03b464eb:
  il2cpp_runtime_helper_022b2c90();
  if (pGVar12 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    System_String__IsNullOrEmpty((System_String_o *)(pGVar12->fields).m_CachedPtr,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$HasMotion
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIBinding__HasMotion (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* motion, const MethodInfo* method);
// 0x3b464f0

bool_conflict
Gisketch_Aottg2UI_State_GisketchUIBinding__HasMotion
          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *motion,MethodInfo *method)

{
  uint uVar1;
  
  if (motion != (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
    uVar1 = System_String__IsNullOrEmpty((motion->fields).preset,(MethodInfo *)0x0);
    return uVar1 ^ 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshVisibilityLayout
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3b46350

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  Gilzoide_FlexUi_FlexLayout_o *pGVar2;
  Gilzoide_FlexUi_FlexLayout_o *pGVar3;
  Gilzoide_FlexUi_FlexLayout_o *rect;
  
  if (g_data_057a9ca1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9ca1 = '\x01';
  }
  pGVar2 = (Gilzoide_FlexUi_FlexLayout_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pGVar3 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  if ((pGVar2 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
     (pGVar3 = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar2->klass == TypeInfo_RectTransform)) {
    pGVar3 = pGVar2;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar2 = pGVar3;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  if (pGVar3 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    pGVar2 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar3,(MethodInfo *)0x0);
    rect = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if ((pGVar2 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
       (rect = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar2->klass == TypeInfo_RectTransform)) {
      rect = pGVar2;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar1 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar1 != '\0') {
      UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
                ((UnityEngine_RectTransform_o *)pGVar3,(MethodInfo *)0x0);
      return;
    }
    pGVar2 = rect;
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
              ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
    if (rect != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGVar3 = (Gilzoide_FlexUi_FlexLayout_o *)
               UnityEngine_Component__GetComponentInParent_object_
                         ((UnityEngine_Component_o *)rect,MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar2 = pGVar3;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (pGVar3 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b464eb;
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(pGVar3,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
      return;
    }
  }
label_03b464eb:
  il2cpp_runtime_helper_022b2c90();
  if (pGVar2 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    System_String__IsNullOrEmpty((System_String_o *)(pGVar2->fields).m_CachedPtr,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshDescendantButtonWidths
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b462c0

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  System_Object_array *pSVar3;
  Gilzoide_FlexUi_FlexLayout_o *pGVar4;
  Gilzoide_FlexUi_FlexLayout_o *pGVar5;
  uint uVar6;
  MethodInfo *method_00;
  UnityEngine_GameObject_o *__this;
  Gilzoide_FlexUi_FlexLayout_o *rect;
  
  __this = root;
  if (g_data_057a9ca2 == '\0') {
    __this = (UnityEngine_GameObject_o *)&MethodInfo_Button_GetComponentsInChildren_Button;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca2 = '\x01';
  }
  if ((root != (UnityEngine_GameObject_o *)0x0) &&
     (pSVar3 = UnityEngine_GameObject__GetComponentsInChildren_object_(root,1,MethodInfo_Button_GetComponentsInChildren_Button), __this = root,
     pSVar3 != (System_Object_array *)0x0)) {
    uVar1 = (uint)pSVar3->max_length;
    if (0 < (int)uVar1) {
      uVar6 = 0;
      do {
        if (uVar1 <= uVar6) {
          il2cpp_runtime_helper_022b2ca0();
          __this = root;
          goto label_03b46348;
        }
        __this = (UnityEngine_GameObject_o *)0x0;
        if ((UnityEngine_Component_o *)pSVar3->m_Items[(int)uVar6] == (UnityEngine_Component_o *)0x0)
        goto label_03b46348;
        method_00 = (MethodInfo *)0x0;
        root = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)pSVar3->m_Items[(int)uVar6],(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth(root,method_00);
        uVar6 = uVar6 + 1;
        uVar1 = (uint)pSVar3->max_length;
      } while ((int)uVar6 < (int)uVar1);
    }
    return;
  }
label_03b46348:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ca1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9ca1 = '\x01';
  }
  pGVar4 = (Gilzoide_FlexUi_FlexLayout_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pGVar5 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  if ((pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
     (pGVar5 = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar4->klass == TypeInfo_RectTransform)) {
    pGVar5 = pGVar4;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar4 = pGVar5;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (pGVar5 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    pGVar4 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar5,(MethodInfo *)0x0);
    rect = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if ((pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
       (rect = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar4->klass == TypeInfo_RectTransform)) {
      rect = pGVar4;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar2 != '\0') {
      UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
                ((UnityEngine_RectTransform_o *)pGVar5,(MethodInfo *)0x0);
      return;
    }
    pGVar4 = rect;
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
              ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
    if (rect != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGVar5 = (Gilzoide_FlexUi_FlexLayout_o *)
               UnityEngine_Component__GetComponentInParent_object_
                         ((UnityEngine_Component_o *)rect,MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar4 = pGVar5;
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (pGVar5 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b464eb;
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(pGVar5,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
      return;
    }
  }
label_03b464eb:
  il2cpp_runtime_helper_022b2c90();
  if (pGVar4 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    System_String__IsNullOrEmpty((System_String_o *)(pGVar4->fields).m_CachedPtr,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshButtonWidth
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth (UnityEngine_GameObject_o* root, const MethodInfo* method);
// 0x3b45590

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth
               (UnityEngine_GameObject_o *root,MethodInfo *method)

{
  UnityEngine_RectOffset_o *__this;
  UnityEngine_Events_UnityAction_o *pUVar1;
  UnityEngine_Material_o *pUVar2;
  System_String_o *key;
  long lVar3;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar4;
  Il2CppObject *t;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined4 uVar5;
  undefined4 uVar6;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  int32_t iVar10;
  float fVar11;
  bool_conflict bVar12;
  TMPro_TMP_Text_o *pTVar13;
  TMPro_TMP_Text_o *pTVar14;
  UnityEngine_GameObject_o *pUVar15;
  System_String_o *pSVar16;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar17;
  UnityEngine_Object_o *__this_01;
  UnityEngine_RectTransform_o *pUVar18;
  Gilzoide_FlexUi_Yoga_YGValue_Fields value;
  DG_Tweening_Tween_o *pDVar19;
  DG_Tweening_TweenCallback_o *action;
  System_String_o **ppSVar20;
  System_Object_array *pSVar21;
  Gilzoide_FlexUi_FlexLayout_o *pGVar22;
  Gilzoide_FlexUi_FlexLayout_o *pGVar23;
  System_String_o **in_RCX;
  Gilzoide_FlexUi_FlexLayout_c **ppGVar24;
  char extraout_DL;
  byte bVar25;
  uint uVar26;
  int index;
  TMPro_TMP_Text_o *unaff_RBP;
  MethodInfo *pMVar27;
  long *__this_02;
  UnityEngine_RectTransform_o *rect;
  MethodInfo_25F3760 **ppMVar28;
  System_String_o **__this_03;
  MethodInfo_255AB70 **__this_04;
  TMPro_TMP_Text_o *unaff_R12;
  int iVar29;
  ulong unaff_R14;
  Gilzoide_FlexUi_FlexLayout_o *rect_00;
  UnityEngine_Object_o *unaff_R15;
  UnityEngine_Vector2_o UVar30;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined1 auVar31 [16];
  undefined1 auVar32 [16];
  undefined4 extraout_XMM0_Dd;
  float fVar33;
  float fVar34;
  float fVar35;
  undefined4 uVar36;
  undefined4 uVar37;
  float fVar38;
  float fVar39;
  UnityEngine_Rect_o UVar40;
  TMPro_TMP_Text_o *pTStack_d8;
  TMPro_TMP_Text_o *pTStack_d0;
  TMPro_TMP_Text_o *pTStack_c8;
  TMPro_TMP_Text_o *pTStack_c0;
  undefined8 uStack_b8;
  TMPro_TMP_Text_o *pTStack_b0;
  TMPro_TMP_Text_o *pTStack_a8;
  TMPro_TMP_Text_o *pTStack_a0;
  TMPro_TMP_Text_o *pTStack_98;
  float fStack_90;
  float fStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  float fStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  TMPro_TMP_Text_o *pTStack_68;
  TMPro_TMP_Text_o *pTStack_60;
  ulong uStack_58;
  UnityEngine_Object_o *pUStack_50;
  float local_3c;
  TMPro_TMP_Text_o *local_38;
  undefined8 extraout_XMM0_Qb;
  
  __this_02 = (long *)root;
  if (g_data_057a9ca3 == '\0') {
    pUStack_50 = (UnityEngine_Object_o *)0x3b455b6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pUStack_50 = (UnityEngine_Object_o *)0x3b455c2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pUStack_50 = (UnityEngine_Object_o *)0x3b455ce;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponentInChildren_HorizontalL);
    pUStack_50 = (UnityEngine_Object_o *)0x3b455da;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    pUStack_50 = (UnityEngine_Object_o *)0x3b455e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStack_50 = (UnityEngine_Object_o *)0x3b455f2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    pUStack_50 = (UnityEngine_Object_o *)0x3b455fe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pUStack_50 = (UnityEngine_Object_o *)0x3b4560a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    __this_02 = &TypeInfo_YGValue;
    pUStack_50 = (UnityEngine_Object_o *)0x3b45616;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca3 = '\x01';
  }
  if (root != (UnityEngine_GameObject_o *)0x0) {
    pUStack_50 = (UnityEngine_Object_o *)0x3b45638;
    unaff_R15 = (UnityEngine_Object_o *)UnityEngine_GameObject__GetComponent_object_(root,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pUStack_50 = (UnityEngine_Object_o *)0x3b45652;
    unaff_R12 = (TMPro_TMP_Text_o *)
                UnityEngine_GameObject__GetComponentInChildren_object__255a400(root,1,MethodInfo_HorizontalLayoutGroup_GetComponentInChildren_HorizontalL);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_50 = (UnityEngine_Object_o *)0x3b4566d;
      il2cpp_runtime_helper_02337ed0();
    }
    pUStack_50 = (UnityEngine_Object_o *)0x3b45679;
    bVar8 = UnityEngine_Object__op_Equality(unaff_R15,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pUStack_50 = (UnityEngine_Object_o *)0x3b45695;
      il2cpp_runtime_helper_02337ed0();
    }
    method = (MethodInfo *)0x0;
    pUStack_50 = (UnityEngine_Object_o *)0x3b456a1;
    __this_02 = (long *)unaff_R12;
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if (unaff_R12 != (TMPro_TMP_Text_o *)0x0) {
      __this = (UnityEngine_RectOffset_o *)(unaff_R12->fields).m_Material;
      __this_02 = (long *)(TMPro_TMP_Text_o *)0x0;
      if (__this != (UnityEngine_RectOffset_o *)0x0) {
        unaff_R14 = 0;
        pUStack_50 = (UnityEngine_Object_o *)0x3b456da;
        local_38 = (TMPro_TMP_Text_o *)root;
        uVar9 = UnityEngine_RectOffset__get_horizontal(__this,(MethodInfo *)0x0);
        method = (MethodInfo *)0x0;
        pUStack_50 = (UnityEngine_Object_o *)0x3b456e6;
        __this_02 = (long *)unaff_R12;
        pTVar13 = (TMPro_TMP_Text_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)unaff_R12,(MethodInfo *)0x0)
        ;
        root = (UnityEngine_GameObject_o *)(ulong)uVar9;
        if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
          local_3c = (float)(int)uVar9;
          pTVar14 = (TMPro_TMP_Text_o *)0x0;
          do {
            method = (MethodInfo *)0x0;
            pUStack_50 = (UnityEngine_Object_o *)0x3b4574c;
            iVar10 = UnityEngine_Transform__get_childCount
                               ((UnityEngine_Transform_o *)pTVar13,(MethodInfo *)0x0);
            unaff_RBP = local_38;
            index = (int)pTVar14;
            iVar29 = (int)unaff_R14;
            if (iVar10 <= index) {
              if (1 < iVar29) {
                unaff_R14 = (ulong)(iVar29 - 1U);
                local_3c = local_3c +
                           (float)(int)(iVar29 - 1U) * *(float *)&(unaff_R12->fields).m_CanvasRenderer;
              }
              __this_02 = (long *)pTVar13;
              if (unaff_R15 == (UnityEngine_Object_o *)0x0) break;
              pUStack_50 = (UnityEngine_Object_o *)0x3b4587c;
              (*unaff_R15->klass[2]._1.events)(unaff_R15,unaff_R15->klass[2]._1.properties);
              pUStack_50 = (UnityEngine_Object_o *)0x3b4588f;
              auVar31._0_8_ =
                   (**(code **)&unaff_R15->klass[2]._1.this_arg.bits)
                             (unaff_R15,unaff_R15->klass[2]._1.element_class);
              auVar31._8_8_ = extraout_XMM0_Qb;
              if ((float)auVar31._0_8_ <= local_3c) {
                auVar32._4_12_ = auVar31._4_12_;
                auVar32._0_4_ = local_3c;
                auVar31._0_8_ = auVar32._0_8_;
              }
              pUStack_50 = (UnityEngine_Object_o *)0x3b458a8;
              (*(code *)unaff_R15->klass[2]._1.castClass)
                        (auVar31._0_8_,unaff_R15,unaff_R15->klass[2]._1.declaringType);
              pUStack_50 = (UnityEngine_Object_o *)0x3b458ba;
              root = (UnityEngine_GameObject_o *)
                     UnityEngine_GameObject__GetComponent_object_
                               ((UnityEngine_GameObject_o *)unaff_RBP,MethodInfo_FlexLayout_GetComponent_FlexLayout);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pUStack_50 = (UnityEngine_Object_o *)0x3b458d5;
                il2cpp_runtime_helper_02337ed0();
              }
              method = (MethodInfo *)0x0;
              pUStack_50 = (UnityEngine_Object_o *)0x3b458e1;
              __this_02 = (long *)root;
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                if ((TMPro_TMP_Text_o *)root == (TMPro_TMP_Text_o *)0x0) break;
                if (*(int *)((long)&(((TMPro_TMP_Text_o *)root)->fields).m_OnDirtyLayoutCallback + 4) != 2) {
                  if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                    pUStack_50 = (UnityEngine_Object_o *)0x3b4590c;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUStack_50 = (UnityEngine_Object_o *)0x3b45919;
                  GVar17 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(local_3c,(MethodInfo *)0x0);
                  pUStack_50 = (UnityEngine_Object_o *)0x3b45926;
                  Gilzoide_FlexUi_FlexLayout__set_Width
                            ((Gilzoide_FlexUi_FlexLayout_o *)root,GVar17,(MethodInfo *)0x0);
                }
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pUStack_50 = (UnityEngine_Object_o *)0x3b4593e;
                il2cpp_runtime_helper_02337ed0();
              }
              method = (MethodInfo *)0x0;
              pUStack_50 = (UnityEngine_Object_o *)0x3b4594a;
              __this_02 = (long *)root;
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                if ((TMPro_TMP_Text_o *)root == (TMPro_TMP_Text_o *)0x0) break;
                pUVar1 = (((TMPro_TMP_Text_o *)root)->fields).m_OnDirtyMaterialCallback;
                if (((ulong)pUVar1 >> 0x20 != 1) || (SUB84(pUVar1,0) < local_3c)) {
                  if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                    pUStack_50 = (UnityEngine_Object_o *)0x3b45992;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pUStack_50 = (UnityEngine_Object_o *)0x3b4599f;
                  GVar17 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(local_3c,(MethodInfo *)0x0);
                  pUStack_50 = (UnityEngine_Object_o *)0x3b459ac;
                  Gilzoide_FlexUi_FlexLayout__set_MinWidth
                            ((Gilzoide_FlexUi_FlexLayout_o *)root,GVar17,(MethodInfo *)0x0);
                }
              }
              pUStack_50 = (UnityEngine_Object_o *)0x3b459b6;
              pUVar18 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)unaff_RBP,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                pUStack_50 = (UnityEngine_Object_o *)0x3b459eb;
                il2cpp_runtime_helper_02337ed0();
              }
              if (pUVar18 == (UnityEngine_RectTransform_o *)0x0) {
                rect = (UnityEngine_RectTransform_o *)0x0;
              }
              else {
                rect = (UnityEngine_RectTransform_o *)0x0;
                if ((Gilzoide_FlexUi_FlexLayout_c *)pUVar18->klass == TypeInfo_RectTransform) {
                  rect = pUVar18;
                }
              }
              UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
              return;
            }
            method = (MethodInfo *)0x0;
            pUStack_50 = (UnityEngine_Object_o *)0x3b4575e;
            __this_02 = (long *)unaff_R12;
            pTVar13 = (TMPro_TMP_Text_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)unaff_R12,(MethodInfo *)0x0);
            unaff_RBP = pTVar14;
            if (pTVar13 == (TMPro_TMP_Text_o *)0x0) break;
            pUStack_50 = (UnityEngine_Object_o *)0x3b45773;
            method = (MethodInfo *)pTVar14;
            pTVar14 = (TMPro_TMP_Text_o *)
                      UnityEngine_Transform__GetChild
                                ((UnityEngine_Transform_o *)pTVar13,index,(MethodInfo *)0x0);
            __this_02 = (long *)pTVar13;
            if (pTVar14 == (TMPro_TMP_Text_o *)0x0) break;
            method = (MethodInfo *)0x0;
            pUStack_50 = (UnityEngine_Object_o *)0x3b45789;
            __this_02 = (long *)pTVar14;
            pUVar15 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar14,(MethodInfo *)0x0);
            root = (UnityEngine_GameObject_o *)pTVar14;
            if (pUVar15 == (UnityEngine_GameObject_o *)0x0) break;
            pUStack_50 = (UnityEngine_Object_o *)0x3b4579c;
            bVar8 = UnityEngine_GameObject__get_activeInHierarchy(pUVar15,(MethodInfo *)0x0);
            if ((char)bVar8 != '\0') {
              pUStack_50 = (UnityEngine_Object_o *)0x3b457b2;
              pTVar13 = (TMPro_TMP_Text_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pTVar14,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pUStack_50 = (UnityEngine_Object_o *)0x3b457cd;
                il2cpp_runtime_helper_02337ed0();
              }
              unaff_R14 = (ulong)(iVar29 + 1);
              method = (MethodInfo *)0x0;
              pUStack_50 = (UnityEngine_Object_o *)0x3b457dd;
              __this_02 = (long *)pTVar13;
              bVar8 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)pTVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                                );
              if ((char)bVar8 == '\0') {
                pUStack_50 = (UnityEngine_Object_o *)0x3b45712;
                pUVar18 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pTVar14,MethodInfo_RectTransform_GetComponent_RectTransform);
                pUStack_50 = (UnityEngine_Object_o *)0x3b4571c;
                fVar33 = UnityEngine_UI_LayoutUtility__GetPreferredWidth(pUVar18,(MethodInfo *)0x0);
              }
              else {
                if (pTVar13 == (TMPro_TMP_Text_o *)0x0) break;
                in_RCX = (System_String_o **)(pTVar13->klass->vtable)._106_ForceMeshUpdate.method;
                pUStack_50 = (UnityEngine_Object_o *)0x3b45806;
                (*(pTVar13->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar13,0,0);
                pUStack_50 = (UnityEngine_Object_o *)0x3b4581a;
                pSVar16 = (System_String_o *)
                          (*(pTVar13->klass->vtable)._65_get_text.methodPtr)
                                    (pTVar13,(pTVar13->klass->vtable)._65_get_text.method);
                pUStack_50 = (UnityEngine_Object_o *)0x3b45827;
                UVar30 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0(pTVar13,pSVar16,(MethodInfo *)0x0);
                fVar33 = UVar30.fields.x;
              }
              local_3c = local_3c + fVar33;
            }
            unaff_RBP = (TMPro_TMP_Text_o *)(ulong)(index + 1);
            method = (MethodInfo *)0x0;
            pUStack_50 = (UnityEngine_Object_o *)0x3b45739;
            __this_02 = (long *)unaff_R12;
            pTVar13 = (TMPro_TMP_Text_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)unaff_R12,(MethodInfo *)0x0);
            pTVar14 = unaff_RBP;
          } while (pTVar13 != (TMPro_TMP_Text_o *)0x0);
        }
      }
    }
  }
  pUStack_50 = (UnityEngine_Object_o *)0x3b45a0c;
  il2cpp_runtime_helper_022b2c90();
  pTStack_68 = (TMPro_TMP_Text_o *)root;
  pTStack_60 = unaff_R12;
  uStack_58 = unaff_R14;
  pUStack_50 = unaff_R15;
  if (g_data_057a9ca4 == '\0') {
    pTStack_98 = (TMPro_TMP_Text_o *)0x3b45a36;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    pTStack_98 = (TMPro_TMP_Text_o *)0x3b45a42;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pTStack_98 = (TMPro_TMP_Text_o *)0x3b45a4e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    pTStack_98 = (TMPro_TMP_Text_o *)0x3b45a5a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    pTStack_98 = (TMPro_TMP_Text_o *)0x3b45a66;
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    g_data_057a9ca4 = '\x01';
  }
  pSVar16 = (System_String_o *)0x0;
  pTStack_98 = (TMPro_TMP_Text_o *)0x3b45a77;
  pTVar13 = (TMPro_TMP_Text_o *)__this_02;
  __this_01 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_02,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Object_o *)0x0) {
    pTStack_98 = (TMPro_TMP_Text_o *)0x3b45a8a;
    pTVar13 = (TMPro_TMP_Text_o *)UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
    in_RCX = &"public-profile-hover-bio";
    pTStack_98 = (TMPro_TMP_Text_o *)0x3b45a9e;
    pSVar16 = "public-profile-hover-bio";
    bVar8 = System_String__op_Inequality((System_String_o *)pTVar13,"public-profile-hover-bio",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if ((TMPro_TMP_Text_o *)method != (TMPro_TMP_Text_o *)0x0) {
      pTStack_98 = (TMPro_TMP_Text_o *)0x3b45abe;
      TMPro_TMP_Text__set_maxVisibleLines((TMPro_TMP_Text_o *)method,5,(MethodInfo *)0x0);
      pTStack_98 = (TMPro_TMP_Text_o *)0x3b45acd;
      TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)method,1,(MethodInfo *)0x0);
      pTStack_98 = (TMPro_TMP_Text_o *)0x3b45ad7;
      root = (UnityEngine_GameObject_o *)
             TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)method,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pTStack_98 = (TMPro_TMP_Text_o *)0x3b45af3;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_String_o *)0x0;
      pTStack_98 = (TMPro_TMP_Text_o *)0x3b45aff;
      pTVar13 = (TMPro_TMP_Text_o *)root;
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar33 = 0.0;
      fVar35 = 0.0;
      uVar36 = 0;
      uVar37 = 0;
      if ((char)bVar8 == '\0') {
label_03b45b26:
        fStack_90 = fVar33;
        fStack_8c = fVar35;
        uStack_88 = uVar36;
        uStack_84 = uVar37;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pTStack_98 = (TMPro_TMP_Text_o *)0x3b45b3c;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar16 = (System_String_o *)0x0;
        pTStack_98 = (TMPro_TMP_Text_o *)0x3b45b48;
        pTVar13 = (TMPro_TMP_Text_o *)root;
        bVar8 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar33 = fStack_90;
        fVar11 = fStack_90;
        fVar35 = fStack_8c;
        fVar38 = fStack_8c;
        uVar36 = uStack_88;
        uVar5 = uStack_88;
        uVar37 = uStack_84;
        uVar6 = uStack_84;
        if ((char)bVar8 != '\0') {
          if ((TMPro_TMP_Text_o *)root == (TMPro_TMP_Text_o *)0x0) goto label_03b45d55;
          pTStack_98 = (TMPro_TMP_Text_o *)0x3b45b5f;
          pUVar18 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)root,(MethodInfo *)0x0);
          fVar33 = fStack_90;
          fVar11 = fStack_90;
          fVar35 = fStack_8c;
          fVar38 = fStack_8c;
          uVar36 = uStack_88;
          uVar5 = uStack_88;
          uVar37 = uStack_84;
          uVar6 = uStack_84;
          if ((pUVar18 != (UnityEngine_RectTransform_o *)0x0) &&
             (ppGVar24 = &TypeInfo_RectTransform, in_RCX = (System_String_o **)ppGVar24,
             (Gilzoide_FlexUi_FlexLayout_c *)pUVar18->klass == TypeInfo_RectTransform)) {
            pTStack_98 = (TMPro_TMP_Text_o *)0x3b45b85;
            UVar40 = UnityEngine_RectTransform__get_rect(pUVar18,(MethodInfo *)0x0);
            in_RCX = (System_String_o **)ppGVar24;
            fVar33 = UVar40.fields.m_Width;
            fVar11 = fStack_90;
            fVar35 = UVar40.fields.m_Height;
            fVar38 = fStack_8c;
            uVar5 = uStack_88;
            uVar6 = uStack_84;
          }
        }
      }
      else {
        if ((TMPro_TMP_Text_o *)root == (TMPro_TMP_Text_o *)0x0) goto label_03b45d55;
        pTStack_98 = (TMPro_TMP_Text_o *)0x3b45b19;
        UVar40 = UnityEngine_RectTransform__get_rect((UnityEngine_RectTransform_o *)root,(MethodInfo *)0x0);
        fVar33 = UVar40.fields.m_Width;
        fVar35 = UVar40.fields.m_Height;
        fVar11 = fStack_90;
        fVar38 = fStack_8c;
        uVar5 = uStack_88;
        uVar6 = uStack_84;
        if (fVar33 <= 1.0) goto label_03b45b26;
      }
      uStack_84 = uVar37;
      uStack_88 = uVar36;
      fStack_8c = fVar35;
      fStack_90 = fVar33;
      fVar33 = 24.0;
      if (1.0 < fStack_90) {
        pTStack_98 = (TMPro_TMP_Text_o *)0x3b45bc4;
        pSVar16 = (System_String_o *)
                  (*(((TMPro_TMP_Text_o *)method)->klass->vtable)._65_get_text.methodPtr)
                            (method,(((TMPro_TMP_Text_o *)method)->klass->vtable)._65_get_text.method);
        pTStack_98 = (TMPro_TMP_Text_o *)0x3b45bd8;
        UVar30 = TMPro_TMP_Text__GetPreferredValues_4c70170
                           ((TMPro_TMP_Text_o *)method,pSVar16,fStack_90,0.0,(MethodInfo *)0x0);
        fVar33 = UVar30.fields.y;
        fVar11 = fStack_90;
        fVar38 = fStack_8c;
        uVar5 = uStack_88;
        uVar6 = uStack_84;
      }
      uStack_84 = uVar6;
      uStack_88 = uVar5;
      fStack_8c = fVar38;
      fStack_90 = fVar11;
      pTStack_98 = (TMPro_TMP_Text_o *)0x3b45be1;
      fStack_90 = ceilf(fVar33);
      pTStack_98 = (TMPro_TMP_Text_o *)0x3b45bf7;
      fStack_8c = extraout_XMM0_Db;
      uStack_88 = extraout_XMM0_Dc;
      uStack_84 = extraout_XMM0_Dd;
      pTVar14 = (TMPro_TMP_Text_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_02,MethodInfo_FlexLayout_GetComponent_FlexLayout)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pTStack_98 = (TMPro_TMP_Text_o *)0x3b45c0c;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar16 = (System_String_o *)0x0;
      pTStack_98 = (TMPro_TMP_Text_o *)0x3b45c18;
      pTVar13 = pTVar14;
      bVar8 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pTVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        return;
      }
      root = (UnityEngine_GameObject_o *)0x0;
      if (pTVar14 != (TMPro_TMP_Text_o *)0x0) {
        fVar33 = 120.0;
        if (fStack_90 <= 120.0) {
          fVar33 = fStack_90;
        }
        fVar33 = (float)(~-(uint)(24.0 <= fStack_90) & 0x41c00000 | (uint)fVar33 & -(uint)(24.0 <= fStack_90))
        ;
        fVar35 = 0.0;
        uVar36 = 0;
        uVar37 = 0;
        pUVar1 = (pTVar14->fields).m_OnDirtyVertsCallback;
        if ((ulong)pUVar1 >> 0x20 == 1) {
          fVar11 = SUB84(pUVar1,0);
          if (g_data_057a68c8 == '\0') {
            fStack_8c = 0.0;
            uStack_88 = 0;
            uStack_84 = 0;
            uStack_7c = 0;
            uStack_78 = 0;
            uStack_74 = 0;
            pTStack_98 = (TMPro_TMP_Text_o *)0x3b45c92;
            fStack_90 = fVar33;
            fStack_80 = fVar11;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
            g_data_057a68c8 = '\x01';
            fVar33 = fStack_90;
            fVar35 = fStack_8c;
            uVar36 = uStack_88;
            uVar37 = uStack_84;
            fVar11 = fStack_80;
          }
          fVar38 = ABS(fVar11);
          if (ABS(fVar11) <= ABS(fVar33)) {
            fVar38 = ABS(fVar33);
          }
          fVar34 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
          fVar39 = fVar38 * 1e-06;
          if (fVar38 * 1e-06 <= fVar34) {
            fVar39 = fVar34;
          }
          if (ABS(fVar33 - fVar11) < fVar39) {
            return;
          }
        }
        if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
          pTStack_98 = (TMPro_TMP_Text_o *)0x3b45d0c;
          fStack_90 = fVar33;
          fStack_8c = fVar35;
          uStack_88 = uVar36;
          uStack_84 = uVar37;
          il2cpp_runtime_helper_02337ed0();
          fVar33 = fStack_90;
        }
        pTStack_98 = (TMPro_TMP_Text_o *)0x3b45d17;
        value = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
                Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar33,(MethodInfo *)0x0);
        pTStack_98 = (TMPro_TMP_Text_o *)0x3b45d24;
        Gilzoide_FlexUi_FlexLayout__set_Height
                  ((Gilzoide_FlexUi_FlexLayout_o *)pTVar14,(Gilzoide_FlexUi_Yoga_YGValue_o)value,
                   (MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                  ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)__this_02,(MethodInfo *)value);
        return;
      }
    }
  }
label_03b45d55:
  pTStack_98 = (TMPro_TMP_Text_o *)0x3b45d5a;
  uStack_b8 = il2cpp_runtime_helper_022b2c90();
  ppMVar28 = (MethodInfo_25F3760 **)pTVar13;
  pTStack_b0 = (TMPro_TMP_Text_o *)root;
  pTStack_a8 = (TMPro_TMP_Text_o *)__this_02;
  pTStack_a0 = (TMPro_TMP_Text_o *)method;
  pTStack_98 = unaff_RBP;
  if (g_data_057a9ca0 == '\0') {
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45d7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45d97;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshVisibility_b__14_0);
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45da3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    ppMVar28 = &MethodInfo_Tween_OnComplete_Tween;
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45daf;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca0 = '\x01';
  }
  pUVar2 = (pTVar13->fields).m_Material;
  if (pUVar2 != (UnityEngine_Material_o *)0x0) {
    root = *(UnityEngine_GameObject_o **)&(pTVar13->fields).m_SkipLayoutUpdate;
    key = pUVar2[1].monitor;
    pSVar16 = (System_String_o *)0x0;
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45dd5;
    ppMVar28 = (MethodInfo_25F3760 **)pTVar13;
    pTVar14 = (TMPro_TMP_Text_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar13,(MethodInfo *)0x0);
    if (pTVar14 != (TMPro_TMP_Text_o *)0x0) {
      pSVar16 = (System_String_o *)0x0;
      pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45de8;
      uVar9 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pTVar14,(MethodInfo *)0x0);
      ppMVar28 = (MethodInfo_25F3760 **)pTVar14;
      if ((TMPro_TMP_Text_o *)root != (TMPro_TMP_Text_o *)0x0) {
        pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45dff;
        uVar9 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                          ((Gisketch_Aottg2UI_State_GisketchUIState_o *)root,key,uVar9 & 0xff,
                           (MethodInfo *)in_RCX);
        root = (UnityEngine_GameObject_o *)(ulong)uVar9;
        bVar25 = (byte)uVar9;
        if (*(char *)&(pTVar13->fields).m_RaycastPadding.fields.x == '\0') {
          pSVar16 = (System_String_o *)0x0;
          pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45f47;
          ppMVar28 = (MethodInfo_25F3760 **)pTVar13;
          pUVar15 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pTVar13,(MethodInfo *)0x0);
          if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
            pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45f5a;
            bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar15,(MethodInfo *)0x0);
            *(undefined1 *)&(pTVar13->fields).m_RaycastPadding.fields.x = 1;
            *(byte *)((long)&(pTVar13->fields).m_RaycastPadding.fields.x + 1) = bVar25;
            pSVar16 = (System_String_o *)0x0;
            pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45f6f;
            ppMVar28 = (MethodInfo_25F3760 **)pTVar13;
            pUVar15 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar13,(MethodInfo *)0x0);
            if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45f85;
              UnityEngine_GameObject__SetActive(pUVar15,uVar9 & 0xff,(MethodInfo *)0x0);
              if (bVar25 == 0) {
                return;
              }
              pMVar27 = (MethodInfo *)0x0;
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45f97;
              pUVar15 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pTVar13,(MethodInfo *)0x0);
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45f9f;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar15,pMVar27);
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45fa7;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pTVar13,pMVar27);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45fbf;
                il2cpp_runtime_helper_02337ed0();
              }
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45fc6;
              bVar12 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if ((char)bVar12 == '\0') {
                return;
              }
              if ((char)bVar8 == '\x01') {
                return;
              }
              lVar3 = *(long *)&(pTVar13->fields).m_Color.fields;
              if (lVar3 == 0) {
                return;
              }
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45ff0;
              bVar8 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar3 + 0x10),(MethodInfo *)0x0);
              if ((char)bVar8 != '\0') {
                return;
              }
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b46002;
              pUVar15 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pTVar13,(MethodInfo *)0x0);
              pGVar4 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                        &(pTVar13->fields).m_Color.fields;
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                pTStack_c0 = (TMPro_TMP_Text_o *)0x3b46021;
                il2cpp_runtime_helper_02337ed0();
              }
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b46036;
              pDVar19 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                  (pUVar15,pGVar4,1,0,(MethodInfo *)0x0);
              *(DG_Tweening_Tween_o **)&(pTVar13->fields).m_RaycastTarget = pDVar19;
              goto label_03b46041;
            }
          }
        }
        else {
          if ((uint)*(byte *)((long)&(pTVar13->fields).m_RaycastPadding.fields.x + 1) == (uVar9 & 0xff)) {
            pSVar16 = (System_String_o *)0x0;
            pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45e22;
            ppMVar28 = (MethodInfo_25F3760 **)pTVar13;
            pUVar15 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar13,(MethodInfo *)0x0);
            if (pUVar15 == (UnityEngine_GameObject_o *)0x0) goto label_03b46192;
            pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45e35;
            bVar8 = UnityEngine_GameObject__get_activeSelf(pUVar15,(MethodInfo *)0x0);
            if ((byte)((byte)bVar8 ^ bVar25) != 1) {
              return;
            }
          }
          *(byte *)((long)&(pTVar13->fields).m_RaycastPadding.fields.x + 1) = bVar25;
          __this_02 = (long *)&(pTVar13->fields).m_RaycastTarget;
          pDVar19 = *(DG_Tweening_Tween_o **)&(pTVar13->fields).m_RaycastTarget;
          if (pDVar19 != (DG_Tweening_Tween_o *)0x0) {
            pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45e59;
            DG_Tweening_TweenExtensions__Kill(pDVar19,0,(MethodInfo *)0x0);
          }
          (pTVar13->fields).m_RaycastTarget = 0;
          (pTVar13->fields).m_RaycastTargetCache = 0;
          pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45e6a;
          il2cpp_runtime_helper_022b4080(__this_02);
          if (bVar25 == 0) {
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b46156;
              il2cpp_runtime_helper_02337ed0();
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b4615d;
              bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar7 = (char)bVar8;
            }
            else {
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b46071;
              bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar7 = (char)bVar8;
            }
            if ((cVar7 != '\0') && (lVar3 = *(long *)&(pTVar13->fields).m_Color.fields.b, lVar3 != 0)) {
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b46091;
              bVar8 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar3 + 0x10),(MethodInfo *)0x0);
              if ((char)bVar8 == '\0') {
                pTStack_c0 = (TMPro_TMP_Text_o *)0x3b460a3;
                pUVar15 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pTVar13,(MethodInfo *)0x0);
                pGVar4 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                          &(pTVar13->fields).m_Color.fields.b;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  pTStack_c0 = (TMPro_TMP_Text_o *)0x3b460c2;
                  il2cpp_runtime_helper_02337ed0();
                }
                pTStack_c0 = (TMPro_TMP_Text_o *)0x3b460d4;
                pDVar19 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                    (pUVar15,pGVar4,0,0,(MethodInfo *)0x0);
                *__this_02 = (long)pDVar19;
                pTStack_c0 = (TMPro_TMP_Text_o *)0x3b460e2;
                il2cpp_runtime_helper_022b4080(__this_02);
                t = (Il2CppObject *)*__this_02;
                root = (UnityEngine_GameObject_o *)0x0;
                if (t != (Il2CppObject *)0x0) {
                  pTStack_c0 = (TMPro_TMP_Text_o *)0x3b460f9;
                  action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                  pTStack_c0 = (TMPro_TMP_Text_o *)0x3b46113;
                  DG_Tweening_TweenCallback___ctor();
                  DG_Tweening_TweenSettingsExtensions__OnComplete_object_(t,action,MethodInfo_Tween_OnComplete_Tween);
                  return;
                }
              }
            }
            pSVar16 = (System_String_o *)0x0;
            pTStack_c0 = (TMPro_TMP_Text_o *)0x3b4616f;
            ppMVar28 = (MethodInfo_25F3760 **)pTVar13;
            pUVar15 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar13,(MethodInfo *)0x0);
            if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
              pMVar27 = (MethodInfo *)0x0;
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b46180;
              UnityEngine_GameObject__SetActive(pUVar15,0,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pTVar13,pMVar27);
              return;
            }
          }
          else {
            pSVar16 = (System_String_o *)0x0;
            pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45e7c;
            ppMVar28 = (MethodInfo_25F3760 **)pTVar13;
            pUVar15 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar13,(MethodInfo *)0x0);
            if (pUVar15 != (UnityEngine_GameObject_o *)0x0) {
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45e94;
              UnityEngine_GameObject__SetActive(pUVar15,1,(MethodInfo *)0x0);
              pMVar27 = (MethodInfo *)0x0;
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45e9e;
              pUVar15 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pTVar13,(MethodInfo *)0x0);
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45ea6;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar15,pMVar27);
              pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45eae;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pTVar13,pMVar27);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                pTStack_c0 = (TMPro_TMP_Text_o *)0x3b46137;
                il2cpp_runtime_helper_02337ed0();
                pTStack_c0 = (TMPro_TMP_Text_o *)0x3b4613e;
                bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                cVar7 = (char)bVar8;
              }
              else {
                pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45ecc;
                bVar8 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                cVar7 = (char)bVar8;
              }
              if ((cVar7 != '\0') && (lVar3 = *(long *)&(pTVar13->fields).m_Color.fields, lVar3 != 0)) {
                pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45eec;
                bVar8 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar3 + 0x10),(MethodInfo *)0x0);
                if ((char)bVar8 == '\0') {
                  pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45efe;
                  pUVar15 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pTVar13,(MethodInfo *)0x0);
                  pGVar4 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                            &(pTVar13->fields).m_Color.fields;
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45f1d;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45f32;
                  pDVar19 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                      (pUVar15,pGVar4,1,0,(MethodInfo *)0x0);
                  *__this_02 = (long)pDVar19;
label_03b46041:
                  il2cpp_runtime_helper_022b4080(&(pTVar13->fields).m_RaycastTarget,pDVar19);
                  return;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
label_03b46192:
  pTStack_c0 = (TMPro_TMP_Text_o *)0x3b46197;
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (System_String_o **)ppMVar28;
  pTStack_d0 = (TMPro_TMP_Text_o *)root;
  pTStack_c8 = (TMPro_TMP_Text_o *)__this_02;
  pTStack_c0 = pTVar13;
  if (g_data_057a9cad == '\0') {
    il2cpp_runtime_helper_023445d0(&"false");
    il2cpp_runtime_helper_023445d0(&"true");
    __this_03 = &"1";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cad = '\x01';
  }
  if (extraout_DL == '\0') {
    ppSVar20 = (System_String_o **)&"false";
  }
  else {
    ppSVar20 = &"true";
  }
  if ((TMPro_TMP_Text_o *)ppMVar28 != (TMPro_TMP_Text_o *)0x0) {
    pTVar13 = (TMPro_TMP_Text_o *)*ppSVar20;
    if (g_data_057a9cac == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      g_data_057a9cac = '\x01';
    }
    pTStack_d8 = (TMPro_TMP_Text_o *)0x0;
    bVar8 = System_String__IsNullOrEmpty(pSVar16,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (((TMPro_TMP_Text_o *)ppMVar28)->fields).m_CachedPtr;
      __this_03 = (System_String_o **)0x0;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_03b462ad;
      bVar8 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)pSVar16,(Il2CppObject **)&pTStack_d8,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar8 != '\0') {
        pTVar13 = pTStack_d8;
      }
    }
    __this_03 = (System_String_o **)pTVar13;
    bVar8 = System_String__op_Equality((System_String_o *)pTVar13,"1",(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      return;
    }
    if (pTVar13 != (TMPro_TMP_Text_o *)0x0) {
      System_String__Equals_3af4de0((System_String_o *)pTVar13,"true",5,(MethodInfo *)0x0);
      return;
    }
  }
label_03b462ad:
  il2cpp_runtime_helper_022b2c90();
  __this_04 = (MethodInfo_255AB70 **)__this_03;
  if (g_data_057a9ca2 == '\0') {
    __this_04 = &MethodInfo_Button_GetComponentsInChildren_Button;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca2 = '\x01';
  }
  if (((TMPro_TMP_Text_o *)__this_03 != (TMPro_TMP_Text_o *)0x0) &&
     (pSVar21 = UnityEngine_GameObject__GetComponentsInChildren_object_
                          ((UnityEngine_GameObject_o *)__this_03,1,MethodInfo_Button_GetComponentsInChildren_Button),
     __this_04 = (MethodInfo_255AB70 **)__this_03, pSVar21 != (System_Object_array *)0x0)) {
    uVar9 = (uint)pSVar21->max_length;
    if (0 < (int)uVar9) {
      uVar26 = 0;
      do {
        if (uVar9 <= uVar26) {
          il2cpp_runtime_helper_022b2ca0();
          __this_04 = (MethodInfo_255AB70 **)__this_03;
          goto label_03b46348;
        }
        __this_04 = (MethodInfo_255AB70 **)(TMPro_TMP_Text_o *)0x0;
        if ((UnityEngine_Component_o *)pSVar21->m_Items[(int)uVar26] == (UnityEngine_Component_o *)0x0)
        goto label_03b46348;
        pMVar27 = (MethodInfo *)0x0;
        __this_03 = (System_String_o **)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pSVar21->m_Items[(int)uVar26],(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth
                  ((UnityEngine_GameObject_o *)__this_03,pMVar27);
        uVar26 = uVar26 + 1;
        uVar9 = (uint)pSVar21->max_length;
      } while ((int)uVar26 < (int)uVar9);
    }
    return;
  }
label_03b46348:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ca1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9ca1 = '\x01';
  }
  pGVar22 = (Gilzoide_FlexUi_FlexLayout_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  pGVar23 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  if ((pGVar22 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
     (pGVar23 = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar22->klass == TypeInfo_RectTransform)) {
    pGVar23 = pGVar22;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar22 = pGVar23;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return;
  }
  if (pGVar23 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    pGVar22 = (Gilzoide_FlexUi_FlexLayout_o *)
              UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar23,(MethodInfo *)0x0);
    rect_00 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if ((pGVar22 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
       (rect_00 = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar22->klass == TypeInfo_RectTransform)) {
      rect_00 = pGVar22;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar8 != '\0') {
      UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
                ((UnityEngine_RectTransform_o *)pGVar23,(MethodInfo *)0x0);
      return;
    }
    pGVar22 = rect_00;
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
              ((UnityEngine_RectTransform_o *)rect_00,(MethodInfo *)0x0);
    if (rect_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGVar23 = (Gilzoide_FlexUi_FlexLayout_o *)
                UnityEngine_Component__GetComponentInParent_object_
                          ((UnityEngine_Component_o *)rect_00,MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar22 = pGVar23;
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar23,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (pGVar23 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b464eb;
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(pGVar23,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                ((UnityEngine_RectTransform_o *)rect_00,(MethodInfo *)0x0);
      return;
    }
  }
label_03b464eb:
  il2cpp_runtime_helper_022b2c90();
  if (pGVar22 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    System_String__IsNullOrEmpty((System_String_o *)(pGVar22->fields).m_CachedPtr,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$RefreshProfileHoverBioHeight
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, TMPro_TextMeshProUGUI_o* text, const MethodInfo* method);
// 0x3b45a10

void Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshProfileHoverBioHeight
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,TMPro_TextMeshProUGUI_o *text,
               MethodInfo *method)

{
  Gilzoide_FlexUi_FlexLayoutConfig_o *pGVar1;
  System_String_o *key;
  long lVar2;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar3;
  Il2CppObject *t;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  char cVar4;
  bool_conflict bVar5;
  float fVar6;
  bool_conflict bVar7;
  UnityEngine_Object_o *__this_01;
  Gilzoide_FlexUi_FlexLayout_o *pGVar8;
  UnityEngine_RectTransform_o *__this_02;
  System_String_o *pSVar9;
  Gilzoide_FlexUi_FlexLayout_o *pGVar10;
  Gilzoide_FlexUi_Yoga_YGValue_Fields GVar11;
  UnityEngine_GameObject_o *pUVar12;
  DG_Tweening_Tween_o *pDVar13;
  DG_Tweening_TweenCallback_o *action;
  System_String_o **ppSVar14;
  System_Object_array *pSVar15;
  System_String_o **in_RCX;
  Gilzoide_FlexUi_FlexLayout_c **ppGVar16;
  char extraout_DL;
  byte bVar17;
  Gilzoide_FlexUi_FlexLayout_o *unaff_RBX;
  MethodInfo *pMVar18;
  MethodInfo_25F3760 **ppMVar19;
  System_String_o **__this_03;
  MethodInfo_255AB70 **__this_04;
  Gilzoide_FlexUi_FlexLayout_o *rect;
  uint uVar20;
  UnityEngine_Vector2_o UVar21;
  float fVar22;
  uint uVar23;
  float fVar24;
  float fVar25;
  float fVar26;
  UnityEngine_Rect_o UVar27;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_90;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_88;
  Gisketch_Aottg2UI_State_GisketchUIBinding_o *pGStack_80;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_78;
  undefined8 uStack_70;
  Gilzoide_FlexUi_FlexLayout_o *pGStack_68;
  Gisketch_Aottg2UI_State_GisketchUIBinding_o *pGStack_60;
  TMPro_TextMeshProUGUI_o *pTStack_58;
  
  if (g_data_057a9ca4 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    g_data_057a9ca4 = '\x01';
  }
  pSVar9 = (System_String_o *)0x0;
  pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)__this;
  __this_01 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_01 != (UnityEngine_Object_o *)0x0) {
    pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)UnityEngine_Object__get_name(__this_01,(MethodInfo *)0x0);
    in_RCX = &"public-profile-hover-bio";
    pSVar9 = "public-profile-hover-bio";
    bVar5 = System_String__op_Inequality((System_String_o *)pGVar8,"public-profile-hover-bio",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    if (text != (TMPro_TextMeshProUGUI_o *)0x0) {
      TMPro_TMP_Text__set_maxVisibleLines((TMPro_TMP_Text_o *)text,5,(MethodInfo *)0x0);
      TMPro_TMP_Text__set_overflowMode((TMPro_TMP_Text_o *)text,1,(MethodInfo *)0x0);
      unaff_RBX = (Gilzoide_FlexUi_FlexLayout_o *)
                  TMPro_TMP_Text__get_rectTransform((TMPro_TMP_Text_o *)text,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_String_o *)0x0;
      pGVar8 = unaff_RBX;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar22 = 0.0;
      if ((char)bVar5 == '\0') {
label_03b45b26:
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_String_o *)0x0;
        pGVar8 = unaff_RBX;
        bVar5 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          if (unaff_RBX == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b45d55;
          __this_02 = (UnityEngine_RectTransform_o *)
                      UnityEngine_Transform__get_parent
                                ((UnityEngine_Transform_o *)unaff_RBX,(MethodInfo *)0x0);
          if ((__this_02 != (UnityEngine_RectTransform_o *)0x0) &&
             (ppGVar16 = &TypeInfo_RectTransform, in_RCX = (System_String_o **)ppGVar16,
             (Gilzoide_FlexUi_FlexLayout_c *)__this_02->klass == TypeInfo_RectTransform)) {
            UVar27 = UnityEngine_RectTransform__get_rect(__this_02,(MethodInfo *)0x0);
            fVar22 = UVar27.fields.m_Width;
            in_RCX = (System_String_o **)ppGVar16;
          }
        }
      }
      else {
        if (unaff_RBX == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b45d55;
        UVar27 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)unaff_RBX,(MethodInfo *)0x0);
        fVar22 = UVar27.fields.m_Width;
        if (fVar22 <= 1.0) goto label_03b45b26;
      }
      fVar6 = 24.0;
      if (1.0 < fVar22) {
        pSVar9 = (System_String_o *)
                 (*(text->klass->vtable)._65_get_text.methodPtr)
                           (text,(text->klass->vtable)._65_get_text.method);
        UVar21 = TMPro_TMP_Text__GetPreferredValues_4c70170
                           ((TMPro_TMP_Text_o *)text,pSVar9,fVar22,0.0,(MethodInfo *)0x0);
        fVar6 = UVar21.fields.y;
      }
      fVar22 = ceilf(fVar6);
      pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this,MethodInfo_FlexLayout_GetComponent_FlexLayout);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_String_o *)0x0;
      pGVar8 = pGVar10;
      bVar5 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)pGVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        return;
      }
      unaff_RBX = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
      if (pGVar10 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        fVar6 = 120.0;
        if (fVar22 <= 120.0) {
          fVar6 = fVar22;
        }
        uVar23 = (uint)fVar6 & -(uint)(24.0 <= fVar22);
        uVar20 = ~-(uint)(24.0 <= fVar22) & 0x41c00000;
        fVar22 = (float)(uVar20 | uVar23);
        GVar11 = (pGVar10->fields)._height.fields;
        if ((ulong)GVar11 >> 0x20 == 1) {
          fVar6 = GVar11.Value;
          if (g_data_057a68c8 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
            g_data_057a68c8 = '\x01';
          }
          fVar26 = ABS(fVar6);
          fVar24 = (float)(uVar20 | uVar23 & 0x7fffffff);
          if (fVar26 <= fVar24) {
            fVar26 = fVar24;
          }
          fVar25 = **(float **)(TypeInfo_Mathf + 0xb8) * 8.0;
          fVar24 = fVar26 * 1e-06;
          if (fVar26 * 1e-06 <= fVar25) {
            fVar24 = fVar25;
          }
          if (ABS(fVar22 - fVar6) < fVar24) {
            return;
          }
        }
        if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        GVar11 = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
                 Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar22,(MethodInfo *)0x0);
        Gilzoide_FlexUi_FlexLayout__set_Height
                  (pGVar10,(Gilzoide_FlexUi_Yoga_YGValue_o)GVar11,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,(MethodInfo *)GVar11);
        return;
      }
    }
  }
label_03b45d55:
  uStack_70 = il2cpp_runtime_helper_022b2c90();
  ppMVar19 = (MethodInfo_25F3760 **)pGVar8;
  pGStack_68 = unaff_RBX;
  pGStack_60 = __this;
  pTStack_58 = text;
  if (g_data_057a9ca0 == '\0') {
    pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45d7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45d97;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshVisibility_b__14_0);
    pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45da3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    ppMVar19 = &MethodInfo_Tween_OnComplete_Tween;
    pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45daf;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca0 = '\x01';
  }
  pGVar1 = (pGVar8->fields)._configuration;
  if (pGVar1 != (Gilzoide_FlexUi_FlexLayoutConfig_o *)0x0) {
    unaff_RBX = *(Gilzoide_FlexUi_FlexLayout_o **)&(pGVar8->fields)._positionTop.fields.Unit;
    key = *(System_String_o **)&(pGVar1->fields)._errata;
    pSVar9 = (System_String_o *)0x0;
    pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45dd5;
    ppMVar19 = (MethodInfo_25F3760 **)pGVar8;
    pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0);
    if (pGVar10 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pSVar9 = (System_String_o *)0x0;
      pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45de8;
      uVar20 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pGVar10,(MethodInfo *)0x0);
      ppMVar19 = (MethodInfo_25F3760 **)pGVar10;
      if (unaff_RBX != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
        pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45dff;
        uVar20 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                           ((Gisketch_Aottg2UI_State_GisketchUIState_o *)unaff_RBX,key,uVar20 & 0xff,
                            (MethodInfo *)in_RCX);
        unaff_RBX = (Gilzoide_FlexUi_FlexLayout_o *)(ulong)uVar20;
        bVar17 = (byte)uVar20;
        if ((char)(pGVar8->fields)._positionBottom.fields.Unit == '\0') {
          pSVar9 = (System_String_o *)0x0;
          pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45f47;
          ppMVar19 = (MethodInfo_25F3760 **)pGVar8;
          pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0)
          ;
          if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
            pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45f5a;
            bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
            *(undefined1 *)&(pGVar8->fields)._positionBottom.fields.Unit = 1;
            *(byte *)((long)&(pGVar8->fields)._positionBottom.fields.Unit + 1) = bVar17;
            pSVar9 = (System_String_o *)0x0;
            pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45f6f;
            ppMVar19 = (MethodInfo_25F3760 **)pGVar8;
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45f85;
              UnityEngine_GameObject__SetActive(pUVar12,uVar20 & 0xff,(MethodInfo *)0x0);
              if (bVar17 == 0) {
                return;
              }
              pMVar18 = (MethodInfo *)0x0;
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45f97;
              pUVar12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0);
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45f9f;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar12,pMVar18);
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45fa7;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pGVar8,pMVar18);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45fbf;
                il2cpp_runtime_helper_02337ed0();
              }
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45fc6;
              bVar7 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                return;
              }
              if ((char)bVar5 == '\x01') {
                return;
              }
              lVar2 = *(long *)&(pGVar8->fields)._positionType;
              if (lVar2 == 0) {
                return;
              }
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45ff0;
              bVar5 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar2 + 0x10),(MethodInfo *)0x0);
              if ((char)bVar5 != '\0') {
                return;
              }
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b46002;
              pUVar12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0);
              pGVar3 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)&(pGVar8->fields)._positionType;
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b46021;
                il2cpp_runtime_helper_02337ed0();
              }
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b46036;
              pDVar13 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                  (pUVar12,pGVar3,1,0,(MethodInfo *)0x0);
              *(DG_Tweening_Tween_o **)&(pGVar8->fields)._positionRight.fields.Unit = pDVar13;
              goto label_03b46041;
            }
          }
        }
        else {
          if ((uint)*(byte *)((long)&(pGVar8->fields)._positionBottom.fields.Unit + 1) == (uVar20 & 0xff)) {
            pSVar9 = (System_String_o *)0x0;
            pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45e22;
            ppMVar19 = (MethodInfo_25F3760 **)pGVar8;
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0);
            if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_03b46192;
            pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45e35;
            bVar5 = UnityEngine_GameObject__get_activeSelf(pUVar12,(MethodInfo *)0x0);
            if ((byte)((byte)bVar5 ^ bVar17) != 1) {
              return;
            }
          }
          *(byte *)((long)&(pGVar8->fields)._positionBottom.fields.Unit + 1) = bVar17;
          __this = (Gisketch_Aottg2UI_State_GisketchUIBinding_o *)&(pGVar8->fields)._positionRight.fields.Unit
          ;
          pDVar13 = *(DG_Tweening_Tween_o **)&(pGVar8->fields)._positionRight.fields.Unit;
          if (pDVar13 != (DG_Tweening_Tween_o *)0x0) {
            pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45e59;
            DG_Tweening_TweenExtensions__Kill(pDVar13,0,(MethodInfo *)0x0);
          }
          *(undefined8 *)__this = 0;
          pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45e6a;
          il2cpp_runtime_helper_022b4080(__this);
          if (bVar17 == 0) {
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b46156;
              il2cpp_runtime_helper_02337ed0();
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b4615d;
              bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar4 = (char)bVar5;
            }
            else {
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b46071;
              bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar4 = (char)bVar5;
            }
            if ((cVar4 != '\0') && (lVar2 = *(long *)&(pGVar8->fields)._positionLeft.fields.Unit, lVar2 != 0))
            {
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b46091;
              bVar5 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar2 + 0x10),(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b460a3;
                pUVar12 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0);
                pGVar3 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                          &(pGVar8->fields)._positionLeft.fields.Unit;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b460c2;
                  il2cpp_runtime_helper_02337ed0();
                }
                pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b460d4;
                pDVar13 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                    (pUVar12,pGVar3,0,0,(MethodInfo *)0x0);
                *(DG_Tweening_Tween_o **)__this = pDVar13;
                pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b460e2;
                il2cpp_runtime_helper_022b4080(__this);
                t = *(Il2CppObject **)__this;
                unaff_RBX = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
                if (t != (Il2CppObject *)0x0) {
                  pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b460f9;
                  action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                  pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b46113;
                  DG_Tweening_TweenCallback___ctor();
                  DG_Tweening_TweenSettingsExtensions__OnComplete_object_(t,action,MethodInfo_Tween_OnComplete_Tween);
                  return;
                }
              }
            }
            pSVar9 = (System_String_o *)0x0;
            pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b4616f;
            ppMVar19 = (MethodInfo_25F3760 **)pGVar8;
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
              pMVar18 = (MethodInfo *)0x0;
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b46180;
              UnityEngine_GameObject__SetActive(pUVar12,0,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pGVar8,pMVar18);
              return;
            }
          }
          else {
            pSVar9 = (System_String_o *)0x0;
            pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45e7c;
            ppMVar19 = (MethodInfo_25F3760 **)pGVar8;
            pUVar12 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0);
            if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45e94;
              UnityEngine_GameObject__SetActive(pUVar12,1,(MethodInfo *)0x0);
              pMVar18 = (MethodInfo *)0x0;
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45e9e;
              pUVar12 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0);
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45ea6;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar12,pMVar18);
              pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45eae;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pGVar8,pMVar18);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b46137;
                il2cpp_runtime_helper_02337ed0();
                pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b4613e;
                bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                cVar4 = (char)bVar5;
              }
              else {
                pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45ecc;
                bVar5 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                cVar4 = (char)bVar5;
              }
              if ((cVar4 != '\0') && (lVar2 = *(long *)&(pGVar8->fields)._positionType, lVar2 != 0)) {
                pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45eec;
                bVar5 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar2 + 0x10),(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') {
                  pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45efe;
                  pUVar12 = UnityEngine_Component__get_gameObject
                                      ((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0);
                  pGVar3 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                            &(pGVar8->fields)._positionType;
                  if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                    pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45f1d;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b45f32;
                  pDVar13 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                      (pUVar12,pGVar3,1,0,(MethodInfo *)0x0);
                  *(DG_Tweening_Tween_o **)__this = pDVar13;
label_03b46041:
                  il2cpp_runtime_helper_022b4080(&(pGVar8->fields)._positionRight.fields.Unit,pDVar13);
                  return;
                }
              }
              return;
            }
          }
        }
      }
    }
  }
label_03b46192:
  pGStack_78 = (Gilzoide_FlexUi_FlexLayout_o *)0x3b46197;
  il2cpp_runtime_helper_022b2c90();
  __this_03 = (System_String_o **)ppMVar19;
  pGStack_88 = unaff_RBX;
  pGStack_80 = __this;
  pGStack_78 = pGVar8;
  if (g_data_057a9cad == '\0') {
    il2cpp_runtime_helper_023445d0(&"false");
    il2cpp_runtime_helper_023445d0(&"true");
    __this_03 = &"1";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cad = '\x01';
  }
  if (extraout_DL == '\0') {
    ppSVar14 = (System_String_o **)&"false";
  }
  else {
    ppSVar14 = &"true";
  }
  if ((Gilzoide_FlexUi_FlexLayout_o *)ppMVar19 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)*ppSVar14;
    if (g_data_057a9cac == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      g_data_057a9cac = '\x01';
    }
    pGStack_90 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    bVar5 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                  (((Gilzoide_FlexUi_FlexLayout_o *)ppMVar19)->fields).m_CachedPtr;
      __this_03 = (System_String_o **)0x0;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_03b462ad;
      bVar5 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)pSVar9,(Il2CppObject **)&pGStack_90,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar5 != '\0') {
        pGVar8 = pGStack_90;
      }
    }
    __this_03 = (System_String_o **)pGVar8;
    bVar5 = System_String__op_Equality((System_String_o *)pGVar8,"1",(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      return;
    }
    if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      System_String__Equals_3af4de0((System_String_o *)pGVar8,"true",5,(MethodInfo *)0x0);
      return;
    }
  }
label_03b462ad:
  il2cpp_runtime_helper_022b2c90();
  __this_04 = (MethodInfo_255AB70 **)__this_03;
  if (g_data_057a9ca2 == '\0') {
    __this_04 = &MethodInfo_Button_GetComponentsInChildren_Button;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca2 = '\x01';
  }
  if (((Gilzoide_FlexUi_FlexLayout_o *)__this_03 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
     (pSVar15 = UnityEngine_GameObject__GetComponentsInChildren_object_
                          ((UnityEngine_GameObject_o *)__this_03,1,MethodInfo_Button_GetComponentsInChildren_Button),
     __this_04 = (MethodInfo_255AB70 **)__this_03, pSVar15 != (System_Object_array *)0x0)) {
    uVar20 = (uint)pSVar15->max_length;
    if (0 < (int)uVar20) {
      uVar23 = 0;
      do {
        if (uVar20 <= uVar23) {
          il2cpp_runtime_helper_022b2ca0();
          __this_04 = (MethodInfo_255AB70 **)__this_03;
          goto label_03b46348;
        }
        __this_04 = (MethodInfo_255AB70 **)(Gilzoide_FlexUi_FlexLayout_o *)0x0;
        if ((UnityEngine_Component_o *)pSVar15->m_Items[(int)uVar23] == (UnityEngine_Component_o *)0x0)
        goto label_03b46348;
        pMVar18 = (MethodInfo *)0x0;
        __this_03 = (System_String_o **)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pSVar15->m_Items[(int)uVar23],(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth
                  ((UnityEngine_GameObject_o *)__this_03,pMVar18);
        uVar23 = uVar23 + 1;
        uVar20 = (uint)pSVar15->max_length;
      } while ((int)uVar23 < (int)uVar20);
    }
    return;
  }
label_03b46348:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ca1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    g_data_057a9ca1 = '\x01';
  }
  pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  if ((pGVar10 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
     (pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar10->klass == TypeInfo_RectTransform)) {
    pGVar8 = pGVar10;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar10 = pGVar8;
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 != '\0') {
    return;
  }
  if (pGVar8 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    pGVar10 = (Gilzoide_FlexUi_FlexLayout_o *)
              UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar8,(MethodInfo *)0x0);
    rect = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if ((pGVar10 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
       (rect = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar10->klass == TypeInfo_RectTransform)) {
      rect = pGVar10;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)rect,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar5 != '\0') {
      UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
                ((UnityEngine_RectTransform_o *)pGVar8,(MethodInfo *)0x0);
      return;
    }
    pGVar10 = rect;
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
              ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
    if (rect != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGVar8 = (Gilzoide_FlexUi_FlexLayout_o *)
               UnityEngine_Component__GetComponentInParent_object_
                         ((UnityEngine_Component_o *)rect,MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar10 = pGVar8;
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        if (pGVar8 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b464eb;
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(pGVar8,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
      return;
    }
  }
label_03b464eb:
  il2cpp_runtime_helper_022b2c90();
  if (pGVar10 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    System_String__IsNullOrEmpty((System_String_o *)(pGVar10->fields).m_CachedPtr,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$.ctor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding___ctor (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3b46510

void Gisketch_Aottg2UI_State_GisketchUIBinding___ctor
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIBinding$$<RefreshVisibility>b__14_0
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIBinding___RefreshVisibility_b__14_0 (Gisketch_Aottg2UI_State_GisketchUIBinding_o* __this, const MethodInfo* method);
// 0x3b46520

void Gisketch_Aottg2UI_State_GisketchUIBinding___RefreshVisibility_b__14_0
               (Gisketch_Aottg2UI_State_GisketchUIBinding_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_State_GisketchUIBinding_o *str0;
  
  if (*(char *)((long)&(__this->fields)._visibilityInitialized + 1) != '\0') {
    return;
  }
  str0 = __this;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout(__this,method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057a9ca5 == '\0') {
    il2cpp_runtime_helper_023445d0(&".busy");
    g_data_057a9ca5 = '\x01';
  }
  System_String__Concat_3ae5ba0((System_String_o *)str0,".busy",(MethodInfo *)0x0);
  return;
}


