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

[Token(Token = "0x2000192")]
internal sealed class DebugInfo
{
	[Token(Token = "0x2000193")]
	private class DebugInfoComparer : IComparer<DebugInfo>
	{
		[Token(Token = "0x600087D")]
		[Address(RVA = "0x5DF4F90", Offset = "0x5DF3F90", VA = "0x5DF4F90", Slot = "4")]
		private int System_002ECollections_002EGeneric_002EIComparer_003CSystem_002ELinq_002EExpressions_002EInterpreter_002EDebugInfo_003E_002ECompare(DebugInfo d1, DebugInfo d2)
		{
			return default(int);
		}

		[Token(Token = "0x600087E")]
		[Address(RVA = "0x5DF4F80", Offset = "0x5DF3F80", VA = "0x5DF4F80")]
		public DebugInfoComparer()
		{
		}
	}

	[Token(Token = "0x4000364")]
	[FieldOffset(Offset = "0x10")]
	public int StartLine;

	[Token(Token = "0x4000365")]
	[FieldOffset(Offset = "0x14")]
	public int EndLine;

	[Token(Token = "0x4000366")]
	[FieldOffset(Offset = "0x18")]
	public int Index;

	[Token(Token = "0x4000367")]
	[FieldOffset(Offset = "0x20")]
	public string FileName;

	[Token(Token = "0x4000368")]
	[FieldOffset(Offset = "0x28")]
	public bool IsClear;

	[Token(Token = "0x4000369")]
	[FieldOffset(Offset = "0x0")]
	private static readonly DebugInfoComparer s_debugComparer;

	[Token(Token = "0x6000879")]
	[Address(RVA = "0x5DEFC30", Offset = "0x5DEEC30", VA = "0x5DEFC30")]
	public static DebugInfo GetMatchingDebugInfo(DebugInfo[] debugInfos, int index)
	{
		return null;
	}

	[Token(Token = "0x600087A")]
	[Address(RVA = "0x5DF4CC0", Offset = "0x5DF3CC0", VA = "0x5DF4CC0", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600087B")]
	[Address(RVA = "0x5DF4CB0", Offset = "0x5DF3CB0", VA = "0x5DF4CB0")]
	public DebugInfo()
	{
	}
}
