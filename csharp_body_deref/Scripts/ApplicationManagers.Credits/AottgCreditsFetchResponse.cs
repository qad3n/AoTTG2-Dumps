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

[Token(Token = "0x20007AB")]
public sealed class AottgCreditsFetchResponse
{
	[Token(Token = "0x17000E2F")]
	public bool Success
	{
		[Token(Token = "0x60049DB")]
		[Address(RVA = "0x43C63E0", Offset = "0x43C63E0", VA = "0x43C63E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60049DC")]
		[Address(RVA = "0x43C63F0", Offset = "0x43C63F0", VA = "0x43C63F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E30")]
	public AottgCreditsResponse Credits
	{
		[Token(Token = "0x60049DD")]
		[Address(RVA = "0x43C6400", Offset = "0x43C6400", VA = "0x43C6400")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60049DE")]
		[Address(RVA = "0x43C6410", Offset = "0x43C6410", VA = "0x43C6410")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E31")]
	public string Error
	{
		[Token(Token = "0x60049DF")]
		[Address(RVA = "0x43C6420", Offset = "0x43C6420", VA = "0x43C6420")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60049E0")]
		[Address(RVA = "0x43C6430", Offset = "0x43C6430", VA = "0x43C6430")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60049DA")]
	[Address(RVA = "0x43C6390", Offset = "0x43C6390", VA = "0x43C6390")]
	private AottgCreditsFetchResponse(bool success, AottgCreditsResponse credits, string error)
	{
	}

	[Token(Token = "0x60049E1")]
	[Address(RVA = "0x43C6440", Offset = "0x43C6440", VA = "0x43C6440")]
	public static AottgCreditsFetchResponse Ok(AottgCreditsResponse credits)
	{
		return null;
	}

	[Token(Token = "0x60049E2")]
	[Address(RVA = "0x43C64C0", Offset = "0x43C64C0", VA = "0x43C64C0")]
	public static AottgCreditsFetchResponse Fail(string error)
	{
		return null;
	}
}
