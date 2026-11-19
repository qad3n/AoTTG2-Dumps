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

[Token(Token = "0x2000085")]
[DebuggerTypeProxy(typeof(GotoExpressionProxy))]
public sealed class GotoExpression : Expression
{
	[Token(Token = "0x17000087")]
	public sealed override Type Type
	{
		[Token(Token = "0x60003FD")]
		[Address(RVA = "0x5DD12D0", Offset = "0x5DD02D0", VA = "0x5DD12D0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000088")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x5DD12E0", Offset = "0x5DD02E0", VA = "0x5DD12E0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000089")]
	public Expression Value
	{
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x5DD12F0", Offset = "0x5DD02F0", VA = "0x5DD12F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008A")]
	public LabelTarget Target
	{
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x5DD1300", Offset = "0x5DD0300", VA = "0x5DD1300")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008B")]
	public GotoExpressionKind Kind
	{
		[Token(Token = "0x6000401")]
		[Address(RVA = "0x5DD1310", Offset = "0x5DD0310", VA = "0x5DD1310")]
		[CompilerGenerated]
		get
		{
			return default(GotoExpressionKind);
		}
	}

	[Token(Token = "0x60003FC")]
	[Address(RVA = "0x5DD1230", Offset = "0x5DD0230", VA = "0x5DD1230")]
	internal GotoExpression(GotoExpressionKind kind, LabelTarget target, Expression value, Type type)
	{
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x5DD1320", Offset = "0x5DD0320", VA = "0x5DD1320", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x5DD02F0", Offset = "0x5DCF2F0", VA = "0x5DD02F0")]
	public GotoExpression Update(LabelTarget target, Expression value)
	{
		return null;
	}
}
