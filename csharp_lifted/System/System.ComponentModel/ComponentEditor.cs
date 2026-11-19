// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ComponentEditor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000134")]
public abstract class ComponentEditor
{
	[Token(Token = "0x600078B")]
	[Address(RVA = "0x6226300", Offset = "0x6225300", VA = "0x6226300")]
	public bool EditComponent(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x600078C")]
	public abstract bool EditComponent(ITypeDescriptorContext context, object component);

	[Token(Token = "0x600078D")]
	[Address(RVA = "0x6226320", Offset = "0x6225320", VA = "0x6226320")]
	protected ComponentEditor()
	{
	}
}
