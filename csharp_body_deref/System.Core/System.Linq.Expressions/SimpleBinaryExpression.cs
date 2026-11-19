// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.SimpleBinaryExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x200004A")]
internal class SimpleBinaryExpression : BinaryExpression
{
	[Token(Token = "0x17000057")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x5DAD3B0", Offset = "0x5DAC3B0", VA = "0x5DAD3B0", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000058")]
	public sealed override Type Type
	{
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x5DAD3C0", Offset = "0x5DAC3C0", VA = "0x5DAD3C0", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x5DAD310", Offset = "0x5DAC310", VA = "0x5DAD310")]
	internal SimpleBinaryExpression(ExpressionType nodeType, Expression left, Expression right, Type type)
	{
	}
}
