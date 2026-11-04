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
		[Token(Token = "0x6000436")]
		[Address(RVA = "0x24293C0", Offset = "0x24279C0", VA = "0x1824293C0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A3")]
	internal abstract Type TypeCore
	{
		[Token(Token = "0x6000437")]
		get;
	}

	[Token(Token = "0x170000A4")]
	internal abstract Type PublicType
	{
		[Token(Token = "0x6000438")]
		get;
	}

	[Token(Token = "0x170000A5")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000439")]
		[Address(RVA = "0x196D5E0", Offset = "0x196BBE0", VA = "0x18196D5E0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000A6")]
	public string Name
	{
		[Token(Token = "0x600043A")]
		[Address(RVA = "0xB62CF0", Offset = "0xB612F0", VA = "0x180B62CF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A7")]
	internal virtual string NameCore
	{
		[Token(Token = "0x600043B")]
		[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "14")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A8")]
	public Expression Body
	{
		[Token(Token = "0x600043C")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A9")]
	public Type ReturnType
	{
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x243BB90", Offset = "0x243A190", VA = "0x18243BB90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000AA")]
	public bool TailCall
	{
		[Token(Token = "0x600043E")]
		[Address(RVA = "0xB62B80", Offset = "0xB61180", VA = "0x180B62B80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AB")]
	internal virtual bool TailCallCore
	{
		[Token(Token = "0x600043F")]
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "15")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000AC")]
	[ExcludeFromCodeCoverage]
	private int System_002ELinq_002EExpressions_002EIParameterProvider_002EParameterCount
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x1F0DB10", Offset = "0x1F0C110", VA = "0x181F0DB10", Slot = "11")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AD")]
	[ExcludeFromCodeCoverage]
	internal virtual int ParameterCount
	{
		[Token(Token = "0x6000443")]
		[Address(RVA = "0x243BB60", Offset = "0x243A160", VA = "0x18243BB60", Slot = "17")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x243BAF0", Offset = "0x243A0F0", VA = "0x18243BAF0")]
	internal LambdaExpression(Expression body)
	{
	}

	[Token(Token = "0x6000440")]
	[Address(RVA = "0x243BAD0", Offset = "0x243A0D0", VA = "0x18243BAD0", Slot = "10")]
	[ExcludeFromCodeCoverage]
	private ParameterExpression System_002ELinq_002EExpressions_002EIParameterProvider_002EGetParameter(int index)
	{
		return null;
	}

	[Token(Token = "0x6000441")]
	[Address(RVA = "0x243BAA0", Offset = "0x243A0A0", VA = "0x18243BAA0", Slot = "16")]
	[ExcludeFromCodeCoverage]
	internal virtual ParameterExpression GetParameter(int index)
	{
		return null;
	}
}
