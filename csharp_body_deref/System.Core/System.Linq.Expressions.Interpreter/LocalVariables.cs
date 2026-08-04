// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.LocalVariables
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
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
		[Address(RVA = "0x44F7C30", Offset = "0x44F7C30", VA = "0x44F7C30")]
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
		[Address(RVA = "0x44F7E60", Offset = "0x44F7E60", VA = "0x44F7E60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001FD")]
	internal Dictionary<ParameterExpression, LocalVariable> ClosureVariables
	{
		[Token(Token = "0x60009AE")]
		[Address(RVA = "0x44F7F40", Offset = "0x44F7F40", VA = "0x44F7F40")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009A9")]
	[Address(RVA = "0x44F7940", Offset = "0x44F7940", VA = "0x44F7940")]
	public LocalDefinition DefineLocal(ParameterExpression variable, int start)
	{
		return default(LocalDefinition);
	}

	[Token(Token = "0x60009AA")]
	[Address(RVA = "0x44F1A60", Offset = "0x44F1A60", VA = "0x44F1A60")]
	public void UndefineLocal(LocalDefinition definition, int end)
	{
	}

	[Token(Token = "0x60009AB")]
	[Address(RVA = "0x44F7C90", Offset = "0x44F7C90", VA = "0x44F7C90")]
	internal void Box(ParameterExpression variable, InstructionList instructions)
	{
	}

	[Token(Token = "0x60009AD")]
	[Address(RVA = "0x44F7E70", Offset = "0x44F7E70", VA = "0x44F7E70")]
	public bool TryGetLocalOrClosure(ParameterExpression var, out LocalVariable local)
	{
		return default(bool);
	}

	[Token(Token = "0x60009AF")]
	[Address(RVA = "0x44F7F50", Offset = "0x44F7F50", VA = "0x44F7F50")]
	internal LocalVariable AddClosureVariable(ParameterExpression variable)
	{
		return null;
	}

	[Token(Token = "0x60009B0")]
	[Address(RVA = "0x44F8060", Offset = "0x44F8060", VA = "0x44F8060")]
	public LocalVariables()
	{
	}
}
