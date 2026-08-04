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

		[Token(Token = "0x6000B28")]
		[Address(RVA = "0x4506860", Offset = "0x4506860", VA = "0x4506860")]
		internal ExpressionQuoter(Dictionary<ParameterExpression, LocalVariable> hoistedVariables, InterpretedFrame frame)
		{
		}

		[Token(Token = "0x6000B29")]
		protected internal override Expression VisitLambda<T>(Expression<T> node)
		{
			return null;
		}

		[Token(Token = "0x6000B2A")]
		[Address(RVA = "0x4506910", Offset = "0x4506910", VA = "0x4506910", Slot = "6")]
		protected internal override Expression VisitBlock(BlockExpression node)
		{
			return null;
		}

		[Token(Token = "0x6000B2B")]
		[Address(RVA = "0x4506A90", Offset = "0x4506A90", VA = "0x4506A90", Slot = "22")]
		protected override CatchBlock VisitCatchBlock(CatchBlock node)
		{
			return null;
		}

		[Token(Token = "0x6000B2C")]
		[Address(RVA = "0x4506C20", Offset = "0x4506C20", VA = "0x4506C20", Slot = "21")]
		protected internal override Expression VisitParameter(ParameterExpression node)
		{
			return null;
		}

		[Token(Token = "0x6000B2D")]
		[Address(RVA = "0x4506CE0", Offset = "0x4506CE0", VA = "0x4506CE0")]
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
		[Token(Token = "0x6000B25")]
		[Address(RVA = "0x4506780", Offset = "0x4506780", VA = "0x4506780", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000249")]
	public override string InstructionName
	{
		[Token(Token = "0x6000B26")]
		[Address(RVA = "0x4506790", Offset = "0x4506790", VA = "0x4506790", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B24")]
	[Address(RVA = "0x4506740", Offset = "0x4506740", VA = "0x4506740")]
	public QuoteInstruction(Expression operand, Dictionary<ParameterExpression, LocalVariable> hoistedVariables)
	{
	}

	[Token(Token = "0x6000B27")]
	[Address(RVA = "0x45067C0", Offset = "0x45067C0", VA = "0x45067C0", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
