using System.Collections;
using Il2CppDummyDll;

namespace System.Xml.Schema;

[Token(Token = "0x200015F")]
internal class ActiveAxis
{
	[Token(Token = "0x4000722")]
	[FieldOffset(Offset = "0x10")]
	private int _currentDepth;

	[Token(Token = "0x4000723")]
	[FieldOffset(Offset = "0x14")]
	private bool _isActive;

	[Token(Token = "0x4000724")]
	[FieldOffset(Offset = "0x18")]
	private Asttree _axisTree;

	[Token(Token = "0x4000725")]
	[FieldOffset(Offset = "0x20")]
	private ArrayList _axisStack;

	[Token(Token = "0x170003E9")]
	public int CurrentDepth
	{
		[Token(Token = "0x6000F31")]
		[Address(RVA = "0x4500F20", Offset = "0x4500F20", VA = "0x4500F20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000F32")]
	[Address(RVA = "0x4500F30", Offset = "0x4500F30", VA = "0x4500F30")]
	internal void Reactivate()
	{
	}

	[Token(Token = "0x6000F33")]
	[Address(RVA = "0x4500F40", Offset = "0x4500F40", VA = "0x4500F40")]
	internal ActiveAxis(Asttree axisTree)
	{
	}

	[Token(Token = "0x6000F34")]
	[Address(RVA = "0x4501100", Offset = "0x4501100", VA = "0x4501100")]
	public bool MoveToStartElement(string localname, string URN)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F35")]
	[Address(RVA = "0x4501270", Offset = "0x4501270", VA = "0x4501270", Slot = "4")]
	public virtual bool EndElement(string localname, string URN)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F36")]
	[Address(RVA = "0x4501380", Offset = "0x4501380", VA = "0x4501380")]
	public bool MoveToAttribute(string localname, string URN)
	{
		return default(bool);
	}
}
