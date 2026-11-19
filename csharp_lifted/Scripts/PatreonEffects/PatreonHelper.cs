// ==================== AoTTG2 cross-reference ====================
// Type: PatreonEffects.PatreonHelper
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/PatreonEffects/PatreonHelper.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using Il2CppDummyDll;
using Photon.Realtime;

namespace PatreonEffects;

[Token(Token = "0x200008D")]
public static class PatreonHelper
{
	[Token(Token = "0x40002F5")]
	private const string Tier2Id = "28767500";

	[Token(Token = "0x40002F6")]
	private const string Tier3Id = "28767505";

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x58C8630", Offset = "0x58C7630", VA = "0x58C8630")]
	private static bool HasTier(string[] tierIds, string targetTier)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$HasTier): clean
		uint uVar1;
		bool bVar2;
		String pSVar3;
		ulong uVar4;
		ulong uVar5;

		if (tierIds != null) {
			uVar4 = tierIds.Length;
			if (uVar4 == 0) {
				return false;
			}
			if ((int)uVar4 < 1) {
				return false;
			}
			uVar5 = 0;
			do {
				if ((uVar4 & 0xffffffff) <= uVar5) {
					throw new IndexOutOfRangeException();
				}
				pSVar3 = tierIds[uVar5];
				bVar2 = String.IsNullOrEmpty(pSVar3);
				if (!bVar2) {
					if (pSVar3 == null) {
						throw new NullReferenceException();
					}
					pSVar3 = pSVar3.Trim();
					bVar2 = String.Equals(pSVar3, targetTier, 4);
					if (bVar2) {
						return true;
					}
				}
				uVar5 = uVar5 + 1;
				uVar1 = (uint)tierIds.Length;
				uVar4 = (ulong)uVar1;
			} while ((long)uVar5 < (long)(int)uVar1);
		}
		return false;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x58C86D0", Offset = "0x58C76D0", VA = "0x58C86D0")]
	private static bool HasTier(IEnumerable tierIds, string targetTier)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$HasTier): 6 lines keep C-only constructs
		sbyte cVar4;
		bool bVar5;
		object pIVar7;
		String pSVar8;
		String value;
		object local_60;
		object local_58;
		String local_50;
		object* local_40;
		object* local_38;

		local_50 = targetTier;
		local_60 = null;
		local_58 = null;
		if (tierIds == null) {
			cVar4 = false;
		}
		else {
			pIVar7 = (object)tierIds.Dispose();
			local_40 = &local_60;
			local_38 = &local_58;
			do {
				do {
					do {
						local_60 = pIVar7;
						if (pIVar7 == null) {
							throw new NullReferenceException();
						}
						cVar4 = pIVar7.Dispose();
						pIVar7 = local_60;
						if (cVar4 == false) {
							cVar4 = false;
							goto label_059c897c;
						}
						if (local_60 == null) {
							throw new NullReferenceException();
						}
						pSVar8 = (String)pIVar7.Dispose();
						pIVar7 = local_60;
					} while (pSVar8 == null);
					value = pSVar8;
					if ((Il2CppClass)pSVar8.klass != g_data_07556758) {
						value = null;
					}
					bVar5 = String.IsNullOrEmpty(value);
					if (bVar5) {
						value = (String)(*((Il2CppClass)pSVar8.klass).vtable[3].methodPtr)(pSVar8);
					}
					bVar5 = String.IsNullOrEmpty(value);
					pIVar7 = local_60;
				} while (bVar5);
				if (value == null) {
					throw new NullReferenceException();
				}
				pSVar8 = value.Trim();
				bVar5 = String.Equals(pSVar8, local_50, 4);
				pIVar7 = local_60;
			} while (!bVar5);
	label_059c897c: ;
			pIVar7 = (local_60 as IDisposable);
			if (pIVar7 != null) {
				local_58 = pIVar7;
				pIVar7.Dispose();
			}
		}
		return (bool)cVar4;
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x58C8A80", Offset = "0x58C7A80", VA = "0x58C8A80")]
	private static bool TryGetRemoteBool(Player player, string key, out bool value)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$TryGetRemoteBool): 2 lines keep C-only constructs
		object obj;
		byte puVar1;

		*value = false;
		if (player != null) {
			obj = PhotonExtensions.GetCustomProperty(player, key);
			if (obj == null) {
				return false;
			}
			if (obj.klass == g_data_075566f0) {
				puVar1 = il2cpp_vm_Object_Unbox(obj);
				*value = (bool)*puVar1;
				return true;
			}
		}
		return false;
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x58C8AD0", Offset = "0x58C7AD0", VA = "0x58C8AD0")]
	private static bool TryGetRemoteString(Player player, string key, out string value)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$TryGetRemoteString): 1 lines keep C-only constructs
		bool bVar1;
		String value_00;
		bool bVar2;

		*value = null;
		bVar2 = false;
		if (player != null) {
			bVar2 = false;
			value_00 = (String)PhotonExtensions.GetCustomProperty(player, key);
			if ((value_00 != null) && (bVar2 = false, value_00.klass == g_data_07556758)) {
				bVar2 = false;
				bVar1 = String.IsNullOrEmpty(value_00);
				if (!bVar1) {
					*value = value_00;
					bVar2 = true;
				}
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x58C8B60", Offset = "0x58C7B60", VA = "0x58C8B60")]
	private static bool TryParseTierIdsString(string raw, out List<string> parsed)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$TryParseTierIdsString): 6 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		String[] pSVar3;
		bool bVar5;
		int iVar6;
		String value;
		JSONNode a;
		List<string> pSVar7;
		JSONNode pSVar8;
		String[] pSVar9;
		ulong uVar10;
		String pSVar11;
		int iVar12;
		ulong uVar13;

		*parsed = null;
		bVar5 = String.IsNullOrEmpty(raw);
		if (bVar5) {
			return false;
		}
		if (raw != null) {
			value = raw.Trim();
			bVar5 = String.IsNullOrEmpty(value);
			if (bVar5) {
				return false;
			}
			if (value == null) goto label_059c911f;
			bVar5 = value.StartsWith("[");
			if ((bVar5) && (bVar5 = value.EndsWith("]"))) {
				a = JSON.Parse(value);
				bVar5 = (a != null);
				if (bVar5) {
					if (a == null) {
						throw new NullReferenceException();
					}
					bVar5 = a.get_IsArray();
					if (bVar5) {
						pSVar7 = new List<string>();
						iVar12 = 0;
						if (pSVar7 == null) {
							while (true) {
								iVar6 = a.get_Count();
								if (!(iVar12 < iVar6)) break;
								pSVar8 = a.get_Item(iVar12);
								if (pSVar8 == null) {
	label_059c8e39: ;
									throw new NullReferenceException();
								}
								pSVar11 = pSVar8.get_Value();
								bVar5 = String.IsNullOrEmpty(pSVar11);
								iVar12 = iVar12 + 1;
								if (!bVar5) {
	label_059c8e3e: ;
									throw new NullReferenceException();
								}
							}
						}
						else {
							for (; ; iVar12 = iVar12 + 1) {
								iVar6 = a.get_Count();
								if (!(iVar12 < iVar6)) break;
								pSVar8 = a.get_Item(iVar12);
								if (pSVar8 == null) goto label_059c8e39;
								pSVar11 = pSVar8.get_Value();
								bVar5 = String.IsNullOrEmpty(pSVar11);
								if (!bVar5) {
									piVar1 = &pSVar7._version;
									*piVar1 = *piVar1 + 1;
									pSVar9 = pSVar7._items;
									if (pSVar9 == null) goto label_059c8e3e;
									uVar2 = pSVar7._size;
									if (uVar2 < (uint)pSVar9.Length) {
										pSVar7._size = uVar2 + 1;
										pSVar9[(int)uVar2] = pSVar11;
									}
									else {
										pSVar7.AddWithResize((object)pSVar11);
									}
								}
							}
						}
						if (pSVar7 == null) {
							throw new NullReferenceException();
						}
						if (0 < pSVar7._size) {
							*parsed = pSVar7;
							return true;
						}
					}
				}
			}
			iVar6 = value.IndexOf(0x2c);
			if (-1 < iVar6) {
				pSVar9 = value.Split(0x2c, 0);
				pSVar7 = new List<string>();
				if (pSVar9 == null) goto label_059c911f;
				iVar12 = (int)pSVar9.Length;
				uVar10 = pSVar9.Length & 0xffffffff;
				if (pSVar7 == null) {
					if (iVar12 < 1) goto label_059c911f;
					uVar13 = 0;
					do {
						if (uVar10 <= uVar13) goto label_059c9124;
						if (pSVar9[uVar13] == null) {
							bVar5 = String.IsNullOrEmpty((String)**(ulong*)(g_data_07556758 + 0xb8));
						}
						else {
							pSVar11 = (pSVar9[uVar13]).Trim();
							bVar5 = String.IsNullOrEmpty(pSVar11);
						}
						if (!bVar5) goto label_059c911f;
						uVar13 = uVar13 + 1;
						uVar2 = (uint)pSVar9.Length;
						uVar10 = (ulong)uVar2;
					} while ((long)uVar13 < (long)(int)uVar2);
				}
				else if (0 < iVar12) {
					uVar13 = 0;
					do {
						if (uVar10 <= uVar13) {
	label_059c9124: ;
							throw new IndexOutOfRangeException();
						}
						if (pSVar9[uVar13] == null) {
							pSVar11 = (String)**(ulong*)(g_data_07556758 + 0xb8);
						}
						else {
							pSVar11 = (pSVar9[uVar13]).Trim();
						}
						bVar5 = String.IsNullOrEmpty(pSVar11);
						if (!bVar5) {
							piVar1 = &pSVar7._version;
							*piVar1 = *piVar1 + 1;
							pSVar3 = pSVar7._items;
							if (pSVar3 == null) goto label_059c911f;
							uVar2 = pSVar7._size;
							if (uVar2 < (uint)pSVar3.Length) {
								pSVar7._size = uVar2 + 1;
								pSVar3[(int)uVar2] = pSVar11;
							}
							else {
								pSVar7.AddWithResize((object)pSVar11);
							}
						}
						uVar13 = uVar13 + 1;
						uVar2 = (uint)pSVar9.Length;
						uVar10 = (ulong)uVar2;
					} while ((long)uVar13 < (long)(int)uVar2);
				}
				if (pSVar7 == null) goto label_059c911f;
				if (0 < pSVar7._size) goto label_059c90fd;
			}
			pSVar7 = new List<string>();
			if (pSVar7 != null) {
				piVar1 = &pSVar7._version;
				*piVar1 = *piVar1 + 1;
				pSVar9 = pSVar7._items;
				if (pSVar9 != null) {
					uVar2 = pSVar7._size;
					if (uVar2 < (uint)pSVar9.Length) {
						pSVar7._size = uVar2 + 1;
						pSVar9[(int)uVar2] = value;
					}
					else {
						pSVar7.AddWithResize((object)value);
					}
	label_059c90fd: ;
					*parsed = pSVar7;
					return true;
				}
			}
		}
	label_059c911f: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x58C9170", Offset = "0x58C8170", VA = "0x58C9170")]
	private static bool TryGetRemoteTierIds(Player player, out IEnumerable tierIds)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$TryGetRemoteTierIds): 1 lines keep C-only constructs
		bool bVar1;
		String raw;
		object pIVar2;
		List<string> local_20;

		local_20 = null;
		*tierIds = null;
		if (player == null) {
			return false;
		}
		raw = (String)PhotonExtensions.GetCustomProperty(player, PlayerProperty.TierIds);
		if (raw == null) {
			return false;
		}
		if (raw.klass == g_data_07556758) {
			bVar1 = PatreonHelper.TryParseTierIdsString(raw, ref local_20);
			if (!bVar1) {
				return false;
			}
			*tierIds = (IEnumerable)local_20;
		}
		else {
			pIVar2 = ((object)raw as IEnumerable);
			if (pIVar2 == null) {
				return false;
			}
			*tierIds = (IEnumerable)pIVar2;
		}
		return true;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x58C9270", Offset = "0x58C8270", VA = "0x58C9270")]
	private static string ToTierLabel(bool hasTier2, bool hasTier3)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$ToTierLabel): clean
		String pSVar1;

		pSVar1 = "Tier 2";
		if (!hasTier2) {
		}
		if (hasTier3) {
			pSVar1 = "Tier 3";
		}
		return pSVar1;
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x58C92D0", Offset = "0x58C82D0", VA = "0x58C92D0")]
	private static bool TryGetLocalPatreonFlags(out bool linked, out bool hasTier2, out bool hasTier3)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$TryGetLocalPatreonFlags): clean
		AccountLoginResponse pAVar1;
		AccountLoginResponse.ProfileData pAVar2;
		AccountLoginResponse.PatreonData pAVar3;

		*linked = false;
		*hasTier2 = false;
		*hasTier3 = false;
		if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07545ca0 == false) goto label_059c9356;
	label_059c9326: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_059c9332;
	label_059c9375: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		else {
			if (g_data_07545ca0 != false) goto label_059c9326;
	label_059c9356: ;
			g_data_07545ca0 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_059c9375;
	label_059c9332: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		if (pAVar1 == null) {
			return false;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07545ca0 == false) goto label_059c93d6;
	label_059c93a4: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_059c93b0;
	label_059c93f5: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		else {
			if (g_data_07545ca0 != false) goto label_059c93a4;
	label_059c93d6: ;
			g_data_07545ca0 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_059c93f5;
	label_059c93b0: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		if (pAVar1 == null) goto label_059c94d7;
		if (pAVar1.Profile == null) {
			return false;
		}
		if (((typeof(AccountManager))._2).cctor_finished_or_no_cctor == 0) {
			if (g_data_07545ca0 == false) goto label_059c9463;
	label_059c9431: ;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor != 0) goto label_059c943d;
	label_059c9482: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		else {
			if (g_data_07545ca0 != false) goto label_059c9431;
	label_059c9463: ;
			g_data_07545ca0 = true;
			if ((typeof(AccountManager)._2).cctor_finished_or_no_cctor == 0) goto label_059c9482;
	label_059c943d: ;
			pAVar1 = AccountManager._LoginResponse_k__BackingField;
		}
		if ((pAVar1 != null) &&(pAVar2 = pAVar1.Profile, pAVar2 != null)) {
			pAVar3 = pAVar2.Patreon;
			if (pAVar3 == null) {
				return false;
			}
			*linked = pAVar3.Linked;
			*hasTier2 = pAVar3.HasTier2;
			*hasTier3 = pAVar3.HasTier3;
			return true;
		}
	label_059c94d7: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x58C94E0", Offset = "0x58C84E0", VA = "0x58C94E0")]
	public static bool TryGetLocalTierLabel(out string tierLabel)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$TryGetLocalTierLabel): 1 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		bool bVar3;
		bool bVar4;
		String pSVar5;
		bool local_1b;
		bool local_1a;
		bool local_19;

		local_19 = false;
		local_1a = false;
		local_1b = false;
		*tierLabel = null;
		bVar4 = false;
		bVar2 = AccountManager.IsLoggedIn;
		if (bVar2) {
			bVar3 = PatreonHelper.TryGetLocalPatreonFlags(ref local_19, ref local_1a, ref local_1b);
			bVar1 = local_1a;
			bVar2 = local_1b;
			bVar4 = false;
			if ((bVar3) && (local_19 != false)) {
				pSVar5 = "Tier 2";
				if (bVar1 == false) {
					pSVar5 = null;
				}
				if (bVar2 != false) {
					pSVar5 = "Tier 3";
				}
				*tierLabel = pSVar5;
				bVar4 = String.IsNullOrEmpty(*tierLabel);
				bVar4 = !bVar4;
			}
		}
		return bVar4;
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x58C9600", Offset = "0x58C8600", VA = "0x58C9600")]
	public static bool TryGetRemoteTierLabel(Player player, out string tierLabel)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$TryGetRemoteTierLabel): 5 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		object obj;
		sbyte pcVar3;
		Il2CppClass extraout_RDX;
		Il2CppClass extraout_RDX_00;
		Il2CppClass method_00;
		String pSVar4;
		IEnumerable local_20;

		local_20 = null;
		*tierLabel = null;
		bVar1 = false;
		if (player != null) {
			obj = PhotonExtensions.GetCustomProperty(player, PlayerProperty.PatreonLinked);
			method_00 = extraout_RDX;
			if ((((obj == null) || (method_00 = obj.klass, method_00 != g_data_075566f0)) ||(pcVar3 = il2cpp_vm_Object_Unbox(obj), method_00 = extraout_RDX_00, *pcVar3 != false)) &&(bVar1 = PatreonHelper.TryGetRemoteTierIds(player, ref local_20))) {
				bVar1 = PatreonHelper.HasTier(local_20, "28767500");
				bVar2 = PatreonHelper.HasTier(local_20, "28767505");
				pSVar4 = "Tier 2";
				if (!bVar1) {
					pSVar4 = null;
				}
				if (bVar2) {
					pSVar4 = "Tier 3";
				}
				*tierLabel = pSVar4;
				bVar1 = String.IsNullOrEmpty(*tierLabel);
				bVar1 = !bVar1;
			}
			else {
				bVar1 = false;
			}
		}
		return bVar1;
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x58C9780", Offset = "0x58C8780", VA = "0x58C9780")]
	public static bool TryGetRemoteDisplayName(Player player, out string displayName)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$TryGetRemoteDisplayName): 1 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		bool bVar3;

		pSVar2 = PlayerProperty.DisplayName;
		*displayName = null;
		bVar3 = false;
		if (player != null) {
			bVar3 = false;
			pSVar2 = (String)PhotonExtensions.GetCustomProperty(player, pSVar2);
			if ((pSVar2 != null) && (bVar3 = false, pSVar2.klass == g_data_07556758)) {
				bVar3 = false;
				bVar1 = String.IsNullOrEmpty(pSVar2);
				if (!bVar1) {
					*displayName = pSVar2;
					bVar3 = true;
				}
			}
		}
		return bVar3;
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x58C9850", Offset = "0x58C8850", VA = "0x58C9850")]
	public static bool TryGetRemoteAccountId(Player player, out string accountId)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$TryGetRemoteAccountId): 1 lines keep C-only constructs
		bool bVar1;
		String pSVar2;
		bool bVar3;

		pSVar2 = PlayerProperty.AccountId;
		*accountId = null;
		bVar3 = false;
		if (player != null) {
			bVar3 = false;
			pSVar2 = (String)PhotonExtensions.GetCustomProperty(player, pSVar2);
			if ((pSVar2 != null) && (bVar3 = false, pSVar2.klass == g_data_07556758)) {
				bVar3 = false;
				bVar1 = String.IsNullOrEmpty(pSVar2);
				if (!bVar1) {
					*accountId = pSVar2;
					bVar3 = true;
				}
			}
		}
		return bVar3;
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x58C9920", Offset = "0x58C8920", VA = "0x58C9920")]
	public static bool LocalPlayerHasNameEffectAccess()
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$LocalPlayerHasNameEffectAccess): clean
		bool bVar1;
		bool bVar2;
		bool local_b;
		bool local_a;
		bool local_9;

		local_9 = false;
		local_a = false;
		local_b = false;
		bVar1 = AccountManager.IsLoggedIn;
		if (bVar1) {
			bVar1 = PatreonHelper.TryGetLocalPatreonFlags(ref local_9, ref local_a, ref local_b);
			if ((bVar1) && (local_9 != false)) {
				bVar2 = local_b != false || local_a != false;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x58C99B0", Offset = "0x58C89B0", VA = "0x58C99B0")]
	public static bool RemotePlayerHasNameEffectAccess(Player player)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$RemotePlayerHasNameEffectAccess): 4 lines keep C-only constructs
		bool bVar1;
		bool bVar2;
		object obj;
		sbyte pcVar3;
		Il2CppClass extraout_RDX;
		Il2CppClass extraout_RDX_00;
		Il2CppClass method_00;
		IEnumerable local_18;

		local_18 = null;
		if (player != null) {
			obj = PhotonExtensions.GetCustomProperty(player, PlayerProperty.PatreonLinked);
			method_00 = extraout_RDX;
			if (((obj != null) && (method_00 = obj.klass, method_00 == g_data_075566f0)) &&(pcVar3 = il2cpp_vm_Object_Unbox(obj), method_00 = extraout_RDX_00, *pcVar3 == false)) {
				return false;
			}
			bVar1 = PatreonHelper.TryGetRemoteTierIds(player, ref local_18);
			if (bVar1) {
				bVar1 = PatreonHelper.HasTier(local_18, "28767500");
				if (!bVar1) {
					bVar2 = PatreonHelper.HasTier(local_18, "28767505");
				}
				return bVar2;
			}
		}
		return false;
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x58C0F10", Offset = "0x58BFF10", VA = "0x58C0F10")]
	public static bool HasNameEffectAccess(Player player)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$HasNameEffectAccess): clean
		bool bVar1;
		bool bVar2;
		bool local_b;
		bool local_a;
		bool local_9;

		if (player == null) {
			return false;
		}
		if (player.IsLocal == false) {
			bVar1 = PatreonHelper.RemotePlayerHasNameEffectAccess(player);
			return bVar1;
		}
		local_9 = false;
		local_a = false;
		local_b = false;
		bVar1 = AccountManager.IsLoggedIn;
		if (bVar1) {
			bVar1 = PatreonHelper.TryGetLocalPatreonFlags(ref local_9, ref local_a, ref local_b);
			if ((bVar1) && (local_9 != false)) {
				bVar2 = local_b != false || local_a != false;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x58C9AA0", Offset = "0x58C8AA0", VA = "0x58C9AA0")]
	public static bool LocalPlayerHasCharacterEffectAccess()
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$LocalPlayerHasCharacterEffectAccess): clean
		bool bVar1;
		bool bVar2;
		bool local_b;
		bool local_a;
		bool local_9;

		local_a = false;
		local_b = false;
		bVar1 = AccountManager.IsLoggedIn;
		if (bVar1) {
			bVar1 = PatreonHelper.TryGetLocalPatreonFlags(ref local_a, ref local_9, ref local_b);
			if ((bVar1) && (local_a != false)) {
				bVar2 = local_b != false;
			}
		}
		return bVar2;
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x58C9B30", Offset = "0x58C8B30", VA = "0x58C9B30")]
	public static bool RemotePlayerHasCharacterEffectAccess(Player player)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$RemotePlayerHasCharacterEffectAccess): 4 lines keep C-only constructs
		bool bVar1;
		object obj;
		sbyte pcVar2;
		Il2CppClass extraout_RDX;
		Il2CppClass extraout_RDX_00;
		Il2CppClass method_00;
		IEnumerable local_18;

		local_18 = null;
		if (player != null) {
			obj = PhotonExtensions.GetCustomProperty(player, PlayerProperty.PatreonLinked);
			method_00 = extraout_RDX;
			if (((obj != null) && (method_00 = obj.klass, method_00 == g_data_075566f0)) &&(pcVar2 = il2cpp_vm_Object_Unbox(obj), method_00 = extraout_RDX_00, *pcVar2 == false)) {
				return false;
			}
			bVar1 = PatreonHelper.TryGetRemoteTierIds(player, ref local_18);
			if (bVar1) {
				bVar1 = PatreonHelper.HasTier(local_18, "28767505");
				return bVar1;
			}
		}
		return false;
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x58C9C00", Offset = "0x58C8C00", VA = "0x58C9C00")]
	public static bool HasCharacterEffectAccess(Player player)
	{
		// Lifted from source/cpp/PatreonEffects/PatreonHelper.c (PatreonEffects.PatreonHelper$$HasCharacterEffectAccess): clean
		bool bVar1;
		bool bVar2;
		bool local_b;
		bool local_a;
		bool local_9;

		if (player == null) {
			return false;
		}
		if (player.IsLocal == false) {
			bVar1 = PatreonHelper.RemotePlayerHasCharacterEffectAccess(player);
			return bVar1;
		}
		local_a = false;
		local_b = false;
		bVar1 = AccountManager.IsLoggedIn;
		if (bVar1) {
			bVar1 = PatreonHelper.TryGetLocalPatreonFlags(ref local_a, ref local_9, ref local_b);
			if ((bVar1) && (local_a != false)) {
				bVar2 = local_b != false;
			}
		}
		return bVar2;
	}
}
