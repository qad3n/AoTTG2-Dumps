// ==================== AoTTG2 cross-reference ====================
// Type: Mono.Btls.MonoBtlsException
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace Mono.Btls;

[Token(Token = "0x2000076")]
internal class MonoBtlsException : Exception
{
	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x2498520", Offset = "0x2496B20", VA = "0x182498520")]
	public MonoBtlsException()
	{
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x24985F0", Offset = "0x2496BF0", VA = "0x1824985F0")]
	public MonoBtlsException(MonoBtlsSslError error)
	{
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x24984C0", Offset = "0x2496AC0", VA = "0x1824984C0")]
	public MonoBtlsException(string message)
	{
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x2498570", Offset = "0x2496B70", VA = "0x182498570")]
	public MonoBtlsException(string format, params object[] args)
	{
	}
}
