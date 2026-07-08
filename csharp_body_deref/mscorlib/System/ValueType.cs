using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace System;

[Serializable]
[Token(Token = "0x20001B2")]
[ComVisible(true)]
public abstract class ValueType
{
	[Token(Token = "0x6001096")]
	[Address(RVA = "0x5037BC0", Offset = "0x5037BC0", VA = "0x5037BC0")]
	protected ValueType()
	{
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6001097")]
	[Address(RVA = "0x5037BD0", Offset = "0x5037BD0", VA = "0x5037BD0")]
	private static extern bool InternalEquals(object o1, object o2, out object[] fields);

	[Token(Token = "0x6001098")]
	[Address(RVA = "0x5037BE0", Offset = "0x5037BE0", VA = "0x5037BE0")]
	internal static bool DefaultEquals(object o1, object o2)
	{
		return default(bool);
	}

	[Token(Token = "0x6001099")]
	[Address(RVA = "0x5037DB0", Offset = "0x5037DB0", VA = "0x5037DB0", Slot = "0")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x600109A")]
	[Address(RVA = "0x5037DC0", Offset = "0x5037DC0", VA = "0x5037DC0")]
	internal static extern int InternalGetHashCode(object o, out object[] fields);

	[Token(Token = "0x600109B")]
	[Address(RVA = "0x5037DD0", Offset = "0x5037DD0", VA = "0x5037DD0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600109C")]
	[Address(RVA = "0x5037E50", Offset = "0x5037E50", VA = "0x5037E50", Slot = "3")]
	public override string ToString()
	{
		return null;
	}
}
