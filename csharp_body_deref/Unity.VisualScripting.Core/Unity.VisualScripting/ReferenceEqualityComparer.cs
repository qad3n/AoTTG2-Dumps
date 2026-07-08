using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x20001C0")]
public class ReferenceEqualityComparer : IEqualityComparer<object>
{
	[Token(Token = "0x4000922")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ReferenceEqualityComparer Instance;

	[Token(Token = "0x600109A")]
	[Address(RVA = "0x4A3C5B0", Offset = "0x4A3C5B0", VA = "0x4A3C5B0")]
	private ReferenceEqualityComparer()
	{
	}

	[Token(Token = "0x600109B")]
	[Address(RVA = "0x4A3C5C0", Offset = "0x4A3C5C0", VA = "0x4A3C5C0", Slot = "4")]
	private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EEquals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x600109C")]
	[Address(RVA = "0x4A3C5D0", Offset = "0x4A3C5D0", VA = "0x4A3C5D0", Slot = "5")]
	private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EGetHashCode(object a)
	{
		return default(int);
	}

	[Token(Token = "0x600109D")]
	[Address(RVA = "0x4A3C640", Offset = "0x4A3C640", VA = "0x4A3C640")]
	public static int GetHashCode(object a)
	{
		return default(int);
	}
}
[Token(Token = "0x20001C1")]
public class ReferenceEqualityComparer<T> : IEqualityComparer<T>
{
	[Token(Token = "0x4000923")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ReferenceEqualityComparer<T> Instance;

	[Token(Token = "0x600109F")]
	private ReferenceEqualityComparer()
	{
	}

	[Token(Token = "0x60010A0")]
	private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CT_003E_002EEquals(T a, T b)
	{
		return default(bool);
	}

	[Token(Token = "0x60010A1")]
	private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CT_003E_002EGetHashCode(T a)
	{
		return default(int);
	}

	[Token(Token = "0x60010A2")]
	public static int GetHashCode(T a)
	{
		return default(int);
	}
}
