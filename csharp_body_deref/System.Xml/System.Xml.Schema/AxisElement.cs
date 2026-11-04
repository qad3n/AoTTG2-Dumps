// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.AxisElement
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200015D")]
internal class AxisElement
{
	[Token(Token = "0x400071B")]
	[FieldOffset(Offset = "0x10")]
	internal DoubleLinkAxis curNode;

	[Token(Token = "0x400071C")]
	[FieldOffset(Offset = "0x18")]
	internal int rootDepth;

	[Token(Token = "0x400071D")]
	[FieldOffset(Offset = "0x1C")]
	internal int curDepth;

	[Token(Token = "0x400071E")]
	[FieldOffset(Offset = "0x20")]
	internal bool isMatch;

	[Token(Token = "0x170003E6")]
	internal DoubleLinkAxis CurNode
	{
		[Token(Token = "0x6000F23")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x2776510", Offset = "0x2774B10", VA = "0x182776510")]
	internal AxisElement(DoubleLinkAxis node, int depth)
	{
	}

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x2776500", Offset = "0x2774B00", VA = "0x182776500")]
	internal void SetDepth(int depth)
	{
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x27763B0", Offset = "0x27749B0", VA = "0x1827763B0")]
	internal void MoveToParent(int depth, ForwardAxis parent)
	{
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x2776200", Offset = "0x2774800", VA = "0x182776200")]
	internal bool MoveToChild(string name, string URN, int depth, ForwardAxis parent)
	{
		return default(bool);
	}
}
