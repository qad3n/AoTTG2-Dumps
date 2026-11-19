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

[Token(Token = "0x2000223")]
[ComVisible(true)]
public sealed class RegisteredWaitHandle : MarshalByRefObject
{
	[Token(Token = "0x40009C9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private WaitHandle _waitObject;

	[Token(Token = "0x40009CA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private WaitOrTimerCallback _callback;

	[Token(Token = "0x40009CB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private object _state;

	[Token(Token = "0x40009CC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private WaitHandle _finalEvent;

	[Token(Token = "0x40009CD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private ManualResetEvent _cancelEvent;

	[Token(Token = "0x40009CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private TimeSpan _timeout;

	[Token(Token = "0x40009CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private int _callsInProcess;

	[Token(Token = "0x40009D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4C")]
	private bool _executeOnlyOnce;

	[Token(Token = "0x40009D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x4D")]
	private bool _unregistered;

	[Token(Token = "0x6001391")]
	[Address(RVA = "0x553C870", Offset = "0x553B870", VA = "0x553C870")]
	internal RegisteredWaitHandle(WaitHandle waitObject, WaitOrTimerCallback callback, object state, TimeSpan timeout, bool executeOnlyOnce)
	{
	}

	[Token(Token = "0x6001392")]
	[Address(RVA = "0x553EC10", Offset = "0x553DC10", VA = "0x553EC10")]
	internal void Wait(object state)
	{
	}

	[Token(Token = "0x6001393")]
	[Address(RVA = "0x553F180", Offset = "0x553E180", VA = "0x553F180")]
	private void DoCallBack(object timedOut)
	{
	}

	[Token(Token = "0x6001394")]
	[Address(RVA = "0x553F270", Offset = "0x553E270", VA = "0x553F270")]
	[ComVisible(true)]
	public bool Unregister(WaitHandle waitObject)
	{
		return default(bool);
	}
}
