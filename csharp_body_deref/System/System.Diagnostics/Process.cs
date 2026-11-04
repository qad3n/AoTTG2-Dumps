// ==================== AoTTG2 cross-reference ====================
// Type: System.Diagnostics.Process
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.ComponentModel;
using System.IO;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;
using Microsoft.Win32.SafeHandles;

namespace System.Diagnostics;

[Token(Token = "0x2000110")]
[MonitoringDescription("Provides access to local and remote processes, enabling starting and stopping of local processes.")]
[DefaultEvent("Exited")]
[DefaultProperty("StartInfo")]
public class Process : Component
{
	[Token(Token = "0x2000111")]
	private enum StreamReadMode
	{
		[Token(Token = "0x40004AA")]
		undefined,
		[Token(Token = "0x40004AB")]
		syncMode,
		[Token(Token = "0x40004AC")]
		asyncMode
	}

	[Token(Token = "0x2000112")]
	private enum State
	{
		[Token(Token = "0x40004AE")]
		HaveId = 1,
		[Token(Token = "0x40004AF")]
		IsLocal = 2,
		[Token(Token = "0x40004B0")]
		IsNt = 4,
		[Token(Token = "0x40004B1")]
		HaveProcessInfo = 8,
		[Token(Token = "0x40004B2")]
		Exited = 16,
		[Token(Token = "0x40004B3")]
		Associated = 32,
		[Token(Token = "0x40004B4")]
		IsWin2k = 64,
		[Token(Token = "0x40004B5")]
		HaveNtProcessInfo = 12
	}

	[Token(Token = "0x2000113")]
	private struct ProcInfo
	{
		[Token(Token = "0x40004B6")]
		[FieldOffset(Offset = "0x0")]
		public IntPtr process_handle;

		[Token(Token = "0x40004B7")]
		[FieldOffset(Offset = "0x8")]
		public int pid;

		[Token(Token = "0x40004B8")]
		[FieldOffset(Offset = "0x10")]
		public string[] envVariables;

		[Token(Token = "0x40004B9")]
		[FieldOffset(Offset = "0x18")]
		public string UserName;

		[Token(Token = "0x40004BA")]
		[FieldOffset(Offset = "0x20")]
		public string Domain;

		[Token(Token = "0x40004BB")]
		[FieldOffset(Offset = "0x28")]
		public IntPtr Password;

		[Token(Token = "0x40004BC")]
		[FieldOffset(Offset = "0x30")]
		public bool LoadUserProfile;
	}

	[Token(Token = "0x4000488")]
	[FieldOffset(Offset = "0x28")]
	private bool haveProcessId;

	[Token(Token = "0x4000489")]
	[FieldOffset(Offset = "0x2C")]
	private int processId;

	[Token(Token = "0x400048A")]
	[FieldOffset(Offset = "0x30")]
	private bool haveProcessHandle;

	[Token(Token = "0x400048B")]
	[FieldOffset(Offset = "0x38")]
	private SafeProcessHandle m_processHandle;

	[Token(Token = "0x400048C")]
	[FieldOffset(Offset = "0x40")]
	private bool isRemoteMachine;

	[Token(Token = "0x400048D")]
	[FieldOffset(Offset = "0x48")]
	private string machineName;

	[Token(Token = "0x400048E")]
	[FieldOffset(Offset = "0x50")]
	private int m_processAccess;

	[Token(Token = "0x400048F")]
	[FieldOffset(Offset = "0x58")]
	private ProcessThreadCollection threads;

	[Token(Token = "0x4000490")]
	[FieldOffset(Offset = "0x60")]
	private ProcessModuleCollection modules;

	[Token(Token = "0x4000491")]
	[FieldOffset(Offset = "0x68")]
	private bool haveWorkingSetLimits;

	[Token(Token = "0x4000492")]
	[FieldOffset(Offset = "0x69")]
	private bool havePriorityClass;

	[Token(Token = "0x4000493")]
	[FieldOffset(Offset = "0x70")]
	private ProcessStartInfo startInfo;

	[Token(Token = "0x4000494")]
	[FieldOffset(Offset = "0x78")]
	private bool watchForExit;

	[Token(Token = "0x4000495")]
	[FieldOffset(Offset = "0x79")]
	private bool watchingForExit;

	[Token(Token = "0x4000496")]
	[FieldOffset(Offset = "0x80")]
	private EventHandler onExited;

	[Token(Token = "0x4000497")]
	[FieldOffset(Offset = "0x88")]
	private bool exited;

	[Token(Token = "0x4000498")]
	[FieldOffset(Offset = "0x8C")]
	private int exitCode;

	[Token(Token = "0x4000499")]
	[FieldOffset(Offset = "0x90")]
	private bool signaled;

	[Token(Token = "0x400049A")]
	[FieldOffset(Offset = "0x91")]
	private bool haveExitTime;

	[Token(Token = "0x400049B")]
	[FieldOffset(Offset = "0x92")]
	private bool raisedOnExited;

	[Token(Token = "0x400049C")]
	[FieldOffset(Offset = "0x98")]
	private RegisteredWaitHandle registeredWaitHandle;

	[Token(Token = "0x400049D")]
	[FieldOffset(Offset = "0xA0")]
	private WaitHandle waitHandle;

	[Token(Token = "0x400049E")]
	[FieldOffset(Offset = "0xA8")]
	private ISynchronizeInvoke synchronizingObject;

	[Token(Token = "0x400049F")]
	[FieldOffset(Offset = "0xB0")]
	private StreamReader standardOutput;

	[Token(Token = "0x40004A0")]
	[FieldOffset(Offset = "0xB8")]
	private StreamWriter standardInput;

	[Token(Token = "0x40004A1")]
	[FieldOffset(Offset = "0xC0")]
	private StreamReader standardError;

	[Token(Token = "0x40004A2")]
	[FieldOffset(Offset = "0xC8")]
	private bool disposed;

	[Token(Token = "0x40004A3")]
	[FieldOffset(Offset = "0xCC")]
	private StreamReadMode outputStreamReadMode;

	[Token(Token = "0x40004A4")]
	[FieldOffset(Offset = "0xD0")]
	private StreamReadMode errorStreamReadMode;

	[Token(Token = "0x40004A5")]
	[FieldOffset(Offset = "0xD4")]
	private StreamReadMode inputStreamReadMode;

	[Token(Token = "0x40004A6")]
	[FieldOffset(Offset = "0xD8")]
	internal AsyncStreamReader output;

	[Token(Token = "0x40004A7")]
	[FieldOffset(Offset = "0xE0")]
	internal AsyncStreamReader error;

	[Token(Token = "0x40004A8")]
	[FieldOffset(Offset = "0xE8")]
	private string process_name;

	[Token(Token = "0x1700010A")]
	[Browsable(false)]
	[MonitoringDescription("Indicates if the process component is associated with a real process.")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	private bool Associated
	{
		[Token(Token = "0x600068D")]
		[Address(RVA = "0x2867370", Offset = "0x2865970", VA = "0x182867370")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010B")]
	[MonitoringDescription("Indicates if the associated process has been terminated.")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	public bool HasExited
	{
		[Token(Token = "0x600068E")]
		[Address(RVA = "0x2867460", Offset = "0x2865A60", VA = "0x182867460")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700010C")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[MonitoringDescription("Returns the native handle for this process.   The handle is only available if the process was started using this component.")]
	public IntPtr Handle
	{
		[Token(Token = "0x600068F")]
		[Address(RVA = "0x2867380", Offset = "0x2865980", VA = "0x182867380")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x1700010D")]
	[MonitoringDescription("The unique identifier for the process.")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	public int Id
	{
		[Token(Token = "0x6000690")]
		[Address(RVA = "0x2867790", Offset = "0x2865D90", VA = "0x182867790")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700010E")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	[MonitoringDescription("Specifies information used to start a process.")]
	[Browsable(false)]
	public ProcessStartInfo StartInfo
	{
		[Token(Token = "0x6000691")]
		[Address(RVA = "0x2867A00", Offset = "0x2866000", VA = "0x182867A00")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000692")]
		[Address(RVA = "0x2867C50", Offset = "0x2866250", VA = "0x182867C50")]
		set
		{
		}
	}

	[Token(Token = "0x1700010F")]
	[MonitoringDescription("The object used to marshal the event handler calls issued as a result of a Process exit.")]
	[DefaultValue(null)]
	[Browsable(false)]
	public ISynchronizeInvoke SynchronizingObject
	{
		[Token(Token = "0x6000693")]
		[Address(RVA = "0x2867AD0", Offset = "0x28660D0", VA = "0x182867AD0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000110")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[MonitoringDescription("The name of this process.")]
	public string ProcessName
	{
		[Token(Token = "0x60006A9")]
		[Address(RVA = "0x28677B0", Offset = "0x2865DB0", VA = "0x1828677B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000111")]
	private static bool IsWindows
	{
		[Token(Token = "0x60006AE")]
		[Address(RVA = "0x1AF68B0", Offset = "0x1AF4EB0", VA = "0x181AF68B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x600068B")]
	[Address(RVA = "0x2867250", Offset = "0x2865850", VA = "0x182867250")]
	public Process()
	{
	}

	[Token(Token = "0x600068C")]
	[Address(RVA = "0x28672E0", Offset = "0x28658E0", VA = "0x1828672E0")]
	private Process(string machineName, bool isRemoteMachine, int processId, ProcessInfo processInfo)
	{
	}

	[Token(Token = "0x6000694")]
	[Address(RVA = "0x2865790", Offset = "0x2863D90", VA = "0x182865790")]
	private void ReleaseProcessHandle(SafeProcessHandle handle)
	{
	}

	[Token(Token = "0x6000695")]
	[Address(RVA = "0x2864630", Offset = "0x2862C30", VA = "0x182864630")]
	private void CompletionCallback(object context, bool wasSignaled)
	{
	}

	[Token(Token = "0x6000696")]
	[Address(RVA = "0x2864950", Offset = "0x2862F50", VA = "0x182864950", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x6000697")]
	[Address(RVA = "0x2864410", Offset = "0x2862A10", VA = "0x182864410")]
	public void Close()
	{
	}

	[Token(Token = "0x6000698")]
	[Address(RVA = "0x28649A0", Offset = "0x2862FA0", VA = "0x1828649A0")]
	private void EnsureState(State state)
	{
	}

	[Token(Token = "0x6000699")]
	[Address(RVA = "0x2864C20", Offset = "0x2863220", VA = "0x182864C20")]
	private void EnsureWatchingForExit()
	{
	}

	[Token(Token = "0x600069A")]
	[Address(RVA = "0x2864E60", Offset = "0x2863460", VA = "0x182864E60")]
	public static Process GetCurrentProcess()
	{
		return null;
	}

	[Token(Token = "0x600069B")]
	[Address(RVA = "0x2865290", Offset = "0x2863890", VA = "0x182865290")]
	protected void OnExited()
	{
	}

	[Token(Token = "0x600069C")]
	[Address(RVA = "0x2864F30", Offset = "0x2863530", VA = "0x182864F30")]
	private SafeProcessHandle GetProcessHandle(int access, bool throwIfExited)
	{
		return null;
	}

	[Token(Token = "0x600069D")]
	[Address(RVA = "0x2865280", Offset = "0x2863880", VA = "0x182865280")]
	private SafeProcessHandle GetProcessHandle(int access)
	{
		return null;
	}

	[Token(Token = "0x600069E")]
	[Address(RVA = "0x28654F0", Offset = "0x2863AF0", VA = "0x1828654F0")]
	private SafeProcessHandle OpenProcessHandle(int access)
	{
		return null;
	}

	[Token(Token = "0x600069F")]
	[Address(RVA = "0x2865740", Offset = "0x2863D40", VA = "0x182865740")]
	public void Refresh()
	{
	}

	[Token(Token = "0x60006A0")]
	[Address(RVA = "0x28657B0", Offset = "0x2863DB0", VA = "0x1828657B0")]
	private void SetProcessHandle(SafeProcessHandle processHandle)
	{
	}

	[Token(Token = "0x60006A1")]
	[Address(RVA = "0x28657F0", Offset = "0x2863DF0", VA = "0x1828657F0")]
	private void SetProcessId(int processId)
	{
	}

	[Token(Token = "0x60006A2")]
	[Address(RVA = "0x2866BC0", Offset = "0x28651C0", VA = "0x182866BC0")]
	public bool Start()
	{
		return default(bool);
	}

	[Token(Token = "0x60006A3")]
	[Address(RVA = "0x2866FD0", Offset = "0x28655D0", VA = "0x182866FD0")]
	public static Process Start(string fileName)
	{
		return null;
	}

	[Token(Token = "0x60006A4")]
	[Address(RVA = "0x2866D40", Offset = "0x2865340", VA = "0x182866D40")]
	public static Process Start(ProcessStartInfo startInfo)
	{
		return null;
	}

	[Token(Token = "0x60006A5")]
	[Address(RVA = "0x2867040", Offset = "0x2865640", VA = "0x182867040")]
	private void StopWatchingForExit()
	{
	}

	[Token(Token = "0x60006A6")]
	[Address(RVA = "0x2867150", Offset = "0x2865750", VA = "0x182867150", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60006A7")]
	[Address(RVA = "0x28655B0", Offset = "0x2863BB0", VA = "0x1828655B0")]
	private static extern string ProcessName_icall(IntPtr handle);

	[Token(Token = "0x60006A8")]
	[Address(RVA = "0x28655C0", Offset = "0x2863BC0", VA = "0x1828655C0")]
	private static string ProcessName_internal(SafeProcessHandle handle)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60006AA")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	private static extern bool ShellExecuteEx_internal(ProcessStartInfo startInfo, ref ProcInfo procInfo);

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60006AB")]
	[Address(RVA = "0x1948290", Offset = "0x1946890", VA = "0x181948290")]
	private static extern bool CreateProcess_internal(ProcessStartInfo startInfo, IntPtr stdin, IntPtr stdout, IntPtr stderr, ref ProcInfo procInfo);

	[Token(Token = "0x60006AC")]
	[Address(RVA = "0x2866750", Offset = "0x2864D50", VA = "0x182866750")]
	private bool StartWithShellExecuteEx(ProcessStartInfo startInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60006AD")]
	[Address(RVA = "0x2864650", Offset = "0x2862C50", VA = "0x182864650")]
	private static void CreatePipe(out IntPtr read, out IntPtr write, bool writeDirection)
	{
	}

	[Token(Token = "0x60006AF")]
	[Address(RVA = "0x2865800", Offset = "0x2863E00", VA = "0x182865800")]
	private bool StartWithCreateProcess(ProcessStartInfo startInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60006B0")]
	[Address(RVA = "0x2864D50", Offset = "0x2863350", VA = "0x182864D50")]
	private static void FillUserInfo(ProcessStartInfo startInfo, ref ProcInfo procInfo)
	{
	}

	[Token(Token = "0x60006B1")]
	[Address(RVA = "0x2865690", Offset = "0x2863C90", VA = "0x182865690")]
	private void RaiseOnExited()
	{
	}
}
