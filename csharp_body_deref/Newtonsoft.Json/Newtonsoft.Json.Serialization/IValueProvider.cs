using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x2000111")]
public interface IValueProvider
{
	[Token(Token = "0x60007CA")]
	void SetValue(object target, object? value);

	[Token(Token = "0x60007CB")]
	object GetValue(object target);
}
