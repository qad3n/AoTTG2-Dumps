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

[Token(Token = "0x20001BA")]
internal sealed class LocalVariables
{
	[Token(Token = "0x20001BB")]
	private sealed class VariableScope
	{
		[Token(Token = "0x40003A2")]
		[FieldOffset(Offset = "0x10")]
		public readonly int Start;

		[Token(Token = "0x40003A3")]
		[FieldOffset(Offset = "0x14")]
		public int Stop;

		[Token(Token = "0x40003A4")]
		[FieldOffset(Offset = "0x18")]
		public readonly LocalVariable Variable;

		[Token(Token = "0x40003A5")]
		[FieldOffset(Offset = "0x20")]
		public readonly VariableScope Parent;

		[Token(Token = "0x40003A6")]
		[FieldOffset(Offset = "0x28")]
		public List<VariableScope> ChildScopes;

		[Token(Token = "0x60009BB")]
		[Address(RVA = "0x5E0CF90", Offset = "0x5E0BF90", VA = "0x5E0CF90")]
		public VariableScope(LocalVariable variable, int start, VariableScope parent)
		{
		}
	}

	[Token(Token = "0x400039E")]
	[FieldOffset(Offset = "0x10")]
	private readonly HybridReferenceDictionary<ParameterExpression, VariableScope> _variables;

	[Token(Token = "0x400039F")]
	[FieldOffset(Offset = "0x18")]
	private Dictionary<ParameterExpression, LocalVariable> _closureVariables;

	[Token(Token = "0x40003A0")]
	[FieldOffset(Offset = "0x20")]
	private int _localCount;

	[Token(Token = "0x40003A1")]
	[FieldOffset(Offset = "0x24")]
	private int _maxLocalCount;

	[Token(Token = "0x170001FE")]
	public int LocalCount
	{
		[Token(Token = "0x60009B6")]
		[Address(RVA = "0x5E0D1C0", Offset = "0x5E0C1C0", VA = "0x5E0D1C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001FF")]
	internal Dictionary<ParameterExpression, LocalVariable> ClosureVariables
	{
		[Token(Token = "0x60009B8")]
		[Address(RVA = "0x5E0D290", Offset = "0x5E0C290", VA = "0x5E0D290")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60009B3")]
	[Address(RVA = "0x5E0CCB0", Offset = "0x5E0BCB0", VA = "0x5E0CCB0")]
	public LocalDefinition DefineLocal(ParameterExpression variable, int start)
	{
		return default(LocalDefinition);
	}

	[Token(Token = "0x60009B4")]
	[Address(RVA = "0x5E07120", Offset = "0x5E06120", VA = "0x5E07120")]
	public void UndefineLocal(LocalDefinition definition, int end)
	{
	}

	[Token(Token = "0x60009B5")]
	[Address(RVA = "0x5E0CFF0", Offset = "0x5E0BFF0", VA = "0x5E0CFF0")]
	internal void Box(ParameterExpression variable, InstructionList instructions)
	{
	}

	[Token(Token = "0x60009B7")]
	[Address(RVA = "0x5E0D1D0", Offset = "0x5E0C1D0", VA = "0x5E0D1D0")]
	public bool TryGetLocalOrClosure(ParameterExpression var, out LocalVariable local)
	{
		return default(bool);
	}

	[Token(Token = "0x60009B9")]
	[Address(RVA = "0x5E0D2A0", Offset = "0x5E0C2A0", VA = "0x5E0D2A0")]
	internal LocalVariable AddClosureVariable(ParameterExpression variable)
	{
		return null;
	}

	[Token(Token = "0x60009BA")]
	[Address(RVA = "0x5E0D3B0", Offset = "0x5E0C3B0", VA = "0x5E0D3B0")]
	public LocalVariables()
	{
	}
}
