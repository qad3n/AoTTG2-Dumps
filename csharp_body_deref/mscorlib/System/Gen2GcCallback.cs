// ==================== AoTTG2 cross-reference ====================
// Type: System.Gen2GcCallback
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.ConstrainedExecution;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Token(Token = "0x20000DA")]
internal sealed class Gen2GcCallback : CriticalFinalizerObject
{
	[Token(Token = "0x40002FE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Func<object, bool> _callback;

	[Token(Token = "0x40002FF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private GCHandle _weakTargetObj;

	[Token(Token = "0x60006E6")]
	[Address(RVA = "0x5386D0", Offset = "0x536CD0", VA = "0x1805386D0")]
	private Gen2GcCallback()
	{
	}

	[Token(Token = "0x60006E7")]
	[Address(RVA = "0x1B23140", Offset = "0x1B21740", VA = "0x181B23140")]
	public static void Register(Func<object, bool> callback, object targetObj)
	{
	}

	[Token(Token = "0x60006E8")]
	[Address(RVA = "0x1B231D0", Offset = "0x1B217D0", VA = "0x181B231D0")]
	private void Setup(Func<object, bool> callback, object targetObj)
	{
	}

	[Token(Token = "0x60006E9")]
	[Address(RVA = "0x1B22FD0", Offset = "0x1B215D0", VA = "0x181B22FD0", Slot = "1")]
	~Gen2GcCallback()
	{
	}
}
