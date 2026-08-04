// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.Design.IDesignerHost
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel.Design;

[Token(Token = "0x2000329")]
public interface IDesignerHost : IServiceProvider
{
	[Token(Token = "0x17000492")]
	IComponent RootComponent
	{
		[Token(Token = "0x6001514")]
		get;
	}

	[Token(Token = "0x6001515")]
	IDesigner GetDesigner(IComponent component);
}
