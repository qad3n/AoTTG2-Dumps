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

[Token(Token = "0x2000004")]
internal class GlobalJavaObjectRef
{
	[Token(Token = "0x4000002")]
	[FieldOffset(Offset = "0x10")]
	private bool m_disposed;

	[Token(Token = "0x4000003")]
	[FieldOffset(Offset = "0x18")]
	protected IntPtr m_jobject;

	[Token(Token = "0x6000005")]
	[Address(RVA = "0x2EA5690", Offset = "0x2EA3C90", VA = "0x182EA5690")]
	public GlobalJavaObjectRef(IntPtr jobject)
	{
	}

	[Token(Token = "0x6000006")]
	[Address(RVA = "0x2EA5600", Offset = "0x2EA3C00", VA = "0x182EA5600", Slot = "1")]
	~GlobalJavaObjectRef()
	{
	}

	[Token(Token = "0x6000007")]
	[Address(RVA = "0x111BC10", Offset = "0x111A210", VA = "0x18111BC10")]
	public static implicit operator IntPtr(GlobalJavaObjectRef obj)
	{
		return default(IntPtr);
	}

	[Token(Token = "0x6000008")]
	[Address(RVA = "0x2EA55B0", Offset = "0x2EA3BB0", VA = "0x182EA55B0")]
	public void Dispose()
	{
	}
}
