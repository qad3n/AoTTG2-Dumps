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
[Token(Token = "0x2000195")]
[UnityEngine.Scripting.RequiredByNativeCode]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/Coroutine.h")]
public sealed class Coroutine : YieldInstruction
{
	[Token(Token = "0x2000196")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000D75")]
		[Address(RVA = "0x6916EA0", Offset = "0x6915EA0", VA = "0x6916EA0")]
		public static IntPtr ConvertToNative(Coroutine coroutine)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000607")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x6000D72")]
	[Address(RVA = "0x6916DB0", Offset = "0x6915DB0", VA = "0x6916DB0")]
	private Coroutine()
	{
	}

	[Token(Token = "0x6000D73")]
	[Address(RVA = "0x6916DC0", Offset = "0x6915DC0", VA = "0x6916DC0", Slot = "1")]
	~Coroutine()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D74")]
	[Address(RVA = "0x6916E70", Offset = "0x6915E70", VA = "0x6916E70")]
	[UnityEngine.Bindings.FreeFunction("Coroutine::CleanupCoroutineGC", true)]
	private static extern void ReleaseCoroutine(IntPtr ptr);
}
