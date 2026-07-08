using System.Collections;
using System.Globalization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x200007A")]
internal class InvariantComparer : IComparer
{
	[Token(Token = "0x4000166")]
	[FieldOffset(Offset = "0x10")]
	private CompareInfo m_compareInfo;

	[Token(Token = "0x4000167")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly InvariantComparer Default;

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x45D3C90", Offset = "0x45D3C90", VA = "0x45D3C90")]
	internal InvariantComparer()
	{
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x45D3D10", Offset = "0x45D3D10", VA = "0x45D3D10", Slot = "4")]
	public int Compare(object a, object b)
	{
		return default(int);
	}
}
