// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.InstanceCreationEditor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000173")]
public abstract class InstanceCreationEditor
{
	[Token(Token = "0x170001FF")]
	public virtual string Text
	{
		[Token(Token = "0x6000940")]
		[Address(RVA = "0x6234AA0", Offset = "0x6233AA0", VA = "0x6234AA0", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000941")]
	public abstract object CreateInstance(ITypeDescriptorContext context, Type instanceType);

	[Token(Token = "0x6000942")]
	[Address(RVA = "0x6234AD0", Offset = "0x6233AD0", VA = "0x6234AD0")]
	protected InstanceCreationEditor()
	{
	}
}
