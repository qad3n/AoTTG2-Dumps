// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.TryCatchFinallyHandler
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x200018F")]
internal sealed class TryCatchFinallyHandler
{
	[Token(Token = "0x400035A")]
	[FieldOffset(Offset = "0x10")]
	internal readonly int TryStartIndex;

	[Token(Token = "0x400035B")]
	[FieldOffset(Offset = "0x14")]
	internal readonly int TryEndIndex;

	[Token(Token = "0x400035C")]
	[FieldOffset(Offset = "0x18")]
	internal readonly int FinallyStartIndex;

	[Token(Token = "0x400035D")]
	[FieldOffset(Offset = "0x1C")]
	internal readonly int FinallyEndIndex;

	[Token(Token = "0x400035E")]
	[FieldOffset(Offset = "0x20")]
	internal readonly int GotoEndTargetIndex;

	[Token(Token = "0x400035F")]
	[FieldOffset(Offset = "0x28")]
	private readonly ExceptionHandler[] _handlers;

	[Token(Token = "0x170001D1")]
	internal bool IsFinallyBlockExist
	{
		[Token(Token = "0x6000870")]
		[Address(RVA = "0x5DF46F0", Offset = "0x5DF36F0", VA = "0x5DF46F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D2")]
	internal ExceptionHandler[] Handlers
	{
		[Token(Token = "0x6000871")]
		[Address(RVA = "0x5DF4700", Offset = "0x5DF3700", VA = "0x5DF4700")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D3")]
	internal bool IsCatchBlockExist
	{
		[Token(Token = "0x6000872")]
		[Address(RVA = "0x5DF4710", Offset = "0x5DF3710", VA = "0x5DF4710")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000873")]
	[Address(RVA = "0x5DF4720", Offset = "0x5DF3720", VA = "0x5DF4720")]
	internal TryCatchFinallyHandler(int tryStart, int tryEnd, int gotoEndTargetIndex, ExceptionHandler[] handlers)
	{
	}

	[Token(Token = "0x6000874")]
	[Address(RVA = "0x5DF4780", Offset = "0x5DF3780", VA = "0x5DF4780")]
	internal TryCatchFinallyHandler(int tryStart, int tryEnd, int gotoEndLabelIndex, int finallyStart, int finallyEnd, ExceptionHandler[] handlers)
	{
	}

	[Token(Token = "0x6000875")]
	[Address(RVA = "0x5DF47F0", Offset = "0x5DF37F0", VA = "0x5DF47F0")]
	internal bool HasHandler(InterpretedFrame frame, Exception exception, out ExceptionHandler handler, out object unwrappedException)
	{
		return default(bool);
	}

	[Token(Token = "0x6000876")]
	[Address(RVA = "0x5DF4960", Offset = "0x5DF3960", VA = "0x5DF4960")]
	private static bool FilterPasses(InterpretedFrame frame, ref object exception, ExceptionFilter filter)
	{
		return default(bool);
	}
}
