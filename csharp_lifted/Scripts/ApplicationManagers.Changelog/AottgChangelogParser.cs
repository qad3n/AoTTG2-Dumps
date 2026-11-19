// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Changelog.AottgChangelogParser
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Changelog;

[Token(Token = "0x20009A9")]
public static class AottgChangelogParser
{
	[Token(Token = "0x20009AA")]
	private delegate bool Parser<T>(JSONNode node, out T value) where T : class;

	[Token(Token = "0x6005A0F")]
	[Address(RVA = "0x5D25170", Offset = "0x5D24170", VA = "0x5D25170")]
	public static bool TryParseLatestVersion(string json, out LatestChangelogVersionResponse version, out string error)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$TryParseLatestVersion): 2 lines keep C-only constructs
		bool bVar1;
		AottgChangelogParser.Parser<T> __this;

		__this = (AottgChangelogParser.Parser<T>)il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChangelogParser.Parser<LatestChangelogVersionResponse>));
		__this = new AottgChangelogParser.Parser<object>(null, (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseLatestVersion);
		bVar1 = AottgChangelogParser.TryParse<LatestChangelogVersionResponse>(json, __this, (object*)version, error);
		return bVar1;
	}

	[Token(Token = "0x6005A10")]
	[Address(RVA = "0x5D25210", Offset = "0x5D24210", VA = "0x5D25210")]
	public static bool TryParseEntry(string json, out ChangelogEntryResponse entry, out string error)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$TryParseEntry): 3 lines keep C-only constructs
		bool bVar1;
		AottgChangelogParser.Parser<T> __this;

		if (Il2CppMethodInitialized_075484e4 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_ChangelogEntryResponse) ;
			Il2CppMethodInitialized_075484e4 = true;
		}
		__this = (AottgChangelogParser.Parser<T>)il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChangelogParser.Parser<ChangelogEntryResponse>));
		__this = new AottgChangelogParser.Parser<object>(null, (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseEntry);
		bVar1 = AottgChangelogParser.TryParse<ChangelogEntryResponse>(json, __this, (object*)entry, error);
		return bVar1;
	}

	[Token(Token = "0x6005A11")]
	[Address(RVA = "0x5D252B0", Offset = "0x5D242B0", VA = "0x5D252B0")]
	public static bool TryParseList(string json, out PublicChangelogListResponse list, out string error)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$TryParseList): 2 lines keep C-only constructs
		bool bVar1;
		AottgChangelogParser.Parser<T> __this;

		__this = (AottgChangelogParser.Parser<T>)il2cpp_codegen_object_new((Il2CppClass)typeof(AottgChangelogParser.Parser<PublicChangelogListResponse>));
		__this = new AottgChangelogParser.Parser<object>(null, (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseList);
		bVar1 = AottgChangelogParser.TryParse<PublicChangelogListResponse>(json, __this, (object*)list, error);
		return bVar1;
	}

	[Token(Token = "0x6005A12")]
	[Address(RVA = "0x5D25350", Offset = "0x5D24350", VA = "0x5D25350")]
	public static bool TryParseLatestVersion(JSONNode node, out LatestChangelogVersionResponse version)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$TryParseLatestVersion): 3 lines keep C-only constructs
		String pSVar1;
		String publishedAt;
		String contentHash;
		String version_00;
		bool bVar2;
		JSONNode pSVar3;
		LatestChangelogVersionResponse pAVar4;
		String* method_00;
		String pSStack_78;
		String pSStack_70;
		String pSStack_68;
		String pSStack_60;
		String pSStack_58;
		String pSStack_50;
		Guid SStack_48;

		pSStack_78 = null;
		pSStack_58 = null;
		pSStack_60 = null;
		pSStack_68 = null;
		pSStack_70 = null;
		*version = null;
		bVar2 = (node != null);
		if (!bVar2) {
			return false;
		}
		if (node == null) {
	label_05e25732: ;
			throw new NullReferenceException();
		}
		bVar2 = node.get_IsObject();
		if ((bVar2) &&(bVar2 = node.HasKey("hasChangelog"))) {
			pSVar3 = node.get_Item("hasChangelog");
			if (pSVar3 == null) goto label_05e25732;
			bVar2 = pSVar3.get_IsBoolean();
			if (bVar2) {
				pSVar3 = node.get_Item("hasChangelog");
				if (pSVar3 == null) goto label_05e25732;
				bVar2 = pSVar3.get_AsBool();
				pSVar1 = "id";
				method_00 = &"id";
				if (bVar2) {
					SStack_48._a = 0;
					SStack_48._b = 0;
					SStack_48._c = 0;
					SStack_48._d = 0;
					SStack_48._e = 0;
					SStack_48._f = 0;
					SStack_48._g = 0;
					SStack_48._h = 0;
					SStack_48._i = 0;
					SStack_48._j = 0;
					SStack_48._k = 0;
					bVar2 = AottgChangelogParser.ReadRequiredString(node, "id", ref pSStack_78);
					if (bVar2) {
						bVar2 = Guid.TryParse(pSStack_78, ref SStack_48);
						if (!bVar2) {
							return false;
						}
						bVar2 = AottgChangelogParser.ReadRequiredString(node, "version", ref pSStack_58);
						if (((bVar2) &&(bVar2 = AottgChangelogParser.ReadRequiredString(node, "contentHash", ref pSStack_60))) &&((bVar2 = AottgChangelogParser.ReadRequiredString(node, "publishedAt", ref pSStack_68), bVar2 &&(bVar2 = AottgChangelogParser.ReadRequiredString(node, "updatedAt", ref pSStack_70), version_00 = pSStack_58, contentHash = pSStack_60, publishedAt = pSStack_68, pSVar1 = pSStack_70 , bVar2)))) {
							pSStack_50 = pSStack_78;
							pAVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(LatestChangelogVersionResponse));
							pAVar4 = new LatestChangelogVersionResponse(true, pSStack_50, version_00, contentHash, publishedAt, pSVar1);
							*version = pAVar4;
	label_05e25716: ;
							return true;
						}
					}
				}
				else {
					bVar2 = node.HasKey("id");
					if (bVar2) {
						pSVar3 = node.get_Item(pSVar1);
						if (pSVar3 == null) goto label_05e25732;
						bVar2 = pSVar3.get_IsNull();
						if ((((bVar2) &&(bVar2 = AottgChangelogParser.IsNull(node, "version"))) &&(bVar2 = AottgChangelogParser.IsNull(node, "contentHash"))) &&((bVar2 = AottgChangelogParser.IsNull(node, "publishedAt"), bVar2 &&(bVar2 = AottgChangelogParser.IsNull(node, "updatedAt"))))) {
							pAVar4 = il2cpp_codegen_object_new((Il2CppClass)typeof(LatestChangelogVersionResponse));
							pAVar4 = new LatestChangelogVersionResponse(false, null, null, null, null, null);
							*version = pAVar4;
							goto label_05e25716;
						}
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6005A13")]
	[Address(RVA = "0x5D25950", Offset = "0x5D24950", VA = "0x5D25950")]
	public static bool TryParseEntry(JSONNode node, out ChangelogEntryResponse entry)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$TryParseEntry): 1 lines keep C-only constructs
		String updatedAt;
		String publishedAt;
		String contentHash;
		String contentMarkdown;
		bool bVar1;
		ChangelogEntryResponse __this;
		String pSStack_98;
		String pSStack_90;
		String pSStack_88;
		String pSStack_80;
		String pSStack_78;
		String pSStack_70;
		String pSStack_68;
		String pSStack_60;
		String pSStack_58;
		String pSStack_50;
		Guid SStack_48;

		if (Il2CppMethodInitialized_075484e7 == false) {
			il2cpp_codegen_initialize_runtime_metadata(&typeof(ChangelogEntryResponse)) ;
			Il2CppMethodInitialized_075484e7 = true;
		}
		pSStack_98 = null;
		pSStack_68 = null;
		pSStack_70 = null;
		pSStack_78 = null;
		pSStack_80 = null;
		pSStack_88 = null;
		pSStack_90 = null;
		*entry = null;
		bVar1 = (node != null);
		if (bVar1) {
			if (node == null) {
				throw new NullReferenceException();
			}
			bVar1 = node.get_IsObject();
			if (bVar1) {
				SStack_48._a = 0;
				SStack_48._b = 0;
				SStack_48._c = 0;
				SStack_48._d = 0;
				SStack_48._e = 0;
				SStack_48._f = 0;
				SStack_48._g = 0;
				SStack_48._h = 0;
				SStack_48._i = 0;
				SStack_48._j = 0;
				SStack_48._k = 0;
				bVar1 = AottgChangelogParser.ReadRequiredString(node, "id", ref pSStack_98);
				if (bVar1) {
					bVar1 = Guid.TryParse(pSStack_98, ref SStack_48);
					if (!bVar1) {
						return false;
					}
					bVar1 = AottgChangelogParser.ReadRequiredString(node, "version", ref pSStack_68);
					if ((((bVar1) &&(bVar1 = AottgChangelogParser.ReadRequiredString(node, "contentMarkdown", ref pSStack_70))) &&(bVar1 = AottgChangelogParser.ReadRequiredString(node, "contentHash", ref pSStack_78))) &&(((bVar1 = AottgChangelogParser.ReadNullableString(node, "publishedAt", ref pSStack_80), bVar1 &&(bVar1 = AottgChangelogParser.ReadRequiredString(node, "createdAt", ref pSStack_88))) &&(bVar1 = AottgChangelogParser.ReadRequiredString(node, "updatedAt", ref pSStack_90), contentMarkdown = pSStack_70, contentHash = pSStack_78, publishedAt = pSStack_80, updatedAt = pSStack_90, bVar1)))) {
						pSStack_58 = pSStack_98;
						pSStack_60 = pSStack_68;
						pSStack_50 = pSStack_88;
						__this = new ChangelogEntryResponse(pSStack_58, pSStack_60, contentMarkdown, contentHash, publishedAt, pSStack_50, updatedAt);
						*entry = __this;
						return true;
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6005A14")]
	[Address(RVA = "0x5D25CC0", Offset = "0x5D24CC0", VA = "0x5D25CC0")]
	public static bool TryParseList(JSONNode node, out PublicChangelogListResponse list)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$TryParseList): 12 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		int pageSize;
		int page;
		bool bVar4;
		int iVar5;
		int iVar6;
		int iVar7;
		JSONNode pSVar8;
		JSONArray pSVar9;
		List<ChangelogSummaryResponse> __this;
		ChangelogSummaryResponse[] pAVar10;
		PublicChangelogListResponse __this_00;
		byte[] auVar11 = new byte[16];
		int iStack_44;
		int iStack_40;
		int iStack_3c;
		ChangelogSummaryResponse pAStack_38;

		iStack_3c = 0;
		iStack_40 = 0;
		iStack_44 = 0;
		pAStack_38 = null;
		*list = null;
		bVar4 = (node != null);
		if (!bVar4) {
			return false;
		}
		if (node == null) goto label_05e260b4;
		bVar4 = node.get_IsObject();
		if ((bVar4) &&(bVar4 = AottgChangelogParser.ReadNonNegativeInt(node, "total", ref iStack_3c))) {
			bVar4 = AottgChangelogParser.ReadNonNegativeInt(node, "page", ref iStack_40);
			page = iStack_40;
			if (!bVar4) {
				return false;
			}
			if (iStack_40 < 1) {
				return false;
			}
			bVar4 = AottgChangelogParser.ReadNonNegativeInt(node, "pageSize", ref iStack_44);
			pageSize = iStack_44;
			if (!bVar4) {
				return false;
			}
			if (iStack_44 < 1) {
				return false;
			}
			bVar4 = node.HasKey("entries");
			if (bVar4) {
				pSVar8 = node.get_Item("entries");
				if (pSVar8 != null) {
					bVar4 = pSVar8.get_IsArray();
					if (!bVar4) {
						return false;
					}
					pSVar8 = node.get_Item("entries");
					if ((pSVar8 != null) &&(pSVar9 = pSVar8.get_AsArray(), pSVar9 != null)) {
						iVar5 = (**(code*)((long)pSVar9.klass + 0x1e8))(pSVar9,*(ulong)((long)pSVar9.klass + 0x1f0));
						__this = il2cpp_codegen_object_new(typeof(List<ChangelogSummaryResponse>));
						__this = new List<object>(iVar5);
						iVar6 = (**(code*)((long)pSVar9.klass + 0x1e8))(pSVar9,*(ulong)((long)pSVar9.klass + 0x1f0));
						if (iVar6 < 1) {
							if (__this != null) goto label_05e26034;
						}
						else {
							if (__this != null) {
								iVar6 = 0;
								do {
									auVar11 = (**(code*)((long)pSVar9.klass + 0x188))(pSVar9,iVar6,*(ulong)((long)pSVar9.klass + 400));
									bVar4 = AottgChangelogParser.TryParseSummary(auVar11._0_8_, ref pAStack_38);
									if (!bVar4) {
										return false;
									}
									piVar1 = &__this._version;
									*piVar1 = *piVar1 + 1;
									pAVar10 = __this._items;
									if (pAVar10 == null) goto label_05e260b4;
									uVar2 = __this._size;
									if (uVar2 < (uint)pAVar10.Length) {
										__this._size = uVar2 + 1;
										pAVar10[(int)uVar2] = pAStack_38;
									}
									else {
										__this.AddWithResize((object)pAStack_38);
									}
									iVar6 = iVar6 + 1;
									iVar7 = (**(code*)((long)pSVar9.klass + 0x1e8))(pSVar9,*(ulong)((long)pSVar9.klass + 0x1f0));
								} while (iVar6 < iVar7);
	label_05e26034: ;
								iVar5 = iStack_3c;
								pAVar10 = (ChangelogSummaryResponse[])__this.ToArray();
								__this_00 = il2cpp_codegen_object_new((Il2CppClass)typeof(PublicChangelogListResponse));
								__this_00 = new PublicChangelogListResponse(iVar5, page, pageSize, pAVar10);
								*list = __this_00;
								return true;
							}
							auVar11 = (**(code*)((long)pSVar9.klass + 0x188))(pSVar9,0,*(ulong)((long)pSVar9.klass + 400));
							bVar4 = AottgChangelogParser.TryParseSummary(auVar11._0_8_, ref pAStack_38);
							if (!bVar4) {
								return false;
							}
						}
					}
				}
	label_05e260b4: ;
				throw new NullReferenceException();
			}
		}
		return false;
	}

	[Token(Token = "0x6005A15")]
	[Address(RVA = "0x5D26190", Offset = "0x5D25190", VA = "0x5D26190")]
	private static bool TryParseSummary(JSONNode node, out ChangelogSummaryResponse summary)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$TryParseSummary): clean
		String updatedAt;
		String publishedAt;
		String contentHash;
		String version;
		bool bVar1;
		ChangelogSummaryResponse __this;
		String local_78;
		String local_70;
		String local_68;
		String local_60;
		String local_58;
		String local_50;
		Guid local_48;

		local_78 = null;
		local_58 = null;
		local_60 = null;
		local_68 = null;
		local_70 = null;
		*summary = null;
		bVar1 = (node != null);
		if (bVar1) {
			if (node == null) {
				throw new NullReferenceException();
			}
			bVar1 = node.get_IsObject();
			if (bVar1) {
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
				bVar1 = AottgChangelogParser.ReadRequiredString(node, "id", ref local_78);
				if (bVar1) {
					bVar1 = Guid.TryParse(local_78, ref local_48);
					if (!bVar1) {
						return false;
					}
					bVar1 = AottgChangelogParser.ReadRequiredString(node, "version", ref local_58);
					if ((((bVar1) &&(bVar1 = AottgChangelogParser.ReadRequiredString(node, "contentHash", ref local_60))) &&(bVar1 = AottgChangelogParser.ReadRequiredString(node, "publishedAt", ref local_68))) &&(bVar1 = AottgChangelogParser.ReadRequiredString(node, "updatedAt", ref local_70), version = local_58, contentHash = local_60, publishedAt = local_68, updatedAt = local_70, bVar1)) {
						local_50 = local_78;
						__this = new ChangelogSummaryResponse(local_50, version, contentHash, publishedAt, updatedAt);
						*summary = __this;
						return true;
					}
				}
			}
		}
		return false;
	}

	[Token(Token = "0x6005A16")]
	private static bool TryParse<T>(string json, Parser<T> parser, out T value, out string error) where T : class
	{
		return default(bool);
	}

	[Token(Token = "0x6005A17")]
	[Address(RVA = "0x5D25820", Offset = "0x5D24820", VA = "0x5D25820")]
	private static bool ReadGuid(JSONNode node, string key, out string value)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$ReadGuid): 1 lines keep C-only constructs
		bool bVar1;
		Guid local_18;

		local_18._a = 0;
		local_18._b = 0;
		local_18._c = 0;
		local_18._d = 0;
		local_18._e = 0;
		local_18._f = 0;
		local_18._g = 0;
		local_18._h = 0;
		local_18._i = 0;
		local_18._j = 0;
		local_18._k = 0;
		bVar1 = AottgChangelogParser.ReadRequiredString(node, key, value);
		if (bVar1) {
			bVar1 = Guid.TryParse(*value, ref local_18);
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x6005A18")]
	[Address(RVA = "0x5D25860", Offset = "0x5D24860", VA = "0x5D25860")]
	private static bool ReadRequiredString(JSONNode node, string key, out string value)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$ReadRequiredString): 1 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		*value = null;
		if (node != null) {
			bVar1 = node.HasKey(key);
			if (!bVar1) {
				return false;
			}
			pSVar2 = node.get_Item(key) ;
			if (pSVar2 != null) {
				bVar1 = pSVar2.get_IsString();
				if (!bVar1) {
					return false;
				}
				pSVar2 = node.get_Item(key);
				if ((pSVar2 != null) &&(pSVar3 = pSVar2.get_Value(), pSVar3 != null)) {
					pSVar3 = pSVar3.Trim();
					*value = pSVar3;
					bVar1 = String.IsNullOrEmpty(*value);
					return !bVar1;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A19")]
	[Address(RVA = "0x5D25C20", Offset = "0x5D24C20", VA = "0x5D25C20")]
	private static bool ReadNullableString(JSONNode node, string key, out string value)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$ReadNullableString): clean
		bool bVar1;
		bool bVar2;
		JSONNode pSVar3;

		*value = null;
		if (node == null) {
	label_05e25caf: ;
			throw new NullReferenceException();
		}
		bVar1 = node.HasKey(key);
		if (bVar1) {
			pSVar3 = node.get_Item(key) ;
			if (pSVar3 == null) goto label_05e25caf;
			bVar2 = pSVar3.get_IsNull();
			bVar1 = true;
			if (!bVar2) {
				bVar1 = AottgChangelogParser.ReadRequiredString(node, key, value);
				return bVar1;
			}
		}
		else {
			bVar1 = false;
		}
		return bVar1;
	}

	[Token(Token = "0x6005A1A")]
	[Address(RVA = "0x5D260C0", Offset = "0x5D250C0", VA = "0x5D260C0")]
	private static bool ReadNonNegativeInt(JSONNode node, string key, out int value)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$ReadNonNegativeInt): clean
		bool bVar1;
		int iVar2;
		JSONNode pSVar3;

		*value = 0;
		if (node != null) {
			bVar1 = node.HasKey(key);
			if (!bVar1) {
				return false;
			}
			pSVar3 = node.get_Item(key) ;
			if (pSVar3 != null) {
				bVar1 = pSVar3.get_IsNumber();
				if (!bVar1) {
					return false;
				}
				pSVar3 = node.get_Item(key);
				if (pSVar3 != null) {
					iVar2 = pSVar3.get_AsInt();
					*value = iVar2;
					return -1 < iVar2;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A1B")]
	[Address(RVA = "0x5D26170", Offset = "0x5D25170", VA = "0x5D26170")]
	private static bool ReadPositiveInt(JSONNode node, string key, out int value)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$ReadPositiveInt): clean
		bool bVar1;

		bVar1 = AottgChangelogParser.ReadNonNegativeInt(node, key, value);
		if (bVar1) {
			return 0 < *value;
		}
		return false;
	}

	[Token(Token = "0x6005A1C")]
	[Address(RVA = "0x5D257B0", Offset = "0x5D247B0", VA = "0x5D257B0")]
	private static bool IsNull(JSONNode node, string key)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$IsNull): clean
		bool bVar1;
		JSONNode pSVar2;

		if (node != null) {
			bVar1 = node.HasKey(key);
			if (!bVar1) {
				return false;
			}
			pSVar2 = node.get_Item(key) ;
			if (pSVar2 != null) {
				bVar1 = pSVar2.get_IsNull();
				return bVar1;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005A1D")]
	[Address(RVA = "0x5D25740", Offset = "0x5D24740", VA = "0x5D25740")]
	private static bool IsObject(JSONNode node)
	{
		// Lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c (ApplicationManagers.Changelog.AottgChangelogParser$$IsObject): clean
		bool bVar1;

		bVar1 = (node != null);
		if (bVar1) {
			if (node == null) {
				throw new NullReferenceException();
			}
			bVar1 = node.get_IsObject();
			return bVar1;
		}
		return false;
	}

	[Token(Token = "0x6005A1E")]
	private static bool Fail<T>(out T value, out string error) where T : class
	{
		return default(bool);
	}

	// Compiler-generated members the metadata stubs omit (static constructor, lambdas,
	// iterator and async state machines), lifted from source/cpp/ApplicationManagers/Changelog/AottgChangelogParser.c.

	// ApplicationManagers.Changelog.AottgChangelogParser$$Fail<object>: clean
	private static bool Fail_object(object value, String error)
	{
		*value = null;
		*error = "bad_response";
		return false;
	}

	// ApplicationManagers.Changelog.AottgChangelogParser$$TryParse<object>: 1 lines keep C-only constructs
	private static bool TryParse_object(String json, AottgChangelogParser.Parser<T> parser, object value, String error)
	{
		bool bVar1;
		sbyte cVar2;
		JSONNode pSVar3;

		if (method.rgctx_data == null) {
			il2cpp_codegen_rgctx_method_init((MethodInfo)method);
		}
		*value = null;
		*error = null;
		bVar1 = String.IsNullOrWhiteSpace(json);
		if (bVar1) {
			*value = null;
			*error = "bad_response";
		}
		else {
			pSVar3 = JSON.Parse(json);
			if (parser == null) {
				throw new NullReferenceException();
			}
			cVar2 = (*(code)parser.invoke_impl)(parser.method_code,pSVar3,value,parser.method);
			if (cVar2 != false) {
				return true;
			}
			*value = null;
			*error = "bad_response";
		}
		return false;
	}

	// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$.ctor: 11 lines keep C-only constructs
	private void Parser_object___ctor(object @object)
	{
		sbyte cVar1;
		sbyte cVar2;
		object ex;

		this.method_ptr = *(IntPtr)(method + 8);
		this.method = method;
		this.m_target = @object;
		cVar2 = *(sbyte)(method + 0x52);
		this.method_code = (intptr_t)this;
		cVar1 = il2cpp_runtime_helper_030d61c0();
		if (cVar1 == false) {
			if (cVar2 == true) {
				if (this.method_is_virtual == false) {
					this.invoke_impl = (intptr_t)&label_02b64770;
				}
				else {
					cVar2 = il2cpp_runtime_helper_03143050(method);
					cVar1 = il2cpp_runtime_helper_030d68e0(method);
					if (cVar2 == false) {
						if (cVar1 == false) {
							this.invoke_impl = (intptr_t)&label_02b647a0;
						}
						else {
							this.invoke_impl = (intptr_t)&label_02b647e0;
						}
					}
					else if (cVar1 == false) {
						this.invoke_impl = (intptr_t)&label_02b64870;
					}
					else {
						this.invoke_impl = (intptr_t)il2cpp_runtime_helper_02b648c0;
					}
				}
				goto label_03eb93aa;
			}
			if (@object == null) {
				ex = il2cpp_codegen_get_argument_exception(null, "Delegate to an instance method cannot have null \'this\'.");
				throw ex;
			}
		}
		else if (cVar2 == '\x02') {
			this.invoke_impl = (intptr_t)&label_02b64790;
			goto label_03eb93aa;
		}
		this.invoke_impl = this.method_ptr;
		this.method_code = (intptr_t)this.m_target;
	label_03eb93aa: ;
		this.extra_arg = (intptr_t)il2cpp_runtime_helper_02b64720;
		return;
	}

	// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$Invoke: 1 lines keep C-only constructs
	private bool Parser_object__Invoke(JSONNode node, object value)
	{
		code *vtableDispatch;
		byte uVar1;

		vtableDispatch = (code)this.invoke_impl;
		uVar1 = (*vtableDispatch)(this.method_code,node,value,this.method,vtableDispatch);
		return (bool)uVar1;
	}

	// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$BeginInvoke: 2 lines keep C-only constructs
	private IAsyncResult Parser_object__BeginInvoke(JSONNode node, object value, AsyncCallback callback, object @object)
	{
		IAsyncResult pSVar1;
		JSONNode local_18;
		object local_10;

		local_10 = *value;
		local_18 = node;
		pSVar1 = (IAsyncResult)il2cpp_runtime_helper_031591c0(this, &local_18, callback, @object);
		return pSVar1;
	}

	// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$EndInvoke: 3 lines keep C-only constructs
	private bool Parser_object__EndInvoke(object value, IAsyncResult result)
	{
		object obj;
		byte puVar1;
		object* ppIStack_8;

		ppIStack_8 = value;
		obj = (object)il2cpp_runtime_helper_03159300(result, &ppIStack_8);
		if (obj == null) {
			throw new NullReferenceException();
		}
		puVar1 = il2cpp_vm_Object_Unbox(obj);
		return (bool)*puVar1;
	}
}
