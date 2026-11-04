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

[Token(Token = "0x20008DA")]
public sealed class AccountLoginResponse
{
	[Token(Token = "0x20008DB")]
	public sealed class ProfileData
	{
		[Token(Token = "0x4002BCC")]
		[FieldOffset(Offset = "0x10")]
		public string AccountId;

		[Token(Token = "0x4002BCD")]
		[FieldOffset(Offset = "0x18")]
		public string Email;

		[Token(Token = "0x4002BCE")]
		[FieldOffset(Offset = "0x20")]
		public string DisplayName;

		[Token(Token = "0x4002BCF")]
		[FieldOffset(Offset = "0x28")]
		public string PhotonUserId;

		[Token(Token = "0x4002BD0")]
		[FieldOffset(Offset = "0x30")]
		public bool EmailVerified;

		[Token(Token = "0x4002BD1")]
		[FieldOffset(Offset = "0x31")]
		public bool HasPassword;

		[Token(Token = "0x4002BD2")]
		[FieldOffset(Offset = "0x38")]
		public string[] Roles;

		[Token(Token = "0x4002BD3")]
		[FieldOffset(Offset = "0x40")]
		public string[] Permissions;

		[Token(Token = "0x4002BD4")]
		[FieldOffset(Offset = "0x48")]
		public string RestrictionStatus;

		[Token(Token = "0x4002BD5")]
		[FieldOffset(Offset = "0x50")]
		public JSONNode Restriction;

		[Token(Token = "0x4002BD6")]
		[FieldOffset(Offset = "0x58")]
		public PatreonData Patreon;

		[Token(Token = "0x4002BD7")]
		[FieldOffset(Offset = "0x60")]
		public OAuthLinkData[] OAuthLinks;

		[Token(Token = "0x4002BD8")]
		[FieldOffset(Offset = "0x68")]
		public string Description;

		[Token(Token = "0x4002BD9")]
		[FieldOffset(Offset = "0x70")]
		public string AvatarKey;

		[Token(Token = "0x4002BDA")]
		[FieldOffset(Offset = "0x78")]
		public string BannerKey;

		[Token(Token = "0x4002BDB")]
		[FieldOffset(Offset = "0x80")]
		public JSONNode Socials;

		[Token(Token = "0x4002BDC")]
		[FieldOffset(Offset = "0x88")]
		public DateTimeOffset CreatedAt;

		[Token(Token = "0x60053D7")]
		[Address(RVA = "0x233D5F0", Offset = "0x233BBF0", VA = "0x18233D5F0")]
		public static ProfileData Parse(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x60053D8")]
		[Address(RVA = "0x233DA10", Offset = "0x233C010", VA = "0x18233DA10")]
		private static bool ReadBool(JSONNode node, string key)
		{
			return default(bool);
		}

		[Token(Token = "0x60053D9")]
		[Address(RVA = "0x233E030", Offset = "0x233C630", VA = "0x18233E030")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x60053DA")]
		[Address(RVA = "0x233DD00", Offset = "0x233C300", VA = "0x18233DD00")]
		private static string[] ReadStringArray(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x60053DB")]
		[Address(RVA = "0x233DB20", Offset = "0x233C120", VA = "0x18233DB20")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x60053DC")]
		[Address(RVA = "0x233D1F0", Offset = "0x233B7F0", VA = "0x18233D1F0")]
		private static OAuthLinkData[] ParseOAuthLinks(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x60053DD")]
		[Address(RVA = "0x233E140", Offset = "0x233C740", VA = "0x18233E140")]
		public ProfileData()
		{
		}
	}

	[Token(Token = "0x20008DC")]
	public sealed class PatreonData
	{
		[Token(Token = "0x4002BDD")]
		private const string Tier2Id = "28767500";

		[Token(Token = "0x4002BDE")]
		private const string Tier3Id = "28767505";

		[Token(Token = "0x4002BDF")]
		[FieldOffset(Offset = "0x10")]
		public bool Linked;

		[Token(Token = "0x4002BE0")]
		[FieldOffset(Offset = "0x18")]
		public string PatronStatus;

		[Token(Token = "0x4002BE1")]
		[FieldOffset(Offset = "0x20")]
		public string[] TierIds;

		[Token(Token = "0x4002BE2")]
		[FieldOffset(Offset = "0x28")]
		public int EntitledAmountCents;

		[Token(Token = "0x4002BE3")]
		[FieldOffset(Offset = "0x2C")]
		public bool ManualOverride;

		[Token(Token = "0x4002BE4")]
		[FieldOffset(Offset = "0x30")]
		public DateTimeOffset LastSyncedAt;

		[Token(Token = "0x4002BE5")]
		[FieldOffset(Offset = "0x40")]
		public bool HasTier2;

		[Token(Token = "0x4002BE6")]
		[FieldOffset(Offset = "0x41")]
		public bool HasTier3;

		[Token(Token = "0x60053DE")]
		[Address(RVA = "0x233ABC0", Offset = "0x23391C0", VA = "0x18233ABC0")]
		public static PatreonData Parse(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x60053DF")]
		[Address(RVA = "0x233B7C0", Offset = "0x2339DC0", VA = "0x18233B7C0")]
		public JSONNode ToJsonNode()
		{
			return null;
		}

		[Token(Token = "0x60053E0")]
		[Address(RVA = "0x233AF80", Offset = "0x2339580", VA = "0x18233AF80")]
		private static bool ReadBool(JSONNode node, string key)
		{
			return default(bool);
		}

		[Token(Token = "0x60053E1")]
		[Address(RVA = "0x233B270", Offset = "0x2339870", VA = "0x18233B270")]
		private static int ReadInt(JSONNode node, string key)
		{
			return default(int);
		}

		[Token(Token = "0x60053E2")]
		[Address(RVA = "0x233B6B0", Offset = "0x2339CB0", VA = "0x18233B6B0")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x60053E3")]
		[Address(RVA = "0x233B380", Offset = "0x2339980", VA = "0x18233B380")]
		private static string[] ReadStringArray(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x60053E4")]
		[Address(RVA = "0x233B090", Offset = "0x2339690", VA = "0x18233B090")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x60053E5")]
		[Address(RVA = "0x233AA70", Offset = "0x2339070", VA = "0x18233AA70")]
		private static JSONNode GetChild(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x60053E6")]
		[Address(RVA = "0x233AB20", Offset = "0x2339120", VA = "0x18233AB20")]
		private static bool HasTier(string[] tierIds, string targetTier)
		{
			return default(bool);
		}

		[Token(Token = "0x60053E7")]
		[Address(RVA = "0x233BB70", Offset = "0x233A170", VA = "0x18233BB70")]
		public PatreonData()
		{
		}
	}

	[Token(Token = "0x20008DD")]
	public sealed class OAuthLinkData
	{
		[Token(Token = "0x4002BE7")]
		[FieldOffset(Offset = "0x10")]
		public string Provider;

		[Token(Token = "0x4002BE8")]
		[FieldOffset(Offset = "0x18")]
		public string ProviderUserId;

		[Token(Token = "0x4002BE9")]
		[FieldOffset(Offset = "0x20")]
		public string ProviderEmail;

		[Token(Token = "0x4002BEA")]
		[FieldOffset(Offset = "0x28")]
		public DateTimeOffset LinkedAt;

		[Token(Token = "0x60053E8")]
		[Address(RVA = "0x233A570", Offset = "0x2338B70", VA = "0x18233A570")]
		public static OAuthLinkData Parse(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x60053E9")]
		[Address(RVA = "0x233A880", Offset = "0x2338E80", VA = "0x18233A880")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x60053EA")]
		[Address(RVA = "0x233A6C0", Offset = "0x2338CC0", VA = "0x18233A6C0")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x60053EB")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public OAuthLinkData()
		{
		}
	}

	[Token(Token = "0x4002BC6")]
	[FieldOffset(Offset = "0x10")]
	public string AccessToken;

	[Token(Token = "0x4002BC7")]
	[FieldOffset(Offset = "0x18")]
	public string RefreshToken;

	[Token(Token = "0x4002BC8")]
	[FieldOffset(Offset = "0x20")]
	public string PhotonToken;

	[Token(Token = "0x4002BC9")]
	[FieldOffset(Offset = "0x28")]
	public DateTimeOffset AccessTokenExpiresAt;

	[Token(Token = "0x4002BCA")]
	[FieldOffset(Offset = "0x38")]
	public DateTimeOffset PhotonTokenExpiresAt;

	[Token(Token = "0x4002BCB")]
	[FieldOffset(Offset = "0x48")]
	public ProfileData Profile;

	[Token(Token = "0x60053D1")]
	[Address(RVA = "0x2320840", Offset = "0x231EE40", VA = "0x182320840")]
	public static AccountLoginResponse Parse(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x60053D2")]
	[Address(RVA = "0x2320790", Offset = "0x231ED90", VA = "0x182320790")]
	private static JSONNode GetChild(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x60053D3")]
	[Address(RVA = "0x2320F40", Offset = "0x231F540", VA = "0x182320F40")]
	private static string ReadString(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x60053D4")]
	[Address(RVA = "0x2320A30", Offset = "0x231F030", VA = "0x182320A30")]
	private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x60053D5")]
	[Address(RVA = "0x2320C10", Offset = "0x231F210", VA = "0x182320C10")]
	private static string[] ReadStringArray(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x60053D6")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public AccountLoginResponse()
	{
	}
}
