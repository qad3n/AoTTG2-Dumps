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

[Token(Token = "0x2000244")]
internal sealed class QuoteInstruction : Instruction
{
	[Token(Token = "0x2000245")]
	private sealed class ExpressionQuoter : ExpressionVisitor
	{
		[Token(Token = "0x4000430")]
		[FieldOffset(Offset = "0x10")]
		private readonly Dictionary<ParameterExpression, LocalVariable> _variables;

		[Token(Token = "0x4000431")]
		[FieldOffset(Offset = "0x18")]
		private readonly InterpretedFrame _frame;

		[Token(Token = "0x4000432")]
		[FieldOffset(Offset = "0x20")]
		private readonly Stack<HashSet<ParameterExpression>> _shadowedVars;

		[Token(Token = "0x6000B32")]
		[Address(RVA = "0x5E1BAB0", Offset = "0x5E1AAB0", VA = "0x5E1BAB0")]
		internal ExpressionQuoter(Dictionary<ParameterExpression, LocalVariable> hoistedVariables, InterpretedFrame frame)
		{
		}

		[Token(Token = "0x6000B33")]
		protected internal override Expression VisitLambda<T>(Expression<T> node)
		{
			return null;
		}

		[Token(Token = "0x6000B34")]
		[Address(RVA = "0x5E1BB60", Offset = "0x5E1AB60", VA = "0x5E1BB60", Slot = "6")]
		protected internal override Expression VisitBlock(BlockExpression node)
		{
			return null;
		}

		[Token(Token = "0x6000B35")]
		[Address(RVA = "0x5E1BCE0", Offset = "0x5E1ACE0", VA = "0x5E1BCE0", Slot = "22")]
		protected override CatchBlock VisitCatchBlock(CatchBlock node)
		{
			return null;
		}

		[Token(Token = "0x6000B36")]
		[Address(RVA = "0x5E1BE70", Offset = "0x5E1AE70", VA = "0x5E1BE70", Slot = "21")]
		protected internal override Expression VisitParameter(ParameterExpression node)
		{
			return null;
		}

		[Token(Token = "0x6000B37")]
		[Address(RVA = "0x5E1BF30", Offset = "0x5E1AF30", VA = "0x5E1BF30")]
		private IStrongBox GetBox(ParameterExpression variable)
		{
			return null;
		}
	}

	[Token(Token = "0x400042E")]
	[FieldOffset(Offset = "0x10")]
	private readonly Expression _operand;

	[Token(Token = "0x400042F")]
	[FieldOffset(Offset = "0x18")]
	private readonly Dictionary<ParameterExpression, LocalVariable> _hoistedVariables;

	[Token(Token = "0x1700024A")]
	public override int ProducedStack
	{
		[Token(Token = "0x6000B2F")]
		[Address(RVA = "0x5E1B9D0", Offset = "0x5E1A9D0", VA = "0x5E1B9D0", Slot = "5")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700024B")]
	public override string InstructionName
	{
		[Token(Token = "0x6000B30")]
		[Address(RVA = "0x5E1B9E0", Offset = "0x5E1A9E0", VA = "0x5E1B9E0", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000B2E")]
	[Address(RVA = "0x5E1B990", Offset = "0x5E1A990", VA = "0x5E1B990")]
	public QuoteInstruction(Expression operand, Dictionary<ParameterExpression, LocalVariable> hoistedVariables)
	{
	}

	[Token(Token = "0x6000B31")]
	[Address(RVA = "0x5E1BA10", Offset = "0x5E1AA10", VA = "0x5E1BA10", Slot = "8")]
	public override int Run(InterpretedFrame frame)
	{
		return default(int);
	}
}
