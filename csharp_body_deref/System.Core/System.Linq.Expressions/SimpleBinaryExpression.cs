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

[Token(Token = "0x2000049")]
internal class SimpleBinaryExpression : BinaryExpression
{
	[Token(Token = "0x17000055")]
	public sealed override ExpressionType NodeType
	{
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170", Slot = "4")]
		[CompilerGenerated]
		get
		{
			return default(ExpressionType);
		}
	}

	[Token(Token = "0x17000056")]
	public sealed override Type Type
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "5")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x2424B80", Offset = "0x2423180", VA = "0x182424B80")]
	internal SimpleBinaryExpression(ExpressionType nodeType, Expression left, Expression right, Type type)
	{
	}
}
