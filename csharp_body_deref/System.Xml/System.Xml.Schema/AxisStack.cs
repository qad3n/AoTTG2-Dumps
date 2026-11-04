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
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170003E8")]
	internal int Length
	{
		[Token(Token = "0x6000F29")]
		[Address(RVA = "0x1AB8C80", Offset = "0x1AB7280", VA = "0x181AB8C80")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F2A")]
	[Address(RVA = "0x2776EF0", Offset = "0x27754F0", VA = "0x182776EF0")]
	public AxisStack(ForwardAxis faxis, ActiveAxis parent)
	{
	}

	[Token(Token = "0x6000F2B")]
	[Address(RVA = "0x2776E40", Offset = "0x2775440", VA = "0x182776E40")]
	internal void Push(int depth)
	{
	}

	[Token(Token = "0x6000F2C")]
	[Address(RVA = "0x2776DF0", Offset = "0x27753F0", VA = "0x182776DF0")]
	internal void Pop()
	{
	}

	[Token(Token = "0x6000F2D")]
	[Address(RVA = "0x2776560", Offset = "0x2774B60", VA = "0x182776560")]
	internal static bool Equal(string thisname, string thisURN, string name, string URN)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F2E")]
	[Address(RVA = "0x2776AF0", Offset = "0x27750F0", VA = "0x182776AF0")]
	internal void MoveToParent(string name, string URN, int depth)
	{
	}

	[Token(Token = "0x6000F2F")]
	[Address(RVA = "0x27767F0", Offset = "0x2774DF0", VA = "0x1827767F0")]
	internal bool MoveToChild(string name, string URN, int depth)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F30")]
	[Address(RVA = "0x27765E0", Offset = "0x2774BE0", VA = "0x1827765E0")]
	internal bool MoveToAttribute(string name, string URN, int depth)
	{
		return default(bool);
	}
}
