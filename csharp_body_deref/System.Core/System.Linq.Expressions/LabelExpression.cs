using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000090")]
[DebuggerTypeProxy(typeof(LabelExpressionProxy))]
public sealed class LabelExpression : Expression
{
	[Token(Token = "0x1700009C")]
	public sealed override Type Type
	{
		[Token(Token = "0x600042C")]
		[Address(RVA = "0x4197710", Offset = "0x4197710", VA = "0x4197710", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009D")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600042D")]
		[Address(RVA = "0x4197730", Offset = "0x4197730", VA = "0x4197730", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700009E")]
	public LabelTarget Target
	{
		[Token(Token = "0x600042E")]
		[Address(RVA = "0x4197740", Offset = "0x4197740", VA = "0x4197740")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700009F")]
	public Expression DefaultValue
	{
		[Token(Token = "0x600042F")]
		[Address(RVA = "0x4197750", Offset = "0x4197750", VA = "0x4197750")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x4197690", Offset = "0x4197690", VA = "0x4197690")]
	internal LabelExpression(LabelTarget label, Expression defaultValue)
	{
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x4197760", Offset = "0x4197760", VA = "0x4197760", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x4195500", Offset = "0x4195500", VA = "0x4195500")]
	public LabelExpression Update(LabelTarget target, Expression defaultValue)
	{
		return null;
	}
}
