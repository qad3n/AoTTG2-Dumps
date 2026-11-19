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

[Token(Token = "0x20000EA")]
internal sealed class BranchLabel
{
	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x10")]
	private int _targetIndex;

	[Token(Token = "0x4000237")]
	[FieldOffset(Offset = "0x14")]
	private int _stackDepth;

	[Token(Token = "0x4000238")]
	[FieldOffset(Offset = "0x18")]
	private int _continuationStackDepth;

	[Token(Token = "0x4000239")]
	[FieldOffset(Offset = "0x20")]
	private List<int> _forwardBranchFixups;

	[Token(Token = "0x17000156")]
	internal int LabelIndex
	{
		[Token(Token = "0x60005EF")]
		[Address(RVA = "0x5DDB810", Offset = "0x5DDA810", VA = "0x5DDB810")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60005F0")]
		[Address(RVA = "0x5DDB820", Offset = "0x5DDA820", VA = "0x5DDB820")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000157")]
	internal bool HasRuntimeLabel
	{
		[Token(Token = "0x60005F1")]
		[Address(RVA = "0x5DDB830", Offset = "0x5DDA830", VA = "0x5DDB830")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000158")]
	internal int TargetIndex
	{
		[Token(Token = "0x60005F2")]
		[Address(RVA = "0x5DDB840", Offset = "0x5DDA840", VA = "0x5DDB840")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60005F3")]
	[Address(RVA = "0x5DDB850", Offset = "0x5DDA850", VA = "0x5DDB850")]
	internal RuntimeLabel ToRuntimeLabel()
	{
		return default(RuntimeLabel);
	}

	[Token(Token = "0x60005F4")]
	[Address(RVA = "0x5DDB860", Offset = "0x5DDA860", VA = "0x5DDB860")]
	internal void Mark(InstructionList instructions)
	{
	}

	[Token(Token = "0x60005F5")]
	[Address(RVA = "0x5DDBA00", Offset = "0x5DDAA00", VA = "0x5DDBA00")]
	internal void AddBranch(InstructionList instructions, int branchIndex)
	{
	}

	[Token(Token = "0x60005F6")]
	[Address(RVA = "0x5DDB9E0", Offset = "0x5DDA9E0", VA = "0x5DDB9E0")]
	internal void FixupBranch(InstructionList instructions, int branchIndex)
	{
	}

	[Token(Token = "0x60005F7")]
	[Address(RVA = "0x5DDBB00", Offset = "0x5DDAB00", VA = "0x5DDBB00")]
	public BranchLabel()
	{
	}
}
