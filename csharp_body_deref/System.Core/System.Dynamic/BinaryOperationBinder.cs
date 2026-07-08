using System.Linq.Expressions;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Dynamic;

[Token(Token = "0x2000259")]
public abstract class BinaryOperationBinder : DynamicMetaObjectBinder
{
	[Token(Token = "0x1700025E")]
	public ExpressionType Operation
	{
		[Token(Token = "0x6000BA6")]
		[Address(RVA = "0x41E3090", Offset = "0x41E3090", VA = "0x41E3090")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x6000BA7")]
	[Address(RVA = "0x41E30A0", Offset = "0x41E30A0", VA = "0x41E30A0")]
	public DynamicMetaObject FallbackBinaryOperation(DynamicMetaObject target, DynamicMetaObject arg)
	{
		return null;
	}

	[Token(Token = "0x6000BA8")]
	public abstract DynamicMetaObject FallbackBinaryOperation(DynamicMetaObject target, DynamicMetaObject arg, DynamicMetaObject errorSuggestion);

	[Token(Token = "0x6000BA9")]
	[Address(RVA = "0x41E30C0", Offset = "0x41E30C0", VA = "0x41E30C0", Slot = "7")]
	public sealed override DynamicMetaObject Bind(DynamicMetaObject target, DynamicMetaObject[] args)
	{
		return null;
	}
}
