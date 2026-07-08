// Type: CustomLogic.CustomLogicManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/CustomLogicManager.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicManager.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicManager___c___cctor (const MethodInfo* method);
// 0x3f55e90

void CustomLogic_CustomLogicManager_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05703e94 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05703e94 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicManager.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicManager___c___ctor (CustomLogic_CustomLogicManager___c_o* __this, const MethodInfo* method);
// 0x3f55f00

void CustomLogic_CustomLogicManager_<>c___ctor
               (CustomLogic_CustomLogicManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicManager.<>c$$<StartLogic>b__43_0
// il2cpp: System_String_o* CustomLogic_CustomLogicManager___c___StartLogic_b__43_0 (CustomLogic_CustomLogicManager___c_o* __this, Settings_StringSetting_o* x, const MethodInfo* method);
// 0x3f55f10

System_String_o *
CustomLogic_CustomLogicManager_<>c__<StartLogic>b__43_0
          (CustomLogic_CustomLogicManager___c_o *__this,Settings_StringSetting_o *x,
          MethodInfo *method)

{
  if (DAT_05703e95 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    DAT_05703e95 = '\x01';
  }
  if (x != (Settings_StringSetting_o *)0x0) {
    return (x->fields)._value;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$get_IsWaitingForRestart
// il2cpp: bool CustomLogic_CustomLogicManager__get_IsWaitingForRestart (const MethodInfo* method);
// 0x3f52880

bool_conflict CustomLogic_CustomLogicManager__get_IsWaitingForRestart(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05703e7b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703e7b = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa8));
  }
  il2cpp_init_class();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa8));
}


// CustomLogic.CustomLogicManager$$WaitForRestart
// il2cpp: void CustomLogic_CustomLogicManager__WaitForRestart (const MethodInfo* method);
// 0x3f528f0

void CustomLogic_CustomLogicManager__WaitForRestart(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05703e7c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703e7c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(undefined1 *)(lVar1 + 0xa8) = 0;
  *(undefined8 *)(lVar1 + 8) = 0;
  il2cpp_runtime_glue(lVar1 + 8,0);
  return;
}


// CustomLogic.CustomLogicManager$$OnJoinedRoom
// il2cpp: void CustomLogic_CustomLogicManager__OnJoinedRoom (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x3f52950

void CustomLogic_CustomLogicManager__OnJoinedRoom
               (CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  
  if (DAT_05703e7d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05703e7d = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
  }
  else {
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x88);
  }
  if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__Clear(pSVar2,MethodInfo_Void_Clear);
    pSVar2 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x90);
    if (pSVar2 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary<object__object>__Clear(pSVar2,MethodInfo_Void_Clear);
      *(undefined2 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x70) = 0;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$Init
// il2cpp: void CustomLogic_CustomLogicManager__Init (const MethodInfo* method);
// 0x3f52a20

void CustomLogic_CustomLogicManager__Init(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  uint uVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Events_OnLoadScene_o *value;
  Events_OnPreLoadScene_o *value_00;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  uint uVar6;
  long lVar7;
  
  if (DAT_05703e7e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnLoadScene);
    il2cpp_init_method_metadata(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSymbols);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&TypeInfo_OnLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_OnPreLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicManager_CreateSingleton_CustomLogicMa);
    il2cpp_init_method_metadata(&"# general");
    il2cpp_init_method_metadata(&"component ");
    il2cpp_init_method_metadata(&"component");
    il2cpp_init_method_metadata(&"# internal");
    il2cpp_init_method_metadata(&"BaseLogic");
    DAT_05703e7e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8),MethodInfo_CustomLogicManager_CreateSingleton_CustomLogicMa);
  **(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8) = pIVar3;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicManager + 0xb8));
  if (*(int *)(TypeInfo_CustomLogicSymbols + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_CustomLogicSymbols__Init((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Map_CustomLogicTransfer__Init((MethodInfo *)0x0);
  value = (Events_OnLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnLoadScene);
  Events_OnLoadScene___ctor();
  Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
  value_00 = (Events_OnPreLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = ApplicationManagers_ResourceManager__TryLoadText(pSVar4,"BaseLogic",(MethodInfo *)0x0);
  lVar7 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_String_o **)(lVar7 + 0x28) = pSVar4;
  il2cpp_runtime_glue(lVar7 + 0x28,pSVar4);
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
  if ((pSVar4 != (System_String_o *)0x0) &&
     (pSVar5 = System_String__Split(pSVar4,10,0,(MethodInfo *)0x0),
     pSVar5 != (System_String_array *)0x0)) {
    uVar1 = (uint)pSVar5->max_length;
    if (0 < (int)uVar1) {
      lVar7 = 0;
      do {
        uVar6 = (uint)lVar7;
        if (uVar1 <= uVar6) goto LAB_03f52ec5;
        if (pSVar5->m_Items[(int)uVar6] == (System_String_o *)0x0) goto LAB_03f52ec0;
        bVar2 = System_String__StartsWith
                          (pSVar5->m_Items[(int)uVar6],"# general",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          if ((uint)pSVar5->max_length <= uVar6) goto LAB_03f52ec5;
          if (pSVar5->m_Items[(int)uVar6] == (System_String_o *)0x0) goto LAB_03f52ec0;
          bVar2 = System_String__StartsWith
                            (pSVar5->m_Items[(int)uVar6],"# internal",(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') goto LAB_03f52d6a;
        }
        else {
LAB_03f52d6a:
          uVar1 = (uint)pSVar5->max_length;
          if ((int)uVar6 < (int)(uVar1 - 1)) {
            if (uVar1 <= uVar6 + 1) goto LAB_03f52ec5;
            if (pSVar5->m_Items[lVar7 + 1] == (System_String_o *)0x0) goto LAB_03f52ec0;
            bVar2 = System_String__StartsWith
                              (pSVar5->m_Items[lVar7 + 1],"component",(MethodInfo *)0x0);
            if ((char)bVar2 != '\0') {
              if ((uint)pSVar5->max_length <= uVar6 + 1) {
LAB_03f52ec5:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              if ((("component " == 0) || (pSVar5->m_Items[lVar7 + 1] == (System_String_o *)0x0)) ||
                 (pSVar4 = System_String__Substring
                                     (pSVar5->m_Items[lVar7 + 1],*(int32_t *)("component " + 0x10),
                                      (MethodInfo *)0x0), pSVar4 == (System_String_o *)0x0))
              goto LAB_03f52ec0;
              pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0);
              if ((uint)pSVar5->max_length <= uVar6) goto LAB_03f52ec5;
              if (pSVar5->m_Items[(int)uVar6] == (System_String_o *)0x0) goto LAB_03f52ec0;
              bVar2 = System_String__StartsWith
                                (pSVar5->m_Items[(int)uVar6],"# general",(MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                if ((uint)pSVar5->max_length <= uVar6) goto LAB_03f52ec5;
                if (pSVar5->m_Items[(int)uVar6] == (System_String_o *)0x0) goto LAB_03f52ec0;
                bVar2 = System_String__StartsWith
                                  (pSVar5->m_Items[(int)uVar6],"# internal",(MethodInfo *)0x0);
                if ((char)bVar2 == '\0') goto LAB_03f52ea0;
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                __this = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
              }
              else if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_init_class();
                __this = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
              }
              else {
                __this = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
              }
              if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_03f52ec0;
              System_Collections_Generic_HashSet<object>__Add
                        (__this,(Il2CppObject *)pSVar4,MethodInfo_Boolean_Add);
            }
          }
        }
LAB_03f52ea0:
        uVar1 = (uint)pSVar5->max_length;
        lVar7 = lVar7 + 1;
      } while ((int)lVar7 < (int)uVar1);
    }
    return;
  }
LAB_03f52ec0:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$OnPreLoadScene
// il2cpp: void CustomLogic_CustomLogicManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x3f52ed0

void CustomLogic_CustomLogicManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  UnityEngine_MonoBehaviour_o *__this;
  undefined8 *puVar3;
  System_Collections_Generic_HashSet_object__o *pSVar4;
  long lVar5;
  long lVar6;
  long lVar7;
  
  if (DAT_05703e7f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05703e7f = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  else {
    __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8);
  }
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines(__this,(MethodInfo *)0x0);
    lVar7 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(undefined1 *)(lVar7 + 0xa8) = 1;
    *(undefined8 *)(lVar7 + 8) = 0;
    il2cpp_runtime_glue(lVar7 + 8,0);
    lVar7 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(undefined8 *)(lVar7 + 0x30) = 0;
    il2cpp_runtime_glue(lVar7 + 0x30,0);
    lVar6 = TypeInfo_CustomLogicManager;
    lVar7 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(undefined1 *)(lVar7 + 0x10) = 0;
    *(undefined2 *)(lVar7 + 0x38) = 0;
    *(undefined1 *)(lVar7 + 0x40) = 0;
    if (DAT_056fdd15 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector3);
      DAT_056fdd15 = '\x01';
      lVar7 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      lVar6 = TypeInfo_CustomLogicManager;
    }
    lVar5 = TypeInfo_Vector3;
    uVar2 = *(undefined4 *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
    *(undefined8 *)(lVar7 + 0x44) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
    *(undefined4 *)(lVar7 + 0x4c) = uVar2;
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar2 = *(undefined4 *)(puVar3 + 1);
    lVar7 = *(long *)(lVar6 + 0xb8);
    *(undefined8 *)(lVar7 + 0x50) = *puVar3;
    *(undefined4 *)(lVar7 + 0x58) = uVar2;
    puVar3 = *(undefined8 **)(lVar5 + 0xb8);
    uVar2 = *(undefined4 *)(puVar3 + 1);
    lVar7 = *(long *)(lVar6 + 0xb8);
    *(undefined8 *)(lVar7 + 0x5c) = *puVar3;
    *(undefined4 *)(lVar7 + 100) = uVar2;
    *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x68) = 0;
    lVar7 = *(long *)(lVar6 + 0xb8);
    *(undefined4 *)(lVar7 + 0x3c) = 0;
    pSVar4 = *(System_Collections_Generic_HashSet_object__o **)(lVar7 + 0x78);
    if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet<object>__Clear(pSVar4,MethodInfo_Void_Clear);
      pSVar4 = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x80);
      if (pSVar4 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet<object>__Clear(pSVar4,MethodInfo_Void_Clear);
        if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_CustomLogicUIBuiltin__ClearLabels((MethodInfo *)0x0);
        *(undefined2 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x70) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$ToggleCutscene
// il2cpp: void CustomLogic_CustomLogicManager__ToggleCutscene (bool cutscene, const MethodInfo* method);
// 0x3f530d0

void CustomLogic_CustomLogicManager__ToggleCutscene(bool_conflict cutscene,MethodInfo *method)

{
  byte bVar1;
  long lVar2;
  char cVar3;
  bool_conflict enabled;
  UI_InGameMenu_o *__this;
  
  cVar3 = (char)cutscene;
  if (DAT_05703e80 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_InGameMenu);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    DAT_05703e80 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((cutscene & 0xffU) == (uint)*(byte *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38)) {
    return;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38) = cVar3;
  }
  else {
    *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38) = cVar3;
  }
  if (cVar3 == '\0') {
    lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar2 != 0) && (lVar2 = *(long *)(lVar2 + 0x20), lVar2 != 0)) {
      if (*(int *)(lVar2 + 0x14) != 0) {
        return;
      }
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
      if (__this != (UI_InGameMenu_o *)0x0) {
        bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
        if (((__this->klass->_2).naturalAligment < bVar1) ||
           ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) goto LAB_03f5327f;
        enabled = 1;
        goto LAB_03f5326c;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (__this != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if (((__this->klass->_2).naturalAligment < bVar1) ||
         ((__this->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_InGameMenu)) {
LAB_03f5327f:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume();
      }
      enabled = 0;
LAB_03f5326c:
      UI_InGameMenu__SetCharacterMenu(__this,enabled,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$OnLoadScene
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x3f53290

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicManager__OnLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this;
  Il2CppObject *pIVar2;
  Il2CppMethodPointer pIVar3;
  char cVar4;
  bool_conflict bVar5;
  System_Object_array *parameters;
  long lVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  MethodInfo *method_00;
  Photon_Pun_PhotonMessageInfo_o PStack_38;
  undefined8 uStack_20;
  
  if (DAT_05703e81 == '\0') {
    uStack_20 = 0x3f532cc;
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703e81 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    uStack_20 = 0x3f532eb;
    il2cpp_init_class();
  }
  if (sceneName != 2) {
    TypeInfo_CustomLogicManager[2].virtualMethodPointer[0x10] = (code)0x1;
    return;
  }
  if (DAT_05703e82 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"LoadBuiltinLogicRPC");
    DAT_05703e82 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    return;
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) &&
     (*(long *)(lVar6 + 0x30) != 0)) {
    pSVar7 = *(System_String_o **)(*(long *)(lVar6 + 0x30) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = Map_BuiltinLevels__IsLogicBuiltin(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(long *)(lVar6 + 0x30) != 0) {
        pSVar7 = *(System_String_o **)(*(long *)(lVar6 + 0x30) + 0x18);
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = Map_BuiltinLevels__LoadLogic(pSVar7,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        pIVar3 = TypeInfo_CustomLogicManager[2].virtualMethodPointer;
        *(System_String_o **)(pIVar3 + 0x18) = pSVar7;
        il2cpp_runtime_glue(pIVar3 + 0x18);
        pSVar7 = *(System_String_o **)(TypeInfo_CustomLogicManager[2].virtualMethodPointer + 0x18);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = Utility_Util__CreateMD5(pSVar7,(MethodInfo *)0x0);
        pIVar3 = TypeInfo_CustomLogicManager[2].virtualMethodPointer;
        *(System_String_o **)(pIVar3 + 0x20) = pSVar7;
        il2cpp_runtime_glue(pIVar3 + 0x20);
        if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Map_CustomLogicTransfer__Start((MethodInfo *)0x0);
        Utility_Util__CreateLocalPhotonInfo(&PStack_38,(MethodInfo *)0x0);
        if (DAT_05703e84 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
          DAT_05703e84 = '\x01';
        }
        if ((PStack_38.fields.Sender != (Photon_Realtime_Player_o *)0x0) &&
           (bVar5 = Photon_Realtime_Player__get_IsMasterClient
                              (PStack_38.fields.Sender,(MethodInfo *)0x0), (char)bVar5 == '\0')) {
          return;
        }
        method_00 = TypeInfo_CustomLogicManager;
        if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_CustomLogicManager__FinishLoadLogic(method_00);
        return;
      }
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      **(undefined1 **)(TypeInfo_CustomLogicTransfer + 0xb8) = 1;
      __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      if ((*(long *)(lVar6 + 0x30) != 0) && (parameters != (System_Object_array *)0x0)) {
        pIVar2 = *(Il2CppObject **)(*(long *)(lVar6 + 0x30) + 0x18);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
           lVar6 == 0)) {
          uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar8,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar2;
        il2cpp_runtime_glue(parameters->m_Items,pIVar2);
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinLogicRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$StartInGame
// il2cpp: void CustomLogic_CustomLogicManager__StartInGame (const MethodInfo* method);
// 0x3f53310

/* WARNING: Type propagation algorithm not settling */

void CustomLogic_CustomLogicManager__StartInGame(MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *__this;
  Il2CppObject *pIVar2;
  Il2CppMethodPointer pIVar3;
  char cVar4;
  bool_conflict bVar5;
  System_Object_array *parameters;
  long lVar6;
  System_String_o *pSVar7;
  undefined8 uVar8;
  MethodInfo *method_00;
  Photon_Pun_PhotonMessageInfo_o PStack_38;
  
  if (DAT_05703e82 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"LoadBuiltinLogicRPC");
    DAT_05703e82 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    return;
  }
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar6 != 0) && (lVar6 = *(long *)(lVar6 + 0x38), lVar6 != 0)) &&
     (*(long *)(lVar6 + 0x30) != 0)) {
    pSVar7 = *(System_String_o **)(*(long *)(lVar6 + 0x30) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar5 = Map_BuiltinLevels__IsLogicBuiltin(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(long *)(lVar6 + 0x30) != 0) {
        pSVar7 = *(System_String_o **)(*(long *)(lVar6 + 0x30) + 0x18);
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = Map_BuiltinLevels__LoadLogic(pSVar7,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        pIVar3 = TypeInfo_CustomLogicManager[2].virtualMethodPointer;
        *(System_String_o **)(pIVar3 + 0x18) = pSVar7;
        il2cpp_runtime_glue(pIVar3 + 0x18);
        pSVar7 = *(System_String_o **)(TypeInfo_CustomLogicManager[2].virtualMethodPointer + 0x18);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar7 = Utility_Util__CreateMD5(pSVar7,(MethodInfo *)0x0);
        pIVar3 = TypeInfo_CustomLogicManager[2].virtualMethodPointer;
        *(System_String_o **)(pIVar3 + 0x20) = pSVar7;
        il2cpp_runtime_glue(pIVar3 + 0x20);
        if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
          il2cpp_init_class();
        }
        Map_CustomLogicTransfer__Start((MethodInfo *)0x0);
        Utility_Util__CreateLocalPhotonInfo(&PStack_38,(MethodInfo *)0x0);
        if (DAT_05703e84 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
          DAT_05703e84 = '\x01';
        }
        if ((PStack_38.fields.Sender != (Photon_Realtime_Player_o *)0x0) &&
           (bVar5 = Photon_Realtime_Player__get_IsMasterClient
                              (PStack_38.fields.Sender,(MethodInfo *)0x0), (char)bVar5 == '\0')) {
          return;
        }
        method_00 = TypeInfo_CustomLogicManager;
        if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_CustomLogicManager__FinishLoadLogic(method_00);
        return;
      }
    }
    else {
      if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      **(undefined1 **)(TypeInfo_CustomLogicTransfer + 0xb8) = 1;
      __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
      parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
      if ((*(long *)(lVar6 + 0x30) != 0) && (parameters != (System_Object_array *)0x0)) {
        pIVar2 = *(Il2CppObject **)(*(long *)(lVar6 + 0x30) + 0x18);
        if ((pIVar2 != (Il2CppObject *)0x0) &&
           (lVar6 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
           lVar6 == 0)) {
          uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar8,0);
        }
        if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        parameters->m_Items[0] = pIVar2;
        il2cpp_runtime_glue(parameters->m_Items,pIVar2);
        if (__this != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinLogicRPC",0,parameters,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$OnLoadBuiltinLogicRPC
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC (System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f536e0

void CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC
               (System_String_o *name,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  MethodInfo *method_00;
  
  if (DAT_05703e83 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_05703e83 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = Map_BuiltinLevels__LoadLogic(name,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      *(System_String_o **)(lVar1 + 0x18) = pSVar4;
      il2cpp_runtime_glue(lVar1 + 0x18);
      pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = Utility_Util__CreateMD5(pSVar4,(MethodInfo *)0x0);
      lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      *(System_String_o **)(lVar1 + 0x20) = pSVar4;
      il2cpp_runtime_glue(lVar1 + 0x20,pSVar4);
      uVar2 = **(undefined8 **)(DAT_057110b0 + 0xb8);
      if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar1 = *(long *)(TypeInfo_CustomLogicTransfer + 0xb8);
      *(undefined8 *)(lVar1 + 8) = uVar2;
      method_00 = (MethodInfo *)(lVar1 + 8);
      il2cpp_runtime_glue(method_00,uVar2);
      CustomLogic_CustomLogicManager__FinishLoadLogic(method_00);
      return;
    }
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$OnLoadCachedLogicRPC
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x3f53680

void CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC
               (Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  
  if (DAT_05703e84 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703e84 = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar1 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
  }
  if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) != 0) {
    CustomLogic_CustomLogicManager__FinishLoadLogic(TypeInfo_CustomLogicManager);
    return;
  }
  method_00 = TypeInfo_CustomLogicManager;
  il2cpp_init_class();
  CustomLogic_CustomLogicManager__FinishLoadLogic(method_00);
  return;
}


// CustomLogic.CustomLogicManager$$FinishLoadLogic
// il2cpp: void CustomLogic_CustomLogicManager__FinishLoadLogic (const MethodInfo* method);
// 0x3f53850

void CustomLogic_CustomLogicManager__FinishLoadLogic(MethodInfo *method)

{
  System_String_o *key;
  Photon_Realtime_Player_o *player;
  
  if (DAT_05703e85 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    DAT_05703e85 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_init_class();
  }
  key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x38);
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  PhotonExtensions__SetCustomProperty
            (player,key,*(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 8),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x10) = 1;
  return;
}


// CustomLogic.CustomLogicManager$$OnPlayerEnteredRoom
// il2cpp: void CustomLogic_CustomLogicManager__OnPlayerEnteredRoom (CustomLogic_CustomLogicManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x3f53940

void CustomLogic_CustomLogicManager__OnPlayerEnteredRoom
               (CustomLogic_CustomLogicManager_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  int iVar1;
  System_String_o *name;
  Photon_Pun_PhotonView_o *__this_00;
  Il2CppObject *pIVar2;
  char cVar3;
  bool_conflict bVar4;
  System_Object_array *parameters;
  long lVar5;
  undefined8 uVar6;
  
  if (DAT_05703e86 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransfer);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"LoadBuiltinLogicRPC");
    DAT_05703e86 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  else {
    bVar4 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar3 = (char)bVar4;
  }
  if (cVar3 != '\0') {
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
      il2cpp_init_class();
      cVar3 = **(char **)(TypeInfo_CustomLogicTransfer + 0xb8);
    }
    else {
      cVar3 = **(char **)(TypeInfo_CustomLogicTransfer + 0xb8);
    }
    if (cVar3 != '\0') {
      lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
      if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x38), lVar5 != 0)) &&
         (*(long *)(lVar5 + 0x30) != 0)) {
        name = *(System_String_o **)(*(long *)(lVar5 + 0x30) + 0x18);
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar4 = Map_BuiltinLevels__IsLogicBuiltin(name,(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
            il2cpp_init_class();
          }
          Map_CustomLogicTransfer__Transfer(player,(MethodInfo *)0x0);
          return;
        }
        __this_00 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
        parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
        if ((*(long *)(lVar5 + 0x30) != 0) && (parameters != (System_Object_array *)0x0)) {
          pIVar2 = *(Il2CppObject **)(*(long *)(lVar5 + 0x30) + 0x18);
          if ((pIVar2 != (Il2CppObject *)0x0) &&
             (lVar5 = il2cpp_runtime_glue(pIVar2,(((parameters->obj).klass)->_1).element_class),
             lVar5 == 0)) {
            uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar6,0);
          }
          if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          parameters->m_Items[0] = pIVar2;
          il2cpp_runtime_glue(parameters->m_Items,pIVar2);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC(__this_00,"LoadBuiltinLogicRPC",player,parameters,(MethodInfo *)0x0);
            return;
          }
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// CustomLogic.CustomLogicManager$$GetModeSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicManager__GetModeSettings (System_String_o* source, const MethodInfo* method);
// 0x3f53bb0

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicManager__GetModeSettings(System_String_o *source,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar1;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  if (DAT_05703e87 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703e87 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_00;
  }
  __this = CustomLogic_CustomLogicManager__GetEditorEvaluator(source,0,in_RDX);
  if (__this != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pSVar1 = CustomLogic_CustomLogicEvaluator__GetModeSettings(__this,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$GetAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicManager__GetAddonSettings (System_String_o* source, const MethodInfo* method);
// 0x3f53e00

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicManager__GetAddonSettings(System_String_o *source,MethodInfo *method)

{
  System_String_o *content;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  bool_conflict bVar1;
  CustomLogic_CustomLogicCompiler_o *__this_02;
  CustomLogic_CustomLogicSourceFile_o *__this_03;
  MethodInfo *pMVar2;
  CustomLogic_CustomLogicLexer_o *__this_04;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_05;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *__this_06;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_07;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_08;
  System_Collections_Generic_Dictionary_object__object__o *__this_09;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  Il2CppObject *key;
  
  if (DAT_05703e88 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCompiler);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLexer);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicParser);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSourceFile);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__BaseSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
    il2cpp_init_method_metadata(&"AddonSource.cl");
    il2cpp_init_method_metadata(&"BaseLogic.cl");
    DAT_05703e88 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  __this_02 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this_02,method);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  content = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
  __this_03 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicSourceFile);
  CustomLogic_CustomLogicSourceFile___ctor(__this_03,"BaseLogic.cl",content,1,(MethodInfo *)0x0);
  if (__this_02 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this_02,__this_03,method_01);
    pMVar2 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_CustomLogicSourceFile);
    method_00 = (MethodInfo *)0x2;
    CustomLogic_CustomLogicSourceFile___ctor
              ((CustomLogic_CustomLogicSourceFile_o *)pMVar2,"AddonSource.cl",source,2,(MethodInfo *)0x0
              );
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (__this_02,(CustomLogic_CustomLogicSourceFile_o *)pMVar2,method_02);
    pMVar2 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(__this_02,pMVar2);
    __this_04 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_04,(System_String_o *)pMVar2,__this_02,method_00);
    if (__this_04 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      tokens = CustomLogic_CustomLogicLexer__GetTokens(__this_04,pMVar2);
      __this_05 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor(__this_05,tokens,__this_02,(MethodInfo *)0x0);
      if (__this_05 != (CustomLogic_CustomLogicParser_o *)0x0) {
        start = CustomLogic_CustomLogicParser__GetStartAst(__this_05,(MethodInfo *)0x0);
        __this_06 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(__this_06,start,__this_02,(MethodInfo *)0x0);
        if (__this_06 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          __this_07 = CustomLogic_CustomLogicEvaluator__GetAddonSettings
                                (__this_06,(MethodInfo *)0x0);
          if (__this_07 !=
              (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)
              0x0) {
            __this_08 = System_Collections_Generic_Dictionary<object__object>__get_Keys
                                  ((System_Collections_Generic_Dictionary_object__object__o *)
                                   __this_07,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_System_S);
            if (__this_08 !=
                (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
              System_Collections_Generic_Dictionary_KeyCollection<object__object>__GetEnumerator
                        ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o
                          *)&stack0xffffffffffffffb8,__this_08,MethodInfo_Dictionary_2_TKey_TValue__KeyCollection_TKey_TVa);
              __this.fields._8_8_ = pIVar4;
              __this.fields._dictionary = pSVar3;
              __this.fields._currentKey = key;
              bVar1 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__MoveNext
                                (__this,(MethodInfo_31D0850 *)&stack0xffffffffffffffb8);
              if ((char)bVar1 == '\0') {
                __this_01.fields._8_8_ = pIVar4;
                __this_01.fields._dictionary = pSVar3;
                __this_01.fields._currentKey = key;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                          (__this_01,(MethodInfo_31D0840 *)&stack0xffffffffffffffb8);
                __this_09 = (System_Collections_Generic_Dictionary_object__object__o *)
                            il2cpp_runtime_glue(TypeInfo_Dictionary_string__BaseSetting);
                System_Collections_Generic_Dictionary<object__object>___ctor(__this_09,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting)
                ;
              }
              else {
                __this_09 = (System_Collections_Generic_Dictionary_object__object__o *)
                            System_Collections_Generic_Dictionary<object__object>__get_Item
                                      ((System_Collections_Generic_Dictionary_object__object__o *)
                                       __this_07,key,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
                __this_00.fields._8_8_ = pIVar4;
                __this_00.fields._dictionary = pSVar3;
                __this_00.fields._currentKey = key;
                System_Collections_Generic_Dictionary_KeyCollection_Enumerator<object__object>__Dispose
                          (__this_00,(MethodInfo_31D0840 *)&stack0xffffffffffffffb8);
              }
              return (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_09;
            }
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$GetSelectedAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* CustomLogic_CustomLogicManager__GetSelectedAddonSettings (System_Collections_Generic_List_string__o* addonNames, const MethodInfo* method);
// 0x3f541a0

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
CustomLogic_CustomLogicManager__GetSelectedAddonSettings
          (System_Collections_Generic_List_string__o *addonNames,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_02;
  System_String_o *pSVar2;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *value;
  MethodInfo *pMVar3;
  undefined8 in_stack_ffffffffffffff88;
  System_Collections_Generic_List_Enumerator_T__c *pSVar4;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (DAT_05703e89 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__Dictionary_string__BaseSettin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    DAT_05703e89 = '\x01';
  }
  __this_02 = (System_Collections_Generic_Dictionary_object__object__o *)
              il2cpp_runtime_glue(TypeInfo_Dictionary_string__Dictionary_string__BaseSettin);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this_02,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_S);
  if (addonNames == (System_Collections_Generic_List_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_List<object>__GetEnumerator
            (&local_48,(System_Collections_Generic_List_object__o *)addonNames,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  pSVar4 = (System_Collections_Generic_List_Enumerator_T__c *)local_48.fields._list;
  if (__this_02 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    while( true ) {
      __this_00.fields._8_8_ = __this_02;
      __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this_00.fields._current = (Il2CppObject *)pSVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_00,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar1 == '\0') break;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = Map_BuiltinLevels__LoadAddon
                         ((System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
      pMVar3 = (MethodInfo *)0x0;
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_CustomLogicManager__GetAddonSettings(pSVar2,pMVar3);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
  else {
    while( true ) {
      __this.fields._8_8_ = __this_02;
      __this.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
      __this.fields._current = (Il2CppObject *)pSVar4;
      bVar1 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffff98);
      if ((char)bVar1 == '\0') break;
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = Map_BuiltinLevels__LoadAddon
                         ((System_String_o *)local_48.fields._current,(MethodInfo *)0x0);
      pMVar3 = (MethodInfo *)0x0;
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        value = CustomLogic_CustomLogicManager__GetAddonSettings(pSVar2,pMVar3);
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (__this_02,local_48.fields._current,(Il2CppObject *)value,MethodInfo_Void_set_Item);
      }
    }
  }
  __this_01.fields._8_8_ = __this_02;
  __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff88;
  __this_01.fields._current = (Il2CppObject *)pSVar4;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_01,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  return (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)
         __this_02;
}


// CustomLogic.CustomLogicManager$$GetModeDescription
// il2cpp: System_String_o* CustomLogic_CustomLogicManager__GetModeDescription (System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, const MethodInfo* method);
// 0x3f544f0

System_String_o *
CustomLogic_CustomLogicManager__GetModeDescription
          (System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,MethodInfo *method
          )

{
  byte bVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  void **ppvVar4;
  
  if (DAT_05703e8a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_BaseSetting_get_Item);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Description");
    DAT_05703e8a = '\x01';
  }
  if (settings != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
    bVar2 = System_Collections_Generic_Dictionary<object__object>__ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                       "Description",MethodInfo_Boolean_ContainsKey);
    ppvVar4 = (void **)&"";
    if ((char)bVar2 != '\0') {
      pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                         ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                          "Description",MethodInfo_BaseSetting_get_Item);
      if (pIVar3 != (Il2CppObject *)0x0) {
        bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
        if ((bVar1 <= (pIVar3->klass->_2).naturalAligment) &&
           ((pIVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_StringSetting)) {
          pIVar3 = System_Collections_Generic_Dictionary<object__object>__get_Item
                             ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                              "Description",MethodInfo_BaseSetting_get_Item);
          if (pIVar3 == (Il2CppObject *)0x0) goto LAB_03f5461a;
          bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
          if (((pIVar3->klass->_2).naturalAligment < bVar1) ||
             ((pIVar3->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) {
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(pIVar3);
          }
          ppvVar4 = &pIVar3[1].monitor;
        }
      }
    }
    return *ppvVar4;
  }
LAB_03f5461a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$GetEditorEvaluator
// il2cpp: CustomLogic_CustomLogicEvaluator_o* CustomLogic_CustomLogicManager__GetEditorEvaluator (System_String_o* source, bool loadBaseLogic, const MethodInfo* method);
// 0x3f53c10

CustomLogic_CustomLogicEvaluator_o *
CustomLogic_CustomLogicManager__GetEditorEvaluator
          (System_String_o *source,bool_conflict loadBaseLogic,MethodInfo *method)

{
  System_String_o *content;
  CustomLogic_CustomLogicCompiler_o *__this;
  CustomLogic_CustomLogicSourceFile_o *__this_00;
  MethodInfo *pMVar1;
  CustomLogic_CustomLogicLexer_o *__this_01;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_02;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *__this_03;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  undefined4 in_register_00000034;
  
  pMVar1 = (MethodInfo *)CONCAT44(in_register_00000034,loadBaseLogic);
  if (DAT_05703e8b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCompiler);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLexer);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicParser);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSourceFile);
    il2cpp_init_method_metadata(&"UserSource.cl");
    il2cpp_init_method_metadata(&"BaseLogic.cl");
    DAT_05703e8b = '\x01';
  }
  __this = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this,pMVar1);
  if ((char)loadBaseLogic != '\0') {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    content = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
    __this_00 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicSourceFile);
    CustomLogic_CustomLogicSourceFile___ctor(__this_00,"BaseLogic.cl",content,1,(MethodInfo *)0x0);
    if (__this == (CustomLogic_CustomLogicCompiler_o *)0x0) goto LAB_03f53df5;
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,__this_00,method_01);
  }
  pMVar1 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_CustomLogicSourceFile);
  method_00 = (MethodInfo *)0x4;
  CustomLogic_CustomLogicSourceFile___ctor
            ((CustomLogic_CustomLogicSourceFile_o *)pMVar1,"UserSource.cl",source,4,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (__this,(CustomLogic_CustomLogicSourceFile_o *)pMVar1,method_02);
    pMVar1 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(__this,pMVar1);
    __this_01 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_01,(System_String_o *)pMVar1,__this,method_00);
    if (__this_01 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      tokens = CustomLogic_CustomLogicLexer__GetTokens(__this_01,pMVar1);
      __this_02 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor(__this_02,tokens,__this,(MethodInfo *)0x0);
      if (__this_02 != (CustomLogic_CustomLogicParser_o *)0x0) {
        start = CustomLogic_CustomLogicParser__GetStartAst(__this_02,(MethodInfo *)0x0);
        __this_03 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(__this_03,start,__this,(MethodInfo *)0x0);
        return __this_03;
      }
    }
  }
LAB_03f53df5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$TryParseLogic
// il2cpp: System_String_o* CustomLogic_CustomLogicManager__TryParseLogic (System_String_o* source, const MethodInfo* method);
// 0x3f54630

System_String_o *
CustomLogic_CustomLogicManager__TryParseLogic(System_String_o *source,MethodInfo *method)

{
  System_String_o *content;
  bool_conflict bVar1;
  CustomLogic_CustomLogicCompiler_o *__this;
  CustomLogic_CustomLogicSourceFile_o *__this_00;
  MethodInfo *pMVar2;
  CustomLogic_CustomLogicLexer_o *__this_01;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_02;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  System_String_o **ppSVar3;
  
  if (DAT_05703e8c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCompiler);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLexer);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicParser);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSourceFile);
    il2cpp_init_method_metadata(&"UserSource.cl");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"BaseLogic.cl");
    DAT_05703e8c = '\x01';
  }
  __this = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this,method);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  content = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
  __this_00 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicSourceFile);
  CustomLogic_CustomLogicSourceFile___ctor(__this_00,"BaseLogic.cl",content,1,(MethodInfo *)0x0);
  if (__this != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this,__this_00,method_01);
    pMVar2 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_CustomLogicSourceFile);
    method_00 = (MethodInfo *)0x4;
    CustomLogic_CustomLogicSourceFile___ctor
              ((CustomLogic_CustomLogicSourceFile_o *)pMVar2,"UserSource.cl",source,4,(MethodInfo *)0x0
              );
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (__this,(CustomLogic_CustomLogicSourceFile_o *)pMVar2,method_02);
    pMVar2 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(__this,pMVar2);
    __this_01 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_01,(System_String_o *)pMVar2,__this,method_00);
    if (__this_01 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      tokens = CustomLogic_CustomLogicLexer__GetTokens(__this_01,pMVar2);
      __this_02 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor(__this_02,tokens,__this,(MethodInfo *)0x0);
      bVar1 = System_String__op_Inequality
                        ((__this_01->fields).Error,
                         (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),(MethodInfo *)0x0
                        );
      if ((char)bVar1 == '\0') {
        if (__this_02 == (CustomLogic_CustomLogicParser_o *)0x0) goto LAB_03f5483e;
        CustomLogic_CustomLogicParser__GetStartAst(__this_02,(MethodInfo *)0x0);
        bVar1 = System_String__op_Inequality
                          ((__this_02->fields).Error,
                           (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                           (MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          ppSVar3 = (System_String_o **)&"";
        }
        else {
          ppSVar3 = &(__this_02->fields).Error;
        }
      }
      else {
        ppSVar3 = &(__this_01->fields).Error;
      }
      return *ppSVar3;
    }
  }
LAB_03f5483e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$StartLogic
// il2cpp: void CustomLogic_CustomLogicManager__StartLogic (System_Collections_Generic_Dictionary_string__BaseSetting__o* modeSettings, System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* addonSettings, const MethodInfo* method);
// 0x3f54850

void CustomLogic_CustomLogicManager__StartLogic
               (System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings,
               System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o
               *addonSettings,MethodInfo *method)

{
  int32_t mapLogicOffset;
  int iVar1;
  long lVar2;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  bool_conflict bVar3;
  CustomLogic_CustomLogicCompiler_o *pCVar4;
  CustomLogic_CustomLogicSourceFile_o *pCVar5;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  long lVar8;
  MethodInfo *pMVar9;
  CustomLogic_CustomLogicLexer_o *__this_02;
  System_Collections_Generic_List_CustomLogicToken__o *tokens;
  CustomLogic_CustomLogicParser_o *__this_03;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *pCVar10;
  MethodInfo *pMVar11;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  System_Collections_Generic_List_T__o *pSVar12;
  Il2CppRGCTXData *pIVar13;
  _union_247328 name;
  _union_247328 _Var14;
  undefined1 local_48 [16];
  _union_247328 local_38;
  
  pMVar11 = (MethodInfo *)addonSettings;
  if (DAT_05703e8d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinLevels);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCompiler);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicLexer);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicParser);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicSourceFile);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_StringSettin);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String__ToList_String);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_Func_StringSetting__string);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
    il2cpp_init_method_metadata(&TypeInfo_MapManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    il2cpp_init_method_metadata(&MethodInfo_String__StartLogic_b__43_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"MapLogic");
    il2cpp_init_method_metadata(&".txt");
    il2cpp_init_method_metadata(&".cl");
    il2cpp_init_method_metadata(&"BaseLogic.cl");
    il2cpp_init_method_metadata(&".addon");
    DAT_05703e8d = '\x01';
  }
  pCVar4 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar4,pMVar11);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(CustomLogic_CustomLogicCompiler_o **)(lVar2 + 0x30) = pCVar4;
  il2cpp_runtime_glue(lVar2 + 0x30,pCVar4);
  pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
  pCVar4 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30);
  pCVar5 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicSourceFile);
  CustomLogic_CustomLogicSourceFile___ctor(pCVar5,"BaseLogic.cl",pSVar6,1,(MethodInfo *)0x0);
  if (pCVar4 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto LAB_03f55077;
  CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar4,pCVar5,method_00);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x38), lVar2 == 0)) ||
     (lVar2 = *(long *)(lVar2 + 0x48), lVar2 == 0)) goto LAB_03f55077;
  source = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar2 + 0x18);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_init_class();
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  else {
    selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
  }
  if (selector == (System_Func_TSource__TResult__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_StringSetting__string);
    System_Func<object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__TResult__o **)(lVar2 + 8) = selector;
    il2cpp_runtime_glue(lVar2 + 8,selector);
  }
  source_00 = System_Linq_Enumerable__Select<object__object>(source,selector,MethodInfo_IEnumerable_1_System_String__Select_StringSettin);
  __this_01 = System_Linq_Enumerable__ToList<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_String__ToList_String
                        );
  if (__this_01 == (System_Collections_Generic_List_TSource__o *)0x0) goto LAB_03f55077;
  pMVar11 = (MethodInfo *)&MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato;
  System_Collections_Generic_List<object>__GetEnumerator
            ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
             (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_System_String__GetEnumerato);
  pSVar12 = (System_Collections_Generic_List_T__o *)local_48._0_8_;
  pIVar13 = (Il2CppRGCTXData *)local_48._8_8_;
  while (name = local_38, __this.fields._8_8_ = pIVar13, __this.fields._list = pSVar12,
        __this.fields._current = name.genericMethod,
        bVar3 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffff88),
        (char)bVar3 != '\0') {
    _Var14 = name;
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = Map_BuiltinLevels__LoadAddon(name.genericMethod,(MethodInfo *)0x0);
    bVar3 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    local_38 = _Var14;
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar4 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30);
      pSVar7 = System_String__Concat(name.genericMethod,".addon",(MethodInfo *)0x0);
      pCVar5 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicSourceFile);
      pMVar11 = (MethodInfo *)0x2;
      CustomLogic_CustomLogicSourceFile___ctor(pCVar5,pSVar7,pSVar6,2,(MethodInfo *)0x0);
      if (pCVar4 == (CustomLogic_CustomLogicCompiler_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar4,pCVar5,method_01);
      local_38 = _Var14;
    }
  }
  __this_00.fields._8_8_ = pIVar13;
  __this_00.fields._list = pSVar12;
  __this_00.fields._current = name.genericMethod;
  System_Collections_Generic_List_Enumerator<object>__Dispose
            (__this_00,(MethodInfo_3185E10 *)&stack0xffffffffffffff88);
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar2 == 0) || (lVar2 = *(long *)(lVar2 + 0x38), lVar2 == 0)) ||
     (*(long *)(lVar2 + 0x30) == 0)) goto LAB_03f55077;
  pSVar6 = *(System_String_o **)(*(long *)(lVar2 + 0x30) + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_String__op_Equality
                    (pSVar6,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_03f54e4b:
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
      if (lVar8 != 0) goto LAB_03f54d2a;
      goto LAB_03f54e4b;
    }
    lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (lVar8 == 0) goto LAB_03f54e4b;
LAB_03f54d2a:
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
      if (lVar8 == 0) goto LAB_03f55077;
    }
    pSVar6 = *(System_String_o **)(lVar8 + 0x40);
    bVar3 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') goto LAB_03f54e4b;
    if (*(long *)(lVar2 + 0x28) == 0) goto LAB_03f55077;
    pSVar7 = *(System_String_o **)(*(long *)(lVar2 + 0x28) + 0x18);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pCVar4 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30);
    pSVar7 = System_String__Concat(pSVar7,".txt",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (lVar8 == 0) goto LAB_03f55077;
    mapLogicOffset = *(int32_t *)(lVar8 + 0x50);
    pCVar5 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicSourceFile);
    pMVar11 = (MethodInfo *)0x3;
    CustomLogic_CustomLogicSourceFile___ctor
              (pCVar5,pSVar7,pSVar6,3,mapLogicOffset,(MethodInfo *)0x0);
    if (pCVar4 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto LAB_03f55077;
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar4,pCVar5,method_02);
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pMVar9 = (MethodInfo *)0x0;
  bVar3 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18),(MethodInfo *)0x0)
  ;
  if ((char)bVar3 == '\0') {
    if (*(long *)(lVar2 + 0x30) == 0) goto LAB_03f55077;
    pSVar6 = *(System_String_o **)(*(long *)(lVar2 + 0x30) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pMVar9 = *(MethodInfo **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28);
    bVar3 = System_String__op_Equality(pSVar6,(System_String_o *)pMVar9,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pCVar4 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30);
      pSVar7 = System_String__Concat(pSVar6,".cl",(MethodInfo *)0x0);
      pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18);
      pMVar9 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_CustomLogicSourceFile);
      pMVar11 = (MethodInfo *)0x4;
      CustomLogic_CustomLogicSourceFile___ctor
                ((CustomLogic_CustomLogicSourceFile_o *)pMVar9,pSVar7,pSVar6,4,(MethodInfo *)0x0);
      if (pCVar4 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto LAB_03f55077;
      CustomLogic_CustomLogicCompiler__AddSourceFile
                (pCVar4,(CustomLogic_CustomLogicSourceFile_o *)pMVar9,method_03);
    }
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pCVar4 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30);
  if (pCVar4 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pMVar9 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(pCVar4,pMVar9);
    pCVar4 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30);
    __this_02 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_02,(System_String_o *)pMVar9,pCVar4,pMVar11);
    if (__this_02 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      tokens = CustomLogic_CustomLogicLexer__GetTokens(__this_02,pMVar9);
      pCVar4 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30);
      __this_03 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor(__this_03,tokens,pCVar4,(MethodInfo *)0x0);
      if (__this_03 != (CustomLogic_CustomLogicParser_o *)0x0) {
        start = CustomLogic_CustomLogicParser__GetStartAst(__this_03,(MethodInfo *)0x0);
        pCVar4 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x30);
        pCVar10 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(pCVar10,start,pCVar4,(MethodInfo *)0x0);
        lVar2 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
        *(CustomLogic_CustomLogicEvaluator_o **)(lVar2 + 8) = pCVar10;
        il2cpp_runtime_glue(lVar2 + 8,pCVar10);
        pCVar10 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (pCVar10 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          CustomLogic_CustomLogicEvaluator__Start
                    (pCVar10,modeSettings,addonSettings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
LAB_03f55077:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicManager$$FixedUpdate
// il2cpp: void CustomLogic_CustomLogicManager__FixedUpdate (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x3f55180

void CustomLogic_CustomLogicManager__FixedUpdate
               (CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  if (DAT_05703e8e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703e8e = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    CustomLogic_CustomLogicEvaluator__OnTick(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicManager$$Update
// il2cpp: void CustomLogic_CustomLogicManager__Update (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x3f55220

void CustomLogic_CustomLogicManager__Update
               (CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  Settings_KeybindSetting_o *__this_00;
  char cVar6;
  bool_conflict bVar7;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  long lVar8;
  long lVar9;
  float fVar10;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  
  if (DAT_05703e8f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_Value);
    DAT_05703e8f = '\x01';
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) != 0) goto LAB_03f5524b;
LAB_03f55393:
    il2cpp_init_class();
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto LAB_03f553af;
LAB_03f5525f:
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (__this_01 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto LAB_03f55538;
    }
    CustomLogic_CustomLogicEvaluator__OnFrame(__this_01,(MethodInfo *)0x0);
    lVar8 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    if (*(char *)(lVar8 + 0x38) == '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
        lVar8 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      }
      if (*(char *)(lVar8 + 0x39) == '\0') goto LAB_03f553af;
    }
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar8 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    uVar3 = *(undefined8 *)(lVar8 + 0x44);
    fVar1 = *(float *)(lVar8 + 0x4c);
    uVar4 = *(undefined8 *)(lVar8 + 0x5c);
    fVar2 = *(float *)(lVar8 + 100);
    fVar10 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    lVar9 = TypeInfo_CustomLogicManager;
    fStack_38 = (float)uVar4;
    fStack_34 = (float)((ulong)uVar4 >> 0x20);
    fStack_28 = (float)uVar3;
    fStack_24 = (float)((ulong)uVar3 >> 0x20);
    lVar8 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
    *(ulong *)(lVar8 + 0x44) =
         CONCAT44(fVar10 * fStack_34 + fStack_24,fVar10 * fStack_38 + fStack_28);
    *(float *)(lVar8 + 0x4c) = fVar2 * fVar10 + fVar1;
    iVar5 = *(int *)(lVar9 + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) goto LAB_03f55393;
LAB_03f5524b:
    __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
    if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) goto LAB_03f5525f;
LAB_03f553af:
    iVar5 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
    lVar9 = TypeInfo_CustomLogicManager;
  }
  if (iVar5 == 0) {
    il2cpp_init_class();
    lVar9 = TypeInfo_CustomLogicManager;
  }
  lVar8 = *(long *)(lVar9 + 0xb8);
  if (*(char *)(lVar8 + 0x40) == '\0') {
LAB_03f553dc:
    iVar5 = *(int *)(lVar9 + 0xe4);
joined_r0x03f553e3:
    if (iVar5 == 0) goto LAB_03f55440;
LAB_03f553e5:
    cVar6 = *(char *)(*(long *)(lVar9 + 0xb8) + 0x38);
  }
  else {
    if (*(int *)(lVar9 + 0xe4) == 0) {
      il2cpp_init_class();
      lVar8 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      cVar6 = *(char *)(lVar8 + 0x38);
      lVar9 = TypeInfo_CustomLogicManager;
    }
    else {
      cVar6 = *(char *)(lVar8 + 0x38);
    }
    if (cVar6 != '\0') goto LAB_03f553dc;
    if (*(int *)(lVar9 + 0xe4) == 0) {
      il2cpp_init_class();
      lVar9 = TypeInfo_CustomLogicManager;
      *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40) = 0;
      iVar5 = *(int *)(lVar9 + 0xe4);
      goto joined_r0x03f553e3;
    }
    *(undefined1 *)(lVar8 + 0x40) = 0;
    if (*(int *)(lVar9 + 0xe4) != 0) goto LAB_03f553e5;
LAB_03f55440:
    il2cpp_init_class();
    cVar6 = *(char *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
    lVar9 = TypeInfo_CustomLogicManager;
  }
  if (cVar6 != '\0') {
    lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x88), lVar8 == 0)) {
LAB_03f55538:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (*(char *)(lVar8 + 0x11) != '\0') {
      iVar5 = *(int *)(lVar9 + 0xe4);
joined_r0x03f55519:
      if (iVar5 == 0) {
        il2cpp_init_class();
        lVar9 = TypeInfo_CustomLogicManager;
      }
      *(undefined1 *)(*(long *)(lVar9 + 0xb8) + 0x40) = 1;
      return;
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_init_class();
      bVar7 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
      cVar6 = (char)bVar7;
    }
    else {
      bVar7 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
      cVar6 = (char)bVar7;
    }
    if ((cVar6 == '\0') && (bVar7 = UI_InGameMenu__InMenu((MethodInfo *)0x0), (char)bVar7 == '\0'))
    {
      lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if ((lVar8 == 0) ||
         ((lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0 ||
          (__this_00 = *(Settings_KeybindSetting_o **)(lVar8 + 0xc0),
          __this_00 == (Settings_KeybindSetting_o *)0x0)))) goto LAB_03f55538;
      bVar7 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        iVar5 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
        lVar9 = TypeInfo_CustomLogicManager;
        goto joined_r0x03f55519;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicManager$$LateUpdate
// il2cpp: void CustomLogic_CustomLogicManager__LateUpdate (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x3f55540

void CustomLogic_CustomLogicManager__LateUpdate
               (CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  
  if (DAT_05703e90 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05703e90 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_init_class();
      __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    CustomLogic_CustomLogicEvaluator__OnLateFrame(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicManager$$.ctor
// il2cpp: void CustomLogic_CustomLogicManager___ctor (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x3f555e0

void CustomLogic_CustomLogicManager___ctor
               (CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicManager$$.cctor
// il2cpp: void CustomLogic_CustomLogicManager___cctor (const MethodInfo* method);
// 0x3f555f0

void CustomLogic_CustomLogicManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  
  if (DAT_05703e91 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__object);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_Settings_KeybindSetting);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    DAT_05703e91 = '\x01';
  }
  *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x68) = 0;
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_KeybindSetting);
  System_Collections_Generic_HashSet<object>___ctor(pSVar2,MethodInfo_HashSet_1_Settings_KeybindSetting);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x78) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x78,pSVar2);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_KeybindSetting);
  System_Collections_Generic_HashSet<object>___ctor(pSVar2,MethodInfo_HashSet_1_Settings_KeybindSetting);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x80) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x80,pSVar2);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar3,MethodInfo_Dictionary_2_System_String_System_Object);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x88) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x88,pSVar3);
  pSVar3 = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__object);
  System_Collections_Generic_Dictionary<object__object>___ctor(pSVar3,MethodInfo_Dictionary_2_System_String_System_Object);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x90) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x90,pSVar3);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(pSVar2,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x98) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0x98,pSVar2);
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(pSVar2,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0xa0) = pSVar2;
  il2cpp_runtime_glue(lVar1 + 0xa0,pSVar2);
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa8) = 0;
  return;
}


