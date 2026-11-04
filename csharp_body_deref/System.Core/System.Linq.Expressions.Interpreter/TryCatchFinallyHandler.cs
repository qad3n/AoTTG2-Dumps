// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.TryCatchFinallyHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200018E")]
internal sealed class TryCatchFinallyHandler
{
	[Token(Token = "0x4000351")]
	[FieldOffset(Offset = "0x10")]
	internal readonly int TryStartIndex;

	[Token(Token = "0x4000352")]
	[FieldOffset(Offset = "0x14")]
	internal readonly int TryEndIndex;

	[Token(Token = "0x4000353")]
	[FieldOffset(Offset = "0x18")]
	internal readonly int FinallyStartIndex;

	[Token(Token = "0x4000354")]
	[FieldOffset(Offset = "0x1C")]
	internal readonly int FinallyEndIndex;

	[Token(Token = "0x4000355")]
	[FieldOffset(Offset = "0x20")]
	internal readonly int GotoEndTargetIndex;

	[Token(Token = "0x4000356")]
	[FieldOffset(Offset = "0x28")]
	private readonly ExceptionHandler[] _handlers;

	[Token(Token = "0x170001CF")]
	internal bool IsFinallyBlockExist
	{
		[Token(Token = "0x6000865")]
		[Address(RVA = "0x2465C80", Offset = "0x2464280", VA = "0x182465C80")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D0")]
	internal ExceptionHandler[] Handlers
	{
		[Token(Token = "0x6000866")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D1")]
	internal bool IsCatchBlockExist
	{
		[Token(Token = "0x6000867")]
		[Address(RVA = "0x19B68F0", Offset = "0x19B4EF0", VA = "0x1819B68F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000868")]
	[Address(RVA = "0x2465C30", Offset = "0x2464230", VA = "0x182465C30")]
	internal TryCatchFinallyHandler(int tryStart, int tryEnd, int gotoEndTargetIndex, ExceptionHandler[] handlers)
	{
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x2465BE0", Offset = "0x24641E0", VA = "0x182465BE0")]
	internal TryCatchFinallyHandler(int tryStart, int tryEnd, int gotoEndLabelIndex, int finallyStart, int finallyEnd, ExceptionHandler[] handlers)
	{
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x2465A60", Offset = "0x2464060", VA = "0x182465A60")]
	internal bool HasHandler(InterpretedFrame frame, Exception exception, out ExceptionHandler handler, out object unwrappedException)
	{
		return default(bool);
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x2465810", Offset = "0x2463E10", VA = "0x182465810")]
	private static bool FilterPasses(InterpretedFrame frame, ref object exception, ExceptionFilter filter)
	{
		return default(bool);
	}
}
