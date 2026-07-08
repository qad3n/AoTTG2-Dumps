using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x20002A7")]
public abstract class InstanceCreationEditor
{
	[Token(Token = "0x170003BF")]
	public virtual string Text
	{
		[Token(Token = "0x60010B8")]
		[Address(RVA = "0x456F910", Offset = "0x456F910", VA = "0x456F910", Slot = "4")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60010B9")]
	public abstract object CreateInstance(ITypeDescriptorContext context, Type instanceType);

	[Token(Token = "0x60010BA")]
	[Address(RVA = "0x456F940", Offset = "0x456F940", VA = "0x456F940")]
	protected InstanceCreationEditor()
	{
	}
}
