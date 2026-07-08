// Type: GameManagers.CharacterEditorGameManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/GameManagers/CharacterEditorGameManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/GameManagers/CharacterEditorGameManager.cs  [CHANGED since prior version]
// --------------------------------

// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9___ctor (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42114a0

void GameManagers_CharacterEditorGameManager_<GenerateHumanPreviewsCoroutine>d__9___ctor
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$System.IDisposable.Dispose
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_IDisposable_Dispose (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x42117e0

void GameManagers_CharacterEditorGameManager_<GenerateHumanPreviewsCoroutine>d__9__System_IDisposable_Dispose
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o
                *__this,MethodInfo *method)

{
  uint uVar1;
  undefined1 in_stack_00000008 [24];
  
  uVar1 = (__this->fields).__1__state + 3;
  if ((uVar1 < 0x12) && ((0x30001U >> (uVar1 & 0x1f) & 1) != 0)) {
    if (DAT_05705072 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
      DAT_05705072 = '\x01';
    }
    (__this->fields).__1__state = -1;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
               (MethodInfo_3185E10 *)&(__this->fields).__7__wrap3);
    return;
  }
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$MoveNext
// il2cpp: bool GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__MoveNext (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x4211840

bool_conflict
GameManagers_CharacterEditorGameManager_<GenerateHumanPreviewsCoroutine>d__9__MoveNext
          (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  GameManagers_CharacterEditorGameManager_o *pGVar3;
  long lVar4;
  long *plVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_IntSetting_o *pSVar7;
  Characters_DummyHuman_o *pCVar8;
  Characters_HumanSetup_o *pCVar9;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  Il2CppClass *pIVar10;
  bool_conflict bVar11;
  Settings_HumanCustomSet_o *pSVar12;
  UnityEngine_Transform_o *pUVar13;
  undefined8 *puVar14;
  System_String_o *pSVar15;
  UnityEngine_WaitForSeconds_o *__this_02;
  System_Collections_Generic_List_object__o *__this_03;
  Il2CppObject *pIVar16;
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *pGVar17;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  int iVar18;
  int iVar19;
  GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *pGVar20;
  long lVar21;
  GameManagers_CharacterEditorGameManager_o *pGVar22;
  UnityEngine_Quaternion_o value;
  undefined4 in_stack_ffffffffffffffb0;
  undefined4 in_stack_ffffffffffffffb4;
  int32_t in_stack_ffffffffffffffb8;
  int32_t in_stack_ffffffffffffffbc;
  Il2CppObject *local_40;
  
  pGVar20 = __this;
  pGVar17 = __this;
  if (DAT_05705071 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_HumanSetup);
    il2cpp_init_method_metadata(&TypeInfo_IListSetting);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
    il2cpp_init_method_metadata(&MethodInfo_IListSetting_GetSets);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSeconds);
    il2cpp_init_method_metadata(&"BackNone");
    il2cpp_init_method_metadata(&"CostumeM");
    il2cpp_init_method_metadata(&"Back");
    il2cpp_init_method_metadata(&"CostumeF");
    il2cpp_init_method_metadata(&"PresetNone");
    il2cpp_init_method_metadata(&"HatNone");
    il2cpp_init_method_metadata(&"Face");
    il2cpp_init_method_metadata(&"HairM8");
    il2cpp_init_method_metadata(&"Head");
    il2cpp_init_method_metadata(&"Glass");
    il2cpp_init_method_metadata(&"HairF");
    il2cpp_init_method_metadata(&"HeadNone");
    il2cpp_init_method_metadata(&"HairF7");
    il2cpp_init_method_metadata(&"GlassNone");
    il2cpp_init_method_metadata(&"Eye");
    il2cpp_init_method_metadata(&"FaceNone");
    il2cpp_init_method_metadata(&"Preset");
    il2cpp_init_method_metadata(&"HairM10");
    il2cpp_init_method_metadata(&"Hat");
    pGVar20 = (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *)
              &"HairM";
    il2cpp_init_method_metadata();
    DAT_05705071 = '\x01';
    in_RDX = extraout_RDX;
  }
  uVar2 = (__this->fields).__1__state;
  if (0xe < uVar2) {
    return 0;
  }
  pGVar3 = (__this->fields).__4__this;
  iVar19 = (int)__this;
  switch(uVar2) {
  case 0:
    (__this->fields).__1__state = -1;
    pSVar12 = (Settings_HumanCustomSet_o *)il2cpp_runtime_glue(TypeInfo_HumanCustomSet);
    Settings_HumanCustomSet___ctor(pSVar12,(MethodInfo *)0x0);
    (pGVar17->fields)._set_5__2 = pSVar12;
    il2cpp_runtime_glue(&(pGVar17->fields)._set_5__2,pSVar12);
    pSVar12 = (pGVar17->fields)._set_5__2;
    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = (pSVar12->fields).Hair;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)pSVar6,"HairM8",MethodInfo_Void_set_Value);
    pSVar12 = (pGVar17->fields)._set_5__2;
    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar7 = (pSVar12->fields).Costume;
    if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar7,1,MethodInfo_Void_set_Value);
    (pGVar17->fields)._i_5__3 = 0;
    iVar18 = 0;
    iVar19 = 0;
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) == 0) goto LAB_04211ad5;
LAB_0421288c:
    pSVar12 = (pGVar17->fields)._set_5__2;
    if (iVar19 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x18)) goto LAB_042128a0;
    goto LAB_04211af5;
  case 1:
    (__this->fields).__1__state = -1;
    pSVar15 = System_Int32__ToString(iVar19 + 0x30,(MethodInfo *)0x0);
    pGVar22 = "Eye";
    pSVar15 = System_String__Concat((System_String_o *)"Eye",pSVar15,(MethodInfo *)0x0);
    if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (pGVar22,870.0,500.0,172.0,172.0,pSVar15,method_03);
    iVar18 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar18;
    iVar19 = iVar18;
    if (*(int *)(TypeInfo_HumanSetup + 0xe4) != 0) goto LAB_0421288c;
LAB_04211ad5:
    il2cpp_init_class();
    pSVar12 = (pGVar17->fields)._set_5__2;
    if (iVar18 < *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x18)) {
LAB_042128a0:
      if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar7 = (pSVar12->fields).Eye;
      if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Settings_TypedSetting<int>__set_Value
                ((Settings_TypedSetting_int__o *)pSVar7,(pGVar17->fields)._i_5__3,MethodInfo_Void_set_Value);
      if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pCVar8 = (pGVar3->fields).Human;
      if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pCVar9 = (pCVar8->fields).Setup;
      if (pCVar9 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Characters_HumanSetup__Load(pCVar9,(pGVar17->fields)._set_5__2,0,0,(MethodInfo *)0x0);
      pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
      (pGVar17->fields).__2__current = pIVar16;
      il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
      (pGVar17->fields).__1__state = 1;
      break;
    }
LAB_04211af5:
    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar7 = (pSVar12->fields).Eye;
    if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar7,0,MethodInfo_Void_set_Value);
    (pGVar17->fields)._i_5__3 = -1;
    iVar18 = -1;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x042125dc:
    if (iVar19 == 0) {
      il2cpp_init_class(TypeInfo_HumanSetup);
      iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x1c);
    }
    else {
      iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x1c);
    }
    if (iVar18 < iVar19) {
      pSVar12 = (pGVar17->fields)._set_5__2;
      if ((pGVar17->fields)._i_5__3 == -1) {
        if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar6 = (pSVar12->fields).Face;
        if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,"FaceNone",MethodInfo_Void_set_Value);
      }
      else {
        if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar6 = (pSVar12->fields).Face;
        pSVar15 = System_Int32__ToString((int)pGVar17 + 0x30,(MethodInfo *)0x0);
        pSVar15 = System_String__Concat("Face",pSVar15,(MethodInfo *)0x0);
        if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar15,MethodInfo_Void_set_Value);
      }
      if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pCVar8 = (pGVar3->fields).Human;
      if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pCVar9 = (pCVar8->fields).Setup;
      if (pCVar9 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Characters_HumanSetup__Load(pCVar9,(pGVar17->fields)._set_5__2,0,0,(MethodInfo *)0x0);
      pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
      (pGVar17->fields).__2__current = pIVar16;
      il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
      (pGVar17->fields).__1__state = 2;
    }
    else {
      pSVar12 = (pGVar17->fields)._set_5__2;
      if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar6 = (pSVar12->fields).Face;
      if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Settings_TypedSetting<object>__set_Value
                ((Settings_TypedSetting_T__o *)pSVar6,"FaceNone",MethodInfo_Void_set_Value);
      (pGVar17->fields)._i_5__3 = -1;
      iVar18 = -1;
      iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x042126bb:
      if (iVar19 == 0) {
        il2cpp_init_class(TypeInfo_HumanSetup);
        iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x20);
      }
      else {
        iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x20);
      }
      if (iVar18 < iVar19) {
        pSVar12 = (pGVar17->fields)._set_5__2;
        if ((pGVar17->fields)._i_5__3 == -1) {
          if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar6 = (pSVar12->fields).Glass;
          if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          Settings_TypedSetting<object>__set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,"GlassNone",MethodInfo_Void_set_Value);
        }
        else {
          if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar6 = (pSVar12->fields).Glass;
          pSVar15 = System_Int32__ToString((int)pGVar17 + 0x30,(MethodInfo *)0x0);
          pSVar15 = System_String__Concat("Glass",pSVar15,(MethodInfo *)0x0);
          if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          Settings_TypedSetting<object>__set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar15,MethodInfo_Void_set_Value);
        }
        if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pCVar8 = (pGVar3->fields).Human;
        if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pCVar9 = (pCVar8->fields).Setup;
        if (pCVar9 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        Characters_HumanSetup__Load(pCVar9,(pGVar17->fields)._set_5__2,0,0,(MethodInfo *)0x0);
        pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
        UnityEngine_WaitForEndOfFrame___ctor
                  ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
        (pGVar17->fields).__2__current = pIVar16;
        il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
        (pGVar17->fields).__1__state = 3;
      }
      else {
        pSVar12 = (pGVar17->fields)._set_5__2;
        if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar6 = (pSVar12->fields).Glass;
        if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        Settings_TypedSetting<object>__set_Value
                  ((Settings_TypedSetting_T__o *)pSVar6,"GlassNone",MethodInfo_Void_set_Value);
        (pGVar17->fields)._i_5__3 = 0;
        iVar18 = 0;
        iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x04212289:
        if (iVar19 == 0) {
          il2cpp_init_class(TypeInfo_HumanSetup);
          iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x2c);
          lVar4 = TypeInfo_HumanSetup;
        }
        else {
          iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x2c);
          lVar4 = TypeInfo_HumanSetup;
        }
        TypeInfo_HumanSetup = lVar4;
        if (iVar18 < iVar19) {
          pSVar12 = (pGVar17->fields)._set_5__2;
          if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar6 = (pSVar12->fields).Hair;
          pSVar15 = System_Int32__ToString((int)pGVar17 + 0x30,(MethodInfo *)0x0);
          pSVar15 = System_String__Concat("HairM",pSVar15,(MethodInfo *)0x0);
          if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          Settings_TypedSetting<object>__set_Value
                    ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar15,MethodInfo_Void_set_Value);
          if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pCVar8 = (pGVar3->fields).Human;
          if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pCVar9 = (pCVar8->fields).Setup;
          if (pCVar9 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          Characters_HumanSetup__Load(pCVar9,(pGVar17->fields)._set_5__2,0,0,(MethodInfo *)0x0);
          pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
          UnityEngine_WaitForEndOfFrame___ctor
                    ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
          (pGVar17->fields).__2__current = pIVar16;
          il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
          (pGVar17->fields).__1__state = 4;
        }
        else {
          (pGVar17->fields)._i_5__3 = 0;
          iVar18 = 0;
          iVar19 = *(int *)(lVar4 + 0xe4);
joined_r0x04212a39:
          if (iVar19 == 0) {
            il2cpp_init_class(lVar4);
            pSVar12 = (pGVar17->fields)._set_5__2;
            iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x30);
          }
          else {
            pSVar12 = (pGVar17->fields)._set_5__2;
            iVar19 = *(int *)(*(long *)(lVar4 + 0xb8) + 0x30);
          }
          if (iVar18 < iVar19) {
            if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar6 = (pSVar12->fields).Hair;
            pSVar15 = System_Int32__ToString((int)pGVar17 + 0x30,(MethodInfo *)0x0);
            pSVar15 = System_String__Concat("HairF",pSVar15,(MethodInfo *)0x0);
            if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            Settings_TypedSetting<object>__set_Value
                      ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar15,MethodInfo_Void_set_Value);
            if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pCVar8 = (pGVar3->fields).Human;
            if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pCVar9 = (pCVar8->fields).Setup;
            if (pCVar9 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            Characters_HumanSetup__Load(pCVar9,(pGVar17->fields)._set_5__2,0,0,(MethodInfo *)0x0);
            pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
            UnityEngine_WaitForEndOfFrame___ctor
                      ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
            (pGVar17->fields).__2__current = pIVar16;
            il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
            (pGVar17->fields).__1__state = 5;
          }
          else {
            if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar6 = (pSVar12->fields).Hair;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            Settings_TypedSetting<object>__set_Value
                      ((Settings_TypedSetting_T__o *)pSVar6,"HairM10",MethodInfo_Void_set_Value);
            (pGVar17->fields)._i_5__3 = -1;
            iVar18 = -1;
            iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x0421279d:
            if (iVar19 == 0) {
              il2cpp_init_class(TypeInfo_HumanSetup);
              iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x3c);
            }
            else {
              iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x3c);
            }
            if (iVar18 < iVar19) {
              pSVar12 = (pGVar17->fields)._set_5__2;
              if ((pGVar17->fields)._i_5__3 == -1) {
                if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar6 = (pSVar12->fields).Hat;
                if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                Settings_TypedSetting<object>__set_Value
                          ((Settings_TypedSetting_T__o *)pSVar6,"HatNone",MethodInfo_Void_set_Value);
              }
              else {
                if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar6 = (pSVar12->fields).Hat;
                pSVar15 = System_Int32__ToString((int)pGVar17 + 0x30,(MethodInfo *)0x0);
                pSVar15 = System_String__Concat("Hat",pSVar15,(MethodInfo *)0x0);
                if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                Settings_TypedSetting<object>__set_Value
                          ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar15,MethodInfo_Void_set_Value
                          );
              }
              if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pCVar8 = (pGVar3->fields).Human;
              if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pCVar9 = (pCVar8->fields).Setup;
              if (pCVar9 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              Characters_HumanSetup__Load(pCVar9,(pGVar17->fields)._set_5__2,0,0,(MethodInfo *)0x0);
              pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
              UnityEngine_WaitForEndOfFrame___ctor
                        ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
              (pGVar17->fields).__2__current = pIVar16;
              il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
              (pGVar17->fields).__1__state = 7;
            }
            else {
              pSVar12 = (pGVar17->fields)._set_5__2;
              if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar6 = (pSVar12->fields).Hat;
              if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              Settings_TypedSetting<object>__set_Value
                        ((Settings_TypedSetting_T__o *)pSVar6,"HatNone",MethodInfo_Void_set_Value);
              if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pCVar8 = (pGVar3->fields).Human;
              if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pUVar13 = UnityEngine_Component__get_transform
                                  ((UnityEngine_Component_o *)pCVar8,(MethodInfo *)0x0);
              value = UnityEngine_Quaternion__Internal_FromEulerRad
                                ((UnityEngine_Vector3_o)ZEXT812(0xc0490fdb00000000),
                                 (MethodInfo *)0x0);
              if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              UnityEngine_Transform__set_rotation(pUVar13,value,(MethodInfo *)0x0);
              (pGVar17->fields)._i_5__3 = -1;
              iVar18 = -1;
              iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x042124fa:
              if (iVar19 == 0) {
                il2cpp_init_class(TypeInfo_HumanSetup);
                iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x34);
              }
              else {
                iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x34);
              }
              if (iVar18 < iVar19) {
                pSVar12 = (pGVar17->fields)._set_5__2;
                if ((pGVar17->fields)._i_5__3 == -1) {
                  if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar6 = (pSVar12->fields).Back;
                  if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  Settings_TypedSetting<object>__set_Value
                            ((Settings_TypedSetting_T__o *)pSVar6,"BackNone",MethodInfo_Void_set_Value);
                }
                else {
                  if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar6 = (pSVar12->fields).Back;
                  pSVar15 = System_Int32__ToString((int)pGVar17 + 0x30,(MethodInfo *)0x0);
                  pSVar15 = System_String__Concat("Back",pSVar15,(MethodInfo *)0x0);
                  if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  Settings_TypedSetting<object>__set_Value
                            ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar15,
                             MethodInfo_Void_set_Value);
                }
                pCVar8 = (pGVar3->fields).Human;
                if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pCVar9 = (pCVar8->fields).Setup;
                if (pCVar9 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                Characters_HumanSetup__Load
                          (pCVar9,(pGVar17->fields)._set_5__2,0,0,(MethodInfo *)0x0);
                __this_02 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_glue(TypeInfo_WaitForSeconds);
                UnityEngine_WaitForSeconds___ctor(__this_02,1.0,(MethodInfo *)0x0);
                (pGVar17->fields).__2__current = (Il2CppObject *)__this_02;
                il2cpp_runtime_glue(&(pGVar17->fields).__2__current,__this_02);
                (pGVar17->fields).__1__state = 8;
              }
              else {
                pSVar12 = (pGVar17->fields)._set_5__2;
                if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pSVar6 = (pSVar12->fields).Back;
                if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                Settings_TypedSetting<object>__set_Value
                          ((Settings_TypedSetting_T__o *)pSVar6,"BackNone",MethodInfo_Void_set_Value);
                pCVar8 = (pGVar3->fields).Human;
                if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                pUVar13 = UnityEngine_Component__get_transform
                                    ((UnityEngine_Component_o *)pCVar8,(MethodInfo *)0x0);
                if (DAT_056fde1e == '\0') {
                  il2cpp_init_method_metadata(&TypeInfo_Quaternion);
                  DAT_056fde1e = '\x01';
                }
                if (pUVar13 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
                UnityEngine_Transform__set_rotation
                          (pUVar13,(UnityEngine_Quaternion_o)
                                   **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8),
                           (MethodInfo *)0x0);
                (pGVar17->fields)._i_5__3 = -1;
                iVar18 = -1;
                iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x04212b83:
                if (iVar19 == 0) {
                  il2cpp_init_class(TypeInfo_HumanSetup);
                  iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x38);
                }
                else {
                  iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x38);
                }
                if (iVar18 < iVar19) {
                  pSVar12 = (pGVar17->fields)._set_5__2;
                  if ((pGVar17->fields)._i_5__3 == -1) {
                    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar6 = (pSVar12->fields).Head;
                    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    Settings_TypedSetting<object>__set_Value
                              ((Settings_TypedSetting_T__o *)pSVar6,"HeadNone",MethodInfo_Void_set_Value);
                  }
                  else {
                    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar6 = (pSVar12->fields).Head;
                    pSVar15 = System_Int32__ToString((int)pGVar17 + 0x30,(MethodInfo *)0x0);
                    pSVar15 = System_String__Concat("Head",pSVar15,(MethodInfo *)0x0);
                    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    Settings_TypedSetting<object>__set_Value
                              ((Settings_TypedSetting_T__o *)pSVar6,(Il2CppObject *)pSVar15,
                               MethodInfo_Void_set_Value);
                  }
                  pCVar8 = (pGVar3->fields).Human;
                  if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pCVar9 = (pCVar8->fields).Setup;
                  if (pCVar9 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  Characters_HumanSetup__Load
                            (pCVar9,(pGVar17->fields)._set_5__2,0,0,(MethodInfo *)0x0);
                  pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
                  UnityEngine_WaitForEndOfFrame___ctor
                            ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
                  (pGVar17->fields).__2__current = pIVar16;
                  il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
                  (pGVar17->fields).__1__state = 10;
                }
                else {
                  pSVar12 = (pGVar17->fields)._set_5__2;
                  if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar6 = (pSVar12->fields).Head;
                  if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  Settings_TypedSetting<object>__set_Value
                            ((Settings_TypedSetting_T__o *)pSVar6,"HeadNone",MethodInfo_Void_set_Value);
                  pSVar12 = (pGVar17->fields)._set_5__2;
                  if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  pSVar6 = (pSVar12->fields).Hair;
                  if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                    il2cpp_raise_exception();
                  }
                  Settings_TypedSetting<object>__set_Value
                            ((Settings_TypedSetting_T__o *)pSVar6,"HairM8",MethodInfo_Void_set_Value);
                  (pGVar17->fields)._i_5__3 = 0;
                  iVar18 = 0;
                  iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x0421216d:
                  if (iVar19 == 0) {
                    il2cpp_init_class();
                    pSVar12 = (pGVar17->fields)._set_5__2;
                    iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x24);
                  }
                  else {
                    pSVar12 = (pGVar17->fields)._set_5__2;
                    iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x24);
                  }
                  if (iVar18 < iVar19) {
                    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar7 = (pSVar12->fields).Costume;
                    if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    Settings_TypedSetting<int>__set_Value
                              ((Settings_TypedSetting_int__o *)pSVar7,(pGVar17->fields)._i_5__3,
                               MethodInfo_Void_set_Value);
                    pCVar8 = (pGVar3->fields).Human;
                    if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pCVar9 = (pCVar8->fields).Setup;
                    if (pCVar9 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    Characters_HumanSetup__Load
                              (pCVar9,(pGVar17->fields)._set_5__2,0,0,(MethodInfo *)0x0);
                    pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
                    UnityEngine_WaitForEndOfFrame___ctor
                              ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
                    (pGVar17->fields).__2__current = pIVar16;
                    il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
                    (pGVar17->fields).__1__state = 0xb;
                  }
                  else {
                    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar7 = (pSVar12->fields).Sex;
                    if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    Settings_TypedSetting<int>__set_Value
                              ((Settings_TypedSetting_int__o *)pSVar7,1,MethodInfo_Void_set_Value);
                    pSVar12 = (pGVar17->fields)._set_5__2;
                    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    pSVar6 = (pSVar12->fields).Hair;
                    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                      il2cpp_raise_exception();
                    }
                    Settings_TypedSetting<object>__set_Value
                              ((Settings_TypedSetting_T__o *)pSVar6,"HairF7",MethodInfo_Void_set_Value);
                    (pGVar17->fields)._i_5__3 = 0;
                    iVar18 = 0;
                    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
joined_r0x042123d7:
                    if (iVar19 == 0) {
                      il2cpp_init_class();
                      iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x28);
                    }
                    else {
                      iVar19 = *(int *)(*(long *)(TypeInfo_HumanSetup + 0xb8) + 0x28);
                    }
                    if (iVar18 < iVar19) {
                      pSVar12 = (pGVar17->fields)._set_5__2;
                      if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pSVar7 = (pSVar12->fields).Costume;
                      if (pSVar7 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      Settings_TypedSetting<int>__set_Value
                                ((Settings_TypedSetting_int__o *)pSVar7,(pGVar17->fields)._i_5__3,
                                 MethodInfo_Void_set_Value);
                      pCVar8 = (pGVar3->fields).Human;
                      if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pCVar9 = (pCVar8->fields).Setup;
                      if (pCVar9 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      Characters_HumanSetup__Load
                                (pCVar9,(pGVar17->fields)._set_5__2,0,0,(MethodInfo *)0x0);
                      pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
                      UnityEngine_WaitForEndOfFrame___ctor
                                ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
                      (pGVar17->fields).__2__current = pIVar16;
                      il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
                      (pGVar17->fields).__1__state = 0xc;
                    }
                    else {
                      lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
                      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      lVar4 = *(long *)(lVar4 + 0x28);
                      if (lVar4 == 0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      plVar5 = *(long **)(lVar4 + 0x28);
                      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      lVar4 = *plVar5;
                      if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
                        lVar21 = 0;
                        do {
                          if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar21) == TypeInfo_IListSetting) {
                            puVar14 = (undefined8 *)
                                      ((long)(*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar21) + 2) *
                                       0x10 + lVar4 + 0x138);
                            goto LAB_04212f95;
                          }
                          lVar21 = lVar21 + 0x10;
                        } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar21);
                      }
                      puVar14 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IListSetting,2);
LAB_04212f95:
                      __this_03 = (System_Collections_Generic_List_object__o *)
                                  (*(code *)*puVar14)(plVar5,puVar14[1]);
                      if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      System_Collections_Generic_List<object>__GetEnumerator
                                ((System_Collections_Generic_List_Enumerator_T__o *)
                                 &stack0xffffffffffffffb0,__this_03,MethodInfo_List_1_T__Enumerator_Settings_BaseSetting__GetEn);
                      (pGVar17->fields).__7__wrap3.fields._current =
                           (Settings_BaseSetting_o *)local_40;
                      *(undefined4 *)&(pGVar17->fields).__7__wrap3.fields._list =
                           in_stack_ffffffffffffffb0;
                      *(undefined4 *)((long)&(pGVar17->fields).__7__wrap3.fields._list + 4) =
                           in_stack_ffffffffffffffb4;
                      (pGVar17->fields).__7__wrap3.fields._index = in_stack_ffffffffffffffb8;
                      (pGVar17->fields).__7__wrap3.fields._version = in_stack_ffffffffffffffbc;
                      il2cpp_runtime_glue(&(pGVar17->fields).__7__wrap3,0);
                      (pGVar17->fields).__1__state = -3;
LAB_04212ff4:
                      __this_00.fields._index = in_stack_ffffffffffffffb0;
                      __this_00.fields._list = (System_Collections_Generic_List_T__o *)pGVar17;
                      __this_00.fields._version = in_stack_ffffffffffffffb4;
                      __this_00.fields._current._0_4_ = in_stack_ffffffffffffffb8;
                      __this_00.fields._current._4_4_ = in_stack_ffffffffffffffbc;
                      bVar11 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                         (__this_00,
                                          (MethodInfo_3185E20 *)&(pGVar17->fields).__7__wrap3);
                      pIVar10 = TypeInfo_HumanCustomSet;
                      if ((char)bVar11 == '\0') {
                        pGVar20 = pGVar17;
                        if (DAT_05705072 == '\0') {
                          il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
                          DAT_05705072 = '\x01';
                        }
                        (pGVar17->fields).__1__state = -1;
                        pGVar22 = (GameManagers_CharacterEditorGameManager_o *)
                                  &(pGVar17->fields).__7__wrap3;
                        __this_01.fields._index = in_stack_ffffffffffffffb0;
                        __this_01.fields._list = (System_Collections_Generic_List_T__o *)pGVar20;
                        __this_01.fields._version = in_stack_ffffffffffffffb4;
                        __this_01.fields._current._0_4_ = in_stack_ffffffffffffffb8;
                        __this_01.fields._current._4_4_ = in_stack_ffffffffffffffbc;
                        System_Collections_Generic_List_Enumerator<object>__Dispose
                                  (__this_01,(MethodInfo_3185E10 *)pGVar22);
                        (pGVar20->fields).__7__wrap3.fields._list =
                             (System_Collections_Generic_List_T__o *)0x0;
                        (pGVar20->fields).__7__wrap3.fields._index = 0;
                        (pGVar20->fields).__7__wrap3.fields._version = 0;
                        (pGVar20->fields).__7__wrap3.fields._current = (Settings_BaseSetting_o *)0x0
                        ;
                        if (pGVar3 != (GameManagers_CharacterEditorGameManager_o *)0x0) {
                          GameManagers_CharacterEditorGameManager__Screenshot
                                    (pGVar22,450.0,360.0,128.0,128.0,"PresetNone",method_04);
                          return 0;
                        }
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pSVar12 = (Settings_HumanCustomSet_o *)
                                (pGVar17->fields).__7__wrap3.fields._current;
                      if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                        (pGVar17->fields)._preset_5__5 = (Settings_HumanCustomSet_o *)0x0;
                      }
                      else {
                        bVar1 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
                        if (((pSVar12->klass->_2).naturalAligment < bVar1) ||
                           ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_unwind_resume(pSVar12,TypeInfo_HumanCustomSet);
                        }
                        (pGVar17->fields)._preset_5__5 = pSVar12;
                        if (((pSVar12->klass->_2).naturalAligment < bVar1) ||
                           ((pSVar12->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != pIVar10)) {
                    /* WARNING: Subroutine does not return */
                          il2cpp_unwind_resume(pSVar12,pIVar10);
                        }
                      }
                      il2cpp_runtime_glue(&(pGVar17->fields)._preset_5__5);
                      if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pCVar8 = (pGVar3->fields).Human;
                      if (pCVar8 == (Characters_DummyHuman_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      pCVar9 = (pCVar8->fields).Setup;
                      if (pCVar9 == (Characters_HumanSetup_o *)0x0) {
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      Characters_HumanSetup__Load
                                (pCVar9,(pGVar17->fields)._preset_5__5,0,0,(MethodInfo *)0x0);
                      pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
                      UnityEngine_WaitForEndOfFrame___ctor
                                ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
                      (pGVar17->fields).__2__current = pIVar16;
                      il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
                      (pGVar17->fields).__1__state = 0xd;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    pSVar12 = (__this->fields)._set_5__2;
    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = (pSVar12->fields).Face;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar20,870.0,470.0,172.0,172.0,
               (pSVar6->fields)._value,in_RDX);
    iVar18 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar18;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
    goto joined_r0x042125dc;
  case 3:
    (__this->fields).__1__state = -1;
    pSVar12 = (__this->fields)._set_5__2;
    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = (pSVar12->fields).Glass;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar20,870.0,500.0,172.0,172.0,
               (pSVar6->fields)._value,in_RDX);
    iVar18 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar18;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
    goto joined_r0x042126bb;
  case 4:
    (__this->fields).__1__state = -1;
    pSVar12 = (__this->fields)._set_5__2;
    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = (pSVar12->fields).Hair;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar20,816.0,510.0,280.0,280.0,
               (pSVar6->fields)._value,in_RDX);
    iVar18 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar18;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
    goto joined_r0x04212289;
  case 5:
    (__this->fields).__1__state = -1;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
    (pGVar17->fields).__2__current = pIVar16;
    il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
    (pGVar17->fields).__1__state = 6;
    break;
  case 6:
    (__this->fields).__1__state = -1;
    pSVar12 = (__this->fields)._set_5__2;
    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = (pSVar12->fields).Hair;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar20,816.0,510.0,280.0,280.0,
               (pSVar6->fields)._value,in_RDX);
    iVar18 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar18;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
    lVar4 = TypeInfo_HumanSetup;
    goto joined_r0x04212a39;
  case 7:
    (__this->fields).__1__state = -1;
    pSVar12 = (__this->fields)._set_5__2;
    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = (pSVar12->fields).Hat;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar20,796.0,570.0,320.0,320.0,
               (pSVar6->fields)._value,in_RDX);
    iVar18 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar18;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
    goto joined_r0x0421279d;
  case 8:
    (__this->fields).__1__state = -1;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
    (pGVar17->fields).__2__current = pIVar16;
    il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
    (pGVar17->fields).__1__state = 9;
    break;
  case 9:
    (__this->fields).__1__state = -1;
    pSVar12 = (__this->fields)._set_5__2;
    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = (pSVar12->fields).Back;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar20,776.0,300.0,360.0,360.0,
               (pSVar6->fields)._value,in_RDX);
    iVar18 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar18;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
    goto joined_r0x042124fa;
  case 10:
    (__this->fields).__1__state = -1;
    pSVar12 = (__this->fields)._set_5__2;
    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = (pSVar12->fields).Head;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)pGVar20,801.0,470.0,310.0,310.0,
               (pSVar6->fields)._value,in_RDX);
    iVar18 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar18;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
    goto joined_r0x04212b83;
  case 0xb:
    (__this->fields).__1__state = -1;
    pSVar15 = System_Int32__ToString(iVar19 + 0x30,(MethodInfo *)0x0);
    pGVar22 = "CostumeM";
    pSVar15 = System_String__Concat((System_String_o *)"CostumeM",pSVar15,(MethodInfo *)0x0);
    if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (pGVar22,826.0,250.0,260.0,260.0,pSVar15,method_01);
    iVar18 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar18;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
    goto joined_r0x0421216d;
  case 0xc:
    (__this->fields).__1__state = -1;
    pSVar15 = System_Int32__ToString(iVar19 + 0x30,(MethodInfo *)0x0);
    pGVar22 = "CostumeF";
    pSVar15 = System_String__Concat((System_String_o *)"CostumeF",pSVar15,(MethodInfo *)0x0);
    if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (pGVar22,826.0,250.0,260.0,260.0,pSVar15,method_02);
    iVar18 = (pGVar17->fields)._i_5__3 + 1;
    (pGVar17->fields)._i_5__3 = iVar18;
    iVar19 = *(int *)(TypeInfo_HumanSetup + 0xe4);
    goto joined_r0x042123d7;
  case 0xd:
    (__this->fields).__1__state = -3;
    pIVar16 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar16,(MethodInfo *)0x0);
    (pGVar17->fields).__2__current = pIVar16;
    il2cpp_runtime_glue(&(pGVar17->fields).__2__current,pIVar16);
    (pGVar17->fields).__1__state = 0xe;
    break;
  case 0xe:
    (__this->fields).__1__state = -3;
    pSVar12 = (__this->fields)._preset_5__5;
    if (pSVar12 == (Settings_HumanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = (pSVar12->fields).UniqueId;
    if (pSVar6 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pGVar22 = "Preset";
    pSVar15 = System_String__Concat
                        ((System_String_o *)"Preset",(pSVar6->fields)._value,(MethodInfo *)0x0);
    if (pGVar3 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (pGVar22,746.0,360.0,420.0,420.0,pSVar15,method_00);
    (pGVar17->fields)._preset_5__5 = (Settings_HumanCustomSet_o *)0x0;
    il2cpp_runtime_glue(&(pGVar17->fields)._preset_5__5,0);
    goto LAB_04212ff4;
  }
  return (bool_conflict)CONCAT71((int7)((ulong)pGVar17 >> 8),1);
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$<>m__Finally1
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9____m__Finally1 (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x4213f20

void GameManagers_CharacterEditorGameManager_<GenerateHumanPreviewsCoroutine>d__9__<>m__Finally1
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o
                *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_05705072 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_05705072 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap3);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x4213f60

Il2CppObject *
GameManagers_CharacterEditorGameManager_<GenerateHumanPreviewsCoroutine>d__9__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_Collections_IEnumerator_Reset (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x4213f70

void GameManagers_CharacterEditorGameManager_<GenerateHumanPreviewsCoroutine>d__9__System_Collections_IEnumerator_Reset
               (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o
                *__this,MethodInfo *method)

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


// GameManagers.CharacterEditorGameManager.<GenerateHumanPreviewsCoroutine>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9__System_Collections_IEnumerator_get_Current (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x4213fb0

Il2CppObject *
GameManagers_CharacterEditorGameManager_<GenerateHumanPreviewsCoroutine>d__9__System_Collections_IEnumerator_get_Current
          (GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine_d__9_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10___ctor (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42114c0

void GameManagers_CharacterEditorGameManager_<GenerateTitanPreviewsCoroutine>d__10___ctor
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o
                *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$System.IDisposable.Dispose
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_IDisposable_Dispose (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4213fc0

void GameManagers_CharacterEditorGameManager_<GenerateTitanPreviewsCoroutine>d__10__System_IDisposable_Dispose
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o
                *__this,MethodInfo *method)

{
  int iVar1;
  undefined1 in_stack_00000008 [24];
  
  iVar1 = (__this->fields).__1__state;
  if ((iVar1 != 3) && (iVar1 != -3)) {
    return;
  }
  if (DAT_05705074 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_05705074 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap3);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$MoveNext
// il2cpp: bool GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__MoveNext (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4214010

bool_conflict
GameManagers_CharacterEditorGameManager_<GenerateTitanPreviewsCoroutine>d__10__MoveNext
          (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *__this,
          MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  GameManagers_CharacterEditorGameManager_o *__this_00;
  long lVar3;
  Settings_SetSettingsContainer_T__o *__this_01;
  Settings_IntSetting_o *pSVar4;
  System_Collections_Generic_List_object__o *__this_02;
  Settings_StringSetting_o *__this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  Il2CppClass *pIVar5;
  bool_conflict bVar6;
  Settings_TitanCustomSet_o *pSVar7;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  int iVar10;
  int iVar11;
  MethodInfo *pMVar12;
  GameManagers_CharacterEditorGameManager_o **__this_06;
  GameManagers_CharacterEditorGameManager_o *pGVar13;
  GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *pGVar14;
  GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *pGVar15;
  undefined4 in_stack_ffffffffffffffb0;
  undefined4 in_stack_ffffffffffffffb4;
  int32_t in_stack_ffffffffffffffb8;
  int32_t in_stack_ffffffffffffffbc;
  System_String_o *pSStack_40;
  
  __this_06 = (GameManagers_CharacterEditorGameManager_o **)__this;
  pGVar14 = __this;
  if (DAT_05705073 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanSetup);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&TypeInfo_WaitForEndOfFrame);
    il2cpp_init_method_metadata(&"Body");
    il2cpp_init_method_metadata(&"Head");
    __this_06 = &"Eye";
    il2cpp_init_method_metadata();
    DAT_05705073 = '\x01';
    in_RDX = extraout_RDX;
  }
  uVar2 = (__this->fields).__1__state;
  if (4 < uVar2) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  iVar11 = (int)__this;
  switch(uVar2) {
  case 0:
    (__this->fields).__1__state = -1;
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
    if (lVar3 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_01 = *(Settings_SetSettingsContainer_T__o **)(lVar3 + 0x20);
    if (__this_01 == (Settings_SetSettingsContainer_T__o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar7 = (Settings_TitanCustomSet_o *)
             Settings_SetSettingsContainer<object>__GetSelectedSet(__this_01,MethodInfo_BaseSetSetting_GetSelectedSet);
    pIVar5 = TypeInfo_TitanCustomSet;
    if (pSVar7 == (Settings_TitanCustomSet_o *)0x0) {
      (pGVar14->fields)._set_5__2 = (Settings_TitanCustomSet_o *)0x0;
    }
    else {
      bVar1 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
      if (((((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          TypeInfo_TitanCustomSet)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar7);
      }
      (pGVar14->fields)._set_5__2 = pSVar7;
      if (((((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).naturalAligment < bVar1) ||
         ((((Settings_BaseSetSetting_c *)pSVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          pIVar5)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(pSVar7);
      }
    }
    il2cpp_runtime_glue(&(pGVar14->fields)._set_5__2,pSVar7);
    pSVar7 = (pGVar14->fields)._set_5__2;
    if (pSVar7 == (Settings_TitanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (*(pSVar7->klass->vtable)._4_SetDefault.methodPtr)
              (pSVar7,(pSVar7->klass->vtable)._4_SetDefault.method);
    (pGVar14->fields)._i_5__3 = 0;
    iVar11 = 0;
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) goto LAB_04214565;
LAB_0421447c:
    pSVar7 = (pGVar14->fields)._set_5__2;
    if (iVar11 < *(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x10)) goto LAB_04214490;
    break;
  case 1:
    (__this->fields).__1__state = -1;
    pSVar8 = System_Int32__ToString(iVar11 + 0x30,(MethodInfo *)0x0);
    pGVar13 = "Eye";
    pSVar8 = System_String__Concat((System_String_o *)"Eye",pSVar8,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (pGVar13,876.0,570.0,172.0,172.0,pSVar8,method_02);
    iVar11 = (pGVar14->fields)._i_5__3 + 1;
    (pGVar14->fields)._i_5__3 = iVar11;
    if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) != 0) goto LAB_0421447c;
LAB_04214565:
    il2cpp_init_class();
    pSVar7 = (pGVar14->fields)._set_5__2;
    if (iVar11 < *(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x10)) {
LAB_04214490:
      if (pSVar7 == (Settings_TitanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar4 = (pSVar7->fields).Eye;
      if (pSVar4 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar2 = (pGVar14->fields)._i_5__3;
      pMVar12 = (MethodInfo *)(ulong)uVar2;
      Settings_TypedSetting<int>__set_Value
                ((Settings_TypedSetting_int__o *)pSVar4,uVar2,MethodInfo_Void_set_Value);
      if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,pMVar12);
      pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
      UnityEngine_WaitForEndOfFrame___ctor
                ((UnityEngine_WaitForEndOfFrame_o *)pIVar9,(MethodInfo *)0x0);
      (pGVar14->fields).__2__current = pIVar9;
      il2cpp_runtime_glue(&(pGVar14->fields).__2__current,pIVar9);
      (pGVar14->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)pGVar14 >> 8),1);
    }
    break;
  case 2:
    (__this->fields).__1__state = -1;
    pSVar8 = System_Int32__ToString(iVar11 + 0x30,(MethodInfo *)0x0);
    pGVar13 = "Head";
    pSVar8 = System_String__Concat((System_String_o *)"Head",pSVar8,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (pGVar13,852.0,580.0,220.0,220.0,pSVar8,method_01);
    iVar10 = (pGVar14->fields)._i_5__3 + 1;
    (pGVar14->fields)._i_5__3 = iVar10;
    iVar11 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
    goto joined_r0x04214319;
  case 3:
    (__this->fields).__1__state = -3;
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              ((GameManagers_CharacterEditorGameManager_o *)__this_06,820.0,560.0,280.0,280.0,
               (__this->fields)._hair_5__5,in_RDX);
    (pGVar14->fields)._hair_5__5 = (System_String_o *)0x0;
    il2cpp_runtime_glue(&(pGVar14->fields)._hair_5__5,0);
    goto LAB_0421466e;
  case 4:
    (__this->fields).__1__state = -1;
    pSVar8 = System_Int32__ToString(iVar11 + 0x30,(MethodInfo *)0x0);
    pGVar13 = "Body";
    pSVar8 = System_String__Concat((System_String_o *)"Body",pSVar8,(MethodInfo *)0x0);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__Screenshot
              (pGVar13,766.0,220.0,380.0,380.0,pSVar8,method_00);
    iVar10 = (pGVar14->fields)._i_5__3 + 1;
    (pGVar14->fields)._i_5__3 = iVar10;
    iVar11 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
    pGVar15 = pGVar14;
    goto joined_r0x0421420d;
  }
  if (pSVar7 == (Settings_TitanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pSVar7->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar7,(pSVar7->klass->vtable)._4_SetDefault.method);
  (pGVar14->fields)._i_5__3 = 0;
  iVar10 = 0;
  iVar11 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
joined_r0x04214319:
  if (iVar11 == 0) {
    il2cpp_init_class();
    pSVar7 = (pGVar14->fields)._set_5__2;
    iVar11 = *(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0xc);
  }
  else {
    pSVar7 = (pGVar14->fields)._set_5__2;
    iVar11 = *(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0xc);
  }
  if (iVar10 < iVar11) {
    if (pSVar7 == (Settings_TitanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar4 = (pSVar7->fields).Head;
    if (pSVar4 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar2 = (pGVar14->fields)._i_5__3;
    pMVar12 = (MethodInfo *)(ulong)uVar2;
    Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar4,uVar2,MethodInfo_Void_set_Value)
    ;
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,pMVar12);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar9,(MethodInfo *)0x0);
    (pGVar14->fields).__2__current = pIVar9;
    il2cpp_runtime_glue(&(pGVar14->fields).__2__current,pIVar9);
    (pGVar14->fields).__1__state = 2;
    return (bool_conflict)CONCAT71((int7)((ulong)pGVar14 >> 8),1);
  }
  if (pSVar7 == (Settings_TitanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pSVar7->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar7,(pSVar7->klass->vtable)._4_SetDefault.method);
  if (*(int *)(TypeInfo_BasicTitanSetup + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_02 = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 0x28)
  ;
  if (__this_02 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb0,__this_02,
             MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  (pGVar14->fields).__7__wrap3.fields._current = pSStack_40;
  *(undefined4 *)&(pGVar14->fields).__7__wrap3.fields._list = in_stack_ffffffffffffffb0;
  *(undefined4 *)((long)&(pGVar14->fields).__7__wrap3.fields._list + 4) = in_stack_ffffffffffffffb4;
  (pGVar14->fields).__7__wrap3.fields._index = in_stack_ffffffffffffffb8;
  (pGVar14->fields).__7__wrap3.fields._version = in_stack_ffffffffffffffbc;
  il2cpp_runtime_glue(&(pGVar14->fields).__7__wrap3,0);
  (pGVar14->fields).__1__state = -3;
LAB_0421466e:
  __this_04.fields._index = in_stack_ffffffffffffffb0;
  __this_04.fields._list = (System_Collections_Generic_List_T__o *)pGVar14;
  __this_04.fields._version = in_stack_ffffffffffffffb4;
  __this_04.fields._current._0_4_ = in_stack_ffffffffffffffb8;
  __this_04.fields._current._4_4_ = in_stack_ffffffffffffffbc;
  bVar6 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                    (__this_04,(MethodInfo_3185E20 *)&(pGVar14->fields).__7__wrap3);
  if ((char)bVar6 != '\0') {
    (pGVar14->fields)._hair_5__5 = (pGVar14->fields).__7__wrap3.fields._current;
    il2cpp_runtime_glue(&(pGVar14->fields)._hair_5__5);
    pSVar7 = (pGVar14->fields)._set_5__2;
    if (pSVar7 == (Settings_TitanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this_03 = (pSVar7->fields).Hair;
    if (__this_03 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar12 = (MethodInfo *)(pGVar14->fields)._hair_5__5;
    Settings_TypedSetting<object>__set_Value
              ((Settings_TypedSetting_T__o *)__this_03,(Il2CppObject *)pMVar12,MethodInfo_Void_set_Value);
    if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,pMVar12);
    pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
    UnityEngine_WaitForEndOfFrame___ctor
              ((UnityEngine_WaitForEndOfFrame_o *)pIVar9,(MethodInfo *)0x0);
    (pGVar14->fields).__2__current = pIVar9;
    il2cpp_runtime_glue(&(pGVar14->fields).__2__current,pIVar9);
    (pGVar14->fields).__1__state = 3;
    return (bool_conflict)CONCAT71((int7)((ulong)pGVar14 >> 8),1);
  }
  pGVar15 = pGVar14;
  if (DAT_05705074 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_05705074 = '\x01';
  }
  (pGVar14->fields).__1__state = -1;
  __this_05.fields._index = in_stack_ffffffffffffffb0;
  __this_05.fields._list = (System_Collections_Generic_List_T__o *)pGVar15;
  __this_05.fields._version = in_stack_ffffffffffffffb4;
  __this_05.fields._current._0_4_ = in_stack_ffffffffffffffb8;
  __this_05.fields._current._4_4_ = in_stack_ffffffffffffffbc;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_05,(MethodInfo_3185E10 *)&(pGVar14->fields).__7__wrap3);
  (pGVar15->fields).__7__wrap3.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  (pGVar15->fields).__7__wrap3.fields._index = 0;
  (pGVar15->fields).__7__wrap3.fields._version = 0;
  (pGVar15->fields).__7__wrap3.fields._current = (System_String_o *)0x0;
  pSVar7 = (pGVar15->fields)._set_5__2;
  if (pSVar7 == (Settings_TitanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (*(pSVar7->klass->vtable)._4_SetDefault.methodPtr)
            (pSVar7,(pSVar7->klass->vtable)._4_SetDefault.method);
  (pGVar15->fields)._i_5__3 = 0;
  iVar10 = 0;
  iVar11 = *(int *)(TypeInfo_BasicTitanSetup + 0xe4);
joined_r0x0421420d:
  if (iVar11 == 0) {
    il2cpp_init_class();
    iVar11 = *(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 8);
  }
  else {
    iVar11 = *(int *)(*(long *)(TypeInfo_BasicTitanSetup + 0xb8) + 8);
  }
  if (iVar11 <= iVar10) {
    return 0;
  }
  pSVar7 = (pGVar15->fields)._set_5__2;
  if (pSVar7 == (Settings_TitanCustomSet_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar4 = (pSVar7->fields).Body;
  if (pSVar4 == (Settings_IntSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar2 = (pGVar15->fields)._i_5__3;
  pMVar12 = (MethodInfo *)(ulong)uVar2;
  Settings_TypedSetting<int>__set_Value((Settings_TypedSetting_int__o *)pSVar4,uVar2,MethodInfo_Void_set_Value);
  if (__this_00 == (GameManagers_CharacterEditorGameManager_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this_00,pMVar12);
  pIVar9 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_WaitForEndOfFrame);
  UnityEngine_WaitForEndOfFrame___ctor((UnityEngine_WaitForEndOfFrame_o *)pIVar9,(MethodInfo *)0x0);
  (pGVar15->fields).__2__current = pIVar9;
  il2cpp_runtime_glue(&(pGVar15->fields).__2__current,pIVar9);
  (pGVar15->fields).__1__state = 4;
  return (bool_conflict)CONCAT71((int7)((ulong)pGVar15 >> 8),1);
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$<>m__Finally1
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10____m__Finally1 (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4214aa0

void GameManagers_CharacterEditorGameManager_<GenerateTitanPreviewsCoroutine>d__10__<>m__Finally1
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o
                *__this,MethodInfo *method)

{
  undefined1 in_stack_00000008 [24];
  
  if (DAT_05705074 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    DAT_05705074 = '\x01';
  }
  (__this->fields).__1__state = -1;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            ((System_Collections_Generic_List_Enumerator_object__o)in_stack_00000008,
             (MethodInfo_3185E10 *)&(__this->fields).__7__wrap3);
  return;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4214ae0

Il2CppObject *
GameManagers_CharacterEditorGameManager_<GenerateTitanPreviewsCoroutine>d__10__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_Collections_IEnumerator_Reset (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4214af0

void GameManagers_CharacterEditorGameManager_<GenerateTitanPreviewsCoroutine>d__10__System_Collections_IEnumerator_Reset
               (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o
                *__this,MethodInfo *method)

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


// GameManagers.CharacterEditorGameManager.<GenerateTitanPreviewsCoroutine>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10__System_Collections_IEnumerator_get_Current (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o* __this, const MethodInfo* method);
// 0x4214b30

Il2CppObject *
GameManagers_CharacterEditorGameManager_<GenerateTitanPreviewsCoroutine>d__10__System_Collections_IEnumerator_get_Current
          (GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine_d__10_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// GameManagers.CharacterEditorGameManager$$Awake
// il2cpp: void GameManagers_CharacterEditorGameManager__Awake (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x42107d0

void GameManagers_CharacterEditorGameManager__Awake
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  float fVar2;
  undefined8 uVar3;
  byte bVar4;
  int iVar5;
  System_String_o *path;
  long lVar6;
  Settings_TypedSetting_int__o *pSVar7;
  UnityEngine_Quaternion_Fields rotation;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Renderer_o *pUVar9;
  UnityEngine_Object_o *value;
  UnityEngine_Material_o *__this_01;
  MethodInfo *method_00;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o value_00;
  UnityEngine_Color_o value_01;
  
  if (DAT_0570506a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterPreviewGenerator);
    il2cpp_init_method_metadata(&MethodInfo_Renderer_GetComponent_Renderer);
    il2cpp_init_method_metadata(&TypeInfo_Material);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Value);
    il2cpp_init_method_metadata(&"Geometry/Prefabs/Cuboid");
    il2cpp_init_method_metadata(&"Materials/TransparentMaterial");
    DAT_0570506a = '\x01';
    iVar5 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
  }
  else {
    iVar5 = *(int *)(TypeInfo_ResourcePaths + 0xe4);
  }
  if (iVar5 == 0) {
    il2cpp_init_class();
    path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
  }
  else {
    path = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38);
  }
  if (DAT_0570266b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_0570266b = '\x01';
  }
  uVar3 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
  fVar2 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
  if (DAT_056fde1e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    DAT_056fde1e = '\x01';
  }
  position.fields.x = (float)uVar3 * 0.05;
  position.fields.y = (float)((ulong)uVar3 >> 0x20) * 0.05;
  position.fields.z = fVar2 * 0.05;
  rotation = **(UnityEngine_Quaternion_Fields **)(TypeInfo_Quaternion + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pUVar8 = (UnityEngine_GameObject_o *)
           ApplicationManagers_ResourceManager__InstantiateAsset<object>
                     (path,"Geometry/Prefabs/Cuboid",position,(UnityEngine_Quaternion_o)rotation,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
  ppUVar1 = &(__this->fields).platform;
  (__this->fields).platform = pUVar8;
  il2cpp_runtime_glue(ppUVar1);
  pUVar8 = (__this->fields).platform;
  if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
     (__this_00 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
     __this_00 != (UnityEngine_Transform_o *)0x0)) {
    value_00.fields.z = 2.0;
    value_00.fields.x = 2.0;
    value_00.fields.y = 0.1;
    UnityEngine_Transform__set_localScale(__this_00,value_00,(MethodInfo *)0x0);
    if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
      pUVar9 = (UnityEngine_Renderer_o *)
               UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_Renderer_GetComponent_Renderer);
      value = ApplicationManagers_ResourceManager__LoadAsset
                        (*(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x38),"Materials/TransparentMaterial",0
                         ,(MethodInfo *)0x0);
      if (pUVar9 != (UnityEngine_Renderer_o *)0x0) {
        if (value != (UnityEngine_Object_o *)0x0) {
          bVar4 = (TypeInfo_Material->_2).naturalAligment;
          if (((value->klass->_2).naturalAligment < bVar4) ||
             ((value->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_Material)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(value);
          }
        }
        UnityEngine_Renderer__set_material(pUVar9,(UnityEngine_Material_o *)value,(MethodInfo *)0x0)
        ;
        if (((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
            (pUVar9 = (UnityEngine_Renderer_o *)
                      UnityEngine_GameObject__GetComponent<object>(*ppUVar1,MethodInfo_Renderer_GetComponent_Renderer),
            pUVar9 != (UnityEngine_Renderer_o *)0x0)) &&
           (__this_01 = UnityEngine_Renderer__get_material(pUVar9,(MethodInfo *)0x0),
           __this_01 != (UnityEngine_Material_o *)0x0)) {
          value_01.fields.b = 1.0;
          value_01.fields.a = 0.2;
          value_01.fields.r = 1.0;
          value_01.fields.g = 1.0;
          UnityEngine_Material__set_color(__this_01,value_01,(MethodInfo *)0x0);
          lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60);
          if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) &&
             (pSVar7 = *(Settings_TypedSetting_int__o **)(lVar6 + 0x20),
             pSVar7 != (Settings_TypedSetting_int__o *)0x0)) {
            Settings_TypedSetting<int>__set_Value(pSVar7,0,MethodInfo_Void_set_Value);
            lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
            if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x20), lVar6 != 0)) &&
               (pSVar7 = *(Settings_TypedSetting_int__o **)(lVar6 + 0x20),
               pSVar7 != (Settings_TypedSetting_int__o *)0x0)) {
              method_00 = (MethodInfo *)0x0;
              Settings_TypedSetting<int>__set_Value(pSVar7,0,MethodInfo_Void_set_Value);
              if (*(int *)(TypeInfo_CharacterPreviewGenerator + 0xe4) == 0) {
                il2cpp_init_class();
              }
              Utility_CharacterPreviewGenerator__InitializePreviewSystem((MethodInfo *)0x0);
              GameManagers_CharacterEditorGameManager__ReinstantiateCharacter(__this,method_00);
              return;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.CharacterEditorGameManager$$ReinstantiateCharacter
// il2cpp: void GameManagers_CharacterEditorGameManager__ReinstantiateCharacter (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x4210bb0

void GameManagers_CharacterEditorGameManager__ReinstantiateCharacter
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  Characters_DummyCharacter_o **ppCVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  char cVar5;
  byte bVar6;
  Characters_DummyCharacter_o *x;
  System_String_o *pSVar7;
  long lVar8;
  Settings_SetSettingsContainer_T__o *pSVar9;
  Characters_HumanSetup_o *__this_00;
  Settings_IntSetting_o *pSVar10;
  Characters_BasicTitanSetup_o *__this_01;
  bool_conflict bVar11;
  UnityEngine_Object_o *obj;
  UnityEngine_GameObject_o *pUVar12;
  Characters_DummyHuman_o *pCVar13;
  UnityEngine_Behaviour_o *pUVar14;
  Settings_HumanCustomSet_o *customSet;
  Settings_TitanCustomSet_o *set;
  System_String_o *str1;
  System_String_o *pSVar15;
  Characters_DummyTitan_o *pCVar16;
  Characters_DummyHuman_o **ppCVar17;
  undefined4 uVar18;
  undefined4 uVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  undefined4 uVar22;
  undefined4 uVar23;
  undefined4 uVar24;
  undefined4 uVar25;
  UnityEngine_Vector3_o position;
  UnityEngine_Vector3_o position_00;
  UnityEngine_Quaternion_o rotation;
  UnityEngine_Quaternion_o rotation_00;
  int32_t local_5c;
  undefined8 local_58;
  undefined8 uStack_50;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  undefined8 uStack_30;
  
  if (DAT_0570506b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_CharacterPrefabs);
    il2cpp_init_method_metadata(&MethodInfo_DummyHuman_AddComponent_DummyHuman);
    il2cpp_init_method_metadata(&MethodInfo_DummyTitan_AddComponent_DummyTitan);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitanMovementSync_GetComponent_BasicTitanMo);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitan_GetComponent_BasicTitan);
    il2cpp_init_method_metadata(&MethodInfo_HumanMovementSync_GetComponent_HumanMovementSync);
    il2cpp_init_method_metadata(&MethodInfo_Human_GetComponent_Human);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSet);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_GameObject_InstantiateAsset_GameObject);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetSetting_GetSelectedSet);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_TitanCustomSet);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&"Human/Prefabs/HumanPlayer");
    DAT_0570506b = '\x01';
  }
  local_5c = 0;
  x = (__this->fields).Character;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppCVar1 = &(__this->fields).Character;
  bVar11 = UnityEngine_Object__op_Inequality
                     ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    if (*ppCVar1 == (Characters_DummyCharacter_o *)0x0) goto LAB_04211252;
    obj = (UnityEngine_Object_o *)
          UnityEngine_Component__get_gameObject
                    ((UnityEngine_Component_o *)*ppCVar1,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    UnityEngine_Object__Destroy(obj,(MethodInfo *)0x0);
  }
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_init_class();
    cVar5 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  else {
    cVar5 = **(char **)(TypeInfo_CharacterEditorGameManager + 0xb8);
  }
  if (cVar5 == '\0') {
    lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x68);
    if (((lVar8 == 0) ||
        (pSVar9 = *(Settings_SetSettingsContainer_T__o **)(lVar8 + 0x20),
        pSVar9 == (Settings_SetSettingsContainer_T__o *)0x0)) ||
       (set = (Settings_TitanCustomSet_o *)
              Settings_SetSettingsContainer<object>__GetSelectedSet(pSVar9,MethodInfo_BaseSetSetting_GetSelectedSet),
       set == (Settings_TitanCustomSet_o *)0x0)) goto LAB_04211252;
    bVar6 = (TypeInfo_TitanCustomSet->_2).naturalAligment;
    if (((set->klass->_2).naturalAligment < bVar6) ||
       ((set->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_TitanCustomSet)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(set);
    }
    pSVar10 = (set->fields).Body;
    if (pSVar10 == (Settings_IntSetting_o *)0x0) goto LAB_04211252;
    local_5c = (pSVar10->fields)._value;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    if (*(int *)(TypeInfo_CharacterPrefabs + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar15 = *(System_String_o **)(*(long *)(TypeInfo_CharacterPrefabs + 0xb8) + 8);
    str1 = System_Int32__ToString((int32_t)&local_5c,(MethodInfo *)0x0);
    pSVar15 = System_String__Concat(pSVar15,str1,(MethodInfo *)0x0);
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar2 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    uVar18 = (int)uVar3;
    uVar19 = (int)((ulong)uVar3 >> 0x20);
    uVar20 = 0;
    uVar21 = 0;
    if (DAT_056fde1e == '\0') {
      uStack_50 = 0;
      local_58 = uVar3;
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
      uVar18 = (undefined4)local_58;
      uVar19 = local_58._4_4_;
      uVar20 = (undefined4)uStack_50;
      uVar21 = uStack_50._4_4_;
    }
    uVar3 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    uVar4 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    uVar22 = (int)uVar3;
    uVar23 = (int)((ulong)uVar3 >> 0x20);
    uVar24 = (int)uVar4;
    uVar25 = (int)((ulong)uVar4 >> 0x20);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      local_58 = CONCAT44(uVar19,uVar18);
      uStack_50 = CONCAT44(uVar21,uVar20);
      uStack_30 = 0;
      uStack_40 = 0;
      local_48 = uVar4;
      local_38 = uVar3;
      il2cpp_init_class();
      uVar18 = (undefined4)local_58;
      uVar19 = local_58._4_4_;
      uVar22 = (undefined4)local_38;
      uVar23 = local_38._4_4_;
      uVar24 = (undefined4)local_48;
      uVar25 = local_48._4_4_;
    }
    position_00.fields.y = (float)uVar19;
    position_00.fields.x = (float)uVar18;
    position_00.fields.z = fVar2;
    rotation_00.fields.y = (float)uVar23;
    rotation_00.fields.x = (float)uVar22;
    rotation_00.fields.w = (float)uVar25;
    rotation_00.fields.z = (float)uVar24;
    pUVar12 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        (pSVar7,pSVar15,position_00,rotation_00,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto LAB_04211252;
    pCVar16 = (Characters_DummyTitan_o *)
              UnityEngine_GameObject__AddComponent<object>(pUVar12,MethodInfo_DummyTitan_AddComponent_DummyTitan);
    (__this->fields).Titan = pCVar16;
    ppCVar17 = (Characters_DummyHuman_o **)&(__this->fields).Titan;
    il2cpp_runtime_glue(ppCVar17,pCVar16);
    pUVar14 = (UnityEngine_Behaviour_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar12,MethodInfo_BasicTitan_GetComponent_BasicTitan);
    if (pUVar14 == (UnityEngine_Behaviour_o *)0x0) goto LAB_04211252;
    UnityEngine_Behaviour__set_enabled(pUVar14,0,(MethodInfo *)0x0);
    pUVar14 = (UnityEngine_Behaviour_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar12,MethodInfo_BasicTitanMovementSync_GetComponent_BasicTitanMo);
    if (pUVar14 == (UnityEngine_Behaviour_o *)0x0) goto LAB_04211252;
    UnityEngine_Behaviour__set_enabled(pUVar14,0,(MethodInfo *)0x0);
    if (((Characters_DummyTitan_o *)*ppCVar17 == (Characters_DummyTitan_o *)0x0) ||
       (__this_01 = (((Characters_DummyTitan_o *)*ppCVar17)->fields).Setup,
       __this_01 == (Characters_BasicTitanSetup_o *)0x0)) goto LAB_04211252;
    Characters_BasicTitanSetup__Load(__this_01,set,(MethodInfo *)0x0);
    pCVar13 = *ppCVar17;
  }
  else {
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    }
    else {
      pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 8);
    }
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
    }
    uVar3 = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    fVar2 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    uVar18 = (int)uVar3;
    uVar19 = (int)((ulong)uVar3 >> 0x20);
    uVar20 = 0;
    uVar21 = 0;
    if (DAT_056fde1e == '\0') {
      uStack_50 = 0;
      local_58 = uVar3;
      il2cpp_init_method_metadata(&TypeInfo_Quaternion);
      DAT_056fde1e = '\x01';
      uVar18 = (undefined4)local_58;
      uVar19 = local_58._4_4_;
      uVar20 = (undefined4)uStack_50;
      uVar21 = uStack_50._4_4_;
    }
    uVar3 = **(undefined8 **)(TypeInfo_Quaternion + 0xb8);
    uVar4 = (*(undefined8 **)(TypeInfo_Quaternion + 0xb8))[1];
    uVar22 = (int)uVar3;
    uVar23 = (int)((ulong)uVar3 >> 0x20);
    uVar24 = (int)uVar4;
    uVar25 = (int)((ulong)uVar4 >> 0x20);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      local_58 = CONCAT44(uVar19,uVar18);
      uStack_50 = CONCAT44(uVar21,uVar20);
      uStack_30 = 0;
      uStack_40 = 0;
      local_48 = uVar4;
      local_38 = uVar3;
      il2cpp_init_class();
      uVar18 = (undefined4)local_58;
      uVar19 = local_58._4_4_;
      uVar22 = (undefined4)local_38;
      uVar23 = local_38._4_4_;
      uVar24 = (undefined4)local_48;
      uVar25 = local_48._4_4_;
    }
    position.fields.y = (float)uVar19;
    position.fields.x = (float)uVar18;
    position.fields.z = fVar2;
    rotation.fields.y = (float)uVar23;
    rotation.fields.x = (float)uVar22;
    rotation.fields.w = (float)uVar25;
    rotation.fields.z = (float)uVar24;
    pUVar12 = (UnityEngine_GameObject_o *)
              ApplicationManagers_ResourceManager__InstantiateAsset<object>
                        (pSVar7,"Human/Prefabs/HumanPlayer",position,rotation,0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto LAB_04211252;
    pCVar13 = (Characters_DummyHuman_o *)
              UnityEngine_GameObject__AddComponent<object>(pUVar12,MethodInfo_DummyHuman_AddComponent_DummyHuman);
    (__this->fields).Human = pCVar13;
    ppCVar17 = &(__this->fields).Human;
    il2cpp_runtime_glue(ppCVar17,pCVar13);
    pUVar14 = (UnityEngine_Behaviour_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar12,MethodInfo_Human_GetComponent_Human);
    if (pUVar14 == (UnityEngine_Behaviour_o *)0x0) goto LAB_04211252;
    UnityEngine_Behaviour__set_enabled(pUVar14,0,(MethodInfo *)0x0);
    pUVar14 = (UnityEngine_Behaviour_o *)
              UnityEngine_GameObject__GetComponent<object>(pUVar12,MethodInfo_HumanMovementSync_GetComponent_HumanMovementSync);
    if (pUVar14 == (UnityEngine_Behaviour_o *)0x0) goto LAB_04211252;
    UnityEngine_Behaviour__set_enabled(pUVar14,0,(MethodInfo *)0x0);
    if (((*ppCVar17 == (Characters_DummyHuman_o *)0x0) ||
        (lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x60), lVar8 == 0)) ||
       (pSVar9 = *(Settings_SetSettingsContainer_T__o **)(lVar8 + 0x20),
       pSVar9 == (Settings_SetSettingsContainer_T__o *)0x0)) goto LAB_04211252;
    __this_00 = ((*ppCVar17)->fields).Setup;
    customSet = (Settings_HumanCustomSet_o *)
                Settings_SetSettingsContainer<object>__GetSelectedSet(pSVar9,MethodInfo_BaseSetSetting_GetSelectedSet);
    if (__this_00 == (Characters_HumanSetup_o *)0x0) goto LAB_04211252;
    if (customSet != (Settings_HumanCustomSet_o *)0x0) {
      bVar6 = (TypeInfo_HumanCustomSet->_2).naturalAligment;
      if (((customSet->klass->_2).naturalAligment < bVar6) ||
         ((customSet->klass->_2).typeHierarchy[(ulong)bVar6 - 1] != TypeInfo_HumanCustomSet)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(customSet);
      }
    }
    Characters_HumanSetup__Load(__this_00,customSet,0,0,(MethodInfo *)0x0);
    pCVar13 = *ppCVar17;
  }
  if (pCVar13 != (Characters_DummyHuman_o *)0x0) {
    Characters_DummyCharacter__Idle((Characters_DummyCharacter_o *)pCVar13,(MethodInfo *)0x0);
    *ppCVar1 = (Characters_DummyCharacter_o *)*ppCVar17;
    il2cpp_runtime_glue(ppCVar1);
    return;
  }
LAB_04211252:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.CharacterEditorGameManager$$GeneratePreviews
// il2cpp: void GameManagers_CharacterEditorGameManager__GeneratePreviews (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x4211270

void GameManagers_CharacterEditorGameManager__GeneratePreviews
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this_00;
  bool_conflict bVar1;
  undefined8 *puVar2;
  Il2CppObject *__this_01;
  
  if (DAT_0570506c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    DAT_0570506c = '\x01';
  }
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_IO_Directory__Exists
                    (*(System_String_o **)(*(long *)(TypeInfo_CharacterEditorGameManager + 0xb8) + 8),(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    System_IO_Directory__CreateDirectory
              (*(System_String_o **)(*(long *)(TypeInfo_CharacterEditorGameManager + 0xb8) + 8),(MethodInfo *)0x0);
  }
  __this_00 = (__this->fields).platform;
  if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto LAB_042113b9;
  UnityEngine_GameObject__SetActive(__this_00,0,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) == '\0') goto LAB_04211351;
LAB_04211318:
    if (DAT_0570506d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
      DAT_0570506d = '\x01';
    }
    puVar2 = &TypeInfo_GenerateHumanPreviewsCoroutine_d__9;
  }
  else {
    if (**(char **)(TypeInfo_CharacterEditorGameManager + 0xb8) != '\0') goto LAB_04211318;
LAB_04211351:
    if (DAT_0570506e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
      DAT_0570506e = '\x01';
    }
    puVar2 = &TypeInfo_GenerateTitanPreviewsCoroutine_d__10;
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_glue(*puVar2);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_01 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_01,
               (MethodInfo *)0x0);
    return;
  }
LAB_042113b9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.CharacterEditorGameManager$$GenerateHumanPreviewsCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x42113c0

System_Collections_IEnumerator_o *
GameManagers_CharacterEditorGameManager__GenerateHumanPreviewsCoroutine
          (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570506d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
    DAT_0570506d = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GenerateHumanPreviewsCoroutine_d__9);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.CharacterEditorGameManager$$GenerateTitanPreviewsCoroutine
// il2cpp: System_Collections_IEnumerator_o* GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x4211430

System_Collections_IEnumerator_o *
GameManagers_CharacterEditorGameManager__GenerateTitanPreviewsCoroutine
          (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_0570506e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
    DAT_0570506e = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GenerateTitanPreviewsCoroutine_d__10);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.CharacterEditorGameManager$$Screenshot
// il2cpp: void GameManagers_CharacterEditorGameManager__Screenshot (GameManagers_CharacterEditorGameManager_o* __this, float x, float y, float w, float h, System_String_o* file, const MethodInfo* method);
// 0x42114e0

void GameManagers_CharacterEditorGameManager__Screenshot
               (GameManagers_CharacterEditorGameManager_o *__this,float x,float y,float w,float h,
               System_String_o *file,MethodInfo *method)

{
  UnityEngine_Texture2D_o *__this_00;
  System_String_o *path;
  System_Byte_array *bytes;
  UnityEngine_Color_o color;
  UnityEngine_Rect_o source;
  
  if (DAT_0570506f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&"/");
    il2cpp_init_method_metadata(&".png");
    DAT_0570506f = '\x01';
  }
  __this_00 = (UnityEngine_Texture2D_o *)il2cpp_runtime_glue(TypeInfo_Texture2D);
  UnityEngine_Texture2D___ctor(__this_00,(int)w,(int)h,3,0,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_Texture2D_o *)0x0) {
    color.fields.b = 1.0;
    color.fields.a = 1.0;
    color.fields.r = 1.0;
    color.fields.g = 1.0;
    UnityEngine_Texture2D__SetPixel(__this_00,0,0,color,(MethodInfo *)0x0);
    source.fields.m_YMin = y;
    source.fields.m_XMin = x;
    source.fields.m_Height = h;
    source.fields.m_Width = w;
    UnityEngine_Texture2D__ReadPixels(__this_00,source,0,0,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply(__this_00,(MethodInfo *)0x0);
      TextureScaler__ScaleBlocking(__this_00,0x80,0x80,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CharacterEditorGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      path = System_String__Concat
                       (*(System_String_o **)(*(long *)(TypeInfo_CharacterEditorGameManager + 0xb8) + 8),"/",file,
                        ".png",(MethodInfo *)0x0);
      bytes = UnityEngine_ImageConversion__EncodeToPNG(__this_00,(MethodInfo *)0x0);
      System_IO_File__WriteAllBytes(path,bytes,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// GameManagers.CharacterEditorGameManager$$.ctor
// il2cpp: void GameManagers_CharacterEditorGameManager___ctor (GameManagers_CharacterEditorGameManager_o* __this, const MethodInfo* method);
// 0x4211720

void GameManagers_CharacterEditorGameManager___ctor
               (GameManagers_CharacterEditorGameManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


// GameManagers.CharacterEditorGameManager$$.cctor
// il2cpp: void GameManagers_CharacterEditorGameManager___cctor (const MethodInfo* method);
// 0x4211730

void GameManagers_CharacterEditorGameManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_String_o *pSVar2;
  
  if (DAT_05705070 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CharacterEditorGameManager);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&"/CharacterPreviews");
    DAT_05705070 = '\x01';
  }
  **(undefined1 **)(TypeInfo_CharacterEditorGameManager + 0xb8) = 1;
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = System_String__Concat
                     ((System_String_o *)**(undefined8 **)(TypeInfo_FolderPaths + 0xb8),"/CharacterPreviews",
                      (MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_CharacterEditorGameManager + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 8,pSVar2);
  return;
}


