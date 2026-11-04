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

[Token(Token = "0x200000F")]
internal class GCHandlePool
{
	[Token(Token = "0x4000029")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private GCHandle[] m_handles;

	[Token(Token = "0x400002A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	private int m_current;

	[Token(Token = "0x6000054")]
	[Address(RVA = "0x2EB1290", Offset = "0x2EAF890", VA = "0x182EB1290")]
	public GCHandlePool()
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x2EB1150", Offset = "0x2EAF750", VA = "0x182EB1150")]
	public GCHandle Alloc(object o)
	{
		return default(GCHandle);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000056")]
	[Address(RVA = "0x2EB1140", Offset = "0x2EAF740", VA = "0x182EB1140")]
	public IntPtr AllocHandleIfNotNull(object o)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x2EB11C0", Offset = "0x2EAF7C0", VA = "0x182EB11C0")]
	public void Free(GCHandle h)
	{
	}
}
