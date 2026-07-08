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
			[Token(Token = "0x60007F5")]
			[Address(RVA = "0x41B5E00", Offset = "0x41B5E00", VA = "0x41B5E00", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return default(InterpretedFrameInfo);
			}
		}

		[Token(Token = "0x170001BD")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60007F7")]
			[Address(RVA = "0x41B5E50", Offset = "0x41B5E50", VA = "0x41B5E50", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60007F2")]
		[Address(RVA = "0x41B5340", Offset = "0x41B5340", VA = "0x41B5340")]
		[DebuggerHidden]
		public _003CGetStackTraceDebugInfo_003Ed__29(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60007F3")]
		[Address(RVA = "0x41B5C70", Offset = "0x41B5C70", VA = "0x41B5C70", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60007F4")]
		[Address(RVA = "0x41B5C80", Offset = "0x41B5C80", VA = "0x41B5C80", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60007F6")]
		[Address(RVA = "0x41B5E10", Offset = "0x41B5E10", VA = "0x41B5E10", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60007F8")]
		[Address(RVA = "0x41B5EA0", Offset = "0x41B5EA0", VA = "0x41B5EA0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<InterpretedFrameInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CSystem_002ELinq_002EExpressions_002EInterpreter_002EInterpretedFrameInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60007F9")]
		[Address(RVA = "0x41B5F40", Offset = "0x41B5F40", VA = "0x41B5F40", Slot = "5")]
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
		[Token(Token = "0x60007D9")]
		[Address(RVA = "0x41B5110", Offset = "0x41B5110", VA = "0x41B5110")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170001BB")]
	public InterpretedFrame Parent
	{
		[Token(Token = "0x60007E5")]
		[Address(RVA = "0x41B52B0", Offset = "0x41B52B0", VA = "0x41B52B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x60007D7")]
	[Address(RVA = "0x41B4ED0", Offset = "0x41B4ED0", VA = "0x41B4ED0")]
	internal InterpretedFrame(Interpreter interpreter, IStrongBox[] closure)
	{
	}

	[Token(Token = "0x60007D8")]
	[Address(RVA = "0x41B4FE0", Offset = "0x41B4FE0", VA = "0x41B4FE0")]
	public DebugInfo GetDebugInfo(int instructionIndex)
	{
		return null;
	}

	[Token(Token = "0x60007DA")]
	[Address(RVA = "0x41A8CE0", Offset = "0x41A8CE0", VA = "0x41A8CE0")]
	public void Push(object value)
	{
	}

	[Token(Token = "0x60007DB")]
	[Address(RVA = "0x41A9370", Offset = "0x41A9370", VA = "0x41A9370")]
	public void Push(bool value)
	{
	}

	[Token(Token = "0x60007DC")]
	[Address(RVA = "0x41AD730", Offset = "0x41AD730", VA = "0x41AD730")]
	public void Push(int value)
	{
	}

	[Token(Token = "0x60007DD")]
	[Address(RVA = "0x41A8D50", Offset = "0x41A8D50", VA = "0x41A8D50")]
	public void Push(byte value)
	{
	}

	[Token(Token = "0x60007DE")]
	[Address(RVA = "0x41B5130", Offset = "0x41B5130", VA = "0x41B5130")]
	public void Push(sbyte value)
	{
	}

	[Token(Token = "0x60007DF")]
	[Address(RVA = "0x41AD600", Offset = "0x41AD600", VA = "0x41AD600")]
	public void Push(short value)
	{
	}

	[Token(Token = "0x60007E0")]
	[Address(RVA = "0x41A8EF0", Offset = "0x41A8EF0", VA = "0x41A8EF0")]
	public void Push(ushort value)
	{
	}

	[Token(Token = "0x60007E1")]
	[Address(RVA = "0x41A8CB0", Offset = "0x41A8CB0", VA = "0x41A8CB0")]
	public object Pop()
	{
		return null;
	}

	[Token(Token = "0x60007E2")]
	[Address(RVA = "0x41B51D0", Offset = "0x41B51D0", VA = "0x41B51D0")]
	internal void SetStackDepth(int depth)
	{
	}

	[Token(Token = "0x60007E3")]
	[Address(RVA = "0x41B51F0", Offset = "0x41B51F0", VA = "0x41B51F0")]
	public object Peek()
	{
		return null;
	}

	[Token(Token = "0x60007E4")]
	[Address(RVA = "0x41B5220", Offset = "0x41B5220", VA = "0x41B5220")]
	public void Dup()
	{
	}

	[Token(Token = "0x60007E6")]
	[Address(RVA = "0x41B52C0", Offset = "0x41B52C0", VA = "0x41B52C0")]
	[IteratorStateMachine(typeof(_003CGetStackTraceDebugInfo_003Ed__29))]
	public IEnumerable<InterpretedFrameInfo> GetStackTraceDebugInfo()
	{
		return null;
	}

	[Token(Token = "0x60007E7")]
	[Address(RVA = "0x41B5370", Offset = "0x41B5370", VA = "0x41B5370")]
	internal void SaveTraceToException(Exception exception)
	{
	}

	[Token(Token = "0x60007E8")]
	[Address(RVA = "0x41B5630", Offset = "0x41B5630", VA = "0x41B5630")]
	internal InterpretedFrame Enter()
	{
		return null;
	}

	[Token(Token = "0x60007E9")]
	[Address(RVA = "0x41B56A0", Offset = "0x41B56A0", VA = "0x41B56A0")]
	internal void Leave(InterpretedFrame prevFrame)
	{
	}

	[Token(Token = "0x60007EA")]
	[Address(RVA = "0x41B56F0", Offset = "0x41B56F0", VA = "0x41B56F0")]
	internal bool IsJumpHappened()
	{
		return default(bool);
	}

	[Token(Token = "0x60007EB")]
	[Address(RVA = "0x41B5700", Offset = "0x41B5700", VA = "0x41B5700")]
	public void RemoveContinuation()
	{
	}

	[Token(Token = "0x60007EC")]
	[Address(RVA = "0x41B5710", Offset = "0x41B5710", VA = "0x41B5710")]
	public void PushContinuation(int continuation)
	{
	}

	[Token(Token = "0x60007ED")]
	[Address(RVA = "0x41B5740", Offset = "0x41B5740", VA = "0x41B5740")]
	public int YieldToCurrentContinuation()
	{
		return default(int);
	}

	[Token(Token = "0x60007EE")]
	[Address(RVA = "0x41B57A0", Offset = "0x41B57A0", VA = "0x41B57A0")]
	public int YieldToPendingContinuation()
	{
		return default(int);
	}

	[Token(Token = "0x60007EF")]
	[Address(RVA = "0x41B5960", Offset = "0x41B5960", VA = "0x41B5960")]
	internal void PushPendingContinuation()
	{
	}

	[Token(Token = "0x60007F0")]
	[Address(RVA = "0x41B5A40", Offset = "0x41B5A40", VA = "0x41B5A40")]
	internal void PopPendingContinuation()
	{
	}

	[Token(Token = "0x60007F1")]
	[Address(RVA = "0x41B5AD0", Offset = "0x41B5AD0", VA = "0x41B5AD0")]
	public int Goto(int labelIndex, object value, bool gotoExceptionHandler)
	{
		return default(int);
	}
}
