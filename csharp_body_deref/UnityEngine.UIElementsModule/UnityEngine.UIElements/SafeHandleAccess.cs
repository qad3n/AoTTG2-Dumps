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

[Token(Token = "0x200024B")]
internal struct SafeHandleAccess
{
	[Token(Token = "0x4000868")]
	[FieldOffset(Offset = "0x0")]
	private IntPtr m_Handle;

	[Token(Token = "0x6000F18")]
	[Address(RVA = "0x50705F0", Offset = "0x50705F0", VA = "0x50705F0")]
	public SafeHandleAccess(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x5070600", Offset = "0x5070600", VA = "0x5070600")]
	public bool IsNull()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x5070610", Offset = "0x5070610", VA = "0x5070610")]
	public static implicit operator IntPtr(SafeHandleAccess a)
	{
		return default(IntPtr);
	}
}
