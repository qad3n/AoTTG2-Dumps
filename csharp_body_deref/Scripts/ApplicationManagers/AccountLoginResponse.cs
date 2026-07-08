using System;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers;

[Token(Token = "0x2000703")]
public sealed class AccountLoginResponse
{
	[Token(Token = "0x2000704")]
	public sealed class ProfileData
	{
		[Token(Token = "0x40021AA")]
		[FieldOffset(Offset = "0x10")]
		public string AccountId;

		[Token(Token = "0x40021AB")]
		[FieldOffset(Offset = "0x18")]
		public string Email;

		[Token(Token = "0x40021AC")]
		[FieldOffset(Offset = "0x20")]
		public string DisplayName;

		[Token(Token = "0x40021AD")]
		[FieldOffset(Offset = "0x28")]
		public string PhotonUserId;

		[Token(Token = "0x40021AE")]
		[FieldOffset(Offset = "0x30")]
		public bool EmailVerified;

		[Token(Token = "0x40021AF")]
		[FieldOffset(Offset = "0x31")]
		public bool HasPassword;

		[Token(Token = "0x40021B0")]
		[FieldOffset(Offset = "0x38")]
		public string[] Roles;

		[Token(Token = "0x40021B1")]
		[FieldOffset(Offset = "0x40")]
		public string[] Permissions;

		[Token(Token = "0x40021B2")]
		[FieldOffset(Offset = "0x48")]
		public string RestrictionStatus;

		[Token(Token = "0x40021B3")]
		[FieldOffset(Offset = "0x50")]
		public JSONNode Restriction;

		[Token(Token = "0x40021B4")]
		[FieldOffset(Offset = "0x58")]
		public PatreonData Patreon;

		[Token(Token = "0x40021B5")]
		[FieldOffset(Offset = "0x60")]
		public OAuthLinkData[] OAuthLinks;

		[Token(Token = "0x40021B6")]
		[FieldOffset(Offset = "0x68")]
		public string Description;

		[Token(Token = "0x40021B7")]
		[FieldOffset(Offset = "0x70")]
		public string AvatarKey;

		[Token(Token = "0x40021B8")]
		[FieldOffset(Offset = "0x78")]
		public string BannerKey;

		[Token(Token = "0x40021B9")]
		[FieldOffset(Offset = "0x80")]
		public JSONNode Socials;

		[Token(Token = "0x40021BA")]
		[FieldOffset(Offset = "0x88")]
		public DateTimeOffset CreatedAt;

		[Token(Token = "0x6004507")]
		[Address(RVA = "0x4081D60", Offset = "0x4081D60", VA = "0x4081D60")]
		public static ProfileData Parse(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x6004508")]
		[Address(RVA = "0x4082B00", Offset = "0x4082B00", VA = "0x4082B00")]
		private static bool ReadBool(JSONNode node, string key)
		{
			return default(bool);
		}

		[Token(Token = "0x6004509")]
		[Address(RVA = "0x40829A0", Offset = "0x40829A0", VA = "0x40829A0")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x600450A")]
		[Address(RVA = "0x4082C60", Offset = "0x4082C60", VA = "0x4082C60")]
		private static string[] ReadStringArray(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x600450B")]
		[Address(RVA = "0x40835D0", Offset = "0x40835D0", VA = "0x40835D0")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x600450C")]
		[Address(RVA = "0x4083270", Offset = "0x4083270", VA = "0x4083270")]
		private static OAuthLinkData[] ParseOAuthLinks(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x600450D")]
		[Address(RVA = "0x4082740", Offset = "0x4082740", VA = "0x4082740")]
		public ProfileData()
		{
		}
	}

	[Token(Token = "0x2000705")]
	public sealed class PatreonData
	{
		[Token(Token = "0x40021BB")]
		private const string Tier2Id = "28767500";

		[Token(Token = "0x40021BC")]
		private const string Tier3Id = "28767505";

		[Token(Token = "0x40021BD")]
		[FieldOffset(Offset = "0x10")]
		public bool Linked;

		[Token(Token = "0x40021BE")]
		[FieldOffset(Offset = "0x18")]
		public string PatronStatus;

		[Token(Token = "0x40021BF")]
		[FieldOffset(Offset = "0x20")]
		public string[] TierIds;

		[Token(Token = "0x40021C0")]
		[FieldOffset(Offset = "0x28")]
		public int EntitledAmountCents;

		[Token(Token = "0x40021C1")]
		[FieldOffset(Offset = "0x2C")]
		public bool ManualOverride;

		[Token(Token = "0x40021C2")]
		[FieldOffset(Offset = "0x30")]
		public DateTimeOffset LastSyncedAt;

		[Token(Token = "0x40021C3")]
		[FieldOffset(Offset = "0x40")]
		public bool HasTier2;

		[Token(Token = "0x40021C4")]
		[FieldOffset(Offset = "0x41")]
		public bool HasTier3;

		[Token(Token = "0x600450E")]
		[Address(RVA = "0x40830B0", Offset = "0x40830B0", VA = "0x40830B0")]
		public static PatreonData Parse(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x600450F")]
		[Address(RVA = "0x4084560", Offset = "0x4084560", VA = "0x4084560")]
		public JSONNode ToJsonNode()
		{
			return null;
		}

		[Token(Token = "0x6004510")]
		[Address(RVA = "0x4083A00", Offset = "0x4083A00", VA = "0x4083A00")]
		private static bool ReadBool(JSONNode node, string key)
		{
			return default(bool);
		}

		[Token(Token = "0x6004511")]
		[Address(RVA = "0x40841E0", Offset = "0x40841E0", VA = "0x40841E0")]
		private static int ReadInt(JSONNode node, string key)
		{
			return default(int);
		}

		[Token(Token = "0x6004512")]
		[Address(RVA = "0x4083B60", Offset = "0x4083B60", VA = "0x4083B60")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6004513")]
		[Address(RVA = "0x4083CC0", Offset = "0x4083CC0", VA = "0x4083CC0")]
		private static string[] ReadStringArray(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6004514")]
		[Address(RVA = "0x4084340", Offset = "0x4084340", VA = "0x4084340")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x6004515")]
		[Address(RVA = "0x4084910", Offset = "0x4084910", VA = "0x4084910")]
		private static JSONNode GetChild(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x6004516")]
		[Address(RVA = "0x4084110", Offset = "0x4084110", VA = "0x4084110")]
		private static bool HasTier(string[] tierIds, string targetTier)
		{
			return default(bool);
		}

		[Token(Token = "0x6004517")]
		[Address(RVA = "0x4083930", Offset = "0x4083930", VA = "0x4083930")]
		public PatreonData()
		{
		}
	}

	[Token(Token = "0x2000706")]
	public sealed class OAuthLinkData
	{
		[Token(Token = "0x40021C5")]
		[FieldOffset(Offset = "0x10")]
		public string Provider;

		[Token(Token = "0x40021C6")]
		[FieldOffset(Offset = "0x18")]
		public string ProviderUserId;

		[Token(Token = "0x40021C7")]
		[FieldOffset(Offset = "0x20")]
		public string ProviderEmail;

		[Token(Token = "0x40021C8")]
		[FieldOffset(Offset = "0x28")]
		public DateTimeOffset LinkedAt;

		[Token(Token = "0x6004518")]
		[Address(RVA = "0x40837F0", Offset = "0x40837F0", VA = "0x40837F0")]
		public static OAuthLinkData Parse(JSONNode node)
		{
			return null;
		}

		[Token(Token = "0x6004519")]
		[Address(RVA = "0x40849C0", Offset = "0x40849C0", VA = "0x40849C0")]
		private static string ReadString(JSONNode node, string key)
		{
			return null;
		}

		[Token(Token = "0x600451A")]
		[Address(RVA = "0x4084AC0", Offset = "0x4084AC0", VA = "0x4084AC0")]
		private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
		{
			return default(DateTimeOffset);
		}

		[Token(Token = "0x600451B")]
		[Address(RVA = "0x40849B0", Offset = "0x40849B0", VA = "0x40849B0")]
		public OAuthLinkData()
		{
		}
	}

	[Token(Token = "0x40021A4")]
	[FieldOffset(Offset = "0x10")]
	public string AccessToken;

	[Token(Token = "0x40021A5")]
	[FieldOffset(Offset = "0x18")]
	public string RefreshToken;

	[Token(Token = "0x40021A6")]
	[FieldOffset(Offset = "0x20")]
	public string PhotonToken;

	[Token(Token = "0x40021A7")]
	[FieldOffset(Offset = "0x28")]
	public DateTimeOffset AccessTokenExpiresAt;

	[Token(Token = "0x40021A8")]
	[FieldOffset(Offset = "0x38")]
	public DateTimeOffset PhotonTokenExpiresAt;

	[Token(Token = "0x40021A9")]
	[FieldOffset(Offset = "0x48")]
	public ProfileData Profile;

	[Token(Token = "0x6004501")]
	[Address(RVA = "0x4081740", Offset = "0x4081740", VA = "0x4081740")]
	public static AccountLoginResponse Parse(JSONNode node)
	{
		return null;
	}

	[Token(Token = "0x6004502")]
	[Address(RVA = "0x4081CC0", Offset = "0x4081CC0", VA = "0x4081CC0")]
	private static JSONNode GetChild(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x6004503")]
	[Address(RVA = "0x4081940", Offset = "0x4081940", VA = "0x4081940")]
	private static string ReadString(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x6004504")]
	[Address(RVA = "0x4081AA0", Offset = "0x4081AA0", VA = "0x4081AA0")]
	private static DateTimeOffset ReadDateTimeOffset(JSONNode node, string key)
	{
		return default(DateTimeOffset);
	}

	[Token(Token = "0x6004505")]
	[Address(RVA = "0x40822F0", Offset = "0x40822F0", VA = "0x40822F0")]
	private static string[] ReadStringArray(JSONNode node, string key)
	{
		return null;
	}

	[Token(Token = "0x6004506")]
	[Address(RVA = "0x4081930", Offset = "0x4081930", VA = "0x4081930")]
	public AccountLoginResponse()
	{
	}
}
