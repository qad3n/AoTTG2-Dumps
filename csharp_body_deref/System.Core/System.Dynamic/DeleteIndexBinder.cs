using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000264")]
public abstract class DeleteIndexBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000BCB")]
	[Address(RVA = "0x41E47F0", Offset = "0x41E47F0", VA = "0x41E47F0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}

	[Token(Token = "0x6000BCC")]
	[Address(RVA = "0x41E4890", Offset = "0x41E4890", VA = "0x41E4890")]
	public DynamicMetaObject FallbackDeleteIndex(DynamicMetaObject target, DynamicMetaObject[] indexes)
	{
		return null;
	}

	[Token(Token = "0x6000BCD")]
	public abstract DynamicMetaObject FallbackDeleteIndex(DynamicMetaObject target, DynamicMetaObject[] indexes, DynamicMetaObject errorSuggestion);
}
