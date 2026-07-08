using Il2CppDummyDll;

namespace Newtonsoft.Json.Serialization;

[Token(Token = "0x200010E")]
public interface IReferenceResolver
{
	[Token(Token = "0x60007C2")]
	object ResolveReference(object context, string reference);

	[Token(Token = "0x60007C3")]
	string GetReference(object context, object value);

	[Token(Token = "0x60007C4")]
	bool IsReferenced(object context, object value);

	[Token(Token = "0x60007C5")]
	void AddReference(object context, string reference, object value);
}
