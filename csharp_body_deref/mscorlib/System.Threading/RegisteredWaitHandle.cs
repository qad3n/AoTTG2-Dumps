// ==================== AoTTG2 cross-reference ====================
// Type: System.Threading.RegisteredWaitHandle
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System.Threading;

[Token(Token = "0x200024B")]
[ComVisible(true)]
public sealed class RegisteredWaitHandle : MarshalByRefObject
{
	[Token(Token = "0x4000A6B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WaitHandle _waitObject;

	[Token(Token = "0x4000A6C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private WaitOrTimerCallback _callback;

	[Token(Token = "0x4000A6D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _state;

	[Token(Token = "0x4000A6E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private WaitHandle _finalEvent;

	[Token(Token = "0x4000A6F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ManualResetEvent _cancelEvent;

	[Token(Token = "0x4000A70")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TimeSpan _timeout;

	[Token(Token = "0x4000A71")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _callsInProcess;

	[Token(Token = "0x4000A72")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private bool _executeOnlyOnce;

	[Token(Token = "0x4000A73")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4D")]
	private bool _unregistered;

	[Token(Token = "0x60013BA")]
	[Address(RVA = "0x1BB2960", Offset = "0x1BB0F60", VA = "0x181BB2960")]
	internal RegisteredWaitHandle(WaitHandle waitObject, WaitOrTimerCallback callback, object state, TimeSpan timeout, bool executeOnlyOnce)
	{
	}

	[Token(Token = "0x60013BB")]
	[Address(RVA = "0x1BB2310", Offset = "0x1BB0910", VA = "0x181BB2310")]
	internal void Wait(object state)
	{
	}

	[Token(Token = "0x60013BC")]
	[Address(RVA = "0x1BB2100", Offset = "0x1BB0700", VA = "0x181BB2100")]
	private void DoCallBack(object timedOut)
	{
	}

	[Token(Token = "0x60013BD")]
	[Address(RVA = "0x1BB21C0", Offset = "0x1BB07C0", VA = "0x181BB21C0")]
	[ComVisible(true)]
	public bool Unregister(WaitHandle waitObject)
	{
		return default(bool);
	}
}
