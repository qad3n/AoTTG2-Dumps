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

[Token(Token = "0x20001FC")]
[ComVisible(true)]
public class EventWaitHandle : WaitHandle
{
	[Token(Token = "0x6001260")]
	[Address(RVA = "0x552B460", Offset = "0x552A460", VA = "0x552B460")]
	public EventWaitHandle(bool initialState, EventResetMode mode)
	{
	}

	[Token(Token = "0x6001261")]
	[Address(RVA = "0x5534810", Offset = "0x5533810", VA = "0x5534810")]
	public EventWaitHandle(bool initialState, EventResetMode mode, string name)
	{
	}

	[Token(Token = "0x6001262")]
	[Address(RVA = "0x5532170", Offset = "0x5531170", VA = "0x5532170")]
	public bool Reset()
	{
		return default(bool);
	}

	[Token(Token = "0x6001263")]
	[Address(RVA = "0x552D640", Offset = "0x552C640", VA = "0x552D640")]
	public bool Set()
	{
		return default(bool);
	}
}
