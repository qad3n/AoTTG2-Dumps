// ==================== AoTTG2 cross-reference ====================
// Type: System.Exception
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Collections;
using System.Diagnostics;
using System.Reflection;
using System.Runtime.CompilerServices;
using System.Runtime.ExceptionServices;
using System.Runtime.InteropServices;
using System.Runtime.Serialization;
using Il2CppDummyDll;

namespace System;

[Serializable]
[StructLayout((LayoutKind)0)]
[Token(Token = "0x2000164")]
[ComVisible(true)]
public class Exception : ISerializable
{
	[Token(Token = "0x2000165")]
	internal enum ExceptionMessageKind
	{
		[Token(Token = "0x4000562")]
		ThreadAbort = 1,
		[Token(Token = "0x4000563")]
		ThreadInterrupted,
		[Token(Token = "0x4000564")]
		OutOfMemory
	}

	[Token(Token = "0x400054F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[OptionalField]
	private static object s_EDILock;

	[Token(Token = "0x4000550")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _className;

	[Token(Token = "0x4000551")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal string _message;

	[Token(Token = "0x4000552")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IDictionary _data;

	[Token(Token = "0x4000553")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Exception _innerException;

	[Token(Token = "0x4000554")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _helpURL;

	[Token(Token = "0x4000555")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object _stackTrace;

	[Token(Token = "0x4000556")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _stackTraceString;

	[Token(Token = "0x4000557")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _remoteStackTraceString;

	[Token(Token = "0x4000558")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private int _remoteStackIndex;

	[Token(Token = "0x4000559")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private object _dynamicMethods;

	[Token(Token = "0x400055A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	internal int _HResult;

	[Token(Token = "0x400055B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private string _source;

	[Token(Token = "0x400055C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[OptionalField(VersionAdded = 4)]
	private System.Runtime.Serialization.SafeSerializationManager _safeSerializationManager;

	[Token(Token = "0x400055D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	internal StackTrace[] captured_traces;

	[Token(Token = "0x400055E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private IntPtr[] native_trace_ips;

	[Token(Token = "0x400055F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int caught_in_unmanaged;

	[Token(Token = "0x4000560")]
	private const int _COMPlusExceptionCode = -532462766;

	[Token(Token = "0x1700012D")]
	public virtual string Message
	{
		[Token(Token = "0x6000E19")]
		[Address(RVA = "0x3CF66A0", Offset = "0x3CF66A0", VA = "0x3CF66A0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012E")]
	public virtual IDictionary Data
	{
		[Token(Token = "0x6000E1A")]
		[Address(RVA = "0x3CF6800", Offset = "0x3CF6800", VA = "0x3CF6800", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public Exception InnerException
	{
		[Token(Token = "0x6000E1C")]
		[Address(RVA = "0x3CF6890", Offset = "0x3CF6890", VA = "0x3CF6890", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000130")]
	public MethodBase TargetSite
	{
		[Token(Token = "0x6000E1D")]
		[Address(RVA = "0x3CF68A0", Offset = "0x3CF68A0", VA = "0x3CF68A0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	public virtual string StackTrace
	{
		[Token(Token = "0x6000E1E")]
		[Address(RVA = "0x3CF6950", Offset = "0x3CF6950", VA = "0x3CF6950", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000132")]
	public virtual string Source
	{
		[Token(Token = "0x6000E21")]
		[Address(RVA = "0x3CF69F0", Offset = "0x3CF69F0", VA = "0x3CF69F0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000133")]
	public int HResult
	{
		[Token(Token = "0x6000E28")]
		[Address(RVA = "0x3CF7400", Offset = "0x3CF7400", VA = "0x3CF7400")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E29")]
		[Address(RVA = "0x3CF7410", Offset = "0x3CF7410", VA = "0x3CF7410")]
		protected set
		{
		}
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x3CF6060", Offset = "0x3CF6060", VA = "0x3CF6060")]
	private void Init()
	{
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x3CF6100", Offset = "0x3CF6100", VA = "0x3CF6100")]
	public Exception()
	{
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x3CF6120", Offset = "0x3CF6120", VA = "0x3CF6120")]
	public Exception(string message)
	{
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x3CF6160", Offset = "0x3CF6160", VA = "0x3CF6160")]
	public Exception(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x3CF61B0", Offset = "0x3CF61B0", VA = "0x3CF61B0")]
	protected Exception(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x3CF67B0", Offset = "0x3CF67B0", VA = "0x3CF67B0")]
	private string GetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x3CF6990", Offset = "0x3CF6990", VA = "0x3CF6990")]
	private string GetStackTrace(bool needFileInfo)
	{
		return null;
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x3CF69E0", Offset = "0x3CF69E0", VA = "0x3CF69E0")]
	internal void SetErrorCode(int hr)
	{
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x3CF6B20", Offset = "0x3CF6B20", VA = "0x3CF6B20", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x3CF6B30", Offset = "0x3CF6B30", VA = "0x3CF6B30")]
	private string ToString(bool needFileLineInfo, bool needMessage)
	{
		return null;
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x3CF6E20", Offset = "0x3CF6E20", VA = "0x3CF6E20", Slot = "11")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x3CF72A0", Offset = "0x3CF72A0", VA = "0x3CF72A0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext context)
	{
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x3CF69D0", Offset = "0x3CF69D0", VA = "0x3CF69D0")]
	private string StripFileInfo(string stackTrace, bool isRemoteStackTrace)
	{
		return null;
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x3CF7330", Offset = "0x3CF7330", VA = "0x3CF7330")]
	internal void RestoreExceptionDispatchInfo(ExceptionDispatchInfo exceptionDispatchInfo)
	{
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x3CF6880", Offset = "0x3CF6880", VA = "0x3CF6880", Slot = "12")]
	public new Type GetType()
	{
		return null;
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x3CF7420", Offset = "0x3CF7420", VA = "0x3CF7420")]
	internal static string GetMessageFromNativeResources(ExceptionMessageKind kind)
	{
		return null;
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x3CF7490", Offset = "0x3CF7490", VA = "0x3CF7490")]
	internal Exception FixRemotingException()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x3CF7570", Offset = "0x3CF7570", VA = "0x3CF7570")]
	internal static extern void ReportUnhandledException(Exception exception);
}
