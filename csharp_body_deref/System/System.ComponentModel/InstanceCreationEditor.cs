// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.InstanceCreationEditor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002A7")]
public abstract class InstanceCreationEditor
{
	[Token(Token = "0x170003BF")]
	public virtual string Text
	{
		[Token(Token = "0x60010B8")]
		[Address(RVA = "0x4894A10", Offset = "0x4894A10", VA = "0x4894A10", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010B9")]
	public abstract object CreateInstance(ITypeDescriptorContext context, Type instanceType);

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x4894A40", Offset = "0x4894A40", VA = "0x4894A40")]
	protected InstanceCreationEditor()
	{
	}
}
