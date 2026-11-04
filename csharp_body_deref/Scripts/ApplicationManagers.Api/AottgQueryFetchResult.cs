// ==================== AoTTG2 cross-reference ====================
// Type: ApplicationManagers.Api.AottgQueryFetchResult
// Update status: unchanged since the previous dump
// Real method bodies (native C decompile): source/cpp/ApplicationManagers/Api/AottgQueryFetchResult.c
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace ApplicationManagers.Api;

[Token(Token = "0x200095E")]
public sealed class AottgQueryFetchResult<TValue>
{
	[Token(Token = "0x17000FBC")]
	public bool Success
	{
		[Token(Token = "0x600572A")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600572B")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FBD")]
	public TValue Value
	{
		[Token(Token = "0x600572C")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x600572D")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000FBE")]
	public string Error
	{
		[Token(Token = "0x600572E")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600572F")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6005730")]
	public static AottgQueryFetchResult<TValue> Ok(TValue value)
	{
		return null;
	}

	[Token(Token = "0x6005731")]
	public static AottgQueryFetchResult<TValue> Fail(string error)
	{
		return null;
	}

	[Token(Token = "0x6005732")]
	public AottgQueryFetchResult()
	{
	}
}
