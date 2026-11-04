// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.FullSerializer.Internal.fsCyclicReferenceManager
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace Unity.VisualScripting.FullSerializer.Internal;

[Token(Token = "0x2000219")]
public class fsCyclicReferenceManager
{
	[Token(Token = "0x200021A")]
	private class ObjectReferenceEqualityComparator : IEqualityComparer<object>
	{
		[Token(Token = "0x40009D5")]
		[FieldOffset(Offset = "0x0")]
		public static readonly IEqualityComparer<object> Instance;

		[Token(Token = "0x60012F3")]
		[Address(RVA = "0xC7E810", Offset = "0xC7CE10", VA = "0x180C7E810", Slot = "4")]
		private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EEquals(object x, object y)
		{
			return default(bool);
		}

		[Token(Token = "0x60012F4")]
		[Address(RVA = "0x1C51D90", Offset = "0x1C50390", VA = "0x181C51D90", Slot = "5")]
		private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EGetHashCode(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x60012F5")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public ObjectReferenceEqualityComparator()
		{
		}
	}

	[Token(Token = "0x40009D1")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<object, int> _objectIds;

	[Token(Token = "0x40009D2")]
	[FieldOffset(Offset = "0x18")]
	private int _nextId;

	[Token(Token = "0x40009D3")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, object> _marked;

	[Token(Token = "0x40009D4")]
	[FieldOffset(Offset = "0x28")]
	private int _depth;

	[Token(Token = "0x60012EB")]
	[Address(RVA = "0xE47CB0", Offset = "0xE462B0", VA = "0x180E47CB0")]
	public void Enter()
	{
	}

	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x2E705A0", Offset = "0x2E6EBA0", VA = "0x182E705A0")]
	public bool Exit()
	{
		return default(bool);
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x2E707B0", Offset = "0x2E6EDB0", VA = "0x182E707B0")]
	public object GetReferenceObject(int id)
	{
		return null;
	}

	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x2E70530", Offset = "0x2E6EB30", VA = "0x182E70530")]
	public void AddReferenceWithId(int id, object reference)
	{
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x2E70710", Offset = "0x2E6ED10", VA = "0x182E70710")]
	public int GetReferenceId(object item)
	{
		return default(int);
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x2E708B0", Offset = "0x2E6EEB0", VA = "0x182E708B0")]
	public bool IsReference(object item)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x2E70920", Offset = "0x2E6EF20", VA = "0x182E70920")]
	public void MarkSerialized(object item)
	{
	}

	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x2E70A50", Offset = "0x2E6F050", VA = "0x182E70A50")]
	public fsCyclicReferenceManager()
	{
	}
}
