// Type: PatreonEffects.RoleSpriteHelpers
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/PatreonEffects/RoleSpriteHelpers.cs
// Prior real C# source: none
// --------------------------------

// PatreonEffects.RoleSpriteHelpers.<>c$$.cctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c___cctor (const MethodInfo* method);
// 0x1820d5420

void PatreonEffects_RoleSpriteHelpers___c___cctor(MethodInfo *method)

{
  PatreonEffects_RoleSpriteHelpers___c_o *__this;
  
  if (Il2CppMethodInitialized_1843469a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
    Il2CppMethodInitialized_1843469a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9,__this);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c___ctor (PatreonEffects_RoleSpriteHelpers___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
PatreonEffects_RoleSpriteHelpers___c___ctor(PatreonEffects_RoleSpriteHelpers___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c$$<TryReadRoles>b__8_0
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers___c___TryReadRoles_b__8_0 (PatreonEffects_RoleSpriteHelpers___c_o* __this, SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x1820d4770

System_String_o *
PatreonEffects_RoleSpriteHelpers___c___TryReadRoles_b__8_0
          (PatreonEffects_RoleSpriteHelpers___c_o *__this,SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar1 = (*(item->klass->vtable)._9_get_Value.methodPtr)(item,(item->klass->vtable)._9_get_Value.method);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.RoleSpriteHelpers.<>c$$<RoleArray>b__9_0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c___RoleArray_b__9_0 (PatreonEffects_RoleSpriteHelpers___c_o* __this, System_String_o* role, const MethodInfo* method);
// 0x181dec220

bool
PatreonEffects_RoleSpriteHelpers___c___RoleArray_b__9_0(PatreonEffects_RoleSpriteHelpers___c_o* __this, System_String_o* role, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
  return !bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass10_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___ctor(PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass10_0$$<TryGetDefinitionByRole>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___TryGetDefinitionByRole_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o* __this, PatreonEffects_RoleSpriteDefinition_o item, const MethodInfo* method);
// 0x1820d5140

bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0___TryGetDefinitionByRole_b__0
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o *__this,
               PatreonEffects_RoleSpriteDefinition_o *item,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_196c550((item->fields).RoleName,(__this->fields).roleName,5,(MethodInfo *)0x0)
  ;
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass11_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___ctor(PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass11_0$$<TryGetDefinitionBySpriteIndex>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___TryGetDefinitionBySpriteIndex_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o* __this, PatreonEffects_RoleSpriteDefinition_o item, const MethodInfo* method);
// 0x1820d5160

bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___TryGetDefinitionBySpriteIndex_b__0
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *__this,
               PatreonEffects_RoleSpriteDefinition_o *item,MethodInfo *method)

{
  return (item->fields).SpriteIndex == (__this->fields).spriteIndex;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass2_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___ctor(PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass2_0$$<GetEligibleRoleSprites>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___GetEligibleRoleSprites_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o* __this, PatreonEffects_RoleSpriteDefinition_o definition, const MethodInfo* method);
// 0x1820d5170

bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___GetEligibleRoleSprites_b__0
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o *__this,
               PatreonEffects_RoleSpriteDefinition_o *definition,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843469a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_1843469a1 = '\x01';
  }
  player = (__this->fields).player;
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,(definition->fields).RoleName,(MethodInfo *)0x0);
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass3_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___ctor(PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass3_0$$<HasRole>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___HasRole_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o* __this, System_String_o* role, const MethodInfo* method);
// 0x181e25350

bool
PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___HasRole_b__0(PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o* __this, System_String_o* role, MethodInfo* method)

{
  bool bVar1;
  
  bVar1 = System_String__Equals_196c550(requested,(__this->fields).roleName,5,(MethodInfo *)0x0);
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass6_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___ctor(PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass6_0$$<SanitizePlayerText>b__0
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___SanitizePlayerText_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x1820d51d0

System_String_o *
PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___SanitizePlayerText_b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o *__this,
          System_Text_RegularExpressions_Match_o *match,MethodInfo *method)

{
  PatreonEffects_RoleSpriteDefinition_array *source;
  Photon_Realtime_Player_o *player;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_Fields PVar1;
  bool bVar2;
  System_Text_RegularExpressions_GroupCollection_o *__this_00;
  System_Text_RegularExpressions_Capture_o *__this_01;
  System_String_o *pSVar3;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *object;
  System_Predicate_T__o *__this_02;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_Fields local_res10 [2];
  System_String_o *local_38;
  undefined8 uStack_30;
  PatreonEffects_RoleSpriteDefinition_o local_28;
  
  if (Il2CppMethodInitialized_1843469a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_1843469a2 = '\x01';
  }
  local_res10[0].spriteIndex = 0;
  local_38 = (System_String_o *)0x0;
  uStack_30 = 0;
  if (((match != (System_Text_RegularExpressions_Match_o *)0x0) &&
      (__this_00 = (*(match->klass->vtable)._5_get_Groups.methodPtr)
                             (match,(match->klass->vtable)._5_get_Groups.method),
      __this_00 != (System_Text_RegularExpressions_GroupCollection_o *)0x0)) &&
     (__this_01 = (System_Text_RegularExpressions_Capture_o *)
                  System_Text_RegularExpressions_GroupCollection__System_Collections_IList_get_Item
                            (__this_00,1,(MethodInfo *)0x0),
     __this_01 != (System_Text_RegularExpressions_Capture_o *)0x0)) {
    pSVar3 = System_Text_RegularExpressions_Capture__ToString(__this_01,(MethodInfo *)0x0);
    bVar2 = System_Int32__TryParse(pSVar3,&local_res10[0].spriteIndex,(MethodInfo *)0x0);
    PVar1.spriteIndex = local_res10[0].spriteIndex;
    if (!bVar2) {
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    }
    if (Il2CppMethodInitialized_18434699e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_RoleSpriteDefinition);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_RoleSpriteDefinition_bool);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0_TryGetDefinitionBySpriteIndex_b__0
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0);
      Il2CppMethodInitialized_18434699e = '\x01';
    }
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object != (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *)0x0) {
      (object->fields).spriteIndex = PVar1.spriteIndex;
      if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      }
      source = TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->Definitions;
      __this_02 = (System_Predicate_T__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_RoleSpriteDefinition_bool);
      System_Func_RoleSpriteDefinition__bool____ctor
                (__this_02,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0_TryGetDefinitionBySpriteIndex_b__0
                 ,(MethodInfo_B61280 *)0x0);
      System_Linq_Enumerable__FirstOrDefault_RoleSpriteDefinition_
                (&local_28,(System_Collections_Generic_IEnumerable_TSource__o *)source,
                 (System_Func_TSource__bool__o *)__this_02,
                 (MethodInfo_6BCE10 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_RoleSpriteDefinition);
      local_38 = local_28.fields.RoleName;
      uStack_30._0_4_ = local_28.fields.SpriteIndex;
      uStack_30._4_4_ = local_28.fields._12_4_;
      Il2CppCodeGenWriteBarrier(&local_38,(void *)0x0);
      bVar2 = System_String__IsNullOrEmpty(local_38,(MethodInfo *)0x0);
      pSVar3 = local_38;
      if (!bVar2) {
        player = (__this->fields).player;
        if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
        }
        bVar2 = PatreonEffects_RoleSpriteHelpers__HasRole(player,pSVar3,(MethodInfo *)0x0);
        if (bVar2) {
          pSVar3 = System_Text_RegularExpressions_Capture__ToString
                             ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
          return pSVar3;
        }
      }
      return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
  }
  ThrowNullReferenceException();
}


// PatreonEffects.RoleSpriteHelpers$$GetEligibleRoleSprites
// il2cpp: System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o* PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820cf690

System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *
PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  PatreonEffects_RoleSpriteDefinition_array *source;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o *object;
  System_Predicate_T__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar1;
  
  if (Il2CppMethodInitialized_184346995 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_RoleSpriteDefinition_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass2_0_GetEligibleRoleSprites_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass2_0);
    Il2CppMethodInitialized_184346995 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass2_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o *)0x0) {
    (object->fields).player = player;
    Il2CppCodeGenWriteBarrier(&(object->fields).player,player);
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    }
    source = TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->Definitions;
    __this = (System_Predicate_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_RoleSpriteDefinition_bool);
    System_Func_RoleSpriteDefinition__bool____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass2_0_GetEligibleRoleSprites_b__0,
               (MethodInfo_B61280 *)0x0);
    pSVar1 = System_Linq_Enumerable__Where_RoleSpriteDefinition_
                       ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                        (System_Func_TSource__bool__o *)__this,
                        (MethodInfo_6CA8B0 *)MethodInfo_System_Linq_Enumerable_Where_RoleSpriteDefinition);
    return (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)pSVar1;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.RoleSpriteHelpers$$HasRole
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__HasRole (Photon_Realtime_Player_o* player, System_String_o* roleName, const MethodInfo* method);
// 0x1820cfa00
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820cfbf3: mov rdi, qword ptr [rsp + 0x38]

bool PatreonEffects_RoleSpriteHelpers__HasRole
               (Photon_Realtime_Player_o *player,System_String_o *roleName,MethodInfo *method)

{
  bool bVar1;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o *object;
  System_String_array *pSVar2;
  Il2CppObject *raw;
  System_Func_string__bool__o *__this;
  System_String_array *local_res10;
  
  if (Il2CppMethodInitialized_184346996 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass3_0_HasRole_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass3_0);
    Il2CppMethodInitialized_184346996 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass3_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  (object->fields).roleName = roleName;
  Il2CppCodeGenWriteBarrier(&(object->fields).roleName,roleName);
  bVar1 = System_String__IsNullOrEmpty((object->fields).roleName,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
  }
  if (Il2CppMethodInitialized_18434699a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_18434699a = '\x01';
  }
  local_res10 = (System_String_array *)0x0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    if (pSVar2 != (System_String_array *)0x0) goto label_1820cfbf8;
  }
  else {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    raw = PhotonExtensions__GetCustomProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->AuthoritativeRoles,
                     (MethodInfo *)0x0);
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryReadRoles(raw,&local_res10,(MethodInfo *)0x0);
    pSVar2 = local_res10;
    if (bVar1) goto label_1820cfbf8;
    if ((player->fields).IsLocal != false) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar2 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      if (pSVar2 != (System_String_array *)0x0) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar2 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
        goto label_1820cfbf8;
      }
    }
  }
  pSVar2 = (System_String_array *)il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_string);
label_1820cfbf8:
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
  System_Func_object__bool____ctor
            ((System_Predicate_object__o *)__this,(Il2CppObject *)object,
             (intptr_t)MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass3_0_HasRole_b__0,
             (MethodInfo_B61EB0 *)0x0);
  bVar1 = System_Linq_Enumerable__Any_object__6b6920
                    ((System_Collections_Generic_IEnumerable_TSource__o *)pSVar2,
                     (System_Func_TSource__bool__o *)__this,
                     (MethodInfo_6B6920 *)MethodInfo_System_Linq_Enumerable_Any_string_406ebd8);
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers$$ComposeGuildWithRoleSprite
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite (Photon_Realtime_Player_o* player, System_String_o* guildText, System_String_o* selectedRoleName, const MethodInfo* method);
// 0x1820cf530

System_String_o *
PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
          (Photon_Realtime_Player_o *player,System_String_o *guildText,System_String_o *selectedRoleName,
          MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  int32_t local_res10 [2];
  PatreonEffects_RoleSpriteDefinition_o local_18;
  
  if (Il2CppMethodInitialized_184346997 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&" ");
    il2cpp_codegen_initialize_runtime_metadata(&"<sprite={0}>");
    Il2CppMethodInitialized_184346997 = '\x01';
  }
  local_18.fields.RoleName = (System_String_o *)0x0;
  local_18.fields.SpriteIndex = 0;
  local_18.fields._12_4_ = 0;
  if (guildText == (System_String_o *)0x0) {
    guildText = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  bVar1 = System_String__IsNullOrEmpty(selectedRoleName,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole
                      (selectedRoleName,&local_18,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      }
      bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,selectedRoleName,(MethodInfo *)0x0);
      if (bVar1) {
        local_res10[0] = local_18.fields.SpriteIndex;
        arg0 = il2cpp_value_box(g_data_184354e08,local_res10);
        pSVar2 = System_String__Format("<sprite={0}>",arg0,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(guildText,(MethodInfo *)0x0);
        if (bVar1) {
          return pSVar2;
        }
        pSVar2 = System_String__Concat_1969b70(pSVar2," ",guildText,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  return guildText;
}


// PatreonEffects.RoleSpriteHelpers$$GetRoleSpriteDisplayText
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText (System_String_o* selectedRoleName, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820cf7a0

System_String_o *
PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
          (System_String_o *selectedRoleName,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  int32_t local_res8 [2];
  PatreonEffects_RoleSpriteDefinition_o local_18;
  
  if (Il2CppMethodInitialized_184346998 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&"<sprite={0}> {1}");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    Il2CppMethodInitialized_184346998 = '\x01';
  }
  local_18.fields.RoleName = (System_String_o *)0x0;
  local_18.fields.SpriteIndex = 0;
  local_18.fields._12_4_ = 0;
  bVar1 = System_String__IsNullOrEmpty(selectedRoleName,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole
                      (selectedRoleName,&local_18,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      }
      bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,selectedRoleName,(MethodInfo *)0x0);
      if (bVar1) {
        local_res8[0] = local_18.fields.SpriteIndex;
        arg0 = il2cpp_value_box(g_data_184354e08,local_res8);
        pSVar2 = System_String__Format_196d440
                           ("<sprite={0}> {1}",arg0,(Il2CppObject *)local_18.fields.RoleName,
                            (MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  return "None";
}


// PatreonEffects.RoleSpriteHelpers$$SanitizePlayerText
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__SanitizePlayerText (Photon_Realtime_Player_o* player, System_String_o* text, const MethodInfo* method);
// 0x1820cfe10
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820cff22: mov rax, rdi
// asm:   0x1820cff25: jmp 0x1820cff0d

System_String_o *
PatreonEffects_RoleSpriteHelpers__SanitizePlayerText
          (Photon_Realtime_Player_o *player,System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  bool bVar1;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o *object;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  
  if (Il2CppMethodInitialized_184346999 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass6_0_SanitizePlayerText_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass6_0);
    Il2CppMethodInitialized_184346999 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass6_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object == (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o *)0x0) {
label_1820cff27:
    ThrowNullReferenceException();
  }
  (object->fields).player = player;
  Il2CppCodeGenWriteBarrier(&(object->fields).player,player);
  bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    }
    __this = TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->SpriteTagRegex;
    evaluator = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor
              ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)evaluator,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass6_0_SanitizePlayerText_b__0,
               (MethodInfo_16E67D0 *)0x0);
    if (__this == (System_Text_RegularExpressions_Regex_o *)0x0) goto label_1820cff27;
    text = System_Text_RegularExpressions_Regex__Replace_285dcc0(__this,text,evaluator,(MethodInfo *)0x0);
  }
  return text;
}


// PatreonEffects.RoleSpriteHelpers$$GetRoles
// il2cpp: System_Collections_Generic_IEnumerable_string__o* PatreonEffects_RoleSpriteHelpers__GetRoles (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x1820cf8a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820cf9eb: mov rax, qword ptr [rsp + 0x30]

System_Collections_Generic_IEnumerable_string__o *
PatreonEffects_RoleSpriteHelpers__GetRoles(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool bVar1;
  System_String_array *pSVar2;
  System_Collections_Generic_IEnumerable_string__o *pSVar3;
  Il2CppObject *raw;
  System_String_array *local_res8;
  
  if (Il2CppMethodInitialized_18434699a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    Il2CppMethodInitialized_18434699a = '\x01';
  }
  local_res8 = (System_String_array *)0x0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    if (pSVar2 != (System_String_array *)0x0) {
      return (System_Collections_Generic_IEnumerable_string__o *)pSVar2;
    }
  }
  else {
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    raw = PhotonExtensions__GetCustomProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->AuthoritativeRoles,
                     (MethodInfo *)0x0);
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryReadRoles(raw,&local_res8,(MethodInfo *)0x0);
    if (bVar1) {
      return (System_Collections_Generic_IEnumerable_string__o *)local_res8;
    }
    if ((player->fields).IsLocal != false) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar2 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      if (pSVar2 != (System_String_array *)0x0) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar2 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
        return (System_Collections_Generic_IEnumerable_string__o *)pSVar2;
      }
    }
  }
  pSVar3 = (System_Collections_Generic_IEnumerable_string__o *)
           il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_string);
  return pSVar3;
}


// PatreonEffects.RoleSpriteHelpers$$TryReadRoles
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryReadRoles (Il2CppObject* raw, System_String_array** roles, const MethodInfo* method);
// 0x1820d01a0
// eh: try 0x1820d02cc..0x1820d042c -> pad 0x1833352b0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x1820d04f5..0x1820d0608 -> pad 0x183324010 catch Il2CppExceptionWrapper
// eh: try 0x1820d06a6..0x1820d06b2 -> pad 0x1833352b0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x1820d06b2..0x1820d06c2 -> pad 0x183324010 catch Il2CppExceptionWrapper
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1820d0430: lea rcx, [rip + 0x200ac69]  ; MethodInfo_System_Array_Empty_string
// asm:   0x1820d0437: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1820d043c: mov rcx, rax
// asm:   0x1820d043f: call 0x18001b1e0  ; il2cpp_runtime_helper_18001b1e0()
// asm:   0x1820d0444: mov rcx, qword ptr [rsp + 0x98]
// asm:   0x1820d044c: mov qword ptr [rcx], rax
// asm:   0x1820d044f: mov rdx, rax
// asm:   0x1820d0452: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1820d054f: nop 
// asm:   0x1820d0633: lea rcx, [rsp + 0x48]
// asm:   0x1820d0638: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x1820d063d: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1820d0642: test rcx, rcx
// asm:   0x1820d0645: jne 0x1820d06c2
// asm:   0x1820d064b: mov r14, qword ptr [rsp + 0x98]
// asm:   0x1820d0653: mov rsi, qword ptr [rsp + 0x28]
// asm:   0x1820d06c2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183324010: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324015: push rbp
// asm:   0x183324016: sub rsp, 0x20
// asm:   0x18332401a: mov rbp, rdx
// asm:   0x18332401d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183324021: mov rcx, qword ptr [rax]
// asm:   0x183324024: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183324028: movabs rax, 0
// asm:   0x183324032: add rsp, 0x20
// asm:   0x183324036: pop rbp
// asm:   0x183324037: ret 
// asm:   0x1833352b0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833352b5: push rbx
// asm:   0x1833352b6: push rbp
// asm:   0x1833352b7: sub rsp, 0x28
// asm:   0x1833352bb: mov rbp, rdx
// asm:   0x1833352be: mov rbx, qword ptr [rbp + 0x30]
// asm:   0x1833352c2: mov rdx, qword ptr [rbx]
// asm:   0x1833352c5: mov rdx, qword ptr [rdx]
// asm:   0x1833352c8: mov rcx, qword ptr [rip + 0x101fb01]
// asm:   0x1833352cf: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833352d4: test al, al
// asm:   0x1833352d6: je 0x1833352e4
// asm:   0x1833352d8: movabs rax, 0
// asm:   0x1833352e2: jmp 0x1833352fc
// asm:   0x1833352e4: mov rax, qword ptr [rbx]
// asm:   0x1833352e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833352eb: lea rdx, [rip + 0xca6c96]
// asm:   0x1833352f2: lea rcx, [rbp + 0x20]
// asm:   0x1833352f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833352fc: add rsp, 0x28
// asm:   0x183335300: pop rbp
// asm:   0x183335301: pop rbx
// asm:   0x183335302: ret 

bool PatreonEffects_RoleSpriteHelpers__TryReadRoles
               (Il2CppObject *raw,System_String_array **roles,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_String_array *pSVar5;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_IEnumerable_JSONNode__o *source;
  System_Func_JSONNode__string__o *__this;
  System_Collections_Generic_IEnumerable_TResult__o *roles_00;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_string__o *__this_00;
  void *pvVar7;
  VirtualInvokeData *pVVar8;
  Il2CppObject *pIVar9;
  System_String_o *pSVar10;
  undefined8 uVar11;
  ushort uVar12;
  
  if (Il2CppMethodInitialized_18434699b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Select_JSONNode_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_JSONNode_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c_TryReadRoles_b__8_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
    Il2CppMethodInitialized_18434699b = '\x01';
  }
  pSVar5 = (System_String_array *)il2cpp_runtime_helper_18001b1e0(MethodInfo_System_Array_Empty_string);
  *roles = pSVar5;
  Il2CppCodeGenWriteBarrier(roles,pSVar5);
  if (raw != (Il2CppObject *)0x0) {
    pSVar10 = (System_String_o *)0x0;
    if (raw->klass == g_data_184354e50) {
      pSVar10 = (System_String_o *)raw;
    }
    if ((pSVar10 != (System_String_o *)0x0) &&
       (bVar4 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0), !bVar4)) {
      a = SimpleJSONFixed_JSON__Parse(pSVar10,(MethodInfo *)0x0);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar4 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)(a,(a->klass->vtable)._16_get_IsArray.method);
        if (bVar4) {
          source = (*(a->klass->vtable)._27_get_Children.methodPtr)
                             (a,(a->klass->vtable)._27_get_Children.method);
          if ((TypeInfo_PatreonEffects_RoleSpriteHelpers_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
          }
          __this = TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9__8_0;
          if (__this == (System_Func_JSONNode__string__o *)0x0) {
            if ((TypeInfo_PatreonEffects_RoleSpriteHelpers_c->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
            }
            pIVar6 = (Il2CppObject *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9;
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_JSONNode_string);
            System_Func_object__object____ctor
                      ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,pIVar6,
                       (intptr_t)MethodInfo_PatreonEffects_RoleSpriteHelpers_c_TryReadRoles_b__8_0,
                       (MethodInfo_16E67D0 *)0x0);
            TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9__8_0 = __this;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9__8_0,__this);
          }
          roles_00 = System_Linq_Enumerable__Select_Vector3__object_
                               ((System_Collections_Generic_IEnumerable_TSource__o *)source,
                                (System_Func_TSource__TResult__o *)__this,
                                (MethodInfo_6C2170 *)MethodInfo_System_Linq_Enumerable_Select_JSONNode_string)
          ;
          if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
          }
          pSVar5 = PatreonEffects_RoleSpriteHelpers__RoleArray
                             ((System_Collections_Generic_IEnumerable_string__o *)roles_00,(MethodInfo *)0x0);
          *roles = pSVar5;
          Il2CppCodeGenWriteBarrier(roles,pSVar5);
          if (*roles == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          return (int)(*roles)->max_length != 0;
        }
      }
    }
  }
  pIVar6 = il2cpp_vm_Object_IsInst(raw,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable);
  if (pIVar6 == (Il2CppObject *)0x0) {
    return false;
  }
  if (raw != (Il2CppObject *)0x0) {
    pIVar9 = (Il2CppObject *)0x0;
    if (raw->klass == g_data_184354e50) {
      pIVar9 = raw;
    }
    if (pIVar9 != (Il2CppObject *)0x0) {
      return false;
    }
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  pIVar6 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerable,pIVar6);
  do {
    if (pIVar6 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pvVar7 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar6);
    if ((char)pvVar7 == '\0') {
      pIVar6 = il2cpp_vm_Object_IsInst(pIVar6,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (pIVar6 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar6);
      }
      if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
      }
      pSVar5 = PatreonEffects_RoleSpriteHelpers__RoleArray
                         ((System_Collections_Generic_IEnumerable_string__o *)__this_00,(MethodInfo *)0x0);
      *roles = pSVar5;
      Il2CppCodeGenWriteBarrier(roles,pSVar5);
      if (*roles == (System_String_array *)0x0) {
        ThrowNullReferenceException();
      }
      return (int)(*roles)->max_length != 0;
    }
    if (pIVar6 == (Il2CppObject *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar2 = pIVar6->klass;
    uVar1 = (pIVar2->_2).interface_offsets_count;
    if (uVar1 != 0) {
      uVar12 = 0;
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      do {
        if (pIVar3[uVar12].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
          pVVar8 = (VirtualInvokeData *)&pIVar2->vtable[pIVar3[uVar12].offset + 1].methodPtr;
          goto label_1820d0579;
        }
        uVar12 = uVar12 + 1;
      } while (uVar12 < uVar1);
    }
    pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar6,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1820d0579:
    pIVar9 = (*pVVar8->methodPtr)(pIVar6,pVVar8->method);
    if (pIVar9 != (Il2CppObject *)0x0) {
      pSVar10 = (System_String_o *)(*pIVar9->klass->vtable[3].methodPtr)(pIVar9);
      bVar4 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
      if (!bVar4) {
        uVar11 = (*pIVar9->klass->vtable[3].methodPtr)(pIVar9,pIVar9->klass->vtable[3].method);
        if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        il2cpp_runtime_helper_180012890(__this_00,uVar11,MethodInfo_System_Collections_Generic_List_string_Add);
      }
    }
  } while( true );
}


// PatreonEffects.RoleSpriteHelpers$$RoleArray
// il2cpp: System_String_array* PatreonEffects_RoleSpriteHelpers__RoleArray (System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x1820cfc60

System_String_array *
PatreonEffects_RoleSpriteHelpers__RoleArray
          (System_Collections_Generic_IEnumerable_string__o *roles,MethodInfo *method)

{
  Il2CppObject *object;
  System_Func_string__bool__o *__this;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar1;
  System_String_array *pSVar2;
  
  if (Il2CppMethodInitialized_18434699c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_ToArray_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Where_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c_RoleArray_b__9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
    Il2CppMethodInitialized_18434699c = '\x01';
  }
  if ((TypeInfo_PatreonEffects_RoleSpriteHelpers_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
  }
  __this = TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9__9_0;
  if (__this == (System_Func_string__bool__o *)0x0) {
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c);
    }
    object = (Il2CppObject *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_bool);
    System_Func_object__bool____ctor
              ((System_Predicate_object__o *)__this,object,
               (intptr_t)MethodInfo_PatreonEffects_RoleSpriteHelpers_c_RoleArray_b__9_0,
               (MethodInfo_B61EB0 *)0x0);
    TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c->static_fields->__9__9_0,__this);
  }
  pSVar1 = System_Linq_Enumerable__Where_float_
                     ((System_Collections_Generic_IEnumerable_TSource__o *)roles,
                      (System_Func_TSource__bool__o *)__this,
                      (MethodInfo_6CA550 *)MethodInfo_System_Linq_Enumerable_Where_string);
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  pSVar1 = System_Linq_Enumerable__Distinct_object__6bb210
                     (pSVar1,(System_Collections_Generic_IEqualityComparer_TSource__o *)
                             TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase,
                      (MethodInfo_6BB210 *)MethodInfo_System_Linq_Enumerable_Distinct_string_4071258);
  pSVar2 = (System_String_array *)
           System_Linq_Enumerable__ToArray_object_
                     (pSVar1,(MethodInfo_6C7D90 *)MethodInfo_System_Linq_Enumerable_ToArray_string);
  return pSVar2;
}


// PatreonEffects.RoleSpriteHelpers$$TryGetDefinitionByRole
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole (System_String_o* roleName, PatreonEffects_RoleSpriteDefinition_o* definition, const MethodInfo* method);
// 0x1820cff30

bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole
               (System_String_o *roleName,PatreonEffects_RoleSpriteDefinition_o *definition,MethodInfo *method
               )

{
  PatreonEffects_RoleSpriteDefinition_array *source;
  bool bVar1;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o *object;
  System_Predicate_T__o *__this;
  PatreonEffects_RoleSpriteDefinition_o local_18;
  
  if (Il2CppMethodInitialized_18434699d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_RoleSpriteDefinition_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass10_0_TryGetDefinitionByRole_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass10_0)
    ;
    Il2CppMethodInitialized_18434699d = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass10_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (PatreonEffects_RoleSpriteHelpers___c__DisplayClass10_0_o *)0x0) {
    (object->fields).roleName = roleName;
    Il2CppCodeGenWriteBarrier(&(object->fields).roleName,roleName);
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    }
    source = TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->Definitions;
    __this = (System_Predicate_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_RoleSpriteDefinition_bool);
    System_Func_RoleSpriteDefinition__bool____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass10_0_TryGetDefinitionByRole_b__0,
               (MethodInfo_B61280 *)0x0);
    System_Linq_Enumerable__FirstOrDefault_RoleSpriteDefinition_
              (&local_18,(System_Collections_Generic_IEnumerable_TSource__o *)source,
               (System_Func_TSource__bool__o *)__this,
               (MethodInfo_6BCE10 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_RoleSpriteDefinition);
    (definition->fields).RoleName = local_18.fields.RoleName;
    (definition->fields).SpriteIndex = local_18.fields.SpriteIndex;
    *(undefined4 *)&(definition->fields).field_0xc = local_18.fields._12_4_;
    Il2CppCodeGenWriteBarrier((void **)definition,(void *)0x0);
    bVar1 = System_String__IsNullOrEmpty((definition->fields).RoleName,(MethodInfo *)0x0);
    return !bVar1;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.RoleSpriteHelpers$$TryGetDefinitionBySpriteIndex
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionBySpriteIndex (int32_t spriteIndex, PatreonEffects_RoleSpriteDefinition_o* definition, const MethodInfo* method);
// 0x1820d0070

bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionBySpriteIndex
               (int32_t spriteIndex,PatreonEffects_RoleSpriteDefinition_o *definition,MethodInfo *method)

{
  PatreonEffects_RoleSpriteDefinition_array *source;
  bool bVar1;
  PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *object;
  System_Predicate_T__o *__this;
  PatreonEffects_RoleSpriteDefinition_o local_18;
  
  if (Il2CppMethodInitialized_18434699e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Linq_Enumerable_FirstOrDefault_RoleSpriteDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_RoleSpriteDefinition_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0_TryGetDefinitionBySpriteIndex_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0)
    ;
    Il2CppMethodInitialized_18434699e = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *)0x0) {
    (object->fields).spriteIndex = spriteIndex;
    if ((TypeInfo_PatreonEffects_RoleSpriteHelpers->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_PatreonEffects_RoleSpriteHelpers);
    }
    source = TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->Definitions;
    __this = (System_Predicate_T__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_RoleSpriteDefinition_bool);
    System_Func_RoleSpriteDefinition__bool____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0_TryGetDefinitionBySpriteIndex_b__0
               ,(MethodInfo_B61280 *)0x0);
    System_Linq_Enumerable__FirstOrDefault_RoleSpriteDefinition_
              (&local_18,(System_Collections_Generic_IEnumerable_TSource__o *)source,
               (System_Func_TSource__bool__o *)__this,
               (MethodInfo_6BCE10 *)MethodInfo_System_Linq_Enumerable_FirstOrDefault_RoleSpriteDefinition);
    (definition->fields).RoleName = local_18.fields.RoleName;
    (definition->fields).SpriteIndex = local_18.fields.SpriteIndex;
    *(undefined4 *)&(definition->fields).field_0xc = local_18.fields._12_4_;
    Il2CppCodeGenWriteBarrier((void **)definition,(void *)0x0);
    bVar1 = System_String__IsNullOrEmpty((definition->fields).RoleName,(MethodInfo *)0x0);
    return !bVar1;
  }
  ThrowNullReferenceException();
}


// PatreonEffects.RoleSpriteHelpers$$.cctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___cctor (const MethodInfo* method);
// 0x1820d06d0

void PatreonEffects_RoleSpriteHelpers___cctor(MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  PatreonEffects_RoleSpriteDefinition_array *value;
  System_String_o *local_a8;
  undefined8 uStack_a0;
  System_String_o *local_98;
  undefined8 uStack_90;
  System_String_o *local_88;
  undefined8 uStack_80;
  System_String_o *local_78;
  undefined8 uStack_70;
  System_String_o *local_68;
  undefined8 uStack_60;
  System_String_o *local_58;
  undefined8 uStack_50;
  System_String_o *local_48;
  undefined8 uStack_40;
  System_String_o *local_38;
  undefined8 uStack_30;
  System_String_o *local_28;
  undefined8 uStack_20;
  System_String_o *local_18;
  undefined8 uStack_10;
  
  if (Il2CppMethodInitialized_18434699f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_PatreonEffects_RoleSpriteHelpers);
    il2cpp_codegen_initialize_runtime_metadata(&"ModTeam");
    il2cpp_codegen_initialize_runtime_metadata(&"<sprite=(\\d+)>");
    il2cpp_codegen_initialize_runtime_metadata(&"Mapper");
    il2cpp_codegen_initialize_runtime_metadata(&"Supporter");
    il2cpp_codegen_initialize_runtime_metadata(&"Manager");
    il2cpp_codegen_initialize_runtime_metadata(&"Music");
    il2cpp_codegen_initialize_runtime_metadata(&"3D Art");
    il2cpp_codegen_initialize_runtime_metadata(&"Media");
    il2cpp_codegen_initialize_runtime_metadata(&"2D Art");
    il2cpp_codegen_initialize_runtime_metadata(&"Tester");
    il2cpp_codegen_initialize_runtime_metadata(&"Developer");
    Il2CppMethodInitialized_18434699f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(__this,"<sprite=(\\d+)>",9,(MethodInfo *)0x0);
  TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->SpriteTagRegex = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->SpriteTagRegex,__this);
  value = (PatreonEffects_RoleSpriteDefinition_array *)
          SZArrayNew(TypeInfo_PatreonEffects_RoleSpriteDefinition_array,10);
  local_a8 = "2D Art";
  uStack_a0 = 0;
  Il2CppCodeGenWriteBarrier(&local_a8,"2D Art");
  uStack_a0 = CONCAT44(uStack_a0._4_4_,0x8d);
  if (value != (PatreonEffects_RoleSpriteDefinition_array *)0x0) {
    if ((int)value->max_length != 0) {
      value->m_Items[0].fields.RoleName = local_a8;
      *(undefined8 *)&value->m_Items[0].fields.SpriteIndex = uStack_a0;
      Il2CppCodeGenWriteBarrier((void **)value->m_Items,(void *)0x0);
      local_98 = "3D Art";
      uStack_90 = 0;
      Il2CppCodeGenWriteBarrier(&local_98,"3D Art");
      uStack_90 = CONCAT44(uStack_90._4_4_,0x8e);
      if (1 < (uint)value->max_length) {
        value->m_Items[1].fields.RoleName = local_98;
        *(undefined8 *)&value->m_Items[1].fields.SpriteIndex = uStack_90;
        Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 1),(void *)0x0);
        local_88 = "Developer";
        uStack_80 = 0;
        Il2CppCodeGenWriteBarrier(&local_88,"Developer");
        uStack_80 = CONCAT44(uStack_80._4_4_,0x8f);
        if (2 < (uint)value->max_length) {
          value->m_Items[2].fields.RoleName = local_88;
          *(undefined8 *)&value->m_Items[2].fields.SpriteIndex = uStack_80;
          Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 2),(void *)0x0);
          local_78 = "Supporter";
          uStack_70 = 0;
          Il2CppCodeGenWriteBarrier(&local_78,"Supporter");
          uStack_70 = CONCAT44(uStack_70._4_4_,0x90);
          if (3 < (uint)value->max_length) {
            value->m_Items[3].fields.RoleName = local_78;
            *(undefined8 *)&value->m_Items[3].fields.SpriteIndex = uStack_70;
            Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 3),(void *)0x0);
            local_68 = "Manager";
            uStack_60 = 0;
            Il2CppCodeGenWriteBarrier(&local_68,"Manager");
            uStack_60 = CONCAT44(uStack_60._4_4_,0x91);
            if (4 < (uint)value->max_length) {
              value->m_Items[4].fields.RoleName = local_68;
              *(undefined8 *)&value->m_Items[4].fields.SpriteIndex = uStack_60;
              Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 4),(void *)0x0);
              local_58 = "Mapper";
              uStack_50 = 0;
              Il2CppCodeGenWriteBarrier(&local_58,"Mapper");
              uStack_50 = CONCAT44(uStack_50._4_4_,0x92);
              if (5 < (uint)value->max_length) {
                value->m_Items[5].fields.RoleName = local_58;
                *(undefined8 *)&value->m_Items[5].fields.SpriteIndex = uStack_50;
                Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 5),(void *)0x0);
                local_48 = "Media";
                uStack_40 = 0;
                Il2CppCodeGenWriteBarrier(&local_48,"Media");
                uStack_40 = CONCAT44(uStack_40._4_4_,0x93);
                if (6 < (uint)value->max_length) {
                  value->m_Items[6].fields.RoleName = local_48;
                  *(undefined8 *)&value->m_Items[6].fields.SpriteIndex = uStack_40;
                  Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 6),(void *)0x0);
                  local_38 = "ModTeam";
                  uStack_30 = 0;
                  Il2CppCodeGenWriteBarrier(&local_38,"ModTeam");
                  uStack_30 = CONCAT44(uStack_30._4_4_,0x94);
                  if (7 < (uint)value->max_length) {
                    value->m_Items[7].fields.RoleName = local_38;
                    *(undefined8 *)&value->m_Items[7].fields.SpriteIndex = uStack_30;
                    Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 7),(void *)0x0);
                    local_28 = "Music";
                    uStack_20 = 0;
                    Il2CppCodeGenWriteBarrier(&local_28,"Music");
                    uStack_20 = CONCAT44(uStack_20._4_4_,0x95);
                    if (8 < (uint)value->max_length) {
                      value->m_Items[8].fields.RoleName = local_28;
                      *(undefined8 *)&value->m_Items[8].fields.SpriteIndex = uStack_20;
                      Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 8),(void *)0x0);
                      local_18 = "Tester";
                      uStack_10 = 0;
                      Il2CppCodeGenWriteBarrier(&local_18,"Tester");
                      uStack_10 = CONCAT44(uStack_10._4_4_,0x96);
                      if (9 < (uint)value->max_length) {
                        value->m_Items[9].fields.RoleName = local_18;
                        *(undefined8 *)&value->m_Items[9].fields.SpriteIndex = uStack_10;
                        Il2CppCodeGenWriteBarrier((void **)(value->m_Items + 9),(void *)0x0);
                        TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->Definitions = value;
                        Il2CppCodeGenWriteBarrier
                                  (&TypeInfo_PatreonEffects_RoleSpriteHelpers->static_fields->Definitions,
                                   value);
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
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


