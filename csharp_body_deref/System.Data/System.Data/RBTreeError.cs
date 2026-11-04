// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.RBTreeError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x200007B")]
internal enum RBTreeError
{
	[Token(Token = "0x400026A")]
	InvalidPageSize = 1,
	[Token(Token = "0x400026B")]
	PagePositionInSlotInUse = 3,
	[Token(Token = "0x400026C")]
	NoFreeSlots = 4,
	[Token(Token = "0x400026D")]
	InvalidStateinInsert = 5,
	[Token(Token = "0x400026E")]
	InvalidNextSizeInDelete = 7,
	[Token(Token = "0x400026F")]
	InvalidStateinDelete = 8,
	[Token(Token = "0x4000270")]
	InvalidNodeSizeinDelete = 9,
	[Token(Token = "0x4000271")]
	InvalidStateinEndDelete = 10,
	[Token(Token = "0x4000272")]
	CannotRotateInvalidsuccessorNodeinDelete = 11,
	[Token(Token = "0x4000273")]
	IndexOutOFRangeinGetNodeByIndex = 13,
	[Token(Token = "0x4000274")]
	RBDeleteFixup = 14,
	[Token(Token = "0x4000275")]
	UnsupportedAccessMethod1 = 15,
	[Token(Token = "0x4000276")]
	UnsupportedAccessMethod2 = 16,
	[Token(Token = "0x4000277")]
	UnsupportedAccessMethodInNonNillRootSubtree = 17,
	[Token(Token = "0x4000278")]
	AttachedNodeWithZerorbTreeNodeId = 18,
	[Token(Token = "0x4000279")]
	CompareNodeInDataRowTree = 19,
	[Token(Token = "0x400027A")]
	CompareSateliteTreeNodeInDataRowTree = 20,
	[Token(Token = "0x400027B")]
	NestedSatelliteTreeEnumerator = 21
}
