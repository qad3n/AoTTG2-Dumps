// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.IProxyableNotifyCollectionChanged
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200001D")]
public interface IProxyableNotifyCollectionChanged<T>
{
	[Token(Token = "0x17000020")]
	bool ProxyCollectionChange
	{
		[Token(Token = "0x60000A7")]
		get;
		[Token(Token = "0x60000A8")]
		set;
	}

	[Token(Token = "0x60000A9")]
	void BeforeAdd(T item);

	[Token(Token = "0x60000AA")]
	void AfterAdd(T item);

	[Token(Token = "0x60000AB")]
	void BeforeRemove(T item);

	[Token(Token = "0x60000AC")]
	void AfterRemove(T item);
}
