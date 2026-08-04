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

[Token(Token = "0x20003D8")]
public sealed class SerializationObjectManager
{
	[Token(Token = "0x4000FDA")]
	[FieldOffset(Offset = "0x10")]
	private readonly Dictionary<object, object> _objectSeenTable;

	[Token(Token = "0x4000FDB")]
	[FieldOffset(Offset = "0x18")]
	private readonly StreamingContext _context;

	[Token(Token = "0x4000FDC")]
	[FieldOffset(Offset = "0x28")]
	private SerializationEventHandler _onSerializedHandler;

	[Token(Token = "0x6001F5B")]
	[Address(RVA = "0x3B94E30", Offset = "0x3B94E30", VA = "0x3B94E30")]
	public SerializationObjectManager(StreamingContext context)
	{
	}

	[Token(Token = "0x6001F5C")]
	[Address(RVA = "0x3B94EC0", Offset = "0x3B94EC0", VA = "0x3B94EC0")]
	public void RegisterObject(object obj)
	{
	}

	[Token(Token = "0x6001F5D")]
	[Address(RVA = "0x3B95070", Offset = "0x3B95070", VA = "0x3B95070")]
	public void RaiseOnSerializedEvent()
	{
	}

	[Token(Token = "0x6001F5E")]
	[Address(RVA = "0x3B94FE0", Offset = "0x3B94FE0", VA = "0x3B94FE0")]
	private void AddOnSerialized(object obj)
	{
	}
}
