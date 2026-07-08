using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.PublicProfiles;

[Token(Token = "0x200074F")]
public sealed class AottgPublicProfileFetchResponse
{
	[Token(Token = "0x17000D9C")]
	public bool Success
	{
		[Token(Token = "0x6004719")]
		[Address(RVA = "0x40AA070", Offset = "0x40AA070", VA = "0x40AA070")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600471A")]
		[Address(RVA = "0x40AA080", Offset = "0x40AA080", VA = "0x40AA080")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D9D")]
	public AottgPublicProfile Profile
	{
		[Token(Token = "0x600471B")]
		[Address(RVA = "0x40AA090", Offset = "0x40AA090", VA = "0x40AA090")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600471C")]
		[Address(RVA = "0x40AA0A0", Offset = "0x40AA0A0", VA = "0x40AA0A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000D9E")]
	public string Error
	{
		[Token(Token = "0x600471D")]
		[Address(RVA = "0x40AA0B0", Offset = "0x40AA0B0", VA = "0x40AA0B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600471E")]
		[Address(RVA = "0x40AA0C0", Offset = "0x40AA0C0", VA = "0x40AA0C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004718")]
	[Address(RVA = "0x40AA020", Offset = "0x40AA020", VA = "0x40AA020")]
	private AottgPublicProfileFetchResponse(bool success, AottgPublicProfile profile, string error)
	{
	}

	[Token(Token = "0x600471F")]
	[Address(RVA = "0x40AA0D0", Offset = "0x40AA0D0", VA = "0x40AA0D0")]
	public static AottgPublicProfileFetchResponse Ok(AottgPublicProfile profile)
	{
		return null;
	}

	[Token(Token = "0x6004720")]
	[Address(RVA = "0x40A97B0", Offset = "0x40A97B0", VA = "0x40A97B0")]
	public static AottgPublicProfileFetchResponse Fail(string error)
	{
		return null;
	}
}
