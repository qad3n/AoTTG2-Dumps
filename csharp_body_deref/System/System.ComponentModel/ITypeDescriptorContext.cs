// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ITypeDescriptorContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001AF")]
public interface ITypeDescriptorContext : IServiceProvider
{
	[Token(Token = "0x1700022A")]
	IContainer Container
	{
		[Token(Token = "0x6000AF4")]
		get;
	}

	[Token(Token = "0x1700022B")]
	object Instance
	{
		[Token(Token = "0x6000AF5")]
		get;
	}

	[Token(Token = "0x1700022C")]
	PropertyDescriptor PropertyDescriptor
	{
		[Token(Token = "0x6000AF6")]
		get;
	}

	[Token(Token = "0x6000AF7")]
	bool OnComponentChanging();

	[Token(Token = "0x6000AF8")]
	void OnComponentChanged();
}
