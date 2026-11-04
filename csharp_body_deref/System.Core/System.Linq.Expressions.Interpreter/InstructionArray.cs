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

[Token(Token = "0x200015F")]
[DebuggerTypeProxy(typeof(DebugView))]
internal readonly struct InstructionArray
{
	[Token(Token = "0x2000160")]
	internal sealed class DebugView
	{
		[Token(Token = "0x40002C8")]
		[FieldOffset(Offset = "0x10")]
		private readonly InstructionArray _array;

		[Token(Token = "0x600075E")]
		[Address(RVA = "0x2444710", Offset = "0x2442D10", VA = "0x182444710")]
		public DebugView(InstructionArray array)
		{
		}

		[Token(Token = "0x600075F")]
		[Address(RVA = "0x2444640", Offset = "0x2442C40", VA = "0x182444640")]
		public InstructionList.DebugView.InstructionView[] GetInstructionViews(bool includeDebugCookies = false)
		{
			return null;
		}
	}

	[Token(Token = "0x40002C2")]
	[FieldOffset(Offset = "0x0")]
	internal readonly int MaxStackDepth;

	[Token(Token = "0x40002C3")]
	[FieldOffset(Offset = "0x4")]
	internal readonly int MaxContinuationDepth;

	[Token(Token = "0x40002C4")]
	[FieldOffset(Offset = "0x8")]
	internal readonly Instruction[] Instructions;

	[Token(Token = "0x40002C5")]
	[FieldOffset(Offset = "0x10")]
	internal readonly object[] Objects;

	[Token(Token = "0x40002C6")]
	[FieldOffset(Offset = "0x18")]
	internal readonly RuntimeLabel[] Labels;

	[Token(Token = "0x40002C7")]
	[FieldOffset(Offset = "0x20")]
	internal readonly List<KeyValuePair<int, object>> DebugCookies;

	[Token(Token = "0x600075D")]
	[Address(RVA = "0x2449B90", Offset = "0x2448190", VA = "0x182449B90")]
	internal InstructionArray(int maxStackDepth, int maxContinuationDepth, Instruction[] instructions, object[] objects, RuntimeLabel[] labels, List<KeyValuePair<int, object>> debugCookies)
	{
	}
}
