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
[Token(Token = "0x2000166")]
[ComVisible(true)]
public class Exception : ISerializable
{
	[Token(Token = "0x2000167")]
	internal enum ExceptionMessageKind
	{
		[Token(Token = "0x4000521")]
		ThreadAbort = 1,
		[Token(Token = "0x4000522")]
		ThreadInterrupted,
		[Token(Token = "0x4000523")]
		OutOfMemory
	}

	[Token(Token = "0x400050E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[OptionalField]
	private static object s_EDILock;

	[Token(Token = "0x400050F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _className;

	[Token(Token = "0x4000510")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal string _message;

	[Token(Token = "0x4000511")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IDictionary _data;

	[Token(Token = "0x4000512")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Exception _innerException;

	[Token(Token = "0x4000513")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _helpURL;

	[Token(Token = "0x4000514")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object _stackTrace;

	[Token(Token = "0x4000515")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _stackTraceString;

	[Token(Token = "0x4000516")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _remoteStackTraceString;

	[Token(Token = "0x4000517")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private int _remoteStackIndex;

	[Token(Token = "0x4000518")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private object _dynamicMethods;

	[Token(Token = "0x4000519")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	internal int _HResult;

	[Token(Token = "0x400051A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private string _source;

	[Token(Token = "0x400051B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[OptionalField(VersionAdded = 4)]
	private System.Runtime.Serialization.SafeSerializationManager _safeSerializationManager;

	[Token(Token = "0x400051C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	internal StackTrace[] captured_traces;

	[Token(Token = "0x400051D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private IntPtr[] native_trace_ips;

	[Token(Token = "0x400051E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int caught_in_unmanaged;

	[Token(Token = "0x400051F")]
	private const int _COMPlusExceptionCode = -532462766;

	[Token(Token = "0x1700012E")]
	public virtual string Message
	{
		[Token(Token = "0x6000E41")]
		[Address(RVA = "0x54FA9B0", Offset = "0x54F99B0", VA = "0x54FA9B0", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public virtual IDictionary Data
	{
		[Token(Token = "0x6000E42")]
		[Address(RVA = "0x54FAB10", Offset = "0x54F9B10", VA = "0x54FAB10", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000130")]
	public Exception InnerException
	{
		[Token(Token = "0x6000E44")]
		[Address(RVA = "0x54FABA0", Offset = "0x54F9BA0", VA = "0x54FABA0", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	public MethodBase TargetSite
	{
		[Token(Token = "0x6000E45")]
		[Address(RVA = "0x54FABB0", Offset = "0x54F9BB0", VA = "0x54FABB0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000132")]
	public virtual string StackTrace
	{
		[Token(Token = "0x6000E46")]
		[Address(RVA = "0x54FAC60", Offset = "0x54F9C60", VA = "0x54FAC60", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000133")]
	public virtual string Source
	{
		[Token(Token = "0x6000E49")]
		[Address(RVA = "0x54FAD00", Offset = "0x54F9D00", VA = "0x54FAD00", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000134")]
	public int HResult
	{
		[Token(Token = "0x6000E50")]
		[Address(RVA = "0x54FB710", Offset = "0x54FA710", VA = "0x54FB710")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E51")]
		[Address(RVA = "0x54FB720", Offset = "0x54FA720", VA = "0x54FB720")]
		protected set
		{
		}
	}

	[Token(Token = "0x6000E3C")]
	[Address(RVA = "0x54FA380", Offset = "0x54F9380", VA = "0x54FA380")]
	private void Init()
	{
	}

	[Token(Token = "0x6000E3D")]
	[Address(RVA = "0x54FA420", Offset = "0x54F9420", VA = "0x54FA420")]
	public Exception()
	{
	}

	[Token(Token = "0x6000E3E")]
	[Address(RVA = "0x54FA440", Offset = "0x54F9440", VA = "0x54FA440")]
	public Exception(string message)
	{
	}

	[Token(Token = "0x6000E3F")]
	[Address(RVA = "0x54FA480", Offset = "0x54F9480", VA = "0x54FA480")]
	public Exception(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000E40")]
	[Address(RVA = "0x54FA4D0", Offset = "0x54F94D0", VA = "0x54FA4D0")]
	protected Exception(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E43")]
	[Address(RVA = "0x54FAAC0", Offset = "0x54F9AC0", VA = "0x54FAAC0")]
	private string GetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000E47")]
	[Address(RVA = "0x54FACA0", Offset = "0x54F9CA0", VA = "0x54FACA0")]
	private string GetStackTrace(bool needFileInfo)
	{
		return null;
	}

	[Token(Token = "0x6000E48")]
	[Address(RVA = "0x54FACF0", Offset = "0x54F9CF0", VA = "0x54FACF0")]
	internal void SetErrorCode(int hr)
	{
	}

	[Token(Token = "0x6000E4A")]
	[Address(RVA = "0x54FAE30", Offset = "0x54F9E30", VA = "0x54FAE30", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E4B")]
	[Address(RVA = "0x54FAE40", Offset = "0x54F9E40", VA = "0x54FAE40")]
	private string ToString(bool needFileLineInfo, bool needMessage)
	{
		return null;
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x54FB130", Offset = "0x54FA130", VA = "0x54FB130", Slot = "11")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x54FB5B0", Offset = "0x54FA5B0", VA = "0x54FB5B0")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext context)
	{
	}

	[Token(Token = "0x6000E4E")]
	[Address(RVA = "0x54FACE0", Offset = "0x54F9CE0", VA = "0x54FACE0")]
	private string StripFileInfo(string stackTrace, bool isRemoteStackTrace)
	{
		return null;
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x54FB640", Offset = "0x54FA640", VA = "0x54FB640")]
	internal void RestoreExceptionDispatchInfo(ExceptionDispatchInfo exceptionDispatchInfo)
	{
	}

	[Token(Token = "0x6000E52")]
	[Address(RVA = "0x54FAB90", Offset = "0x54F9B90", VA = "0x54FAB90", Slot = "12")]
	public new Type GetType()
	{
		return null;
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x54FB730", Offset = "0x54FA730", VA = "0x54FB730")]
	internal static string GetMessageFromNativeResources(ExceptionMessageKind kind)
	{
		return null;
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x54FB7A0", Offset = "0x54FA7A0", VA = "0x54FB7A0")]
	internal Exception FixRemotingException()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x54FB880", Offset = "0x54FA880", VA = "0x54FB880")]
	internal static extern void ReportUnhandledException(Exception exception);
}
