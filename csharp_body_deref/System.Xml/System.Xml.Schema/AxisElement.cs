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
		[Address(RVA = "0x613CAB0", Offset = "0x613BAB0", VA = "0x613CAB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x613CAC0", Offset = "0x613BAC0", VA = "0x613CAC0")]
	internal AxisElement(DoubleLinkAxis node, int depth)
	{
	}

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x613CB00", Offset = "0x613BB00", VA = "0x613CB00")]
	internal void SetDepth(int depth)
	{
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x613CB10", Offset = "0x613BB10", VA = "0x613CB10")]
	internal void MoveToParent(int depth, ForwardAxis parent)
	{
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x613CC10", Offset = "0x613BC10", VA = "0x613CC10")]
	internal bool MoveToChild(string name, string URN, int depth, ForwardAxis parent)
	{
		return default(bool);
	}
}
