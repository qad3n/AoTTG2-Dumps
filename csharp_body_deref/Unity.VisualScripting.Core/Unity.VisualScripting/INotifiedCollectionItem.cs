using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200001B")]
public interface INotifiedCollectionItem
{
	[Token(Token = "0x6000099")]
	void BeforeAdd();

	[Token(Token = "0x600009A")]
	void AfterAdd();

	[Token(Token = "0x600009B")]
	void BeforeRemove();

	[Token(Token = "0x600009C")]
	void AfterRemove();
}
