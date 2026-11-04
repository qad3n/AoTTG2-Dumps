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

[Token(Token = "0x2000407")]
public sealed class SerializationObjectManager
{
	[Token(Token = "0x4000FE0")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<object, object> _objectSeenTable;

	[Token(Token = "0x4000FE1")]
	[FieldOffset(Offset = "0x18")]
	private readonly StreamingContext _context;

	[Token(Token = "0x4000FE2")]
	[FieldOffset(Offset = "0x28")]
	private SerializationEventHandler _onSerializedHandler;

	[Token(Token = "0x6001FCA")]
	[Address(RVA = "0x1A220B0", Offset = "0x1A206B0", VA = "0x181A220B0")]
	public SerializationObjectManager(StreamingContext context)
	{
	}

	[Token(Token = "0x6001FCB")]
	[Address(RVA = "0x1A21F10", Offset = "0x1A20510", VA = "0x181A21F10")]
	public void RegisterObject(object obj)
	{
	}

	[Token(Token = "0x6001FCC")]
	[Address(RVA = "0x1A21EE0", Offset = "0x1A204E0", VA = "0x181A21EE0")]
	public void RaiseOnSerializedEvent()
	{
	}

	[Token(Token = "0x6001FCD")]
	[Address(RVA = "0x1A21E40", Offset = "0x1A20440", VA = "0x181A21E40")]
	private void AddOnSerialized(object obj)
	{
	}
}
