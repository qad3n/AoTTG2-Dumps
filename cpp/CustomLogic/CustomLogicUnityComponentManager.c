// Type: CustomLogic.CustomLogicUnityComponentManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicUnityComponentManager.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicUnityComponentManager.ComponentTypePair$$.ctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair___ctor (CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o __this, System_Type_o* unityComponentType, System_Type_o* clComponentType, const MethodInfo* method);
// 0x427ac10

void CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair___ctor
               (CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o __this,
               System_Type_o *unityComponentType,System_Type_o *clComponentType,MethodInfo *method)

{
  System_Type_o *pSVar1;
  
  pSVar1 = __this.fields.UnityComponentType;
  pSVar1->klass = (System_Type_c *)__this.fields.CLComponentType;
  il2cpp_runtime_helper_022b4080();
  pSVar1->monitor = unityComponentType;
  il2cpp_runtime_helper_022b4080(&pSVar1->monitor,unityComponentType);
  return;
}


// CustomLogic.CustomLogicUnityComponentManager$$GetUnityComponentByNameWithMapObjectOwner
// il2cpp: CustomLogic_BuiltinComponentInstance_o* CustomLogic_CustomLogicUnityComponentManager__GetUnityComponentByNameWithMapObjectOwner (CustomLogic_CustomLogicMapObjectBuiltin_o* owner, System_String_o* name, const MethodInfo* method);
// 0x427a850

CustomLogic_BuiltinComponentInstance_o *
CustomLogic_CustomLogicUnityComponentManager__GetUnityComponentByNameWithMapObjectOwner
          (CustomLogic_CustomLogicMapObjectBuiltin_o *owner,System_String_o *name,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Transform_o *__this;
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar3;
  System_Object_array *args;
  long lVar4;
  CustomLogic_BuiltinComponentInstance_o *pCVar5;
  undefined8 uVar6;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  System_String_o *key;
  System_Type_o *pSVar7;
  System_Type_o *pSVar8;
  System_Type_o *extraout_RDX;
  System_Type_o **ppSVar9;
  System_Type_o *unaff_R12;
  undefined8 *unaff_R13;
  CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o CVar10;
  System_Type_o *local_70;
  System_Type_o *local_68;
  System_Object_array *local_60;
  System_Type_o *pSStack_58;
  undefined8 *puStack_50;
  System_Type_o *pSStack_48;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCStack_40;
  CustomLogic_CustomLogicMapObjectBuiltin_o *local_30;
  
  if (g_data_057adc57 == '\0') {
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a878;
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinComponentInstance);
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a884;
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUnityComponentManager);
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a890;
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ContainsKey);
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a89c;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicUnityComponentManager_ComponentTypePair_get_I);
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a8a8;
    il2cpp_runtime_helper_023445d0(&TypeInfo_object);
    g_data_057adc57 = '\x01';
  }
  local_30 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0;
  if (*(int *)(TypeInfo_CustomLogicUnityComponentManager + 0xe4) == 0) {
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a8d0;
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = (System_Type_o *)&TypeInfo_CustomLogicUnityComponentManager;
  if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8) ==
      (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
label_0427aa87:
    args = (System_Object_array *)name;
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427aa8c;
    il2cpp_runtime_helper_022b2c90();
    pSVar8 = pSVar7;
  }
  else {
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a8f8;
    bVar2 = System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair___ContainsKey
                      ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                       **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8),(Il2CppObject *)name,MethodInfo_Boolean_ContainsKey);
    if ((char)bVar2 == '\0') {
      return (CustomLogic_BuiltinComponentInstance_o *)0x0;
    }
    if (*(int *)(TypeInfo_CustomLogicUnityComponentManager + 0xe4) == 0) {
      pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a911;
      il2cpp_runtime_helper_02337ed0();
    }
    if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8) ==
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0427aa87;
    unaff_R13 = &MethodInfo_CustomLogicUnityComponentManager_ComponentTypePair_get_I;
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a93a;
    CVar10 = System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                        **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8),(Il2CppObject *)name,MethodInfo_CustomLogicUnityComponentManager_ComponentTypePair_get_I);
    unaff_R12 = CVar10.fields.UnityComponentType;
    if ((System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8) ==
        (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) goto label_0427aa87;
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a95f;
    CVar10 = System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair___get_Item
                       ((System_Collections_Generic_Dictionary_TKey__TValue__o *)
                        **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8),(Il2CppObject *)name,MethodInfo_CustomLogicUnityComponentManager_ComponentTypePair_get_I);
    pSVar8 = CVar10.fields.CLComponentType;
    if (owner == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) goto label_0427aa87;
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a975;
    pCVar3 = CustomLogic_CustomLogicMapObjectBuiltin__get_Transform(owner,(MethodInfo *)0x0);
    pSVar7 = pSVar8;
    if ((pCVar3 == (CustomLogic_CustomLogicTransformBuiltin_o *)0x0) ||
       (__this = (pCVar3->fields).Value, __this == (UnityEngine_Transform_o *)0x0)) goto label_0427aa87;
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a99c;
    bVar2 = UnityEngine_Component__TryGetComponent
                      ((UnityEngine_Component_o *)__this,unaff_R12,(UnityEngine_Component_o **)&local_30,
                       (MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return (CustomLogic_BuiltinComponentInstance_o *)0x0;
    }
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a9b8;
    args = (System_Object_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_object,2);
    name = (System_String_o *)(System_Object_array *)0x0;
    if (args == (System_Object_array *)0x0) goto label_0427aa87;
    pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a9d3;
    lVar4 = il2cpp_runtime_helper_023051f0(owner,(((args->obj).klass)->_1).element_class);
    if (lVar4 == 0) goto label_0427aa91;
    if ((int)args->max_length != 0) {
      args->m_Items[0] = (Il2CppObject *)owner;
      pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427a9f6;
      il2cpp_runtime_helper_022b4080(args->m_Items,owner);
      owner = local_30;
      if (local_30 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
        pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427aa0f;
        lVar4 = il2cpp_runtime_helper_023051f0(local_30,(((args->obj).klass)->_1).element_class);
        if (lVar4 == 0) goto label_0427aa91;
      }
      if (1 < (uint)args->max_length) {
        args->m_Items[1] = (Il2CppObject *)owner;
        pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427aa2d;
        il2cpp_runtime_helper_022b4080(args->m_Items + 1,owner);
        pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427aa3a;
        pCVar5 = (CustomLogic_BuiltinComponentInstance_o *)
                 System_Activator__CreateInstance_3ce7b60(pSVar8,args,(MethodInfo *)0x0);
        if (pCVar5 == (CustomLogic_BuiltinComponentInstance_o *)0x0) {
          return (CustomLogic_BuiltinComponentInstance_o *)0x0;
        }
        bVar1 = (TypeInfo_BuiltinComponentInstance->_2).naturalAligment;
        if ((bVar1 <= (((Il2CppClass *)pCVar5->klass)->_2).naturalAligment) &&
           ((((Il2CppClass *)pCVar5->klass)->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BuiltinComponentInstance)) {
          return pCVar5;
        }
        pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427aa74;
        il2cpp_runtime_helper_022b2fd0(pCVar5);
        return (CustomLogic_BuiltinComponentInstance_o *)0x0;
      }
    }
  }
  pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427aa91;
  il2cpp_runtime_helper_022b2ca0();
label_0427aa91:
  pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x427aa96;
  uVar6 = il2cpp_runtime_helper_0231b270();
  pCStack_40 = (CustomLogic_CustomLogicMapObjectBuiltin_o *)
               CustomLogic_CustomLogicUnityComponentManager___cctor;
  il2cpp_runtime_helper_022b2b10(uVar6,0);
  local_60 = args;
  pSStack_58 = unaff_R12;
  puStack_50 = unaff_R13;
  pSStack_48 = pSVar8;
  pCStack_40 = owner;
  if (g_data_057adc58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUnityComponentManager);
    il2cpp_runtime_helper_023445d0(&TypeRef_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLogicUnityC);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ComponentTypePair);
    il2cpp_runtime_helper_023445d0(&TypeRef_VideoPlayer);
    g_data_057adc58 = '\x01';
  }
  __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ComponentTypePair);
  System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair____ctor
            (__this_00,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLogicUnityC);
  key = CustomLogic_CustomLogicUnityComponentEnum__get_VideoPlayer((MethodInfo *)0x0);
  handle.fields.value = TypeRef_VideoPlayer.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pSVar8 = System_Type__GetTypeFromHandle(TypeRef_CustomLogicVideoPlayerBuiltin,(MethodInfo *)0x0);
  ppSVar9 = &local_68;
  local_68 = (System_Type_o *)0x0;
  local_70 = pSVar7;
  il2cpp_runtime_helper_022b4080(&local_70,pSVar7);
  local_68 = pSVar8;
  il2cpp_runtime_helper_022b4080();
  if (__this_00 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    CVar10.fields.CLComponentType = local_68;
    CVar10.fields.UnityComponentType = local_70;
    System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair___Add
              (__this_00,(Il2CppObject *)key,CVar10,MethodInfo_Void_Add);
    **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8) = __this_00;
    pCVar5 = (CustomLogic_BuiltinComponentInstance_o *)
             il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicUnityComponentManager + 0xb8),__this_00);
    return pCVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  *ppSVar9 = pSVar8;
  il2cpp_runtime_helper_022b4080();
  ppSVar9[1] = extraout_RDX;
  pCVar5 = (CustomLogic_BuiltinComponentInstance_o *)il2cpp_runtime_helper_022b4080(ppSVar9 + 1,extraout_RDX);
  return pCVar5;
}


// CustomLogic.CustomLogicUnityComponentManager$$.cctor
// il2cpp: void CustomLogic_CustomLogicUnityComponentManager___cctor (const MethodInfo* method);
// 0x427aaa0

void CustomLogic_CustomLogicUnityComponentManager___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicUnityComponentManager_ComponentTypePair_o value;
  System_RuntimeTypeHandle_o handle;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this;
  System_String_o *key;
  System_Type_o *pSVar1;
  System_Type_o *pSVar2;
  System_Type_o *extraout_RDX;
  System_Type_o **ppSVar3;
  System_Type_o *pSStack_38;
  System_Type_o *pSStack_30;
  
  if (g_data_057adc58 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_CustomLogicUnityComponentManager);
    il2cpp_runtime_helper_023445d0(&TypeRef_CustomLogicVideoPlayerBuiltin);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLogicUnityC);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_ComponentTypePair);
    il2cpp_runtime_helper_023445d0(&TypeRef_VideoPlayer);
    g_data_057adc58 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_TKey__TValue__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_ComponentTypePair);
  System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair____ctor
            (__this,MethodInfo_Dictionary_2_System_String_CustomLogic_CustomLogicUnityC);
  key = CustomLogic_CustomLogicUnityComponentEnum__get_VideoPlayer((MethodInfo *)0x0);
  handle.fields.value = TypeRef_VideoPlayer.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  pSVar2 = System_Type__GetTypeFromHandle(TypeRef_CustomLogicVideoPlayerBuiltin,(MethodInfo *)0x0);
  ppSVar3 = &pSStack_30;
  pSStack_30 = (System_Type_o *)0x0;
  pSStack_38 = pSVar1;
  il2cpp_runtime_helper_022b4080(&pSStack_38,pSVar1);
  pSStack_30 = pSVar2;
  il2cpp_runtime_helper_022b4080();
  if (__this != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    value.fields.CLComponentType = pSStack_30;
    value.fields.UnityComponentType = pSStack_38;
    System_Collections_Generic_Dictionary_object__CustomLogicUnityComponentManager_ComponentTypePair___Add
              (__this,(Il2CppObject *)key,value,MethodInfo_Void_Add);
    **(undefined8 **)(TypeInfo_CustomLogicUnityComponentManager + 0xb8) = __this;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_CustomLogicUnityComponentManager + 0xb8),__this);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  *ppSVar3 = pSVar2;
  il2cpp_runtime_helper_022b4080();
  ppSVar3[1] = extraout_RDX;
  il2cpp_runtime_helper_022b4080(ppSVar3 + 1,extraout_RDX);
  return;
}


