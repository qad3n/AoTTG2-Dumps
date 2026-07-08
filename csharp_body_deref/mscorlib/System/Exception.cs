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
		[Address(RVA = "0x5010B80", Offset = "0x5010B80", VA = "0x5010B80", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012E")]
	public virtual IDictionary Data
	{
		[Token(Token = "0x6000E1A")]
		[Address(RVA = "0x5010CE0", Offset = "0x5010CE0", VA = "0x5010CE0", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public Exception InnerException
	{
		[Token(Token = "0x6000E1C")]
		[Address(RVA = "0x5010D70", Offset = "0x5010D70", VA = "0x5010D70", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000130")]
	public MethodBase TargetSite
	{
		[Token(Token = "0x6000E1D")]
		[Address(RVA = "0x5010D80", Offset = "0x5010D80", VA = "0x5010D80", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	public virtual string StackTrace
	{
		[Token(Token = "0x6000E1E")]
		[Address(RVA = "0x5010E30", Offset = "0x5010E30", VA = "0x5010E30", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000132")]
	public virtual string Source
	{
		[Token(Token = "0x6000E21")]
		[Address(RVA = "0x5010ED0", Offset = "0x5010ED0", VA = "0x5010ED0", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000133")]
	public int HResult
	{
		[Token(Token = "0x6000E28")]
		[Address(RVA = "0x50118E0", Offset = "0x50118E0", VA = "0x50118E0")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E29")]
		[Address(RVA = "0x50118F0", Offset = "0x50118F0", VA = "0x50118F0")]
		protected set
		{
		}
	}

	[Token(Token = "0x6000E14")]
	[Address(RVA = "0x5010540", Offset = "0x5010540", VA = "0x5010540")]
	private void Init()
	{
	}

	[Token(Token = "0x6000E15")]
	[Address(RVA = "0x50105E0", Offset = "0x50105E0", VA = "0x50105E0")]
	public Exception()
	{
	}

	[Token(Token = "0x6000E16")]
	[Address(RVA = "0x5010600", Offset = "0x5010600", VA = "0x5010600")]
	public Exception(string message)
	{
	}

	[Token(Token = "0x6000E17")]
	[Address(RVA = "0x5010640", Offset = "0x5010640", VA = "0x5010640")]
	public Exception(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000E18")]
	[Address(RVA = "0x5010690", Offset = "0x5010690", VA = "0x5010690")]
	protected Exception(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E1B")]
	[Address(RVA = "0x5010C90", Offset = "0x5010C90", VA = "0x5010C90")]
	private string GetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000E1F")]
	[Address(RVA = "0x5010E70", Offset = "0x5010E70", VA = "0x5010E70")]
	private string GetStackTrace(bool needFileInfo)
	{
		return null;
	}

	[Token(Token = "0x6000E20")]
	[Address(RVA = "0x5010EC0", Offset = "0x5010EC0", VA = "0x5010EC0")]
	internal void SetErrorCode(int hr)
	{
	}

	[Token(Token = "0x6000E22")]
	[Address(RVA = "0x5011000", Offset = "0x5011000", VA = "0x5011000", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E23")]
	[Address(RVA = "0x5011010", Offset = "0x5011010", VA = "0x5011010")]
	private string ToString(bool needFileLineInfo, bool needMessage)
	{
		return null;
	}

	[Token(Token = "0x6000E24")]
	[Address(RVA = "0x5011300", Offset = "0x5011300", VA = "0x5011300", Slot = "11")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E25")]
	[Address(RVA = "0x5011780", Offset = "0x5011780", VA = "0x5011780")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext context)
	{
	}

	[Token(Token = "0x6000E26")]
	[Address(RVA = "0x5010EB0", Offset = "0x5010EB0", VA = "0x5010EB0")]
	private string StripFileInfo(string stackTrace, bool isRemoteStackTrace)
	{
		return null;
	}

	[Token(Token = "0x6000E27")]
	[Address(RVA = "0x5011810", Offset = "0x5011810", VA = "0x5011810")]
	internal void RestoreExceptionDispatchInfo(ExceptionDispatchInfo exceptionDispatchInfo)
	{
	}

	[Token(Token = "0x6000E2A")]
	[Address(RVA = "0x5010D60", Offset = "0x5010D60", VA = "0x5010D60", Slot = "12")]
	public new Type GetType()
	{
		return null;
	}

	[Token(Token = "0x6000E2B")]
	[Address(RVA = "0x5011900", Offset = "0x5011900", VA = "0x5011900")]
	internal static string GetMessageFromNativeResources(ExceptionMessageKind kind)
	{
		return null;
	}

	[Token(Token = "0x6000E2C")]
	[Address(RVA = "0x5011970", Offset = "0x5011970", VA = "0x5011970")]
	internal Exception FixRemotingException()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E2D")]
	[Address(RVA = "0x5011A50", Offset = "0x5011A50", VA = "0x5011A50")]
	internal static extern void ReportUnhandledException(Exception exception);
}
