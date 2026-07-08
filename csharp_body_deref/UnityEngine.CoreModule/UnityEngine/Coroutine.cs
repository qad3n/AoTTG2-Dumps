using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;
using UnityEngine.Bindings;
using UnityEngine.Scripting;

namespace UnityEngine;

[StructLayout((LayoutKind)0)]
[Token(Token = "0x200015E")]
[UnityEngine.Bindings.NativeHeader("Runtime/Mono/Coroutine.h")]
[UnityEngine.Scripting.RequiredByNativeCode]
public sealed class Coroutine : YieldInstruction
{
	[Token(Token = "0x4000571")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IntPtr m_Ptr;

	[Token(Token = "0x6000A19")]
	[Address(RVA = "0x4AD16C0", Offset = "0x4AD16C0", VA = "0x4AD16C0")]
	private Coroutine()
	{
	}

	[Token(Token = "0x6000A1A")]
	[Address(RVA = "0x4AD16D0", Offset = "0x4AD16D0", VA = "0x4AD16D0", Slot = "1")]
	~Coroutine()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000A1B")]
	[Address(RVA = "0x4AD1790", Offset = "0x4AD1790", VA = "0x4AD1790")]
	[UnityEngine.Bindings.FreeFunction("Coroutine::CleanupCoroutineGC", true)]
	private static extern void ReleaseCoroutine(IntPtr ptr);
}
