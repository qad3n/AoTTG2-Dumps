// Type: ApplicationManagers.VoiceChatManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/VoiceChatManager.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/ApplicationManagers/VoiceChatManager.cs  [CHANGED since prior version]
// --------------------------------

// ApplicationManagers.VoiceChatManager$$get_MicrophoneDevices
// il2cpp: System_String_array* ApplicationManagers_VoiceChatManager__get_MicrophoneDevices (const MethodInfo* method);
// 0x41a86e0

System_String_array *
ApplicationManagers_VoiceChatManager__get_MicrophoneDevices(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *element;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  
  if (DAT_05704cd0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Append_String);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray_String);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Common");
    il2cpp_init_method_metadata();
    DAT_05704cd0 = '\x01';
  }
  pSVar1 = UnityEngine_Microphone__get_devices((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  element = UI_UIManager__GetLocale
                      ("Common","None","","","",
                       (MethodInfo *)0x0);
  source = System_Linq_Enumerable__Append<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar1,
                      (Il2CppObject *)element,MethodInfo_IEnumerable_1_System_String__Append_String);
  pSVar1 = (System_String_array *)System_Linq_Enumerable__ToArray<object>(source,MethodInfo_String___ToArray_String);
  return pSVar1;
}


// ApplicationManagers.VoiceChatManager$$get_DefaultDevice
// il2cpp: System_String_o* ApplicationManagers_VoiceChatManager__get_DefaultDevice (const MethodInfo* method);
// 0x41a87b0

System_String_o * ApplicationManagers_VoiceChatManager__get_DefaultDevice(MethodInfo *method)

{
  System_String_array *pSVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704cd1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Common");
    il2cpp_init_method_metadata();
    DAT_05704cd1 = '\x01';
  }
  pSVar1 = UnityEngine_Microphone__get_devices((MethodInfo *)0x0);
  if (pSVar1 != (System_String_array *)0x0) {
    if (pSVar1->max_length == 0) {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = UI_UIManager__GetLocale
                         ("Common","None","","","",
                          (MethodInfo *)0x0);
      return pSVar2;
    }
    pSVar1 = UnityEngine_Microphone__get_devices((MethodInfo *)0x0);
    if (pSVar1 != (System_String_array *)0x0) {
      if ((int)pSVar1->max_length != 0) {
        return pSVar1->m_Items[0];
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.VoiceChatManager$$Init
// il2cpp: void ApplicationManagers_VoiceChatManager__Init (const MethodInfo* method);
// 0x41a8870

void ApplicationManagers_VoiceChatManager__Init(MethodInfo *method)

{
  long lVar1;
  Photon_Voice_Unity_VoiceConnection_o *__this;
  Il2CppObject *pIVar2;
  Photon_Voice_Unity_VoiceLogger_o *pPVar3;
  
  if (DAT_05704cd2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_PunVoiceClient_AddComponent_PunVoiceClient);
    il2cpp_init_method_metadata(&MethodInfo_VoiceChatManager_CreateSingleton_VoiceChatManage);
    il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
    DAT_05704cd2 = '\x01';
  }
  if (*(int *)(TypeInfo_VoiceChatManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = Utility_SingletonFactory__CreateSingleton<object>
                     ((Il2CppObject *)**(undefined8 **)(TypeInfo_VoiceChatManager + 0xb8),MethodInfo_VoiceChatManager_CreateSingleton_VoiceChatManage);
  **(undefined8 **)(TypeInfo_VoiceChatManager + 0xb8) = pIVar2;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_VoiceChatManager + 0xb8),pIVar2);
  pIVar2 = Unity_VisualScripting_ComponentHolderProtocol__AddComponent<object>
                     ((UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_VoiceChatManager + 0xb8),MethodInfo_PunVoiceClient_AddComponent_PunVoiceClient);
  lVar1 = *(long *)(TypeInfo_VoiceChatManager + 0xb8);
  *(Il2CppObject **)(lVar1 + 8) = pIVar2;
  il2cpp_runtime_glue(lVar1 + 8);
  __this = *(Photon_Voice_Unity_VoiceConnection_o **)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
  if (__this != (Photon_Voice_Unity_VoiceConnection_o *)0x0) {
    pPVar3 = Photon_Voice_Unity_VoiceConnection__get_VoiceLogger(__this,(MethodInfo *)0x0);
    if (pPVar3 != (Photon_Voice_Unity_VoiceLogger_o *)0x0) {
      (pPVar3->fields).LogLevel = '\x01';
      lVar1 = *(long *)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 8);
      if (lVar1 != 0) {
        *(undefined1 *)(lVar1 + 0xc4) = 0;
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.VoiceChatManager$$ApplySoundSettings
// il2cpp: void ApplicationManagers_VoiceChatManager__ApplySoundSettings (const MethodInfo* method);
// 0x419e960

void ApplicationManagers_VoiceChatManager__ApplySoundSettings(MethodInfo *method)

{
  UnityEngine_Object_o *x;
  long *plVar1;
  System_Collections_Generic_List_Enumerator_object__o __this;
  System_Collections_Generic_List_Enumerator_object__o __this_00;
  bool_conflict bVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  GameManagers_PhotonVoiceSync_o *pGVar5;
  GameManagers_PhotonVoiceSync_o *__this_01;
  
  if (DAT_05704cd3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_PhotonVoiceSync_get_Current);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_GameManagers_PhotonVoiceSyn);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_SceneLoader);
    DAT_05704cd3 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  pGVar5 = (GameManagers_PhotonVoiceSync_o *)0x0;
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar2 == '\0') &&
     (plVar1 = *(long **)(*(long *)(TypeInfo_SceneLoader + 0xb8) + 0x10), plVar1 != (long *)0x0)) {
    if ((*(byte *)(TypeInfo_InGameManager + 0x130) <= *(byte *)(*plVar1 + 0x130)) &&
       (*(long *)(*(long *)(*plVar1 + 200) + -8 + (ulong)*(byte *)(TypeInfo_InGameManager + 0x130) * 8) ==
        TypeInfo_InGameManager)) {
      if ((System_Collections_Generic_List_object__o *)plVar1[0xb] ==
          (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)plVar1[0xb],MethodInfo_List_1_T__Enumerator_GameManagers_PhotonVoiceSyn);
      while( true ) {
        __this_01 = pGVar5;
        __this.fields._8_8_ = pIVar4;
        __this.fields._list = pSVar3;
        __this.fields._current = (Il2CppObject *)__this_01;
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') break;
        pGVar5 = __this_01;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar2 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,
                           (MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          if (__this_01 == (GameManagers_PhotonVoiceSync_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          GameManagers_PhotonVoiceSync__Apply(__this_01,(MethodInfo *)0x0);
        }
      }
      __this_00.fields._8_8_ = pIVar4;
      __this_00.fields._list = pSVar3;
      __this_00.fields._current = (Il2CppObject *)__this_01;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_00,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    }
  }
  return;
}


// ApplicationManagers.VoiceChatManager$$GetInputVolume
// il2cpp: float ApplicationManagers_VoiceChatManager__GetInputVolume (const MethodInfo* method);
// 0x41a8980

float ApplicationManagers_VoiceChatManager__GetInputVolume(MethodInfo *method)

{
  long lVar1;
  float fVar2;
  float fVar3;
  
  if (DAT_05704cd4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704cd4 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
  if ((lVar1 != 0) && (*(long *)(lVar1 + 0xb0) != 0)) {
    fVar2 = 0.0;
    if (*(int *)(*(long *)(lVar1 + 0xb0) + 0x14) != 2) {
      if (*(long *)(lVar1 + 0xb8) == 0) goto LAB_041a8a19;
      fVar2 = *(float *)(*(long *)(lVar1 + 0xb8) + 0x14);
      fVar3 = 1.0;
      if (fVar2 <= 1.0) {
        fVar3 = fVar2;
      }
      fVar2 = (float)(-(uint)(0.0 <= fVar2) & (uint)(fVar3 * 4.0));
    }
    return fVar2;
  }
LAB_041a8a19:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.VoiceChatManager$$GetOuputVolume
// il2cpp: float ApplicationManagers_VoiceChatManager__GetOuputVolume (Photon_Pun_PhotonView_o* view, const MethodInfo* method);
// 0x41a8a20

float ApplicationManagers_VoiceChatManager__GetOuputVolume
                (Photon_Pun_PhotonView_o *view,MethodInfo *method)

{
  int32_t item;
  long lVar1;
  System_Collections_Generic_HashSet_int__o *__this;
  System_Collections_Generic_Dictionary_int__float__o *pSVar2;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_05704cd5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Item);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Value);
    DAT_05704cd5 = '\x01';
  }
  if (((view != (Photon_Pun_PhotonView_o *)0x0) &&
      (lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80), lVar1 != 0)) &&
     (lVar1 = *(long *)(lVar1 + 0xb0), lVar1 != 0)) {
    if (*(int *)(lVar1 + 0x14) == 2) {
      return 0.0;
    }
    item = (view->fields).ownerActorNr;
    if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(System_Collections_Generic_HashSet_int__o **)(*(long *)(TypeInfo_InGameManager + 0xb8) + 0x30);
    if (__this != (System_Collections_Generic_HashSet_int__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet<int>__Contains(__this,item,MethodInfo_Boolean_Contains);
      if ((char)bVar3 != '\0') {
        return 0.0;
      }
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = *(System_Collections_Generic_Dictionary_int__float__o **)
                (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
      if (pSVar2 != (System_Collections_Generic_Dictionary_int__float__o *)0x0) {
        bVar3 = System_Collections_Generic_Dictionary<int__float>__ContainsKey
                          (pSVar2,item,MethodInfo_Boolean_ContainsKey);
        if ((char)bVar3 == '\0') {
          fVar4 = 1.0;
        }
        else {
          if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar2 = *(System_Collections_Generic_Dictionary_int__float__o **)
                    (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x38);
          if (pSVar2 == (System_Collections_Generic_Dictionary_int__float__o *)0x0)
          goto LAB_041a8be4;
          fVar4 = System_Collections_Generic_Dictionary<int__float>__get_Item
                            (pSVar2,item,MethodInfo_Single_get_Item);
        }
        lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x80);
        if ((lVar1 != 0) && (lVar1 = *(long *)(lVar1 + 0xc0), lVar1 != 0)) {
          fVar4 = fVar4 * *(float *)(lVar1 + 0x14);
          if (fVar4 < 0.0) {
            return 0.0;
          }
          if (1.0 < fVar4) {
            return 1.0;
          }
          return fVar4;
        }
      }
    }
  }
LAB_041a8be4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.VoiceChatManager$$.ctor
// il2cpp: void ApplicationManagers_VoiceChatManager___ctor (ApplicationManagers_VoiceChatManager_o* __this, const MethodInfo* method);
// 0x41a8bf0

void ApplicationManagers_VoiceChatManager___ctor
               (ApplicationManagers_VoiceChatManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.VoiceChatManager$$.cctor
// il2cpp: void ApplicationManagers_VoiceChatManager___cctor (const MethodInfo* method);
// 0x41a8c00

void ApplicationManagers_VoiceChatManager___cctor(MethodInfo *method)

{
  if (DAT_05704cd6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_VoiceChatManager);
    DAT_05704cd6 = '\x01';
  }
  *(undefined4 *)(*(long *)(TypeInfo_VoiceChatManager + 0xb8) + 0x10) = 0x3f800000;
  return;
}


