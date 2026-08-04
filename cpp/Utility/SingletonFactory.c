// Type: Utility.SingletonFactory
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Utility/SingletonFactory.cs
// Prior real C# source (older reference): Assets/Scripts/Utility/SingletonFactory.cs
// --------------------------------

// Utility.SingletonFactory$$CreateSingleton<object>
// il2cpp: Il2CppObject* Utility_SingletonFactory__CreateSingleton_object_ (Il2CppObject* instance, const MethodInfo_25CB310* method);
// 0x26cb310

Il2CppObject *
Utility_SingletonFactory__CreateSingleton_object_(Il2CppObject *instance,MethodInfo_25CB310 *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  System_Type_o *pSVar3;
  System_String_o *pSVar4;
  undefined8 uVar5;
  System_Exception_o *__this;
  long pointer;
  intptr_t iVar6;
  undefined1 *puVar7;
  long in_RCX;
  ulong extraout_RDX;
  int iVar8;
  uint uVar9;
  ulong uVar10;
  int32_t offset;
  
  if (method->rgctx_data == (MethodInfo_25CB310_RGCTXs *)0x0) {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Util);
    if (method->rgctx_data != (MethodInfo_25CB310_RGCTXs *)0x0) goto label_026cb341;
    il2cpp_runtime_helper_02300a20(method);
    iVar8 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
label_026cb341:
    iVar8 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar8 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)instance,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar2 = Utility_Util__CreateDontDestroyObj_object_
                       ((MethodInfo_264FD00 *)method->rgctx_data->_2_Utility_Util_CreateDontDestroyObj_T_);
    return pIVar2;
  }
  handle.fields.value = (System_RuntimeTypeHandle_Fields)method->rgctx_data->_1_T;
  il2cpp_runtime_helper_01f68090(g_data_057b9c50);
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  il2cpp_runtime_helper_01f681a0(pSVar3);
  pIVar2 = (Il2CppObject *)
           (*(pSVar3->klass->vtable)._8_unknown.methodPtr)(pSVar3,(pSVar3->klass->vtable)._8_unknown.method);
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Attempting to create duplicate singleton of {0}");
  pSVar4 = System_String__Format(pSVar4,pIVar2,(MethodInfo *)0x0);
  uVar5 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_helper_023052d0(uVar5);
  System_Exception___ctor_3cf6120(__this,pSVar4,(MethodInfo *)0x0);
  il2cpp_runtime_helper_022b2b10();
  uVar10 = extraout_RDX & 0xffffffff;
  uVar9 = (uint)extraout_RDX;
  if (*(long *)(in_RCX + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  pointer = System_IntPtr__op_Explicit(0,(MethodInfo *)0x0);
  while (7 < (int)uVar9) {
    bVar1 = System_Byte__Equals_3c17320
                      (0xb7,*(uint8_t *)((long)&__this->klass + pointer),
                       *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
    if ((char)bVar1 != '\0') goto label_026cb757;
    iVar6 = System_IntPtr__op_Addition(pointer,1,(MethodInfo *)0x0);
    bVar1 = System_Byte__Equals_3c17320
                      (0xb7,*(uint8_t *)((long)&__this->klass + iVar6),
                       *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
    if ((char)bVar1 != '\0') goto label_026cb6b2;
    iVar6 = System_IntPtr__op_Addition(pointer,2,(MethodInfo *)0x0);
    bVar1 = System_Byte__Equals_3c17320
                      (0xb7,*(uint8_t *)((long)&__this->klass + iVar6),
                       *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
    if ((char)bVar1 != '\0') goto label_026cb6e9;
    iVar6 = System_IntPtr__op_Addition(pointer,3,(MethodInfo *)0x0);
    bVar1 = System_Byte__Equals_3c17320
                      (0xb7,*(uint8_t *)((long)&__this->klass + iVar6),
                       *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
    if ((char)bVar1 != '\0') goto label_026cb745;
    iVar6 = System_IntPtr__op_Addition(pointer,4,(MethodInfo *)0x0);
    bVar1 = System_Byte__Equals_3c17320
                      (0xb7,*(uint8_t *)((long)&__this->klass + iVar6),
                       *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
    if ((char)bVar1 != '\0') {
      offset = 4;
      goto label_026cb74d;
    }
    iVar6 = System_IntPtr__op_Addition(pointer,5,(MethodInfo *)0x0);
    bVar1 = System_Byte__Equals_3c17320
                      (0xb7,*(uint8_t *)((long)&__this->klass + iVar6),
                       *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
    if ((char)bVar1 != '\0') {
      offset = 5;
      goto label_026cb74d;
    }
    iVar6 = System_IntPtr__op_Addition(pointer,6,(MethodInfo *)0x0);
    bVar1 = System_Byte__Equals_3c17320
                      (0xb7,*(uint8_t *)((long)&__this->klass + iVar6),
                       *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
    if ((char)bVar1 != '\0') {
      offset = 6;
      goto label_026cb74d;
    }
    iVar6 = System_IntPtr__op_Addition(pointer,7,(MethodInfo *)0x0);
    bVar1 = System_Byte__Equals_3c17320
                      (0xb7,*(uint8_t *)((long)&__this->klass + iVar6),
                       *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
    if ((char)bVar1 != '\0') {
      offset = 7;
      goto label_026cb74d;
    }
    uVar9 = (int)uVar10 - 8;
    uVar10 = (ulong)uVar9;
    pointer = System_IntPtr__op_Addition(pointer,8,(MethodInfo *)0x0);
  }
  if ((int)uVar9 < 4) {
joined_r0x026cb790:
    puVar7 = &g_data_ffffffff;
    if (0 < (int)uVar9) {
      puVar7 = &g_data_ffffffff;
      iVar8 = uVar9 + 1;
      do {
        bVar1 = System_Byte__Equals_3c17320
                          (0xb7,*(uint8_t *)((long)&__this->klass + pointer),
                           *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
        if ((char)bVar1 != '\0') goto label_026cb757;
        pointer = System_IntPtr__op_Addition(pointer,1,(MethodInfo *)0x0);
        iVar8 = iVar8 + -1;
      } while (1 < iVar8);
    }
  }
  else {
    bVar1 = System_Byte__Equals_3c17320
                      (0xb7,*(uint8_t *)((long)&__this->klass + pointer),
                       *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
    if ((char)bVar1 == '\0') {
      iVar6 = System_IntPtr__op_Addition(pointer,1,(MethodInfo *)0x0);
      bVar1 = System_Byte__Equals_3c17320
                        (0xb7,*(uint8_t *)((long)&__this->klass + iVar6),
                         *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
      if ((char)bVar1 == '\0') {
        iVar6 = System_IntPtr__op_Addition(pointer,2,(MethodInfo *)0x0);
        bVar1 = System_Byte__Equals_3c17320
                          (0xb7,*(uint8_t *)((long)&__this->klass + iVar6),
                           *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
        if ((char)bVar1 == '\0') {
          iVar6 = System_IntPtr__op_Addition(pointer,3,(MethodInfo *)0x0);
          bVar1 = System_Byte__Equals_3c17320
                            (0xb7,*(uint8_t *)((long)&__this->klass + iVar6),
                             *(MethodInfo **)(*(long *)(in_RCX + 0x38) + 0x20));
          if ((char)bVar1 == '\0') {
            uVar9 = uVar9 - 4;
            pointer = System_IntPtr__op_Addition(pointer,4,(MethodInfo *)0x0);
            goto joined_r0x026cb790;
          }
label_026cb745:
          offset = 3;
        }
        else {
label_026cb6e9:
          offset = 2;
        }
      }
      else {
label_026cb6b2:
        offset = 1;
      }
label_026cb74d:
      pointer = System_IntPtr__op_Addition(pointer,offset,(MethodInfo *)0x0);
    }
label_026cb757:
    puVar7 = System_IntPtr__op_Explicit_3d0c9f0(pointer,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)((ulong)puVar7 & 0xffffffff);
}


// Utility.SingletonFactory$$.ctor
// il2cpp: void Utility_SingletonFactory___ctor (Utility_SingletonFactory_o* __this, const MethodInfo* method);
// 0x4494040

void Utility_SingletonFactory___ctor(Utility_SingletonFactory_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


