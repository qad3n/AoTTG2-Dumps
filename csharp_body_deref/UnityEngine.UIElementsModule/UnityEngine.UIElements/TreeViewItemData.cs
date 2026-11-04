// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TreeViewItemData
// Update status: CHANGED in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Properties;

namespace UnityEngine.UIElements;

[Token(Token = "0x200016D")]
public readonly struct TreeViewItemData<T>
{
	[Token(Token = "0x40006A1")]
	[FieldOffset(Offset = "0x0")]
	[CreateProperty]
	private readonly T m_Data;

	[Token(Token = "0x40006A2")]
	[FieldOffset(Offset = "0x0")]
	private readonly IList<TreeViewItemData<T>> m_Children;

	[Token(Token = "0x170001F0")]
	public int id
	{
		[Token(Token = "0x6000A7D")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001F1")]
	public T data
	{
		[Token(Token = "0x6000A7E")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x170001F2")]
	public IEnumerable<TreeViewItemData<T>> children
	{
		[Token(Token = "0x6000A7F")]
		get
		{
			return null;
		}
	}
}
