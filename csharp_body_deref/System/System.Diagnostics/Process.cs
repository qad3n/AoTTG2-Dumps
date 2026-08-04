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

[Token(Token = "0x20000D0")]
[MonitoringDescription("Provides access to local and remote processes, enabling starting and stopping of local processes.")]
[DefaultEvent("Exited")]
[DefaultProperty("StartInfo")]
public class Process : Component
{
	[Token(Token = "0x20000D1")]
	private enum StreamReadMode
	{
		[Token(Token = "0x40003D8")]
		undefined,
		[Token(Token = "0x40003D9")]
		syncMode,
		[Token(Token = "0x40003DA")]
		asyncMode
	}

	[Token(Token = "0x20000D2")]
	private enum State
	{
		[Token(Token = "0x40003DC")]
		HaveId = 1,
		[Token(Token = "0x40003DD")]
		IsLocal = 2,
		[Token(Token = "0x40003DE")]
		IsNt = 4,
		[Token(Token = "0x40003DF")]
		HaveProcessInfo = 8,
		[Token(Token = "0x40003E0")]
		Exited = 16,
		[Token(Token = "0x40003E1")]
		Associated = 32,
		[Token(Token = "0x40003E2")]
		IsWin2k = 64,
		[Token(Token = "0x40003E3")]
		HaveNtProcessInfo = 12
	}

	[Token(Token = "0x20000D3")]
	private struct ProcInfo
	{
		[Token(Token = "0x40003E4")]
		[FieldOffset(Offset = "0x0")]
		public IntPtr process_handle;

		[Token(Token = "0x40003E5")]
		[FieldOffset(Offset = "0x8")]
		public int pid;

		[Token(Token = "0x40003E6")]
		[FieldOffset(Offset = "0x10")]
		public string[] envVariables;

		[Token(Token = "0x40003E7")]
		[FieldOffset(Offset = "0x18")]
		public string UserName;

		[Token(Token = "0x40003E8")]
		[FieldOffset(Offset = "0x20")]
		public string Domain;

		[Token(Token = "0x40003E9")]
		[FieldOffset(Offset = "0x28")]
		public IntPtr Password;

		[Token(Token = "0x40003EA")]
		[FieldOffset(Offset = "0x30")]
		public bool LoadUserProfile;
	}

	[Token(Token = "0x40003B6")]
	[FieldOffset(Offset = "0x28")]
	private bool haveProcessId;

	[Token(Token = "0x40003B7")]
	[FieldOffset(Offset = "0x2C")]
	private int processId;

	[Token(Token = "0x40003B8")]
	[FieldOffset(Offset = "0x30")]
	private bool haveProcessHandle;

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x38")]
	private SafeProcessHandle m_processHandle;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x40")]
	private bool isRemoteMachine;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x48")]
	private string machineName;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x50")]
	private int m_processAccess;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x58")]
	private ProcessThreadCollection threads;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x60")]
	private ProcessModuleCollection modules;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x68")]
	private bool haveWorkingSetLimits;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x69")]
	private bool havePriorityClass;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x70")]
	private ProcessStartInfo startInfo;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x78")]
	private bool watchForExit;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x79")]
	private bool watchingForExit;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x80")]
	private EventHandler onExited;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x88")]
	private bool exited;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x8C")]
	private int exitCode;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x90")]
	private bool signaled;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x91")]
	private bool haveExitTime;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x92")]
	private bool raisedOnExited;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x98")]
	private RegisteredWaitHandle registeredWaitHandle;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0xA0")]
	private WaitHandle waitHandle;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0xA8")]
	private ISynchronizeInvoke synchronizingObject;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0xB0")]
	private StreamReader standardOutput;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0xB8")]
	private StreamWriter standardInput;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0xC0")]
	private StreamReader standardError;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0xC8")]
	private bool disposed;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0xCC")]
	private StreamReadMode outputStreamReadMode;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0xD0")]
	private StreamReadMode errorStreamReadMode;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0xD4")]
	private StreamReadMode inputStreamReadMode;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0xD8")]
	internal AsyncStreamReader output;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0xE0")]
	internal AsyncStreamReader error;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0xE8")]
	private string process_name;

	[Token(Token = "0x170000D1")]
	[MonitoringDescription("Indicates if the process component is associated with a real process.")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	private bool Associated
	{
		[Token(Token = "0x60004AD")]
		[Address(RVA = "0x49275E0", Offset = "0x49275E0", VA = "0x49275E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D2")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[MonitoringDescription("Indicates if the associated process has been terminated.")]
	[Browsable(false)]
	public bool HasExited
	{
		[Token(Token = "0x60004AE")]
		[Address(RVA = "0x4927600", Offset = "0x4927600", VA = "0x4927600")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000D3")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[MonitoringDescription("Returns the native handle for this process.   The handle is only available if the process was started using this component.")]
	[Browsable(false)]
	public IntPtr Handle
	{
		[Token(Token = "0x60004AF")]
		[Address(RVA = "0x4928180", Offset = "0x4928180", VA = "0x4928180")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x170000D4")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[MonitoringDescription("The unique identifier for the process.")]
	public int Id
	{
		[Token(Token = "0x60004B0")]
		[Address(RVA = "0x4925190", Offset = "0x4925190", VA = "0x4925190")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000D5")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	[MonitoringDescription("Specifies information used to start a process.")]
	[Browsable(false)]
	public ProcessStartInfo StartInfo
	{
		[Token(Token = "0x60004B1")]
		[Address(RVA = "0x4928270", Offset = "0x4928270", VA = "0x4928270")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004B2")]
		[Address(RVA = "0x49283C0", Offset = "0x49283C0", VA = "0x49283C0")]
		set
		{
		}
	}

	[Token(Token = "0x170000D6")]
	[Browsable(false)]
	[DefaultValue(null)]
	[MonitoringDescription("The object used to marshal the event handler calls issued as a result of a Process exit.")]
	public ISynchronizeInvoke SynchronizingObject
	{
		[Token(Token = "0x60004B3")]
		[Address(RVA = "0x4928420", Offset = "0x4928420", VA = "0x4928420")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D7")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[MonitoringDescription("The name of this process.")]
	public string ProcessName
	{
		[Token(Token = "0x60004C9")]
		[Address(RVA = "0x49251B0", Offset = "0x49251B0", VA = "0x49251B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000D8")]
	private static bool IsWindows
	{
		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x492B180", Offset = "0x492B180", VA = "0x492B180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x49274D0", Offset = "0x49274D0", VA = "0x49274D0")]
	public Process()
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x4927550", Offset = "0x4927550", VA = "0x4927550")]
	private Process(string machineName, bool isRemoteMachine, int processId, ProcessInfo processInfo)
	{
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x49285E0", Offset = "0x49285E0", VA = "0x49285E0")]
	private void ReleaseProcessHandle(SafeProcessHandle handle)
	{
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x4928600", Offset = "0x4928600", VA = "0x4928600")]
	private void CompletionCallback(object context, bool wasSignaled)
	{
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x4928760", Offset = "0x4928760", VA = "0x4928760", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x49287A0", Offset = "0x49287A0", VA = "0x49287A0")]
	public void Close()
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x4927940", Offset = "0x4927940", VA = "0x4927940")]
	private void EnsureState(State state)
	{
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x4928A20", Offset = "0x4928A20", VA = "0x4928A20")]
	private void EnsureWatchingForExit()
	{
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x49250C0", Offset = "0x49250C0", VA = "0x49250C0")]
	public static Process GetCurrentProcess()
	{
		return null;
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x4928C80", Offset = "0x4928C80", VA = "0x4928C80")]
	protected void OnExited()
	{
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x4927A60", Offset = "0x4927A60", VA = "0x4927A60")]
	private SafeProcessHandle GetProcessHandle(int access, bool throwIfExited)
	{
		return null;
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x4928F30", Offset = "0x4928F30", VA = "0x4928F30")]
	private SafeProcessHandle GetProcessHandle(int access)
	{
		return null;
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x49281B0", Offset = "0x49281B0", VA = "0x49281B0")]
	private SafeProcessHandle OpenProcessHandle(int access)
	{
		return null;
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x49289D0", Offset = "0x49289D0", VA = "0x49289D0")]
	public void Refresh()
	{
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x4928F40", Offset = "0x4928F40", VA = "0x4928F40")]
	private void SetProcessHandle(SafeProcessHandle processHandle)
	{
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x4928F70", Offset = "0x4928F70", VA = "0x4928F70")]
	private void SetProcessId(int processId)
	{
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x4928F80", Offset = "0x4928F80", VA = "0x4928F80")]
	public bool Start()
	{
		return default(bool);
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x492A9E0", Offset = "0x492A9E0", VA = "0x492A9E0")]
	public static Process Start(string fileName)
	{
		return null;
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x492AA70", Offset = "0x492AA70", VA = "0x492AA70")]
	public static Process Start(ProcessStartInfo startInfo)
	{
		return null;
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x4928620", Offset = "0x4928620", VA = "0x4928620")]
	private void StopWatchingForExit()
	{
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x492AB90", Offset = "0x492AB90", VA = "0x492AB90", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x492ACE0", Offset = "0x492ACE0", VA = "0x492ACE0")]
	private static extern string ProcessName_icall(IntPtr handle);

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x492ACF0", Offset = "0x492ACF0", VA = "0x492ACF0")]
	private static string ProcessName_internal(SafeProcessHandle handle)
	{
		return null;
	}

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x492ADE0", Offset = "0x492ADE0", VA = "0x492ADE0")]
	private static extern bool ShellExecuteEx_internal(ProcessStartInfo startInfo, ref ProcInfo procInfo);

	[MethodImpl((MethodImplOptions)4096)]
	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x492ADF0", Offset = "0x492ADF0", VA = "0x492ADF0")]
	private static extern bool CreateProcess_internal(ProcessStartInfo startInfo, IntPtr stdin, IntPtr stdout, IntPtr stderr, ref ProcInfo procInfo);

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x4929080", Offset = "0x4929080", VA = "0x4929080")]
	private bool StartWithShellExecuteEx(ProcessStartInfo startInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x492AF40", Offset = "0x492AF40", VA = "0x492AF40")]
	private static void CreatePipe(out IntPtr read, out IntPtr write, bool writeDirection)
	{
	}

	[Token(Token = "0x60004CF")]
	[Address(RVA = "0x4929410", Offset = "0x4929410", VA = "0x4929410")]
	private bool StartWithCreateProcess(ProcessStartInfo startInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60004D0")]
	[Address(RVA = "0x492AE30", Offset = "0x492AE30", VA = "0x492AE30")]
	private static void FillUserInfo(ProcessStartInfo startInfo, ref ProcInfo procInfo)
	{
	}

	[Token(Token = "0x60004D1")]
	[Address(RVA = "0x4928090", Offset = "0x4928090", VA = "0x4928090")]
	private void RaiseOnExited()
	{
	}
}
