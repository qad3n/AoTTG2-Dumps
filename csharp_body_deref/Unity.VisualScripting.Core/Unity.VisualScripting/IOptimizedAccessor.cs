using Il2CppDummyDll;

namespace Unity.VisualScripting;

[Token(Token = "0x200013D")]
public interface IOptimizedAccessor
{
	[Token(Token = "0x6000D48")]
	void Compile();

	[Token(Token = "0x6000D49")]
	object GetValue(object target);

	[Token(Token = "0x6000D4A")]
	void SetValue(object target, object value);
}
