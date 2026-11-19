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

[Token(Token = "0x2000990")]
public sealed class AottgPublicProfileFetchResponse
{
	[Token(Token = "0x17000F5A")]
	public bool Success
	{
		[Token(Token = "0x6005959")]
		[Address(RVA = "0x5D1FE70", Offset = "0x5D1EE70", VA = "0x5D1FE70")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600595A")]
		[Address(RVA = "0x5D1FE80", Offset = "0x5D1EE80", VA = "0x5D1FE80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F5B")]
	public AottgPublicProfile Profile
	{
		[Token(Token = "0x600595B")]
		[Address(RVA = "0x5D1FE90", Offset = "0x5D1EE90", VA = "0x5D1FE90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600595C")]
		[Address(RVA = "0x5D1FEA0", Offset = "0x5D1EEA0", VA = "0x5D1FEA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000F5C")]
	public string Error
	{
		[Token(Token = "0x600595D")]
		[Address(RVA = "0x5D1FEB0", Offset = "0x5D1EEB0", VA = "0x5D1FEB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600595E")]
		[Address(RVA = "0x5D1FEC0", Offset = "0x5D1EEC0", VA = "0x5D1FEC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005958")]
	[Address(RVA = "0x5D1FE20", Offset = "0x5D1EE20", VA = "0x5D1FE20")]
	private AottgPublicProfileFetchResponse(bool success, AottgPublicProfile profile, string error)
	{
	}

	[Token(Token = "0x600595F")]
	[Address(RVA = "0x5D1FED0", Offset = "0x5D1EED0", VA = "0x5D1FED0")]
	public static AottgPublicProfileFetchResponse Ok(AottgPublicProfile profile)
	{
		return null;
	}

	[Token(Token = "0x6005960")]
	[Address(RVA = "0x5D1F5B0", Offset = "0x5D1E5B0", VA = "0x5D1F5B0")]
	public static AottgPublicProfileFetchResponse Fail(string error)
	{
		return null;
	}
}
