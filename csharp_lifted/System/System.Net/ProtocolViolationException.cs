// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.ProtocolViolationException
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System.Net;

[Serializable]
[Token(Token = "0x2000293")]
public class ProtocolViolationException : InvalidOperationException, ISerializable
{
	[Token(Token = "0x60011F0")]
	[Address(RVA = "0x62A6D40", Offset = "0x62A5D40", VA = "0x62A6D40")]
	public ProtocolViolationException()
	{
	}

	[Token(Token = "0x60011F1")]
	[Address(RVA = "0x62A6D50", Offset = "0x62A5D50", VA = "0x62A6D50")]
	public ProtocolViolationException(string message)
	{
	}

	[Token(Token = "0x60011F2")]
	[Address(RVA = "0x62A6D60", Offset = "0x62A5D60", VA = "0x62A6D60")]
	protected ProtocolViolationException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60011F3")]
	[Address(RVA = "0x62A6D70", Offset = "0x62A5D70", VA = "0x62A6D70", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60011F4")]
	[Address(RVA = "0x62A6D80", Offset = "0x62A5D80", VA = "0x62A6D80", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
