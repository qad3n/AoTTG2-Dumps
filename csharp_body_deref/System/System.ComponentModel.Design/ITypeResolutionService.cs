// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Design.ITypeResolutionService
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
