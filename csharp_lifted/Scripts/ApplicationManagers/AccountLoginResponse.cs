// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.AccountLoginResponse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/AccountLoginResponse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are the native C lifted into C# syntax by tools/pipeline/lift_csharp.py.
// ===============================================================
using System;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers;

[Token(Token = "0x2000945")]
public sealed class AccountLoginResponse
{
	[Token(Token = "0x2000946")]
	public sealed class ProfileData
	{
		[Token(Token = "0x4002E88")]
		[FieldOffset(Offset = "0x10")]
		public string AccountId;

		[Token(Token = "0x4002E89")]
		[FieldOffset(Offset = "0x18")]
		public string Email;

		[Token(Token = "0x4002E8A")]
		[FieldOffset(Offset = "0x20")]
		public string DisplayName;

		[Token(Token = "0x4002E8B")]
		[FieldOffset(Offset = "0x28")]
		public string PhotonUserId;

		[Token(Token = "0x4002E8C")]
		[FieldOffset(Offset = "0x30")]
		public bool EmailVerified;

		[Token(Token = "0x4002E8D")]
		[FieldOffset(Offset = "0x31")]
		public bool HasPassword;

		[Token(Token = "0x4002E8E")]
		[FieldOffset(Offset = "0x38")]
		public string[] Roles;

		[Token(Token = "0x4002E8F")]
		[FieldOffset(Offset = "0x40")]
		public string[] Permissions;

		[Token(Token = "0x4002E90")]
		[FieldOffset(Offset = "0x48")]
		public string RestrictionStatus;

		[Token(Token = "0x4002E91")]
		[FieldOffset(Offset = "0x50")]
		public JSONNode Restriction;

		[Token(Token = "0x4002E92")]
		[FieldOffset(Offset = "0x58")]
		public PatreonData Patreon;

		[Token(Token = "0x4002E93")]
		[FieldOffset(Offset = "0x60")]
		public OAuthLinkData[] OAuthLinks;

		[Token(Token = "0x4002E94")]
		[FieldOffset(Offset = "0x68")]
		public string Description;

		[Token(Token = "0x4002E95")]
		[FieldOffset(Offset = "0x70")]
		public string AvatarKey;

		[Token(Token = "0x4002E96")]
		[FieldOffset(Offset = "0x78")]
		public string BannerKey;

		[Token(Token = "0x4002E97")]
		[FieldOffset(Offset = "0x80")]
		public JSONNode Socials;

		[Token(Token = "0x4002E98")]
		[FieldOffset(Offset = "0x88")]
		public DateTimeOffset CreatedAt;

		[Token(Token = "0x6005734")]
		[Address(RVA = "0x5CF6820", Offset = "0x5CF5820", VA = "0x5CF6820")]
		public static ProfileData Parse(JSONNode node)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.ProfileData$$Parse): 1 lines keep C-only constructs
			bool bVar1;
			AccountLoginResponse.ProfileData __this;
			String pSVar2;
			String[] pSVar3;
			JSONNode pSVar4;
			AccountLoginResponse.PatreonData pAVar5;
			AccountLoginResponse.OAuthLinkData[] pAVar6;
			MethodInfo pMVar8;
			DateTimeOffset SVar9;

			if (Il2CppMethodInitialized_07548325 == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(AccountLoginResponse.ProfileData)) ;
				Il2CppMethodInitialized_07548325 = true;
			}
			__this = new AccountLoginResponse.ProfileData();
			bVar1 = (node == null);
			if (!bVar1) {
				pSVar2 = AccountLoginResponse.ProfileData.ReadString(node, "accountId");
				if (__this == null) {
		label_05df6d9e: ;
					throw new NullReferenceException();
				}
				__this.AccountId = pSVar2;
				pSVar2 = AccountLoginResponse.ProfileData.ReadString(node, "email");
				__this.Email = pSVar2;
				pSVar2 = AccountLoginResponse.ProfileData.ReadString(node, "displayName");
				__this.DisplayName = pSVar2;
				pSVar2 = AccountLoginResponse.ProfileData.ReadString(node, "photonUserId");
				__this.PhotonUserId = pSVar2;
				bVar1 = AccountLoginResponse.ProfileData.ReadBool(node, "emailVerified");
				__this.EmailVerified = bVar1;
				bVar1 = AccountLoginResponse.ProfileData.ReadBool(node, "hasPassword");
				__this.HasPassword = bVar1;
				pSVar3 = AccountLoginResponse.ProfileData.ReadStringArray(node, "roles");
				__this.Roles = pSVar3;
				pSVar3 = AccountLoginResponse.ProfileData.ReadStringArray(node, "permissions");
				__this.Permissions = pSVar3;
				pSVar2 = AccountLoginResponse.ProfileData.ReadString(node, "restrictionStatus");
				__this.RestrictionStatus = pSVar2;
				pSVar2 = "restriction";
				pSVar4 = null;
				bVar1 = (node != null);
				if (bVar1) {
					if (node == null) goto label_05df6d9e;
					bVar1 = node.HasKey(pSVar2);
					if (bVar1) {
						pSVar4 = node.get_Item(pSVar2);
					}
					else {
						pSVar4 = null;
					}
				}
				__this.Restriction = pSVar4;
				pMVar8 = (MethodInfo *)"patreon";
				pSVar4 = null;
				bVar1 = (node != null);
				if (bVar1) {
					if (node == null) goto label_05df6d9e;
					bVar1 = node.HasKey((String)pMVar8);
					if (bVar1) {
						pSVar4 = node.get_Item((String)pMVar8);
					}
					else {
						pSVar4 = null;
					}
				}
				pAVar5 = AccountLoginResponse.PatreonData.Parse(pSVar4);
				__this.Patreon = pAVar5;
				pMVar8 = (MethodInfo *)"oAuthLinks";
				pSVar4 = null;
				bVar1 = (node != null);
				if (bVar1) {
					if (node == null) goto label_05df6d9e;
					bVar1 = node.HasKey((String)pMVar8);
					if (bVar1) {
						pSVar4 = node.get_Item((String)pMVar8);
					}
					else {
						pSVar4 = null;
					}
				}
				pAVar6 = AccountLoginResponse.ProfileData.ParseOAuthLinks(pSVar4);
				__this.OAuthLinks = pAVar6;
				pSVar2 = AccountLoginResponse.ProfileData.ReadString(node, "description");
				__this.Description = pSVar2;
				pSVar2 = AccountLoginResponse.ProfileData.ReadString(node, "avatarKey");
				__this.AvatarKey = pSVar2;
				pSVar2 = AccountLoginResponse.ProfileData.ReadString(node, "bannerKey");
				__this.BannerKey = pSVar2;
				pSVar2 = "socials";
				pSVar4 = null;
				bVar1 = (node != null);
				if (bVar1) {
					if (node == null) goto label_05df6d9e;
					bVar1 = node.HasKey(pSVar2);
					if (bVar1) {
						pSVar4 = node.get_Item(pSVar2);
					}
					else {
						pSVar4 = null;
					}
				}
				__this.Socials = pSVar4;
				SVar9 = AccountLoginResponse.ProfileData.ReadDateTimeOffset(node, "createdAt");
				__this.CreatedAt._dateTime._dateData =(uint64_t)SVar9._dateTime._dateData;
				__this.CreatedAt._offsetMinutes = SVar9._offsetMinutes;
			}
			return __this;
		}

		[Token(Token = "0x6005735")]
		[Address(RVA = "0x5CF7580", Offset = "0x5CF6580", VA = "0x5CF7580")]
		private static bool ReadBool(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.ProfileData$$ReadBool): clean
			uint uVar1;
			bool bVar2;
			JSONNode a;

			if (Il2CppMethodInitialized_07548326 == false) {
				Il2CppMethodInitialized_07548326 = true;
				if (Il2CppMethodInitialized_07548321 != false) goto label_05df75a8;
		label_05df767e: ;
				Il2CppMethodInitialized_07548321 = true;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07548321 == false) goto label_05df767e;
		label_05df75a8: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			a = null;
			bVar2 = (node != null);
			if (bVar2) {
				if (node == null) goto label_05df76d9;
				bVar2 = node.HasKey(key);
				if (bVar2) {
					a = node.get_Item(key);
					goto label_05df7612;
				}
				a = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
		label_05df7612: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar2 = (a != null);
			if (!bVar2) {
				return false;
			}
			if (a != null) {
				bVar2 = a.get_AsBool();
				return bVar2;
			}
		label_05df76d9: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005736")]
		[Address(RVA = "0x5CF7420", Offset = "0x5CF6420", VA = "0x5CF7420")]
		private static string ReadString(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.ProfileData$$ReadString): clean
			uint uVar1;
			bool bVar2;
			JSONNode a;
			String pSVar3;

			if (Il2CppMethodInitialized_07548327 == false) {
				Il2CppMethodInitialized_07548327 = true;
				if (Il2CppMethodInitialized_07548321 != false) goto label_05df7448;
		label_05df751e: ;
				Il2CppMethodInitialized_07548321 = true;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07548321 == false) goto label_05df751e;
		label_05df7448: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			a = null;
			bVar2 = (node != null);
			if (bVar2) {
				if (node == null) goto label_05df7579;
				bVar2 = node.HasKey(key);
				if (bVar2) {
					a = node.get_Item(key);
					goto label_05df74b2;
				}
				a = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
		label_05df74b2: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar2 = (a != null);
			if (!bVar2) {
				return null;
			}
			if (a != null) {
				return pSVar3;
			}
		label_05df7579: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005737")]
		[Address(RVA = "0x5CF76E0", Offset = "0x5CF66E0", VA = "0x5CF76E0")]
		private static string[] ReadStringArray(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.ProfileData$$ReadStringArray): 13 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			uint uVar4;
			MethodInfo pMVar5;
			bool bVar6;
			int capacity;
			JSONNode pSVar7;
			JSONArray a;
			Il2CppClass pIVar8;
			List<string> __this;
			String[] pSVar9;
			String item;
			KeyValuePair<string, JSONNode> SVar10;
			JSONNode.Enumerator local_78;

			local_78.m_Array._list = null;
			local_78.m_Array._index = 0;
			local_78.m_Array._version = 0;
			local_78.m_Object._current.value = null;
			local_78.m_Object._getEnumeratorRetType = 0;
			local_78.m_Object._36_4_ = 0;
			local_78.m_Object._version = 0;
			local_78.m_Object._index = 0;
			local_78.m_Object._current.key = null;
			local_78.type = 0;
			local_78._4_4_ = 0;
			local_78.m_Object._dictionary = null;
			local_78.m_Array._current = null;
			pSVar7 = null;
			bVar6 = (node != null);
			if (bVar6) {
				if (node == null) goto label_05df7adf;
				bVar6 = node.HasKey(key);
				if (bVar6) {
					pSVar7 = node.get_Item(key);
					goto label_05df77f2;
				}
				pSVar7 = null;
				uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
		label_05df77f2: ;
				uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
			}
			bVar6 = (pSVar7 == null);
			if (bVar6) {
		label_05df7859: ;
				pMVar5 = MethodInfo_System_Array_Empty_string;
				if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
					il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
					pIVar8 = *(Il2CppClass*)((long)(pMVar5.field7_0x38).methodMetadataHandle + 0x10);
					bVar2 = (pIVar8._2).bitflags1;
				}
				else {
					pIVar8 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
					bVar2 = (pIVar8._2).bitflags1;
				}
				if ((bVar2 & 1) == 0) {
					pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
					uVar3 = (pIVar8._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar3 = (pIVar8._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
					pIVar8 = (pMVar5.field7_0x38).rgctx_data[2].klass;
					bVar2 = (pIVar8._2).bitflags1;
				}
				else {
					pIVar8 = (pMVar5.field7_0x38).rgctx_data[2].klass;
					bVar2 = (pIVar8._2).bitflags1;
				}
				if ((bVar2 & 1) == 0) {
					pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
				}
				return *(String[]*)pIVar8.static_fields;
			}
			if (pSVar7 != null) {
				a = pSVar7.get_AsArray();
				bVar6 = ((JSONNode)a == null);
				if (bVar6) goto label_05df7859;
				if (a != null) {
					capacity = a.get_Count();
					__this = new List<string>(capacity);
					local_78.GetEnumerator(a);
					bVar6 = local_78.MoveNext();
					if (bVar6) {
						if (__this != null) {
							do {
								SVar10 = local_78.Current;
								pSVar7 = ((JSONNode)SVar10);
								bVar6 = (pSVar7 != null);
								item = null;
								if (bVar6) {
									if (pSVar7 == null) goto label_05df7adf;
									item = pSVar7.get_Value();
								}
								pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
								piVar1 = &__this._version;
								*piVar1 = *piVar1 + 1;
								pSVar9 = __this._items;
								if (pSVar9 == null) goto label_05df7adf;
								uVar4 = __this._size;
								if (uVar4 < (uint)pSVar9.Length) {
									__this._size = uVar4 + 1;
									pSVar9[(int)uVar4] = item;
								}
								else {
									__this.AddWithResize((object)item);
								}
								bVar6 = local_78.MoveNext();
							} while (bVar6);
		label_05df7a64: ;
							pSVar9 = (String[])__this.ToArray() ;
							return pSVar9;
						}
						SVar10 = local_78.Current;
						pSVar7 = ((JSONNode)SVar10);
						bVar6 = (pSVar7 != null);
						if ((bVar6) && (pSVar7 != null)) {
							pSVar7.get_Value();
						}
					}
					else if (__this != null) goto label_05df7a64;
				}
			}
		label_05df7adf: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005738")]
		[Address(RVA = "0x5CF7FC0", Offset = "0x5CF6FC0", VA = "0x5CF7FC0")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.ProfileData$$ReadDateTimeOffset): 5 lines keep C-only constructs
			uint uVar1;
			bool bVar2;
			JSONNode a;
			String value;
			CultureInfo formatProvider;
			DateTimeOffset SVar3;
			DateTimeOffset local_38;

			if (Il2CppMethodInitialized_07548329 == false) {
				Il2CppMethodInitialized_07548329 = true;
				if (Il2CppMethodInitialized_07548321 != false) goto label_05df7ff2;
		label_05df8189: ;
				local_38._offsetMinutes = 0;
				local_38._10_6_ = 0;
				local_38._dateTime._dateData = (DateTime)0;
				Il2CppMethodInitialized_07548321 = true;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07548321 == false) goto label_05df8189;
		label_05df7ff2: ;
				local_38._offsetMinutes = 0;
				local_38._10_6_ = 0;
				local_38._dateTime._dateData = (DateTime)0;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			a = null;
			bVar2 = (node != null);
			if (bVar2) {
				if (node == null) goto label_05df81d6;
				bVar2 = node.HasKey(key);
				if (bVar2) {
					a = node.get_Item(key);
					goto label_05df805c;
				}
				a = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
		label_05df805c: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar2 = (a == null);
			SVar3 = (DateTimeOffset)ZEXT816(0);
			if (!bVar2) {
				if (a == null) {
		label_05df81d6: ;
					throw new NullReferenceException();
				}
				value = a.get_Value();
				bVar2 = String.IsNullOrEmpty(value);
				SVar3 = (DateTimeOffset)ZEXT816(0);
				if (!bVar2) {
					formatProvider = CultureInfo.InvariantCulture;
					bVar2 = DateTimeOffset.TryParse(value, (IFormatProvider)formatProvider, 0x80, ref local_38);
					SVar3 = (DateTimeOffset)ZEXT816(0);
					if (bVar2) {
						SVar3 = (DateTimeOffset)local_38.ToUniversalTime();
					}
				}
			}
			return (DateTimeOffset)SVar3;
		}

		[Token(Token = "0x6005739")]
		[Address(RVA = "0x5CF7CB0", Offset = "0x5CF6CB0", VA = "0x5CF7CB0")]
		private static OAuthLinkData[] ParseOAuthLinks(JSONNode node)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.ProfileData$$ParseOAuthLinks): 14 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			uint uVar4;
			bool bVar5;
			int capacity;
			JSONArray a;
			Il2CppClass pIVar6;
			List<AccountLoginResponse.OAuthLinkData> __this;
			JSONNode pSVar7;
			AccountLoginResponse.OAuthLinkData item;
			AccountLoginResponse.OAuthLinkData[] pAVar8;
			MethodInfo pMVar9;
			KeyValuePair<string, JSONNode> SVar10;
			JSONNode.Enumerator local_78;

			local_78.m_Array._list = null;
			local_78.m_Array._index = 0;
			local_78.m_Array._version = 0;
			local_78.m_Object._current.value = null;
			local_78.m_Object._getEnumeratorRetType = 0;
			local_78.m_Object._36_4_ = 0;
			local_78.m_Object._version = 0;
			local_78.m_Object._index = 0;
			local_78.m_Object._current.key = null;
			local_78.type = 0;
			local_78._4_4_ = 0;
			local_78.m_Object._dictionary = null;
			local_78.m_Array._current = null;
			bVar5 = (node == null);
			if (bVar5) {
		label_05df7da6: ;
				pMVar9 = MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData;
				if ((MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData.field7_0x38).methodMetadataHandle == null) {
					il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData);
					pIVar6 = *(Il2CppClass*)((long)(pMVar9.field7_0x38).methodMetadataHandle + 0x10);
					bVar2 = (pIVar6._2).bitflags1;
				}
				else {
					pIVar6 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData.field7_0x38). methodMetadataHandle + 0x10);
					bVar2 = (pIVar6._2).bitflags1;
				}
				if ((bVar2 & 1) == 0) {
					pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
					uVar3 = (pIVar6._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar3 = (pIVar6._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
					pIVar6 = (pMVar9.field7_0x38).rgctx_data[2].klass;
					bVar2 = (pIVar6._2).bitflags1;
				}
				else {
					pIVar6 = (pMVar9.field7_0x38).rgctx_data[2].klass;
					bVar2 = (pIVar6._2).bitflags1;
				}
				if ((bVar2 & 1) == 0) {
					pIVar6 = il2cpp_codegen_class_init_checked(pIVar6);
				}
				return *(AccountLoginResponse.OAuthLinkData[]*)pIVar6.static_fields;
			}
			if (node != null) {
				a = node.get_AsArray();
				bVar5 = ((JSONNode)a == null);
				if (bVar5) goto label_05df7da6;
				if (a != null) {
					capacity = a.get_Count();
					__this = il2cpp_codegen_object_new((Il2CppClass)typeof(List<AccountLoginResponse.OAuthLinkData>));
					__this = new List<object>(capacity);
					local_78.GetEnumerator(a);
					bVar5 = local_78.MoveNext();
					if (bVar5) {
						if (__this == null) {
							SVar10 = local_78.Current;
							pMVar9 = (MethodInfo)SVar10.value;
							pSVar7 = ((JSONNode)SVar10);
							AccountLoginResponse.OAuthLinkData.Parse(pSVar7);
							throw new NullReferenceException();
						}
						do {
							SVar10 = local_78.Current;
							pMVar9 = (MethodInfo)SVar10.value;
							pSVar7 = ((JSONNode)SVar10);
							item = AccountLoginResponse.OAuthLinkData.Parse(pSVar7);
							pMVar9 = MethodInfo_System_Collections_Generic_List_AccountLoginResponse_OAuthLinkData_Add;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pAVar8 = __this._items;
							if (pAVar8 == null) goto label_05df7f7d;
							uVar4 = __this._size;
							if (uVar4 < (uint)pAVar8.Length) {
								__this._size = uVar4 + 1;
								pAVar8[(int)uVar4] = item;
							}
							else {
								__this.AddWithResize((object)item);
							}
							bVar5 = local_78.MoveNext();
						} while (bVar5);
					}
					else if (__this == null) goto label_05df7f7d;
					pAVar8 = (AccountLoginResponse.OAuthLinkData[])__this.ToArray();
					return pAVar8;
				}
			}
		label_05df7f7d: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x600573A")]
		[Address(RVA = "0x5CF71C0", Offset = "0x5CF61C0", VA = "0x5CF71C0")]
		public ProfileData()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.ProfileData$$.ctor): 24 lines keep C-only constructs
			byte bVar1;
			uint uVar2;
			MethodInfo pMVar3;
			Il2CppClass pIVar4;

			pMVar3 = MethodInfo_System_Array_Empty_string;
			if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
				pIVar4 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
				bVar1 = (pIVar4._2).bitflags1;
			}
			else {
				pIVar4 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
				bVar1 = (pIVar4._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
				uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = *(uint)((long)pIVar4 + 0xe4);
			}
			if (uVar2 == 0) {
				pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar4._2).bitflags1;
			}
			else {
				pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar4._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			}
			this.Roles = *(String[]*)pIVar4.static_fields;
			pMVar3 = MethodInfo_System_Array_Empty_string;
			if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
				pIVar4 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
				bVar1 = (pIVar4._2).bitflags1;
			}
			else {
				pIVar4 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
				bVar1 = (pIVar4._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
				uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = *(uint)((long)pIVar4 + 0xe4);
			}
			if (uVar2 == 0) {
				pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar4._2).bitflags1;
			}
			else {
				pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar4._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			}
			this.Permissions = *(String[]*)pIVar4.static_fields;
			pMVar3 = MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData;
			if ((MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData.field7_0x38).methodMetadataHandle ==null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData);
				pIVar4 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
				bVar1 = (pIVar4._2).bitflags1;
			}
			else {
				pIVar4 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_AccountLoginResponse_OAuthLinkData.field7_0x38). methodMetadataHandle + 0x10);
				bVar1 = (pIVar4._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
				uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar4._2).bitflags1;
			}
			else {
				pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar4._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			}
			this.OAuthLinks = *(AccountLoginResponse.OAuthLinkData[]*)pIVar4.static_fields;
			base();
			return;
		}
	}

	[Token(Token = "0x2000947")]
	public sealed class PatreonData
	{
		[Token(Token = "0x4002E99")]
		private const string Tier2Id = "28767500";

		[Token(Token = "0x4002E9A")]
		private const string Tier3Id = "28767505";

		[Token(Token = "0x4002E9B")]
		[FieldOffset(Offset = "0x10")]
		public bool Linked;

		[Token(Token = "0x4002E9C")]
		[FieldOffset(Offset = "0x18")]
		public string PatronStatus;

		[Token(Token = "0x4002E9D")]
		[FieldOffset(Offset = "0x20")]
		public string[] TierIds;

		[Token(Token = "0x4002E9E")]
		[FieldOffset(Offset = "0x28")]
		public int EntitledAmountCents;

		[Token(Token = "0x4002E9F")]
		[FieldOffset(Offset = "0x2C")]
		public bool ManualOverride;

		[Token(Token = "0x4002EA0")]
		[FieldOffset(Offset = "0x30")]
		public DateTimeOffset LastSyncedAt;

		[Token(Token = "0x4002EA1")]
		[FieldOffset(Offset = "0x40")]
		public bool HasTier2;

		[Token(Token = "0x4002EA2")]
		[FieldOffset(Offset = "0x41")]
		public bool HasTier3;

		[Token(Token = "0x600573B")]
		[Address(RVA = "0x5CF7AF0", Offset = "0x5CF6AF0", VA = "0x5CF7AF0")]
		public static PatreonData Parse(JSONNode node)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.PatreonData$$Parse): 1 lines keep C-only constructs
			bool bVar1;
			int iVar2;
			AccountLoginResponse.PatreonData __this;
			String pSVar3;
			String[] pSVar4;
			DateTimeOffset SVar5;

			if (Il2CppMethodInitialized_0754832c == false) {
				il2cpp_codegen_initialize_runtime_metadata(&typeof(AccountLoginResponse.PatreonData)) ;
				Il2CppMethodInitialized_0754832c = true;
			}
			__this = new AccountLoginResponse.PatreonData();
			bVar1 = (node == null);
			if (!bVar1) {
				bVar1 = AccountLoginResponse.PatreonData.ReadBool(node, "linked");
				if (__this == null) {
					throw new NullReferenceException();
				}
				__this.Linked = bVar1;
				pSVar3 = AccountLoginResponse.PatreonData.ReadString(node, "patronStatus");
				__this.PatronStatus = pSVar3;
				pSVar4 = AccountLoginResponse.PatreonData.ReadStringArray(node, "tierIds");
				__this.TierIds = pSVar4;
				bVar1 = AccountLoginResponse.PatreonData.HasTier(__this.TierIds, "28767500");
				__this.HasTier2 = bVar1;
				bVar1 = AccountLoginResponse.PatreonData.HasTier(__this.TierIds, "28767505");
				__this.HasTier3 = bVar1;
				iVar2 = AccountLoginResponse.PatreonData.ReadInt(node, "entitledAmountCents");
				__this.EntitledAmountCents = iVar2;
				bVar1 = AccountLoginResponse.PatreonData.ReadBool(node, "manualOverride");
				__this.ManualOverride = bVar1;
				SVar5 = AccountLoginResponse.PatreonData.ReadDateTimeOffset(node, "lastSyncedAt");
				__this.LastSyncedAt._dateTime._dateData =(uint64_t)SVar5._dateTime._dateData;
				__this.LastSyncedAt._offsetMinutes = SVar5._offsetMinutes;
			}
			return __this;
		}

		[Token(Token = "0x600573C")]
		[Address(RVA = "0x5CF8EF0", Offset = "0x5CF7EF0", VA = "0x5CF8EF0")]
		public JSONNode ToJsonNode()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.PatreonData$$ToJsonNode): 2 lines keep C-only constructs
			uint uVar1;
			int n;
			ulong uVar2;
			ushort uVar3;
			bool bVar4;
			JSONObject __this_00;
			JSONNode pSVar5;
			JSONArray __this_01;
			String[] pSVar6;
			CultureInfo formatProvider;
			String pSVar7;
			ulong uVar8;
			DateTimeOffset left;

			__this_00 = new JSONObject();
			bVar4 = this.Linked;
			pSVar5 = ((JSONNode)bVar4);
			if (__this_00 == null) {
		label_05df925e: ;
				throw new NullReferenceException();
			}
			__this_00.set_Item("linked", pSVar5);
			bVar4 = String.IsNullOrEmpty(this.PatronStatus);
			if (!bVar4) {
				pSVar7 = this.PatronStatus;
				pSVar5 = ((JSONNode)pSVar7);
				__this_00.set_Item("patronStatus", pSVar5);
			}
			__this_01 = new JSONArray();
			pSVar6 = this.TierIds;
			if (pSVar6 != null) {
				if (__this_01 != null) {
					uVar8 = 0;
					do {
						uVar1 = (uint)pSVar6.Length;
						if ((long)(int)uVar1 <= (long)uVar8) goto label_05df90f8;
						if (uVar1 <= uVar8) {
							throw new IndexOutOfRangeException();
						}
						pSVar7 = pSVar6[uVar8];
						pSVar5 = ((JSONNode)pSVar7);
						__this_01.Add(pSVar5);
						uVar8 = uVar8 + 1;
						pSVar6 = this.TierIds;
					} while (pSVar6 != null);
					goto label_05df925e;
				}
				if (0 < (int)pSVar6.Length) {
					pSVar7 = pSVar6[0];
					((JSONNode)pSVar7);
					throw new NullReferenceException();
				}
			}
		label_05df90f8: ;
			__this_00.set_Item("tierIds", (JSONNode)__this_01);
			n = this.EntitledAmountCents;
			pSVar5 = ((JSONNode)n);
			__this_00.set_Item("entitledAmountCents", pSVar5);
			pSVar5 = ((JSONNode)this.ManualOverride);
			__this_00.set_Item("manualOverride", pSVar5);
			uVar2 = this.LastSyncedAt._dateTime;
			uVar3 = this.LastSyncedAt._offsetMinutes;
			left._offsetMinutes = uVar3;
			left._dateTime._dateData = (DateTime)(DateTime)uVar2;
			left._10_6_ = 0;
			bVar4 = (left != (DateTimeOffset)ZEXT816(0));
			if (bVar4) {
				formatProvider = CultureInfo.InvariantCulture;
				pSVar7 = (this.LastSyncedAt).ToString("o", (IFormatProvider)formatProvider);
				pSVar5 = ((JSONNode)pSVar7);
				__this_00.set_Item("lastSyncedAt", pSVar5);
			}
			return (JSONNode)__this_00;
		}

		[Token(Token = "0x600573D")]
		[Address(RVA = "0x5CF83F0", Offset = "0x5CF73F0", VA = "0x5CF83F0")]
		private static bool ReadBool(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.PatreonData$$ReadBool): clean
			uint uVar1;
			bool bVar2;
			JSONNode a;

			if (Il2CppMethodInitialized_0754832e == false) {
				Il2CppMethodInitialized_0754832e = true;
				if (Il2CppMethodInitialized_07548333 != false) goto label_05df8418;
		label_05df84ee: ;
				Il2CppMethodInitialized_07548333 = true;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07548333 == false) goto label_05df84ee;
		label_05df8418: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			a = null;
			bVar2 = (node != null);
			if (bVar2) {
				if (node == null) goto label_05df8549;
				bVar2 = node.HasKey(key);
				if (bVar2) {
					a = node.get_Item(key);
					goto label_05df8482;
				}
				a = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
		label_05df8482: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar2 = (a != null);
			if (!bVar2) {
				return false;
			}
			if (a != null) {
				bVar2 = a.get_AsBool();
				return bVar2;
			}
		label_05df8549: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x600573E")]
		[Address(RVA = "0x5CF8B70", Offset = "0x5CF7B70", VA = "0x5CF8B70")]
		private static int ReadInt(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.PatreonData$$ReadInt): clean
			uint uVar1;
			bool bVar2;
			int iVar3;
			JSONNode a;

			if (Il2CppMethodInitialized_0754832f == false) {
				Il2CppMethodInitialized_0754832f = true;
				if (Il2CppMethodInitialized_07548333 != false) goto label_05df8b98;
		label_05df8c6e: ;
				Il2CppMethodInitialized_07548333 = true;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07548333 == false) goto label_05df8c6e;
		label_05df8b98: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			a = null;
			bVar2 = (node != null);
			if (bVar2) {
				if (node == null) goto label_05df8cc9;
				bVar2 = node.HasKey(key);
				if (bVar2) {
					a = node.get_Item(key);
					goto label_05df8c02;
				}
				a = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
		label_05df8c02: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar2 = (a != null);
			if (!bVar2) {
				return 0;
			}
			if (a != null) {
				return iVar3;
			}
		label_05df8cc9: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x600573F")]
		[Address(RVA = "0x5CF8550", Offset = "0x5CF7550", VA = "0x5CF8550")]
		private static string ReadString(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.PatreonData$$ReadString): clean
			uint uVar1;
			bool bVar2;
			JSONNode a;
			String pSVar3;

			if (Il2CppMethodInitialized_07548330 == false) {
				Il2CppMethodInitialized_07548330 = true;
				if (Il2CppMethodInitialized_07548333 != false) goto label_05df8578;
		label_05df864e: ;
				Il2CppMethodInitialized_07548333 = true;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07548333 == false) goto label_05df864e;
		label_05df8578: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			a = null;
			bVar2 = (node != null);
			if (bVar2) {
				if (node == null) goto label_05df86a9;
				bVar2 = node.HasKey(key);
				if (bVar2) {
					a = node.get_Item(key);
					goto label_05df85e2;
				}
				a = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
		label_05df85e2: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar2 = (a != null);
			if (!bVar2) {
				return null;
			}
			if (a != null) {
				return pSVar3;
			}
		label_05df86a9: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005740")]
		[Address(RVA = "0x5CF86B0", Offset = "0x5CF76B0", VA = "0x5CF86B0")]
		private static string[] ReadStringArray(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.PatreonData$$ReadStringArray): 13 lines keep C-only constructs
			int piVar1;
			byte bVar2;
			uint uVar3;
			uint uVar4;
			MethodInfo pMVar5;
			bool bVar6;
			int capacity;
			JSONNode pSVar7;
			JSONArray a;
			Il2CppClass pIVar8;
			List<string> __this;
			String[] pSVar9;
			String item;
			KeyValuePair<string, JSONNode> SVar10;
			JSONNode.Enumerator local_78;

			local_78.m_Array._list = null;
			local_78.m_Array._index = 0;
			local_78.m_Array._version = 0;
			local_78.m_Object._current.value = null;
			local_78.m_Object._getEnumeratorRetType = 0;
			local_78.m_Object._36_4_ = 0;
			local_78.m_Object._version = 0;
			local_78.m_Object._index = 0;
			local_78.m_Object._current.key = null;
			local_78.type = 0;
			local_78._4_4_ = 0;
			local_78.m_Object._dictionary = null;
			local_78.m_Array._current = null;
			pSVar7 = null;
			bVar6 = (node != null);
			if (bVar6) {
				if (node == null) goto label_05df8aaf;
				bVar6 = node.HasKey(key);
				if (bVar6) {
					pSVar7 = node.get_Item(key);
					goto label_05df87c2;
				}
				pSVar7 = null;
				uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
		label_05df87c2: ;
				uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
			}
			bVar6 = (pSVar7 == null);
			if (bVar6) {
		label_05df8829: ;
				pMVar5 = MethodInfo_System_Array_Empty_string;
				if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
					il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
					pIVar8 = *(Il2CppClass*)((long)(pMVar5.field7_0x38).methodMetadataHandle + 0x10);
					bVar2 = (pIVar8._2).bitflags1;
				}
				else {
					pIVar8 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
					bVar2 = (pIVar8._2).bitflags1;
				}
				if ((bVar2 & 1) == 0) {
					pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
					uVar3 = (pIVar8._2).cctor_finished_or_no_cctor;
				}
				else {
					uVar3 = (pIVar8._2).cctor_finished_or_no_cctor;
				}
				if (uVar3 == 0) {
					pIVar8 = (pMVar5.field7_0x38).rgctx_data[2].klass;
					bVar2 = (pIVar8._2).bitflags1;
				}
				else {
					pIVar8 = (pMVar5.field7_0x38).rgctx_data[2].klass;
					bVar2 = (pIVar8._2).bitflags1;
				}
				if ((bVar2 & 1) == 0) {
					pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
				}
				return *(String[]*)pIVar8.static_fields;
			}
			if (pSVar7 != null) {
				a = pSVar7.get_AsArray();
				bVar6 = ((JSONNode)a == null);
				if (bVar6) goto label_05df8829;
				if (a != null) {
					capacity = a.get_Count();
					__this = new List<string>(capacity);
					local_78.GetEnumerator(a);
					bVar6 = local_78.MoveNext();
					if (bVar6) {
						if (__this != null) {
							do {
								SVar10 = local_78.Current;
								pSVar7 = ((JSONNode)SVar10);
								bVar6 = (pSVar7 != null);
								item = null;
								if (bVar6) {
									if (pSVar7 == null) goto label_05df8aaf;
									item = pSVar7.get_Value();
								}
								pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
								piVar1 = &__this._version;
								*piVar1 = *piVar1 + 1;
								pSVar9 = __this._items;
								if (pSVar9 == null) goto label_05df8aaf;
								uVar4 = __this._size;
								if (uVar4 < (uint)pSVar9.Length) {
									__this._size = uVar4 + 1;
									pSVar9[(int)uVar4] = item;
								}
								else {
									__this.AddWithResize((object)item);
								}
								bVar6 = local_78.MoveNext();
							} while (bVar6);
		label_05df8a34: ;
							pSVar9 = (String[])__this.ToArray() ;
							return pSVar9;
						}
						SVar10 = local_78.Current;
						pSVar7 = ((JSONNode)SVar10);
						bVar6 = (pSVar7 != null);
						if ((bVar6) && (pSVar7 != null)) {
							pSVar7.get_Value();
						}
					}
					else if (__this != null) goto label_05df8a34;
				}
			}
		label_05df8aaf: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005741")]
		[Address(RVA = "0x5CF8CD0", Offset = "0x5CF7CD0", VA = "0x5CF8CD0")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.PatreonData$$ReadDateTimeOffset): 5 lines keep C-only constructs
			uint uVar1;
			bool bVar2;
			JSONNode a;
			String value;
			CultureInfo formatProvider;
			DateTimeOffset SVar3;
			DateTimeOffset local_38;

			if (Il2CppMethodInitialized_07548332 == false) {
				Il2CppMethodInitialized_07548332 = true;
				if (Il2CppMethodInitialized_07548333 != false) goto label_05df8d02;
		label_05df8e99: ;
				local_38._offsetMinutes = 0;
				local_38._10_6_ = 0;
				local_38._dateTime._dateData = (DateTime)0;
				Il2CppMethodInitialized_07548333 = true;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
				if (Il2CppMethodInitialized_07548333 == false) goto label_05df8e99;
		label_05df8d02: ;
				local_38._offsetMinutes = 0;
				local_38._10_6_ = 0;
				local_38._dateTime._dateData = (DateTime)0;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			a = null;
			bVar2 = (node != null);
			if (bVar2) {
				if (node == null) goto label_05df8ee6;
				bVar2 = node.HasKey(key);
				if (bVar2) {
					a = node.get_Item(key);
					goto label_05df8d6c;
				}
				a = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
		label_05df8d6c: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar2 = (a == null);
			SVar3 = (DateTimeOffset)ZEXT816(0);
			if (!bVar2) {
				if (a == null) {
		label_05df8ee6: ;
					throw new NullReferenceException();
				}
				value = a.get_Value();
				bVar2 = String.IsNullOrEmpty(value);
				SVar3 = (DateTimeOffset)ZEXT816(0);
				if (!bVar2) {
					formatProvider = CultureInfo.InvariantCulture;
					bVar2 = DateTimeOffset.TryParse(value, (IFormatProvider)formatProvider, 0x80, ref local_38);
					SVar3 = (DateTimeOffset)ZEXT816(0);
					if (bVar2) {
						SVar3 = (DateTimeOffset)local_38.ToUniversalTime();
					}
				}
			}
			return (DateTimeOffset)SVar3;
		}

		[Token(Token = "0x6005742")]
		[Address(RVA = "0x5CF9290", Offset = "0x5CF8290", VA = "0x5CF9290")]
		private static JSONNode GetChild(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.PatreonData$$GetChild): clean
			bool bVar1;
			JSONNode pSVar2;

			bVar1 = (node != null);
			if (bVar1) {
				if (node == null) {
					throw new NullReferenceException();
				}
				bVar1 = node.HasKey(key);
				if (bVar1) {
					return pSVar2;
				}
			}
			return null;
		}

		[Token(Token = "0x6005743")]
		[Address(RVA = "0x5CF8AC0", Offset = "0x5CF7AC0", VA = "0x5CF8AC0")]
		private static bool HasTier(string[] tierIds, string targetTier)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.PatreonData$$HasTier): clean
			uint uVar1;
			bool bVar2;
			ulong uVar3;
			String pSVar4;
			ulong uVar5;

			if ((tierIds != null) && (tierIds.Length != 0)) {
				bVar2 = String.IsNullOrEmpty(targetTier);
				if (bVar2) {
					return false;
				}
				if (0 < (int)tierIds.Length) {
					uVar3 = tierIds.Length & 0xffffffff;
					uVar5 = 0;
					do {
						if (uVar3 <= uVar5) {
							throw new IndexOutOfRangeException();
						}
						pSVar4 = tierIds[uVar5];
						bVar2 = String.IsNullOrEmpty(pSVar4);
						if (!bVar2) {
							if (pSVar4 == null) {
								throw new NullReferenceException();
							}
							pSVar4 = pSVar4.Trim();
							bVar2 = String.Equals(pSVar4, targetTier, 4);
							if (bVar2) {
								return true;
							}
						}
						uVar5 = uVar5 + 1;
						uVar1 = (uint)tierIds.Length;
						uVar3 = (ulong)uVar1;
					} while ((long)uVar5 < (long)(int)uVar1);
				}
			}
			return false;
		}

		[Token(Token = "0x6005744")]
		[Address(RVA = "0x5CF8320", Offset = "0x5CF7320", VA = "0x5CF8320")]
		public PatreonData()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.PatreonData$$.ctor): 8 lines keep C-only constructs
			byte bVar1;
			uint uVar2;
			MethodInfo pMVar3;
			Il2CppClass pIVar4;

			pMVar3 = MethodInfo_System_Array_Empty_string;
			if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
				pIVar4 = *(Il2CppClass*)((long)(pMVar3.field7_0x38).methodMetadataHandle + 0x10);
				bVar1 = (pIVar4._2).bitflags1;
			}
			else {
				pIVar4 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
				bVar1 = (pIVar4._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
				uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar2 = (pIVar4._2).cctor_finished_or_no_cctor;
			}
			if (uVar2 == 0) {
				pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar4._2).bitflags1;
			}
			else {
				pIVar4 = (pMVar3.field7_0x38).rgctx_data[2].klass;
				bVar1 = (pIVar4._2).bitflags1;
			}
			if ((bVar1 & 1) == 0) {
				pIVar4 = il2cpp_codegen_class_init_checked(pIVar4);
			}
			this.TierIds = *(String[]*)pIVar4.static_fields;
			base();
			return;
		}
	}

	[Token(Token = "0x2000948")]
	public sealed class OAuthLinkData
	{
		[Token(Token = "0x4002EA3")]
		[FieldOffset(Offset = "0x10")]
		public string Provider;

		[Token(Token = "0x4002EA4")]
		[FieldOffset(Offset = "0x18")]
		public string ProviderUserId;

		[Token(Token = "0x4002EA5")]
		[FieldOffset(Offset = "0x20")]
		public string ProviderEmail;

		[Token(Token = "0x4002EA6")]
		[FieldOffset(Offset = "0x28")]
		public DateTimeOffset LinkedAt;

		[Token(Token = "0x6005745")]
		[Address(RVA = "0x5CF81E0", Offset = "0x5CF71E0", VA = "0x5CF81E0")]
		public static OAuthLinkData Parse(JSONNode node)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.OAuthLinkData$$Parse): clean
			bool bVar1;
			AccountLoginResponse.OAuthLinkData __this;
			String pSVar2;
			DateTimeOffset SVar3;

			__this = new AccountLoginResponse.OAuthLinkData();
			bVar1 = (node == null);
			if (!bVar1) {
				pSVar2 = AccountLoginResponse.OAuthLinkData.ReadString(node, "provider");
				if (__this == null) {
					throw new NullReferenceException();
				}
				__this.Provider = pSVar2;
				pSVar2 = AccountLoginResponse.OAuthLinkData.ReadString(node, "providerUserId");
				__this.ProviderUserId = pSVar2;
				pSVar2 = AccountLoginResponse.OAuthLinkData.ReadString(node, "providerEmail");
				__this.ProviderEmail = pSVar2;
				SVar3 = AccountLoginResponse.OAuthLinkData.ReadDateTimeOffset(node, "linkedAt");
				__this.LinkedAt._dateTime._dateData =(uint64_t)SVar3._dateTime._dateData;
				__this.LinkedAt._offsetMinutes = SVar3._offsetMinutes;
			}
			return __this;
		}

		[Token(Token = "0x6005746")]
		[Address(RVA = "0x5CF9340", Offset = "0x5CF8340", VA = "0x5CF9340")]
		private static string ReadString(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.OAuthLinkData$$ReadString): clean
			uint uVar1;
			bool bVar2;
			JSONNode a;
			String pSVar3;

			a = null;
			bVar2 = (node != null);
			if (bVar2) {
				if (node == null) goto label_05df9438;
				bVar2 = node.HasKey(key);
				if (bVar2) {
					a = node.get_Item(key);
					goto label_05df93d1;
				}
				a = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
		label_05df93d1: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar2 = (a != null);
			if (!bVar2) {
				return null;
			}
			if (a != null) {
				return pSVar3;
			}
		label_05df9438: ;
			throw new NullReferenceException();
		}

		[Token(Token = "0x6005747")]
		[Address(RVA = "0x5CF9440", Offset = "0x5CF8440", VA = "0x5CF9440")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.OAuthLinkData$$ReadDateTimeOffset): 4 lines keep C-only constructs
			uint uVar1;
			bool bVar2;
			JSONNode a;
			String value;
			CultureInfo formatProvider;
			DateTimeOffset SVar3;
			DateTimeOffset local_38;

			local_38._dateTime._dateData = (DateTime)0;
			local_38._offsetMinutes = 0;
			local_38._10_6_ = 0;
			a = null;
			bVar2 = (node != null);
			if (bVar2) {
				if (node == null) goto label_05df95fd;
				bVar2 = node.HasKey(key);
				if (bVar2) {
					a = node.get_Item(key);
					goto label_05df94f7;
				}
				a = null;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			else {
		label_05df94f7: ;
				uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
			}
			if (uVar1 == 0) {
			}
			bVar2 = (a == null);
			SVar3 = (DateTimeOffset)ZEXT816(0);
			if (!bVar2) {
				if (a == null) {
		label_05df95fd: ;
					throw new NullReferenceException();
				}
				value = a.get_Value();
				bVar2 = String.IsNullOrEmpty(value);
				SVar3 = (DateTimeOffset)ZEXT816(0);
				if (!bVar2) {
					formatProvider = CultureInfo.InvariantCulture;
					bVar2 = DateTimeOffset.TryParse(value, (IFormatProvider)formatProvider, 0x80, ref local_38);
					SVar3 = (DateTimeOffset)ZEXT816(0);
					if (bVar2) {
						SVar3 = (DateTimeOffset)local_38.ToUniversalTime();
					}
				}
			}
			return (DateTimeOffset)SVar3;
		}

		[Token(Token = "0x6005748")]
		[Address(RVA = "0x5CF9330", Offset = "0x5CF8330", VA = "0x5CF9330")]
		public OAuthLinkData()
		{
			// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse.OAuthLinkData$$.ctor): clean
			base();
			return;
		}
	}

	[Token(Token = "0x4002E82")]
	[FieldOffset(Offset = "0x10")]
	public string AccessToken;

	[Token(Token = "0x4002E83")]
	[FieldOffset(Offset = "0x18")]
	public string RefreshToken;

	[Token(Token = "0x4002E84")]
	[FieldOffset(Offset = "0x20")]
	public string PhotonToken;

	[Token(Token = "0x4002E85")]
	[FieldOffset(Offset = "0x28")]
	public DateTimeOffset AccessTokenExpiresAt;

	[Token(Token = "0x4002E86")]
	[FieldOffset(Offset = "0x38")]
	public DateTimeOffset PhotonTokenExpiresAt;

	[Token(Token = "0x4002E87")]
	[FieldOffset(Offset = "0x48")]
	public ProfileData Profile;

	[Token(Token = "0x600572E")]
	[Address(RVA = "0x5CF6200", Offset = "0x5CF5200", VA = "0x5CF6200")]
	public static AccountLoginResponse Parse(JSONNode node)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse$$Parse): clean
		bool bVar1;
		AccountLoginResponse __this;
		String pSVar2;
		JSONNode node_00;
		AccountLoginResponse.ProfileData pAVar3;
		MethodInfo pMVar4;
		DateTimeOffset SVar5;

		__this = new AccountLoginResponse();
		pSVar2 = AccountLoginResponse.ReadString(node, "accessToken");
		if (__this == null) {
	label_05df63e6: ;
			throw new NullReferenceException();
		}
		__this.AccessToken = pSVar2;
		pSVar2 = AccountLoginResponse.ReadString(node, "refreshToken");
		__this.RefreshToken = pSVar2;
		pSVar2 = AccountLoginResponse.ReadString(node, "photonToken");
		__this.PhotonToken = pSVar2;
		SVar5 = AccountLoginResponse.ReadDateTimeOffset(node, "accessTokenExpiresAt");
		__this.AccessTokenExpiresAt._dateTime._dateData =(uint64_t)SVar5._dateTime._dateData;
		__this.AccessTokenExpiresAt._offsetMinutes = SVar5._offsetMinutes;
		SVar5 = AccountLoginResponse.ReadDateTimeOffset(node, "photonTokenExpiresAt");
		__this.PhotonTokenExpiresAt._dateTime._dateData =(uint64_t)SVar5._dateTime._dateData;
		__this.PhotonTokenExpiresAt._offsetMinutes = SVar5._offsetMinutes;
		pMVar4 = (MethodInfo *)"profile";
		node_00 = null;
		bVar1 = (node != null);
		if (bVar1) {
			if (node == null) goto label_05df63e6;
			bVar1 = node.HasKey((String)pMVar4);
			if (bVar1) {
				node_00 = node.get_Item((String)pMVar4);
			}
			else {
				node_00 = null;
			}
		}
		pAVar3 = AccountLoginResponse.ProfileData.Parse(node_00);
		__this.Profile = pAVar3;
		return __this;
	}

	[Token(Token = "0x600572F")]
	[Address(RVA = "0x5CF6780", Offset = "0x5CF5780", VA = "0x5CF6780")]
	private static JSONNode GetChild(JSONNode node, string key)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse$$GetChild): clean
		bool bVar1;
		JSONNode pSVar2;

		bVar1 = (node != null);
		if (bVar1) {
			if (node == null) {
				throw new NullReferenceException();
			}
			bVar1 = node.HasKey(key);
			if (bVar1) {
				return pSVar2;
			}
		}
		return null;
	}

	[Token(Token = "0x6005730")]
	[Address(RVA = "0x5CF6400", Offset = "0x5CF5400", VA = "0x5CF6400")]
	private static string ReadString(JSONNode node, string key)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse$$ReadString): clean
		uint uVar1;
		bool bVar2;
		JSONNode a;
		String pSVar3;

		if (Il2CppMethodInitialized_07548322 == false) {
			Il2CppMethodInitialized_07548322 = true;
			if (Il2CppMethodInitialized_07548321 != false) goto label_05df6428;
	label_05df64fe: ;
			Il2CppMethodInitialized_07548321 = true;
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07548321 == false) goto label_05df64fe;
	label_05df6428: ;
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		a = null;
		bVar2 = (node != null);
		if (bVar2) {
			if (node == null) goto label_05df6559;
			bVar2 = node.HasKey(key);
			if (bVar2) {
				a = node.get_Item(key);
				goto label_05df6492;
			}
			a = null;
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05df6492: ;
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = (a != null);
		if (!bVar2) {
			return null;
		}
		if (a != null) {
			return pSVar3;
		}
	label_05df6559: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005731")]
	[Address(RVA = "0x5CF6560", Offset = "0x5CF5560", VA = "0x5CF6560")]
	private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse$$ReadDateTimeOffset): 5 lines keep C-only constructs
		uint uVar1;
		bool bVar2;
		JSONNode a;
		String value;
		CultureInfo formatProvider;
		DateTimeOffset SVar3;
		DateTimeOffset local_38;

		if (Il2CppMethodInitialized_07548323 == false) {
			Il2CppMethodInitialized_07548323 = true;
			if (Il2CppMethodInitialized_07548321 != false) goto label_05df6592;
	label_05df6729: ;
			local_38._offsetMinutes = 0;
			local_38._10_6_ = 0;
			local_38._dateTime._dateData = (DateTime)0;
			Il2CppMethodInitialized_07548321 = true;
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
			if (Il2CppMethodInitialized_07548321 == false) goto label_05df6729;
	label_05df6592: ;
			local_38._offsetMinutes = 0;
			local_38._10_6_ = 0;
			local_38._dateTime._dateData = (DateTime)0;
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		a = null;
		bVar2 = (node != null);
		if (bVar2) {
			if (node == null) goto label_05df6776;
			bVar2 = node.HasKey(key);
			if (bVar2) {
				a = node.get_Item(key);
				goto label_05df65fc;
			}
			a = null;
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05df65fc: ;
			uVar1 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar1 == 0) {
		}
		bVar2 = (a == null);
		SVar3 = (DateTimeOffset)ZEXT816(0);
		if (!bVar2) {
			if (a == null) {
	label_05df6776: ;
				throw new NullReferenceException();
			}
			value = a.get_Value();
			bVar2 = String.IsNullOrEmpty(value);
			SVar3 = (DateTimeOffset)ZEXT816(0);
			if (!bVar2) {
				formatProvider = CultureInfo.InvariantCulture;
				bVar2 = DateTimeOffset.TryParse(value, (IFormatProvider)formatProvider, 0x80, ref local_38);
				SVar3 = (DateTimeOffset)ZEXT816(0);
				if (bVar2) {
					SVar3 = (DateTimeOffset)local_38.ToUniversalTime();
				}
			}
		}
		return (DateTimeOffset)SVar3;
	}

	[Token(Token = "0x6005732")]
	[Address(RVA = "0x5CF6DB0", Offset = "0x5CF5DB0", VA = "0x5CF6DB0")]
	private static string[] ReadStringArray(JSONNode node, string key)
	{
		// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse$$ReadStringArray): 13 lines keep C-only constructs
		int piVar1;
		byte bVar2;
		uint uVar3;
		uint uVar4;
		MethodInfo pMVar5;
		bool bVar6;
		int capacity;
		JSONNode pSVar7;
		JSONArray a;
		Il2CppClass pIVar8;
		List<string> __this;
		String[] pSVar9;
		String item;
		KeyValuePair<string, JSONNode> SVar10;
		JSONNode.Enumerator SStack_78;

		SStack_78.m_Array._list = null;
		SStack_78.m_Array._index = 0;
		SStack_78.m_Array._version = 0;
		SStack_78.m_Object._current.value = null;
		SStack_78.m_Object._getEnumeratorRetType = 0;
		SStack_78.m_Object._36_4_ = 0;
		SStack_78.m_Object._version = 0;
		SStack_78.m_Object._index = 0;
		SStack_78.m_Object._current.key = null;
		SStack_78.type = 0;
		SStack_78._4_4_ = 0;
		SStack_78.m_Object._dictionary = null;
		SStack_78.m_Array._current = null;
		pSVar7 = null;
		bVar6 = (node != null);
		if (bVar6) {
			if (node == null) goto label_05df71af;
			bVar6 = node.HasKey(key);
			if (bVar6) {
				pSVar7 = node.get_Item(key);
				goto label_05df6ec2;
			}
			pSVar7 = null;
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		else {
	label_05df6ec2: ;
			uVar3 = (typeof(JSONNode)._2).cctor_finished_or_no_cctor;
		}
		if (uVar3 == 0) {
		}
		bVar6 = (pSVar7 == null);
		if (bVar6) {
	label_05df6f29: ;
			pMVar5 = MethodInfo_System_Array_Empty_string;
			if ((MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle == null) {
				il2cpp_codegen_rgctx_method_init(MethodInfo_System_Array_Empty_string);
				pIVar8 = *(Il2CppClass*)((long)(pMVar5.field7_0x38).methodMetadataHandle + 0x10);
				bVar2 = (pIVar8._2).bitflags1;
			}
			else {
				pIVar8 = *(Il2CppClass*)((long)(MethodInfo_System_Array_Empty_string.field7_0x38).methodMetadataHandle + 0x10);
				bVar2 = (pIVar8._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
				uVar3 = (pIVar8._2).cctor_finished_or_no_cctor;
			}
			else {
				uVar3 = (pIVar8._2).cctor_finished_or_no_cctor;
			}
			if (uVar3 == 0) {
				pIVar8 = (pMVar5.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar8._2).bitflags1;
			}
			else {
				pIVar8 = (pMVar5.field7_0x38).rgctx_data[2].klass;
				bVar2 = (pIVar8._2).bitflags1;
			}
			if ((bVar2 & 1) == 0) {
				pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
			}
			return *(String[]*)pIVar8.static_fields;
		}
		if (pSVar7 != null) {
			a = pSVar7.get_AsArray();
			bVar6 = ((JSONNode)a == null);
			if (bVar6) goto label_05df6f29;
			if (a != null) {
				capacity = a.get_Count();
				__this = new List<string>(capacity);
				SStack_78.GetEnumerator(a);
				bVar6 = SStack_78.MoveNext();
				if (bVar6) {
					if (__this != null) {
						do {
							SVar10 = SStack_78.Current;
							pSVar7 = ((JSONNode)SVar10);
							bVar6 = (pSVar7 != null);
							item = null;
							if (bVar6) {
								if (pSVar7 == null) goto label_05df71af;
								item = pSVar7.get_Value();
							}
							pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
							piVar1 = &__this._version;
							*piVar1 = *piVar1 + 1;
							pSVar9 = __this._items;
							if (pSVar9 == null) goto label_05df71af;
							uVar4 = __this._size;
							if (uVar4 < (uint)pSVar9.Length) {
								__this._size = uVar4 + 1;
								pSVar9[(int)uVar4] = item;
							}
							else {
								__this.AddWithResize((object)item);
							}
							bVar6 = SStack_78.MoveNext();
						} while (bVar6);
	label_05df7134: ;
						pSVar9 = (String[])__this.ToArray() ;
						return pSVar9;
					}
					SVar10 = SStack_78.Current;
					pSVar7 = ((JSONNode)SVar10);
					bVar6 = (pSVar7 != null);
					if ((bVar6) && (pSVar7 != null)) {
						pSVar7.get_Value();
					}
				}
				else if (__this != null) goto label_05df7134;
			}
		}
	label_05df71af: ;
		throw new NullReferenceException();
	}

	[Token(Token = "0x6005733")]
	[Address(RVA = "0x5CF63F0", Offset = "0x5CF53F0", VA = "0x5CF63F0")]
	public AccountLoginResponse()
	{
		// Lifted from source/cpp/ApplicationManagers/AccountLoginResponse.c (ApplicationManagers.AccountLoginResponse$$.ctor): clean
		base();
		return;
	}
}
