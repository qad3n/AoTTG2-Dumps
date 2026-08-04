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
	[Token(Token = "0x4000273")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private Func<object, bool> _callback;

	[Token(Token = "0x4000274")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private GCHandle _weakTargetObj;

	[Token(Token = "0x60006B7")]
	[Address(RVA = "0x3C9B0A0", Offset = "0x3C9B0A0", VA = "0x3C9B0A0")]
	private Gen2GcCallback()
	{
	}

	[Token(Token = "0x60006B8")]
	[Address(RVA = "0x3C9B0B0", Offset = "0x3C9B0B0", VA = "0x3C9B0B0")]
	public static void Register(Func<object, bool> callback, object targetObj)
	{
	}

	[Token(Token = "0x60006B9")]
	[Address(RVA = "0x3C9B130", Offset = "0x3C9B130", VA = "0x3C9B130")]
	private void Setup(Func<object, bool> callback, object targetObj)
	{
	}

	[Token(Token = "0x60006BA")]
	[Address(RVA = "0x3C9B160", Offset = "0x3C9B160", VA = "0x3C9B160", Slot = "1")]
	~Gen2GcCallback()
	{
	}
}
