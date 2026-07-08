using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200016C")]
internal class SelectorActiveAxis : ActiveAxis
{
	[Token(Token = "0x400075E")]
	[FieldOffset(Offset = "0x28")]
	private ConstraintStruct cs;

	[Token(Token = "0x400075F")]
	[FieldOffset(Offset = "0x30")]
	private ArrayList KSs;

	[Token(Token = "0x4000760")]
	[FieldOffset(Offset = "0x38")]
	private int KSpointer;

	[Token(Token = "0x1700040A")]
	public int lastDepth
	{
		[Token(Token = "0x6000FA2")]
		[Address(RVA = "0x45061D0", Offset = "0x45061D0", VA = "0x45061D0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000FA3")]
	[Address(RVA = "0x45060F0", Offset = "0x45060F0", VA = "0x45060F0")]
	public SelectorActiveAxis(Asttree axisTree, ConstraintStruct cs)
	{
	}

	[Token(Token = "0x6000FA4")]
	[Address(RVA = "0x4506260", Offset = "0x4506260", VA = "0x4506260", Slot = "4")]
	public override bool EndElement(string localname, string URN)
	{
		return default(bool);
	}

	[Token(Token = "0x6000FA5")]
	[Address(RVA = "0x4506290", Offset = "0x4506290", VA = "0x4506290")]
	public int PushKS(int errline, int errcol)
	{
		return default(int);
	}

	[Token(Token = "0x6000FA6")]
	[Address(RVA = "0x4506780", Offset = "0x4506780", VA = "0x4506780")]
	public KeySequence PopKS()
	{
		return null;
	}
}
