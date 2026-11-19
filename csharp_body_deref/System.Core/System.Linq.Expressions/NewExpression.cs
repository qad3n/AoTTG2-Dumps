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

[Token(Token = "0x20000B8")]
[DebuggerTypeProxy(typeof(NewExpressionProxy))]
public class NewExpression : Expression
{
	[Token(Token = "0x40001DC")]
	[FieldOffset(Offset = "0x10")]
	private IReadOnlyList<Expression> _arguments;

	[Token(Token = "0x170000E1")]
	public ConstructorInfo Constructor
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x5DD5580", Offset = "0x5DD4580", VA = "0x5DD5580")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x5DD5590", Offset = "0x5DD4590", VA = "0x5DD5590", Slot = "10")]
	public Expression GetArgument(int index)
	{
		return null;
	}
}
