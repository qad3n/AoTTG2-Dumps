// Type: Gisketch.Aottg2UI.State.GisketchUIState
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.State/GisketchUIState.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.State.GisketchUIState$$add_Changed
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__add_Changed (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_Action_string__o* value, const MethodInfo* method);
// 0x3b44c70

void Gisketch_Aottg2UI_State_GisketchUIState__add_Changed
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_Action_string__o *value,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_string__o *pSVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *a;
  bool bVar5;
  
  if (g_data_057a9ca8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    g_data_057a9ca8 = '\x01';
  }
  a = (__this->fields).Changed;
  while( true ) {
    pSVar3 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    uVar1 = TypeInfo_Action_string;
    lVar4 = 0;
    if ((pSVar3 != (System_Delegate_o *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_string), lVar4 == 0))
    break;
    pSVar2 = (System_Action_string__o *)il2cpp_runtime_helper_02300640(&(__this->fields).Changed,lVar4,a);
    bVar5 = a == pSVar2;
    a = pSVar2;
    if (bVar5) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$remove_Changed
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_Action_string__o* value, const MethodInfo* method);
// 0x3b45280

void Gisketch_Aottg2UI_State_GisketchUIState__remove_Changed
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_Action_string__o *value,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_string__o *pSVar2;
  System_Delegate_o *pSVar3;
  long lVar4;
  System_Action_string__o *source;
  bool bVar5;
  
  if (g_data_057a9ca9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    g_data_057a9ca9 = '\x01';
  }
  source = (__this->fields).Changed;
  while( true ) {
    pSVar3 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    uVar1 = TypeInfo_Action_string;
    lVar4 = 0;
    if ((pSVar3 != (System_Delegate_o *)0x0) && (lVar4 = il2cpp_runtime_helper_023051f0(pSVar3,TypeInfo_Action_string), lVar4 == 0))
    break;
    pSVar2 = (System_Action_string__o *)il2cpp_runtime_helper_02300640(&(__this->fields).Changed,lVar4,source);
    bVar5 = source == pSVar2;
    source = pSVar2;
    if (bVar5) {
      return;
    }
  }
  il2cpp_runtime_helper_022b2fd0(pSVar3,uVar1);
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$Set
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__Set (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, System_String_o* value, const MethodInfo* method);
// 0x3b46830

void Gisketch_Aottg2UI_State_GisketchUIState__Set
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,System_String_o *value,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Action_string__o *pSVar2;
  intptr_t iVar3;
  intptr_t iVar4;
  code *pcVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  undefined8 unaff_RBX;
  System_String_o *value_00;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  undefined8 unaff_R14;
  undefined8 unaff_R15;
  
  while( true ) {
    *(undefined8 *)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(undefined8 *)((long)register0x00000020 + -0x18) = unaff_RBX;
    if (g_data_057a9caa == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b46857;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b46863;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057a9caa = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0;
    value_00 = (System_String_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b4687d;
    bVar6 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if (value == (System_String_o *)0x0) {
      value = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b468c2;
      method = MethodInfo_Boolean_TryGetValue;
      value_00 = key;
      bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar1,(Il2CppObject *)key,(Il2CppObject **)((long)register0x00000020 + -0x20),
                         (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
      if ((char)bVar6 != '\0') {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b468d5;
        value_00 = value;
        bVar6 = System_String__op_Equality
                          (*(System_String_o **)((long)register0x00000020 + -0x20),value,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          return;
        }
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b468f7;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)key,(Il2CppObject *)value,MethodInfo_Void_set_Item);
        pSVar2 = (__this->fields).Changed;
        if (pSVar2 == (System_Action_string__o *)0x0) {
          return;
        }
        iVar3 = (pSVar2->fields).method;
        iVar4 = (pSVar2->fields).method_code;
        pcVar5 = (code *)(pSVar2->fields).invoke_impl;
        *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b4690e;
        (*pcVar5)(iVar4,key,iVar3);
        return;
      }
    }
    __this_00 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
    *(undefined8 *)((long)register0x00000020 + -0x30) = 0x3b4691d;
    il2cpp_runtime_helper_022b2c90();
    *(System_String_o **)((long)register0x00000020 + -0x30) = value;
    *(Gisketch_Aottg2UI_State_GisketchUIState_o **)((long)register0x00000020 + -0x38) = __this;
    *(System_String_o **)((long)register0x00000020 + -0x40) = key;
    if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b4693a;
    bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') break;
    if (g_data_057a9ca5 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b46959;
      il2cpp_runtime_helper_023445d0(&".busy");
      g_data_057a9ca5 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b46974;
    pSVar7 = System_String__Concat_3ae5ba0(value_00,".busy",(MethodInfo *)0x0);
    if (g_data_057a9cab == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b4698c;
      il2cpp_runtime_helper_023445d0(&"false");
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b46998;
      il2cpp_runtime_helper_023445d0(&"true");
      g_data_057a9cab = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b469b4;
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,pSVar7,"false",method);
    if (g_data_057a9ca6 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b469c9;
      il2cpp_runtime_helper_023445d0(&".idle");
      g_data_057a9ca6 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b469e4;
    pSVar7 = System_String__Concat_3ae5ba0(value_00,".idle",(MethodInfo *)0x0);
    if (g_data_057a9cab == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b469fc;
      il2cpp_runtime_helper_023445d0(&"false");
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b46a08;
      il2cpp_runtime_helper_023445d0(&"true");
      g_data_057a9cab = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b46a24;
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,pSVar7,"true",method);
    if (g_data_057a9ca7 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b46a39;
      il2cpp_runtime_helper_023445d0(&".message");
      g_data_057a9ca7 = '\x01';
    }
    *(undefined8 *)((long)register0x00000020 + -0x48) = 0x3b46a54;
    key = System_String__Concat_3ae5ba0(value_00,".message",(MethodInfo *)0x0);
    method = *(MethodInfo **)(g_data_057b9c00 + 0xb8);
    value = (System_String_o *)method->methodPointer;
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x40);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x38);
    unaff_R15 = *(undefined8 *)((long)register0x00000020 + -0x30);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x28);
    __this = __this_00;
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$SetBool
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState__SetBool (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, bool value, const MethodInfo* method);
// 0x3b467c0

void Gisketch_Aottg2UI_State_GisketchUIState__SetBool
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,bool_conflict value,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  System_Action_string__o *pSVar2;
  intptr_t iVar3;
  intptr_t iVar4;
  code *pcVar5;
  bool_conflict bVar6;
  undefined8 *puVar7;
  System_String_o *pSVar8;
  System_String_o *extraout_RDX;
  System_String_o *b;
  undefined8 uVar9;
  undefined1 *puVar10;
  System_String_o *value_00;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar11;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  undefined8 unaff_R15;
  
  puVar10 = &stack0xffffffffffffffe8;
  pSVar8 = key;
  pGVar11 = __this;
  if (g_data_057a9cab == '\0') {
    il2cpp_runtime_helper_023445d0(&"false");
    pGVar11 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)&"true";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cab = '\x01';
  }
  if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    if ((char)value == '\0') {
      puVar7 = &"false";
    }
    else {
      puVar7 = &"true";
    }
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,key,(System_String_o *)*puVar7,method);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  uVar9 = 0;
  b = extraout_RDX;
  while( true ) {
    *(undefined8 *)(puVar10 + -8) = unaff_R15;
    *(System_String_o **)(puVar10 + -0x10) = key;
    *(undefined8 *)(puVar10 + -0x18) = uVar9;
    if (g_data_057a9caa == '\0') {
      *(undefined8 *)(puVar10 + -0x30) = 0x3b46857;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      *(undefined8 *)(puVar10 + -0x30) = 0x3b46863;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      g_data_057a9caa = '\x01';
    }
    *(undefined8 *)(puVar10 + -0x20) = 0;
    value_00 = (System_String_o *)0x0;
    *(undefined8 *)(puVar10 + -0x30) = 0x3b4687d;
    bVar6 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      return;
    }
    if (b == (System_String_o *)0x0) {
      b = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar11->fields)._values;
    if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      *(undefined8 *)(puVar10 + -0x30) = 0x3b468c2;
      method = MethodInfo_Boolean_TryGetValue;
      value_00 = pSVar8;
      bVar6 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject **)(puVar10 + -0x20),
                         (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
      if ((char)bVar6 != '\0') {
        *(undefined8 *)(puVar10 + -0x30) = 0x3b468d5;
        value_00 = b;
        bVar6 = System_String__op_Equality(*(System_String_o **)(puVar10 + -0x20),b,(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          return;
        }
      }
      pSVar1 = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar11->fields)._values;
      if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        *(undefined8 *)(puVar10 + -0x30) = 0x3b468f7;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)pSVar8,(Il2CppObject *)b,MethodInfo_Void_set_Item);
        pSVar2 = (pGVar11->fields).Changed;
        if (pSVar2 == (System_Action_string__o *)0x0) {
          return;
        }
        iVar3 = (pSVar2->fields).method;
        iVar4 = (pSVar2->fields).method_code;
        pcVar5 = (code *)(pSVar2->fields).invoke_impl;
        *(undefined8 *)(puVar10 + -0x30) = 0x3b4690e;
        (*pcVar5)(iVar4,pSVar8,iVar3);
        return;
      }
    }
    __this_00 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
    *(undefined8 *)(puVar10 + -0x30) = 0x3b4691d;
    il2cpp_runtime_helper_022b2c90();
    *(System_String_o **)(puVar10 + -0x30) = b;
    *(Gisketch_Aottg2UI_State_GisketchUIState_o **)(puVar10 + -0x38) = pGVar11;
    *(System_String_o **)(puVar10 + -0x40) = pSVar8;
    if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      return;
    }
    *(undefined8 *)(puVar10 + -0x48) = 0x3b4693a;
    bVar6 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') break;
    if (g_data_057a9ca5 == '\0') {
      *(undefined8 *)(puVar10 + -0x48) = 0x3b46959;
      il2cpp_runtime_helper_023445d0(&".busy");
      g_data_057a9ca5 = '\x01';
    }
    *(undefined8 *)(puVar10 + -0x48) = 0x3b46974;
    pSVar8 = System_String__Concat_3ae5ba0(value_00,".busy",(MethodInfo *)0x0);
    if (g_data_057a9cab == '\0') {
      *(undefined8 *)(puVar10 + -0x48) = 0x3b4698c;
      il2cpp_runtime_helper_023445d0(&"false");
      *(undefined8 *)(puVar10 + -0x48) = 0x3b46998;
      il2cpp_runtime_helper_023445d0(&"true");
      g_data_057a9cab = '\x01';
    }
    *(undefined8 *)(puVar10 + -0x48) = 0x3b469b4;
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,pSVar8,"false",method);
    if (g_data_057a9ca6 == '\0') {
      *(undefined8 *)(puVar10 + -0x48) = 0x3b469c9;
      il2cpp_runtime_helper_023445d0(&".idle");
      g_data_057a9ca6 = '\x01';
    }
    *(undefined8 *)(puVar10 + -0x48) = 0x3b469e4;
    pSVar8 = System_String__Concat_3ae5ba0(value_00,".idle",(MethodInfo *)0x0);
    if (g_data_057a9cab == '\0') {
      *(undefined8 *)(puVar10 + -0x48) = 0x3b469fc;
      il2cpp_runtime_helper_023445d0(&"false");
      *(undefined8 *)(puVar10 + -0x48) = 0x3b46a08;
      il2cpp_runtime_helper_023445d0(&"true");
      g_data_057a9cab = '\x01';
    }
    *(undefined8 *)(puVar10 + -0x48) = 0x3b46a24;
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,pSVar8,"true",method);
    if (g_data_057a9ca7 == '\0') {
      *(undefined8 *)(puVar10 + -0x48) = 0x3b46a39;
      il2cpp_runtime_helper_023445d0(&".message");
      g_data_057a9ca7 = '\x01';
    }
    *(undefined8 *)(puVar10 + -0x48) = 0x3b46a54;
    pSVar8 = System_String__Concat_3ae5ba0(value_00,".message",(MethodInfo *)0x0);
    method = *(MethodInfo **)(g_data_057b9c00 + 0xb8);
    b = (System_String_o *)method->methodPointer;
    uVar9 = *(undefined8 *)(puVar10 + -0x40);
    key = *(System_String_o **)(puVar10 + -0x38);
    unaff_R15 = *(undefined8 *)(puVar10 + -0x30);
    puVar10 = puVar10 + -0x28;
    pGVar11 = __this_00;
  }
  return;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$Get
// il2cpp: System_String_o* Gisketch_Aottg2UI_State_GisketchUIState__Get (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, System_String_o* fallback, const MethodInfo* method);
// 0x3b45510

System_String_o *
Gisketch_Aottg2UI_State_GisketchUIState__Get
          (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,System_String_o *fallback,
          MethodInfo *method)

{
  uint uVar1;
  UnityEngine_RectOffset_o *__this_00;
  UnityEngine_Events_UnityAction_o *pUVar2;
  UnityEngine_Material_o *pUVar3;
  System_String_o *key_00;
  long lVar4;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar5;
  System_Collections_Generic_IEqualityComparer_TKey__o *pSVar6;
  System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *t;
  System_Int32_array *__this_01;
  undefined4 uVar7;
  undefined4 uVar8;
  byte bVar9;
  char cVar10;
  bool_conflict bVar11;
  uint uVar12;
  int32_t iVar13;
  float fVar14;
  bool_conflict bVar15;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  TMPro_TMP_Text_o *pTVar16;
  TMPro_TMP_Text_o *pTVar17;
  UnityEngine_GameObject_o *pUVar18;
  System_String_o *pSVar19;
  Gilzoide_FlexUi_Yoga_YGValue_o GVar20;
  System_String_o *extraout_RAX;
  UnityEngine_Object_o *__this_02;
  undefined4 extraout_var_01;
  TMPro_TMP_Text_o *__this_03;
  UnityEngine_RectTransform_o *pUVar21;
  undefined4 extraout_var_02;
  Gilzoide_FlexUi_Yoga_YGValue_Fields value;
  System_String_o *extraout_RAX_00;
  TMPro_TMP_Text_o *pTVar22;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  undefined4 extraout_var_05;
  DG_Tweening_Tween_o *pDVar23;
  System_String_o *extraout_RAX_01;
  undefined4 extraout_var_06;
  undefined4 extraout_var_07;
  DG_Tweening_TweenCallback_o *action;
  undefined4 extraout_var_08;
  System_String_o *extraout_RAX_02;
  System_String_o **ppSVar24;
  undefined4 extraout_var_09;
  undefined4 extraout_var_10;
  System_Object_array *pSVar25;
  Gilzoide_FlexUi_FlexLayout_o *pGVar26;
  undefined4 extraout_var_11;
  System_String_o *extraout_RAX_03;
  Gilzoide_FlexUi_FlexLayout_o *pGVar27;
  System_String_o *extraout_RAX_04;
  undefined4 extraout_var_12;
  System_String_o **ppSVar28;
  Gilzoide_FlexUi_FlexLayout_c **ppGVar29;
  char extraout_DL;
  byte bVar30;
  int index;
  TMPro_TMP_Text_o *unaff_RBP;
  MethodInfo *pMVar31;
  long *__this_04;
  UnityEngine_RectTransform_o *rect;
  MethodInfo_25F3760 **ppMVar32;
  MethodInfo_255AB70 **__this_05;
  TMPro_TMP_Text_o *unaff_R12;
  int iVar33;
  Gilzoide_FlexUi_FlexLayout_o *rect_00;
  UnityEngine_Vector2_o UVar34;
  float extraout_XMM0_Db;
  undefined4 extraout_XMM0_Dc;
  undefined1 auVar35 [16];
  undefined1 auVar36 [16];
  undefined4 extraout_XMM0_Dd;
  float fVar37;
  float fVar38;
  float fVar39;
  undefined4 uVar40;
  undefined4 uVar41;
  float fVar42;
  float fVar43;
  UnityEngine_Rect_o UVar44;
  TMPro_TMP_Text_o *pTStack_100;
  TMPro_TMP_Text_o *pTStack_f8;
  TMPro_TMP_Text_o *pTStack_f0;
  TMPro_TMP_Text_o *pTStack_e8;
  undefined8 uStack_e0;
  TMPro_TMP_Text_o *pTStack_d8;
  TMPro_TMP_Text_o *pTStack_d0;
  TMPro_TMP_Text_o *pTStack_c8;
  TMPro_TMP_Text_o *pTStack_c0;
  float fStack_b8;
  float fStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  float fStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  TMPro_TMP_Text_o *pTStack_90;
  TMPro_TMP_Text_o *pTStack_88;
  System_String_o *pSStack_80;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGStack_78;
  float fStack_64;
  TMPro_TMP_Text_o *pTStack_60;
  System_String_o *pSStack_58;
  System_String_o *local_20;
  undefined8 extraout_XMM0_Qb;
  
  ppSVar28 = (System_String_o **)method;
  if (g_data_057a9cac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    g_data_057a9cac = '\x01';
    ppSVar28 = (System_String_o **)method;
  }
  local_20 = (System_String_o *)0x0;
  pTVar22 = (TMPro_TMP_Text_o *)0x0;
  bVar11 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return fallback;
  }
  __this_03 = (TMPro_TMP_Text_o *)(__this->fields)._values;
  if (__this_03 != (TMPro_TMP_Text_o *)0x0) {
    bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                       ((System_Collections_Generic_Dictionary_object__object__o *)__this_03,
                        (Il2CppObject *)key,(Il2CppObject **)&local_20,MethodInfo_Boolean_TryGetValue);
    if ((char)bVar11 == '\0') {
      return fallback;
    }
    return local_20;
  }
  il2cpp_runtime_helper_022b2c90();
  __this_04 = (long *)__this_03;
  pSStack_58 = key;
  if (g_data_057a9ca3 == '\0') {
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b455b6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b455c2;
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b455ce;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HorizontalLayoutGroup_GetComponentInChildren_HorizontalL);
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b455da;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b455e6;
    il2cpp_runtime_helper_023445d0(&MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b455f2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_LayoutRebuilder);
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b455fe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4560a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    __this_04 = &TypeInfo_YGValue;
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45616;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca3 = '\x01';
  }
  if (__this_03 != (TMPro_TMP_Text_o *)0x0) {
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45638;
    __this = (Gisketch_Aottg2UI_State_GisketchUIState_o *)
             UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)__this_03,MethodInfo_LayoutElement_GetComponent_LayoutElement);
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45652;
    unaff_R12 = (TMPro_TMP_Text_o *)
                UnityEngine_GameObject__GetComponentInChildren_object__255a400
                          ((UnityEngine_GameObject_o *)__this_03,1,MethodInfo_HorizontalLayoutGroup_GetComponentInChildren_HorizontalL);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4566d;
      il2cpp_runtime_helper_02337ed0();
    }
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45679;
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return (System_String_o *)CONCAT44(extraout_var,bVar11);
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45695;
      il2cpp_runtime_helper_02337ed0();
    }
    pTVar22 = (TMPro_TMP_Text_o *)0x0;
    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b456a1;
    __this_04 = (long *)unaff_R12;
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)unaff_R12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return (System_String_o *)CONCAT44(extraout_var_00,bVar11);
    }
    if (unaff_R12 != (TMPro_TMP_Text_o *)0x0) {
      __this_00 = (UnityEngine_RectOffset_o *)(unaff_R12->fields).m_Material;
      __this_04 = (long *)(TMPro_TMP_Text_o *)0x0;
      if (__this_00 != (UnityEngine_RectOffset_o *)0x0) {
        fallback = (System_String_o *)0x0;
        pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b456da;
        pTStack_60 = __this_03;
        uVar12 = UnityEngine_RectOffset__get_horizontal(__this_00,(MethodInfo *)0x0);
        pTVar22 = (TMPro_TMP_Text_o *)0x0;
        pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b456e6;
        __this_04 = (long *)unaff_R12;
        pTVar16 = (TMPro_TMP_Text_o *)
                  UnityEngine_Component__get_transform((UnityEngine_Component_o *)unaff_R12,(MethodInfo *)0x0)
        ;
        __this_03 = (TMPro_TMP_Text_o *)(ulong)uVar12;
        if (pTVar16 != (TMPro_TMP_Text_o *)0x0) {
          fStack_64 = (float)(int)uVar12;
          pTVar17 = (TMPro_TMP_Text_o *)0x0;
          fallback = (System_String_o *)0x0;
          do {
            pTVar22 = (TMPro_TMP_Text_o *)0x0;
            pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4574c;
            iVar13 = UnityEngine_Transform__get_childCount
                               ((UnityEngine_Transform_o *)pTVar16,(MethodInfo *)0x0);
            unaff_RBP = pTStack_60;
            index = (int)pTVar17;
            iVar33 = (int)fallback;
            if (iVar13 <= index) {
              if (1 < iVar33) {
                fallback = (System_String_o *)(ulong)(iVar33 - 1U);
                fStack_64 = fStack_64 +
                            (float)(int)(iVar33 - 1U) * *(float *)&(unaff_R12->fields).m_CanvasRenderer;
              }
              __this_04 = (long *)pTVar16;
              if (__this == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) break;
              pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4587c;
              (*((UnityEngine_Object_c *)__this->klass)[2]._1.events)
                        (__this,((UnityEngine_Object_c *)__this->klass)[2]._1.properties);
              pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4588f;
              auVar35._0_8_ =
                   (**(code **)&((UnityEngine_Object_c *)__this->klass)[2]._1.this_arg.bits)
                             (__this,((UnityEngine_Object_c *)__this->klass)[2]._1.element_class);
              auVar35._8_8_ = extraout_XMM0_Qb;
              if ((float)auVar35._0_8_ <= fStack_64) {
                auVar36._4_12_ = auVar35._4_12_;
                auVar36._0_4_ = fStack_64;
                auVar35._0_8_ = auVar36._0_8_;
              }
              pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b458a8;
              (*(code *)((UnityEngine_Object_c *)__this->klass)[2]._1.castClass)
                        (auVar35._0_8_,__this,((UnityEngine_Object_c *)__this->klass)[2]._1.declaringType);
              pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b458ba;
              __this_03 = (TMPro_TMP_Text_o *)
                          UnityEngine_GameObject__GetComponent_object_
                                    ((UnityEngine_GameObject_o *)unaff_RBP,MethodInfo_FlexLayout_GetComponent_FlexLayout);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b458d5;
                il2cpp_runtime_helper_02337ed0();
              }
              pTVar22 = (TMPro_TMP_Text_o *)0x0;
              pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b458e1;
              __this_04 = (long *)__this_03;
              bVar11 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar11 != '\0') {
                if (__this_03 == (TMPro_TMP_Text_o *)0x0) break;
                if (*(int *)((long)&(__this_03->fields).m_OnDirtyLayoutCallback + 4) != 2) {
                  if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4590c;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45919;
                  GVar20 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fStack_64,(MethodInfo *)0x0);
                  pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45926;
                  Gilzoide_FlexUi_FlexLayout__set_Width
                            ((Gilzoide_FlexUi_FlexLayout_o *)__this_03,GVar20,(MethodInfo *)0x0);
                }
              }
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4593e;
                il2cpp_runtime_helper_02337ed0();
              }
              pTVar22 = (TMPro_TMP_Text_o *)0x0;
              pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4594a;
              __this_04 = (long *)__this_03;
              bVar11 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar11 != '\0') {
                if (__this_03 == (TMPro_TMP_Text_o *)0x0) break;
                pUVar2 = (__this_03->fields).m_OnDirtyMaterialCallback;
                if (((ulong)pUVar2 >> 0x20 != 1) || (SUB84(pUVar2,0) < fStack_64)) {
                  if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
                    pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45992;
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4599f;
                  GVar20 = Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fStack_64,(MethodInfo *)0x0);
                  pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b459ac;
                  Gilzoide_FlexUi_FlexLayout__set_MinWidth
                            ((Gilzoide_FlexUi_FlexLayout_o *)__this_03,GVar20,(MethodInfo *)0x0);
                }
              }
              pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b459b6;
              pUVar21 = (UnityEngine_RectTransform_o *)
                        UnityEngine_GameObject__get_transform
                                  ((UnityEngine_GameObject_o *)unaff_RBP,(MethodInfo *)0x0);
              if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
                pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b459eb;
                il2cpp_runtime_helper_02337ed0();
              }
              if (pUVar21 == (UnityEngine_RectTransform_o *)0x0) {
                rect = (UnityEngine_RectTransform_o *)0x0;
              }
              else {
                rect = (UnityEngine_RectTransform_o *)0x0;
                if ((Gilzoide_FlexUi_FlexLayout_c *)pUVar21->klass == TypeInfo_RectTransform) {
                  rect = pUVar21;
                }
              }
              UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild(rect,(MethodInfo *)0x0);
              return extraout_RAX;
            }
            pTVar22 = (TMPro_TMP_Text_o *)0x0;
            pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4575e;
            __this_04 = (long *)unaff_R12;
            pTVar16 = (TMPro_TMP_Text_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)unaff_R12,(MethodInfo *)0x0);
            unaff_RBP = pTVar17;
            if (pTVar16 == (TMPro_TMP_Text_o *)0x0) break;
            pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45773;
            pTVar22 = pTVar17;
            pTVar17 = (TMPro_TMP_Text_o *)
                      UnityEngine_Transform__GetChild
                                ((UnityEngine_Transform_o *)pTVar16,index,(MethodInfo *)0x0);
            __this_04 = (long *)pTVar16;
            if (pTVar17 == (TMPro_TMP_Text_o *)0x0) break;
            pTVar22 = (TMPro_TMP_Text_o *)0x0;
            pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45789;
            __this_04 = (long *)pTVar17;
            pUVar18 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar17,(MethodInfo *)0x0);
            __this_03 = pTVar17;
            if (pUVar18 == (UnityEngine_GameObject_o *)0x0) break;
            pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4579c;
            bVar11 = UnityEngine_GameObject__get_activeInHierarchy(pUVar18,(MethodInfo *)0x0);
            if ((char)bVar11 != '\0') {
              pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b457b2;
              pTVar16 = (TMPro_TMP_Text_o *)
                        UnityEngine_Component__GetComponent_object_
                                  ((UnityEngine_Component_o *)pTVar17,MethodInfo_TextMeshProUGUI_GetComponent_TextMeshProUGUI);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b457cd;
                il2cpp_runtime_helper_02337ed0();
              }
              fallback = (System_String_o *)(ulong)(iVar33 + 1);
              pTVar22 = (TMPro_TMP_Text_o *)0x0;
              pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b457dd;
              __this_04 = (long *)pTVar16;
              bVar11 = UnityEngine_Object__op_Inequality
                                 ((UnityEngine_Object_o *)pTVar16,(UnityEngine_Object_o *)0x0,
                                  (MethodInfo *)0x0);
              if ((char)bVar11 == '\0') {
                pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45712;
                pUVar21 = (UnityEngine_RectTransform_o *)
                          UnityEngine_Component__GetComponent_object_
                                    ((UnityEngine_Component_o *)pTVar17,MethodInfo_RectTransform_GetComponent_RectTransform);
                pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4571c;
                fVar37 = UnityEngine_UI_LayoutUtility__GetPreferredWidth(pUVar21,(MethodInfo *)0x0);
              }
              else {
                if (pTVar16 == (TMPro_TMP_Text_o *)0x0) break;
                ppSVar28 = (System_String_o **)(pTVar16->klass->vtable)._106_ForceMeshUpdate.method;
                pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45806;
                (*(pTVar16->klass->vtable)._106_ForceMeshUpdate.methodPtr)(pTVar16,0,0);
                pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b4581a;
                pSVar19 = (System_String_o *)
                          (*(pTVar16->klass->vtable)._65_get_text.methodPtr)
                                    (pTVar16,(pTVar16->klass->vtable)._65_get_text.method);
                pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45827;
                UVar34 = TMPro_TMP_Text__GetPreferredValues_4c6ffa0(pTVar16,pSVar19,(MethodInfo *)0x0);
                fVar37 = UVar34.fields.x;
              }
              fStack_64 = fStack_64 + fVar37;
            }
            unaff_RBP = (TMPro_TMP_Text_o *)(ulong)(index + 1);
            pTVar22 = (TMPro_TMP_Text_o *)0x0;
            pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45739;
            __this_04 = (long *)unaff_R12;
            pTVar16 = (TMPro_TMP_Text_o *)
                      UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)unaff_R12,(MethodInfo *)0x0);
            pTVar17 = unaff_RBP;
          } while (pTVar16 != (TMPro_TMP_Text_o *)0x0);
        }
      }
    }
  }
  pGStack_78 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x3b45a0c;
  il2cpp_runtime_helper_022b2c90();
  pTStack_90 = __this_03;
  pTStack_88 = unaff_R12;
  pSStack_80 = fallback;
  pGStack_78 = __this;
  if (g_data_057a9ca4 == '\0') {
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45a36;
    il2cpp_runtime_helper_023445d0(&MethodInfo_FlexLayout_GetComponent_FlexLayout);
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45a42;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45a4e;
    il2cpp_runtime_helper_023445d0(&TypeInfo_RectTransform);
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45a5a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_YGValue);
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45a66;
    il2cpp_runtime_helper_023445d0(&"public-profile-hover-bio");
    g_data_057a9ca4 = '\x01';
  }
  pSVar19 = (System_String_o *)0x0;
  pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45a77;
  pTVar16 = (TMPro_TMP_Text_o *)__this_04;
  __this_02 = (UnityEngine_Object_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
  if (__this_02 != (UnityEngine_Object_o *)0x0) {
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45a8a;
    pTVar16 = (TMPro_TMP_Text_o *)UnityEngine_Object__get_name(__this_02,(MethodInfo *)0x0);
    ppSVar28 = &"public-profile-hover-bio";
    pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45a9e;
    pSVar19 = "public-profile-hover-bio";
    bVar11 = System_String__op_Inequality((System_String_o *)pTVar16,"public-profile-hover-bio",(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return (System_String_o *)CONCAT44(extraout_var_01,bVar11);
    }
    if (pTVar22 != (TMPro_TMP_Text_o *)0x0) {
      pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45abe;
      TMPro_TMP_Text__set_maxVisibleLines(pTVar22,5,(MethodInfo *)0x0);
      pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45acd;
      TMPro_TMP_Text__set_overflowMode(pTVar22,1,(MethodInfo *)0x0);
      pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45ad7;
      __this_03 = (TMPro_TMP_Text_o *)TMPro_TMP_Text__get_rectTransform(pTVar22,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45af3;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar19 = (System_String_o *)0x0;
      pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45aff;
      pTVar16 = __this_03;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      fVar37 = 0.0;
      fVar39 = 0.0;
      uVar40 = 0;
      uVar41 = 0;
      if ((char)bVar11 == '\0') {
label_03b45b26:
        fStack_b8 = fVar37;
        fStack_b4 = fVar39;
        uStack_b0 = uVar40;
        uStack_ac = uVar41;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45b3c;
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar19 = (System_String_o *)0x0;
        pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45b48;
        pTVar16 = __this_03;
        bVar11 = UnityEngine_Object__op_Inequality
                           ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        fVar37 = fStack_b8;
        fVar14 = fStack_b8;
        fVar39 = fStack_b4;
        fVar42 = fStack_b4;
        uVar40 = uStack_b0;
        uVar7 = uStack_b0;
        uVar41 = uStack_ac;
        uVar8 = uStack_ac;
        if ((char)bVar11 != '\0') {
          if (__this_03 == (TMPro_TMP_Text_o *)0x0) goto label_03b45d55;
          pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45b5f;
          pUVar21 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)__this_03,(MethodInfo *)0x0);
          fVar37 = fStack_b8;
          fVar14 = fStack_b8;
          fVar39 = fStack_b4;
          fVar42 = fStack_b4;
          uVar40 = uStack_b0;
          uVar7 = uStack_b0;
          uVar41 = uStack_ac;
          uVar8 = uStack_ac;
          if ((pUVar21 != (UnityEngine_RectTransform_o *)0x0) &&
             (ppGVar29 = &TypeInfo_RectTransform, ppSVar28 = (System_String_o **)ppGVar29,
             (Gilzoide_FlexUi_FlexLayout_c *)pUVar21->klass == TypeInfo_RectTransform)) {
            pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45b85;
            UVar44 = UnityEngine_RectTransform__get_rect(pUVar21,(MethodInfo *)0x0);
            ppSVar28 = (System_String_o **)ppGVar29;
            fVar37 = UVar44.fields.m_Width;
            fVar14 = fStack_b8;
            fVar39 = UVar44.fields.m_Height;
            fVar42 = fStack_b4;
            uVar7 = uStack_b0;
            uVar8 = uStack_ac;
          }
        }
      }
      else {
        if (__this_03 == (TMPro_TMP_Text_o *)0x0) goto label_03b45d55;
        pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45b19;
        UVar44 = UnityEngine_RectTransform__get_rect
                           ((UnityEngine_RectTransform_o *)__this_03,(MethodInfo *)0x0);
        fVar37 = UVar44.fields.m_Width;
        fVar39 = UVar44.fields.m_Height;
        fVar14 = fStack_b8;
        fVar42 = fStack_b4;
        uVar7 = uStack_b0;
        uVar8 = uStack_ac;
        if (fVar37 <= 1.0) goto label_03b45b26;
      }
      uStack_ac = uVar41;
      uStack_b0 = uVar40;
      fStack_b4 = fVar39;
      fStack_b8 = fVar37;
      fVar37 = 24.0;
      if (1.0 < fStack_b8) {
        pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45bc4;
        pSVar19 = (System_String_o *)
                  (*(pTVar22->klass->vtable)._65_get_text.methodPtr)
                            (pTVar22,(pTVar22->klass->vtable)._65_get_text.method);
        pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45bd8;
        UVar34 = TMPro_TMP_Text__GetPreferredValues_4c70170(pTVar22,pSVar19,fStack_b8,0.0,(MethodInfo *)0x0);
        fVar37 = UVar34.fields.y;
        fVar14 = fStack_b8;
        fVar42 = fStack_b4;
        uVar7 = uStack_b0;
        uVar8 = uStack_ac;
      }
      uStack_ac = uVar8;
      uStack_b0 = uVar7;
      fStack_b4 = fVar42;
      fStack_b8 = fVar14;
      pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45be1;
      fStack_b8 = ceilf(fVar37);
      pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45bf7;
      fStack_b4 = extraout_XMM0_Db;
      uStack_b0 = extraout_XMM0_Dc;
      uStack_ac = extraout_XMM0_Dd;
      pTVar17 = (TMPro_TMP_Text_o *)
                UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)__this_04,MethodInfo_FlexLayout_GetComponent_FlexLayout)
      ;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45c0c;
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar19 = (System_String_o *)0x0;
      pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45c18;
      pTVar16 = pTVar17;
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)pTVar17,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        return (System_String_o *)CONCAT44(extraout_var_02,bVar11);
      }
      __this_03 = (TMPro_TMP_Text_o *)0x0;
      if (pTVar17 != (TMPro_TMP_Text_o *)0x0) {
        fVar37 = 120.0;
        if (fStack_b8 <= 120.0) {
          fVar37 = fStack_b8;
        }
        fVar37 = (float)(~-(uint)(24.0 <= fStack_b8) & 0x41c00000 | (uint)fVar37 & -(uint)(24.0 <= fStack_b8))
        ;
        fVar39 = 0.0;
        uVar40 = 0;
        uVar41 = 0;
        pUVar2 = (pTVar17->fields).m_OnDirtyVertsCallback;
        if ((ulong)pUVar2 >> 0x20 == 1) {
          fVar14 = SUB84(pUVar2,0);
          if (g_data_057a68c8 == '\0') {
            fStack_b4 = 0.0;
            uStack_b0 = 0;
            uStack_ac = 0;
            uStack_a4 = 0;
            uStack_a0 = 0;
            uStack_9c = 0;
            pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45c92;
            fStack_b8 = fVar37;
            fStack_a8 = fVar14;
            il2cpp_runtime_helper_023445d0(&TypeInfo_Mathf);
            g_data_057a68c8 = '\x01';
            fVar37 = fStack_b8;
            fVar39 = fStack_b4;
            uVar40 = uStack_b0;
            uVar41 = uStack_ac;
            fVar14 = fStack_a8;
          }
          fVar42 = ABS(fVar14);
          if (ABS(fVar14) <= ABS(fVar37)) {
            fVar42 = ABS(fVar37);
          }
          fVar38 = *(float *)&(*(System_String_o **)(TypeInfo_Mathf + 0xb8))->klass * 8.0;
          fVar43 = fVar42 * 1e-06;
          if (fVar42 * 1e-06 <= fVar38) {
            fVar43 = fVar38;
          }
          if (ABS(fVar37 - fVar14) < fVar43) {
            return *(System_String_o **)(TypeInfo_Mathf + 0xb8);
          }
        }
        if (*(int *)(TypeInfo_YGValue + 0xe4) == 0) {
          pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45d0c;
          fStack_b8 = fVar37;
          fStack_b4 = fVar39;
          uStack_b0 = uVar40;
          uStack_ac = uVar41;
          il2cpp_runtime_helper_02337ed0();
          fVar37 = fStack_b8;
        }
        pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45d17;
        value = (Gilzoide_FlexUi_Yoga_YGValue_Fields)
                Gilzoide_FlexUi_Yoga_YGValue__op_Implicit(fVar37,(MethodInfo *)0x0);
        pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45d24;
        Gilzoide_FlexUi_FlexLayout__set_Height
                  ((Gilzoide_FlexUi_FlexLayout_o *)pTVar17,(Gilzoide_FlexUi_Yoga_YGValue_o)value,
                   (MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                  ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)__this_04,(MethodInfo *)value);
        return extraout_RAX_00;
      }
    }
  }
label_03b45d55:
  pTStack_c0 = (TMPro_TMP_Text_o *)0x3b45d5a;
  uStack_e0 = il2cpp_runtime_helper_022b2c90();
  ppMVar32 = (MethodInfo_25F3760 **)pTVar16;
  pTStack_d8 = __this_03;
  pTStack_d0 = (TMPro_TMP_Text_o *)__this_04;
  pTStack_c8 = pTVar22;
  pTStack_c0 = unaff_RBP;
  if (g_data_057a9ca0 == '\0') {
    pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45d7f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45d8b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchMotion);
    pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45d97;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_RefreshVisibility_b__14_0);
    pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45da3;
    il2cpp_runtime_helper_023445d0(&TypeInfo_TweenCallback);
    ppMVar32 = &MethodInfo_Tween_OnComplete_Tween;
    pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45daf;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca0 = '\x01';
  }
  pUVar3 = (pTVar16->fields).m_Material;
  if (pUVar3 != (UnityEngine_Material_o *)0x0) {
    __this_03 = *(TMPro_TMP_Text_o **)&(pTVar16->fields).m_SkipLayoutUpdate;
    key_00 = pUVar3[1].monitor;
    pSVar19 = (System_String_o *)0x0;
    pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45dd5;
    ppMVar32 = (MethodInfo_25F3760 **)pTVar16;
    pTVar22 = (TMPro_TMP_Text_o *)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
    if (pTVar22 != (TMPro_TMP_Text_o *)0x0) {
      pSVar19 = (System_String_o *)0x0;
      pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45de8;
      uVar12 = UnityEngine_GameObject__get_activeSelf((UnityEngine_GameObject_o *)pTVar22,(MethodInfo *)0x0);
      ppMVar32 = (MethodInfo_25F3760 **)pTVar22;
      if (__this_03 != (TMPro_TMP_Text_o *)0x0) {
        pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45dff;
        uVar12 = Gisketch_Aottg2UI_State_GisketchUIState__GetBool
                           ((Gisketch_Aottg2UI_State_GisketchUIState_o *)__this_03,key_00,uVar12 & 0xff,
                            (MethodInfo *)ppSVar28);
        __this_03 = (TMPro_TMP_Text_o *)(ulong)uVar12;
        bVar30 = (byte)uVar12;
        if (*(char *)&(pTVar16->fields).m_RaycastPadding.fields.x == '\0') {
          pSVar19 = (System_String_o *)0x0;
          pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45f47;
          ppMVar32 = (MethodInfo_25F3760 **)pTVar16;
          pUVar18 = UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
          if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
            pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45f5a;
            bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar18,(MethodInfo *)0x0);
            *(undefined1 *)&(pTVar16->fields).m_RaycastPadding.fields.x = 1;
            *(byte *)((long)&(pTVar16->fields).m_RaycastPadding.fields.x + 1) = bVar30;
            pSVar19 = (System_String_o *)0x0;
            pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45f6f;
            ppMVar32 = (MethodInfo_25F3760 **)pTVar16;
            pUVar18 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
            if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45f85;
              UnityEngine_GameObject__SetActive(pUVar18,uVar12 & 0xff,(MethodInfo *)0x0);
              if (bVar30 == 0) {
                return extraout_RAX_01;
              }
              pMVar31 = (MethodInfo *)0x0;
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45f97;
              pUVar18 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45f9f;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar18,pMVar31);
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45fa7;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pTVar16,pMVar31);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45fbf;
                il2cpp_runtime_helper_02337ed0();
              }
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45fc6;
              bVar15 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              if ((char)bVar15 == '\0') {
                return (System_String_o *)CONCAT44(extraout_var_06,bVar15);
              }
              if ((char)bVar11 == '\x01') {
                return (System_String_o *)CONCAT44(extraout_var_06,bVar15);
              }
              lVar4 = *(long *)&(pTVar16->fields).m_Color.fields;
              if (lVar4 == 0) {
                return (System_String_o *)0x0;
              }
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45ff0;
              bVar11 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar4 + 0x10),(MethodInfo *)0x0);
              if ((char)bVar11 != '\0') {
                return (System_String_o *)CONCAT44(extraout_var_07,bVar11);
              }
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b46002;
              pUVar18 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
              pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                        &(pTVar16->fields).m_Color.fields;
              if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                pTStack_e8 = (TMPro_TMP_Text_o *)0x3b46021;
                il2cpp_runtime_helper_02337ed0();
              }
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b46036;
              pDVar23 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                  (pUVar18,pGVar5,1,0,(MethodInfo *)0x0);
              *(DG_Tweening_Tween_o **)&(pTVar16->fields).m_RaycastTarget = pDVar23;
              goto label_03b46041;
            }
          }
        }
        else {
          if ((uint)*(byte *)((long)&(pTVar16->fields).m_RaycastPadding.fields.x + 1) == (uVar12 & 0xff)) {
            pSVar19 = (System_String_o *)0x0;
            pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45e22;
            ppMVar32 = (MethodInfo_25F3760 **)pTVar16;
            pUVar18 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
            if (pUVar18 == (UnityEngine_GameObject_o *)0x0) goto label_03b46192;
            pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45e35;
            bVar11 = UnityEngine_GameObject__get_activeSelf(pUVar18,(MethodInfo *)0x0);
            bVar9 = (byte)bVar11 ^ bVar30;
            if (bVar9 != 1) {
              return (System_String_o *)CONCAT71((int7)(CONCAT44(extraout_var_03,bVar11) >> 8),bVar9);
            }
          }
          *(byte *)((long)&(pTVar16->fields).m_RaycastPadding.fields.x + 1) = bVar30;
          __this_04 = (long *)&(pTVar16->fields).m_RaycastTarget;
          pDVar23 = *(DG_Tweening_Tween_o **)&(pTVar16->fields).m_RaycastTarget;
          if (pDVar23 != (DG_Tweening_Tween_o *)0x0) {
            pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45e59;
            DG_Tweening_TweenExtensions__Kill(pDVar23,0,(MethodInfo *)0x0);
          }
          *__this_04 = 0;
          pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45e6a;
          il2cpp_runtime_helper_022b4080(__this_04);
          if (bVar30 == 0) {
            if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b46156;
              il2cpp_runtime_helper_02337ed0();
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b4615d;
              bVar11 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar10 = (char)bVar11;
            }
            else {
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b46071;
              bVar11 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
              cVar10 = (char)bVar11;
            }
            if ((cVar10 != '\0') &&
               (pSVar6 = *(System_Collections_Generic_IEqualityComparer_TKey__o **)
                          &(pTVar16->fields).m_Color.fields.b,
               pSVar6 != (System_Collections_Generic_IEqualityComparer_TKey__o *)0x0)) {
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b46091;
              bVar11 = System_String__IsNullOrEmpty((System_String_o *)pSVar6[1].klass,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') {
                pTStack_e8 = (TMPro_TMP_Text_o *)0x3b460a3;
                pUVar18 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
                pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                          &(pTVar16->fields).m_Color.fields.b;
                if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                  pTStack_e8 = (TMPro_TMP_Text_o *)0x3b460c2;
                  il2cpp_runtime_helper_02337ed0();
                }
                pTStack_e8 = (TMPro_TMP_Text_o *)0x3b460d4;
                pDVar23 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                    (pUVar18,pGVar5,0,0,(MethodInfo *)0x0);
                *__this_04 = (long)pDVar23;
                pTStack_e8 = (TMPro_TMP_Text_o *)0x3b460e2;
                il2cpp_runtime_helper_022b4080(__this_04);
                t = (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)*__this_04;
                __this_03 = (TMPro_TMP_Text_o *)0x0;
                if (t != (System_Collections_Generic_Dictionary_ValueCollection_TKey__TValue__o *)0x0) {
                  pTStack_e8 = (TMPro_TMP_Text_o *)0x3b460f9;
                  action = (DG_Tweening_TweenCallback_o *)il2cpp_runtime_helper_023052d0(TypeInfo_TweenCallback);
                  pTStack_e8 = (TMPro_TMP_Text_o *)0x3b46113;
                  DG_Tweening_TweenCallback___ctor();
                  pSVar19 = (System_String_o *)
                            DG_Tweening_TweenSettingsExtensions__OnComplete_object_
                                      ((Il2CppObject *)t,action,MethodInfo_Tween_OnComplete_Tween);
                  return pSVar19;
                }
              }
            }
            pSVar19 = (System_String_o *)0x0;
            pTStack_e8 = (TMPro_TMP_Text_o *)0x3b4616f;
            ppMVar32 = (MethodInfo_25F3760 **)pTVar16;
            pUVar18 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
            if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
              pMVar31 = (MethodInfo *)0x0;
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b46180;
              UnityEngine_GameObject__SetActive(pUVar18,0,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pTVar16,pMVar31);
              return extraout_RAX_02;
            }
          }
          else {
            pSVar19 = (System_String_o *)0x0;
            pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45e7c;
            ppMVar32 = (MethodInfo_25F3760 **)pTVar16;
            pUVar18 = UnityEngine_Component__get_gameObject
                                ((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
            if (pUVar18 != (UnityEngine_GameObject_o *)0x0) {
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45e94;
              UnityEngine_GameObject__SetActive(pUVar18,1,(MethodInfo *)0x0);
              pMVar31 = (MethodInfo *)0x0;
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45e9e;
              pUVar18 = UnityEngine_Component__get_gameObject
                                  ((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45ea6;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshDescendantButtonWidths(pUVar18,pMVar31);
              pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45eae;
              Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshVisibilityLayout
                        ((Gisketch_Aottg2UI_State_GisketchUIBinding_o *)pTVar16,pMVar31);
              if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
                pTStack_e8 = (TMPro_TMP_Text_o *)0x3b46137;
                il2cpp_runtime_helper_02337ed0();
                pTStack_e8 = (TMPro_TMP_Text_o *)0x3b4613e;
                bVar11 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                pSVar19 = (System_String_o *)CONCAT44(extraout_var_08,bVar11);
                cVar10 = (char)bVar11;
              }
              else {
                pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45ecc;
                bVar11 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
                pSVar19 = (System_String_o *)CONCAT44(extraout_var_04,bVar11);
                cVar10 = (char)bVar11;
              }
              if (cVar10 != '\0') {
                lVar4 = *(long *)&(pTVar16->fields).m_Color.fields;
                pSVar19 = (System_String_o *)0x0;
                if (lVar4 != 0) {
                  pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45eec;
                  bVar11 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar4 + 0x10),(MethodInfo *)0x0)
                  ;
                  pSVar19 = (System_String_o *)CONCAT44(extraout_var_05,bVar11);
                  if ((char)bVar11 == '\0') {
                    pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45efe;
                    pUVar18 = UnityEngine_Component__get_gameObject
                                        ((UnityEngine_Component_o *)pTVar16,(MethodInfo *)0x0);
                    pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o **)
                              &(pTVar16->fields).m_Color.fields;
                    if (*(int *)(TypeInfo_GisketchMotion + 0xe4) == 0) {
                      pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45f1d;
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pTStack_e8 = (TMPro_TMP_Text_o *)0x3b45f32;
                    pDVar23 = Gisketch_Aottg2UI_Tweening_GisketchMotion__PlayNode
                                        (pUVar18,pGVar5,1,0,(MethodInfo *)0x0);
                    *__this_04 = (long)pDVar23;
label_03b46041:
                    pSVar19 = (System_String_o *)
                              il2cpp_runtime_helper_022b4080(&(pTVar16->fields).m_RaycastTarget,pDVar23);
                    return pSVar19;
                  }
                }
              }
              return pSVar19;
            }
          }
        }
      }
    }
  }
label_03b46192:
  pTStack_e8 = (TMPro_TMP_Text_o *)0x3b46197;
  il2cpp_runtime_helper_022b2c90();
  ppSVar28 = (System_String_o **)ppMVar32;
  pTStack_f8 = __this_03;
  pTStack_f0 = (TMPro_TMP_Text_o *)__this_04;
  pTStack_e8 = pTVar16;
  if (g_data_057a9cad == '\0') {
    il2cpp_runtime_helper_023445d0(&"false");
    il2cpp_runtime_helper_023445d0(&"true");
    ppSVar28 = &"1";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cad = '\x01';
  }
  if (extraout_DL == '\0') {
    ppSVar24 = (System_String_o **)&"false";
  }
  else {
    ppSVar24 = &"true";
  }
  if ((TMPro_TMP_Text_o *)ppMVar32 != (TMPro_TMP_Text_o *)0x0) {
    pTVar22 = (TMPro_TMP_Text_o *)*ppSVar24;
    if (g_data_057a9cac == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      g_data_057a9cac = '\x01';
    }
    pTStack_100 = (TMPro_TMP_Text_o *)0x0;
    bVar11 = System_String__IsNullOrEmpty(pSVar19,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') {
      __this_01 = (System_Int32_array *)(((TMPro_TMP_Text_o *)ppMVar32)->fields).m_CachedPtr;
      ppSVar28 = (System_String_o **)0x0;
      if (__this_01 == (System_Int32_array *)0x0) goto label_03b462ad;
      bVar11 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                         ((System_Collections_Generic_Dictionary_object__object__o *)__this_01,
                          (Il2CppObject *)pSVar19,(Il2CppObject **)&pTStack_100,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar11 != '\0') {
        pTVar22 = pTStack_100;
      }
    }
    ppSVar28 = (System_String_o **)pTVar22;
    bVar11 = System_String__op_Equality((System_String_o *)pTVar22,"1",(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      return (System_String_o *)CONCAT71((int7)(CONCAT44(extraout_var_09,bVar11) >> 8),1);
    }
    if (pTVar22 != (TMPro_TMP_Text_o *)0x0) {
      bVar11 = System_String__Equals_3af4de0((System_String_o *)pTVar22,"true",5,(MethodInfo *)0x0);
      return (System_String_o *)CONCAT44(extraout_var_10,bVar11);
    }
  }
label_03b462ad:
  il2cpp_runtime_helper_022b2c90();
  __this_05 = (MethodInfo_255AB70 **)ppSVar28;
  if (g_data_057a9ca2 == '\0') {
    __this_05 = &MethodInfo_Button_GetComponentsInChildren_Button;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca2 = '\x01';
  }
  if (((TMPro_TMP_Text_o *)ppSVar28 != (TMPro_TMP_Text_o *)0x0) &&
     (pSVar25 = UnityEngine_GameObject__GetComponentsInChildren_object_
                          ((UnityEngine_GameObject_o *)ppSVar28,1,MethodInfo_Button_GetComponentsInChildren_Button),
     __this_05 = (MethodInfo_255AB70 **)ppSVar28, pSVar25 != (System_Object_array *)0x0)) {
    uVar12 = (uint)pSVar25->max_length;
    pSVar19 = (System_String_o *)(ulong)uVar12;
    if (0 < (int)uVar12) {
      uVar12 = 0;
      do {
        if ((uint)pSVar19 <= uVar12) {
          il2cpp_runtime_helper_022b2ca0();
          __this_05 = (MethodInfo_255AB70 **)ppSVar28;
          goto label_03b46348;
        }
        __this_05 = (MethodInfo_255AB70 **)(TMPro_TMP_Text_o *)0x0;
        if ((UnityEngine_Component_o *)pSVar25->m_Items[(int)uVar12] == (UnityEngine_Component_o *)0x0)
        goto label_03b46348;
        pMVar31 = (MethodInfo *)0x0;
        ppSVar28 = (System_String_o **)
                   UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)pSVar25->m_Items[(int)uVar12],(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth
                  ((UnityEngine_GameObject_o *)ppSVar28,pMVar31);
        uVar12 = uVar12 + 1;
        uVar1 = (uint)pSVar25->max_length;
        pSVar19 = (System_String_o *)(ulong)uVar1;
      } while ((int)uVar12 < (int)uVar1);
    }
    return pSVar19;
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
  pGVar26 = (Gilzoide_FlexUi_FlexLayout_o *)
            UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
  pGVar27 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  if ((pGVar26 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
     (pGVar27 = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar26->klass == TypeInfo_RectTransform)) {
    pGVar27 = pGVar26;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar26 = pGVar27;
  bVar11 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pGVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return (System_String_o *)CONCAT44(extraout_var_11,bVar11);
  }
  if (pGVar27 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    pGVar26 = (Gilzoide_FlexUi_FlexLayout_o *)
              UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar27,(MethodInfo *)0x0);
    rect_00 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if ((pGVar26 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
       (rect_00 = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar26->klass == TypeInfo_RectTransform)) {
      rect_00 = pGVar26;
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = UnityEngine_Object__op_Equality
                       ((UnityEngine_Object_o *)rect_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if ((char)bVar11 != '\0') {
      UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
                ((UnityEngine_RectTransform_o *)pGVar27,(MethodInfo *)0x0);
      return extraout_RAX_03;
    }
    pGVar26 = rect_00;
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
              ((UnityEngine_RectTransform_o *)rect_00,(MethodInfo *)0x0);
    if (rect_00 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGVar27 = (Gilzoide_FlexUi_FlexLayout_o *)
                UnityEngine_Component__GetComponentInParent_object_
                          ((UnityEngine_Component_o *)rect_00,MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar26 = pGVar27;
      bVar11 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pGVar27,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        if (pGVar27 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b464eb;
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(pGVar27,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                ((UnityEngine_RectTransform_o *)rect_00,(MethodInfo *)0x0);
      return extraout_RAX_04;
    }
  }
label_03b464eb:
  il2cpp_runtime_helper_022b2c90();
  if (pGVar26 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    bVar11 = System_String__IsNullOrEmpty((System_String_o *)(pGVar26->fields).m_CachedPtr,(MethodInfo *)0x0);
    return (System_String_o *)(CONCAT71((int7)(CONCAT44(extraout_var_12,bVar11) >> 8),(char)bVar11) ^ 1);
  }
  return (System_String_o *)0x0;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$GetBool
// il2cpp: bool Gisketch_Aottg2UI_State_GisketchUIState__GetBool (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, System_String_o* key, bool fallback, const MethodInfo* method);
// 0x3b461a0

bool_conflict
Gisketch_Aottg2UI_State_GisketchUIState__GetBool
          (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,System_String_o *key,bool_conflict fallback,
          MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  uint uVar2;
  undefined8 *puVar3;
  System_Object_array *pSVar4;
  Gilzoide_FlexUi_FlexLayout_o *pGVar5;
  Gilzoide_FlexUi_FlexLayout_o *pGVar6;
  uint uVar7;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_01;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar8;
  Gilzoide_FlexUi_FlexLayout_o *rect;
  Gisketch_Aottg2UI_State_GisketchUIState_o *local_20;
  
  __this_01 = __this;
  if (g_data_057a9cad == '\0') {
    il2cpp_runtime_helper_023445d0(&"false");
    il2cpp_runtime_helper_023445d0(&"true");
    __this_01 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)&"1";
    il2cpp_runtime_helper_023445d0();
    g_data_057a9cad = '\x01';
  }
  if ((char)fallback == '\0') {
    puVar3 = &"false";
  }
  else {
    puVar3 = &"true";
  }
  if (__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
    pGVar8 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)*puVar3;
    if (g_data_057a9cac == '\0') {
      il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
      g_data_057a9cac = '\x01';
    }
    local_20 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
    bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields)._values;
      __this_01 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
      if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_03b462ad;
      bVar1 = System_Collections_Generic_Dictionary_object__object___TryGetValue
                        (__this_00,(Il2CppObject *)key,(Il2CppObject **)&local_20,MethodInfo_Boolean_TryGetValue);
      if ((char)bVar1 != '\0') {
        pGVar8 = local_20;
      }
    }
    __this_01 = pGVar8;
    bVar1 = System_String__op_Equality((System_String_o *)pGVar8,"1",(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar1 >> 8),1);
    }
    if (pGVar8 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      bVar1 = System_String__Equals_3af4de0((System_String_o *)pGVar8,"true",5,(MethodInfo *)0x0);
      return bVar1;
    }
  }
label_03b462ad:
  il2cpp_runtime_helper_022b2c90();
  pGVar8 = __this_01;
  if (g_data_057a9ca2 == '\0') {
    pGVar8 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)&MethodInfo_Button_GetComponentsInChildren_Button;
    il2cpp_runtime_helper_023445d0();
    g_data_057a9ca2 = '\x01';
  }
  if ((__this_01 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) &&
     (pSVar4 = UnityEngine_GameObject__GetComponentsInChildren_object_
                         ((UnityEngine_GameObject_o *)__this_01,1,MethodInfo_Button_GetComponentsInChildren_Button), pGVar8 = __this_01,
     pSVar4 != (System_Object_array *)0x0)) {
    uVar2 = (uint)pSVar4->max_length;
    if (0 < (int)uVar2) {
      uVar7 = 0;
      do {
        if (uVar2 <= uVar7) {
          il2cpp_runtime_helper_022b2ca0();
          pGVar8 = __this_01;
          goto label_03b46348;
        }
        pGVar8 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0;
        if ((UnityEngine_Component_o *)pSVar4->m_Items[(int)uVar7] == (UnityEngine_Component_o *)0x0)
        goto label_03b46348;
        method_00 = (MethodInfo *)0x0;
        __this_01 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)
                    UnityEngine_Component__get_gameObject
                              ((UnityEngine_Component_o *)pSVar4->m_Items[(int)uVar7],(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIBinding__RefreshButtonWidth
                  ((UnityEngine_GameObject_o *)__this_01,method_00);
        uVar7 = uVar7 + 1;
        uVar2 = (uint)pSVar4->max_length;
      } while ((int)uVar7 < (int)uVar2);
    }
    return uVar2;
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
  pGVar5 = (Gilzoide_FlexUi_FlexLayout_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)pGVar8,(MethodInfo *)0x0);
  pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
  if ((pGVar5 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
     (pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar5->klass == TypeInfo_RectTransform)) {
    pGVar6 = pGVar5;
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pGVar5 = pGVar6;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return bVar1;
  }
  if (pGVar6 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    pGVar5 = (Gilzoide_FlexUi_FlexLayout_o *)
             UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pGVar6,(MethodInfo *)0x0);
    rect = (Gilzoide_FlexUi_FlexLayout_o *)0x0;
    if ((pGVar5 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) &&
       (rect = (Gilzoide_FlexUi_FlexLayout_o *)0x0, pGVar5->klass == TypeInfo_RectTransform)) {
      rect = pGVar5;
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
                ((UnityEngine_RectTransform_o *)pGVar6,(MethodInfo *)0x0);
      return extraout_EAX;
    }
    pGVar5 = rect;
    UnityEngine_UI_LayoutRebuilder__MarkLayoutForRebuild
              ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
    if (rect != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
      pGVar6 = (Gilzoide_FlexUi_FlexLayout_o *)
               UnityEngine_Component__GetComponentInParent_object_
                         ((UnityEngine_Component_o *)rect,MethodInfo_FlexLayout_GetComponentInParent_FlexLayout);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pGVar5 = pGVar6;
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pGVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        if (pGVar6 == (Gilzoide_FlexUi_FlexLayout_o *)0x0) goto label_03b464eb;
        Gilzoide_FlexUi_FlexLayout__RefreshRootLayoutImmediate(pGVar6,(MethodInfo *)0x0);
      }
      if (*(int *)(TypeInfo_LayoutRebuilder + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_UI_LayoutRebuilder__ForceRebuildLayoutImmediate
                ((UnityEngine_RectTransform_o *)rect,(MethodInfo *)0x0);
      return extraout_EAX_00;
    }
  }
label_03b464eb:
  il2cpp_runtime_helper_022b2c90();
  if (pGVar5 != (Gilzoide_FlexUi_FlexLayout_o *)0x0) {
    uVar2 = System_String__IsNullOrEmpty((System_String_o *)(pGVar5->fields).m_CachedPtr,(MethodInfo *)0x0);
    return uVar2 ^ 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.State.GisketchUIState$$.ctor
// il2cpp: void Gisketch_Aottg2UI_State_GisketchUIState___ctor (Gisketch_Aottg2UI_State_GisketchUIState_o* __this, const MethodInfo* method);
// 0x3b46af0

void Gisketch_Aottg2UI_State_GisketchUIState___ctor
               (Gisketch_Aottg2UI_State_GisketchUIState_o *__this,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  
  if (g_data_057a9cae == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    g_data_057a9cae = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
  (__this->fields)._values = (System_Collections_Generic_Dictionary_string__string__o *)__this_00;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


