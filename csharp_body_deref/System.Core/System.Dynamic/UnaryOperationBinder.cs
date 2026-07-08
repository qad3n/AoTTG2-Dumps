using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x200027C")]
public abstract class UnaryOperationBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x6000C82")]
	[Address(RVA = "0x41EC0A0", Offset = "0x41EC0A0", VA = "0x41EC0A0")]
	public DynamicMetaObject FallbackUnaryOperation(DynamicMetaObject target)
	{
		return null;
	}

	[Token(Token = "0x6000C83")]
	public abstract DynamicMetaObject FallbackUnaryOperation(DynamicMetaObject target, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000C84")]
	[Address(RVA = "0x41EC0C0", Offset = "0x41EC0C0", VA = "0x41EC0C0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
