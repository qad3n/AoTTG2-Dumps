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

		[Token(Token = "0x600075F")]
		[Address(RVA = "0x41ADF60", Offset = "0x41ADF60", VA = "0x41ADF60")]
		public DebugView(InstructionArray array)
		{
		}

		[Token(Token = "0x6000760")]
		[Address(RVA = "0x41AE020", Offset = "0x41AE020", VA = "0x41AE020")]
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

	[Token(Token = "0x600075E")]
	[Address(RVA = "0x41ADEF0", Offset = "0x41ADEF0", VA = "0x41ADEF0")]
	internal InstructionArray(int maxStackDepth, int maxContinuationDepth, Instruction[] instructions, object[] objects, RuntimeLabel[] labels, List<KeyValuePair<int, object>> debugCookies)
	{
	}
}
