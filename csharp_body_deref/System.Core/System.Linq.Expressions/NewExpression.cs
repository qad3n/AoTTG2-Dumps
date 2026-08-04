// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.NewExpression
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x20000B7")]
[DebuggerTypeProxy(typeof(NewExpressionProxy))]
public class NewExpression : Expression
{
	[Token(Token = "0x40001D3")]
	[FieldOffset(Offset = "0x10")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x170000DF")]
	public ConstructorInfo Constructor
	{
		[Token(Token = "0x60004CA")]
		[Address(RVA = "0x44BF760", Offset = "0x44BF760", VA = "0x44BF760")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x44BF770", Offset = "0x44BF770", VA = "0x44BF770", Slot = "10")]
	public Expression GetArgument(int index)
	{
		return null;
	}
}
