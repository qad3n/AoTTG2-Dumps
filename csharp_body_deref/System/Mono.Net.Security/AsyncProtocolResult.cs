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
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001B")]
	public ExceptionDispatchInfo Error
	{
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x573EF0", Offset = "0x5724F0", VA = "0x180573EF0")]
	public AsyncProtocolResult(int result)
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x19FFAE0", Offset = "0x19FE0E0", VA = "0x1819FFAE0")]
	public AsyncProtocolResult(ExceptionDispatchInfo error)
	{
	}
}
