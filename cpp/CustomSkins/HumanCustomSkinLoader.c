// Type: CustomSkins.HumanCustomSkinLoader
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomSkins/HumanCustomSkinLoader.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomSkins/CustomSkinLoaders/HumanCustomSkinLoader.cs  [CHANGED since prior version]
// --------------------------------

// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$.ctor
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6___ctor (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42436b0

void CustomSkins_HumanCustomSkinLoader_<LoadSkinsFromRPC>d__6___ctor
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_IDisposable_Dispose (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x42447e0

void CustomSkins_HumanCustomSkinLoader_<LoadSkinsFromRPC>d__6__System_IDisposable_Dispose
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,
               MethodInfo *method)

{
  return;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$MoveNext
// il2cpp: bool CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__MoveNext (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x42447f0

/* WARNING: Removing unreachable block (ram,0x04244918) */

bool_conflict
CustomSkins_HumanCustomSkinLoader_<LoadSkinsFromRPC>d__6__MoveNext
          (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  CustomSkins_HumanCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar3;
  long lVar4;
  UnityEngine_GameObject_o *pUVar5;
  Il2CppClass *pIVar6;
  bool_conflict bVar7;
  int32_t *piVar8;
  System_String_array *pSVar9;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  Characters_BaseCharacter_o *__this_02;
  Characters_HumanSetup_o *__this_03;
  Il2CppObject *__this_04;
  UnityEngine_Coroutine_o *pUVar10;
  undefined8 uVar11;
  MethodInfo *method_00;
  uint uVar12;
  MethodInfo *method_01;
  float *result;
  System_String_o *pSVar13;
  
  if (DAT_057051c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HumanSetup_GetComponent_HumanSetup);
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_057051c0 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    goto LAB_04244b67;
  }
  if (iVar2 != 0) {
    return 0;
  }
  (__this->fields).__1__state = -1;
  pSVar3 = (__this->fields).data;
  if (pSVar3 != (System_Object_array *)0x0) {
    if ((int)pSVar3->max_length == 0) {
LAB_04244caf:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((__this_00 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) &&
       (pSVar3->m_Items[0] != (Il2CppObject *)0x0)) {
      if ((pSVar3->m_Items[0]->klass->_1).element_class != *(Il2CppClass **)(DAT_05711068 + 0x40)) {
LAB_0424492a:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      piVar8 = (int32_t *)il2cpp_glue_022c7330();
      (__this_00->fields)._horseViewId = *piVar8;
      pSVar3 = (__this->fields).data;
      if (pSVar3 != (System_Object_array *)0x0) {
        if ((uint)pSVar3->max_length < 2) goto LAB_04244caf;
        pSVar13 = (System_String_o *)pSVar3->m_Items[1];
        if (pSVar13 != (System_String_o *)0x0) {
          if (pSVar13->klass != DAT_057110b0) goto LAB_0424492a;
          uVar12 = 0;
          pSVar9 = System_String__Split(pSVar13,0x2c,0,(MethodInfo *)0x0);
          (__this->fields)._skinUrls_5__2 = pSVar9;
          il2cpp_runtime_glue(&(__this->fields)._skinUrls_5__2,pSVar9);
          (__this->fields)._partId_5__3 = 0;
          do {
            switch(uVar12) {
            case 0:
              if (__this_00 == (CustomSkins_HumanCustomSkinLoader_o *)0x0) goto LAB_04244caa;
              if (-1 < (__this_00->fields)._horseViewId) goto LAB_04244a12;
              break;
            default:
switchD_04244948_caseD_1:
              if (__this_00 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) goto LAB_04244a12;
              goto LAB_04244caa;
            case 10:
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
              if ((lVar4 == 0) ||
                 ((lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0 ||
                  (lVar4 = *(long *)(lVar4 + 0x48), lVar4 == 0)))) goto LAB_04244caa;
              if (*(char *)(lVar4 + 0x11) != '\0') goto switchD_04244948_caseD_1;
              break;
            case 0xc:
              if ((__this_00 == (CustomSkins_HumanCustomSkinLoader_o *)0x0) ||
                 (pUVar5 = (__this_00->fields)._owner, pUVar5 == (UnityEngine_GameObject_o *)0x0))
              goto LAB_04244caa;
              __this_02 = (Characters_BaseCharacter_o *)
                          UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_Human_GetComponent_Human);
              if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                il2cpp_init_class();
              }
              bVar7 = UnityEngine_Object__op_Inequality
                                ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,
                                 (MethodInfo *)0x0);
              if ((char)bVar7 != '\0') {
                if (__this_02 == (Characters_BaseCharacter_o *)0x0) goto LAB_04244caa;
                bVar7 = UnityEngine_Behaviour__get_enabled
                                  ((UnityEngine_Behaviour_o *)__this_02,(MethodInfo *)0x0);
                if (((char)bVar7 != '\0') &&
                   (bVar7 = Characters_BaseCharacter__IsMine(__this_02,(MethodInfo *)0x0),
                   (char)bVar7 == '\0')) break;
              }
LAB_04244a12:
              __this_01 = (CustomSkins_BaseCustomSkinPart_o *)
                          (*(__this_00->klass->vtable)._5_GetCustomSkinPart.methodPtr)
                                    (__this_00,(ulong)(uint)(__this->fields)._partId_5__3,
                                     (__this_00->klass->vtable)._5_GetCustomSkinPart.method);
              if (__this_01 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                pSVar9 = (__this->fields)._skinUrls_5__2;
                if (pSVar9 == (System_String_array *)0x0) goto LAB_04244caa;
                uVar12 = (__this->fields)._partId_5__3;
                if ((uint)pSVar9->max_length <= uVar12) goto LAB_04244caf;
                method_01 = (MethodInfo *)0x0;
                bVar7 = System_String__IsNullOrEmpty(pSVar9->m_Items[(int)uVar12],(MethodInfo *)0x0)
                ;
                if ((char)bVar7 == '\0') {
                  pSVar9 = (__this->fields)._skinUrls_5__2;
                  if (pSVar9 == (System_String_array *)0x0) goto LAB_04244caa;
                  uVar12 = (__this->fields)._partId_5__3;
                  if ((uint)pSVar9->max_length <= uVar12) goto LAB_04244caf;
                  bVar7 = CustomSkins_BaseCustomSkinPart__LoadCache
                                    (__this_01,pSVar9->m_Items[(int)uVar12],method_00);
                  if ((char)bVar7 == '\0') {
                    pSVar9 = (__this->fields)._skinUrls_5__2;
                    if (pSVar9 == (System_String_array *)0x0) goto LAB_04244caa;
                    uVar12 = (__this->fields)._partId_5__3;
                    if ((uint)pSVar9->max_length <= uVar12) goto LAB_04244caf;
                    pIVar6 = (Il2CppClass *)pSVar9->m_Items[(int)uVar12];
                    if (DAT_057051d1 == '\0') {
                      il2cpp_init_method_metadata(&TypeInfo_LoadSkin_d__12);
                      DAT_057051d1 = '\x01';
                    }
                    __this_04 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkin_d__12);
                    System_Object___ctor(__this_04,(MethodInfo *)0x0);
                    *(undefined4 *)&__this_04[1].klass = 0;
                    if (__this_04 != (Il2CppObject *)0x0) {
                      __this_04[2].monitor = __this_01;
                      il2cpp_runtime_glue(&__this_04[2].monitor,__this_01);
                      __this_04[2].klass = pIVar6;
                      il2cpp_runtime_glue(__this_04 + 2,pIVar6);
                      pUVar10 = UnityEngine_MonoBehaviour__StartCoroutine
                                          ((UnityEngine_MonoBehaviour_o *)__this_00,
                                           (System_Collections_IEnumerator_o *)__this_04,
                                           (MethodInfo *)0x0);
                      (__this->fields).__2__current = (Il2CppObject *)pUVar10;
                      uVar11 = il2cpp_runtime_glue(&(__this->fields).__2__current,pUVar10);
                      (__this->fields).__1__state = 1;
                      return (bool_conflict)CONCAT71((int7)((ulong)uVar11 >> 8),1);
                    }
                    goto LAB_04244caa;
                  }
                }
                else {
                  CustomSkins_BaseCustomSkinPart__ResetToDefault(__this_01,method_01);
                }
              }
              break;
            case 0xf:
              pSVar9 = (__this->fields)._skinUrls_5__2;
              if (pSVar9 == (System_String_array *)0x0) goto LAB_04244caa;
              if (0xf < (int)pSVar9->max_length) {
                if (__this_00 == (CustomSkins_HumanCustomSkinLoader_o *)0x0) goto LAB_04244caa;
                pSVar13 = pSVar9->m_Items[0xf];
                result = &(__this_00->fields)._hookLTiling;
LAB_04244b2f:
                System_Single__TryParse(pSVar13,result,(MethodInfo *)0x0);
              }
              break;
            case 0x10:
            case 0x12:
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
              if (((lVar4 == 0) || (lVar4 = *(long *)(lVar4 + 0x20), lVar4 == 0)) ||
                 (lVar4 = *(long *)(lVar4 + 0x50), lVar4 == 0)) goto LAB_04244caa;
              if (*(char *)(lVar4 + 0x11) != '\0') {
                if (uVar12 == 0x11) goto switchD_04244948_caseD_11;
                goto switchD_04244948_caseD_1;
              }
              break;
            case 0x11:
switchD_04244948_caseD_11:
              pSVar9 = (__this->fields)._skinUrls_5__2;
              if (pSVar9 == (System_String_array *)0x0) goto LAB_04244caa;
              uVar1 = (uint)pSVar9->max_length;
              if ((int)uVar12 < (int)uVar1) {
                if (uVar12 < uVar1) {
                  if (__this_00 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) {
                    pSVar13 = pSVar9->m_Items[(int)uVar12];
                    result = &(__this_00->fields)._hookRTiling;
                    goto LAB_04244b2f;
                  }
                  goto LAB_04244caa;
                }
                goto LAB_04244caf;
              }
            }
LAB_04244b67:
            uVar12 = (__this->fields)._partId_5__3 + 1;
            (__this->fields)._partId_5__3 = uVar12;
          } while ((int)uVar12 < 0x16);
          if ((__this_00 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) &&
             (pUVar5 = (__this_00->fields)._owner, pUVar5 != (UnityEngine_GameObject_o *)0x0)) {
            __this_03 = (Characters_HumanSetup_o *)
                        UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_HumanSetup_GetComponent_HumanSetup);
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar7 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar7 != '\0') {
              if (__this_03 == (Characters_HumanSetup_o *)0x0) goto LAB_04244caa;
              Characters_HumanSetup__ReapplyCharacterEffectsToExistingParts
                        (__this_03,(MethodInfo *)0x0);
            }
            *(undefined1 *)&(__this_00->fields).Finished = 1;
            return 0;
          }
        }
      }
    }
  }
LAB_04244caa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4244f10

Il2CppObject *
CustomSkins_HumanCustomSkinLoader_<LoadSkinsFromRPC>d__6__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_Reset (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4244f20

void CustomSkins_HumanCustomSkinLoader_<LoadSkinsFromRPC>d__6__System_Collections_IEnumerator_Reset
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__6$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6__System_Collections_IEnumerator_get_Current (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o* __this, const MethodInfo* method);
// 0x4244f60

Il2CppObject *
CustomSkins_HumanCustomSkinLoader_<LoadSkinsFromRPC>d__6__System_Collections_IEnumerator_get_Current
          (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__6_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.HumanCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_HumanCustomSkinLoader__get_RendererIdPrefix (CustomSkins_HumanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4243600

System_String_o *
CustomSkins_HumanCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_HumanCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (DAT_057051bc == '\0') {
    il2cpp_init_method_metadata(&"human");
    DAT_057051bc = '\x01';
  }
  return "human";
}


// CustomSkins.HumanCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_HumanCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x4243630

System_Collections_IEnumerator_o *
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_HumanCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_057051bd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinsFromRPC_d__6);
    DAT_057051bd = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinsFromRPC_d__6);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = data;
    il2cpp_runtime_glue(&__this_00[2].monitor,data);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomSkins.HumanCustomSkinLoader$$GetCustomSkinPartPublic
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_HumanCustomSkinLoader__GetCustomSkinPartPublic (CustomSkins_HumanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x42436d0

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_HumanCustomSkinLoader__GetCustomSkinPartPublic
          (CustomSkins_HumanCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  CustomSkins_BaseCustomSkinPart_o *pCVar1;
  
  vtable_dispatch = (__this->klass->vtable)._5_GetCustomSkinPart.methodPtr;
  pCVar1 = (CustomSkins_BaseCustomSkinPart_o *)
           (*vtable_dispatch)
                     (__this,partId,(__this->klass->vtable)._5_GetCustomSkinPart.method,
                      vtable_dispatch);
  return pCVar1;
}


// CustomSkins.HumanCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_HumanCustomSkinLoader__GetCustomSkinPart (CustomSkins_HumanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x42436f0

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_HumanCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_HumanCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_Object_o *pUVar3;
  Il2CppObject *item;
  System_Object_array *pSVar4;
  int32_t *piVar5;
  long lVar6;
  bool_conflict bVar7;
  UnityEngine_Object_o *pUVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_Renderer__o *renderers;
  Photon_Pun_PhotonView_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_GameObject_o *pUVar10;
  CustomSkins_BaseCustomSkinLoader_o *pCVar11;
  CustomSkins_BaseCustomSkinPart_c *pCVar12;
  System_Collections_Generic_List_Renderer__o *pSVar13;
  System_String_o *pSVar14;
  undefined8 *puVar15;
  CustomSkins_BaseCustomSkinPart_o *pCVar16;
  uint *method_00;
  System_String_o **ppSVar17;
  CustomSkins_HumanCustomSkinLoader_o *pCVar18;
  UnityEngine_Object_c *pUVar19;
  int32_t iVar20;
  MethodInfo *in_R8;
  float fVar21;
  MethodInfo *in_stack_ffffffffffffffb0;
  undefined4 uStack_3c;
  CustomSkins_HumanCustomSkinLoader_o *pCStack_38;
  
  if (DAT_057051be == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinPart);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_DummyHuman_GetComponent_DummyHuman);
    il2cpp_init_method_metadata(&MethodInfo_HumanSetup_GetComponent_HumanSetup);
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    il2cpp_init_method_metadata(&TypeInfo_HookCustomSkinPart);
    il2cpp_init_method_metadata(&TypeInfo_HumanCostumeCustomSkinPart);
    il2cpp_init_method_metadata(&TypeInfo_HumanHairCustomSkinPart);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_MeleeWeaponTrail);
    il2cpp_init_method_metadata(&MethodInfo_List_1_UnityEngine_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_List_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_List_MeleeWeaponTrail);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_WeaponTrailCustomSkinPart);
    il2cpp_init_method_metadata(&"Could not find HumanSetup component on ");
    il2cpp_init_method_metadata(&"3dmg_smoke");
    il2cpp_init_method_metadata(&"Body");
    il2cpp_init_method_metadata(&"char_cap");
    DAT_057051be = '\x01';
  }
  pUVar10 = (__this->fields)._owner;
  if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto LAB_04244691;
  pUVar8 = (UnityEngine_Object_o *)
           UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_DummyHuman_GetComponent_DummyHuman);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    pUVar10 = (__this->fields)._owner;
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto LAB_04244691;
    pUVar8 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Human_GetComponent_Human);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
      pUVar3 = (UnityEngine_Object_o *)pUVar8[0xc].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        (pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        pUVar8 = (UnityEngine_Object_o *)pUVar8[0xc].fields.m_CachedPtr;
        iVar1 = *(int *)(TypeInfo_Object + 0xe4);
        goto joined_r0x04243a8e;
      }
    }
    pUVar10 = (__this->fields)._owner;
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto LAB_04244691;
    pUVar8 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_HumanSetup_GetComponent_HumanSetup);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    pUVar8 = pUVar8[2].monitor;
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
joined_r0x04243a8e:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar7 = UnityEngine_Object__op_Equality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 != '\0') {
    pUVar8 = (UnityEngine_Object_o *)(__this->fields)._owner;
    if (pUVar8 != (UnityEngine_Object_o *)0x0) {
      pSVar9 = UnityEngine_Object__get_name(pUVar8,(MethodInfo *)0x0);
      pSVar9 = System_String__Concat("Could not find HumanSetup component on ",pSVar9,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar9,(MethodInfo *)0x0);
      return (CustomSkins_BaseCustomSkinPart_o *)0x0;
    }
    goto LAB_04244691;
  }
  pCStack_38 = __this;
  renderers = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_glue(TypeInfo_List_Renderer);
  pSVar13 = renderers;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)renderers,MethodInfo_List_1_UnityEngine_Renderer);
  pCVar18 = pCStack_38;
  pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)0x0;
  method_00 = &switchD_042439ab::switchdataD_00d823fc;
  switch(partId) {
  case 0:
    iVar20 = (pCStack_38->fields)._horseViewId;
    if (-1 < iVar20) {
      __this_00 = Photon_Pun_PhotonView__Find(iVar20,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto LAB_04244691;
        pUVar10 = UnityEngine_Component__get_gameObject
                            ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
        CustomSkins_BaseCustomSkinLoader__AddRenderersMatchingName
                  ((CustomSkins_BaseCustomSkinLoader_o *)__this_00,renderers,pUVar10,"Body",
                   in_R8);
      }
    }
    uStack_3c = 0;
    pSVar9 = (System_String_o *)
             (*(pCVar18->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCVar18);
    pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
    pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
    bVar7 = 0;
    break;
  case 1:
    if (pUVar8 != (UnityEngine_Object_o *)0x0) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,pUVar8[0xc].monitor,
                 (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
                 (UnityEngine_GameObject_o *)pUVar8[0xc].fields.m_CachedPtr,(MethodInfo *)method_00)
      ;
      pCVar18 = pCStack_38;
      if (pUVar8[0xf].klass != (UnityEngine_Object_c *)0x0) {
        pSVar9 = Characters_HumanSetupMeshes__GetHairMesh
                           ((Characters_HumanSetupMeshes_o *)pUVar8[0xf].klass,(MethodInfo *)0x0);
        bVar7 = System_String__op_Equality
                          (pSVar9,(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                           (MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          if (pUVar8[0xf].monitor == (Characters_HumanSetupTextures_o *)0x0) goto LAB_04244691;
          pCVar12 = (CustomSkins_BaseCustomSkinPart_c *)
                    Characters_HumanSetupTextures__GetHairTexture
                              (pUVar8[0xf].monitor,(MethodInfo *)0x0);
        }
        else {
          pCVar12 = (CustomSkins_BaseCustomSkinPart_c *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        }
        uStack_3c = 1;
        pSVar9 = (System_String_o *)
                 (*(pCVar18->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCVar18);
        pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
        pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_HumanHairCustomSkinPart);
        CustomSkins_BaseCustomSkinPart___ctor
                  (pCVar16,(CustomSkins_BaseCustomSkinLoader_o *)pCVar18,renderers,pSVar9,1000000,
                   (System_Nullable_Vector2__o)ZEXT812(0),1,in_stack_ffffffffffffffb0);
        pCVar16[1].klass = pCVar12;
        il2cpp_runtime_glue(pCVar16 + 1,pCVar12);
        return pCVar16;
      }
    }
    goto LAB_04244691;
  case 2:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,pUVar8[0xb].monitor,
               (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
    uStack_3c = 2;
    pCVar18 = pCStack_38;
    goto LAB_04243ecd;
  case 3:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[0xc].klass,
               (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
    uStack_3c = 3;
    pCVar18 = pCStack_38;
    goto LAB_04243ecd;
  case 4:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[0xb].fields.m_CachedPtr,
               (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
    uStack_3c = 4;
    pCVar18 = pCStack_38;
    goto LAB_04243ecd;
  case 5:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[0xd].klass,
               (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,pUVar8[0xd].monitor,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[0xd].fields.m_CachedPtr,(MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[10].klass,(MethodInfo *)method_00);
    pCVar18 = pCStack_38;
    uStack_3c = 5;
    pSVar9 = (System_String_o *)
             (*(pCStack_38->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCStack_38);
    pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
    pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_HumanCostumeCustomSkinPart);
    bVar7 = 1;
    break;
  case 6:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[7].klass,
               (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,pUVar8[7].monitor,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[0xe].klass,(MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[10].fields.m_CachedPtr,(MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[0xb].klass,(MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,pUVar8[0xe].monitor,
               (MethodInfo *)method_00);
    pCVar18 = pCStack_38;
    uStack_3c = 6;
    pSVar9 = (System_String_o *)
             (*(pCStack_38->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCStack_38);
    pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
    pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_HumanCostumeCustomSkinPart);
    bVar7 = 1;
    iVar20 = 2000000;
    goto LAB_042443dc;
  case 7:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[9].fields.m_CachedPtr,
               (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,pUVar8[8].monitor,
               (MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[8].fields.m_CachedPtr,(MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[9].klass,(MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,pUVar8[9].monitor,
               (MethodInfo *)method_00);
    pCVar18 = pCStack_38;
    uStack_3c = 7;
    pSVar9 = (System_String_o *)
             (*(pCStack_38->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCStack_38);
    pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
    pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
    bVar7 = 1;
    goto LAB_04243f28;
  case 8:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[5].fields.m_CachedPtr,
               (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[6].klass,(MethodInfo *)method_00);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,pUVar8[6].monitor,
               (MethodInfo *)method_00);
    pCVar18 = pCStack_38;
    if (*(int *)&pUVar8[0x13].monitor != 2) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
                 (UnityEngine_GameObject_o *)pUVar8[7].fields.m_CachedPtr,(MethodInfo *)method_00);
    }
    uStack_3c = 8;
    pSVar9 = (System_String_o *)
             (*(pCVar18->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCVar18);
    pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
    pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
    bVar7 = 1;
    break;
  case 9:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[6].fields.m_CachedPtr,
               (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
    pCVar18 = pCStack_38;
    if (*(int *)&pUVar8[0x13].monitor != 2) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
                 (UnityEngine_GameObject_o *)pUVar8[8].klass,(MethodInfo *)method_00);
    }
    uStack_3c = 9;
    goto LAB_04244211;
  case 10:
    pUVar10 = (pCStack_38->fields)._owner;
    if ((pUVar10 == (UnityEngine_GameObject_o *)0x0) ||
       (__this_01 = UnityEngine_GameObject__get_transform(pUVar10,(MethodInfo *)0x0),
       __this_01 == (UnityEngine_Transform_o *)0x0)) goto LAB_04244691;
    ppSVar17 = &"3dmg_smoke";
    pCVar11 = (CustomSkins_BaseCustomSkinLoader_o *)
              UnityEngine_Transform__Find(__this_01,"3dmg_smoke",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                      );
    if ((char)bVar7 != '\0') {
      if (pCVar11 == (CustomSkins_BaseCustomSkinLoader_o *)0x0) goto LAB_04244691;
      pUVar10 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pCVar11,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                (pCVar11,renderers,pUVar10,(MethodInfo *)ppSVar17);
    }
    uStack_3c = 10;
    pSVar9 = (System_String_o *)
             (*(pCVar18->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCVar18);
    pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
    pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
    bVar7 = 0;
    goto LAB_04243f28;
  case 0xb:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    pUVar3 = pUVar8[10].monitor;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') {
      if ((pUVar8[10].monitor == (UnityEngine_Object_o *)0x0) ||
         (pCVar11 = (CustomSkins_BaseCustomSkinLoader_o *)
                    UnityEngine_Object__get_name(pUVar8[10].monitor,(MethodInfo *)0x0),
         pCVar11 == (CustomSkins_BaseCustomSkinLoader_o *)0x0)) goto LAB_04244691;
      ppSVar17 = &"char_cap";
      bVar7 = System_String__Contains((System_String_o *)pCVar11,"char_cap",(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  (pCVar11,renderers,pUVar8[10].monitor,(MethodInfo *)ppSVar17);
      }
    }
    uStack_3c = 0xb;
LAB_04243ecd:
    pSVar9 = (System_String_o *)
             (*(pCVar18->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCVar18);
    pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
    pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_BaseCustomSkinPart);
    bVar7 = 1;
LAB_04243f28:
    iVar20 = 500000;
    goto LAB_042443dc;
  case 0xc:
    pCVar12 = (CustomSkins_BaseCustomSkinPart_c *)il2cpp_runtime_glue(TypeInfo_List_MeleeWeaponTrail);
    System_Collections_Generic_List<object>___ctor
              ((System_Collections_Generic_List_object__o *)pCVar12,MethodInfo_List_1_MeleeWeaponTrail);
    pCVar18 = pCStack_38;
    lVar6 = MethodInfo_Void_Add;
    if (pUVar8 != (UnityEngine_Object_o *)0x0) {
      if (*(int *)&pUVar8[0x13].monitor != 0) {
LAB_04244608:
        uStack_3c = 0xc;
        pSVar9 = (System_String_o *)
                 (*(pCVar18->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCVar18);
        pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
        pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
        pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_WeaponTrailCustomSkinPart);
        CustomSkins_BaseCustomSkinPart___ctor
                  (pCVar16,(CustomSkins_BaseCustomSkinLoader_o *)pCVar18,
                   (System_Collections_Generic_List_Renderer__o *)0x0,pSVar9,500000,
                   (System_Nullable_Vector2__o)ZEXT812(0),1,in_stack_ffffffffffffffb0);
        pCVar16[1].klass = pCVar12;
        il2cpp_runtime_glue(pCVar16 + 1,pCVar12);
        return pCVar16;
      }
      if (pCVar12 != (CustomSkins_BaseCustomSkinPart_c *)0x0) {
        item = (Il2CppObject *)pUVar8[0xf].fields.m_CachedPtr;
        piVar5 = (int32_t *)((long)&(pCVar12->_1).namespaze + 4);
        *piVar5 = *piVar5 + 1;
        pSVar4 = ((System_Collections_Generic_List_object__Fields *)&(pCVar12->_1).name)->_items;
        if (pSVar4 != (System_Object_array *)0x0) {
          uVar2 = *(uint *)&(pCVar12->_1).namespaze;
          if (uVar2 < (uint)pSVar4->max_length) {
            *(uint *)&(pCVar12->_1).namespaze = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = item;
            il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)pCVar12,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          lVar6 = MethodInfo_Void_Add;
          pUVar19 = pUVar8[0x10].klass;
          piVar5 = (int32_t *)((long)&(pCVar12->_1).namespaze + 4);
          *piVar5 = *piVar5 + 1;
          pSVar4 = ((System_Collections_Generic_List_object__Fields *)&(pCVar12->_1).name)->_items;
          if (pSVar4 != (System_Object_array *)0x0) {
            uVar2 = *(uint *)&(pCVar12->_1).namespaze;
            if (uVar2 < (uint)pSVar4->max_length) {
              *(uint *)&(pCVar12->_1).namespaze = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pUVar19;
              il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)pCVar12,
                         (Il2CppObject *)pUVar19,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
            goto LAB_04244608;
          }
        }
      }
    }
LAB_04244691:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  case 0xd:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    if (*(int *)&pUVar8[0x13].monitor == 2) {
      pCVar11 = (CustomSkins_BaseCustomSkinLoader_o *)pUVar8[7].fields.m_CachedPtr;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar11,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  (pCVar11,renderers,(UnityEngine_GameObject_o *)pUVar8[7].fields.m_CachedPtr,
                   (MethodInfo *)method_00);
      }
    }
    uStack_3c = 0xd;
    goto LAB_04244211;
  case 0xe:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    if (*(int *)&pUVar8[0x13].monitor == 2) {
      pUVar19 = pUVar8[8].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar7 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar19,(UnityEngine_Object_o *)0x0,
                         (MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  ((CustomSkins_BaseCustomSkinLoader_o *)pUVar19,renderers,
                   (UnityEngine_GameObject_o *)pUVar8[8].klass,(MethodInfo *)method_00);
      }
    }
    uStack_3c = 0xe;
LAB_04244211:
    pSVar9 = (System_String_o *)
             (*(pCVar18->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCVar18);
    pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
    puVar15 = &TypeInfo_BaseCustomSkinPart;
LAB_042443b5:
    pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(*puVar15);
    bVar7 = 1;
    break;
  default:
    goto switchD_042439ab_caseD_f;
  case 0x10:
    pUVar10 = (pCStack_38->fields)._owner;
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto LAB_04244691;
    pUVar8 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Human_GetComponent_Human);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
LAB_042443f6:
      pSVar13 = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_glue(TypeInfo_List_Renderer);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar13,MethodInfo_List_1_UnityEngine_Renderer);
    }
    else {
      if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
      bVar7 = UnityEngine_Behaviour__get_enabled
                        ((UnityEngine_Behaviour_o *)pUVar8,(MethodInfo *)0x0);
      if (((char)bVar7 == '\0') || (pUVar8[0xb].klass == (UnityEngine_Object_c *)0x0))
      goto LAB_042443f6;
      pSVar13 = Characters_HookUseable__GetRenderers
                          ((Characters_HookUseable_o *)pUVar8[0xb].klass,(MethodInfo *)0x0);
    }
    pCVar18 = pCStack_38;
    uStack_3c = 0x10;
    pSVar9 = (System_String_o *)
             (*(pCStack_38->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCStack_38);
    pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
    fVar21 = (pCVar18->fields)._hookLTiling;
LAB_042444ba:
    pCVar16 = (CustomSkins_BaseCustomSkinPart_o *)il2cpp_runtime_glue(TypeInfo_HookCustomSkinPart);
    CustomSkins_BaseCustomSkinPart___ctor
              (pCVar16,(CustomSkins_BaseCustomSkinLoader_o *)pCVar18,pSVar13,pSVar9,500000,
               (System_Nullable_Vector2__o)ZEXT812(0),1,in_stack_ffffffffffffffb0);
    *(float *)&pCVar16[1].klass = fVar21;
    return pCVar16;
  case 0x12:
    pUVar10 = (pCStack_38->fields)._owner;
    if (pUVar10 == (UnityEngine_GameObject_o *)0x0) goto LAB_04244691;
    pUVar8 = (UnityEngine_Object_o *)
             UnityEngine_GameObject__GetComponent<object>(pUVar10,MethodInfo_Human_GetComponent_Human);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar7 = UnityEngine_Object__op_Inequality(pUVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
LAB_04244459:
      pSVar13 = (System_Collections_Generic_List_Renderer__o *)il2cpp_runtime_glue(TypeInfo_List_Renderer);
      System_Collections_Generic_List<object>___ctor
                ((System_Collections_Generic_List_object__o *)pSVar13,MethodInfo_List_1_UnityEngine_Renderer);
    }
    else {
      if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
      bVar7 = UnityEngine_Behaviour__get_enabled
                        ((UnityEngine_Behaviour_o *)pUVar8,(MethodInfo *)0x0);
      if (((char)bVar7 == '\0') || (pUVar8[0xb].monitor == (Characters_HookUseable_o *)0x0))
      goto LAB_04244459;
      pSVar13 = Characters_HookUseable__GetRenderers(pUVar8[0xb].monitor,(MethodInfo *)0x0);
    }
    pCVar18 = pCStack_38;
    uStack_3c = 0x12;
    pSVar9 = (System_String_o *)
             (*(pCStack_38->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCStack_38);
    pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
    fVar21 = (pCVar18->fields)._hookRTiling;
    goto LAB_042444ba;
  case 0x13:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[0x11].klass,
               (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
    uStack_3c = 0x13;
    goto LAB_04244376;
  case 0x14:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,
               (UnityEngine_GameObject_o *)pUVar8[0x10].fields.m_CachedPtr,
               (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
    uStack_3c = 0x14;
    goto LAB_04244376;
  case 0x15:
    if (pUVar8 == (UnityEngine_Object_o *)0x0) goto LAB_04244691;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)pSVar13,renderers,pUVar8[0x10].monitor,
               (MethodInfo *)&switchD_042439ab::switchdataD_00d823fc);
    uStack_3c = 0x15;
LAB_04244376:
    pCVar18 = pCStack_38;
    pSVar9 = (System_String_o *)
             (*(pCStack_38->klass->vtable)._4_get_RendererIdPrefix.methodPtr)(pCStack_38);
    pSVar14 = System_Int32__ToString((int32_t)&uStack_3c,(MethodInfo *)0x0);
    pSVar9 = System_String__Concat(pSVar9,pSVar14,(MethodInfo *)0x0);
    puVar15 = &TypeInfo_HumanCostumeCustomSkinPart;
    goto LAB_042443b5;
  }
  iVar20 = 1000000;
LAB_042443dc:
  CustomSkins_BaseCustomSkinPart___ctor
            (pCVar16,(CustomSkins_BaseCustomSkinLoader_o *)pCVar18,renderers,pSVar9,iVar20,
             (System_Nullable_Vector2__o)ZEXT812(0),bVar7,in_stack_ffffffffffffffb0);
switchD_042439ab_caseD_f:
  return pCVar16;
}


// CustomSkins.HumanCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_HumanCustomSkinLoader___ctor (CustomSkins_HumanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x4244770

void CustomSkins_HumanCustomSkinLoader___ctor
               (CustomSkins_HumanCustomSkinLoader_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057051bf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseCustomSkinLoader);
    DAT_057051bf = '\x01';
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BaseCustomSkinLoader + 0xe4);
  }
  if (iVar1 != 0) {
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


