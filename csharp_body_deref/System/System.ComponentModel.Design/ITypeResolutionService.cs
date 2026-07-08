using System.Reflection;
using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x200032E")]
public interface ITypeResolutionService
{
	[Token(Token = "0x600151F")]
	Type GetType(string name);

	[Token(Token = "0x6001520")]
	string GetPathOfAssembly(AssemblyName name);
}
