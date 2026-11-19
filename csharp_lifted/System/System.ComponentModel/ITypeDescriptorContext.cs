// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ITypeDescriptorContext
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000170")]
public interface ITypeDescriptorContext : IServiceProvider
{
	[Token(Token = "0x170001FB")]
	IContainer Container
	{
		[Token(Token = "0x6000934")]
		get;
	}

	[Token(Token = "0x170001FC")]
	object Instance
	{
		[Token(Token = "0x6000935")]
		get;
	}

	[Token(Token = "0x170001FD")]
	PropertyDescriptor PropertyDescriptor
	{
		[Token(Token = "0x6000936")]
		get;
	}

	[Token(Token = "0x6000937")]
	bool OnComponentChanging();

	[Token(Token = "0x6000938")]
	void OnComponentChanged();
}
