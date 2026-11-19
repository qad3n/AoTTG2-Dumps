// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.AccountLoginResponse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/AccountLoginResponse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
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
			return null;
		}

		[Token(Token = "0x6005735")]
		[Address(RVA = "0x5CF7580", Offset = "0x5CF6580", VA = "0x5CF7580")]
		private static bool ReadBool(JSONNode node, string key)
		{
			return default(bool);
		}

		[Token(Token = "0x6005736")]
		[Address(RVA = "0x5CF7420", Offset = "0x5CF6420", VA = "0x5CF7420")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6005737")]
		[Address(RVA = "0x5CF76E0", Offset = "0x5CF66E0", VA = "0x5CF76E0")]
		private static string[] ReadStringArray(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6005738")]
		[Address(RVA = "0x5CF7FC0", Offset = "0x5CF6FC0", VA = "0x5CF7FC0")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x6005739")]
		[Address(RVA = "0x5CF7CB0", Offset = "0x5CF6CB0", VA = "0x5CF7CB0")]
		private static OAuthLinkData[] ParseOAuthLinks(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x600573A")]
		[Address(RVA = "0x5CF71C0", Offset = "0x5CF61C0", VA = "0x5CF71C0")]
		public ProfileData()
		{
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
			return null;
		}

		[Token(Token = "0x600573C")]
		[Address(RVA = "0x5CF8EF0", Offset = "0x5CF7EF0", VA = "0x5CF8EF0")]
		public JSONNode ToJsonNode()
		{
			return null;
		}

		[Token(Token = "0x600573D")]
		[Address(RVA = "0x5CF83F0", Offset = "0x5CF73F0", VA = "0x5CF83F0")]
		private static bool ReadBool(JSONNode node, string key)
		{
			return default(bool);
		}

		[Token(Token = "0x600573E")]
		[Address(RVA = "0x5CF8B70", Offset = "0x5CF7B70", VA = "0x5CF8B70")]
		private static int ReadInt(JSONNode node, string key)
		{
			return default(int);
		}

		[Token(Token = "0x600573F")]
		[Address(RVA = "0x5CF8550", Offset = "0x5CF7550", VA = "0x5CF8550")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6005740")]
		[Address(RVA = "0x5CF86B0", Offset = "0x5CF76B0", VA = "0x5CF86B0")]
		private static string[] ReadStringArray(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6005741")]
		[Address(RVA = "0x5CF8CD0", Offset = "0x5CF7CD0", VA = "0x5CF8CD0")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x6005742")]
		[Address(RVA = "0x5CF9290", Offset = "0x5CF8290", VA = "0x5CF9290")]
		private static JSONNode GetChild(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6005743")]
		[Address(RVA = "0x5CF8AC0", Offset = "0x5CF7AC0", VA = "0x5CF8AC0")]
		private static bool HasTier(string[] tierIds, string targetTier)
		{
			return default(bool);
		}

		[Token(Token = "0x6005744")]
		[Address(RVA = "0x5CF8320", Offset = "0x5CF7320", VA = "0x5CF8320")]
		public PatreonData()
		{
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
			return null;
		}

		[Token(Token = "0x6005746")]
		[Address(RVA = "0x5CF9340", Offset = "0x5CF8340", VA = "0x5CF9340")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6005747")]
		[Address(RVA = "0x5CF9440", Offset = "0x5CF8440", VA = "0x5CF9440")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x6005748")]
		[Address(RVA = "0x5CF9330", Offset = "0x5CF8330", VA = "0x5CF9330")]
		public OAuthLinkData()
		{
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
		return null;
	}

	[Token(Token = "0x600572F")]
	[Address(RVA = "0x5CF6780", Offset = "0x5CF5780", VA = "0x5CF6780")]
	private static JSONNode GetChild(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x6005730")]
	[Address(RVA = "0x5CF6400", Offset = "0x5CF5400", VA = "0x5CF6400")]
	private static string ReadString(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x6005731")]
	[Address(RVA = "0x5CF6560", Offset = "0x5CF5560", VA = "0x5CF6560")]
	private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6005732")]
	[Address(RVA = "0x5CF6DB0", Offset = "0x5CF5DB0", VA = "0x5CF6DB0")]
	private static string[] ReadStringArray(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x6005733")]
	[Address(RVA = "0x5CF63F0", Offset = "0x5CF53F0", VA = "0x5CF63F0")]
	public AccountLoginResponse()
	{
	}
}
