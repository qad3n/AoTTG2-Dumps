using Il2CppDummyDll;

namespace System.Reflection;

[Token(Token = "0x20004DD")]
public interface ICustomAttributeProvider
{
	[Token(Token = "0x600241F")]
	object[] GetCustomAttributes(bool inherit);

	[Token(Token = "0x6002420")]
	object[] GetCustomAttributes(Type attributeType, bool inherit);

	[Token(Token = "0x6002421")]
	bool IsDefined(Type attributeType, bool inherit);
}
