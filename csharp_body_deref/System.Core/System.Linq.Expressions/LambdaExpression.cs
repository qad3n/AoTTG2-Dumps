// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.LambdaExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000093")]
[DebuggerTypeProxy(typeof(LambdaExpressionProxy))]
public abstract class LambdaExpression : Expression, IParameterProvider
{
	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x10")]
	private readonly Expression _body;

	[Token(Token = "0x170000A4")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x5DD2820", Offset = "0x5DD1820", VA = "0x5DD2820", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A5")]
	internal abstract Type TypeCore
	{
		[Token(Token = "0x6000442")]
		get;
	}

	[Token(Token = "0x170000A6")]
	internal abstract Type PublicType
	{
		[Token(Token = "0x6000443")]
		get;
	}

	[Token(Token = "0x170000A7")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x5DD2840", Offset = "0x5DD1840", VA = "0x5DD2840", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000A8")]
	public string Name
	{
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x5DD2850", Offset = "0x5DD1850", VA = "0x5DD2850")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A9")]
	internal virtual string NameCore
	{
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x5DD2870", Offset = "0x5DD1870", VA = "0x5DD2870", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AA")]
	public Expression Body
	{
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x5DD2880", Offset = "0x5DD1880", VA = "0x5DD2880")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AB")]
	public Type ReturnType
	{
		[Token(Token = "0x6000448")]
		[Address(RVA = "0x5DD2890", Offset = "0x5DD1890", VA = "0x5DD2890")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AC")]
	public bool TailCall
	{
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x5DD2910", Offset = "0x5DD1910", VA = "0x5DD2910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AD")]
	internal virtual bool TailCallCore
	{
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x5DD2930", Offset = "0x5DD1930", VA = "0x5DD2930", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AE")]
	[ExcludeFromCodeCoverage]
	private int System_002ELinq_002EExpressions_002EIParameterProvider_002EParameterCount
	{
		[Token(Token = "0x600044D")]
		[Address(RVA = "0x5DD2990", Offset = "0x5DD1990", VA = "0x5DD2990", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AF")]
	[ExcludeFromCodeCoverage]
	internal virtual int ParameterCount
	{
		[Token(Token = "0x600044E")]
		[Address(RVA = "0x5DD29B0", Offset = "0x5DD19B0", VA = "0x5DD29B0", Slot = "17")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x5DD27B0", Offset = "0x5DD17B0", VA = "0x5DD27B0")]
	internal LambdaExpression(Expression body)
	{
	}

	[Token(Token = "0x600044B")]
	[Address(RVA = "0x5DD2940", Offset = "0x5DD1940", VA = "0x5DD2940", Slot = "10")]
	[ExcludeFromCodeCoverage]
	private ParameterExpression System_002ELinq_002EExpressions_002EIParameterProvider_002EGetParameter(int index)
	{
		return null;
	}

	[Token(Token = "0x600044C")]
	[Address(RVA = "0x5DD2960", Offset = "0x5DD1960", VA = "0x5DD2960", Slot = "16")]
	[ExcludeFromCodeCoverage]
	internal virtual ParameterExpression GetParameter(int index)
	{
		return null;
	}
}
