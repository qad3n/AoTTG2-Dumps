// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TreeItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x50026C0", Offset = "0x50026C0", VA = "0x50026C0")]
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
		[Address(RVA = "0x50026D0", Offset = "0x50026D0", VA = "0x50026D0")]
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
		[Address(RVA = "0x50026E0", Offset = "0x50026E0", VA = "0x50026E0")]
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
		[Address(RVA = "0x50026F0", Offset = "0x50026F0", VA = "0x50026F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007A1")]
	[Address(RVA = "0x5002730", Offset = "0x5002730", VA = "0x5002730")]
	public TreeItem(int id, [Optional][DefaultParameterValue(-1)] int parentId, [Optional] IEnumerable<int> childrenIds)
	{
	}
}
