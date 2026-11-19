// ==================== AoTTG2 cross-reference ====================
// Type: System.Linq.Expressions.Interpreter.InterpretedFrame
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace System.Linq.Expressions.Interpreter;

[Token(Token = "0x2000165")]
internal sealed class InterpretedFrame
{
	[Token(Token = "0x2000166")]
	[CompilerGenerated]
	private sealed class _003CGetStackTraceDebugInfo_003Ed__29 : IEnumerable<InterpretedFrameInfo>, IEnumerable, IEnumerator<InterpretedFrameInfo>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40002FB")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40002FC")]
		[FieldOffset(Offset = "0x18")]
		private InterpretedFrameInfo _003C_003E2__current;

		[Token(Token = "0x40002FD")]
		[FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40002FE")]
		[FieldOffset(Offset = "0x30")]
		public InterpretedFrame _003C_003E4__this;

		[Token(Token = "0x40002FF")]
		[FieldOffset(Offset = "0x38")]
		private InterpretedFrame _003Cframe_003E5__2;

		[Token(Token = "0x170001BE")]
		private InterpretedFrameInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ELinq_002EExpressions_002EInterpreter_002EInterpretedFrameInfo_003E_002ECurrent
		{
			[Token(Token = "0x60007FF")]
			[Address(RVA = "0x5DF09D0", Offset = "0x5DEF9D0", VA = "0x5DF09D0", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(InterpretedFrameInfo);
			}
		}

		[Token(Token = "0x170001BF")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000801")]
			[Address(RVA = "0x5DF0A20", Offset = "0x5DEFA20", VA = "0x5DF0A20", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60007FC")]
		[Address(RVA = "0x5DEFF20", Offset = "0x5DEEF20", VA = "0x5DEFF20")]
		[DebuggerHidden]
		public _003CGetStackTraceDebugInfo_003Ed__29(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60007FD")]
		[Address(RVA = "0x5DF0840", Offset = "0x5DEF840", VA = "0x5DF0840", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60007FE")]
		[Address(RVA = "0x5DF0850", Offset = "0x5DEF850", VA = "0x5DF0850", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000800")]
		[Address(RVA = "0x5DF09E0", Offset = "0x5DEF9E0", VA = "0x5DF09E0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x6000802")]
		[Address(RVA = "0x5DF0A70", Offset = "0x5DEFA70", VA = "0x5DF0A70", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<InterpretedFrameInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ELinq_002EExpressions_002EInterpreter_002EInterpretedFrameInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x6000803")]
		[Address(RVA = "0x5DF0B10", Offset = "0x5DEFB10", VA = "0x5DF0B10", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40002F0")]
	[ThreadStatic]
	private static InterpretedFrame s_currentFrame;

	[Token(Token = "0x40002F1")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Interpreter Interpreter;

	[Token(Token = "0x40002F2")]
	[FieldOffset(Offset = "0x18")]
	internal InterpretedFrame _parent;

	[Token(Token = "0x40002F3")]
	[FieldOffset(Offset = "0x20")]
	private readonly int[] _continuations;

	[Token(Token = "0x40002F4")]
	[FieldOffset(Offset = "0x28")]
	private int _continuationIndex;

	[Token(Token = "0x40002F5")]
	[FieldOffset(Offset = "0x2C")]
	private int _pendingContinuation;

	[Token(Token = "0x40002F6")]
	[FieldOffset(Offset = "0x30")]
	private object _pendingValue;

	[Token(Token = "0x40002F7")]
	[FieldOffset(Offset = "0x38")]
	public readonly object[] Data;

	[Token(Token = "0x40002F8")]
	[FieldOffset(Offset = "0x40")]
	public readonly IStrongBox[] Closure;

	[Token(Token = "0x40002F9")]
	[FieldOffset(Offset = "0x48")]
	public int StackIndex;

	[Token(Token = "0x40002FA")]
	[FieldOffset(Offset = "0x4C")]
	public int InstructionIndex;

	[Token(Token = "0x170001BC")]
	public string Name
	{
		[Token(Token = "0x60007E3")]
		[Address(RVA = "0x5DEFD00", Offset = "0x5DEED00", VA = "0x5DEFD00")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BD")]
	public InterpretedFrame Parent
	{
		[Token(Token = "0x60007EF")]
		[Address(RVA = "0x5DEFEA0", Offset = "0x5DEEEA0", VA = "0x5DEFEA0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x5DEFAC0", Offset = "0x5DEEAC0", VA = "0x5DEFAC0")]
	internal InterpretedFrame(Interpreter interpreter, IStrongBox[] closure)
	{
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x5DEFBD0", Offset = "0x5DEEBD0", VA = "0x5DEFBD0")]
	public DebugInfo GetDebugInfo(int instructionIndex)
	{
		return null;
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x5DE39B0", Offset = "0x5DE29B0", VA = "0x5DE39B0")]
	public void Push(object value)
	{
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x5DE4040", Offset = "0x5DE3040", VA = "0x5DE4040")]
	public void Push(bool value)
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x5DE84B0", Offset = "0x5DE74B0", VA = "0x5DE84B0")]
	public void Push(int value)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x5DE3A20", Offset = "0x5DE2A20", VA = "0x5DE3A20")]
	public void Push(byte value)
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x5DEFD20", Offset = "0x5DEED20", VA = "0x5DEFD20")]
	public void Push(sbyte value)
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x5DE8380", Offset = "0x5DE7380", VA = "0x5DE8380")]
	public void Push(short value)
	{
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x5DE3BC0", Offset = "0x5DE2BC0", VA = "0x5DE3BC0")]
	public void Push(ushort value)
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x5DE3980", Offset = "0x5DE2980", VA = "0x5DE3980")]
	public object Pop()
	{
		return null;
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x5DEFDC0", Offset = "0x5DEEDC0", VA = "0x5DEFDC0")]
	internal void SetStackDepth(int depth)
	{
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x5DEFDE0", Offset = "0x5DEEDE0", VA = "0x5DEFDE0")]
	public object Peek()
	{
		return null;
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x5DEFE10", Offset = "0x5DEEE10", VA = "0x5DEFE10")]
	public void Dup()
	{
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x5DEFEB0", Offset = "0x5DEEEB0", VA = "0x5DEFEB0")]
	[IteratorStateMachine(typeof(_003CGetStackTraceDebugInfo_003Ed__29))]
	public IEnumerable<InterpretedFrameInfo> GetStackTraceDebugInfo()
	{
		return null;
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x5DEFF50", Offset = "0x5DEEF50", VA = "0x5DEFF50")]
	internal void SaveTraceToException(Exception exception)
	{
	}

	[Token(Token = "0x60007F2")]
	[Address(RVA = "0x5DF0200", Offset = "0x5DEF200", VA = "0x5DF0200")]
	internal InterpretedFrame Enter()
	{
		return null;
	}

	[Token(Token = "0x60007F3")]
	[Address(RVA = "0x5DF0270", Offset = "0x5DEF270", VA = "0x5DF0270")]
	internal void Leave(InterpretedFrame prevFrame)
	{
	}

	[Token(Token = "0x60007F4")]
	[Address(RVA = "0x5DF02C0", Offset = "0x5DEF2C0", VA = "0x5DF02C0")]
	internal bool IsJumpHappened()
	{
		return default(bool);
	}

	[Token(Token = "0x60007F5")]
	[Address(RVA = "0x5DF02D0", Offset = "0x5DEF2D0", VA = "0x5DF02D0")]
	public void RemoveContinuation()
	{
	}

	[Token(Token = "0x60007F6")]
	[Address(RVA = "0x5DF02E0", Offset = "0x5DEF2E0", VA = "0x5DF02E0")]
	public void PushContinuation(int continuation)
	{
	}

	[Token(Token = "0x60007F7")]
	[Address(RVA = "0x5DF0310", Offset = "0x5DEF310", VA = "0x5DF0310")]
	public int YieldToCurrentContinuation()
	{
		return default(int);
	}

	[Token(Token = "0x60007F8")]
	[Address(RVA = "0x5DF0370", Offset = "0x5DEF370", VA = "0x5DF0370")]
	public int YieldToPendingContinuation()
	{
		return default(int);
	}

	[Token(Token = "0x60007F9")]
	[Address(RVA = "0x5DF0530", Offset = "0x5DEF530", VA = "0x5DF0530")]
	internal void PushPendingContinuation()
	{
	}

	[Token(Token = "0x60007FA")]
	[Address(RVA = "0x5DF0610", Offset = "0x5DEF610", VA = "0x5DF0610")]
	internal void PopPendingContinuation()
	{
	}

	[Token(Token = "0x60007FB")]
	[Address(RVA = "0x5DF06A0", Offset = "0x5DEF6A0", VA = "0x5DF06A0")]
	public int Goto(int labelIndex, object value, bool gotoExceptionHandler)
	{
		return default(int);
	}
}
