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
		[Token(Token = "0x6000866")]
		[Address(RVA = "0x41B9B50", Offset = "0x41B9B50", VA = "0x41B9B50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001D0")]
	internal ExceptionHandler[] Handlers
	{
		[Token(Token = "0x6000867")]
		[Address(RVA = "0x41B9B60", Offset = "0x41B9B60", VA = "0x41B9B60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001D1")]
	internal bool IsCatchBlockExist
	{
		[Token(Token = "0x6000868")]
		[Address(RVA = "0x41B9B70", Offset = "0x41B9B70", VA = "0x41B9B70")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000869")]
	[Address(RVA = "0x41B9B80", Offset = "0x41B9B80", VA = "0x41B9B80")]
	internal TryCatchFinallyHandler(int tryStart, int tryEnd, int gotoEndTargetIndex, ExceptionHandler[] handlers)
	{
	}

	[Token(Token = "0x600086A")]
	[Address(RVA = "0x41B9BE0", Offset = "0x41B9BE0", VA = "0x41B9BE0")]
	internal TryCatchFinallyHandler(int tryStart, int tryEnd, int gotoEndLabelIndex, int finallyStart, int finallyEnd, ExceptionHandler[] handlers)
	{
	}

	[Token(Token = "0x600086B")]
	[Address(RVA = "0x41B9C50", Offset = "0x41B9C50", VA = "0x41B9C50")]
	internal bool HasHandler(InterpretedFrame frame, Exception exception, out ExceptionHandler handler, out object unwrappedException)
	{
		return default(bool);
	}

	[Token(Token = "0x600086C")]
	[Address(RVA = "0x41B9DD0", Offset = "0x41B9DD0", VA = "0x41B9DD0")]
	private static bool FilterPasses(InterpretedFrame frame, ref object exception, ExceptionFilter filter)
	{
		return default(bool);
	}
}
