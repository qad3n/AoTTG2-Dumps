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
	[Address(RVA = "0x3D39E50", Offset = "0x3D39E50", VA = "0x3D39E50")]
	internal RegisteredWaitHandle(WaitHandle waitObject, WaitOrTimerCallback callback, object state, TimeSpan timeout, bool executeOnlyOnce)
	{
	}

	[Token(Token = "0x600134A")]
	[Address(RVA = "0x3D3C2E0", Offset = "0x3D3C2E0", VA = "0x3D3C2E0")]
	internal void Wait(object state)
	{
	}

	[Token(Token = "0x600134B")]
	[Address(RVA = "0x3D3C8A0", Offset = "0x3D3C8A0", VA = "0x3D3C8A0")]
	private void DoCallBack(object timedOut)
	{
	}

	[Token(Token = "0x600134C")]
	[Address(RVA = "0x3D3C990", Offset = "0x3D3C990", VA = "0x3D3C990")]
	[ComVisible(true)]
	public bool Unregister(WaitHandle waitObject)
	{
		return default(bool);
	}
}
