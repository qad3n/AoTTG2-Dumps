using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000092")]
[DebuggerTypeProxy(typeof(LambdaExpressionProxy))]
public abstract class LambdaExpression : Expression, IParameterProvider
{
	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x10")]
	private readonly Expression _body;

	[Token(Token = "0x170000A2")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000437")]
		[Address(RVA = "0x41978B0", Offset = "0x41978B0", VA = "0x41978B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A3")]
	internal abstract Type TypeCore
	{
		[Token(Token = "0x6000438")]
		get;
	}

	[Token(Token = "0x170000A4")]
	internal abstract Type PublicType
	{
		[Token(Token = "0x6000439")]
		get;
	}

	[Token(Token = "0x170000A5")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0x41978D0", Offset = "0x41978D0", VA = "0x41978D0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000A6")]
	public string Name
	{
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x41978E0", Offset = "0x41978E0", VA = "0x41978E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A7")]
	internal virtual string NameCore
	{
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x4197900", Offset = "0x4197900", VA = "0x4197900", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A8")]
	public Expression Body
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x4197910", Offset = "0x4197910", VA = "0x4197910")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A9")]
	public Type ReturnType
	{
		[Token(Token = "0x600043E")]
		[Address(RVA = "0x4197920", Offset = "0x4197920", VA = "0x4197920")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AA")]
	public bool TailCall
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x41979A0", Offset = "0x41979A0", VA = "0x41979A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AB")]
	internal virtual bool TailCallCore
	{
		[Token(Token = "0x6000440")]
		[Address(RVA = "0x41979C0", Offset = "0x41979C0", VA = "0x41979C0", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AC")]
	[ExcludeFromCodeCoverage]
	private int System_002ELinq_002EExpressions_002EIParameterProvider_002EParameterCount
	{
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x4197A20", Offset = "0x4197A20", VA = "0x4197A20", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AD")]
	[ExcludeFromCodeCoverage]
	internal virtual int ParameterCount
	{
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x4197A40", Offset = "0x4197A40", VA = "0x4197A40", Slot = "17")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000436")]
	[Address(RVA = "0x4197840", Offset = "0x4197840", VA = "0x4197840")]
	internal LambdaExpression(Expression body)
	{
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x41979D0", Offset = "0x41979D0", VA = "0x41979D0", Slot = "10")]
	[ExcludeFromCodeCoverage]
	private ParameterExpression System_002ELinq_002EExpressions_002EIParameterProvider_002EGetParameter(int index)
	{
		return null;
	}

	[Token(Token = "0x6000442")]
	[Address(RVA = "0x41979F0", Offset = "0x41979F0", VA = "0x41979F0", Slot = "16")]
	[ExcludeFromCodeCoverage]
	internal virtual ParameterExpression GetParameter(int index)
	{
		return null;
	}
}
