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
[Token(Token = "0x200014A")]
public class ProtocolViolationException : InvalidOperationException, ISerializable
{
	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x495F0B0", Offset = "0x495F0B0", VA = "0x495F0B0")]
	public ProtocolViolationException()
	{
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x495F0C0", Offset = "0x495F0C0", VA = "0x495F0C0")]
	public ProtocolViolationException(string message)
	{
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x495F0D0", Offset = "0x495F0D0", VA = "0x495F0D0")]
	protected ProtocolViolationException(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x495F0E0", Offset = "0x495F0E0", VA = "0x495F0E0", Slot = "4")]
	private void System_002ERuntime_002ESerialization_002EISerializable_002EGetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x495F0F0", Offset = "0x495F0F0", VA = "0x495F0F0", Slot = "11")]
	public override void GetObjectData(SerializationInfo serializationInfo, StreamingContext streamingContext)
	{
	}
}
