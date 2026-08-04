// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Coroutine
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000161")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/Coroutine.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class Coroutine : YieldInstruction
{
	[Token(Token = "0x4000571")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x4DF8FF0", Offset = "0x4DF8FF0", VA = "0x4DF8FF0")]
	private Coroutine()
	{
	}

	[Token(Token = "0x6000A1C")]
	[Address(RVA = "0x4DF9000", Offset = "0x4DF9000", VA = "0x4DF9000", Slot = "1")]
	~Coroutine()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A1D")]
	[Address(RVA = "0x4DF90C0", Offset = "0x4DF90C0", VA = "0x4DF90C0")]
	[UnityEngine.Bindings.FreeFunction("Coroutine::CleanupCoroutineGC", true)]
	private static extern void ReleaseCoroutine(IntPtr ptr);
}
