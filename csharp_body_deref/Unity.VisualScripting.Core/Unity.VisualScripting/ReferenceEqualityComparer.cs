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
	[Token(Token = "0x4000920")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ReferenceEqualityComparer Instance;

	[Token(Token = "0x60010A7")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	private ReferenceEqualityComparer()
	{
	}

	[Token(Token = "0x60010A8")]
	[Address(RVA = "0xC7E810", Offset = "0xC7CE10", VA = "0x180C7E810", Slot = "4")]
	private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EEquals(object a, object b)
	{
		return default(bool);
	}

	[Token(Token = "0x60010A9")]
	[Address(RVA = "0x2E555E0", Offset = "0x2E53BE0", VA = "0x182E555E0", Slot = "5")]
	private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EGetHashCode(object a)
	{
		return default(int);
	}

	[Token(Token = "0x60010AA")]
	[Address(RVA = "0xC7E720", Offset = "0xC7CD20", VA = "0x180C7E720")]
	public static int GetHashCode(object a)
	{
		return default(int);
	}
}
[Token(Token = "0x20001C1")]
public class ReferenceEqualityComparer<T> : IEqualityComparer<T>
{
	[Token(Token = "0x4000921")]
	[FieldOffset(Offset = "0x0")]
	public static readonly ReferenceEqualityComparer<T> Instance;

	[Token(Token = "0x60010AC")]
	private ReferenceEqualityComparer()
	{
	}

	[Token(Token = "0x60010AD")]
	private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CT_003E_002EEquals(T a, T b)
	{
		return default(bool);
	}

	[Token(Token = "0x60010AE")]
	private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CT_003E_002EGetHashCode(T a)
	{
		return default(int);
	}

	[Token(Token = "0x60010AF")]
	public static int GetHashCode(T a)
	{
		return default(int);
	}
}
