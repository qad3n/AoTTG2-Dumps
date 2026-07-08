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
	[Address(RVA = "0x4EAF310", Offset = "0x4EAF310", VA = "0x4EAF310")]
	public SerializationObjectManager(StreamingContext context)
	{
	}

	[Token(Token = "0x6001F5C")]
	[Address(RVA = "0x4EAF3A0", Offset = "0x4EAF3A0", VA = "0x4EAF3A0")]
	public void RegisterObject(object obj)
	{
	}

	[Token(Token = "0x6001F5D")]
	[Address(RVA = "0x4EAF550", Offset = "0x4EAF550", VA = "0x4EAF550")]
	public void RaiseOnSerializedEvent()
	{
	}

	[Token(Token = "0x6001F5E")]
	[Address(RVA = "0x4EAF4C0", Offset = "0x4EAF4C0", VA = "0x4EAF4C0")]
	private void AddOnSerialized(object obj)
	{
	}
}
