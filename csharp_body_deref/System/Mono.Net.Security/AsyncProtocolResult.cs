// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Net.Security.AsyncProtocolResult
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using Il2CppDummyDll;

namespace Mono.Net.Security;

[Token(Token = "0x2000049")]
internal class AsyncProtocolResult
{
	[Token(Token = "0x1700001A")]
	public int UserResult
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x4522180", Offset = "0x4522180", VA = "0x4522180")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001B")]
	public ExceptionDispatchInfo Error
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x4522190", Offset = "0x4522190", VA = "0x4522190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000B3")]
	[Address(RVA = "0x45221A0", Offset = "0x45221A0", VA = "0x45221A0")]
	public AsyncProtocolResult(int result)
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x45221C0", Offset = "0x45221C0", VA = "0x45221C0")]
	public AsyncProtocolResult(ExceptionDispatchInfo error)
	{
	}
}
