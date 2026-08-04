// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.TreeViewItemData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements;

[Token(Token = "0x2000121")]
public readonly struct TreeViewItemData<T>
{
	[Token(Token = "0x40004BE")]
	[FieldOffset(Offset = "0x0")]
	private readonly T m_Data;

	[Token(Token = "0x40004BF")]
	[FieldOffset(Offset = "0x0")]
	private readonly IList<TreeViewItemData<T>> m_Children;

	[Token(Token = "0x1700015F")]
	public int id
	{
		[Token(Token = "0x60007A6")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000160")]
	public T data
	{
		[Token(Token = "0x60007A7")]
		get
		{
			return (T)null;
		}
	}

	[Token(Token = "0x17000161")]
	public IEnumerable<TreeViewItemData<T>> children
	{
		[Token(Token = "0x60007A8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000162")]
	public bool hasChildren
	{
		[Token(Token = "0x60007A9")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60007AA")]
	internal void InsertChild(TreeViewItemData<T> child, int index)
	{
	}

	[Token(Token = "0x60007AB")]
	internal void RemoveChild(int childId)
	{
	}

	[Token(Token = "0x60007AC")]
	internal int GetChildIndex(int itemId)
	{
		return default(int);
	}

	[Token(Token = "0x60007AD")]
	internal void ReplaceChild(TreeViewItemData<T> newChild)
	{
	}
}
