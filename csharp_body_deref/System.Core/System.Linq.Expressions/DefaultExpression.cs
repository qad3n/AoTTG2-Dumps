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
		[Token(Token = "0x6000322")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x6000323")]
		[Address(RVA = "0x242C510", Offset = "0x242AB10", VA = "0x18242C510", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x6000321")]
	[Address(RVA = "0x242C4A0", Offset = "0x242AAA0", VA = "0x18242C4A0")]
	internal DefaultExpression(Type type)
	{
	}

	[Token(Token = "0x6000324")]
	[Address(RVA = "0x242C470", Offset = "0x242AA70", VA = "0x18242C470", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
