// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.ComponentEditor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000268")]
public abstract class ComponentEditor
{
	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x4885E60", Offset = "0x4885E60", VA = "0x4885E60")]
	public bool EditComponent(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F04")]
	public abstract bool EditComponent(ITypeDescriptorContext context, object component);

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x4885E80", Offset = "0x4885E80", VA = "0x4885E80")]
	protected ComponentEditor()
	{
	}
}
