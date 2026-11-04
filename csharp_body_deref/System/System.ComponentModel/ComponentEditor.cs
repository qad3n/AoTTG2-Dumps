// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ComponentEditor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000173")]
public abstract class ComponentEditor
{
	[Token(Token = "0x600094B")]
	[Address(RVA = "0x2893C60", Offset = "0x2892260", VA = "0x182893C60")]
	public bool EditComponent(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x600094C")]
	public abstract bool EditComponent(ITypeDescriptorContext context, object component);

	[Token(Token = "0x600094D")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected ComponentEditor()
	{
	}
}
