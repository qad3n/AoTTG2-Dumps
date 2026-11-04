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
[Token(Token = "0x2000194")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/Coroutine.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class Coroutine : YieldInstruction
{
	[Token(Token = "0x2000195")]
	internal static class BindingsMarshaller
	{
		[Token(Token = "0x6000D63")]
		[Address(RVA = "0x87C0D0", Offset = "0x87A6D0", VA = "0x18087C0D0")]
		public static IntPtr ConvertToNative(Coroutine coroutine)
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x4000602")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x6000D60")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private Coroutine()
	{
	}

	[Token(Token = "0x6000D61")]
	[Address(RVA = "0x2F168B0", Offset = "0x2F14EB0", VA = "0x182F168B0", Slot = "1")]
	~Coroutine()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000D62")]
	[Address(RVA = "0x2F16930", Offset = "0x2F14F30", VA = "0x182F16930")]
	[UnityEngine.Bindings.FreeFunction("Coroutine::CleanupCoroutineGC", true)]
	private static extern void ReleaseCoroutine(IntPtr ptr);
}
