using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x20001F3")]
[ComVisible(true)]
public class EventWaitHandle : WaitHandle
{
	[Token(Token = "0x6001218")]
	[Address(RVA = "0x5042580", Offset = "0x5042580", VA = "0x5042580")]
	public EventWaitHandle(bool initialState, EventResetMode mode)
	{
	}

	[Token(Token = "0x6001219")]
	[Address(RVA = "0x504BFA0", Offset = "0x504BFA0", VA = "0x504BFA0")]
	public EventWaitHandle(bool initialState, EventResetMode mode, string name)
	{
	}

	[Token(Token = "0x600121A")]
	[Address(RVA = "0x5049640", Offset = "0x5049640", VA = "0x5049640")]
	public bool Reset()
	{
		return default(bool);
	}

	[Token(Token = "0x600121B")]
	[Address(RVA = "0x50446F0", Offset = "0x50446F0", VA = "0x50446F0")]
	public bool Set()
	{
		return default(bool);
	}
}
