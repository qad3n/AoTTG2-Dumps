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

[Token(Token = "0x200007E")]
[DebuggerTypeProxy(typeof(DefaultExpressionProxy))]
public sealed class DefaultExpression : Expression
{
	[Token(Token = "0x17000082")]
	public sealed override Type Type
	{
		[Token(Token = "0x600032D")]
		[Address(RVA = "0x5DC6DC0", Offset = "0x5DC5DC0", VA = "0x5DC6DC0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x600032E")]
		[Address(RVA = "0x5DC6DD0", Offset = "0x5DC5DD0", VA = "0x5DC6DD0", Slot = "4")]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x600032C")]
	[Address(RVA = "0x5DC6D50", Offset = "0x5DC5D50", VA = "0x5DC6D50")]
	internal DefaultExpression(Type type)
	{
	}

	[Token(Token = "0x600032F")]
	[Address(RVA = "0x5DC6DE0", Offset = "0x5DC5DE0", VA = "0x5DC6DE0", Slot = "9")]
	protected internal override Expression Accept(ExpressionVisitor visitor)
	{
		return null;
	}
}
