// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.WatchedList
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.ObjectModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200002E")]
public class WatchedList<T> : Collection<T>, INotifyCollectionChanged<T>
{
	[Token(Token = "0x400003C")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private Action<T> m_ItemAdded;

	[Token(Token = "0x400003D")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private Action<T> m_ItemRemoved;

	[Token(Token = "0x400003E")]
	[FieldOffset(Offset = "0x0")]
	[CompilerGenerated]
	private Action m_CollectionChanged;

	[Token(Token = "0x14000004")]
	public event Action<T> ItemAdded
	{
		[Token(Token = "0x6000192")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000193")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event Action<T> ItemRemoved
	{
		[Token(Token = "0x6000194")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000195")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event Action CollectionChanged
	{
		[Token(Token = "0x6000196")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000197")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000198")]
	protected override void InsertItem(int index, T item)
	{
	}

	[Token(Token = "0x6000199")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x600019A")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x600019B")]
	public WatchedList()
	{
	}
}
