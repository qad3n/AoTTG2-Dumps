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
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x5E362C0", Offset = "0x5E352C0", VA = "0x5E362C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700001B")]
	public ExceptionDispatchInfo Error
	{
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x5E362D0", Offset = "0x5E352D0", VA = "0x5E362D0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x5E362E0", Offset = "0x5E352E0", VA = "0x5E362E0")]
	public AsyncProtocolResult(int result)
	{
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x5E36300", Offset = "0x5E35300", VA = "0x5E36300")]
	public AsyncProtocolResult(ExceptionDispatchInfo error)
	{
	}
}
