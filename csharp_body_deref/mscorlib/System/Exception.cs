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
[Token(Token = "0x200018E")]
[ComVisible(true)]
public class Exception : ISerializable
{
	[Token(Token = "0x200018F")]
	internal enum ExceptionMessageKind
	{
		[Token(Token = "0x40005C3")]
		ThreadAbort = 1,
		[Token(Token = "0x40005C4")]
		ThreadInterrupted,
		[Token(Token = "0x40005C5")]
		OutOfMemory
	}

	[Token(Token = "0x40005B0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
	[OptionalField]
	private static object s_EDILock;

	[Token(Token = "0x40005B1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	private string _className;

	[Token(Token = "0x40005B2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal string _message;

	[Token(Token = "0x40005B3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
	private IDictionary _data;

	[Token(Token = "0x40005B4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
	private Exception _innerException;

	[Token(Token = "0x40005B5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
	private string _helpURL;

	[Token(Token = "0x40005B6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x38")]
	private object _stackTrace;

	[Token(Token = "0x40005B7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private string _stackTraceString;

	[Token(Token = "0x40005B8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private string _remoteStackTraceString;

	[Token(Token = "0x40005B9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private int _remoteStackIndex;

	[Token(Token = "0x40005BA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	private object _dynamicMethods;

	[Token(Token = "0x40005BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	internal int _HResult;

	[Token(Token = "0x40005BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private string _source;

	[Token(Token = "0x40005BD")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[OptionalField(VersionAdded = 4)]
	private System.Runtime.Serialization.SafeSerializationManager _safeSerializationManager;

	[Token(Token = "0x40005BE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	internal StackTrace[] captured_traces;

	[Token(Token = "0x40005BF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private IntPtr[] native_trace_ips;

	[Token(Token = "0x40005C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private int caught_in_unmanaged;

	[Token(Token = "0x40005C1")]
	private const int _COMPlusExceptionCode = -532462766;

	[Token(Token = "0x1700012E")]
	public virtual string Message
	{
		[Token(Token = "0x6000E66")]
		[Address(RVA = "0x1B6AD00", Offset = "0x1B69300", VA = "0x181B6AD00", Slot = "5")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700012F")]
	public virtual IDictionary Data
	{
		[Token(Token = "0x6000E67")]
		[Address(RVA = "0x1B6AC90", Offset = "0x1B69290", VA = "0x181B6AC90", Slot = "6")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000130")]
	public Exception InnerException
	{
		[Token(Token = "0x6000E69")]
		[Address(RVA = "0x584C80", Offset = "0x583280", VA = "0x180584C80", Slot = "7")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000131")]
	public MethodBase TargetSite
	{
		[Token(Token = "0x6000E6A")]
		[Address(RVA = "0x1B6AFA0", Offset = "0x1B695A0", VA = "0x181B6AFA0", Slot = "8")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000132")]
	public virtual string StackTrace
	{
		[Token(Token = "0x6000E6B")]
		[Address(RVA = "0x1B6AF60", Offset = "0x1B69560", VA = "0x181B6AF60", Slot = "9")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000133")]
	public virtual string Source
	{
		[Token(Token = "0x6000E6E")]
		[Address(RVA = "0x1B6AE20", Offset = "0x1B69420", VA = "0x181B6AE20", Slot = "10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000134")]
	public int HResult
	{
		[Token(Token = "0x6000E75")]
		[Address(RVA = "0x1A2A530", Offset = "0x1A28B30", VA = "0x181A2A530")]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000E76")]
		[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390")]
		protected set
		{
		}
	}

	[Token(Token = "0x6000E61")]
	[Address(RVA = "0x1B6A170", Offset = "0x1B68770", VA = "0x181B6A170")]
	private void Init()
	{
	}

	[Token(Token = "0x6000E62")]
	[Address(RVA = "0x1B6A6F0", Offset = "0x1B68CF0", VA = "0x181B6A6F0")]
	public Exception()
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x1B6ABF0", Offset = "0x1B691F0", VA = "0x181B6ABF0")]
	public Exception(string message)
	{
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x1B6AC30", Offset = "0x1B69230", VA = "0x181B6AC30")]
	public Exception(string message, Exception innerException)
	{
	}

	[Token(Token = "0x6000E65")]
	[Address(RVA = "0x1B6A710", Offset = "0x1B68D10", VA = "0x181B6A710")]
	protected Exception(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E68")]
	[Address(RVA = "0x1B69BC0", Offset = "0x1B681C0", VA = "0x181B69BC0")]
	private string GetClassName()
	{
		return null;
	}

	[Token(Token = "0x6000E6C")]
	[Address(RVA = "0x1B6A120", Offset = "0x1B68720", VA = "0x181B6A120")]
	private string GetStackTrace(bool needFileInfo)
	{
		return null;
	}

	[Token(Token = "0x6000E6D")]
	[Address(RVA = "0x1B6A390", Offset = "0x1B68990", VA = "0x181B6A390")]
	internal void SetErrorCode(int hr)
	{
	}

	[Token(Token = "0x6000E6F")]
	[Address(RVA = "0x1B6A660", Offset = "0x1B68C60", VA = "0x181B6A660", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000E70")]
	[Address(RVA = "0x1B6A3A0", Offset = "0x1B689A0", VA = "0x181B6A3A0")]
	private string ToString(bool needFileLineInfo, bool needMessage)
	{
		return null;
	}

	[Token(Token = "0x6000E71")]
	[Address(RVA = "0x1B69CA0", Offset = "0x1B682A0", VA = "0x181B69CA0", Slot = "11")]
	public virtual void GetObjectData(SerializationInfo info, StreamingContext context)
	{
	}

	[Token(Token = "0x6000E72")]
	[Address(RVA = "0x1B6A210", Offset = "0x1B68810", VA = "0x181B6A210")]
	[OnDeserialized]
	private void OnDeserialized(StreamingContext context)
	{
	}

	[Token(Token = "0x6000E73")]
	[Address(RVA = "0x8E13A0", Offset = "0x8DF9A0", VA = "0x1808E13A0")]
	private string StripFileInfo(string stackTrace, bool isRemoteStackTrace)
	{
		return null;
	}

	[Token(Token = "0x6000E74")]
	[Address(RVA = "0x1B6A2B0", Offset = "0x1B688B0", VA = "0x181B6A2B0")]
	internal void RestoreExceptionDispatchInfo(ExceptionDispatchInfo exceptionDispatchInfo)
	{
	}

	[Token(Token = "0x6000E77")]
	[Address(RVA = "0x1B530C0", Offset = "0x1B516C0", VA = "0x181B530C0", Slot = "12")]
	public new Type GetType()
	{
		return null;
	}

	[Token(Token = "0x6000E78")]
	[Address(RVA = "0x1B69C10", Offset = "0x1B68210", VA = "0x181B69C10")]
	internal static string GetMessageFromNativeResources(ExceptionMessageKind kind)
	{
		return null;
	}

	[Token(Token = "0x6000E79")]
	[Address(RVA = "0x1B69AE0", Offset = "0x1B680E0", VA = "0x181B69AE0")]
	internal Exception FixRemotingException()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x6000E7A")]
	[Address(RVA = "0x1B6A2A0", Offset = "0x1B688A0", VA = "0x181B6A2A0")]
	internal static extern void ReportUnhandledException(Exception exception);
}
