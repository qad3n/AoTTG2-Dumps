// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgApiResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgApiResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using SimpleJSONFixed;

namespace ApplicationManagers.Api;

[Token(Token = "0x2000955")]
public sealed class AottgApiResult
{
	[Token(Token = "0x17000FB5")]
	public bool Success
	{
		[Token(Token = "0x6005708")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005709")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FB6")]
	public long StatusCode
	{
		[Token(Token = "0x600570A")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return default(long);
		}
		[Token(Token = "0x600570B")]
		[Address(RVA = "0x111C9B0", Offset = "0x111AFB0", VA = "0x18111C9B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FB7")]
	public string ResponseText
	{
		[Token(Token = "0x600570C")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600570D")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FB8")]
	public JSONNode Json
	{
		[Token(Token = "0x600570E")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600570F")]
		[Address(RVA = "0x584CA0", Offset = "0x5832A0", VA = "0x180584CA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FB9")]
	public string Error
	{
		[Token(Token = "0x6005710")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005711")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FBA")]
	public string RawError
	{
		[Token(Token = "0x6005712")]
		[Address(RVA = "0xC8EEC0", Offset = "0xC8D4C0", VA = "0x180C8EEC0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005713")]
		[Address(RVA = "0x18BE8A0", Offset = "0x18BCEA0", VA = "0x1818BE8A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FBB")]
	public bool IsCanceled
	{
		[Token(Token = "0x6005714")]
		[Address(RVA = "0xA374E0", Offset = "0xA35AE0", VA = "0x180A374E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005715")]
		[Address(RVA = "0xA374F0", Offset = "0xA35AF0", VA = "0x180A374F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005716")]
	[Address(RVA = "0x2360950", Offset = "0x235EF50", VA = "0x182360950")]
	public static AottgApiResult Ok(long statusCode, string responseText, JSONNode json)
	{
		return null;
	}

	[Token(Token = "0x6005717")]
	[Address(RVA = "0x2360890", Offset = "0x235EE90", VA = "0x182360890")]
	public static AottgApiResult Fail(long statusCode, string responseText, string error, string rawError, bool isCanceled = false)
	{
		return null;
	}

	[Token(Token = "0x6005718")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public AottgApiResult()
	{
	}
}
