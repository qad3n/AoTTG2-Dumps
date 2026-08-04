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

[Token(Token = "0x2000166")]
internal sealed class Interpreter
{
	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x0")]
	internal static readonly object NoValue;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x10")]
	private readonly InstructionArray _instructions;

	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x38")]
	internal readonly object[] _objects;

	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0x40")]
	internal readonly RuntimeLabel[] _labels;

	[Token(Token = "0x40002FB")]
	[FieldOffset(Offset = "0x48")]
	internal readonly DebugInfo[] _debugInfos;

	[Token(Token = "0x170001BE")]
	internal string Name
	{
		[Token(Token = "0x60007FB")]
		[Address(RVA = "0x44DB110", Offset = "0x44DB110", VA = "0x44DB110")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BF")]
	internal int LocalCount
	{
		[Token(Token = "0x60007FC")]
		[Address(RVA = "0x44DB120", Offset = "0x44DB120", VA = "0x44DB120")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C0")]
	internal int ClosureSize
	{
		[Token(Token = "0x60007FD")]
		[Address(RVA = "0x44DB130", Offset = "0x44DB130", VA = "0x44DB130")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170001C1")]
	internal InstructionArray Instructions
	{
		[Token(Token = "0x60007FE")]
		[Address(RVA = "0x44DB170", Offset = "0x44DB170", VA = "0x44DB170")]
		get
		{
			return default(InstructionArray);
		}
	}

	[Token(Token = "0x170001C2")]
	internal Dictionary<ParameterExpression, LocalVariable> ClosureVariables
	{
		[Token(Token = "0x60007FF")]
		[Address(RVA = "0x44DB190", Offset = "0x44DB190", VA = "0x44DB190")]
		[CompilerGenerated]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x44DB050", Offset = "0x44DB050", VA = "0x44DB050")]
	internal Interpreter(string name, LocalVariables locals, InstructionArray instructions, DebugInfo[] debugInfos)
	{
	}

	[MethodImpl((MethodImplOptions)8)]
	[Token(Token = "0x6000800")]
	[Address(RVA = "0x44DB1A0", Offset = "0x44DB1A0", VA = "0x44DB1A0")]
	public void Run(InterpretedFrame frame)
	{
	}
}
