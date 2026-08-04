// ==================== AoTTG2 cross-reference ====================
// Type: System.Data.RBTreeError
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Data;

[Token(Token = "0x2000071")]
internal enum RBTreeError
{
	[Token(Token = "0x4000257")]
	InvalidPageSize = 1,
	[Token(Token = "0x4000258")]
	PagePositionInSlotInUse = 3,
	[Token(Token = "0x4000259")]
	NoFreeSlots = 4,
	[Token(Token = "0x400025A")]
	InvalidStateinInsert = 5,
	[Token(Token = "0x400025B")]
	InvalidNextSizeInDelete = 7,
	[Token(Token = "0x400025C")]
	InvalidStateinDelete = 8,
	[Token(Token = "0x400025D")]
	InvalidNodeSizeinDelete = 9,
	[Token(Token = "0x400025E")]
	InvalidStateinEndDelete = 10,
	[Token(Token = "0x400025F")]
	CannotRotateInvalidsuccessorNodeinDelete = 11,
	[Token(Token = "0x4000260")]
	IndexOutOFRangeinGetNodeByIndex = 13,
	[Token(Token = "0x4000261")]
	RBDeleteFixup = 14,
	[Token(Token = "0x4000262")]
	UnsupportedAccessMethod1 = 15,
	[Token(Token = "0x4000263")]
	UnsupportedAccessMethod2 = 16,
	[Token(Token = "0x4000264")]
	UnsupportedAccessMethodInNonNillRootSubtree = 17,
	[Token(Token = "0x4000265")]
	AttachedNodeWithZerorbTreeNodeId = 18,
	[Token(Token = "0x4000266")]
	CompareNodeInDataRowTree = 19,
	[Token(Token = "0x4000267")]
	CompareSateliteTreeNodeInDataRowTree = 20,
	[Token(Token = "0x4000268")]
	NestedSatelliteTreeEnumerator = 21
}
