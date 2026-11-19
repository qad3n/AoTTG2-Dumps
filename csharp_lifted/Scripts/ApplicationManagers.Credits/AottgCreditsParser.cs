// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsParser
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Credits;

[Token(Token = "0x200099E")]
public static class AottgCreditsParser
{
	[Token(Token = "0x60059B4")]
	[Address(RVA = "0x5D22B80", Offset = "0x5D21B80", VA = "0x5D22B80")]
	public static bool TryParse(string json, out AottgCreditsResponse credits, out string error)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$TryParse): clean
		bool bVar1;
		JSONNode root;

		*credits = null;
		*error = null;
		bVar1 = String.IsNullOrWhiteSpace(json);
		if (bVar1) {
			*credits = null;
			bVar1 = false;
			*error = "bad_response";
		}
		else {
			root = JSON.Parse(json);
			bVar1 = AottgCreditsParser.TryParse(root, credits, error);
		}
		return bVar1;
	}

	[Token(Token = "0x60059B5")]
	[Address(RVA = "0x5D22D10", Offset = "0x5D21D10", VA = "0x5D22D10")]
	public static bool TryParse(JSONNode root, out AottgCreditsResponse credits, out string error)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$TryParse): 8 lines keep C-only constructs
		bool bVar1;
		uint length;
		int iVar2;
		JSONNode pSVar3;
		JSONArray pSVar4;
		AottgCreditCategory[] categories;
		AottgCreditsResponse __this;
		AottgCreditCategory* category;
		ulong uVar5;
		byte[] auVar6 = new byte[16];

		*credits = null;
		*error = null;
		bVar1 = (root != null);
		if (!bVar1) {
	label_05e22f64: ;
			*credits = null;
			*error = "bad_response";
			return false;
		}
		if (root != null) {
			bVar1 = root.get_IsObject();
			if ((!bVar1) ||(bVar1 = root.HasKey("categories"), !bVar1)) goto label_05e22f64;
			pSVar3 = root.get_Item("categories");
			if (pSVar3 != null) {
				bVar1 = pSVar3.get_IsArray();
				if (!bVar1) goto label_05e22f64;
				pSVar3 = root.get_Item("categories");
				if ((pSVar3 != null) &&(pSVar4 = pSVar3.get_AsArray(), pSVar4 != null)) {
					length = (**(code*)((long)pSVar4.klass + 0x1e8))(pSVar4,*(ulong)((long)pSVar4.klass + 0x1f0));
					categories = (AottgCreditCategory[])new AottgCreditCategory[length];
					iVar2 = (**(code*)((long)pSVar4.klass + 0x1e8))(pSVar4,*(ulong)((long)pSVar4.klass + 0x1f0));
					if (0 < iVar2) {
						if (categories == null) {
							(**(code*)((long)pSVar4.klass + 0x188))(pSVar4,0,*(ulong)((long)pSVar4.klass + 400));
							throw new NullReferenceException();
						}
						category = categories.m_Items;
						uVar5 = 0;
						do {
							auVar6 = (**(code*)((long)pSVar4.klass + 0x188))(pSVar4,uVar5 & 0xffffffff,*(ulong)((long)pSVar4.klass + 400));
							if ((uint)categories.Length <= uVar5) {
								throw new IndexOutOfRangeException();
							}
							bVar1 = AottgCreditsParser.TryParseCategory(auVar6._0_8_, category);
							if (!bVar1) goto label_05e22f64;
							uVar5 = uVar5 + 1;
							iVar2 = (**(code*)((long)pSVar4.klass + 0x1e8))(pSVar4,*(ulong)((long)pSVar4.klass + 0x1f0));
							category = category + 1;
						} while ((long)uVar5 < (long)iVar2);
					}
					__this = new AottgCreditsResponse(categories);
					*credits = __this;
					return true;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60059B6")]
	[Address(RVA = "0x5D23060", Offset = "0x5D22060", VA = "0x5D23060")]
	private static bool TryParseCategory(JSONNode node, out AottgCreditCategory category)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$TryParseCategory): clean
		AottgCreditGroup[] groups;
		AottgCreditContributor[] contributors;
		String description;
		String name;
		bool bVar1;
		AottgCreditCategory __this;
		AottgCreditGroup[] local_50;
		AottgCreditContributor[] local_48;
		String local_40;
		String local_38;

		local_38 = null;
		local_40 = null;
		local_48 = null;
		local_50 = null;
		*category = null;
		bVar1 = (node != null);
		if (bVar1) {
			if (node == null) {
				throw new NullReferenceException();
			}
			bVar1 = node.get_IsObject();
			if ((((bVar1) &&(bVar1 = AottgCreditsParser.TryReadRequiredString(node, "name", ref local_38))) &&(bVar1 = AottgCreditsParser.TryReadDescription(node, ref local_40))) &&((bVar1 = AottgCreditsParser.TryReadContributors(node, ref local_48) , bVar1 &&(bVar1 = AottgCreditsParser.TryReadGroups(node, ref local_50), name = local_38, description = local_40, contributors = local_48, groups = local_50, bVar1)))) {
				__this = new AottgCreditCategory(name, description, contributors, groups);
				*category = __this;
				return true;
			}
		}
		return false;
	}

	[Token(Token = "0x60059B7")]
	[Address(RVA = "0x5D23670", Offset = "0x5D22670", VA = "0x5D23670")]
	private static bool TryReadGroups(JSONNode node, out AottgCreditGroup[] groups)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$TryReadGroups): 7 lines keep C-only constructs
		bool bVar1;
		uint length;
		int iVar2;
		JSONNode pSVar3;
		JSONArray pSVar4;
		AottgCreditGroup[] pAVar5;
		ulong uVar6;
		long lVar7;
		byte[] auVar8 = new byte[16];

		*groups = null;
		if (node != null) {
			bVar1 = node.HasKey("groups");
			if (!bVar1) {
				return false;
			}
			pSVar3 = node.get_Item("groups");
			if (pSVar3 != null) {
				bVar1 = pSVar3.get_IsArray();
				if (!bVar1) {
					return false;
				}
				pSVar3 = node.get_Item("groups");
				if ((pSVar3 != null) &&(pSVar4 = pSVar3.get_AsArray(), pSVar4 != null)) {
					length = (**(code*)((long)pSVar4.klass + 0x1e8))(pSVar4,*(ulong)((long)pSVar4.klass + 0x1f0));
					pAVar5 = (AottgCreditGroup[])new AottgCreditGroup[length];
					*groups = pAVar5;
					iVar2 = (**(code*)((long)pSVar4.klass + 0x1e8))(pSVar4,*(ulong)((long)pSVar4.klass + 0x1f0));
					if (iVar2 < 1) {
						return true;
					}
					lVar7 = 0x20;
					uVar6 = 0;
					while(true) {
						auVar8 = (**(code*)((long)pSVar4.klass + 0x188))(pSVar4,uVar6 & 0xffffffff,*(ulong)((long)pSVar4.klass + 400));
						pAVar5 = *groups;
						if (pAVar5 == null) break;
						if ((uint)pAVar5.Length <= uVar6) {
							throw new IndexOutOfRangeException();
						}
						bVar1 = AottgCreditsParser.TryParseGroup(auVar8._0_8_, (AottgCreditGroup*)((long)pAVar5.m_Items + lVar7 + -0x20));
						if (!bVar1) {
							return bVar1;
						}
						uVar6 = uVar6 + 1;
						iVar2 = (**(code*)((long)pSVar4.klass + 0x1e8))(pSVar4,*(ulong)((long)pSVar4.klass + 0x1f0));
						lVar7 = lVar7 + 8;
						if ((long)iVar2 <= (long)uVar6) {
							return bVar1;
						}
					}
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60059B8")]
	[Address(RVA = "0x5D23830", Offset = "0x5D22830", VA = "0x5D23830")]
	private static bool TryParseGroup(JSONNode node, out AottgCreditGroup group)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$TryParseGroup): 1 lines keep C-only constructs
		AottgCreditContributor[] contributors;
		String description;
		String title;
		bool bVar1;
		AottgCreditGroup __this;
		AottgCreditContributor[] local_40;
		String local_38;
		String local_30;

		local_30 = null;
		local_38 = null;
		local_40 = null;
		*group = null;
		bVar1 = (node != null);
		if (bVar1) {
			if (node == null) {
				throw new NullReferenceException();
			}
			bVar1 = node.get_IsObject();
			if ((((bVar1) &&(bVar1 = AottgCreditsParser.TryReadRequiredString(node, "title", ref local_30))) &&(bVar1 = AottgCreditsParser.TryReadDescription(node, ref local_38))) &&(bVar1 = AottgCreditsParser.TryReadContributors(node, ref local_40), title = local_30, description = local_38, contributors = local_40, bVar1)) {
				__this = il2cpp_codegen_object_new(typeof(AottgCreditGroup)) ;
				__this = new AottgCreditGroup(title, description, contributors);
				*group = __this;
				return true;
			}
		}
		return false;
	}

	[Token(Token = "0x60059B9")]
	[Address(RVA = "0x5D233E0", Offset = "0x5D223E0", VA = "0x5D233E0")]
	private static bool TryReadContributors(JSONNode node, out AottgCreditContributor[] contributors)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$TryReadContributors): 10 lines keep C-only constructs
		int piVar1;
		uint uVar2;
		bool bVar4;
		int capacity;
		int iVar5;
		int iVar6;
		JSONNode pSVar7;
		JSONArray pSVar8;
		List<AottgCreditContributor> __this;
		AottgCreditContributor[] pAVar9;
		byte[] auVar10 = new byte[16];
		AottgCreditContributor local_38;

		local_38 = null;
		*contributors = null;
		if (node != null) {
			bVar4 = node.HasKey("contributors");
			if (!bVar4) {
				return false;
			}
			pSVar7 = node.get_Item("contributors");
			if (pSVar7 != null) {
				bVar4 = pSVar7.get_IsArray();
				if (!bVar4) {
					return false;
				}
				pSVar7 = node.get_Item("contributors");
				if ((pSVar7 != null) &&(pSVar8 = pSVar7.get_AsArray(), pSVar8 != null)) {
					capacity = (**(code*)((long)pSVar8.klass + 0x1e8))(pSVar8,*(ulong)((long)pSVar8.klass + 0x1f0));
					__this = new List<AottgCreditContributor>(capacity);
					iVar5 = (**(code*)((long)pSVar8.klass + 0x1e8))(pSVar8,*(ulong)((long)pSVar8.klass + 0x1f0));
					if (iVar5 < 1) {
						if (__this != null) goto label_05e23617;
					}
					else {
						if (__this != null) {
							iVar5 = 0;
							do {
								auVar10 = (**(code*)((long)pSVar8.klass + 0x188))(pSVar8,iVar5,*(ulong)((long)pSVar8.klass + 400));
								bVar4 = AottgCreditsParser.TryParseContributor(auVar10._0_8_, ref local_38);
								if (!bVar4) {
									return false;
								}
								piVar1 = &__this._version;
								*piVar1 = *piVar1 + 1;
								pAVar9 = __this._items;
								if (pAVar9 == null) goto label_05e23661;
								uVar2 = __this._size;
								if (uVar2 < (uint)pAVar9.Length) {
									__this._size = uVar2 + 1;
									pAVar9[(int)uVar2] = local_38;
								}
								else {
									__this.AddWithResize((object)local_38);
								}
								iVar5 = iVar5 + 1;
								iVar6 = (**(code*)((long)pSVar8.klass + 0x1e8))(pSVar8,*(ulong)((long)pSVar8.klass + 0x1f0));
							} while (iVar5 < iVar6);
	label_05e23617: ;
							pAVar9 = (AottgCreditContributor[])__this.ToArray();
							*contributors = pAVar9;
							return true;
						}
						auVar10 = (**(code*)((long)pSVar8.klass + 0x188))(pSVar8,0,*(ulong)((long)pSVar8.klass + 400));
						bVar4 = AottgCreditsParser.TryParseContributor(auVar10._0_8_, ref local_38);
						if (!bVar4) {
							return false;
						}
					}
				}
			}
		}
	label_05e23661: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x60059BA")]
	[Address(RVA = "0x5D239A0", Offset = "0x5D229A0", VA = "0x5D239A0")]
	private static bool TryParseContributor(JSONNode node, out AottgCreditContributor contributor)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$TryParseContributor): clean
		String pSVar1;
		bool bVar2;
		JSONNode pSVar3;
		AottgCreditContributor __this;
		String value;
		MethodInfo method_00;
		String local_40;
		Guid local_38;

		local_40 = null;
		local_38._a = 0;
		local_38._b = 0;
		local_38._c = 0;
		local_38._d = 0;
		local_38._e = 0;
		local_38._f = 0;
		local_38._g = 0;
		local_38._h = 0;
		local_38._i = 0;
		local_38._j = 0;
		local_38._k = 0;
		*contributor = null;
		bVar2 = (node != null);
		if (!bVar2) {
			return false;
		}
		if (node == null) {
	label_05e23bd6: ;
			throw new NullReferenceException();
		}
		bVar2 = node.get_IsObject();
		if (((bVar2) &&(bVar2 = AottgCreditsParser.TryReadRequiredString(node, "name", ref local_40))) &&(bVar2 = node.HasKey("accountId"))) {
			pSVar3 = node.get_Item("accountId");
			if (pSVar3 == null) goto label_05e23bd6;
			bVar2 = pSVar3.get_IsNull();
			if (bVar2) {
				value = null;
			}
			else {
				pSVar3 = node.get_Item("accountId");
				if (pSVar3 == null) goto label_05e23bd6;
				bVar2 = pSVar3.get_IsString();
				if (!bVar2) goto label_05e23bc6;
				method_00 = (MethodInfo *)"accountId";
				pSVar3 = node.get_Item("accountId");
				value = AottgCreditsParser.Trimmed(pSVar3);
				bVar2 = String.IsNullOrEmpty(value);
				if (bVar2) {
					return false;
				}
				bVar2 = Guid.TryParse(value, ref local_38);
				if (!bVar2) {
					return false;
				}
			}
			pSVar1 = local_40;
			__this = new AottgCreditContributor();
			__this._Name_k__BackingField = pSVar1;
			__this._AccountId_k__BackingField = value;
			*contributor = __this;
			bVar2 = true;
		}
		else {
	label_05e23bc6: ;
			bVar2 = false;
		}
		return bVar2;
	}

	[Token(Token = "0x60059BB")]
	[Address(RVA = "0x5D232C0", Offset = "0x5D222C0", VA = "0x5D232C0")]
	private static bool TryReadDescription(JSONNode node, out string description)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$TryReadDescription): clean
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;
		MethodInfo method_00;

		*description = null;
		if (node != null) {
			bVar1 = node.HasKey("description");
			if (!bVar1) {
				return false;
			}
			pSVar2 = node.get_Item("description");
			if (pSVar2 != null) {
				bVar1 = pSVar2.get_IsNull();
				if (bVar1) {
					return true;
				}
				pSVar2 = node.get_Item("description");
				if (pSVar2 != null) {
					bVar1 = pSVar2.get_IsString();
					if (bVar1) {
						method_00 = (MethodInfo *)"description";
						pSVar2 = node.get_Item("description");
						pSVar3 = AottgCreditsParser.Trimmed(pSVar2);
						*description = pSVar3;
						return true;
					}
					return false;
				}
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60059BC")]
	[Address(RVA = "0x5D23200", Offset = "0x5D22200", VA = "0x5D23200")]
	private static bool TryReadRequiredString(JSONNode node, string key, out string value)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$TryReadRequiredString): 1 lines keep C-only constructs
		bool bVar1;
		JSONNode pSVar2;
		String pSVar3;

		*value = null;
		if (node == null) {
	label_05e232ba: ;
			throw new NullReferenceException();
		}
		bVar1 = node.HasKey(key);
		if (bVar1) {
			pSVar2 = node.get_Item(key) ;
			if (pSVar2 == null) goto label_05e232ba;
			bVar1 = pSVar2.get_IsString();
			if (bVar1) {
				pSVar2 = node.get_Item(key);
				pSVar3 = AottgCreditsParser.Trimmed(pSVar2);
				*value = pSVar3;
				bVar1 = String.IsNullOrEmpty(*value);
				return !bVar1;
			}
		}
		return false;
	}

	[Token(Token = "0x60059BD")]
	[Address(RVA = "0x5D23BE0", Offset = "0x5D22BE0", VA = "0x5D23BE0")]
	private static string Trimmed(JSONNode node)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$Trimmed): clean
		bool bVar1;
		String pSVar2;

		bVar1 = (node == null);
		if (bVar1) {
			return null;
		}
		if (node != null) {
			bVar1 = node.get_IsNull();
			if (bVar1) {
				return null;
			}
			pSVar2 = node.get_Value();
			if (pSVar2 != null) {
				pSVar2 = pSVar2.Trim();
				return pSVar2;
			}
		}
		throw new NullReferenceException();
	}

	[Token(Token = "0x60059BE")]
	[Address(RVA = "0x5D22FF0", Offset = "0x5D21FF0", VA = "0x5D22FF0")]
	private static bool IsObject(JSONNode node)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$IsObject): clean
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

	[Token(Token = "0x60059BF")]
	[Address(RVA = "0x5D22CB0", Offset = "0x5D21CB0", VA = "0x5D22CB0")]
	private static bool Fail(out AottgCreditsResponse credits, out string error)
	{
		// Lifted from source/cpp/ApplicationManagers/Credits/AottgCreditsParser.c (ApplicationManagers.Credits.AottgCreditsParser$$Fail): clean
		*credits = null;
		*error = "bad_response";
		return false;
	}
}
