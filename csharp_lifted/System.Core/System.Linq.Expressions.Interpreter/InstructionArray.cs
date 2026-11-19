// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.InstructionArray
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using System.Diagnostics;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000160")]
[DebuggerTypeProxy(typeof(DebugView))]
internal readonly struct InstructionArray
{
	[Token(Token = "0x2000161")]
	internal sealed class DebugView
	{
		[Token(Token = "0x40002D1")]
		[FieldOffset(Offset = "0x10")]
		private readonly InstructionArray _array;

		[Token(Token = "0x6000769")]
		[Address(RVA = "0x5DE8CE0", Offset = "0x5DE7CE0", VA = "0x5DE8CE0")]
		public DebugView(InstructionArray array)
		{
		}

		[Token(Token = "0x600076A")]
		[Address(RVA = "0x5DE8DA0", Offset = "0x5DE7DA0", VA = "0x5DE8DA0")]
		public InstructionList.DebugView.InstructionView[] GetInstructionViews(bool includeDebugCookies = false)
		{
			return null;
		}
	}

	[Token(Token = "0x40002CB")]
	[FieldOffset(Offset = "0x0")]
	internal readonly int MaxStackDepth;

	[Token(Token = "0x40002CC")]
	[FieldOffset(Offset = "0x4")]
	internal readonly int MaxContinuationDepth;

	[Token(Token = "0x40002CD")]
	[FieldOffset(Offset = "0x8")]
	internal readonly Instruction[] Instructions;

	[Token(Token = "0x40002CE")]
	[FieldOffset(Offset = "0x10")]
	internal readonly object[] Objects;

	[Token(Token = "0x40002CF")]
	[FieldOffset(Offset = "0x18")]
	internal readonly RuntimeLabel[] Labels;

	[Token(Token = "0x40002D0")]
	[FieldOffset(Offset = "0x20")]
	internal readonly List<KeyValuePair<int, object>> DebugCookies;

	[Token(Token = "0x6000768")]
	[Address(RVA = "0x5DE8C70", Offset = "0x5DE7C70", VA = "0x5DE8C70")]
	internal InstructionArray(int maxStackDepth, int maxContinuationDepth, Instruction[] instructions, object[] objects, RuntimeLabel[] labels, List<KeyValuePair<int, object>> debugCookies)
	{
	}
}
