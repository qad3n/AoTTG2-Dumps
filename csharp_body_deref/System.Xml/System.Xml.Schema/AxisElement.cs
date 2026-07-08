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
		[Address(RVA = "0x45004A0", Offset = "0x45004A0", VA = "0x45004A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000F24")]
	[Address(RVA = "0x45004B0", Offset = "0x45004B0", VA = "0x45004B0")]
	internal AxisElement(DoubleLinkAxis node, int depth)
	{
	}

	[Token(Token = "0x6000F25")]
	[Address(RVA = "0x45004F0", Offset = "0x45004F0", VA = "0x45004F0")]
	internal void SetDepth(int depth)
	{
	}

	[Token(Token = "0x6000F26")]
	[Address(RVA = "0x4500500", Offset = "0x4500500", VA = "0x4500500")]
	internal void MoveToParent(int depth, ForwardAxis parent)
	{
	}

	[Token(Token = "0x6000F27")]
	[Address(RVA = "0x4500600", Offset = "0x4500600", VA = "0x4500600")]
	internal bool MoveToChild(string name, string URN, int depth, ForwardAxis parent)
	{
		return default(bool);
	}
}
