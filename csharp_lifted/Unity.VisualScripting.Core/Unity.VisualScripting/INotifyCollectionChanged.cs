// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.INotifyCollectionChanged
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
