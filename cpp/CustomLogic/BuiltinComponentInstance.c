// Type: CustomLogic.BuiltinComponentInstance
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/BuiltinComponentInstance.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.BuiltinComponentInstance$$.ctor
// il2cpp: void CustomLogic_BuiltinComponentInstance___ctor (CustomLogic_BuiltinComponentInstance_o* __this, UnityEngine_Component_o* component, const MethodInfo* method);
// 0x42546f0

void CustomLogic_BuiltinComponentInstance___ctor
               (CustomLogic_BuiltinComponentInstance_o *__this,UnityEngine_Component_o *component,
               MethodInfo *method)

{
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)component;
  if (g_data_057adb8c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BuiltinClassInstance);
    g_data_057adb8c = '\x01';
  }
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,method_00);
  (__this->fields).Component = component;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Component,component);
  return;
}


// CustomLogic.BuiltinComponentInstance$$GetOrAddComponent<object>
// il2cpp: Il2CppObject* CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_ (UnityEngine_GameObject_o* gameObject, const MethodInfo_24E14D0* method);
// 0x25e14d0

Il2CppObject *
CustomLogic_BuiltinComponentInstance__GetOrAddComponent_object_
          (UnityEngine_GameObject_o *gameObject,MethodInfo_24E14D0 *method)

{
  byte bVar1;
  int iVar2;
  Il2CppClass *pIVar3;
  bool_conflict bVar4;
  UnityEngine_Object_o *x;
  Il2CppObject *pIVar5;
  long lVar6;
  MethodInfo_24E14D0 *pMVar7;
  
  pMVar7 = (MethodInfo_24E14D0 *)gameObject;
  if (method->rgctx_data == (MethodInfo_24E14D0_RGCTXs *)0x0) {
    pMVar7 = (MethodInfo_24E14D0 *)&TypeInfo_Object;
    il2cpp_runtime_helper_023445d0();
    if (method->rgctx_data == (MethodInfo_24E14D0_RGCTXs *)0x0) {
      pMVar7 = method;
      il2cpp_runtime_helper_02300a20();
    }
  }
  if (gameObject == (UnityEngine_GameObject_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (pMVar7->rgctx_data == (MethodInfo_24E14D0_RGCTXs *)0x0) {
      il2cpp_runtime_helper_02300a20(pMVar7);
      pIVar3 = pMVar7->rgctx_data->_1_T;
      bVar1 = (pIVar3->_2).field_0x6d;
    }
    else {
      pIVar3 = pMVar7->rgctx_data->_1_T;
      bVar1 = (pIVar3->_2).field_0x6d;
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0();
      iVar2 = *(int *)(lVar6 + 0xe4);
    }
    else {
      iVar2 = *(int *)&(pIVar3->_2).field_0x1c;
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar3 = pMVar7->rgctx_data->_1_T;
      bVar1 = (pIVar3->_2).field_0x6d;
    }
    else {
      pIVar3 = pMVar7->rgctx_data->_1_T;
      bVar1 = (pIVar3->_2).field_0x6d;
    }
    if ((bVar1 & 1) == 0) {
      lVar6 = il2cpp_runtime_helper_023009c0(pIVar3);
      return (Il2CppObject *)**(undefined8 **)(lVar6 + 0xb8);
    }
    return *(Il2CppObject **)pIVar3->static_fields;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_GameObject__GetComponent_object_
                (gameObject,
                 (MethodInfo_255A0F0 *)method->rgctx_data->_0_UnityEngine_GameObject_GetComponent_T_);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (Il2CppObject *)x;
  }
  pIVar5 = UnityEngine_GameObject__AddComponent_object_
                     (gameObject,
                      (MethodInfo_255A020 *)method->rgctx_data->_2_UnityEngine_GameObject_AddComponent_T_);
  return pIVar5;
}


// CustomLogic.BuiltinComponentInstance$$get_Enabled
// il2cpp: bool CustomLogic_BuiltinComponentInstance__get_Enabled (CustomLogic_BuiltinComponentInstance_o* __this, const MethodInfo* method);
// 0x4254750

bool_conflict
CustomLogic_BuiltinComponentInstance__get_Enabled
          (CustomLogic_BuiltinComponentInstance_o *__this,MethodInfo *method)

{
  byte bVar1;
  void *pvVar2;
  UnityEngine_Object_o *pUVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  Il2CppType *pIVar5;
  Il2CppClass **ppIVar6;
  UnityEngine_Behaviour_o *__this_00;
  UnityEngine_Behaviour_c *__this_01;
  
  if (g_data_057adb8d == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057adb8d = '\x01';
  }
  __this_00 = (UnityEngine_Behaviour_o *)(__this->fields).Component;
  if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
    bVar1 = (TypeInfo_Behaviour->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       (ppIVar6 = (__this_00->klass->_2).typeHierarchy, ppIVar6[(ulong)bVar1 - 1] == TypeInfo_Behaviour)) {
      if (__this_00 != (UnityEngine_Behaviour_o *)0x0) {
        bVar4 = UnityEngine_Behaviour__get_enabled(__this_00,(MethodInfo *)0x0);
        return bVar4;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adb8e == '\0') {
        il2cpp_runtime_helper_023445d0();
        g_data_057adb8e = '\x01';
      }
      __this_01 = __this_00[2].klass;
      if (__this_01 != (UnityEngine_Behaviour_c *)0x0) {
        pvVar2 = (__this_01->_1).image;
        bVar1 = (TypeInfo_Behaviour->_2).naturalAligment;
        if ((bVar1 <= *(byte *)((long)pvVar2 + 0x130)) &&
           (*(Il2CppClass **)(*(long *)((long)pvVar2 + 200) + -8 + (ulong)bVar1 * 8) == TypeInfo_Behaviour)) {
          if (__this_01 != (UnityEngine_Behaviour_c *)0x0) {
            UnityEngine_Behaviour__set_enabled
                      ((UnityEngine_Behaviour_o *)__this_01,(uint)ppIVar6 & 0xff,(MethodInfo *)0x0);
            return extraout_EAX;
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057adb8f == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
            g_data_057adb8f = '\x01';
          }
          pUVar3 = (__this_01->_1).this_arg.data;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar4 = UnityEngine_Object__op_Inequality(pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar4 == '\0') {
            return bVar4;
          }
          pIVar5 = &(__this_01->_1).this_arg;
          pUVar3 = pIVar5->data;
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Object__Destroy_4e01c60(pUVar3,(MethodInfo *)0x0);
          pIVar5->data = (void *)0x0;
          bVar4 = il2cpp_runtime_helper_022b4080(pIVar5,0);
          return bVar4;
        }
      }
      return (bool_conflict)__this_01;
    }
  }
  return 0;
}


// CustomLogic.BuiltinComponentInstance$$set_Enabled
// il2cpp: void CustomLogic_BuiltinComponentInstance__set_Enabled (CustomLogic_BuiltinComponentInstance_o* __this, bool value, const MethodInfo* method);
// 0x42547c0

void CustomLogic_BuiltinComponentInstance__set_Enabled
               (CustomLogic_BuiltinComponentInstance_o *__this,bool_conflict value,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_Behaviour_c *pUVar2;
  bool_conflict bVar3;
  UnityEngine_Behaviour_o *pUVar4;
  
  if (g_data_057adb8e == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057adb8e = '\x01';
  }
  pUVar4 = (UnityEngine_Behaviour_o *)(__this->fields).Component;
  if (pUVar4 != (UnityEngine_Behaviour_o *)0x0) {
    bVar1 = (TypeInfo_Behaviour->_2).naturalAligment;
    if ((bVar1 <= (pUVar4->klass->_2).naturalAligment) &&
       ((pUVar4->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Behaviour)) {
      if (pUVar4 != (UnityEngine_Behaviour_o *)0x0) {
        UnityEngine_Behaviour__set_enabled(pUVar4,value & 0xff,(MethodInfo *)0x0);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057adb8f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        g_data_057adb8f = '\x01';
      }
      pUVar2 = pUVar4[2].klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return;
      }
      pUVar4 = pUVar4 + 2;
      pUVar2 = pUVar4->klass;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)pUVar2,(MethodInfo *)0x0);
      pUVar4->klass = (UnityEngine_Behaviour_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar4,0);
      return;
    }
  }
  return;
}


// CustomLogic.BuiltinComponentInstance$$Unload
// il2cpp: void CustomLogic_BuiltinComponentInstance__Unload (CustomLogic_BuiltinComponentInstance_o* __this, const MethodInfo* method);
// 0x4254840

void CustomLogic_BuiltinComponentInstance__Unload
               (CustomLogic_BuiltinComponentInstance_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *pUVar1;
  bool_conflict bVar2;
  UnityEngine_Component_o **ppUVar3;
  
  if (g_data_057adb8f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057adb8f = '\x01';
  }
  pUVar1 = (UnityEngine_Object_o *)(__this->fields).Component;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality(pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    ppUVar3 = &(__this->fields).Component;
    pUVar1 = (UnityEngine_Object_o *)*ppUVar3;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    UnityEngine_Object__Destroy_4e01c60(pUVar1,(MethodInfo *)0x0);
    *ppUVar3 = (UnityEngine_Component_o *)0x0;
    il2cpp_runtime_helper_022b4080(ppUVar3,0);
    return;
  }
  return;
}


