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
	[Address(RVA = "0x6CBB150", Offset = "0x6CBA150", VA = "0x6CBB150")]
	public SafeHandleAccess(IntPtr ptr)
	{
	}

	[Token(Token = "0x60012D3")]
	[Address(RVA = "0x6CBB160", Offset = "0x6CBA160", VA = "0x6CBB160")]
	public bool IsNull()
	{
		return default(bool);
	}

	[Token(Token = "0x60012D4")]
	[Address(RVA = "0x6CBB170", Offset = "0x6CBA170", VA = "0x6CBB170")]
	public static implicit operator IntPtr(SafeHandleAccess a)
	{
		return default(IntPtr);
	}
}
