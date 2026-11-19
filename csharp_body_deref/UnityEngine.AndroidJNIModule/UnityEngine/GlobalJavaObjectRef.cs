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

[Token(Token = "0x2000009")]
internal class GlobalJavaObjectRef
{
	[Token(Token = "0x400000F")]
	[FieldOffset(Offset = "0x10")]
	private bool m_disposed;

	[Token(Token = "0x4000010")]
	[FieldOffset(Offset = "0x18")]
	protected IntPtr m_jobject;

	[Token(Token = "0x60000E1")]
	[Address(RVA = "0x689E860", Offset = "0x689D860", VA = "0x689E860")]
	public GlobalJavaObjectRef(IntPtr jobject)
	{
	}

	[Token(Token = "0x60000E2")]
	[Address(RVA = "0x689E8C0", Offset = "0x689D8C0", VA = "0x689E8C0", Slot = "1")]
	~GlobalJavaObjectRef()
	{
	}

	[Token(Token = "0x60000E3")]
	[Address(RVA = "0x689E9D0", Offset = "0x689D9D0", VA = "0x689E9D0")]
	public static implicit operator IntPtr(GlobalJavaObjectRef obj)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x60000E4")]
	[Address(RVA = "0x689E980", Offset = "0x689D980", VA = "0x689E980")]
	public void Dispose()
	{
	}
}
