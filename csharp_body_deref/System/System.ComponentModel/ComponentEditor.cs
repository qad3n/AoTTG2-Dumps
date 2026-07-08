using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x2000268")]
public abstract class ComponentEditor
{
	[Token(Token = "0x6000F03")]
	[Address(RVA = "0x4560D60", Offset = "0x4560D60", VA = "0x4560D60")]
	public bool EditComponent(object component)
	{
		return default(bool);
	}

	[Token(Token = "0x6000F04")]
	public abstract bool EditComponent(ITypeDescriptorContext context, object component);

	[Token(Token = "0x6000F05")]
	[Address(RVA = "0x4560D80", Offset = "0x4560D80", VA = "0x4560D80")]
	protected ComponentEditor()
	{
	}
}
