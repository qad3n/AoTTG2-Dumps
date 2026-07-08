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
		[Address(RVA = "0x41A0970", Offset = "0x41A0970", VA = "0x41A0970")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005E6")]
		[Address(RVA = "0x41A0980", Offset = "0x41A0980", VA = "0x41A0980")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000155")]
	internal bool HasRuntimeLabel
	{
		[Token(Token = "0x60005E7")]
		[Address(RVA = "0x41A0990", Offset = "0x41A0990", VA = "0x41A0990")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000156")]
	internal int TargetIndex
	{
		[Token(Token = "0x60005E8")]
		[Address(RVA = "0x41A09A0", Offset = "0x41A09A0", VA = "0x41A09A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005E9")]
	[Address(RVA = "0x41A09B0", Offset = "0x41A09B0", VA = "0x41A09B0")]
	internal RuntimeLabel ToRuntimeLabel()
	{
		return default(RuntimeLabel);
	}

	[Token(Token = "0x60005EA")]
	[Address(RVA = "0x41A09C0", Offset = "0x41A09C0", VA = "0x41A09C0")]
	internal void Mark(InstructionList instructions)
	{
	}

	[Token(Token = "0x60005EB")]
	[Address(RVA = "0x41A0B90", Offset = "0x41A0B90", VA = "0x41A0B90")]
	internal void AddBranch(InstructionList instructions, int branchIndex)
	{
	}

	[Token(Token = "0x60005EC")]
	[Address(RVA = "0x41A0B70", Offset = "0x41A0B70", VA = "0x41A0B70")]
	internal void FixupBranch(InstructionList instructions, int branchIndex)
	{
	}

	[Token(Token = "0x60005ED")]
	[Address(RVA = "0x41A0C90", Offset = "0x41A0C90", VA = "0x41A0C90")]
	public BranchLabel()
	{
	}
}
