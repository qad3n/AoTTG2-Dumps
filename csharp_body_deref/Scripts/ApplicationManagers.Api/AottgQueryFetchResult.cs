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

[Token(Token = "0x20007D1")]
public sealed class AottgQueryFetchResult<TValue>
{
	[Token(Token = "0x17000E59")]
	public bool Success
	{
		[Token(Token = "0x6004AB1")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6004AB2")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E5A")]
	public TValue Value
	{
		[Token(Token = "0x6004AB3")]
		[CompilerGenerated]
		get
		{
			return (TValue)null;
		}
		[Token(Token = "0x6004AB4")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000E5B")]
	public string Error
	{
		[Token(Token = "0x6004AB5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6004AB6")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x6004AB7")]
	public static AottgQueryFetchResult<TValue> Ok(TValue value)
	{
		return null;
	}

	[Token(Token = "0x6004AB8")]
	public static AottgQueryFetchResult<TValue> Fail(string error)
	{
		return null;
	}

	[Token(Token = "0x6004AB9")]
	public AottgQueryFetchResult()
	{
	}
}
