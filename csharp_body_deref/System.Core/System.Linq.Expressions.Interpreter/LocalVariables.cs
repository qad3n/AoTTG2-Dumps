using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20001B9")]
internal sealed class LocalVariables
{
	[Token(Token = "0x20001BA")]
	private sealed class VariableScope
	{
		[Token(Token = "0x4000399")]
		[FieldOffset(Offset = "0x10")]
		public readonly int Start;

		[Token(Token = "0x400039A")]
		[FieldOffset(Offset = "0x14")]
		public int Stop;

		[Token(Token = "0x400039B")]
		[FieldOffset(Offset = "0x18")]
		public readonly LocalVariable Variable;

		[Token(Token = "0x400039C")]
		[FieldOffset(Offset = "0x20")]
		public readonly VariableScope Parent;

		[Token(Token = "0x400039D")]
		[FieldOffset(Offset = "0x28")]
		public List<VariableScope> ChildScopes;

		[Token(Token = "0x60009B1")]
		[Address(RVA = "0x41D2B30", Offset = "0x41D2B30", VA = "0x41D2B30")]
		public VariableScope(LocalVariable variable, int start, VariableScope parent)
		{
		}
	}

	[Token(Token = "0x4000395")]
	[FieldOffset(Offset = "0x10")]
	private readonly HybridReferenceDictionary<ParameterExpression, VariableScope> _variables;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<ParameterExpression, LocalVariable> _closureVariables;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x20")]
	private int _localCount;

	[Token(Token = "0x4000398")]
	[FieldOffset(Offset = "0x24")]
	private int _maxLocalCount;

	[Token(Token = "0x170001FC")]
	public int LocalCount
	{
		[Token(Token = "0x60009AC")]
		[Address(RVA = "0x41D2D60", Offset = "0x41D2D60", VA = "0x41D2D60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001FD")]
	internal Dictionary<ParameterExpression, LocalVariable> ClosureVariables
	{
		[Token(Token = "0x60009AE")]
		[Address(RVA = "0x41D2E40", Offset = "0x41D2E40", VA = "0x41D2E40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x41D2840", Offset = "0x41D2840", VA = "0x41D2840")]
	public LocalDefinition DefineLocal(ParameterExpression variable, int start)
	{
		return default(LocalDefinition);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x41CC960", Offset = "0x41CC960", VA = "0x41CC960")]
	public void UndefineLocal(LocalDefinition definition, int end)
	{
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x41D2B90", Offset = "0x41D2B90", VA = "0x41D2B90")]
	internal void Box(ParameterExpression variable, InstructionList instructions)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x41D2D70", Offset = "0x41D2D70", VA = "0x41D2D70")]
	public bool TryGetLocalOrClosure(ParameterExpression var, out LocalVariable local)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x41D2E50", Offset = "0x41D2E50", VA = "0x41D2E50")]
	internal LocalVariable AddClosureVariable(ParameterExpression variable)
	{
		return null;
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x41D2F60", Offset = "0x41D2F60", VA = "0x41D2F60")]
	public LocalVariables()
	{
	}
}
