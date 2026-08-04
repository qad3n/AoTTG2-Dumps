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
	[Token(Token = "0x1700001F")]
	bool ProxyCollectionChange
	{
		[Token(Token = "0x60000A3")]
		get;
		[Token(Token = "0x60000A4")]
		set;
	}

	[Token(Token = "0x60000A5")]
	void BeforeAdd(T item);

	[Token(Token = "0x60000A6")]
	void AfterAdd(T item);

	[Token(Token = "0x60000A7")]
	void BeforeRemove(T item);

	[Token(Token = "0x60000A8")]
	void AfterRemove(T item);
}
