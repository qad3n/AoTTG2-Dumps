// Type: PatreonEffects.RoleSpriteHelpers
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PatreonEffects/RoleSpriteHelpers.cs
// Prior source: NEW in this update
// --------------------------------

// PatreonEffects.RoleSpriteHelpers.<>c$$.cctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c___cctor (const MethodInfo* method);
// 0x403e0a0

void PatreonEffects_RoleSpriteHelpers_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057043c2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057043c2 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c___ctor (PatreonEffects_RoleSpriteHelpers___c_o* __this, const MethodInfo* method);
// 0x403e110

void PatreonEffects_RoleSpriteHelpers_<>c___ctor
               (PatreonEffects_RoleSpriteHelpers___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c$$<TryReadRoles>b__9_0
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers___c___TryReadRoles_b__9_0 (PatreonEffects_RoleSpriteHelpers___c_o* __this, SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x403e120

System_String_o *
PatreonEffects_RoleSpriteHelpers_<>c__<TryReadRoles>b__9_0
          (PatreonEffects_RoleSpriteHelpers___c_o *__this,SimpleJSONFixed_JSONNode_o *item,
          MethodInfo *method)

{
  Il2CppMethodPointer vtable_dispatch;
  System_String_o *pSVar1;
  
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    vtable_dispatch = (item->klass->vtable)._9_get_Value.methodPtr;
    pSVar1 = (System_String_o *)
             (*vtable_dispatch)
                       (item,(item->klass->vtable)._9_get_Value.method,method,vtable_dispatch)
    ;
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.RoleSpriteHelpers.<>c$$<RoleArray>b__10_0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c___RoleArray_b__10_0 (PatreonEffects_RoleSpriteHelpers___c_o* __this, System_String_o* role, const MethodInfo* method);
// 0x403e150

bool_conflict
PatreonEffects_RoleSpriteHelpers_<>c__<RoleArray>b__10_0
          (PatreonEffects_RoleSpriteHelpers___c_o *__this,System_String_o *role,MethodInfo *method)

{
  uint uVar1;
  
  uVar1 = System_String__IsNullOrWhiteSpace(role,(MethodInfo *)0x0);
  return uVar1 ^ 1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass11_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o* __this, const MethodInfo* method);
// 0x403da90

void PatreonEffects_RoleSpriteHelpers_<>c__DisplayClass11_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass11_0$$<TryGetDefinitionByRole>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0___TryGetDefinitionByRole_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o* __this, PatreonEffects_RoleSpriteDefinition_o item, const MethodInfo* method);
// 0x403e160

bool_conflict
PatreonEffects_RoleSpriteHelpers_<>c__DisplayClass11_0__<TryGetDefinitionByRole>b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass11_0_o *__this,
          PatreonEffects_RoleSpriteDefinition_o item,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__Equals(item.fields.RoleName,(__this->fields).roleName,5,(MethodInfo *)0x0);
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass12_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass12_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass12_0_o* __this, const MethodInfo* method);
// 0x403dbc0

void PatreonEffects_RoleSpriteHelpers_<>c__DisplayClass12_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass12_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass12_0$$<TryGetDefinitionBySpriteIndex>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass12_0___TryGetDefinitionBySpriteIndex_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass12_0_o* __this, PatreonEffects_RoleSpriteDefinition_o item, const MethodInfo* method);
// 0x403e180

bool_conflict
PatreonEffects_RoleSpriteHelpers_<>c__DisplayClass12_0__<TryGetDefinitionBySpriteIndex>b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass12_0_o *__this,
          PatreonEffects_RoleSpriteDefinition_o item,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(__this->fields).spriteIndex == item.fields.SpriteIndex)
  ;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass2_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o* __this, const MethodInfo* method);
// 0x403c300

void PatreonEffects_RoleSpriteHelpers_<>c__DisplayClass2_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass2_0$$<GetEligibleRoleSprites>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0___GetEligibleRoleSprites_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o* __this, PatreonEffects_RoleSpriteDefinition_o definition, const MethodInfo* method);
// 0x403e190

bool_conflict
PatreonEffects_RoleSpriteHelpers_<>c__DisplayClass2_0__<GetEligibleRoleSprites>b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass2_0_o *__this,
          PatreonEffects_RoleSpriteDefinition_o definition,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  bool_conflict bVar1;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  
  method_00 = definition.fields._8_8_;
  if (DAT_057043c3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    DAT_057043c3 = '\x01';
    method_00 = extraout_RDX;
  }
  player = (__this->fields).player;
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_init_class();
    method_00 = extraout_RDX_00;
  }
  bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,definition.fields.RoleName,method_00);
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass3_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o* __this, const MethodInfo* method);
// 0x403c430

void PatreonEffects_RoleSpriteHelpers_<>c__DisplayClass3_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass3_0$$<HasRole>b__0
// il2cpp: bool PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0___HasRole_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o* __this, System_String_o* role, const MethodInfo* method);
// 0x403e1f0

bool_conflict
PatreonEffects_RoleSpriteHelpers_<>c__DisplayClass3_0__<HasRole>b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass3_0_o *__this,System_String_o *role,
          MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__Equals(role,(__this->fields).roleName,5,(MethodInfo *)0x0);
  return bVar1;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass6_0$$.ctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___ctor (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x403cb20

void PatreonEffects_RoleSpriteHelpers_<>c__DisplayClass6_0___ctor
               (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass6_0$$<SanitizePlayerText>b__0
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0___SanitizePlayerText_b__0 (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x403e210

System_String_o *
PatreonEffects_RoleSpriteHelpers_<>c__DisplayClass6_0__<SanitizePlayerText>b__0
          (PatreonEffects_RoleSpriteHelpers___c__DisplayClass6_0_o *__this,
          System_Text_RegularExpressions_Match_o *match,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t spriteIndex;
  bool_conflict bVar1;
  System_Text_RegularExpressions_GroupCollection_o *__this_00;
  System_Text_RegularExpressions_Capture_o *__this_01;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *pMVar3;
  int32_t iStack_3c;
  PatreonEffects_RoleSpriteDefinition_o PStack_38;
  
  if (DAT_057043c4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    DAT_057043c4 = '\x01';
    method = extraout_RDX;
  }
  iStack_3c = 0;
  PStack_38.fields.RoleName = (System_String_o *)0x0;
  PStack_38.fields.SpriteIndex = 0;
  PStack_38.fields._12_4_ = 0;
  if (((match == (System_Text_RegularExpressions_Match_o *)0x0) ||
      (__this_00 = (System_Text_RegularExpressions_GroupCollection_o *)
                   (*(match->klass->vtable)._5_get_Groups.methodPtr)
                             (match,(match->klass->vtable)._5_get_Groups.method,method),
      __this_00 == (System_Text_RegularExpressions_GroupCollection_o *)0x0)) ||
     (__this_01 = (System_Text_RegularExpressions_Capture_o *)
                  System_Text_RegularExpressions_GroupCollection__get_Item
                            (__this_00,1,(MethodInfo *)0x0),
     __this_01 == (System_Text_RegularExpressions_Capture_o *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar2 = System_Text_RegularExpressions_Capture__get_Value(__this_01,(MethodInfo *)0x0);
  bVar1 = System_Int32__TryParse(pSVar2,&iStack_3c,(MethodInfo *)0x0);
  spriteIndex = iStack_3c;
  if ((char)bVar1 != '\0') {
    pMVar3 = extraout_RDX_00;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar3 = extraout_RDX_01;
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionBySpriteIndex
                      (spriteIndex,&PStack_38,pMVar3);
    pSVar2 = PStack_38.fields.RoleName;
    if ((char)bVar1 != '\0') {
      player = (__this->fields).player;
      pMVar3 = extraout_RDX_02;
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar3 = extraout_RDX_03;
      }
      bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,pSVar2,pMVar3);
      if ((char)bVar1 != '\0') {
        pSVar2 = System_Text_RegularExpressions_Capture__get_Value
                           ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// PatreonEffects.RoleSpriteHelpers$$GetEligibleRoleSprites
// il2cpp: System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o* PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x403c200

System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *
PatreonEffects_RoleSpriteHelpers__GetEligibleRoleSprites
          (Photon_Realtime_Player_o *player,MethodInfo *method)

{
  Il2CppObject *__this;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar1;
  
  if (DAT_057043b6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_PatreonEffects_RoleSpriteDefinitio);
    il2cpp_init_method_metadata(&TypeInfo_Func_RoleSpriteDefinition__bool);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__GetEligibleRoleSprites_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass2_0);
    DAT_057043b6 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass2_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)player;
    il2cpp_runtime_glue(__this + 1,player);
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = *(System_Collections_Generic_IEnumerable_TSource__o **)
              (*(long *)(TypeInfo_RoleSpriteHelpers + 0xb8) + 8);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_RoleSpriteDefinition__bool);
    System_Func<RoleSpriteDefinition__bool>___ctor();
    pSVar1 = System_Linq_Enumerable__Where<RoleSpriteDefinition>(pSVar1,predicate,MethodInfo_IEnumerable_1_PatreonEffects_RoleSpriteDefinitio);
    return (System_Collections_Generic_IEnumerable_RoleSpriteDefinition__o *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.RoleSpriteHelpers$$HasRole
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__HasRole (Photon_Realtime_Player_o* player, System_String_o* roleName, const MethodInfo* method);
// 0x403c310

bool_conflict
PatreonEffects_RoleSpriteHelpers__HasRole
          (Photon_Realtime_Player_o *player,System_String_o *roleName,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *__this;
  System_Collections_Generic_IEnumerable_string__o *source;
  System_Func_TSource__bool__o *predicate;
  MethodInfo *method_00;
  
  if (DAT_057043b7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__HasRole_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass3_0);
    DAT_057043b7 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass3_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)roleName;
    il2cpp_runtime_glue(__this + 1);
    method_00 = (MethodInfo *)0x0;
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)__this[1].klass,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return 0;
    }
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
    }
    source = PatreonEffects_RoleSpriteHelpers__GetRoles(player,method_00);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
    System_Func<object__bool>___ctor();
    bVar1 = System_Linq_Enumerable__Any<object>
                      ((System_Collections_Generic_IEnumerable_TSource__o *)source,predicate,
                       MethodInfo_Boolean_Any_String);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.RoleSpriteHelpers$$ComposeGuildWithRoleSprite
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite (Photon_Realtime_Player_o* player, System_String_o* guildText, System_String_o* selectedRoleName, const MethodInfo* method);
// 0x403c690

System_String_o *
PatreonEffects_RoleSpriteHelpers__ComposeGuildWithRoleSprite
          (Photon_Realtime_Player_o *player,System_String_o *guildText,
          System_String_o *selectedRoleName,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *arg0;
  System_String_o *str0;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar2;
  int32_t local_3c;
  PatreonEffects_RoleSpriteDefinition_o local_38;
  
  if (DAT_057043b8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"<sprite={0}>");
    DAT_057043b8 = '\x01';
  }
  local_38.fields.RoleName = (System_String_o *)0x0;
  local_38.fields.SpriteIndex = 0;
  local_38.fields._12_4_ = 0;
  if (guildText == (System_String_o *)0x0) {
    guildText = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  bVar1 = System_String__IsNullOrEmpty(selectedRoleName,(MethodInfo *)0x0);
  str0 = guildText;
  if ((char)bVar1 == '\0') {
    pMVar2 = extraout_RDX;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar2 = extraout_RDX_00;
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole
                      (selectedRoleName,&local_38,pMVar2);
    if ((char)bVar1 != '\0') {
      pMVar2 = extraout_RDX_01;
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar2 = extraout_RDX_02;
      }
      bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,selectedRoleName,pMVar2);
      if ((char)bVar1 != '\0') {
        local_3c = local_38.fields.SpriteIndex;
        arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_3c);
        str0 = System_String__Format("<sprite={0}>",arg0,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(guildText,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          str0 = System_String__Concat(str0," ",guildText,(MethodInfo *)0x0);
        }
      }
    }
  }
  return str0;
}


// PatreonEffects.RoleSpriteHelpers$$GetRoleSpriteDisplayText
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText (System_String_o* selectedRoleName, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x403c900

System_String_o *
PatreonEffects_RoleSpriteHelpers__GetRoleSpriteDisplayText
          (System_String_o *selectedRoleName,Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *arg0;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar3;
  int32_t local_2c;
  PatreonEffects_RoleSpriteDefinition_o local_28;
  
  if (DAT_057043b9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&"<sprite={0}> {1}");
    il2cpp_init_method_metadata(&"None");
    DAT_057043b9 = '\x01';
  }
  local_28.fields.RoleName = (System_String_o *)0x0;
  local_28.fields.SpriteIndex = 0;
  local_28.fields._12_4_ = 0;
  bVar1 = System_String__IsNullOrEmpty(selectedRoleName,(MethodInfo *)0x0);
  pSVar2 = "None";
  if ((char)bVar1 == '\0') {
    pMVar3 = extraout_RDX;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar3 = extraout_RDX_00;
    }
    bVar1 = PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole
                      (selectedRoleName,&local_28,pMVar3);
    pSVar2 = "None";
    if ((char)bVar1 != '\0') {
      pMVar3 = extraout_RDX_01;
      if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
        il2cpp_init_class();
        pMVar3 = extraout_RDX_02;
      }
      bVar1 = PatreonEffects_RoleSpriteHelpers__HasRole(player,selectedRoleName,pMVar3);
      pSVar2 = "None";
      if ((char)bVar1 != '\0') {
        local_2c = local_28.fields.SpriteIndex;
        arg0 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,&local_2c);
        pSVar2 = System_String__Format
                           ("<sprite={0}> {1}",arg0,(Il2CppObject *)local_28.fields.RoleName,
                            (MethodInfo *)0x0);
      }
    }
  }
  return pSVar2;
}


// PatreonEffects.RoleSpriteHelpers$$SanitizePlayerText
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__SanitizePlayerText (Photon_Realtime_Player_o* player, System_String_o* text, const MethodInfo* method);
// 0x403ca00

System_String_o *
PatreonEffects_RoleSpriteHelpers__SanitizePlayerText
          (Photon_Realtime_Player_o *player,System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  System_String_o *pSVar2;
  
  if (DAT_057043ba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_MatchEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&MethodInfo_String__SanitizePlayerText_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass6_0);
    DAT_057043ba = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass6_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)player;
    il2cpp_runtime_glue(__this_00 + 1);
    bVar1 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      return text;
    }
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = (System_Text_RegularExpressions_Regex_o *)**(undefined8 **)(TypeInfo_RoleSpriteHelpers + 0xb8);
    evaluator = (System_Text_RegularExpressions_MatchEvaluator_o *)il2cpp_runtime_glue(TypeInfo_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor();
    if (__this != (System_Text_RegularExpressions_Regex_o *)0x0) {
      pSVar2 = System_Text_RegularExpressions_Regex__Replace
                         (__this,text,evaluator,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.RoleSpriteHelpers$$SerializeRoles
// il2cpp: System_String_o* PatreonEffects_RoleSpriteHelpers__SerializeRoles (System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x403cb30

/* WARNING: Removing unreachable block (ram,0x0403cf33) */

System_String_o *
PatreonEffects_RoleSpriteHelpers__SerializeRoles
          (System_Collections_Generic_IEnumerable_string__o *roles,MethodInfo *method)

{
  ushort uVar1;
  System_Collections_Generic_IEnumerable_string__c *pSVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  char cVar4;
  bool_conflict bVar5;
  SimpleJSONFixed_JSONArray_o *__this;
  VirtualInvokeData *pVVar6;
  long *plVar7;
  undefined8 *puVar8;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  long lVar11;
  long lVar12;
  
  if (DAT_057043bb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_057043bb = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (roles != (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    pSVar2 = roles->klass;
    uVar1._0_1_ = (pSVar2->_2).rank;
    uVar1._1_1_ = (pSVar2->_2).minimumAlignment;
    if ((ulong)uVar1 != 0) {
      pIVar3 = (pSVar2->_1).interfaceOffsets;
      lVar11 = 0;
      do {
        if (*(long *)((long)&pIVar3->interfaceType + lVar11) == TypeInfo_IEnumerable_string) {
          pVVar6 = pSVar2->vtable + *(int *)((long)&pIVar3->offset + lVar11);
          goto LAB_0403cc21;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)uVar1 << 4 != lVar11);
    }
    pVVar6 = (VirtualInvokeData *)il2cpp_runtime_glue(roles,TypeInfo_IEnumerable_string,0);
LAB_0403cc21:
    plVar7 = (long *)(*pVVar6->methodPtr)(roles,pVVar6->method);
    if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      lVar11 = *plVar7;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138)
            ;
            goto LAB_0403ccc3;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,0);
LAB_0403ccc3:
      cVar4 = (*(code *)*puVar8)(plVar7,puVar8[1]);
      if (cVar4 == '\0') {
        if (plVar7 == (long *)0x0) break;
        lVar11 = *plVar7;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto LAB_0403ce4f;
        lVar12 = 0;
        goto LAB_0403ce40;
      }
      lVar11 = *plVar7;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar12 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IEnumerator_string) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + lVar11 + 0x138)
            ;
            goto LAB_0403cd33;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator_string,0);
LAB_0403cd33:
      pSVar9 = (System_String_o *)(*(code *)*puVar8)(plVar7);
      bVar5 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
        if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        (*(__this->klass->vtable)._21_Add.methodPtr)
                  (__this,pSVar10,(__this->klass->vtable)._21_Add.method);
      }
    } while( true );
  }
  goto LAB_0403ce7f;
  while (lVar12 = lVar12 + 0x10, (ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar12) {
LAB_0403ce40:
    if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar12) == TypeInfo_IDisposable) {
      puVar8 = (undefined8 *)
               (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar12) * 0x10 + 0x138);
      goto LAB_0403ce6d;
    }
  }
LAB_0403ce4f:
  puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable,0);
LAB_0403ce6d:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_0403ce7f:
  if (__this != (SimpleJSONFixed_JSONArray_o *)0x0) {
    pSVar9 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    return pSVar9;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.RoleSpriteHelpers$$GetRoles
// il2cpp: System_Collections_Generic_IEnumerable_string__o* PatreonEffects_RoleSpriteHelpers__GetRoles (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x403c440

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_IEnumerable_string__o *
PatreonEffects_RoleSpriteHelpers__GetRoles(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  System_String_array *pSVar5;
  long lVar6;
  long lVar7;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar8;
  System_String_array *local_30;
  System_String_array *local_28;
  
  if (DAT_057043bc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_String___Empty_String);
    il2cpp_init_method_metadata(&TypeInfo_PlayerProperty);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    DAT_057043bc = '\x01';
  }
  local_28 = (System_String_array *)0x0;
  local_30 = (System_String_array *)0x0;
  if (player == (Photon_Realtime_Player_o *)0x0) {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar5 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    }
    else {
      pSVar5 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
    }
    if (pSVar5 != (System_String_array *)0x0) {
      return (System_Collections_Generic_IEnumerable_string__o *)pSVar5;
    }
  }
  else {
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar4 = PhotonExtensions__GetCustomProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0xa8),
                        (MethodInfo *)0x0);
    pMVar8 = extraout_RDX;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar8 = extraout_RDX_00;
    }
    bVar3 = PatreonEffects_RoleSpriteHelpers__TryReadRoles(pIVar4,&local_28,pMVar8);
    if ((char)bVar3 != '\0') {
      return (System_Collections_Generic_IEnumerable_string__o *)local_28;
    }
    if (*(int *)(TypeInfo_PlayerProperty + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar4 = PhotonExtensions__GetCustomProperty
                       (player,*(System_String_o **)(*(long *)(TypeInfo_PlayerProperty + 0xb8) + 0x10),
                        (MethodInfo *)0x0);
    pMVar8 = extraout_RDX_01;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar8 = extraout_RDX_02;
    }
    bVar3 = PatreonEffects_RoleSpriteHelpers__TryReadRoles(pIVar4,&local_30,pMVar8);
    if ((char)bVar3 != '\0') {
      return (System_Collections_Generic_IEnumerable_string__o *)local_30;
    }
    if ((char)(player->fields).IsLocal != '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar5 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
      if (pSVar5 != (System_String_array *)0x0) {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar5 = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
        return (System_Collections_Generic_IEnumerable_string__o *)pSVar5;
      }
    }
  }
  lVar6 = MethodInfo_String___Empty_String;
  if (*(long *)(MethodInfo_String___Empty_String + 0x38) == 0) {
    il2cpp_glue_022c2910(MethodInfo_String___Empty_String);
    lVar7 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  else {
    lVar7 = *(long *)(*(long *)(MethodInfo_String___Empty_String + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar7 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar7 = il2cpp_glue_022c28b0();
    iVar2 = *(int *)(lVar7 + 0xe4);
  }
  else {
    iVar2 = *(int *)(lVar7 + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  else {
    lVar6 = *(long *)(*(long *)(lVar6 + 0x38) + 0x10);
    bVar1 = *(byte *)(lVar6 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    lVar6 = il2cpp_glue_022c28b0(lVar6);
  }
  return (System_Collections_Generic_IEnumerable_string__o *)**(undefined8 **)(lVar6 + 0xb8);
}


// PatreonEffects.RoleSpriteHelpers$$TryReadRoles
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryReadRoles (Il2CppObject* raw, System_String_array** roles, const MethodInfo* method);
// 0x403cf60

/* WARNING: Removing unreachable block (ram,0x0403d555) */
/* WARNING: Removing unreachable block (ram,0x0403d5b7) */

bool_conflict
PatreonEffects_RoleSpriteHelpers__TryReadRoles
          (Il2CppObject *raw,System_String_array **roles,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  uint uVar3;
  System_Object_array *pSVar4;
  char cVar5;
  bool_conflict bVar6;
  long lVar7;
  long lVar8;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_IEnumerable_TSource__o *source;
  System_Func_TSource__TResult__o *selector;
  System_Collections_Generic_IEnumerable_TResult__o *roles_00;
  System_String_array *pSVar9;
  long *plVar10;
  System_Collections_Generic_List_object__o *__this;
  undefined8 *puVar11;
  long *plVar12;
  System_String_o *value;
  Il2CppObject *item;
  MethodInfo *method_00;
  
  if (DAT_057043bd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String___Empty_String);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Select_JSONNode_Str);
    il2cpp_init_method_metadata(&TypeInfo_Func_JSONNode__string);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&MethodInfo_String__TryReadRoles_b__9_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057043bd = '\x01';
  }
  lVar8 = MethodInfo_String___Empty_String;
  if (*(long *)(MethodInfo_String___Empty_String + 0x38) == 0) {
    il2cpp_glue_022c2910(MethodInfo_String___Empty_String);
    lVar7 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) == 0) goto LAB_0403d041;
LAB_0403d083:
    if (*(int *)(lVar7 + 0xe4) == 0) goto LAB_0403d052;
LAB_0403d08c:
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar8 + 0x135);
  }
  else {
    lVar7 = *(long *)(*(long *)(MethodInfo_String___Empty_String + 0x38) + 0x10);
    if ((*(byte *)(lVar7 + 0x135) & 1) != 0) goto LAB_0403d083;
LAB_0403d041:
    lVar7 = il2cpp_glue_022c28b0();
    if (*(int *)(lVar7 + 0xe4) != 0) goto LAB_0403d08c;
LAB_0403d052:
    il2cpp_init_class();
    lVar8 = *(long *)(*(long *)(lVar8 + 0x38) + 0x10);
    bVar2 = *(byte *)(lVar8 + 0x135);
  }
  if ((bVar2 & 1) == 0) {
    lVar8 = il2cpp_glue_022c28b0(lVar8);
  }
  *roles = (System_String_array *)**(undefined8 **)(lVar8 + 0xb8);
  il2cpp_runtime_glue(roles);
  if (((raw != (Il2CppObject *)0x0) && (raw->klass == DAT_057110b0)) &&
     (bVar6 = System_String__IsNullOrEmpty((System_String_o *)raw,(MethodInfo *)0x0),
     (char)bVar6 == '\0')) {
    a = SimpleJSONFixed_JSON__Parse((System_String_o *)raw,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      cVar5 = (*(a->klass->vtable)._16_get_IsArray.methodPtr)
                        (a,(a->klass->vtable)._16_get_IsArray.method);
      if (cVar5 != '\0') {
        source = (System_Collections_Generic_IEnumerable_TSource__o *)
                 (*(a->klass->vtable)._27_get_Children.methodPtr)
                           (a,(a->klass->vtable)._27_get_Children.method);
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        selector = *(System_Func_TSource__TResult__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
        if (selector == (System_Func_TSource__TResult__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          selector = (System_Func_TSource__TResult__o *)il2cpp_runtime_glue(TypeInfo_Func_JSONNode__string);
          System_Func<object__object>___ctor();
          lVar8 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_TSource__TResult__o **)(lVar8 + 8) = selector;
          il2cpp_runtime_glue(lVar8 + 8,selector);
        }
        roles_00 = System_Linq_Enumerable__Select<object__object>(source,selector,MethodInfo_IEnumerable_1_System_String__Select_JSONNode_Str);
        if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = PatreonEffects_RoleSpriteHelpers__RoleArray
                           ((System_Collections_Generic_IEnumerable_string__o *)roles_00,
                            (MethodInfo *)selector);
        *roles = pSVar9;
        il2cpp_runtime_glue(roles,pSVar9);
        pSVar9 = *roles;
        if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
LAB_0403d590:
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar9 >> 8),(int)pSVar9->max_length != 0);
      }
    }
  }
  plVar10 = (long *)il2cpp_runtime_glue(raw,TypeInfo_IEnumerable);
  if ((plVar10 == (long *)0x0) || ((raw != (Il2CppObject *)0x0 && (raw->klass == DAT_057110b0)))) {
    return 0;
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
  lVar8 = *plVar10;
  if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
    lVar7 = 0;
    do {
      if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar7) == TypeInfo_IEnumerable) {
        puVar11 = (undefined8 *)
                  ((long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar7) * 0x10 + lVar8 + 0x138);
        goto LAB_0403d2f8;
      }
      lVar7 = lVar7 + 0x10;
    } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar7);
  }
  puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IEnumerable,0);
LAB_0403d2f8:
  plVar10 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
  if (plVar10 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar8 = *plVar10;
    if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
      lVar7 = 0;
      do {
        if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar7) == TypeInfo_IEnumerator) {
          puVar11 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar7) * 0x10 + lVar8 + 0x138);
          goto LAB_0403d3a3;
        }
        lVar7 = lVar7 + 0x10;
      } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar7);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IEnumerator,0);
LAB_0403d3a3:
    cVar5 = (*(code *)*puVar11)(plVar10,puVar11[1]);
    if (cVar5 == '\0') {
      method_00 = TypeInfo_IDisposable;
      plVar10 = (long *)il2cpp_runtime_glue();
      if (plVar10 == (long *)0x0) goto LAB_0403d546;
      lVar8 = *plVar10;
      if ((ulong)*(ushort *)(lVar8 + 0x12e) == 0) goto LAB_0403d51f;
      lVar7 = 0;
      break;
    }
    lVar8 = *plVar10;
    if ((ulong)*(ushort *)(lVar8 + 0x12e) != 0) {
      lVar7 = 0;
      do {
        if (*(long *)(*(long *)(lVar8 + 0xb0) + lVar7) == TypeInfo_IEnumerator) {
          puVar11 = (undefined8 *)
                    ((long)(*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar7) + 1) * 0x10 + lVar8 +
                    0x138);
          goto LAB_0403d428;
        }
        lVar7 = lVar7 + 0x10;
      } while ((ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar7);
    }
    puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IEnumerator,1);
LAB_0403d428:
    plVar12 = (long *)(*(code *)*puVar11)(plVar10,puVar11[1]);
    if (plVar12 != (long *)0x0) {
      value = (System_String_o *)(**(code **)(*plVar12 + 0x168))(plVar12);
      bVar6 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        item = (Il2CppObject *)
               (**(code **)(*plVar12 + 0x168))(plVar12,*(undefined8 *)(*plVar12 + 0x170));
        lVar8 = MethodInfo_Void_Add;
        if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar3 = (__this->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = item;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar3,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar8 + 0x20) + 0xc0) + 0x70));
        }
      }
    }
  } while( true );
  while (lVar7 = lVar7 + 0x10, (ulong)*(ushort *)(lVar8 + 0x12e) << 4 != lVar7) {
    if (*(MethodInfo **)(*(long *)(lVar8 + 0xb0) + lVar7) == TypeInfo_IDisposable) {
      puVar11 = (undefined8 *)
                (lVar8 + (long)*(int *)(*(long *)(lVar8 + 0xb0) + 8 + lVar7) * 0x10 + 0x138);
      goto LAB_0403d53d;
    }
  }
LAB_0403d51f:
  puVar11 = (undefined8 *)il2cpp_runtime_glue(plVar10,TypeInfo_IDisposable,0);
LAB_0403d53d:
  method_00 = (MethodInfo *)puVar11[1];
  (*(code *)*puVar11)(plVar10);
LAB_0403d546:
  if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar9 = PatreonEffects_RoleSpriteHelpers__RoleArray
                     ((System_Collections_Generic_IEnumerable_string__o *)__this,method_00);
  *roles = pSVar9;
  il2cpp_runtime_glue(roles,pSVar9);
  pSVar9 = *roles;
  if (pSVar9 == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  goto LAB_0403d590;
}


// PatreonEffects.RoleSpriteHelpers$$RoleArray
// il2cpp: System_String_array* PatreonEffects_RoleSpriteHelpers__RoleArray (System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x403d8a0

System_String_array *
PatreonEffects_RoleSpriteHelpers__RoleArray
          (System_Collections_Generic_IEnumerable_string__o *roles,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_TSource__bool__o *predicate;
  System_Collections_Generic_IEnumerable_TSource__o *pSVar3;
  System_String_array *pSVar4;
  
  if (DAT_057043be == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Distinct_String);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray_String);
    il2cpp_init_method_metadata(&MethodInfo_IEnumerable_1_System_String__Where_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__RoleArray_b__10_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057043be = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  else {
    predicate = *(System_Func_TSource__bool__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
  }
  if (predicate == (System_Func_TSource__bool__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
    System_Func<object__bool>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_TSource__bool__o **)(lVar2 + 0x10) = predicate;
    il2cpp_runtime_glue(lVar2 + 0x10,predicate);
  }
  pSVar3 = System_Linq_Enumerable__Where<object>
                     ((System_Collections_Generic_IEnumerable_TSource__o *)roles,predicate,
                      MethodInfo_IEnumerable_1_System_String__Where_String);
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Linq_Enumerable__Distinct<object>
                     (pSVar3,*(System_Collections_Generic_IEqualityComparer_TSource__o **)
                              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18),MethodInfo_IEnumerable_1_System_String__Distinct_String);
  pSVar4 = (System_String_array *)System_Linq_Enumerable__ToArray<object>(pSVar3,MethodInfo_String___ToArray_String);
  return pSVar4;
}


// PatreonEffects.RoleSpriteHelpers$$TryGetDefinitionByRole
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole (System_String_o* roleName, PatreonEffects_RoleSpriteDefinition_o* definition, const MethodInfo* method);
// 0x403c7d0

bool_conflict
PatreonEffects_RoleSpriteHelpers__TryGetDefinitionByRole
          (System_String_o *roleName,PatreonEffects_RoleSpriteDefinition_o *definition,
          MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  uint uVar1;
  Il2CppObject *__this;
  System_Func_TSource__bool__o *predicate;
  PatreonEffects_RoleSpriteDefinition_o PVar2;
  
  if (DAT_057043bf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RoleSpriteDefinition_FirstOrDefault_RoleSpriteDe);
    il2cpp_init_method_metadata(&TypeInfo_Func_RoleSpriteDefinition__bool);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__TryGetDefinitionByRole_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass11_0);
    DAT_057043bf = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass11_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)roleName;
    il2cpp_runtime_glue(__this + 1,roleName);
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
    }
    source = *(System_Collections_Generic_IEnumerable_TSource__o **)
              (*(long *)(TypeInfo_RoleSpriteHelpers + 0xb8) + 8);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_RoleSpriteDefinition__bool);
    System_Func<RoleSpriteDefinition__bool>___ctor();
    PVar2 = System_Linq_Enumerable__FirstOrDefault<RoleSpriteDefinition>
                      (source,predicate,MethodInfo_RoleSpriteDefinition_FirstOrDefault_RoleSpriteDe);
    (definition->fields).RoleName = PVar2.fields.RoleName;
    (definition->fields).SpriteIndex = PVar2.fields.SpriteIndex;
    il2cpp_runtime_glue(definition);
    uVar1 = System_String__IsNullOrEmpty((definition->fields).RoleName,(MethodInfo *)0x0);
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.RoleSpriteHelpers$$TryGetDefinitionBySpriteIndex
// il2cpp: bool PatreonEffects_RoleSpriteHelpers__TryGetDefinitionBySpriteIndex (int32_t spriteIndex, PatreonEffects_RoleSpriteDefinition_o* definition, const MethodInfo* method);
// 0x403daa0

bool_conflict
PatreonEffects_RoleSpriteHelpers__TryGetDefinitionBySpriteIndex
          (int32_t spriteIndex,PatreonEffects_RoleSpriteDefinition_o *definition,MethodInfo *method)

{
  System_Collections_Generic_IEnumerable_TSource__o *source;
  uint uVar1;
  Il2CppObject *__this;
  System_Func_TSource__bool__o *predicate;
  PatreonEffects_RoleSpriteDefinition_o PVar2;
  
  if (DAT_057043c0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RoleSpriteDefinition_FirstOrDefault_RoleSpriteDe);
    il2cpp_init_method_metadata(&TypeInfo_Func_RoleSpriteDefinition__bool);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__TryGetDefinitionBySpriteIndex_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass12_0);
    DAT_057043c0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass12_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    *(int32_t *)&__this[1].klass = spriteIndex;
    if (*(int *)(TypeInfo_RoleSpriteHelpers + 0xe4) == 0) {
      il2cpp_init_class();
    }
    source = *(System_Collections_Generic_IEnumerable_TSource__o **)
              (*(long *)(TypeInfo_RoleSpriteHelpers + 0xb8) + 8);
    predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_RoleSpriteDefinition__bool);
    System_Func<RoleSpriteDefinition__bool>___ctor();
    PVar2 = System_Linq_Enumerable__FirstOrDefault<RoleSpriteDefinition>
                      (source,predicate,MethodInfo_RoleSpriteDefinition_FirstOrDefault_RoleSpriteDe);
    (definition->fields).RoleName = PVar2.fields.RoleName;
    (definition->fields).SpriteIndex = PVar2.fields.SpriteIndex;
    il2cpp_runtime_glue(definition);
    uVar1 = System_String__IsNullOrEmpty((definition->fields).RoleName,(MethodInfo *)0x0);
    return uVar1 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.RoleSpriteHelpers$$.cctor
// il2cpp: void PatreonEffects_RoleSpriteHelpers___cctor (const MethodInfo* method);
// 0x403dbd0

void PatreonEffects_RoleSpriteHelpers___cctor(MethodInfo *method)

{
  long lVar1;
  System_Text_RegularExpressions_Regex_o *__this;
  long lVar2;
  undefined8 uStack_b0;
  undefined8 uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 uStack_80;
  undefined8 uStack_78;
  undefined8 uStack_70;
  undefined8 uStack_68;
  undefined8 uStack_60;
  undefined8 uStack_58;
  undefined8 uStack_50;
  undefined8 uStack_48;
  undefined8 uStack_40;
  undefined8 uStack_38;
  undefined8 uStack_30;
  undefined8 uStack_28;
  undefined8 uStack_20;
  undefined8 uStack_18;
  
  if (DAT_057043c1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Regex);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteDefinition);
    il2cpp_init_method_metadata(&TypeInfo_RoleSpriteHelpers);
    il2cpp_init_method_metadata(&"ModTeam");
    il2cpp_init_method_metadata(&"<sprite=(\\d+)>");
    il2cpp_init_method_metadata(&"Mapper");
    il2cpp_init_method_metadata(&"Supporter");
    il2cpp_init_method_metadata(&"Manager");
    il2cpp_init_method_metadata(&"Music");
    il2cpp_init_method_metadata(&"3D Art");
    il2cpp_init_method_metadata(&"Media");
    il2cpp_init_method_metadata(&"2D Art");
    il2cpp_init_method_metadata(&"Tester");
    il2cpp_init_method_metadata(&"Developer");
    DAT_057043c1 = '\x01';
  }
  __this = (System_Text_RegularExpressions_Regex_o *)il2cpp_runtime_glue(TypeInfo_Regex);
  System_Text_RegularExpressions_Regex___ctor(__this,"<sprite=(\\d+)>",9,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_RoleSpriteHelpers + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_RoleSpriteHelpers + 0xb8),__this);
  lVar2 = il2cpp_glue_02274930(TypeInfo_RoleSpriteDefinition,10);
  uStack_18 = 0;
  uStack_20 = "2D Art";
  il2cpp_runtime_glue(&uStack_20);
  uStack_18 = CONCAT44(uStack_18._4_4_,0x8d);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = uStack_20;
      *(undefined4 *)(lVar2 + 0x28) = 0x8d;
      il2cpp_runtime_glue(lVar2 + 0x20,0);
      uStack_28 = 0;
      uStack_30 = "3D Art";
      il2cpp_runtime_glue(&uStack_30);
      uStack_28 = CONCAT44(uStack_28._4_4_,0x8e);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = uStack_30;
        *(undefined4 *)(lVar2 + 0x38) = 0x8e;
        il2cpp_runtime_glue(lVar2 + 0x30,0);
        uStack_38 = 0;
        uStack_40 = "Developer";
        il2cpp_runtime_glue(&uStack_40);
        uStack_38 = CONCAT44(uStack_38._4_4_,0x8f);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x40) = uStack_40;
          *(undefined4 *)(lVar2 + 0x48) = 0x8f;
          il2cpp_runtime_glue(lVar2 + 0x40,0);
          uStack_48 = 0;
          uStack_50 = "Supporter";
          il2cpp_runtime_glue(&uStack_50);
          uStack_48 = CONCAT44(uStack_48._4_4_,0x90);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x50) = uStack_50;
            *(undefined4 *)(lVar2 + 0x58) = 0x90;
            il2cpp_runtime_glue(lVar2 + 0x50,0);
            uStack_58 = 0;
            uStack_60 = "Manager";
            il2cpp_runtime_glue(&uStack_60);
            uStack_58 = CONCAT44(uStack_58._4_4_,0x91);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x60) = uStack_60;
              *(undefined4 *)(lVar2 + 0x68) = 0x91;
              il2cpp_runtime_glue(lVar2 + 0x60,0);
              uStack_68 = 0;
              uStack_70 = "Mapper";
              il2cpp_runtime_glue(&uStack_70);
              uStack_68 = CONCAT44(uStack_68._4_4_,0x92);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x70) = uStack_70;
                *(undefined4 *)(lVar2 + 0x78) = 0x92;
                il2cpp_runtime_glue(lVar2 + 0x70,0);
                uStack_78 = 0;
                uStack_80 = "Media";
                il2cpp_runtime_glue(&uStack_80);
                uStack_78 = CONCAT44(uStack_78._4_4_,0x93);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x80) = uStack_80;
                  *(undefined4 *)(lVar2 + 0x88) = 0x93;
                  il2cpp_runtime_glue(lVar2 + 0x80,0);
                  uStack_88 = 0;
                  uStack_90 = "ModTeam";
                  il2cpp_runtime_glue(&uStack_90);
                  uStack_88 = CONCAT44(uStack_88._4_4_,0x94);
                  if (7 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x90) = uStack_90;
                    *(undefined4 *)(lVar2 + 0x98) = 0x94;
                    il2cpp_runtime_glue(lVar2 + 0x90,0);
                    uStack_98 = 0;
                    uStack_a0 = "Music";
                    il2cpp_runtime_glue(&uStack_a0);
                    uStack_98 = CONCAT44(uStack_98._4_4_,0x95);
                    if (8 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0xa0) = uStack_a0;
                      *(undefined4 *)(lVar2 + 0xa8) = 0x95;
                      il2cpp_runtime_glue(lVar2 + 0xa0,0);
                      uStack_a8 = 0;
                      uStack_b0 = "Tester";
                      il2cpp_runtime_glue(&uStack_b0);
                      uStack_a8 = CONCAT44(uStack_a8._4_4_,0x96);
                      if (9 < *(uint *)(lVar2 + 0x18)) {
                        *(undefined8 *)(lVar2 + 0xb0) = uStack_b0;
                        *(undefined4 *)(lVar2 + 0xb8) = 0x96;
                        il2cpp_runtime_glue(lVar2 + 0xb0,0);
                        lVar1 = *(long *)(TypeInfo_RoleSpriteHelpers + 0xb8);
                        *(long *)(lVar1 + 8) = lVar2;
                        il2cpp_runtime_glue(lVar1 + 8,lVar2);
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


