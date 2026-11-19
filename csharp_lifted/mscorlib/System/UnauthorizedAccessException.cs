// ==================== AoTTG2 cross-reference ====================
// Type: System.UnauthorizedAccessException
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x2000127")]
public class UnauthorizedAccessException : SystemException
{
	[Token(Token = "0x6000BB2")]
	[Address(RVA = "0x54DE250", Offset = "0x54DD250", VA = "0x54DE250")]
	public UnauthorizedAccessException()
	{
	}

	[Token(Token = "0x6000BB3")]
	[Address(RVA = "0x54DE300", Offset = "0x54DD300", VA = "0x54DE300")]
	public UnauthorizedAccessException(string message)
	{
	}

	[Token(Token = "0x6000BB4")]
	[Address(RVA = "0x54DE360", Offset = "0x54DD360", VA = "0x54DE360")]
	public UnauthorizedAccessException(string message, Exception inner)
	{
	}

	[Token(Token = "0x6000BB5")]
	[Address(RVA = "0x54DE3C0", Offset = "0x54DD3C0", VA = "0x54DE3C0")]
	protected UnauthorizedAccessException(SerializationInfo info, StreamingContext context)
	{
	}
}
