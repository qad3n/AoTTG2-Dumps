// ==================== AoTTG2 cross-reference ====================
// Type: Unity.VisualScripting.INotifiedCollectionItem
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
