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
		[Token(Token = "0x60002FF")]
		[Address(RVA = "0x8FB3A0", Offset = "0x8F99A0", VA = "0x1808FB3A0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700006F")]
	public Type Test
	{
		[Token(Token = "0x6000300")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000070")]
	public Expression Body
	{
		[Token(Token = "0x6000301")]
		[Address(RVA = "0x5852B0", Offset = "0x5838B0", VA = "0x1805852B0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000071")]
	public Expression Filter
	{
		[Token(Token = "0x6000302")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60002FE")]
	[Address(RVA = "0x242B1A0", Offset = "0x24297A0", VA = "0x18242B1A0")]
	internal CatchBlock(Type test, ParameterExpression variable, Expression body, Expression filter)
	{
	}

	[Token(Token = "0x6000303")]
	[Address(RVA = "0x242B040", Offset = "0x2429640", VA = "0x18242B040", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000304")]
	[Address(RVA = "0x242B110", Offset = "0x2429710", VA = "0x18242B110")]
	public CatchBlock Update(ParameterExpression variable, Expression filter, Expression body)
	{
		return null;
	}
}
