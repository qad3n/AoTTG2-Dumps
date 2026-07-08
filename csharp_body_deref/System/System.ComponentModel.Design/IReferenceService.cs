using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x200032C")]
public interface IReferenceService
{
	[Token(Token = "0x6001519")]
	object GetReference(string name);

	[Token(Token = "0x600151A")]
	string GetName(object reference);

	[Token(Token = "0x600151B")]
	object[] GetReferences(Type baseType);
}
