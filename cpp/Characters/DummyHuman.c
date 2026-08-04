// Type: Characters.DummyHuman
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DummyHuman.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Human/DummyHuman.cs
// --------------------------------

// Characters.DummyHuman.<>c$$.cctor
// il2cpp: void Characters_DummyHuman___c___cctor (const MethodInfo* method);
// 0x42ae490

void Characters_DummyHuman___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057adda3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adda3 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Characters.DummyHuman.<>c$$.ctor
// il2cpp: void Characters_DummyHuman___c___ctor (Characters_DummyHuman___c_o* __this, const MethodInfo* method);
// 0x42ae500

void Characters_DummyHuman___c___ctor(Characters_DummyHuman___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.DummyHuman.<>c$$<LoadSkinCoroutine>b__9_0
// il2cpp: bool Characters_DummyHuman___c___LoadSkinCoroutine_b__9_0 (Characters_DummyHuman___c_o* __this, System_String_o* url, const MethodInfo* method);
// 0x42ae510

bool_conflict
Characters_DummyHuman___c___LoadSkinCoroutine_b__9_0
          (Characters_DummyHuman___c_o *__this,System_String_o *url,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057adda4 == '\0') {
    il2cpp_runtime_helper_023445d0(&"1");
    g_data_057adda4 = '\x01';
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
// 0x42ae380

void Characters_DummyHuman__LoadSkinCoroutine_d__9___ctor
               (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.IDisposable.Dispose
// il2cpp: void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_IDisposable_Dispose (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x42ae560

void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_IDisposable_Dispose
               (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  return;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$MoveNext
// il2cpp: bool Characters_DummyHuman__LoadSkinCoroutine_d__9__MoveNext (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x42ae570

bool_conflict
Characters_DummyHuman__LoadSkinCoroutine_d__9__MoveNext
          (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  CustomSkins_HumanCustomSkinLoader_o **ppCVar1;
  il2cpp_array_size_t *piVar2;
  byte bVar3;
  int iVar4;
  Characters_DummyHuman_o *pCVar5;
  Settings_StringSetting_o *pSVar6;
  System_String_o *pSVar7;
  Settings_FloatSetting_o *pSVar8;
  Characters_DummyHuman__LoadSkinCoroutine_d__9_o *pCVar9;
  char cVar10;
  bool_conflict bVar11;
  UnityEngine_GameObject_o *pUVar12;
  CustomSkins_HumanCustomSkinLoader_o *pCVar13;
  UnityEngine_Object_o *__this_00;
  System_String_o *pSVar14;
  System_Collections_Generic_List_object__o *__this_01;
  Il2CppObject *pIVar15;
  System_String_array *value;
  long *plVar16;
  Characters_HumanSetup_o *pCVar17;
  long lVar18;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar19;
  undefined8 uVar20;
  undefined8 *puVar21;
  Characters_HumanSetup_o *unaff_RBX;
  long lVar22;
  float fVar23;
  undefined1 auVar24 [12];
  Settings_HumanCustomSet_o *pSStack_70;
  ulong uStack_68;
  Il2CppObject *pIStack_60;
  float fStack_54;
  Characters_DummyHuman_o *pCStack_50;
  undefined4 uStack_44;
  CustomSkins_HumanCustomSkinLoader_o **ppCStack_40;
  Characters_DummyHuman__LoadSkinCoroutine_d__9_o *pCStack_38;
  
  if (g_data_057adda5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Any_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_bool);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSkinLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanCustomSkinSet);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IListSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IListSetting_GetSets);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_LoadSkinCoroutine_b__9_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&",");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"HumanSetup not ready for skin loading on ");
    g_data_057adda5 = '\x01';
  }
  uStack_68 = 0;
  pIStack_60 = (Il2CppObject *)0x0;
  pSStack_70 = (Settings_HumanCustomSet_o *)0x0;
  fStack_54 = 0.0;
  iVar4 = (__this->fields).__1__state;
  if (iVar4 == 2) {
    (__this->fields).__1__state = -1;
    return 0;
  }
  pCVar5 = (__this->fields).__4__this;
  if (iVar4 == 1) {
    (__this->fields).__1__state = -1;
    il2cpp_runtime_helper_022b2a40(TypeInfo_string);
    if (pCVar5 != (Characters_DummyHuman_o *)0x0) {
      unaff_RBX = (Characters_HumanSetup_o *)(pCVar5->fields)._customSkinLoader;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ppCVar1 = &(pCVar5->fields)._customSkinLoader;
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 != '\0') {
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0);
        if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_042b0a8b;
        pCVar13 = (CustomSkins_HumanCustomSkinLoader_o *)
                  UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSkinLoader);
        *ppCVar1 = pCVar13;
        il2cpp_runtime_helper_022b4080(ppCVar1);
      }
      unaff_RBX = (pCVar5->fields).Setup;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar11 = UnityEngine_Object__op_Equality
                         ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar11 == '\0') {
        lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
        pCStack_50 = pCVar5;
        ppCStack_40 = ppCVar1;
        pCStack_38 = __this;
        if (lVar18 == 0) {
          il2cpp_runtime_helper_022b2c90();
label_042aff8f:
          il2cpp_runtime_helper_022b2c90();
label_042aff94:
          il2cpp_runtime_helper_022b2c90();
label_042aff99:
          il2cpp_runtime_helper_022b2c90();
label_042aff9e:
          il2cpp_runtime_helper_022b2c90();
label_042affa3:
          il2cpp_runtime_helper_022b2ca0();
label_042affa8:
          il2cpp_runtime_helper_022b2ca0();
label_042affad:
          il2cpp_runtime_helper_022b2ca0();
label_042affb2:
          il2cpp_runtime_helper_022b2ca0();
label_042affb7:
          il2cpp_runtime_helper_022b2ca0();
label_042affbc:
          il2cpp_runtime_helper_022b2ca0();
label_042affc1:
          il2cpp_runtime_helper_022b2ca0();
label_042affc6:
          il2cpp_runtime_helper_022b2ca0();
label_042affcb:
          il2cpp_runtime_helper_022b2ca0();
label_042affd0:
          il2cpp_runtime_helper_022b2ca0();
label_042affd5:
          il2cpp_runtime_helper_022b2ca0();
label_042affda:
          il2cpp_runtime_helper_022b2ca0();
label_042affdf:
          il2cpp_runtime_helper_022b2ca0();
label_042affe4:
          il2cpp_runtime_helper_022b2ca0();
label_042affe9:
          il2cpp_runtime_helper_022b2ca0();
label_042affee:
          il2cpp_runtime_helper_022b2ca0();
label_042afff3:
          il2cpp_runtime_helper_022b2ca0();
label_042afff8:
          il2cpp_runtime_helper_022b2ca0();
label_042afffd:
          il2cpp_runtime_helper_022b2ca0();
label_042b0002:
          il2cpp_runtime_helper_022b2ca0();
label_042b0007:
          il2cpp_runtime_helper_022b2ca0();
        }
        else {
          lVar18 = *(long *)(lVar18 + 0x20);
          if (lVar18 == 0) goto label_042aff8f;
          if (*(long *)(lVar18 + 0x60) == 0) goto label_042aff94;
          uStack_68 = CONCAT71(uStack_68._1_7_,*(undefined1 *)(*(long *)(lVar18 + 0x60) + 0x11));
          if (*(long *)(lVar18 + 0x58) == 0) goto label_042aff99;
          cVar10 = *(char *)(*(long *)(lVar18 + 0x58) + 0x11);
          pCVar17 = (pCVar5->fields).Setup;
          if (pCVar17 == (Characters_HumanSetup_o *)0x0) {
            pSStack_70 = (Settings_HumanCustomSet_o *)0x0;
          }
          else {
            pSStack_70 = (pCVar17->fields).CustomSet;
          }
          il2cpp_runtime_helper_022b4080(&pSStack_70);
          pIStack_60 = (Il2CppObject *)0x0;
          il2cpp_runtime_helper_022b4080(&pIStack_60,0);
          if ((uStack_68 & 1) != 0) {
            lVar18 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x10);
            if (lVar18 == 0) goto label_042b00fc;
            lVar18 = *(long *)(lVar18 + 0x20);
            if (lVar18 == 0) goto label_042b0101;
            if (*(long *)(lVar18 + 0x78) == 0) goto label_042b0106;
            plVar16 = *(long **)(lVar18 + 0x28);
            if (plVar16 == (long *)0x0) goto label_042b010b;
            iVar4 = *(int *)(*(long *)(lVar18 + 0x78) + 0x14);
            lVar18 = *plVar16;
            if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
              lVar22 = 0;
              do {
                if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar22) == TypeInfo_IListSetting) {
                  puVar21 = (undefined8 *)
                            ((long)(*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar22) + 2) * 0x10 + lVar18 +
                            0x138);
                  goto label_042ae979;
                }
                lVar22 = lVar22 + 0x10;
              } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar22);
            }
            puVar21 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar16,TypeInfo_IListSetting,2);
label_042ae979:
            __this_01 = (System_Collections_Generic_List_object__o *)(*(code *)*puVar21)(plVar16,puVar21[1]);
            if (-1 < iVar4) {
              if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) goto label_042b0110;
              if (iVar4 < (__this_01->fields)._size) {
                pIVar15 = System_Collections_Generic_List_object___get_Item(__this_01,iVar4,MethodInfo_BaseSetting_get_Item);
                if (pIVar15 == (Il2CppObject *)0x0) {
label_042aea0d:
                  pIStack_60 = (Il2CppObject *)0x0;
                }
                else {
                  bVar3 = (TypeInfo_HumanCustomSkinSet->_2).naturalAligment;
                  if ((pIVar15->klass->_2).naturalAligment < bVar3) goto label_042b0115;
                  if ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_HumanCustomSkinSet) goto label_042b0115;
                  pIStack_60 = pIVar15;
                  if (((pIVar15->klass->_2).naturalAligment < bVar3) ||
                     ((pIVar15->klass->_2).typeHierarchy[(ulong)bVar3 - 1] != TypeInfo_HumanCustomSkinSet)) {
                    pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_022b2fd0(pIVar15);
                    goto label_042aea0d;
                  }
                }
                il2cpp_runtime_helper_022b4080(&pIStack_60,pIVar15);
              }
            }
          }
          value = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042aea59;
label_042aeab9:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042aeacb:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042aeaf1;
            }
label_042aead9:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[9].monitor == (void *)0x0) goto label_042b0020;
            pSVar14 = *(System_String_o **)((long)pIStack_60[9].monitor + 0x18);
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042aeab9;
label_042aea59:
            pSVar6 = (pSStack_70->fields).SkinHorse;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b0025;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042aead9;
              goto label_042aeacb;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042aead9;
          }
label_042aeaf1:
          if (value == (System_String_array *)0x0) goto label_042aff9e;
          if ((int)value->max_length == 0) goto label_042affa3;
          value->m_Items[0] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042aeb3d;
label_042aeb9d:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042aebaf:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042aebd5;
            }
label_042aebbd:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[3].monitor == (void *)0x0) goto label_042b002a;
            pSVar14 = *(System_String_o **)((long)pIStack_60[3].monitor + 0x18);
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042aeb9d;
label_042aeb3d:
            pSVar6 = (pSStack_70->fields).SkinHair;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b002f;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042aebbd;
              goto label_042aebaf;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042aebbd;
          }
label_042aebd5:
          piVar2 = &value->max_length;
          if ((uint)*piVar2 < 2) goto label_042affa8;
          value->m_Items[1] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 1);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042aec1b;
label_042aec7b:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042aec8d:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042aecb3;
            }
label_042aec9b:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[4].klass == (Il2CppClass *)0x0) goto label_042b0034;
            pSVar14 = (System_String_o *)((pIStack_60[4].klass)->_1).namespaze;
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042aec7b;
label_042aec1b:
            pSVar6 = (pSStack_70->fields).SkinEye;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b0039;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042aec9b;
              goto label_042aec8d;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042aec9b;
          }
label_042aecb3:
          if ((uint)*piVar2 < 3) goto label_042affad;
          value->m_Items[2] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 2);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042aecf4;
label_042aed54:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042aed66:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042aed8c;
            }
label_042aed74:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[4].monitor == (void *)0x0) goto label_042b003e;
            pSVar14 = *(System_String_o **)((long)pIStack_60[4].monitor + 0x18);
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042aed54;
label_042aecf4:
            pSVar6 = (pSStack_70->fields).SkinGlass;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b0043;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042aed74;
              goto label_042aed66;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042aed74;
          }
label_042aed8c:
          if ((uint)*piVar2 < 4) goto label_042affb2;
          value->m_Items[3] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 3);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042aedcd;
label_042aee2d:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042aee3f:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042aee65;
            }
label_042aee4d:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[5].klass == (Il2CppClass *)0x0) goto label_042b0048;
            pSVar14 = (System_String_o *)((pIStack_60[5].klass)->_1).namespaze;
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042aee2d;
label_042aedcd:
            pSVar6 = (pSStack_70->fields).SkinFace;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b004d;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042aee4d;
              goto label_042aee3f;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042aee4d;
          }
label_042aee65:
          if ((uint)*piVar2 < 5) goto label_042affb7;
          value->m_Items[4] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 4);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042aeea6;
label_042aef06:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042aef18:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042aef3e;
            }
label_042aef26:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[5].monitor == (void *)0x0) goto label_042b0052;
            pSVar14 = *(System_String_o **)((long)pIStack_60[5].monitor + 0x18);
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042aef06;
label_042aeea6:
            pSVar6 = (pSStack_70->fields).SkinSkin;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b0057;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042aef26;
              goto label_042aef18;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042aef26;
          }
label_042aef3e:
          if ((uint)*piVar2 < 6) goto label_042affbc;
          value->m_Items[5] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 5);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042aef7f;
label_042aefdf:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042aeff1:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042af017;
            }
label_042aefff:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[6].klass == (Il2CppClass *)0x0) goto label_042b005c;
            pSVar14 = (System_String_o *)((pIStack_60[6].klass)->_1).namespaze;
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042aefdf;
label_042aef7f:
            pSVar6 = (pSStack_70->fields).SkinCostume;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b0061;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042aefff;
              goto label_042aeff1;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042aefff;
          }
label_042af017:
          if ((uint)*piVar2 < 7) goto label_042affc1;
          value->m_Items[6] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 6);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af058;
label_042af0b8:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042af0ca:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042af0f0;
            }
label_042af0d8:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[6].monitor == (void *)0x0) goto label_042b0066;
            pSVar14 = *(System_String_o **)((long)pIStack_60[6].monitor + 0x18);
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042af0b8;
label_042af058:
            pSVar6 = (pSStack_70->fields).SkinLogo;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b006b;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042af0d8;
              goto label_042af0ca;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042af0d8;
          }
label_042af0f0:
          if ((uint)*piVar2 < 8) goto label_042affc6;
          value->m_Items[7] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 7);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af131;
label_042af191:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042af1a3:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042af1c9;
            }
label_042af1b1:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[7].klass == (Il2CppClass *)0x0) goto label_042b0070;
            pSVar14 = (System_String_o *)((pIStack_60[7].klass)->_1).namespaze;
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042af191;
label_042af131:
            pSVar6 = (pSStack_70->fields).SkinGearL;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b0075;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042af1b1;
              goto label_042af1a3;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042af1b1;
          }
label_042af1c9:
          if ((uint)*piVar2 < 9) goto label_042affcb;
          value->m_Items[8] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 8);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af20a;
label_042af26a:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042af27c:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042af2a2;
            }
label_042af28a:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[7].monitor == (void *)0x0) goto label_042b007a;
            pSVar14 = *(System_String_o **)((long)pIStack_60[7].monitor + 0x18);
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042af26a;
label_042af20a:
            pSVar6 = (pSStack_70->fields).SkinGearR;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b007f;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042af28a;
              goto label_042af27c;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042af28a;
          }
label_042af2a2:
          if ((uint)*piVar2 < 10) goto label_042affd0;
          value->m_Items[9] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 9);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af2e6;
label_042af346:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042af358:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042af37e;
            }
label_042af366:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[8].klass == (Il2CppClass *)0x0) goto label_042b0084;
            pSVar14 = (System_String_o *)((pIStack_60[8].klass)->_1).namespaze;
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042af346;
label_042af2e6:
            pSVar6 = (pSStack_70->fields).SkinGas;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b0089;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042af366;
              goto label_042af358;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042af366;
          }
label_042af37e:
          if ((uint)*piVar2 < 0xb) goto label_042affd5;
          value->m_Items[10] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 10);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af3c2;
label_042af422:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042af434:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042af45a;
            }
label_042af442:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[8].monitor == (void *)0x0) goto label_042b008e;
            pSVar14 = *(System_String_o **)((long)pIStack_60[8].monitor + 0x18);
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042af422;
label_042af3c2:
            pSVar6 = (pSStack_70->fields).SkinHoodie;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b0093;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042af442;
              goto label_042af434;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042af442;
          }
label_042af45a:
          if ((uint)*piVar2 < 0xc) goto label_042affda;
          value->m_Items[0xb] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 0xb);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af49e;
label_042af4fe:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042af510:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042af536;
            }
label_042af51e:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[9].klass == (Il2CppClass *)0x0) goto label_042b0098;
            pSVar14 = (System_String_o *)((pIStack_60[9].klass)->_1).namespaze;
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042af4fe;
label_042af49e:
            pSVar6 = (pSStack_70->fields).SkinWeaponTrail;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b009d;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042af51e;
              goto label_042af510;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042af51e;
          }
label_042af536:
          if ((uint)*piVar2 < 0xd) goto label_042affdf;
          value->m_Items[0xc] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 0xc);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af580;
label_042af5e0:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042af5f2:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042af618;
            }
label_042af600:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[10].klass == (Il2CppClass *)0x0) goto label_042b00a2;
            pSVar14 = (System_String_o *)((pIStack_60[10].klass)->_1).namespaze;
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042af5e0;
label_042af580:
            pSVar6 = (pSStack_70->fields).SkinThunderspearL;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b00a7;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042af600;
              goto label_042af5f2;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042af600;
          }
label_042af618:
          if ((uint)*piVar2 < 0xe) goto label_042affe4;
          value->m_Items[0xd] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 0xd);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af662;
label_042af6c2:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042af6d4:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042af6fa;
            }
label_042af6e2:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[10].monitor == (void *)0x0) goto label_042b00ac;
            pSVar14 = *(System_String_o **)((long)pIStack_60[10].monitor + 0x18);
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042af6c2;
label_042af662:
            pSVar6 = (pSStack_70->fields).SkinThunderspearR;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b00b1;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042af6e2;
              goto label_042af6d4;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042af6e2;
          }
label_042af6fa:
          if ((uint)*piVar2 < 0xf) goto label_042affe9;
          value->m_Items[0xe] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 0xe,pSVar14);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            fVar23 = 1.0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af745;
label_042af78d:
            if ((pIStack_60 == (Il2CppObject *)0x0) || ((char)uStack_68 == '\0')) {
label_042af79f:
              fVar23 = 1.0;
            }
          }
          else {
            if (pIStack_60[0xb].monitor == (void *)0x0) goto label_042b00b6;
            fVar23 = *(float *)((long)pIStack_60[0xb].monitor + 0x14);
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042af78d;
label_042af745:
            pSVar8 = (pSStack_70->fields).SkinHookLTiling;
            if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_042b00bb;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 != '\0' && pIStack_60 != (Il2CppObject *)0x0) goto label_042af7a7;
              goto label_042af79f;
            }
            if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) {
              fVar23 = (pSVar8->fields)._value;
            }
          }
label_042af7a7:
          fStack_54 = fVar23;
          pSVar14 = System_Single__ToString(fVar23,(MethodInfo *)&fStack_54);
          if ((uint)*piVar2 < 0x10) goto label_042affee;
          value->m_Items[0xf] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 0xf);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af803;
label_042af863:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042af875:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042af89b;
            }
label_042af883:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[0xb].klass == (Il2CppClass *)0x0) goto label_042b00c0;
            pSVar14 = (System_String_o *)((pIStack_60[0xb].klass)->_1).namespaze;
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042af863;
label_042af803:
            pSVar6 = (pSStack_70->fields).SkinHookL;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b00c5;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042af883;
              goto label_042af875;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042af883;
          }
label_042af89b:
          if ((uint)*piVar2 < 0x11) goto label_042afff3;
          value->m_Items[0x10] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 0x10,pSVar14);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            fVar23 = 1.0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af8e6;
label_042af92e:
            if ((pIStack_60 == (Il2CppObject *)0x0) || ((char)uStack_68 == '\0')) {
label_042af940:
              fVar23 = 1.0;
            }
          }
          else {
            if (pIStack_60[0xc].monitor == (void *)0x0) goto label_042b00ca;
            fVar23 = *(float *)((long)pIStack_60[0xc].monitor + 0x14);
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042af92e;
label_042af8e6:
            pSVar8 = (pSStack_70->fields).SkinHookRTiling;
            if (pSVar8 == (Settings_FloatSetting_o *)0x0) goto label_042b00cf;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 != '\0' && pIStack_60 != (Il2CppObject *)0x0) goto label_042af948;
              goto label_042af940;
            }
            if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) {
              fVar23 = (pSVar8->fields)._value;
            }
          }
label_042af948:
          fStack_54 = fVar23;
          pSVar14 = System_Single__ToString(fVar23,(MethodInfo *)&fStack_54);
          if ((uint)*piVar2 < 0x12) goto label_042afff8;
          value->m_Items[0x11] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 0x11);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042af9a4;
label_042afa04:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042afa16:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042afa3c;
            }
label_042afa24:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[0xc].klass == (Il2CppClass *)0x0) goto label_042b00d4;
            pSVar14 = (System_String_o *)((pIStack_60[0xc].klass)->_1).namespaze;
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042afa04;
label_042af9a4:
            pSVar6 = (pSStack_70->fields).SkinHookR;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b00d9;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042afa24;
              goto label_042afa16;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042afa24;
          }
label_042afa3c:
          if ((uint)*piVar2 < 0x13) goto label_042afffd;
          value->m_Items[0x12] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 0x12);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042afa86;
label_042afae6:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042afaf8:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042afb1e;
            }
label_042afb06:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[0xd].klass == (Il2CppClass *)0x0) goto label_042b00de;
            pSVar14 = (System_String_o *)((pIStack_60[0xd].klass)->_1).namespaze;
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042afae6;
label_042afa86:
            pSVar6 = (pSStack_70->fields).SkinHat;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b00e3;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042afb06;
              goto label_042afaf8;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042afb06;
          }
label_042afb1e:
          if ((uint)*piVar2 < 0x14) goto label_042b0002;
          value->m_Items[0x13] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 0x13);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042afb68;
label_042afbc8:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042afbda:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042afc00;
            }
label_042afbe8:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[0xd].monitor == (void *)0x0) goto label_042b00e8;
            pSVar14 = *(System_String_o **)((long)pIStack_60[0xd].monitor + 0x18);
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042afbc8;
label_042afb68:
            pSVar6 = (pSStack_70->fields).SkinHead;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b00ed;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042afbe8;
              goto label_042afbda;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042afbe8;
          }
label_042afc00:
          if ((uint)*piVar2 < 0x15) goto label_042b0007;
          value->m_Items[0x14] = pSVar14;
          il2cpp_runtime_helper_022b4080(value->m_Items + 0x14);
          if (pIStack_60 == (Il2CppObject *)0x0) {
            pSVar14 = (System_String_o *)0x0;
            if (pSStack_70 != (Settings_HumanCustomSet_o *)0x0) goto label_042afc4a;
label_042afcaa:
            if ((pIStack_60 != (Il2CppObject *)0x0) && ((char)uStack_68 != '\0')) {
label_042afcbc:
              bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
              if ((char)bVar11 == '\0') goto label_042afce2;
            }
label_042afcca:
            pSVar14 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          else {
            if (pIStack_60[0xe].klass == (Il2CppClass *)0x0) goto label_042b00f2;
            pSVar14 = (System_String_o *)((pIStack_60[0xe].klass)->_1).namespaze;
            if (pSStack_70 == (Settings_HumanCustomSet_o *)0x0) goto label_042afcaa;
label_042afc4a:
            pSVar6 = (pSStack_70->fields).SkinBack;
            if (pSVar6 == (Settings_StringSetting_o *)0x0) goto label_042b00f7;
            if ((pSStack_70 == (Settings_HumanCustomSet_o *)0x0) || (cVar10 == '\0')) {
              if ((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) goto label_042afcca;
              goto label_042afcbc;
            }
            pSVar7 = (pSVar6->fields)._value;
            if ((((char)uStack_68 == '\0' || pIStack_60 == (Il2CppObject *)0x0) ||
                (bVar11 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0), (char)bVar11 != '\0')) &&
               (bVar11 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0), pSVar14 = pSVar7,
               (char)bVar11 != '\0')) goto label_042afcca;
          }
label_042afce2:
          if (0x15 < (uint)*piVar2) {
            value->m_Items[0x15] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0x15,pSVar14);
            pSVar14 = System_String__Join(",",value,(MethodInfo *)0x0);
            goto label_042afd1a;
          }
        }
        il2cpp_runtime_helper_022b2ca0();
        do {
          do {
            uVar20 = il2cpp_runtime_helper_0231b270();
            il2cpp_runtime_helper_022b2b10(uVar20,0);
label_042b0020:
            il2cpp_runtime_helper_022b2c90();
label_042b0025:
            il2cpp_runtime_helper_022b2c90();
label_042b002a:
            il2cpp_runtime_helper_022b2c90();
label_042b002f:
            il2cpp_runtime_helper_022b2c90();
label_042b0034:
            il2cpp_runtime_helper_022b2c90();
label_042b0039:
            il2cpp_runtime_helper_022b2c90();
label_042b003e:
            il2cpp_runtime_helper_022b2c90();
label_042b0043:
            il2cpp_runtime_helper_022b2c90();
label_042b0048:
            il2cpp_runtime_helper_022b2c90();
label_042b004d:
            il2cpp_runtime_helper_022b2c90();
label_042b0052:
            il2cpp_runtime_helper_022b2c90();
label_042b0057:
            il2cpp_runtime_helper_022b2c90();
label_042b005c:
            il2cpp_runtime_helper_022b2c90();
label_042b0061:
            il2cpp_runtime_helper_022b2c90();
label_042b0066:
            il2cpp_runtime_helper_022b2c90();
label_042b006b:
            il2cpp_runtime_helper_022b2c90();
label_042b0070:
            il2cpp_runtime_helper_022b2c90();
label_042b0075:
            il2cpp_runtime_helper_022b2c90();
label_042b007a:
            il2cpp_runtime_helper_022b2c90();
label_042b007f:
            il2cpp_runtime_helper_022b2c90();
label_042b0084:
            il2cpp_runtime_helper_022b2c90();
label_042b0089:
            il2cpp_runtime_helper_022b2c90();
label_042b008e:
            il2cpp_runtime_helper_022b2c90();
label_042b0093:
            il2cpp_runtime_helper_022b2c90();
label_042b0098:
            il2cpp_runtime_helper_022b2c90();
label_042b009d:
            il2cpp_runtime_helper_022b2c90();
label_042b00a2:
            il2cpp_runtime_helper_022b2c90();
label_042b00a7:
            il2cpp_runtime_helper_022b2c90();
label_042b00ac:
            il2cpp_runtime_helper_022b2c90();
label_042b00b1:
            il2cpp_runtime_helper_022b2c90();
label_042b00b6:
            il2cpp_runtime_helper_022b2c90();
label_042b00bb:
            il2cpp_runtime_helper_022b2c90();
label_042b00c0:
            il2cpp_runtime_helper_022b2c90();
label_042b00c5:
            il2cpp_runtime_helper_022b2c90();
label_042b00ca:
            il2cpp_runtime_helper_022b2c90();
label_042b00cf:
            il2cpp_runtime_helper_022b2c90();
label_042b00d4:
            il2cpp_runtime_helper_022b2c90();
label_042b00d9:
            il2cpp_runtime_helper_022b2c90();
label_042b00de:
            il2cpp_runtime_helper_022b2c90();
label_042b00e3:
            il2cpp_runtime_helper_022b2c90();
label_042b00e8:
            il2cpp_runtime_helper_022b2c90();
label_042b00ed:
            il2cpp_runtime_helper_022b2c90();
label_042b00f2:
            il2cpp_runtime_helper_022b2c90();
label_042b00f7:
            il2cpp_runtime_helper_022b2c90();
label_042b00fc:
            il2cpp_runtime_helper_022b2c90();
label_042b0101:
            il2cpp_runtime_helper_022b2c90();
label_042b0106:
            il2cpp_runtime_helper_022b2c90();
label_042b010b:
            il2cpp_runtime_helper_022b2c90();
label_042b0110:
            pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_022b2c90();
label_042b0115:
            auVar24 = il2cpp_runtime_helper_022b2fd0(pIVar15);
            if (auVar24._8_4_ != 1) {
              _Unwind_Resume(auVar24._0_8_);
            }
            unaff_RBX = (Characters_HumanSetup_o *)__cxa_begin_catch(auVar24._0_8_);
            uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
            cVar10 = il2cpp_runtime_helper_0233e000(uVar20,(((System_Func_TSource__bool__c *)unaff_RBX->klass)->_1).image)
            ;
            if (cVar10 == '\0') goto label_042b0a95;
            __cxa_end_catch();
            uVar20 = il2cpp_runtime_helper_023445d0(&TypeInfo_string);
            value = (System_String_array *)il2cpp_runtime_helper_022b2a40(uVar20,0x16);
            if (value == (System_String_array *)0x0) goto label_042b0a8b;
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((int)value->max_length == 0) goto label_042b0a90;
            value->m_Items[0] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 2) goto label_042b0a90;
            value->m_Items[1] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 1,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 3) goto label_042b0a90;
            value->m_Items[2] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 2,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 4) goto label_042b0a90;
            value->m_Items[3] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 3,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 5) goto label_042b0a90;
            value->m_Items[4] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 4,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 6) goto label_042b0a90;
            value->m_Items[5] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 5,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 7) goto label_042b0a90;
            value->m_Items[6] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 6,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 8) goto label_042b0a90;
            value->m_Items[7] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 7,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 9) goto label_042b0a90;
            value->m_Items[8] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 8,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 10) goto label_042b0a90;
            value->m_Items[9] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 9,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 0xb) goto label_042b0a90;
            value->m_Items[10] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 10,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 0xc) goto label_042b0a90;
            value->m_Items[0xb] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0xb,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 0xd) goto label_042b0a90;
            value->m_Items[0xc] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0xc,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 0xe) goto label_042b0a90;
            value->m_Items[0xd] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0xd,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 0xf) goto label_042b0a90;
            value->m_Items[0xe] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0xe,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"1");
            if ((uint)value->max_length < 0x10) goto label_042b0a90;
            value->m_Items[0xf] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0xf,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 0x11) goto label_042b0a90;
            value->m_Items[0x10] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0x10,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"1");
            if ((uint)value->max_length < 0x12) goto label_042b0a90;
            value->m_Items[0x11] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0x11,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 0x13) goto label_042b0a90;
            value->m_Items[0x12] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0x12,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 0x14) goto label_042b0a90;
            value->m_Items[0x13] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0x13,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 0x15) goto label_042b0a90;
            value->m_Items[0x14] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0x14,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"");
            if ((uint)value->max_length < 0x16) goto label_042b0a90;
            value->m_Items[0x15] = pSVar14;
            il2cpp_runtime_helper_022b4080(value->m_Items + 0x15,pSVar14);
            pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&",");
            pSVar14 = System_String__Join(pSVar14,value,(MethodInfo *)0x0);
label_042afd1a:
            *(undefined1 *)&(pCStack_50->fields)._isLoadingSkins = 0;
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            unaff_RBX = *(Characters_HumanSetup_o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
            if (unaff_RBX == (Characters_HumanSetup_o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              unaff_RBX = (Characters_HumanSetup_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_bool);
              System_Func_object__bool____ctor();
              lVar18 = *(long *)(TypeInfo_c + 0xb8);
              *(Characters_HumanSetup_o **)(lVar18 + 8) = unaff_RBX;
              il2cpp_runtime_helper_022b4080(lVar18 + 8,unaff_RBX);
            }
            bVar11 = System_Linq_Enumerable__Any_object__2504f10
                               ((System_Collections_Generic_IEnumerable_TSource__o *)value,
                                (System_Func_TSource__bool__o *)unaff_RBX,MethodInfo_Boolean_Any_String);
            pCVar5 = pCStack_50;
            if ((char)bVar11 == '\0') {
              pCVar17 = (pCStack_50->fields).Setup;
              if (pCVar17 != (Characters_HumanSetup_o *)0x0) {
                Characters_HumanSetup__Load
                          (pCVar17,(pCVar17->fields).CustomSet,(pCVar17->fields).Weapon,0,(MethodInfo *)0x0);
                ppCVar1 = ppCStack_40;
                unaff_RBX = (Characters_HumanSetup_o *)*ppCStack_40;
                if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                bVar11 = UnityEngine_Object__op_Inequality
                                   ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,
                                    (MethodInfo *)0x0);
                if ((char)bVar11 != '\0') {
                  unaff_RBX = (Characters_HumanSetup_o *)*ppCVar1;
                  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)unaff_RBX,(MethodInfo *)0x0);
                }
                pUVar12 = UnityEngine_Component__get_gameObject
                                    ((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0);
                if (pUVar12 != (UnityEngine_GameObject_o *)0x0) {
                  pCVar13 = (CustomSkins_HumanCustomSkinLoader_o *)
                            UnityEngine_GameObject__AddComponent_object_(pUVar12,MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSkinLoader);
                  *ppCVar1 = pCVar13;
                  il2cpp_runtime_helper_022b4080(ppCVar1,pCVar13);
                  return 0;
                }
              }
              goto label_042b0a8b;
            }
            pCVar13 = *ppCStack_40;
            plVar16 = (long *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
            uStack_44 = 0xffffffff;
            pCVar17 = (Characters_HumanSetup_o *)il2cpp_runtime_helper_02304f30(g_data_057b9bb8,&uStack_44);
            pCVar9 = pCStack_38;
            if (plVar16 == (long *)0x0) goto label_042b0a8b;
          } while ((pCVar17 != (Characters_HumanSetup_o *)0x0) &&
                  (lVar18 = il2cpp_runtime_helper_023051f0(pCVar17,*(undefined8 *)(*plVar16 + 0x40)), lVar18 == 0));
          unaff_RBX = pCVar17;
          if ((int)plVar16[3] == 0) goto label_042b0a90;
          plVar16[4] = (long)pCVar17;
          il2cpp_runtime_helper_022b4080(plVar16 + 4,pCVar17);
        } while ((pSVar14 != (System_String_o *)0x0) &&
                (lVar18 = il2cpp_runtime_helper_023051f0(pSVar14,*(undefined8 *)(*plVar16 + 0x40)), lVar18 == 0));
        if (*(uint *)(plVar16 + 3) < 2) goto label_042b0a90;
        plVar16[5] = (long)pSVar14;
        il2cpp_runtime_helper_022b4080(plVar16 + 5,pSVar14);
        if (pCVar13 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) {
          routine = (System_Collections_IEnumerator_o *)
                    (*(pCVar13->klass->vtable)._6_LoadSkinsFromRPC.methodPtr)
                              (pCVar13,plVar16,(pCVar13->klass->vtable)._6_LoadSkinsFromRPC.method);
          pUVar19 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                              ((UnityEngine_MonoBehaviour_o *)pCStack_50,routine,(MethodInfo *)0x0);
          (pCVar9->fields).__2__current = (Il2CppObject *)pUVar19;
          il2cpp_runtime_helper_022b4080(&(pCVar9->fields).__2__current,pUVar19);
          (pCVar9->fields).__1__state = 2;
          return (bool_conflict)CONCAT71((int7)((ulong)pCVar17 >> 8),1);
        }
      }
      else {
        __this_00 = (UnityEngine_Object_o *)
                    UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pCVar5,(MethodInfo *)0x0)
        ;
        if (__this_00 != (UnityEngine_Object_o *)0x0) {
          pSVar14 = UnityEngine_Object__get_name(__this_00,(MethodInfo *)0x0);
          pSVar14 = System_String__Concat_3ae5ba0("HumanSetup not ready for skin loading on ",pSVar14,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Debug__LogWarning((Il2CppObject *)pSVar14,(MethodInfo *)0x0);
          *(undefined1 *)&(pCVar5->fields)._isLoadingSkins = 0;
          return 0;
        }
      }
    }
  }
  else {
    if (iVar4 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    if (pCVar5 != (Characters_DummyHuman_o *)0x0) {
      *(undefined1 *)&(pCVar5->fields)._isLoadingSkins = 1;
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
    }
  }
label_042b0a8b:
  il2cpp_runtime_helper_022b2c90();
label_042b0a90:
  il2cpp_runtime_helper_022b2ca0();
label_042b0a95:
  puVar21 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar21 = (System_Func_TSource__bool__c *)unaff_RBX->klass;
  __cxa_throw(puVar21,&PTR_PTR_05215060,0);
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x42b0ad0

Il2CppObject *
Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_Reset (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x42b0ae0

void Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_Reset
               (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

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


// Characters.DummyHuman.<LoadSkinCoroutine>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_get_Current (Characters_DummyHuman__LoadSkinCoroutine_d__9_o* __this, const MethodInfo* method);
// 0x42b0b20

Il2CppObject *
Characters_DummyHuman__LoadSkinCoroutine_d__9__System_Collections_IEnumerator_get_Current
          (Characters_DummyHuman__LoadSkinCoroutine_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.DummyHuman$$Awake
// il2cpp: void Characters_DummyHuman__Awake (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x42adc80

void Characters_DummyHuman__Awake(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  Characters_HumanComponentCache_o **ppCVar1;
  Characters_HumanSetup_o **ppCVar2;
  int iVar3;
  UnityEngine_Rigidbody_o *__this_00;
  Settings_HumanCustomSet_o *pSVar4;
  bool_conflict bVar5;
  UnityEngine_GameObject_o *pUVar6;
  Characters_HumanComponentCache_o *pCVar7;
  Characters_HumanSetup_o *pCVar8;
  CustomSkins_HumanCustomSkinLoader_o *pCVar9;
  System_String_o *a;
  Characters_DummyHuman_o *__this_01;
  Characters_DummyHuman_o *pCVar10;
  CustomSkins_HumanCustomSkinLoader_o **ppCVar11;
  undefined1 auVar12 [16];
  
  if (g_data_057add9e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanSetup_AddComponent_HumanSetup);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanSetup_GetComponent_HumanSetup);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanComponentCache);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add9e = '\x01';
  }
  if (g_data_057add9d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AnimationHandler);
    g_data_057add9d = '\x01';
  }
  pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  auVar12 = il2cpp_runtime_helper_023052d0(TypeInfo_AnimationHandler);
  Characters_AnimationHandler___ctor(auVar12._0_8_,pUVar6,auVar12._8_8_);
  (__this->fields).Animation = auVar12._0_8_;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Animation);
  pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  pCVar7 = (Characters_HumanComponentCache_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HumanComponentCache);
  Characters_HumanComponentCache___ctor(pCVar7,pUVar6,(MethodInfo *)0x0);
  ppCVar1 = &(__this->fields).Cache;
  (__this->fields).Cache = pCVar7;
  __this_01 = (Characters_DummyHuman_o *)ppCVar1;
  il2cpp_runtime_helper_022b4080();
  pCVar7 = (__this->fields).Cache;
  if ((pCVar7 != (Characters_HumanComponentCache_o *)0x0) &&
     (__this_01 = (Characters_DummyHuman_o *)(pCVar7->fields).Rigidbody,
     __this_01 != (Characters_DummyHuman_o *)0x0)) {
    UnityEngine_Rigidbody__set_freezeRotation((UnityEngine_Rigidbody_o *)__this_01,1,(MethodInfo *)0x0);
    if ((*ppCVar1 != (Characters_HumanComponentCache_o *)0x0) &&
       (__this_01 = (Characters_DummyHuman_o *)((*ppCVar1)->fields).Rigidbody,
       __this_01 != (Characters_DummyHuman_o *)0x0)) {
      UnityEngine_Rigidbody__set_useGravity((UnityEngine_Rigidbody_o *)__this_01,0,(MethodInfo *)0x0);
      if (*ppCVar1 != (Characters_HumanComponentCache_o *)0x0) {
        __this_00 = ((*ppCVar1)->fields).Rigidbody;
        if (g_data_057a65d5 == '\0') {
          __this_01 = (Characters_DummyHuman_o *)&TypeInfo_Vector3;
          il2cpp_runtime_helper_023445d0();
          g_data_057a65d5 = '\x01';
        }
        if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
          UnityEngine_Rigidbody__set_velocity
                    (__this_00,(UnityEngine_Vector3_o)**(UnityEngine_Vector3_Fields **)(TypeInfo_Vector3 + 0xb8),
                     (MethodInfo *)0x0);
          __this_01 = __this;
          pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
            pCVar8 = (Characters_HumanSetup_o *)
                     UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_HumanSetup_GetComponent_HumanSetup);
            ppCVar2 = &(__this->fields).Setup;
            (__this->fields).Setup = pCVar8;
            il2cpp_runtime_helper_022b4080(ppCVar2);
            pCVar8 = (__this->fields).Setup;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar5 = UnityEngine_Object__op_Equality
                              ((UnityEngine_Object_o *)pCVar8,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              return;
            }
            pUVar6 = UnityEngine_Component__get_gameObject
                               ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
            __this_01 = __this;
            if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
              pCVar8 = (Characters_HumanSetup_o *)
                       UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_HumanSetup_AddComponent_HumanSetup);
              *ppCVar2 = pCVar8;
              il2cpp_runtime_helper_022b4080(ppCVar2,pCVar8);
              return;
            }
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add9f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSkinLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add9f = '\x01';
  }
  pCVar9 = (__this_01->fields)._customSkinLoader;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar9,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return;
  }
  a = (System_String_o *)0x0;
  pCVar10 = __this_01;
  pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  if (pUVar6 != (UnityEngine_GameObject_o *)0x0) {
    ppCVar11 = &(__this_01->fields)._customSkinLoader;
    pCVar9 = (CustomSkins_HumanCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent_object_(pUVar6,MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSkinLoader);
    *ppCVar11 = pCVar9;
    il2cpp_runtime_helper_022b4080(ppCVar11,pCVar9);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adda0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057adda0 = '\x01';
  }
  pCVar8 = (pCVar10->fields).Setup;
  if (((pCVar8 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar4 = (pCVar8->fields).CustomSet, pSVar4 != (Settings_HumanCustomSet_o *)0x0)) &&
     ((pSVar4->fields).Sex != (Settings_IntSetting_o *)0x0)) {
    if (((pCVar8->fields).Weapon | 2U) == 3) {
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
    else if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adda1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&"Wave");
    il2cpp_runtime_helper_023445d0(&"Shake");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"Eat");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Salute");
    il2cpp_runtime_helper_023445d0(&"Flip");
    g_data_057adda1 = '\x01';
  }
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = System_String__op_Equality(a,"Salute",(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    bVar5 = System_String__op_Equality(a,"Dance",(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      bVar5 = System_String__op_Equality(a,"Flip",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        bVar5 = System_String__op_Equality(a,"Wave",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          bVar5 = System_String__op_Equality(a,"Nod",(MethodInfo *)0x0);
          if ((char)bVar5 == '\0') {
            bVar5 = System_String__op_Equality(a,"Shake",(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              bVar5 = System_String__op_Equality(a,"Eat",(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                return;
              }
              iVar3 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
            }
            else {
              iVar3 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
            }
          }
          else {
            iVar3 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
          }
        }
        else {
          iVar3 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
        }
      }
      else {
        iVar3 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
      }
    }
    else {
      iVar3 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
    }
  }
  else {
    iVar3 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  return;
}


// Characters.DummyHuman$$Start
// il2cpp: void Characters_DummyHuman__Start (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x42adeb0

void Characters_DummyHuman__Start(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  int iVar1;
  Characters_HumanSetup_o *pCVar2;
  Settings_HumanCustomSet_o *pSVar3;
  bool_conflict bVar4;
  UnityEngine_GameObject_o *__this_00;
  CustomSkins_HumanCustomSkinLoader_o *pCVar5;
  System_String_o *a;
  Characters_DummyHuman_o *pCVar6;
  CustomSkins_HumanCustomSkinLoader_o **ppCVar7;
  
  if (g_data_057add9f == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSkinLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add9f = '\x01';
  }
  pCVar5 = (__this->fields)._customSkinLoader;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    return;
  }
  a = (System_String_o *)0x0;
  pCVar6 = __this;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
    ppCVar7 = &(__this->fields)._customSkinLoader;
    pCVar5 = (CustomSkins_HumanCustomSkinLoader_o *)
             UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_HumanCustomSkinLoader_AddComponent_HumanCustomSkinLoader);
    *ppCVar7 = pCVar5;
    il2cpp_runtime_helper_022b4080(ppCVar7,pCVar5);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adda0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057adda0 = '\x01';
  }
  pCVar2 = (pCVar6->fields).Setup;
  if (((pCVar2 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar3 = (pCVar2->fields).CustomSet, pSVar3 != (Settings_HumanCustomSet_o *)0x0)) &&
     ((pSVar3->fields).Sex != (Settings_IntSetting_o *)0x0)) {
    if (((pCVar2->fields).Weapon | 2U) == 3) {
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
    }
    else if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adda1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&"Wave");
    il2cpp_runtime_helper_023445d0(&"Shake");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"Eat");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Salute");
    il2cpp_runtime_helper_023445d0(&"Flip");
    g_data_057adda1 = '\x01';
  }
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_String__op_Equality(a,"Salute",(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    bVar4 = System_String__op_Equality(a,"Dance",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      bVar4 = System_String__op_Equality(a,"Flip",(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        bVar4 = System_String__op_Equality(a,"Wave",(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          bVar4 = System_String__op_Equality(a,"Nod",(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            bVar4 = System_String__op_Equality(a,"Shake",(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              bVar4 = System_String__op_Equality(a,"Eat",(MethodInfo *)0x0);
              if ((char)bVar4 == '\0') {
                return;
              }
              iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
            }
          }
          else {
            iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
          }
        }
        else {
          iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
        }
      }
      else {
        iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
      }
    }
    else {
      iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
    }
  }
  else {
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  return;
}


// Characters.DummyHuman$$GetIdleAnimation
// il2cpp: System_String_o* Characters_DummyHuman__GetIdleAnimation (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x42adf60

System_String_o * Characters_DummyHuman__GetIdleAnimation(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  Characters_HumanSetup_o *pCVar3;
  Settings_HumanCustomSet_o *pSVar4;
  Settings_IntSetting_o *pSVar5;
  System_String_o *pSVar6;
  bool_conflict bVar7;
  undefined8 *puVar8;
  long lVar9;
  
  if (g_data_057adda0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    g_data_057adda0 = '\x01';
  }
  pCVar3 = (__this->fields).Setup;
  if (((pCVar3 != (Characters_HumanSetup_o *)0x0) &&
      (pSVar4 = (pCVar3->fields).CustomSet, pSVar4 != (Settings_HumanCustomSet_o *)0x0)) &&
     (pSVar5 = (pSVar4->fields).Sex, pSVar5 != (Settings_IntSetting_o *)0x0)) {
    iVar1 = (pSVar5->fields)._value;
    uVar2 = (pCVar3->fields).Weapon;
    if ((uVar2 | 2) == 3) {
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar9 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
      }
      else {
        lVar9 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
      }
      if (iVar1 == 0) {
        puVar8 = (undefined8 *)(lVar9 + 0x30);
      }
      else {
        puVar8 = (undefined8 *)(lVar9 + 0x38);
      }
    }
    else {
      if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar9 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
      }
      else {
        lVar9 = *(long *)(TypeInfo_HumanAnimations + 0xb8);
      }
      if (uVar2 == 2) {
        if (iVar1 == 0) {
          puVar8 = (undefined8 *)(lVar9 + 0x48);
        }
        else {
          puVar8 = (undefined8 *)(lVar9 + 0x40);
        }
      }
      else if (iVar1 == 0) {
        puVar8 = (undefined8 *)(lVar9 + 0x28);
      }
      else {
        puVar8 = (undefined8 *)(lVar9 + 0x20);
      }
    }
    return (System_String_o *)*puVar8;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adda1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&"Wave");
    il2cpp_runtime_helper_023445d0(&"Shake");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"Eat");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Salute");
    il2cpp_runtime_helper_023445d0(&"Flip");
    g_data_057adda1 = '\x01';
  }
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + 0x228);
  bVar7 = System_String__op_Equality((System_String_o *)method,"Salute",(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    bVar7 = System_String__op_Equality((System_String_o *)method,"Dance",(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      bVar7 = System_String__op_Equality((System_String_o *)method,"Flip",(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        bVar7 = System_String__op_Equality((System_String_o *)method,"Wave",(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          bVar7 = System_String__op_Equality((System_String_o *)method,"Nod",(MethodInfo *)0x0);
          if ((char)bVar7 == '\0') {
            bVar7 = System_String__op_Equality((System_String_o *)method,"Shake",(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              bVar7 = System_String__op_Equality((System_String_o *)method,"Eat",(MethodInfo *)0x0);
              if ((char)bVar7 == '\0') {
                return pSVar6;
              }
              lVar9 = 0x1f0;
              iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
            }
            else {
              lVar9 = 0x230;
              iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
            }
          }
          else {
            lVar9 = 0x238;
            iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
          }
        }
        else {
          lVar9 = 0x240;
          iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
        }
      }
      else {
        lVar9 = 0x70;
        iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
      }
    }
    else {
      lVar9 = 0x1d8;
      iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
    }
  }
  else {
    lVar9 = 0x228;
    iVar1 = *(int *)(TypeInfo_HumanAnimations + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar9);
}


// Characters.DummyHuman$$GetEmoteAnimation
// il2cpp: System_String_o* Characters_DummyHuman__GetEmoteAnimation (Characters_DummyHuman_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x42ae070

System_String_o *
Characters_DummyHuman__GetEmoteAnimation
          (Characters_DummyHuman_o *__this,System_String_o *emote,MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  long lVar4;
  
  if (g_data_057adda1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_HumanAnimations);
    il2cpp_runtime_helper_023445d0(&"Wave");
    il2cpp_runtime_helper_023445d0(&"Shake");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"Eat");
    il2cpp_runtime_helper_023445d0(&"Dance");
    il2cpp_runtime_helper_023445d0(&"Salute");
    il2cpp_runtime_helper_023445d0(&"Flip");
    g_data_057adda1 = '\x01';
  }
  if (*(int *)(TypeInfo_HumanAnimations + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
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
    il2cpp_runtime_helper_02337ed0();
  }
  return *(System_String_o **)(*(long *)(TypeInfo_HumanAnimations + 0xb8) + lVar4);
}


// Characters.DummyHuman$$LoadSkin
// il2cpp: void Characters_DummyHuman__LoadSkin (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x42ae280

void Characters_DummyHuman__LoadSkin(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  Il2CppClass *__this_00;
  Il2CppObject *__this_01;
  undefined4 uVar1;
  Il2CppClass *pIVar2;
  Il2CppObject *__this_02;
  
  if ((char)(__this->fields)._isLoadingSkins != '\0') {
    return;
  }
  if (g_data_057adda2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinCoroutine_d__9);
    g_data_057adda2 = '\x01';
  }
  __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinCoroutine_d__9);
  pIVar2 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&(__this_00->_1).name = 0;
  if (__this_00 != (Il2CppClass *)0x0) {
    (__this_00->_1).byval_arg.data = __this;
    il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,__this);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adda2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinCoroutine_d__9);
    g_data_057adda2 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinCoroutine_d__9);
  uVar1 = 0;
  __this_02 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].klass = pIVar2;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,pIVar2);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_02,(MethodInfo *)0x0);
  *(undefined4 *)&__this_02[1].klass = uVar1;
  return;
}


// Characters.DummyHuman$$LoadSkinCoroutine
// il2cpp: System_Collections_IEnumerator_o* Characters_DummyHuman__LoadSkinCoroutine (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x42ae310

System_Collections_IEnumerator_o *
Characters_DummyHuman__LoadSkinCoroutine(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057adda2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_LoadSkinCoroutine_d__9);
    g_data_057adda2 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_LoadSkinCoroutine_d__9);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Characters.DummyHuman$$.ctor
// il2cpp: void Characters_DummyHuman___ctor (Characters_DummyHuman_o* __this, const MethodInfo* method);
// 0x42ae3a0

void Characters_DummyHuman___ctor(Characters_DummyHuman_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.DummyHuman$$<LoadSkinCoroutine>g__GetSkinValue|9_1
// il2cpp: System_String_o* Characters_DummyHuman___LoadSkinCoroutine_g__GetSkinValue_9_1 (System_String_o* globalValue, System_String_o* presetValue, Characters_DummyHuman___c__DisplayClass9_0_o* , const MethodInfo* method);
// 0x42ae3b0

System_String_o *
Characters_DummyHuman___LoadSkinCoroutine_g__GetSkinValue_9_1
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
      goto label_042ae41d;
      goto label_042ae40c;
    }
    bVar2 = System_String__IsNullOrEmpty(globalValue,(MethodInfo *)0x0);
    cVar1 = (char)bVar2;
  }
  else {
    if (((char)(param_3->fields).useGlobalOverrides != '\0') &&
       (((param_3->fields).globalSet != (Settings_HumanCustomSkinSet_o *)0x0 &&
        (bVar2 = System_String__IsNullOrEmpty(globalValue,(MethodInfo *)0x0), (char)bVar2 == '\0')))) {
      return globalValue;
    }
label_042ae40c:
    bVar2 = System_String__IsNullOrEmpty(presetValue,(MethodInfo *)0x0);
    cVar1 = (char)bVar2;
    globalValue = presetValue;
  }
  if (cVar1 == '\0') {
    return globalValue;
  }
label_042ae41d:
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Characters.DummyHuman$$<LoadSkinCoroutine>g__GetFloatValue|9_2
// il2cpp: float Characters_DummyHuman___LoadSkinCoroutine_g__GetFloatValue_9_2 (float globalValue, float presetValue, Characters_DummyHuman___c__DisplayClass9_0_o* , const MethodInfo* method);
// 0x42ae440

float Characters_DummyHuman___LoadSkinCoroutine_g__GetFloatValue_9_2
                (float globalValue,float presetValue,Characters_DummyHuman___c__DisplayClass9_0_o *param_3,
                MethodInfo *method)

{
  char cVar1;
  
  cVar1 = (char)(param_3->fields).usePresetSkins;
  if ((cVar1 == '\0') || ((param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0)) {
    if ((((char)(param_3->fields).useGlobalOverrides == '\0') ||
        ((param_3->fields).globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) &&
       ((cVar1 == '\0' ||
        (globalValue = presetValue, (param_3->fields).presetSet == (Settings_HumanCustomSet_o *)0x0)))) {
      return 1.0;
    }
  }
  else if (((char)(param_3->fields).useGlobalOverrides == '\0') ||
          ((param_3->fields).globalSet == (Settings_HumanCustomSkinSet_o *)0x0)) {
    return presetValue;
  }
  return globalValue;
}


