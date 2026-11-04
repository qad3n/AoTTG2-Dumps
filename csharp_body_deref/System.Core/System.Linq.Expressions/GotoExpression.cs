// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.GotoExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000084")]
[DebuggerTypeProxy(typeof(GotoExpressionProxy))]
public sealed class GotoExpression : Expression
{
	[Token(Token = "0x17000085")]
	public sealed override Type Type
	{
		[Token(Token = "0x60003F2")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000086")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x2439B90", Offset = "0x2438190", VA = "0x182439B90", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000087")]
	public Expression Value
	{
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	public LabelTarget Target
	{
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000089")]
	public GotoExpressionKind Kind
	{
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(GotoExpressionKind);
		}
	}

	[Token(Token = "0x60003F1")]
	[Address(RVA = "0x2439B00", Offset = "0x2438100", VA = "0x182439B00")]
	internal GotoExpression(GotoExpressionKind kind, LabelTarget target, Expression value, Type type)
	{
	}

	[Token(Token = "0x60003F7")]
	[Address(RVA = "0x2439A10", Offset = "0x2438010", VA = "0x182439A10", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x2439A40", Offset = "0x2438040", VA = "0x182439A40")]
	public GotoExpression Update(LabelTarget target, Expression value)
	{
		return null;
	}
}
