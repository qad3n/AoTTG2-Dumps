// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileFetchResponse
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/PublicProfiles/AottgPublicProfileFetchResponse.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.PublicProfiles;

[Token(Token = "0x2000929")]
public sealed class AottgPublicProfileFetchResponse
{
	[Token(Token = "0x17000F7B")]
	public bool Success
	{
		[Token(Token = "0x6005600")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6005601")]
		[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F7C")]
	public AottgPublicProfile Profile
	{
		[Token(Token = "0x6005602")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005603")]
		[Address(RVA = "0xC8DE30", Offset = "0xC8C430", VA = "0x180C8DE30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F7D")]
	public string Error
	{
		[Token(Token = "0x6005604")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6005605")]
		[Address(RVA = "0xACE2F0", Offset = "0xACC8F0", VA = "0x180ACE2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x60055FF")]
	[Address(RVA = "0x2364330", Offset = "0x2362930", VA = "0x182364330")]
	private AottgPublicProfileFetchResponse(bool success, AottgPublicProfile profile, string error)
	{
	}

	[Token(Token = "0x6005606")]
	[Address(RVA = "0x2366AB0", Offset = "0x23650B0", VA = "0x182366AB0")]
	public static AottgPublicProfileFetchResponse Ok(AottgPublicProfile profile)
	{
		return null;
	}

	[Token(Token = "0x6005607")]
	[Address(RVA = "0x2366A10", Offset = "0x2365010", VA = "0x182366A10")]
	public static AottgPublicProfileFetchResponse Fail(string error)
	{
		return null;
	}
}
