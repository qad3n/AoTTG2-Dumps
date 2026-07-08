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
	[Address(RVA = "0x4A7B3A0", Offset = "0x4A7B3A0", VA = "0x4A7B3A0")]
	public GCHandlePool()
	{
	}

	[Token(Token = "0x6000049")]
	[Address(RVA = "0x4A7C190", Offset = "0x4A7C190", VA = "0x4A7C190")]
	public GCHandle Alloc(object o)
	{
		return default(GCHandle);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600004A")]
	[Address(RVA = "0x4A7C220", Offset = "0x4A7C220", VA = "0x4A7C220")]
	public IntPtr AllocHandleIfNotNull(object o)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x600004B")]
	[Address(RVA = "0x4A7BB00", Offset = "0x4A7BB00", VA = "0x4A7BB00")]
	public void Free(GCHandle h)
	{
	}
}
