// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.TargetInvocationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x20004FC")]
public sealed class TargetInvocationException : ApplicationException
{
	[Token(Token = "0x6002554")]
	[Address(RVA = "0x3BD7920", Offset = "0x3BD7920", VA = "0x3BD7920")]
	public TargetInvocationException(Exception inner)
	{
	}

	[Token(Token = "0x6002555")]
	[Address(RVA = "0x3BD7970", Offset = "0x3BD7970", VA = "0x3BD7970")]
	public TargetInvocationException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6002556")]
	[Address(RVA = "0x3BD7990", Offset = "0x3BD7990", VA = "0x3BD7990")]
	internal TargetInvocationException(SerializationInfo info, StreamingContext context)
	{
	}
}
