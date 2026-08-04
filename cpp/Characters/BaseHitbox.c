// Type: Characters.BaseHitbox
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/BaseHitbox.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/BaseHitbox.cs
// --------------------------------

// Characters.BaseHitbox.<WaitAndActivate>d__15$$.ctor
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__15___ctor (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42a75a0

void Characters_BaseHitbox__WaitAndActivate_d__15___ctor
               (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseHitbox.<WaitAndActivate>d__15$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__15__System_IDisposable_Dispose (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, const MethodInfo* method);
// 0x42a7c10

void Characters_BaseHitbox__WaitAndActivate_d__15__System_IDisposable_Dispose
               (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseHitbox.<WaitAndActivate>d__15$$MoveNext
// il2cpp: bool Characters_BaseHitbox__WaitAndActivate_d__15__MoveNext (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, const MethodInfo* method);
// 0x42a7c20

bool_conflict
Characters_BaseHitbox__WaitAndActivate_d__15__MoveNext
          (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  Characters_BaseHitbox_o *pCVar2;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  bool_conflict bVar3;
  UnityEngine_WaitForSeconds_o *__this_02;
  bool_conflict bVar4;
  Characters_BaseHitbox__WaitAndActivate_d__15_o *pCVar5;
  
  pCVar5 = __this;
  if (g_data_057add7a == '\0') {
    pCVar5 = (Characters_BaseHitbox__WaitAndActivate_d__15_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057add7a = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pCVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pCVar2 == (Characters_BaseHitbox_o *)0x0) ||
       (__this_00 = (pCVar2->fields)._collider, pCVar5 = (Characters_BaseHitbox__WaitAndActivate_d__15_o *)0x0
       , __this_00 == (UnityEngine_Collider_o *)0x0)) {
label_042a7d44:
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(pCVar5->fields).__2__current;
    }
    UnityEngine_Collider__set_enabled(__this_00,1,(MethodInfo *)0x0);
    if (g_data_057add78 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057add78 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pCVar2->fields)._debugObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = 0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_01 = (pCVar2->fields)._debugObject;
      pCVar5 = (Characters_BaseHitbox__WaitAndActivate_d__15_o *)0x0;
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_042a7d44;
      bVar4 = 0;
      UnityEngine_GameObject__SetActive(__this_01,1,(MethodInfo *)0x0);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).delay;
    __this_02 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_02,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_02);
    (__this->fields).__1__state = 1;
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}


// Characters.BaseHitbox.<WaitAndActivate>d__15$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndActivate_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, const MethodInfo* method);
// 0x42a7d50

Il2CppObject *
Characters_BaseHitbox__WaitAndActivate_d__15__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndActivate>d__15$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseHitbox__WaitAndActivate_d__15__System_Collections_IEnumerator_Reset (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, const MethodInfo* method);
// 0x42a7d60

void Characters_BaseHitbox__WaitAndActivate_d__15__System_Collections_IEnumerator_Reset
               (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Characters.BaseHitbox.<WaitAndActivate>d__15$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndActivate_d__15__System_Collections_IEnumerator_get_Current (Characters_BaseHitbox__WaitAndActivate_d__15_o* __this, const MethodInfo* method);
// 0x42a7da0

Il2CppObject *
Characters_BaseHitbox__WaitAndActivate_d__15__System_Collections_IEnumerator_get_Current
          (Characters_BaseHitbox__WaitAndActivate_d__15_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$.ctor
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__16___ctor (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x42a75c0

void Characters_BaseHitbox__WaitAndDeactivate_d__16___ctor
               (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,int32_t __1__state,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$System.IDisposable.Dispose
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__16__System_IDisposable_Dispose (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, const MethodInfo* method);
// 0x42a7db0

void Characters_BaseHitbox__WaitAndDeactivate_d__16__System_IDisposable_Dispose
               (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,MethodInfo *method)

{
  return;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$MoveNext
// il2cpp: bool Characters_BaseHitbox__WaitAndDeactivate_d__16__MoveNext (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, const MethodInfo* method);
// 0x42a7dc0

bool_conflict
Characters_BaseHitbox__WaitAndDeactivate_d__16__MoveNext
          (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,MethodInfo *method)

{
  float seconds;
  int iVar1;
  Characters_BaseHitbox_o *pCVar2;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *x;
  UnityEngine_GameObject_o *__this_01;
  bool_conflict bVar3;
  UnityEngine_WaitForSeconds_o *__this_02;
  bool_conflict bVar4;
  Characters_BaseHitbox__WaitAndDeactivate_d__16_o *pCVar5;
  
  pCVar5 = __this;
  if (g_data_057add7b == '\0') {
    pCVar5 = (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *)&TypeInfo_WaitForSeconds;
    il2cpp_runtime_helper_023445d0();
    g_data_057add7b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    pCVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    if ((pCVar2 == (Characters_BaseHitbox_o *)0x0) ||
       (__this_00 = (pCVar2->fields)._collider,
       pCVar5 = (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *)0x0,
       __this_00 == (UnityEngine_Collider_o *)0x0)) {
label_042a7ede:
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(pCVar5->fields).__2__current;
    }
    UnityEngine_Collider__set_enabled(__this_00,0,(MethodInfo *)0x0);
    if (g_data_057add78 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057add78 = '\x01';
    }
    x = (UnityEngine_Object_o *)(pCVar2->fields)._debugObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = 0;
    bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_01 = (pCVar2->fields)._debugObject;
      pCVar5 = (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *)0x0;
      if (__this_01 == (UnityEngine_GameObject_o *)0x0) goto label_042a7ede;
      bVar4 = 0;
      UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
    }
  }
  else if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    seconds = (__this->fields).delay;
    __this_02 = (UnityEngine_WaitForSeconds_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSeconds);
    UnityEngine_WaitForSeconds___ctor(__this_02,seconds,(MethodInfo *)0x0);
    (__this->fields).__2__current = (Il2CppObject *)__this_02;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_02);
    (__this->fields).__1__state = 1;
    bVar4 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  else {
    bVar4 = 0;
  }
  return bVar4;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndDeactivate_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, const MethodInfo* method);
// 0x42a7ef0

Il2CppObject *
Characters_BaseHitbox__WaitAndDeactivate_d__16__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$System.Collections.IEnumerator.Reset
// il2cpp: void Characters_BaseHitbox__WaitAndDeactivate_d__16__System_Collections_IEnumerator_Reset (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, const MethodInfo* method);
// 0x42a7f00

void Characters_BaseHitbox__WaitAndDeactivate_d__16__System_Collections_IEnumerator_Reset
               (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// Characters.BaseHitbox.<WaitAndDeactivate>d__16$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* Characters_BaseHitbox__WaitAndDeactivate_d__16__System_Collections_IEnumerator_get_Current (Characters_BaseHitbox__WaitAndDeactivate_d__16_o* __this, const MethodInfo* method);
// 0x42a7f40

Il2CppObject *
Characters_BaseHitbox__WaitAndDeactivate_d__16__System_Collections_IEnumerator_get_Current
          (Characters_BaseHitbox__WaitAndDeactivate_d__16_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// Characters.BaseHitbox$$Create
// il2cpp: Characters_BaseHitbox_o* Characters_BaseHitbox__Create (Characters_BaseCharacter_o* owner, UnityEngine_GameObject_o* obj, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x42a6bf0

Characters_BaseHitbox_o *
Characters_BaseHitbox__Create
          (Characters_BaseCharacter_o *owner,UnityEngine_GameObject_o *obj,UnityEngine_Collider_o *collider,
          MethodInfo *method)

{
  System_String_Fields *pSVar1;
  code cVar2;
  byte bVar3;
  UnityEngine_Collider_o *__this;
  System_String_o *__this_00;
  long lVar4;
  bool_conflict bVar5;
  Characters_BaseHitbox_o *pCVar6;
  undefined4 extraout_var;
  Characters_BaseHitbox_o *extraout_RAX;
  System_String_Fields SVar7;
  System_String_Fields __this_01;
  System_String_Fields SVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Material_o *__this_02;
  Characters_BaseHitbox_o *extraout_RAX_00;
  undefined8 *puVar10;
  MethodInfo *method_00;
  System_String_Fields __this_03;
  Characters_BaseCharacter_o *__this_04;
  System_String_Fields SVar11;
  System_String_Fields __this_05;
  System_String_Fields unaff_R13;
  float fVar12;
  float extraout_XMM0_Da;
  UnityEngine_Vector3_o UVar13;
  UnityEngine_Color_o value;
  undefined8 uStack_40;
  
  __this_04 = owner;
  if (g_data_057add6e == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseHitbox_AddComponent_BaseHitbox);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Collider_GetComponent_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    __this_04 = (Characters_BaseCharacter_o *)&TypeInfo_SphereCollider;
    il2cpp_runtime_helper_023445d0();
    g_data_057add6e = '\x01';
  }
  if ((obj != (UnityEngine_GameObject_o *)0x0) &&
     (__this_04 = (Characters_BaseCharacter_o *)obj,
     pCVar6 = (Characters_BaseHitbox_o *)UnityEngine_GameObject__AddComponent_object_(obj,MethodInfo_BaseHitbox_AddComponent_BaseHitbox),
     pCVar6 != (Characters_BaseHitbox_o *)0x0)) {
    (pCVar6->fields).Owner = owner;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields).Owner);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar5 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)collider,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      collider = (UnityEngine_Collider_o *)UnityEngine_GameObject__GetComponent_object_(obj,MethodInfo_Collider_GetComponent_Collider);
    }
    (pCVar6->fields)._collider = collider;
    method_00 = (MethodInfo *)collider;
    il2cpp_runtime_helper_022b4080(&(pCVar6->fields)._collider);
    Characters_BaseHitbox__Deactivate(pCVar6,method_00);
    if ((MethodInfo *)collider != (MethodInfo *)0x0) {
      cVar2 = *(code *)&TypeInfo_SphereCollider[3].fields.m_CachedPtr;
      if (((byte)cVar2 <= (byte)((MethodInfo *)collider)->methodPointer[0x130]) &&
         (*(Characters_BaseHitbox_o **)
           (*(long *)(((MethodInfo *)collider)->methodPointer + 200) + -8 + (long)(ulong)(byte)cVar2 * 8) ==
          TypeInfo_SphereCollider)) {
        Characters_BaseHitbox__UpdateDebugCollider
                  (pCVar6,(UnityEngine_SphereCollider_o *)collider,(MethodInfo *)(ulong)(byte)cVar2);
      }
    }
    return pCVar6;
  }
  uStack_40 = il2cpp_runtime_helper_022b2c90();
  puVar10 = &uStack_40;
  SVar7._stringLength = 0;
  SVar7._firstChar = 0;
  SVar7._6_2_ = 0;
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this_04,(MethodInfo *)0x0);
  __this = *(UnityEngine_Collider_o **)&(__this_04->fields).HasExplicitNameTag;
  if (__this != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_enabled(__this,0,(MethodInfo *)0x0);
    if (g_data_057add78 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057add78 = '\x01';
    }
    collider = (UnityEngine_Collider_o *)(__this_04->fields).Guild;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SVar7._stringLength = 0;
    SVar7._firstChar = 0;
    SVar7._6_2_ = 0;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)collider,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 == '\0') {
      return (Characters_BaseHitbox_o *)CONCAT44(extraout_var,bVar5);
    }
    __this_00 = (__this_04->fields).Guild;
    if (__this_00 != (System_String_o *)0x0) {
      UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)__this_00,0,(MethodInfo *)0x0);
      return extraout_RAX;
    }
  }
  SVar11._stringLength = 0;
  SVar11._firstChar = 0;
  SVar11._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    __this_05 = SVar11;
    __this_03 = SVar7;
    *(UnityEngine_GameObject_o **)((long)puVar10 + -8) = obj;
    *(UnityEngine_Collider_o **)((long)puVar10 + -0x10) = collider;
    *(System_String_Fields *)((long)puVar10 + -0x18) = unaff_R13;
    *(Characters_BaseCharacter_o **)((long)puVar10 + -0x20) = owner;
    *(Characters_BaseCharacter_o **)((long)puVar10 + -0x28) = __this_04;
    if (g_data_057add71 == '\0') {
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6dd8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DebugTesting);
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6de4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6df0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6dfc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6e08;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6e14;
      il2cpp_runtime_helper_023445d0(&"Game");
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6e20;
      il2cpp_runtime_helper_023445d0(&"TestSphere");
      g_data_057add71 = '\x01';
    }
    if (*(char *)&(*(Characters_BaseHitbox_o **)(TypeInfo_DebugTesting + 0xb8))->monitor == '\0') {
      return *(Characters_BaseHitbox_o **)(TypeInfo_DebugTesting + 0xb8);
    }
    __this_01 = *(System_String_Fields *)((long)__this_05 + 0x58);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6e60;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = (System_String_Fields *)((long)__this_05 + 0x58);
    *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6e71;
    bVar5 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar5 != '\0') {
      __this_01 = *pSVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6e8a;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6e94;
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6eac;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6ed1;
    SVar11 = "Game";
    SVar7 = (System_String_Fields)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      ((System_String_o *)"Game","TestSphere",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    unaff_R13 = (System_String_Fields)&TypeInfo_Object;
    if (SVar7 != (System_String_Fields)0x0) {
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6ee7;
      __this_01 = (System_String_Fields)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SVar7,(MethodInfo *)0x0);
      *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6ef4;
      SVar11 = __this_05;
      SVar8 = (System_String_Fields)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
      unaff_R13 = SVar7;
      if (SVar8 != (System_String_Fields)0x0) {
        *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6f07;
        pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SVar8,(MethodInfo *)0x0);
        SVar11 = SVar8;
        if (__this_01 != (System_String_Fields)0x0) {
          *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6f1d;
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)__this_01,pUVar9,(MethodInfo *)0x0);
          *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6f27;
          SVar11 = SVar7;
          pUVar9 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SVar7,(MethodInfo *)0x0);
          if (__this_03 != (System_String_Fields)0x0) {
            *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6f3d;
            SVar11 = __this_03;
            UVar13 = UnityEngine_SphereCollider__get_center
                               ((UnityEngine_SphereCollider_o *)__this_03,(MethodInfo *)0x0);
            __this_01._stringLength = 0;
            __this_01._firstChar = 0;
            __this_01._6_2_ = 0;
            if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
              *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6f50;
              UnityEngine_Transform__set_localPosition(pUVar9,UVar13,(MethodInfo *)0x0);
              *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6f5a;
              __this_01 = (System_String_Fields)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar7,(MethodInfo *)0x0);
              if (g_data_057a6932 == '\0') {
                *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6f72;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a6932 = '\x01';
              }
              lVar4 = *(long *)(TypeInfo_Vector3 + 0xb8);
              *(undefined8 *)((long)puVar10 + -0x38) = *(undefined8 *)(lVar4 + 0xc);
              *(undefined8 *)((long)puVar10 + -0x30) = 0;
              *(undefined4 *)((long)puVar10 + -0x3c) = *(undefined4 *)(lVar4 + 0x14);
              *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6fa9;
              SVar11 = __this_03;
              fVar12 = UnityEngine_SphereCollider__get_radius
                                 ((UnityEngine_SphereCollider_o *)__this_03,(MethodInfo *)0x0);
              if (__this_01 != (System_String_Fields)0x0) {
                UVar13.fields.z =
                     *(float *)((long)puVar10 + -0x3c) * fVar12 + *(float *)((long)puVar10 + -0x3c) * fVar12;
                *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6fdf;
                UVar13.fields.y =
                     *(float *)((long)puVar10 + -0x34) * fVar12 + *(float *)((long)puVar10 + -0x34) * fVar12;
                UVar13.fields.x =
                     *(float *)((long)puVar10 + -0x38) * fVar12 + *(float *)((long)puVar10 + -0x38) * fVar12;
                UnityEngine_Transform__set_localScale
                          ((UnityEngine_Transform_o *)__this_01,UVar13,(MethodInfo *)0x0);
                *(undefined8 *)((long)puVar10 + -0x50) = 0x42a6ff1;
                SVar11 = SVar7;
                SVar8 = (System_String_Fields)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)SVar7,MethodInfo_Renderer_GetComponent_Renderer);
                if (SVar8 != (System_String_Fields)0x0) {
                  *(undefined8 *)((long)puVar10 + -0x50) = 0x42a7000;
                  __this_02 = UnityEngine_Renderer__get_material
                                        ((UnityEngine_Renderer_o *)SVar8,(MethodInfo *)0x0);
                  SVar11 = SVar8;
                  if (__this_02 != (UnityEngine_Material_o *)0x0) {
                    *(undefined8 *)((long)puVar10 + -0x50) = 0x42a701e;
                    value.fields.b = 0.0;
                    value.fields.a = 1.0;
                    value.fields.r = 1.0;
                    value.fields.g = 0.0;
                    UnityEngine_Material__set_color(__this_02,value,(MethodInfo *)0x0);
                    *pSVar1 = SVar7;
                    *(undefined8 *)((long)puVar10 + -0x50) = 0x42a702c;
                    il2cpp_runtime_helper_022b4080(pSVar1);
                    SVar11._stringLength = 0;
                    SVar11._firstChar = 0;
                    SVar11._6_2_ = 0;
                    if (*pSVar1 != (System_String_Fields)0x0) {
                      UnityEngine_GameObject__SetActive
                                ((UnityEngine_GameObject_o *)*pSVar1,0,(MethodInfo *)0x0);
                      return extraout_RAX_00;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)puVar10 + -0x50) = 0x42a705d;
    pCVar6 = (Characters_BaseHitbox_o *)il2cpp_runtime_helper_022b2c90();
    *(System_String_Fields **)((long)puVar10 + -0x50) = pSVar1;
    *(System_String_Fields *)((long)puVar10 + -0x58) = __this_01;
    *(Characters_BaseHitbox_o **)((long)puVar10 + -0x60) = pCVar6;
    fVar12 = extraout_XMM0_Da;
    if (g_data_057add6f == '\0') {
      *(float *)((long)puVar10 + -0x5c) = extraout_XMM0_Da;
      *(undefined8 *)((long)puVar10 + -0x68) = 0x42a7082;
      pCVar6 = (Characters_BaseHitbox_o *)il2cpp_runtime_helper_023445d0(&TypeInfo_SphereCollider);
      fVar12 = *(float *)((long)puVar10 + -0x5c);
      g_data_057add6f = '\x01';
    }
    SVar7 = *(System_String_Fields *)((long)SVar11 + 0x50);
    if (SVar7 == (System_String_Fields)0x0) break;
    bVar3 = (byte)TypeInfo_SphereCollider[3].fields.m_CachedPtr;
    if (*(byte *)(*(long *)SVar7 + 0x130) < bVar3) {
      return TypeInfo_SphereCollider;
    }
    if (*(Characters_BaseHitbox_o **)(*(long *)(*(long *)SVar7 + 200) + -8 + (ulong)bVar3 * 8) != TypeInfo_SphereCollider
       ) {
      return TypeInfo_SphereCollider;
    }
    *(undefined8 *)((long)puVar10 + -0x68) = 0x42a70d4;
    UnityEngine_SphereCollider__set_radius((UnityEngine_SphereCollider_o *)SVar7,fVar12,(MethodInfo *)0x0);
    __this_04 = *(Characters_BaseCharacter_o **)((long)puVar10 + -0x58);
    collider = *(UnityEngine_Collider_o **)((long)puVar10 + -0x50);
    puVar10 = (undefined8 *)((long)puVar10 + -0x48);
    owner = (Characters_BaseCharacter_o *)__this_05;
    obj = (UnityEngine_GameObject_o *)__this_03;
  }
  return pCVar6;
}


// Characters.BaseHitbox$$UpdateSphereCollider
// il2cpp: void Characters_BaseHitbox__UpdateSphereCollider (Characters_BaseHitbox_o* __this, float radius, const MethodInfo* method);
// 0x42a7060

void Characters_BaseHitbox__UpdateSphereCollider
               (Characters_BaseHitbox_o *__this,float radius,MethodInfo *method)

{
  long lVar1;
  System_String_Fields __this_00;
  undefined8 uVar2;
  undefined8 uVar3;
  bool_conflict bVar4;
  System_String_Fields __this_01;
  System_String_Fields SVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Material_o *__this_02;
  undefined8 in_RAX;
  System_String_Fields unaff_RBX;
  System_String_Fields __this_03;
  System_String_Fields unaff_R12;
  System_String_Fields unaff_R13;
  System_String_Fields *unaff_R14;
  System_String_Fields unaff_R15;
  float fVar7;
  float extraout_XMM0_Da;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Color_o value;
  
  while( true ) {
    __this_03 = (System_String_Fields)__this;
    *(System_String_Fields **)((long)register0x00000020 + -8) = unaff_R14;
    *(System_String_Fields *)((long)register0x00000020 + -0x10) = unaff_RBX;
    *(undefined8 *)((long)register0x00000020 + -0x18) = in_RAX;
    if (g_data_057add6f == '\0') {
      *(float *)((long)register0x00000020 + -0x14) = radius;
      *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42a7082;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SphereCollider);
      radius = *(float *)((long)register0x00000020 + -0x14);
      g_data_057add6f = '\x01';
    }
    __this_00 = *(System_String_Fields *)((long)__this_03 + 0x50);
    if (__this_00 == (System_String_Fields)0x0) {
      return;
    }
    if (*(byte *)(*(long *)__this_00 + 0x130) < *(byte *)(TypeInfo_SphereCollider + 0x130)) {
      return;
    }
    if (*(long *)(*(long *)(*(long *)__this_00 + 200) + -8 + (ulong)*(byte *)(TypeInfo_SphereCollider + 0x130) * 8) !=
        TypeInfo_SphereCollider) break;
    *(undefined8 *)((long)register0x00000020 + -0x20) = 0x42a70d4;
    UnityEngine_SphereCollider__set_radius((UnityEngine_SphereCollider_o *)__this_00,radius,(MethodInfo *)0x0)
    ;
    uVar2 = *(undefined8 *)((long)register0x00000020 + -0x10);
    uVar3 = *(undefined8 *)((long)register0x00000020 + -8);
    *(System_String_Fields *)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x10) = uVar3;
    *(System_String_Fields *)((long)register0x00000020 + -0x18) = unaff_R13;
    *(System_String_Fields *)((long)register0x00000020 + -0x20) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x28) = uVar2;
    if (g_data_057add71 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6dd8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DebugTesting);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6de4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6df0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6dfc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e08;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e14;
      il2cpp_runtime_helper_023445d0(&"Game");
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e20;
      il2cpp_runtime_helper_023445d0(&"TestSphere");
      g_data_057add71 = '\x01';
    }
    if (*(char *)(*(long *)(TypeInfo_DebugTesting + 0xb8) + 8) == '\0') {
      return;
    }
    unaff_RBX = *(System_String_Fields *)((long)__this_03 + 0x58);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e60;
      il2cpp_runtime_helper_02337ed0();
    }
    unaff_R14 = (System_String_Fields *)((long)__this_03 + 0x58);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e71;
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)unaff_RBX,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      unaff_RBX = *unaff_R14;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e8a;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e94;
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)unaff_RBX,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6eac;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6ed1;
    __this = (Characters_BaseHitbox_o *)"Game";
    __this_01 = (System_String_Fields)
                ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          ((System_String_o *)"Game","TestSphere",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    unaff_R13 = (System_String_Fields)&TypeInfo_Object;
    if (__this_01 != (System_String_Fields)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6ee7;
      unaff_RBX = (System_String_Fields)
                  UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6ef4;
      __this = (Characters_BaseHitbox_o *)__this_03;
      SVar5 = (System_String_Fields)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_03,(MethodInfo *)0x0);
      unaff_R13 = __this_01;
      if (SVar5 != (System_String_Fields)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f07;
        pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SVar5,(MethodInfo *)0x0);
        __this = (Characters_BaseHitbox_o *)SVar5;
        if (unaff_RBX != (System_String_Fields)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f1d;
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)unaff_RBX,pUVar6,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f27;
          __this = (Characters_BaseHitbox_o *)__this_01;
          pUVar6 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
          if (__this_00 != (System_String_Fields)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f3d;
            __this = (Characters_BaseHitbox_o *)__this_00;
            UVar8 = UnityEngine_SphereCollider__get_center
                              ((UnityEngine_SphereCollider_o *)__this_00,(MethodInfo *)0x0);
            unaff_RBX._stringLength = 0;
            unaff_RBX._firstChar = 0;
            unaff_RBX._6_2_ = 0;
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f50;
              UnityEngine_Transform__set_localPosition(pUVar6,UVar8,(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f5a;
              unaff_RBX = (System_String_Fields)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)__this_01,(MethodInfo *)0x0);
              if (g_data_057a6932 == '\0') {
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f72;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a6932 = '\x01';
              }
              lVar1 = *(long *)(TypeInfo_Vector3 + 0xb8);
              *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(lVar1 + 0xc);
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
              *(undefined4 *)((long)register0x00000020 + -0x3c) = *(undefined4 *)(lVar1 + 0x14);
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6fa9;
              __this = (Characters_BaseHitbox_o *)__this_00;
              fVar7 = UnityEngine_SphereCollider__get_radius
                                ((UnityEngine_SphereCollider_o *)__this_00,(MethodInfo *)0x0);
              if (unaff_RBX != (System_String_Fields)0x0) {
                UVar8.fields.z =
                     *(float *)((long)register0x00000020 + -0x3c) * fVar7 +
                     *(float *)((long)register0x00000020 + -0x3c) * fVar7;
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6fdf;
                UVar8.fields.y =
                     *(float *)((long)register0x00000020 + -0x34) * fVar7 +
                     *(float *)((long)register0x00000020 + -0x34) * fVar7;
                UVar8.fields.x =
                     *(float *)((long)register0x00000020 + -0x38) * fVar7 +
                     *(float *)((long)register0x00000020 + -0x38) * fVar7;
                UnityEngine_Transform__set_localScale
                          ((UnityEngine_Transform_o *)unaff_RBX,UVar8,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6ff1;
                __this = (Characters_BaseHitbox_o *)__this_01;
                SVar5 = (System_String_Fields)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)__this_01,MethodInfo_Renderer_GetComponent_Renderer);
                if (SVar5 != (System_String_Fields)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a7000;
                  __this_02 = UnityEngine_Renderer__get_material
                                        ((UnityEngine_Renderer_o *)SVar5,(MethodInfo *)0x0);
                  __this = (Characters_BaseHitbox_o *)SVar5;
                  if (__this_02 != (UnityEngine_Material_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a701e;
                    value.fields.b = 0.0;
                    value.fields.a = 1.0;
                    value.fields.r = 1.0;
                    value.fields.g = 0.0;
                    UnityEngine_Material__set_color(__this_02,value,(MethodInfo *)0x0);
                    *unaff_R14 = __this_01;
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a702c;
                    il2cpp_runtime_helper_022b4080(unaff_R14);
                    __this._0_4_ = 0;
                    __this._4_2_ = 0;
                    __this._6_2_ = 0;
                    if (*unaff_R14 != (System_String_Fields)0x0) {
                      UnityEngine_GameObject__SetActive
                                ((UnityEngine_GameObject_o *)*unaff_R14,0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a705d;
    in_RAX = il2cpp_runtime_helper_022b2c90();
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R12 = __this_03;
    unaff_R15 = __this_00;
    radius = extraout_XMM0_Da;
  }
  return;
}


// Characters.BaseHitbox$$ScaleSphereCollider
// il2cpp: void Characters_BaseHitbox__ScaleSphereCollider (Characters_BaseHitbox_o* __this, float scale, const MethodInfo* method);
// 0x42a70f0

void Characters_BaseHitbox__ScaleSphereCollider
               (Characters_BaseHitbox_o *__this,float scale,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_SphereCollider_o *__this_00;
  MethodInfo *method_00;
  float fVar2;
  
  if (g_data_057add70 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SphereCollider);
    g_data_057add70 = '\x01';
  }
  __this_00 = (UnityEngine_SphereCollider_o *)(__this->fields)._collider;
  if (__this_00 != (UnityEngine_SphereCollider_o *)0x0) {
    bVar1 = (TypeInfo_SphereCollider->_2).naturalAligment;
    if ((bVar1 <= (__this_00->klass->_2).naturalAligment) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_SphereCollider)) {
      fVar2 = UnityEngine_SphereCollider__get_radius(__this_00,(MethodInfo *)0x0);
      UnityEngine_SphereCollider__set_radius(__this_00,fVar2 * scale,(MethodInfo *)0x0);
      Characters_BaseHitbox__UpdateDebugCollider(__this,__this_00,method_00);
      return;
    }
  }
  return;
}


// Characters.BaseHitbox$$UpdateDebugCollider
// il2cpp: void Characters_BaseHitbox__UpdateDebugCollider (Characters_BaseHitbox_o* __this, UnityEngine_SphereCollider_o* collider, const MethodInfo* method);
// 0x42a6db0

void Characters_BaseHitbox__UpdateDebugCollider
               (Characters_BaseHitbox_o *__this,UnityEngine_SphereCollider_o *collider,MethodInfo *method)

{
  System_String_Fields *pSVar1;
  long lVar2;
  bool_conflict bVar3;
  System_String_Fields __this_00;
  System_String_Fields __this_01;
  System_String_Fields SVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_Material_o *__this_02;
  undefined8 uVar6;
  undefined8 unaff_RBX;
  System_String_Fields __this_03;
  System_String_Fields __this_04;
  System_String_Fields unaff_R12;
  System_String_Fields unaff_R13;
  undefined8 unaff_R14;
  System_String_Fields unaff_R15;
  float fVar7;
  float extraout_XMM0_Da;
  UnityEngine_Vector3_o UVar8;
  UnityEngine_Color_o value;
  
  while( true ) {
    __this_04 = (System_String_Fields)__this;
    __this_03 = (System_String_Fields)collider;
    *(System_String_Fields *)((long)register0x00000020 + -8) = unaff_R15;
    *(undefined8 *)((long)register0x00000020 + -0x10) = unaff_R14;
    *(System_String_Fields *)((long)register0x00000020 + -0x18) = unaff_R13;
    *(System_String_Fields *)((long)register0x00000020 + -0x20) = unaff_R12;
    *(undefined8 *)((long)register0x00000020 + -0x28) = unaff_RBX;
    if (g_data_057add71 == '\0') {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6dd8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DebugTesting);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6de4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6df0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6dfc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e08;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e14;
      il2cpp_runtime_helper_023445d0(&"Game");
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e20;
      il2cpp_runtime_helper_023445d0(&"TestSphere");
      g_data_057add71 = '\x01';
    }
    if (*(char *)(*(long *)(TypeInfo_DebugTesting + 0xb8) + 8) == '\0') {
      return;
    }
    __this_01 = *(System_String_Fields *)((long)__this_04 + 0x58);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e60;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = (System_String_Fields *)((long)__this_04 + 0x58);
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e71;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_01 = *pSVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e8a;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6e94;
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)__this_01,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6eac;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6ed1;
    __this = (Characters_BaseHitbox_o *)"Game";
    __this_00 = (System_String_Fields)
                ApplicationManagers_ResourceManager__InstantiateAsset_object_
                          ((System_String_o *)"Game","TestSphere",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    unaff_R13 = (System_String_Fields)&TypeInfo_Object;
    if (__this_00 != (System_String_Fields)0x0) {
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6ee7;
      __this_01 = (System_String_Fields)
                  UnityEngine_GameObject__get_transform
                            ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
      *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6ef4;
      __this = (Characters_BaseHitbox_o *)__this_04;
      SVar4 = (System_String_Fields)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_04,(MethodInfo *)0x0);
      unaff_R13 = __this_00;
      if (SVar4 != (System_String_Fields)0x0) {
        *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f07;
        pUVar5 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SVar4,(MethodInfo *)0x0);
        __this = (Characters_BaseHitbox_o *)SVar4;
        if (__this_01 != (System_String_Fields)0x0) {
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f1d;
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)__this_01,pUVar5,(MethodInfo *)0x0);
          *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f27;
          __this = (Characters_BaseHitbox_o *)__this_00;
          pUVar5 = UnityEngine_GameObject__get_transform
                             ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
          if (__this_03 != (System_String_Fields)0x0) {
            *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f3d;
            __this = (Characters_BaseHitbox_o *)__this_03;
            UVar8 = UnityEngine_SphereCollider__get_center
                              ((UnityEngine_SphereCollider_o *)__this_03,(MethodInfo *)0x0);
            __this_01._stringLength = 0;
            __this_01._firstChar = 0;
            __this_01._6_2_ = 0;
            if (pUVar5 != (UnityEngine_Transform_o *)0x0) {
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f50;
              UnityEngine_Transform__set_localPosition(pUVar5,UVar8,(MethodInfo *)0x0);
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f5a;
              __this_01 = (System_String_Fields)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)__this_00,(MethodInfo *)0x0);
              if (g_data_057a6932 == '\0') {
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6f72;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a6932 = '\x01';
              }
              lVar2 = *(long *)(TypeInfo_Vector3 + 0xb8);
              *(undefined8 *)((long)register0x00000020 + -0x38) = *(undefined8 *)(lVar2 + 0xc);
              *(undefined8 *)((long)register0x00000020 + -0x30) = 0;
              *(undefined4 *)((long)register0x00000020 + -0x3c) = *(undefined4 *)(lVar2 + 0x14);
              *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6fa9;
              __this = (Characters_BaseHitbox_o *)__this_03;
              fVar7 = UnityEngine_SphereCollider__get_radius
                                ((UnityEngine_SphereCollider_o *)__this_03,(MethodInfo *)0x0);
              if (__this_01 != (System_String_Fields)0x0) {
                UVar8.fields.z =
                     *(float *)((long)register0x00000020 + -0x3c) * fVar7 +
                     *(float *)((long)register0x00000020 + -0x3c) * fVar7;
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6fdf;
                UVar8.fields.y =
                     *(float *)((long)register0x00000020 + -0x34) * fVar7 +
                     *(float *)((long)register0x00000020 + -0x34) * fVar7;
                UVar8.fields.x =
                     *(float *)((long)register0x00000020 + -0x38) * fVar7 +
                     *(float *)((long)register0x00000020 + -0x38) * fVar7;
                UnityEngine_Transform__set_localScale
                          ((UnityEngine_Transform_o *)__this_01,UVar8,(MethodInfo *)0x0);
                *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a6ff1;
                __this = (Characters_BaseHitbox_o *)__this_00;
                SVar4 = (System_String_Fields)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)__this_00,MethodInfo_Renderer_GetComponent_Renderer);
                if (SVar4 != (System_String_Fields)0x0) {
                  *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a7000;
                  __this_02 = UnityEngine_Renderer__get_material
                                        ((UnityEngine_Renderer_o *)SVar4,(MethodInfo *)0x0);
                  __this = (Characters_BaseHitbox_o *)SVar4;
                  if (__this_02 != (UnityEngine_Material_o *)0x0) {
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a701e;
                    value.fields.b = 0.0;
                    value.fields.a = 1.0;
                    value.fields.r = 1.0;
                    value.fields.g = 0.0;
                    UnityEngine_Material__set_color(__this_02,value,(MethodInfo *)0x0);
                    *pSVar1 = __this_00;
                    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a702c;
                    il2cpp_runtime_helper_022b4080(pSVar1);
                    __this._0_4_ = 0;
                    __this._4_2_ = 0;
                    __this._6_2_ = 0;
                    if (*pSVar1 != (System_String_Fields)0x0) {
                      UnityEngine_GameObject__SetActive
                                ((UnityEngine_GameObject_o *)*pSVar1,0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)((long)register0x00000020 + -0x50) = 0x42a705d;
    uVar6 = il2cpp_runtime_helper_022b2c90();
    *(System_String_Fields **)((long)register0x00000020 + -0x50) = pSVar1;
    *(System_String_Fields *)((long)register0x00000020 + -0x58) = __this_01;
    *(undefined8 *)((long)register0x00000020 + -0x60) = uVar6;
    fVar7 = extraout_XMM0_Da;
    if (g_data_057add6f == '\0') {
      *(float *)((long)register0x00000020 + -0x5c) = extraout_XMM0_Da;
      *(undefined8 *)((long)register0x00000020 + -0x68) = 0x42a7082;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SphereCollider);
      fVar7 = *(float *)((long)register0x00000020 + -0x5c);
      g_data_057add6f = '\x01';
    }
    collider = *(UnityEngine_SphereCollider_o **)((long)__this + 0x50);
    if ((System_String_Fields)collider == (System_String_Fields)0x0) break;
    if (*(byte *)(*(long *)collider + 0x130) < *(byte *)(TypeInfo_SphereCollider + 0x130)) {
      return;
    }
    if (*(long *)(*(long *)(*(long *)collider + 200) + -8 + (ulong)*(byte *)(TypeInfo_SphereCollider + 0x130) * 8) !=
        TypeInfo_SphereCollider) {
      return;
    }
    *(undefined8 *)((long)register0x00000020 + -0x68) = 0x42a70d4;
    UnityEngine_SphereCollider__set_radius(collider,fVar7,(MethodInfo *)0x0);
    unaff_RBX = *(undefined8 *)((long)register0x00000020 + -0x58);
    unaff_R14 = *(undefined8 *)((long)register0x00000020 + -0x50);
    register0x00000020 = (BADSPACEBASE *)((long)register0x00000020 + -0x48);
    unaff_R12 = __this_04;
    unaff_R15 = __this_03;
  }
  return;
}


// Characters.BaseHitbox$$IsActive
// il2cpp: bool Characters_BaseHitbox__IsActive (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x42a7180

bool_conflict Characters_BaseHitbox__IsActive(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  UnityEngine_Collider_o *__this_00;
  System_Threading_CancellationTokenSource_o *pSVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  bool_conflict extraout_EAX_01;
  Il2CppObject *pIVar4;
  UnityEngine_Coroutine_o *pUVar5;
  Il2CppObject *__this_01;
  uint uVar6;
  undefined4 uVar7;
  MethodInfo_33E0DA0 *pMVar8;
  UnityEngine_MonoBehaviour_o *__this_02;
  Il2CppObject *pIVar9;
  UnityEngine_GameObject_o *__this_03;
  float fVar10;
  undefined4 uVar11;
  float in_XMM1_Da;
  
  uVar6 = (uint)method;
  __this_02 = (UnityEngine_MonoBehaviour_o *)(__this->fields)._collider;
  if (__this_02 != (UnityEngine_MonoBehaviour_o *)0x0) {
    bVar3 = UnityEngine_Collider__get_enabled((UnityEngine_Collider_o *)__this_02,(MethodInfo *)0x0);
    return bVar3;
  }
  fVar10 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057add72 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057add72 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)__this_02[1].fields.m_CachedPtr;
  pIVar9 = (Il2CppObject *)0x0;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pMVar8 = MethodInfo_Void_Clear;
    System_Collections_Generic_HashSet_object___Clear(pSVar1,MethodInfo_Void_Clear);
    uVar6 = (uint)pMVar8;
    pIVar9 = (Il2CppObject *)0x0;
    if (__this_02[2].klass != (UnityEngine_MonoBehaviour_c *)0x0) {
      pMVar8 = MethodInfo_Void_Clear;
      System_Collections_Generic_HashSet_object___Clear
                ((System_Collections_Generic_HashSet_object__o *)__this_02[2].klass,MethodInfo_Void_Clear);
      uVar6 = (uint)pMVar8;
      pIVar9 = (Il2CppObject *)0x0;
      if (__this_02[2].monitor != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pMVar8 = MethodInfo_Void_Clear;
        System_Collections_Generic_HashSet_object___Clear(__this_02[2].monitor,MethodInfo_Void_Clear);
        uVar6 = (uint)pMVar8;
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)__this_02[1].fields.m_CancellationTokenSource
        ;
        pIVar9 = (Il2CppObject *)0x0;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMVar8 = MethodInfo_Void_Clear;
          System_Collections_Generic_HashSet_object___Clear(pSVar1,MethodInfo_Void_Clear);
          uVar6 = (uint)pMVar8;
          if ((fVar10 != 0.0) || (NAN(fVar10))) {
            if (g_data_057add73 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndActivate_d__15);
              g_data_057add73 = '\x01';
            }
            pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndActivate_d__15);
            uVar6 = 0;
            pIVar9 = pIVar4;
            System_Object___ctor(pIVar4,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar4[1].klass = 0;
            if (pIVar4 == (Il2CppObject *)0x0) goto label_042a7416;
            pIVar4[2].monitor = __this_02;
            il2cpp_runtime_helper_022b4080(&pIVar4[2].monitor,__this_02);
            *(float *)&pIVar4[2].klass = fVar10;
            pUVar5 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                               (__this_02,(System_Collections_IEnumerator_o *)pIVar4,(MethodInfo *)0x0);
            bVar3 = (bool_conflict)pUVar5;
          }
          else {
            __this_00 = (UnityEngine_Collider_o *)__this_02[2].fields.m_CachedPtr;
            pIVar9 = (Il2CppObject *)0x0;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_042a7416;
            UnityEngine_Collider__set_enabled(__this_00,1,(MethodInfo *)0x0);
            if (g_data_057add78 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057add78 = '\x01';
            }
            pSVar2 = __this_02[2].fields.m_CancellationTokenSource;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar6 = 0;
            bVar3 = UnityEngine_Object__op_Inequality
                              ((UnityEngine_Object_o *)pSVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              pSVar2 = __this_02[2].fields.m_CancellationTokenSource;
              pIVar9 = (Il2CppObject *)0x0;
              if (pSVar2 == (System_Threading_CancellationTokenSource_o *)0x0) goto label_042a7416;
              UnityEngine_GameObject__SetActive((UnityEngine_GameObject_o *)pSVar2,1,(MethodInfo *)0x0);
              bVar3 = extraout_EAX;
            }
          }
          if (in_XMM1_Da <= 0.0) {
            return bVar3;
          }
          if (g_data_057add74 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDeactivate_d__16);
            g_data_057add74 = '\x01';
          }
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDeactivate_d__16);
          uVar6 = 0;
          pIVar9 = pIVar4;
          System_Object___ctor(pIVar4,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar4[1].klass = 0;
          if (pIVar4 != (Il2CppObject *)0x0) {
            pIVar4[2].monitor = __this_02;
            il2cpp_runtime_helper_022b4080(&pIVar4[2].monitor,__this_02);
            *(float *)&pIVar4[2].klass = fVar10 + in_XMM1_Da;
            pUVar5 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                               (__this_02,(System_Collections_IEnumerator_o *)pIVar4,(MethodInfo *)0x0);
            return (bool_conflict)pUVar5;
          }
        }
      }
    }
  }
label_042a7416:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add78 = '\x01';
  }
  x = pIVar9[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return bVar3;
  }
  __this_03 = pIVar9[5].monitor;
  if (__this_03 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_03,uVar6 & 0xff,(MethodInfo *)0x0);
    return extraout_EAX_00;
  }
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057add73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndActivate_d__15);
    g_data_057add73 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndActivate_d__15);
  pIVar9 = pIVar4;
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar4[1].klass = 0;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4[2].monitor = __this_03;
    il2cpp_runtime_helper_022b4080(&pIVar4[2].monitor,__this_03);
    *(undefined4 *)&pIVar4[2].klass = uVar11;
    return (bool_conflict)pIVar4;
  }
  uVar11 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057add74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDeactivate_d__16);
    g_data_057add74 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDeactivate_d__16);
  uVar7 = 0;
  pIVar4 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].monitor = pIVar9;
    il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,pIVar9);
    *(undefined4 *)&__this_01[2].klass = uVar11;
    return (bool_conflict)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar4[1].klass = uVar7;
  return extraout_EAX_01;
}


// Characters.BaseHitbox$$Activate
// il2cpp: void Characters_BaseHitbox__Activate (Characters_BaseHitbox_o* __this, float delay, float length, const MethodInfo* method);
// 0x42a71a0

void Characters_BaseHitbox__Activate
               (Characters_BaseHitbox_o *__this,float delay,float length,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_Object_o *pUVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  Il2CppObject *__this_01;
  uint uVar5;
  undefined4 uVar6;
  MethodInfo_33E0DA0 *pMVar7;
  Il2CppObject *pIVar8;
  UnityEngine_GameObject_o *pUVar9;
  undefined4 uVar10;
  
  uVar5 = (uint)method;
  if (g_data_057add72 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057add72 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
  pIVar8 = (Il2CppObject *)0x0;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pMVar7 = MethodInfo_Void_Clear;
    System_Collections_Generic_HashSet_object___Clear(pSVar1,MethodInfo_Void_Clear);
    uVar5 = (uint)pMVar7;
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitCharacters;
    pIVar8 = (Il2CppObject *)0x0;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      pMVar7 = MethodInfo_Void_Clear;
      System_Collections_Generic_HashSet_object___Clear(pSVar1,MethodInfo_Void_Clear);
      uVar5 = (uint)pMVar7;
      pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitHandlers;
      pIVar8 = (Il2CppObject *)0x0;
      if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        pMVar7 = MethodInfo_Void_Clear;
        System_Collections_Generic_HashSet_object___Clear(pSVar1,MethodInfo_Void_Clear);
        uVar5 = (uint)pMVar7;
        pSVar1 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstFrameColliders;
        pIVar8 = (Il2CppObject *)0x0;
        if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
          pMVar7 = MethodInfo_Void_Clear;
          System_Collections_Generic_HashSet_object___Clear(pSVar1,MethodInfo_Void_Clear);
          uVar5 = (uint)pMVar7;
          if ((delay != 0.0) || (NAN(delay))) {
            if (g_data_057add73 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndActivate_d__15);
              g_data_057add73 = '\x01';
            }
            pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndActivate_d__15);
            uVar5 = 0;
            pIVar8 = pIVar4;
            System_Object___ctor(pIVar4,(MethodInfo *)0x0);
            *(undefined4 *)&pIVar4[1].klass = 0;
            if (pIVar4 == (Il2CppObject *)0x0) goto label_042a7416;
            pIVar4[2].monitor = __this;
            il2cpp_runtime_helper_022b4080(&pIVar4[2].monitor,__this);
            *(float *)&pIVar4[2].klass = delay;
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar4,
                       (MethodInfo *)0x0);
          }
          else {
            __this_00 = (__this->fields)._collider;
            pIVar8 = (Il2CppObject *)0x0;
            if (__this_00 == (UnityEngine_Collider_o *)0x0) goto label_042a7416;
            UnityEngine_Collider__set_enabled(__this_00,1,(MethodInfo *)0x0);
            if (g_data_057add78 == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
              g_data_057add78 = '\x01';
            }
            pUVar2 = (UnityEngine_Object_o *)(__this->fields)._debugObject;
            if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            uVar5 = 0;
            bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              pUVar9 = (__this->fields)._debugObject;
              pIVar8 = (Il2CppObject *)0x0;
              if (pUVar9 == (UnityEngine_GameObject_o *)0x0) goto label_042a7416;
              UnityEngine_GameObject__SetActive(pUVar9,1,(MethodInfo *)0x0);
            }
          }
          if (length <= 0.0) {
            return;
          }
          if (g_data_057add74 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDeactivate_d__16);
            g_data_057add74 = '\x01';
          }
          pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDeactivate_d__16);
          uVar5 = 0;
          pIVar8 = pIVar4;
          System_Object___ctor(pIVar4,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar4[1].klass = 0;
          if (pIVar4 != (Il2CppObject *)0x0) {
            pIVar4[2].monitor = __this;
            il2cpp_runtime_helper_022b4080(&pIVar4[2].monitor,__this);
            *(float *)&pIVar4[2].klass = delay + length;
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)pIVar4,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
label_042a7416:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add78 = '\x01';
  }
  pUVar2 = pIVar8[5].monitor;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Inequality(pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return;
  }
  pUVar9 = pIVar8[5].monitor;
  if (pUVar9 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(pUVar9,uVar5 & 0xff,(MethodInfo *)0x0);
    return;
  }
  uVar10 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057add73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndActivate_d__15);
    g_data_057add73 = '\x01';
  }
  pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndActivate_d__15);
  pIVar8 = pIVar4;
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar4[1].klass = 0;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar4[2].monitor = pUVar9;
    il2cpp_runtime_helper_022b4080(&pIVar4[2].monitor,pUVar9);
    *(undefined4 *)&pIVar4[2].klass = uVar10;
    return;
  }
  uVar10 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057add74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDeactivate_d__16);
    g_data_057add74 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDeactivate_d__16);
  uVar6 = 0;
  pIVar4 = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].monitor = pIVar8;
    il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,pIVar8);
    *(undefined4 *)&__this_01[2].klass = uVar10;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar4,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar4[1].klass = uVar6;
  return;
}


// Characters.BaseHitbox$$Deactivate
// il2cpp: void Characters_BaseHitbox__Deactivate (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x42a6d20

void Characters_BaseHitbox__Deactivate(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  System_String_Fields *pSVar1;
  UnityEngine_Collider_o *__this_00;
  UnityEngine_GameObject_o *__this_01;
  long lVar2;
  bool_conflict bVar3;
  System_String_Fields SVar4;
  System_String_Fields __this_02;
  System_String_Fields SVar5;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_Material_o *__this_03;
  undefined8 uVar7;
  undefined1 *puVar8;
  System_String_Fields __this_04;
  System_String_Fields SVar9;
  System_String_Fields __this_05;
  System_String_Fields unaff_R12;
  System_String_Fields unaff_R13;
  UnityEngine_Object_o *unaff_R14;
  System_String_Fields unaff_R15;
  float fVar10;
  float extraout_XMM0_Da;
  UnityEngine_Vector3_o UVar11;
  UnityEngine_Color_o value;
  undefined1 auStack_18 [8];
  
  puVar8 = auStack_18;
  SVar4._stringLength = 0;
  SVar4._firstChar = 0;
  SVar4._6_2_ = 0;
  UnityEngine_MonoBehaviour__StopAllCoroutines((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  __this_00 = (__this->fields)._collider;
  if (__this_00 != (UnityEngine_Collider_o *)0x0) {
    UnityEngine_Collider__set_enabled(__this_00,0,(MethodInfo *)0x0);
    if (g_data_057add78 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      g_data_057add78 = '\x01';
    }
    unaff_R14 = (UnityEngine_Object_o *)(__this->fields)._debugObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SVar4._stringLength = 0;
    SVar4._firstChar = 0;
    SVar4._6_2_ = 0;
    bVar3 = UnityEngine_Object__op_Inequality(unaff_R14,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    __this_01 = (__this->fields)._debugObject;
    if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__SetActive(__this_01,0,(MethodInfo *)0x0);
      return;
    }
  }
  SVar9._stringLength = 0;
  SVar9._firstChar = 0;
  SVar9._6_2_ = 0;
  il2cpp_runtime_helper_022b2c90();
  while( true ) {
    __this_05 = SVar9;
    __this_04 = SVar4;
    *(System_String_Fields *)(puVar8 + -8) = unaff_R15;
    *(UnityEngine_Object_o **)(puVar8 + -0x10) = unaff_R14;
    *(System_String_Fields *)(puVar8 + -0x18) = unaff_R13;
    *(System_String_Fields *)(puVar8 + -0x20) = unaff_R12;
    *(Characters_BaseHitbox_o **)(puVar8 + -0x28) = __this;
    if (g_data_057add71 == '\0') {
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6dd8;
      il2cpp_runtime_helper_023445d0(&TypeInfo_DebugTesting);
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6de4;
      il2cpp_runtime_helper_023445d0(&MethodInfo_Renderer_GetComponent_Renderer);
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6df0;
      il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6dfc;
      il2cpp_runtime_helper_023445d0(&MethodInfo_GameObject_InstantiateAsset_GameObject);
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6e08;
      il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6e14;
      il2cpp_runtime_helper_023445d0(&"Game");
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6e20;
      il2cpp_runtime_helper_023445d0(&"TestSphere");
      g_data_057add71 = '\x01';
    }
    if (*(char *)(*(long *)(TypeInfo_DebugTesting + 0xb8) + 8) == '\0') {
      return;
    }
    __this_02 = *(System_String_Fields *)((long)__this_05 + 0x58);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6e60;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar1 = (System_String_Fields *)((long)__this_05 + 0x58);
    *(undefined8 *)(puVar8 + -0x50) = 0x42a6e71;
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      __this_02 = *pSVar1;
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        *(undefined8 *)(puVar8 + -0x50) = 0x42a6e8a;
        il2cpp_runtime_helper_02337ed0();
      }
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6e94;
      UnityEngine_Object__Destroy_4e01c60((UnityEngine_Object_o *)__this_02,(MethodInfo *)0x0);
    }
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6eac;
      il2cpp_runtime_helper_02337ed0();
    }
    *(undefined8 *)(puVar8 + -0x50) = 0x42a6ed1;
    SVar9 = "Game";
    SVar4 = (System_String_Fields)
            ApplicationManagers_ResourceManager__InstantiateAsset_object_
                      ((System_String_o *)"Game","TestSphere",0,MethodInfo_GameObject_InstantiateAsset_GameObject);
    unaff_R13 = (System_String_Fields)&TypeInfo_Object;
    if (SVar4 != (System_String_Fields)0x0) {
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6ee7;
      __this_02 = (System_String_Fields)
                  UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SVar4,(MethodInfo *)0x0);
      *(undefined8 *)(puVar8 + -0x50) = 0x42a6ef4;
      SVar9 = __this_05;
      SVar5 = (System_String_Fields)
              UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_05,(MethodInfo *)0x0);
      unaff_R13 = SVar4;
      if (SVar5 != (System_String_Fields)0x0) {
        *(undefined8 *)(puVar8 + -0x50) = 0x42a6f07;
        pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SVar5,(MethodInfo *)0x0);
        SVar9 = SVar5;
        if (__this_02 != (System_String_Fields)0x0) {
          *(undefined8 *)(puVar8 + -0x50) = 0x42a6f1d;
          UnityEngine_Transform__set_parent((UnityEngine_Transform_o *)__this_02,pUVar6,(MethodInfo *)0x0);
          *(undefined8 *)(puVar8 + -0x50) = 0x42a6f27;
          SVar9 = SVar4;
          pUVar6 = UnityEngine_GameObject__get_transform((UnityEngine_GameObject_o *)SVar4,(MethodInfo *)0x0);
          if (__this_04 != (System_String_Fields)0x0) {
            *(undefined8 *)(puVar8 + -0x50) = 0x42a6f3d;
            SVar9 = __this_04;
            UVar11 = UnityEngine_SphereCollider__get_center
                               ((UnityEngine_SphereCollider_o *)__this_04,(MethodInfo *)0x0);
            __this_02._stringLength = 0;
            __this_02._firstChar = 0;
            __this_02._6_2_ = 0;
            if (pUVar6 != (UnityEngine_Transform_o *)0x0) {
              *(undefined8 *)(puVar8 + -0x50) = 0x42a6f50;
              UnityEngine_Transform__set_localPosition(pUVar6,UVar11,(MethodInfo *)0x0);
              *(undefined8 *)(puVar8 + -0x50) = 0x42a6f5a;
              __this_02 = (System_String_Fields)
                          UnityEngine_GameObject__get_transform
                                    ((UnityEngine_GameObject_o *)SVar4,(MethodInfo *)0x0);
              if (g_data_057a6932 == '\0') {
                *(undefined8 *)(puVar8 + -0x50) = 0x42a6f72;
                il2cpp_runtime_helper_023445d0(&TypeInfo_Vector3);
                g_data_057a6932 = '\x01';
              }
              lVar2 = *(long *)(TypeInfo_Vector3 + 0xb8);
              *(undefined8 *)(puVar8 + -0x38) = *(undefined8 *)(lVar2 + 0xc);
              *(undefined8 *)(puVar8 + -0x30) = 0;
              *(undefined4 *)(puVar8 + -0x3c) = *(undefined4 *)(lVar2 + 0x14);
              *(undefined8 *)(puVar8 + -0x50) = 0x42a6fa9;
              SVar9 = __this_04;
              fVar10 = UnityEngine_SphereCollider__get_radius
                                 ((UnityEngine_SphereCollider_o *)__this_04,(MethodInfo *)0x0);
              if (__this_02 != (System_String_Fields)0x0) {
                UVar11.fields.z = *(float *)(puVar8 + -0x3c) * fVar10 + *(float *)(puVar8 + -0x3c) * fVar10;
                *(undefined8 *)(puVar8 + -0x50) = 0x42a6fdf;
                UVar11.fields.y = *(float *)(puVar8 + -0x34) * fVar10 + *(float *)(puVar8 + -0x34) * fVar10;
                UVar11.fields.x = *(float *)(puVar8 + -0x38) * fVar10 + *(float *)(puVar8 + -0x38) * fVar10;
                UnityEngine_Transform__set_localScale
                          ((UnityEngine_Transform_o *)__this_02,UVar11,(MethodInfo *)0x0);
                *(undefined8 *)(puVar8 + -0x50) = 0x42a6ff1;
                SVar9 = SVar4;
                SVar5 = (System_String_Fields)
                        UnityEngine_GameObject__GetComponent_object_
                                  ((UnityEngine_GameObject_o *)SVar4,MethodInfo_Renderer_GetComponent_Renderer);
                if (SVar5 != (System_String_Fields)0x0) {
                  *(undefined8 *)(puVar8 + -0x50) = 0x42a7000;
                  __this_03 = UnityEngine_Renderer__get_material
                                        ((UnityEngine_Renderer_o *)SVar5,(MethodInfo *)0x0);
                  SVar9 = SVar5;
                  if (__this_03 != (UnityEngine_Material_o *)0x0) {
                    *(undefined8 *)(puVar8 + -0x50) = 0x42a701e;
                    value.fields.b = 0.0;
                    value.fields.a = 1.0;
                    value.fields.r = 1.0;
                    value.fields.g = 0.0;
                    UnityEngine_Material__set_color(__this_03,value,(MethodInfo *)0x0);
                    *pSVar1 = SVar4;
                    *(undefined8 *)(puVar8 + -0x50) = 0x42a702c;
                    il2cpp_runtime_helper_022b4080(pSVar1);
                    SVar9._stringLength = 0;
                    SVar9._firstChar = 0;
                    SVar9._6_2_ = 0;
                    if (*pSVar1 != (System_String_Fields)0x0) {
                      UnityEngine_GameObject__SetActive
                                ((UnityEngine_GameObject_o *)*pSVar1,0,(MethodInfo *)0x0);
                      return;
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
    *(undefined8 *)(puVar8 + -0x50) = 0x42a705d;
    uVar7 = il2cpp_runtime_helper_022b2c90();
    *(System_String_Fields **)(puVar8 + -0x50) = pSVar1;
    *(System_String_Fields *)(puVar8 + -0x58) = __this_02;
    *(undefined8 *)(puVar8 + -0x60) = uVar7;
    fVar10 = extraout_XMM0_Da;
    if (g_data_057add6f == '\0') {
      *(float *)(puVar8 + -0x5c) = extraout_XMM0_Da;
      *(undefined8 *)(puVar8 + -0x68) = 0x42a7082;
      il2cpp_runtime_helper_023445d0(&TypeInfo_SphereCollider);
      fVar10 = *(float *)(puVar8 + -0x5c);
      g_data_057add6f = '\x01';
    }
    SVar4 = *(System_String_Fields *)((long)SVar9 + 0x50);
    if (SVar4 == (System_String_Fields)0x0) break;
    if (*(byte *)(*(long *)SVar4 + 0x130) < *(byte *)(TypeInfo_SphereCollider + 0x130)) {
      return;
    }
    if (*(long *)(*(long *)(*(long *)SVar4 + 200) + -8 + (ulong)*(byte *)(TypeInfo_SphereCollider + 0x130) * 8) !=
        TypeInfo_SphereCollider) {
      return;
    }
    *(undefined8 *)(puVar8 + -0x68) = 0x42a70d4;
    UnityEngine_SphereCollider__set_radius((UnityEngine_SphereCollider_o *)SVar4,fVar10,(MethodInfo *)0x0);
    __this = *(Characters_BaseHitbox_o **)(puVar8 + -0x58);
    unaff_R14 = *(UnityEngine_Object_o **)(puVar8 + -0x50);
    puVar8 = puVar8 + -0x48;
    unaff_R12 = __this_05;
    unaff_R15 = __this_04;
  }
  return;
}


// Characters.BaseHitbox$$WaitAndActivate
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseHitbox__WaitAndActivate (Characters_BaseHitbox_o* __this, float delay, const MethodInfo* method);
// 0x42a74a0

System_Collections_IEnumerator_o *
Characters_BaseHitbox__WaitAndActivate(Characters_BaseHitbox_o *__this,float delay,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar2;
  Il2CppObject *pIVar3;
  undefined4 uVar4;
  
  if (g_data_057add73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndActivate_d__15);
    g_data_057add73 = '\x01';
  }
  pIVar1 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndActivate_d__15);
  pIVar3 = pIVar1;
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar1[1].klass = 0;
  if (pIVar1 != (Il2CppObject *)0x0) {
    pIVar1[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&pIVar1[2].monitor,__this);
    *(float *)&pIVar1[2].klass = delay;
    return (System_Collections_IEnumerator_o *)pIVar1;
  }
  uVar4 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057add74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDeactivate_d__16);
    g_data_057add74 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDeactivate_d__16);
  uVar2 = 0;
  pIVar1 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = pIVar3;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pIVar3);
    *(undefined4 *)&__this_00[2].klass = uVar4;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar1,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar1[1].klass = uVar2;
  return extraout_RAX;
}


// Characters.BaseHitbox$$WaitAndDeactivate
// il2cpp: System_Collections_IEnumerator_o* Characters_BaseHitbox__WaitAndDeactivate (Characters_BaseHitbox_o* __this, float delay, const MethodInfo* method);
// 0x42a7520

System_Collections_IEnumerator_o *
Characters_BaseHitbox__WaitAndDeactivate(Characters_BaseHitbox_o *__this,float delay,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057add74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDeactivate_d__16);
    g_data_057add74 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDeactivate_d__16);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    *(float *)&__this_00[2].klass = delay;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// Characters.BaseHitbox$$OnTriggerEnter
// il2cpp: void Characters_BaseHitbox__OnTriggerEnter (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x42a75e0

void Characters_BaseHitbox__OnTriggerEnter
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  if ((char)(__this->fields).TwoFixedUpdates != '\0') {
    return;
  }
  vtableDispatch = (__this->klass->vtable)._6_OnTrigger.methodPtr;
  (*vtableDispatch)(__this,other,(__this->klass->vtable)._6_OnTrigger.method,vtableDispatch);
  return;
}


// Characters.BaseHitbox$$OnTriggerStay
// il2cpp: void Characters_BaseHitbox__OnTriggerStay (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x42a7600

void Characters_BaseHitbox__OnTriggerStay
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  
  if ((char)(__this->fields).TwoFixedUpdates != '\0') {
    vtableDispatch = (__this->klass->vtable)._6_OnTrigger.methodPtr;
    (*vtableDispatch)(__this,other,(__this->klass->vtable)._6_OnTrigger.method,vtableDispatch);
    return;
  }
  return;
}


// Characters.BaseHitbox$$OnTrigger
// il2cpp: void Characters_BaseHitbox__OnTrigger (Characters_BaseHitbox_o* __this, UnityEngine_Collider_o* other, const MethodInfo* method);
// 0x42a7620

void Characters_BaseHitbox__OnTrigger
               (Characters_BaseHitbox_o *__this,UnityEngine_Collider_o *other,MethodInfo *method)

{
  Characters_BaseCharacter_o *a;
  System_Runtime_Serialization_SerializationInfo_o *__this_00;
  System_Type_array *pSVar1;
  Il2CppClass *pIVar2;
  bool_conflict bVar3;
  uint uVar4;
  Characters_BaseHitbox_o *pCVar5;
  Characters_BaseHitbox_o *__this_01;
  UnityEngine_GameObject_o *pUVar6;
  Characters_BaseCharacter_o *pCVar7;
  Characters_BaseCharacter_o *x;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  System_Runtime_Serialization_SerializationInfo_o *pSVar9;
  System_Collections_Generic_HashSet_object__c *__this_02;
  MethodInfo *pMVar10;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  Characters_BaseHitbox_o *item;
  long *__this_03;
  System_Collections_Generic_HashSet_object__o *pSVar11;
  Il2CppMethodPointer vtableDispatch;
  
  item = (Characters_BaseHitbox_o *)other;
  __this_03 = (long *)__this;
  if (g_data_057add75 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    __this_03 = &TypeInfo_TeamInfo;
    il2cpp_runtime_helper_023445d0();
    g_data_057add75 = '\x01';
  }
  if ((char)(__this->fields).TwoFixedUpdates != '\0') {
    __this_03 = (long *)(__this->fields)._firstFrameColliders;
    if ((Characters_BaseHitbox_o *)__this_03 == (Characters_BaseHitbox_o *)0x0) goto label_042a7902;
    item = (Characters_BaseHitbox_o *)other;
    bVar3 = System_Collections_Generic_HashSet_object___Contains
                      ((System_Collections_Generic_HashSet_object__o *)__this_03,(Il2CppObject *)other,
                       MethodInfo_Boolean_Contains);
    if ((char)bVar3 == '\0') {
      pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstFrameColliders;
      __this_03 = (long *)0x0;
      if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add(pSVar11,(Il2CppObject *)other,MethodInfo_Boolean_Add);
        return;
      }
      goto label_042a7902;
    }
  }
  if (other != (UnityEngine_Collider_o *)0x0) {
    item = (Characters_BaseHitbox_o *)0x0;
    __this_03 = (long *)other;
    pCVar5 = (Characters_BaseHitbox_o *)
             UnityEngine_Component__get_transform((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pCVar5 == (Characters_BaseHitbox_o *)0x0) goto label_042a7902;
    item = (Characters_BaseHitbox_o *)0x0;
    __this_01 = (Characters_BaseHitbox_o *)
                UnityEngine_Transform__get_root((UnityEngine_Transform_o *)pCVar5,(MethodInfo *)0x0);
    __this_03 = (long *)pCVar5;
    if (__this_01 == (Characters_BaseHitbox_o *)0x0) goto label_042a7902;
    item = (Characters_BaseHitbox_o *)0x0;
    pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    __this_03 = (long *)__this_01;
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_042a7902;
    pCVar7 = (Characters_BaseCharacter_o *)UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_BaseCharacter_GetComponent_BaseCharacter);
    item = (Characters_BaseHitbox_o *)0x0;
    __this_03 = (long *)other;
    pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pUVar6 == (UnityEngine_GameObject_o *)0x0) goto label_042a7902;
    x = (Characters_BaseCharacter_o *)UnityEngine_GameObject__GetComponent_object_(pUVar6,MethodInfo_CustomLogicCollisionHandler_GetComponent_CustomLogicColl);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar7,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      a = (__this->fields).Owner;
      if (*(int *)(TypeInfo_TeamInfo + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar3 = GameManagers_TeamInfo__SameTeam_446fee0(a,pCVar7,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
        item = (Characters_BaseHitbox_o *)0x0;
        __this_03 = (long *)other;
        pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
        if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042a7902;
        bVar3 = System_Collections_Generic_HashSet_object___Contains
                          (pSVar11,(Il2CppObject *)pUVar6,MethodInfo_Boolean_Contains);
        if ((char)bVar3 == '\0') {
          pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
          item = (Characters_BaseHitbox_o *)0x0;
          __this_03 = (long *)other;
          pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
          if (pSVar11 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_042a7902;
          System_Collections_Generic_HashSet_object___Add(pSVar11,(Il2CppObject *)pUVar6,MethodInfo_Boolean_Add);
          vtableDispatch = (__this->klass->vtable)._7_OnHit.methodPtr;
          pMVar10 = (__this->klass->vtable)._7_OnHit.method;
          goto label_042a78ee;
        }
      }
    }
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      return;
    }
    pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
    item = (Characters_BaseHitbox_o *)0x0;
    __this_03 = (long *)other;
    pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
    if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      bVar3 = System_Collections_Generic_HashSet_object___Contains
                        (pSVar11,(Il2CppObject *)pUVar6,MethodInfo_Boolean_Contains);
      if ((char)bVar3 != '\0') {
        return;
      }
      pSVar11 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._hitGameObjects;
      item = (Characters_BaseHitbox_o *)0x0;
      __this_03 = (long *)other;
      pUVar6 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)other,(MethodInfo *)0x0);
      if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add(pSVar11,(Il2CppObject *)pUVar6,MethodInfo_Boolean_Add);
        vtableDispatch = (__this->klass->vtable)._8_OnHit.methodPtr;
        pMVar10 = (__this->klass->vtable)._8_OnHit.method;
        pCVar7 = x;
label_042a78ee:
        (*vtableDispatch)(__this,pCVar7,other,pMVar10,vtableDispatch);
        return;
      }
    }
  }
label_042a7902:
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = item;
  if (g_data_057add76 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057add76 = '\x01';
  }
  pSVar9 = (System_Runtime_Serialization_SerializationInfo_o *)
           (((Characters_BaseHitbox_o *)__this_03)->fields)._firstHitCharacters;
  if (pSVar9 != (System_Runtime_Serialization_SerializationInfo_o *)0x0) {
    pCVar7 = (((Characters_BaseHitbox_o *)__this_03)->fields).Owner;
    pCVar5 = item;
    bVar3 = System_Collections_Generic_HashSet_object___Contains
                      ((System_Collections_Generic_HashSet_object__o *)pSVar9,(Il2CppObject *)item,
                       MethodInfo_Boolean_Contains);
    if (pCVar7 != (Characters_BaseCharacter_o *)0x0) {
      pCVar5 = (Characters_BaseHitbox_o *)__this_03;
      (*(pCVar7->klass->vtable)._79_OnHit.methodPtr)
                (pCVar7,__this_03,item,extraout_RDX,"",(ulong)(byte)((byte)bVar3 ^ 1),
                 (pCVar7->klass->vtable)._79_OnHit.method);
      __this_00 = (System_Runtime_Serialization_SerializationInfo_o *)
                  (((Characters_BaseHitbox_o *)__this_03)->fields)._firstHitCharacters;
      pSVar9 = (System_Runtime_Serialization_SerializationInfo_o *)0x0;
      if (__this_00 != (System_Runtime_Serialization_SerializationInfo_o *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)item,MethodInfo_Boolean_Add
                  );
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add77 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057add77 = '\x01';
  }
  pSVar11 = (System_Collections_Generic_HashSet_object__o *)(pSVar9->fields).m_assemName;
  if (pSVar11 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pSVar1 = (pSVar9->fields).m_types;
    uVar4 = System_Collections_Generic_HashSet_object___Contains(pSVar11,(Il2CppObject *)pCVar5,MethodInfo_Boolean_Contains);
    if (pSVar1 != (System_Type_array *)0x0) {
      pIVar2 = (pSVar1->obj).klass;
      (*pIVar2->vtable[0x4f].methodPtr)
                (pSVar1,pSVar9,pCVar5,extraout_RDX_00,"",(ulong)(uVar4 & 0xff),
                 pIVar2->vtable[0x4f].method);
      pSVar8 = (System_Collections_Generic_HashSet_object__o *)(pSVar9->fields).m_assemName;
      pSVar11 = (System_Collections_Generic_HashSet_object__o *)0x0;
      if (pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add(pSVar8,(Il2CppObject *)pCVar5,MethodInfo_Boolean_Add);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    g_data_057add79 = '\x01';
  }
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor(pSVar8,MethodInfo_HashSet_1_UnityEngine_GameObject);
  (pSVar11->fields)._comparer = (System_Collections_Generic_IEqualityComparer_T__o *)pSVar8;
  il2cpp_runtime_helper_022b4080(&(pSVar11->fields)._comparer,pSVar8);
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Collider);
  System_Collections_Generic_HashSet_object____ctor(pSVar8,MethodInfo_HashSet_1_UnityEngine_Collider);
  *(System_Collections_Generic_HashSet_object__o **)&(pSVar11->fields)._version = pSVar8;
  il2cpp_runtime_helper_022b4080(&(pSVar11->fields)._version,pSVar8);
  pSVar9 = (System_Runtime_Serialization_SerializationInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pSVar9,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (pSVar11->fields)._siInfo = pSVar9;
  il2cpp_runtime_helper_022b4080(&(pSVar11->fields)._siInfo,pSVar9);
  __this_02 = (System_Collections_Generic_HashSet_object__c *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_02,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
  pSVar11[1].klass = __this_02;
  il2cpp_runtime_helper_022b4080(pSVar11 + 1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pSVar11,(MethodInfo *)0x0);
  return;
}


// Characters.BaseHitbox$$OnHit
// il2cpp: void Characters_BaseHitbox__OnHit (Characters_BaseHitbox_o* __this, Characters_BaseCharacter_o* victim, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x42a7910

void Characters_BaseHitbox__OnHit
               (Characters_BaseHitbox_o *__this,Characters_BaseCharacter_o *victim,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  long *plVar2;
  bool_conflict bVar3;
  uint uVar4;
  System_Collections_Generic_HashSet_object__o *pSVar5;
  Il2CppClass *pIVar6;
  undefined8 extraout_RDX;
  Characters_BaseCharacter_o *item;
  System_Collections_Generic_HashSet_object__c *__this_01;
  
  item = victim;
  if (g_data_057add76 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057add76 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitCharacters;
  if (pSVar5 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pCVar1 = (__this->fields).Owner;
    item = victim;
    bVar3 = System_Collections_Generic_HashSet_object___Contains(pSVar5,(Il2CppObject *)victim,MethodInfo_Boolean_Contains);
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      item = (Characters_BaseCharacter_o *)__this;
      (*(pCVar1->klass->vtable)._79_OnHit.methodPtr)
                (pCVar1,__this,victim,collider,"",(ulong)(byte)((byte)bVar3 ^ 1),
                 (pCVar1->klass->vtable)._79_OnHit.method);
      __this_00 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitCharacters;
      pSVar5 = (System_Collections_Generic_HashSet_object__o *)0x0;
      if (__this_00 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add(__this_00,(Il2CppObject *)victim,MethodInfo_Boolean_Add);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add77 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057add77 = '\x01';
  }
  __this_01 = pSVar5[1].klass;
  if (__this_01 != (System_Collections_Generic_HashSet_object__c *)0x0) {
    plVar2 = *(long **)&(pSVar5->fields)._count;
    uVar4 = System_Collections_Generic_HashSet_object___Contains
                      ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)item,
                       MethodInfo_Boolean_Contains);
    if (plVar2 != (long *)0x0) {
      (**(code **)(*plVar2 + 0x628))
                (plVar2,pSVar5,item,extraout_RDX,"",uVar4 & 0xff,*(undefined8 *)(*plVar2 + 0x630));
      __this_01 = (System_Collections_Generic_HashSet_object__c *)0x0;
      if (pSVar5[1].klass != (System_Collections_Generic_HashSet_object__c *)0x0) {
        System_Collections_Generic_HashSet_object___Add
                  ((System_Collections_Generic_HashSet_object__o *)pSVar5[1].klass,(Il2CppObject *)item,
                   MethodInfo_Boolean_Add);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    g_data_057add79 = '\x01';
  }
  pSVar5 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor(pSVar5,MethodInfo_HashSet_1_UnityEngine_GameObject);
  (__this_01->_1).this_arg.data = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this_01->_1).this_arg,pSVar5);
  pSVar5 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Collider);
  System_Collections_Generic_HashSet_object____ctor(pSVar5,MethodInfo_HashSet_1_UnityEngine_Collider);
  *(System_Collections_Generic_HashSet_object__o **)&(__this_01->_1).this_arg.bits = pSVar5;
  il2cpp_runtime_helper_022b4080(&(__this_01->_1).this_arg.bits,pSVar5);
  pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pIVar6,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this_01->_1).element_class = pIVar6;
  il2cpp_runtime_helper_022b4080(&(__this_01->_1).element_class,pIVar6);
  pIVar6 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)pIVar6,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
  (__this_01->_1).castClass = pIVar6;
  il2cpp_runtime_helper_022b4080(&(__this_01->_1).castClass);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_01,(MethodInfo *)0x0);
  return;
}


// Characters.BaseHitbox$$OnHit
// il2cpp: void Characters_BaseHitbox__OnHit (Characters_BaseHitbox_o* __this, CustomLogic_CustomLogicCollisionHandler_o* handler, UnityEngine_Collider_o* collider, const MethodInfo* method);
// 0x42a79e0

void Characters_BaseHitbox__OnHit_41a79e0
               (Characters_BaseHitbox_o *__this,CustomLogic_CustomLogicCollisionHandler_o *handler,
               UnityEngine_Collider_o *collider,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  uint uVar2;
  System_Collections_Generic_HashSet_object__o *pSVar3;
  System_Runtime_Serialization_SerializationInfo_o *__this_00;
  System_Collections_Generic_HashSet_object__c *__this_01;
  System_Collections_Generic_HashSet_object__o *__this_02;
  
  if (g_data_057add77 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&"");
    g_data_057add77 = '\x01';
  }
  __this_02 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitHandlers;
  if (__this_02 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    pCVar1 = (__this->fields).Owner;
    uVar2 = System_Collections_Generic_HashSet_object___Contains
                      (__this_02,(Il2CppObject *)handler,MethodInfo_Boolean_Contains);
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      (*(pCVar1->klass->vtable)._79_OnHit.methodPtr)
                (pCVar1,__this,handler,collider,"",(ulong)(uVar2 & 0xff),
                 (pCVar1->klass->vtable)._79_OnHit.method);
      pSVar3 = (System_Collections_Generic_HashSet_object__o *)(__this->fields)._firstHitHandlers;
      __this_02 = (System_Collections_Generic_HashSet_object__o *)0x0;
      if (pSVar3 != (System_Collections_Generic_HashSet_object__o *)0x0) {
        System_Collections_Generic_HashSet_object___Add(pSVar3,(Il2CppObject *)handler,MethodInfo_Boolean_Add);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057add79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    g_data_057add79 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_UnityEngine_GameObject);
  (__this_02->fields)._comparer = (System_Collections_Generic_IEqualityComparer_T__o *)pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._comparer,pSVar3);
  pSVar3 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Collider);
  System_Collections_Generic_HashSet_object____ctor(pSVar3,MethodInfo_HashSet_1_UnityEngine_Collider);
  *(System_Collections_Generic_HashSet_object__o **)&(__this_02->fields)._version = pSVar3;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._version,pSVar3);
  __this_00 = (System_Runtime_Serialization_SerializationInfo_o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_00,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this_02->fields)._siInfo = __this_00;
  il2cpp_runtime_helper_022b4080(&(__this_02->fields)._siInfo,__this_00);
  __this_01 = (System_Collections_Generic_HashSet_object__c *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this_01,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
  __this_02[1].klass = __this_01;
  il2cpp_runtime_helper_022b4080(__this_02 + 1);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this_02,(MethodInfo *)0x0);
  return;
}


// Characters.BaseHitbox$$ToggleDebug
// il2cpp: void Characters_BaseHitbox__ToggleDebug (Characters_BaseHitbox_o* __this, bool toggle, const MethodInfo* method);
// 0x42a7420

void Characters_BaseHitbox__ToggleDebug
               (Characters_BaseHitbox_o *__this,bool_conflict toggle,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *__this_00;
  undefined4 uVar3;
  UnityEngine_GameObject_o *__this_01;
  Il2CppObject *pIVar4;
  undefined4 uVar5;
  
  if (g_data_057add78 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057add78 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._debugObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    return;
  }
  __this_01 = (__this->fields)._debugObject;
  if (__this_01 != (UnityEngine_GameObject_o *)0x0) {
    UnityEngine_GameObject__SetActive(__this_01,toggle & 0xff,(MethodInfo *)0x0);
    return;
  }
  uVar5 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057add73 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndActivate_d__15);
    g_data_057add73 = '\x01';
  }
  pIVar2 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndActivate_d__15);
  pIVar4 = pIVar2;
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar2[1].klass = 0;
  if (pIVar2 != (Il2CppObject *)0x0) {
    pIVar2[2].monitor = __this_01;
    il2cpp_runtime_helper_022b4080(&pIVar2[2].monitor,__this_01);
    *(undefined4 *)&pIVar2[2].klass = uVar5;
    return;
  }
  uVar5 = il2cpp_runtime_helper_022b2c90();
  if (g_data_057add74 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitAndDeactivate_d__16);
    g_data_057add74 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitAndDeactivate_d__16);
  uVar3 = 0;
  pIVar2 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = pIVar4;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pIVar4);
    *(undefined4 *)&__this_00[2].klass = uVar5;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(pIVar2,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar2[1].klass = uVar3;
  return;
}


// Characters.BaseHitbox$$.ctor
// il2cpp: void Characters_BaseHitbox___ctor (Characters_BaseHitbox_o* __this, const MethodInfo* method);
// 0x42a7ab0

void Characters_BaseHitbox___ctor(Characters_BaseHitbox_o *__this,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  
  if (g_data_057add79 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_GameObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_Characters_BaseCharacter);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_UnityEngine_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_Collider);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_CustomLogicCollisionHandler);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_BaseCharacter);
    g_data_057add79 = '\x01';
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_GameObject);
  System_Collections_Generic_HashSet_object____ctor(pSVar1,MethodInfo_HashSet_1_UnityEngine_GameObject);
  (__this->fields)._hitGameObjects = (System_Collections_Generic_HashSet_GameObject__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._hitGameObjects,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_Collider);
  System_Collections_Generic_HashSet_object____ctor(pSVar1,MethodInfo_HashSet_1_UnityEngine_Collider);
  (__this->fields)._firstFrameColliders = (System_Collections_Generic_HashSet_Collider__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._firstFrameColliders,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_BaseCharacter);
  System_Collections_Generic_HashSet_object____ctor(pSVar1,MethodInfo_HashSet_1_Characters_BaseCharacter);
  (__this->fields)._firstHitCharacters = (System_Collections_Generic_HashSet_BaseCharacter__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._firstHitCharacters,pSVar1);
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_CustomLogicCollisionHandler);
  System_Collections_Generic_HashSet_object____ctor(pSVar1,MethodInfo_HashSet_1_CustomLogic_CustomLogicCollisionHandler);
  (__this->fields)._firstHitHandlers =
       (System_Collections_Generic_HashSet_CustomLogicCollisionHandler__o *)pSVar1;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._firstHitHandlers);
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


