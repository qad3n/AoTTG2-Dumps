// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.BranchLabel
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x20000E9")]
internal sealed class BranchLabel
{
	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x10")]
	private int _targetIndex;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x14")]
	private int _stackDepth;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x18")]
	private int _continuationStackDepth;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _forwardBranchFixups;

	[Token(Token = "0x17000154")]
	internal int LabelIndex
	{
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x44C5A70", Offset = "0x44C5A70", VA = "0x44C5A70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x44C5A80", Offset = "0x44C5A80", VA = "0x44C5A80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	internal bool HasRuntimeLabel
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x44C5A90", Offset = "0x44C5A90", VA = "0x44C5A90")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000156")]
	internal int TargetIndex
	{
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x44C5AA0", Offset = "0x44C5AA0", VA = "0x44C5AA0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x44C5AB0", Offset = "0x44C5AB0", VA = "0x44C5AB0")]
	internal RuntimeLabel ToRuntimeLabel()
	{
		return default(RuntimeLabel);
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x44C5AC0", Offset = "0x44C5AC0", VA = "0x44C5AC0")]
	internal void Mark(InstructionList instructions)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x44C5C90", Offset = "0x44C5C90", VA = "0x44C5C90")]
	internal void AddBranch(InstructionList instructions, int branchIndex)
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x44C5C70", Offset = "0x44C5C70", VA = "0x44C5C70")]
	internal void FixupBranch(InstructionList instructions, int branchIndex)
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x44C5D90", Offset = "0x44C5D90", VA = "0x44C5D90")]
	public BranchLabel()
	{
	}
}
