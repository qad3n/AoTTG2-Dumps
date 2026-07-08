using System.Collections.ObjectModel;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000067")]
[DebuggerTypeProxy(typeof(BlockExpressionProxy))]
public class BlockExpression : Expression
{
	[Token(Token = "0x1700005A")]
	public ReadOnlyCollection<Expression> Expressions
	{
		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x4188D90", Offset = "0x4188D90", VA = "0x4188D90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005B")]
	public ReadOnlyCollection<ParameterExpression> Variables
	{
		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x4188DB0", Offset = "0x4188DB0", VA = "0x4188DB0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005C")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x4188E70", Offset = "0x4188E70", VA = "0x4188E70", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x1700005D")]
	public override Type Type
	{
		[Token(Token = "0x60002B7")]
		[Address(RVA = "0x4188E80", Offset = "0x4188E80", VA = "0x4188E80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700005E")]
	[ExcludeFromCodeCoverage]
	internal virtual int ExpressionCount
	{
		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x4188F00", Offset = "0x4188F00", VA = "0x4188F00", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60002B4")]
	[Address(RVA = "0x4188DD0", Offset = "0x4188DD0", VA = "0x4188DD0")]
	internal BlockExpression()
	{
	}

	[Token(Token = "0x60002B5")]
	[Address(RVA = "0x4188E40", Offset = "0x4188E40", VA = "0x4188E40", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60002B8")]
	[Address(RVA = "0x4188ED0", Offset = "0x4188ED0", VA = "0x4188ED0", Slot = "10")]
	[ExcludeFromCodeCoverage]
	internal virtual Expression GetExpression(int index)
	{
		return null;
	}

	[Token(Token = "0x60002BA")]
	[Address(RVA = "0x4188F30", Offset = "0x4188F30", VA = "0x4188F30", Slot = "12")]
	[ExcludeFromCodeCoverage]
	internal virtual ReadOnlyCollection<Expression> GetOrMakeExpressions()
	{
		return null;
	}

	[Token(Token = "0x60002BB")]
	[Address(RVA = "0x4188F60", Offset = "0x4188F60", VA = "0x4188F60", Slot = "13")]
	internal virtual ReadOnlyCollection<ParameterExpression> GetOrMakeVariables()
	{
		return null;
	}

	[Token(Token = "0x60002BC")]
	[Address(RVA = "0x4188FD0", Offset = "0x4188FD0", VA = "0x4188FD0", Slot = "14")]
	[ExcludeFromCodeCoverage]
	internal virtual BlockExpression Rewrite(ReadOnlyCollection<ParameterExpression> variables, Expression[] args)
	{
		return null;
	}

	[Token(Token = "0x60002BD")]
	[Address(RVA = "0x4189000", Offset = "0x4189000", VA = "0x4189000")]
	internal static ReadOnlyCollection<Expression> ReturnReadOnlyExpressions(BlockExpression provider, ref object collection)
	{
		return null;
	}
}
