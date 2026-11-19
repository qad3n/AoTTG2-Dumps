// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRLayoutStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.Experimental.Rendering;

[Token(Token = "0x200000C")]
internal class XRLayoutStack : IDisposable
{
	[Token(Token = "0x4000032")]
	[FieldOffset(Offset = "0x10")]
	private readonly Stack<XRLayout> m_Stack;

	[Token(Token = "0x17000009")]
	public XRLayout top
	{
		[Token(Token = "0x6000032")]
		[Address(RVA = "0x64AA8B0", Offset = "0x64A98B0", VA = "0x64AA8B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x64AA810", Offset = "0x64A9810", VA = "0x64AA810")]
	public XRLayout New()
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x64AA8F0", Offset = "0x64A98F0", VA = "0x64AA8F0")]
	public void Release()
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x64AA9F0", Offset = "0x64A99F0", VA = "0x64AA9F0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x64AAA70", Offset = "0x64A9A70", VA = "0x64AAA70")]
	public XRLayoutStack()
	{
	}
}
