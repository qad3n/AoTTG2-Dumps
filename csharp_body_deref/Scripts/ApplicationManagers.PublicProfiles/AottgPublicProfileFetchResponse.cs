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

[Token(Token = "0x200079E")]
public sealed class AottgPublicProfileFetchResponse
{
	[Token(Token = "0x17000E18")]
	public bool Success
	{
		[Token(Token = "0x6004988")]
		[Address(RVA = "0x43C3070", Offset = "0x43C3070", VA = "0x43C3070")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004989")]
		[Address(RVA = "0x43C3080", Offset = "0x43C3080", VA = "0x43C3080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E19")]
	public AottgPublicProfile Profile
	{
		[Token(Token = "0x600498A")]
		[Address(RVA = "0x43C3090", Offset = "0x43C3090", VA = "0x43C3090")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600498B")]
		[Address(RVA = "0x43C30A0", Offset = "0x43C30A0", VA = "0x43C30A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E1A")]
	public string Error
	{
		[Token(Token = "0x600498C")]
		[Address(RVA = "0x43C30B0", Offset = "0x43C30B0", VA = "0x43C30B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600498D")]
		[Address(RVA = "0x43C30C0", Offset = "0x43C30C0", VA = "0x43C30C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004987")]
	[Address(RVA = "0x43C3020", Offset = "0x43C3020", VA = "0x43C3020")]
	private AottgPublicProfileFetchResponse(bool success, AottgPublicProfile profile, string error)
	{
	}

	[Token(Token = "0x600498E")]
	[Address(RVA = "0x43C30D0", Offset = "0x43C30D0", VA = "0x43C30D0")]
	public static AottgPublicProfileFetchResponse Ok(AottgPublicProfile profile)
	{
		return null;
	}

	[Token(Token = "0x600498F")]
	[Address(RVA = "0x43C27B0", Offset = "0x43C27B0", VA = "0x43C27B0")]
	public static AottgPublicProfileFetchResponse Fail(string error)
	{
		return null;
	}
}
