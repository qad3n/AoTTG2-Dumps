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
		[Token(Token = "0x60005E4")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005E5")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	internal bool HasRuntimeLabel
	{
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x2429E10", Offset = "0x2428410", VA = "0x182429E10")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000156")]
	internal int TargetIndex
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005E8")]
	[Address(RVA = "0x2429DC0", Offset = "0x24283C0", VA = "0x182429DC0")]
	internal RuntimeLabel ToRuntimeLabel()
	{
		return default(RuntimeLabel);
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x2429C50", Offset = "0x2428250", VA = "0x182429C50")]
	internal void Mark(InstructionList instructions)
	{
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x2429AF0", Offset = "0x24280F0", VA = "0x182429AF0")]
	internal void AddBranch(InstructionList instructions, int branchIndex)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x2429C20", Offset = "0x2428220", VA = "0x182429C20")]
	internal void FixupBranch(InstructionList instructions, int branchIndex)
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x2429DE0", Offset = "0x24283E0", VA = "0x182429DE0")]
	public BranchLabel()
	{
	}
}
