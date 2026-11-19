// ==================== AoTTG2 cross-reference ====================
// Type: Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace Gisketch.Aottg2UI.Game;

[Token(Token = "0x2000319")]
internal static class AottgProfileEntitlementCatalog
{
	[Token(Token = "0x4000FA1")]
	private const string InfoPath = "Data/Info/ProfileEntitlementInfo";

	[Token(Token = "0x4000FA2")]
	private const string ActivePatron = "active_patron";

	[Token(Token = "0x4000FA3")]
	private const string BadgeIconRoot = "UI/Icons/Roles/";

	[Token(Token = "0x6001368")]
	[Address(RVA = "0x57FF180", Offset = "0x57FE180", VA = "0x57FF180")]
	public static string PresetGuildLabel(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PresetGuildLabel): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		pSVar2 = AottgProfileEntitlementCatalog.Find("PresetGuilds", id);
		bVar1 = (pSVar2 != null);
		if (bVar1) {
			if (pSVar2 != null) {
				pSVar2 = pSVar2.get_Item("label");
				if (pSVar2 != null) {
					return pSVar3;
				}
			}
			throw new NullReferenceException();
		}
		return id;
	}

	[Token(Token = "0x6001369")]
	[Address(RVA = "0x57FF660", Offset = "0x57FE660", VA = "0x57FF660")]
	public static string BadgeLabel(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$BadgeLabel): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		pSVar2 = AottgProfileEntitlementCatalog.Find("Badges", id);
		bVar1 = (pSVar2 != null);
		if (bVar1) {
			if (pSVar2 != null) {
				pSVar2 = pSVar2.get_Item("label");
				if (pSVar2 != null) {
					return pSVar3;
				}
			}
			throw new NullReferenceException();
		}
		return id;
	}

	[Token(Token = "0x600136A")]
	[Address(RVA = "0x57FF730", Offset = "0x57FE730", VA = "0x57FF730")]
	public static string BadgeIcon(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$BadgeIcon): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		pSVar2 = AottgProfileEntitlementCatalog.Find("Badges", id);
		bVar1 = (pSVar2 != null);
		if (bVar1) {
			if (pSVar2 != null) {
				pSVar2 = pSVar2.get_Item("id");
				if (pSVar2 != null) {
					pSVar3 = pSVar2.get_Value();
					pSVar3 = String.Concat("UI/Icons/Roles/", pSVar3);
					return pSVar3;
				}
			}
			throw new NullReferenceException();
		}
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x600136B")]
	[Address(RVA = "0x57FF820", Offset = "0x57FE820", VA = "0x57FF820")]
	public static JSONArray AllowedBadges(JSONNode requested)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges): 11 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		String group;
		bool bVar4;
		sbyte cVar5;
		JSONArray pSVar6;
		MethodInfo method_00;
		HashSet<string> __this;
		JSONNode pSVar7;
		object pIVar8;
		VirtualInvokeData pVVar9;
		long plVar10;
		String id;
		ulong uVar11;
		long lVar13;
		object local_50;
		JSONArray local_48;
		object* local_38;

		if (Il2CppMethodInitialized_07545623 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07545623 = true;
		}
		local_50 = null;
		pSVar6 = new JSONArray();
		bVar4 = (requested == null);
		if (bVar4) {
			return pSVar6;
		}
		if (requested != null) {
			method_00 = (MethodInfo)requested.get_Children();
			__this = AottgProfileEntitlementCatalog.IdSet((IEnumerable<JSONNode>)method_00);
			pSVar7 = AottgProfileEntitlementCatalog.Root();
			if (pSVar7 == null) {
				pSVar7 = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				pSVar7 = pSVar7.get_Item("Badges");
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar4 = (pSVar7 == null);
			if (bVar4) {
				return pSVar6;
			}
			if ((pSVar7 != null) &&(pIVar8 = (object)pSVar7.get_Children(), pIVar8 != null)) {
				pIVar2 = pIVar8.klass;
				uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
				local_48 = pSVar6;
				pIVar8 = pIVar8.Dispose();
				local_38 = &local_50;
				do {
					local_50 = pIVar8;
					if (pIVar8 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIVar8.klass;
					uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
					cVar5 = pIVar8.Dispose();
					pSVar6 = local_48;
					pIVar8 = local_50;
					if (cVar5 == false) {
						if (local_50 == null) {
							return local_48;
						}
						pIVar2 = local_50.klass;
						uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar11 == 0) goto label_058ffcdf;
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar13 = 0;
						goto label_058ffcd0;
					}
					if (local_50 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = local_50.klass;
					uVar11 = (ulong)(pIVar2._2).interface_offsets_count;
					pIVar8 = pIVar8.Dispose();
					if (pIVar8 == null) {
						throw new NullReferenceException();
					}
					plVar10 = (long)(*pIVar8.klass.vtable[7].methodPtr)(pIVar8,"id",pIVar8.klass.vtable[7].method);
					if (plVar10 == null) {
						throw new NullReferenceException();
					}
					id = (String)(**(code*)(*plVar10 + 0x1c8))(plVar10,*(ulong)(*plVar10 + 0x1d0));
					if (__this == null) {
						throw new NullReferenceException();
					}
					bVar4 = __this.Contains((object)id);
					group = "Badges";
					pIVar8 = local_50;
					if (bVar4) {
						pSVar7 = AottgProfileEntitlementCatalog.Find(group, id);
						bVar4 = (pSVar7 != null);
						pIVar8 = local_50;
						if (((bVar4) &&(bVar4 = AottgProfileEntitlementCatalog.IsAllowed(pSVar7), pIVar8 = local_50, bVar4)) &&(bVar4 = AottgProfileEntitlementCatalog.Contains(local_48, id), pIVar8 = local_50, !bVar4)) {
							pSVar7 = ((JSONNode)id);
							if (local_48 == null) {
								throw new NullReferenceException();
							}
							local_48.Add(pSVar7);
							pIVar8 = local_50;
						}
					}
				} while(true);
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar13 = lVar13 + 0x10;
			if (!(uVar11 * 0x10 != lVar13)) break;
	label_058ffcd0: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar13) == typeof(IDisposable)) {
				pVVar9 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar13);
				goto label_058ffcfd;
			}
		}
	label_058ffcdf: ;
	label_058ffcfd: ;
		pIVar8.Dispose();
		return pSVar6;
	}

	[Token(Token = "0x600136C")]
	[Address(RVA = "0x5800680", Offset = "0x57FF680", VA = "0x5800680")]
	public static JSONArray AllowedBadges(JSONNode requested, IEnumerable<string> roles)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges): 10 lines keep C-only constructs
		uint uVar1;
		Il2CppClass pIVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		bool bVar4;
		sbyte cVar5;
		MethodInfo method_00;
		HashSet<string> __this;
		JSONNode pSVar6;
		object pIVar7;
		VirtualInvokeData pVVar8;
		object item;
		long plVar9;
		String value;
		ulong uVar10;
		long lVar11;
		object local_58;
		JSONArray local_50;
		IEnumerable<string> local_48;
		byte local_38;

		local_48 = roles;
		if (Il2CppMethodInitialized_07545624 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07545624 = true;
		}
		local_58 = null;
		local_50 = new JSONArray();
		bVar4 = (requested == null);
		if (bVar4) {
			return local_50;
		}
		if (requested != null) {
			method_00 = (MethodInfo)requested.get_Children();
			__this = AottgProfileEntitlementCatalog.IdSet((IEnumerable<JSONNode>)method_00);
			pSVar6 = AottgProfileEntitlementCatalog.Root();
			if (pSVar6 == null) {
				pSVar6 = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				pSVar6 = pSVar6.get_Item("Badges");
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar4 = (pSVar6 == null);
			if (bVar4) {
				return local_50;
			}
			if ((pSVar6 != null) &&(pIVar7 = (object)pSVar6.get_Children(), pIVar7 != null)) {
				pIVar2 = pIVar7.klass;
				uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
				pIVar7 = pIVar7.Dispose();
				local_38 = (byte)&local_58;
				do {
					local_58 = pIVar7;
					if (pIVar7 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = pIVar7.klass;
					uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
					cVar5 = pIVar7.Dispose();
					pIVar7 = local_58;
					if (cVar5 == false) {
						if (local_58 == null) {
							return local_50;
						}
						pIVar2 = local_58.klass;
						uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
						if (uVar10 == 0) goto label_05900abf;
						pIVar3 = (pIVar2._1).interfaceOffsets;
						lVar11 = 0;
						goto label_05900ab0;
					}
					if (local_58 == null) {
						throw new NullReferenceException();
					}
					pIVar2 = local_58.klass;
					uVar10 = (ulong)(pIVar2._2).interface_offsets_count;
					item = pIVar7.Dispose();
					if (item == null) {
						throw new NullReferenceException();
					}
					plVar9 = (long)(*item.klass.vtable[7].methodPtr)(item,"id",item.klass.vtable[7].method);
					if (plVar9 == null) {
						throw new NullReferenceException();
					}
					value = (String)(**(code*)(*plVar9 + 0x1c8))(plVar9,*(ulong)(*plVar9 + 0x1d0));
					if (__this == null) {
						throw new NullReferenceException();
					}
					bVar4 = __this.Contains((object)value);
					pIVar7 = local_58;
					if (((bVar4) &&(bVar4 = AottgProfileEntitlementCatalog.RoleAllowed((JSONNode)item, local_48), pIVar7 = local_58, bVar4)) &&(bVar4 = AottgProfileEntitlementCatalog.Contains(local_50, value), pIVar7 = local_58, !bVar4)) {
						pSVar6 = ((JSONNode)value);
						if (local_50 == null) {
							throw new NullReferenceException();
						}
						local_50.Add(pSVar6);
						pIVar7 = local_58;
					}
				} while(true);
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar11 = lVar11 + 0x10;
			if (!(uVar10 * 0x10 != lVar11)) break;
	label_05900ab0: ;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar11) == typeof(IDisposable)) {
				pVVar8 = pIVar2.vtable + *(int)((long)&pIVar3.offset + lVar11);
				goto label_05900add;
			}
		}
	label_05900abf: ;
	label_05900add: ;
		pIVar7.Dispose();
		return local_50;
	}

	[Token(Token = "0x600136D")]
	[Address(RVA = "0x5800F50", Offset = "0x57FFF50", VA = "0x5800F50")]
	public static string[] OrderedBadgeIds(IEnumerable<string> requested)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$OrderedBadgeIds): 24 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		bool bVar6;
		sbyte cVar7;
		HashSet<string> __this;
		MethodInfo __this_00;
		JSONNode pSVar8;
		String[] pSVar9;
		Il2CppClass pIVar10;
		object pIVar11;
		VirtualInvokeData pVVar12;
		long plVar13;
		String item;
		ulong uVar14;
		MethodInfo pMVar15;
		long lVar16;
		object local_48;
		byte local_38;

		if (Il2CppMethodInitialized_07545625 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains) ;
			Il2CppMethodInitialized_07545625 = true;
		}
		pMVar15 = MethodInfo_System_Array_Empty_string;
		local_48 = null;
		if (requested == null) {
			if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
				pIVar10 = *(Il2CppClass*)((long)(pMVar15.field7_0x38).methodMetadataHandle + 0x10);
				bVar2 = (pIVar10._2).bitflags1;
			}
			else {
				pIVar10 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
				bVar2 = (pIVar10._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
				uVar3 = (pIVar10._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar3 = *(uint)((long)pIVar10 + 0xe4);
			}
			if (uVar3 == 0) {
				pIVar10 = (pMVar15.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar10._2).bitflags1;
			}
			else {
				pIVar10 = (pMVar15.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar10._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			}
			return *(String[]*)pIVar10.static_fields;
		}
		__this = AottgProfileEntitlementCatalog.IdSet(requested);
		pMVar15 = __this_00;
		__this_00 = new List<string>();
		pSVar8 = AottgProfileEntitlementCatalog.Root();
		if (pSVar8 == null) {
			pSVar8 = null;
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar8 = pSVar8.get_Item("Badges");
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar6 = (pSVar8 == null);
		if (bVar6) {
			if (__this_00 != null) {
				pSVar9 = (String[])__this_00.ToArray();
				return pSVar9;
			}
		}
		else if ((pSVar8 != null) &&(pIVar11 = (object)pSVar8.get_Children(), pIVar11 != null)) {
			pIVar10 = pIVar11.klass;
			uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
			pIVar11 = pIVar11.Dispose();
			local_38 = (byte)&local_48;
	joined_r0x0590124b: ;
			do {
				local_48 = pIVar11;
				if (pIVar11 == null) {
					throw new NullReferenceException();
				}
				pIVar10 = pIVar11.klass;
				uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
				cVar7 = pIVar11.Dispose();
				pIVar11 = local_48;
				if (cVar7 == false) {
					if (local_48 == null) goto label_05901496;
					pIVar10 = local_48.klass;
					uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
					if (uVar14 == 0) goto label_0590146f;
					pIVar5 = (pIVar10._1).interfaceOffsets;
					lVar16 = 0;
					goto label_05901460;
				}
				if (local_48 == null) {
					throw new NullReferenceException();
				}
				pIVar10 = local_48.klass;
				uVar14 = (ulong)(pIVar10._2).interface_offsets_count;
				pIVar11 = pIVar11.Dispose();
				if (pIVar11 == null) {
					throw new NullReferenceException();
				}
				plVar13 = (long)(*pIVar11.klass.vtable[7].methodPtr)(pIVar11,"id",pIVar11.klass.vtable[7].method);
				if (plVar13 == null) {
					throw new NullReferenceException();
				}
				item = (String)(**(code*)(*plVar13 + 0x1c8))(plVar13,*(ulong)(*plVar13 + 0x1d0));
				if (__this == null) {
					throw new NullReferenceException();
				}
				bVar6 = __this.Contains((object)item);
				pMVar15 = MethodInfo_System_Collections_Generic_List_string_Add;
				pIVar11 = local_48;
			} while (!bVar6);
			if (__this_00 != null) {
				piVar1 = (int)((long)&__this_00.name + 4);
				*piVar1 = *piVar1 + 1;
				pSVar9 = ((List<string>)&__this_00.invoker_method)._items;
				if (pSVar9 != null) {
					uVar4 = *(uint)&__this_00.name;
					if (uVar4 < (uint)pSVar9.Length) {
						*(uint)&__this_00.name = uVar4 + 1;
						pSVar9[(int)uVar4] = item;
						pIVar11 = local_48;
					}
					else {
						__this_00.AddWithResize((object)item);
						pIVar11 = local_48;
					}
					goto joined_r0x0590124b;
				}
			}
			throw new NullReferenceException();
		}
		goto label_059014df;
		while (true) {
			lVar16 = lVar16 + 0x10;
			if (!(uVar14 * 0x10 != lVar16)) break;
	label_05901460: ;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar16) == typeof(IDisposable)) {
				pVVar12 = (VirtualInvokeData)&pIVar10.vtable[*(int)((long)&pIVar5.offset + lVar16)].methodPtr;
				goto label_0590148d;
			}
		}
	label_0590146f: ;
	label_0590148d: ;
		pIVar11.Dispose();
	label_05901496: ;
		if (__this_00 != null) {
			pSVar9 = (String[])__this_00.ToArray();
			return pSVar9;
		}
	label_059014df: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600136E")]
	[Address(RVA = "0x5801940", Offset = "0x5800940", VA = "0x5801940")]
	public static JSONNode AllowedPresetGuild(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedPresetGuild): clean
		String group;
		bool bVar1;
		JSONNode pSVar2;
		JSONString __this;

		group = "PresetGuilds";
		pSVar2 = AottgProfileEntitlementCatalog.Find(group, id);
		bVar1 = (pSVar2 != null);
		if (bVar1) {
			bVar1 = AottgProfileEntitlementCatalog.IsAllowed(pSVar2);
			if (bVar1) {
				__this = new JSONString(id);
				return (JSONNode)__this;
			}
		}
		pSVar2 = (JSONNode)JSONNull.CreateOrGet();
		return pSVar2;
	}

	[Token(Token = "0x600136F")]
	[Address(RVA = "0x5801A40", Offset = "0x5800A40", VA = "0x5801A40")]
	public static bool IsSupporter()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsSupporter): clean
		uint uVar1;
		bool bVar2;
		MethodInfo method_00;

		if (Il2CppMethodInitialized_07545627 == false) {
			Il2CppMethodInitialized_07545627 = true;
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = (typeof(AccountManager)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
			bVar2 = AccountManager.IsLoggedIn;
		}
		else {
			bVar2 = AccountManager.IsLoggedIn;
		}
		if (bVar2) {
			method_00 = (MethodInfo)AottgProfileEntitlementCatalog.PatreonValue("patronStatus");
			bVar2 = String.Equals((String)method_00, "active_patron", 5);
			if (bVar2) {
				bVar2 = AottgProfileEntitlementCatalog.HasAnyPatreonTier();
				return bVar2;
			}
		}
		return false;
	}

	[Token(Token = "0x6001370")]
	[Address(RVA = "0x5801D80", Offset = "0x5800D80", VA = "0x5801D80")]
	public static List<AottgProfileEntitlementOption> AllowedPresetGuilds()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedPresetGuilds): clean
		List<AottgProfileEntitlementOption> pSVar1;

		pSVar1 = AottgProfileEntitlementCatalog.AllowedOptions("PresetGuilds") ;
		return pSVar1;
	}

	[Token(Token = "0x6001371")]
	[Address(RVA = "0x58022C0", Offset = "0x58012C0", VA = "0x58022C0")]
	public static List<AottgProfileEntitlementOption> VisiblePresetGuilds()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisiblePresetGuilds): clean
		List<AottgProfileEntitlementOption> pSVar1;

		pSVar1 = AottgProfileEntitlementCatalog.VisibleOptions("PresetGuilds") ;
		return pSVar1;
	}

	[Token(Token = "0x6001372")]
	[Address(RVA = "0x58027D0", Offset = "0x58017D0", VA = "0x58027D0")]
	public static List<AottgProfileEntitlementOption> AllowedBadges()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedBadges): clean
		List<AottgProfileEntitlementOption> pSVar1;

		pSVar1 = AottgProfileEntitlementCatalog.AllowedOptions("Badges") ;
		return pSVar1;
	}

	[Token(Token = "0x6001373")]
	[Address(RVA = "0x5802800", Offset = "0x5801800", VA = "0x5802800")]
	public static List<AottgProfileEntitlementOption> VisibleBadges()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleBadges): clean
		List<AottgProfileEntitlementOption> pSVar1;

		pSVar1 = AottgProfileEntitlementCatalog.VisibleOptions("Badges") ;
		return pSVar1;
	}

	[Token(Token = "0x6001374")]
	[Address(RVA = "0x5802830", Offset = "0x5801830", VA = "0x5802830")]
	public static string PresetGuildIdForLabel(string label)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PresetGuildIdForLabel): clean
		String pSVar1;

		pSVar1 = AottgProfileEntitlementCatalog.IdForLabel("PresetGuilds", label);
		return pSVar1;
	}

	[Token(Token = "0x6001375")]
	[Address(RVA = "0x5801DB0", Offset = "0x5800DB0", VA = "0x5801DB0")]
	private static List<AottgProfileEntitlementOption> AllowedOptions(string group)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$AllowedOptions): 20 lines keep C-only constructs
		int piVar1;
		String* ppSVar2;
		uint uVar3;
		uint uVar4;
		Il2CppClass pIVar5;
		Il2CppRuntimeInterfaceOffsetPair pIVar6;
		AottgProfileEntitlementOption[] pGVar7;
		AottgProfileEntitlementOption item;
		bool bVar8;
		sbyte cVar9;
		MethodInfo __this;
		JSONNode pSVar10;
		object pIVar11;
		VirtualInvokeData pVVar12;
		object item_00;
		long plVar13;
		ulong uVar14;
		MethodInfo pMVar15;
		long lVar16;
		object local_90;
		AottgProfileEntitlementOption local_88;
		object* local_60;

		local_90 = null;
		__this = new List<AottgProfileEntitlementOption>();
		pSVar10 = AottgProfileEntitlementCatalog.Root();
		if (pSVar10 == null) {
			pSVar10 = null;
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar10 = pSVar10.get_Item(group);
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar8 = (pSVar10 == null);
		if (bVar8) {
			return (List<AottgProfileEntitlementOption>)__this;
		}
		if ((pSVar10 == null) ||(pIVar11 = (object)pSVar10.get_Children(), pIVar11 == null)) {
			throw new NullReferenceException();
		}
		pIVar5 = pIVar11.klass;
		uVar14 = (ulong)(pIVar5._2).interface_offsets_count;
		pIVar11 = pIVar11.Dispose();
		local_60 = &local_90;
	joined_r0x05901f86: ;
		do {
			local_90 = pIVar11;
			if (pIVar11 == null) {
				throw new NullReferenceException();
			}
			pIVar5 = pIVar11.klass;
			uVar14 = (ulong)(pIVar5._2).interface_offsets_count;
			cVar9 = pIVar11.Dispose();
			pIVar11 = local_90;
			if (cVar9 == false) {
				if (local_90 == null) {
					return (List<AottgProfileEntitlementOption>)__this;
				}
				pIVar5 = local_90.klass;
				uVar14 = (ulong)(pIVar5._2).interface_offsets_count;
				if (uVar14 == 0) goto label_059021ff;
				pIVar6 = (pIVar5._1).interfaceOffsets;
				lVar16 = 0;
				goto label_059021f0;
			}
			if (local_90 == null) {
				throw new NullReferenceException();
			}
			pIVar5 = local_90.klass;
			uVar14 = (ulong)(pIVar5._2).interface_offsets_count;
			item_00 = pIVar11.Dispose();
			if (item_00 == null) {
				throw new NullReferenceException();
			}
			plVar13 = (long)(*item_00.klass.vtable[7].methodPtr)(item_00,"id",item_00.klass.vtable[7].method);
			if (plVar13 == null) {
				throw new NullReferenceException();
			}
			pMVar15 = *(MethodInfo*)(*plVar13 + 0x1d0);
			(**(code*)(*plVar13 + 0x1c8))(plVar13);
			bVar8 = AottgProfileEntitlementCatalog.IsAllowed((JSONNode)item_00);
			pIVar11 = local_90;
		} while (!bVar8);
		local_88 = AottgProfileEntitlementCatalog.Option(group, (JSONNode)item_00, true);
		if (__this != null) {
			piVar1 = (int)((long)&__this.name + 4);
			*piVar1 = *piVar1 + 1;
			pGVar7 = ((List<AottgProfileEntitlementOption>)&__this.invoker_method )._items;
			if (pGVar7 != null) {
				uVar4 = *(uint)&__this.name;
				if (uVar4 < (uint)pGVar7.Length) {
					*(uint)&__this.name = uVar4 + 1;
					ppSVar2 = &pGVar7[(int)uVar4].Icon;
					*ppSVar2 = local_88.Icon;
					ppSVar2[1] = (String)local_88._24_8_;
					pGVar7[(int)uVar4].Id = local_88.Id;
					pGVar7[(int)uVar4].Label = local_88.Label;
					pIVar11 = local_90;
				}
				else {
					item.Label = local_88.Label;
					item.Id = local_88.Id;
					item.Icon = local_88.Icon;
					item.Enabled = local_88.Enabled;
					item._25_7_ = local_88._25_7_;
					__this.AddWithResize(item);
					pIVar11 = local_90;
				}
				goto joined_r0x05901f86;
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar16 = lVar16 + 0x10;
			if (!(uVar14 * 0x10 != lVar16)) break;
	label_059021f0: ;
			if (*(IDisposable*)((long)&pIVar6.interfaceType + lVar16) == typeof(IDisposable)) {
				pVVar12 = (VirtualInvokeData)&pIVar5.vtable[*(int)((long)&pIVar6.offset + lVar16)].methodPtr;
				goto label_0590221d;
			}
		}
	label_059021ff: ;
	label_0590221d: ;
		pIVar11.Dispose();
		return (List<AottgProfileEntitlementOption>)__this;
	}

	[Token(Token = "0x6001376")]
	[Address(RVA = "0x58022F0", Offset = "0x58012F0", VA = "0x58022F0")]
	private static List<AottgProfileEntitlementOption> VisibleOptions(string group)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleOptions): 17 lines keep C-only constructs
		int piVar1;
		String* ppSVar2;
		uint uVar3;
		uint uVar4;
		Il2CppClass pIVar5;
		Il2CppRuntimeInterfaceOffsetPair pIVar6;
		AottgProfileEntitlementOption[] pGVar7;
		AottgProfileEntitlementOption item;
		bool bVar8;
		sbyte cVar9;
		bool bVar10;
		MethodInfo __this;
		JSONNode pSVar11;
		object pIVar12;
		VirtualInvokeData pVVar13;
		object item_00;
		ulong uVar14;
		long lVar16;
		object local_90;
		AottgProfileEntitlementOption local_88;
		object* local_60;

		local_90 = null;
		__this = new List<AottgProfileEntitlementOption>();
		pSVar11 = AottgProfileEntitlementCatalog.Root();
		if (pSVar11 == null) {
			pSVar11 = null;
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			pSVar11 = pSVar11.get_Item(group);
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar8 = (pSVar11 == null);
		if (bVar8) {
			return (List<AottgProfileEntitlementOption>)__this;
		}
		if ((pSVar11 == null) ||(pIVar12 = (object)pSVar11.get_Children(), pIVar12 == null)) {
			throw new NullReferenceException();
		}
		pIVar5 = pIVar12.klass;
		uVar14 = (ulong)(pIVar5._2).interface_offsets_count;
		pIVar12 = pIVar12.Dispose();
		local_60 = &local_90;
	joined_r0x059024c6: ;
		do {
			local_90 = pIVar12;
			if (pIVar12 == null) {
				throw new NullReferenceException();
			}
			pIVar5 = pIVar12.klass;
			uVar14 = (ulong)(pIVar5._2).interface_offsets_count;
			cVar9 = pIVar12.Dispose();
			pIVar12 = local_90;
			if (cVar9 == false) {
				if (local_90 == null) {
					return (List<AottgProfileEntitlementOption>)__this;
				}
				pIVar5 = local_90.klass;
				uVar14 = (ulong)(pIVar5._2).interface_offsets_count;
				if (uVar14 == 0) goto label_0590271f;
				pIVar6 = (pIVar5._1).interfaceOffsets;
				lVar16 = 0;
				goto label_05902710;
			}
			if (local_90 == null) {
				throw new NullReferenceException();
			}
			pIVar5 = local_90.klass;
			uVar14 = (ulong)(pIVar5._2).interface_offsets_count;
			item_00 = pIVar12.Dispose();
			bVar8 = AottgProfileEntitlementCatalog.IsAllowed((JSONNode)item_00);
		} while ((!bVar8) &&((bVar10 = AottgProfileEntitlementCatalog.HasPatreonRequirement((JSONNode)item_00), pIVar12 = local_90, !bVar10 ||(bVar10 = AottgProfileEntitlementCatalog.HasRoleRequirement((JSONNode)item_00), pIVar12 = local_90, bVar10)))) ;
		local_88 = AottgProfileEntitlementCatalog.Option(group, (JSONNode)item_00, bVar8);
		if (__this != null) {
			piVar1 = (int)((long)&__this.name + 4);
			*piVar1 = *piVar1 + 1;
			pGVar7 = ((List<AottgProfileEntitlementOption>)&__this.invoker_method )._items;
			if (pGVar7 != null) {
				uVar4 = *(uint)&__this.name;
				if (uVar4 < (uint)pGVar7.Length) {
					*(uint)&__this.name = uVar4 + 1;
					ppSVar2 = &pGVar7[(int)uVar4].Icon;
					*ppSVar2 = local_88.Icon;
					ppSVar2[1] = (String)local_88._24_8_;
					pGVar7[(int)uVar4].Id = local_88.Id;
					pGVar7[(int)uVar4].Label = local_88.Label;
					pIVar12 = local_90;
				}
				else {
					item.Label = local_88.Label;
					item.Id = local_88.Id;
					item.Icon = local_88.Icon;
					item.Enabled = local_88.Enabled;
					item._25_7_ = local_88._25_7_;
					__this.AddWithResize(item);
					pIVar12 = local_90;
				}
				goto joined_r0x059024c6;
			}
		}
		throw new NullReferenceException();
		while (true) {
			lVar16 = lVar16 + 0x10;
			if (!(uVar14 * 0x10 != lVar16)) break;
	label_05902710: ;
			if (*(IDisposable*)((long)&pIVar6.interfaceType + lVar16) == typeof(IDisposable)) {
				pVVar13 = (VirtualInvokeData)&pIVar5.vtable[*(int)((long)&pIVar6.offset + lVar16)].methodPtr;
				goto label_0590273d;
			}
		}
	label_0590271f: ;
	label_0590273d: ;
		pIVar12.Dispose();
		return (List<AottgProfileEntitlementOption>)__this;
	}

	[Token(Token = "0x6001377")]
	[Address(RVA = "0x5802AA0", Offset = "0x5801AA0", VA = "0x5802AA0")]
	private static AottgProfileEntitlementOption Option(string group, JSONNode item, bool enabled)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Option): 1 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		String str1;
		String pSVar3;
		String pSVar4;

		if (item != null) {
			pSVar2 = item.get_Item("id");
			if (pSVar2 != null) {
				str1 = pSVar2.get_Value();
				pSVar2 = item.get_Item("label");
				if (pSVar2 != null) {
					pSVar3 = pSVar2.get_Value();
					bVar1 = (group == "Badges");
					if (bVar1) {
						pSVar4 = String.Concat("UI/Icons/Roles/", str1);
					}
					else {
						pSVar4 = (String)**(ulong*)(g_data_07556758 + 0xb8);
					}
					__return_storage_ptr__.Label = null;
					__return_storage_ptr__.Icon = null;
					*(ulong)&__return_storage_ptr__.Enabled = 0;
					__return_storage_ptr__.Id = str1;
					__return_storage_ptr__.Label = pSVar3;
					__return_storage_ptr__.Icon = pSVar4;
					__return_storage_ptr__.Enabled = enabled;
					return __return_storage_ptr__;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6001378")]
	[Address(RVA = "0x5802870", Offset = "0x5801870", VA = "0x5802870")]
	private static string IdForLabel(string group, string label)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdForLabel): 1 lines keep C-only constructs
		object pIVar1;
		bool bVar2;
		List<AottgProfileEntitlementOption> __this;
		System_Collections_Generic_List_Enumerator_T__o SStack_58;
		String pSStack_40;

		SStack_58._current = null;
		pSStack_40 = null;
		SStack_58._list = null;
		SStack_58._index = 0;
		SStack_58._version = 0;
		__this = AottgProfileEntitlementCatalog.AllowedOptions(group);
		if (__this == null) {
			throw new NullReferenceException();
		}
		SStack_58 = __this.GetEnumerator();
		do {
			bVar2 = SStack_58.MoveNext();
			pIVar1 = SStack_58._current;
			if (!bVar2) {
				SStack_58.Dispose();
				return (String)**(ulong*)(g_data_07556758 + 0xb8);
			}
			bVar2 = String.Equals(pSStack_40, label, 5);
		} while (!bVar2);
		SStack_58.Dispose();
		return (String)pIVar1;
	}

	[Token(Token = "0x6001379")]
	[Address(RVA = "0x58002C0", Offset = "0x57FF2C0", VA = "0x58002C0")]
	private static bool IsAllowed(string group, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsAllowed): clean
		bool bVar1;
		JSONNode a;

		a = AottgProfileEntitlementCatalog.Find(group, id);
		bVar1 = (a != null);
		if (bVar1) {
			bVar1 = AottgProfileEntitlementCatalog.IsAllowed(a);
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x600137A")]
	[Address(RVA = "0x5802A00", Offset = "0x5801A00", VA = "0x5802A00")]
	private static bool IsAllowed(JSONNode item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IsAllowed): clean
		bool bVar1;

		bVar1 = (item != null);
		if (bVar1) {
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
				bVar1 = AccountManager.IsLoggedIn;
			}
			else {
				bVar1 = AccountManager.IsLoggedIn;
			}
			if ((bVar1) &&(bVar1 = AottgProfileEntitlementCatalog.RoleAllowed(item))) {
				bVar1 = AottgProfileEntitlementCatalog.PatreonAllowed(item);
				return bVar1;
			}
		}
		return false;
	}

	[Token(Token = "0x600137B")]
	[Address(RVA = "0x5802C20", Offset = "0x5801C20", VA = "0x5802C20")]
	private static bool VisibleWhenLocked(JSONNode item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$VisibleWhenLocked): clean
		bool bVar1;

		bVar1 = AottgProfileEntitlementCatalog.HasPatreonRequirement(item);
		if (bVar1) {
			bVar1 = AottgProfileEntitlementCatalog.HasRoleRequirement(item);
			return !bVar1;
		}
		return false;
	}

	[Token(Token = "0x600137C")]
	[Address(RVA = "0x57FF250", Offset = "0x57FE250", VA = "0x57FF250")]
	private static JSONNode Find(string group, string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Find): 3 lines keep C-only constructs
		uint uVar1;
		object __this;
		bool bVar4;
		JSONNode pSVar5;
		object pIVar6;
		long plVar8;
		String a;
		object local_48;
		byte local_38;

		local_48 = null;
		pIVar6 = null;
		bVar4 = String.IsNullOrWhiteSpace(id);
		if (!bVar4) {
			pSVar5 = AottgProfileEntitlementCatalog.Root();
			if (pSVar5 == null) {
				pSVar5 = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				pSVar5 = pSVar5.get_Item(group);
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			pIVar6 = null;
			bVar4 = (pSVar5 == null);
			if (!bVar4) {
				if ((pSVar5 == null) ||(pIVar6 = (object)pSVar5.get_Children(), pIVar6 == null)) {
					throw new NullReferenceException();
				}
				local_48 = pIVar6.Dispose();
				local_38 = (byte)&local_48;
				do {
					pIVar6 = local_48;
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					bVar4 = pIVar6.Dispose();
					pIVar6 = local_48;
					if (!bVar4) {
						pIVar6 = null;
						if (local_48 == null) {
							return null;
						}
						goto label_058ff5b0;
					}
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					pIVar6 = pIVar6.Dispose();
					if (pIVar6 == null) {
						throw new NullReferenceException();
					}
					plVar8 = (long)(*pIVar6.klass.vtable[7].methodPtr)(pIVar6,"id",pIVar6.klass.vtable[7].method);
					if (plVar8 == null) {
						throw new NullReferenceException();
					}
					a = (String)(**(code*)(*plVar8 + 0x1c8))(plVar8,*(ulong)(*plVar8 + 0x1d0));
					bVar4 = String.Equals(a, id, 5);
				} while (!bVar4);
				if (local_48 != null) {
	label_058ff5b0: ;
					__this = local_48;
					__this.Dispose();
				}
			}
		}
		return (JSONNode)pIVar6;
	}

	[Token(Token = "0x600137D")]
	[Address(RVA = "0x5802C90", Offset = "0x5801C90", VA = "0x5802C90")]
	private static bool RoleAllowed(JSONNode item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$RoleAllowed): 16 lines keep C-only constructs
		byte bVar1;
		MethodInfo pMVar3;
		bool bVar4;
		bool bVar5;
		int iVar6;
		JSONNode a;
		String[] roles;
		Il2CppClass pIVar7;
		object pIVar8;
		byte[] auVar12 = new byte[16];
		object local_48;
		byte local_38;

		local_48 = null;
		if (item == null) goto label_059030cd;
		a = item.get_Item("requiredRoles");
		bVar4 = (a == null);
		if (bVar4) {
			return true;
		}
		if (a == null) goto label_059030cd;
		iVar6 = a.get_Count();
		if (iVar6 == 0) {
			return true;
		}
		roles = AccountManager.Roles;
		pMVar3 = MethodInfo_System_Array_Empty_string;
		if (roles == null) {
			if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
				pIVar7 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
				if (((pIVar7._2).bitflags1 & 1) == 0) goto label_0590308a;
	label_05902de4: ;
				if ((pIVar7._2).cctor_finished_or_no_cctor != 0) goto label_05902df1;
	label_0590309f: ;
				pIVar7 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar7._2).bitflags1;
			}
			else {
				pIVar7 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
				if (((pIVar7._2).bitflags1 & 1) != 0) goto label_05902de4;
	label_0590308a: ;
				pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
				if ((pIVar7._2).cctor_finished_or_no_cctor == 0) goto label_0590309f;
	label_05902df1: ;
				pIVar7 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar7._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar7 = il2cpp_codegen_class_init_checked(pIVar7);
			}
			roles = *(String[]*)pIVar7.static_fields;
		}
		pIVar8 = (object)a.get_Children();
		if (pIVar8 != null) {
			pIVar7 = pIVar8.klass;
			local_48 = pIVar8.Dispose();
			local_38 = (byte)&local_48;
			do {
				pIVar8 = local_48;
				if (local_48 == null) {
					throw new NullReferenceException();
				}
				pIVar7 = local_48.klass;
				bVar4 = pIVar8.Dispose();
				pIVar8 = local_48;
				if (!bVar4) {
					bVar4 = false;
					if (local_48 == null) {
						return false;
					}
					goto label_05902ff5;
				}
				if (local_48 == null) {
					throw new NullReferenceException();
				}
				pIVar7 = local_48.klass;
				pIVar8 = pIVar8.Dispose();
				if (pIVar8 == null) {
					throw new NullReferenceException();
				}
				auVar12 = (*pIVar8.klass.vtable[9].methodPtr)(pIVar8,pIVar8.klass.vtable[9].method);
				bVar5 = AottgProfileEntitlementCatalog.HasRole((IEnumerable<string>)roles, auVar12._0_8_);
			} while (!bVar5);
			if (local_48 != null) {
	label_05902ff5: ;
				pIVar8 = local_48;
				pIVar7 = local_48.klass;
				pIVar8.Dispose();
			}
			return bVar4;
		}
	label_059030cd: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600137E")]
	[Address(RVA = "0x5800B90", Offset = "0x57FFB90", VA = "0x5800B90")]
	private static bool RoleAllowed(JSONNode item, IEnumerable<string> roles)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$RoleAllowed): 4 lines keep C-only constructs
		bool bVar3;
		bool bVar4;
		int iVar5;
		JSONNode a;
		object pIVar6;
		byte[] auVar10 = new byte[16];
		object local_48;
		byte local_38;

		local_48 = null;
		if (item == null) {
	label_05900eec: ;
			throw new NullReferenceException();
		}
		a = item.get_Item("requiredRoles");
		bVar3 = (a == null);
		bVar4 = true;
		if (!bVar3) {
			if (a == null) goto label_05900eec;
			iVar5 = a.get_Count();
			if (iVar5 != 0) {
				pIVar6 = (object)a.get_Children();
				if (pIVar6 == null) goto label_05900eec;
				local_48 = pIVar6.Dispose();
				local_38 = (byte)&local_48;
				do {
					pIVar6 = local_48;
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					bVar4 = pIVar6.Dispose();
					pIVar6 = local_48;
					if (!bVar4) {
						bVar4 = false;
						break;
					}
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					pIVar6 = pIVar6.Dispose();
					if (pIVar6 == null) {
						throw new NullReferenceException();
					}
					auVar10 = (*pIVar6.klass.vtable[9].methodPtr)(pIVar6,pIVar6.klass.vtable[9].method);
					bVar3 = AottgProfileEntitlementCatalog.HasRole(roles, auVar10._0_8_);
					pIVar6 = local_48;
				} while (!bVar3);
				if (pIVar6 != null) {
					local_48 = pIVar6;
					pIVar6.Dispose();
				}
			}
		}
		return bVar4;
	}

	[Token(Token = "0x600137F")]
	[Address(RVA = "0x5803130", Offset = "0x5802130", VA = "0x5803130")]
	private static bool PatreonAllowed(JSONNode item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PatreonAllowed): 5 lines keep C-only constructs
		bool bVar3;
		bool bVar4;
		int iVar5;
		JSONNode a;
		String pSVar6;
		object pIVar7;
		object pIVar9;
		MethodInfo pMVar10;
		object local_48;
		byte local_38;

		local_48 = null;
		if (item == null) {
	label_0590351c: ;
			throw new NullReferenceException();
		}
		a = item.get_Item("requiredPatreonTierIds");
		bVar3 = (a == null);
		bVar4 = true;
		if (!bVar3) {
			if (a == null) goto label_0590351c;
			pMVar10 = (a.klass.vtable)._11_get_Count.method;
			iVar5 = a.get_Count();
			if (iVar5 != 0) {
				pSVar6 = AottgProfileEntitlementCatalog.PatreonValue("patronStatus");
				bVar4 = false;
				bVar3 = String.Equals(pSVar6, "active_patron", 5);
				if (bVar3) {
					pIVar7 = (object)a.get_Children();
					if (pIVar7 == null) goto label_0590351c;
					local_48 = pIVar7.Dispose();
					local_38 = (byte)&local_48;
					do {
						pIVar7 = local_48;
						if (local_48 == null) {
							throw new NullReferenceException();
						}
						bVar4 = pIVar7.Dispose();
						pIVar7 = local_48;
						if (!bVar4) {
							bVar4 = false;
							break;
						}
						if (local_48 == null) {
							throw new NullReferenceException();
						}
						pIVar9 = pIVar7.Dispose();
						if (pIVar9 == null) {
							throw new NullReferenceException();
						}
						pMVar10 = (MethodInfo)(*pIVar9.klass.vtable[9].methodPtr)(pIVar9,pIVar9.klass.vtable[9].method);
						bVar3 = ((String)pMVar10 == "*");
						if ((bVar3) &&(bVar3 = AottgProfileEntitlementCatalog.HasAnyPatreonTier(), pIVar7 = local_48, bVar3)) break;
						pMVar10 = pIVar9.klass.vtable[9].method;
						pSVar6 = (String)(*pIVar9.klass.vtable[9].methodPtr)(pIVar9);
						bVar3 = AottgProfileEntitlementCatalog.HasPatreonTier(pSVar6);
						pIVar7 = local_48;
					} while (!bVar3);
					if (pIVar7 != null) {
						local_48 = pIVar7;
						pIVar7.Dispose();
					}
				}
			}
		}
		return bVar4;
	}

	[Token(Token = "0x6001380")]
	[Address(RVA = "0x5803630", Offset = "0x5802630", VA = "0x5803630")]
	private static bool HasRoleRequirement(JSONNode item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasRoleRequirement): clean
		bool bVar1;
		int iVar2;
		JSONNode a;
		bool bVar3;

		if (item == null) {
	label_059036d5: ;
			throw new NullReferenceException();
		}
		a = item.get_Item("requiredRoles");
		bVar1 = (a != null);
		if (bVar1) {
			if (a == null) goto label_059036d5;
			iVar2 = a.get_Count();
			bVar3 = 0 < iVar2;
		}
		return bVar3;
	}

	[Token(Token = "0x6001381")]
	[Address(RVA = "0x5803580", Offset = "0x5802580", VA = "0x5803580")]
	private static bool HasPatreonRequirement(JSONNode item)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasPatreonRequirement): clean
		bool bVar1;
		int iVar2;
		JSONNode a;
		bool bVar3;

		if (item == null) {
	label_05903625: ;
			throw new NullReferenceException();
		}
		a = item.get_Item("requiredPatreonTierIds");
		bVar1 = (a != null);
		if (bVar1) {
			if (a == null) goto label_05903625;
			iVar2 = a.get_Count();
			bVar3 = 0 < iVar2;
		}
		return bVar3;
	}

	[Token(Token = "0x6001382")]
	[Address(RVA = "0x5801B00", Offset = "0x5800B00", VA = "0x5801B00")]
	private static string PatreonValue(string key)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$PatreonValue): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		pSVar2 = AccountManager.Patreon;
		bVar1 = (pSVar2 != null);
		if (bVar1) {
			pSVar2 = AccountManager.Patreon;
			if (pSVar2 != null) {
				pSVar2 = pSVar2.get_Item(key);
				bVar1 = (pSVar2 != null);
				if (!bVar1) goto label_05901c37;
				pSVar2 = AccountManager.Patreon;
				if (pSVar2 != null) {
					pSVar2 = pSVar2.get_Item(key);
					if (pSVar2 != null) {
						return pSVar3;
					}
				}
			}
			throw new NullReferenceException();
		}
	label_05901c37: ;
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x6001383")]
	[Address(RVA = "0x5801C60", Offset = "0x5800C60", VA = "0x5801C60")]
	private static bool HasAnyPatreonTier()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasAnyPatreonTier): clean
		bool bVar1;
		bool bVar2;
		int iVar3;
		JSONNode pSVar4;
		JSONNode a;

		pSVar4 = AccountManager.Patreon;
		a = null;
		bVar1 = (pSVar4 != null);
		if (bVar1) {
			pSVar4 = AccountManager.Patreon;
			if (pSVar4 == null) goto label_05901d76;
			a = pSVar4.get_Item("tierIds");
		}
		bVar1 = false;
		bVar2 = (a != null);
		if (bVar2) {
			if (a == null) {
	label_05901d76: ;
				throw new NullReferenceException();
			}
			iVar3 = a.get_Count();
			bVar1 = 0 < iVar3;
		}
		return bVar1;
	}

	[Token(Token = "0x6001384")]
	[Address(RVA = "0x58037D0", Offset = "0x58027D0", VA = "0x58037D0")]
	private static bool HasPatreonTier(string id)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasPatreonTier): 2 lines keep C-only constructs
		bool bVar3;
		bool bVar4;
		JSONNode pSVar5;
		JSONNode a;
		object pIVar6;
		String a_00;
		object local_48;
		byte local_38;

		local_48 = null;
		bVar4 = false;
		bVar3 = String.IsNullOrWhiteSpace(id);
		if (!bVar3) {
			pSVar5 = AccountManager.Patreon;
			a = null;
			bVar4 = (pSVar5 != null);
			if (bVar4) {
				pSVar5 = AccountManager.Patreon;
				if (pSVar5 == null) goto label_05903b9c;
				a = pSVar5.get_Item("tierIds");
			}
			bVar4 = false;
			bVar3 = (a == null);
			if (!bVar3) {
				if ((a == null) ||(pIVar6 = (object)a.get_Children(), pIVar6 == null)) {
	label_05903b9c: ;
					throw new NullReferenceException();
				}
				local_48 = pIVar6.Dispose();
				local_38 = (byte)&local_48;
				do {
					pIVar6 = local_48;
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					bVar4 = pIVar6.Dispose();
					pIVar6 = local_48;
					if (!bVar4) {
						bVar4 = false;
						break;
					}
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					pIVar6 = pIVar6.Dispose();
					if (pIVar6 == null) {
						throw new NullReferenceException();
					}
					a_00 = (String)(*pIVar6.klass.vtable[9].methodPtr)(pIVar6,pIVar6.klass.vtable[9].method);
					bVar3 = String.Equals(a_00, id, 5);
					pIVar6 = local_48;
				} while (!bVar3);
				if (pIVar6 != null) {
					local_48 = pIVar6;
					pIVar6.Dispose();
				}
			}
		}
		return bVar4;
	}

	[Token(Token = "0x6001385")]
	[Address(RVA = "0x5800220", Offset = "0x57FF220", VA = "0x5800220")]
	private static JSONNode Root()
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Root): clean
		bool bVar1;
		Object x;
		JSONNode pSVar2;

		x = (Object)Resources.Load<TextAsset>("Data/Info/ProfileEntitlementInfo");
		bVar1 = (x != null);
		if (bVar1) {
			if (x == null) {
				throw new NullReferenceException();
			}
			return pSVar2;
		}
		return null;
	}

	[Token(Token = "0x6001386")]
	[Address(RVA = "0x5800340", Offset = "0x57FF340", VA = "0x5800340")]
	private static bool Contains(JSONArray array, string value)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$Contains): 2 lines keep C-only constructs
		bool bVar3;
		bool bVar4;
		object pIVar5;
		String a;
		object local_48;
		byte local_38;

		if ((array == null) ||(pIVar5 = (object)array.get_Children(), pIVar5 == null )) {
			throw new NullReferenceException();
		}
		local_48 = pIVar5.Dispose();
		local_38 = (byte)&local_48;
		do {
			pIVar5 = local_48;
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			bVar3 = pIVar5.Dispose();
			pIVar5 = local_48;
			if (!bVar3) {
				bVar3 = false;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar5 = pIVar5.Dispose();
			if (pIVar5 == null) {
				throw new NullReferenceException();
			}
			a = (String)(*pIVar5.klass.vtable[9].methodPtr)(pIVar5,pIVar5.klass.vtable[9].method);
			bVar4 = String.Equals(a, value, 5);
			pIVar5 = local_48;
		} while (!bVar4);
		if (pIVar5 != null) {
			local_48 = pIVar5;
			pIVar5.Dispose();
		}
		return bVar3;
	}

	[Token(Token = "0x6001387")]
	[Address(RVA = "0x57FFDB0", Offset = "0x57FEDB0", VA = "0x57FFDB0")]
	private static HashSet<string> IdSet(IEnumerable<JSONNode> ids)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdSet): 9 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		IEnumerable<JSONNode> pSVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Il2CppClass pIVar4;
		sbyte cVar5;
		bool bVar6;
		HashSet<string> __this;
		VirtualInvokeData pVVar7;
		object pIVar8;
		object a;
		String value;
		ulong uVar9;
		long lVar10;
		object local_48;
		byte local_38;

		local_48 = null;
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this = new HashSet<string>((IEqualityComparer<T>)comparer);
		if (ids == null) {
			throw new NullReferenceException();
		}
		pSVar2 = ids.klass;
		uVar9 = (ulong)(pSVar2._2).interface_offsets_count;
		pIVar8 = ids.Dispose();
		local_38 = (byte)&local_48;
		do {
			local_48 = pIVar8;
			if (pIVar8 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = pIVar8.klass;
			uVar9 = (ulong)(pIVar4._2).interface_offsets_count;
			cVar5 = pIVar8.Dispose();
			pIVar8 = local_48;
			if (cVar5 == false) {
				if (local_48 == null) {
					return __this;
				}
				pIVar4 = local_48.klass;
				uVar9 = (ulong)(pIVar4._2).interface_offsets_count;
				if (uVar9 == 0) goto label_0590015f;
				pIVar3 = (pIVar4._1).interfaceOffsets;
				lVar10 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = local_48.klass;
			uVar9 = (ulong)(pIVar4._2).interface_offsets_count;
			a = pIVar8.Dispose();
			bVar6 = ((JSONNode)a != null);
			pIVar8 = local_48;
			if (bVar6) {
				if (a == null) {
					throw new NullReferenceException();
				}
				value = (String)(*a.klass.vtable[9].methodPtr)(a);
				bVar6 = String.IsNullOrWhiteSpace(value);
				pIVar8 = local_48;
				if (!bVar6) {
					pIVar8 = (object)(*a.klass.vtable[9].methodPtr)(a,a.klass.vtable[9].method);
					if (__this == null) {
						throw new NullReferenceException();
					}
					__this.Add(pIVar8);
					pIVar8 = local_48;
				}
			}
		} while(true);
		while (true) {
			lVar10 = lVar10 + 0x10;
			if (!(uVar9 * 0x10 != lVar10)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar10) == typeof(IDisposable)) {
				pVVar7 = pIVar4.vtable + *(int)((long)&pIVar3.offset + lVar10);
				goto label_0590017d;
			}
		}
	label_0590015f: ;
	label_0590017d: ;
		pIVar8.Dispose();
		return __this;
	}

	[Token(Token = "0x6001388")]
	[Address(RVA = "0x5801550", Offset = "0x5800550", VA = "0x5801550")]
	private static HashSet<string> IdSet(IEnumerable<string> ids)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$IdSet): 7 lines keep C-only constructs
		uint uVar1;
		OrdinalIgnoreCaseComparer comparer;
		IEnumerable<string> pSVar2;
		Il2CppRuntimeInterfaceOffsetPair pIVar3;
		Il2CppClass pIVar4;
		sbyte cVar5;
		bool bVar6;
		HashSet<string> __this;
		VirtualInvokeData pVVar7;
		object pIVar8;
		String value;
		ulong uVar9;
		long lVar10;
		object local_48;
		byte local_38;

		local_48 = null;
		if (Il2CppMethodInitialized_07542886 == false) {
			Il2CppMethodInitialized_07542886 = true;
			uVar1 = (typeof(StringComparer)._2).cctor_finished_or_no_cctor;
		}
		else {
			uVar1 = ((typeof(StringComparer))._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		comparer = StringComparer.s_ordinalIgnoreCase;
		__this = new HashSet<string>((IEqualityComparer<T>)comparer);
		if (ids == null) {
			throw new NullReferenceException();
		}
		pSVar2 = ids.klass;
		uVar9 = (ulong)(pSVar2._2).interface_offsets_count;
		pIVar8 = ids.Dispose();
		local_38 = (byte)&local_48;
		do {
			local_48 = pIVar8;
			if (pIVar8 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = pIVar8.klass;
			uVar9 = (ulong)(pIVar4._2).interface_offsets_count;
			cVar5 = pIVar8.Dispose();
			pIVar8 = local_48;
			if (cVar5 == false) {
				if (local_48 == null) {
					return __this;
				}
				pIVar4 = local_48.klass;
				uVar9 = (ulong)(pIVar4._2).interface_offsets_count;
				if (uVar9 == 0) goto label_059018cf;
				pIVar3 = (pIVar4._1).interfaceOffsets;
				lVar10 = 0;
				break;
			}
			if (local_48 == null) {
				throw new NullReferenceException();
			}
			pIVar4 = local_48.klass;
			uVar9 = (ulong)(pIVar4._2).interface_offsets_count;
			value = pIVar8.Dispose();
			bVar6 = String.IsNullOrWhiteSpace(value);
			pIVar8 = local_48;
			if (!bVar6) {
				if (__this == null) {
					throw new NullReferenceException();
				}
				__this.Add((object)value);
				pIVar8 = local_48;
			}
		} while(true);
		while (true) {
			lVar10 = lVar10 + 0x10;
			if (!(uVar9 * 0x10 != lVar10)) break;
			if (*(IDisposable*)((long)&pIVar3.interfaceType + lVar10) == typeof(IDisposable)) {
				pVVar7 = pIVar4.vtable + *(int)((long)&pIVar3.offset + lVar10);
				goto label_059018ed;
			}
		}
	label_059018cf: ;
	label_059018ed: ;
		pIVar8.Dispose();
		return __this;
	}

	[Token(Token = "0x6001389")]
	[Address(RVA = "0x58036E0", Offset = "0x58026E0", VA = "0x58036E0")]
	private static bool HasRole(IEnumerable<string> roles, string required)
	{
		// Lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c (Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog$$HasRole): 3 lines keep C-only constructs
		bool bVar1;
		AottgProfileEntitlementCatalog.c__DisplayClass36_0 __this;
		Func<string, bool> __this_00;

		__this = il2cpp_codegen_object_new((Il2CppClass)typeof(AottgProfileEntitlementCatalog.c__DisplayClass36_0));
		__this = new Object();
		if (__this == null) {
			throw new NullReferenceException();
		}
		__this.required = required;
		bVar1 = String.IsNullOrWhiteSpace(__this.required);
		if ((roles == null) || (bVar1)) {
			return false;
		}
		__this_00 = new Func<string, bool>((object)__this, (intptr_t) MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileEntitlementCatalog_c__DisplayClass36_0_HasRole_b__0);
		bVar1 = Enumerable.Any<string>((System_Collections_Generic_IEnumerable_TSource__o)roles, (System_Func_TSource__bool__o)__this_00);
		return bVar1;
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/Gisketch/Aottg2UI/Game/AottgProfileEntitlementCatalog.c.

	// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog.<>c__DisplayClass36_0$$.ctor: clean
	private void c__DisplayClass36_0__ctor()
	{
		base();
		return;
	}

	// Gisketch.Aottg2UI.Game.AottgProfileEntitlementCatalog.<>c__DisplayClass36_0$$<HasRole>b__0: clean
	private bool c__DisplayClass36_0__HasRole_b__0(String role)
	{
		bool bVar1;

		bVar1 = String.Equals(role, this.required, 5);
		return bVar1;
	}
}
