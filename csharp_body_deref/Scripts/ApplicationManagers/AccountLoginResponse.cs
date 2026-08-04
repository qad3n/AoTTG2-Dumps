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

[Token(Token = "0x2000751")]
public sealed class AccountLoginResponse
{
	[Token(Token = "0x2000752")]
	public sealed class ProfileData
	{
		[Token(Token = "0x4002307")]
		[FieldOffset(Offset = "0x10")]
		public string AccountId;

		[Token(Token = "0x4002308")]
		[FieldOffset(Offset = "0x18")]
		public string Email;

		[Token(Token = "0x4002309")]
		[FieldOffset(Offset = "0x20")]
		public string DisplayName;

		[Token(Token = "0x400230A")]
		[FieldOffset(Offset = "0x28")]
		public string PhotonUserId;

		[Token(Token = "0x400230B")]
		[FieldOffset(Offset = "0x30")]
		public bool EmailVerified;

		[Token(Token = "0x400230C")]
		[FieldOffset(Offset = "0x31")]
		public bool HasPassword;

		[Token(Token = "0x400230D")]
		[FieldOffset(Offset = "0x38")]
		public string[] Roles;

		[Token(Token = "0x400230E")]
		[FieldOffset(Offset = "0x40")]
		public string[] Permissions;

		[Token(Token = "0x400230F")]
		[FieldOffset(Offset = "0x48")]
		public string RestrictionStatus;

		[Token(Token = "0x4002310")]
		[FieldOffset(Offset = "0x50")]
		public JSONNode Restriction;

		[Token(Token = "0x4002311")]
		[FieldOffset(Offset = "0x58")]
		public PatreonData Patreon;

		[Token(Token = "0x4002312")]
		[FieldOffset(Offset = "0x60")]
		public OAuthLinkData[] OAuthLinks;

		[Token(Token = "0x4002313")]
		[FieldOffset(Offset = "0x68")]
		public string Description;

		[Token(Token = "0x4002314")]
		[FieldOffset(Offset = "0x70")]
		public string AvatarKey;

		[Token(Token = "0x4002315")]
		[FieldOffset(Offset = "0x78")]
		public string BannerKey;

		[Token(Token = "0x4002316")]
		[FieldOffset(Offset = "0x80")]
		public JSONNode Socials;

		[Token(Token = "0x4002317")]
		[FieldOffset(Offset = "0x88")]
		public DateTimeOffset CreatedAt;

		[Token(Token = "0x600476F")]
		[Address(RVA = "0x4399D40", Offset = "0x4399D40", VA = "0x4399D40")]
		public static ProfileData Parse(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x6004770")]
		[Address(RVA = "0x439AAE0", Offset = "0x439AAE0", VA = "0x439AAE0")]
		private static bool ReadBool(JSONNode node, string key)
		{
			return default(bool);
		}

		[Token(Token = "0x6004771")]
		[Address(RVA = "0x439A980", Offset = "0x439A980", VA = "0x439A980")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6004772")]
		[Address(RVA = "0x439AC40", Offset = "0x439AC40", VA = "0x439AC40")]
		private static string[] ReadStringArray(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6004773")]
		[Address(RVA = "0x439B5B0", Offset = "0x439B5B0", VA = "0x439B5B0")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x6004774")]
		[Address(RVA = "0x439B250", Offset = "0x439B250", VA = "0x439B250")]
		private static OAuthLinkData[] ParseOAuthLinks(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x6004775")]
		[Address(RVA = "0x439A720", Offset = "0x439A720", VA = "0x439A720")]
		public ProfileData()
		{
		}
	}

	[Token(Token = "0x2000753")]
	public sealed class PatreonData
	{
		[Token(Token = "0x4002318")]
		private const string Tier2Id = "28767500";

		[Token(Token = "0x4002319")]
		private const string Tier3Id = "28767505";

		[Token(Token = "0x400231A")]
		[FieldOffset(Offset = "0x10")]
		public bool Linked;

		[Token(Token = "0x400231B")]
		[FieldOffset(Offset = "0x18")]
		public string PatronStatus;

		[Token(Token = "0x400231C")]
		[FieldOffset(Offset = "0x20")]
		public string[] TierIds;

		[Token(Token = "0x400231D")]
		[FieldOffset(Offset = "0x28")]
		public int EntitledAmountCents;

		[Token(Token = "0x400231E")]
		[FieldOffset(Offset = "0x2C")]
		public bool ManualOverride;

		[Token(Token = "0x400231F")]
		[FieldOffset(Offset = "0x30")]
		public DateTimeOffset LastSyncedAt;

		[Token(Token = "0x4002320")]
		[FieldOffset(Offset = "0x40")]
		public bool HasTier2;

		[Token(Token = "0x4002321")]
		[FieldOffset(Offset = "0x41")]
		public bool HasTier3;

		[Token(Token = "0x6004776")]
		[Address(RVA = "0x439B090", Offset = "0x439B090", VA = "0x439B090")]
		public static PatreonData Parse(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x6004777")]
		[Address(RVA = "0x439C540", Offset = "0x439C540", VA = "0x439C540")]
		public JSONNode ToJsonNode()
		{
			return null;
		}

		[Token(Token = "0x6004778")]
		[Address(RVA = "0x439B9E0", Offset = "0x439B9E0", VA = "0x439B9E0")]
		private static bool ReadBool(JSONNode node, string key)
		{
			return default(bool);
		}

		[Token(Token = "0x6004779")]
		[Address(RVA = "0x439C1C0", Offset = "0x439C1C0", VA = "0x439C1C0")]
		private static int ReadInt(JSONNode node, string key)
		{
			return default(int);
		}

		[Token(Token = "0x600477A")]
		[Address(RVA = "0x439BB40", Offset = "0x439BB40", VA = "0x439BB40")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x600477B")]
		[Address(RVA = "0x439BCA0", Offset = "0x439BCA0", VA = "0x439BCA0")]
		private static string[] ReadStringArray(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x600477C")]
		[Address(RVA = "0x439C320", Offset = "0x439C320", VA = "0x439C320")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x600477D")]
		[Address(RVA = "0x439C8F0", Offset = "0x439C8F0", VA = "0x439C8F0")]
		private static JSONNode GetChild(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x600477E")]
		[Address(RVA = "0x439C0F0", Offset = "0x439C0F0", VA = "0x439C0F0")]
		private static bool HasTier(string[] tierIds, string targetTier)
		{
			return default(bool);
		}

		[Token(Token = "0x600477F")]
		[Address(RVA = "0x439B910", Offset = "0x439B910", VA = "0x439B910")]
		public PatreonData()
		{
		}
	}

	[Token(Token = "0x2000754")]
	public sealed class OAuthLinkData
	{
		[Token(Token = "0x4002322")]
		[FieldOffset(Offset = "0x10")]
		public string Provider;

		[Token(Token = "0x4002323")]
		[FieldOffset(Offset = "0x18")]
		public string ProviderUserId;

		[Token(Token = "0x4002324")]
		[FieldOffset(Offset = "0x20")]
		public string ProviderEmail;

		[Token(Token = "0x4002325")]
		[FieldOffset(Offset = "0x28")]
		public DateTimeOffset LinkedAt;

		[Token(Token = "0x6004780")]
		[Address(RVA = "0x439B7D0", Offset = "0x439B7D0", VA = "0x439B7D0")]
		public static OAuthLinkData Parse(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x6004781")]
		[Address(RVA = "0x439C9A0", Offset = "0x439C9A0", VA = "0x439C9A0")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6004782")]
		[Address(RVA = "0x439CAA0", Offset = "0x439CAA0", VA = "0x439CAA0")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x6004783")]
		[Address(RVA = "0x439C990", Offset = "0x439C990", VA = "0x439C990")]
		public OAuthLinkData()
		{
		}
	}

	[Token(Token = "0x4002301")]
	[FieldOffset(Offset = "0x10")]
	public string AccessToken;

	[Token(Token = "0x4002302")]
	[FieldOffset(Offset = "0x18")]
	public string RefreshToken;

	[Token(Token = "0x4002303")]
	[FieldOffset(Offset = "0x20")]
	public string PhotonToken;

	[Token(Token = "0x4002304")]
	[FieldOffset(Offset = "0x28")]
	public DateTimeOffset AccessTokenExpiresAt;

	[Token(Token = "0x4002305")]
	[FieldOffset(Offset = "0x38")]
	public DateTimeOffset PhotonTokenExpiresAt;

	[Token(Token = "0x4002306")]
	[FieldOffset(Offset = "0x48")]
	public ProfileData Profile;

	[Token(Token = "0x6004769")]
	[Address(RVA = "0x4399720", Offset = "0x4399720", VA = "0x4399720")]
	public static AccountLoginResponse Parse(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x600476A")]
	[Address(RVA = "0x4399CA0", Offset = "0x4399CA0", VA = "0x4399CA0")]
	private static JSONNode GetChild(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x600476B")]
	[Address(RVA = "0x4399920", Offset = "0x4399920", VA = "0x4399920")]
	private static string ReadString(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x600476C")]
	[Address(RVA = "0x4399A80", Offset = "0x4399A80", VA = "0x4399A80")]
	private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x600476D")]
	[Address(RVA = "0x439A2D0", Offset = "0x439A2D0", VA = "0x439A2D0")]
	private static string[] ReadStringArray(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x600476E")]
	[Address(RVA = "0x4399910", Offset = "0x4399910", VA = "0x4399910")]
	public AccountLoginResponse()
	{
	}
}
