using System.Collections.Generic;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000120")]
internal readonly struct TreeViewItemWrapper
{
	[Token(Token = "0x40004BB")]
	[FieldOffset(Offset = "0x0")]
	public readonly TreeItem item;

	[Token(Token = "0x40004BC")]
	[FieldOffset(Offset = "0x10")]
	public readonly int depth;

	[Token(Token = "0x1700015C")]
	public int id
	{
		[Token(Token = "0x60007A2")]
		[Address(RVA = "0x4CDAE20", Offset = "0x4CDAE20", VA = "0x4CDAE20")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015D")]
	public IEnumerable<int> childrenIds
	{
		[Token(Token = "0x60007A3")]
		[Address(RVA = "0x4CDAE30", Offset = "0x4CDAE30", VA = "0x4CDAE30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015E")]
	public bool hasChildren
	{
		[Token(Token = "0x60007A4")]
		[Address(RVA = "0x4CDAE40", Offset = "0x4CDAE40", VA = "0x4CDAE40")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x4CDAE80", Offset = "0x4CDAE80", VA = "0x4CDAE80")]
	public TreeViewItemWrapper(TreeItem item, int depth)
	{
	}
}
