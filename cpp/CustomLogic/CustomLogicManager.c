// Type: CustomLogic.CustomLogicManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicManager.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/CustomLogicManager.cs
// --------------------------------

// CustomLogic.CustomLogicManager.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicManager___c___cctor (const MethodInfo* method);
// 0x4261fe0

void CustomLogic_CustomLogicManager___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057adc00 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057adc00 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicManager.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicManager___c___ctor (CustomLogic_CustomLogicManager___c_o* __this, const MethodInfo* method);
// 0x4262050

void CustomLogic_CustomLogicManager___c___ctor
               (CustomLogic_CustomLogicManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicManager.<>c$$<StartLogic>b__49_0
// il2cpp: System_String_o* CustomLogic_CustomLogicManager___c___StartLogic_b__49_0 (CustomLogic_CustomLogicManager___c_o* __this, Settings_StringSetting_o* x, const MethodInfo* method);
// 0x4262060

System_String_o *
CustomLogic_CustomLogicManager___c___StartLogic_b__49_0
          (CustomLogic_CustomLogicManager___c_o *__this,Settings_StringSetting_o *x,MethodInfo *method)

{
  if (g_data_057adc01 == '\0') {
    __this = (CustomLogic_CustomLogicManager___c_o *)&MethodInfo_String_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057adc01 = '\x01';
  }
  if (x != (Settings_StringSetting_o *)0x0) {
    return (x->fields)._value;
  }
  il2cpp_runtime_helper_022b2c90();
  return (System_String_o *)__this[2].klass;
}


// CustomLogic.CustomLogicManager$$get_IsWaitingForRestart
// il2cpp: bool CustomLogic_CustomLogicManager__get_IsWaitingForRestart (const MethodInfo* method);
// 0x425e040

bool_conflict CustomLogic_CustomLogicManager__get_IsWaitingForRestart(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057adbe6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbe6 = '\x01';
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_CustomLogicManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8));
}


// CustomLogic.CustomLogicManager$$WaitForRestart
// il2cpp: void CustomLogic_CustomLogicManager__WaitForRestart (const MethodInfo* method);
// 0x425e0b0

void CustomLogic_CustomLogicManager__WaitForRestart(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057adbe7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbe7 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(undefined1 *)(lVar1 + 0xb8) = 0;
  *(undefined8 *)(lVar1 + 8) = 0;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,0);
  return;
}


// CustomLogic.CustomLogicManager$$OnJoinedRoom
// il2cpp: void CustomLogic_CustomLogicManager__OnJoinedRoom (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x425e110

void CustomLogic_CustomLogicManager__OnJoinedRoom(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  code cVar1;
  int iVar2;
  System_Collections_Generic_Dictionary_object__object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  uint uVar4;
  bool_conflict bVar5;
  Il2CppObject *pIVar6;
  Events_OnLoadScene_o *value;
  Events_OnPreLoadScene_o *value_00;
  System_String_o *pSVar7;
  System_String_array *pSVar8;
  uint uVar9;
  long lVar10;
  MethodInfo *pMVar11;
  
  if (g_data_057adbe8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057adbe8 = '\x01';
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
  }
  else {
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x98);
  }
  if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar3,MethodInfo_Void_Clear);
    pSVar3 = *(System_Collections_Generic_Dictionary_object__object__o **)
              (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa0);
    if (pSVar3 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear(pSVar3,MethodInfo_Void_Clear);
      *(undefined2 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x80) = 0;
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbe9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicManager_CreateSingleton_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&"# general");
    il2cpp_runtime_helper_023445d0(&"component ");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"# internal");
    il2cpp_runtime_helper_023445d0(&"BaseLogic");
    g_data_057adbe9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar6 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8),MethodInfo_CustomLogicManager_CreateSingleton_CustomLogicManager);
  **(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8) = pIVar6;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicManager + 0xb8));
  pMVar11 = TypeInfo_CustomLogicSymbols;
  if (*(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_CustomLogicSymbols__Init(pMVar11);
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_CustomLogicTransfer__Init((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_CustomLogicAddonTransfer__Init((MethodInfo *)0x0);
  value = (Events_OnLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadScene);
  Events_OnLoadScene___ctor();
  Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
  value_00 = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = ApplicationManagers_ResourceManager__TryLoadText(pSVar7,"BaseLogic",(MethodInfo *)0x0);
  lVar10 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_String_o **)(lVar10 + 0x38) = pSVar7;
  il2cpp_runtime_helper_022b4080(lVar10 + 0x38,pSVar7);
  pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  if ((pSVar7 != (System_String_o *)0x0) &&
     (pSVar8 = System_String__Split(pSVar7,10,0,(MethodInfo *)0x0), pSVar8 != (System_String_array *)0x0)) {
    uVar4 = (uint)pSVar8->max_length;
    if (0 < (int)uVar4) {
      lVar10 = 0;
      do {
        uVar9 = (uint)lVar10;
        if (uVar4 <= uVar9) goto label_0425e6b5;
        if (pSVar8->m_Items[(int)uVar9] == (System_String_o *)0x0) goto label_0425e6b0;
        bVar5 = System_String__StartsWith(pSVar8->m_Items[(int)uVar9],"# general",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          if ((uint)pSVar8->max_length <= uVar9) goto label_0425e6b5;
          if (pSVar8->m_Items[(int)uVar9] == (System_String_o *)0x0) goto label_0425e6b0;
          bVar5 = System_String__StartsWith(pSVar8->m_Items[(int)uVar9],"# internal",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') goto label_0425e55a;
        }
        else {
label_0425e55a:
          uVar4 = (uint)pSVar8->max_length;
          if ((int)uVar9 < (int)(uVar4 - 1)) {
            if (uVar4 <= uVar9 + 1) goto label_0425e6b5;
            if (pSVar8->m_Items[lVar10 + 1] == (System_String_o *)0x0) goto label_0425e6b0;
            bVar5 = System_String__StartsWith(pSVar8->m_Items[lVar10 + 1],"component",(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              if ((uint)pSVar8->max_length <= uVar9 + 1) goto label_0425e6b5;
              if ((("component " == 0) || (pSVar8->m_Items[lVar10 + 1] == (System_String_o *)0x0)) ||
                 (pSVar7 = System_String__Substring
                                     (pSVar8->m_Items[lVar10 + 1],*(int32_t *)("component " + 0x10),
                                      (MethodInfo *)0x0), pSVar7 == (System_String_o *)0x0))
              goto label_0425e6b0;
              pSVar7 = System_String__Trim(pSVar7,(MethodInfo *)0x0);
              if ((uint)pSVar8->max_length <= uVar9) goto label_0425e6b5;
              if (pSVar8->m_Items[(int)uVar9] == (System_String_o *)0x0) goto label_0425e6b0;
              bVar5 = System_String__StartsWith(pSVar8->m_Items[(int)uVar9],"# general",(MethodInfo *)0x0);
              if ((char)bVar5 == '\0') {
                if ((uint)pSVar8->max_length <= uVar9) goto label_0425e6b5;
                if (pSVar8->m_Items[(int)uVar9] == (System_String_o *)0x0) goto label_0425e6b0;
                bVar5 = System_String__StartsWith(pSVar8->m_Items[(int)uVar9],"# internal",(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') goto label_0425e690;
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                             (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb0);
              }
              else if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                             (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa8);
              }
              else {
                __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                             (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa8);
              }
              if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0425e6b0;
              System_Collections_Generic_HashSet_object___Add(__this_00,(Il2CppObject *)pSVar7,MethodInfo_Boolean_Add);
            }
          }
        }
label_0425e690:
        uVar4 = (uint)pSVar8->max_length;
        lVar10 = lVar10 + 1;
      } while ((int)lVar10 < (int)uVar4);
    }
    return;
  }
label_0425e6b0:
  il2cpp_runtime_helper_022b2c90();
label_0425e6b5:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adc0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    g_data_057adc0e = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = TypeInfo_CustomLogicSymbols[2].virtualMethodPointer[0x30];
    pMVar11 = TypeInfo_CustomLogicSymbols;
  }
  else {
    cVar1 = TypeInfo_CustomLogicSymbols[2].virtualMethodPointer[0x30];
    pMVar11 = TypeInfo_CustomLogicSymbols;
  }
  if (cVar1 == (code)0x0) {
    TypeInfo_CustomLogicSymbols = pMVar11;
    if (*(int *)((long)&pMVar11[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    CustomLogic_CustomLogicSymbols__ClearSymbols(pMVar11);
    CustomLogic_CustomLogicSymbols__AddSymbols(pMVar11);
    CustomLogic_CustomLogicSymbols__CategorizeSymbols(pMVar11);
    TypeInfo_CustomLogicSymbols[2].virtualMethodPointer[0x30] = (code)0x1;
    return;
  }
  TypeInfo_CustomLogicSymbols = pMVar11;
  return;
}


// CustomLogic.CustomLogicManager$$Init
// il2cpp: void CustomLogic_CustomLogicManager__Init (const MethodInfo* method);
// 0x425e1f0

void CustomLogic_CustomLogicManager__Init(MethodInfo *method)

{
  code cVar1;
  int iVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  uint uVar3;
  bool_conflict bVar4;
  Il2CppObject *pIVar5;
  Events_OnLoadScene_o *value;
  Events_OnPreLoadScene_o *value_00;
  System_String_o *pSVar6;
  System_String_array *pSVar7;
  uint uVar8;
  long lVar9;
  MethodInfo *pMVar10;
  
  if (g_data_057adbe9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicManager_CreateSingleton_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&"# general");
    il2cpp_runtime_helper_023445d0(&"component ");
    il2cpp_runtime_helper_023445d0(&"component");
    il2cpp_runtime_helper_023445d0(&"# internal");
    il2cpp_runtime_helper_023445d0(&"BaseLogic");
    g_data_057adbe9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar5 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8),MethodInfo_CustomLogicManager_CreateSingleton_CustomLogicManager);
  **(undefined8 **)(TypeInfo_CustomLogicManager + 0xb8) = pIVar5;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicManager + 0xb8));
  pMVar10 = TypeInfo_CustomLogicSymbols;
  if (*(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_CustomLogicSymbols__Init(pMVar10);
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_CustomLogicTransfer__Init((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Map_CustomLogicAddonTransfer__Init((MethodInfo *)0x0);
  value = (Events_OnLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnLoadScene);
  Events_OnLoadScene___ctor();
  Events_EventManager__add_OnLoadScene(value,(MethodInfo *)0x0);
  value_00 = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
  Events_OnPreLoadScene___ctor();
  Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_ResourcePaths + 0xb8) + 0x28);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = ApplicationManagers_ResourceManager__TryLoadText(pSVar6,"BaseLogic",(MethodInfo *)0x0);
  lVar9 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_String_o **)(lVar9 + 0x38) = pSVar6;
  il2cpp_runtime_helper_022b4080(lVar9 + 0x38,pSVar6);
  pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  if ((pSVar6 != (System_String_o *)0x0) &&
     (pSVar7 = System_String__Split(pSVar6,10,0,(MethodInfo *)0x0), pSVar7 != (System_String_array *)0x0)) {
    uVar3 = (uint)pSVar7->max_length;
    if (0 < (int)uVar3) {
      lVar9 = 0;
      do {
        uVar8 = (uint)lVar9;
        if (uVar3 <= uVar8) goto label_0425e6b5;
        if (pSVar7->m_Items[(int)uVar8] == (System_String_o *)0x0) goto label_0425e6b0;
        bVar4 = System_String__StartsWith(pSVar7->m_Items[(int)uVar8],"# general",(MethodInfo *)0x0);
        if ((char)bVar4 == '\0') {
          if ((uint)pSVar7->max_length <= uVar8) goto label_0425e6b5;
          if (pSVar7->m_Items[(int)uVar8] == (System_String_o *)0x0) goto label_0425e6b0;
          bVar4 = System_String__StartsWith(pSVar7->m_Items[(int)uVar8],"# internal",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') goto label_0425e55a;
        }
        else {
label_0425e55a:
          uVar3 = (uint)pSVar7->max_length;
          if ((int)uVar8 < (int)(uVar3 - 1)) {
            if (uVar3 <= uVar8 + 1) goto label_0425e6b5;
            if (pSVar7->m_Items[lVar9 + 1] == (System_String_o *)0x0) goto label_0425e6b0;
            bVar4 = System_String__StartsWith(pSVar7->m_Items[lVar9 + 1],"component",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if ((uint)pSVar7->max_length <= uVar8 + 1) goto label_0425e6b5;
              if ((("component " == 0) || (pSVar7->m_Items[lVar9 + 1] == (System_String_o *)0x0)) ||
                 (pSVar6 = System_String__Substring
                                     (pSVar7->m_Items[lVar9 + 1],*(int32_t *)("component " + 0x10),
                                      (MethodInfo *)0x0), pSVar6 == (System_String_o *)0x0))
              goto label_0425e6b0;
              pSVar6 = System_String__Trim(pSVar6,(MethodInfo *)0x0);
              if ((uint)pSVar7->max_length <= uVar8) goto label_0425e6b5;
              if (pSVar7->m_Items[(int)uVar8] == (System_String_o *)0x0) goto label_0425e6b0;
              bVar4 = System_String__StartsWith(pSVar7->m_Items[(int)uVar8],"# general",(MethodInfo *)0x0);
              if ((char)bVar4 == '\0') {
                if ((uint)pSVar7->max_length <= uVar8) goto label_0425e6b5;
                if (pSVar7->m_Items[(int)uVar8] == (System_String_o *)0x0) goto label_0425e6b0;
                bVar4 = System_String__StartsWith(pSVar7->m_Items[(int)uVar8],"# internal",(MethodInfo *)0x0);
                if ((char)bVar4 == '\0') goto label_0425e690;
                if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                __this = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb0);
              }
              else if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
                __this = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa8);
              }
              else {
                __this = *(System_Collections_Generic_HashSet_object__o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xa8);
              }
              if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_0425e6b0;
              System_Collections_Generic_HashSet_object___Add(__this,(Il2CppObject *)pSVar6,MethodInfo_Boolean_Add);
            }
          }
        }
label_0425e690:
        uVar3 = (uint)pSVar7->max_length;
        lVar9 = lVar9 + 1;
      } while ((int)lVar9 < (int)uVar3);
    }
    return;
  }
label_0425e6b0:
  il2cpp_runtime_helper_022b2c90();
label_0425e6b5:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057adc0e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSymbols);
    g_data_057adc0e = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_CustomLogicSymbols[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar1 = TypeInfo_CustomLogicSymbols[2].virtualMethodPointer[0x30];
    pMVar10 = TypeInfo_CustomLogicSymbols;
  }
  else {
    cVar1 = TypeInfo_CustomLogicSymbols[2].virtualMethodPointer[0x30];
    pMVar10 = TypeInfo_CustomLogicSymbols;
  }
  if (cVar1 != (code)0x0) {
    TypeInfo_CustomLogicSymbols = pMVar10;
    return;
  }
  TypeInfo_CustomLogicSymbols = pMVar10;
  if (*(int *)((long)&pMVar10[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_CustomLogicSymbols__ClearSymbols(pMVar10);
  CustomLogic_CustomLogicSymbols__AddSymbols(pMVar10);
  CustomLogic_CustomLogicSymbols__CategorizeSymbols(pMVar10);
  TypeInfo_CustomLogicSymbols[2].virtualMethodPointer[0x30] = (code)0x1;
  return;
}


// CustomLogic.CustomLogicManager$$OnPreLoadScene
// il2cpp: void CustomLogic_CustomLogicManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x425e760

void CustomLogic_CustomLogicManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  byte bVar1;
  float fVar2;
  undefined4 uVar3;
  int iVar4;
  UI_StylebarHandler_c *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_HashSet_object__o *__this_01;
  UI_StylebarPopup_o *__this_02;
  System_String_o *pSVar5;
  Photon_Pun_PhotonView_o *__this_03;
  Il2CppObject *pIVar6;
  char cVar7;
  bool_conflict bVar8;
  UI_InGameMenu_o *pUVar9;
  System_Object_array *parameters;
  long lVar10;
  System_String_array *pSVar11;
  undefined8 uVar12;
  UI_StylebarHandler_o *pUVar13;
  undefined8 *puVar14;
  int iVar15;
  ulong uVar16;
  Photon_Pun_PhotonMessageInfo_o PStack_68;
  undefined8 *puStack_50;
  
  if (g_data_057adbea == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUIBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057adbea = '\x01';
    if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) != 0) goto label_0425e780;
label_0425e7de:
    il2cpp_runtime_helper_02337ed0();
    __this = ((TypeInfo_CustomLogicManager->fields).StylebarHandler)->klass;
  }
  else {
    if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) goto label_0425e7de;
label_0425e780:
    __this = ((TypeInfo_CustomLogicManager->fields).StylebarHandler)->klass;
  }
  if (__this != (UI_StylebarHandler_c *)0x0) {
    UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
    pUVar13 = (TypeInfo_CustomLogicManager->fields).StylebarHandler;
    *(undefined1 *)&pUVar13[1].fields.PointThresholds = 1;
    pUVar13->monitor = (void *)0x0;
    il2cpp_runtime_helper_022b4080(&pUVar13->monitor);
    pUVar13 = (TypeInfo_CustomLogicManager->fields).StylebarHandler;
    (pUVar13->fields).Multipliers = (System_Single_array *)0x0;
    il2cpp_runtime_helper_022b4080(&(pUVar13->fields).Multipliers);
    pUVar13 = (TypeInfo_CustomLogicManager->fields).StylebarHandler;
    *(undefined2 *)&(pUVar13->fields).m_CachedPtr = 0;
    __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)
                (pUVar13->fields).m_CancellationTokenSource;
    if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear(__this_00,MethodInfo_Void_Clear);
      pUVar9 = TypeInfo_CustomLogicManager;
      pUVar13 = (TypeInfo_CustomLogicManager->fields).StylebarHandler;
      *(undefined1 *)&(pUVar13->fields)._styleBarPopup = 0;
      *(undefined2 *)&(pUVar13->fields).PointThresholds = 0;
      *(undefined1 *)&(pUVar13->fields).PointDecays = 0;
      if (g_data_057a65d5 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
        g_data_057a65d5 = '\x01';
        pUVar13 = (TypeInfo_CustomLogicManager->fields).StylebarHandler;
        pUVar9 = TypeInfo_CustomLogicManager;
      }
      lVar10 = TypeInfo_Vector3;
      fVar2 = *(float *)(*(undefined8 **)(TypeInfo_Vector3 + 0xb8) + 1);
      *(undefined8 *)((long)&(pUVar13->fields).PointDecays + 4) = **(undefined8 **)(TypeInfo_Vector3 + 0xb8);
      (pUVar13->fields)._points = fVar2;
      puVar14 = *(undefined8 **)(lVar10 + 0xb8);
      uVar12 = *puVar14;
      fVar2 = *(float *)(puVar14 + 1);
      pUVar13 = (pUVar9->fields).StylebarHandler;
      (pUVar13->fields)._rank = (int)uVar12;
      (pUVar13->fields)._lostRank = (int)((ulong)uVar12 >> 0x20);
      (pUVar13->fields)._chainTime = fVar2;
      puVar14 = *(undefined8 **)(lVar10 + 0xb8);
      uVar3 = *(undefined4 *)(puVar14 + 1);
      pUVar13 = (pUVar9->fields).StylebarHandler;
      *(undefined8 *)&(pUVar13->fields)._chainKillRank = *puVar14;
      *(undefined4 *)((long)&pUVar13[1].klass + 4) = uVar3;
      (pUVar9->fields).StylebarHandler[1].monitor = (void *)0x0;
      pUVar13 = (pUVar9->fields).StylebarHandler;
      *(undefined4 *)((long)&(pUVar13->fields).PointThresholds + 4) = 0;
      __this_01 = (System_Collections_Generic_HashSet_object__o *)pUVar13[1].fields.m_CancellationTokenSource;
      if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Clear(__this_01,MethodInfo_Void_Clear);
        __this_02 = (TypeInfo_CustomLogicManager->fields).StylebarHandler[1].fields._styleBarPopup;
        if (__this_02 != (UI_StylebarPopup_o *)0x0) {
          System_Collections_Generic_HashSet_object___Clear
                    ((System_Collections_Generic_HashSet_object__o *)__this_02,MethodInfo_Void_Clear);
          if (*(int *)(TypeInfo_CustomLogicUIBuiltin + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicUIBuiltin__ClearLabels((MethodInfo *)0x0);
          CustomLogic_CustomLogicCommandsBuiltin__ClearCommands((MethodInfo *)0x0);
          *(undefined2 *)&(TypeInfo_CustomLogicManager->fields).StylebarHandler[1].fields.m_CachedPtr = 0;
          return;
        }
      }
    }
  }
  uVar16 = 0;
  il2cpp_runtime_helper_022b2c90();
  puVar14 = (undefined8 *)(uVar16 & 0xffffffff);
  if (g_data_057adbeb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057adbeb = '\x01';
  }
  if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar9 = TypeInfo_CustomLogicManager;
  pUVar13 = (TypeInfo_CustomLogicManager->fields).StylebarHandler;
  cVar7 = (char)puVar14;
  if (((uint)uVar16 & 0xff) == (uint)*(byte *)&(pUVar13->fields).PointThresholds) {
    return;
  }
  if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    *(char *)&(((TypeInfo_CustomLogicManager->fields).StylebarHandler)->fields).PointThresholds = cVar7;
    if (cVar7 != '\0') goto label_0425ea33;
label_0425eab1:
    lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x20), lVar10 == 0)) goto label_0425eb4a;
    if (*(int *)(lVar10 + 0x14) != 0) {
      return;
    }
    puVar14 = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar9 == (UI_InGameMenu_o *)0x0) goto label_0425eb4a;
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (pUVar9->klass->_2).naturalAligment) &&
       ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      bVar8 = 1;
label_0425eb3c:
      UI_InGameMenu__SetCharacterMenu(pUVar9,bVar8,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    *(char *)&(pUVar13->fields).PointThresholds = cVar7;
    if (cVar7 == '\0') goto label_0425eab1;
label_0425ea33:
    puVar14 = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar9 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar9 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar9->klass->_2).naturalAligment) &&
         ((pUVar9->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
        bVar8 = 0;
        goto label_0425eb3c;
      }
      goto label_0425eb4f;
    }
label_0425eb4a:
    il2cpp_runtime_helper_022b2c90();
  }
label_0425eb4f:
  iVar15 = (int)pUVar9;
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adbec == '\0') {
    puStack_50 = (undefined8 *)0x425eb9c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbec = '\x01';
    iVar4 = *(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4);
  }
  else {
    iVar4 = *(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4);
  }
  if (iVar4 == 0) {
    puStack_50 = (undefined8 *)0x425ebbb;
    il2cpp_runtime_helper_02337ed0();
  }
  if (iVar15 != 2) {
    *(undefined2 *)&(((TypeInfo_CustomLogicManager->fields).StylebarHandler)->fields).m_CachedPtr = 0x101;
    return;
  }
  puStack_50 = puVar14;
  if (g_data_057adbed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinLogicRPC");
    g_data_057adbed = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_0425ec0f;
label_0425ee32:
    il2cpp_runtime_helper_02337ed0();
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_0425ee32;
label_0425ec0f:
    bVar8 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar7 = (char)bVar8;
  }
  if (cVar7 == '\0') {
    return;
  }
  if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)&(((TypeInfo_CustomLogicManager->fields).StylebarHandler)->fields)._styleBarPopup = 1;
  lVar10 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar10 == 0) || (lVar10 = *(long *)(lVar10 + 0x38), lVar10 == 0)) || (*(long *)(lVar10 + 0x30) == 0))
  {
label_0425ef8e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar5 = *(System_String_o **)(*(long *)(lVar10 + 0x30) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar8 = Map_BuiltinLevels__IsLogicBuiltin(pSVar5,(MethodInfo *)0x0);
    if ((char)bVar8 == '\0') {
      if (*(long *)(lVar10 + 0x30) != 0) {
        pSVar5 = *(System_String_o **)(*(long *)(lVar10 + 0x30) + 0x18);
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = (System_String_array *)Map_BuiltinLevels__LoadLogic(pSVar5,(MethodInfo *)0x0);
        if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar13 = (TypeInfo_CustomLogicManager->fields).StylebarHandler;
        (pUVar13->fields).Letters = pSVar11;
        il2cpp_runtime_helper_022b4080(&(pUVar13->fields).Letters);
        pSVar11 = (((TypeInfo_CustomLogicManager->fields).StylebarHandler)->fields).Letters;
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar11 = (System_String_array *)Utility_Util__CreateMD5((System_String_o *)pSVar11,(MethodInfo *)0x0)
        ;
        pUVar13 = (TypeInfo_CustomLogicManager->fields).StylebarHandler;
        (pUVar13->fields).ColorTags = pSVar11;
        il2cpp_runtime_helper_022b4080(&(pUVar13->fields).ColorTags);
        if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_CustomLogicTransfer__Start((MethodInfo *)0x0);
        Utility_Util__CreateLocalPhotonInfo(&PStack_68,(MethodInfo *)0x0);
        if (g_data_057adbef == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adbef = '\x01';
        }
        if ((PStack_68.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
           (bVar8 = Photon_Realtime_Player__get_IsMasterClient(PStack_68.fields.Sender,(MethodInfo *)0x0),
           (char)bVar8 != '\0')) {
          pUVar9 = TypeInfo_CustomLogicManager;
          if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)pUVar9);
        }
        iVar15 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
joined_r0x0425ef74:
        if (iVar15 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_CustomLogicAddonTransfer__Start((MethodInfo *)0x0);
        return;
      }
      goto label_0425ef8e;
    }
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    **(undefined1 **)(TypeInfo_CustomLogicTransfer + 0xb8) = 1;
    __this_03 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar10 + 0x30) == 0) || (parameters == (System_Object_array *)0x0)) goto label_0425ef8e;
    pIVar6 = *(Il2CppObject **)(*(long *)(lVar10 + 0x30) + 0x18);
    if ((pIVar6 != (Il2CppObject *)0x0) && (lVar10 = il2cpp_runtime_helper_023051f0(pIVar6), lVar10 == 0))
    goto label_0425ef98;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar6;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (__this_03 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_03,"LoadBuiltinLogicRPC",0,parameters,(MethodInfo *)0x0);
        iVar15 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
        goto joined_r0x0425ef74;
      }
      goto label_0425ef8e;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0425ef98:
  uVar12 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar12);
  if (g_data_057adbef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbef = '\x01';
  }
  if ((PStack_68.fields.photonView != (Photon_Pun_PhotonView_o *)0x0) &&
     (bVar8 = Photon_Realtime_Player__get_IsMasterClient
                        ((Photon_Realtime_Player_o *)PStack_68.fields.photonView,(MethodInfo *)0x0),
     (char)bVar8 == '\0')) {
    return;
  }
  if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
    pUVar9 = TypeInfo_CustomLogicManager;
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)pUVar9);
    return;
  }
  CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)TypeInfo_CustomLogicManager);
  return;
}


// CustomLogic.CustomLogicManager$$ToggleCutscene
// il2cpp: void CustomLogic_CustomLogicManager__ToggleCutscene (bool cutscene, const MethodInfo* method);
// 0x425e9a0

void CustomLogic_CustomLogicManager__ToggleCutscene(bool_conflict cutscene,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  UI_StylebarHandler_o *pUVar3;
  System_String_o *pSVar4;
  Photon_Pun_PhotonView_o *__this;
  Il2CppObject *pIVar5;
  char cVar6;
  bool_conflict bVar7;
  System_Object_array *parameters;
  long lVar8;
  System_String_array *pSVar9;
  undefined8 uVar10;
  undefined8 *puVar11;
  int iVar12;
  UI_InGameMenu_o *pUVar13;
  Photon_Pun_PhotonMessageInfo_o PStack_50;
  undefined8 *puStack_38;
  
  puVar11 = (undefined8 *)(ulong)(uint)cutscene;
  if (g_data_057adbeb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameMenu);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    g_data_057adbeb = '\x01';
  }
  if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar13 = TypeInfo_CustomLogicManager;
  pUVar3 = (TypeInfo_CustomLogicManager->fields).StylebarHandler;
  cVar6 = (char)cutscene;
  if ((cutscene & 0xffU) == (uint)*(byte *)&(pUVar3->fields).PointThresholds) {
    return;
  }
  if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    *(char *)&(((TypeInfo_CustomLogicManager->fields).StylebarHandler)->fields).PointThresholds = cVar6;
    if (cVar6 != '\0') goto label_0425ea33;
label_0425eab1:
    lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x70);
    if ((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x20), lVar8 == 0)) goto label_0425eb4a;
    if (*(int *)(lVar8 + 0x14) != 0) {
      return;
    }
    puVar11 = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar13 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar13 == (UI_InGameMenu_o *)0x0) goto label_0425eb4a;
    bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
    if ((bVar1 <= (pUVar13->klass->_2).naturalAligment) &&
       ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
      bVar7 = 1;
label_0425eb3c:
      UI_InGameMenu__SetCharacterMenu(pUVar13,bVar7,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    *(char *)&(pUVar3->fields).PointThresholds = cVar6;
    if (cVar6 == '\0') goto label_0425eab1;
label_0425ea33:
    puVar11 = &TypeInfo_UIManager;
    if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar13 = *(UI_InGameMenu_o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x28);
    if (pUVar13 != (UI_InGameMenu_o *)0x0) {
      bVar1 = (TypeInfo_InGameMenu->_2).naturalAligment;
      if ((bVar1 <= (pUVar13->klass->_2).naturalAligment) &&
         ((pUVar13->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_InGameMenu)) {
        bVar7 = 0;
        goto label_0425eb3c;
      }
      goto label_0425eb4f;
    }
label_0425eb4a:
    il2cpp_runtime_helper_022b2c90();
  }
label_0425eb4f:
  iVar12 = (int)pUVar13;
  il2cpp_runtime_helper_022b2fd0();
  if (g_data_057adbec == '\0') {
    puStack_38 = (undefined8 *)0x425eb9c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbec = '\x01';
    iVar2 = *(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4);
  }
  else {
    iVar2 = *(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4);
  }
  if (iVar2 == 0) {
    puStack_38 = (undefined8 *)0x425ebbb;
    il2cpp_runtime_helper_02337ed0();
  }
  if (iVar12 != 2) {
    *(undefined2 *)&(((TypeInfo_CustomLogicManager->fields).StylebarHandler)->fields).m_CachedPtr = 0x101;
    return;
  }
  puStack_38 = puVar11;
  if (g_data_057adbed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinLogicRPC");
    g_data_057adbed = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_0425ec0f;
label_0425ee32:
    il2cpp_runtime_helper_02337ed0();
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_0425ee32;
label_0425ec0f:
    bVar7 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar6 = (char)bVar7;
  }
  if (cVar6 == '\0') {
    return;
  }
  if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)&(((TypeInfo_CustomLogicManager->fields).StylebarHandler)->fields)._styleBarPopup = 1;
  lVar8 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar8 == 0) || (lVar8 = *(long *)(lVar8 + 0x38), lVar8 == 0)) || (*(long *)(lVar8 + 0x30) == 0)) {
label_0425ef8e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar4 = *(System_String_o **)(*(long *)(lVar8 + 0x30) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar7 = Map_BuiltinLevels__IsLogicBuiltin(pSVar4,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      if (*(long *)(lVar8 + 0x30) != 0) {
        pSVar4 = *(System_String_o **)(*(long *)(lVar8 + 0x30) + 0x18);
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_String_array *)Map_BuiltinLevels__LoadLogic(pSVar4,(MethodInfo *)0x0);
        if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pUVar3 = (TypeInfo_CustomLogicManager->fields).StylebarHandler;
        (pUVar3->fields).Letters = pSVar9;
        il2cpp_runtime_helper_022b4080(&(pUVar3->fields).Letters);
        pSVar9 = (((TypeInfo_CustomLogicManager->fields).StylebarHandler)->fields).Letters;
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = (System_String_array *)Utility_Util__CreateMD5((System_String_o *)pSVar9,(MethodInfo *)0x0);
        pUVar3 = (TypeInfo_CustomLogicManager->fields).StylebarHandler;
        (pUVar3->fields).ColorTags = pSVar9;
        il2cpp_runtime_helper_022b4080(&(pUVar3->fields).ColorTags);
        if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_CustomLogicTransfer__Start((MethodInfo *)0x0);
        Utility_Util__CreateLocalPhotonInfo(&PStack_50,(MethodInfo *)0x0);
        if (g_data_057adbef == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adbef = '\x01';
        }
        if ((PStack_50.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
           (bVar7 = Photon_Realtime_Player__get_IsMasterClient(PStack_50.fields.Sender,(MethodInfo *)0x0),
           (char)bVar7 != '\0')) {
          pUVar13 = TypeInfo_CustomLogicManager;
          if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)pUVar13);
        }
        iVar12 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
joined_r0x0425ef74:
        if (iVar12 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_CustomLogicAddonTransfer__Start((MethodInfo *)0x0);
        return;
      }
      goto label_0425ef8e;
    }
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    **(undefined1 **)(TypeInfo_CustomLogicTransfer + 0xb8) = 1;
    __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar8 + 0x30) == 0) || (parameters == (System_Object_array *)0x0)) goto label_0425ef8e;
    pIVar5 = *(Il2CppObject **)(*(long *)(lVar8 + 0x30) + 0x18);
    if ((pIVar5 != (Il2CppObject *)0x0) && (lVar8 = il2cpp_runtime_helper_023051f0(pIVar5), lVar8 == 0))
    goto label_0425ef98;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar5;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinLogicRPC",0,parameters,(MethodInfo *)0x0);
        iVar12 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
        goto joined_r0x0425ef74;
      }
      goto label_0425ef8e;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0425ef98:
  uVar10 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar10);
  if (g_data_057adbef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbef = '\x01';
  }
  if ((PStack_50.fields.photonView != (Photon_Pun_PhotonView_o *)0x0) &&
     (bVar7 = Photon_Realtime_Player__get_IsMasterClient
                        ((Photon_Realtime_Player_o *)PStack_50.fields.photonView,(MethodInfo *)0x0),
     (char)bVar7 == '\0')) {
    return;
  }
  if (*(int *)((long)&(TypeInfo_CustomLogicManager->fields).TopLeftHud + 4) == 0) {
    pUVar13 = TypeInfo_CustomLogicManager;
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)pUVar13);
    return;
  }
  CustomLogic_CustomLogicManager__FinishLoadLogic((MethodInfo *)TypeInfo_CustomLogicManager);
  return;
}


// CustomLogic.CustomLogicManager$$OnLoadScene
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x425eb60

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
  MethodInfo *pMVar9;
  Photon_Pun_PhotonMessageInfo_o PStack_38;
  undefined8 uStack_20;
  
  if (g_data_057adbec == '\0') {
    uStack_20 = 0x425eb9c;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbec = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    uStack_20 = 0x425ebbb;
    il2cpp_runtime_helper_02337ed0();
  }
  if (sceneName != 2) {
    *(undefined2 *)(TypeInfo_CustomLogicManager[2].virtualMethodPointer + 0x10) = 0x101;
    return;
  }
  if (g_data_057adbed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinLogicRPC");
    g_data_057adbed = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_0425ec0f;
label_0425ee32:
    il2cpp_runtime_helper_02337ed0();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_0425ee32;
label_0425ec0f:
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  TypeInfo_CustomLogicManager[2].virtualMethodPointer[0x20] = (code)0x1;
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x38), lVar6 == 0)) || (*(long *)(lVar6 + 0x30) == 0)) {
label_0425ef8e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar7 = *(System_String_o **)(*(long *)(lVar6 + 0x30) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = Map_BuiltinLevels__IsLogicBuiltin(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(long *)(lVar6 + 0x30) != 0) {
        pSVar7 = *(System_String_o **)(*(long *)(lVar6 + 0x30) + 0x18);
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = Map_BuiltinLevels__LoadLogic(pSVar7,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar3 = TypeInfo_CustomLogicManager[2].virtualMethodPointer;
        *(System_String_o **)(pIVar3 + 0x28) = pSVar7;
        il2cpp_runtime_helper_022b4080(pIVar3 + 0x28);
        pSVar7 = *(System_String_o **)(TypeInfo_CustomLogicManager[2].virtualMethodPointer + 0x28);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = Utility_Util__CreateMD5(pSVar7,(MethodInfo *)0x0);
        pIVar3 = TypeInfo_CustomLogicManager[2].virtualMethodPointer;
        *(System_String_o **)(pIVar3 + 0x30) = pSVar7;
        il2cpp_runtime_helper_022b4080(pIVar3 + 0x30);
        if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_CustomLogicTransfer__Start((MethodInfo *)0x0);
        Utility_Util__CreateLocalPhotonInfo(&PStack_38,(MethodInfo *)0x0);
        if (g_data_057adbef == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adbef = '\x01';
        }
        if ((PStack_38.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
           (bVar5 = Photon_Realtime_Player__get_IsMasterClient(PStack_38.fields.Sender,(MethodInfo *)0x0),
           (char)bVar5 != '\0')) {
          pMVar9 = TypeInfo_CustomLogicManager;
          if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicManager__FinishLoadLogic(pMVar9);
        }
        iVar1 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
joined_r0x0425ef74:
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_CustomLogicAddonTransfer__Start((MethodInfo *)0x0);
        return;
      }
      goto label_0425ef8e;
    }
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    **(undefined1 **)(TypeInfo_CustomLogicTransfer + 0xb8) = 1;
    __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar6 + 0x30) == 0) || (parameters == (System_Object_array *)0x0)) goto label_0425ef8e;
    pIVar2 = *(Il2CppObject **)(*(long *)(lVar6 + 0x30) + 0x18);
    if ((pIVar2 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar2), lVar6 == 0))
    goto label_0425ef98;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar2;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinLogicRPC",0,parameters,(MethodInfo *)0x0);
        iVar1 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
        goto joined_r0x0425ef74;
      }
      goto label_0425ef8e;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0425ef98:
  uVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar8);
  if (g_data_057adbef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbef = '\x01';
  }
  if ((PStack_38.fields.photonView != (Photon_Pun_PhotonView_o *)0x0) &&
     (bVar5 = Photon_Realtime_Player__get_IsMasterClient
                        ((Photon_Realtime_Player_o *)PStack_38.fields.photonView,(MethodInfo *)0x0),
     (char)bVar5 == '\0')) {
    return;
  }
  if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
    pMVar9 = TypeInfo_CustomLogicManager;
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_CustomLogicManager__FinishLoadLogic(pMVar9);
    return;
  }
  CustomLogic_CustomLogicManager__FinishLoadLogic(TypeInfo_CustomLogicManager);
  return;
}


// CustomLogic.CustomLogicManager$$StartInGame
// il2cpp: void CustomLogic_CustomLogicManager__StartInGame (const MethodInfo* method);
// 0x425ebe0

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
  MethodInfo *pMVar9;
  Photon_Pun_PhotonMessageInfo_o PStack_38;
  
  if (g_data_057adbed == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinLogicRPC");
    g_data_057adbed = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_0425ec0f;
label_0425ee32:
    il2cpp_runtime_helper_02337ed0();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_0425ee32;
label_0425ec0f:
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    cVar4 = (char)bVar5;
  }
  if (cVar4 == '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  TypeInfo_CustomLogicManager[2].virtualMethodPointer[0x20] = (code)0x1;
  lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x38), lVar6 == 0)) || (*(long *)(lVar6 + 0x30) == 0)) {
label_0425ef8e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    pSVar7 = *(System_String_o **)(*(long *)(lVar6 + 0x30) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = Map_BuiltinLevels__IsLogicBuiltin(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(long *)(lVar6 + 0x30) != 0) {
        pSVar7 = *(System_String_o **)(*(long *)(lVar6 + 0x30) + 0x18);
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = Map_BuiltinLevels__LoadLogic(pSVar7,(MethodInfo *)0x0);
        if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pIVar3 = TypeInfo_CustomLogicManager[2].virtualMethodPointer;
        *(System_String_o **)(pIVar3 + 0x28) = pSVar7;
        il2cpp_runtime_helper_022b4080(pIVar3 + 0x28);
        pSVar7 = *(System_String_o **)(TypeInfo_CustomLogicManager[2].virtualMethodPointer + 0x28);
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = Utility_Util__CreateMD5(pSVar7,(MethodInfo *)0x0);
        pIVar3 = TypeInfo_CustomLogicManager[2].virtualMethodPointer;
        *(System_String_o **)(pIVar3 + 0x30) = pSVar7;
        il2cpp_runtime_helper_022b4080(pIVar3 + 0x30);
        if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_CustomLogicTransfer__Start((MethodInfo *)0x0);
        Utility_Util__CreateLocalPhotonInfo(&PStack_38,(MethodInfo *)0x0);
        if (g_data_057adbef == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
          g_data_057adbef = '\x01';
        }
        if ((PStack_38.fields.Sender == (Photon_Realtime_Player_o *)0x0) ||
           (bVar5 = Photon_Realtime_Player__get_IsMasterClient(PStack_38.fields.Sender,(MethodInfo *)0x0),
           (char)bVar5 != '\0')) {
          pMVar9 = TypeInfo_CustomLogicManager;
          if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          CustomLogic_CustomLogicManager__FinishLoadLogic(pMVar9);
        }
        iVar1 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
joined_r0x0425ef74:
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        Map_CustomLogicAddonTransfer__Start((MethodInfo *)0x0);
        return;
      }
      goto label_0425ef8e;
    }
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    **(undefined1 **)(TypeInfo_CustomLogicTransfer + 0xb8) = 1;
    __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    parameters = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar6 + 0x30) == 0) || (parameters == (System_Object_array *)0x0)) goto label_0425ef8e;
    pIVar2 = *(Il2CppObject **)(*(long *)(lVar6 + 0x30) + 0x18);
    if ((pIVar2 != (Il2CppObject *)0x0) && (lVar6 = il2cpp_runtime_helper_023051f0(pIVar2), lVar6 == 0))
    goto label_0425ef98;
    if ((int)parameters->max_length != 0) {
      parameters->m_Items[0] = pIVar2;
      il2cpp_runtime_helper_022b4080(parameters->m_Items);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this,"LoadBuiltinLogicRPC",0,parameters,(MethodInfo *)0x0);
        iVar1 = *(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4);
        goto joined_r0x0425ef74;
      }
      goto label_0425ef8e;
    }
  }
  il2cpp_runtime_helper_022b2ca0();
label_0425ef98:
  uVar8 = il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10(uVar8);
  if (g_data_057adbef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbef = '\x01';
  }
  if ((PStack_38.fields.photonView != (Photon_Pun_PhotonView_o *)0x0) &&
     (bVar5 = Photon_Realtime_Player__get_IsMasterClient
                        ((Photon_Realtime_Player_o *)PStack_38.fields.photonView,(MethodInfo *)0x0),
     (char)bVar5 == '\0')) {
    return;
  }
  if (*(int *)((long)&TypeInfo_CustomLogicManager[2].parameters + 4) == 0) {
    pMVar9 = TypeInfo_CustomLogicManager;
    il2cpp_runtime_helper_02337ed0();
    CustomLogic_CustomLogicManager__FinishLoadLogic(pMVar9);
    return;
  }
  CustomLogic_CustomLogicManager__FinishLoadLogic(TypeInfo_CustomLogicManager);
  return;
}


// CustomLogic.CustomLogicManager$$OnLoadBuiltinLogicRPC
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC (System_String_o* name, Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x425f010

void CustomLogic_CustomLogicManager__OnLoadBuiltinLogicRPC
               (System_String_o *name,Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  long lVar1;
  undefined8 uVar2;
  bool_conflict bVar3;
  System_String_o *pSVar4;
  Photon_Realtime_Player_o *player;
  MethodInfo *method_00;
  
  if (g_data_057adbee == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    g_data_057adbee = '\x01';
  }
  if (info.fields.Sender != (Photon_Realtime_Player_o *)0x0) {
    bVar3 = Photon_Realtime_Player__get_IsMasterClient(info.fields.Sender,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = Map_BuiltinLevels__LoadLogic(name,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      *(System_String_o **)(lVar1 + 0x28) = pSVar4;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x28);
      pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = Utility_Util__CreateMD5(pSVar4,(MethodInfo *)0x0);
      lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
      *(System_String_o **)(lVar1 + 0x30) = pSVar4;
      il2cpp_runtime_helper_022b4080(lVar1 + 0x30,pSVar4);
      uVar2 = **(undefined8 **)(g_data_057b9c00 + 0xb8);
      if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar1 = *(long *)(TypeInfo_CustomLogicTransfer + 0xb8);
      *(undefined8 *)(lVar1 + 8) = uVar2;
      method_00 = (MethodInfo *)(lVar1 + 8);
      il2cpp_runtime_helper_022b4080(method_00,uVar2);
      CustomLogic_CustomLogicManager__FinishLoadLogic(method_00);
      return;
    }
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057adbf0 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x30);
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  PhotonExtensions__SetCustomProperty
            (player,pSVar4,*(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 8),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x10) = 1;
  return;
}


// CustomLogic.CustomLogicManager$$OnLoadCachedLogicRPC
// il2cpp: void CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC (Photon_Pun_PhotonMessageInfo_o info, const MethodInfo* method);
// 0x425efb0

void CustomLogic_CustomLogicManager__OnLoadCachedLogicRPC
               (Photon_Pun_PhotonMessageInfo_o info,MethodInfo *method)

{
  bool_conflict bVar1;
  MethodInfo *method_00;
  
  if (g_data_057adbef == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbef = '\x01';
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
  il2cpp_runtime_helper_02337ed0();
  CustomLogic_CustomLogicManager__FinishLoadLogic(method_00);
  return;
}


// CustomLogic.CustomLogicManager$$FinishLoadLogic
// il2cpp: void CustomLogic_CustomLogicManager__FinishLoadLogic (const MethodInfo* method);
// 0x425f180

void CustomLogic_CustomLogicManager__FinishLoadLogic(MethodInfo *method)

{
  System_String_o *key;
  Photon_Realtime_Player_o *player;
  
  if (g_data_057adbf0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057adbf0 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x30);
  if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  PhotonExtensions__SetCustomProperty
            (player,key,*(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicTransfer + 0xb8) + 8),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x10) = 1;
  return;
}


// CustomLogic.CustomLogicManager$$ApplyAddonBundle
// il2cpp: void CustomLogic_CustomLogicManager__ApplyAddonBundle (System_String_o* bundleJson, const MethodInfo* method);
// 0x425f270

void CustomLogic_CustomLogicManager__ApplyAddonBundle(System_String_o *bundleJson,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *pSVar1;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *__this_03;
  System_String_o *pSVar4;
  long *plVar5;
  Il2CppObject *value;
  Photon_Realtime_Player_o *player;
  Il2CppMethodPointer pIVar6;
  Il2CppMethodPointer pIVar7;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar8;
  InvokerMethod pIVar9;
  char *pcVar10;
  Il2CppObject *pIVar11;
  Il2CppClass *pIVar12;
  Il2CppType *pIVar13;
  Il2CppType **ppIVar14;
  System_Collections_Generic_List_T__o *pSVar15;
  _union_13 _Var16;
  _union_14 _Var17;
  Il2CppMethodPointer local_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_b8;
  InvokerMethod local_b0;
  Il2CppObject *pIStack_a8;
  Il2CppClass *local_a0;
  Il2CppType *pIStack_98;
  System_Collections_Generic_List_T__o *local_90;
  _union_13 _Stack_88;
  _union_14 local_80;
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057adbf1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    g_data_057adbf1 = '\x01';
  }
  ppIVar14 = (Il2CppType **)0x0;
  _Var16.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar12 = (Il2CppClass *)0x0;
  pIVar13 = (Il2CppType *)0x0;
  pIVar9 = (InvokerMethod)0x0;
  pcVar10 = (char *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pIVar7 = (Il2CppMethodPointer)0x0;
  _Var17.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18);
  if (pSVar1 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear(pSVar1,MethodInfo_Void_Clear);
    bVar3 = System_String__IsNullOrEmpty(bundleJson,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      __this_03 = SimpleJSONFixed_JSON__Parse(bundleJson,(MethodInfo *)0x0);
      if (__this_03 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_0425f4c7;
      SimpleJSONFixed_JSONNode__get_Keys
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this_03,(MethodInfo *)0x0);
      local_38.genericMethod = local_80.genericMethod;
      local_48 = local_90;
      _Stack_40.methodMetadataHandle = _Stack_88.methodMetadataHandle;
      local_58 = local_a0;
      pIStack_50 = pIStack_98;
      local_68 = local_b0;
      pIStack_60 = pIStack_a8;
      local_78 = local_c0;
      pSStack_70 = pSStack_b8;
      __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar7;
      __this.fields.m_Enumerator.fields._0_8_ = pIVar6;
      __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar9;
      __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar10;
      __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar12;
      __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar13;
      __this.fields.m_Enumerator.fields.m_Array.fields._list =
           (System_Collections_Generic_List_T__o *)ppIVar14;
      __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var16.rgctx_data;
      __this.fields.m_Enumerator.fields.m_Array.fields._current = _Var17.genericMethod;
      SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this,(MethodInfo *)&local_78);
      __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
      __this_00.fields.m_Enumerator.fields._0_8_ = local_c0;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_a0;
      __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
      __this_00.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
      bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        (__this_00,(MethodInfo *)&stack0xfffffffffffffef8);
      cVar2 = (char)bVar3;
      pIVar6 = local_c0;
      pSVar8 = pSStack_b8;
      pIVar9 = local_b0;
      pIVar11 = pIStack_a8;
      pIVar12 = local_a0;
      pIVar13 = pIStack_98;
      pSVar15 = local_90;
      _Var16 = _Stack_88;
      _Var17 = local_80;
      while (cVar2 != '\0') {
        __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar8;
        __this_01.fields.m_Enumerator.fields._0_8_ = pIVar6;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar9;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar11;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar12;
        __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar13;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._list = pSVar15;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var16.rgctx_data;
        __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var17.genericMethod;
        pSVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar1 = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18);
        plVar5 = (long *)(*(__this_03->klass->vtable)._7_get_Item.methodPtr)
                                   (__this_03,pSVar4,(__this_03->klass->vtable)._7_get_Item.method);
        if ((plVar5 == (long *)0x0) ||
           (value = (Il2CppObject *)(**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0)),
           pSVar1 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)) goto label_0425f4c7;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (pSVar1,(Il2CppObject *)pSVar4,value,MethodInfo_Void_set_Item);
        __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar8;
        __this_02.fields.m_Enumerator.fields._0_8_ = pIVar6;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar9;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar11;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar12;
        __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar13;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSVar15;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var16.rgctx_data;
        __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Var17.genericMethod;
        bVar3 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
        cVar2 = (char)bVar3;
      }
    }
    return;
  }
label_0425f4c7:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057adbf2 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x38);
  if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  PhotonExtensions__SetCustomProperty
            (player,pSVar4,*(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 8),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x11) = 1;
  return;
}


// CustomLogic.CustomLogicManager$$FinishLoadAddons
// il2cpp: void CustomLogic_CustomLogicManager__FinishLoadAddons (const MethodInfo* method);
// 0x425f4d0

void CustomLogic_CustomLogicManager__FinishLoadAddons(MethodInfo *method)

{
  System_String_o *key;
  Photon_Realtime_Player_o *player;
  
  if (g_data_057adbf2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    g_data_057adbf2 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  key = *(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x38);
  if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  PhotonExtensions__SetCustomProperty
            (player,key,*(Il2CppObject **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 8),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x11) = 1;
  return;
}


// CustomLogic.CustomLogicManager$$OnPlayerEnteredRoom
// il2cpp: void CustomLogic_CustomLogicManager__OnPlayerEnteredRoom (CustomLogic_CustomLogicManager_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x425f5c0

void CustomLogic_CustomLogicManager__OnPlayerEnteredRoom
               (CustomLogic_CustomLogicManager_o *__this,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  int iVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_04;
  System_String_o *pSVar3;
  char cVar4;
  bool_conflict bVar5;
  long lVar6;
  System_String_o *pSVar7;
  System_Object_array *pSVar8;
  MethodInfo *pMVar9;
  CustomLogic_CustomLogicEvaluator_o *pCVar10;
  CustomLogic_CustomLogicCompiler_o *pCVar11;
  CustomLogic_CustomLogicSourceFile_o *pCVar12;
  MethodInfo *pMVar13;
  MethodInfo *pMVar14;
  CustomLogic_CustomLogicLexer_o *pCVar15;
  CustomLogic_CustomLogicStartAst_o *pCVar16;
  CustomLogic_CustomLogicLexer_o *pCVar17;
  CustomLogic_CustomLogicParser_o *__this_05;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_06;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_07;
  System_Collections_Generic_Dictionary_object__object__o *__this_08;
  long *plVar18;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  undefined1 auVar19 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar20;
  Il2CppMethodPointer pIVar21;
  Il2CppObject *pIVar22;
  
  if (g_data_057adbf3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicAddonTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicTransfer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PhotonNetwork);
    il2cpp_runtime_helper_023445d0(&TypeInfo_PlayerProperty);
    il2cpp_runtime_helper_023445d0(&TypeInfo_RPCManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"LoadCachedAddonBundleRPC");
    il2cpp_runtime_helper_023445d0(&"LoadBuiltinLogicRPC");
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057adbf3 = '\x01';
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) != 0) goto label_0425f5ef;
label_0425f6d9:
    il2cpp_runtime_helper_02337ed0();
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar5 == '\0') goto label_0425f817;
label_0425f5fe:
    if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (**(char **)(TypeInfo_CustomLogicTransfer + 0xb8) != '\0') goto label_0425f70a;
      goto label_0425f817;
    }
    if (**(char **)(TypeInfo_CustomLogicTransfer + 0xb8) == '\0') goto label_0425f817;
label_0425f70a:
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x38), lVar6 == 0)) || (*(long *)(lVar6 + 0x30) == 0))
    goto label_0425f9b0;
    pSVar7 = *(System_String_o **)(*(long *)(lVar6 + 0x30) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = Map_BuiltinLevels__IsLogicBuiltin(pSVar7,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_CustomLogicTransfer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_CustomLogicTransfer__Transfer(player,(MethodInfo *)0x0);
      iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
      goto joined_r0x0425f987;
    }
    pPVar2 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if ((*(long *)(lVar6 + 0x30) == 0) || (pSVar8 == (System_Object_array *)0x0)) goto label_0425f9b0;
    pIVar22 = *(Il2CppObject **)(*(long *)(lVar6 + 0x30) + 0x18);
    if ((pIVar22 == (Il2CppObject *)0x0) || (lVar6 = il2cpp_runtime_helper_023051f0(pIVar22), lVar6 != 0)) {
      if ((int)pSVar8->max_length != 0) {
        pSVar8->m_Items[0] = pIVar22;
        il2cpp_runtime_helper_022b4080(pSVar8->m_Items);
        if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
          Photon_Pun_PhotonView__RPC_3efa220(pPVar2,"LoadBuiltinLogicRPC",player,pSVar8,(MethodInfo *)0x0);
          goto label_0425f817;
        }
        goto label_0425f9b0;
      }
      goto label_0425f9b5;
    }
  }
  else {
    if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) goto label_0425f6d9;
label_0425f5ef:
    bVar5 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_0425f5fe;
label_0425f817:
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
joined_r0x0425f987:
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
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
    if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      cVar4 = **(char **)(TypeInfo_CustomLogicAddonTransfer + 0xb8);
    }
    else {
      cVar4 = **(char **)(TypeInfo_CustomLogicAddonTransfer + 0xb8);
    }
    if (cVar4 == '\0') {
      return;
    }
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    in_RCX = (MethodInfo *)0x0;
    pSVar7 = PhotonExtensions__GetStringProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x38),"",
                        (MethodInfo *)0x0);
    if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = System_String__op_Inequality
                      (pSVar7,*(System_String_o **)(*(long *)(TypeInfo_CustomLogicAddonTransfer + 0xb8) + 8),(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      if (*(int *)(TypeInfo_CustomLogicAddonTransfer + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Map_CustomLogicAddonTransfer__Transfer(player,(MethodInfo *)0x0);
      return;
    }
    pPVar2 = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    pSVar8 = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object);
    if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC_3efa220(pPVar2,"LoadCachedAddonBundleRPC",player,pSVar8,(MethodInfo *)0x0);
      return;
    }
label_0425f9b0:
    il2cpp_runtime_helper_022b2c90();
label_0425f9b5:
    il2cpp_runtime_helper_022b2ca0();
  }
  pMVar9 = (MethodInfo *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  pMVar14 = extraout_RDX;
  if (g_data_057adbf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbf4 = '\x01';
    pMVar14 = extraout_RDX_00;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar14 = extraout_RDX_01;
  }
  pMVar13 = (MethodInfo *)0x0;
  pCVar10 = CustomLogic_CustomLogicManager__GetEditorEvaluator((System_String_o *)pMVar9,0,pMVar14);
  if (pCVar10 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    CustomLogic_CustomLogicEvaluator__GetModeSettings(pCVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  cVar4 = (char)pMVar13;
  if (g_data_057adbf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    il2cpp_runtime_helper_023445d0(&"UserSource.cl");
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    g_data_057adbf9 = '\x01';
  }
  pCVar11 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar11,pMVar13);
  if (cVar4 == '\0') {
label_0425fb61:
    pMVar13 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    pSVar7 = "UserSource.cl";
    System_Object___ctor((Il2CppObject *)pMVar13,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar13->invoker_method)->_Name_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar13->invoker_method,pSVar7);
    pCVar17 = (CustomLogic_CustomLogicLexer_o *)&pMVar13->name;
    pMVar13->name = (char *)pMVar9;
    il2cpp_runtime_helper_022b4080();
    pMVar13->klass = (Il2CppClass *)0x4;
    pMVar13->return_type = (Il2CppType *)0x0;
    pMVar14 = pMVar9;
    if (pCVar11 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
      CustomLogic_CustomLogicCompiler__AddSourceFile
                (pCVar11,(CustomLogic_CustomLogicSourceFile_o *)pMVar13,method_01);
      pMVar14 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(pCVar11,pMVar13);
      pCVar15 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
      pCVar17 = pCVar15;
      CustomLogic_CustomLogicLexer___ctor(pCVar15,(System_String_o *)pMVar14,pCVar11,in_RCX);
      if (pCVar15 != (CustomLogic_CustomLogicLexer_o *)0x0) {
        pMVar14 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(pCVar15,pMVar14);
        pCVar15 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
        pCVar17 = pCVar15;
        CustomLogic_CustomLogicParser___ctor
                  ((CustomLogic_CustomLogicParser_o *)pCVar15,
                   (System_Collections_Generic_List_CustomLogicToken__o *)pMVar14,pCVar11,in_RCX);
        if (pCVar15 != (CustomLogic_CustomLogicLexer_o *)0x0) {
          pCVar16 = CustomLogic_CustomLogicParser__GetStartAst
                              ((CustomLogic_CustomLogicParser_o *)pCVar15,pMVar14);
          pCVar10 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
          CustomLogic_CustomLogicEvaluator___ctor(pCVar10,pCVar16,pCVar11,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar14 = *(MethodInfo **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
    pCVar12 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    pSVar7 = "BaseLogic.cl";
    System_Object___ctor((Il2CppObject *)pCVar12,(MethodInfo *)0x0);
    (pCVar12->fields)._Name_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar12->fields,pSVar7);
    pCVar17 = (CustomLogic_CustomLogicLexer_o *)&(pCVar12->fields)._Content_k__BackingField;
    (pCVar12->fields)._Content_k__BackingField = (System_String_o *)pMVar14;
    il2cpp_runtime_helper_022b4080();
    (pCVar12->fields)._Type_k__BackingField = 1;
    (pCVar12->fields)._StartLine_k__BackingField = 0;
    (pCVar12->fields)._EndLine_k__BackingField = 0;
    (pCVar12->fields)._MapLogicOffset_k__BackingField = 0;
    if (pCVar11 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
      CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar11,pCVar12,method_00);
      goto label_0425fb61;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar14;
  if (g_data_057adbf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    g_data_057adbf5 = '\x01';
  }
  pSVar20 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar21 = (Il2CppMethodPointer)0x0;
  pIVar22 = (Il2CppObject *)0x0;
  pCVar11 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar11,pMVar9);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  pCVar12 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
  pSVar3 = "BaseLogic.cl";
  System_Object___ctor((Il2CppObject *)pCVar12,(MethodInfo *)0x0);
  (pCVar12->fields)._Name_k__BackingField = pSVar3;
  il2cpp_runtime_helper_022b4080(&pCVar12->fields,pSVar3);
  (pCVar12->fields)._Content_k__BackingField = pSVar7;
  il2cpp_runtime_helper_022b4080(&(pCVar12->fields)._Content_k__BackingField,pSVar7);
  (pCVar12->fields)._Type_k__BackingField = 1;
  (pCVar12->fields)._StartLine_k__BackingField = 0;
  (pCVar12->fields)._EndLine_k__BackingField = 0;
  (pCVar12->fields)._MapLogicOffset_k__BackingField = 0;
  if (pCVar11 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar11,pCVar12,method_02);
    pSVar7 = System_String__Concat_3ae5ba0((System_String_o *)pCVar17,".cl",(MethodInfo *)0x0);
    pMVar9 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    System_Object___ctor((Il2CppObject *)pMVar9,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar9->invoker_method)->_Name_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar9->invoker_method,pSVar7);
    pMVar9->name = (char *)pMVar14;
    il2cpp_runtime_helper_022b4080(&pMVar9->name,pMVar14);
    pMVar9->klass = (Il2CppClass *)0x2;
    pMVar9->return_type = (Il2CppType *)0x0;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (pCVar11,(CustomLogic_CustomLogicSourceFile_o *)pMVar9,method_03);
    pMVar14 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(pCVar11,pMVar9);
    pCVar17 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(pCVar17,(System_String_o *)pMVar14,pCVar11,in_RCX);
    if (pCVar17 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      pMVar14 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(pCVar17,pMVar14);
      __this_05 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor
                (__this_05,(System_Collections_Generic_List_CustomLogicToken__o *)pMVar14,pCVar11,in_RCX);
      if (__this_05 != (CustomLogic_CustomLogicParser_o *)0x0) {
        pCVar16 = CustomLogic_CustomLogicParser__GetStartAst(__this_05,pMVar14);
        pCVar10 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(pCVar10,pCVar16,pCVar11,(MethodInfo *)0x0);
        if (((pCVar10 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
            (__this_06 = CustomLogic_CustomLogicEvaluator__GetAddonSettings(pCVar10,(MethodInfo *)0x0),
            __this_06 !=
            (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)) &&
           (__this_07 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,
                                   MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
           __this_07 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     &stack0xffffffffffffff30,__this_07,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
          __this_00.fields._8_8_ = pIVar21;
          __this_00.fields._dictionary = pSVar20;
          __this_00.fields._currentKey = pIVar22;
          bVar5 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (__this_00,(MethodInfo_3251B20 *)&stack0xffffffffffffff30);
          if ((char)bVar5 != '\0') {
            System_Collections_Generic_Dictionary_object__object___get_Item
                      ((System_Collections_Generic_Dictionary_object__object__o *)__this_06,pIVar22,
                       MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
            __this_01.fields._8_8_ = pIVar21;
            __this_01.fields._dictionary = pSVar20;
            __this_01.fields._currentKey = pIVar22;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffff30);
            return;
          }
          __this_02.fields._8_8_ = pIVar21;
          __this_02.fields._dictionary = pSVar20;
          __this_02.fields._currentKey = pIVar22;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff30);
          goto label_0425ffb6;
        }
      }
    }
  }
  auVar19 = il2cpp_runtime_helper_022b2c90();
  if (auVar19._8_4_ == 1) {
    plVar18 = (long *)__cxa_begin_catch(auVar19._0_8_);
    lVar6 = *plVar18;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar21;
    __this_03.fields._dictionary = pSVar20;
    __this_03.fields._currentKey = pIVar22;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff30);
    if (lVar6 == 0) {
label_0425ffb6:
      __this_08 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BaseSetting);
      System_Collections_Generic_Dictionary_object__object____ctor(__this_08,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar6);
  }
  __this_04.fields._8_8_ = pIVar21;
  __this_04.fields._dictionary = pSVar20;
  __this_04.fields._currentKey = pIVar22;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_04,(MethodInfo_3251B10 *)&stack0xffffffffffffff30);
  _Unwind_Resume(auVar19._0_8_);
}


// CustomLogic.CustomLogicManager$$GetModeSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicManager__GetModeSettings (System_String_o* source, const MethodInfo* method);
// 0x425f9d0

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicManager__GetModeSettings(System_String_o *source,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_String_o *pSVar3;
  bool_conflict bVar4;
  CustomLogic_CustomLogicEvaluator_o *pCVar5;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar6;
  CustomLogic_CustomLogicCompiler_o *pCVar7;
  CustomLogic_CustomLogicSourceFile_o *pCVar8;
  MethodInfo *pMVar9;
  MethodInfo *pMVar10;
  CustomLogic_CustomLogicLexer_o *pCVar11;
  CustomLogic_CustomLogicStartAst_o *pCVar12;
  System_String_o *pSVar13;
  CustomLogic_CustomLogicLexer_o *pCVar14;
  CustomLogic_CustomLogicParser_o *__this_04;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_05;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  System_Collections_Generic_Dictionary_object__object__o *__this_07;
  long *plVar15;
  MethodInfo *in_RCX;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  undefined1 auVar16 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar17;
  Il2CppMethodPointer pIVar18;
  Il2CppObject *key;
  
  if (g_data_057adbf4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbf4 = '\x01';
    in_RDX = extraout_RDX;
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    in_RDX = extraout_RDX_00;
  }
  pMVar10 = (MethodInfo *)0x0;
  pCVar5 = CustomLogic_CustomLogicManager__GetEditorEvaluator(source,0,in_RDX);
  if (pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    pSVar6 = CustomLogic_CustomLogicEvaluator__GetModeSettings(pCVar5,(MethodInfo *)0x0);
    return pSVar6;
  }
  il2cpp_runtime_helper_022b2c90();
  cVar2 = (char)pMVar10;
  if (g_data_057adbf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    il2cpp_runtime_helper_023445d0(&"UserSource.cl");
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    g_data_057adbf9 = '\x01';
  }
  pCVar7 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar7,pMVar10);
  if (cVar2 == '\0') {
label_0425fb61:
    pMVar9 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    pSVar13 = "UserSource.cl";
    System_Object___ctor((Il2CppObject *)pMVar9,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar9->invoker_method)->_Name_k__BackingField = pSVar13;
    il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar9->invoker_method,pSVar13);
    pCVar14 = (CustomLogic_CustomLogicLexer_o *)&pMVar9->name;
    pMVar9->name = (char *)source;
    il2cpp_runtime_helper_022b4080();
    pMVar9->klass = (Il2CppClass *)0x4;
    pMVar9->return_type = (Il2CppType *)0x0;
    pMVar10 = (MethodInfo *)source;
    if (pCVar7 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
      CustomLogic_CustomLogicCompiler__AddSourceFile
                (pCVar7,(CustomLogic_CustomLogicSourceFile_o *)pMVar9,method_01);
      pMVar10 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(pCVar7,pMVar9);
      pCVar11 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
      pCVar14 = pCVar11;
      CustomLogic_CustomLogicLexer___ctor(pCVar11,(System_String_o *)pMVar10,pCVar7,in_RCX);
      if (pCVar11 != (CustomLogic_CustomLogicLexer_o *)0x0) {
        pMVar10 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(pCVar11,pMVar10);
        pCVar11 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
        pCVar14 = pCVar11;
        CustomLogic_CustomLogicParser___ctor
                  ((CustomLogic_CustomLogicParser_o *)pCVar11,
                   (System_Collections_Generic_List_CustomLogicToken__o *)pMVar10,pCVar7,in_RCX);
        if (pCVar11 != (CustomLogic_CustomLogicLexer_o *)0x0) {
          pCVar12 = CustomLogic_CustomLogicParser__GetStartAst
                              ((CustomLogic_CustomLogicParser_o *)pCVar11,pMVar10);
          pCVar5 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
          CustomLogic_CustomLogicEvaluator___ctor(pCVar5,pCVar12,pCVar7,(MethodInfo *)0x0);
          return (System_Collections_Generic_Dictionary_string__BaseSetting__o *)pCVar5;
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar10 = *(MethodInfo **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
    pCVar8 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    pSVar13 = "BaseLogic.cl";
    System_Object___ctor((Il2CppObject *)pCVar8,(MethodInfo *)0x0);
    (pCVar8->fields)._Name_k__BackingField = pSVar13;
    il2cpp_runtime_helper_022b4080(&pCVar8->fields,pSVar13);
    pCVar14 = (CustomLogic_CustomLogicLexer_o *)&(pCVar8->fields)._Content_k__BackingField;
    (pCVar8->fields)._Content_k__BackingField = (System_String_o *)pMVar10;
    il2cpp_runtime_helper_022b4080();
    (pCVar8->fields)._Type_k__BackingField = 1;
    (pCVar8->fields)._StartLine_k__BackingField = 0;
    (pCVar8->fields)._EndLine_k__BackingField = 0;
    (pCVar8->fields)._MapLogicOffset_k__BackingField = 0;
    if (pCVar7 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
      CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar7,pCVar8,method_00);
      goto label_0425fb61;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar9 = pMVar10;
  if (g_data_057adbf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    g_data_057adbf5 = '\x01';
  }
  pSVar17 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar18 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  pCVar7 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar7,pMVar9);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  pCVar8 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
  pSVar3 = "BaseLogic.cl";
  System_Object___ctor((Il2CppObject *)pCVar8,(MethodInfo *)0x0);
  (pCVar8->fields)._Name_k__BackingField = pSVar3;
  il2cpp_runtime_helper_022b4080(&pCVar8->fields,pSVar3);
  (pCVar8->fields)._Content_k__BackingField = pSVar13;
  il2cpp_runtime_helper_022b4080(&(pCVar8->fields)._Content_k__BackingField,pSVar13);
  (pCVar8->fields)._Type_k__BackingField = 1;
  (pCVar8->fields)._StartLine_k__BackingField = 0;
  (pCVar8->fields)._EndLine_k__BackingField = 0;
  (pCVar8->fields)._MapLogicOffset_k__BackingField = 0;
  if (pCVar7 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar7,pCVar8,method_02);
    pSVar13 = System_String__Concat_3ae5ba0((System_String_o *)pCVar14,".cl",(MethodInfo *)0x0);
    pMVar9 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    System_Object___ctor((Il2CppObject *)pMVar9,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar9->invoker_method)->_Name_k__BackingField = pSVar13;
    il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar9->invoker_method,pSVar13);
    pMVar9->name = (char *)pMVar10;
    il2cpp_runtime_helper_022b4080(&pMVar9->name,pMVar10);
    pMVar9->klass = (Il2CppClass *)0x2;
    pMVar9->return_type = (Il2CppType *)0x0;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (pCVar7,(CustomLogic_CustomLogicSourceFile_o *)pMVar9,method_03);
    pMVar10 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(pCVar7,pMVar9);
    pCVar14 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(pCVar14,(System_String_o *)pMVar10,pCVar7,in_RCX);
    if (pCVar14 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      pMVar10 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(pCVar14,pMVar10);
      __this_04 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor
                (__this_04,(System_Collections_Generic_List_CustomLogicToken__o *)pMVar10,pCVar7,in_RCX);
      if (__this_04 != (CustomLogic_CustomLogicParser_o *)0x0) {
        pCVar12 = CustomLogic_CustomLogicParser__GetStartAst(__this_04,pMVar10);
        pCVar5 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(pCVar5,pCVar12,pCVar7,(MethodInfo *)0x0);
        if (((pCVar5 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
            (__this_05 = CustomLogic_CustomLogicEvaluator__GetAddonSettings(pCVar5,(MethodInfo *)0x0),
            __this_05 !=
            (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)) &&
           (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,
                                   MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
           __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     &stack0xffffffffffffff68,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
          __this.fields._8_8_ = pIVar18;
          __this.fields._dictionary = pSVar17;
          __this.fields._currentKey = key;
          bVar4 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (__this,(MethodInfo_3251B20 *)&stack0xffffffffffffff68);
          if ((char)bVar4 != '\0') {
            pSVar6 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,key,
                                MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
            __this_00.fields._8_8_ = pIVar18;
            __this_00.fields._dictionary = pSVar17;
            __this_00.fields._currentKey = key;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_00,(MethodInfo_3251B10 *)&stack0xffffffffffffff68);
            return pSVar6;
          }
          __this_01.fields._8_8_ = pIVar18;
          __this_01.fields._dictionary = pSVar17;
          __this_01.fields._currentKey = key;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffff68);
          goto label_0425ffb6;
        }
      }
    }
  }
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ == 1) {
    plVar15 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar1 = *plVar15;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar18;
    __this_02.fields._dictionary = pSVar17;
    __this_02.fields._currentKey = key;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff68);
    if (lVar1 == 0) {
label_0425ffb6:
      __this_07 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BaseSetting);
      System_Collections_Generic_Dictionary_object__object____ctor(__this_07,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
      return (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_07;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar18;
  __this_03.fields._dictionary = pSVar17;
  __this_03.fields._currentKey = key;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff68);
  _Unwind_Resume(auVar16._0_8_);
}


// CustomLogic.CustomLogicManager$$GetAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__BaseSetting__o* CustomLogic_CustomLogicManager__GetAddonSettings (System_String_o* addonName, System_String_o* source, const MethodInfo* method);
// 0x425fc70

System_Collections_Generic_Dictionary_string__BaseSetting__o *
CustomLogic_CustomLogicManager__GetAddonSettings
          (System_String_o *addonName,System_String_o *source,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicCompiler_o *__this_04;
  CustomLogic_CustomLogicSourceFile_o *file;
  System_String_o *pSVar4;
  MethodInfo *pMVar5;
  CustomLogic_CustomLogicLexer_o *__this_05;
  CustomLogic_CustomLogicParser_o *__this_06;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *__this_07;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_08;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_09;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSVar6;
  System_Collections_Generic_Dictionary_object__object__o *__this_10;
  long *plVar7;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined1 auVar8 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar9;
  Il2CppMethodPointer pIVar10;
  Il2CppObject *key;
  
  pMVar5 = (MethodInfo *)source;
  if (g_data_057adbf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    g_data_057adbf5 = '\x01';
  }
  pSVar9 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  __this_04 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(__this_04,pMVar5);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  file = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
  pSVar2 = "BaseLogic.cl";
  System_Object___ctor((Il2CppObject *)file,(MethodInfo *)0x0);
  (file->fields)._Name_k__BackingField = pSVar2;
  il2cpp_runtime_helper_022b4080(&file->fields,pSVar2);
  (file->fields)._Content_k__BackingField = pSVar4;
  il2cpp_runtime_helper_022b4080(&(file->fields)._Content_k__BackingField,pSVar4);
  (file->fields)._Type_k__BackingField = 1;
  (file->fields)._StartLine_k__BackingField = 0;
  (file->fields)._EndLine_k__BackingField = 0;
  (file->fields)._MapLogicOffset_k__BackingField = 0;
  if (__this_04 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this_04,file,method_00);
    pSVar4 = System_String__Concat_3ae5ba0(addonName,".cl",(MethodInfo *)0x0);
    pMVar5 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    System_Object___ctor((Il2CppObject *)pMVar5,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar5->invoker_method)->_Name_k__BackingField = pSVar4;
    il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar5->invoker_method,pSVar4);
    pMVar5->name = (char *)source;
    il2cpp_runtime_helper_022b4080(&pMVar5->name,source);
    pMVar5->klass = (Il2CppClass *)0x2;
    pMVar5->return_type = (Il2CppType *)0x0;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (__this_04,(CustomLogic_CustomLogicSourceFile_o *)pMVar5,method_01);
    pMVar5 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(__this_04,pMVar5);
    __this_05 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_05,(System_String_o *)pMVar5,__this_04,in_RCX);
    if (__this_05 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      pMVar5 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(__this_05,pMVar5);
      __this_06 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor
                (__this_06,(System_Collections_Generic_List_CustomLogicToken__o *)pMVar5,__this_04,in_RCX);
      if (__this_06 != (CustomLogic_CustomLogicParser_o *)0x0) {
        start = CustomLogic_CustomLogicParser__GetStartAst(__this_06,pMVar5);
        __this_07 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(__this_07,start,__this_04,(MethodInfo *)0x0);
        if (((__this_07 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
            (__this_08 = CustomLogic_CustomLogicEvaluator__GetAddonSettings(__this_07,(MethodInfo *)0x0),
            __this_08 !=
            (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)) &&
           (__this_09 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_08,
                                   MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
           __this_09 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     &stack0xffffffffffffffa8,__this_09,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
          __this.fields._8_8_ = pIVar10;
          __this.fields._dictionary = pSVar9;
          __this.fields._currentKey = key;
          bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (__this,(MethodInfo_3251B20 *)&stack0xffffffffffffffa8);
          if ((char)bVar3 != '\0') {
            pSVar6 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                     System_Collections_Generic_Dictionary_object__object___get_Item
                               ((System_Collections_Generic_Dictionary_object__object__o *)__this_08,key,
                                MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
            __this_00.fields._8_8_ = pIVar10;
            __this_00.fields._dictionary = pSVar9;
            __this_00.fields._currentKey = key;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_00,(MethodInfo_3251B10 *)&stack0xffffffffffffffa8);
            return pSVar6;
          }
          __this_01.fields._8_8_ = pIVar10;
          __this_01.fields._dictionary = pSVar9;
          __this_01.fields._currentKey = key;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffffa8);
          goto label_0425ffb6;
        }
      }
    }
  }
  auVar8 = il2cpp_runtime_helper_022b2c90();
  if (auVar8._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch(auVar8._0_8_);
    lVar1 = *plVar7;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar10;
    __this_02.fields._dictionary = pSVar9;
    __this_02.fields._currentKey = key;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffffa8);
    if (lVar1 == 0) {
label_0425ffb6:
      __this_10 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BaseSetting);
      System_Collections_Generic_Dictionary_object__object____ctor(__this_10,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
      return (System_Collections_Generic_Dictionary_string__BaseSetting__o *)__this_10;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar10;
  __this_03.fields._dictionary = pSVar9;
  __this_03.fields._currentKey = key;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffffa8);
  _Unwind_Resume(auVar8._0_8_);
}


// CustomLogic.CustomLogicManager$$GetAddonSettingsGrouped
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* CustomLogic_CustomLogicManager__GetAddonSettingsGrouped (System_String_o* addonName, System_String_o* source, const MethodInfo* method);
// 0x42603c0

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
CustomLogic_CustomLogicManager__GetAddonSettingsGrouped
          (System_String_o *addonName,System_String_o *source,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  bool_conflict bVar1;
  CustomLogic_CustomLogicCompiler_o *__this_06;
  CustomLogic_CustomLogicSourceFile_o *file;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  CustomLogic_CustomLogicEvaluator_o *pCVar4;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *pSVar5;
  System_Collections_Generic_Dictionary_object__object__o *__this_07;
  System_String_o *pSVar6;
  long *plVar7;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar8;
  CustomLogic_CustomLogicEvaluator_o *__this_08;
  long lVar9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppRGCTXData *pIVar13;
  _union_231609 _Var14;
  _union_231609 name;
  char *in_stack_ffffffffffffff38;
  System_Collections_Generic_List_Enumerator_T__c *pSVar15;
  undefined1 local_90 [16];
  _union_231609 local_80;
  CustomLogic_CustomLogicSourceFile_o *pCStack_68;
  CustomLogic_CustomLogicCompiler_o *pCStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  undefined8 *puStack_48;
  MethodInfo *pMStack_40;
  System_String_o *local_38;
  
  pMVar3 = (MethodInfo *)source;
  if (g_data_057adbf6 == '\0') {
    pMStack_40 = (MethodInfo *)0x42603e6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    pMStack_40 = (MethodInfo *)0x42603f2;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    pMStack_40 = (MethodInfo *)0x42603fe;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    pMStack_40 = (MethodInfo *)0x426040a;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pMStack_40 = (MethodInfo *)0x4260416;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    pMStack_40 = (MethodInfo *)0x4260422;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    pMStack_40 = (MethodInfo *)0x426042e;
    il2cpp_runtime_helper_023445d0(&".cl");
    pMStack_40 = (MethodInfo *)0x426043a;
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    g_data_057adbf6 = '\x01';
  }
  pMStack_40 = (MethodInfo *)0x4260450;
  __this_06 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  pMStack_40 = (MethodInfo *)0x426045b;
  CustomLogic_CustomLogicCompiler___ctor(__this_06,pMVar3);
  local_38 = source;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pMStack_40 = (MethodInfo *)0x426047a;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  pMStack_40 = (MethodInfo *)0x4260497;
  file = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
  pMVar3 = "BaseLogic.cl";
  pMStack_40 = (MethodInfo *)0x42604ae;
  System_Object___ctor((Il2CppObject *)file,(MethodInfo *)0x0);
  (file->fields)._Name_k__BackingField = (System_String_o *)pMVar3;
  pMStack_40 = (MethodInfo *)0x42604be;
  il2cpp_runtime_helper_022b4080(&file->fields,pMVar3);
  __this_08 = (CustomLogic_CustomLogicEvaluator_o *)&(file->fields)._Content_k__BackingField;
  (file->fields)._Content_k__BackingField = pSVar6;
  pMStack_40 = (MethodInfo *)0x42604ce;
  il2cpp_runtime_helper_022b4080(__this_08,pSVar6);
  (file->fields)._Type_k__BackingField = 1;
  (file->fields)._StartLine_k__BackingField = 0;
  (file->fields)._EndLine_k__BackingField = 0;
  (file->fields)._MapLogicOffset_k__BackingField = 0;
  if (__this_06 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pMStack_40 = (MethodInfo *)0x42604f0;
    CustomLogic_CustomLogicCompiler__AddSourceFile(__this_06,file,method_00);
    pMStack_40 = (MethodInfo *)0x4260504;
    pSVar2 = System_String__Concat_3ae5ba0(addonName,".cl",(MethodInfo *)0x0);
    pMStack_40 = (MethodInfo *)0x426050f;
    pMVar3 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    pMStack_40 = (MethodInfo *)0x426051c;
    System_Object___ctor((Il2CppObject *)pMVar3,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar3->invoker_method)->_Name_k__BackingField = pSVar2;
    pMStack_40 = (MethodInfo *)0x426052c;
    il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar3->invoker_method,pSVar2);
    pMVar3->name = (char *)local_38;
    pMStack_40 = (MethodInfo *)0x426053d;
    il2cpp_runtime_helper_022b4080(&pMVar3->name);
    pMVar3->klass = (Il2CppClass *)0x2;
    pMVar3->return_type = (Il2CppType *)0x0;
    pMStack_40 = (MethodInfo *)0x4260556;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (__this_06,(CustomLogic_CustomLogicSourceFile_o *)pMVar3,method_01);
    pMStack_40 = (MethodInfo *)0x426055e;
    pMVar3 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(__this_06,pMVar3);
    pMStack_40 = (MethodInfo *)0x4260570;
    pCVar4 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    pMStack_40 = (MethodInfo *)0x4260581;
    pMVar8 = pMVar3;
    __this_08 = pCVar4;
    CustomLogic_CustomLogicLexer___ctor
              ((CustomLogic_CustomLogicLexer_o *)pCVar4,(System_String_o *)pMVar3,__this_06,in_RCX);
    file = (CustomLogic_CustomLogicSourceFile_o *)0x0;
    if (pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      pMStack_40 = (MethodInfo *)0x426058e;
      pMVar3 = (MethodInfo *)
               CustomLogic_CustomLogicLexer__GetTokens((CustomLogic_CustomLogicLexer_o *)pCVar4,pMVar8);
      pMStack_40 = (MethodInfo *)0x42605a0;
      pCVar4 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
      pMStack_40 = (MethodInfo *)0x42605b1;
      pMVar8 = pMVar3;
      __this_08 = pCVar4;
      CustomLogic_CustomLogicParser___ctor
                ((CustomLogic_CustomLogicParser_o *)pCVar4,
                 (System_Collections_Generic_List_CustomLogicToken__o *)pMVar3,__this_06,in_RCX);
      file = (CustomLogic_CustomLogicSourceFile_o *)0x0;
      if (pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pMStack_40 = (MethodInfo *)0x42605be;
        pMVar3 = (MethodInfo *)
                 CustomLogic_CustomLogicParser__GetStartAst((CustomLogic_CustomLogicParser_o *)pCVar4,pMVar8);
        pMStack_40 = (MethodInfo *)0x42605d0;
        pCVar4 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
        pMStack_40 = (MethodInfo *)0x42605e3;
        __this_08 = pCVar4;
        CustomLogic_CustomLogicEvaluator___ctor
                  (pCVar4,(CustomLogic_CustomLogicStartAst_o *)pMVar3,__this_06,(MethodInfo *)0x0);
        file = (CustomLogic_CustomLogicSourceFile_o *)0x0;
        if (pCVar4 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pSVar5 = CustomLogic_CustomLogicEvaluator__GetAddonSettings(pCVar4,(MethodInfo *)0x0);
          return pSVar5;
        }
      }
    }
  }
  pMStack_40 = (MethodInfo *)0x4260605;
  il2cpp_runtime_helper_022b2c90();
  puStack_48 = &TypeInfo_CustomLogicSourceFile;
  pCStack_68 = file;
  pCStack_60 = __this_06;
  pSStack_58 = pSVar6;
  pSStack_50 = addonName;
  pMStack_40 = pMVar3;
  if (g_data_057adbf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Dictio);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Se);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Valu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057adbf7 = '\x01';
  }
  pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar13 = (Il2CppRGCTXData *)0x0;
  _Var14.genericMethod = (System_String_o *)0x0;
  __this_07 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_07,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Se);
  if (__this_08 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_90,
               (System_Collections_Generic_List_object__o *)__this_08,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_90._0_8_;
    pIVar13 = (Il2CppRGCTXData *)local_90._8_8_;
    while( true ) {
      do {
        name = local_80;
        __this.fields._8_8_ = pIVar13;
        __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
        __this.fields._current = name.genericMethod;
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff20);
        if ((char)bVar1 == '\0') {
          __this_00.fields._8_8_ = pIVar13;
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
          __this_00.fields._current = name.genericMethod;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
          return (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)__this_07
          ;
        }
        _Var14 = name;
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar6 = Map_BuiltinLevels__LoadAddon(name.genericMethod,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        local_80 = _Var14;
      } while ((char)bVar1 != '\0');
      pMVar3 = extraout_RDX;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pMVar3 = extraout_RDX_00;
      }
      pSVar5 = CustomLogic_CustomLogicManager__GetAddonSettingsGrouped(name.genericMethod,pSVar6,pMVar3);
      if (pSVar5 == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)
      break;
      System_Collections_Generic_Dictionary_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_90,
                 (System_Collections_Generic_Dictionary_object__object__o *)pSVar5,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Dictio);
      pSVar15 = (System_Collections_Generic_List_Enumerator_T__c *)local_90._0_8_;
      if (__this_07 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        __this_04.fields._8_8_ = pIVar13;
        __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12;
        __this_04.fields._current.fields.key = _Var14.genericMethod;
        __this_04.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff38;
        __this_04.fields._32_8_ = local_90._0_8_;
        bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (__this_04,(MethodInfo_3251160 *)&stack0xffffffffffffff40);
        if ((char)bVar1 != '\0') {
          il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff40,MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System_String);
          il2cpp_runtime_helper_022b2c90();
          goto label_04260969;
        }
      }
      else {
        while (__this_03.fields._8_8_ = pIVar13,
              __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12,
              __this_03.fields._current.fields.key = _Var14.genericMethod,
              __this_03.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff38,
              __this_03.fields._32_8_ = pSVar15,
              bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                (__this_03,(MethodInfo_3251160 *)&stack0xffffffffffffff40),
              (char)bVar1 != '\0') {
          auVar11 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff40,MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System_String);
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_07,auVar11._0_8_,auVar11._8_8_,MethodInfo_Void_set_Item);
        }
      }
      __this_05.fields._8_8_ = pIVar13;
      __this_05.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar12;
      __this_05.fields._current.fields.key = _Var14.genericMethod;
      __this_05.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff38;
      __this_05.fields._32_8_ = pSVar15;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
      local_80 = _Var14;
    }
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(name.genericMethod);
  }
label_04260969:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  lVar9 = auVar10._0_8_;
  if (auVar10._8_4_ == 1) {
    plVar7 = (long *)__cxa_begin_catch();
    lVar9 = *plVar7;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar13;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
    __this_01.fields._current = _Var14.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
    if (lVar9 == 0) {
      return (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)__this_07;
    }
    il2cpp_runtime_helper_022fefe0();
  }
  __this_02.fields._8_8_ = pIVar13;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
  __this_02.fields._current = _Var14.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff20);
  _Unwind_Resume(lVar9);
}


// CustomLogic.CustomLogicManager$$GetSelectedAddonSettings
// il2cpp: System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* CustomLogic_CustomLogicManager__GetSelectedAddonSettings (System_Collections_Generic_List_string__o* addonNames, const MethodInfo* method);
// 0x4260610

System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *
CustomLogic_CustomLogicManager__GetSelectedAddonSettings
          (System_Collections_Generic_List_string__o *addonNames,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  bool_conflict bVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this_06;
  System_String_o *value;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_07;
  long *plVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  long lVar3;
  undefined1 auVar4 [12];
  undefined1 auVar5 [16];
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppRGCTXData *pIVar7;
  _union_231609 _Var8;
  _union_231609 name;
  char *in_stack_ffffffffffffff70;
  System_Collections_Generic_List_Enumerator_T__c *pSVar9;
  undefined1 auStack_58 [16];
  _union_231609 _Stack_48;
  
  if (g_data_057adbf7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Dictio);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Se);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Valu);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    g_data_057adbf7 = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIVar7 = (Il2CppRGCTXData *)0x0;
  _Var8.genericMethod = (System_String_o *)0x0;
  __this_06 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_Dictionary_string_BaseSetting);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_06,MethodInfo_Dictionary_2_System_String_Dictionary_2_System_String_Se);
  if (addonNames != (System_Collections_Generic_List_string__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_58,
               (System_Collections_Generic_List_object__o *)addonNames,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_58._0_8_;
    pIVar7 = (Il2CppRGCTXData *)auStack_58._8_8_;
    while( true ) {
      do {
        name = _Stack_48;
        __this.fields._8_8_ = pIVar7;
        __this.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
        __this.fields._current = name.genericMethod;
        bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                          (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffff58);
        if ((char)bVar1 == '\0') {
          __this_00.fields._8_8_ = pIVar7;
          __this_00.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
          __this_00.fields._current = name.genericMethod;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
          return (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)__this_06
          ;
        }
        _Var8 = name;
        if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        value = Map_BuiltinLevels__LoadAddon(name.genericMethod,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        _Stack_48 = _Var8;
      } while ((char)bVar1 != '\0');
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        method_00 = extraout_RDX_00;
      }
      __this_07 = CustomLogic_CustomLogicManager__GetAddonSettingsGrouped(name.genericMethod,value,method_00);
      if (__this_07 == (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0
         ) break;
      System_Collections_Generic_Dictionary_object__object___GetEnumerator
                ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)auStack_58,
                 (System_Collections_Generic_Dictionary_object__object__o *)__this_07,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_Dictio);
      pSVar9 = (System_Collections_Generic_List_Enumerator_T__c *)auStack_58._0_8_;
      if (__this_06 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
        __this_04.fields._8_8_ = pIVar7;
        __this_04.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6;
        __this_04.fields._current.fields.key = _Var8.genericMethod;
        __this_04.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
        __this_04.fields._32_8_ = auStack_58._0_8_;
        bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                          (__this_04,(MethodInfo_3251160 *)&stack0xffffffffffffff78);
        if ((char)bVar1 != '\0') {
          il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System_String);
          il2cpp_runtime_helper_022b2c90();
          goto label_04260969;
        }
      }
      else {
        while (__this_03.fields._8_8_ = pIVar7,
              __this_03.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6,
              __this_03.fields._current.fields.key = _Var8.genericMethod,
              __this_03.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70,
              __this_03.fields._32_8_ = pSVar9,
              bVar1 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                (__this_03,(MethodInfo_3251160 *)&stack0xffffffffffffff78),
              (char)bVar1 != '\0') {
          auVar5 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff78,MethodInfo_KeyValuePair_2_System_String_Dictionary_2_System_String);
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this_06,auVar5._0_8_,auVar5._8_8_,MethodInfo_Void_set_Item);
        }
      }
      __this_05.fields._8_8_ = pIVar7;
      __this_05.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar6;
      __this_05.fields._current.fields.key = _Var8.genericMethod;
      __this_05.fields._current.fields.value = (Il2CppObject *)in_stack_ffffffffffffff70;
      __this_05.fields._32_8_ = pSVar9;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffff78);
      _Stack_48 = _Var8;
    }
    il2cpp_runtime_helper_022b2c90();
    il2cpp_runtime_helper_022fefe0(name.genericMethod);
  }
label_04260969:
  auVar4 = il2cpp_runtime_helper_022b2c90();
  lVar3 = auVar4._0_8_;
  if (auVar4._8_4_ == 1) {
    plVar2 = (long *)__cxa_begin_catch();
    lVar3 = *plVar2;
    __cxa_end_catch();
    __this_01.fields._8_8_ = pIVar7;
    __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_01.fields._current = _Var8.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
    if (lVar3 == 0) {
      return (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)__this_06;
    }
    il2cpp_runtime_helper_022fefe0();
  }
  __this_02.fields._8_8_ = pIVar7;
  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
  __this_02.fields._current = _Var8.genericMethod;
  System_Collections_Generic_List_Enumerator_object___Dispose
            (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff58);
  _Unwind_Resume(lVar3);
}


// CustomLogic.CustomLogicManager$$GetModeDescription
// il2cpp: System_String_o* CustomLogic_CustomLogicManager__GetModeDescription (System_Collections_Generic_Dictionary_string__BaseSetting__o* settings, const MethodInfo* method);
// 0x4260a00

System_String_o *
CustomLogic_CustomLogicManager__GetModeDescription
          (System_Collections_Generic_Dictionary_string__BaseSetting__o *settings,MethodInfo *method)

{
  byte bVar1;
  int32_t iVar2;
  int iVar3;
  Il2CppClass *pIVar4;
  long lVar5;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Int32_array *pSVar6;
  bool_conflict bVar7;
  Il2CppObject *pIVar8;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSVar9;
  CustomLogic_CustomLogicCompiler_o *pCVar10;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_04;
  MethodInfo *pMVar11;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *source_00;
  CustomLogic_CustomLogicParser_o *pCVar12;
  CustomLogic_CustomLogicSourceFile_o *pCVar13;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_01;
  System_Collections_Generic_List_TSource__o *__this_05;
  System_String_o *pSVar14;
  long lVar15;
  CustomLogic_CustomLogicLexer_o *__this_06;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *pCVar16;
  System_String_o *extraout_RAX;
  long *plVar17;
  Il2CppClass *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  System_String_o **ppSVar18;
  undefined8 *puVar19;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *method_06;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *method_07;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings;
  undefined8 *unaff_R12;
  undefined8 *unaff_R13;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *unaff_R14;
  undefined8 *unaff_R15;
  undefined1 auVar20 [12];
  undefined8 in_stack_ffffffffffffff08;
  System_String_o *value;
  System_String_o *pSVar21;
  _union_249689 _Var22;
  Il2CppType **ppIStack_b8;
  _union_249689 a_Stack_a8 [2];
  System_String_o *pSStack_98;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSStack_90;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_88;
  System_Int32_array *pSStack_80;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_78;
  CustomLogic_CustomLogicCompiler_o *pCStack_70;
  code *pcStack_68;
  undefined8 uStack_60;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSStack_58;
  undefined8 *puStack_50;
  undefined8 *puStack_48;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_40;
  undefined8 *puStack_38;
  
  if (g_data_057adbf8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Description");
    g_data_057adbf8 = '\x01';
  }
  if (settings == (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
label_04260b2a:
    pSVar9 = unaff_R14;
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    unaff_R15 = &"Description";
    bVar7 = System_Collections_Generic_Dictionary_object__object___ContainsKey
                      ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                       (Il2CppObject *)"Description",MethodInfo_Boolean_ContainsKey);
    unaff_R14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&"";
    if ((char)bVar7 == '\0') {
label_04260b1d:
      return (System_String_o *)(unaff_R14->obj).klass;
    }
    unaff_R12 = &MethodInfo_BaseSetting_get_Item;
    pIVar8 = System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                        (Il2CppObject *)"Description",MethodInfo_BaseSetting_get_Item);
    if (pIVar8 == (Il2CppObject *)0x0) goto label_04260b1d;
    unaff_R13 = &TypeInfo_StringSetting;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    if (((pIVar8->klass->_2).naturalAligment < bVar1) ||
       ((pIVar8->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_StringSetting)) goto label_04260b1d;
    in_RCX = TypeInfo_StringSetting;
    method = (MethodInfo *)"Description";
    pSVar9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
             System_Collections_Generic_Dictionary_object__object___get_Item
                       ((System_Collections_Generic_Dictionary_object__object__o *)settings,
                        (Il2CppObject *)"Description",MethodInfo_BaseSetting_get_Item);
    if (pSVar9 == (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0) goto label_04260b2a;
    pIVar4 = (pSVar9->obj).klass;
    bVar1 = (TypeInfo_StringSetting->_2).naturalAligment;
    in_RCX = (Il2CppClass *)(ulong)bVar1;
    method = (MethodInfo *)TypeInfo_StringSetting;
    if ((bVar1 <= (pIVar4->_2).naturalAligment) &&
       ((pIVar4->_2).typeHierarchy[(long)((long)&in_RCX[-1].vtable[0xfe].method + 7)] == TypeInfo_StringSetting)) {
      unaff_R14 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)&pSVar9->max_length;
      goto label_04260b1d;
    }
  }
  source_00 = pSVar9;
  uStack_60 = il2cpp_runtime_helper_022b2fd0();
  pSStack_58 = settings;
  puStack_50 = unaff_R12;
  puStack_48 = unaff_R13;
  pSStack_40 = pSVar9;
  puStack_38 = unaff_R15;
  if (g_data_057adbfa == '\0') {
    pcStack_68 = (code *)0x4260b63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    pcStack_68 = (code *)0x4260b6f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    pcStack_68 = (code *)0x4260b7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pcStack_68 = (code *)0x4260b87;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    pcStack_68 = (code *)0x4260b93;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    pcStack_68 = (code *)0x4260b9f;
    il2cpp_runtime_helper_023445d0(&"UserSource.cl");
    pcStack_68 = (code *)0x4260bab;
    il2cpp_runtime_helper_023445d0(&"");
    pcStack_68 = (code *)0x4260bb7;
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    g_data_057adbfa = '\x01';
  }
  pcStack_68 = (code *)0x4260bcd;
  pCVar10 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  pcStack_68 = (code *)0x4260bd8;
  CustomLogic_CustomLogicCompiler___ctor(pCVar10,method);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pcStack_68 = (code *)0x4260bf0;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  puVar19 = &TypeInfo_CustomLogicSourceFile;
  pcStack_68 = (code *)0x4260c0e;
  __this_04 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile)
  ;
  pSVar6 = "BaseLogic.cl";
  pcStack_68 = (code *)0x4260c25;
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  (__this_04->fields)._buckets = pSVar6;
  pcStack_68 = (code *)0x4260c35;
  il2cpp_runtime_helper_022b4080(&__this_04->fields,pSVar6);
  modeSettings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)&(__this_04->fields)._entries
  ;
  (__this_04->fields)._entries = pSVar9;
  pcStack_68 = (code *)0x4260c45;
  method_06 = pSVar9;
  il2cpp_runtime_helper_022b4080();
  *(undefined1 (*) [16])&(__this_04->fields)._count = ZEXT416(1);
  if (pCVar10 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pcStack_68 = (code *)0x4260c67;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (pCVar10,(CustomLogic_CustomLogicSourceFile_o *)__this_04,method_00);
    pcStack_68 = (code *)0x4260c70;
    pMVar11 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    pSVar9 = "UserSource.cl";
    pcStack_68 = (code *)0x4260c87;
    System_Object___ctor((Il2CppObject *)pMVar11,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar11->invoker_method)->_Name_k__BackingField =
         (System_String_o *)pSVar9;
    pcStack_68 = (code *)0x4260c97;
    il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar11->invoker_method,pSVar9);
    pMVar11->name = (char *)source_00;
    pcStack_68 = (code *)0x4260ca7;
    il2cpp_runtime_helper_022b4080(&pMVar11->name,source_00);
    pMVar11->klass = (Il2CppClass *)0x4;
    pMVar11->return_type = (Il2CppType *)0x0;
    pcStack_68 = (code *)0x4260cc0;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (pCVar10,(CustomLogic_CustomLogicSourceFile_o *)pMVar11,method_01);
    pcStack_68 = (code *)0x4260cc8;
    source_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                CustomLogic_CustomLogicCompiler__Compile(pCVar10,pMVar11);
    pcStack_68 = (code *)0x4260cda;
    __this_04 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    pcStack_68 = (code *)0x4260ceb;
    method_06 = source_00;
    modeSettings = __this_04;
    CustomLogic_CustomLogicLexer___ctor
              ((CustomLogic_CustomLogicLexer_o *)__this_04,(System_String_o *)source_00,pCVar10,
               (MethodInfo *)in_RCX);
    if (__this_04 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
      pcStack_68 = (code *)0x4260cfc;
      pSVar9 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
               CustomLogic_CustomLogicLexer__GetTokens
                         ((CustomLogic_CustomLogicLexer_o *)__this_04,(MethodInfo *)method_06);
      pcStack_68 = (code *)0x4260d0e;
      pCVar12 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
      pcStack_68 = (code *)0x4260d1f;
      CustomLogic_CustomLogicParser___ctor
                (pCVar12,(System_Collections_Generic_List_CustomLogicToken__o *)pSVar9,pCVar10,
                 (MethodInfo *)in_RCX);
      modeSettings = *(System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                      &(__this_04->fields)._freeCount;
      puVar19 = &g_data_057b9b70;
      method_06 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  **(undefined8 **)(g_data_057b9c00 + 0xb8);
      pcStack_68 = (code *)0x4260d42;
      bVar7 = System_String__op_Inequality
                        ((System_String_o *)modeSettings,(System_String_o *)method_06,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') {
        source_00 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)0x0;
        if (pCVar12 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_04260d9b;
        pcStack_68 = (code *)0x4260d59;
        CustomLogic_CustomLogicParser__GetStartAst(pCVar12,(MethodInfo *)method_06);
        pcStack_68 = (code *)0x4260d75;
        bVar7 = System_String__op_Inequality
                          ((pCVar12->fields).Error,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                           (MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          ppSVar18 = (System_String_o **)&"";
        }
        else {
          ppSVar18 = &(pCVar12->fields).Error;
        }
      }
      else {
        ppSVar18 = (System_String_o **)&(__this_04->fields)._freeCount;
      }
      return *ppSVar18;
    }
  }
label_04260d9b:
  pcStack_68 = CustomLogic_CustomLogicManager__StartLogic;
  il2cpp_runtime_helper_022b2c90();
  pSStack_80 = pSVar6;
  method_07 = method_06;
  pSStack_90 = __this_04;
  pSStack_88 = pSVar9;
  pSStack_78 = source_00;
  pCStack_70 = pCVar10;
  pcStack_68 = (code *)puVar19;
  if (g_data_057adbfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_StringSetting_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_StartLogic_b__49_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"MapLogic");
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    il2cpp_runtime_helper_023445d0(&".addon");
    g_data_057adbfb = '\x01';
  }
  _Var22.genericMethod = (Il2CppObject *)0x0;
  value = (System_String_o *)0x0;
  pCVar10 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar10,(MethodInfo *)method_07);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar5 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(CustomLogic_CustomLogicCompiler_o **)(lVar5 + 0x40) = pCVar10;
  il2cpp_runtime_helper_022b4080(lVar5 + 0x40);
  pSVar21 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  pCVar10 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
  pCVar13 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
  pSVar6 = "BaseLogic.cl";
  System_Object___ctor((Il2CppObject *)pCVar13,(MethodInfo *)0x0);
  (pCVar13->fields)._Name_k__BackingField = (System_String_o *)pSVar6;
  il2cpp_runtime_helper_022b4080(&pCVar13->fields,pSVar6);
  (pCVar13->fields)._Content_k__BackingField = pSVar21;
  il2cpp_runtime_helper_022b4080(&(pCVar13->fields)._Content_k__BackingField,pSVar21);
  (pCVar13->fields)._Type_k__BackingField = 1;
  (pCVar13->fields)._StartLine_k__BackingField = 0;
  (pCVar13->fields)._EndLine_k__BackingField = 0;
  (pCVar13->fields)._MapLogicOffset_k__BackingField = 0;
  if (pCVar10 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar10,pCVar13,method_02);
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar5 != 0) && (lVar5 = *(long *)(lVar5 + 0x38), lVar5 != 0)) &&
       (lVar5 = *(long *)(lVar5 + 0x48), lVar5 != 0)) {
      source = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar5 + 0x18);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (selector == (System_Func_TSource__TResult__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_StringSetting_string);
        System_Func_object__object____ctor();
        lVar5 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TResult__o **)(lVar5 + 8) = selector;
        il2cpp_runtime_helper_022b4080(lVar5 + 8,selector);
      }
      source_01 = System_Linq_Enumerable__Select_object__object_(source,selector,MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
      in_RCX = (Il2CppClass *)&MethodInfo_List_1_System_String_ToList_String;
      __this_05 = System_Linq_Enumerable__ToList_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,MethodInfo_List_1_System_String_ToList_String);
      if (__this_05 != (System_Collections_Generic_List_TSource__o *)0x0) {
        in_RCX = (Il2CppClass *)&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_a8,
                   (System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        _Var22 = a_Stack_a8[0];
        do {
          do {
            __this_00.fields._8_8_ = value;
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
            __this_00.fields._current = _Var22.genericMethod;
            bVar7 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff18);
            if ((char)bVar7 == '\0') {
              __this_01.fields._8_8_ = value;
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
              __this_01.fields._current = _Var22.genericMethod;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
              goto label_042612db;
            }
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar7 = Map_BuiltinLevels__IsAddonBuiltin(pSStack_98,(MethodInfo *)0x0);
            if ((char)bVar7 == '\0') {
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18);
              if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                in_RCX = MethodInfo_Boolean_TryGetValue;
                System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (__this,(Il2CppObject *)pSStack_98,(Il2CppObject **)&stack0xffffffffffffff10,
                           (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
                goto label_04261202;
              }
              il2cpp_runtime_helper_022b2c90();
              goto label_0426172b;
            }
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value = Map_BuiltinLevels__LoadAddon(pSStack_98,(MethodInfo *)0x0);
label_04261202:
            bVar7 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          } while ((char)bVar7 != '\0');
          pSVar21 = value;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar21 = value;
          }
          pCVar10 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
          pSVar14 = System_String__Concat_3ae5ba0(pSStack_98,".addon",(MethodInfo *)0x0);
          value = pSVar21;
          pCVar13 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
          System_Object___ctor((Il2CppObject *)pCVar13,(MethodInfo *)0x0);
          (pCVar13->fields)._Name_k__BackingField = pSVar14;
          il2cpp_runtime_helper_022b4080(&pCVar13->fields,pSVar14);
          (pCVar13->fields)._Content_k__BackingField = pSVar21;
          il2cpp_runtime_helper_022b4080(&(pCVar13->fields)._Content_k__BackingField,pSVar21);
          ppIStack_b8 = SUB168(ZEXT416(2),0);
          *(Il2CppType ***)&(pCVar13->fields)._Type_k__BackingField = ppIStack_b8;
          (pCVar13->fields)._EndLine_k__BackingField = 0;
          (pCVar13->fields)._MapLogicOffset_k__BackingField = 0;
          if (pCVar10 == (CustomLogic_CustomLogicCompiler_o *)0x0) {
label_0426172b:
            il2cpp_runtime_helper_022b2c90();
            break;
          }
          CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar10,pCVar13,method_03);
        } while( true );
      }
    }
  }
label_04261730:
  do {
    auVar20 = il2cpp_runtime_helper_022b2c90();
    if (auVar20._8_4_ != 1) {
label_0426185d:
      __this_03.fields._8_8_ = value;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
      __this_03.fields._current = _Var22.genericMethod;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
      _Unwind_Resume(auVar20._0_8_);
    }
    plVar17 = (long *)__cxa_begin_catch(auVar20._0_8_);
    lVar5 = *plVar17;
    __cxa_end_catch();
    __this_02.fields._8_8_ = value;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff08;
    __this_02.fields._current = _Var22.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff18);
    if (lVar5 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar5);
      goto label_0426185d;
    }
label_042612db:
    lVar5 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  } while (((lVar5 == 0) || (lVar5 = *(long *)(lVar5 + 0x38), lVar5 == 0)) || (*(long *)(lVar5 + 0x30) == 0));
  pSVar21 = *(System_String_o **)(*(long *)(lVar5 + 0x30) + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = System_String__op_Equality
                    (pSVar21,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
label_042614c6:
    iVar3 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar15 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
      if (lVar15 != 0) goto label_04261377;
      goto label_042614c6;
    }
    lVar15 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (lVar15 == 0) goto label_042614c6;
label_04261377:
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar15 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
      if (lVar15 == 0) goto label_04261730;
    }
    pSVar21 = *(System_String_o **)(lVar15 + 0x40);
    bVar7 = System_String__IsNullOrEmpty(pSVar21,(MethodInfo *)0x0);
    if ((char)bVar7 != '\0') goto label_042614c6;
    if (*(long *)(lVar5 + 0x28) == 0) goto label_04261730;
    pSVar14 = *(System_String_o **)(*(long *)(lVar5 + 0x28) + 0x18);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar10 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
    pSVar14 = System_String__Concat_3ae5ba0(pSVar14,".txt",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar15 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (lVar15 == 0) goto label_04261730;
    iVar2 = *(int32_t *)(lVar15 + 0x50);
    pCVar13 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    System_Object___ctor((Il2CppObject *)pCVar13,(MethodInfo *)0x0);
    (pCVar13->fields)._Name_k__BackingField = pSVar14;
    il2cpp_runtime_helper_022b4080(&pCVar13->fields,pSVar14);
    (pCVar13->fields)._Content_k__BackingField = pSVar21;
    il2cpp_runtime_helper_022b4080(&(pCVar13->fields)._Content_k__BackingField,pSVar21);
    (pCVar13->fields)._Type_k__BackingField = 3;
    (pCVar13->fields)._StartLine_k__BackingField = 0;
    (pCVar13->fields)._EndLine_k__BackingField = 0;
    (pCVar13->fields)._MapLogicOffset_k__BackingField = iVar2;
    if (pCVar10 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_04261730;
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar10,pCVar13,method_04);
    iVar3 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar11 = (MethodInfo *)0x0;
  bVar7 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28),(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if (*(long *)(lVar5 + 0x30) == 0) goto label_04261730;
    pSVar21 = *(System_String_o **)(*(long *)(lVar5 + 0x30) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar11 = *(MethodInfo **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28);
    bVar7 = System_String__op_Equality(pSVar21,(System_String_o *)pMVar11,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar10 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
      pSVar14 = System_String__Concat_3ae5ba0(pSVar21,".cl",(MethodInfo *)0x0);
      pSVar21 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
      pMVar11 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
      System_Object___ctor((Il2CppObject *)pMVar11,(MethodInfo *)0x0);
      ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar11->invoker_method)->_Name_k__BackingField = pSVar14;
      il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar11->invoker_method,pSVar14);
      pMVar11->name = (char *)pSVar21;
      il2cpp_runtime_helper_022b4080(&pMVar11->name,pSVar21);
      pMVar11->klass = (Il2CppClass *)0x4;
      pMVar11->return_type = (Il2CppType *)0x0;
      if (pCVar10 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_04261730;
      CustomLogic_CustomLogicCompiler__AddSourceFile
                (pCVar10,(CustomLogic_CustomLogicSourceFile_o *)pMVar11,method_05);
    }
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar10 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
  if (pCVar10 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pMVar11 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(pCVar10,pMVar11);
    pCVar10 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
    __this_06 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_06,(System_String_o *)pMVar11,pCVar10,(MethodInfo *)in_RCX);
    if (__this_06 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      pMVar11 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(__this_06,pMVar11);
      pCVar10 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
      pCVar12 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor
                (pCVar12,(System_Collections_Generic_List_CustomLogicToken__o *)pMVar11,pCVar10,
                 (MethodInfo *)in_RCX);
      if (pCVar12 != (CustomLogic_CustomLogicParser_o *)0x0) {
        start = CustomLogic_CustomLogicParser__GetStartAst(pCVar12,pMVar11);
        pCVar10 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
        pCVar16 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
        in_RCX = (Il2CppClass *)0x0;
        CustomLogic_CustomLogicEvaluator___ctor(pCVar16,start,pCVar10,(MethodInfo *)0x0);
        lVar5 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
        *(CustomLogic_CustomLogicEvaluator_o **)(lVar5 + 8) = pCVar16;
        il2cpp_runtime_helper_022b4080(lVar5 + 8,pCVar16);
        pCVar16 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (pCVar16 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          CustomLogic_CustomLogicEvaluator__Start
                    (pCVar16,modeSettings,
                     (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)
                     method_06,(MethodInfo *)0x0);
          return extraout_RAX;
        }
      }
    }
  }
  goto label_04261730;
}


// CustomLogic.CustomLogicManager$$GetEditorEvaluator
// il2cpp: CustomLogic_CustomLogicEvaluator_o* CustomLogic_CustomLogicManager__GetEditorEvaluator (System_String_o* source, bool loadBaseLogic, const MethodInfo* method);
// 0x425fa30

CustomLogic_CustomLogicEvaluator_o *
CustomLogic_CustomLogicManager__GetEditorEvaluator
          (System_String_o *source,bool_conflict loadBaseLogic,MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_00;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_01;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_02;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o __this_03;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicCompiler_o *pCVar4;
  CustomLogic_CustomLogicSourceFile_o *pCVar5;
  MethodInfo *pMVar6;
  MethodInfo *pMVar7;
  CustomLogic_CustomLogicLexer_o *pCVar8;
  CustomLogic_CustomLogicStartAst_o *pCVar9;
  CustomLogic_CustomLogicEvaluator_o *pCVar10;
  System_String_o *pSVar11;
  CustomLogic_CustomLogicLexer_o *pCVar12;
  CustomLogic_CustomLogicParser_o *__this_04;
  System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *__this_05;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *__this_06;
  long *plVar13;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  undefined4 in_register_00000034;
  undefined1 auVar14 [12];
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar15;
  Il2CppMethodPointer pIVar16;
  Il2CppObject *key;
  
  pMVar7 = (MethodInfo *)CONCAT44(in_register_00000034,loadBaseLogic);
  if (g_data_057adbf9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    il2cpp_runtime_helper_023445d0(&"UserSource.cl");
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    g_data_057adbf9 = '\x01';
  }
  pCVar4 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar4,pMVar7);
  if ((char)loadBaseLogic == '\0') {
label_0425fb61:
    pMVar6 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    pSVar11 = "UserSource.cl";
    System_Object___ctor((Il2CppObject *)pMVar6,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar6->invoker_method)->_Name_k__BackingField = pSVar11;
    il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar6->invoker_method,pSVar11);
    pCVar12 = (CustomLogic_CustomLogicLexer_o *)&pMVar6->name;
    pMVar6->name = (char *)source;
    il2cpp_runtime_helper_022b4080();
    pMVar6->klass = (Il2CppClass *)0x4;
    pMVar6->return_type = (Il2CppType *)0x0;
    pMVar7 = (MethodInfo *)source;
    if (pCVar4 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
      CustomLogic_CustomLogicCompiler__AddSourceFile
                (pCVar4,(CustomLogic_CustomLogicSourceFile_o *)pMVar6,method_01);
      pMVar7 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(pCVar4,pMVar6);
      pCVar8 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
      pCVar12 = pCVar8;
      CustomLogic_CustomLogicLexer___ctor(pCVar8,(System_String_o *)pMVar7,pCVar4,in_RCX);
      if (pCVar8 != (CustomLogic_CustomLogicLexer_o *)0x0) {
        pMVar7 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(pCVar8,pMVar7);
        pCVar8 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
        pCVar12 = pCVar8;
        CustomLogic_CustomLogicParser___ctor
                  ((CustomLogic_CustomLogicParser_o *)pCVar8,
                   (System_Collections_Generic_List_CustomLogicToken__o *)pMVar7,pCVar4,in_RCX);
        if (pCVar8 != (CustomLogic_CustomLogicLexer_o *)0x0) {
          pCVar9 = CustomLogic_CustomLogicParser__GetStartAst
                             ((CustomLogic_CustomLogicParser_o *)pCVar8,pMVar7);
          pCVar10 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
          CustomLogic_CustomLogicEvaluator___ctor(pCVar10,pCVar9,pCVar4,(MethodInfo *)0x0);
          return pCVar10;
        }
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar7 = *(MethodInfo **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
    pCVar5 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    pSVar11 = "BaseLogic.cl";
    System_Object___ctor((Il2CppObject *)pCVar5,(MethodInfo *)0x0);
    (pCVar5->fields)._Name_k__BackingField = pSVar11;
    il2cpp_runtime_helper_022b4080(&pCVar5->fields,pSVar11);
    pCVar12 = (CustomLogic_CustomLogicLexer_o *)&(pCVar5->fields)._Content_k__BackingField;
    (pCVar5->fields)._Content_k__BackingField = (System_String_o *)pMVar7;
    il2cpp_runtime_helper_022b4080();
    (pCVar5->fields)._Type_k__BackingField = 1;
    (pCVar5->fields)._StartLine_k__BackingField = 0;
    (pCVar5->fields)._EndLine_k__BackingField = 0;
    (pCVar5->fields)._MapLogicOffset_k__BackingField = 0;
    if (pCVar4 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
      CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar4,pCVar5,method_00);
      goto label_0425fb61;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar6 = pMVar7;
  if (g_data_057adbf5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_BaseSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    g_data_057adbf5 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  pIVar16 = (Il2CppMethodPointer)0x0;
  key = (Il2CppObject *)0x0;
  pCVar4 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar4,pMVar6);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar11 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  pCVar5 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
  pSVar2 = "BaseLogic.cl";
  System_Object___ctor((Il2CppObject *)pCVar5,(MethodInfo *)0x0);
  (pCVar5->fields)._Name_k__BackingField = pSVar2;
  il2cpp_runtime_helper_022b4080(&pCVar5->fields,pSVar2);
  (pCVar5->fields)._Content_k__BackingField = pSVar11;
  il2cpp_runtime_helper_022b4080(&(pCVar5->fields)._Content_k__BackingField,pSVar11);
  (pCVar5->fields)._Type_k__BackingField = 1;
  (pCVar5->fields)._StartLine_k__BackingField = 0;
  (pCVar5->fields)._EndLine_k__BackingField = 0;
  (pCVar5->fields)._MapLogicOffset_k__BackingField = 0;
  if (pCVar4 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar4,pCVar5,method_02);
    pSVar11 = System_String__Concat_3ae5ba0((System_String_o *)pCVar12,".cl",(MethodInfo *)0x0);
    pMVar6 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    System_Object___ctor((Il2CppObject *)pMVar6,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar6->invoker_method)->_Name_k__BackingField = pSVar11;
    il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar6->invoker_method,pSVar11);
    pMVar6->name = (char *)pMVar7;
    il2cpp_runtime_helper_022b4080(&pMVar6->name,pMVar7);
    pMVar6->klass = (Il2CppClass *)0x2;
    pMVar6->return_type = (Il2CppType *)0x0;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (pCVar4,(CustomLogic_CustomLogicSourceFile_o *)pMVar6,method_03);
    pMVar7 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(pCVar4,pMVar6);
    pCVar12 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(pCVar12,(System_String_o *)pMVar7,pCVar4,in_RCX);
    if (pCVar12 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      pMVar7 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(pCVar12,pMVar7);
      __this_04 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor
                (__this_04,(System_Collections_Generic_List_CustomLogicToken__o *)pMVar7,pCVar4,in_RCX);
      if (__this_04 != (CustomLogic_CustomLogicParser_o *)0x0) {
        pCVar9 = CustomLogic_CustomLogicParser__GetStartAst(__this_04,pMVar7);
        pCVar10 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
        CustomLogic_CustomLogicEvaluator___ctor(pCVar10,pCVar9,pCVar4,(MethodInfo *)0x0);
        if (((pCVar10 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
            (__this_05 = CustomLogic_CustomLogicEvaluator__GetAddonSettings(pCVar10,(MethodInfo *)0x0),
            __this_05 !=
            (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)0x0)) &&
           (__this_06 = System_Collections_Generic_Dictionary_object__object___get_Keys
                                  ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,
                                   MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_System_String_Dic),
           __this_06 != (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0)) {
          System_Collections_Generic_Dictionary_KeyCollection_object__object___GetEnumerator
                    ((System_Collections_Generic_Dictionary_KeyCollection_Enumerator_TKey__TValue__o *)
                     &stack0xffffffffffffff70,__this_06,MethodInfo_Dictionary_2_TKey_TValue_KeyCollection_TKey_TValue_Enume);
          __this.fields._8_8_ = pIVar16;
          __this.fields._dictionary = pSVar15;
          __this.fields._currentKey = key;
          bVar3 = System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___MoveNext
                            (__this,(MethodInfo_3251B20 *)&stack0xffffffffffffff70);
          if ((char)bVar3 != '\0') {
            pCVar10 = (CustomLogic_CustomLogicEvaluator_o *)
                      System_Collections_Generic_Dictionary_object__object___get_Item
                                ((System_Collections_Generic_Dictionary_object__object__o *)__this_05,key,
                                 MethodInfo_Dictionary_2_System_String_Settings_BaseSetting_get_Item);
            __this_00.fields._8_8_ = pIVar16;
            __this_00.fields._dictionary = pSVar15;
            __this_00.fields._currentKey = key;
            System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                      (__this_00,(MethodInfo_3251B10 *)&stack0xffffffffffffff70);
            return pCVar10;
          }
          __this_01.fields._8_8_ = pIVar16;
          __this_01.fields._dictionary = pSVar15;
          __this_01.fields._currentKey = key;
          System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
                    (__this_01,(MethodInfo_3251B10 *)&stack0xffffffffffffff70);
          goto label_0425ffb6;
        }
      }
    }
  }
  auVar14 = il2cpp_runtime_helper_022b2c90();
  if (auVar14._8_4_ == 1) {
    plVar13 = (long *)__cxa_begin_catch(auVar14._0_8_);
    lVar1 = *plVar13;
    __cxa_end_catch();
    __this_02.fields._8_8_ = pIVar16;
    __this_02.fields._dictionary = pSVar15;
    __this_02.fields._currentKey = key;
    System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251B10 *)&stack0xffffffffffffff70);
    if (lVar1 == 0) {
label_0425ffb6:
      pCVar10 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_BaseSetting);
      System_Collections_Generic_Dictionary_object__object____ctor
                ((System_Collections_Generic_Dictionary_object__object__o *)pCVar10,MethodInfo_Dictionary_2_System_String_Settings_BaseSetting);
      return pCVar10;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_03.fields._8_8_ = pIVar16;
  __this_03.fields._dictionary = pSVar15;
  __this_03.fields._currentKey = key;
  System_Collections_Generic_Dictionary_KeyCollection_Enumerator_object__object___Dispose
            (__this_03,(MethodInfo_3251B10 *)&stack0xffffffffffffff70);
  _Unwind_Resume(auVar14._0_8_);
}


// CustomLogic.CustomLogicManager$$TryParseLogic
// il2cpp: System_String_o* CustomLogic_CustomLogicManager__TryParseLogic (System_String_o* source, const MethodInfo* method);
// 0x4260b40

System_String_o * CustomLogic_CustomLogicManager__TryParseLogic(System_String_o *source,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  long lVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source_00;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Int32_array *pSVar4;
  bool_conflict bVar5;
  CustomLogic_CustomLogicCompiler_o *pCVar6;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *__this_04;
  MethodInfo *pMVar7;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *tokens;
  CustomLogic_CustomLogicParser_o *pCVar8;
  CustomLogic_CustomLogicSourceFile_o *pCVar9;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_01;
  System_Collections_Generic_List_TSource__o *__this_05;
  System_String_o *pSVar10;
  long lVar11;
  CustomLogic_CustomLogicLexer_o *__this_06;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *pCVar12;
  System_String_o *extraout_RAX;
  long *plVar13;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  System_String_o **ppSVar14;
  undefined8 *puVar15;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *method_06;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *method_07;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings;
  undefined1 auVar16 [12];
  undefined8 in_stack_ffffffffffffff30;
  System_String_o *value;
  System_String_o *pSVar17;
  _union_249689 _Var18;
  Il2CppType **ppIStack_90;
  _union_249689 a_Stack_80 [2];
  System_String_o *pSStack_70;
  System_Collections_Generic_Dictionary_string__BaseSetting__o *pSStack_68;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_60;
  System_Int32_array *pSStack_58;
  System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *pSStack_50;
  CustomLogic_CustomLogicCompiler_o *pCStack_48;
  code *pcStack_40;
  
  if (g_data_057adbfa == '\0') {
    pcStack_40 = (code *)0x4260b63;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    pcStack_40 = (code *)0x4260b6f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    pcStack_40 = (code *)0x4260b7b;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    pcStack_40 = (code *)0x4260b87;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    pcStack_40 = (code *)0x4260b93;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    pcStack_40 = (code *)0x4260b9f;
    il2cpp_runtime_helper_023445d0(&"UserSource.cl");
    pcStack_40 = (code *)0x4260bab;
    il2cpp_runtime_helper_023445d0(&"");
    pcStack_40 = (code *)0x4260bb7;
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    g_data_057adbfa = '\x01';
  }
  pcStack_40 = (code *)0x4260bcd;
  pCVar6 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  pcStack_40 = (code *)0x4260bd8;
  CustomLogic_CustomLogicCompiler___ctor(pCVar6,method);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    pcStack_40 = (code *)0x4260bf0;
    il2cpp_runtime_helper_02337ed0();
  }
  tokens = *(System_Collections_Generic_Dictionary_Entry_TKey__TValue__array **)
            (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  puVar15 = &TypeInfo_CustomLogicSourceFile;
  pcStack_40 = (code *)0x4260c0e;
  __this_04 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile)
  ;
  pSVar4 = "BaseLogic.cl";
  pcStack_40 = (code *)0x4260c25;
  System_Object___ctor((Il2CppObject *)__this_04,(MethodInfo *)0x0);
  (__this_04->fields)._buckets = pSVar4;
  pcStack_40 = (code *)0x4260c35;
  il2cpp_runtime_helper_022b4080(&__this_04->fields,pSVar4);
  modeSettings = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)&(__this_04->fields)._entries
  ;
  (__this_04->fields)._entries = tokens;
  pcStack_40 = (code *)0x4260c45;
  method_06 = tokens;
  il2cpp_runtime_helper_022b4080();
  *(undefined1 (*) [16])&(__this_04->fields)._count = ZEXT416(1);
  if (pCVar6 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pcStack_40 = (code *)0x4260c67;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (pCVar6,(CustomLogic_CustomLogicSourceFile_o *)__this_04,method_00);
    pcStack_40 = (code *)0x4260c70;
    pMVar7 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    tokens = "UserSource.cl";
    pcStack_40 = (code *)0x4260c87;
    System_Object___ctor((Il2CppObject *)pMVar7,(MethodInfo *)0x0);
    ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar7->invoker_method)->_Name_k__BackingField =
         (System_String_o *)tokens;
    pcStack_40 = (code *)0x4260c97;
    il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar7->invoker_method,tokens);
    pMVar7->name = (char *)source;
    pcStack_40 = (code *)0x4260ca7;
    il2cpp_runtime_helper_022b4080(&pMVar7->name,source);
    pMVar7->klass = (Il2CppClass *)0x4;
    pMVar7->return_type = (Il2CppType *)0x0;
    pcStack_40 = (code *)0x4260cc0;
    CustomLogic_CustomLogicCompiler__AddSourceFile
              (pCVar6,(CustomLogic_CustomLogicSourceFile_o *)pMVar7,method_01);
    pcStack_40 = (code *)0x4260cc8;
    source = CustomLogic_CustomLogicCompiler__Compile(pCVar6,pMVar7);
    pcStack_40 = (code *)0x4260cda;
    __this_04 = (System_Collections_Generic_Dictionary_string__BaseSetting__o *)
                il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    pcStack_40 = (code *)0x4260ceb;
    method_06 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)source;
    modeSettings = __this_04;
    CustomLogic_CustomLogicLexer___ctor((CustomLogic_CustomLogicLexer_o *)__this_04,source,pCVar6,in_RCX);
    if (__this_04 != (System_Collections_Generic_Dictionary_string__BaseSetting__o *)0x0) {
      pcStack_40 = (code *)0x4260cfc;
      tokens = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
               CustomLogic_CustomLogicLexer__GetTokens
                         ((CustomLogic_CustomLogicLexer_o *)__this_04,(MethodInfo *)method_06);
      pcStack_40 = (code *)0x4260d0e;
      pCVar8 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
      pcStack_40 = (code *)0x4260d1f;
      CustomLogic_CustomLogicParser___ctor
                (pCVar8,(System_Collections_Generic_List_CustomLogicToken__o *)tokens,pCVar6,in_RCX);
      modeSettings = *(System_Collections_Generic_Dictionary_string__BaseSetting__o **)
                      &(__this_04->fields)._freeCount;
      puVar15 = &g_data_057b9b70;
      method_06 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)
                  **(undefined8 **)(g_data_057b9c00 + 0xb8);
      pcStack_40 = (code *)0x4260d42;
      bVar5 = System_String__op_Inequality
                        ((System_String_o *)modeSettings,(System_String_o *)method_06,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        source = (System_String_o *)0x0;
        if (pCVar8 == (CustomLogic_CustomLogicParser_o *)0x0) goto label_04260d9b;
        pcStack_40 = (code *)0x4260d59;
        CustomLogic_CustomLogicParser__GetStartAst(pCVar8,(MethodInfo *)method_06);
        pcStack_40 = (code *)0x4260d75;
        bVar5 = System_String__op_Inequality
                          ((pCVar8->fields).Error,(System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),
                           (MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          ppSVar14 = (System_String_o **)&"";
        }
        else {
          ppSVar14 = &(pCVar8->fields).Error;
        }
      }
      else {
        ppSVar14 = (System_String_o **)&(__this_04->fields)._freeCount;
      }
      return *ppSVar14;
    }
  }
label_04260d9b:
  pcStack_40 = CustomLogic_CustomLogicManager__StartLogic;
  il2cpp_runtime_helper_022b2c90();
  pSStack_58 = pSVar4;
  method_07 = method_06;
  pSStack_68 = __this_04;
  pSStack_60 = tokens;
  pSStack_50 = (System_Collections_Generic_Dictionary_Entry_TKey__TValue__array *)source;
  pCStack_48 = pCVar6;
  pcStack_40 = (code *)puVar15;
  if (g_data_057adbfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_StringSetting_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_StartLogic_b__49_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"MapLogic");
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    il2cpp_runtime_helper_023445d0(&".addon");
    g_data_057adbfb = '\x01';
  }
  _Var18.genericMethod = (Il2CppObject *)0x0;
  value = (System_String_o *)0x0;
  pCVar6 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar6,(MethodInfo *)method_07);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(CustomLogic_CustomLogicCompiler_o **)(lVar3 + 0x40) = pCVar6;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x40);
  pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  pCVar6 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
  pCVar9 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
  pSVar4 = "BaseLogic.cl";
  System_Object___ctor((Il2CppObject *)pCVar9,(MethodInfo *)0x0);
  (pCVar9->fields)._Name_k__BackingField = (System_String_o *)pSVar4;
  il2cpp_runtime_helper_022b4080(&pCVar9->fields,pSVar4);
  (pCVar9->fields)._Content_k__BackingField = pSVar17;
  il2cpp_runtime_helper_022b4080(&(pCVar9->fields)._Content_k__BackingField,pSVar17);
  (pCVar9->fields)._Type_k__BackingField = 1;
  (pCVar9->fields)._StartLine_k__BackingField = 0;
  (pCVar9->fields)._EndLine_k__BackingField = 0;
  (pCVar9->fields)._MapLogicOffset_k__BackingField = 0;
  if (pCVar6 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar6,pCVar9,method_02);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) &&
       (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) {
      source_00 = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar3 + 0x18);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (selector == (System_Func_TSource__TResult__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_StringSetting_string);
        System_Func_object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TResult__o **)(lVar3 + 8) = selector;
        il2cpp_runtime_helper_022b4080(lVar3 + 8,selector);
      }
      source_01 = System_Linq_Enumerable__Select_object__object_(source_00,selector,MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
      in_RCX = (MethodInfo *)&MethodInfo_List_1_System_String_ToList_String;
      __this_05 = System_Linq_Enumerable__ToList_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_01,MethodInfo_List_1_System_String_ToList_String);
      if (__this_05 != (System_Collections_Generic_List_TSource__o *)0x0) {
        in_RCX = (MethodInfo *)&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)a_Stack_80,
                   (System_Collections_Generic_List_object__o *)__this_05,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        _Var18 = a_Stack_80[0];
        do {
          do {
            __this_00.fields._8_8_ = value;
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
            __this_00.fields._current = _Var18.genericMethod;
            bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff40);
            if ((char)bVar5 == '\0') {
              __this_01.fields._8_8_ = value;
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
              __this_01.fields._current = _Var18.genericMethod;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
              goto label_042612db;
            }
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar5 = Map_BuiltinLevels__IsAddonBuiltin(pSStack_70,(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18);
              if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                in_RCX = MethodInfo_Boolean_TryGetValue;
                System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (__this,(Il2CppObject *)pSStack_70,(Il2CppObject **)&stack0xffffffffffffff38,
                           (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
                goto label_04261202;
              }
              il2cpp_runtime_helper_022b2c90();
              goto label_0426172b;
            }
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value = Map_BuiltinLevels__LoadAddon(pSStack_70,(MethodInfo *)0x0);
label_04261202:
            bVar5 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          } while ((char)bVar5 != '\0');
          pSVar17 = value;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar17 = value;
          }
          pCVar6 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
          pSVar10 = System_String__Concat_3ae5ba0(pSStack_70,".addon",(MethodInfo *)0x0);
          value = pSVar17;
          pCVar9 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
          System_Object___ctor((Il2CppObject *)pCVar9,(MethodInfo *)0x0);
          (pCVar9->fields)._Name_k__BackingField = pSVar10;
          il2cpp_runtime_helper_022b4080(&pCVar9->fields,pSVar10);
          (pCVar9->fields)._Content_k__BackingField = pSVar17;
          il2cpp_runtime_helper_022b4080(&(pCVar9->fields)._Content_k__BackingField,pSVar17);
          ppIStack_90 = SUB168(ZEXT416(2),0);
          *(Il2CppType ***)&(pCVar9->fields)._Type_k__BackingField = ppIStack_90;
          (pCVar9->fields)._EndLine_k__BackingField = 0;
          (pCVar9->fields)._MapLogicOffset_k__BackingField = 0;
          if (pCVar6 == (CustomLogic_CustomLogicCompiler_o *)0x0) {
label_0426172b:
            il2cpp_runtime_helper_022b2c90();
            break;
          }
          CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar6,pCVar9,method_03);
        } while( true );
      }
    }
  }
label_04261730:
  do {
    auVar16 = il2cpp_runtime_helper_022b2c90();
    if (auVar16._8_4_ != 1) {
label_0426185d:
      __this_03.fields._8_8_ = value;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
      __this_03.fields._current = _Var18.genericMethod;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
      _Unwind_Resume(auVar16._0_8_);
    }
    plVar13 = (long *)__cxa_begin_catch(auVar16._0_8_);
    lVar3 = *plVar13;
    __cxa_end_catch();
    __this_02.fields._8_8_ = value;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff30;
    __this_02.fields._current = _Var18.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff40);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_0426185d;
    }
label_042612db:
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  } while (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x38), lVar3 == 0)) || (*(long *)(lVar3 + 0x30) == 0));
  pSVar17 = *(System_String_o **)(*(long *)(lVar3 + 0x30) + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar5 = System_String__op_Equality
                    (pSVar17,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
label_042614c6:
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar11 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
      if (lVar11 != 0) goto label_04261377;
      goto label_042614c6;
    }
    lVar11 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (lVar11 == 0) goto label_042614c6;
label_04261377:
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar11 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
      if (lVar11 == 0) goto label_04261730;
    }
    pSVar17 = *(System_String_o **)(lVar11 + 0x40);
    bVar5 = System_String__IsNullOrEmpty(pSVar17,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') goto label_042614c6;
    if (*(long *)(lVar3 + 0x28) == 0) goto label_04261730;
    pSVar10 = *(System_String_o **)(*(long *)(lVar3 + 0x28) + 0x18);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar6 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
    pSVar10 = System_String__Concat_3ae5ba0(pSVar10,".txt",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar11 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (lVar11 == 0) goto label_04261730;
    iVar1 = *(int32_t *)(lVar11 + 0x50);
    pCVar9 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    System_Object___ctor((Il2CppObject *)pCVar9,(MethodInfo *)0x0);
    (pCVar9->fields)._Name_k__BackingField = pSVar10;
    il2cpp_runtime_helper_022b4080(&pCVar9->fields,pSVar10);
    (pCVar9->fields)._Content_k__BackingField = pSVar17;
    il2cpp_runtime_helper_022b4080(&(pCVar9->fields)._Content_k__BackingField,pSVar17);
    (pCVar9->fields)._Type_k__BackingField = 3;
    (pCVar9->fields)._StartLine_k__BackingField = 0;
    (pCVar9->fields)._EndLine_k__BackingField = 0;
    (pCVar9->fields)._MapLogicOffset_k__BackingField = iVar1;
    if (pCVar6 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_04261730;
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar6,pCVar9,method_04);
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar7 = (MethodInfo *)0x0;
  bVar5 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28),(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    if (*(long *)(lVar3 + 0x30) == 0) goto label_04261730;
    pSVar17 = *(System_String_o **)(*(long *)(lVar3 + 0x30) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar7 = *(MethodInfo **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28);
    bVar5 = System_String__op_Equality(pSVar17,(System_String_o *)pMVar7,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar6 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
      pSVar10 = System_String__Concat_3ae5ba0(pSVar17,".cl",(MethodInfo *)0x0);
      pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
      pMVar7 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
      System_Object___ctor((Il2CppObject *)pMVar7,(MethodInfo *)0x0);
      ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar7->invoker_method)->_Name_k__BackingField = pSVar10;
      il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar7->invoker_method,pSVar10);
      pMVar7->name = (char *)pSVar17;
      il2cpp_runtime_helper_022b4080(&pMVar7->name,pSVar17);
      pMVar7->klass = (Il2CppClass *)0x4;
      pMVar7->return_type = (Il2CppType *)0x0;
      if (pCVar6 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_04261730;
      CustomLogic_CustomLogicCompiler__AddSourceFile
                (pCVar6,(CustomLogic_CustomLogicSourceFile_o *)pMVar7,method_05);
    }
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar6 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
  if (pCVar6 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pMVar7 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(pCVar6,pMVar7);
    pCVar6 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
    __this_06 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_06,(System_String_o *)pMVar7,pCVar6,in_RCX);
    if (__this_06 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      pMVar7 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(__this_06,pMVar7);
      pCVar6 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
      pCVar8 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor
                (pCVar8,(System_Collections_Generic_List_CustomLogicToken__o *)pMVar7,pCVar6,in_RCX);
      if (pCVar8 != (CustomLogic_CustomLogicParser_o *)0x0) {
        start = CustomLogic_CustomLogicParser__GetStartAst(pCVar8,pMVar7);
        pCVar6 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
        pCVar12 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
        in_RCX = (MethodInfo *)0x0;
        CustomLogic_CustomLogicEvaluator___ctor(pCVar12,start,pCVar6,(MethodInfo *)0x0);
        lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
        *(CustomLogic_CustomLogicEvaluator_o **)(lVar3 + 8) = pCVar12;
        il2cpp_runtime_helper_022b4080(lVar3 + 8,pCVar12);
        pCVar12 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (pCVar12 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          CustomLogic_CustomLogicEvaluator__Start
                    (pCVar12,modeSettings,
                     (System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *)
                     method_06,(MethodInfo *)0x0);
          return extraout_RAX;
        }
      }
    }
  }
  goto label_04261730;
}


// CustomLogic.CustomLogicManager$$StartLogic
// il2cpp: void CustomLogic_CustomLogicManager__StartLogic (System_Collections_Generic_Dictionary_string__BaseSetting__o* modeSettings, System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o* addonSettings, const MethodInfo* method);
// 0x4260da0

void CustomLogic_CustomLogicManager__StartLogic
               (System_Collections_Generic_Dictionary_string__BaseSetting__o *modeSettings,
               System_Collections_Generic_Dictionary_string__Dictionary_string__BaseSetting___o *addonSettings
               ,MethodInfo *method)

{
  int32_t iVar1;
  int iVar2;
  long lVar3;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar4;
  CustomLogic_CustomLogicCompiler_o *pCVar5;
  CustomLogic_CustomLogicSourceFile_o *pCVar6;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *source_00;
  System_Collections_Generic_List_TSource__o *__this_04;
  System_String_o *pSVar7;
  long lVar8;
  MethodInfo *pMVar9;
  CustomLogic_CustomLogicLexer_o *__this_05;
  CustomLogic_CustomLogicParser_o *__this_06;
  CustomLogic_CustomLogicStartAst_o *start;
  CustomLogic_CustomLogicEvaluator_o *pCVar10;
  long *plVar11;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  undefined1 auVar12 [12];
  undefined8 in_stack_ffffffffffffff68;
  System_String_o *value;
  System_String_o *pSVar13;
  _union_249689 _Var14;
  Il2CppType **local_58;
  _union_249689 local_48 [2];
  System_String_o *local_38;
  
  pMVar9 = (MethodInfo *)addonSettings;
  if (g_data_057adbfb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinLevels);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicCompiler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicEvaluator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicLexer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicParser);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicSourceFile);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String_ToList_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_StringSetting_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_MapManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting_get_Value);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_StartLogic_b__49_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"MapLogic");
    il2cpp_runtime_helper_023445d0(&".txt");
    il2cpp_runtime_helper_023445d0(&".cl");
    il2cpp_runtime_helper_023445d0(&"BaseLogic.cl");
    il2cpp_runtime_helper_023445d0(&".addon");
    g_data_057adbfb = '\x01';
  }
  _Var14.genericMethod = (Il2CppObject *)0x0;
  value = (System_String_o *)0x0;
  pCVar5 = (CustomLogic_CustomLogicCompiler_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicCompiler);
  CustomLogic_CustomLogicCompiler___ctor(pCVar5,pMVar9);
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(CustomLogic_CustomLogicCompiler_o **)(lVar3 + 0x40) = pCVar5;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x40);
  pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x38);
  pCVar5 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
  pCVar6 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
  pSVar7 = "BaseLogic.cl";
  System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
  (pCVar6->fields)._Name_k__BackingField = pSVar7;
  il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
  (pCVar6->fields)._Content_k__BackingField = pSVar13;
  il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Content_k__BackingField,pSVar13);
  (pCVar6->fields)._Type_k__BackingField = 1;
  (pCVar6->fields)._StartLine_k__BackingField = 0;
  (pCVar6->fields)._EndLine_k__BackingField = 0;
  (pCVar6->fields)._MapLogicOffset_k__BackingField = 0;
  if (pCVar5 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar5,pCVar6,method_00);
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
    if (((lVar3 != 0) && (lVar3 = *(long *)(lVar3 + 0x38), lVar3 != 0)) &&
       (lVar3 = *(long *)(lVar3 + 0x48), lVar3 != 0)) {
      source = *(System_Collections_Generic_IEnumerable_TSource__o **)(lVar3 + 0x18);
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (selector == (System_Func_TSource__TResult__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_StringSetting_string);
        System_Func_object__object____ctor();
        lVar3 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_TSource__TResult__o **)(lVar3 + 8) = selector;
        il2cpp_runtime_helper_022b4080(lVar3 + 8,selector);
      }
      source_00 = System_Linq_Enumerable__Select_object__object_(source,selector,MethodInfo_IEnumerable_1_System_String_Select_StringSetting_String);
      in_RCX = (MethodInfo *)&MethodInfo_List_1_System_String_ToList_String;
      __this_04 = System_Linq_Enumerable__ToList_object_
                            ((System_Collections_Generic_IEnumerable_TSource__o *)source_00,MethodInfo_List_1_System_String_ToList_String);
      if (__this_04 != (System_Collections_Generic_List_TSource__o *)0x0) {
        in_RCX = (MethodInfo *)&MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator;
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                   (System_Collections_Generic_List_object__o *)__this_04,MethodInfo_List_1_T_Enumerator_System_String_GetEnumerator);
        _Var14 = local_48[0];
        do {
          do {
            __this_00.fields._8_8_ = value;
            __this_00.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
            __this_00.fields._current = _Var14.genericMethod;
            bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this_00,(MethodInfo_321A1D0 *)&stack0xffffffffffffff78);
            if ((char)bVar4 == '\0') {
              __this_01.fields._8_8_ = value;
              __this_01.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
              __this_01.fields._current = _Var14.genericMethod;
              System_Collections_Generic_List_Enumerator_object___Dispose
                        (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
              goto label_042612db;
            }
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            bVar4 = Map_BuiltinLevels__IsAddonBuiltin(local_38,(MethodInfo *)0x0);
            if ((char)bVar4 == '\0') {
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                        (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x18);
              if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
                in_RCX = MethodInfo_Boolean_TryGetValue;
                System_Collections_Generic_Dictionary_object__object___TryGetValue
                          (__this,(Il2CppObject *)local_38,(Il2CppObject **)&stack0xffffffffffffff70,
                           (MethodInfo_3106990 *)MethodInfo_Boolean_TryGetValue);
                goto label_04261202;
              }
              il2cpp_runtime_helper_022b2c90();
              goto label_0426172b;
            }
            if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            value = Map_BuiltinLevels__LoadAddon(local_38,(MethodInfo *)0x0);
label_04261202:
            bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          } while ((char)bVar4 != '\0');
          pSVar13 = value;
          if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar13 = value;
          }
          pCVar5 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
          pSVar7 = System_String__Concat_3ae5ba0(local_38,".addon",(MethodInfo *)0x0);
          value = pSVar13;
          pCVar6 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
          System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
          (pCVar6->fields)._Name_k__BackingField = pSVar7;
          il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
          (pCVar6->fields)._Content_k__BackingField = pSVar13;
          il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Content_k__BackingField,pSVar13);
          local_58 = SUB168(ZEXT416(2),0);
          *(Il2CppType ***)&(pCVar6->fields)._Type_k__BackingField = local_58;
          (pCVar6->fields)._EndLine_k__BackingField = 0;
          (pCVar6->fields)._MapLogicOffset_k__BackingField = 0;
          if (pCVar5 == (CustomLogic_CustomLogicCompiler_o *)0x0) {
label_0426172b:
            il2cpp_runtime_helper_022b2c90();
            break;
          }
          CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar5,pCVar6,method_01);
        } while( true );
      }
    }
  }
label_04261730:
  do {
    auVar12 = il2cpp_runtime_helper_022b2c90();
    if (auVar12._8_4_ != 1) {
label_0426185d:
      __this_03.fields._8_8_ = value;
      __this_03.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
      __this_03.fields._current = _Var14.genericMethod;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_03,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
      _Unwind_Resume(auVar12._0_8_);
    }
    plVar11 = (long *)__cxa_begin_catch(auVar12._0_8_);
    lVar3 = *plVar11;
    __cxa_end_catch();
    __this_02.fields._8_8_ = value;
    __this_02.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
    __this_02.fields._current = _Var14.genericMethod;
    System_Collections_Generic_List_Enumerator_object___Dispose
              (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffff78);
    if (lVar3 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar3);
      goto label_0426185d;
    }
label_042612db:
    lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x50);
  } while (((lVar3 == 0) || (lVar3 = *(long *)(lVar3 + 0x38), lVar3 == 0)) || (*(long *)(lVar3 + 0x30) == 0));
  pSVar13 = *(System_String_o **)(*(long *)(lVar3 + 0x30) + 0x18);
  if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_String__op_Equality
                    (pSVar13,*(System_String_o **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28),(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_042614c6:
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
      if (lVar8 != 0) goto label_04261377;
      goto label_042614c6;
    }
    lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (lVar8 == 0) goto label_042614c6;
label_04261377:
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
      if (lVar8 == 0) goto label_04261730;
    }
    pSVar13 = *(System_String_o **)(lVar8 + 0x40);
    bVar4 = System_String__IsNullOrEmpty(pSVar13,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') goto label_042614c6;
    if (*(long *)(lVar3 + 0x28) == 0) goto label_04261730;
    pSVar7 = *(System_String_o **)(*(long *)(lVar3 + 0x28) + 0x18);
    if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pCVar5 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
    pSVar7 = System_String__Concat_3ae5ba0(pSVar7,".txt",(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_MapManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar8 = *(long *)(*(long *)(TypeInfo_MapManager + 0xb8) + 8);
    if (lVar8 == 0) goto label_04261730;
    iVar1 = *(int32_t *)(lVar8 + 0x50);
    pCVar6 = (CustomLogic_CustomLogicSourceFile_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
    System_Object___ctor((Il2CppObject *)pCVar6,(MethodInfo *)0x0);
    (pCVar6->fields)._Name_k__BackingField = pSVar7;
    il2cpp_runtime_helper_022b4080(&pCVar6->fields,pSVar7);
    (pCVar6->fields)._Content_k__BackingField = pSVar13;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._Content_k__BackingField,pSVar13);
    (pCVar6->fields)._Type_k__BackingField = 3;
    (pCVar6->fields)._StartLine_k__BackingField = 0;
    (pCVar6->fields)._EndLine_k__BackingField = 0;
    (pCVar6->fields)._MapLogicOffset_k__BackingField = iVar1;
    if (pCVar5 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_04261730;
    CustomLogic_CustomLogicCompiler__AddSourceFile(pCVar5,pCVar6,method_02);
    iVar2 = *(int *)(TypeInfo_CustomLogicManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar9 = (MethodInfo *)0x0;
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28),(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (*(long *)(lVar3 + 0x30) == 0) goto label_04261730;
    pSVar13 = *(System_String_o **)(*(long *)(lVar3 + 0x30) + 0x18);
    if (*(int *)(TypeInfo_BuiltinLevels + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar9 = *(MethodInfo **)(*(long *)(TypeInfo_BuiltinLevels + 0xb8) + 0x28);
    bVar4 = System_String__op_Equality(pSVar13,(System_String_o *)pMVar9,(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') {
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pCVar5 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
      pSVar7 = System_String__Concat_3ae5ba0(pSVar13,".cl",(MethodInfo *)0x0);
      pSVar13 = *(System_String_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x28);
      pMVar9 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicSourceFile);
      System_Object___ctor((Il2CppObject *)pMVar9,(MethodInfo *)0x0);
      ((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar9->invoker_method)->_Name_k__BackingField = pSVar7;
      il2cpp_runtime_helper_022b4080((CustomLogic_CustomLogicSourceFile_Fields *)&pMVar9->invoker_method,pSVar7);
      pMVar9->name = (char *)pSVar13;
      il2cpp_runtime_helper_022b4080(&pMVar9->name,pSVar13);
      pMVar9->klass = (Il2CppClass *)0x4;
      pMVar9->return_type = (Il2CppType *)0x0;
      if (pCVar5 == (CustomLogic_CustomLogicCompiler_o *)0x0) goto label_04261730;
      CustomLogic_CustomLogicCompiler__AddSourceFile
                (pCVar5,(CustomLogic_CustomLogicSourceFile_o *)pMVar9,method_03);
    }
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pCVar5 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
  if (pCVar5 != (CustomLogic_CustomLogicCompiler_o *)0x0) {
    pMVar9 = (MethodInfo *)CustomLogic_CustomLogicCompiler__Compile(pCVar5,pMVar9);
    pCVar5 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
    __this_05 = (CustomLogic_CustomLogicLexer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicLexer);
    CustomLogic_CustomLogicLexer___ctor(__this_05,(System_String_o *)pMVar9,pCVar5,in_RCX);
    if (__this_05 != (CustomLogic_CustomLogicLexer_o *)0x0) {
      pMVar9 = (MethodInfo *)CustomLogic_CustomLogicLexer__GetTokens(__this_05,pMVar9);
      pCVar5 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
      __this_06 = (CustomLogic_CustomLogicParser_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicParser);
      CustomLogic_CustomLogicParser___ctor
                (__this_06,(System_Collections_Generic_List_CustomLogicToken__o *)pMVar9,pCVar5,in_RCX);
      if (__this_06 != (CustomLogic_CustomLogicParser_o *)0x0) {
        start = CustomLogic_CustomLogicParser__GetStartAst(__this_06,pMVar9);
        pCVar5 = *(CustomLogic_CustomLogicCompiler_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x40);
        pCVar10 = (CustomLogic_CustomLogicEvaluator_o *)il2cpp_runtime_helper_023052d0(TypeInfo_CustomLogicEvaluator);
        in_RCX = (MethodInfo *)0x0;
        CustomLogic_CustomLogicEvaluator___ctor(pCVar10,start,pCVar5,(MethodInfo *)0x0);
        lVar3 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
        *(CustomLogic_CustomLogicEvaluator_o **)(lVar3 + 8) = pCVar10;
        il2cpp_runtime_helper_022b4080(lVar3 + 8,pCVar10);
        pCVar10 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (pCVar10 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          CustomLogic_CustomLogicEvaluator__Start(pCVar10,modeSettings,addonSettings,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  goto label_04261730;
}


// CustomLogic.CustomLogicManager$$FixedUpdate
// il2cpp: void CustomLogic_CustomLogicManager__FixedUpdate (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x4261900

void CustomLogic_CustomLogicManager__FixedUpdate(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  Settings_KeybindSetting_o *__this_00;
  char cVar7;
  bool_conflict bVar8;
  System_Threading_CancellationTokenSource_o *pSVar9;
  CustomLogic_CustomLogicEvaluator_o *pCVar10;
  Photon_Pun_MonoBehaviourPunCallbacks_o *pPVar11;
  float fVar12;
  float fStack_40;
  float fStack_3c;
  float fStack_30;
  float fStack_2c;
  
  if (g_data_057adbfc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbfc = '\x01';
    if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) != 0) goto label_0426191d;
label_0426197f:
    il2cpp_runtime_helper_02337ed0();
    pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
  }
  else {
    if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) == 0) goto label_0426197f;
label_0426191d:
    pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
  }
  if (pCVar10 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) != 0) {
label_0426194e:
    CustomLogic_CustomLogicEvaluator__OnTick(pCVar10,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_02337ed0();
  pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
  if (pCVar10 != (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_0426194e;
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adbfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057adbfd = '\x01';
    if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) != 0) goto label_042619cb;
label_04261b13:
    il2cpp_runtime_helper_02337ed0();
    pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
    if (pCVar10 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_04261b2f;
label_042619df:
    if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
      if (pCVar10 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_04261cb8;
    }
    CustomLogic_CustomLogicEvaluator__OnFrame(pCVar10,(MethodInfo *)0x0);
    pSVar9 = TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource;
    if (*(char *)&pSVar9[1].monitor == '\0') {
      if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource;
      }
      if (*(char *)((long)&pSVar9[1].monitor + 1) == '\0') goto label_04261b2f;
    }
    if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource;
    uVar3 = *(undefined8 *)((long)&pSVar9[1].fields._kernelEvent + 4);
    fVar1 = *(float *)((long)&pSVar9[1].fields._registeredCallbacksLists + 4);
    uVar4 = *(undefined8 *)&pSVar9[1].fields.field_0x1c;
    fVar2 = *(float *)((long)&pSVar9[1].fields._executingCallback + 4);
    fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pPVar11 = TypeInfo_CustomLogicManager;
    fStack_40 = (float)uVar4;
    fStack_3c = (float)((ulong)uVar4 >> 0x20);
    fStack_30 = (float)uVar3;
    fStack_2c = (float)((ulong)uVar3 >> 0x20);
    pSVar9 = TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource;
    *(ulong *)((long)&pSVar9[1].fields._kernelEvent + 4) =
         CONCAT44(fVar12 * fStack_3c + fStack_2c,fVar12 * fStack_40 + fStack_30);
    *(float *)((long)&pSVar9[1].fields._registeredCallbacksLists + 4) = fVar2 * fVar12 + fVar1;
    iVar5 = *(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4);
  }
  else {
    if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) == 0) goto label_04261b13;
label_042619cb:
    pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
    if (pCVar10 != (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_042619df;
label_04261b2f:
    iVar5 = *(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4);
    pPVar11 = TypeInfo_CustomLogicManager;
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar11 = TypeInfo_CustomLogicManager;
  }
  pSVar9 = pPVar11[4].fields.m_CancellationTokenSource;
  if (*(char *)&pSVar9[1].fields._kernelEvent == '\0') {
label_04261b5c:
    iVar5 = *(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4);
joined_r0x04261b63:
    if (iVar5 == 0) goto label_04261bc0;
label_04261b65:
    cVar7 = *(char *)&pPVar11[4].fields.m_CancellationTokenSource[1].monitor;
  }
  else {
    if (*(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar9 = TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource;
      cVar7 = *(char *)&pSVar9[1].monitor;
      pPVar11 = TypeInfo_CustomLogicManager;
    }
    else {
      cVar7 = *(char *)&pSVar9[1].monitor;
    }
    if (cVar7 != '\0') goto label_04261b5c;
    if (*(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar11 = TypeInfo_CustomLogicManager;
      *(undefined1 *)&TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource[1].fields._kernelEvent = 0;
      iVar5 = *(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4);
      goto joined_r0x04261b63;
    }
    *(undefined1 *)&pSVar9[1].fields._kernelEvent = 0;
    if (*(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4) != 0) goto label_04261b65;
label_04261bc0:
    il2cpp_runtime_helper_02337ed0();
    cVar7 = *(char *)&TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource[1].monitor;
    pPVar11 = TypeInfo_CustomLogicManager;
  }
  if (cVar7 != '\0') {
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x88), lVar6 == 0)) {
label_04261cb8:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adbfe == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057adbfe = '\x01';
        iVar5 = *(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4);
      }
      else {
        iVar5 = *(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4);
      }
      if (iVar5 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
        pPVar11 = TypeInfo_CustomLogicManager;
      }
      else {
        pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
        pPVar11 = TypeInfo_CustomLogicManager;
      }
      if (pCVar10 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        TypeInfo_CustomLogicManager = pPVar11;
        if (*(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
          if (pCVar10 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            Photon_Pun_MonoBehaviourPunCallbacks___ctor(pPVar11,(MethodInfo *)0x0);
            return;
          }
        }
        CustomLogic_CustomLogicEvaluator__OnLateFrame(pCVar10,(MethodInfo *)0x0);
        return;
      }
      TypeInfo_CustomLogicManager = pPVar11;
      return;
    }
    if (*(char *)(lVar6 + 0x11) != '\0') {
      iVar5 = *(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4);
joined_r0x04261c99:
      if (iVar5 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pPVar11 = TypeInfo_CustomLogicManager;
      }
      *(undefined1 *)&pPVar11[4].fields.m_CancellationTokenSource[1].fields._kernelEvent = 1;
      return;
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
      cVar7 = (char)bVar8;
    }
    else {
      bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
      cVar7 = (char)bVar8;
    }
    if ((cVar7 == '\0') && (bVar8 = UI_InGameMenu__InMenu((MethodInfo *)0x0), (char)bVar8 == '\0')) {
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if ((lVar6 == 0) ||
         ((lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0 ||
          (__this_00 = *(Settings_KeybindSetting_o **)(lVar6 + 0xc0),
          __this_00 == (Settings_KeybindSetting_o *)0x0)))) goto label_04261cb8;
      bVar8 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        iVar5 = *(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4);
        pPVar11 = TypeInfo_CustomLogicManager;
        goto joined_r0x04261c99;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicManager$$Update
// il2cpp: void CustomLogic_CustomLogicManager__Update (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x42619a0

void CustomLogic_CustomLogicManager__Update(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  undefined8 uVar4;
  int iVar5;
  long lVar6;
  Settings_KeybindSetting_o *__this_00;
  char cVar7;
  bool_conflict bVar8;
  System_Threading_CancellationTokenSource_o *pSVar9;
  CustomLogic_CustomLogicEvaluator_o *pCVar10;
  Photon_Pun_MonoBehaviourPunCallbacks_o *pPVar11;
  float fVar12;
  float fStack_38;
  float fStack_34;
  float fStack_28;
  float fStack_24;
  
  if (g_data_057adbfd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_Value);
    g_data_057adbfd = '\x01';
    if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) != 0) goto label_042619cb;
label_04261b13:
    il2cpp_runtime_helper_02337ed0();
    pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
    if (pCVar10 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_04261b2f;
label_042619df:
    if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
      if (pCVar10 == (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_04261cb8;
    }
    CustomLogic_CustomLogicEvaluator__OnFrame(pCVar10,(MethodInfo *)0x0);
    pSVar9 = TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource;
    if (*(char *)&pSVar9[1].monitor == '\0') {
      if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar9 = TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource;
      }
      if (*(char *)((long)&pSVar9[1].monitor + 1) == '\0') goto label_04261b2f;
    }
    if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar9 = TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource;
    uVar3 = *(undefined8 *)((long)&pSVar9[1].fields._kernelEvent + 4);
    fVar1 = *(float *)((long)&pSVar9[1].fields._registeredCallbacksLists + 4);
    uVar4 = *(undefined8 *)&pSVar9[1].fields.field_0x1c;
    fVar2 = *(float *)((long)&pSVar9[1].fields._executingCallback + 4);
    fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    pPVar11 = TypeInfo_CustomLogicManager;
    fStack_38 = (float)uVar4;
    fStack_34 = (float)((ulong)uVar4 >> 0x20);
    fStack_28 = (float)uVar3;
    fStack_24 = (float)((ulong)uVar3 >> 0x20);
    pSVar9 = TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource;
    *(ulong *)((long)&pSVar9[1].fields._kernelEvent + 4) =
         CONCAT44(fVar12 * fStack_34 + fStack_24,fVar12 * fStack_38 + fStack_28);
    *(float *)((long)&pSVar9[1].fields._registeredCallbacksLists + 4) = fVar2 * fVar12 + fVar1;
    iVar5 = *(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4);
  }
  else {
    if (*(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4) == 0) goto label_04261b13;
label_042619cb:
    pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
    if (pCVar10 != (CustomLogic_CustomLogicEvaluator_o *)0x0) goto label_042619df;
label_04261b2f:
    iVar5 = *(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4);
    pPVar11 = TypeInfo_CustomLogicManager;
  }
  if (iVar5 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pPVar11 = TypeInfo_CustomLogicManager;
  }
  pSVar9 = pPVar11[4].fields.m_CancellationTokenSource;
  if (*(char *)&pSVar9[1].fields._kernelEvent == '\0') {
label_04261b5c:
    iVar5 = *(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4);
joined_r0x04261b63:
    if (iVar5 == 0) goto label_04261bc0;
label_04261b65:
    cVar7 = *(char *)&pPVar11[4].fields.m_CancellationTokenSource[1].monitor;
  }
  else {
    if (*(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar9 = TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource;
      cVar7 = *(char *)&pSVar9[1].monitor;
      pPVar11 = TypeInfo_CustomLogicManager;
    }
    else {
      cVar7 = *(char *)&pSVar9[1].monitor;
    }
    if (cVar7 != '\0') goto label_04261b5c;
    if (*(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pPVar11 = TypeInfo_CustomLogicManager;
      *(undefined1 *)&TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource[1].fields._kernelEvent = 0;
      iVar5 = *(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4);
      goto joined_r0x04261b63;
    }
    *(undefined1 *)&pSVar9[1].fields._kernelEvent = 0;
    if (*(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4) != 0) goto label_04261b65;
label_04261bc0:
    il2cpp_runtime_helper_02337ed0();
    cVar7 = *(char *)&TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource[1].monitor;
    pPVar11 = TypeInfo_CustomLogicManager;
  }
  if (cVar7 != '\0') {
    lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x20);
    if ((lVar6 == 0) || (lVar6 = *(long *)(lVar6 + 0x88), lVar6 == 0)) {
label_04261cb8:
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adbfe == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
        g_data_057adbfe = '\x01';
        iVar5 = *(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4);
      }
      else {
        iVar5 = *(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4);
      }
      if (iVar5 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
        pPVar11 = TypeInfo_CustomLogicManager;
      }
      else {
        pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
        pPVar11 = TypeInfo_CustomLogicManager;
      }
      if (pCVar10 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        TypeInfo_CustomLogicManager = pPVar11;
        if (*(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pCVar10 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
          if (pCVar10 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            Photon_Pun_MonoBehaviourPunCallbacks___ctor(pPVar11,(MethodInfo *)0x0);
            return;
          }
        }
        CustomLogic_CustomLogicEvaluator__OnLateFrame(pCVar10,(MethodInfo *)0x0);
        return;
      }
      TypeInfo_CustomLogicManager = pPVar11;
      return;
    }
    if (*(char *)(lVar6 + 0x11) != '\0') {
      iVar5 = *(int *)((long)&pPVar11[5].fields.m_CancellationTokenSource + 4);
joined_r0x04261c99:
      if (iVar5 == 0) {
        il2cpp_runtime_helper_02337ed0();
        pPVar11 = TypeInfo_CustomLogicManager;
      }
      *(undefined1 *)&pPVar11[4].fields.m_CancellationTokenSource[1].fields._kernelEvent = 1;
      return;
    }
    if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
      cVar7 = (char)bVar8;
    }
    else {
      bVar8 = GameManagers_ChatManager__IsChatActive((MethodInfo *)0x0);
      cVar7 = (char)bVar8;
    }
    if ((cVar7 == '\0') && (bVar8 = UI_InGameMenu__InMenu((MethodInfo *)0x0), (char)bVar8 == '\0')) {
      lVar6 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x38);
      if ((lVar6 == 0) ||
         ((lVar6 = *(long *)(lVar6 + 0x20), lVar6 == 0 ||
          (__this_00 = *(Settings_KeybindSetting_o **)(lVar6 + 0xc0),
          __this_00 == (Settings_KeybindSetting_o *)0x0)))) goto label_04261cb8;
      bVar8 = Settings_KeybindSetting__GetKeyDown(__this_00,0,(MethodInfo *)0x0);
      if ((char)bVar8 != '\0') {
        iVar5 = *(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4);
        pPVar11 = TypeInfo_CustomLogicManager;
        goto joined_r0x04261c99;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicManager$$LateUpdate
// il2cpp: void CustomLogic_CustomLogicManager__LateUpdate (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x4261cc0

void CustomLogic_CustomLogicManager__LateUpdate(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  int iVar1;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  Photon_Pun_MonoBehaviourPunCallbacks_o *__this_01;
  
  if (g_data_057adbfe == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    g_data_057adbfe = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_CustomLogicManager[5].fields.m_CancellationTokenSource + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this_00 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
    __this_01 = TypeInfo_CustomLogicManager;
  }
  else {
    __this_00 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
    __this_01 = TypeInfo_CustomLogicManager;
  }
  if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    TypeInfo_CustomLogicManager = __this_01;
    if (*(int *)((long)&__this_01[5].fields.m_CancellationTokenSource + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this_00 = (TypeInfo_CustomLogicManager[4].fields.m_CancellationTokenSource)->monitor;
      if (__this_00 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        Photon_Pun_MonoBehaviourPunCallbacks___ctor(__this_01,(MethodInfo *)0x0);
        return;
      }
    }
    CustomLogic_CustomLogicEvaluator__OnLateFrame(__this_00,(MethodInfo *)0x0);
    return;
  }
  TypeInfo_CustomLogicManager = __this_01;
  return;
}


// CustomLogic.CustomLogicManager$$.ctor
// il2cpp: void CustomLogic_CustomLogicManager___ctor (CustomLogic_CustomLogicManager_o* __this, const MethodInfo* method);
// 0x4261d60

void CustomLogic_CustomLogicManager___ctor(CustomLogic_CustomLogicManager_o *__this,MethodInfo *method)

{
  Photon_Pun_MonoBehaviourPunCallbacks___ctor
            ((Photon_Pun_MonoBehaviourPunCallbacks_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicManager$$.cctor
// il2cpp: void CustomLogic_CustomLogicManager___cctor (const MethodInfo* method);
// 0x4261d70

void CustomLogic_CustomLogicManager___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  
  if (g_data_057adbff == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Settings_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    g_data_057adbff = '\x01';
  }
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_System_String);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x18) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18,pSVar2);
  *(undefined8 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0x78) = 0;
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_KeybindSetting);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_Settings_KeybindSetting);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x88) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x88,pSVar3);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_KeybindSetting);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_Settings_KeybindSetting);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0x90) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x90,pSVar3);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_System_Object);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0x98) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x98,pSVar2);
  pSVar2 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor(pSVar2,MethodInfo_Dictionary_2_System_String_System_Object);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar1 + 0xa0) = pSVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 0xa0,pSVar2);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0xa8) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0xa8,pSVar3);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_System_String);
  lVar1 = *(long *)(TypeInfo_CustomLogicManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar1 + 0xb0) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 0xb0,pSVar3);
  *(undefined1 *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 0xb8) = 0;
  return;
}


