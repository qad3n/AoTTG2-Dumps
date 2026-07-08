using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000165")]
public struct EventDispatcherGate : IDisposable, IEquatable<EventDispatcherGate>
{
	[Token(Token = "0x400061E")]
	[FieldOffset(Offset = "0x0")]
	private readonly EventDispatcher m_Dispatcher;

	[Token(Token = "0x60009B8")]
	[Address(RVA = "0x4D00EB0", Offset = "0x4D00EB0", VA = "0x4D00EB0")]
	public EventDispatcherGate(EventDispatcher d)
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x4D00F30", Offset = "0x4D00F30", VA = "0x4D00F30", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x4D01020", Offset = "0x4D01020", VA = "0x4D01020", Slot = "5")]
	public bool Equals(EventDispatcherGate other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x4D01030", Offset = "0x4D01030", VA = "0x4D01030", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x4D01090", Offset = "0x4D01090", VA = "0x4D01090", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
