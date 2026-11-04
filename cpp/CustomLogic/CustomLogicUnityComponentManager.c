// Type: CustomLogic.CustomLogicUnityComponentManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUnityComponentManager.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicUnityComponentManager.ComponentTypePair$$.ctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair___ctor (CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o __this, System_Type_o* unityComponentType, System_Type_o* clComponentType, const MethodInfo* method);
// 0x180b5d000

void
CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair___ctor(CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o __this, System_Type_o* unityComponentType, System_Type_o* clComponentType, MethodInfo* method)

{
  (__this->fields).SourceType = source;
  Il2CppCodeGenWriteBarrier((void **)__this,source);
  (__this->fields).DestinationType = destination;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DestinationType,destination);
  return;
}


// CustomLogic.CustomLogicUnityComponentManager$$GetUnityComponentByNameWithMapObjectOwner
// il2cpp: CustomLogic_BuiltinComponentInstance_o* CustomLogic_CustomLogicUnityComponentManager__GetUnityComponentByNameWithMapObjectOwner (CustomLogic_CustomLogicMapObjectBuiltin_o* owner, System_String_o* name, const MethodInfo* method);
// 0x1820ea230
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820ea461: jmp 0x1820ea465

CustomLogic_BuiltinComponentInstance_o *
CustomLogic_CustomLogicUnityComponentManager__GetUnityComponentByNameWithMapObjectOwner
          (CustomLogic_CustomLogicMapObjectBuiltin_o *owner,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o *pSVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_Component_o *value;
  bool bVar3;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar4;
  System_Object_array *args;
  Il2CppObject *pIVar5;
  CustomLogic_BuiltinComponentInstance_o *pCVar6;
  UnityEngine_Component_o *local_res10 [3];
  System_Type_o *local_28 [2];
  undefined1 local_18 [16];
  
  if (Il2CppMethodInitialized_184346a1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinComponentInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_40e4d88
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_40e4e68
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184346a1e = '\x01';
  }
  local_res10[0] = (UnityEngine_Component_o *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicUnityComponentManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
  }
  pSVar2 = TypeInfo_CustomLogic_CustomLogicUnityComponentManager->static_fields->_unityComponentTypes;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o
                 *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)name,
                       (MethodInfo_1443DE0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_40e4d88
                      );
    if (!bVar3) {
      return (CustomLogic_BuiltinComponentInstance_o *)0x0;
    }
    if ((TypeInfo_CustomLogic_CustomLogicUnityComponentManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
    }
    pSVar2 = TypeInfo_CustomLogic_CustomLogicUnityComponentManager->static_fields->_unityComponentTypes;
    if (pSVar2 != (System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o
                   *)0x0) {
      System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                ((UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o *)local_28,
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)name,
                 (MethodInfo_1454D90 *)
                 MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_40e4e68
                );
      pSVar2 = TypeInfo_CustomLogic_CustomLogicUnityComponentManager->static_fields->_unityComponentTypes;
      if ((((pSVar2 != (System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o
                        *)0x0) &&
           (System_Collections_Generic_Dictionary_object__EventInterestReflectionUtils_DefaultEventInterests___get_Item
                      ((UnityEngine_UIElements_EventInterestReflectionUtils_DefaultEventInterests_o *)local_18
                       ,(System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)name,
                       (MethodInfo_1454D90 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_40e4e68
                      ), owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0)) &&
          (pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin__get_Transform(owner,(MethodInfo *)0x0),
          pCVar4 != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0)) &&
         (__this = (pCVar4->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
        bVar3 = UnityEngine_Component__TryGetComponent
                          ((UnityEngine_Component_o *)__this,local_28[0],local_res10,(MethodInfo *)0x0);
        if (!bVar3) {
          return (CustomLogic_BuiltinComponentInstance_o *)0x0;
        }
        args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
        if (args != (System_Object_array *)0x0) {
          pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)owner,(((args->obj).klass)->_1).element_class);
          if (pIVar5 == (Il2CppObject *)0x0) {
            pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
          }
          if ((int)args->max_length != 0) {
            args->m_Items[0] = (Il2CppObject *)owner;
            Il2CppCodeGenWriteBarrier(args->m_Items,owner);
            value = local_res10[0];
            if ((local_res10[0] != (UnityEngine_Component_o *)0x0) &&
               (pIVar5 = il2cpp_vm_Object_IsInst
                                   ((Il2CppObject *)local_res10[0],(((args->obj).klass)->_1).element_class),
               pIVar5 == (Il2CppObject *)0x0)) {
              pIVar5 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar5,(MethodInfo *)0x0);
            }
            if (1 < (uint)args->max_length) {
              args->m_Items[1] = (Il2CppObject *)value;
              Il2CppCodeGenWriteBarrier(args->m_Items + 1,value);
              pCVar6 = (CustomLogic_BuiltinComponentInstance_o *)
                       System_Activator__CreateInstance_1b5a920
                                 ((System_Type_o *)local_18._8_8_,args,(MethodInfo *)0x0);
              if (pCVar6 == (CustomLogic_BuiltinComponentInstance_o *)0x0) {
                return (CustomLogic_BuiltinComponentInstance_o *)0x0;
              }
              bVar1 = (TypeInfo_CustomLogic_BuiltinComponentInstance->_2).typeHierarchyDepth;
              if ((bVar1 <= (((Il2CppClass *)pCVar6->klass)->_2).typeHierarchyDepth) &&
                 ((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
                  (Il2CppClass *)TypeInfo_CustomLogic_BuiltinComponentInstance)) {
                return pCVar6;
              }
              il2cpp_codegen_raise_invalid_cast_exception
                        (pCVar6,TypeInfo_CustomLogic_BuiltinComponentInstance);
            }
          }
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUnityComponentManager$$.cctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentManager___cctor (const MethodInfo* method);
// 0x1820ea4b0

void CustomLogic_CustomLogicUnityComponentManager___cctor(MethodInfo *method)

{
  Il2CppType *handle;
  System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o *__this;
  System_String_o *key;
  System_Type_o *value;
  System_Type_o *value_00;
  System_Type_o *local_48;
  System_Type_o *pSStack_40;
  CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o local_38;
  
  if (Il2CppMethodInitialized_184346a1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_CustomLogic_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_40e4cb0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_Video_VideoPlayer);
    Il2CppMethodInitialized_184346a1f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair
                     );
  System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair
            );
  key = CustomLogic_CustomLogicUnityComponentEnum__get_VideoPlayer((MethodInfo *)0x0);
  handle = TypeRef_UnityEngine_Video_VideoPlayer;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  value = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  value_00 = System_Type__GetTypeFromHandle
                       ((System_RuntimeTypeHandle_o)TypeRef_CustomLogic_CustomLogicVideoPlayerBuiltin,
                        (MethodInfo *)0x0);
  pSStack_40 = (System_Type_o *)0x0;
  local_48 = value;
  Il2CppCodeGenWriteBarrier(&local_48,value);
  pSStack_40 = value_00;
  Il2CppCodeGenWriteBarrier(&pSStack_40,value_00);
  if (__this != (System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o
                 *)0x0) {
    local_38.fields.UnityComponentType = local_48;
    local_38.fields.CLComponentType = pSStack_40;
    System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair___Add
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,&local_38,
               (MethodInfo_1488F70 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_40e4cb0
              );
    TypeInfo_CustomLogic_CustomLogicUnityComponentManager->static_fields->_unityComponentTypes = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicUnityComponentManager->static_fields->_unityComponentTypes,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


