// Type: Characters.DummyTitan
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/DummyTitan.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Titan/DummyTitan.cs  [CHANGED since prior version]
// --------------------------------

// Characters.DummyTitan$$Awake
// il2cpp: void Characters_DummyTitan__Awake (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x4013f00

void Characters_DummyTitan__Awake(Characters_DummyTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanComponentCache_o **ppCVar1;
  UnityEngine_Rigidbody_o *pUVar2;
  UnityEngine_GameObject_o *pUVar3;
  Characters_BasicTitanComponentCache_o *pCVar4;
  MethodInfo *method_00;
  Characters_BasicTitanAnimations_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o value;
  undefined1 auVar5 [16];
  
  if (DAT_05704287 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanAnimations);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitanComponentCache);
    il2cpp_init_method_metadata(&MethodInfo_BasicTitanSetup_AddComponent_BasicTitanSetup);
    DAT_05704287 = '\x01';
  }
  Characters_DummyCharacter__Awake((Characters_DummyCharacter_o *)__this,(MethodInfo *)0x0);
  pUVar3 = UnityEngine_Component__get_gameObject
                     ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  auVar5 = il2cpp_runtime_glue(TypeInfo_BasicTitanComponentCache);
  pCVar4 = auVar5._0_8_;
  Characters_BasicTitanComponentCache___ctor(pCVar4,pUVar3,auVar5._8_8_);
  ppCVar1 = &(__this->fields).Cache;
  (__this->fields).Cache = pCVar4;
  il2cpp_runtime_glue(ppCVar1,pCVar4);
  pCVar4 = (__this->fields).Cache;
  if ((pCVar4 != (Characters_BasicTitanComponentCache_o *)0x0) &&
     (pUVar2 = (pCVar4->fields).Rigidbody, pUVar2 != (UnityEngine_Rigidbody_o *)0x0)) {
    UnityEngine_Rigidbody__set_freezeRotation(pUVar2,1,(MethodInfo *)0x0);
    pCVar4 = *ppCVar1;
    if ((pCVar4 != (Characters_BasicTitanComponentCache_o *)0x0) &&
       (pUVar2 = (pCVar4->fields).Rigidbody, pUVar2 != (UnityEngine_Rigidbody_o *)0x0)) {
      UnityEngine_Rigidbody__set_useGravity(pUVar2,0,(MethodInfo *)0x0);
      pUVar3 = UnityEngine_Component__get_gameObject
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_GameObject_o *)0x0) {
        method_00 = (MethodInfo *)UnityEngine_GameObject__AddComponent<object>(pUVar3,MethodInfo_BasicTitanSetup_AddComponent_BasicTitanSetup);
        (__this->fields).Setup = (Characters_BasicTitanSetup_o *)method_00;
        il2cpp_runtime_glue(&(__this->fields).Setup);
        __this_00 = (Characters_BasicTitanAnimations_o *)il2cpp_runtime_glue(TypeInfo_BasicTitanAnimations);
        Characters_BasicTitanAnimations___ctor(__this_00,method_00);
        (__this->fields).BasicAnimations = __this_00;
        il2cpp_runtime_glue(&(__this->fields).BasicAnimations);
        __this_01 = UnityEngine_Component__get_transform
                              ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.DummyTitan$$GetIdleAnimation
// il2cpp: System_String_o* Characters_DummyTitan__GetIdleAnimation (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x4014060

System_String_o *
Characters_DummyTitan__GetIdleAnimation(Characters_DummyTitan_o *__this,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar2;
  undefined8 in_RDX;
  
  pCVar1 = (__this->fields).BasicAnimations;
  if (pCVar1 != (Characters_BasicTitanAnimations_o *)0x0) {
    vtable_dispatch = (pCVar1->klass->vtable)._4_get_Idle.methodPtr;
    pSVar2 = (System_String_o *)
             (*vtable_dispatch)
                       (pCVar1,(pCVar1->klass->vtable)._4_get_Idle.method,in_RDX,
                        vtable_dispatch);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.DummyTitan$$GetEmoteAnimation
// il2cpp: System_String_o* Characters_DummyTitan__GetEmoteAnimation (Characters_DummyTitan_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x4014090

System_String_o *
Characters_DummyTitan__GetEmoteAnimation
          (Characters_DummyTitan_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_BasicTitanAnimations_o *pCVar1;
  bool_conflict bVar2;
  System_String_o **ppSVar3;
  
  if (DAT_05704288 == '\0') {
    il2cpp_init_method_metadata(&"Roar");
    il2cpp_init_method_metadata(&"Shake");
    il2cpp_init_method_metadata(&"Nod");
    il2cpp_init_method_metadata(&"Laugh");
    DAT_05704288 = '\x01';
  }
  bVar2 = System_String__op_Equality(emote,"Laugh",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(emote,"Nod",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      bVar2 = System_String__op_Equality(emote,"Shake",(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        bVar2 = System_String__op_Equality(emote,"Roar",(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          ppSVar3 = *(System_String_o ***)(DAT_057110b0 + 0xb8);
        }
        else {
          pCVar1 = (__this->fields).BasicAnimations;
          if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto LAB_040141a5;
          ppSVar3 = &(pCVar1->fields).EmoteRoar;
        }
      }
      else {
        pCVar1 = (__this->fields).BasicAnimations;
        if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto LAB_040141a5;
        ppSVar3 = &(pCVar1->fields).EmoteShake;
      }
    }
    else {
      pCVar1 = (__this->fields).BasicAnimations;
      if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) goto LAB_040141a5;
      ppSVar3 = &(pCVar1->fields).EmoteNod;
    }
  }
  else {
    pCVar1 = (__this->fields).BasicAnimations;
    if (pCVar1 == (Characters_BasicTitanAnimations_o *)0x0) {
LAB_040141a5:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    ppSVar3 = &(pCVar1->fields).EmoteLaugh;
  }
  return *ppSVar3;
}


// Characters.DummyTitan$$.ctor
// il2cpp: void Characters_DummyTitan___ctor (Characters_DummyTitan_o* __this, const MethodInfo* method);
// 0x40141b0

void Characters_DummyTitan___ctor(Characters_DummyTitan_o *__this,MethodInfo *method)

{
  Characters_DummyCharacter___ctor((Characters_DummyCharacter_o *)__this,(MethodInfo *)0x0);
  return;
}


