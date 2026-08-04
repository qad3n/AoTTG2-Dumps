// Type: Characters.DummyTitan
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Characters/DummyTitan.cs
// Prior real C# source (older reference): Assets/Scripts/Characters/Titan/DummyTitan.cs
// --------------------------------

// Characters.DummyTitan$$Awake
// il2cpp: void Characters_DummyTitan__Awake (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x4320900

void Characters_DummyTitan__Awake(Characters_DummyTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o **ppCVar1;
  UnityEngine_Rigidbody_o *__this_00;
  Il2CppMethodPointer vtableDispatch;
  System_String_o *pSVar2;
  bool_conflict bVar3;
  UnityEngine_GameObject_o *pUVar4;
  MethodInfo *method_00;
  Characters_BasicTitanAnimations_o *pCVar5;
  UnityEngine_Transform_o *__this_01;
  undefined8 extraout_RDX;
  Characters_BasicTitanComponentCache_o *__this_02;
  Characters_DummyTitan_o *__this_03;
  Characters_BasicTitanComponentCache_o *pCVar6;
  UnityEngine_Vector3_o value;
  undefined1 auVar7 [16];
  
  if (g_data_057adff5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanAnimations);
    il2cpp_runtime_helper_023445d0(&TypeInfo_BasicTitanComponentCache);
    il2cpp_runtime_helper_023445d0(&MethodInfo_BasicTitanSetup_AddComponent_BasicTitanSetup);
    g_data_057adff5 = '\x01';
  }
  Characters_DummyCharacter__Awake((Characters_DummyCharacter_o *)__this,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  auVar7 = il2cpp_runtime_helper_023052d0(TypeInfo_BasicTitanComponentCache);
  __this_02 = auVar7._0_8_;
  Characters_BasicTitanComponentCache___ctor(__this_02,pUVar4,auVar7._8_8_);
  ppCVar1 = &(__this->fields).Cache;
  (__this->fields).Cache = __this_02;
  __this_03 = (Characters_DummyTitan_o *)ppCVar1;
  il2cpp_runtime_helper_022b4080();
  pCVar6 = (__this->fields).Cache;
  if ((pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) &&
     (__this_03 = (Characters_DummyTitan_o *)(pCVar6->fields).Rigidbody,
     __this_03 != (Characters_DummyTitan_o *)0x0)) {
    __this_02 = (Characters_BasicTitanComponentCache_o *)0x1;
    UnityEngine_Rigidbody__set_freezeRotation((UnityEngine_Rigidbody_o *)__this_03,1,(MethodInfo *)0x0);
    pCVar6 = *ppCVar1;
    if (pCVar6 != (Characters_BasicTitanComponentCache_o *)0x0) {
      __this_00 = (pCVar6->fields).Rigidbody;
      __this_03 = (Characters_DummyTitan_o *)0x0;
      if (__this_00 != (UnityEngine_Rigidbody_o *)0x0) {
        UnityEngine_Rigidbody__set_useGravity(__this_00,0,(MethodInfo *)0x0);
        __this_02 = (Characters_BasicTitanComponentCache_o *)0x0;
        __this_03 = __this;
        pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          method_00 = (MethodInfo *)UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_BasicTitanSetup_AddComponent_BasicTitanSetup);
          (__this->fields).Setup = (Characters_BasicTitanSetup_o *)method_00;
          il2cpp_runtime_helper_022b4080(&(__this->fields).Setup);
          pCVar5 = (Characters_BasicTitanAnimations_o *)il2cpp_runtime_helper_023052d0(TypeInfo_BasicTitanAnimations);
          Characters_BasicTitanAnimations___ctor(pCVar5,method_00);
          (__this->fields).BasicAnimations = pCVar5;
          il2cpp_runtime_helper_022b4080(&(__this->fields).BasicAnimations);
          __this_02 = (Characters_BasicTitanComponentCache_o *)0x0;
          __this_01 = UnityEngine_Component__get_transform
                                ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
          __this_03 = __this;
          if (__this_01 != (UnityEngine_Transform_o *)0x0) {
            value.fields.z = 0.1;
            value.fields.x = 0.1;
            value.fields.y = 0.1;
            UnityEngine_Transform__set_localScale(__this_01,value,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  pCVar5 = (__this_03->fields).BasicAnimations;
  if (pCVar5 != (Characters_BasicTitanAnimations_o *)0x0) {
    vtableDispatch = (pCVar5->klass->vtable)._4_get_Idle.methodPtr;
    (*vtableDispatch)
              (pCVar5,(pCVar5->klass->vtable)._4_get_Idle.method,extraout_RDX,vtableDispatch);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adff6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Shake");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"Laugh");
    g_data_057adff6 = '\x01';
  }
  pCVar6 = __this_02;
  bVar3 = System_String__op_Equality((System_String_o *)__this_02,"Laugh",(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pCVar6 = __this_02;
    bVar3 = System_String__op_Equality((System_String_o *)__this_02,"Nod",(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      pCVar6 = __this_02;
      bVar3 = System_String__op_Equality((System_String_o *)__this_02,"Shake",(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        bVar3 = System_String__op_Equality((System_String_o *)__this_02,"Roar",(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          return;
        }
        pSVar2 = (pCVar5->fields).StunLeft;
        pCVar6 = __this_02;
      }
      else {
        pSVar2 = (pCVar5->fields).StunLeft;
      }
    }
    else {
      pSVar2 = (pCVar5->fields).StunLeft;
    }
  }
  else {
    pSVar2 = (pCVar5->fields).StunLeft;
  }
  if (pSVar2 != (System_String_o *)0x0) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pCVar6,(MethodInfo *)0x0);
  return;
}


// Characters.DummyTitan$$GetIdleAnimation
// il2cpp: System_String_o* Characters_DummyTitan__GetIdleAnimation (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x4320a60

System_String_o * Characters_DummyTitan__GetIdleAnimation(Characters_DummyTitan_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  bool_conflict bVar1;
  System_String_o *extraout_RAX;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  Characters_BasicTitanAnimations_o *pCVar3;
  MethodInfo *pMVar4;
  
  pCVar3 = (__this->fields).BasicAnimations;
  if (pCVar3 != (Characters_BasicTitanAnimations_o *)0x0) {
    vtableDispatch = (pCVar3->klass->vtable)._4_get_Idle.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtableDispatch)
                       (pCVar3,(pCVar3->klass->vtable)._4_get_Idle.method,in_RDX,vtableDispatch);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057adff6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Shake");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"Laugh");
    g_data_057adff6 = '\x01';
  }
  pMVar4 = method;
  bVar1 = System_String__op_Equality((System_String_o *)method,"Laugh",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    pMVar4 = method;
    bVar1 = System_String__op_Equality((System_String_o *)method,"Nod",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pMVar4 = method;
      bVar1 = System_String__op_Equality((System_String_o *)method,"Shake",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__op_Equality((System_String_o *)method,"Roar",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          pSVar2 = *(System_String_o **)(g_data_057b9c00 + 0xb8);
        }
        else {
          pSVar2 = (pCVar3->fields).StunLeft;
          if (pSVar2 == (System_String_o *)0x0) goto Characters_DummyCharacter___ctor;
          pSVar2 = (System_String_o *)&pSVar2[0x18].monitor;
        }
      }
      else {
        pSVar2 = (pCVar3->fields).StunLeft;
        method = pMVar4;
        if (pSVar2 == (System_String_o *)0x0) goto Characters_DummyCharacter___ctor;
        pSVar2 = pSVar2 + 0x18;
      }
    }
    else {
      pSVar2 = (pCVar3->fields).StunLeft;
      method = pMVar4;
      if (pSVar2 == (System_String_o *)0x0) goto Characters_DummyCharacter___ctor;
      pSVar2 = (System_String_o *)&pSVar2[0x17].fields;
    }
  }
  else {
    pSVar2 = (pCVar3->fields).StunLeft;
    method = pMVar4;
    if (pSVar2 == (System_String_o *)0x0) {
Characters_DummyCharacter___ctor:
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)method,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    pSVar2 = (System_String_o *)&pSVar2[0x17].monitor;
  }
  return (System_String_o *)pSVar2->klass;
}


// Characters.DummyTitan$$GetEmoteAnimation
// il2cpp: System_String_o* Characters_DummyTitan__GetEmoteAnimation (Characters_DummyTitan_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x4320a90

System_String_o *
Characters_DummyTitan__GetEmoteAnimation
          (Characters_DummyTitan_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  bool_conflict bVar2;
  System_String_o *extraout_RAX;
  System_String_o **ppSVar3;
  UnityEngine_MonoBehaviour_o *pUVar4;
  
  if (g_data_057adff6 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Roar");
    il2cpp_runtime_helper_023445d0(&"Shake");
    il2cpp_runtime_helper_023445d0(&"Nod");
    il2cpp_runtime_helper_023445d0(&"Laugh");
    g_data_057adff6 = '\x01';
  }
  pUVar4 = (UnityEngine_MonoBehaviour_o *)emote;
  bVar2 = System_String__op_Equality(emote,"Laugh",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar4 = (UnityEngine_MonoBehaviour_o *)emote;
    bVar2 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pUVar4 = (UnityEngine_MonoBehaviour_o *)emote;
      bVar2 = System_String__op_Equality(emote,"Shake",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__op_Equality(emote,"Roar",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          ppSVar3 = *(System_String_o ***)(g_data_057b9c00 + 0xb8);
        }
        else {
          pCVar1 = (__this->fields).BasicAnimations;
          if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto Characters_DummyCharacter___ctor;
          ppSVar3 = &(pCVar1->fields).EmoteRoar;
        }
      }
      else {
        pCVar1 = (__this->fields).BasicAnimations;
        emote = (System_String_o *)pUVar4;
        if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto Characters_DummyCharacter___ctor;
        ppSVar3 = &(pCVar1->fields).EmoteShake;
      }
    }
    else {
      pCVar1 = (__this->fields).BasicAnimations;
      emote = (System_String_o *)pUVar4;
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto Characters_DummyCharacter___ctor;
      ppSVar3 = &(pCVar1->fields).EmoteNod;
    }
  }
  else {
    pCVar1 = (__this->fields).BasicAnimations;
    emote = (System_String_o *)pUVar4;
    if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) {
Characters_DummyCharacter___ctor:
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)emote,(MethodInfo *)0x0);
      return extraout_RAX;
    }
    ppSVar3 = &(pCVar1->fields).EmoteLaugh;
  }
  return *ppSVar3;
}


// Characters.DummyTitan$$.ctor
// il2cpp: void Characters_DummyTitan___ctor (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x4320bb0

void Characters_DummyTitan___ctor(Characters_DummyTitan_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


