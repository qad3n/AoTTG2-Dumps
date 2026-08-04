// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.CatchBlock
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions;

[Token(Token = "0x2000073")]
[DebuggerTypeProxy(typeof(Expression.CatchBlockProxy))]
public sealed class CatchBlock
{
	[Token(Token = "0x1700006E")]
	public ParameterExpression Variable
	{
		[Token(Token = "0x6000300")]
		[Address(RVA = "0x44B0050", Offset = "0x44B0050", VA = "0x44B0050")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006F")]
	public Type Test
	{
		[Token(Token = "0x6000301")]
		[Address(RVA = "0x44B0060", Offset = "0x44B0060", VA = "0x44B0060")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000070")]
	public Expression Body
	{
		[Token(Token = "0x6000302")]
		[Address(RVA = "0x44B0070", Offset = "0x44B0070", VA = "0x44B0070")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	public Expression Filter
	{
		[Token(Token = "0x6000303")]
		[Address(RVA = "0x44B0080", Offset = "0x44B0080", VA = "0x44B0080")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002FF")]
	[Address(RVA = "0x44AFFE0", Offset = "0x44AFFE0", VA = "0x44AFFE0")]
	internal CatchBlock(Type test, ParameterExpression variable, Expression body, Expression filter)
	{
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x44B0090", Offset = "0x44B0090", VA = "0x44B0090", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000305")]
	[Address(RVA = "0x44B0170", Offset = "0x44B0170", VA = "0x44B0170")]
	public CatchBlock Update(ParameterExpression variable, Expression filter, Expression body)
	{
		return null;
	}
}
