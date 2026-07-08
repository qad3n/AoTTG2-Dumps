using Il2CppDummyDll;

namespace System.Configuration.Assemblies;

[Token(Token = "0x20005F4")]
public enum AssemblyVersionCompatibility
{
	[Token(Token = "0x4001A45")]
	SameMachine = 1,
	[Token(Token = "0x4001A46")]
	SameProcess,
	[Token(Token = "0x4001A47")]
	SameDomain
}
