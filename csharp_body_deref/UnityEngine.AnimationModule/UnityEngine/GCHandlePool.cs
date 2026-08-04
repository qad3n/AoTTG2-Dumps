// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GCHandlePool
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x200000E")]
internal class GCHandlePool
{
	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private GCHandle[] m_handles;

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_current;

	[Token(Token = "0x6000048")]
	[Address(RVA = "0x4DA2BC0", Offset = "0x4DA2BC0", VA = "0x4DA2BC0")]
	public GCHandlePool()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4DA39B0", Offset = "0x4DA39B0", VA = "0x4DA39B0")]
	public GCHandle Alloc(object o)
	{
		return default(GCHandle);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4DA3A40", Offset = "0x4DA3A40", VA = "0x4DA3A40")]
	public IntPtr AllocHandleIfNotNull(object o)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4DA3320", Offset = "0x4DA3320", VA = "0x4DA3320")]
	public void Free(GCHandle h)
	{
	}
}
