// ==================== AoTTG2 cross-reference ====================
// Type: System.Runtime.Serialization.SerializationObjectManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Runtime.Serialization;

[Token(Token = "0x20003E0")]
public sealed class SerializationObjectManager
{
	[Token(Token = "0x4000F40")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<object, object> _objectSeenTable;

	[Token(Token = "0x4000F41")]
	[FieldOffset(Offset = "0x18")]
	private readonly StreamingContext _context;

	[Token(Token = "0x4000F42")]
	[FieldOffset(Offset = "0x28")]
	private SerializationEventHandler _onSerializedHandler;

	[Token(Token = "0x6001FA0")]
	[Address(RVA = "0x539C760", Offset = "0x539B760", VA = "0x539C760")]
	public SerializationObjectManager(StreamingContext context)
	{
	}

	[Token(Token = "0x6001FA1")]
	[Address(RVA = "0x539C7F0", Offset = "0x539B7F0", VA = "0x539C7F0")]
	public void RegisterObject(object obj)
	{
	}

	[Token(Token = "0x6001FA2")]
	[Address(RVA = "0x539C9B0", Offset = "0x539B9B0", VA = "0x539C9B0")]
	public void RaiseOnSerializedEvent()
	{
	}

	[Token(Token = "0x6001FA3")]
	[Address(RVA = "0x539C910", Offset = "0x539B910", VA = "0x539C910")]
	private void AddOnSerialized(object obj)
	{
	}
}
