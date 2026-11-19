// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.MethodCallExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Diagnostics.CodeAnalysis;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000A7")]
[DebuggerTypeProxy(typeof(MethodCallExpressionProxy))]
public class MethodCallExpression : Expression, IArgumentProvider
{
	[Token(Token = "0x170000CC")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000490")]
		[Address(RVA = "0x5DD3010", Offset = "0x5DD2010", VA = "0x5DD3010", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x170000CD")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000491")]
		[Address(RVA = "0x5DD3020", Offset = "0x5DD2020", VA = "0x5DD3020", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CE")]
	public MethodInfo Method
	{
		[Token(Token = "0x6000492")]
		[Address(RVA = "0x5DD3050", Offset = "0x5DD2050", VA = "0x5DD3050")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CF")]
	public Expression Object
	{
		[Token(Token = "0x6000493")]
		[Address(RVA = "0x5DCE590", Offset = "0x5DCD590", VA = "0x5DCE590")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D0")]
	[ExcludeFromCodeCoverage]
	public virtual int ArgumentCount
	{
		[Token(Token = "0x6000497")]
		[Address(RVA = "0x5DD30F0", Offset = "0x5DD20F0", VA = "0x5DD30F0", Slot = "15")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x600048E")]
	[Address(RVA = "0x5DD2F90", Offset = "0x5DD1F90", VA = "0x5DD2F90")]
	internal MethodCallExpression(MethodInfo method)
	{
	}

	[Token(Token = "0x600048F")]
	[Address(RVA = "0x5DD3000", Offset = "0x5DD2000", VA = "0x5DD3000", Slot = "12")]
	internal virtual Expression GetInstance()
	{
		return null;
	}

	[Token(Token = "0x6000494")]
	[Address(RVA = "0x5DD3060", Offset = "0x5DD2060", VA = "0x5DD3060", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000495")]
	[Address(RVA = "0x5DD3090", Offset = "0x5DD2090", VA = "0x5DD3090", Slot = "13")]
	[ExcludeFromCodeCoverage]
	internal virtual MethodCallExpression Rewrite(Expression instance, IReadOnlyList<Expression> args)
	{
		return null;
	}

	[Token(Token = "0x6000496")]
	[Address(RVA = "0x5DD30C0", Offset = "0x5DD20C0", VA = "0x5DD30C0", Slot = "14")]
	[ExcludeFromCodeCoverage]
	public virtual Expression GetArgument(int index)
	{
		return null;
	}
}
