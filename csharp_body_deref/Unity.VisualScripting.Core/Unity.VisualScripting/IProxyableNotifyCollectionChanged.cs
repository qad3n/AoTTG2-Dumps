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
