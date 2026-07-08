// Type: Characters.DummyCharacter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/DummyCharacter.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/DummyCharacter.cs  [CHANGED since prior version]
// --------------------------------

// Characters.DummyCharacter$$Awake
// il2cpp: void Characters_DummyCharacter__Awake (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x3fa11f0

void Characters_DummyCharacter__Awake(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o *owner;
  Characters_AnimationHandler_o *__this_00;
  undefined1 auVar1 [16];
  
  if (DAT_0570402f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AnimationHandler);
    DAT_0570402f = '\x01';
  }
  owner = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  auVar1 = il2cpp_runtime_glue(TypeInfo_AnimationHandler);
  __this_00 = auVar1._0_8_;
  Characters_AnimationHandler___ctor(__this_00,owner,auVar1._8_8_);
  (__this->fields).Animation = __this_00;
  il2cpp_runtime_glue(&(__this->fields).Animation,__this_00);
  return;
}


// Characters.DummyCharacter$$GetIdleAnimation
// il2cpp: System_String_o* Characters_DummyCharacter__GetIdleAnimation (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x3fa1260

System_String_o *
Characters_DummyCharacter__GetIdleAnimation(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Characters.DummyCharacter$$GetEmoteAnimation
// il2cpp: System_String_o* Characters_DummyCharacter__GetEmoteAnimation (Characters_DummyCharacter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x3fa1280

System_String_o *
Characters_DummyCharacter__GetEmoteAnimation
          (Characters_DummyCharacter_o *__this,System_String_o *emote,MethodInfo *method)

{
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Characters.DummyCharacter$$Idle
// il2cpp: void Characters_DummyCharacter__Idle (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x3fa12a0

void Characters_DummyCharacter__Idle(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  undefined1 auVar1 [16];
  
  (__this->fields).State = 0;
  __this_00 = (__this->fields).Animation;
  auVar1 = (*(__this->klass->vtable)._5_GetIdleAnimation.methodPtr)
                     (__this,(__this->klass->vtable)._5_GetIdleAnimation.method);
  if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__CrossFade(__this_00,auVar1._0_8_,0.1,0.0,auVar1._8_8_);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.DummyCharacter$$EmoteAction
// il2cpp: void Characters_DummyCharacter__EmoteAction (Characters_DummyCharacter_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x3fa12e0

void Characters_DummyCharacter__EmoteAction
               (Characters_DummyCharacter_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_AnimationHandler_o *pCVar1;
  MethodInfo *method_00;
  float fVar2;
  undefined1 auVar3 [16];
  
  (__this->fields).State = 1;
  auVar3 = (*(__this->klass->vtable)._6_GetEmoteAnimation.methodPtr)
                     (__this,emote,(__this->klass->vtable)._6_GetEmoteAnimation.method);
  pCVar1 = (__this->fields).Animation;
  if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
    Characters_AnimationHandler__CrossFade(pCVar1,auVar3._0_8_,0.1,0.0,auVar3._8_8_);
    pCVar1 = (__this->fields).Animation;
    if (pCVar1 != (Characters_AnimationHandler_o *)0x0) {
      fVar2 = Characters_AnimationHandler__GetLength(pCVar1,auVar3._0_8_,method_00);
      (__this->fields)._stateTimeLeft = fVar2;
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.DummyCharacter$$Update
// il2cpp: void Characters_DummyCharacter__Update (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x3fa1340

void Characters_DummyCharacter__Update(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  Characters_AnimationHandler_o *__this_00;
  float fVar1;
  float fVar2;
  undefined1 auVar3 [16];
  
  if ((__this->fields).State != 0) {
    fVar2 = (__this->fields)._stateTimeLeft;
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 - fVar1;
    (__this->fields)._stateTimeLeft = fVar2;
    if (fVar2 <= 0.0) {
      (__this->fields).State = 0;
      __this_00 = (__this->fields).Animation;
      auVar3 = (*(__this->klass->vtable)._5_GetIdleAnimation.methodPtr)
                         (__this,(__this->klass->vtable)._5_GetIdleAnimation.method);
      if (__this_00 != (Characters_AnimationHandler_o *)0x0) {
        Characters_AnimationHandler__CrossFade(__this_00,auVar3._0_8_,0.1,0.0,auVar3._8_8_);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// Characters.DummyCharacter$$.ctor
// il2cpp: void Characters_DummyCharacter___ctor (Characters_DummyCharacter_o* __this, const MethodInfo* method);
// 0x3fa13d0

void Characters_DummyCharacter___ctor(Characters_DummyCharacter_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


