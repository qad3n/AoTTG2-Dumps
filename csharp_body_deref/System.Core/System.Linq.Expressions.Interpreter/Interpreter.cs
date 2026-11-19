// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.Interpreter
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000167")]
internal sealed class Interpreter
{
	[Token(Token = "0x4000300")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly object NoValue;

	[Token(Token = "0x4000301")]
	[FieldOffset(Offset = "0x10")]
	private readonly InstructionArray _instructions;

	[Token(Token = "0x4000302")]
	[FieldOffset(Offset = "0x38")]
	internal readonly object[] _objects;

	[Token(Token = "0x4000303")]
	[FieldOffset(Offset = "0x40")]
	internal readonly RuntimeLabel[] _labels;

	[Token(Token = "0x4000304")]
	[FieldOffset(Offset = "0x48")]
	internal readonly DebugInfo[] _debugInfos;

	[Token(Token = "0x170001C0")]
	internal string Name
	{
		[Token(Token = "0x6000805")]
		[Address(RVA = "0x5DF0BE0", Offset = "0x5DEFBE0", VA = "0x5DF0BE0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001C1")]
	internal int LocalCount
	{
		[Token(Token = "0x6000806")]
		[Address(RVA = "0x5DF0BF0", Offset = "0x5DEFBF0", VA = "0x5DF0BF0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C2")]
	internal int ClosureSize
	{
		[Token(Token = "0x6000807")]
		[Address(RVA = "0x5DF0C00", Offset = "0x5DEFC00", VA = "0x5DF0C00")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C3")]
	internal InstructionArray Instructions
	{
		[Token(Token = "0x6000808")]
		[Address(RVA = "0x5DF0C40", Offset = "0x5DEFC40", VA = "0x5DF0C40")]
		get
		{
			return default(InstructionArray);
		}
	}

	[Token(Token = "0x170001C4")]
	internal Dictionary<ParameterExpression, LocalVariable> ClosureVariables
	{
		[Token(Token = "0x6000809")]
		[Address(RVA = "0x5DF0C60", Offset = "0x5DEFC60", VA = "0x5DF0C60")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000804")]
	[Address(RVA = "0x5DF0B20", Offset = "0x5DEFB20", VA = "0x5DF0B20")]
	internal Interpreter(string name, LocalVariables locals, InstructionArray instructions, DebugInfo[] debugInfos)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x600080A")]
	[Address(RVA = "0x5DF0C70", Offset = "0x5DEFC70", VA = "0x5DF0C70")]
	public void Run(InterpretedFrame frame)
	{
	}
}
