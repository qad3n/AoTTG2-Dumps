// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Credits.AottgCreditsFetchResponse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Credits/AottgCreditsFetchResponse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Credits;

[Token(Token = "0x2000936")]
public sealed class AottgCreditsFetchResponse
{
	[Token(Token = "0x17000F92")]
	public bool Success
	{
		[Token(Token = "0x6005653")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005654")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F93")]
	public AottgCreditsResponse Credits
	{
		[Token(Token = "0x6005655")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005656")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F94")]
	public string Error
	{
		[Token(Token = "0x6005657")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005658")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005652")]
	[Address(RVA = "0x2364330", Offset = "0x2362930", VA = "0x182364330")]
	private AottgCreditsFetchResponse(bool success, AottgCreditsResponse credits, string error)
	{
	}

	[Token(Token = "0x6005659")]
	[Address(RVA = "0x23642B0", Offset = "0x23628B0", VA = "0x1823642B0")]
	public static AottgCreditsFetchResponse Ok(AottgCreditsResponse credits)
	{
		return null;
	}

	[Token(Token = "0x600565A")]
	[Address(RVA = "0x2364210", Offset = "0x2362810", VA = "0x182364210")]
	public static AottgCreditsFetchResponse Fail(string error)
	{
		return null;
	}
}
