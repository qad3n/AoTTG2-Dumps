using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000191")]
internal sealed class DebugInfo
{
	[Token(Token = "0x2000192")]
	private class DebugInfoComparer : IComparer<DebugInfo>
	{
		[Token(Token = "0x6000873")]
		[Address(RVA = "0x41BA470", Offset = "0x41BA470", VA = "0x41BA470", Slot = "4")]
		private int System_002ECollections_002EGeneric_002EIComparer_003CSystem_002ELinq_002EExpressions_002EInterpreter_002EDebugInfo_003E_002ECompare(DebugInfo d1, DebugInfo d2)
		{
			return default(int);
		}

		[Token(Token = "0x6000874")]
		[Address(RVA = "0x41BA460", Offset = "0x41BA460", VA = "0x41BA460")]
		public DebugInfoComparer()
		{
		}
	}

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x10")]
	public int StartLine;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x14")]
	public int EndLine;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x18")]
	public int Index;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x20")]
	public string FileName;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x28")]
	public bool IsClear;

	[Token(Token = "0x4000360")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DebugInfoComparer s_debugComparer;

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x41B5040", Offset = "0x41B5040", VA = "0x41B5040")]
	public static DebugInfo GetMatchingDebugInfo(DebugInfo[] debugInfos, int index)
	{
		return null;
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x41BA1B0", Offset = "0x41BA1B0", VA = "0x41BA1B0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000871")]
	[Address(RVA = "0x41BA1A0", Offset = "0x41BA1A0", VA = "0x41BA1A0")]
	public DebugInfo()
	{
	}
}
