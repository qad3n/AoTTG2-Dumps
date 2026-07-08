using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x200011F")]
internal readonly struct TreeItem
{
	[Token(Token = "0x17000158")]
	public int id
	{
		[Token(Token = "0x600079D")]
		[Address(RVA = "0x4CDAD90", Offset = "0x4CDAD90", VA = "0x4CDAD90")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000159")]
	public int parentId
	{
		[Token(Token = "0x600079E")]
		[Address(RVA = "0x4CDADA0", Offset = "0x4CDADA0", VA = "0x4CDADA0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015A")]
	public IEnumerable<int> childrenIds
	{
		[Token(Token = "0x600079F")]
		[Address(RVA = "0x4CDADB0", Offset = "0x4CDADB0", VA = "0x4CDADB0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015B")]
	public bool hasChildren
	{
		[Token(Token = "0x60007A0")]
		[Address(RVA = "0x4CDADC0", Offset = "0x4CDADC0", VA = "0x4CDADC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x4CDAE00", Offset = "0x4CDAE00", VA = "0x4CDAE00")]
	public TreeItem(int id, [Optional][DefaultParameterValue(-1)] int parentId, [Optional] IEnumerable<int> childrenIds)
	{
	}
}
