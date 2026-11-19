// ==================== AoTTG2 cross-reference ====================
// Type: System.Reflection.TargetException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Reflection;

[Serializable]
[Token(Token = "0x2000504")]
public class TargetException : ApplicationException
{
	[Token(Token = "0x60025A0")]
	[Address(RVA = "0x53DEA00", Offset = "0x53DDA00", VA = "0x53DEA00")]
	public TargetException()
	{
	}

	[Token(Token = "0x60025A1")]
	[Address(RVA = "0x53DEA20", Offset = "0x53DDA20", VA = "0x53DEA20")]
	public TargetException(string message)
	{
	}

	[Token(Token = "0x60025A2")]
	[Address(RVA = "0x53DEA40", Offset = "0x53DDA40", VA = "0x53DEA40")]
	public TargetException(string message, Exception inner)
	{
	}

	[Token(Token = "0x60025A3")]
	[Address(RVA = "0x53DEA60", Offset = "0x53DDA60", VA = "0x53DEA60")]
	protected TargetException(SerializationInfo info, StreamingContext context)
	{
	}
}
