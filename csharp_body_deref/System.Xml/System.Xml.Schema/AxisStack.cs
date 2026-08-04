// ==================== AoTTG2 cross-reference ====================
// Type: System.Xml.Schema.AxisStack
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x483DF70", Offset = "0x483DF70", VA = "0x483DF70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E8")]
	internal int Length
	{
		[Token(Token = "0x6000F29")]
		[Address(RVA = "0x483DF80", Offset = "0x483DF80", VA = "0x483DF80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x483DFB0", Offset = "0x483DFB0", VA = "0x483DFB0")]
	public AxisStack(ForwardAxis faxis, ActiveAxis parent)
	{
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x483E070", Offset = "0x483E070", VA = "0x483E070")]
	internal void Push(int depth)
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x483E110", Offset = "0x483E110", VA = "0x483E110")]
	internal void Pop()
	{
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x483DF00", Offset = "0x483DF00", VA = "0x483DF00")]
	internal static bool Equal(string thisname, string thisURN, string name, string URN)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x483E150", Offset = "0x483E150", VA = "0x483E150")]
	internal void MoveToParent(string name, string URN, int depth)
	{
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x483E320", Offset = "0x483E320", VA = "0x483E320")]
	internal bool MoveToChild(string name, string URN, int depth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x483E4B0", Offset = "0x483E4B0", VA = "0x483E4B0")]
	internal bool MoveToAttribute(string name, string URN, int depth)
	{
		return default(bool);
	}
}
