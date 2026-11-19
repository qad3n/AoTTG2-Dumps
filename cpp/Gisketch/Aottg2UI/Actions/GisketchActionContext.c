// Type: Gisketch.Aottg2UI.Actions.GisketchActionContext
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Actions/GisketchActionContext.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Actions.GisketchActionContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this, System_String_o* elementId, UnityEngine_GameObject_o* gameObject, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x53ab330

void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__this,System_String_o *elementId,
               UnityEngine_GameObject_o *gameObject,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               MethodInfo *method)

{
  (__this->fields).ElementId = elementId;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).GameObject = gameObject;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GameObject);
  (__this->fields).Node = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Node);
  (__this->fields).InputSource = 0;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchActionContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor (Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this, System_String_o* elementId, UnityEngine_GameObject_o* gameObject, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, int32_t inputSource, const MethodInfo* method);
// 0x53ab380

void Gisketch_Aottg2UI_Actions_GisketchActionContext___ctor_52ab380
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__this,System_String_o *elementId,
               UnityEngine_GameObject_o *gameObject,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               int32_t inputSource,MethodInfo *method)

{
  (__this->fields).ElementId = elementId;
  Il2CppCodeGenWriteBarrier((void **)__this);
  (__this->fields).GameObject = gameObject;
  Il2CppCodeGenWriteBarrier(&(__this->fields).GameObject);
  (__this->fields).Node = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Node);
  (__this->fields).InputSource = inputSource;
  return;
}


// Gisketch.Aottg2UI.Actions.GisketchActionContext$$get_InputText
// il2cpp: System_String_o* Gisketch_Aottg2UI_Actions_GisketchActionContext__get_InputText (Gisketch_Aottg2UI_Actions_GisketchActionContext_o __this, const MethodInfo* method);
// 0x53ab3d0

System_String_o *
Gisketch_Aottg2UI_Actions_GisketchActionContext__get_InputText
          (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  System_String_o *pSVar2;
  bool bVar3;
  TMPro_TMP_InputField_o *x_00;
  System_String_o **ppSVar4;
  
  if (Il2CppMethodInitialized_07542c0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542c0e = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields).GameObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  x_00 = (TMPro_TMP_InputField_o *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    __this_00 = (__this->fields).GameObject;
    if (__this_00 == (UnityEngine_GameObject_o *)0x0) goto label_053ab4b3;
    x_00 = UnityEngine_GameObject__GetComponent_object_
                     (__this_00,
                      (MethodInfo_353B730 *)MethodInfo_UnityEngine_GameObject_GetComponent_TMP_InputField);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (x_00 == (TMPro_TMP_InputField_o *)0x0) {
label_053ab4b3:
      ThrowNullReferenceException();
    }
    ppSVar4 = &(x_00->fields).m_Text;
  }
  else {
    pGVar1 = (__this->fields).Node;
    if ((pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       (pSVar2 = (pGVar1->fields).value, pSVar2 != (System_String_o *)0x0)) {
      return pSVar2;
    }
    ppSVar4 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  }
  return *ppSVar4;
}


