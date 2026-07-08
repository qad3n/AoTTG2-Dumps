// Type: Characters.HumanSpecials
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Characters/HumanSpecials.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Characters/Human/HumanSpecials.cs  [CHANGED since prior version]
// --------------------------------

// Characters.HumanSpecials$$GetSpecialNames
// il2cpp: System_Collections_Generic_List_string__o* Characters_HumanSpecials__GetSpecialNames (System_String_o* loadout, bool includeShifters, const MethodInfo* method);
// 0x3fd65f0

/* WARNING: Type propagation algorithm not settling */

System_Collections_Generic_List_string__o *
Characters_HumanSpecials__GetSpecialNames
          (System_String_o *loadout,bool_conflict includeShifters,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_String_o *pSVar4;
  System_String_array *pSVar5;
  long lVar6;
  int iVar7;
  bool_conflict bVar8;
  System_Collections_Generic_List_string__o *__this;
  ulong uVar9;
  char local_34;
  
  if (DAT_057040ff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanLoadout);
    il2cpp_init_method_metadata(&TypeInfo_HumanSpecials);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Stock");
    DAT_057040ff = '\x01';
  }
  __this = (System_Collections_Generic_List_string__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar3 = **(long **)(TypeInfo_HumanSpecials + 0xb8);
  if (lVar3 == 0) goto LAB_03fd6d81;
  iVar7 = (int)*(ulong *)(lVar3 + 0x18);
  if (__this == (System_Collections_Generic_List_string__o *)0x0) {
    if (iVar7 < 1) goto LAB_03fd67a8;
LAB_03fd6d57:
    if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05704100 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Add);
      DAT_05704100 = '\x01';
    }
    goto LAB_03fd6d81;
  }
  if (0 < iVar7) {
    uVar9 = 0;
    if ((*(ulong *)(lVar3 + 0x18) & 0xffffffff) != 0) {
      do {
        pSVar4 = *(System_String_o **)(lVar3 + 0x20 + uVar9 * 8);
        if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05704100 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Void_Add);
          DAT_05704100 = '\x01';
        }
        lVar6 = MethodInfo_Void_Add;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this->fields)._items;
        if (pSVar5 == (System_String_array *)0x0) goto LAB_03fd6d81;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = pSVar4;
          il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,pSVar4);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
        }
        uVar9 = uVar9 + 1;
        if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar9) goto LAB_03fd67a8;
      } while (uVar9 < *(uint *)(lVar3 + 0x18));
    }
    goto LAB_03fd6d52;
  }
LAB_03fd67a8:
  if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = System_String__op_Equality
                    (loadout,(System_String_o *)**(undefined8 **)(TypeInfo_HumanLoadout + 0xb8),
                     (MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
    if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = System_String__op_Equality
                      (loadout,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 8),
                       (MethodInfo *)0x0);
    if ((char)bVar8 != '\0') {
      if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar3 = *(long *)(*(long *)(TypeInfo_HumanSpecials + 0xb8) + 8);
      if (lVar3 == 0) goto LAB_03fd6d81;
      iVar7 = (int)*(ulong *)(lVar3 + 0x18);
      if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03fd6a50;
      if (0 < iVar7) {
        uVar9 = 0;
        if ((*(ulong *)(lVar3 + 0x18) & 0xffffffff) != 0) {
          do {
            pSVar4 = *(System_String_o **)(lVar3 + 0x20 + uVar9 * 8);
            if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05704100 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Void_Add);
              DAT_05704100 = '\x01';
            }
            lVar6 = MethodInfo_Void_Add;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar5 = (__this->fields)._items;
            if (pSVar5 == (System_String_array *)0x0) goto LAB_03fd6d81;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar5->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar5->m_Items[(int)uVar2] = pSVar4;
              il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,pSVar4);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70))
              ;
            }
            uVar9 = uVar9 + 1;
            if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar9) goto LAB_03fd6a58;
          } while (uVar9 < *(uint *)(lVar3 + 0x18));
        }
        goto LAB_03fd6d52;
      }
    }
  }
  else {
    if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_HumanSpecials + 0xb8) + 0x10);
    if (lVar3 == 0) goto LAB_03fd6d81;
    iVar7 = (int)*(ulong *)(lVar3 + 0x18);
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
LAB_03fd6a50:
      if (0 < iVar7) goto LAB_03fd6d57;
    }
    else if (0 < iVar7) {
      uVar9 = 0;
      if ((*(ulong *)(lVar3 + 0x18) & 0xffffffff) != 0) {
        do {
          pSVar4 = *(System_String_o **)(lVar3 + 0x20 + uVar9 * 8);
          if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05704100 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Void_Add);
            DAT_05704100 = '\x01';
          }
          lVar6 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) goto LAB_03fd6d81;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pSVar4;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,pSVar4);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = uVar9 + 1;
          if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar9) goto LAB_03fd6a58;
        } while (uVar9 < *(uint *)(lVar3 + 0x18));
      }
      goto LAB_03fd6d52;
    }
  }
LAB_03fd6a58:
  local_34 = (char)includeShifters;
  if (local_34 != '\0') {
    if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar3 = *(long *)(*(long *)(TypeInfo_HumanSpecials + 0xb8) + 0x18);
    if (lVar3 == 0) goto LAB_03fd6d81;
    iVar7 = (int)*(ulong *)(lVar3 + 0x18);
    if (__this == (System_Collections_Generic_List_string__o *)0x0) {
      if (0 < iVar7) goto LAB_03fd6d57;
    }
    else if (0 < iVar7) {
      uVar9 = 0;
      if ((*(ulong *)(lVar3 + 0x18) & 0xffffffff) != 0) {
        do {
          pSVar4 = *(System_String_o **)(lVar3 + 0x20 + uVar9 * 8);
          if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05704100 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Void_Add);
            DAT_05704100 = '\x01';
          }
          lVar6 = MethodInfo_Void_Add;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this->fields)._items;
          if (pSVar5 == (System_String_array *)0x0) goto LAB_03fd6d81;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar5->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar5->m_Items[(int)uVar2] = pSVar4;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,pSVar4);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
          }
          uVar9 = uVar9 + 1;
          if ((long)(int)*(uint *)(lVar3 + 0x18) <= (long)uVar9) goto LAB_03fd6b88;
        } while (uVar9 < *(uint *)(lVar3 + 0x18));
      }
LAB_03fd6d52:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_03fd6b88:
  if (*(int *)(TypeInfo_HumanLoadout + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar8 = System_String__op_Equality
                    (loadout,*(System_String_o **)(*(long *)(TypeInfo_HumanLoadout + 0xb8) + 0x10),
                     (MethodInfo *)0x0);
  if ((char)bVar8 == '\0') {
LAB_03fd6c60:
    iVar7 = *(int *)(TypeInfo_HumanSpecials + 0xe4);
  }
  else {
    pSVar4 = "Stock";
    if (*(int *)(TypeInfo_HumanSpecials + 0xe4) == 0) {
      il2cpp_init_class();
      pSVar4 = "Stock";
    }
    lVar3 = MethodInfo_Void_Add;
    "Stock" = pSVar4;
    if (DAT_05704100 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Void_Add);
      DAT_05704100 = '\x01';
      lVar3 = MethodInfo_Void_Add;
    }
    MethodInfo_Void_Add = lVar3;
    if (__this == (System_Collections_Generic_List_string__o *)0x0) goto LAB_03fd6d81;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this->fields)._items;
    if (pSVar5 == (System_String_array *)0x0) goto LAB_03fd6d81;
    uVar2 = (__this->fields)._size;
    if (uVar2 < (uint)pSVar5->max_length) {
      (__this->fields)._size = uVar2 + 1;
      pSVar5->m_Items[(int)uVar2] = pSVar4;
      il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,pSVar4);
      goto LAB_03fd6c60;
    }
    System_Collections_Generic_List<object>__AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
               *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
    iVar7 = *(int *)(TypeInfo_HumanSpecials + 0xe4);
  }
  pSVar4 = "None";
  if (iVar7 == 0) {
    il2cpp_init_class();
    pSVar4 = "None";
  }
  lVar3 = MethodInfo_Void_Add;
  "None" = pSVar4;
  if (DAT_05704100 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05704100 = '\x01';
    lVar3 = MethodInfo_Void_Add;
  }
  MethodInfo_Void_Add = lVar3;
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this->fields)._items;
    if (pSVar5 != (System_String_array *)0x0) {
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar5->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar5->m_Items[(int)uVar2] = pSVar4;
        il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar2,pSVar4);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar4,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
      }
      return __this;
    }
  }
LAB_03fd6d81:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSpecials$$AddSpecialName
// il2cpp: void Characters_HumanSpecials__AddSpecialName (System_Collections_Generic_List_string__o* specials, System_String_o* special, const MethodInfo* method);
// 0x3fd6d90

void Characters_HumanSpecials__AddSpecialName
               (System_Collections_Generic_List_string__o *specials,System_String_o *special,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_array *pSVar3;
  long lVar4;
  
  if (DAT_05704100 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05704100 = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
  if (specials != (System_Collections_Generic_List_string__o *)0x0) {
    piVar1 = &(specials->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (specials->fields)._items;
    if (pSVar3 != (System_String_array *)0x0) {
      uVar2 = (specials->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (specials->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = special;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,special);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)specials,(Il2CppObject *)special,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSpecials$$GetSpecialUseable
// il2cpp: Characters_BaseUseable_o* Characters_HumanSpecials__GetSpecialUseable (Characters_BaseCharacter_o* owner, System_String_o* special, const MethodInfo* method);
// 0x3fd6e30

Characters_BaseUseable_o *
Characters_HumanSpecials__GetSpecialUseable
          (Characters_BaseCharacter_o *owner,System_String_o *special,MethodInfo *method)

{
  float fVar1;
  undefined8 uVar2;
  void *pvVar3;
  uint32_t uVar4;
  bool_conflict bVar5;
  Characters_StockSpecial_o *__this;
  Characters_BaseHoldAttackSpecial_o *pCVar6;
  Characters_SupplySpecial_o *__this_00;
  Characters_BaseAttackSpecial_c *pCVar7;
  Characters_SwitchbackSpecial_o *__this_01;
  Characters_RechargeableUseable_o *__this_02;
  Characters_SimpleUseable_o *pCVar8;
  Characters_ExtendedUseable_o *__this_03;
  undefined8 *puVar9;
  Characters_BaseAttackSpecial_o *pCVar10;
  Characters_BaseEmoteSpecial_o *pCVar11;
  undefined1 auVar12 [16];
  
  if (DAT_05704101 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AHSSTwinShot);
    il2cpp_init_method_metadata(&TypeInfo_BladeThrowSpecial);
    il2cpp_init_method_metadata(&TypeInfo_CarrySpecial);
    il2cpp_init_method_metadata(&TypeInfo_ConfuseSpecial);
    il2cpp_init_method_metadata(&TypeInfo_DanceSpecial);
    il2cpp_init_method_metadata(&TypeInfo_DistractSpecial);
    il2cpp_init_method_metadata(&TypeInfo_DownStrikeSpecial);
    il2cpp_init_method_metadata(&TypeInfo_EscapeSpecial);
    il2cpp_init_method_metadata(&TypeInfo_NoneSpecial);
    il2cpp_init_method_metadata(&TypeInfo_PotatoSpecial);
    il2cpp_init_method_metadata(&TypeInfo_ShifterTransformSpecial);
    il2cpp_init_method_metadata(&TypeInfo_SmellSpecial);
    il2cpp_init_method_metadata(&TypeInfo_SmokeBombSpecial);
    il2cpp_init_method_metadata(&TypeInfo_Spin1Special);
    il2cpp_init_method_metadata(&TypeInfo_Spin2Special);
    il2cpp_init_method_metadata(&TypeInfo_Spin3Special);
    il2cpp_init_method_metadata(&TypeInfo_StockSpecial);
    il2cpp_init_method_metadata(&TypeInfo_SupplySpecial);
    il2cpp_init_method_metadata(&TypeInfo_SwitchbackSpecial);
    il2cpp_init_method_metadata(&"Eren");
    il2cpp_init_method_metadata(&"BladeThrow");
    il2cpp_init_method_metadata(&"Smell");
    il2cpp_init_method_metadata(&"Spin3");
    il2cpp_init_method_metadata(&"Escape");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Spin2");
    il2cpp_init_method_metadata(&"Annie");
    il2cpp_init_method_metadata(&"Dance");
    il2cpp_init_method_metadata(&"Distract");
    il2cpp_init_method_metadata(&"Confuse");
    il2cpp_init_method_metadata(&"Switchback");
    il2cpp_init_method_metadata(&"SmokeBomb");
    il2cpp_init_method_metadata(&"Armored");
    il2cpp_init_method_metadata(&"Spin1");
    il2cpp_init_method_metadata(&"Potato");
    il2cpp_init_method_metadata(&"Carry");
    il2cpp_init_method_metadata(&"DownStrike");
    il2cpp_init_method_metadata(&"Stock");
    il2cpp_init_method_metadata(&"Supply");
    il2cpp_init_method_metadata(&"AHSSTwinShot");
    DAT_05704101 = '\x01';
  }
  uVar4 = <PrivateImplementationDetails>__ComputeStringHash(special,(MethodInfo *)0x0);
  if (uVar4 < 0x50d88c80) {
    if (uVar4 < 0x132fe373) {
      if (uVar4 < 0x23f06bf) {
        if (uVar4 != 0x3f0398) {
          if (uVar4 != 0x23f06be) {
            return (Characters_BaseUseable_o *)0x0;
          }
          bVar5 = System_String__op_Equality(special,"Spin3",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            auVar12 = il2cpp_runtime_glue(TypeInfo_Spin3Special);
            pCVar10 = auVar12._0_8_;
            pCVar10[1].klass = (Characters_BaseAttackSpecial_c *)0x3f0000003eb33333;
            *(undefined4 *)&pCVar10[1].monitor = 3;
            *(undefined4 *)&pCVar10[1].fields.Name = 0x41500000;
            Characters_BaseAttackSpecial___ctor(pCVar10,owner,auVar12._8_8_);
            (pCVar10->fields).Cooldown = 3.5;
            return (Characters_BaseUseable_o *)pCVar10;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
        bVar5 = System_String__op_Equality(special,"Spin1",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return (Characters_BaseUseable_o *)0x0;
        }
        auVar12 = il2cpp_runtime_glue(TypeInfo_Spin1Special);
        pCVar7 = (Characters_BaseAttackSpecial_c *)0x3f0000003eb33333;
      }
      else {
        if (uVar4 != 0x33f0851) {
          if (uVar4 == 0xfb12e57) {
            bVar5 = System_String__op_Equality(special,"Distract",(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              return (Characters_BaseUseable_o *)0x0;
            }
            auVar12 = il2cpp_runtime_glue(TypeInfo_DistractSpecial);
            *(undefined4 *)(auVar12._0_8_ + 0x48) = 0x43960000;
          }
          else {
            if (uVar4 != 0x132fe372) {
              return (Characters_BaseUseable_o *)0x0;
            }
            bVar5 = System_String__op_Equality(special,"Potato",(MethodInfo *)0x0);
            if ((char)bVar5 == '\0') {
              return (Characters_BaseUseable_o *)0x0;
            }
            auVar12 = il2cpp_runtime_glue(TypeInfo_PotatoSpecial);
          }
          goto LAB_03fd77bd;
        }
        bVar5 = System_String__op_Equality(special,"Spin2",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return (Characters_BaseUseable_o *)0x0;
        }
        auVar12 = il2cpp_runtime_glue(TypeInfo_Spin2Special);
        pCVar7 = (Characters_BaseAttackSpecial_c *)0x3ef5c28f3eb33333;
      }
      pCVar10 = auVar12._0_8_;
      pCVar10[1].klass = pCVar7;
      *(undefined4 *)&pCVar10[1].monitor = 3;
      Characters_BaseAttackSpecial___ctor(pCVar10,owner,auVar12._8_8_);
      (pCVar10->fields).Cooldown = 5.0;
      return (Characters_BaseUseable_o *)pCVar10;
    }
    if (uVar4 < 0x27e47193) {
      if (uVar4 == 0x184b43d0) {
        bVar5 = System_String__op_Equality(special,"Carry",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          auVar12 = il2cpp_runtime_glue(TypeInfo_CarrySpecial);
          pCVar6 = auVar12._0_8_;
          Characters_BaseHoldAttackSpecial___ctor(pCVar6,owner,auVar12._8_8_);
          (pCVar6->fields).Cooldown = 2.0;
          return (Characters_BaseUseable_o *)pCVar6;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar4 != 0x27e47192) {
        return (Characters_BaseUseable_o *)0x0;
      }
      puVar9 = &"Annie";
    }
    else {
      if (uVar4 != 0x2ab69de5) {
        if (uVar4 == 0x304ff7fb) {
          bVar5 = System_String__op_Equality(special,"None",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            pCVar8 = (Characters_SimpleUseable_o *)il2cpp_runtime_glue(TypeInfo_NoneSpecial);
            Characters_SimpleUseable___ctor(pCVar8,owner,(MethodInfo *)0x0);
            (pCVar8->fields).Cooldown = 0.0;
            return (Characters_BaseUseable_o *)pCVar8;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
        if (uVar4 != 0x50d88c7f) {
          return (Characters_BaseUseable_o *)0x0;
        }
        bVar5 = System_String__op_Equality(special,"DownStrike",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          auVar12 = il2cpp_runtime_glue(TypeInfo_DownStrikeSpecial);
          pCVar6 = auVar12._0_8_;
          Characters_BaseHoldAttackSpecial___ctor(pCVar6,owner,auVar12._8_8_);
          (pCVar6->fields).Cooldown = 5.0;
          return (Characters_BaseUseable_o *)pCVar6;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      puVar9 = &"Armored";
    }
  }
  else {
    if (0x9d6edc05 < uVar4) {
      if (0xb7bb7226 < uVar4) {
        if (uVar4 == 0xc7ef102c) {
          bVar5 = System_String__op_Equality(special,"AHSSTwinShot",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            __this_03 = (Characters_ExtendedUseable_o *)il2cpp_runtime_glue(TypeInfo_AHSSTwinShot);
            Characters_ExtendedUseable___ctor(__this_03,owner,(MethodInfo *)0x0);
            (__this_03->fields).Cooldown = 1.0;
            return (Characters_BaseUseable_o *)__this_03;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
        if (uVar4 != 0xca0fab3c) {
          if (uVar4 != 0xdba7f44e) {
            return (Characters_BaseUseable_o *)0x0;
          }
          bVar5 = System_String__op_Equality(special,"Supply",(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            __this_00 = (Characters_SupplySpecial_o *)il2cpp_runtime_glue(TypeInfo_SupplySpecial);
            Characters_SupplySpecial___ctor(__this_00,owner,(MethodInfo *)0x0);
            return (Characters_BaseUseable_o *)__this_00;
          }
          return (Characters_BaseUseable_o *)0x0;
        }
        bVar5 = System_String__op_Equality(special,"Dance",(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          return (Characters_BaseUseable_o *)0x0;
        }
        auVar12 = il2cpp_runtime_glue(TypeInfo_DanceSpecial);
        *(undefined4 *)(auVar12._0_8_ + 0x48) = 0x43480000;
LAB_03fd77bd:
        pCVar11 = auVar12._0_8_;
        Characters_BaseEmoteSpecial___ctor(pCVar11,owner,auVar12._8_8_);
        (pCVar11->fields).Cooldown = 20.0;
        return (Characters_BaseUseable_o *)pCVar11;
      }
      if (uVar4 == 0x9fc581fa) {
        bVar5 = System_String__op_Equality(special,"SmokeBomb",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          pCVar8 = (Characters_SimpleUseable_o *)il2cpp_runtime_glue(TypeInfo_SmokeBombSpecial);
          *(undefined4 *)&pCVar8[1].klass = 0x43160000;
          if (DAT_0570266b == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Vector3);
            DAT_0570266b = '\x01';
          }
          uVar2 = *(undefined8 *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x24);
          fVar1 = *(float *)(*(long *)(TypeInfo_Vector3 + 0xb8) + 0x2c);
          *(ulong *)((long)&pCVar8[1].klass + 4) =
               CONCAT44((float)((ulong)uVar2 >> 0x20) * 15.0,(float)uVar2 * 15.0);
          *(float *)((long)&pCVar8[1].monitor + 4) = fVar1 * 15.0;
          Characters_SimpleUseable___ctor(pCVar8,owner,(MethodInfo *)0x0);
          (pCVar8->fields).Cooldown = 15.0;
          return (Characters_BaseUseable_o *)pCVar8;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar4 == 0xa499f21e) {
        bVar5 = System_String__op_Equality(special,"Confuse",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          auVar12 = il2cpp_runtime_glue(TypeInfo_ConfuseSpecial);
          pCVar11 = auVar12._0_8_;
          *(undefined4 *)&pCVar11[1].klass = 0x437a0000;
          Characters_BaseEmoteSpecial___ctor(pCVar11,owner,auVar12._8_8_);
          (pCVar11->fields).Cooldown = 30.0;
          return (Characters_BaseUseable_o *)pCVar11;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar4 != 0xb7bb7226) {
        return (Characters_BaseUseable_o *)0x0;
      }
      bVar5 = System_String__op_Equality(special,"Escape",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        return (Characters_BaseUseable_o *)0x0;
      }
      __this_02 = (Characters_RechargeableUseable_o *)il2cpp_runtime_glue(TypeInfo_EscapeSpecial);
      Characters_RechargeableUseable___ctor(__this_02,owner,0.0,(MethodInfo *)0x0);
      (__this_02->fields).MaxUses = 1;
      (__this_02->fields).Cooldown = 300.0;
      (__this_02->fields).UsesLeft = -1;
      (__this_02->fields).ReduceCooldownAmount = 50.0;
      goto LAB_03fd76d8;
    }
    if (uVar4 < 0x67c7f536) {
      if (uVar4 == 0x548b671e) {
        bVar5 = System_String__op_Equality(special,"Switchback",(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          __this_01 = (Characters_SwitchbackSpecial_o *)il2cpp_runtime_glue(TypeInfo_SwitchbackSpecial);
          Characters_SwitchbackSpecial___ctor(__this_01,owner,(MethodInfo *)0x0);
          return (Characters_BaseUseable_o *)__this_01;
        }
        return (Characters_BaseUseable_o *)0x0;
      }
      if (uVar4 != 0x67c7f535) {
        return (Characters_BaseUseable_o *)0x0;
      }
      bVar5 = System_String__op_Equality(special,"Stock",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        __this = (Characters_StockSpecial_o *)il2cpp_runtime_glue(TypeInfo_StockSpecial);
        Characters_StockSpecial___ctor(__this,owner,(MethodInfo *)0x0);
        return (Characters_BaseUseable_o *)__this;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
    if (uVar4 == 0x8d87a40b) {
      bVar5 = System_String__op_Equality(special,"BladeThrow",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        auVar12 = il2cpp_runtime_glue(TypeInfo_BladeThrowSpecial);
        pCVar10 = auVar12._0_8_;
        *(undefined8 *)((long)&pCVar10[1].klass + 4) = 0x4000000042a00000;
        Characters_BaseAttackSpecial___ctor(pCVar10,owner,auVar12._8_8_);
        (pCVar10->fields).Cooldown = 1.0;
        return (Characters_BaseUseable_o *)pCVar10;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
    if (uVar4 == 0x960fb720) {
      bVar5 = System_String__op_Equality(special,"Smell",(MethodInfo *)0x0);
      if ((char)bVar5 != '\0') {
        auVar12 = il2cpp_runtime_glue(TypeInfo_SmellSpecial);
        pCVar11 = auVar12._0_8_;
        pCVar11[1].klass = (Characters_BaseEmoteSpecial_c *)0x3f80000044160000;
        Characters_BaseEmoteSpecial___ctor(pCVar11,owner,auVar12._8_8_);
        (pCVar11->fields).Cooldown = 60.0;
        return (Characters_BaseUseable_o *)pCVar11;
      }
      return (Characters_BaseUseable_o *)0x0;
    }
    if (uVar4 != 0x9d6edc05) {
      return (Characters_BaseUseable_o *)0x0;
    }
    puVar9 = &"Eren";
  }
  bVar5 = System_String__op_Equality(special,(System_String_o *)*puVar9,(MethodInfo *)0x0);
  if ((char)bVar5 == '\0') {
    return (Characters_BaseUseable_o *)0x0;
  }
  __this_02 = (Characters_RechargeableUseable_o *)il2cpp_runtime_glue(TypeInfo_ShifterTransformSpecial);
  pvVar3 = (void *)*puVar9;
  *(undefined4 *)&__this_02[1].klass = 0x42700000;
  Characters_RechargeableUseable___ctor(__this_02,owner,0.0,(MethodInfo *)0x0);
  __this_02[1].monitor = pvVar3;
  il2cpp_runtime_glue(&__this_02[1].monitor);
  (__this_02->fields).MaxUses = 1;
  (__this_02->fields).Cooldown = 300.0;
  (__this_02->fields).UsesLeft = -1;
  (__this_02->fields).ReduceCooldownAmount = 20.0;
LAB_03fd76d8:
  Characters_BaseUseable__SetCooldownLeft
            ((Characters_BaseUseable_o *)__this_02,300.0,(MethodInfo *)0x0);
  return (Characters_BaseUseable_o *)__this_02;
}


// Characters.HumanSpecials$$GetSpecialIcon
// il2cpp: System_String_o* Characters_HumanSpecials__GetSpecialIcon (System_String_o* special, const MethodInfo* method);
// 0x3fd7ad0

System_String_o *
Characters_HumanSpecials__GetSpecialIcon(System_String_o *special,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704102 == '\0') {
    il2cpp_init_method_metadata(&"SpecialIcon");
    il2cpp_init_method_metadata(&" ");
    il2cpp_init_method_metadata(&"");
    DAT_05704102 = '\x01';
  }
  if (special != (System_String_o *)0x0) {
    pSVar1 = System_String__Replace(special," ","",(MethodInfo *)0x0);
    pSVar1 = System_String__Concat(pSVar1,"SpecialIcon",(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Characters.HumanSpecials$$.ctor
// il2cpp: void Characters_HumanSpecials___ctor (Characters_HumanSpecials_o* __this, const MethodInfo* method);
// 0x3fd7b50

void Characters_HumanSpecials___ctor(Characters_HumanSpecials_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Characters.HumanSpecials$$.cctor
// il2cpp: void Characters_HumanSpecials___cctor (const MethodInfo* method);
// 0x3fd7b60

void Characters_HumanSpecials___cctor(MethodInfo *method)

{
  long lVar1;
  long lVar2;
  
  if (DAT_05704103 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_HumanSpecials);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Eren");
    il2cpp_init_method_metadata(&"BladeThrow");
    il2cpp_init_method_metadata(&"Smell");
    il2cpp_init_method_metadata(&"Spin3");
    il2cpp_init_method_metadata(&"Escape");
    il2cpp_init_method_metadata(&"Spin2");
    il2cpp_init_method_metadata(&"Annie");
    il2cpp_init_method_metadata(&"Dance");
    il2cpp_init_method_metadata(&"Distract");
    il2cpp_init_method_metadata(&"Confuse");
    il2cpp_init_method_metadata(&"Switchback");
    il2cpp_init_method_metadata(&"SmokeBomb");
    il2cpp_init_method_metadata(&"Spin1");
    il2cpp_init_method_metadata(&"Potato");
    il2cpp_init_method_metadata(&"Carry");
    il2cpp_init_method_metadata(&"DownStrike");
    il2cpp_init_method_metadata(&"Supply");
    il2cpp_init_method_metadata(&"AHSSTwinShot");
    DAT_05704103 = '\x01';
  }
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,10);
  if (lVar2 == 0) goto LAB_03fd7fd1;
  if (*(int *)(lVar2 + 0x18) != 0) {
    *(undefined8 *)(lVar2 + 0x20) = "Potato";
    il2cpp_runtime_glue(lVar2 + 0x20);
    if (1 < *(uint *)(lVar2 + 0x18)) {
      *(undefined8 *)(lVar2 + 0x28) = "Escape";
      il2cpp_runtime_glue(lVar2 + 0x28);
      if (2 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x30) = "Dance";
        il2cpp_runtime_glue(lVar2 + 0x30);
        if (3 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x38) = "Distract";
          il2cpp_runtime_glue(lVar2 + 0x38);
          if (4 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x40) = "Smell";
            il2cpp_runtime_glue(lVar2 + 0x40);
            if (5 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x48) = "Supply";
              il2cpp_runtime_glue(lVar2 + 0x48);
              if (6 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x50) = "SmokeBomb";
                il2cpp_runtime_glue(lVar2 + 0x50);
                if (7 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x58) = "Carry";
                  il2cpp_runtime_glue(lVar2 + 0x58);
                  if (8 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x60) = "Switchback";
                    il2cpp_runtime_glue(lVar2 + 0x60);
                    if (9 < *(uint *)(lVar2 + 0x18)) {
                      *(undefined8 *)(lVar2 + 0x68) = "Confuse";
                      il2cpp_runtime_glue(lVar2 + 0x68);
                      **(long **)(TypeInfo_HumanSpecials + 0xb8) = lVar2;
                      il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_HumanSpecials + 0xb8),lVar2);
                      lVar2 = il2cpp_glue_02274930(TypeInfo_string,1);
                      if (lVar2 == 0) {
LAB_03fd7fd1:
                    /* WARNING: Subroutine does not return */
                        il2cpp_raise_exception();
                      }
                      if (*(int *)(lVar2 + 0x18) != 0) {
                        *(undefined8 *)(lVar2 + 0x20) = "AHSSTwinShot";
                        il2cpp_runtime_glue(lVar2 + 0x20);
                        lVar1 = *(long *)(TypeInfo_HumanSpecials + 0xb8);
                        *(long *)(lVar1 + 8) = lVar2;
                        il2cpp_runtime_glue(lVar1 + 8,lVar2);
                        lVar2 = il2cpp_glue_02274930(TypeInfo_string,5);
                        if (lVar2 == 0) goto LAB_03fd7fd1;
                        if (*(int *)(lVar2 + 0x18) != 0) {
                          *(undefined8 *)(lVar2 + 0x20) = "DownStrike";
                          il2cpp_runtime_glue(lVar2 + 0x20);
                          if (1 < *(uint *)(lVar2 + 0x18)) {
                            *(undefined8 *)(lVar2 + 0x28) = "Spin1";
                            il2cpp_runtime_glue(lVar2 + 0x28);
                            if (2 < *(uint *)(lVar2 + 0x18)) {
                              *(undefined8 *)(lVar2 + 0x30) = "Spin2";
                              il2cpp_runtime_glue(lVar2 + 0x30);
                              if (3 < *(uint *)(lVar2 + 0x18)) {
                                *(undefined8 *)(lVar2 + 0x38) = "Spin3";
                                il2cpp_runtime_glue(lVar2 + 0x38);
                                if (4 < *(uint *)(lVar2 + 0x18)) {
                                  *(undefined8 *)(lVar2 + 0x40) = "BladeThrow";
                                  il2cpp_runtime_glue(lVar2 + 0x40);
                                  lVar1 = *(long *)(TypeInfo_HumanSpecials + 0xb8);
                                  *(long *)(lVar1 + 0x10) = lVar2;
                                  il2cpp_runtime_glue(lVar1 + 0x10,lVar2);
                                  lVar2 = il2cpp_glue_02274930(TypeInfo_string,2);
                                  if (lVar2 == 0) goto LAB_03fd7fd1;
                                  if (*(int *)(lVar2 + 0x18) != 0) {
                                    *(undefined8 *)(lVar2 + 0x20) = "Eren";
                                    il2cpp_runtime_glue(lVar2 + 0x20);
                                    if (1 < *(uint *)(lVar2 + 0x18)) {
                                      *(undefined8 *)(lVar2 + 0x28) = "Annie";
                                      il2cpp_runtime_glue(lVar2 + 0x28);
                                      lVar1 = *(long *)(TypeInfo_HumanSpecials + 0xb8);
                                      *(long *)(lVar1 + 0x18) = lVar2;
                                      il2cpp_runtime_glue(lVar1 + 0x18,lVar2);
                                      lVar2 = *(long *)(TypeInfo_HumanSpecials + 0xb8);
                                      *(undefined8 *)(lVar2 + 0x20) = "Switchback";
                                      il2cpp_runtime_glue(lVar2 + 0x20);
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


