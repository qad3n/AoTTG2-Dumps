// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.DebugInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections.Generic;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000191")]
internal sealed class DebugInfo
{
	[Token(Token = "0x2000192")]
	private class DebugInfoComparer : IComparer<DebugInfo>
	{
		[Token(Token = "0x6000872")]
		[Address(RVA = "0x2443DE0", Offset = "0x24423E0", VA = "0x182443DE0", Slot = "4")]
		private int System_002ECollections_002EGeneric_002EIComparer_003CSystem_002ELinq_002EExpressions_002EInterpreter_002EDebugInfo_003E_002ECompare(DebugInfo d1, DebugInfo d2)
		{
			return default(int);
		}

		[Token(Token = "0x6000873")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
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

	[Token(Token = "0x600086E")]
	[Address(RVA = "0x2443E20", Offset = "0x2442420", VA = "0x182443E20")]
	public static DebugInfo GetMatchingDebugInfo(DebugInfo[] debugInfos, int index)
	{
		return null;
	}

	[Token(Token = "0x600086F")]
	[Address(RVA = "0x2443F10", Offset = "0x2442510", VA = "0x182443F10", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000870")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public DebugInfo()
	{
	}
}
