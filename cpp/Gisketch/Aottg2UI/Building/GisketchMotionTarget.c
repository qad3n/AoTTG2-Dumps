// Type: Gisketch.Aottg2UI.Building.GisketchMotionTarget
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchMotionTarget.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchMotionTarget$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o __this, UnityEngine_GameObject_o* gameObject, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* enter, Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* exit, const MethodInfo* method);
// 0x3b89a50

void Gisketch_Aottg2UI_Building_GisketchMotionTarget___ctor
               (Gisketch_Aottg2UI_Building_GisketchMotionTarget_o __this,UnityEngine_GameObject_o *gameObject,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *enter,
               Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *exit,MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Transform_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *__this_01;
  System_Int32_array *__this_02;
  System_Collections_Generic_List_GisketchMotionTarget__o *__this_03;
  System_Collections_Generic_List_object__o *__this_04;
  System_String_o *value;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar2;
  System_Collections_Generic_Dictionary_object__object__o *__this_05;
  float fVar3;
  UnityEngine_Vector3_Fields UVar4;
  Il2CppObject *pIStack_48;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGStack_40;
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGStack_38;
  UnityEngine_GameObject_o *pUStack_30;
  
  if (g_data_057a9e95 == '\0') {
    pUStack_30 = (UnityEngine_GameObject_o *)0x3b89a79;
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
    pUStack_30 = (UnityEngine_GameObject_o *)0x3b89a85;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057a9e95 = '\x01';
  }
  gameObject->klass = (UnityEngine_GameObject_c *)enter;
  pUStack_30 = (UnityEngine_GameObject_o *)0x3b89a9a;
  il2cpp_runtime_helper_022b4080(gameObject,enter);
  gameObject->monitor = exit;
  pUStack_30 = (UnityEngine_GameObject_o *)0x3b89aaa;
  il2cpp_runtime_helper_022b4080(&gameObject->monitor,exit);
  (gameObject->fields).m_CachedPtr = (intptr_t)method;
  pUStack_30 = (UnityEngine_GameObject_o *)0x3b89aba;
  il2cpp_runtime_helper_022b4080(&gameObject->fields);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_30 = (UnityEngine_GameObject_o *)0x3b89ad3;
    il2cpp_runtime_helper_02337ed0();
  }
  value = (System_String_o *)0x0;
  pUStack_30 = (UnityEngine_GameObject_o *)0x3b89adf;
  pGVar2 = enter;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)enter,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (g_data_057a6932 == '\0') {
      pUStack_30 = (UnityEngine_GameObject_o *)0x3b89b20;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
      g_data_057a6932 = '\x01';
    }
    UVar4 = *(UnityEngine_Vector3_Fields *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0xc);
  }
  else {
    if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto label_03b89bd8;
    value = (System_String_o *)0x0;
    pUStack_30 = (UnityEngine_GameObject_o *)0x3b89af6;
    pGVar2 = enter;
    __this_00 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)enter,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_Transform_o *)0x0) goto label_03b89bd8;
    pUStack_30 = (UnityEngine_GameObject_o *)0x3b89b09;
    UVar4 = (UnityEngine_Vector3_Fields)UnityEngine_Transform__get_localScale(__this_00,(MethodInfo *)0x0);
  }
  *(UnityEngine_Vector3_Fields *)(gameObject + 1) = UVar4;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_30 = (UnityEngine_GameObject_o *)0x3b89b5f;
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
  value = (System_String_o *)0x0;
  pUStack_30 = (UnityEngine_GameObject_o *)0x3b89b6d;
  pGVar2 = enter;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)enter,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    exit = __this_01;
    if (enter == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) goto label_03b89bd8;
    pUStack_30 = (UnityEngine_GameObject_o *)0x3b89b88;
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)
                UnityEngine_GameObject__GetComponent_object_((UnityEngine_GameObject_o *)enter,MethodInfo_CanvasGroup_GetComponent_CanvasGroup);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    pUStack_30 = (UnityEngine_GameObject_o *)0x3b89b9d;
    il2cpp_runtime_helper_02337ed0();
  }
  value = (System_String_o *)0x0;
  pUStack_30 = (UnityEngine_GameObject_o *)0x3b89ba9;
  pGVar2 = __this_01;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    fVar3 = 1.0;
  }
  else {
    exit = (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0;
    if (__this_01 == (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0) {
label_03b89bd8:
      pUStack_30 = (UnityEngine_GameObject_o *)0x3b89bdd;
      il2cpp_runtime_helper_022b2c90();
      pGStack_40 = exit;
      pGStack_38 = enter;
      pUStack_30 = gameObject;
      if (g_data_057a9e92 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_TryGetValue);
        g_data_057a9e92 = '\x01';
      }
      pIStack_48 = (Il2CppObject *)0x0;
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        __this_05 = (System_Collections_Generic_Dictionary_object__object__o *)(pGVar2->fields).preset;
        if (__this_05 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057a9e94 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_GameObject);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
            il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotionTarget);
            il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchMotionTarget);
            il2cpp_runtime_helper_023445d0(&TypeInfo_List_GisketchSearchEntry);
            g_data_057a9e94 = '\x01';
          }
          __this_02 = (System_Int32_array *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_GameObject);
          System_Collections_Generic_Dictionary_object__object____ctor
                    ((System_Collections_Generic_Dictionary_object__object__o *)__this_02,MethodInfo_Dictionary_2_System_String_UnityEngine_GameObject);
          (__this_05->fields)._buckets = __this_02;
          il2cpp_runtime_helper_022b4080(&__this_05->fields,__this_02);
          __this_03 = (System_Collections_Generic_List_GisketchMotionTarget__o *)
                      il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchMotionTarget);
          System_Collections_Generic_List_GisketchMotionTarget____ctor(__this_03,MethodInfo_List_1_Gisketch_Aottg2UI_Building_GisketchMotionTarget);
          *(System_Collections_Generic_List_GisketchMotionTarget__o **)&(__this_05->fields)._count = __this_03
          ;
          il2cpp_runtime_helper_022b4080(&(__this_05->fields)._count,__this_03);
          __this_04 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_GisketchSearchEntry);
          System_Collections_Generic_List_object____ctor(__this_04,MethodInfo_List_1_Gisketch_Aottg2UI_Search_GisketchSearchEntry);
          *(System_Collections_Generic_List_object__o **)&(__this_05->fields)._freeCount = __this_04;
          il2cpp_runtime_helper_022b4080(&(__this_05->fields)._freeCount);
          System_Object___ctor((Il2CppObject *)__this_05,(MethodInfo *)0x0);
          return;
        }
        System_Collections_Generic_Dictionary_object__object___TryGetValue
                  (__this_05,(Il2CppObject *)value,&pIStack_48,MethodInfo_Boolean_TryGetValue);
      }
      return;
    }
    pUStack_30 = (UnityEngine_GameObject_o *)0x3b89bbc;
    fVar3 = UnityEngine_CanvasGroup__get_alpha((UnityEngine_CanvasGroup_o *)__this_01,(MethodInfo *)0x0);
  }
  *(float *)((long)&gameObject[1].monitor + 4) = fVar3;
  return;
}


