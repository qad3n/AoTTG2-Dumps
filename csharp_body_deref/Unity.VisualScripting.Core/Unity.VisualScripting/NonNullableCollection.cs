using System.Collections.Generic;
using System.Collections.ObjectModel;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x2000026")]
public abstract class NonNullableCollection<T> : Collection<T>
{
	[Token(Token = "0x6000105")]
	protected override void InsertItem(int index, T item)
	{
	}

	[Token(Token = "0x6000106")]
	protected override void SetItem(int index, T item)
	{
	}

	[Token(Token = "0x6000107")]
	public void AddRange(IEnumerable<T> collection)
	{
	}

	[Token(Token = "0x6000108")]
	protected NonNullableCollection()
	{
	}
}
