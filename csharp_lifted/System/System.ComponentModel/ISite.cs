// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ISite
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000123")]
public interface ISite : IServiceProvider
{
	[Token(Token = "0x17000182")]
	IComponent Component
	{
		[Token(Token = "0x600072C")]
		get;
	}

	[Token(Token = "0x17000183")]
	IContainer Container
	{
		[Token(Token = "0x600072D")]
		get;
	}

	[Token(Token = "0x17000184")]
	bool DesignMode
	{
		[Token(Token = "0x600072E")]
		get;
	}

	[Token(Token = "0x17000185")]
	string Name
	{
		[Token(Token = "0x600072F")]
		get;
		[Token(Token = "0x6000730")]
		set;
	}
}
