using System;
using Il2CppDummyDll;

namespace UnityEngine;

[Token(Token = "0x2000008")]
internal class GlobalJavaObjectRef
{
	[Token(Token = "0x400000B")]
	[FieldOffset(Offset = "0x10")]
	private bool m_disposed;

	[Token(Token = "0x400000C")]
	[FieldOffset(Offset = "0x18")]
	protected IntPtr m_jobject;

	[Token(Token = "0x60000CE")]
	[Address(RVA = "0x4A71E70", Offset = "0x4A71E70", VA = "0x4A71E70")]
	public GlobalJavaObjectRef(IntPtr jobject)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4A71ED0", Offset = "0x4A71ED0", VA = "0x4A71ED0", Slot = "1")]
	~GlobalJavaObjectRef()
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x4A71FE0", Offset = "0x4A71FE0", VA = "0x4A71FE0")]
	public static implicit operator IntPtr(GlobalJavaObjectRef obj)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4A71F90", Offset = "0x4A71F90", VA = "0x4A71F90")]
	public void Dispose()
	{
	}
}
