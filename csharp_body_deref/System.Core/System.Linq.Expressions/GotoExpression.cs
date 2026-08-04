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
		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x44BB460", Offset = "0x44BB460", VA = "0x44BB460", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000086")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60003F4")]
		[Address(RVA = "0x44BB470", Offset = "0x44BB470", VA = "0x44BB470", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000087")]
	public Expression Value
	{
		[Token(Token = "0x60003F5")]
		[Address(RVA = "0x44BB480", Offset = "0x44BB480", VA = "0x44BB480")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	public LabelTarget Target
	{
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x44BB490", Offset = "0x44BB490", VA = "0x44BB490")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000089")]
	public GotoExpressionKind Kind
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x44BB4A0", Offset = "0x44BB4A0", VA = "0x44BB4A0")]
		[CompilerGenerated]
		get
		{
			return default(GotoExpressionKind);
		}
	}

	[Token(Token = "0x60003F2")]
	[Address(RVA = "0x44BB3C0", Offset = "0x44BB3C0", VA = "0x44BB3C0")]
	internal GotoExpression(GotoExpressionKind kind, LabelTarget target, Expression value, Type type)
	{
	}

	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x44BB4B0", Offset = "0x44BB4B0", VA = "0x44BB4B0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x60003F9")]
	[Address(RVA = "0x44BA420", Offset = "0x44BA420", VA = "0x44BA420")]
	public GotoExpression Update(LabelTarget target, Expression value)
	{
		return null;
	}
}
