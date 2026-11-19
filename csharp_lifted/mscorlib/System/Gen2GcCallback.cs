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

[Token(Token = "0x20000B2")]
internal sealed class Gen2GcCallback : CriticalFinalizerObject
{
	[Token(Token = "0x4000259")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Func<object, bool> _callback;

	[Token(Token = "0x400025A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private GCHandle _weakTargetObj;

	[Token(Token = "0x60006C1")]
	[Address(RVA = "0x549EDB0", Offset = "0x549DDB0", VA = "0x549EDB0")]
	private Gen2GcCallback()
	{
	}

	[Token(Token = "0x60006C2")]
	[Address(RVA = "0x549EDC0", Offset = "0x549DDC0", VA = "0x549EDC0")]
	public static void Register(Func<object, bool> callback, object targetObj)
	{
	}

	[Token(Token = "0x60006C3")]
	[Address(RVA = "0x549EE40", Offset = "0x549DE40", VA = "0x549EE40")]
	private void Setup(Func<object, bool> callback, object targetObj)
	{
	}

	[Token(Token = "0x60006C4")]
	[Address(RVA = "0x549EE70", Offset = "0x549DE70", VA = "0x549EE70", Slot = "1")]
	~Gen2GcCallback()
	{
	}
}
