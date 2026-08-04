// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.GlobalJavaObjectRef
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4D99690", Offset = "0x4D99690", VA = "0x4D99690")]
	public GlobalJavaObjectRef(IntPtr jobject)
	{
	}

	[Token(Token = "0x60000CF")]
	[Address(RVA = "0x4D996F0", Offset = "0x4D996F0", VA = "0x4D996F0", Slot = "1")]
	~GlobalJavaObjectRef()
	{
	}

	[Token(Token = "0x60000D0")]
	[Address(RVA = "0x4D99800", Offset = "0x4D99800", VA = "0x4D99800")]
	public static implicit operator IntPtr(GlobalJavaObjectRef obj)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000D1")]
	[Address(RVA = "0x4D997B0", Offset = "0x4D997B0", VA = "0x4D997B0")]
	public void Dispose()
	{
	}
}
