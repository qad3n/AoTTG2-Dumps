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
		[Address(RVA = "0x6871E50", Offset = "0x6870E50", VA = "0x6871E50", Slot = "4")]
		private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EEquals(object x, object y)
		{
			return default(bool);
		}

		[Token(Token = "0x60012F4")]
		[Address(RVA = "0x6871E60", Offset = "0x6870E60", VA = "0x6871E60", Slot = "5")]
		private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EGetHashCode(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x60012F5")]
		[Address(RVA = "0x6871E70", Offset = "0x6870E70", VA = "0x6871E70")]
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
	[Address(RVA = "0x686CAE0", Offset = "0x686BAE0", VA = "0x686CAE0")]
	public void Enter()
	{
	}

	[Token(Token = "0x60012EC")]
	[Address(RVA = "0x6871CE0", Offset = "0x6870CE0", VA = "0x6871CE0")]
	public bool Exit()
	{
		return default(bool);
	}

	[Token(Token = "0x60012ED")]
	[Address(RVA = "0x686EA00", Offset = "0x686DA00", VA = "0x686EA00")]
	public object GetReferenceObject(int id)
	{
		return null;
	}

	[Token(Token = "0x60012EE")]
	[Address(RVA = "0x686FC40", Offset = "0x686EC40", VA = "0x686FC40")]
	public void AddReferenceWithId(int id, object reference)
	{
	}

	[Token(Token = "0x60012EF")]
	[Address(RVA = "0x686CF20", Offset = "0x686BF20", VA = "0x686CF20")]
	public int GetReferenceId(object item)
	{
		return default(int);
	}

	[Token(Token = "0x60012F0")]
	[Address(RVA = "0x686CEC0", Offset = "0x686BEC0", VA = "0x686CEC0")]
	public bool IsReference(object item)
	{
		return default(bool);
	}

	[Token(Token = "0x60012F1")]
	[Address(RVA = "0x686D200", Offset = "0x686C200", VA = "0x686D200")]
	public void MarkSerialized(object item)
	{
	}

	[Token(Token = "0x60012F2")]
	[Address(RVA = "0x686B130", Offset = "0x686A130", VA = "0x686B130")]
	public fsCyclicReferenceManager()
	{
	}
}
