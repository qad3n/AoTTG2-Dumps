// Type: ApplicationManagers.VoiceChatManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/VoiceChatManager.cs
// Prior real C# source (older reference): Assets/Scripts/ApplicationManagers/VoiceChatManager.cs
// --------------------------------

// ApplicationManagers.VoiceChatManager$$get_MicrophoneDevices
// il2cpp: System_String_array* ApplicationManagers_VoiceChatManager__get_MicrophoneDevices (const MethodInfo* method);
// 0x44c16a0

System_String_array * ApplicationManagers_VoiceChatManager__get_MicrophoneDevices(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *element;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  
  if (g_data_057aea9e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_IEnumerable_1_System_String_Append_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Common");
    il2cpp_runtime_helper_023445d0();
    g_data_057aea9e = '\x01';
  }
  pSVar1 = UnityEngine_Microphone__get_devices((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  element = UI_UIManager__GetLocale
                      ("Common","None","","","",(MethodInfo *)0x0);
  source = System_Linq_Enumerable__Append_object_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,(Il2CppObject *)element,
                      MethodInfo_IEnumerable_1_System_String_Append_String);
  pSVar1 = (System_String_array *)System_Linq_Enumerable__ToArray_object_(source,MethodInfo_String_ToArray_String);
  return pSVar1;
}


// ApplicationManagers.VoiceChatManager$$get_DefaultDevice
// il2cpp: System_String_o* ApplicationManagers_VoiceChatManager__get_DefaultDevice (const MethodInfo* method);
// 0x44c1770

System_String_o * ApplicationManagers_VoiceChatManager__get_DefaultDevice(MethodInfo *method)

{
  int32_t item;
  long lVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  Il2CppObject *pIVar4;
  Photon_Voice_Unity_VoiceLogger_o *pPVar5;
  System_String_o *pSVar6;
  undefined4 extraout_var;
  System_String_o *extraout_RAX;
  Photon_Voice_Unity_VoiceConnection_o *__this_00;
  Photon_Voice_Unity_VoiceConnection_o *__this_01;
  undefined4 extraout_XMM0_Da;
  undefined4 uVar7;
  
  if (g_data_057aea9f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Common");
    il2cpp_runtime_helper_023445d0();
    g_data_057aea9f = '\x01';
  }
  pSVar3 = UnityEngine_Microphone__get_devices((MethodInfo *)0x0);
  if (pSVar3 == (System_String_array *)0x0) {
label_044c1821:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (pSVar3->max_length == 0) {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar6 = UI_UIManager__GetLocale
                         ("Common","None","","","",(MethodInfo *)0x0);
      return pSVar6;
    }
    pSVar3 = UnityEngine_Microphone__get_devices((MethodInfo *)0x0);
    if (pSVar3 == (System_String_array *)0x0) goto label_044c1821;
    if ((int)pSVar3->max_length != 0) {
      return pSVar3->m_Items[0];
    }
  }
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aeaa0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_PunVoiceClient_AddComponent_PunVoiceClient);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VoiceChatManager_CreateSingleton_VoiceChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    g_data_057aeaa0 = '\x01';
  }
  if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar4 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_VoiceChatManager + 0xb8),MethodInfo_VoiceChatManager_CreateSingleton_VoiceChatManager);
  **(undefined8 **)(TypeInfo_VoiceChatManager + 0xb8) = pIVar4;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_VoiceChatManager + 0xb8),pIVar4);
  pIVar4 = Unity_VisualScripting_ComponentHolderProtocol__AddComponent_object_
                     ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_VoiceChatManager + 0xb8),MethodInfo_PunVoiceClient_AddComponent_PunVoiceClient);
  lVar1 = *(long *)(TypeInfo_VoiceChatManager + 0xb8);
  *(Il2CppObject **)(lVar1 + 8) = pIVar4;
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  __this_00 = *(Photon_Voice_Unity_VoiceConnection_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
  if ((__this_00 != (Photon_Voice_Unity_VoiceConnection_o *)0x0) &&
     (pPVar5 = Photon_Voice_Unity_VoiceConnection__get_VoiceLogger(__this_00,(MethodInfo *)0x0),
     pPVar5 != (Photon_Voice_Unity_VoiceLogger_o *)0x0)) {
    (pPVar5->fields).LogLevel = '\x01';
    pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
    if (pSVar6 != (System_String_o *)0x0) {
      *(undefined1 *)((long)&pSVar6[8].klass + 4) = 0;
      return pSVar6;
    }
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_022b2c90();
  uVar7 = extraout_XMM0_Da;
  if (g_data_057aeaa2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    __this_00 = (Photon_Voice_Unity_VoiceConnection_o *)&MethodInfo_Int32_get_Value;
    uVar7 = il2cpp_runtime_helper_023445d0();
    g_data_057aeaa2 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0xb0) != 0)) &&
     ((uVar7 = 0, *(int *)(*(long *)(lVar1 + 0xb0) + 0x14) == 2 || (*(long *)(lVar1 + 0xb8) != 0)))) {
    return pSVar6;
  }
  il2cpp_runtime_helper_022b2c90(uVar7);
  __this_01 = __this_00;
  if (g_data_057aeaa3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    __this_01 = (Photon_Voice_Unity_VoiceConnection_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeaa3 = '\x01';
  }
  if (((__this_00 != (Photon_Voice_Unity_VoiceConnection_o *)0x0) &&
      (lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80), lVar1 != 0)) &&
     (pSVar6 = *(System_String_o **)(lVar1 + 0xb0), pSVar6 != (System_String_o *)0x0)) {
    if (*(int *)&(pSVar6->fields)._firstChar == 2) {
      return pSVar6;
    }
    item = *(int32_t *)&(__this_00->fields).primaryRecorder;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
    __this_01 = (Photon_Voice_Unity_VoiceConnection_o *)0x0;
    if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_int___Contains(__this,item,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        return (System_String_o *)CONCAT44(extraout_var,bVar2);
      }
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = *(Photon_Voice_Unity_VoiceConnection_o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
      if (__this_01 != (Photon_Voice_Unity_VoiceConnection_o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                          ((System_Collections_Generic_Dictionary_int__float__o *)__this_01,item,MethodInfo_Boolean_ContainsKey)
        ;
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_01 = *(Photon_Voice_Unity_VoiceConnection_o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
          if (__this_01 == (Photon_Voice_Unity_VoiceConnection_o *)0x0) goto label_044c1ba4;
          System_Collections_Generic_Dictionary_int__float___get_Item
                    ((System_Collections_Generic_Dictionary_int__float__o *)__this_01,item,MethodInfo_Single_get_Item);
        }
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar1 != 0) && (pSVar6 = *(System_String_o **)(lVar1 + 0xc0), pSVar6 != (System_String_o *)0x0))
        {
          return pSVar6;
        }
      }
    }
  }
label_044c1ba4:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.VoiceChatManager$$Init
// il2cpp: void ApplicationManagers_VoiceChatManager__Init (const MethodInfo* method);
// 0x44c1830

void ApplicationManagers_VoiceChatManager__Init(MethodInfo *method)

{
  int32_t item;
  long lVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  Photon_Voice_Unity_VoiceLogger_o *pPVar4;
  Photon_Voice_Unity_VoiceConnection_o *__this_00;
  Photon_Voice_Unity_VoiceConnection_o *__this_01;
  undefined4 uVar5;
  
  if (g_data_057aeaa0 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_PunVoiceClient_AddComponent_PunVoiceClient);
    il2cpp_runtime_helper_023445d0(&MethodInfo_VoiceChatManager_CreateSingleton_VoiceChatManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    g_data_057aeaa0 = '\x01';
  }
  if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar3 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_VoiceChatManager + 0xb8),MethodInfo_VoiceChatManager_CreateSingleton_VoiceChatManager);
  **(undefined8 **)(TypeInfo_VoiceChatManager + 0xb8) = pIVar3;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_VoiceChatManager + 0xb8),pIVar3);
  pIVar3 = Unity_VisualScripting_ComponentHolderProtocol__AddComponent_object_
                     ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_VoiceChatManager + 0xb8),MethodInfo_PunVoiceClient_AddComponent_PunVoiceClient);
  lVar1 = *(long *)(TypeInfo_VoiceChatManager + 0xb8);
  *(Il2CppObject **)(lVar1 + 8) = pIVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  __this_00 = *(Photon_Voice_Unity_VoiceConnection_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
  if ((__this_00 != (Photon_Voice_Unity_VoiceConnection_o *)0x0) &&
     (pPVar4 = Photon_Voice_Unity_VoiceConnection__get_VoiceLogger(__this_00,(MethodInfo *)0x0),
     pPVar4 != (Photon_Voice_Unity_VoiceLogger_o *)0x0)) {
    (pPVar4->fields).LogLevel = '\x01';
    lVar1 = *(long *)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
    if (lVar1 != 0) {
      *(undefined1 *)(lVar1 + 0xc4) = 0;
      return;
    }
  }
  uVar5 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057aeaa2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    __this_00 = (Photon_Voice_Unity_VoiceConnection_o *)&MethodInfo_Int32_get_Value;
    uVar5 = il2cpp_runtime_helper_023445d0();
    g_data_057aeaa2 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0xb0) != 0)) &&
     ((uVar5 = 0, *(int *)(*(long *)(lVar1 + 0xb0) + 0x14) == 2 || (*(long *)(lVar1 + 0xb8) != 0)))) {
    return;
  }
  il2cpp_runtime_helper_022b2c90(uVar5);
  __this_01 = __this_00;
  if (g_data_057aeaa3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    __this_01 = (Photon_Voice_Unity_VoiceConnection_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeaa3 = '\x01';
  }
  if (((__this_00 != (Photon_Voice_Unity_VoiceConnection_o *)0x0) &&
      (lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0xb0), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x14) == 2) {
      return;
    }
    item = *(int32_t *)&(__this_00->fields).primaryRecorder;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
    __this_01 = (Photon_Voice_Unity_VoiceConnection_o *)0x0;
    if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_int___Contains(__this,item,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        return;
      }
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = *(Photon_Voice_Unity_VoiceConnection_o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
      if (__this_01 != (Photon_Voice_Unity_VoiceConnection_o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                          ((System_Collections_Generic_Dictionary_int__float__o *)__this_01,item,MethodInfo_Boolean_ContainsKey)
        ;
        if ((char)bVar2 != '\0') {
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_01 = *(Photon_Voice_Unity_VoiceConnection_o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
          if (__this_01 == (Photon_Voice_Unity_VoiceConnection_o *)0x0) goto label_044c1ba4;
          System_Collections_Generic_Dictionary_int__float___get_Item
                    ((System_Collections_Generic_Dictionary_int__float__o *)__this_01,item,MethodInfo_Single_get_Item);
        }
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar1 != 0) && (*(long *)(lVar1 + 0xc0) != 0)) {
          return;
        }
      }
    }
  }
label_044c1ba4:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.VoiceChatManager$$ApplySoundSettings
// il2cpp: void ApplicationManagers_VoiceChatManager__ApplySoundSettings (const MethodInfo* method);
// 0x44b7ae0

void ApplicationManagers_VoiceChatManager__ApplySoundSettings(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  long lVar1;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  long *plVar3;
  undefined1 auVar4 [12];
  System_Collections_Generic_List_T__o *pSVar5;
  Il2CppMethodPointer pIVar6;
  GameManagers_PhotonVoiceSync_o *pGVar7;
  GameManagers_PhotonVoiceSync_o *__this_03;
  
  if (g_data_057aeaa1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_PhotonVoiceSync_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_T_Enumerator_GameManagers_PhotonVoiceSync_GetEnum);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SceneLoader);
    g_data_057aeaa1 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar6 = (Il2CppMethodPointer)0x0;
  pGVar7 = (GameManagers_PhotonVoiceSync_o *)0x0;
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') &&
     (plVar3 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10), plVar3 != (long *)0x0)) {
    if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar3 + 0x130)) &&
       (*(long *)(*(long *)(*plVar3 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) == TypeInfo_InGameManager)
       ) {
      if ((System_Collections_Generic_List_object__o *)plVar3[0xb] ==
          (System_Collections_Generic_List_object__o *)0x0) {
label_044b7c8a:
        auVar4 = il2cpp_runtime_helper_022b2c90();
        if (auVar4._8_4_ == 1) {
          plVar3 = (long *)__cxa_begin_catch(auVar4._0_8_);
          lVar1 = *plVar3;
          __cxa_end_catch();
          __this_01.fields._8_8_ = pIVar6;
          __this_01.fields._list = pSVar5;
          __this_01.fields._current = (Il2CppObject *)pGVar7;
          System_Collections_Generic_List_Enumerator_object___Dispose
                    (__this_01,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
          if (lVar1 == 0) {
            return;
          }
          il2cpp_runtime_helper_022fefe0(lVar1);
        }
        __this_02.fields._8_8_ = pIVar6;
        __this_02.fields._list = pSVar5;
        __this_02.fields._current = (Il2CppObject *)pGVar7;
        System_Collections_Generic_List_Enumerator_object___Dispose
                  (__this_02,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
        _Unwind_Resume(auVar4._0_8_);
      }
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)plVar3[0xb],MethodInfo_List_1_T_Enumerator_GameManagers_PhotonVoiceSync_GetEnum);
      while (__this_03 = pGVar7, __this.fields._8_8_ = pIVar6, __this.fields._list = pSVar5,
            __this.fields._current = (Il2CppObject *)__this_03,
            bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                              (__this,(MethodInfo_321A1D0 *)&stack0xffffffffffffffc8), (char)bVar2 != '\0') {
        pGVar7 = __this_03;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_03,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (__this_03 == (GameManagers_PhotonVoiceSync_o *)0x0) {
            il2cpp_runtime_helper_022b2c90();
            goto label_044b7c8a;
          }
          GameManagers_PhotonVoiceSync__Apply(__this_03,(MethodInfo *)0x0);
        }
      }
      __this_00.fields._8_8_ = pIVar6;
      __this_00.fields._list = pSVar5;
      __this_00.fields._current = (Il2CppObject *)__this_03;
      System_Collections_Generic_List_Enumerator_object___Dispose
                (__this_00,(MethodInfo_321A1C0 *)&stack0xffffffffffffffc8);
    }
  }
  return;
}


// ApplicationManagers.VoiceChatManager$$GetInputVolume
// il2cpp: float ApplicationManagers_VoiceChatManager__GetInputVolume (const MethodInfo* method);
// 0x44c1940

float ApplicationManagers_VoiceChatManager__GetInputVolume(MethodInfo *method)

{
  int32_t item;
  long lVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  bool_conflict bVar2;
  MethodInfo *__this_00;
  float fVar3;
  float extraout_XMM0_Da;
  float fVar4;
  
  if (g_data_057aeaa2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    method = (MethodInfo *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeaa2 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xb0) != 0)) {
    if (*(int *)(*(long *)(lVar1 + 0xb0) + 0x14) == 2) {
      return 0.0;
    }
    if (*(long *)(lVar1 + 0xb8) != 0) {
      fVar3 = *(float *)(*(long *)(lVar1 + 0xb8) + 0x14);
      fVar4 = 1.0;
      if (fVar3 <= 1.0) {
        fVar4 = fVar3;
      }
      return (float)(-(uint)(0.0 <= fVar3) & (uint)(fVar4 * 4.0));
    }
  }
  il2cpp_runtime_helper_022b2c90();
  __this_00 = method;
  if (g_data_057aeaa3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    __this_00 = (MethodInfo *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeaa3 = '\x01';
  }
  if (((method != (MethodInfo *)0x0) && (lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80), lVar1 != 0)
      ) && (lVar1 = *(long *)(lVar1 + 0xb0), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x14) == 2) {
      return 0.0;
    }
    item = *(int32_t *)&method[1].parameters;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
    __this_00 = (MethodInfo *)0x0;
    if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_int___Contains(__this,item,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        return 0.0;
      }
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(MethodInfo **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
      if (__this_00 != (MethodInfo *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                          ((System_Collections_Generic_Dictionary_int__float__o *)__this_00,item,MethodInfo_Boolean_ContainsKey)
        ;
        if ((char)bVar2 == '\0') {
          fVar3 = 1.0;
        }
        else {
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = *(MethodInfo **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
          if (__this_00 == (MethodInfo *)0x0) goto label_044c1ba4;
          fVar3 = System_Collections_Generic_Dictionary_int__float___get_Item
                            ((System_Collections_Generic_Dictionary_int__float__o *)__this_00,item,
                             MethodInfo_Single_get_Item);
        }
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xc0), lVar1 != 0)) {
          fVar3 = fVar3 * *(float *)(lVar1 + 0x14);
          if (fVar3 < 0.0) {
            return 0.0;
          }
          if (1.0 < fVar3) {
            return 1.0;
          }
          return fVar3;
        }
      }
    }
  }
label_044c1ba4:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// ApplicationManagers.VoiceChatManager$$GetOuputVolume
// il2cpp: float ApplicationManagers_VoiceChatManager__GetOuputVolume (Photon_Pun_PhotonView_o* view, const MethodInfo* method);
// 0x44c19e0

float ApplicationManagers_VoiceChatManager__GetOuputVolume(Photon_Pun_PhotonView_o *view,MethodInfo *method)

{
  int32_t item;
  long lVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  bool_conflict bVar2;
  Photon_Pun_PhotonView_o *__this_00;
  float fVar3;
  float extraout_XMM0_Da;
  
  __this_00 = view;
  if (g_data_057aeaa3 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Item);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_InGameManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
    __this_00 = (Photon_Pun_PhotonView_o *)&MethodInfo_Int32_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aeaa3 = '\x01';
  }
  if (((view != (Photon_Pun_PhotonView_o *)0x0) &&
      (lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0xb0), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x14) == 2) {
      return 0.0;
    }
    item = (view->fields).ownerActorNr;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
    __this_00 = (Photon_Pun_PhotonView_o *)0x0;
    if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar2 = System_Collections_Generic_HashSet_int___Contains(__this,item,MethodInfo_Boolean_Contains);
      if ((char)bVar2 != '\0') {
        return 0.0;
      }
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(Photon_Pun_PhotonView_o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        bVar2 = System_Collections_Generic_Dictionary_int__float___ContainsKey
                          ((System_Collections_Generic_Dictionary_int__float__o *)__this_00,item,MethodInfo_Boolean_ContainsKey)
        ;
        if ((char)bVar2 == '\0') {
          fVar3 = 1.0;
        }
        else {
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_00 = *(Photon_Pun_PhotonView_o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
          if (__this_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_044c1ba4;
          fVar3 = System_Collections_Generic_Dictionary_int__float___get_Item
                            ((System_Collections_Generic_Dictionary_int__float__o *)__this_00,item,
                             MethodInfo_Single_get_Item);
        }
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xc0), lVar1 != 0)) {
          fVar3 = fVar3 * *(float *)(lVar1 + 0x14);
          if (fVar3 < 0.0) {
            return 0.0;
          }
          if (1.0 < fVar3) {
            return 1.0;
          }
          return fVar3;
        }
      }
    }
  }
label_044c1ba4:
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_00,(MethodInfo *)0x0);
  return extraout_XMM0_Da;
}


// ApplicationManagers.VoiceChatManager$$.ctor
// il2cpp: void ApplicationManagers_VoiceChatManager___ctor (ApplicationManagers_VoiceChatManager_o* __this, const MethodInfo* method);
// 0x44c1bb0

void ApplicationManagers_VoiceChatManager___ctor
               (ApplicationManagers_VoiceChatManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.VoiceChatManager$$.cctor
// il2cpp: void ApplicationManagers_VoiceChatManager___cctor (const MethodInfo* method);
// 0x44c1bc0

void ApplicationManagers_VoiceChatManager___cctor(MethodInfo *method)

{
  if (g_data_057aeaa4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_VoiceChatManager);
    g_data_057aeaa4 = '\x01';
  }
  *(undefined4 *)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 0x10) = 0x3f800000;
  return;
}


