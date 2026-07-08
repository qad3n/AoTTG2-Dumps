// Type: Characters.DummyHuman
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/DummyHuman.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/DummyHuman.cs  [CHANGED since prior version]
// --------------------------------

// Characters.DummyHuman.<>c$$.cctor
// il2cpp: void Characters_DummyHuman___c___cctor (const MethodInfo* method);
// 0x3fa1bf0

void Characters_DummyHuman_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704035 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704035 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Characters.DummyHuman.<>c$$.ctor
// il2cpp: void Characters_DummyHuman___c___ctor (Characters_DummyHuman___c_o* __this, const MethodInfo* method);
// 0x3fa1c60

void Characters_DummyHuman_<>c___ctor(Characters_DummyHuman___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.DummyHuman.<>c$$<LoadSkinCoroutine>b__9_0
// il2cpp: bool Characters_DummyHuman___c___LoadSkinCoroutine_b__9_0 (Characters_DummyHuman___c_o* __this, System_String_o* url, const MethodInfo* method);
// 0x3fa1c70

bool_conflict
Characters_DummyHuman_<>c__<LoadSkinCoroutine>b__9_0
          (Characters_DummyHuman___c_o *__this,System_String_o *url,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704036 == '\0') {
    il2cpp_init_method_metadata(&"1");
    DAT_05704036 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(url,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return 0;
  }
  bVar1 = System_String__op_Inequality(url,"1",(MethodInfo *)0x0);
  return bVar1;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$.ctor
// il2cpp: void Characters_DummyHuman__LoadSkinCoroutine_d__9___ctor (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x3fa1ae0

void Characters_DummyHuman_<LoadSkinCoroutine>d__9___ctor
               (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.IDisposable.Dispose
// il2cpp: void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_IDisposable_Dispose (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x3fa1cc0

void Characters_DummyHuman_<LoadSkinCoroutine>d__9__System_IDisposable_Dispose
               (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  return;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$MoveNext
// il2cpp: bool Characters_DummyHuman__LoadSkinCoroutine_d__9__MoveNext (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x3fa1cd0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
Characters_DummyHuman_<LoadSkinCoroutine>d__9__MoveNext
          (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  CustomSkins_HumanCustomSkinLoader_o **ppCVar1;
  il2cpp_array_size_t *piVar2;
  char cVar3;
  byte bVar4;
  int iVar5;
  Characters_DummyHuman_o *pCVar6;
  Characters_HumanSetup_o *pCVar7;
  Settings_StringSetting_o *pSVar8;
  System_String_o *pSVar9;
  Settings_FloatSetting_o *pSVar10;
  Characters_DummyHuman__LoadSkinCoroutine_d__9_o *pCVar11;
  bool_conflict bVar12;
  UnityEngine_GameObject_o *pUVar13;
  CustomSkins_HumanCustomSkinLoader_o *pCVar14;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar15;
  undefined8 *puVar16;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar17;
  System_String_array *value;
  System_Func_TSource__bool__o *predicate;
  long *plVar18;
  long lVar19;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar20;
  undefined8 uVar21;
  undefined8 unaff_RBX;
  long lVar22;
  float fVar23;
  Settings_HumanCustomSet_o *pSStack_70;
  ulong uStack_68;
  Il2CppObject *pIStack_60;
  float fStack_54;
  Characters_DummyHuman_o *pCStack_50;
  undefined4 uStack_44;
  CustomSkins_HumanCustomSkinLoader_o **ppCStack_40;
  Characters_DummyHuman__LoadSkinCoroutine_d__9_o *pCStack_38;
  
  if (DAT_05704037 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSk);
    il2cpp_init_method_metadata(&TypeInfo_HumanCustomSkinSet);
    il2cpp_init_method_metadata(&TypeInfo_IListSetting);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_IListSetting_GetSets);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__LoadSkinCoroutine_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&",");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"HumanSetup not ready for skin loading on ");
    DAT_05704037 = '\x01';
  }
  uStack_68 = 0;
  pIStack_60 = (Il2CppObject *)0x0;
  pSStack_70 = (Settings_HumanCustomSet_o *)0x0;
  fStack_54 = 0.0;
  iVar5 = (__this->fields).__1__state;
  if (iVar5 == 2) {
    (__this->fields).__1__state = -1;
    return 0;
  }
  pCVar6 = (__this->fields).__4__this;
  if (iVar5 != 1) {
    if (iVar5 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (pCVar6 != (Characters_DummyHuman_o *)0x0) {
      *(undefined1 *)&(pCVar6->fields)._isLoadingSkins = 1;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_glue(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    }
    goto LAB_03fa41eb;
  }
  (__this->fields).__1__state = -1;
  il2cpp_glue_02274930(TypeInfo_string);
  if (pCVar6 == (Characters_DummyHuman_o *)0x0) goto LAB_03fa41eb;
  pCVar14 = (pCVar6->fields)._customSkinLoader;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ppCVar1 = &(pCVar6->fields)._customSkinLoader;
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
  ;
  if ((char)bVar12 != '\0') {
    pUVar13 = UnityEngine_Component__get_gameObject
                        ((UnityEngine_Component_o *)pCVar6,(MethodInfo *)0x0);
    if (pUVar13 == (UnityEngine_GameObject_o *)0x0) goto LAB_03fa41eb;
    pCVar14 = (CustomSkins_HumanCustomSkinLoader_o *)
              UnityEngine_GameObject__AddComponent<object>(pUVar13,MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSk);
    *ppCVar1 = pCVar14;
    il2cpp_runtime_glue(ppCVar1);
  }
  pCVar7 = (pCVar6->fields).Setup;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar12 = UnityEngine_Object__op_Equality
                     ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar12 != '\0') {
    __this_00 = (UnityEngine_Object_o *)
                UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pCVar6,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Object_o *)0x0) {
      pSVar15 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
      pSVar15 = System_String__Concat("HumanSetup not ready for skin loading on ",pSVar15,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_init_class();
      }
      UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar15,(MethodInfo *)0x0);
      *(undefined1 *)&(pCVar6->fields)._isLoadingSkins = 0;
      return 0;
    }
    goto LAB_03fa41eb;
  }
  lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
  pCStack_50 = pCVar6;
  ppCStack_40 = ppCVar1;
  pCStack_38 = __this;
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar19 = *(long *)(lVar19 + 0x20);
  if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (*(long *)(lVar19 + 0x60) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uStack_68 = CONCAT71(uStack_68._1_7_,*(undefined1 *)(*(long *)(lVar19 + 0x60) + 0x11));
  if (*(long *)(lVar19 + 0x58) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  cVar3 = *(char *)(*(long *)(lVar19 + 0x58) + 0x11);
  pCVar7 = (pCVar6->fields).Setup;
  if (pCVar7 == (Characters_HumanSetup_o *)0x0) {
    pSStack_70 = (Settings_HumanCustomSet_o *)0x0;
  }
  else {
    pSStack_70 = (pCVar7->fields).CustomSet;
  }
  il2cpp_runtime_glue(&pSStack_70);
  pIStack_60 = (Il2CppObject *)0x0;
  il2cpp_runtime_glue(&pIStack_60,0);
  if ((uStack_68 & 1) != 0) {
    lVar19 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    lVar19 = *(long *)(lVar19 + 0x20);
    if (lVar19 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(long *)(lVar19 + 0x78) == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar18 = *(long **)(lVar19 + 0x28);
    if (plVar18 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar5 = *(int *)(*(long *)(lVar19 + 0x78) + 0x14);
    lVar19 = *plVar18;
    if ((ulong)*(ushort *)(lVar19 + 0x12e) != 0) {
      lVar22 = 0;
      do {
        if (*(long *)(*(long *)(lVar19 + 0xb0) + lVar22) == TypeInfo_IListSetting) {
          puVar16 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar19 + 0xb0) + 8 + lVar22) + 2) * 0x10 + lVar19 +
                    0x138);
          goto LAB_03fa20d9;
        }
        lVar22 = lVar22 + 0x10;
      } while ((ulong)*(ushort *)(lVar19 + 0x12e) << 4 != lVar22);
    }
    puVar16 = (undefined8 *)il2cpp_runtime_glue(plVar18,TypeInfo_IListSetting,2);
LAB_03fa20d9:
    __this_01 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar16)(plVar18,puVar16[1])
    ;
    if (-1 < iVar5) {
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (iVar5 < (__this_01->fields)._size) {
        pIVar17 = System_Collections_Generic_List<object>__get_Item(__this_01,iVar5,MethodInfo_BaseSetting_get_Item);
        if (pIVar17 == (Il2CppObject *)0x0) {
          pIStack_60 = (Il2CppObject *)0x0;
        }
        else {
          bVar4 = (TypeInfo_HumanCustomSkinSet->_2).naturalAligment;
          if (((pIVar17->klass->_2).naturalAligment < bVar4) ||
             ((pIVar17->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_HumanCustomSkinSet)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIVar17);
          }
          pIStack_60 = pIVar17;
          if (((pIVar17->klass->_2).naturalAligment < bVar4) ||
             ((pIVar17->klass->_2).typeHierarchy[(ulong)bVar4 - 1] != TypeInfo_HumanCustomSkinSet)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIVar17);
          }
        }
        il2cpp_runtime_glue(&pIStack_60,pIVar17);
      }
    }
  }
  value = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa21b9;
LAB_03fa2219:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa222b:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2251;
    }
LAB_03fa2239:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[9].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = *(System_String_o **)((long)pIStack_60[9].monitor + 0x18);
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2219;
LAB_03fa21b9:
    pSVar8 = (pSStack_70->fields).SkinHorse;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa2239;
      goto LAB_03fa222b;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa2239;
  }
LAB_03fa2251:
  if (value == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)value->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0] = pSVar15;
  il2cpp_runtime_glue(value->m_Items);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa229d;
LAB_03fa22fd:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa230f:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2335;
    }
LAB_03fa231d:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[3].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = *(System_String_o **)((long)pIStack_60[3].monitor + 0x18);
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa22fd;
LAB_03fa229d:
    pSVar8 = (pSStack_70->fields).SkinHair;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa231d;
      goto LAB_03fa230f;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa231d;
  }
LAB_03fa2335:
  piVar2 = &value->max_length;
  if ((uint)*piVar2 < 2) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[1] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 1);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa237b;
LAB_03fa23db:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa23ed:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2413;
    }
LAB_03fa23fb:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[4].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = (System_String_o *)((pIStack_60[4].klass)->_1).namespaze;
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa23db;
LAB_03fa237b:
    pSVar8 = (pSStack_70->fields).SkinEye;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa23fb;
      goto LAB_03fa23ed;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa23fb;
  }
LAB_03fa2413:
  if ((uint)*piVar2 < 3) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[2] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 2);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2454;
LAB_03fa24b4:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa24c6:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa24ec;
    }
LAB_03fa24d4:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[4].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = *(System_String_o **)((long)pIStack_60[4].monitor + 0x18);
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa24b4;
LAB_03fa2454:
    pSVar8 = (pSStack_70->fields).SkinGlass;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa24d4;
      goto LAB_03fa24c6;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa24d4;
  }
LAB_03fa24ec:
  if ((uint)*piVar2 < 4) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[3] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 3);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa252d;
LAB_03fa258d:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa259f:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa25c5;
    }
LAB_03fa25ad:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[5].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = (System_String_o *)((pIStack_60[5].klass)->_1).namespaze;
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa258d;
LAB_03fa252d:
    pSVar8 = (pSStack_70->fields).SkinFace;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa25ad;
      goto LAB_03fa259f;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa25ad;
  }
LAB_03fa25c5:
  if ((uint)*piVar2 < 5) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[4] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 4);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2606;
LAB_03fa2666:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa2678:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa269e;
    }
LAB_03fa2686:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[5].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = *(System_String_o **)((long)pIStack_60[5].monitor + 0x18);
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2666;
LAB_03fa2606:
    pSVar8 = (pSStack_70->fields).SkinSkin;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa2686;
      goto LAB_03fa2678;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa2686;
  }
LAB_03fa269e:
  if ((uint)*piVar2 < 6) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[5] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 5);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa26df;
LAB_03fa273f:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa2751:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2777;
    }
LAB_03fa275f:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[6].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = (System_String_o *)((pIStack_60[6].klass)->_1).namespaze;
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa273f;
LAB_03fa26df:
    pSVar8 = (pSStack_70->fields).SkinCostume;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa275f;
      goto LAB_03fa2751;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa275f;
  }
LAB_03fa2777:
  if ((uint)*piVar2 < 7) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[6] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 6);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa27b8;
LAB_03fa2818:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa282a:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2850;
    }
LAB_03fa2838:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[6].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = *(System_String_o **)((long)pIStack_60[6].monitor + 0x18);
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2818;
LAB_03fa27b8:
    pSVar8 = (pSStack_70->fields).SkinLogo;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa2838;
      goto LAB_03fa282a;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa2838;
  }
LAB_03fa2850:
  if ((uint)*piVar2 < 8) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[7] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 7);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2891;
LAB_03fa28f1:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa2903:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2929;
    }
LAB_03fa2911:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[7].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = (System_String_o *)((pIStack_60[7].klass)->_1).namespaze;
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa28f1;
LAB_03fa2891:
    pSVar8 = (pSStack_70->fields).SkinGearL;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa2911;
      goto LAB_03fa2903;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa2911;
  }
LAB_03fa2929:
  if ((uint)*piVar2 < 9) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[8] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 8);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa296a;
LAB_03fa29ca:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa29dc:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2a02;
    }
LAB_03fa29ea:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[7].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = *(System_String_o **)((long)pIStack_60[7].monitor + 0x18);
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa29ca;
LAB_03fa296a:
    pSVar8 = (pSStack_70->fields).SkinGearR;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa29ea;
      goto LAB_03fa29dc;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa29ea;
  }
LAB_03fa2a02:
  if ((uint)*piVar2 < 10) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[9] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 9);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2a46;
LAB_03fa2aa6:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa2ab8:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2ade;
    }
LAB_03fa2ac6:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[8].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = (System_String_o *)((pIStack_60[8].klass)->_1).namespaze;
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2aa6;
LAB_03fa2a46:
    pSVar8 = (pSStack_70->fields).SkinGas;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa2ac6;
      goto LAB_03fa2ab8;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa2ac6;
  }
LAB_03fa2ade:
  if ((uint)*piVar2 < 0xb) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[10] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 10);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2b22;
LAB_03fa2b82:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa2b94:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2bba;
    }
LAB_03fa2ba2:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[8].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = *(System_String_o **)((long)pIStack_60[8].monitor + 0x18);
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2b82;
LAB_03fa2b22:
    pSVar8 = (pSStack_70->fields).SkinHoodie;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa2ba2;
      goto LAB_03fa2b94;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa2ba2;
  }
LAB_03fa2bba:
  if ((uint)*piVar2 < 0xc) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0xb] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 0xb);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2bfe;
LAB_03fa2c5e:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa2c70:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2c96;
    }
LAB_03fa2c7e:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[9].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = (System_String_o *)((pIStack_60[9].klass)->_1).namespaze;
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2c5e;
LAB_03fa2bfe:
    pSVar8 = (pSStack_70->fields).SkinWeaponTrail;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa2c7e;
      goto LAB_03fa2c70;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa2c7e;
  }
LAB_03fa2c96:
  if ((uint)*piVar2 < 0xd) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0xc] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 0xc);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2ce0;
LAB_03fa2d40:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa2d52:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2d78;
    }
LAB_03fa2d60:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[10].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = (System_String_o *)((pIStack_60[10].klass)->_1).namespaze;
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2d40;
LAB_03fa2ce0:
    pSVar8 = (pSStack_70->fields).SkinThunderspearL;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa2d60;
      goto LAB_03fa2d52;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa2d60;
  }
LAB_03fa2d78:
  if ((uint)*piVar2 < 0xe) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0xd] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 0xd);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2dc2;
LAB_03fa2e22:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa2e34:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2e5a;
    }
LAB_03fa2e42:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[10].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = *(System_String_o **)((long)pIStack_60[10].monitor + 0x18);
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2e22;
LAB_03fa2dc2:
    pSVar8 = (pSStack_70->fields).SkinThunderspearR;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa2e42;
      goto LAB_03fa2e34;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa2e42;
  }
LAB_03fa2e5a:
  if ((uint)*piVar2 < 0xf) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0xe] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 0xe,pSVar15);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    fVar23 = 1.0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2ea5;
LAB_03fa2eed:
    if ((pIStack_60 == (Il2CppObject *)0x0) || ((char)uStack_68 == '\0')) {
LAB_03fa2eff:
      fVar23 = 1.0;
    }
  }
  else {
    if (pIStack_60[0xb].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar23 = *(float *)((long)pIStack_60[0xb].monitor + 0x14);
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2eed;
LAB_03fa2ea5:
    pSVar10 = (pSStack_70->fields).SkinHookLTiling;
    if (pSVar10 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 != '\0' && pIStack_60 != (Il2CppObject *)0x0) goto LAB_03fa2f07;
      goto LAB_03fa2eff;
    }
    if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) {
      fVar23 = (pSVar10->fields)._value;
    }
  }
LAB_03fa2f07:
  fStack_54 = fVar23;
  pSVar15 = System_Single__ToString(fVar23,(MethodInfo *)&fStack_54);
  if ((uint)*piVar2 < 0x10) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0xf] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 0xf);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2f63;
LAB_03fa2fc3:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa2fd5:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa2ffb;
    }
LAB_03fa2fe3:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[0xb].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = (System_String_o *)((pIStack_60[0xb].klass)->_1).namespaze;
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa2fc3;
LAB_03fa2f63:
    pSVar8 = (pSStack_70->fields).SkinHookL;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa2fe3;
      goto LAB_03fa2fd5;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa2fe3;
  }
LAB_03fa2ffb:
  if ((uint)*piVar2 < 0x11) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0x10] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 0x10,pSVar15);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    fVar23 = 1.0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa3046;
LAB_03fa308e:
    if ((pIStack_60 == (Il2CppObject *)0x0) || ((char)uStack_68 == '\0')) {
LAB_03fa30a0:
      fVar23 = 1.0;
    }
  }
  else {
    if (pIStack_60[0xc].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar23 = *(float *)((long)pIStack_60[0xc].monitor + 0x14);
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa308e;
LAB_03fa3046:
    pSVar10 = (pSStack_70->fields).SkinHookRTiling;
    if (pSVar10 == (Settings_FloatSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 != '\0' && pIStack_60 != (Il2CppObject *)0x0) goto LAB_03fa30a8;
      goto LAB_03fa30a0;
    }
    if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) {
      fVar23 = (pSVar10->fields)._value;
    }
  }
LAB_03fa30a8:
  fStack_54 = fVar23;
  pSVar15 = System_Single__ToString(fVar23,(MethodInfo *)&fStack_54);
  if ((uint)*piVar2 < 0x12) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0x11] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 0x11);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa3104;
LAB_03fa3164:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa3176:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa319c;
    }
LAB_03fa3184:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[0xc].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = (System_String_o *)((pIStack_60[0xc].klass)->_1).namespaze;
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa3164;
LAB_03fa3104:
    pSVar8 = (pSStack_70->fields).SkinHookR;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa3184;
      goto LAB_03fa3176;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa3184;
  }
LAB_03fa319c:
  if ((uint)*piVar2 < 0x13) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0x12] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 0x12);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa31e6;
LAB_03fa3246:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa3258:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa327e;
    }
LAB_03fa3266:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[0xd].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = (System_String_o *)((pIStack_60[0xd].klass)->_1).namespaze;
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa3246;
LAB_03fa31e6:
    pSVar8 = (pSStack_70->fields).SkinHat;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa3266;
      goto LAB_03fa3258;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa3266;
  }
LAB_03fa327e:
  if ((uint)*piVar2 < 0x14) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0x13] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 0x13);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa32c8;
LAB_03fa3328:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa333a:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa3360;
    }
LAB_03fa3348:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[0xd].monitor == (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = *(System_String_o **)((long)pIStack_60[0xd].monitor + 0x18);
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa3328;
LAB_03fa32c8:
    pSVar8 = (pSStack_70->fields).SkinHead;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa3348;
      goto LAB_03fa333a;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa3348;
  }
LAB_03fa3360:
  if ((uint)*piVar2 < 0x15) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0x14] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 0x14);
  if (pIStack_60 == (Il2CppObject *)0x0) {
    pSVar15 = (System_String_o *)0x0;
    if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa33aa;
LAB_03fa340a:
    if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
LAB_03fa341c:
      bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0);
      if ((char)bVar12 == '\0') goto LAB_03fa3442;
    }
LAB_03fa342a:
    pSVar15 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  else {
    if (pIStack_60[0xe].klass == (Il2CppClass *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar15 = (System_String_o *)((pIStack_60[0xe].klass)->_1).namespaze;
    if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto LAB_03fa340a;
LAB_03fa33aa:
    pSVar8 = (pSStack_70->fields).SkinBack;
    if (pSVar8 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar3 == '\0')) {
      if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto LAB_03fa342a;
      goto LAB_03fa341c;
    }
    pSVar9 = (pSVar8->fields)._value;
    if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
        (bVar12 = System_String__IsNullOrEmpty(pSVar15,(MethodInfo *)0x0), (char)bVar12 != '\0')) &&
       (bVar12 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0), pSVar15 = pSVar9,
       (char)bVar12 != '\0')) goto LAB_03fa342a;
  }
LAB_03fa3442:
  if ((uint)*piVar2 < 0x16) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value->m_Items[0x15] = pSVar15;
  il2cpp_runtime_glue(value->m_Items + 0x15,pSVar15);
  pSVar15 = System_String__Join(",",value,(MethodInfo *)0x0);
  *(undefined1 *)&(pCStack_50->fields)._isLoadingSkins = 0;
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
  }
  predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  if (predicate == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
    System_Func<object__bool>___ctor();
    lVar19 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar19 + 8) = predicate;
    il2cpp_runtime_glue(lVar19 + 8,predicate);
  }
  bVar12 = System_Linq_Enumerable__Any<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)value,predicate,
                      MethodInfo_Boolean_Any_String);
  pCVar6 = pCStack_50;
  if ((char)bVar12 == '\0') {
    pCVar7 = (pCStack_50->fields).Setup;
    if (pCVar7 != (Characters_HumanSetup_o *)0x0) {
      Characters_HumanSetup__Load
                (pCVar7,(pCVar7->fields).CustomSet,(pCVar7->fields).Weapon,0,(MethodInfo *)0x0);
      ppCVar1 = ppCStack_40;
      pCVar14 = *ppCStack_40;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar12 = UnityEngine_Object__op_Inequality
                         ((UnityEngine_Object_o *)pCVar14,(UnityEngine_Object_o *)0x0,
                          (MethodInfo *)0x0);
      if ((char)bVar12 != '\0') {
        pCVar14 = *ppCVar1;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Object__Destroy((UnityEngine_Object_o *)pCVar14,(MethodInfo *)0x0);
      }
      pUVar13 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)pCVar6,(MethodInfo *)0x0);
      if (pUVar13 != (UnityEngine_GameObject_o *)0x0) {
        pCVar14 = (CustomSkins_HumanCustomSkinLoader_o *)
                  UnityEngine_GameObject__AddComponent<object>(pUVar13,MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSk);
        *ppCVar1 = pCVar14;
        il2cpp_runtime_glue(ppCVar1,pCVar14);
        return 0;
      }
    }
  }
  else {
    pCVar14 = *ppCStack_40;
    plVar18 = (long *)il2cpp_glue_02274930(TypeInfo_object,2);
    uStack_44 = 0xffffffff;
    lVar19 = il2cpp_runtime_glue(DAT_05711068,&uStack_44);
    pCVar11 = pCStack_38;
    if (plVar18 != (long *)0x0) {
      if ((lVar19 != 0) &&
         (lVar22 = il2cpp_runtime_glue(lVar19,*(undefined8 *)(*plVar18 + 0x40)), lVar22 == 0)) {
LAB_03fa3771:
        uVar21 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar21,0);
      }
      if ((int)plVar18[3] != 0) {
        plVar18[4] = lVar19;
        il2cpp_runtime_glue(plVar18 + 4,lVar19);
        if ((pSVar15 != (System_String_o *)0x0) &&
           (lVar22 = il2cpp_runtime_glue(pSVar15,*(undefined8 *)(*plVar18 + 0x40)), lVar22 == 0))
        goto LAB_03fa3771;
        if (1 < *(uint *)(plVar18 + 3)) {
          plVar18[5] = (long)pSVar15;
          il2cpp_runtime_glue(plVar18 + 5,pSVar15);
          if (pCVar14 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) {
            routine = (System_Collections_IEnumerator_o *)
                      (*(pCVar14->klass->vtable)._6_LoadSkinsFromRPC.methodPtr)
                                (pCVar14,plVar18,(pCVar14->klass->vtable)._6_LoadSkinsFromRPC.method
                                );
            pUVar20 = UnityEngine_MonoBehaviour__StartCoroutine
                                ((UnityEngine_MonoBehaviour_o *)pCStack_50,routine,(MethodInfo *)0x0
                                );
            (pCVar11->fields).__2__current = (Il2CppObject *)pUVar20;
            il2cpp_runtime_glue(&(pCVar11->fields).__2__current,pUVar20);
            (pCVar11->fields).__1__state = 2;
            return (bool_conflict)CONCAT71((int7)((ulong)lVar19 >> 8),1);
          }
          goto LAB_03fa41eb;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03fa41eb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x3fa4230

Il2CppObject *
Characters_DummyHuman_<LoadSkinCoroutine>d__9__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_Reset (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x3fa4240

void Characters_DummyHuman_<LoadSkinCoroutine>d__9__System_Collections_IEnumerator_Reset
               (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

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


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_get_Current (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x3fa4280

Il2CppObject *
Characters_DummyHuman_<LoadSkinCoroutine>d__9__System_Collections_IEnumerator_get_Current
          (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.DummyHuman$$Awake
// il2cpp: void Characters_DummyHuman__Awake (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x3fa13e0

void Characters_DummyHuman__Awake(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  Characters_HumanComponentCache_o **ppCVar1;
  Characters_HumanSetup_o **ppCVar2;
  UnityEngine_Rigidbody_o *pUVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *pUVar5;
  Characters_HumanComponentCache_o *pCVar6;
  Characters_HumanSetup_o *pCVar7;
  undefined1 auVar8 [16];
  
  if (DAT_05704030 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HumanSetup_AddComponent_HumanSetup);
    il2cpp_init_method_metadata(&MethodInfo_HumanSetup_GetComponent_HumanSetup);
    il2cpp_init_method_metadata(&TypeInfo_HumanComponentCache);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704030 = '\x01';
  }
  if (DAT_0570402f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimationHandler);
    DAT_0570402f = '\x01';
  }
  pUVar5 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  auVar8 = il2cpp_runtime_glue(TypeInfo_AnimationHandler);
  Characters_AnimationHandler___ctor(auVar8._0_8_,pUVar5,auVar8._8_8_);
  (__this->fields).Animation = auVar8._0_8_;
  il2cpp_runtime_glue(&(__this->fields).Animation);
  pUVar5 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pCVar6 = (Characters_HumanComponentCache_o *)il2cpp_runtime_glue(TypeInfo_HumanComponentCache);
  Characters_HumanComponentCache___ctor(pCVar6,pUVar5,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields).Cache;
  (__this->fields).Cache = pCVar6;
  il2cpp_runtime_glue(ppCVar1,pCVar6);
  pCVar6 = (__this->fields).Cache;
  if ((pCVar6 != (Characters_HumanComponentCache_o *)0x0) &&
     (pUVar3 = (pCVar6->fields).Rigidbody, pUVar3 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_freezeRotation(pUVar3,1,(MethodInfo *)0x0);
    if ((*ppCVar1 != (Characters_HumanComponentCache_o *)0x0) &&
       (pUVar3 = ((*ppCVar1)->fields).Rigidbody, pUVar3 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__set_useGravity(pUVar3,0,(MethodInfo *)0x0);
      if (*ppCVar1 != (Characters_HumanComponentCache_o *)0x0) {
        pUVar3 = ((*ppCVar1)->fields).Rigidbody;
        if (DAT_056fdd15 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Vector3);
          DAT_056fdd15 = '\x01';
        }
        if (pUVar3 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_velocity
                    (pUVar3,(UnityEngine_Vector3_o)
                            **(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),(MethodInfo *)0x0
                    );
          pUVar5 = UnityEngine_Component__get_gameObject
                             ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
            pCVar7 = (Characters_HumanSetup_o *)
                     UnityEngine_GameObject__GetComponent<object>(pUVar5,MethodInfo_HumanSetup_GetComponent_HumanSetup);
            ppCVar2 = &(__this->fields).Setup;
            (__this->fields).Setup = pCVar7;
            il2cpp_runtime_glue(ppCVar2);
            pCVar7 = (__this->fields).Setup;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_init_class();
            }
            bVar4 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,
                               (MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              return;
            }
            pUVar5 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
              pCVar7 = (Characters_HumanSetup_o *)
                       UnityEngine_GameObject__AddComponent<object>(pUVar5,MethodInfo_HumanSetup_AddComponent_HumanSetup);
              *ppCVar2 = pCVar7;
              il2cpp_runtime_glue(ppCVar2,pCVar7);
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


// Characters.DummyHuman$$Start
// il2cpp: void Characters_DummyHuman__Start (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x3fa1610

void Characters_DummyHuman__Start(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_HumanCustomSkinLoader_o *pCVar2;
  CustomSkins_HumanCustomSkinLoader_o **ppCVar3;
  
  if (DAT_05704031 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSk);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704031 = '\x01';
  }
  pCVar2 = (__this->fields)._customSkinLoader;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    __this_00 = UnityEngine_Component__get_gameObject
                          ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      ppCVar3 = &(__this->fields)._customSkinLoader;
      pCVar2 = (CustomSkins_HumanCustomSkinLoader_o *)
               UnityEngine_GameObject__AddComponent<object>(__this_00,MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSk);
      *ppCVar3 = pCVar2;
      il2cpp_runtime_glue(ppCVar3,pCVar2);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Characters.DummyHuman$$GetIdleAnimation
// il2cpp: System_String_o* Characters_DummyHuman__GetIdleAnimation (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x3fa16c0

System_String_o *
Characters_DummyHuman__GetIdleAnimation(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Characters_HumanSetup_o *pCVar3;
  Settings_HumanCustomSet_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  long lVar6;
  undefined8 *puVar7;
  
  if (DAT_05704032 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704032 = '\x01';
  }
  pCVar3 = (__this->fields).Setup;
  if (((pCVar3 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar4 = (pCVar3->fields).CustomSet, pSVar4 != (Settings_HumanCustomSet_o *)0x0)) &&
     (pSVar5 = (pSVar4->fields).Sex, pSVar5 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar5->fields)._value;
    uVar2 = (pCVar3->fields).Weapon;
    if ((uVar2 | 2) == 3) {
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_init_class();
        lVar6 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
      }
      else {
        lVar6 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
      }
      if (iVar1 == 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x30);
      }
      else {
        puVar7 = (undefined8 *)(lVar6 + 0x38);
      }
    }
    else {
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_init_class();
        lVar6 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
      }
      else {
        lVar6 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
      }
      if (uVar2 == 2) {
        if (iVar1 == 0) {
          puVar7 = (undefined8 *)(lVar6 + 0x48);
        }
        else {
          puVar7 = (undefined8 *)(lVar6 + 0x40);
        }
      }
      else if (iVar1 == 0) {
        puVar7 = (undefined8 *)(lVar6 + 0x28);
      }
      else {
        puVar7 = (undefined8 *)(lVar6 + 0x20);
      }
    }
    return (System_String_o *)*puVar7;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.DummyHuman$$GetEmoteAnimation
// il2cpp: System_String_o* Characters_DummyHuman__GetEmoteAnimation (Characters_DummyHuman_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x3fa17d0

System_String_o *
Characters_DummyHuman__GetEmoteAnimation
          (Characters_DummyHuman_o *__this,System_String_o *emote,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  long lVar4;
  
  if (DAT_05704033 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanAnimations);
    il2cpp_init_method_metadata(&"Wave");
    il2cpp_init_method_metadata(&"Shake");
    il2cpp_init_method_metadata(&"Nod");
    il2cpp_init_method_metadata(&"Eat");
    il2cpp_init_method_metadata(&"Dance");
    il2cpp_init_method_metadata(&"Salute");
    il2cpp_init_method_metadata(&"Flip");
    DAT_05704033 = '\x01';
  }
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x228);
  bVar3 = System_String__op_Equality(emote,"Salute",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    bVar3 = System_String__op_Equality(emote,"Dance",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      bVar3 = System_String__op_Equality(emote,"Flip",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        bVar3 = System_String__op_Equality(emote,"Wave",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          bVar3 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            bVar3 = System_String__op_Equality(emote,"Shake",(MethodInfo *)0x0);
            if ((char)bVar3 == '\0') {
              bVar3 = System_String__op_Equality(emote,"Eat",(MethodInfo *)0x0);
              if ((char)bVar3 == '\0') {
                return pSVar2;
              }
              lVar4 = 0x1f0;
              iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
            }
            else {
              lVar4 = 0x230;
              iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
            }
          }
          else {
            lVar4 = 0x238;
            iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
          }
        }
        else {
          lVar4 = 0x240;
          iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
        }
      }
      else {
        lVar4 = 0x70;
        iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
      }
    }
    else {
      lVar4 = 0x1d8;
      iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
    }
  }
  else {
    lVar4 = 0x228;
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar4);
}


// Characters.DummyHuman$$LoadSkin
// il2cpp: void Characters_DummyHuman__LoadSkin (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x3fa19e0

void Characters_DummyHuman__LoadSkin(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if ((char)(__this->fields)._isLoadingSkins != '\0') {
    return;
  }
  if (DAT_05704034 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinCoroutine_d__9);
    DAT_05704034 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinCoroutine_d__9);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    UnityEngine_MonoBehaviour__StartCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.DummyHuman$$LoadSkinCoroutine
// il2cpp: System_Collections_IEnumerator_o* Characters_DummyHuman__LoadSkinCoroutine (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x3fa1a70

System_Collections_IEnumerator_o *
Characters_DummyHuman__LoadSkinCoroutine(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704034 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_LoadSkinCoroutine_d__9);
    DAT_05704034 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_LoadSkinCoroutine_d__9);
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


// Characters.DummyHuman$$.ctor
// il2cpp: void Characters_DummyHuman___ctor (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x3fa1b00

void Characters_DummyHuman___ctor(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.DummyHuman$$<LoadSkinCoroutine>g__GetSkinValue|9_1
// il2cpp: System_String_o* Characters_DummyHuman___LoadSkinCoroutine_g__GetSkinValue_9_1 (System_String_o* globalValue, System_String_o* presetValue, Characters_DummyHuman___c__DisplayClass9_0_o* , const MethodInfo* method);
// 0x3fa1b10

System_String_o *
Characters_DummyHuman__<LoadSkinCoroutine>g__GetSkinValue_9_1
          (System_String_o *globalValue,System_String_o *presetValue,
          Characters_DummyHuman___c__DisplayClass9_0_o *param_3,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  
  cVar1 = (char)(param_3->fields).usePresetSkins;
  if ((cVar1 == '\0') || ((param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0)) {
    if (((char)(param_3->fields).useGlobalOverrides == '\0') ||
       ((param_3->fields).globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) {
      if ((cVar1 == '\0') || ((param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0))
      goto LAB_03fa1b7d;
      goto LAB_03fa1b6c;
    }
    bVar2 = System_String__IsNullOrEmpty(globalValue,(MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  else {
    if (((char)(param_3->fields).useGlobalOverrides != '\0') &&
       (((param_3->fields).globalSet != (Settings_HumanCustomSkinSet_o *)0x0 &&
        (bVar2 = System_String__IsNullOrEmpty(globalValue,(MethodInfo *)0x0), (char)bVar2 == '\0')))
       ) {
      return globalValue;
    }
LAB_03fa1b6c:
    bVar2 = System_String__IsNullOrEmpty(presetValue,(MethodInfo *)0x0);
    cVar1 = (char)bVar2;
    globalValue = presetValue;
  }
  if (cVar1 == '\0') {
    return globalValue;
  }
LAB_03fa1b7d:
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Characters.DummyHuman$$<LoadSkinCoroutine>g__GetFloatValue|9_2
// il2cpp: float Characters_DummyHuman___LoadSkinCoroutine_g__GetFloatValue_9_2 (float globalValue, float presetValue, Characters_DummyHuman___c__DisplayClass9_0_o* , const MethodInfo* method);
// 0x3fa1ba0

float Characters_DummyHuman__<LoadSkinCoroutine>g__GetFloatValue_9_2
                (float globalValue,float presetValue,
                Characters_DummyHuman___c__DisplayClass9_0_o *param_3,MethodInfo *method)

{
  char cVar1;
  
  cVar1 = (char)(param_3->fields).usePresetSkins;
  if ((cVar1 == '\0') || ((param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0)) {
    if ((((char)(param_3->fields).useGlobalOverrides == '\0') ||
        ((param_3->fields).globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) &&
       ((cVar1 == '\0' ||
        (globalValue = presetValue, (param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0)
        ))) {
      return 1.0;
    }
  }
  else if (((char)(param_3->fields).useGlobalOverrides == '\0') ||
          ((param_3->fields).globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) {
    return presetValue;
  }
  return globalValue;
}


