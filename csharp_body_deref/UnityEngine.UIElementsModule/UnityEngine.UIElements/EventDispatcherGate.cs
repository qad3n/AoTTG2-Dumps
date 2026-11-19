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

[Token(Token = "0x20001AA")]
public struct EventDispatcherGate : IDisposable, IEquatable<EventDispatcherGate>
{
	[Token(Token = "0x400074F")]
	[FieldOffset(Offset = "0x0")]
	private readonly EventDispatcher m_Dispatcher;

	[Token(Token = "0x6000BBA")]
	[Address(RVA = "0x6C5D2C0", Offset = "0x6C5C2C0", VA = "0x6C5D2C0")]
	public EventDispatcherGate(EventDispatcher d)
	{
	}

	[Token(Token = "0x6000BBB")]
	[Address(RVA = "0x6C5D360", Offset = "0x6C5C360", VA = "0x6C5D360", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000BBC")]
	[Address(RVA = "0x6C5D4F0", Offset = "0x6C5C4F0", VA = "0x6C5D4F0", Slot = "5")]
	public bool Equals(EventDispatcherGate other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBD")]
	[Address(RVA = "0x6C5D500", Offset = "0x6C5C500", VA = "0x6C5D500", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[Token(Token = "0x6000BBE")]
	[Address(RVA = "0x6C5D560", Offset = "0x6C5C560", VA = "0x6C5D560", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}
}
