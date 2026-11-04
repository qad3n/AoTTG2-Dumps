// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.SafeHandleAccess
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x20002C7")]
internal struct SafeHandleAccess
{
	[Token(Token = "0x4000AB0")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr m_Handle;

	[Token(Token = "0x60012D2")]
	[Address(RVA = "0xB546E0", Offset = "0xB52CE0", VA = "0x180B546E0")]
	public SafeHandleAccess(IntPtr ptr)
	{
	}

	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x32B62B0", Offset = "0x32B48B0", VA = "0x1832B62B0")]
	public bool IsNull()
	{
		return default(bool);
	}

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x32B62C0", Offset = "0x32B48C0", VA = "0x1832B62C0")]
	public static implicit operator IntPtr(SafeHandleAccess a)
	{
		return default(IntPtr);
	}
}
