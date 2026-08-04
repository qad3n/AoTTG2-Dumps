// Type: CustomSkins.HumanCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomSkins/HumanCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/HumanCustomSkinLoader.cs
// --------------------------------

// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$.ctor
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6___ctor (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x40908e0

void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6___ctor
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_IDisposable_Dispose (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4091990

void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_IDisposable_Dispose
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  return;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$MoveNext
// il2cpp: bool CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__MoveNext (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x40919a0

bool_conflict
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__MoveNext
          (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  Characters_HumanSetup_o *__this_00;
  System_Object_array *pSVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  System_Threading_CancellationTokenSource_o *__this_01;
  long lVar5;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  bool_conflict bVar6;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  int32_t *piVar7;
  System_String_array *pSVar8;
  Characters_HumanSetup_o *pCVar9;
  UnityEngine_Coroutine_o *pUVar10;
  undefined8 uVar11;
  UnityEngine_Object_o *x;
  UnityEngine_Material_o *value;
  long *plVar12;
  MethodInfo *method_00;
  uint uVar13;
  Characters_HumanSetup_o *unaff_RBX;
  MethodInfo *method_01;
  UnityEngine_Vector2_o *result;
  Characters_HumanSetup_o *__this_06;
  Il2CppRGCTXData *unaff_R12;
  _union_249689 unaff_R13;
  undefined1 auVar14 [12];
  System_Collections_Generic_List_T__o *pSVar15;
  System_Collections_Generic_List_Enumerator_T__c *pSVar16;
  UnityEngine_Object_o *x_00;
  UnityEngine_Object_o *pUVar17;
  undefined1 auStack_78 [16];
  UnityEngine_Object_o *pUStack_68;
  Characters_HumanSetup_o *pCStack_60;
  Il2CppRGCTXData *pIStack_58;
  _union_249689 _Stack_50;
  Characters_HumanSetup_o *pCStack_48;
  CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *pCStack_40;
  
  __this_06 = (Characters_HumanSetup_o *)__this;
  if (g_data_057ac419 == '\0') {
    pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x40919c3;
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanSetup_GetComponent_HumanSetup);
    pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x40919cf;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x40919db;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x40919e7;
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_06 = (Characters_HumanSetup_o *)&MethodInfo_Boolean_get_Value;
    pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x40919f3;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac419 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (Characters_HumanSetup_o *)(__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    goto label_04091d17;
  }
  if (iVar2 != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  pSVar3 = (__this->fields).data;
  if (pSVar3 != (System_Object_array *)0x0) {
    if ((int)pSVar3->max_length == 0) goto label_04091e5f;
    if ((__this_00 != (Characters_HumanSetup_o *)0x0) &&
       (__this_06 = (Characters_HumanSetup_o *)pSVar3->m_Items[0], __this_06 != (Characters_HumanSetup_o *)0x0
       )) {
      unaff_RBX = (Characters_HumanSetup_o *)&g_data_057b9b70;
      if ((((Characters_BaseCharacter_c *)__this_06->klass)->_1).element_class ==
          *(Il2CppClass **)(g_data_057b9bb8 + 0x40)) {
        pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091a65;
        piVar7 = (int32_t *)il2cpp_runtime_helper_02305440();
        *(int32_t *)&(__this_00->fields)._mount_3dmg = *piVar7;
        pSVar3 = (__this->fields).data;
        if (pSVar3 != (System_Object_array *)0x0) {
          if ((uint)pSVar3->max_length < 2) goto label_04091e5f;
          __this_06 = (Characters_HumanSetup_o *)pSVar3->m_Items[1];
          if (__this_06 != (Characters_HumanSetup_o *)0x0) {
            if ((Characters_BaseCharacter_c *)__this_06->klass != g_data_057b9c00) goto label_04091ada;
            unaff_RBX = (Characters_HumanSetup_o *)0x0;
            pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091aab;
            pSVar8 = System_String__Split((System_String_o *)__this_06,0x2c,0,(MethodInfo *)0x0);
            __this_06 = (Characters_HumanSetup_o *)&(__this->fields)._skinUrls_5__2;
            (__this->fields)._skinUrls_5__2 = pSVar8;
            pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091abb;
            il2cpp_runtime_helper_022b4080(__this_06,pSVar8);
            (__this->fields)._partId_5__3 = 0;
            goto label_04091adf;
          }
        }
      }
      else {
label_04091ada:
        pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091adf;
        il2cpp_runtime_helper_022b2fd0();
label_04091adf:
        do {
          uVar13 = (uint)unaff_RBX;
          switch(unaff_RBX) {
          case (Characters_HumanSetup_o *)0x0:
            if (__this_00 == (Characters_HumanSetup_o *)0x0) goto label_04091e5a;
            if (-1 < *(int *)&(__this_00->fields)._mount_3dmg) goto label_04091bc2;
            break;
          default:
switchD_04091af8_caseD_1:
            if (__this_00 != (Characters_HumanSetup_o *)0x0) goto label_04091bc2;
            goto label_04091e5a;
          case (Characters_HumanSetup_o *)0xa:
            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) ||
               (lVar5 = *(long *)(lVar5 + 0x48), lVar5 == 0)) goto label_04091e5a;
            if (*(char *)(lVar5 + 0x11) != '\0') goto switchD_04091af8_caseD_1;
            break;
          case (Characters_HumanSetup_o *)0xc:
            if (__this_00 == (Characters_HumanSetup_o *)0x0) goto label_04091e5a;
            pPVar4 = (Photon_Pun_PhotonView_o *)(__this_00->fields)._mount_chest;
            __this_06 = (Characters_HumanSetup_o *)0x0;
            if (pPVar4 == (Photon_Pun_PhotonView_o *)0x0) goto label_04091e5a;
            pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091c5a;
            pCVar9 = (Characters_HumanSetup_o *)
                     UnityEngine_GameObject__GetComponent_object_
                               ((UnityEngine_GameObject_o *)pPVar4,MethodInfo_Human_GetComponent_Human);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091c75;
              il2cpp_runtime_helper_02337ed0();
            }
            pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091c81;
            __this_06 = pCVar9;
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar6 != '\0') {
              unaff_RBX = (Characters_HumanSetup_o *)0x0;
              if (pCVar9 == (Characters_HumanSetup_o *)0x0) goto label_04091e5a;
              pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091c9c;
              bVar6 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pCVar9,(MethodInfo *)0x0);
              if ((char)bVar6 != '\0') {
                pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091cae;
                bVar6 = Characters_BaseCharacter__IsMine
                                  ((Characters_BaseCharacter_o *)pCVar9,(MethodInfo *)0x0);
                __this_06 = pCVar9;
                if ((char)bVar6 == '\0') break;
              }
            }
label_04091bc2:
            pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091bd9;
            __this_06 = __this_00;
            unaff_RBX = (Characters_HumanSetup_o *)
                        (*(((Characters_BaseCharacter_c *)__this_00->klass)->vtable)._5_unknown.methodPtr)
                                  (__this_00,(ulong)(uint)(__this->fields)._partId_5__3,
                                   (((Characters_BaseCharacter_c *)__this_00->klass)->vtable)._5_unknown.
                                   method);
            if (unaff_RBX != (Characters_HumanSetup_o *)0x0) {
              pSVar8 = (__this->fields)._skinUrls_5__2;
              if (pSVar8 == (System_String_array *)0x0) goto label_04091e5a;
              uVar13 = (__this->fields)._partId_5__3;
              if ((uint)pSVar8->max_length <= uVar13) goto label_04091e5f;
              __this_06 = (Characters_HumanSetup_o *)pSVar8->m_Items[(int)uVar13];
              method_01 = (MethodInfo *)0x0;
              pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091c0b;
              bVar6 = System_String__IsNullOrEmpty((System_String_o *)__this_06,(MethodInfo *)0x0);
              if ((char)bVar6 == '\0') {
                pSVar8 = (__this->fields)._skinUrls_5__2;
                if (pSVar8 == (System_String_array *)0x0) goto label_04091e5a;
                uVar13 = (__this->fields)._partId_5__3;
                if ((uint)pSVar8->max_length <= uVar13) goto label_04091e5f;
                pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091d0f;
                __this_06 = unaff_RBX;
                bVar6 = CustomSkins_BaseCustomSkinPart__LoadCache
                                  ((CustomSkins_BaseCustomSkinPart_o *)unaff_RBX,pSVar8->m_Items[(int)uVar13],
                                   method_00);
                if ((char)bVar6 == '\0') {
                  pSVar8 = (__this->fields)._skinUrls_5__2;
                  if (pSVar8 == (System_String_array *)0x0) goto label_04091e5a;
                  uVar13 = (__this->fields)._partId_5__3;
                  if ((uint)pSVar8->max_length <= uVar13) goto label_04091e5f;
                  unaff_R12 = (Il2CppRGCTXData *)pSVar8->m_Items[(int)uVar13];
                  if (g_data_057ac42a == '\0') {
                    pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091dd8;
                    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkin_d__12);
                    g_data_057ac42a = '\x01';
                  }
                  pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091dee;
                  pCVar9 = (Characters_HumanSetup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkin_d__12);
                  pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091dfb;
                  __this_06 = pCVar9;
                  System_Object___ctor((Il2CppObject *)pCVar9,(MethodInfo *)0x0);
                  *(undefined4 *)&(pCVar9->fields).m_CachedPtr = 0;
                  unaff_R13.genericMethod = (void *)0x0;
                  if (pCVar9 != (Characters_HumanSetup_o *)0x0) {
                    (pCVar9->fields)._mount_3dmg = (UnityEngine_GameObject_o *)unaff_RBX;
                    pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091e1f;
                    il2cpp_runtime_helper_022b4080(&(pCVar9->fields)._mount_3dmg,unaff_RBX);
                    (pCVar9->fields)._mount_chest = (UnityEngine_GameObject_o *)unaff_R12;
                    pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091e2e;
                    il2cpp_runtime_helper_022b4080(&(pCVar9->fields)._mount_chest,unaff_R12);
                    pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091e3b;
                    pUVar10 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                        ((UnityEngine_MonoBehaviour_o *)__this_00,
                                         (System_Collections_IEnumerator_o *)pCVar9,(MethodInfo *)0x0);
                    (__this->fields).__2__current = (Il2CppObject *)pUVar10;
                    pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091e4b;
                    uVar11 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pUVar10);
                    (__this->fields).__1__state = 1;
                    return (bool_conflict)CONCAT71((int7)((ulong)uVar11 >> 8),1);
                  }
                  goto label_04091e5a;
                }
              }
              else {
                pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091c1b;
                CustomSkins_BaseCustomSkinPart__ResetToDefault
                          ((CustomSkins_BaseCustomSkinPart_o *)unaff_RBX,method_01);
                __this_06 = unaff_RBX;
              }
            }
            break;
          case (Characters_HumanSetup_o *)0xf:
            pSVar8 = (__this->fields)._skinUrls_5__2;
            if (pSVar8 == (System_String_array *)0x0) goto label_04091e5a;
            if (0xf < (int)pSVar8->max_length) {
              if (__this_00 == (Characters_HumanSetup_o *)0x0) goto label_04091e5a;
              __this_06 = (Characters_HumanSetup_o *)pSVar8->m_Items[0xf];
              result = (UnityEngine_Vector2_o *)((long)&(__this_00->fields)._mount_3dmg + 4);
label_04091cdf:
              pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091ce6;
              System_Single__TryParse((System_String_o *)__this_06,(float *)result,(MethodInfo *)0x0);
            }
            break;
          case (Characters_HumanSetup_o *)0x10:
          case (Characters_HumanSetup_o *)0x12:
            lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            if (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x20), lVar5 == 0)) ||
               (lVar5 = *(long *)(lVar5 + 0x50), lVar5 == 0)) goto label_04091e5a;
            if (*(char *)(lVar5 + 0x11) != '\0') {
              if (uVar13 == 0x11) goto switchD_04091af8_caseD_11;
              goto switchD_04091af8_caseD_1;
            }
            break;
          case (Characters_HumanSetup_o *)0x11:
switchD_04091af8_caseD_11:
            pSVar8 = (__this->fields)._skinUrls_5__2;
            if (pSVar8 == (System_String_array *)0x0) goto label_04091e5a;
            uVar1 = (uint)pSVar8->max_length;
            if ((int)uVar13 < (int)uVar1) {
              if (uVar13 < uVar1) {
                if (__this_00 != (Characters_HumanSetup_o *)0x0) {
                  __this_06 = (Characters_HumanSetup_o *)pSVar8->m_Items[(int)uVar13];
                  result = (UnityEngine_Vector2_o *)&(__this_00->fields)._mount_gas_l;
                  goto label_04091cdf;
                }
                goto label_04091e5a;
              }
              goto label_04091e5f;
            }
          }
label_04091d17:
          uVar13 = (__this->fields)._partId_5__3 + 1;
          unaff_RBX = (Characters_HumanSetup_o *)(ulong)uVar13;
          (__this->fields)._partId_5__3 = uVar13;
        } while ((int)uVar13 < 0x16);
        if (__this_00 != (Characters_HumanSetup_o *)0x0) {
          pPVar4 = (Photon_Pun_PhotonView_o *)(__this_00->fields)._mount_chest;
          __this_06 = (Characters_HumanSetup_o *)0x0;
          if (pPVar4 != (Photon_Pun_PhotonView_o *)0x0) {
            pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091d50;
            pCVar9 = (Characters_HumanSetup_o *)
                     UnityEngine_GameObject__GetComponent_object_
                               ((UnityEngine_GameObject_o *)pPVar4,MethodInfo_HumanSetup_GetComponent_HumanSetup);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091d6b;
              il2cpp_runtime_helper_02337ed0();
            }
            pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091d77;
            __this_06 = pCVar9;
            bVar6 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar6 == '\0') {
label_04091d8e:
              *(undefined1 *)((long)&(__this_00->fields)._mount_gas_l + 4) = 1;
              return 0;
            }
            unaff_RBX = (Characters_HumanSetup_o *)0x0;
            if (pCVar9 != (Characters_HumanSetup_o *)0x0) {
              pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091d8e;
              Characters_HumanSetup__ReapplyCharacterEffectsToExistingParts(pCVar9,(MethodInfo *)0x0);
              goto label_04091d8e;
            }
          }
        }
      }
    }
  }
label_04091e5a:
  pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091e5f;
  il2cpp_runtime_helper_022b2c90();
label_04091e5f:
  pCStack_40 = (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *)0x4091e64;
  il2cpp_runtime_helper_022b2ca0();
  pCStack_60 = unaff_RBX;
  pIStack_58 = unaff_R12;
  _Stack_50 = unaff_R13;
  pCStack_48 = __this_00;
  pCStack_40 = __this;
  if (g_data_057ac42f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ac42f = '\x01';
  }
  bVar6 = (*(((Characters_BaseCharacter_c *)__this_06->klass)->vtable)._4_unknown.methodPtr)
                    (__this_06,(((Characters_BaseCharacter_c *)__this_06->klass)->vtable)._4_unknown.method);
  if (((char)bVar6 != '\0') &&
     (__this_01 = (__this_06->fields).m_CancellationTokenSource,
     __this_01 != (System_Threading_CancellationTokenSource_o *)0x0)) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_78,
               (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T_Enumerator_UnityEngine_Renderer_GetEnumerator);
    pSVar15 = (System_Collections_Generic_List_T__o *)auStack_78._0_8_;
    pSVar16 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_78._8_8_;
    while (x_00 = pUStack_68, __this_02.fields._8_8_ = pSVar16, __this_02.fields._list = pSVar15,
          __this_02.fields._current = (Il2CppObject *)x_00,
          bVar6 = System_Collections_Generic_List_Enumerator_object___MoveNext
                            (__this_02,(MethodInfo_321A1D0 *)&stack0xffffffffffffff70), (char)bVar6 != '\0') {
      pUVar17 = x_00;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Inequality(x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      pUStack_68 = pUVar17;
      if ((char)bVar6 != '\0') {
        if (x_00 == (UnityEngine_Object_o *)0x0) {
          auVar14 = il2cpp_runtime_helper_022b2c90();
          if (auVar14._8_4_ == 1) {
            plVar12 = (long *)__cxa_begin_catch(auVar14._0_8_);
            lVar5 = *plVar12;
            __cxa_end_catch();
            __this_04.fields._8_8_ = pSVar16;
            __this_04.fields._list = pSVar15;
            __this_04.fields._current = (Il2CppObject *)pUVar17;
            System_Collections_Generic_List_Enumerator_object___Dispose
                      (__this_04,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
            if (lVar5 == 0) {
              return extraout_EAX_00;
            }
            il2cpp_runtime_helper_022fefe0(lVar5);
          }
          __this_05.fields._8_8_ = pSVar16;
          __this_05.fields._list = pSVar15;
          __this_05.fields._current = (Il2CppObject *)pUVar17;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_05,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
          _Unwind_Resume(auVar14._0_8_);
        }
        UnityEngine_Renderer__set_enabled((UnityEngine_Renderer_o *)x_00,1,(MethodInfo *)0x0);
        x = (UnityEngine_Object_o *)
            UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x_00,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        pUStack_68 = pUVar17;
        if ((char)bVar6 != '\0') {
          value = UnityEngine_Renderer__get_sharedMaterial((UnityEngine_Renderer_o *)x_00,(MethodInfo *)0x0);
          UnityEngine_Renderer__set_material((UnityEngine_Renderer_o *)x_00,value,(MethodInfo *)0x0);
          pUStack_68 = pUVar17;
        }
      }
    }
    __this_03.fields._8_8_ = pSVar16;
    __this_03.fields._list = pSVar15;
    __this_03.fields._current = (Il2CppObject *)x_00;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff70);
    bVar6 = extraout_EAX;
  }
  return bVar6;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x40920c0

Il2CppObject *
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_Reset (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x40920d0

void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_Reset
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_get_Current (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4092110

Il2CppObject *
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_get_Current
          (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.HumanCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_HumanCustomSkinLoader__get_RendererIdPrefix (CustomSkins_HumanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4090830

System_String_o *
CustomSkins_HumanCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_HumanCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (g_data_057ac415 == '\0') {
    il2cpp_runtime_helper_023445d0(&"human");
    g_data_057ac415 = '\x01';
  }
  return "human";
}


// CustomSkins.HumanCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_HumanCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x4090860

System_Collections_IEnumerator_o *
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_HumanCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ac416 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinsFromRPC_d__6);
    g_data_057ac416 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinsFromRPC_d__6);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[2].monitor = data;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,data);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// CustomSkins.HumanCustomSkinLoader$$GetCustomSkinPartPublic
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_HumanCustomSkinLoader__GetCustomSkinPartPublic (CustomSkins_HumanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x4090900

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_HumanCustomSkinLoader__GetCustomSkinPartPublic
          (CustomSkins_HumanCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  CustomSkins_BaseCustomSkinPart_o *pCVar1;
  
  vtableDispatch = (__this->klass->vtable)._5_GetCustomSkinPart.methodPtr;
  pCVar1 = (CustomSkins_BaseCustomSkinPart_o *)
           (*vtableDispatch)
                     (__this,partId,(__this->klass->vtable)._5_GetCustomSkinPart.method,vtableDispatch)
  ;
  return pCVar1;
}


// CustomSkins.HumanCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_HumanCustomSkinLoader__GetCustomSkinPart (CustomSkins_HumanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x4090920

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_HumanCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_HumanCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  int *piVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_Object_o *pUVar4;
  char *pcVar5;
  MethodInfo *pMVar6;
  Characters_HookUseable_o *pCVar7;
  System_Nullable_Vector2__o textureScale;
  bool_conflict bVar8;
  Il2CppClass *pIVar9;
  System_String_o *pSVar10;
  Il2CppRGCTXData *x;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_GameObject_o *pUVar11;
  Il2CppClass *pIVar12;
  System_Collections_Generic_List_Renderer__o *renderers;
  undefined8 *puVar13;
  CustomSkins_BaseCustomSkinPart_o *pCVar14;
  uint *in_RCX;
  System_Collections_Generic_List_Renderer__o *renderers_00;
  int32_t iVar15;
  undefined4 in_register_00000034;
  UnityEngine_Object_Fields UVar16;
  Il2CppClass *__this_01;
  int32_t in_R8D;
  void *in_R9;
  float fVar17;
  MethodInfo *in_stack_ffffffffffffff98;
  MethodInfo *in_stack_ffffffffffffffc0;
  float fStack_38;
  
  UVar16.m_CachedPtr = CONCAT44(in_register_00000034,partId);
  if (g_data_057ac417 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinPart);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_DummyHuman_GetComponent_DummyHuman);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanSetup_GetComponent_HumanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Human_GetComponent_Human);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HookCustomSkinPart);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCostumeCustomSkinPart);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanHairCustomSkinPart);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_MeleeWeaponTrail);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Renderer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_MeleeWeaponTrail);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WeaponTrailCustomSkinPart);
    il2cpp_runtime_helper_023445d0(&"Could not find HumanSetup component on ");
    il2cpp_runtime_helper_023445d0(&"3dmg_smoke");
    il2cpp_runtime_helper_023445d0(&"Body");
    il2cpp_runtime_helper_023445d0(&"char_cap");
    g_data_057ac417 = '\x01';
  }
  pUVar11 = (__this->fields)._owner;
  __this_01 = (Il2CppClass *)0x0;
  if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_04091846;
  pIVar9 = (Il2CppClass *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_DummyHuman_GetComponent_DummyHuman);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar16.m_CachedPtr = 0;
  __this_01 = pIVar9;
  bVar8 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    pUVar11 = (__this->fields)._owner;
    __this_01 = (Il2CppClass *)0x0;
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_04091846;
    pIVar9 = (Il2CppClass *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Human_GetComponent_Human);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar16.m_CachedPtr = 0;
    __this_01 = pIVar9;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (pIVar9 == (Il2CppClass *)0x0) goto label_04091846;
      pUVar4 = *(UnityEngine_Object_o **)&(pIVar9->_2).naturalAligment;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar16.m_CachedPtr = 0;
      bVar8 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        x = *(Il2CppRGCTXData **)&(pIVar9->_2).naturalAligment;
        iVar2 = *(int *)(TypeInfo_Object + 0xe4);
        goto joined_r0x04090c9a;
      }
    }
    pUVar11 = (__this->fields)._owner;
    __this_01 = (Il2CppClass *)0x0;
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_04091846;
    x = (Il2CppRGCTXData *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_HumanSetup_GetComponent_HumanSetup);
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (pIVar9 == (Il2CppClass *)0x0) goto label_04091846;
    x = *(Il2CppRGCTXData **)&(pIVar9->_1).this_arg.bits;
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
joined_r0x04090c9a:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  UVar16.m_CachedPtr = 0;
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._owner;
    __this_01 = (Il2CppClass *)0x0;
    if (pUVar4 != (UnityEngine_Object_o *)0x0) {
      pSVar10 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0);
      pSVar10 = System_String__Concat_3ae5ba0("Could not find HumanSetup component on ",pSVar10,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar10,(MethodInfo *)0x0);
      return (CustomSkins_BaseCustomSkinPart_o *)0x0;
    }
    goto label_04091846;
  }
  fStack_38 = SUB84(__this,0);
  pIVar9 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
  UVar16.m_CachedPtr = (intptr_t)MethodInfo_List_1_UnityEngine_Renderer;
  __this_01 = pIVar9;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pIVar9,(MethodInfo_362B8B0 *)MethodInfo_List_1_UnityEngine_Renderer);
  pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)0x0;
  in_RCX = &switchD_04090bdc::switchdataD_00d992f0;
  switch(partId) {
  case 0:
    iVar15 = (__this->fields)._horseViewId;
    if (-1 < iVar15) {
      pIVar12 = (Il2CppClass *)Photon_Pun_PhotonView__Find(iVar15,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UVar16.m_CachedPtr = 0;
      __this_01 = pIVar12;
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pIVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        if (pIVar12 == (Il2CppClass *)0x0) goto label_04091846;
        pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar12,(MethodInfo *)0x0);
        CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName
                  ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                   (System_Collections_Generic_List_Renderer__o *)pIVar9,pUVar11,"Body",
                   (MethodInfo *)0x0);
      }
    }
    pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,0,(MethodInfo *)0x0);
    pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
    bVar8 = 0;
    goto label_04091647;
  case 1:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x25].method,(MethodInfo *)0x0);
    in_RCX = (uint *)0x0;
    UVar16.m_CachedPtr = (intptr_t)pIVar9;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x26].method,(MethodInfo *)0x0);
    __this_01 = (Il2CppClass *)0x0;
    if (x[0x2d].method == (MethodInfo *)0x0) goto label_04091846;
    pSVar10 = Characters_HumanSetupMeshes__GetHairMesh
                        ((Characters_HumanSetupMeshes_o *)x[0x2d].method,(MethodInfo *)0x0);
    in_RCX = *(uint **)(g_data_057b9c00 + 0xb8);
    UVar16.m_CachedPtr = (intptr_t)((System_String_o *)in_RCX)->klass;
    bVar8 = System_String__op_Equality(pSVar10,(System_String_o *)UVar16.m_CachedPtr,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      __this_01 = (Il2CppClass *)0x0;
      if (x[0x2e].method == (MethodInfo *)0x0) goto label_04091846;
      pIVar12 = (Il2CppClass *)
                Characters_HumanSetupTextures__GetHairTexture
                          ((Characters_HumanSetupTextures_o *)x[0x2e].method,(MethodInfo *)0x0);
    }
    else {
      pIVar12 = (Il2CppClass *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,1,(MethodInfo *)0x0);
    pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanHairCustomSkinPart);
    iVar15 = 1000000;
    goto label_04091829;
  case 2:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x22].method,(MethodInfo *)0x0);
    iVar15 = 2;
    break;
  case 3:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x24].method,(MethodInfo *)0x0);
    iVar15 = 3;
    break;
  case 4:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x23].method,(MethodInfo *)0x0);
    iVar15 = 4;
    break;
  case 5:
    if (x != (Il2CppRGCTXData *)0x0) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x27].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x28].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x29].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x1e].method,(MethodInfo *)0x0);
      pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                          ((CustomSkins_BaseCustomSkinLoader_o *)__this,5,(MethodInfo *)0x0);
      pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanCostumeCustomSkinPart);
      iVar15 = 1000000;
label_04091308:
      CustomSkins_BaseCustomSkinPart___ctor
                (pCVar14,(CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,pSVar10,iVar15,
                 (System_Nullable_Vector2__o)ZEXT812(0),1,in_stack_ffffffffffffffc0);
      return pCVar14;
    }
    goto label_04091846;
  case 6:
    if (x != (Il2CppRGCTXData *)0x0) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x15].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x16].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x2a].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x20].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x21].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x2b].method,(MethodInfo *)0x0);
      pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                          ((CustomSkins_BaseCustomSkinLoader_o *)__this,6,(MethodInfo *)0x0);
      pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanCostumeCustomSkinPart);
      iVar15 = 2000000;
      goto label_04091308;
    }
    goto label_04091846;
  case 7:
    if (x != (Il2CppRGCTXData *)0x0) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x1d].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x19].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x1a].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x1b].method,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x1c].method,(MethodInfo *)0x0);
      pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                          ((CustomSkins_BaseCustomSkinLoader_o *)__this,7,(MethodInfo *)0x0);
      pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
      iVar15 = 500000;
      goto label_04091308;
    }
label_04091846:
    il2cpp_runtime_helper_022b2c90();
    textureScale.fields.value.fields.y = fStack_38;
    textureScale.fields._0_8_ = in_stack_ffffffffffffffc0;
    CustomSkins_BaseCustomSkinPart___ctor
              ((CustomSkins_BaseCustomSkinPart_o *)__this_01,
               (CustomSkins_BaseCustomSkinLoader_o *)UVar16.m_CachedPtr,renderers_00,(System_String_o *)in_RCX
               ,in_R8D,textureScale,1,in_stack_ffffffffffffff98);
    ((_union_251159 *)&(__this_01->_1).element_class)->genericMethod = in_R9;
    pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)
              il2cpp_runtime_helper_022b4080((_union_251159 *)&(__this_01->_1).element_class,in_R9);
    return pCVar14;
  case 8:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x11].method,(MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x12].method,(MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x13].method,(MethodInfo *)0x0);
    if (*(int *)(x + 0x3a) != 2) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x17].method,(MethodInfo *)0x0);
    }
    iVar15 = 8;
    goto label_040913da;
  case 9:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x14].method,(MethodInfo *)0x0);
    if (*(int *)(x + 0x3a) != 2) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,
                 (UnityEngine_GameObject_o *)x[0x18].method,(MethodInfo *)0x0);
    }
    iVar15 = 9;
label_040913da:
    pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,iVar15,(MethodInfo *)0x0);
    puVar13 = &TypeInfo_BaseCustomSkinPart;
    goto label_04091626;
  case 10:
    __this_01 = (Il2CppClass *)(__this->fields)._owner;
    if (__this_01 == (Il2CppClass *)0x0) goto label_04091846;
    UVar16.m_CachedPtr = 0;
    __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0)
    ;
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_04091846;
    in_RCX = (uint *)&"3dmg_smoke";
    pIVar12 = (Il2CppClass *)UnityEngine_Transform__Find(__this_00,"3dmg_smoke",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar16.m_CachedPtr = 0;
    __this_01 = pIVar12;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar12,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (pIVar12 == (Il2CppClass *)0x0) goto label_04091846;
      pUVar11 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pIVar12,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                 (System_Collections_Generic_List_Renderer__o *)pIVar9,pUVar11,(MethodInfo *)0x0);
    }
    pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,10,(MethodInfo *)0x0);
    pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
    bVar8 = 0;
    goto label_0409116f;
  case 0xb:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    pMVar6 = x[0x1f].method;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar16.m_CachedPtr = 0;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pMVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      __this_01 = x[0x1f].klass;
      if (__this_01 == (Il2CppClass *)0x0) goto label_04091846;
      UVar16.m_CachedPtr = 0;
      pSVar10 = UnityEngine_Object__get_name((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
      if (pSVar10 == (System_String_o *)0x0) goto label_04091846;
      bVar8 = System_String__Contains(pSVar10,"char_cap",(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                   (System_Collections_Generic_List_Renderer__o *)pIVar9,
                   (UnityEngine_GameObject_o *)x[0x1f].method,(MethodInfo *)0x0);
      }
    }
    pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,0xb,(MethodInfo *)0x0);
    pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
    bVar8 = 1;
    goto label_0409116f;
  case 0xc:
    pIVar12 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_MeleeWeaponTrail);
    UVar16.m_CachedPtr = (intptr_t)MethodInfo_List_1_MeleeWeaponTrail;
    __this_01 = pIVar12;
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)pIVar12,(MethodInfo_362B8B0 *)MethodInfo_List_1_MeleeWeaponTrail);
    pSVar10 = MethodInfo_Void_Add;
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    if (*(int *)(x + 0x3a) == 0) {
      if (pIVar12 == (Il2CppClass *)0x0) goto label_04091846;
      UVar16.m_CachedPtr = (intptr_t)x[0x2f].method;
      piVar1 = (int *)((long)&(pIVar12->_1).namespaze + 4);
      *piVar1 = *piVar1 + 1;
      pcVar5 = (pIVar12->_1).name;
      in_RCX = (uint *)pSVar10;
      if (pcVar5 == (char *)0x0) goto label_04091846;
      uVar3 = *(uint *)&(pIVar12->_1).namespaze;
      if (uVar3 < *(uint *)(pcVar5 + 0x18)) {
        *(uint *)&(pIVar12->_1).namespaze = uVar3 + 1;
        __this_01 = (Il2CppClass *)(pcVar5 + (long)(int)uVar3 * 8 + 0x20);
        *(intptr_t *)(pcVar5 + (long)(int)uVar3 * 8 + 0x20) = UVar16.m_CachedPtr;
        il2cpp_runtime_helper_022b4080();
      }
      else {
        __this_01 = pIVar12;
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pIVar12,(Il2CppObject *)UVar16.m_CachedPtr,
                   *(MethodInfo_362C220 **)(*(long *)((long)pSVar10[1].monitor + 0xc0) + 0x70));
      }
      in_RCX = (uint *)MethodInfo_Void_Add;
      UVar16.m_CachedPtr = (intptr_t)x[0x30].method;
      piVar1 = (int *)((long)&(pIVar12->_1).namespaze + 4);
      *piVar1 = *piVar1 + 1;
      pcVar5 = (pIVar12->_1).name;
      if (pcVar5 == (char *)0x0) goto label_04091846;
      uVar3 = *(uint *)&(pIVar12->_1).namespaze;
      if (uVar3 < *(uint *)(pcVar5 + 0x18)) {
        *(uint *)&(pIVar12->_1).namespaze = uVar3 + 1;
        *(intptr_t *)(pcVar5 + (long)(int)uVar3 * 8 + 0x20) = UVar16.m_CachedPtr;
        il2cpp_runtime_helper_022b4080(pcVar5 + (long)(int)uVar3 * 8 + 0x20);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pIVar12,(Il2CppObject *)UVar16.m_CachedPtr,
                   *(MethodInfo_362C220 **)
                    (*(long *)((long)((System_String_o *)((long)in_RCX + 0x18))->monitor + 0xc0) + 0x70));
      }
    }
    pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,0xc,(MethodInfo *)0x0);
    pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(_DAT_0557e7d8);
    pIVar9 = (Il2CppClass *)0x0;
    iVar15 = 500000;
label_04091829:
    CustomSkins_BaseCustomSkinPart___ctor
              (pCVar14,(CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,pSVar10,iVar15,
               (System_Nullable_Vector2__o)ZEXT812(0),1,in_stack_ffffffffffffffc0);
    pCVar14[1].klass = (CustomSkins_BaseCustomSkinPart_c *)pIVar12;
    il2cpp_runtime_helper_022b4080(pCVar14 + 1,pIVar12);
switchD_04090bdc_caseD_f:
    return pCVar14;
  case 0xd:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    if (*(int *)(x + 0x3a) == 2) {
      UVar16.m_CachedPtr = (intptr_t)x[0x17].method;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)UVar16.m_CachedPtr,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                   (System_Collections_Generic_List_Renderer__o *)pIVar9,
                   (UnityEngine_GameObject_o *)x[0x17].method,(MethodInfo *)0x0);
      }
    }
    iVar15 = 0xd;
    goto label_0409144f;
  case 0xe:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    if (*(int *)(x + 0x3a) == 2) {
      pMVar6 = x[0x18].method;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar8 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pMVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  ((CustomSkins_BaseCustomSkinLoader_o *)__this,
                   (System_Collections_Generic_List_Renderer__o *)pIVar9,
                   (UnityEngine_GameObject_o *)x[0x18].method,(MethodInfo *)0x0);
      }
    }
    iVar15 = 0xe;
label_0409144f:
    pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,iVar15,(MethodInfo *)0x0);
    pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
    bVar8 = 1;
    goto label_04091647;
  default:
    goto switchD_04090bdc_caseD_f;
  case 0x10:
    pUVar11 = (__this->fields)._owner;
    __this_01 = (Il2CppClass *)0x0;
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_04091846;
    pIVar9 = (Il2CppClass *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Human_GetComponent_Human);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar16.m_CachedPtr = 0;
    __this_01 = pIVar9;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (pIVar9 == (Il2CppClass *)0x0) goto label_04091846;
      bVar8 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pIVar9,(MethodInfo *)0x0);
      if (((char)bVar8 != '\0') &&
         (pCVar7 = *(Characters_HookUseable_o **)&(pIVar9->_2).static_fields_size,
         pCVar7 != (Characters_HookUseable_o *)0x0)) {
        renderers = Characters_HookUseable__GetRenderers(pCVar7,(MethodInfo *)0x0);
        pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                            ((CustomSkins_BaseCustomSkinLoader_o *)__this,0x10,(MethodInfo *)0x0);
        fVar17 = (__this->fields)._hookLTiling;
label_040915bd:
        pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HookCustomSkinPart);
        goto label_04091703;
      }
    }
    renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)renderers,(MethodInfo_362B8B0 *)MethodInfo_List_1_UnityEngine_Renderer);
    pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,0x10,(MethodInfo *)0x0);
    fVar17 = (__this->fields)._hookLTiling;
    goto label_040916db;
  case 0x12:
    pUVar11 = (__this->fields)._owner;
    __this_01 = (Il2CppClass *)0x0;
    if (pUVar11 == (UnityEngine_GameObject_o *)0x0) goto label_04091846;
    pIVar9 = (Il2CppClass *)UnityEngine_GameObject__GetComponent_object_(pUVar11,MethodInfo_Human_GetComponent_Human);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UVar16.m_CachedPtr = 0;
    __this_01 = pIVar9;
    bVar8 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pIVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (pIVar9 == (Il2CppClass *)0x0) goto label_04091846;
      bVar8 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pIVar9,(MethodInfo *)0x0);
      if (((char)bVar8 != '\0') &&
         (pCVar7 = *(Characters_HookUseable_o **)&(pIVar9->_2).thread_static_fields_offset,
         pCVar7 != (Characters_HookUseable_o *)0x0)) {
        renderers = Characters_HookUseable__GetRenderers(pCVar7,(MethodInfo *)0x0);
        pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                            ((CustomSkins_BaseCustomSkinLoader_o *)__this,0x12,(MethodInfo *)0x0);
        fVar17 = (__this->fields)._hookRTiling;
        goto label_040915bd;
      }
    }
    renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Renderer);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)renderers,(MethodInfo_362B8B0 *)MethodInfo_List_1_UnityEngine_Renderer);
    pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,0x12,(MethodInfo *)0x0);
    fVar17 = (__this->fields)._hookRTiling;
label_040916db:
    pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HookCustomSkinPart);
label_04091703:
    CustomSkins_BaseCustomSkinPart___ctor
              (pCVar14,(CustomSkins_BaseCustomSkinLoader_o *)__this,renderers,pSVar10,500000,
               (System_Nullable_Vector2__o)ZEXT812(0),1,in_stack_ffffffffffffffc0);
    *(float *)&pCVar14[1].klass = fVar17;
    return pCVar14;
  case 0x13:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x33].method,(MethodInfo *)0x0);
    iVar15 = 0x13;
    goto label_04091615;
  case 0x14:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x32].method,(MethodInfo *)0x0);
    iVar15 = 0x14;
    goto label_04091615;
  case 0x15:
    if (x == (Il2CppRGCTXData *)0x0) goto label_04091846;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,
               (System_Collections_Generic_List_Renderer__o *)pIVar9,
               (UnityEngine_GameObject_o *)x[0x31].method,(MethodInfo *)0x0);
    iVar15 = 0x15;
label_04091615:
    pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,iVar15,(MethodInfo *)0x0);
    puVar13 = &TypeInfo_HumanCostumeCustomSkinPart;
label_04091626:
    pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(*puVar13);
    bVar8 = 1;
label_04091647:
    iVar15 = 1000000;
    goto label_0409164d;
  }
  pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                      ((CustomSkins_BaseCustomSkinLoader_o *)__this,iVar15,(MethodInfo *)0x0);
  pCVar14 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BaseCustomSkinPart);
  bVar8 = 1;
label_0409116f:
  iVar15 = 500000;
label_0409164d:
  CustomSkins_BaseCustomSkinPart___ctor
            (pCVar14,(CustomSkins_BaseCustomSkinLoader_o *)__this,
             (System_Collections_Generic_List_Renderer__o *)pIVar9,pSVar10,iVar15,
             (System_Nullable_Vector2__o)ZEXT812(0),bVar8,in_stack_ffffffffffffffc0);
  return pCVar14;
}


// CustomSkins.HumanCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_HumanCustomSkinLoader___ctor (CustomSkins_HumanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4091920

void CustomSkins_HumanCustomSkinLoader___ctor(CustomSkins_HumanCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ac418 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BaseCustomSkinLoader);
    g_data_057ac418 = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  if (iVar1 != 0) {
    CustomSkins_BaseCustomSkinLoader___ctor((CustomSkins_BaseCustomSkinLoader_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  CustomSkins_BaseCustomSkinLoader___ctor((CustomSkins_BaseCustomSkinLoader_o *)__this,(MethodInfo *)0x0);
  return;
}


