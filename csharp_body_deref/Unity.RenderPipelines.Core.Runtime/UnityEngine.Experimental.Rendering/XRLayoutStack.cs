// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.Experimental.Rendering.XRLayoutStack
// Update status: NEW in this game update
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
		[Address(RVA = "0x2AC8BB0", Offset = "0x2AC71B0", VA = "0x182AC8BB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000031")]
	[Address(RVA = "0x2AC8860", Offset = "0x2AC6E60", VA = "0x182AC8860")]
	public XRLayout New()
	{
		return null;
	}

	[Token(Token = "0x6000033")]
	[Address(RVA = "0x2AC8900", Offset = "0x2AC6F00", VA = "0x182AC8900")]
	public void Release()
	{
	}

	[Token(Token = "0x6000034")]
	[Address(RVA = "0x2AC87D0", Offset = "0x2AC6DD0", VA = "0x182AC87D0", Slot = "4")]
	public void Dispose()
	{
	}

	[Token(Token = "0x6000035")]
	[Address(RVA = "0x2AC8B30", Offset = "0x2AC7130", VA = "0x182AC8B30")]
	public XRLayoutStack()
	{
	}
}
