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
		[Address(RVA = "0x4A643A0", Offset = "0x4A643A0", VA = "0x4A643A0", Slot = "4")]
		private bool System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EEquals(object x, object y)
		{
			return default(bool);
		}

		[Token(Token = "0x60012E7")]
		[Address(RVA = "0x4A643B0", Offset = "0x4A643B0", VA = "0x4A643B0", Slot = "5")]
		private int System_002ECollections_002EGeneric_002EIEqualityComparer_003CSystem_002EObject_003E_002EGetHashCode(object obj)
		{
			return default(int);
		}

		[Token(Token = "0x60012E8")]
		[Address(RVA = "0x4A643C0", Offset = "0x4A643C0", VA = "0x4A643C0")]
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
	[Address(RVA = "0x4A5EBB0", Offset = "0x4A5EBB0", VA = "0x4A5EBB0")]
	public void Enter()
	{
	}

	[Token(Token = "0x60012DF")]
	[Address(RVA = "0x4A64220", Offset = "0x4A64220", VA = "0x4A64220")]
	public bool Exit()
	{
		return default(bool);
	}

	[Token(Token = "0x60012E0")]
	[Address(RVA = "0x4A60C10", Offset = "0x4A60C10", VA = "0x4A60C10")]
	public object GetReferenceObject(int id)
	{
		return null;
	}

	[Token(Token = "0x60012E1")]
	[Address(RVA = "0x4A61EA0", Offset = "0x4A61EA0", VA = "0x4A61EA0")]
	public void AddReferenceWithId(int id, object reference)
	{
	}

	[Token(Token = "0x60012E2")]
	[Address(RVA = "0x4A5EFF0", Offset = "0x4A5EFF0", VA = "0x4A5EFF0")]
	public int GetReferenceId(object item)
	{
		return default(int);
	}

	[Token(Token = "0x60012E3")]
	[Address(RVA = "0x4A5EF90", Offset = "0x4A5EF90", VA = "0x4A5EF90")]
	public bool IsReference(object item)
	{
		return default(bool);
	}

	[Token(Token = "0x60012E4")]
	[Address(RVA = "0x4A5F2D0", Offset = "0x4A5F2D0", VA = "0x4A5F2D0")]
	public void MarkSerialized(object item)
	{
	}

	[Token(Token = "0x60012E5")]
	[Address(RVA = "0x4A5D0A0", Offset = "0x4A5D0A0", VA = "0x4A5D0A0")]
	public fsCyclicReferenceManager()
	{
	}
}
