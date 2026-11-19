// Type: CustomLogic.CustomLogicUnityComponentManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicUnityComponentManager.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicUnityComponentManager.ComponentTypePair$$.ctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair___ctor (CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o __this, System_Type_o* unityComponentType, System_Type_o* clComponentType, const MethodInfo* method);
// 0x5b8fba0

void CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair___ctor
               (CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o *__this,
               System_Type_o *unityComponentType,System_Type_o *clComponentType,MethodInfo *method)

{
  (__this->fields).UnityComponentType = unityComponentType;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).CLComponentType = clComponentType;
  Il2CppCodeGenWriteBarrier(&(__this->fields).CLComponentType);
  return;
}


// CustomLogic.CustomLogicUnityComponentManager$$GetUnityComponentByNameWithMapObjectOwner
// il2cpp: CustomLogic_BuiltinComponentInstance_o* CustomLogic_CustomLogicUnityComponentManager__GetUnityComponentByNameWithMapObjectOwner (CustomLogic_CustomLogicMapObjectBuiltin_o* owner, System_String_o* name, const MethodInfo* method);
// 0x5b8f7d0

CustomLogic_BuiltinComponentInstance_o *
CustomLogic_CustomLogicUnityComponentManager__GetUnityComponentByNameWithMapObjectOwner
          (CustomLogic_CustomLogicMapObjectBuiltin_o *owner,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o *pSVar2;
  UnityEngine_Transform_o *__this;
  UnityEngine_Component_o *pUVar3;
  bool bVar4;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar5;
  System_Object_array *args;
  Il2CppObject *pIVar6;
  CustomLogic_BuiltinComponentInstance_o *pCVar7;
  CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o CVar8;
  CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o CVar9;
  UnityEngine_Component_o *local_30;
  
  if (Il2CppMethodInitialized_075473ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinComponentInstance);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_718c180
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_718c188
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_075473ea = '\x01';
  }
  local_30 = (UnityEngine_Component_o *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicUnityComponentManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
  }
  pSVar2 = TypeInfo_CustomLogic_CustomLogicUnityComponentManager->static_fields->_unityComponentTypes;
  if (pSVar2 != (System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o
                 *)0x0) {
    bVar4 = System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)name,
                       (MethodInfo_4AC9CE0 *)
                       MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_718c180
                      );
    if (!bVar4) {
      return (CustomLogic_BuiltinComponentInstance_o *)0x0;
    }
    if ((TypeInfo_CustomLogic_CustomLogicUnityComponentManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
    }
    pSVar2 = TypeInfo_CustomLogic_CustomLogicUnityComponentManager->static_fields->_unityComponentTypes;
    if (pSVar2 != (System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o
                   *)0x0) {
      CVar8 = System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair___get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,(Il2CppObject *)name,
                         (MethodInfo_4AC9A20 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_718c188
                        );
      pSVar2 = TypeInfo_CustomLogic_CustomLogicUnityComponentManager->static_fields->_unityComponentTypes;
      if (pSVar2 != (System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o
                     *)0x0) {
        CVar9 = System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair___get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)pSVar2,
                           (Il2CppObject *)name,
                           (MethodInfo_4AC9A20 *)
                           MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_718c188
                          );
        if (((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
            (pCVar5 = CustomLogic_CustomLogicMapObjectBuiltin__get_Transform(owner,(MethodInfo *)0x0),
            pCVar5 != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0)) &&
           (__this = (pCVar5->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
          bVar4 = UnityEngine_Component__TryGetComponent
                            ((UnityEngine_Component_o *)__this,CVar8.fields.UnityComponentType,&local_30,
                             (MethodInfo *)0x0);
          if (!bVar4) {
            return (CustomLogic_BuiltinComponentInstance_o *)0x0;
          }
          args = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
          if (args != (System_Object_array *)0x0) {
            pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)owner,(((args->obj).klass)->_1).element_class);
            if (pIVar6 == (Il2CppObject *)0x0) {
label_05b8fa18:
              pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
            }
            if ((int)args->max_length != 0) {
              args->m_Items[0] = (Il2CppObject *)owner;
              Il2CppCodeGenWriteBarrier(args->m_Items);
              pUVar3 = local_30;
              if ((local_30 != (UnityEngine_Component_o *)0x0) &&
                 (pIVar6 = il2cpp_vm_Object_IsInst
                                     ((Il2CppObject *)local_30,(((args->obj).klass)->_1).element_class),
                 pIVar6 == (Il2CppObject *)0x0)) goto label_05b8fa18;
              if ((args->max_length & 0xfffffffe) != 0) {
                args->m_Items[1] = (Il2CppObject *)pUVar3;
                Il2CppCodeGenWriteBarrier(args->m_Items + 1);
                pCVar7 = (CustomLogic_BuiltinComponentInstance_o *)
                         System_Activator__CreateInstance_54ec010
                                   (CVar9.fields.CLComponentType,args,(MethodInfo *)0x0);
                if (pCVar7 == (CustomLogic_BuiltinComponentInstance_o *)0x0) {
                  return (CustomLogic_BuiltinComponentInstance_o *)0x0;
                }
                bVar1 = (TypeInfo_CustomLogic_BuiltinComponentInstance->_2).typeHierarchyDepth;
                if (((((Il2CppClass *)pCVar7->klass)->_2).typeHierarchyDepth < bVar1) ||
                   ((((Il2CppClass *)pCVar7->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] !=
                    (Il2CppClass *)TypeInfo_CustomLogic_BuiltinComponentInstance)) {
                  il2cpp_codegen_raise_invalid_cast_exception(pCVar7);
                }
                return pCVar7;
              }
            }
            ThrowIndexOutOfRangeException();
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicUnityComponentManager$$.cctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentManager___cctor (const MethodInfo* method);
// 0x5b8fa30

void CustomLogic_CustomLogicUnityComponentManager___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o value;
  Il2CppType *handle;
  System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o *__this;
  System_String_o *key;
  System_Type_o *pSVar1;
  System_Type_o *pSVar2;
  System_Type_o *pSStack_38;
  System_Type_o *pSStack_30;
  
  if (Il2CppMethodInitialized_075473eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicUnityComponentManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_CustomLogic_CustomLogicVideoPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_718c178
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
    Il2CppMethodInitialized_075473eb = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair
                     );
  System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_4AC8EB0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair
            );
  key = CustomLogic_CustomLogicUnityComponentEnum__get_VideoPlayer((MethodInfo *)0x0);
  handle = TypeRef_UnityEngine_Video_VideoPlayer;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  pSVar1 = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle
                     ((System_RuntimeTypeHandle_o)TypeRef_CustomLogic_CustomLogicVideoPlayerBuiltin,
                      (MethodInfo *)0x0);
  pSStack_30 = (System_Type_o *)0x0;
  pSStack_38 = pSVar1;
  Il2CppCodeGenWriteBarrier(&pSStack_38);
  pSStack_30 = pSVar2;
  Il2CppCodeGenWriteBarrier(&pSStack_30);
  if (__this == (System_Collections_Generic_Dictionary_string__CustomLogicUnityComponentManager_ComponentTypePair__o
                 *)0x0) {
    ThrowNullReferenceException();
  }
  value.fields.CLComponentType = pSStack_30;
  value.fields.UnityComponentType = pSStack_38;
  System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair___Add
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,(Il2CppObject *)key,value,
             (MethodInfo_4AC9AB0 *)
             MethodInfo_System_Collections_Generic_Dictionary_string_CustomLogicUnityComponentManager_ComponentTypePair_718c178
            );
  TypeInfo_CustomLogic_CustomLogicUnityComponentManager->static_fields->_unityComponentTypes = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicUnityComponentManager->static_fields->_unityComponentTypes);
  return;
}


