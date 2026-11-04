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
[Token(Token = "0x20002D2")]
public class ProtocolViolationException : InvalidOperationException, ISerializable
{
	[Token(Token = "0x60013AE")]
	[Address(RVA = "0x27D1680", Offset = "0x27CFC80", VA = "0x1827D1680")]
	public ProtocolViolationException()
	{
	}

	[Token(Token = "0x60013AF")]
	[Address(RVA = "0x27D1690", Offset = "0x27CFC90", VA = "0x1827D1690")]
	public ProtocolViolationException(string message)
	{
	}

	[Token(Token = "0x60013B0")]
	[Address(RVA = "0x1A42BE0", Offset = "0x1A411E0", VA = "0x181A42BE0")]
	protected ProtocolViolationException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60013B1")]
	[Address(RVA = "0x27C5080", Offset = "0x27C3680", VA = "0x1827C5080", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60013B2")]
	[Address(RVA = "0x27C5080", Offset = "0x27C3680", VA = "0x1827C5080", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
