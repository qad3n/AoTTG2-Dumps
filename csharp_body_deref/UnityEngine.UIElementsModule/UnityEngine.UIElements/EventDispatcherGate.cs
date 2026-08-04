// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.EventDispatcherGate
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x50287E0", Offset = "0x50287E0", VA = "0x50287E0")]
	public EventDispatcherGate(EventDispatcher d)
	{
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x5028860", Offset = "0x5028860", VA = "0x5028860", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x5028950", Offset = "0x5028950", VA = "0x5028950", Slot = "5")]
	public bool Equals(EventDispatcherGate other)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BB")]
	[Address(RVA = "0x5028960", Offset = "0x5028960", VA = "0x5028960", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x60009BC")]
	[Address(RVA = "0x50289C0", Offset = "0x50289C0", VA = "0x50289C0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
