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

[Token(Token = "0x20001F3")]
[ComVisible(true)]
public class EventWaitHandle : WaitHandle
{
	[Token(Token = "0x6001218")]
	[Address(RVA = "0x3D280A0", Offset = "0x3D280A0", VA = "0x3D280A0")]
	public EventWaitHandle(bool initialState, EventResetMode mode)
	{
	}

	[Token(Token = "0x6001219")]
	[Address(RVA = "0x3D31AC0", Offset = "0x3D31AC0", VA = "0x3D31AC0")]
	public EventWaitHandle(bool initialState, EventResetMode mode, string name)
	{
	}

	[Token(Token = "0x600121A")]
	[Address(RVA = "0x3D2F160", Offset = "0x3D2F160", VA = "0x3D2F160")]
	public bool Reset()
	{
		return default(bool);
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x3D2A210", Offset = "0x3D2A210", VA = "0x3D2A210")]
	public bool Set()
	{
		return default(bool);
	}
}
