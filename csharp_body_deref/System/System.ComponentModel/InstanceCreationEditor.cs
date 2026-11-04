// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.InstanceCreationEditor
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20001B2")]
public abstract class InstanceCreationEditor
{
	[Token(Token = "0x1700022E")]
	public virtual string Text
	{
		[Token(Token = "0x6000B00")]
		[Address(RVA = "0x289EF30", Offset = "0x289D530", VA = "0x18289EF30", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B01")]
	public abstract object CreateInstance(ITypeDescriptorContext context, Type instanceType);

	[Token(Token = "0x6000B02")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	protected InstanceCreationEditor()
	{
	}
}
