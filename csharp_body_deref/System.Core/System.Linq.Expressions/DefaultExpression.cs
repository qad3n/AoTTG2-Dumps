// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.DefaultExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200007D")]
[DebuggerTypeProxy(typeof(DefaultExpressionProxy))]
public sealed class DefaultExpression : Expression
{
	[Token(Token = "0x17000080")]
	public sealed override Type Type
	{
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x44B0CA0", Offset = "0x44B0CA0", VA = "0x44B0CA0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000324")]
		[Address(RVA = "0x44B0CB0", Offset = "0x44B0CB0", VA = "0x44B0CB0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x6000322")]
	[Address(RVA = "0x44B0C30", Offset = "0x44B0C30", VA = "0x44B0C30")]
	internal DefaultExpression(Type type)
	{
	}

	[Token(Token = "0x6000325")]
	[Address(RVA = "0x44B0CC0", Offset = "0x44B0CC0", VA = "0x44B0CC0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
