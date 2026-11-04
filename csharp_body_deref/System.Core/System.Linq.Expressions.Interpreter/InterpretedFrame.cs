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

[Token(Token = "0x2000164")]
internal sealed class InterpretedFrame
{
	[Token(Token = "0x2000165")]
	[CompilerGenerated]
	private sealed class _003CGetStackTraceDebugInfo_003Ed__29 : IEnumerable<InterpretedFrameInfo>, IEnumerable, IEnumerator<InterpretedFrameInfo>, IDisposable, IEnumerator
	{
		[Token(Token = "0x40002F2")]
		[FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40002F3")]
		[FieldOffset(Offset = "0x18")]
		private InterpretedFrameInfo _003C_003E2__current;

		[Token(Token = "0x40002F4")]
		[FieldOffset(Offset = "0x28")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40002F5")]
		[FieldOffset(Offset = "0x30")]
		public InterpretedFrame _003C_003E4__this;

		[Token(Token = "0x40002F6")]
		[FieldOffset(Offset = "0x38")]
		private InterpretedFrame _003Cframe_003E5__2;

		[Token(Token = "0x170001BC")]
		private InterpretedFrameInfo System_002ECollections_002EGeneric_002EIEnumerator_003CSystem_002ELinq_002EExpressions_002EInterpreter_002EInterpretedFrameInfo_003E_002ECurrent
		{
			[Token(Token = "0x60007F4")]
			[Address(RVA = "0x8E7990", Offset = "0x8E5F90", VA = "0x1808E7990", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(InterpretedFrameInfo);
			}
		}

		[Token(Token = "0x170001BD")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60007F6")]
			[Address(RVA = "0x2465F80", Offset = "0x2464580", VA = "0x182465F80", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60007F1")]
		[Address(RVA = "0x8E81C0", Offset = "0x8E67C0", VA = "0x1808E81C0")]
		[DebuggerHidden]
		public _003CGetStackTraceDebugInfo_003Ed__29(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60007F2")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x2465C90", Offset = "0x2464290", VA = "0x182465C90", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60007F5")]
		[Address(RVA = "0x2465F40", Offset = "0x2464540", VA = "0x182465F40", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60007F7")]
		[Address(RVA = "0x2465EA0", Offset = "0x24644A0", VA = "0x182465EA0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<InterpretedFrameInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ELinq_002EExpressions_002EInterpreter_002EInterpretedFrameInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60007F8")]
		[Address(RVA = "0x2465EA0", Offset = "0x24644A0", VA = "0x182465EA0", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40002E7")]
	[ThreadStatic]
	private static InterpretedFrame s_currentFrame;

	[Token(Token = "0x40002E8")]
	[FieldOffset(Offset = "0x10")]
	internal readonly Interpreter Interpreter;

	[Token(Token = "0x40002E9")]
	[FieldOffset(Offset = "0x18")]
	internal InterpretedFrame _parent;

	[Token(Token = "0x40002EA")]
	[FieldOffset(Offset = "0x20")]
	private readonly int[] _continuations;

	[Token(Token = "0x40002EB")]
	[FieldOffset(Offset = "0x28")]
	private int _continuationIndex;

	[Token(Token = "0x40002EC")]
	[FieldOffset(Offset = "0x2C")]
	private int _pendingContinuation;

	[Token(Token = "0x40002ED")]
	[FieldOffset(Offset = "0x30")]
	private object _pendingValue;

	[Token(Token = "0x40002EE")]
	[FieldOffset(Offset = "0x38")]
	public readonly object[] Data;

	[Token(Token = "0x40002EF")]
	[FieldOffset(Offset = "0x40")]
	public readonly IStrongBox[] Closure;

	[Token(Token = "0x40002F0")]
	[FieldOffset(Offset = "0x48")]
	public int StackIndex;

	[Token(Token = "0x40002F1")]
	[FieldOffset(Offset = "0x4C")]
	public int InstructionIndex;

	[Token(Token = "0x170001BA")]
	public string Name
	{
		[Token(Token = "0x60007D8")]
		[Address(RVA = "0x244FAF0", Offset = "0x244E0F0", VA = "0x18244FAF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BB")]
	public InterpretedFrame Parent
	{
		[Token(Token = "0x60007E4")]
		[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007D6")]
	[Address(RVA = "0x244F9D0", Offset = "0x244DFD0", VA = "0x18244F9D0")]
	internal InterpretedFrame(Interpreter interpreter, IStrongBox[] closure)
	{
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x244EA20", Offset = "0x244D020", VA = "0x18244EA20")]
	public DebugInfo GetDebugInfo(int instructionIndex)
	{
		return null;
	}

	[Token(Token = "0x60007D9")]
	[Address(RVA = "0x244F030", Offset = "0x244D630", VA = "0x18244F030")]
	public void Push(object value)
	{
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x244F330", Offset = "0x244D930", VA = "0x18244F330")]
	public void Push(bool value)
	{
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x244F2A0", Offset = "0x244D8A0", VA = "0x18244F2A0")]
	public void Push(int value)
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x244F160", Offset = "0x244D760", VA = "0x18244F160")]
	public void Push(byte value)
	{
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x244F200", Offset = "0x244D800", VA = "0x18244F200")]
	public void Push(sbyte value)
	{
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x244F0C0", Offset = "0x244D6C0", VA = "0x18244F0C0")]
	public void Push(short value)
	{
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x244F420", Offset = "0x244DA20", VA = "0x18244F420")]
	public void Push(ushort value)
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x244EEB0", Offset = "0x244D4B0", VA = "0x18244EEB0")]
	public object Pop()
	{
		return null;
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x244F770", Offset = "0x244DD70", VA = "0x18244F770")]
	internal void SetStackDepth(int depth)
	{
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x244EDE0", Offset = "0x244D3E0", VA = "0x18244EDE0")]
	public object Peek()
	{
		return null;
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x244E900", Offset = "0x244CF00", VA = "0x18244E900")]
	public void Dup()
	{
	}

	[Token(Token = "0x60007E5")]
	[Address(RVA = "0x244EB50", Offset = "0x244D150", VA = "0x18244EB50")]
	[IteratorStateMachine(typeof(_003CGetStackTraceDebugInfo_003Ed__29))]
	public IEnumerable<InterpretedFrameInfo> GetStackTraceDebugInfo()
	{
		return null;
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x244F4C0", Offset = "0x244DAC0", VA = "0x18244F4C0")]
	internal void SaveTraceToException(Exception exception)
	{
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x244E9A0", Offset = "0x244CFA0", VA = "0x18244E9A0")]
	internal InterpretedFrame Enter()
	{
		return null;
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x244ED90", Offset = "0x244D390", VA = "0x18244ED90")]
	internal void Leave(InterpretedFrame prevFrame)
	{
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x244ED80", Offset = "0x244D380", VA = "0x18244ED80")]
	internal bool IsJumpHappened()
	{
		return default(bool);
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0xE47CD0", Offset = "0xE462D0", VA = "0x180E47CD0")]
	public void RemoveContinuation()
	{
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x244EEF0", Offset = "0x244D4F0", VA = "0x18244EEF0")]
	public void PushContinuation(int continuation)
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x244F790", Offset = "0x244DD90", VA = "0x18244F790")]
	public int YieldToCurrentContinuation()
	{
		return default(int);
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x244F800", Offset = "0x244DE00", VA = "0x18244F800")]
	public int YieldToPendingContinuation()
	{
		return default(int);
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x244EF30", Offset = "0x244D530", VA = "0x18244EF30")]
	internal void PushPendingContinuation()
	{
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x244EE10", Offset = "0x244D410", VA = "0x18244EE10")]
	internal void PopPendingContinuation()
	{
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x244EBD0", Offset = "0x244D1D0", VA = "0x18244EBD0")]
	public int Goto(int labelIndex, object value, bool gotoExceptionHandler)
	{
		return default(int);
	}
}
