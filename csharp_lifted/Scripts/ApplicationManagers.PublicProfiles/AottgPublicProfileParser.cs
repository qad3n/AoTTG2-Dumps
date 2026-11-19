// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileParser
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileParser.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.PublicProfiles;

[Token(Token = "0x2000991")]
public static class AottgPublicProfileParser
{
	[Token(Token = "0x6005961")]
	[Address(RVA = "0x5D1FF50", Offset = "0x5D1EF50", VA = "0x5D1FF50")]
	public static bool TryParse(string json, out AottgPublicProfile profile, out string error)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileParser.c (ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$TryParse): clean
		String pSVar1;
		bool bVar2;
		JSONNode node;

		*profile = null;
		*error = null;
		bVar2 = String.IsNullOrWhiteSpace(json);
		pSVar1 = "empty_response";
		if (bVar2) {
			*profile = null;
			bVar2 = false;
			*error = pSVar1;
		}
		else {
			node = JSON.Parse(json);
			bVar2 = AottgPublicProfileParser.TryParse(node, profile, error);
		}
		return bVar2;
	}

	[Token(Token = "0x6005962")]
	[Address(RVA = "0x5D200C0", Offset = "0x5D1F0C0", VA = "0x5D200C0")]
	public static bool TryParse(JSONNode node, out AottgPublicProfile profile, out string error)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileParser.c (ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$TryParse): 5 lines keep C-only constructs
		DateTimeOffset createdAt;
		bool bVar1;
		String* ppSVar2;
		JSONNode pSVar3;
		String pSVar4;
		String value;
		String pSVar5;
		CultureInfo formatProvider;
		String characterInfoJson;
		String[] roles;
		String description;
		String avatarKey;
		String bannerKey;
		AottgPublicProfile __this;
		MethodInfo pMVar6;
		DateTimeOffset SVar7;
		DateTimeOffset local_68;
		DateTime local_58;
		short iStack_50;
		undefined6 uStack_4e;
		Guid local_48;

		local_48._a = 0;
		local_48._b = 0;
		local_48._c = 0;
		local_48._d = 0;
		local_48._e = 0;
		local_48._f = 0;
		local_48._g = 0;
		local_48._h = 0;
		local_48._i = 0;
		local_48._j = 0;
		local_48._k = 0;
		*profile = null;
		*error = null;
		bVar1 = (node == null);
		if (bVar1) {
			ppSVar2 = &"bad_response";
		}
		else {
			if (node == null) {
	label_05e20591: ;
				throw new NullReferenceException();
			}
			pMVar6 = (MethodInfo *)"accountId";
			pSVar3 = node.get_Item("accountId");
			pSVar4 = AottgPublicProfileParser.Trimmed(pSVar3);
			bVar1 = String.IsNullOrEmpty(pSVar4);
			if ((bVar1) ||(bVar1 = Guid.TryParse(pSVar4, ref local_48), !bVar1)) {
				ppSVar2 = &"bad_account_id";
			}
			else {
				pMVar6 = (MethodInfo *)"displayName";
				pSVar3 = node.get_Item("displayName");
				value = AottgPublicProfileParser.Trimmed(pSVar3);
				bVar1 = String.IsNullOrEmpty(value);
				if (!bVar1) {
					local_68._dateTime._dateData = (DateTime)0;
					local_68._offsetMinutes = 0;
					local_68._10_6_ = 0;
					pMVar6 = (MethodInfo *)"createdAt";
					pSVar3 = node.get_Item("createdAt");
					pSVar5 = AottgPublicProfileParser.Trimmed(pSVar3);
					bVar1 = String.IsNullOrEmpty(pSVar5);
					if (!bVar1) {
						formatProvider = CultureInfo.InvariantCulture;
						DateTimeOffset.TryParse(pSVar5, (IFormatProvider)formatProvider, 0x80, ref local_68);
					}
					pMVar6 = (MethodInfo *)"characterName";
					pSVar3 = node.get_Item("characterName");
					pSVar5 = AottgPublicProfileParser.NullableTrimmed(pSVar3);
					pSVar3 = node.get_Item("characterInfo");
					characterInfoJson = null;
					bVar1 = (pSVar3 != null);
					if (bVar1) {
						if (pSVar3 == null) goto label_05e20591;
						bVar1 = pSVar3.get_IsNull();
						if (bVar1) {
							characterInfoJson = null;
						}
						else {
							characterInfoJson =pSVar3.ToString();
						}
					}
					pMVar6 = (MethodInfo *)"roles";
					pSVar3 = node.get_Item("roles");
					roles = AottgPublicProfileParser.StringArray(pSVar3);
					pMVar6 = (MethodInfo *)"description";
					pSVar3 = node.get_Item("description");
					description = AottgPublicProfileParser.NullableTrimmed(pSVar3);
					pMVar6 = (MethodInfo *)"avatarKey";
					pSVar3 = node.get_Item("avatarKey");
					avatarKey = AottgPublicProfileParser.NullableTrimmed(pSVar3);
					pMVar6 = (MethodInfo *)"bannerKey";
					pSVar3 = node.get_Item("bannerKey");
					bannerKey = AottgPublicProfileParser.NullableTrimmed(pSVar3);
					SVar7 = local_68.ToUniversalTime();
					iStack_50 = SVar7._offsetMinutes;
					createdAt._10_6_ = uStack_4e;
					createdAt._offsetMinutes = iStack_50;
					createdAt._dateTime._dateData = SVar7._dateTime._dateData;
					local_58._dateData = SVar7._dateTime._dateData;
					__this = new AottgPublicProfile(pSVar4, value, pSVar5, characterInfoJson, roles, description, avatarKey, bannerKey, createdAt);
					*profile = __this;
					return true;
				}
				ppSVar2 = &"bad_display_name";
			}
		}
		pSVar4 = *ppSVar2;
		*profile = null;
		*error = pSVar4;
		return false;
	}

	[Token(Token = "0x6005963")]
	[Address(RVA = "0x5D20710", Offset = "0x5D1F710", VA = "0x5D20710")]
	private static string RawJson(JSONNode node)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileParser.c (ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$RawJson): clean
		bool bVar1;
		String pSVar2;

		bVar1 = (node != null);
		if (bVar1) {
			if (node == null) {
				throw new NullReferenceException();
			}
			bVar1 = node.get_IsNull();
			if (!bVar1) {
				return pSVar2;
			}
		}
		return null;
	}

	[Token(Token = "0x6005964")]
	[Address(RVA = "0x5D207A0", Offset = "0x5D1F7A0", VA = "0x5D207A0")]
	private static string[] StringArray(JSONNode node)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileParser.c (ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$StringArray): 18 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		Il2CppRuntimeInterfaceOffsetPair pIVar5;
		bool bVar6;
		sbyte cVar7;
		List<string> __this;
		object pIVar8;
		VirtualInvokeData pVVar9;
		Il2CppClass pIVar10;
		String value;
		String[] pSVar11;
		ulong uVar12;
		MethodInfo pMVar13;
		long lVar14;
		object local_48;
		byte local_38;

		local_48 = null;
		bVar6 = (node == null);
		if (bVar6) {
	label_05e20925: ;
			pMVar13 = MethodInfo_System_Array_Empty_string;
			if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
				pIVar10 = *(Il2CppClass*)((long)(pMVar13.field7_0x38).methodMetadataHandle + 0x10);
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
				uVar3 = (pIVar10._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
				pIVar10 = (pMVar13.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar10._2).bitflags1;
			}
			else {
				pIVar10 = (pMVar13.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar10._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar10 = il2cpp_codegen_class_init_checked(pIVar10);
			}
			return *(String[]*)pIVar10.static_fields;
		}
		if (node != null) {
			bVar6 = node.get_IsArray();
			if (!bVar6) goto label_05e20925;
			__this = new List<string>();
			pIVar8 = (object)node.get_Children();
			if (pIVar8 != null) {
				pIVar10 = pIVar8.klass;
				uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
				pIVar8 = pIVar8.Dispose();
				local_38 = (byte)&local_48;
	joined_r0x05e209f9: ;
				do {
					local_48 = pIVar8;
					if (pIVar8 == null) {
						throw new NullReferenceException();
					}
					pIVar10 = pIVar8.klass;
					uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
					cVar7 = pIVar8.Dispose();
					pIVar8 = local_48;
					if (cVar7 == false) {
						if (local_48 == null) goto label_05e20c06;
						pIVar10 = local_48.klass;
						uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
						if (uVar12 == 0) goto label_05e20bdf;
						pIVar5 = (pIVar10._1).interfaceOffsets;
						lVar14 = 0;
						goto label_05e20bd0;
					}
					if (local_48 == null) {
						throw new NullReferenceException();
					}
					pIVar10 = local_48.klass;
					uVar12 = (ulong)(pIVar10._2).interface_offsets_count;
					pMVar13 = pVVar9.method;
					pIVar8 = pIVar8.Dispose();
					value = AottgPublicProfileParser.Trimmed((JSONNode)pIVar8);
					bVar6 = String.IsNullOrEmpty(value);
					pMVar13 = MethodInfo_System_Collections_Generic_List_string_Add;
					pIVar8 = local_48;
				} while (bVar6);
				if (__this != null) {
					piVar1 = &__this._version;
					*piVar1 = *piVar1 + 1;
					pSVar11 = __this._items;
					if (pSVar11 != null) {
						uVar4 = __this._size;
						if (uVar4 < (uint)pSVar11.Length) {
							__this._size = uVar4 + 1;
							pSVar11[(int)uVar4] = value;
							pIVar8 = local_48;
						}
						else {
							__this.AddWithResize((object)value);
							pIVar8 = local_48;
						}
						goto joined_r0x05e209f9;
					}
				}
				throw new NullReferenceException();
			}
		}
		goto label_05e20c43;
		while (true) {
			lVar14 = lVar14 + 0x10;
			if (!(uVar12 * 0x10 != lVar14)) break;
	label_05e20bd0: ;
			if (*(IDisposable*)((long)&pIVar5.interfaceType + lVar14) == typeof(IDisposable)) {
				pVVar9 = (VirtualInvokeData)&pIVar10.vtable[*(int)((long)&pIVar5.offset + lVar14)].methodPtr;
				goto label_05e20bfd;
			}
		}
	label_05e20bdf: ;
	label_05e20bfd: ;
		pIVar8.Dispose();
	label_05e20c06: ;
		if (__this != null) {
			pSVar11 = (String[])__this.ToArray();
			return pSVar11;
		}
	label_05e20c43: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005965")]
	[Address(RVA = "0x5D20670", Offset = "0x5D1F670", VA = "0x5D20670")]
	private static string NullableTrimmed(JSONNode node)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileParser.c (ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$NullableTrimmed): clean
		bool bVar1;
		String value;

		value = null;
		bVar1 = (node == null);
		if (!bVar1) {
			if (node == null) {
				throw new NullReferenceException();
			}
			bVar1 = node.get_IsNull();
			if (bVar1) {
				value = null;
			}
			else {
				value = AottgPublicProfileParser.Trimmed(node);
				bVar1 = String.IsNullOrEmpty(value);
				if (bVar1) {
					value = null;
				}
			}
		}
		return value;
	}

	[Token(Token = "0x6005966")]
	[Address(RVA = "0x5D205A0", Offset = "0x5D1F5A0", VA = "0x5D205A0")]
	private static string Trimmed(JSONNode node)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileParser.c (ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$Trimmed): clean
		bool bVar1;
		String pSVar2;

		bVar1 = (node != null);
		if (bVar1) {
			if (node != null) {
				bVar1 = node.get_IsNull();
				if (bVar1) goto label_05e20604;
				pSVar2 = node.get_Value() ;
				if ((pSVar2 != null) ||(pSVar2 = (String)**(long*)(g_data_07556758 + 0xb8), pSVar2 != null)) {
					pSVar2 = pSVar2.Trim();
					return pSVar2;
				}
			}
			throw new NullReferenceException();
		}
	label_05e20604: ;
		return (String)**(ulong*)(g_data_07556758 + 0xb8);
	}

	[Token(Token = "0x6005967")]
	[Address(RVA = "0x5D20090", Offset = "0x5D1F090", VA = "0x5D20090")]
	private static bool Fail(out AottgPublicProfile profile, out string error, string value)
	{
		// Lifted from source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileParser.c (ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$Fail): clean
		*profile = null;
		*error = value;
		return false;
	}
}
