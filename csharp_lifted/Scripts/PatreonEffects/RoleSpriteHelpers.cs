// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.RoleSpriteHelpers
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/RoleSpriteHelpers.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.InteropServices;
using System.Text.RegularExpressions;
using Il2CppDummyDll;
using Photon.Realtime;

namespace PatreonEffects;

[Token(Token = "0x200008F")]
public static class RoleSpriteHelpers
{
	[Token(Token = "0x40002F9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	private static readonly Regex SpriteTagRegex;

	[Token(Token = "0x40002FA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
	public static readonly RoleSpriteDefinition[] Definitions;

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x58C9CD0", Offset = "0x58C8CD0", VA = "0x58C9CD0")]
	public static IEnumerable<RoleSpriteDefinition> GetEligibleRoleSprites([Optional] Player player)
	{
		// Lifted from source/cpp/PatreonEffects/RoleSpriteHelpers.c (PatreonEffects.RoleSpriteHelpers$$GetEligibleRoleSprites): 3 lines keep C-only constructs
		RoleSpriteDefinition[] source;
		RoleSpriteHelpers.c__DisplayClass2_0 __this;
		Func<RoleSpriteDefinition, bool> __this_00;
		System_Collections_Generic_IEnumerable_TSource__o pSVar1;

		__this = new RoleSpriteHelpers.c__DisplayClass2_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.player = player;
		source = RoleSpriteHelpers.Definitions;
		__this_00 = new Func<RoleSpriteDefinition, bool>((object)__this, (intptr_t) MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass2_0_GetEligibleRoleSprites_b__0);
		pSVar1 = Enumerable.Where<RoleSpriteDefinition>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		return (IEnumerable<RoleSpriteDefinition>)pSVar1;
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x58C9DE0", Offset = "0x58C8DE0", VA = "0x58C9DE0")]
	public static bool HasRole(Player player, string roleName)
	{
		// Lifted from source/cpp/PatreonEffects/RoleSpriteHelpers.c (PatreonEffects.RoleSpriteHelpers$$HasRole): 2 lines keep C-only constructs
		bool bVar1;
		RoleSpriteHelpers.c__DisplayClass3_0 __this;
		IEnumerable<string> source;
		Func<string, bool> __this_00;

		__this = new RoleSpriteHelpers.c__DisplayClass3_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.roleName = roleName;
		bVar1 = String.IsNullOrEmpty(__this.roleName);
		if (bVar1) {
			return false;
		}
		source = RoleSpriteHelpers.GetRoles(player);
		__this_00 = new Func<string, bool>((object)__this, (intptr_t)MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass3_0_HasRole_b__0);
		bVar1 = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		return bVar1;
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x58CA0F0", Offset = "0x58C90F0", VA = "0x58CA0F0")]
	public static string ComposeGuildWithRoleSprite(Player player, string guildText, string selectedRoleName)
	{
		// Lifted from source/cpp/PatreonEffects/RoleSpriteHelpers.c (PatreonEffects.RoleSpriteHelpers$$ComposeGuildWithRoleSprite): 1 lines keep C-only constructs
		bool bVar1;
		object arg0;
		String str0;
		int local_3c;
		RoleSpriteDefinition local_38;

		local_38.RoleName = null;
		local_38.SpriteIndex = 0;
		local_38._12_4_ = 0;
		if (guildText == null) {
			guildText = (String)**(ulong*)(g_data_07556758 + 0xb8);
		}
		bVar1 = String.IsNullOrEmpty(selectedRoleName);
		str0 = guildText;
		if (!bVar1) {
			if ((typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar1 = RoleSpriteHelpers.TryGetDefinitionByRole(selectedRoleName, ref local_38);
			if (bVar1) {
				if ((typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar1 = RoleSpriteHelpers.HasRole(player, selectedRoleName);
				if (bVar1) {
					local_3c = local_38.SpriteIndex;
					arg0 = (object)local_3c;
					str0 = String.Format("<sprite={0}>", arg0);
					bVar1 = String.IsNullOrEmpty(guildText);
					if (!bVar1) {
						str0 = String.Concat(str0, " ", guildText);
					}
				}
			}
		}
		return str0;
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x58CA360", Offset = "0x58C9360", VA = "0x58CA360")]
	public static string GetRoleSpriteDisplayText(string selectedRoleName, [Optional] Player player)
	{
		// Lifted from source/cpp/PatreonEffects/RoleSpriteHelpers.c (PatreonEffects.RoleSpriteHelpers$$GetRoleSpriteDisplayText): 1 lines keep C-only constructs
		bool bVar1;
		object arg0;
		String pSVar2;
		int iStack_2c;
		RoleSpriteDefinition PStack_28;

		PStack_28.RoleName = null;
		PStack_28.SpriteIndex = 0;
		PStack_28._12_4_ = 0;
		bVar1 = String.IsNullOrEmpty(selectedRoleName);
		if (!bVar1) {
			if ((typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar1 = RoleSpriteHelpers.TryGetDefinitionByRole(selectedRoleName, ref PStack_28);
			if (bVar1) {
				if ((typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar1 = RoleSpriteHelpers.HasRole(player, selectedRoleName);
				if (bVar1) {
					iStack_2c = PStack_28.SpriteIndex;
					arg0 = (object)iStack_2c;
					pSVar2 = String.Format("<sprite={0}> {1}", arg0, (object)PStack_28.RoleName);
					return pSVar2;
				}
			}
		}
		return "None";
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x58CA460", Offset = "0x58C9460", VA = "0x58CA460")]
	public static string SanitizePlayerText(Player player, string text)
	{
		// Lifted from source/cpp/PatreonEffects/RoleSpriteHelpers.c (PatreonEffects.RoleSpriteHelpers$$SanitizePlayerText): 1 lines keep C-only constructs
		Regex __this;
		bool bVar1;
		RoleSpriteHelpers.c__DisplayClass6_0 __this_00;
		MatchEvaluator __this_01;
		String pSVar2;

		__this_00 = new RoleSpriteHelpers.c__DisplayClass6_0();
		if (__this_00 != null) {
			__this_00.player = player;
			bVar1 = String.IsNullOrEmpty(text);
			if (bVar1) {
				return text;
			}
			__this = RoleSpriteHelpers.SpriteTagRegex;
			__this_01 = new MatchEvaluator((object)__this_00, (intptr_t) MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass6_0_SanitizePlayerText_b__0);
			if (__this != null) {
				pSVar2 = Regex.Replace(__this, text, __this_01);
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x58C9F10", Offset = "0x58C8F10", VA = "0x58C9F10")]
	public static IEnumerable<string> GetRoles([Optional] Player player)
	{
		// Lifted from source/cpp/PatreonEffects/RoleSpriteHelpers.c (PatreonEffects.RoleSpriteHelpers$$GetRoles): 12 lines keep C-only constructs
		byte bVar1;
		uint uVar2;
		bool bVar3;
		object raw;
		String[] pSVar4;
		Il2CppClass pIVar5;
		MethodInfo extraout_RDX;
		MethodInfo extraout_RDX_00;
		MethodInfo pMVar6;
		String[] local_18;

		local_18 = null;
		if (player == null) {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				pSVar4 = AccountManager.Roles;
			}
			else {
				pSVar4 = AccountManager.Roles;
			}
			if (pSVar4 != null) {
				return (IEnumerable<string>)pSVar4;
			}
		}
		else {
			raw = PhotonExtensions.GetCustomProperty(player, PlayerProperty.AuthoritativeRoles);
			pMVar6 = extraout_RDX;
			if ((typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor == 0) {
				pMVar6 = extraout_RDX_00;
			}
			bVar3 = RoleSpriteHelpers.TryReadRoles(raw, ref local_18);
			if (bVar3) {
				return (IEnumerable<string>)local_18;
			}
			if (player.IsLocal != false) {
				if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
					pSVar4 = AccountManager.Roles;
				}
				else {
					pSVar4 = AccountManager.Roles;
				}
				if (pSVar4 != null) {
					if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0 ) {
					}
					pSVar4 = AccountManager.Roles;
					return (IEnumerable<string>)pSVar4;
				}
			}
		}
		pMVar6 = MethodInfo_System_Array_Empty_string;
		if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
			pIVar5 = *(Il2CppClass*)((long)(pMVar6.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar5._2).bitflags1;
		}
		else {
			pIVar5 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
			bVar1 = (pIVar5._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
			uVar2 = (pIVar5._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar2 = (pIVar5._2).cctor_finished_or_no_cctor;
		}
		if (uVar2 == 0) {
			pIVar5 = (pMVar6.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar5._2).bitflags1;
		}
		else {
			pIVar5 = (pMVar6.field7_0x38).rgctx_data[2].klass;
			bVar1 = (pIVar5._2).bitflags1;
		}
		if ((bVar1 & 1) == 0) {
			pIVar5 = il2cpp_codegen_class_init_checked(pIVar5);
		}
		return *(IEnumerable<string>*)pIVar5.static_fields;
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x58CA590", Offset = "0x58C9590", VA = "0x58CA590")]
	private static bool TryReadRoles(object raw, out string[] roles)
	{
		// Lifted from source/cpp/PatreonEffects/RoleSpriteHelpers.c (PatreonEffects.RoleSpriteHelpers$$TryReadRoles): 29 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		Il2CppRuntimeInterfaceOffsetPair pIVar4;
		MethodInfo pMVar5;
		bool bVar6;
		sbyte cVar7;
		Il2CppClass pIVar8;
		JSONNode a;
		IEnumerable<JSONNode> source;
		PatreonEffects_RoleSpriteHelpers___c_StaticFields pPVar9;
		Func<JSONNode, string> __this;
		System_Collections_Generic_IEnumerable_TResult__o roles_00;
		String[] pSVar10;
		object pIVar11;
		List<string> __this_00;
		VirtualInvokeData pVVar12;
		object pIVar13;
		String pSVar14;
		ulong uVar15;
		long lVar16;
		object local_58;
		object local_50;
		byte local_40;
		object* local_38;

		pMVar5 = MethodInfo_System_Array_Empty_string;
		local_58 = null;
		local_50 = null;
		if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
			il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
			pIVar8 = *(Il2CppClass*)((long)(pMVar5.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar8._2).bitflags1 & 1) == 0) goto label_059ca685;
	label_059ca6c7: ;
			if ((pIVar8._2).cctor_finished_or_no_cctor == 0) goto label_059ca696;
	label_059ca6d0: ;
			pIVar8 = (pMVar5.field7_0x38).rgctx_data[2].klass;
			bVar2 = (pIVar8._2).bitflags1;
		}
		else {
			pIVar8 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
			if (((pIVar8._2).bitflags1 & 1) != 0) goto label_059ca6c7;
	label_059ca685: ;
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			if ((pIVar8._2).cctor_finished_or_no_cctor != 0) goto label_059ca6d0;
	label_059ca696: ;
			pIVar8 = (pMVar5.field7_0x38).rgctx_data[2].klass;
			bVar2 = (pIVar8._2).bitflags1;
		}
		if ((bVar2 & 1) == 0) {
			pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
		}
		*roles = *(String[]*)pIVar8.static_fields;
		if (raw == null) {
			pIVar11 = (null as IEnumerable);
			if (pIVar11 != null) goto label_059ca8d5;
		}
		else {
			if ((raw.klass == g_data_07556758) &&(bVar6 = String.IsNullOrEmpty((String)raw), !bVar6)) {
				a = JSON.Parse((String)raw);
				bVar6 = (a != null);
				if (bVar6) {
					if (a == null) {
						throw new NullReferenceException();
					}
					bVar6 = a.get_IsArray();
					if (bVar6) {
						source = a.get_Children();
						pPVar9 = typeof(RoleSpriteHelpers.c).static_fields;
						__this = pPVar9.__9__8_0;
						if (__this == null) {
							if ((typeof(RoleSpriteHelpers.c)._2).cctor_finished_or_no_cctor == 0) {
								pPVar9 = typeof(RoleSpriteHelpers.c).static_fields;
							}
							pIVar11 = (object)pPVar9.__9;
							__this = new Func<JSONNode, string>(pIVar11, (intptr_t)MethodInfo_PatreonEffects_RoleSpriteHelpers_c_TryReadRoles_b__8_0);
							pPVar9 = typeof(RoleSpriteHelpers.c).static_fields;
							pPVar9.__9__8_0 = __this;
						}
						roles_00 = Enumerable.Select<JSONNode, string>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__TResult__o)__this);
						pSVar10 = RoleSpriteHelpers.RoleArray((IEnumerable<string>)roles_00);
						*roles = pSVar10;
						pSVar10 = *roles;
						if (pSVar10 == null) {
							throw new NullReferenceException();
						}
	label_059cac1c: ;
						return (int)pSVar10.Length != 0;
					}
				}
			}
			pIVar11 = (raw as IEnumerable);
			if ((pIVar11 != null) && ((raw == null || (raw.klass != g_data_07556758)))) {
	label_059ca8d5: ;
				__this_00 = new List<string>();
				pIVar8 = pIVar11.klass;
				uVar15 = (ulong)(pIVar8._2).interface_offsets_count;
				pIVar11 = (object)pIVar11.Dispose();
				local_38 = &local_50;
				local_40 = (byte)&local_58;
	joined_r0x059ca97f: ;
				do {
					do {
						local_58 = pIVar11;
						if (pIVar11 == null) {
							throw new NullReferenceException();
						}
						pIVar8 = pIVar11.klass;
						uVar15 = (ulong)(pIVar8._2).interface_offsets_count;
						cVar7 = pIVar11.Dispose();
						pIVar11 = local_58;
						if (cVar7 == false) {
							pIVar11 = (local_58 as IDisposable);
							local_50 = pIVar11;
							if (pIVar11 == null) goto label_059cabd6;
							pIVar8 = pIVar11.klass;
							uVar15 = (ulong)(pIVar8._2).interface_offsets_count;
							if (uVar15 == 0) goto label_059cabaf;
							pIVar4 = (pIVar8._1).interfaceOffsets;
							lVar16 = 0;
							goto label_059caba0;
						}
						if (local_58 == null) {
							throw new NullReferenceException();
						}
						pIVar8 = local_58.klass;
						uVar15 = (ulong)(pIVar8._2).interface_offsets_count;
						pIVar13 = pIVar11.Dispose();
						pIVar11 = local_58;
					} while (pIVar13 == null);
					pSVar14 = (String)(*pIVar13.klass.vtable[3].methodPtr)(pIVar13);
					bVar6 = String.IsNullOrEmpty(pSVar14);
					pIVar11 = local_58;
				} while (bVar6);
				pSVar14 = (String)(*pIVar13.klass.vtable[3].methodPtr)(pIVar13,pIVar13.klass.vtable[3].method);
				pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
				if (__this_00 != null) {
					piVar1 = &__this_00._version;
					*piVar1 = *piVar1 + 1;
					pSVar10 = __this_00._items;
					if (pSVar10 != null) {
						uVar3 = __this_00._size;
						if (uVar3 < (uint)pSVar10.Length) {
							__this_00._size = uVar3 + 1;
							pSVar10[(int)uVar3] = pSVar14;
							pIVar11 = local_58;
						}
						else {
							__this_00.AddWithResize((object)pSVar14);
							pIVar11 = local_58;
						}
						goto joined_r0x059ca97f;
					}
				}
				throw new NullReferenceException();
			}
		}
		return false;
		while (true) {
			lVar16 = lVar16 + 0x10;
			if (!(uVar15 * 0x10 != lVar16)) break;
	label_059caba0: ;
			if (*(IDisposable*)((long)&pIVar4.interfaceType + lVar16) == typeof(IDisposable)) {
				pVVar12 = pIVar8.vtable + *(int)((long)&pIVar4.offset + lVar16);
				goto label_059cabcd;
			}
		}
	label_059cabaf: ;
	label_059cabcd: ;
		pIVar11.Dispose();
	label_059cabd6: ;
		pSVar10 = RoleSpriteHelpers.RoleArray((IEnumerable<string>)__this_00);
		*roles = pSVar10;
		pSVar10 = *roles;
		if (pSVar10 == null) {
			throw new NullReferenceException();
		}
		goto label_059cac1c;
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x58CAD40", Offset = "0x58C9D40", VA = "0x58CAD40")]
	private static string[] RoleArray(IEnumerable<string> roles)
	{
		// Lifted from source/cpp/PatreonEffects/RoleSpriteHelpers.c (PatreonEffects.RoleSpriteHelpers$$RoleArray): 4 lines keep C-only constructs
		uint uVar1;
		object @object;
		PatreonEffects_RoleSpriteHelpers___c_StaticFields pPVar2;
		Func<string, bool> __this;
		System_Collections_Generic_IEnumerable_TSource__o pSVar3;
		String[] pSVar4;

		if (Il2CppMethodInitialized_07545c34 == false) {
			Il2CppMethodInitialized_07545c34 = true;
			uVar1 = (typeof(RoleSpriteHelpers.c)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(RoleSpriteHelpers.c)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			pPVar2 = typeof(RoleSpriteHelpers.c).static_fields;
			__this = pPVar2.__9__9_0;
		}
		else {
			pPVar2 = (typeof(RoleSpriteHelpers.c)).static_fields;
			__this = pPVar2.__9__9_0;
		}
		if (__this == null) {
			if (((typeof(RoleSpriteHelpers.c))._2).cctor_finished_or_no_cctor == 0) {
				pPVar2 = typeof(RoleSpriteHelpers.c).static_fields;
			}
			@object = (object)pPVar2.__9;
			__this = new Func<string, bool>(@object, (intptr_t)MethodInfo_PatreonEffects_RoleSpriteHelpers_c_RoleArray_b__9_0);
			pPVar2 = typeof(RoleSpriteHelpers.c).static_fields;
			pPVar2.__9__9_0 = __this;
		}
		pSVar3 = Enumerable.Where<string>((System_Collections_Generic_IEnumerable_TSource__o)roles, (System_Func_TSource__bool__o)__this);
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		pSVar3 = Enumerable.Distinct<string>(pSVar3, (System_Collections_Generic_IEqualityComparer_TSource__o)StringComparer.s_ordinalIgnoreCase);
		pSVar4 = (String[])Enumerable.ToArray<string>(pSVar3);
		return pSVar4;
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x58CA230", Offset = "0x58C9230", VA = "0x58CA230")]
	public static bool TryGetDefinitionByRole(string roleName, out RoleSpriteDefinition definition)
	{
		// Lifted from source/cpp/PatreonEffects/RoleSpriteHelpers.c (PatreonEffects.RoleSpriteHelpers$$TryGetDefinitionByRole): 3 lines keep C-only constructs
		RoleSpriteDefinition[] source;
		bool bVar1;
		RoleSpriteHelpers.c__DisplayClass10_0 __this;
		Func<RoleSpriteDefinition, bool> __this_00;
		RoleSpriteDefinition PVar2;

		if (Il2CppMethodInitialized_07545c35 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(RoleSpriteHelpers.c__DisplayClass10_0)) ;
			Il2CppMethodInitialized_07545c35 = true;
		}
		__this = new RoleSpriteHelpers.c__DisplayClass10_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.roleName = roleName;
		source = RoleSpriteHelpers.Definitions;
		__this_00 = new Func<RoleSpriteDefinition, bool>((object)__this, (intptr_t) MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass10_0_TryGetDefinitionByRole_b__0);
		PVar2 = Enumerable.FirstOrDefault<RoleSpriteDefinition>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		definition.RoleName = PVar2.RoleName;
		definition.SpriteIndex = PVar2.SpriteIndex;
		bVar1 = String.IsNullOrEmpty(definition.RoleName);
		return !bVar1;
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x58CAF40", Offset = "0x58C9F40", VA = "0x58CAF40")]
	public static bool TryGetDefinitionBySpriteIndex(int spriteIndex, out RoleSpriteDefinition definition)
	{
		// Lifted from source/cpp/PatreonEffects/RoleSpriteHelpers.c (PatreonEffects.RoleSpriteHelpers$$TryGetDefinitionBySpriteIndex): 3 lines keep C-only constructs
		RoleSpriteDefinition[] source;
		bool bVar1;
		RoleSpriteHelpers.c__DisplayClass11_0 __this;
		Func<RoleSpriteDefinition, bool> __this_00;
		RoleSpriteDefinition PVar2;

		if (Il2CppMethodInitialized_07545c36 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(RoleSpriteHelpers.c__DisplayClass11_0)) ;
			Il2CppMethodInitialized_07545c36 = true;
		}
		__this = new RoleSpriteHelpers.c__DisplayClass11_0();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.spriteIndex = spriteIndex;
		source = RoleSpriteHelpers.Definitions;
		__this_00 = new Func<RoleSpriteDefinition, bool>((object)__this, (intptr_t) MethodInfo_PatreonEffects_RoleSpriteHelpers_c__DisplayClass11_0_TryGetDefinitionBySpriteIndex_b__0);
		PVar2 = Enumerable.FirstOrDefault<RoleSpriteDefinition>((System_Collections_Generic_IEnumerable_TSource__o)source, (System_Func_TSource__bool__o)__this_00);
		definition.RoleName = PVar2.RoleName;
		definition.SpriteIndex = PVar2.SpriteIndex;
		bVar1 = String.IsNullOrEmpty(definition.RoleName);
		return !bVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/PatreonEffects/RoleSpriteHelpers.c.

	// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass2_0$$.ctor: clean
	private void c__DisplayClass2_0__ctor()
	{
		base();
		return;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass3_0$$.ctor: clean
	private void c__DisplayClass3_0__ctor()
	{
		base();
		return;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass6_0$$.ctor: clean
	private void c__DisplayClass6_0__ctor()
	{
		base();
		return;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass10_0$$.ctor: clean
	private void c__DisplayClass10_0__ctor()
	{
		base();
		return;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass11_0$$.ctor: clean
	private void c__DisplayClass11_0__ctor()
	{
		base();
		return;
	}

	// PatreonEffects.RoleSpriteHelpers$$.cctor: 10 lines keep C-only constructs
	static RoleSpriteHelpers()
	{
		Regex __this;
		RoleSpriteDefinition[] pPVar2;
		String pSStack_b0;
		ulong uStack_a8;
		String pSStack_a0;
		ulong uStack_98;
		String pSStack_90;
		ulong uStack_88;
		String pSStack_80;
		ulong uStack_78;
		String pSStack_70;
		ulong uStack_68;
		String pSStack_60;
		ulong uStack_58;
		String pSStack_50;
		ulong uStack_48;
		String pSStack_40;
		ulong uStack_38;
		String pSStack_30;
		ulong uStack_28;
		String pSStack_20;
		ulong uStack_18;

		__this = new Regex("<sprite=(\\d+)>", 9);
		RoleSpriteHelpers.SpriteTagRegex = __this;
		pPVar2 = (RoleSpriteDefinition[])new RoleSpriteDefinition[10];
		uStack_18 = 0;
		pSStack_20 = "2D Art";
		uStack_18 = CONCAT44(uStack_18._4_4_, 0x8d);
		if (pPVar2 == null) {
			throw new NullReferenceException();
		}
		if ((int)pPVar2.Length != 0) {
			pPVar2[0].RoleName = pSStack_20;
			pPVar2[0].SpriteIndex = 0x8d;
			uStack_28 = 0;
			pSStack_30 = "3D Art";
			uStack_28 = CONCAT44(uStack_28._4_4_, 0x8e);
			if ((pPVar2.Length & 0xfffffffe) != 0) {
				pPVar2[1].RoleName = pSStack_30;
				pPVar2[1].SpriteIndex = 0x8e;
				uStack_38 = 0;
				pSStack_40 = "Developer";
				uStack_38 = CONCAT44(uStack_38._4_4_, 0x8f);
				if (2 < (uint)pPVar2.Length) {
					pPVar2[2].RoleName = pSStack_40;
					pPVar2[2].SpriteIndex = 0x8f;
					uStack_48 = 0;
					pSStack_50 = "Supporter";
					uStack_48 = CONCAT44(uStack_48._4_4_, 0x90);
					if ((pPVar2.Length & 0xfffffffc) != 0) {
						pPVar2[3].RoleName = pSStack_50;
						pPVar2[3].SpriteIndex = 0x90;
						uStack_58 = 0;
						pSStack_60 = "Manager";
						uStack_58 = CONCAT44(uStack_58._4_4_, 0x91);
						if (4 < (uint)pPVar2.Length) {
							pPVar2[4].RoleName = pSStack_60;
							pPVar2[4].SpriteIndex = 0x91;
							uStack_68 = 0;
							pSStack_70 = "Mapper";
							uStack_68 = CONCAT44(uStack_68._4_4_, 0x92);
							if (5 < (uint)pPVar2.Length) {
								pPVar2[5].RoleName = pSStack_70;
								pPVar2[5].SpriteIndex = 0x92;
								uStack_78 = 0;
								pSStack_80 = "Media";
								uStack_78 = CONCAT44(uStack_78._4_4_, 0x93);
								if (6 < (uint)pPVar2.Length) {
									pPVar2[6].RoleName = pSStack_80;
									pPVar2[6].SpriteIndex = 0x93;
									uStack_88 = 0;
									pSStack_90 = "ModTeam";
									uStack_88 = CONCAT44(uStack_88._4_4_, 0x94);
									if ((pPVar2.Length & 0xfffffff8) != 0) {
										pPVar2[7].RoleName = pSStack_90;
										pPVar2[7].SpriteIndex = 0x94;
										uStack_98 = 0;
										pSStack_a0 = "Music";
										uStack_98 = CONCAT44(uStack_98._4_4_, 0x95);
										if (8 < (uint)pPVar2.Length) {
											pPVar2[8].RoleName = pSStack_a0;
											pPVar2[8].SpriteIndex = 0x95;
											uStack_a8 = 0;
											pSStack_b0 = "Tester";
											uStack_a8 = CONCAT44(uStack_a8._4_4_, 0x96);
											if (9 < (uint)pPVar2.Length) {
												pPVar2[9].RoleName = pSStack_b0;
												pPVar2[9].SpriteIndex = 0x96;
												RoleSpriteHelpers.Definitions = pPVar2;
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
		throw new IndexOutOfRangeException();
	}

	// PatreonEffects.RoleSpriteHelpers.<>c$$.cctor: clean
	private static void c__cctor()
	{
		object __this;

		__this = new RoleSpriteHelpers.c();
		RoleSpriteHelpers.c.__9 =(RoleSpriteHelpers.c)__this;
		return;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c$$.ctor: clean
	private void c__ctor()
	{
		base();
		return;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c$$<TryReadRoles>b__8_0: clean
	private String c__TryReadRoles_b__8_0(JSONNode item)
	{
		String pSVar1;

		if (item == null) {
			throw new NullReferenceException();
		}
		return pSVar1;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c$$<RoleArray>b__9_0: clean
	private bool c__RoleArray_b__9_0(String role)
	{
		bool bVar1;

		bVar1 = String.IsNullOrWhiteSpace(role);
		return !bVar1;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass10_0$$<TryGetDefinitionByRole>b__0: clean
	private bool c__DisplayClass10_0__TryGetDefinitionByRole_b__0(RoleSpriteDefinition item)
	{
		bool bVar1;

		bVar1 = String.Equals(item.RoleName, this.roleName, 5);
		return bVar1;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass11_0$$<TryGetDefinitionBySpriteIndex>b__0: clean
	private bool c__DisplayClass11_0__TryGetDefinitionBySpriteIndex_b__0(RoleSpriteDefinition item)
	{
		return this.spriteIndex == item.SpriteIndex;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass2_0$$<GetEligibleRoleSprites>b__0: clean
	private bool c__DisplayClass2_0__GetEligibleRoleSprites_b__0(RoleSpriteDefinition definition)
	{
		Player player;
		bool bVar1;

		player = this.player;
		if ((typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor == 0) {
		}
		bVar1 = RoleSpriteHelpers.HasRole(player, definition.RoleName);
		return bVar1;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass3_0$$<HasRole>b__0: clean
	private bool c__DisplayClass3_0__HasRole_b__0(String role)
	{
		bool bVar1;

		bVar1 = String.Equals(role, this.roleName, 5);
		return bVar1;
	}

	// PatreonEffects.RoleSpriteHelpers.<>c__DisplayClass6_0$$<SanitizePlayerText>b__0: 1 lines keep C-only constructs
	private String c__DisplayClass6_0__SanitizePlayerText_b__0(Match match)
	{
		Player player;
		int spriteIndex;
		bool bVar1;
		GroupCollection __this_00;
		Group __this_01;
		String pSVar2;
		int iStack_3c;
		RoleSpriteDefinition PStack_38;

		iStack_3c = 0;
		PStack_38.RoleName = null;
		PStack_38.SpriteIndex = 0;
		PStack_38._12_4_ = 0;
		if (((match == null) ||(__this_00 = match.get_Groups(), __this_00 == null)) ||(__this_01 = __this_00.get_Item(1), __this_01 == null)) {
			throw new NullReferenceException();
		}
		pSVar2 = __this_01.Value;
		bVar1 = Int32.TryParse(pSVar2, ref iStack_3c);
		spriteIndex = iStack_3c;
		if (bVar1) {
			if ((typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor == 0) {
			}
			bVar1 = RoleSpriteHelpers.TryGetDefinitionBySpriteIndex(spriteIndex, ref PStack_38);
			pSVar2 = PStack_38.RoleName;
			if (bVar1) {
				player = this.player;
				if ((typeof(RoleSpriteHelpers)._2).cctor_finished_or_no_cctor == 0) {
				}
				bVar1 = RoleSpriteHelpers.HasRole(player, pSVar2);
				if (bVar1) {
					pSVar2 = match.Value;
					return pSVar2;
				}
			}
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}
}
