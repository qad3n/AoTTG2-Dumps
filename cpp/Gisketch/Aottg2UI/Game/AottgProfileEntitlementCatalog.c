// Type: Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileEntitlementCatalog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog.<>c__DisplayClass36_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___ctor (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o* __this, const MethodInfo* method);
// 0x41f57d0

void Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog_<>c__DisplayClass36_0___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o
                *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog.<>c__DisplayClass36_0$$<HasRole>b__0
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0___HasRole_b__0 (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o* __this, System_String_o* role, const MethodInfo* method);
// 0x41f57e0

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog_<>c__DisplayClass36_0__<HasRole>b__0
          (Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog___c__DisplayClass36_0_o *__this,
          System_String_o *role,MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__Equals(role,(__this->fields).required,5,(MethodInfo *)0x0);
  return bVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PresetGuildLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel (System_String_o* id, const MethodInfo* method);
// 0x41f1240

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildLabel
          (System_String_o *id,MethodInfo *method)

{
  code *vtable_dispatch;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar2;
  System_String_o *pSVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704f63 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"label");
    il2cpp_init_method_metadata(&"PresetGuilds");
    DAT_05704f63 = '\x01';
    in_RDX = extraout_RDX;
  }
  a = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("PresetGuilds",id,in_RDX);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      plVar2 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                 (a,"label",(a->klass->vtable)._7_get_Item.method);
      if (plVar2 != (long *)0x0) {
        vtable_dispatch = *(code **)(*plVar2 + 0x1c8);
        pSVar3 = (System_String_o *)
                 (*vtable_dispatch)
                           (plVar2,*(undefined8 *)(*plVar2 + 0x1d0),vtable_dispatch);
        return pSVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return id;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$BadgeLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel (System_String_o* id, const MethodInfo* method);
// 0x41f17d0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeLabel
          (System_String_o *id,MethodInfo *method)

{
  code *vtable_dispatch;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar2;
  System_String_o *pSVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704f64 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"Badges");
    il2cpp_init_method_metadata(&"label");
    DAT_05704f64 = '\x01';
    in_RDX = extraout_RDX;
  }
  a = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("Badges",id,in_RDX);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      plVar2 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                 (a,"label",(a->klass->vtable)._7_get_Item.method);
      if (plVar2 != (long *)0x0) {
        vtable_dispatch = *(code **)(*plVar2 + 0x1c8);
        pSVar3 = (System_String_o *)
                 (*vtable_dispatch)
                           (plVar2,*(undefined8 *)(*plVar2 + 0x1d0),vtable_dispatch);
        return pSVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return id;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$BadgeIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon (System_String_o* id, const MethodInfo* method);
// 0x41f18a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__BadgeIcon
          (System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar2;
  System_String_o *pSVar3;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  
  if (DAT_05704f65 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"Badges");
    il2cpp_init_method_metadata(&"UI/Icons/Roles/");
    il2cpp_init_method_metadata(&"id");
    DAT_05704f65 = '\x01';
    in_RDX = extraout_RDX;
  }
  a = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find("Badges",id,in_RDX);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
      plVar2 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                 (a,"id",(a->klass->vtable)._7_get_Item.method);
      if (plVar2 != (long *)0x0) {
        pSVar3 = (System_String_o *)
                 (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        pSVar3 = System_String__Concat("UI/Icons/Roles/",pSVar3,(MethodInfo *)0x0);
        return pSVar3;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (SimpleJSONFixed_JSONNode_o* requested, const MethodInfo* method);
// 0x41e36e0

/* WARNING: Removing unreachable block (ram,0x041e3d20) */

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges
          (SimpleJSONFixed_JSONNode_o *requested,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_String_o *group;
  char cVar3;
  bool_conflict bVar4;
  SimpleJSONFixed_JSONArray_o *__this;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_string__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  System_String_o *id;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar9;
  MethodInfo *method_01;
  long lVar10;
  
  if (DAT_05704f66 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"Badges");
    il2cpp_init_method_metadata(&"id");
    DAT_05704f66 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(requested,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return __this;
  }
  if (requested != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pMVar9 = (requested->klass->vtable)._27_get_Children.method;
    method_00 = (MethodInfo *)(*(requested->klass->vtable)._27_get_Children.methodPtr)(requested);
    __this_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
                          ((System_Collections_Generic_IEnumerable_JSONNode__o *)method_00,pMVar9);
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,"Badges",(pSVar5->klass->vtable)._7_get_Item.method);
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return __this;
    }
    if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar6 = (long *)(*(pSVar5->klass->vtable)._27_get_Children.methodPtr)
                                   (pSVar5,(pSVar5->klass->vtable)._27_get_Children.method),
       plVar6 != (long *)0x0)) {
      lVar2 = *plVar6;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar10 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar10) == TypeInfo_IEnumerable_JSONNode) {
            puVar7 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar10) * 0x10 + lVar2 + 0x138);
            goto LAB_041e38df;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar10);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IEnumerable_JSONNode,0);
LAB_041e38df:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar2 = *plVar6;
        if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
          lVar10 = 0;
          do {
            if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar10) == TypeInfo_IEnumerator) {
              puVar7 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar10) * 0x10 + lVar2 + 0x138)
              ;
              goto LAB_041e3963;
            }
            lVar10 = lVar10 + 0x10;
          } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar10);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IEnumerator,0);
LAB_041e3963:
        cVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (cVar3 == '\0') {
          if (plVar6 == (long *)0x0) {
            return __this;
          }
          lVar2 = *plVar6;
          if ((ulong)*(ushort *)(lVar2 + 0x12e) == 0) goto LAB_041e3c4f;
          lVar10 = 0;
          goto LAB_041e3c40;
        }
        lVar2 = *plVar6;
        if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
          lVar10 = 0;
          do {
            if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar10) == TypeInfo_IEnumerator_JSONNode) {
              puVar7 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar10) * 0x10 + lVar2 + 0x138)
              ;
              goto LAB_041e39d3;
            }
            lVar10 = lVar10 + 0x10;
          } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar10);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IEnumerator_JSONNode,0);
LAB_041e39d3:
        plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        plVar8 = (long *)(**(code **)(*plVar8 + 0x1a8))
                                   (plVar8,"id",*(undefined8 *)(*plVar8 + 0x1b0));
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        id = (System_String_o *)
             (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar4 = System_Collections_Generic_HashSet<object>__Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,
                           (Il2CppObject *)id,MethodInfo_Boolean_Contains);
        group = "Badges";
        if ((char)bVar4 != '\0') {
          pMVar9 = extraout_RDX;
          if (DAT_05704f74 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_JSONNode);
            DAT_05704f74 = '\x01';
            pMVar9 = extraout_RDX_00;
          }
          pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,id,pMVar9);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pMVar9 = (MethodInfo *)0x0;
          bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                            (pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((((char)bVar4 != '\0') &&
              (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed
                                 (pSVar5,pMVar9), (char)bVar4 != '\0')) &&
             (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains
                                (__this,id,method_01), (char)bVar4 == '\0')) {
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(id,(MethodInfo *)0x0);
            if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            (*(__this->klass->vtable)._21_Add.methodPtr)
                      (__this,pSVar5,(__this->klass->vtable)._21_Add.method);
          }
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar10 = lVar10 + 0x10, (ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar10) {
LAB_041e3c40:
    if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar10) == TypeInfo_IDisposable) {
      puVar7 = (undefined8 *)
               (lVar2 + (long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar10) * 0x10 + 0x138);
      goto LAB_041e3c6d;
    }
  }
LAB_041e3c4f:
  puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IDisposable,0);
LAB_041e3c6d:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: SimpleJSONFixed_JSONArray_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (SimpleJSONFixed_JSONNode_o* requested, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x41f2380

/* WARNING: Removing unreachable block (ram,0x041f295e) */

SimpleJSONFixed_JSONArray_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges
          (SimpleJSONFixed_JSONNode_o *requested,
          System_Collections_Generic_IEnumerable_string__o *roles,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  char cVar3;
  bool_conflict bVar4;
  SimpleJSONFixed_JSONArray_o *__this;
  MethodInfo *method_00;
  System_Collections_Generic_HashSet_string__o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  System_String_o *value;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  long lVar9;
  
  if (DAT_05704f67 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONArray);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"Badges");
    il2cpp_init_method_metadata(&"id");
    DAT_05704f67 = '\x01';
  }
  __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_glue(TypeInfo_JSONArray);
  SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(requested,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return __this;
  }
  if (requested != (SimpleJSONFixed_JSONNode_o *)0x0) {
    method_03 = (requested->klass->vtable)._27_get_Children.method;
    method_00 = (MethodInfo *)(*(requested->klass->vtable)._27_get_Children.methodPtr)(requested);
    __this_00 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
                          ((System_Collections_Generic_IEnumerable_JSONNode__o *)method_00,method_03
                          );
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,"Badges",(pSVar5->klass->vtable)._7_get_Item.method);
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return __this;
    }
    if ((pSVar5 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar6 = (long *)(*(pSVar5->klass->vtable)._27_get_Children.methodPtr)
                                   (pSVar5,(pSVar5->klass->vtable)._27_get_Children.method),
       plVar6 != (long *)0x0)) {
      lVar2 = *plVar6;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar9 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar9) == TypeInfo_IEnumerable_JSONNode) {
            puVar7 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar9) * 0x10 + lVar2 + 0x138);
            goto LAB_041f2578;
          }
          lVar9 = lVar9 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar9);
      }
      puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IEnumerable_JSONNode,0);
LAB_041f2578:
      plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
      if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar2 = *plVar6;
        if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
          lVar9 = 0;
          do {
            if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar9) == TypeInfo_IEnumerator) {
              puVar7 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar9) * 0x10 + lVar2 + 0x138);
              goto LAB_041f2603;
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar9);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IEnumerator,0);
LAB_041f2603:
        cVar3 = (*(code *)*puVar7)(plVar6,puVar7[1]);
        if (cVar3 == '\0') {
          if (plVar6 == (long *)0x0) {
            return __this;
          }
          lVar2 = *plVar6;
          if ((ulong)*(ushort *)(lVar2 + 0x12e) == 0) goto LAB_041f288f;
          lVar9 = 0;
          goto LAB_041f2880;
        }
        lVar2 = *plVar6;
        if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
          lVar9 = 0;
          do {
            if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar9) == TypeInfo_IEnumerator_JSONNode) {
              puVar7 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar9) * 0x10 + lVar2 + 0x138);
              goto LAB_041f2673;
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar9);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IEnumerator_JSONNode,0);
LAB_041f2673:
        pSVar5 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        plVar8 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar5,"id",(pSVar5->klass->vtable)._7_get_Item.method);
        if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        value = (System_String_o *)
                (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
        if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar4 = System_Collections_Generic_HashSet<object>__Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this_00,
                           (Il2CppObject *)value,MethodInfo_Boolean_Contains);
        if ((((char)bVar4 != '\0') &&
            (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed
                               (pSVar5,roles,method_01), (char)bVar4 != '\0')) &&
           (bVar4 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains
                              (__this,value,method_02), (char)bVar4 == '\0')) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(value,(MethodInfo *)0x0);
          if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          (*(__this->klass->vtable)._21_Add.methodPtr)
                    (__this,pSVar5,(__this->klass->vtable)._21_Add.method);
        }
      } while( true );
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
  while (lVar9 = lVar9 + 0x10, (ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar9) {
LAB_041f2880:
    if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar9) == TypeInfo_IDisposable) {
      puVar7 = (undefined8 *)
               (lVar2 + (long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar9) * 0x10 + 0x138);
      goto LAB_041f28ad;
    }
  }
LAB_041f288f:
  puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IDisposable,0);
LAB_041f28ad:
  (*(code *)*puVar7)(plVar6,puVar7[1]);
  return __this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$OrderedBadgeIds
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds (System_Collections_Generic_IEnumerable_string__o* requested, const MethodInfo* method);
// 0x41e1bf0

/* WARNING: Removing unreachable block (ram,0x041e2233) */
/* WARNING: Type propagation algorithm not settling */

System_String_array *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__OrderedBadgeIds
          (System_Collections_Generic_IEnumerable_string__o *requested,MethodInfo *method)

{
  int32_t *piVar1;
  byte bVar2;
  int iVar3;
  uint uVar4;
  System_Object_array *pSVar5;
  char cVar6;
  bool_conflict bVar7;
  System_Collections_Generic_HashSet_string__o *__this;
  MethodInfo *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  long *plVar9;
  undefined8 *puVar10;
  long lVar11;
  long *plVar12;
  Il2CppObject *item;
  System_String_array *pSVar13;
  MethodInfo *method_00;
  long lVar14;
  
  if (DAT_05704f68 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String___Empty_String);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&"Badges");
    il2cpp_init_method_metadata(&"id");
    DAT_05704f68 = '\x01';
  }
  lVar11 = MethodInfo_String___Empty_String;
  if (requested == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
    if (*(long *)(MethodInfo_String___Empty_String + 0x38) == 0) {
      il2cpp_glue_022c2910(MethodInfo_String___Empty_String);
      lVar14 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar14 + 0x135);
    }
    else {
      lVar14 = *(long *)(*(long *)(MethodInfo_String___Empty_String + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar14 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar14 = il2cpp_glue_022c28b0();
      iVar3 = *(int *)(lVar14 + 0xe4);
    }
    else {
      iVar3 = *(int *)(lVar14 + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
      lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar11 + 0x135);
    }
    else {
      lVar11 = *(long *)(*(long *)(lVar11 + 0x38) + 0x10);
      bVar2 = *(byte *)(lVar11 + 0x135);
    }
    if ((bVar2 & 1) == 0) {
      lVar11 = il2cpp_glue_022c28b0(lVar11);
    }
    return (System_String_array *)**(undefined8 **)(lVar11 + 0xb8);
  }
  __this = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet(requested,method);
  __this_00 = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_List_string);
  method_00 = __this_00;
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_System_String);
  pSVar8 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
  if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    pSVar8 = (SimpleJSONFixed_JSONNode_o *)
             (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar8,"Badges",(pSVar8->klass->vtable)._7_get_Item.method);
    iVar3 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Equality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar7 == '\0') {
    if ((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar9 = (long *)(*(pSVar8->klass->vtable)._27_get_Children.methodPtr)
                                   (pSVar8,(pSVar8->klass->vtable)._27_get_Children.method),
       plVar9 != (long *)0x0)) {
      lVar11 = *plVar9;
      if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
        lVar14 = 0;
        do {
          if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IEnumerable_JSONNode) {
            puVar10 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) * 0x10 + lVar11 + 0x138
                      );
            goto LAB_041e1e83;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14);
      }
      puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerable_JSONNode,0);
LAB_041e1e83:
      plVar9 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
      if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
              puVar10 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) * 0x10 + lVar11 +
                        0x138);
              goto LAB_041e1f23;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator,0);
LAB_041e1f23:
        cVar6 = (*(code *)*puVar10)(plVar9,puVar10[1]);
        if (cVar6 == '\0') {
          if (plVar9 == (long *)0x0) goto LAB_041e2183;
          lVar11 = *plVar9;
          if ((ulong)*(ushort *)(lVar11 + 0x12e) == 0) goto LAB_041e214f;
          lVar14 = 0;
          goto LAB_041e2140;
        }
        lVar11 = *plVar9;
        if ((ulong)*(ushort *)(lVar11 + 0x12e) != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IEnumerator_JSONNode) {
              puVar10 = (undefined8 *)
                        ((long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) * 0x10 + lVar11 +
                        0x138);
              goto LAB_041e1f93;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14);
        }
        puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IEnumerator_JSONNode,0);
LAB_041e1f93:
        plVar12 = (long *)(*(code *)*puVar10)(plVar9,puVar10[1]);
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        plVar12 = (long *)(**(code **)(*plVar12 + 0x1a8))
                                    (plVar12,"id",*(undefined8 *)(*plVar12 + 0x1b0));
        if (plVar12 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        item = (Il2CppObject *)
               (**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
        if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        bVar7 = System_Collections_Generic_HashSet<object>__Contains
                          ((System_Collections_Generic_HashSet_object__o *)__this,item,MethodInfo_Boolean_Contains)
        ;
        lVar11 = MethodInfo_Void_Add;
        if ((char)bVar7 != '\0') {
          if (__this_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          piVar1 = (int32_t *)((long)&__this_00->name + 4);
          *piVar1 = *piVar1 + 1;
          pSVar5 = ((System_Collections_Generic_List_object__Fields *)&__this_00->invoker_method)->
                   _items;
          if (pSVar5 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          uVar4 = *(uint *)&__this_00->name;
          if (uVar4 < (uint)pSVar5->max_length) {
            *(uint *)&__this_00->name = uVar4 + 1;
            pSVar5->m_Items[(int)uVar4] = item;
            il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4,item);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_00,item,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar11 + 0x20) + 0xc0) + 0x70));
          }
        }
      } while( true );
    }
    goto LAB_041e222e;
  }
  goto LAB_041e2183;
  while (lVar14 = lVar14 + 0x10, (ulong)*(ushort *)(lVar11 + 0x12e) << 4 != lVar14) {
LAB_041e2140:
    if (*(long *)(*(long *)(lVar11 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
      puVar10 = (undefined8 *)
                (lVar11 + (long)*(int *)(*(long *)(lVar11 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
      goto LAB_041e216d;
    }
  }
LAB_041e214f:
  puVar10 = (undefined8 *)il2cpp_runtime_glue(plVar9,TypeInfo_IDisposable,0);
LAB_041e216d:
  (*(code *)*puVar10)(plVar9,puVar10[1]);
LAB_041e2183:
  if (__this_00 != (MethodInfo *)0x0) {
    pSVar13 = (System_String_array *)
              System_Collections_Generic_List<object>__ToArray
                        ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_String___ToArray);
    return pSVar13;
  }
LAB_041e222e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedPresetGuild
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild (System_String_o* id, const MethodInfo* method);
// 0x41f3220

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuild
          (System_String_o *id,MethodInfo *method)

{
  System_String_o *group;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONString_o *__this;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05704f69 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNull);
    il2cpp_init_method_metadata(&TypeInfo_JSONString);
    il2cpp_init_method_metadata(&"PresetGuilds");
    DAT_05704f69 = '\x01';
    in_RDX = extraout_RDX;
  }
  group = "PresetGuilds";
  if (DAT_05704f74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704f74 = '\x01';
    in_RDX = extraout_RDX_00;
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,id,in_RDX);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed(pSVar2,method_00);
    if ((char)bVar1 != '\0') {
      __this = (SimpleJSONFixed_JSONString_o *)il2cpp_runtime_glue(TypeInfo_JSONString);
      SimpleJSONFixed_JSONString___ctor(__this,id,(MethodInfo *)0x0);
      return (SimpleJSONFixed_JSONNode_o *)__this;
    }
  }
  if (*(int *)(TypeInfo_JSONNull + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)SimpleJSONFixed_JSONNull__CreateOrGet((MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsSupporter
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsSupporter (const MethodInfo* method);
// 0x41f3320

bool_conflict Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsSupporter(MethodInfo *method)

{
  int iVar1;
  char cVar2;
  bool_conflict bVar3;
  MethodInfo *method_00;
  MethodInfo *in_RSI;
  
  if (DAT_05704f6a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&"active_patron");
    il2cpp_init_method_metadata(&"patronStatus");
    DAT_05704f6a = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  else {
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    cVar2 = (char)bVar3;
  }
  if (cVar2 != '\0') {
    method_00 = (MethodInfo *)
                Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue
                          ("patronStatus",in_RSI);
    bVar3 = System_String__Equals((System_String_o *)method_00,"active_patron",5,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      bVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier(method_00);
      return bVar3;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedPresetGuilds
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuilds (const MethodInfo* method);
// 0x41f3660

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedPresetGuilds(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (DAT_05704f6b == '\0') {
    il2cpp_init_method_metadata(&"PresetGuilds");
    DAT_05704f6b = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions
                     ("PresetGuilds",in_RSI);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisiblePresetGuilds
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisiblePresetGuilds (const MethodInfo* method);
// 0x41e48c0

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisiblePresetGuilds(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (DAT_05704f6c == '\0') {
    il2cpp_init_method_metadata(&"PresetGuilds");
    DAT_05704f6c = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions
                     ("PresetGuilds",in_RSI);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges (const MethodInfo* method);
// 0x41f4210

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedBadges(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (DAT_05704f6d == '\0') {
    il2cpp_init_method_metadata(&"Badges");
    DAT_05704f6d = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions
                     ("Badges",in_RSI);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleBadges
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges (const MethodInfo* method);
// 0x41e3370

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleBadges(MethodInfo *method)

{
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *pSVar1;
  MethodInfo *in_RSI;
  
  if (DAT_05704f6e == '\0') {
    il2cpp_init_method_metadata(&"Badges");
    DAT_05704f6e = '\x01';
  }
  pSVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions
                     ("Badges",in_RSI);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PresetGuildIdForLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildIdForLabel (System_String_o* label, const MethodInfo* method);
// 0x41f4240

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PresetGuildIdForLabel
          (System_String_o *label,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  bool_conflict bVar1;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this_02;
  MethodInfo *method_00;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  undefined1 local_50 [16];
  System_String_o *local_40;
  System_String_o *pSStack_38;
  
  if (DAT_05704f6f == '\0') {
    il2cpp_init_method_metadata(&"PresetGuilds");
    DAT_05704f6f = '\x01';
  }
  pSVar2 = "PresetGuilds";
  method_00 = (MethodInfo *)label;
  if (DAT_05704f73 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AottgProfileEntitlementOption_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Game_Aott);
    DAT_05704f73 = '\x01';
  }
  __this_02 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions
                        (pSVar2,method_00);
  if (__this_02 != (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
    System_Collections_Generic_List<AottgProfileEntitlementOption>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_50,__this_02,MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Game_Aott);
    do {
      pSVar2 = local_40;
      __this.fields._8_8_ = local_50._8_8_;
      __this.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
      __this.fields._current = (Il2CppObject *)pSVar2;
      bVar1 = System_Collections_Generic_List_Enumerator<AottgProfileEntitlementOption>__MoveNext
                        (__this,(MethodInfo_317AAD0 *)&stack0xffffffffffffff78);
      if ((char)bVar1 == '\0') {
        __this_01.fields._8_8_ = local_50._8_8_;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
        __this_01.fields._current = (Il2CppObject *)pSVar2;
        System_Collections_Generic_List_Enumerator<AottgProfileEntitlementOption>__Dispose
                  (__this_01,(MethodInfo_317AAC0 *)&stack0xffffffffffffff78);
        return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      pSVar3 = pSVar2;
      bVar1 = System_String__Equals(pSStack_38,label,5,(MethodInfo *)0x0);
      local_40 = pSVar3;
    } while ((char)bVar1 == '\0');
    __this_00.fields._8_8_ = local_50._8_8_;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)local_50._0_8_;
    __this_00.fields._current = (Il2CppObject *)pSVar3;
    System_Collections_Generic_List_Enumerator<AottgProfileEntitlementOption>__Dispose
              (__this_00,(MethodInfo_317AAC0 *)&stack0xffffffffffffff78);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedOptions
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions (System_String_o* group, const MethodInfo* method);
// 0x41f3690

/* WARNING: Removing unreachable block (ram,0x041f3c60) */

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions
          (System_String_o *group,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *pGVar3;
  int iVar4;
  uint uVar5;
  long lVar6;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *pGVar7;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o item;
  char cVar8;
  bool_conflict bVar9;
  MethodInfo *__this;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  long *plVar11;
  undefined8 *puVar12;
  long *plVar13;
  MethodInfo *pMVar14;
  long lVar15;
  MethodInfo *in_R8;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  bool_conflict bStack_40;
  undefined4 uStack_3c;
  
  if (DAT_05704f70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfileEntitl);
    il2cpp_init_method_metadata(&TypeInfo_List_AottgProfileEntitlementOption);
    il2cpp_init_method_metadata(&"id");
    DAT_05704f70 = '\x01';
  }
  __this = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_List_AottgProfileEntitlementOption);
  pMVar14 = __this;
  System_Collections_Generic_List<AottgProfileEntitlementOption>___ctor
            ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfileEntitl
            );
  pSVar10 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(pMVar14);
  if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar4 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar10,group,(pSVar10->klass->vtable)._7_get_Item.method);
    iVar4 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
  }
  bVar9 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
  }
  if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (plVar11 = (long *)(*(pSVar10->klass->vtable)._27_get_Children.methodPtr)
                                  (pSVar10,(pSVar10->klass->vtable)._27_get_Children.method),
     plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar6 = *plVar11;
  if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
    lVar15 = 0;
    do {
      if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IEnumerable_JSONNode) {
        puVar12 = (undefined8 *)
                  ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + lVar6 + 0x138);
        goto LAB_041f383f;
      }
      lVar15 = lVar15 + 0x10;
    } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
  }
  puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IEnumerable_JSONNode,0);
LAB_041f383f:
  plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar6 = *plVar11;
    if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IEnumerator) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + lVar6 + 0x138);
          goto LAB_041f3903;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IEnumerator,0);
LAB_041f3903:
    cVar8 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if (cVar8 == '\0') {
      if (plVar11 == (long *)0x0) {
        return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
      }
      lVar6 = *plVar11;
      if ((ulong)*(ushort *)(lVar6 + 0x12e) == 0) goto LAB_041f3b8f;
      lVar15 = 0;
      break;
    }
    lVar6 = *plVar11;
    if ((ulong)*(ushort *)(lVar6 + 0x12e) != 0) {
      lVar15 = 0;
      do {
        if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IEnumerator_JSONNode) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + lVar6 + 0x138);
          goto LAB_041f3973;
        }
        lVar15 = lVar15 + 0x10;
      } while ((ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IEnumerator_JSONNode,0);
LAB_041f3973:
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar12)(plVar11,puVar12[1]);
    if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    plVar13 = (long *)(*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                                (pSVar10,"id",(pSVar10->klass->vtable)._7_get_Item.method);
    if (plVar13 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pMVar14 = *(MethodInfo **)(*plVar13 + 0x1d0);
    (**(code **)(*plVar13 + 0x1c8))(plVar13);
    bVar9 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed(pSVar10,pMVar14);
    if ((char)bVar9 != '\0') {
      Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option(&local_78,group,pSVar10,1,in_R8)
      ;
      lVar6 = MethodInfo_Void_Add;
      local_58 = local_78.fields.Id._0_4_;
      uStack_54 = local_78.fields.Id._4_4_;
      uStack_50 = local_78.fields.Label._0_4_;
      uStack_4c = local_78.fields.Label._4_4_;
      local_48 = local_78.fields.Icon._0_4_;
      uStack_44 = local_78.fields.Icon._4_4_;
      bStack_40 = local_78.fields.Enabled;
      uStack_3c = local_78.fields._28_4_;
      if (__this == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = (int32_t *)((long)&__this->name + 4);
      *piVar1 = *piVar1 + 1;
      pGVar7 = ((System_Collections_Generic_List_AottgProfileEntitlementOption__Fields *)
               &__this->invoker_method)->_items;
      if (pGVar7 == (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar5 = *(uint *)&__this->name;
      if (uVar5 < (uint)pGVar7->max_length) {
        *(uint *)&__this->name = uVar5 + 1;
        ppSVar2 = &pGVar7->m_Items[(int)uVar5].fields.Icon;
        *(undefined4 *)ppSVar2 = local_78.fields.Icon._0_4_;
        *(undefined4 *)((long)ppSVar2 + 4) = local_78.fields.Icon._4_4_;
        *(bool_conflict *)(ppSVar2 + 1) = local_78.fields.Enabled;
        *(undefined4 *)((long)ppSVar2 + 0xc) = local_78.fields._28_4_;
        pGVar3 = pGVar7->m_Items + (int)uVar5;
        *(undefined4 *)&(pGVar3->fields).Id = local_78.fields.Id._0_4_;
        *(undefined4 *)((long)&(pGVar3->fields).Id + 4) = local_78.fields.Id._4_4_;
        *(undefined4 *)&(pGVar3->fields).Label = local_78.fields.Label._0_4_;
        *(undefined4 *)((long)&(pGVar3->fields).Label + 4) = local_78.fields.Label._4_4_;
        il2cpp_runtime_glue(pGVar7->m_Items + (int)uVar5,0);
      }
      else {
        item.fields.Id._4_4_ = local_78.fields.Id._4_4_;
        item.fields.Id._0_4_ = local_78.fields.Id._0_4_;
        item.fields.Label._4_4_ = local_78.fields.Label._4_4_;
        item.fields.Label._0_4_ = local_78.fields.Label._0_4_;
        item.fields.Icon._4_4_ = local_78.fields.Icon._4_4_;
        item.fields.Icon._0_4_ = local_78.fields.Icon._0_4_;
        item.fields._28_4_ = local_78.fields._28_4_;
        item.fields.Enabled = local_78.fields.Enabled;
        System_Collections_Generic_List<AottgProfileEntitlementOption>__AddWithResize
                  ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,item,
                   *(MethodInfo_34EC290 **)(*(long *)(*(long *)(lVar6 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while (lVar15 = lVar15 + 0x10, (ulong)*(ushort *)(lVar6 + 0x12e) << 4 != lVar15) {
    if (*(long *)(*(long *)(lVar6 + 0xb0) + lVar15) == TypeInfo_IDisposable) {
      puVar12 = (undefined8 *)
                (lVar6 + (long)*(int *)(*(long *)(lVar6 + 0xb0) + 8 + lVar15) * 0x10 + 0x138);
      goto LAB_041f3bad;
    }
  }
LAB_041f3b8f:
  puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IDisposable,0);
LAB_041f3bad:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleOptions
// il2cpp: System_Collections_Generic_List_AottgProfileEntitlementOption__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions (System_String_o* group, const MethodInfo* method);
// 0x41f3c80

/* WARNING: Removing unreachable block (ram,0x041f41f0) */

System_Collections_Generic_List_AottgProfileEntitlementOption__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleOptions
          (System_String_o *group,MethodInfo *method)

{
  int32_t *piVar1;
  System_String_o **ppSVar2;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *pGVar3;
  int iVar4;
  long lVar5;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *pGVar6;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o item;
  char cVar7;
  bool_conflict bVar8;
  uint uVar9;
  MethodInfo *__this;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  long *plVar11;
  undefined8 *puVar12;
  MethodInfo *pMVar13;
  long lVar14;
  MethodInfo *in_R8;
  Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o local_78;
  undefined4 local_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 local_48;
  undefined4 uStack_44;
  bool_conflict bStack_40;
  undefined4 uStack_3c;
  
  if (DAT_05704f71 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfileEntitl);
    il2cpp_init_method_metadata(&TypeInfo_List_AottgProfileEntitlementOption);
    DAT_05704f71 = '\x01';
  }
  __this = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_List_AottgProfileEntitlementOption);
  pMVar13 = __this;
  System_Collections_Generic_List<AottgProfileEntitlementOption>___ctor
            ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfileEntitl
            );
  pSVar10 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(pMVar13);
  if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
    iVar4 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  else {
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar10,group,(pSVar10->klass->vtable)._7_get_Item.method);
    iVar4 = *(int *)(TypeInfo_JSONNode + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
  }
  bVar8 = SimpleJSONFixed_JSONNode__op_Equality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar8 != '\0') {
    return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
  }
  if ((pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (plVar11 = (long *)(*(pSVar10->klass->vtable)._27_get_Children.methodPtr)
                                  (pSVar10,(pSVar10->klass->vtable)._27_get_Children.method),
     plVar11 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar5 = *plVar11;
  if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
    lVar14 = 0;
    do {
      if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar14) == TypeInfo_IEnumerable_JSONNode) {
        puVar12 = (undefined8 *)
                  ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar14) * 0x10 + lVar5 + 0x138);
        goto LAB_041f3e1f;
      }
      lVar14 = lVar14 + 0x10;
    } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar14);
  }
  puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IEnumerable_JSONNode,0);
LAB_041f3e1f:
  plVar11 = (long *)(*(code *)*puVar12)(plVar11,puVar12[1]);
  if (plVar11 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar5 = *plVar11;
    if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar14) * 0x10 + lVar5 + 0x138);
          goto LAB_041f3ed3;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar14);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IEnumerator,0);
LAB_041f3ed3:
    cVar7 = (*(code *)*puVar12)(plVar11,puVar12[1]);
    if (cVar7 == '\0') {
      if (plVar11 == (long *)0x0) {
        return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
      }
      lVar5 = *plVar11;
      if ((ulong)*(ushort *)(lVar5 + 0x12e) == 0) goto LAB_041f411f;
      lVar14 = 0;
      break;
    }
    lVar5 = *plVar11;
    if ((ulong)*(ushort *)(lVar5 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar14) == TypeInfo_IEnumerator_JSONNode) {
          puVar12 = (undefined8 *)
                    ((long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar14) * 0x10 + lVar5 + 0x138);
          goto LAB_041f3f43;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar14);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IEnumerator_JSONNode,0);
LAB_041f3f43:
    pMVar13 = (MethodInfo *)puVar12[1];
    pSVar10 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar12)(plVar11);
    uVar9 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed(pSVar10,pMVar13);
    if (((char)uVar9 != '\0') ||
       ((bVar8 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement
                           (pSVar10,pMVar13), (char)bVar8 != '\0' &&
        (bVar8 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement
                           (pSVar10,pMVar13), (char)bVar8 == '\0')))) {
      Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option
                (&local_78,group,pSVar10,uVar9 & 0xff,in_R8);
      lVar5 = MethodInfo_Void_Add;
      local_58 = local_78.fields.Id._0_4_;
      uStack_54 = local_78.fields.Id._4_4_;
      uStack_50 = local_78.fields.Label._0_4_;
      uStack_4c = local_78.fields.Label._4_4_;
      local_48 = local_78.fields.Icon._0_4_;
      uStack_44 = local_78.fields.Icon._4_4_;
      bStack_40 = local_78.fields.Enabled;
      uStack_3c = local_78.fields._28_4_;
      if (__this == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      piVar1 = (int32_t *)((long)&__this->name + 4);
      *piVar1 = *piVar1 + 1;
      pGVar6 = ((System_Collections_Generic_List_AottgProfileEntitlementOption__Fields *)
               &__this->invoker_method)->_items;
      if (pGVar6 == (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_array *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar9 = *(uint *)&__this->name;
      if (uVar9 < (uint)pGVar6->max_length) {
        *(uint *)&__this->name = uVar9 + 1;
        ppSVar2 = &pGVar6->m_Items[(int)uVar9].fields.Icon;
        *(undefined4 *)ppSVar2 = local_78.fields.Icon._0_4_;
        *(undefined4 *)((long)ppSVar2 + 4) = local_78.fields.Icon._4_4_;
        *(bool_conflict *)(ppSVar2 + 1) = local_78.fields.Enabled;
        *(undefined4 *)((long)ppSVar2 + 0xc) = local_78.fields._28_4_;
        pGVar3 = pGVar6->m_Items + (int)uVar9;
        *(undefined4 *)&(pGVar3->fields).Id = local_78.fields.Id._0_4_;
        *(undefined4 *)((long)&(pGVar3->fields).Id + 4) = local_78.fields.Id._4_4_;
        *(undefined4 *)&(pGVar3->fields).Label = local_78.fields.Label._0_4_;
        *(undefined4 *)((long)&(pGVar3->fields).Label + 4) = local_78.fields.Label._4_4_;
        il2cpp_runtime_glue(pGVar6->m_Items + (int)uVar9,0);
      }
      else {
        item.fields.Id._4_4_ = local_78.fields.Id._4_4_;
        item.fields.Id._0_4_ = local_78.fields.Id._0_4_;
        item.fields.Label._4_4_ = local_78.fields.Label._4_4_;
        item.fields.Label._0_4_ = local_78.fields.Label._0_4_;
        item.fields.Icon._4_4_ = local_78.fields.Icon._4_4_;
        item.fields.Icon._0_4_ = local_78.fields.Icon._0_4_;
        item.fields._28_4_ = local_78.fields._28_4_;
        item.fields.Enabled = local_78.fields.Enabled;
        System_Collections_Generic_List<AottgProfileEntitlementOption>__AddWithResize
                  ((System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this,item,
                   *(MethodInfo_34EC290 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
    }
  } while( true );
  while (lVar14 = lVar14 + 0x10, (ulong)*(ushort *)(lVar5 + 0x12e) << 4 != lVar14) {
    if (*(long *)(*(long *)(lVar5 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
      puVar12 = (undefined8 *)
                (lVar5 + (long)*(int *)(*(long *)(lVar5 + 0xb0) + 8 + lVar14) * 0x10 + 0x138);
      goto LAB_041f413d;
    }
  }
LAB_041f411f:
  puVar12 = (undefined8 *)il2cpp_runtime_glue(plVar11,TypeInfo_IDisposable,0);
LAB_041f413d:
  (*(code *)*puVar12)(plVar11,puVar12[1]);
  return (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Option
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option (System_String_o* group, SimpleJSONFixed_JSONNode_o* item, bool enabled, const MethodInfo* method);
// 0x41f44d0

Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Option
          (Gisketch_Aottg2UI_Game_AottgProfileEntitlementOption_o *__return_storage_ptr__,
          System_String_o *group,SimpleJSONFixed_JSONNode_o *item,bool_conflict enabled,
          MethodInfo *method)

{
  bool_conflict bVar1;
  long *plVar2;
  System_String_o *str1;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704f72 == '\0') {
    il2cpp_init_method_metadata(&"Badges");
    il2cpp_init_method_metadata(&"UI/Icons/Roles/");
    il2cpp_init_method_metadata(&"label");
    il2cpp_init_method_metadata(&"id");
    DAT_05704f72 = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    plVar2 = (long *)(*(item->klass->vtable)._7_get_Item.methodPtr)
                               (item,"id",(item->klass->vtable)._7_get_Item.method);
    if (plVar2 != (long *)0x0) {
      str1 = (System_String_o *)
             (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
      plVar2 = (long *)(*(item->klass->vtable)._7_get_Item.methodPtr)
                                 (item,"label",(item->klass->vtable)._7_get_Item.method);
      if (plVar2 != (long *)0x0) {
        pSVar3 = (System_String_o *)
                 (**(code **)(*plVar2 + 0x1c8))(plVar2,*(undefined8 *)(*plVar2 + 0x1d0));
        bVar1 = System_String__op_Equality(group,"Badges",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          pSVar4 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        }
        else {
          pSVar4 = System_String__Concat("UI/Icons/Roles/",str1,(MethodInfo *)0x0);
        }
        (__return_storage_ptr__->fields).Label = (System_String_o *)0x0;
        (__return_storage_ptr__->fields).Icon = (System_String_o *)0x0;
        *(undefined8 *)&(__return_storage_ptr__->fields).Enabled = 0;
        (__return_storage_ptr__->fields).Id = str1;
        il2cpp_runtime_glue(__return_storage_ptr__,str1);
        (__return_storage_ptr__->fields).Label = pSVar3;
        il2cpp_runtime_glue(&(__return_storage_ptr__->fields).Label,pSVar3);
        (__return_storage_ptr__->fields).Icon = pSVar4;
        il2cpp_runtime_glue(&(__return_storage_ptr__->fields).Icon,pSVar4);
        *(char *)&(__return_storage_ptr__->fields).Enabled = (char)enabled;
        return __return_storage_ptr__;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdForLabel
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdForLabel (System_String_o* group, System_String_o* label, const MethodInfo* method);
// 0x41f4270

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdForLabel
          (System_String_o *group,System_String_o *label,MethodInfo *method)

{
  System_Collections_Generic_List_Enumerator_T__o __this;
  System_Collections_Generic_List_Enumerator_T__o __this_00;
  System_Collections_Generic_List_Enumerator_T__o __this_01;
  bool_conflict bVar1;
  System_Collections_Generic_List_AottgProfileEntitlementOption__o *__this_02;
  MethodInfo *method_00;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  undefined1 auStack_50 [16];
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  
  method_00 = (MethodInfo *)label;
  if (DAT_05704f73 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_AottgProfileEntitlementOption_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Game_Aott);
    DAT_05704f73 = '\x01';
  }
  __this_02 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__AllowedOptions(group,method_00)
  ;
  if (__this_02 != (System_Collections_Generic_List_AottgProfileEntitlementOption__o *)0x0) {
    System_Collections_Generic_List<AottgProfileEntitlementOption>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_50,__this_02,MethodInfo_List_1_T__Enumerator_Gisketch_Aottg2UI_Game_Aott)
    ;
    do {
      pSVar2 = pSStack_40;
      __this.fields._8_8_ = auStack_50._8_8_;
      __this.fields._list = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
      __this.fields._current = (Il2CppObject *)pSVar2;
      bVar1 = System_Collections_Generic_List_Enumerator<AottgProfileEntitlementOption>__MoveNext
                        (__this,(MethodInfo_317AAD0 *)&stack0xffffffffffffff78);
      if ((char)bVar1 == '\0') {
        __this_01.fields._8_8_ = auStack_50._8_8_;
        __this_01.fields._list = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
        __this_01.fields._current = (Il2CppObject *)pSVar2;
        System_Collections_Generic_List_Enumerator<AottgProfileEntitlementOption>__Dispose
                  (__this_01,(MethodInfo_317AAC0 *)&stack0xffffffffffffff78);
        return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      pSVar3 = pSVar2;
      bVar1 = System_String__Equals(pSStack_38,label,5,(MethodInfo *)0x0);
      pSStack_40 = pSVar3;
    } while ((char)bVar1 == '\0');
    __this_00.fields._8_8_ = auStack_50._8_8_;
    __this_00.fields._list = (System_Collections_Generic_List_T__o *)auStack_50._0_8_;
    __this_00.fields._current = (Il2CppObject *)pSVar3;
    System_Collections_Generic_List_Enumerator<AottgProfileEntitlementOption>__Dispose
              (__this_00,(MethodInfo_317AAC0 *)&stack0xffffffffffffff78);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed (System_String_o* group, System_String_o* id, const MethodInfo* method);
// 0x41f1f40

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed
          (System_String_o *group,System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *a;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (DAT_05704f74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704f74 = '\x01';
    method = extraout_RDX;
  }
  a = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find(group,id,method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed(a,method_00);
    return bVar1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x41f4430

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IsAllowed
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  MethodInfo *method_00;
  
  if (DAT_05704f75 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704f75 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(item,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    else {
      bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
      cVar1 = (char)bVar2;
    }
    if ((cVar1 != '\0') &&
       (bVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed(item,method_00),
       (char)bVar2 != '\0')) {
      bVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed(item,method_00);
      return bVar2;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleWhenLocked
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleWhenLocked (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x41f4650

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__VisibleWhenLocked
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  
  bVar1 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement(item,method);
  if ((char)bVar1 != '\0') {
    uVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement(item,method);
    return uVar2 ^ 1;
  }
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Find
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find (System_String_o* group, System_String_o* id, const MethodInfo* method);
// 0x41f1310

/* WARNING: Removing unreachable block (ram,0x041f16af) */

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Find
          (System_String_o *group,System_String_o *id,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  char cVar3;
  bool_conflict bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  System_String_o *a;
  int iVar10;
  MethodInfo *method_00;
  long lVar11;
  
  if (DAT_05704f76 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"id");
    DAT_05704f76 = '\x01';
  }
  method_00 = (MethodInfo *)id;
  bVar4 = System_String__IsNullOrWhiteSpace(id,(MethodInfo *)0x0);
  pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((char)bVar4 == '\0') {
    pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(method_00);
    if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    else {
      pSVar6 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar5,group,(pSVar5->klass->vtable)._7_get_Item.method);
      iVar1 = *(int *)(TypeInfo_JSONNode + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
    if ((char)bVar4 == '\0') {
      if ((pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (plVar7 = (long *)(*(pSVar6->klass->vtable)._27_get_Children.methodPtr)
                                     (pSVar6,(pSVar6->klass->vtable)._27_get_Children.method),
         plVar7 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar2 = *plVar7;
      if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar11) == TypeInfo_IEnumerable_JSONNode) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar11) * 0x10 + lVar2 + 0x138);
            goto LAB_041f148f;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar11);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerable_JSONNode,0);
LAB_041f148f:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar2 = *plVar7;
        if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
          lVar11 = 0;
          do {
            if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
              puVar8 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar11) * 0x10 + lVar2 + 0x138)
              ;
              goto LAB_041f1523;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar11);
        }
        puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,0);
LAB_041f1523:
        cVar3 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (cVar3 == '\0') {
          iVar10 = 9;
          pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
          iVar1 = 9;
          if (plVar7 == (long *)0x0) goto LAB_041f1676;
          goto LAB_041f160c;
        }
        lVar2 = *plVar7;
        if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
          lVar11 = 0;
          do {
            if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar11) == TypeInfo_IEnumerator_JSONNode) {
              puVar8 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar11) * 0x10 + lVar2 + 0x138)
              ;
              goto LAB_041f1593;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar11);
        }
        puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator_JSONNode,0);
LAB_041f1593:
        pSVar6 = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        plVar9 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar6,"id",(pSVar6->klass->vtable)._7_get_Item.method);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        a = (System_String_o *)
            (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        bVar4 = System_String__Equals(a,id,5,(MethodInfo *)0x0);
      } while ((char)bVar4 == '\0');
      iVar10 = 8;
      iVar1 = 8;
      if (plVar7 != (long *)0x0) {
LAB_041f160c:
        iVar10 = iVar1;
        lVar2 = *plVar7;
        if ((ulong)*(ushort *)(lVar2 + 0x12e) != 0) {
          lVar11 = 0;
          do {
            if (*(long *)(*(long *)(lVar2 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
              puVar8 = (undefined8 *)
                       (lVar2 + (long)*(int *)(*(long *)(lVar2 + 0xb0) + 8 + lVar11) * 0x10 + 0x138)
              ;
              goto LAB_041f166d;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)*(ushort *)(lVar2 + 0x12e) << 4 != lVar11);
        }
        puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable,0);
LAB_041f166d:
        (*(code *)*puVar8)(plVar7,puVar8[1]);
      }
LAB_041f1676:
      pSVar5 = (SimpleJSONFixed_JSONNode_o *)0x0;
      if (iVar10 == 8) {
        pSVar5 = pSVar6;
      }
    }
  }
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$RoleAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x41f46c0

/* WARNING: Removing unreachable block (ram,0x041f4ae1) */

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  int iVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_array *roles;
  long lVar4;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  bool_conflict bVar8;
  long lVar9;
  int iVar10;
  byte bVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  
  if (DAT_05704f77 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_String___Empty_String);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"requiredRoles");
    DAT_05704f77 = '\x01';
  }
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041f4ad7;
  a = (SimpleJSONFixed_JSONNode_o *)
      (*(item->klass->vtable)._7_get_Item.methodPtr)
                (item,"requiredRoles",(item->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  bVar8 = (bool_conflict)CONCAT71((int7)((ulong)item >> 8),1);
  if ((char)bVar2 != '\0') {
    return bVar8;
  }
  if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041f4ad7;
  iVar3 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
  if (iVar3 == 0) {
    return bVar8;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  roles = ApplicationManagers_AccountManager__get_Roles((MethodInfo *)0x0);
  lVar4 = MethodInfo_String___Empty_String;
  if (roles == (System_String_array *)0x0) {
    if (*(long *)(MethodInfo_String___Empty_String + 0x38) == 0) {
      il2cpp_glue_022c2910(MethodInfo_String___Empty_String);
      lVar9 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) != 0) goto LAB_041f4807;
LAB_041f4a9e:
      lVar9 = il2cpp_glue_022c28b0();
      if (*(int *)(lVar9 + 0xe4) != 0) goto LAB_041f4814;
LAB_041f4ab3:
      il2cpp_init_class();
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      bVar11 = *(byte *)(lVar4 + 0x135);
    }
    else {
      lVar9 = *(long *)(*(long *)(MethodInfo_String___Empty_String + 0x38) + 0x10);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) goto LAB_041f4a9e;
LAB_041f4807:
      if (*(int *)(lVar9 + 0xe4) == 0) goto LAB_041f4ab3;
LAB_041f4814:
      lVar4 = *(long *)(*(long *)(lVar4 + 0x38) + 0x10);
      bVar11 = *(byte *)(lVar4 + 0x135);
    }
    if ((bVar11 & 1) == 0) {
      lVar4 = il2cpp_glue_022c28b0(lVar4);
    }
    roles = (System_String_array *)**(undefined8 **)(lVar4 + 0xb8);
  }
  plVar5 = (long *)(*(a->klass->vtable)._27_get_Children.methodPtr)
                             (a,(a->klass->vtable)._27_get_Children.method);
  if (plVar5 != (long *)0x0) {
    lVar4 = *plVar5;
    if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
      lVar9 = 0;
      do {
        if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar9) == TypeInfo_IEnumerable_JSONNode) {
          puVar6 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar9) * 0x10 + lVar4 + 0x138);
          goto LAB_041f48b1;
        }
        lVar9 = lVar9 + 0x10;
      } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar9);
    }
    puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerable_JSONNode,0);
LAB_041f48b1:
    plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
    if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    do {
      lVar4 = *plVar5;
      if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
        lVar9 = 0;
        do {
          if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar9) == TypeInfo_IEnumerator) {
            puVar6 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar9) * 0x10 + lVar4 + 0x138);
            goto LAB_041f4933;
          }
          lVar9 = lVar9 + 0x10;
        } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar9);
      }
      puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerator,0);
LAB_041f4933:
      cVar1 = (*(code *)*puVar6)(plVar5,puVar6[1]);
      if (cVar1 == '\0') {
        iVar10 = 8;
        iVar3 = 8;
        bVar12 = 0;
        bVar11 = 0;
        goto joined_r0x041f49fa;
      }
      lVar4 = *plVar5;
      if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
        lVar9 = 0;
        do {
          if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar9) == TypeInfo_IEnumerator_JSONNode) {
            puVar6 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar9) * 0x10 + lVar4 + 0x138);
            goto LAB_041f49a3;
          }
          lVar9 = lVar9 + 0x10;
        } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar9);
      }
      puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerator_JSONNode,0);
LAB_041f49a3:
      plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      auVar13 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
      bVar2 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
                        ((System_Collections_Generic_IEnumerable_string__o *)roles,auVar13._0_8_,
                         auVar13._8_8_);
    } while ((char)bVar2 == '\0');
    bVar12 = 1;
    bVar11 = 1;
    iVar10 = 7;
    iVar3 = 7;
joined_r0x041f49fa:
    if (plVar5 != (long *)0x0) {
      lVar4 = *plVar5;
      if ((ulong)*(ushort *)(lVar4 + 0x12e) != 0) {
        lVar9 = 0;
        do {
          if (*(long *)(*(long *)(lVar4 + 0xb0) + lVar9) == TypeInfo_IDisposable) {
            puVar6 = (undefined8 *)
                     (lVar4 + (long)*(int *)(*(long *)(lVar4 + 0xb0) + 8 + lVar9) * 0x10 + 0x138);
            goto LAB_041f4a5d;
          }
          lVar9 = lVar9 + 0x10;
        } while ((ulong)*(ushort *)(lVar4 + 0x12e) << 4 != lVar9);
      }
      puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IDisposable,0);
LAB_041f4a5d:
      (*(code *)*puVar6)(plVar5,puVar6[1]);
      iVar3 = iVar10;
      bVar11 = bVar12;
    }
    return (bool_conflict)CONCAT71((int7)((ulong)plVar5 >> 8),iVar3 == 7 & bVar11);
  }
LAB_041f4ad7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$RoleAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed (SimpleJSONFixed_JSONNode_o* item, System_Collections_Generic_IEnumerable_string__o* roles, const MethodInfo* method);
// 0x41f2980

/* WARNING: Removing unreachable block (ram,0x041f2caf) */

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__RoleAllowed
          (SimpleJSONFixed_JSONNode_o *item,System_Collections_Generic_IEnumerable_string__o *roles,
          MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  uint uVar8;
  int iVar9;
  undefined8 unaff_RBP;
  long lVar10;
  byte bVar11;
  byte bVar12;
  undefined1 auVar13 [16];
  
  if (DAT_05704f78 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"requiredRoles");
    DAT_05704f78 = '\x01';
  }
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041f2ca5:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  a = (SimpleJSONFixed_JSONNode_o *)
      (*(item->klass->vtable)._7_get_Item.methodPtr)
                (item,"requiredRoles",(item->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  uVar8 = (uint)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
  if ((char)bVar3 == '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041f2ca5;
    iVar4 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method)
    ;
    if (iVar4 != 0) {
      plVar5 = (long *)(*(a->klass->vtable)._27_get_Children.methodPtr)
                                 (a,(a->klass->vtable)._27_get_Children.method);
      if (plVar5 == (long *)0x0) goto LAB_041f2ca5;
      lVar1 = *plVar5;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar10 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar10) == TypeInfo_IEnumerable_JSONNode) {
            puVar6 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar10) * 0x10 + lVar1 + 0x138);
            goto LAB_041f2ae1;
          }
          lVar10 = lVar10 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar10);
      }
      puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerable_JSONNode,0);
LAB_041f2ae1:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar1 = *plVar5;
        if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
          lVar10 = 0;
          do {
            if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar10) == TypeInfo_IEnumerator) {
              puVar6 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar10) * 0x10 + lVar1 + 0x138)
              ;
              goto LAB_041f2b63;
            }
            lVar10 = lVar10 + 0x10;
          } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar10);
        }
        puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerator,0);
LAB_041f2b63:
        cVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (cVar2 == '\0') {
          iVar9 = 7;
          iVar4 = 7;
          bVar12 = 0;
          bVar11 = 0;
          goto joined_r0x041f2c28;
        }
        lVar1 = *plVar5;
        if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
          lVar10 = 0;
          do {
            if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar10) == TypeInfo_IEnumerator_JSONNode) {
              puVar6 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar10) * 0x10 + lVar1 + 0x138)
              ;
              goto LAB_041f2bd3;
            }
            lVar10 = lVar10 + 0x10;
          } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar10);
        }
        puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerator_JSONNode,0);
LAB_041f2bd3:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        auVar13 = (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        bVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
                          (roles,auVar13._0_8_,auVar13._8_8_);
      } while ((char)bVar3 == '\0');
      bVar12 = 1;
      bVar11 = 1;
      iVar9 = 6;
      iVar4 = 6;
joined_r0x041f2c28:
      if (plVar5 != (long *)0x0) {
        lVar1 = *plVar5;
        if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
          lVar10 = 0;
          do {
            if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar10) == TypeInfo_IDisposable) {
              puVar6 = (undefined8 *)
                       (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar10) * 0x10 + 0x138)
              ;
              goto LAB_041f2c7d;
            }
            lVar10 = lVar10 + 0x10;
          } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar10);
        }
        puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IDisposable,0);
LAB_041f2c7d:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        bVar11 = bVar12;
        iVar4 = iVar9;
      }
      uVar8 = (uint)(iVar4 == 6 & bVar11);
    }
  }
  return uVar8;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PatreonAllowed
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x41f4bf0

/* WARNING: Removing unreachable block (ram,0x041f4fa4) */

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonAllowed
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *pSVar5;
  long *plVar6;
  undefined8 *puVar7;
  long *plVar8;
  MethodInfo *pMVar9;
  uint uVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  long lVar14;
  
  if (DAT_05704f79 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"requiredPatreonTierIds");
    il2cpp_init_method_metadata(&"active_patron");
    il2cpp_init_method_metadata(&"patronStatus");
    il2cpp_init_method_metadata(&"*");
    DAT_05704f79 = '\x01';
  }
  if (item == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041f4f9a:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  a = (SimpleJSONFixed_JSONNode_o *)
      (*(item->klass->vtable)._7_get_Item.methodPtr)
                (item,"requiredPatreonTierIds",(item->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  uVar10 = (uint)CONCAT71((int7)((ulong)item >> 8),1);
  if ((char)bVar3 == '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041f4f9a;
    pMVar9 = (a->klass->vtable)._11_get_Count.method;
    iVar4 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a);
    if (iVar4 != 0) {
      pSVar5 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue
                         ("patronStatus",pMVar9);
      uVar10 = 0;
      bVar3 = System_String__Equals(pSVar5,"active_patron",5,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        plVar6 = (long *)(*(a->klass->vtable)._27_get_Children.methodPtr)
                                   (a,(a->klass->vtable)._27_get_Children.method);
        if (plVar6 == (long *)0x0) goto LAB_041f4f9a;
        lVar1 = *plVar6;
        if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
          lVar14 = 0;
          do {
            if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar14) == TypeInfo_IEnumerable_JSONNode) {
              puVar7 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar14) * 0x10 + lVar1 + 0x138)
              ;
              goto LAB_041f4da1;
            }
            lVar14 = lVar14 + 0x10;
          } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar14);
        }
        puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IEnumerable_JSONNode,0);
LAB_041f4da1:
        plVar6 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
        if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        do {
          lVar1 = *plVar6;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar14 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar14) == TypeInfo_IEnumerator) {
                puVar7 = (undefined8 *)
                         ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar14) * 0x10 + lVar1 +
                         0x138);
                goto LAB_041f4e23;
              }
              lVar14 = lVar14 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar14);
          }
          puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IEnumerator,0);
LAB_041f4e23:
          cVar2 = (*(code *)*puVar7)(plVar6,puVar7[1]);
          if (cVar2 == '\0') {
            iVar11 = 9;
            iVar4 = 9;
            bVar13 = 0;
            bVar12 = 0;
            goto joined_r0x041f4f15;
          }
          lVar1 = *plVar6;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar14 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar14) == TypeInfo_IEnumerator_JSONNode) {
                puVar7 = (undefined8 *)
                         ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar14) * 0x10 + lVar1 +
                         0x138);
                goto LAB_041f4e93;
              }
              lVar14 = lVar14 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar14);
          }
          puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IEnumerator_JSONNode,0);
LAB_041f4e93:
          plVar8 = (long *)(*(code *)*puVar7)(plVar6,puVar7[1]);
          if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pMVar9 = (MethodInfo *)
                   (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
          bVar3 = System_String__op_Equality
                            ((System_String_o *)pMVar9,"*",(MethodInfo *)0x0);
          if (((char)bVar3 != '\0') &&
             (bVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier
                                (pMVar9), (char)bVar3 != '\0')) break;
          pMVar9 = *(MethodInfo **)(*plVar8 + 0x1d0);
          pSVar5 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8);
          bVar3 = Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier
                            (pSVar5,pMVar9);
        } while ((char)bVar3 == '\0');
        bVar13 = 1;
        bVar12 = 1;
        iVar11 = 8;
        iVar4 = 8;
joined_r0x041f4f15:
        if (plVar6 != (long *)0x0) {
          lVar1 = *plVar6;
          if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
            lVar14 = 0;
            do {
              if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar14) == TypeInfo_IDisposable) {
                puVar7 = (undefined8 *)
                         (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar14) * 0x10 +
                         0x138);
                goto LAB_041f4f6d;
              }
              lVar14 = lVar14 + 0x10;
            } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar14);
          }
          puVar7 = (undefined8 *)il2cpp_runtime_glue(plVar6,TypeInfo_IDisposable,0);
LAB_041f4f6d:
          (*(code *)*puVar7)(plVar6,puVar7[1]);
          bVar12 = bVar13;
          iVar4 = iVar11;
        }
        uVar10 = (uint)(iVar4 == 8 & bVar12);
      }
    }
  }
  return uVar10;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasRoleRequirement
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x41f5180

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRoleRequirement
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool_conflict bVar1;
  int iVar2;
  SimpleJSONFixed_JSONNode_o *a;
  uint uVar3;
  
  if (DAT_05704f7a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"requiredRoles");
    DAT_05704f7a = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(item->klass->vtable)._7_get_Item.methodPtr)
                  (item,"requiredRoles",(item->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar3 = 0;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041f5225;
      iVar2 = (*(a->klass->vtable)._11_get_Count.methodPtr)
                        (a,(a->klass->vtable)._11_get_Count.method);
      uVar3 = (uint)(0 < iVar2);
    }
    return uVar3;
  }
LAB_041f5225:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasPatreonRequirement
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement (SimpleJSONFixed_JSONNode_o* item, const MethodInfo* method);
// 0x41f50d0

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonRequirement
          (SimpleJSONFixed_JSONNode_o *item,MethodInfo *method)

{
  bool_conflict bVar1;
  int iVar2;
  SimpleJSONFixed_JSONNode_o *a;
  uint uVar3;
  
  if (DAT_05704f7b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"requiredPatreonTierIds");
    DAT_05704f7b = '\x01';
  }
  if (item != (SimpleJSONFixed_JSONNode_o *)0x0) {
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(item->klass->vtable)._7_get_Item.methodPtr)
                  (item,"requiredPatreonTierIds",(item->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    uVar3 = 0;
    bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041f5175;
      iVar2 = (*(a->klass->vtable)._11_get_Count.methodPtr)
                        (a,(a->klass->vtable)._11_get_Count.method);
      uVar3 = (uint)(0 < iVar2);
    }
    return uVar3;
  }
LAB_041f5175:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PatreonValue
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue (System_String_o* key, const MethodInfo* method);
// 0x41f33e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__PatreonValue
          (System_String_o *key,MethodInfo *method)

{
  code *vtable_dispatch;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  long *plVar3;
  System_String_o *pSVar4;
  
  if (DAT_05704f7c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704f7c = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar2 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar2 = (SimpleJSONFixed_JSONNode_o *)
               (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar2,key,(pSVar2->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') goto LAB_041f3517;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar2 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        plVar3 = (long *)(*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                                   (pSVar2,key,(pSVar2->klass->vtable)._7_get_Item.method);
        if (plVar3 != (long *)0x0) {
          vtable_dispatch = *(code **)(*plVar3 + 0x1c8);
          pSVar4 = (System_String_o *)
                   (*vtable_dispatch)
                             (plVar3,*(undefined8 *)(*plVar3 + 0x1d0),vtable_dispatch);
          return pSVar4;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041f3517:
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasAnyPatreonTier
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier (const MethodInfo* method);
// 0x41f3540

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasAnyPatreonTier(MethodInfo *method)

{
  bool_conflict bVar1;
  int iVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONNode_o *a;
  uint uVar4;
  
  if (DAT_05704f7d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"tierIds");
    DAT_05704f7d = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041f3656;
    a = (SimpleJSONFixed_JSONNode_o *)
        (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                  (pSVar3,"tierIds",(pSVar3->klass->vtable)._7_get_Item.method);
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar4 = 0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041f3656:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar2 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method)
    ;
    uVar4 = (uint)(0 < iVar2);
  }
  return uVar4;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasPatreonTier
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier (System_String_o* id, const MethodInfo* method);
// 0x41f5320

/* WARNING: Removing unreachable block (ram,0x041f56c0) */

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasPatreonTier
          (System_String_o *id,MethodInfo *method)

{
  long lVar1;
  char cVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *a;
  long *plVar5;
  undefined8 *puVar6;
  long *plVar7;
  System_String_o *a_00;
  bool_conflict bVar8;
  long lVar9;
  int iVar10;
  int iVar11;
  byte bVar12;
  byte bVar13;
  
  if (DAT_05704f7e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"tierIds");
    DAT_05704f7e = '\x01';
  }
  bVar8 = 0;
  bVar3 = System_String__IsNullOrWhiteSpace(id,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar4 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    a = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar4 = ApplicationManagers_AccountManager__get_Patreon((MethodInfo *)0x0);
      if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041f56b6;
      a = (SimpleJSONFixed_JSONNode_o *)
          (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                    (pSVar4,"tierIds",(pSVar4->klass->vtable)._7_get_Item.method);
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar8 = 0;
    bVar3 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') {
      if ((a == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (plVar5 = (long *)(*(a->klass->vtable)._27_get_Children.methodPtr)
                                     (a,(a->klass->vtable)._27_get_Children.method),
         plVar5 == (long *)0x0)) {
LAB_041f56b6:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      lVar1 = *plVar5;
      if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
        lVar9 = 0;
        do {
          if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerable_JSONNode) {
            puVar6 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
            goto LAB_041f54e1;
          }
          lVar9 = lVar9 + 0x10;
        } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
      }
      puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerable_JSONNode,0);
LAB_041f54e1:
      plVar5 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
      if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar1 = *plVar5;
        if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
          lVar9 = 0;
          do {
            if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerator) {
              puVar6 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
              goto LAB_041f5563;
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
        }
        puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerator,0);
LAB_041f5563:
        cVar2 = (*(code *)*puVar6)(plVar5,puVar6[1]);
        if (cVar2 == '\0') {
          iVar11 = 9;
          iVar10 = 9;
          bVar13 = 0;
          bVar12 = 0;
          goto joined_r0x041f5631;
        }
        lVar1 = *plVar5;
        if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
          lVar9 = 0;
          do {
            if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IEnumerator_JSONNode) {
              puVar6 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + lVar1 + 0x138);
              goto LAB_041f55d3;
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
        }
        puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IEnumerator_JSONNode,0);
LAB_041f55d3:
        plVar7 = (long *)(*(code *)*puVar6)(plVar5,puVar6[1]);
        if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        a_00 = (System_String_o *)
               (**(code **)(*plVar7 + 0x1c8))(plVar7,*(undefined8 *)(*plVar7 + 0x1d0));
        bVar3 = System_String__Equals(a_00,id,5,(MethodInfo *)0x0);
      } while ((char)bVar3 == '\0');
      bVar13 = 1;
      bVar12 = 1;
      iVar11 = 8;
      iVar10 = 8;
joined_r0x041f5631:
      if (plVar5 != (long *)0x0) {
        lVar1 = *plVar5;
        if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
          lVar9 = 0;
          do {
            if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar9) == TypeInfo_IDisposable) {
              puVar6 = (undefined8 *)
                       (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar9) * 0x10 + 0x138);
              goto LAB_041f568d;
            }
            lVar9 = lVar9 + 0x10;
          } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar9);
        }
        puVar6 = (undefined8 *)il2cpp_runtime_glue(plVar5,TypeInfo_IDisposable,0);
LAB_041f568d:
        (*(code *)*puVar6)(plVar5,puVar6[1]);
        iVar10 = iVar11;
        bVar12 = bVar13;
      }
      bVar8 = (bool_conflict)CONCAT71((int7)((ulong)plVar5 >> 8),iVar10 == 8 & bVar12);
    }
  }
  return bVar8;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Root
// il2cpp: SimpleJSONFixed_JSONNode_o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root (const MethodInfo* method);
// 0x41f1ea0

SimpleJSONFixed_JSONNode_o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Root(MethodInfo *method)

{
  bool_conflict bVar1;
  UnityEngine_Object_o *x;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (DAT_05704f7f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_init_method_metadata(&"Data/Info/ProfileEntitlementInfo");
    DAT_05704f7f = '\x01';
  }
  x = (UnityEngine_Object_o *)UnityEngine_Resources__Load<object>("Data/Info/ProfileEntitlementInfo",MethodInfo_TextAsset_Load_TextAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (x != (UnityEngine_Object_o *)0x0) {
      aJSON = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
      pSVar2 = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
      return pSVar2;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Contains
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains (SimpleJSONFixed_JSONArray_o* array, System_String_o* value, const MethodInfo* method);
// 0x41f1fc0

/* WARNING: Removing unreachable block (ram,0x041f226e) */

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__Contains
          (SimpleJSONFixed_JSONArray_o *array,System_String_o *value,MethodInfo *method)

{
  long lVar1;
  uint uVar2;
  long *plVar3;
  undefined8 *puVar4;
  ulong uVar5;
  long *plVar6;
  System_String_o *a;
  MethodInfo *extraout_RDX;
  long lVar7;
  int iVar8;
  int iVar9;
  byte bVar10;
  byte bVar11;
  
  if (DAT_05704f80 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    DAT_05704f80 = '\x01';
    method = extraout_RDX;
  }
  if ((array == (SimpleJSONFixed_JSONArray_o *)0x0) ||
     (plVar3 = (long *)(*(array->klass->vtable)._27_get_Children.methodPtr)
                                 (array,(array->klass->vtable)._27_get_Children.method,method),
     plVar3 == (long *)0x0)) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  lVar1 = *plVar3;
  if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
    lVar7 = 0;
    do {
      if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar7) == TypeInfo_IEnumerable_JSONNode) {
        puVar4 = (undefined8 *)
                 ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar7) * 0x10 + lVar1 + 0x138);
        goto LAB_041f2091;
      }
      lVar7 = lVar7 + 0x10;
    } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar7);
  }
  puVar4 = (undefined8 *)il2cpp_runtime_glue(plVar3,TypeInfo_IEnumerable_JSONNode,0);
LAB_041f2091:
  plVar3 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
  if (plVar3 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar1 = *plVar3;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar7 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar7) == TypeInfo_IEnumerator) {
          puVar4 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar7) * 0x10 + lVar1 + 0x138);
          goto LAB_041f2113;
        }
        lVar7 = lVar7 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar7);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_glue(plVar3,TypeInfo_IEnumerator,0);
LAB_041f2113:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    if ((char)uVar5 == '\0') {
      iVar9 = 5;
      iVar8 = 5;
      bVar11 = 0;
      bVar10 = 0;
      goto joined_r0x041f21e1;
    }
    lVar1 = *plVar3;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar7 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar7) == TypeInfo_IEnumerator_JSONNode) {
          puVar4 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar7) * 0x10 + lVar1 + 0x138);
          goto LAB_041f2183;
        }
        lVar7 = lVar7 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar7);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_glue(plVar3,TypeInfo_IEnumerator_JSONNode,0);
LAB_041f2183:
    plVar6 = (long *)(*(code *)*puVar4)(plVar3,puVar4[1]);
    if (plVar6 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    a = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    uVar2 = System_String__Equals(a,value,5,(MethodInfo *)0x0);
    uVar5 = (ulong)uVar2;
  } while ((char)uVar2 == '\0');
  bVar11 = 1;
  bVar10 = 1;
  iVar9 = 4;
  iVar8 = 4;
joined_r0x041f21e1:
  if (plVar3 != (long *)0x0) {
    lVar1 = *plVar3;
    if ((ulong)*(ushort *)(lVar1 + 0x12e) != 0) {
      lVar7 = 0;
      do {
        if (*(long *)(*(long *)(lVar1 + 0xb0) + lVar7) == TypeInfo_IDisposable) {
          puVar4 = (undefined8 *)
                   (lVar1 + (long)*(int *)(*(long *)(lVar1 + 0xb0) + 8 + lVar7) * 0x10 + 0x138);
          goto LAB_041f223d;
        }
        lVar7 = lVar7 + 0x10;
      } while ((ulong)*(ushort *)(lVar1 + 0x12e) << 4 != lVar7);
    }
    puVar4 = (undefined8 *)il2cpp_runtime_glue(plVar3,TypeInfo_IDisposable,0);
LAB_041f223d:
    uVar5 = (*(code *)*puVar4)(plVar3,puVar4[1]);
    iVar8 = iVar9;
    bVar10 = bVar11;
  }
  return (bool_conflict)CONCAT71((int7)(uVar5 >> 8),iVar8 == 4 & bVar10);
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdSet
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet (System_Collections_Generic_IEnumerable_JSONNode__o* ids, const MethodInfo* method);
// 0x41f1990

/* WARNING: Removing unreachable block (ram,0x041f1d71) */

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
          (System_Collections_Generic_IEnumerable_JSONNode__o *ids,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_IEnumerable_JSONNode__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_HashSet_object__o *__this;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  undefined8 *puVar9;
  SimpleJSONFixed_JSONNode_o *a;
  System_String_o *value;
  Il2CppObject *item;
  long lVar10;
  long lVar11;
  
  if (DAT_05704f81 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_05704f81 = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,comparer,MethodInfo_HashSet_1_System_String);
  if (ids == (System_Collections_Generic_IEnumerable_JSONNode__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = ids->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_IEnumerable_JSONNode) {
        pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar10);
        goto LAB_041f1b44;
      }
      lVar10 = lVar10 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar10);
  }
  pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(ids,TypeInfo_IEnumerable_JSONNode,0);
LAB_041f1b44:
  plVar8 = (long *)(*pVVar7->methodPtr)(ids,pVVar7->method);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar10 = *plVar8;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
          puVar9 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
          goto LAB_041f1bd3;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator,0);
LAB_041f1bd3:
    cVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (cVar5 == '\0') {
      if (plVar8 == (long *)0x0) {
        return (System_Collections_Generic_HashSet_string__o *)__this;
      }
      lVar10 = *plVar8;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) == 0) goto LAB_041f1d1f;
      lVar11 = 0;
      break;
    }
    lVar10 = *plVar8;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator_JSONNode) {
          puVar9 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
          goto LAB_041f1c43;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator_JSONNode,0);
LAB_041f1c43:
    a = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar9)(plVar8);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      value = (System_String_o *)(*(a->klass->vtable)._9_get_Value.methodPtr)(a);
      bVar6 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        item = (Il2CppObject *)
               (*(a->klass->vtable)._9_get_Value.methodPtr)
                         (a,(a->klass->vtable)._9_get_Value.method);
        if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        System_Collections_Generic_HashSet<object>__Add(__this,item,MethodInfo_Boolean_Add);
      }
    }
  } while( true );
  while (lVar11 = lVar11 + 0x10, (ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11) {
    if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
      puVar9 = (undefined8 *)
               (lVar10 + (long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
      goto LAB_041f1d3d;
    }
  }
LAB_041f1d1f:
  puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IDisposable,0);
LAB_041f1d3d:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return (System_Collections_Generic_HashSet_string__o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdSet
// il2cpp: System_Collections_Generic_HashSet_string__o* Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet (System_Collections_Generic_IEnumerable_string__o* ids, const MethodInfo* method);
// 0x41f2da0

/* WARNING: Removing unreachable block (ram,0x041f311c) */

System_Collections_Generic_HashSet_string__o *
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__IdSet
          (System_Collections_Generic_IEnumerable_string__o *ids,MethodInfo *method)

{
  ushort uVar1;
  int iVar2;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_IEnumerable_string__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  char cVar5;
  bool_conflict bVar6;
  System_Collections_Generic_HashSet_object__o *__this;
  VirtualInvokeData *pVVar7;
  long *plVar8;
  undefined8 *puVar9;
  System_String_o *value;
  long lVar10;
  long lVar11;
  
  if (DAT_05704f82 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_string);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_05704f82 = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,comparer,MethodInfo_HashSet_1_System_String);
  if (ids == (System_Collections_Generic_IEnumerable_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar3 = ids->klass;
  uVar1._0_1_ = (pSVar3->_2).rank;
  uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
  if ((ulong)uVar1 != 0) {
    pIVar4 = (pSVar3->_1).interfaceOffsets;
    lVar10 = 0;
    do {
      if (*(long *)((long)&pIVar4->interfaceType + lVar10) == TypeInfo_IEnumerable_string) {
        pVVar7 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar10);
        goto LAB_041f2f48;
      }
      lVar10 = lVar10 + 0x10;
    } while ((ulong)uVar1 << 4 != lVar10);
  }
  pVVar7 = (VirtualInvokeData *)il2cpp_runtime_glue(ids,TypeInfo_IEnumerable_string,0);
LAB_041f2f48:
  plVar8 = (long *)(*pVVar7->methodPtr)(ids,pVVar7->method);
  if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  do {
    lVar10 = *plVar8;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
          puVar9 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
          goto LAB_041f2fe3;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator,0);
LAB_041f2fe3:
    cVar5 = (*(code *)*puVar9)(plVar8,puVar9[1]);
    if (cVar5 == '\0') {
      if (plVar8 == (long *)0x0) {
        return (System_Collections_Generic_HashSet_string__o *)__this;
      }
      lVar10 = *plVar8;
      if ((ulong)*(ushort *)(lVar10 + 0x12e) == 0) goto LAB_041f30cf;
      lVar11 = 0;
      break;
    }
    lVar10 = *plVar8;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar11 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IEnumerator_string) {
          puVar9 = (undefined8 *)
                   ((long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + lVar10 + 0x138);
          goto LAB_041f3053;
        }
        lVar11 = lVar11 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11);
    }
    puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IEnumerator_string,0);
LAB_041f3053:
    value = (System_String_o *)(*(code *)*puVar9)(plVar8);
    bVar6 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      System_Collections_Generic_HashSet<object>__Add(__this,(Il2CppObject *)value,MethodInfo_Boolean_Add);
    }
  } while( true );
  while (lVar11 = lVar11 + 0x10, (ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar11) {
    if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
      puVar9 = (undefined8 *)
               (lVar10 + (long)*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
      goto LAB_041f30ed;
    }
  }
LAB_041f30cf:
  puVar9 = (undefined8 *)il2cpp_runtime_glue(plVar8,TypeInfo_IDisposable,0);
LAB_041f30ed:
  (*(code *)*puVar9)(plVar8,puVar9[1]);
  return (System_Collections_Generic_HashSet_string__o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasRole
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole (System_Collections_Generic_IEnumerable_string__o* roles, System_String_o* required, const MethodInfo* method);
// 0x41f5230

bool_conflict
Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog__HasRole
          (System_Collections_Generic_IEnumerable_string__o *roles,System_String_o *required,
          MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppObject *__this;
  System_Func_TSource__bool__o *predicate;
  
  if (DAT_05704f83 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Any_String);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__bool);
    il2cpp_init_method_metadata(&MethodInfo_Boolean__HasRole_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass36_0);
    DAT_05704f83 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass36_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)required;
    il2cpp_runtime_glue(__this + 1);
    bVar1 = System_String__IsNullOrWhiteSpace((System_String_o *)__this[1].klass,(MethodInfo *)0x0);
    if ((roles != (System_Collections_Generic_IEnumerable_string__o *)0x0) && ((char)bVar1 == '\0'))
    {
      predicate = (System_Func_TSource__bool__o *)il2cpp_runtime_glue(TypeInfo_Func_string__bool);
      System_Func<object__bool>___ctor();
      bVar1 = System_Linq_Enumerable__Any<object>
                        ((System_Collections_Generic_IEnumerable_TSource__o *)roles,predicate,
                         MethodInfo_Boolean_Any_String);
      return bVar1;
    }
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


