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
		[Token(Token = "0x40009D7")]
		[FieldOffset(Offset = "0x0")]
		public static readonly IEqualityComparer<object> Instance;

		[Token(Token = "0x60012E6")]
		[Address(RVA = "0x4D8B550", Offset = "0x4D8B550", VA = "0x4D8B550", Slot = "4")]
		private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EEquals(object x, object y)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x4D8B560", Offset = "0x4D8B560", VA = "0x4D8B560", Slot = "5")]
		private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EGetHashCode(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x4D8B570", Offset = "0x4D8B570", VA = "0x4D8B570")]
		public ObjectReferenceEqualityComparator()
		{
		}
	}

	[Token(Token = "0x40009D3")]
	[FieldOffset(Offset = "0x10")]
	private Dictionary<object, int> _objectIds;

	[Token(Token = "0x40009D4")]
	[FieldOffset(Offset = "0x18")]
	private int _nextId;

	[Token(Token = "0x40009D5")]
	[FieldOffset(Offset = "0x20")]
	private Dictionary<int, object> _marked;

	[Token(Token = "0x40009D6")]
	[FieldOffset(Offset = "0x28")]
	private int _depth;

	[Token(Token = "0x60012DE")]
	[Address(RVA = "0x4D8AF60", Offset = "0x4D8AF60", VA = "0x4D8AF60")]
	public void Enter()
	{
	}

	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x4D8AF70", Offset = "0x4D8AF70", VA = "0x4D8AF70")]
	public bool Exit()
	{
		return default(bool);
	}

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x4D8B0F0", Offset = "0x4D8B0F0", VA = "0x4D8B0F0")]
	public object GetReferenceObject(int id)
	{
		return null;
	}

	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x4D8B1F0", Offset = "0x4D8B1F0", VA = "0x4D8B1F0")]
	public void AddReferenceWithId(int id, object reference)
	{
	}

	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x4D8B240", Offset = "0x4D8B240", VA = "0x4D8B240")]
	public int GetReferenceId(object item)
	{
		return default(int);
	}

	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x4D8B2E0", Offset = "0x4D8B2E0", VA = "0x4D8B2E0")]
	public bool IsReference(object item)
	{
		return default(bool);
	}

	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x4D8B340", Offset = "0x4D8B340", VA = "0x4D8B340")]
	public void MarkSerialized(object item)
	{
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x4D8B450", Offset = "0x4D8B450", VA = "0x4D8B450")]
	public fsCyclicReferenceManager()
	{
	}
}
