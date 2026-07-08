using System;
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200001C")]
public interface INotifyCollectionChanged<T>
{
	[Token(Token = "0x14000001")]
	event Action<T> ItemAdded;

	[Token(Token = "0x14000002")]
	event Action<T> ItemRemoved;

	[Token(Token = "0x14000003")]
	event Action CollectionChanged;
}
