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
	[Address(RVA = "0x4D48CC0", Offset = "0x4D48CC0", VA = "0x4D48CC0")]
	public SafeHandleAccess(IntPtr ptr)
	{
	}

	[Token(Token = "0x6000F19")]
	[Address(RVA = "0x4D48CD0", Offset = "0x4D48CD0", VA = "0x4D48CD0")]
	public bool IsNull()
	{
		return default(bool);
	}

	[Token(Token = "0x6000F1A")]
	[Address(RVA = "0x4D48CE0", Offset = "0x4D48CE0", VA = "0x4D48CE0")]
	public static implicit operator IntPtr(SafeHandleAccess a)
	{
		return default(IntPtr);
	}
}
