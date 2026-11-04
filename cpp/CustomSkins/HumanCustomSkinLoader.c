// Type: CustomSkins.HumanCustomSkinLoader
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomSkins/HumanCustomSkinLoader.cs
// Prior real C# source (older reference): Assets/Scripts/CustomSkins/CustomSkinLoaders/HumanCustomSkinLoader.cs
// --------------------------------

// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$.ctor
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8___ctor (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8___ctor(CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.IDisposable.Dispose
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_IDisposable_Dispose (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, const MethodInfo* method);
// 0x180547020

void
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_IDisposable_Dispose(CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, MethodInfo* method)

{
  return;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$MoveNext
// il2cpp: bool CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__MoveNext (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, const MethodInfo* method);
// 0x181e7a2a0

bool CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__MoveNext
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o *__this,MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  CustomSkins_HumanCustomSkinLoader_o *__this_00;
  System_Object_array *pSVar3;
  Il2CppObject *obj;
  System_String_o *pSVar4;
  Settings_CustomSkinSettings_o *pSVar5;
  Settings_HumanCustomSkinSettings_o *pSVar6;
  Settings_BoolSetting_o *pSVar7;
  UnityEngine_GameObject_o *pUVar8;
  bool bVar9;
  int32_t *piVar10;
  System_String_o *pSVar11;
  System_String_array *pSVar12;
  Characters_Human_o *x;
  CustomSkins_BaseCustomSkinPart_o *__this_01;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *value;
  Characters_HumanSetup_o *__this_02;
  
  if (Il2CppMethodInitialized_184344f90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_bool_get_Value);
    Il2CppMethodInitialized_184344f90 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  if (iVar1 != 0) {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
    goto label_181e7a3e2;
  }
  pSVar3 = (__this->fields).data;
  (__this->fields).__1__state = -1;
  if (pSVar3 != (System_Object_array *)0x0) {
    if ((int)pSVar3->max_length == 0) {
label_181e7a731:
      ThrowIndexOutOfRangeException();
    }
    if ((__this_00 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) &&
       (obj = pSVar3->m_Items[0], obj != (Il2CppObject *)0x0)) {
      if ((obj->klass->_1).element_class != *(Il2CppClass **)(g_data_184354e08 + 0x40)) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,g_data_184354e08);
      }
      piVar10 = il2cpp_object_unbox(obj);
      (__this_00->fields)._horseViewId = *piVar10;
      pSVar3 = (__this->fields).data;
      if (pSVar3 != (System_Object_array *)0x0) {
        if ((uint)pSVar3->max_length < 2) goto label_181e7a731;
        pSVar4 = (System_String_o *)pSVar3->m_Items[1];
        if (pSVar4 != (System_String_o *)0x0) {
          pSVar11 = (System_String_o *)0x0;
          if ((Il2CppClass *)pSVar4->klass == g_data_184354e50) {
            pSVar11 = pSVar4;
          }
          if (pSVar11 == (System_String_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar4);
          }
          pSVar11 = (System_String_o *)0x0;
          if ((Il2CppClass *)pSVar4->klass == g_data_184354e50) {
            pSVar11 = pSVar4;
          }
          pSVar12 = System_String__Split(pSVar11,0x2c,0,(MethodInfo *)0x0);
          (__this->fields)._skinUrls_5__2 = pSVar12;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._skinUrls_5__2,pSVar12);
          (__this->fields)._partId_5__3 = 0;
          while ((__this->fields)._partId_5__3 < 0x17) {
            pSVar12 = (__this->fields)._skinUrls_5__2;
            if (pSVar12 == (System_String_array *)0x0) goto label_181e7a719;
            if ((int)pSVar12->max_length <= (__this->fields)._partId_5__3) break;
            if ((__this->fields)._partId_5__3 == 0) {
              if (__this_00 == (CustomSkins_HumanCustomSkinLoader_o *)0x0) goto label_181e7a719;
              if (-1 < (__this_00->fields)._horseViewId) goto label_181e7a41d;
            }
            else {
label_181e7a41d:
              if ((__this->fields)._partId_5__3 == 0xc) {
                if ((__this_00 == (CustomSkins_HumanCustomSkinLoader_o *)0x0) ||
                   (pUVar8 = (__this_00->fields)._owner, pUVar8 == (UnityEngine_GameObject_o *)0x0))
                goto label_181e7a719;
                x = UnityEngine_GameObject__GetComponent_object_
                              (pUVar8,(MethodInfo_6F5650 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_Human);
                if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                }
                bVar9 = UnityEngine_Object__op_Inequality
                                  ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
                if (bVar9) {
                  if (x == (Characters_Human_o *)0x0) goto label_181e7a719;
                  bVar9 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)x,(MethodInfo *)0x0);
                  if (bVar9) {
                    bVar9 = (*(x->klass->vtable)._74_IsMine.methodPtr)(x,(x->klass->vtable)._74_IsMine.method)
                    ;
                    if (!bVar9) goto label_181e7a3e2;
                    goto label_181e7a5b5;
                  }
                }
label_181e7a5be:
                __this_01 = (*(__this_00->klass->vtable)._6_GetCustomSkinPart.methodPtr)
                                      (__this_00,(__this->fields)._partId_5__3,
                                       (__this_00->klass->vtable)._6_GetCustomSkinPart.method);
                if (__this_01 != (CustomSkins_BaseCustomSkinPart_o *)0x0) {
                  pSVar12 = (__this->fields)._skinUrls_5__2;
                  if (pSVar12 == (System_String_array *)0x0) goto label_181e7a719;
                  uVar2 = (__this->fields)._partId_5__3;
                  if ((uint)pSVar12->max_length <= uVar2) goto label_181e7a731;
                  bVar9 = System_String__IsNullOrEmpty(pSVar12->m_Items[(int)uVar2],(MethodInfo *)0x0);
                  if (bVar9) {
                    CustomSkins_BaseCustomSkinPart__ResetToDefault(__this_01,(MethodInfo *)0x0);
                  }
                  else {
                    pSVar12 = (__this->fields)._skinUrls_5__2;
                    if (pSVar12 == (System_String_array *)0x0) goto label_181e7a719;
                    uVar2 = (__this->fields)._partId_5__3;
                    if ((uint)pSVar12->max_length <= uVar2) goto label_181e7a731;
                    bVar9 = CustomSkins_BaseCustomSkinPart__LoadCache
                                      (__this_01,pSVar12->m_Items[(int)uVar2],(MethodInfo *)0x0);
                    if (!bVar9) {
                      pSVar12 = (__this->fields)._skinUrls_5__2;
                      if (pSVar12 == (System_String_array *)0x0) goto label_181e7a719;
                      uVar2 = (__this->fields)._partId_5__3;
                      if (uVar2 < (uint)pSVar12->max_length) {
                        routine = CustomSkins_BaseCustomSkinPart__LoadSkin
                                            (__this_01,pSVar12->m_Items[(int)uVar2],(MethodInfo *)0x0);
                        value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                                          ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0)
                        ;
                        (__this->fields).__2__current = (Il2CppObject *)value;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
                        (__this->fields).__1__state = 1;
                        return true;
                      }
                      goto label_181e7a731;
                    }
                  }
                }
              }
              else {
                if ((__this->fields)._partId_5__3 == 10) {
                  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
                  if (((pSVar5 == (Settings_CustomSkinSettings_o *)0x0) ||
                      (pSVar6 = (pSVar5->fields).Human, pSVar6 == (Settings_HumanCustomSkinSettings_o *)0x0))
                     || (pSVar7 = (pSVar6->fields).GasEnabled, pSVar7 == (Settings_BoolSetting_o *)0x0))
                  goto label_181e7a719;
                  if ((pSVar7->fields)._value == false) goto label_181e7a3e2;
                }
                if (((__this->fields)._partId_5__3 == 0x10) || ((__this->fields)._partId_5__3 == 0x12)) {
                  pSVar5 = TypeInfo_Settings_SettingsManager->static_fields->CustomSkinSettings;
                  if ((pSVar5 == (Settings_CustomSkinSettings_o *)0x0) ||
                     ((pSVar6 = (pSVar5->fields).Human, pSVar6 == (Settings_HumanCustomSkinSettings_o *)0x0 ||
                      (pSVar7 = (pSVar6->fields).HookEnabled, pSVar7 == (Settings_BoolSetting_o *)0x0))))
                  goto label_181e7a719;
                  if ((pSVar7->fields)._value == false) goto label_181e7a3e2;
                }
                if ((__this->fields)._partId_5__3 == 0xf) {
                  pSVar12 = (__this->fields)._skinUrls_5__2;
                  if (pSVar12 == (System_String_array *)0x0) goto label_181e7a719;
                  if ((__this->fields)._partId_5__3 < (int)pSVar12->max_length) {
                    uVar2 = (__this->fields)._partId_5__3;
                    if ((uint)pSVar12->max_length <= uVar2) goto label_181e7a731;
                    if (__this_00 == (CustomSkins_HumanCustomSkinLoader_o *)0x0) goto label_181e7a719;
                    System_Single__TryParse
                              (pSVar12->m_Items[(int)uVar2],&(__this_00->fields)._hookLTiling,
                               (MethodInfo *)0x0);
                  }
                }
                else {
                  if ((__this->fields)._partId_5__3 != 0x11) {
label_181e7a5b5:
                    if (__this_00 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) goto label_181e7a5be;
                    goto label_181e7a719;
                  }
                  pSVar12 = (__this->fields)._skinUrls_5__2;
                  uVar2 = (__this->fields)._partId_5__3;
                  if ((uint)pSVar12->max_length <= uVar2) goto label_181e7a731;
                  if (__this_00 == (CustomSkins_HumanCustomSkinLoader_o *)0x0) goto label_181e7a719;
                  System_Single__TryParse
                            (pSVar12->m_Items[(int)uVar2],&(__this_00->fields)._hookRTiling,(MethodInfo *)0x0)
                  ;
                }
              }
            }
label_181e7a3e2:
            piVar10 = &(__this->fields)._partId_5__3;
            *piVar10 = *piVar10 + 1;
          }
          if ((__this_00 != (CustomSkins_HumanCustomSkinLoader_o *)0x0) &&
             (pUVar8 = (__this_00->fields)._owner, pUVar8 != (UnityEngine_GameObject_o *)0x0)) {
            __this_02 = UnityEngine_GameObject__GetComponent_object_
                                  (pUVar8,(MethodInfo_6F5650 *)
                                          MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup);
            if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
            }
            bVar9 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                              );
            if (bVar9) {
              if (__this_02 == (Characters_HumanSetup_o *)0x0) goto label_181e7a719;
              Characters_HumanSetup__ReapplyCharacterEffectsToExistingParts(__this_02,(MethodInfo *)0x0);
            }
            (__this_00->fields).Finished = true;
            return false;
          }
        }
      }
    }
  }
label_181e7a719:
  ThrowNullReferenceException();
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_IEnumerator_Reset (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, const MethodInfo* method);
// 0x181e7a740

void CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_IEnumerator_Reset
               (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_CustomSkins_HumanCustomSkinLoader_LoadSkinsFromRPC_d__8_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomSkins.HumanCustomSkinLoader.<LoadSkinsFromRPC>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_IEnumerator_get_Current (CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8__System_Collections_IEnumerator_get_Current(CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// CustomSkins.HumanCustomSkinLoader$$get_RendererIdPrefix
// il2cpp: System_String_o* CustomSkins_HumanCustomSkinLoader__get_RendererIdPrefix (CustomSkins_HumanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e67b70

System_String_o *
CustomSkins_HumanCustomSkinLoader__get_RendererIdPrefix
          (CustomSkins_HumanCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"human");
    Il2CppMethodInitialized_184344f8b = '\x01';
  }
  return "human";
}


// CustomSkins.HumanCustomSkinLoader$$get_AllowLocalFileTextures
// il2cpp: bool CustomSkins_HumanCustomSkinLoader__get_AllowLocalFileTextures (CustomSkins_HumanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e67a00

bool CustomSkins_HumanCustomSkinLoader__get_AllowLocalFileTextures
               (CustomSkins_HumanCustomSkinLoader_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  UnityEngine_GameObject_o *pUVar2;
  bool bVar3;
  Characters_DummyHuman_o *x;
  Characters_Human_o *x_00;
  
  if (Il2CppMethodInitialized_184344f8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344f8c = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._owner;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_181e67b64;
    x = UnityEngine_GameObject__GetComponent_object_
                  (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_DummyHuman);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar3) {
      return true;
    }
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields)._owner;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._owner;
    if (pUVar2 == (UnityEngine_GameObject_o *)0x0) goto label_181e67b64;
    x_00 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar2,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Human);
  }
  else {
    x_00 = (Characters_Human_o *)0x0;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x_00 == (Characters_Human_o *)0x0) {
label_181e67b64:
      ThrowNullReferenceException();
    }
    bVar3 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)x_00,(MethodInfo *)0x0);
    if (bVar3) {
      bVar3 = (*(x_00->klass->vtable)._74_IsMine.methodPtr)(x_00,(x_00->klass->vtable)._74_IsMine.method);
      return bVar3;
    }
  }
  return false;
}


// CustomSkins.HumanCustomSkinLoader$$LoadSkinsFromRPC
// il2cpp: System_Collections_IEnumerator_o* CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC (CustomSkins_HumanCustomSkinLoader_o* __this, System_Object_array* data, const MethodInfo* method);
// 0x181e67920

System_Collections_IEnumerator_o *
CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC
          (CustomSkins_HumanCustomSkinLoader_o *__this,System_Object_array *data,MethodInfo *method)

{
  CustomSkins_HumanCustomSkinLoader__LoadSkinsFromRPC_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_184344f8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomSkins_HumanCustomSkinLoader_LoadSkinsFromRPC_d__8);
    Il2CppMethodInitialized_184344f8d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomSkins_HumanCustomSkinLoader_LoadSkinsFromRPC_d__8);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
  (__this_00->fields).data = data;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).data,data);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// CustomSkins.HumanCustomSkinLoader$$GetCustomSkinPartPublic
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_HumanCustomSkinLoader__GetCustomSkinPartPublic (CustomSkins_HumanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x1819c4b60

CustomSkins_BaseCustomSkinPart_o*
CustomSkins_HumanCustomSkinLoader__GetCustomSkinPartPublic(CustomSkins_HumanCustomSkinLoader_o* __this, int32_t partId, MethodInfo* method)

{
  (*(__this->klass->vtable)._6_SetContentType.methodPtr)
            (__this,value,(__this->klass->vtable)._6_SetContentType.method);
  return;
}


// CustomSkins.HumanCustomSkinLoader$$GetCustomSkinPart
// il2cpp: CustomSkins_BaseCustomSkinPart_o* CustomSkins_HumanCustomSkinLoader__GetCustomSkinPart (CustomSkins_HumanCustomSkinLoader_o* __this, int32_t partId, const MethodInfo* method);
// 0x181e66a70
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e678a6: xor eax, eax
// asm:   0x181e678a8: jmp 0x181e66fb3

CustomSkins_BaseCustomSkinPart_o *
CustomSkins_HumanCustomSkinLoader__GetCustomSkinPart
          (CustomSkins_HumanCustomSkinLoader_o *__this,int32_t partId,MethodInfo *method)

{
  Characters_HumanSetupMeshes_o *__this_00;
  Characters_HumanSetupTextures_o *__this_01;
  Settings_HumanCustomSet_o *pSVar1;
  Settings_IntSetting_o *pSVar2;
  Characters_HookUseable_o *pCVar3;
  UnityEngine_Object_o *pUVar4;
  bool bVar5;
  Characters_DummyHuman_o *x;
  Characters_Human_o *pCVar6;
  Characters_HumanSetup_o *pCVar7;
  System_Collections_Generic_List_Renderer__o *pSVar8;
  Photon_Pun_PhotonView_o *x_00;
  System_Object_array *pSVar9;
  System_String_o *pSVar10;
  CustomSkins_HumanHairCustomSkinPart_o *__this_02;
  CustomSkins_HumanCostumeCustomSkinPart_o *__this_03;
  CustomSkins_BaseCustomSkinPart_o *__this_04;
  UnityEngine_Transform_o *pUVar11;
  UnityEngine_GameObject_o *pUVar12;
  System_Collections_Generic_List_MeleeWeaponTrail__o *weaponTrails;
  CustomSkins_WeaponTrailCustomSkinPart_o *__this_05;
  CustomSkins_HookCustomSkinPart_o *__this_06;
  System_String_o *pSVar13;
  uint uVar14;
  float tiling;
  int32_t iVar15;
  System_Nullable_Vector2__Fields local_48 [2];
  
  if (Il2CppMethodInitialized_184344f8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_DummyHuman);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_HookCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_HumanCostumeCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_HumanHairCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Renderer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_MeleeWeaponTrail);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_int_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_WeaponTrailCustomSkinPart);
    il2cpp_codegen_initialize_runtime_metadata(&"Could not find HumanSetup component on ");
    il2cpp_codegen_initialize_runtime_metadata(&"3dmg_smoke");
    il2cpp_codegen_initialize_runtime_metadata(&"Body");
    il2cpp_codegen_initialize_runtime_metadata(&"char_cap");
    Il2CppMethodInitialized_184344f8e = '\x01';
  }
  pUVar12 = (__this->fields)._owner;
  if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_181e678ad;
  x = UnityEngine_GameObject__GetComponent_object_
                (pUVar12,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_DummyHuman);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    if (x == (Characters_DummyHuman_o *)0x0) goto label_181e678ad;
    pCVar7 = (x->fields).Setup;
  }
  else {
    pUVar12 = (__this->fields)._owner;
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_181e678ad;
    pCVar6 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar12,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pCVar6 == (Characters_Human_o *)0x0) goto label_181e678ad;
      pCVar7 = (pCVar6->fields).Setup;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        pCVar7 = (pCVar6->fields).Setup;
        goto label_181e66c9d;
      }
    }
    pUVar12 = (__this->fields)._owner;
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_181e678ad;
    pCVar7 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar12,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_HumanSetup
                       );
  }
label_181e66c9d:
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar5 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
    pUVar4 = (UnityEngine_Object_o *)(__this->fields)._owner;
    if (pUVar4 == (UnityEngine_Object_o *)0x0) goto label_181e678ad;
    pSVar13 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0);
    pSVar13 = System_String__Concat_1969e50("Could not find HumanSetup component on ",pSVar13,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
    }
    UnityEngine_Debug__LogError((Il2CppObject *)pSVar13,(MethodInfo *)0x0);
switchD_181e66cff_caseD_f:
    return (CustomSkins_BaseCustomSkinPart_o *)0x0;
  }
  pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)pSVar8,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
  switch(partId) {
  case 0:
    if (-1 < (__this->fields)._horseViewId) {
      x_00 = Photon_Pun_PhotonView__Find((__this->fields)._horseViewId,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        if (x_00 == (Photon_Pun_PhotonView_o *)0x0) goto label_181e678ad;
        pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x_00,(MethodInfo *)0x0);
        pSVar13 = "Body";
        if (Il2CppMethodInitialized_184344f6e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer);
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Renderer_Add)
          ;
          Il2CppMethodInitialized_184344f6e = '\x01';
        }
        if ((pUVar12 == (UnityEngine_GameObject_o *)0x0) ||
           (pSVar9 = UnityEngine_GameObject__GetComponentsInChildren_object__6f5810
                               (pUVar12,(MethodInfo_6F5810 *)
                                        MethodInfo_UnityEngine_GameObject_GetComponentsInChildren_Renderer),
           pSVar9 == (System_Object_array *)0x0)) goto label_181e678ad;
        for (uVar14 = 0; (int)uVar14 < (int)pSVar9->max_length; uVar14 = uVar14 + 1) {
          if ((uint)pSVar9->max_length <= uVar14) {
            ThrowIndexOutOfRangeException();
          }
          if ((UnityEngine_Object_o *)pSVar9->m_Items[(int)uVar14] == (UnityEngine_Object_o *)0x0)
          goto label_181e678ad;
          pSVar10 = UnityEngine_Object__get_name
                              ((UnityEngine_Object_o *)pSVar9->m_Items[(int)uVar14],(MethodInfo *)0x0);
          bVar5 = System_String__op_Equality(pSVar10,pSVar13,(MethodInfo *)0x0);
          if (bVar5) {
            if (pSVar8 == (System_Collections_Generic_List_Renderer__o *)0x0) goto label_181e678ad;
            il2cpp_runtime_helper_180012890(pSVar8);
          }
        }
      }
    }
    pSVar13 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,0,(MethodInfo *)0x0);
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    bVar5 = false;
    goto label_181e672de;
  case 1:
    if (pCVar7 != (Characters_HumanSetup_o *)0x0) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_hair,
                 (MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_hair_1,
                 (MethodInfo *)0x0);
      __this_00 = (pCVar7->fields)._meshes;
      if (__this_00 != (Characters_HumanSetupMeshes_o *)0x0) {
        pSVar13 = Characters_HumanSetupMeshes__GetHairMesh(__this_00,(MethodInfo *)0x0);
        bVar5 = System_String__op_Equality
                          (pSVar13,(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),
                           (MethodInfo *)0x0);
        if (bVar5) {
          pSVar13 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        else {
          __this_01 = (pCVar7->fields)._textures;
          if (__this_01 == (Characters_HumanSetupTextures_o *)0x0) goto label_181e678ad;
          pSVar13 = Characters_HumanSetupTextures__GetHairTexture(__this_01,(MethodInfo *)0x0);
        }
        pSVar10 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                            ((CustomSkins_BaseCustomSkinLoader_o *)__this,1,(MethodInfo *)0x0);
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_HumanHairCustomSkinPart);
        local_48[0].hasValue = false;
        local_48[0]._1_3_ = 0;
        local_48[0].value.fields.x = 0.0;
        local_48[0].value.fields.y = 0.0;
        CustomSkins_HumanHairCustomSkinPart___ctor
                  (__this_02,(CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,pSVar10,1000000,pCVar7,
                   pSVar13,(System_Nullable_Vector2__o *)local_48,(MethodInfo *)0x0);
        return (CustomSkins_BaseCustomSkinPart_o *)__this_02;
      }
    }
    goto label_181e678ad;
  case 2:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_eye,
               (MethodInfo *)0x0);
    iVar15 = 2;
    break;
  case 3:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_glass,
               (MethodInfo *)0x0);
    iVar15 = 3;
    break;
  case 4:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_face,
               (MethodInfo *)0x0);
    iVar15 = 4;
    break;
  case 5:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_hand_l,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_hand_r,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_head,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_chest,
               (MethodInfo *)0x0);
    iVar15 = 5;
    goto label_181e67093;
  case 6:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_arm_l,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_arm_r,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_leg,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_chest_2,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_chest_3,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_upper_body,
               (MethodInfo *)0x0);
    pSVar13 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,6,(MethodInfo *)0x0);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_HumanCostumeCustomSkinPart);
    iVar15 = 2000000;
    goto label_181e670c8;
  case 7:
    if (((pCVar7 == (Characters_HumanSetup_o *)0x0) ||
        (pSVar1 = (pCVar7->fields).CustomSet, pSVar1 == (Settings_HumanCustomSet_o *)0x0)) ||
       (pSVar2 = (pSVar1->fields).Cape, pSVar2 == (Settings_IntSetting_o *)0x0)) goto label_181e678ad;
    if ((pSVar2->fields)._value != 2) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_cape,
                 (MethodInfo *)0x0);
    }
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_brand_1,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_brand_2,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_brand_3,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_brand_4,
               (MethodInfo *)0x0);
    iVar15 = 7;
    break;
  case 8:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_3dmg,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_belt,
               (MethodInfo *)0x0);
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_gas_l,
               (MethodInfo *)0x0);
    if ((pCVar7->fields).Weapon != 2) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_blade_l,
                 (MethodInfo *)0x0);
    }
    iVar15 = 8;
    goto label_181e672b8;
  case 9:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_gas_r,
               (MethodInfo *)0x0);
    if ((pCVar7->fields).Weapon != 2) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_blade_r,
                 (MethodInfo *)0x0);
    }
    iVar15 = 9;
    goto label_181e672b8;
  case 10:
    pUVar12 = (__this->fields)._owner;
    if ((pUVar12 == (UnityEngine_GameObject_o *)0x0) ||
       (pUVar11 = UnityEngine_GameObject__get_transform(pUVar12,(MethodInfo *)0x0),
       pUVar11 == (UnityEngine_Transform_o *)0x0)) goto label_181e678ad;
    pUVar11 = UnityEngine_Transform__Find(pUVar11,"3dmg_smoke",(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pUVar11,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pUVar11 == (UnityEngine_Transform_o *)0x0) goto label_181e678ad;
      pUVar12 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar11,(MethodInfo *)0x0);
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,pUVar12,(MethodInfo *)0x0);
    }
    pSVar13 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,10,(MethodInfo *)0x0);
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    bVar5 = false;
    goto label_181e66f84;
  case 0xb:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    pUVar4 = (UnityEngine_Object_o *)(pCVar7->fields)._part_chest_1;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      pUVar4 = (UnityEngine_Object_o *)(pCVar7->fields)._part_chest_1;
      if ((pUVar4 == (UnityEngine_Object_o *)0x0) ||
         (pSVar13 = UnityEngine_Object__get_name(pUVar4,(MethodInfo *)0x0), pSVar13 == (System_String_o *)0x0)
         ) goto label_181e678ad;
      bVar5 = System_String__Contains(pSVar13,"char_cap",(MethodInfo *)0x0);
      if (bVar5) {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_chest_1,
                   (MethodInfo *)0x0);
      }
    }
    iVar15 = 0xb;
    break;
  case 0xc:
    weaponTrails = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_MeleeWeaponTrail);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)weaponTrails,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_ctor);
    if (pCVar7 != (Characters_HumanSetup_o *)0x0) {
      if ((pCVar7->fields).Weapon == 0) {
        if (weaponTrails == (System_Collections_Generic_List_MeleeWeaponTrail__o *)0x0) goto label_181e678ad;
        il2cpp_runtime_helper_180012890(weaponTrails,(pCVar7->fields).LeftTrail,
                      MethodInfo_System_Collections_Generic_List_MeleeWeaponTrail_Add);
        il2cpp_runtime_helper_180012890(weaponTrails,(pCVar7->fields).RightTrail);
      }
      pSVar13 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                          ((CustomSkins_BaseCustomSkinLoader_o *)__this,0xc,(MethodInfo *)0x0);
      __this_05 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_WeaponTrailCustomSkinPart);
      local_48[0].hasValue = false;
      local_48[0]._1_3_ = 0;
      local_48[0].value.fields.x = 0.0;
      local_48[0].value.fields.y = 0.0;
      CustomSkins_WeaponTrailCustomSkinPart___ctor
                (__this_05,(CustomSkins_BaseCustomSkinLoader_o *)__this,weaponTrails,pSVar13,500000,
                 (System_Nullable_Vector2__o *)local_48,(MethodInfo *)0x0);
      return (CustomSkins_BaseCustomSkinPart_o *)__this_05;
    }
label_181e678ad:
    ThrowNullReferenceException();
  case 0xd:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    if ((pCVar7->fields).Weapon == 2) {
      pUVar4 = (UnityEngine_Object_o *)(pCVar7->fields)._part_blade_l;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_blade_l,
                   (MethodInfo *)0x0);
      }
    }
    iVar15 = 0xd;
    goto label_181e672b8;
  case 0xe:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    if ((pCVar7->fields).Weapon == 2) {
      pUVar4 = (UnityEngine_Object_o *)(pCVar7->fields)._part_blade_r;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar5 = UnityEngine_Object__op_Inequality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar5) {
        CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                  ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_blade_r,
                   (MethodInfo *)0x0);
      }
    }
    iVar15 = 0xe;
    goto label_181e672b8;
  default:
    goto switchD_181e66cff_caseD_f;
  case 0x10:
    pUVar12 = (__this->fields)._owner;
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_181e678ad;
    pCVar6 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar12,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pCVar6 == (Characters_Human_o *)0x0) goto label_181e678ad;
      bVar5 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pCVar6,(MethodInfo *)0x0);
      if ((!bVar5) || ((pCVar6->fields).HookLeft == (Characters_HookUseable_o *)0x0)) goto label_181e676dd;
      pCVar3 = (pCVar6->fields).HookLeft;
      if (pCVar3 == (Characters_HookUseable_o *)0x0) goto label_181e678ad;
      pSVar8 = Characters_HookUseable__GetRenderers(pCVar3,(MethodInfo *)0x0);
    }
    else {
label_181e676dd:
      pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar8,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    }
    pSVar13 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,0x10,(MethodInfo *)0x0);
    tiling = (__this->fields)._hookLTiling;
label_181e6768e:
    __this_06 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_HookCustomSkinPart);
    local_48[0].hasValue = false;
    local_48[0]._1_3_ = 0;
    local_48[0].value.fields.x = 0.0;
    local_48[0].value.fields.y = 0.0;
    CustomSkins_HookCustomSkinPart___ctor
              (__this_06,(CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,pSVar13,500000,tiling,
               (System_Nullable_Vector2__o *)local_48,(MethodInfo *)0x0);
    return (CustomSkins_BaseCustomSkinPart_o *)__this_06;
  case 0x12:
    pUVar12 = (__this->fields)._owner;
    if (pUVar12 == (UnityEngine_GameObject_o *)0x0) goto label_181e678ad;
    pCVar6 = UnityEngine_GameObject__GetComponent_object_
                       (pUVar12,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_Human);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar5) {
      if (pCVar6 == (Characters_Human_o *)0x0) goto label_181e678ad;
      bVar5 = UnityEngine_Behaviour__get_enabled((UnityEngine_Behaviour_o *)pCVar6,(MethodInfo *)0x0);
      if ((!bVar5) || ((pCVar6->fields).HookRight == (Characters_HookUseable_o *)0x0)) goto label_181e67798;
      pCVar3 = (pCVar6->fields).HookRight;
      if (pCVar3 == (Characters_HookUseable_o *)0x0) goto label_181e678ad;
      pSVar8 = Characters_HookUseable__GetRenderers(pCVar3,(MethodInfo *)0x0);
    }
    else {
label_181e67798:
      pSVar8 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Renderer);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)pSVar8,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Renderer_ctor);
    }
    pSVar13 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,0x12,(MethodInfo *)0x0);
    tiling = (__this->fields)._hookRTiling;
    goto label_181e6768e;
  case 0x13:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_hat,
               (MethodInfo *)0x0);
    iVar15 = 0x13;
    goto label_181e67093;
  case 0x14:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_head_decor,
               (MethodInfo *)0x0);
    iVar15 = 0x14;
    goto label_181e67093;
  case 0x15:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    CustomSkins_BaseCustomSkinLoader__AddAllRenderersIfExists
              ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_back,
               (MethodInfo *)0x0);
    iVar15 = 0x15;
label_181e67093:
    pSVar13 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,iVar15,(MethodInfo *)0x0);
    __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_HumanCostumeCustomSkinPart);
    iVar15 = 1000000;
label_181e670c8:
    local_48[0].value.fields.y = 0.0;
    local_48[0].hasValue = false;
    local_48[0]._1_3_ = 0;
    local_48[0].value.fields.x = 0.0;
    CustomSkins_HumanCostumeCustomSkinPart___ctor
              (__this_03,(CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,pSVar13,iVar15,
               (System_Nullable_Vector2__o *)local_48,(MethodInfo *)0x0);
    return (CustomSkins_BaseCustomSkinPart_o *)__this_03;
  case 0x16:
    if (pCVar7 == (Characters_HumanSetup_o *)0x0) goto label_181e678ad;
    bVar5 = Characters_HumanSetup__get_HasCloak(pCVar7,(MethodInfo *)0x0);
    if (bVar5) {
      CustomSkins_BaseCustomSkinLoader__AddRendererIfExists
                ((CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,(pCVar7->fields)._part_cape,
                 (MethodInfo *)0x0);
    }
    iVar15 = 0x16;
label_181e672b8:
    pSVar13 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                        ((CustomSkins_BaseCustomSkinLoader_o *)__this,iVar15,(MethodInfo *)0x0);
    __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
    bVar5 = true;
label_181e672de:
    iVar15 = 1000000;
    goto label_181e66f9f;
  }
  pSVar13 = CustomSkins_BaseCustomSkinLoader__GetRendererId
                      ((CustomSkins_BaseCustomSkinLoader_o *)__this,iVar15,(MethodInfo *)0x0);
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinPart);
  bVar5 = true;
label_181e66f84:
  iVar15 = 500000;
label_181e66f9f:
  local_48[0].value.fields.y = 0.0;
  local_48[0].hasValue = false;
  local_48[0]._1_3_ = 0;
  local_48[0].value.fields.x = 0.0;
  CustomSkins_BaseCustomSkinPart___ctor
            (__this_04,(CustomSkins_BaseCustomSkinLoader_o *)__this,pSVar8,pSVar13,iVar15,
             (System_Nullable_Vector2__o *)local_48,bVar5,(MethodInfo *)0x0);
  return __this_04;
}


// CustomSkins.HumanCustomSkinLoader$$.ctor
// il2cpp: void CustomSkins_HumanCustomSkinLoader___ctor (CustomSkins_HumanCustomSkinLoader_o* __this, const MethodInfo* method);
// 0x181e679b0

void CustomSkins_HumanCustomSkinLoader___ctor(CustomSkins_HumanCustomSkinLoader_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184344f8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomSkins_BaseCustomSkinLoader);
    Il2CppMethodInitialized_184344f8f = '\x01';
  }
  if ((TypeInfo_CustomSkins_BaseCustomSkinLoader->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomSkins_BaseCustomSkinLoader);
  }
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


