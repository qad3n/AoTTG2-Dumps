// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.QuoteInstruction
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000243")]
internal sealed class QuoteInstruction : Instruction
{
	[Token(Token = "0x2000244")]
	private sealed class ExpressionQuoter : ExpressionVisitor
	{
		[Token(Token = "0x4000427")]
		[FieldOffset(Offset = "0x10")]
		private readonly Dictionary<ParameterExpression, LocalVariable> _variables;

		[Token(Token = "0x4000428")]
		[FieldOffset(Offset = "0x18")]
		private readonly InterpretedFrame _frame;

		[Token(Token = "0x4000429")]
		[FieldOffset(Offset = "0x20")]
		private readonly Stack<HashSet<ParameterExpression>> _shadowedVars;

		[Token(Token = "0x6000B27")]
		[Address(RVA = "0x246F100", Offset = "0x246D700", VA = "0x18246F100")]
		internal ExpressionQuoter(Dictionary<ParameterExpression, LocalVariable> hoistedVariables, InterpretedFrame frame)
		{
		}

		[Token(Token = "0x6000B28")]
		protected internal override Expression VisitLambda<T>(Expression<T> node)
		{
			return null;
		}

		[Token(Token = "0x6000B29")]
		[Address(RVA = "0x246EC20", Offset = "0x246D220", VA = "0x18246EC20", Slot = "6")]
		protected internal override Expression VisitBlock(BlockExpression node)
		{
			return null;
		}

		[Token(Token = "0x6000B2A")]
		[Address(RVA = "0x246EDA0", Offset = "0x246D3A0", VA = "0x18246EDA0", Slot = "22")]
		protected override CatchBlock VisitCatchBlock(CatchBlock node)
		{
			return null;
		}

		[Token(Token = "0x6000B2B")]
		[Address(RVA = "0x246EF30", Offset = "0x246D530", VA = "0x18246EF30", Slot = "21")]
		protected internal override Expression VisitParameter(ParameterExpression node)
		{
			return null;
		}

		[Token(Token = "0x6000B2C")]
		[Address(RVA = "0x246EB20", Offset = "0x246D120", VA = "0x18246EB20")]
		private IStrongBox GetBox(ParameterExpression variable)
		{
			return null;
		}
	}

	[Token(Token = "0x4000425")]
	[FieldOffset(Offset = "0x10")]
	private readonly Expression _operand;

	[Token(Token = "0x4000426")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<ParameterExpression, LocalVariable> _hoistedVariables;

	[Token(Token = "0x17000248")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000B24")]
		[Address(RVA = "0x564040", Offset = "0x562640", VA = "0x180564040", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000249")]
	public override string InstructionName
	{
		[Token(Token = "0x6000B25")]
		[Address(RVA = "0x247C9D0", Offset = "0x247AFD0", VA = "0x18247C9D0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B23")]
	[Address(RVA = "0x1A291F0", Offset = "0x1A277F0", VA = "0x181A291F0")]
	public QuoteInstruction(Expression operand, Dictionary<ParameterExpression, LocalVariable> hoistedVariables)
	{
	}

	[Token(Token = "0x6000B26")]
	[Address(RVA = "0x247C890", Offset = "0x247AE90", VA = "0x18247C890", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
