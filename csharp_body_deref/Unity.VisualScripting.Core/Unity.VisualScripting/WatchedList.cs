using System;
using System.Collections.ObjectModel;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200002E")]
public class WatchedList<T> : Collection<T>, INotifyCollectionChanged<T>
{
	[Token(Token = "0x14000004")]
	public event Action<T> ItemAdded
	{
		[Token(Token = "0x600018E")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600018F")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000005")]
	public event Action<T> ItemRemoved
	{
		[Token(Token = "0x6000190")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000191")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000006")]
	public event Action CollectionChanged
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

	[Token(Token = "0x6000194")]
	protected override void InsertItem(int index, T item)
	{
	}

	[Token(Token = "0x6000195")]
	protected override void RemoveItem(int index)
	{
	}

	[Token(Token = "0x6000196")]
	protected override void ClearItems()
	{
	}

	[Token(Token = "0x6000197")]
	public WatchedList()
	{
	}
}
