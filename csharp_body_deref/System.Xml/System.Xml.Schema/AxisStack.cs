using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200015E")]
internal class AxisStack
{
	[Token(Token = "0x400071F")]
	[FieldOffset(Offset = "0x10")]
	private ArrayList _stack;

	[Token(Token = "0x4000720")]
	[FieldOffset(Offset = "0x18")]
	private ForwardAxis _subtree;

	[Token(Token = "0x4000721")]
	[FieldOffset(Offset = "0x20")]
	private ActiveAxis _parent;

	[Token(Token = "0x170003E7")]
	internal ForwardAxis Subtree
	{
		[Token(Token = "0x6000F28")]
		[Address(RVA = "0x4500810", Offset = "0x4500810", VA = "0x4500810")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E8")]
	internal int Length
	{
		[Token(Token = "0x6000F29")]
		[Address(RVA = "0x4500820", Offset = "0x4500820", VA = "0x4500820")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x4500850", Offset = "0x4500850", VA = "0x4500850")]
	public AxisStack(ForwardAxis faxis, ActiveAxis parent)
	{
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x4500910", Offset = "0x4500910", VA = "0x4500910")]
	internal void Push(int depth)
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x45009B0", Offset = "0x45009B0", VA = "0x45009B0")]
	internal void Pop()
	{
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x45007A0", Offset = "0x45007A0", VA = "0x45007A0")]
	internal static bool Equal(string thisname, string thisURN, string name, string URN)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x45009F0", Offset = "0x45009F0", VA = "0x45009F0")]
	internal void MoveToParent(string name, string URN, int depth)
	{
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x4500BC0", Offset = "0x4500BC0", VA = "0x4500BC0")]
	internal bool MoveToChild(string name, string URN, int depth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x4500D50", Offset = "0x4500D50", VA = "0x4500D50")]
	internal bool MoveToAttribute(string name, string URN, int depth)
	{
		return default(bool);
	}
}
