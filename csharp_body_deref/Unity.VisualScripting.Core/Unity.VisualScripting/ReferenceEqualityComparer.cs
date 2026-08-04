// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.ReferenceEqualityComparer
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
	[Address(RVA = "0x4D61410", Offset = "0x4D61410", VA = "0x4D61410")]
	private ReferenceEqualityComparer()
	{
	}

	[Token(Token = "0x600109B")]
	[Address(RVA = "0x4D61420", Offset = "0x4D61420", VA = "0x4D61420", Slot = "4")]
	private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EEquals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x600109C")]
	[Address(RVA = "0x4D61430", Offset = "0x4D61430", VA = "0x4D61430", Slot = "5")]
	private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EGetHashCode(object a)
	{
		return default(int);
	}

	[Token(Token = "0x600109D")]
	[Address(RVA = "0x4D614A0", Offset = "0x4D614A0", VA = "0x4D614A0")]
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
