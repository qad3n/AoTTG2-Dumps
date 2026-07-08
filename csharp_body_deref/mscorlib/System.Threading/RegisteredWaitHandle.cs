using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200021A")]
[ComVisible(true)]
public sealed class RegisteredWaitHandle : MarshalByRefObject
{
	[Token(Token = "0x4000A0D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WaitHandle _waitObject;

	[Token(Token = "0x4000A0E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private WaitOrTimerCallback _callback;

	[Token(Token = "0x4000A0F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _state;

	[Token(Token = "0x4000A10")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private WaitHandle _finalEvent;

	[Token(Token = "0x4000A11")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ManualResetEvent _cancelEvent;

	[Token(Token = "0x4000A12")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TimeSpan _timeout;

	[Token(Token = "0x4000A13")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _callsInProcess;

	[Token(Token = "0x4000A14")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private bool _executeOnlyOnce;

	[Token(Token = "0x4000A15")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4D")]
	private bool _unregistered;

	[Token(Token = "0x6001349")]
	[Address(RVA = "0x5054330", Offset = "0x5054330", VA = "0x5054330")]
	internal RegisteredWaitHandle(WaitHandle waitObject, WaitOrTimerCallback callback, object state, TimeSpan timeout, bool executeOnlyOnce)
	{
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x50567C0", Offset = "0x50567C0", VA = "0x50567C0")]
	internal void Wait(object state)
	{
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x5056D80", Offset = "0x5056D80", VA = "0x5056D80")]
	private void DoCallBack(object timedOut)
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x5056E70", Offset = "0x5056E70", VA = "0x5056E70")]
	[ComVisible(true)]
	public bool Unregister(WaitHandle waitObject)
	{
		return default(bool);
	}
}
