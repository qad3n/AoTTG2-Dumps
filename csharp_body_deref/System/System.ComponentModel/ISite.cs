// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ISite
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000162")]
public interface ISite : IServiceProvider
{
	[Token(Token = "0x170001B1")]
	IComponent Component
	{
		[Token(Token = "0x60008EC")]
		get;
	}

	[Token(Token = "0x170001B2")]
	IContainer Container
	{
		[Token(Token = "0x60008ED")]
		get;
	}

	[Token(Token = "0x170001B3")]
	bool DesignMode
	{
		[Token(Token = "0x60008EE")]
		get;
	}

	[Token(Token = "0x170001B4")]
	string Name
	{
		[Token(Token = "0x60008EF")]
		get;
		[Token(Token = "0x60008F0")]
		set;
	}
}
