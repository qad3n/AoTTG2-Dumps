// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ISite
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000257")]
public interface ISite : IServiceProvider
{
	[Token(Token = "0x17000342")]
	IComponent Component
	{
		[Token(Token = "0x6000EA4")]
		get;
	}

	[Token(Token = "0x17000343")]
	IContainer Container
	{
		[Token(Token = "0x6000EA5")]
		get;
	}

	[Token(Token = "0x17000344")]
	bool DesignMode
	{
		[Token(Token = "0x6000EA6")]
		get;
	}

	[Token(Token = "0x17000345")]
	string Name
	{
		[Token(Token = "0x6000EA7")]
		get;
		[Token(Token = "0x6000EA8")]
		set;
	}
}
