// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.EventWaitHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x2000224")]
[ComVisible(true)]
public class EventWaitHandle : WaitHandle
{
	[Token(Token = "0x6001289")]
	[Address(RVA = "0x1B9EDA0", Offset = "0x1B9D3A0", VA = "0x181B9EDA0")]
	public EventWaitHandle(bool initialState, EventResetMode mode)
	{
	}

	[Token(Token = "0x600128A")]
	[Address(RVA = "0x1B9EDC0", Offset = "0x1B9D3C0", VA = "0x181B9EDC0")]
	public EventWaitHandle(bool initialState, EventResetMode mode, string name)
	{
	}

	[Token(Token = "0x600128B")]
	[Address(RVA = "0x1B9ECE0", Offset = "0x1B9D2E0", VA = "0x181B9ECE0")]
	public bool Reset()
	{
		return default(bool);
	}

	[Token(Token = "0x600128C")]
	[Address(RVA = "0x1B9ED40", Offset = "0x1B9D340", VA = "0x181B9ED40")]
	public bool Set()
	{
		return default(bool);
	}
}
