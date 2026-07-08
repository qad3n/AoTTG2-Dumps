// Type: CustomLogic.CustomLogicUnityComponentManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUnityComponentManager.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicUnityComponentManager.ComponentTypePair$$.ctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair___ctor (CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o __this, System_Type_o* unityComponentType, System_Type_o* clComponentType, const MethodInfo* method);
// 0x3f6e700

void CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair___ctor
               (CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o __this,
               System_Type_o *unityComponentType,System_Type_o *clComponentType,MethodInfo *method)

{
  System_Type_o *pSVar1;
  
  pSVar1 = __this.fields.UnityComponentType;
  pSVar1->klass = (System_Type_c *)__this.fields.CLComponentType;
  il2cpp_runtime_glue();
  pSVar1->monitor = unityComponentType;
  il2cpp_runtime_glue(&pSVar1->monitor,unityComponentType);
  return;
}


// CustomLogic.CustomLogicUnityComponentManager$$GetUnityComponentByNameWithMapObjectOwner
// il2cpp: CustomLogic_BuiltinComponentInstance_o* CustomLogic_CustomLogicUnityComponentManager__GetUnityComponentByNameWithMapObjectOwner (CustomLogic_CustomLogicMapObjectBuiltin_o* owner, System_String_o* name, const MethodInfo* method);
// 0x3f6e340

CustomLogic_BuiltinComponentInstance_o *
CustomLogic_CustomLogicUnityComponentManager__GetUnityComponentByNameWithMapObjectOwner
          (CustomLogic_CustomLogicMapObjectBuiltin_o *owner,System_String_o *name,MethodInfo *method
          )

{
  byte bVar1;
  UnityEngine_Transform_o *__this;
  UnityEngine_Component_o *pUVar2;
  bool_conflict bVar3;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar4;
  System_Object_array *args;
  long lVar5;
  CustomLogic_BuiltinComponentInstance_o *pCVar6;
  undefined8 uVar7;
  CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o CVar8;
  CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o CVar9;
  UnityEngine_Component_o *local_30;
  
  if (DAT_05703ee9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinComponentInstance);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUnityComponentManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ContainsKey);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicUnityComponentManager_ComponentTypePa);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05703ee9 = '\x01';
  }
  local_30 = (UnityEngine_Component_o *)0x0;
  if (*(int *)(TypeInfo_CustomLogicUnityComponentManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
      **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8) !=
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    bVar3 = System_Collections_Generic_Dictionary<object__CustomLogicUnityComponentManager_ComponentTypePair>__ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8),(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar3 == '\0') {
      return (CustomLogic_BuiltinComponentInstance_o *)0x0;
    }
    if (*(int *)(TypeInfo_CustomLogicUnityComponentManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
        **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8) !=
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
      CVar8 = System_Collections_Generic_Dictionary<object__CustomLogicUnityComponentManager_ComponentTypePair>__get_Item
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                         **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8),(Il2CppObject *)name,MethodInfo_CustomLogicUnityComponentManager_ComponentTypePa);
      if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
          **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8) !=
          (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
        CVar9 = System_Collections_Generic_Dictionary<object__CustomLogicUnityComponentManager_ComponentTypePair>__get_Item
                          ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                           **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8),(Il2CppObject *)name,MethodInfo_CustomLogicUnityComponentManager_ComponentTypePa)
        ;
        if (((owner != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) &&
            (pCVar4 = CustomLogic_CustomLogicMapObjectBuiltin__get_Transform
                                (owner,(MethodInfo *)0x0),
            pCVar4 != (CustomLogic_CustomLogicTransformBuiltin_o *)0x0)) &&
           (__this = (pCVar4->fields).Value, __this != (UnityEngine_Transform_o *)0x0)) {
          bVar3 = UnityEngine_Component__TryGetComponent
                            ((UnityEngine_Component_o *)__this,CVar8.fields.UnityComponentType,
                             &local_30,(MethodInfo *)0x0);
          if ((char)bVar3 == '\0') {
            return (CustomLogic_BuiltinComponentInstance_o *)0x0;
          }
          args = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
          if (args != (System_Object_array *)0x0) {
            lVar5 = il2cpp_runtime_glue(owner,(((args->obj).klass)->_1).element_class);
            if (lVar5 != 0) {
              if ((int)args->max_length != 0) {
                args->m_Items[0] = (Il2CppObject *)owner;
                il2cpp_runtime_glue(args->m_Items,owner);
                pUVar2 = local_30;
                if ((local_30 != (UnityEngine_Component_o *)0x0) &&
                   (lVar5 = il2cpp_runtime_glue(local_30,(((args->obj).klass)->_1).element_class),
                   lVar5 == 0)) goto LAB_03f6e581;
                if (1 < (uint)args->max_length) {
                  args->m_Items[1] = (Il2CppObject *)pUVar2;
                  il2cpp_runtime_glue(args->m_Items + 1,pUVar2);
                  pCVar6 = (CustomLogic_BuiltinComponentInstance_o *)
                           System_Activator__CreateInstance
                                     (CVar9.fields.CLComponentType,args,(MethodInfo *)0x0);
                  if (pCVar6 == (CustomLogic_BuiltinComponentInstance_o *)0x0) {
                    return (CustomLogic_BuiltinComponentInstance_o *)0x0;
                  }
                  bVar1 = (TypeInfo_BuiltinComponentInstance->_2).naturalAligment;
                  if ((bVar1 <= (((Il2CppClass *)pCVar6->klass)->_2).naturalAligment) &&
                     ((((Il2CppClass *)pCVar6->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] ==
                      TypeInfo_BuiltinComponentInstance)) {
                    return pCVar6;
                  }
                    /* WARNING: Subroutine does not return */
                  il2cpp_unwind_resume(pCVar6);
                }
              }
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
LAB_03f6e581:
            uVar7 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar7,0);
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicUnityComponentManager$$.cctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentManager___cctor (const MethodInfo* method);
// 0x3f6e590

void CustomLogic_CustomLogicUnityComponentManager___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o value;
  System_RuntimeTypeHandle_o handle;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  System_String_o *key;
  System_Type_o *pSVar1;
  System_Type_o *pSVar2;
  System_Type_o *local_38;
  System_Type_o *local_30;
  
  if (DAT_05703eea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicUnityComponentManager);
    il2cpp_init_method_metadata(&TypeRef_CustomLogicVideoPlayerBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__ComponentTypePair);
    il2cpp_init_method_metadata(&TypeRef_VideoPlayer);
    DAT_05703eea = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_glue(TypeInfo_Dictionary_string__ComponentTypePair)
  ;
  System_Collections_Generic_Dictionary<object__CustomLogicUnityComponentManager_ComponentTypePair>___ctor
            (__this,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLog);
  key = CustomLogic_CustomLogicUnityComponentEnum__get_VideoPlayer((MethodInfo *)0x0);
  handle.fields.value = TypeRef_VideoPlayer.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CustomLogicVideoPlayerBuiltin,(MethodInfo *)0x0);
  local_30 = (System_Type_o *)0x0;
  local_38 = pSVar1;
  il2cpp_runtime_glue(&local_38,pSVar1);
  local_30 = pSVar2;
  il2cpp_runtime_glue(&local_30,pSVar2);
  if (__this != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    value.fields.CLComponentType = local_30;
    value.fields.UnityComponentType = local_38;
    System_Collections_Generic_Dictionary<object__CustomLogicUnityComponentManager_ComponentTypePair>__Add
              (__this,(Il2CppObject *)key,value,MethodInfo_Void_Add);
    **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_CustomLogicUnityComponentManager + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


