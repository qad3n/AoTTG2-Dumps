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
[Token(Token = "0x2000505")]
public sealed class TargetInvocationException : ApplicationException
{
	[Token(Token = "0x60025A4")]
	[Address(RVA = "0x53DEA70", Offset = "0x53DDA70", VA = "0x53DEA70")]
	public TargetInvocationException(Exception inner)
	{
	}

	[Token(Token = "0x60025A5")]
	[Address(RVA = "0x53DEAC0", Offset = "0x53DDAC0", VA = "0x53DEAC0")]
	public TargetInvocationException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60025A6")]
	[Address(RVA = "0x53DEAE0", Offset = "0x53DDAE0", VA = "0x53DEAE0")]
	internal TargetInvocationException(SerializationInfo info, StreamingContext context)
	{
	}
}
