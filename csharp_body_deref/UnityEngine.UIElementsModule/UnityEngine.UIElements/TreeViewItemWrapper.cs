// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TreeViewItemWrapper
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x5002750", Offset = "0x5002750", VA = "0x5002750")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700015D")]
	public IEnumerable<int> childrenIds
	{
		[Token(Token = "0x60007A3")]
		[Address(RVA = "0x5002760", Offset = "0x5002760", VA = "0x5002760")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700015E")]
	public bool hasChildren
	{
		[Token(Token = "0x60007A4")]
		[Address(RVA = "0x5002770", Offset = "0x5002770", VA = "0x5002770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007A5")]
	[Address(RVA = "0x50027B0", Offset = "0x50027B0", VA = "0x50027B0")]
	public TreeViewItemWrapper(TreeItem item, int depth)
	{
	}
}
