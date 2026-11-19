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

[Token(Token = "0x20000D1")]
[DefaultProperty("StartInfo")]
[DefaultEvent("Exited")]
[MonitoringDescription("Provides access to local and remote processes, enabling starting and stopping of local processes.")]
public class Process : Component
{
	[Token(Token = "0x20000D2")]
	private enum StreamReadMode
	{
		[Token(Token = "0x40003DB")]
		undefined,
		[Token(Token = "0x40003DC")]
		syncMode,
		[Token(Token = "0x40003DD")]
		asyncMode
	}

	[Token(Token = "0x20000D3")]
	private enum State
	{
		[Token(Token = "0x40003DF")]
		HaveId = 1,
		[Token(Token = "0x40003E0")]
		IsLocal = 2,
		[Token(Token = "0x40003E1")]
		IsNt = 4,
		[Token(Token = "0x40003E2")]
		HaveProcessInfo = 8,
		[Token(Token = "0x40003E3")]
		Exited = 16,
		[Token(Token = "0x40003E4")]
		Associated = 32,
		[Token(Token = "0x40003E5")]
		IsWin2k = 64,
		[Token(Token = "0x40003E6")]
		HaveNtProcessInfo = 12
	}

	[Token(Token = "0x20000D4")]
	private struct ProcInfo
	{
		[Token(Token = "0x40003E7")]
		[FieldOffset(Offset = "0x0")]
		public IntPtr process_handle;

		[Token(Token = "0x40003E8")]
		[FieldOffset(Offset = "0x8")]
		public int pid;

		[Token(Token = "0x40003E9")]
		[FieldOffset(Offset = "0x10")]
		public string[] envVariables;

		[Token(Token = "0x40003EA")]
		[FieldOffset(Offset = "0x18")]
		public string UserName;

		[Token(Token = "0x40003EB")]
		[FieldOffset(Offset = "0x20")]
		public string Domain;

		[Token(Token = "0x40003EC")]
		[FieldOffset(Offset = "0x28")]
		public IntPtr Password;

		[Token(Token = "0x40003ED")]
		[FieldOffset(Offset = "0x30")]
		public bool LoadUserProfile;
	}

	[Token(Token = "0x40003B9")]
	[FieldOffset(Offset = "0x28")]
	private bool haveProcessId;

	[Token(Token = "0x40003BA")]
	[FieldOffset(Offset = "0x2C")]
	private int processId;

	[Token(Token = "0x40003BB")]
	[FieldOffset(Offset = "0x30")]
	private bool haveProcessHandle;

	[Token(Token = "0x40003BC")]
	[FieldOffset(Offset = "0x38")]
	private SafeProcessHandle m_processHandle;

	[Token(Token = "0x40003BD")]
	[FieldOffset(Offset = "0x40")]
	private bool isRemoteMachine;

	[Token(Token = "0x40003BE")]
	[FieldOffset(Offset = "0x48")]
	private string machineName;

	[Token(Token = "0x40003BF")]
	[FieldOffset(Offset = "0x50")]
	private int m_processAccess;

	[Token(Token = "0x40003C0")]
	[FieldOffset(Offset = "0x58")]
	private ProcessThreadCollection threads;

	[Token(Token = "0x40003C1")]
	[FieldOffset(Offset = "0x60")]
	private ProcessModuleCollection modules;

	[Token(Token = "0x40003C2")]
	[FieldOffset(Offset = "0x68")]
	private bool haveWorkingSetLimits;

	[Token(Token = "0x40003C3")]
	[FieldOffset(Offset = "0x69")]
	private bool havePriorityClass;

	[Token(Token = "0x40003C4")]
	[FieldOffset(Offset = "0x70")]
	private ProcessStartInfo startInfo;

	[Token(Token = "0x40003C5")]
	[FieldOffset(Offset = "0x78")]
	private bool watchForExit;

	[Token(Token = "0x40003C6")]
	[FieldOffset(Offset = "0x79")]
	private bool watchingForExit;

	[Token(Token = "0x40003C7")]
	[FieldOffset(Offset = "0x80")]
	private EventHandler onExited;

	[Token(Token = "0x40003C8")]
	[FieldOffset(Offset = "0x88")]
	private bool exited;

	[Token(Token = "0x40003C9")]
	[FieldOffset(Offset = "0x8C")]
	private int exitCode;

	[Token(Token = "0x40003CA")]
	[FieldOffset(Offset = "0x90")]
	private bool signaled;

	[Token(Token = "0x40003CB")]
	[FieldOffset(Offset = "0x91")]
	private bool haveExitTime;

	[Token(Token = "0x40003CC")]
	[FieldOffset(Offset = "0x92")]
	private bool raisedOnExited;

	[Token(Token = "0x40003CD")]
	[FieldOffset(Offset = "0x98")]
	private RegisteredWaitHandle registeredWaitHandle;

	[Token(Token = "0x40003CE")]
	[FieldOffset(Offset = "0xA0")]
	private WaitHandle waitHandle;

	[Token(Token = "0x40003CF")]
	[FieldOffset(Offset = "0xA8")]
	private ISynchronizeInvoke synchronizingObject;

	[Token(Token = "0x40003D0")]
	[FieldOffset(Offset = "0xB0")]
	private StreamReader standardOutput;

	[Token(Token = "0x40003D1")]
	[FieldOffset(Offset = "0xB8")]
	private StreamWriter standardInput;

	[Token(Token = "0x40003D2")]
	[FieldOffset(Offset = "0xC0")]
	private StreamReader standardError;

	[Token(Token = "0x40003D3")]
	[FieldOffset(Offset = "0xC8")]
	private bool disposed;

	[Token(Token = "0x40003D4")]
	[FieldOffset(Offset = "0xCC")]
	private StreamReadMode outputStreamReadMode;

	[Token(Token = "0x40003D5")]
	[FieldOffset(Offset = "0xD0")]
	private StreamReadMode errorStreamReadMode;

	[Token(Token = "0x40003D6")]
	[FieldOffset(Offset = "0xD4")]
	private StreamReadMode inputStreamReadMode;

	[Token(Token = "0x40003D7")]
	[FieldOffset(Offset = "0xD8")]
	internal AsyncStreamReader output;

	[Token(Token = "0x40003D8")]
	[FieldOffset(Offset = "0xE0")]
	internal AsyncStreamReader error;

	[Token(Token = "0x40003D9")]
	[FieldOffset(Offset = "0xE8")]
	private string process_name;

	[Token(Token = "0x170000DB")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[MonitoringDescription("Indicates if the process component is associated with a real process.")]
	private bool Associated
	{
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x6203790", Offset = "0x6202790", VA = "0x6203790")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DC")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[MonitoringDescription("Indicates if the associated process has been terminated.")]
	[Browsable(false)]
	public bool HasExited
	{
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x62037B0", Offset = "0x62027B0", VA = "0x62037B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000DD")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[Browsable(false)]
	[MonitoringDescription("Returns the native handle for this process.   The handle is only available if the process was started using this component.")]
	public IntPtr Handle
	{
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x62040A0", Offset = "0x62030A0", VA = "0x62040A0")]
		get
		{
			return default(IntPtr);
		}
	}

	[Token(Token = "0x170000DE")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[MonitoringDescription("The unique identifier for the process.")]
	public int Id
	{
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x62014F0", Offset = "0x62004F0", VA = "0x62014F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000DF")]
	[Browsable(false)]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Content)]
	[MonitoringDescription("Specifies information used to start a process.")]
	public ProcessStartInfo StartInfo
	{
		[Token(Token = "0x60004DB")]
		[Address(RVA = "0x6204190", Offset = "0x6203190", VA = "0x6204190")]
		get
		{
			return null;
		}
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x62042E0", Offset = "0x62032E0", VA = "0x62042E0")]
		set
		{
		}
	}

	[Token(Token = "0x170000E0")]
	[Browsable(false)]
	[DefaultValue(null)]
	[MonitoringDescription("The object used to marshal the event handler calls issued as a result of a Process exit.")]
	public ISynchronizeInvoke SynchronizingObject
	{
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x6204340", Offset = "0x6203340", VA = "0x6204340")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E1")]
	[DesignerSerializationVisibility(DesignerSerializationVisibility.Hidden)]
	[MonitoringDescription("The name of this process.")]
	public string ProcessName
	{
		[Token(Token = "0x60004F3")]
		[Address(RVA = "0x6201510", Offset = "0x6200510", VA = "0x6201510")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000E2")]
	private static bool IsWindows
	{
		[Token(Token = "0x60004F8")]
		[Address(RVA = "0x6206D00", Offset = "0x6205D00", VA = "0x6206D00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60004D5")]
	[Address(RVA = "0x6203680", Offset = "0x6202680", VA = "0x6203680")]
	public Process()
	{
	}

	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x6203700", Offset = "0x6202700", VA = "0x6203700")]
	private Process(string machineName, bool isRemoteMachine, int processId, ProcessInfo processInfo)
	{
	}

	[Token(Token = "0x60004DE")]
	[Address(RVA = "0x6204500", Offset = "0x6203500", VA = "0x6204500")]
	private void ReleaseProcessHandle(SafeProcessHandle handle)
	{
	}

	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x6204520", Offset = "0x6203520", VA = "0x6204520")]
	private void CompletionCallback(object context, bool wasSignaled)
	{
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x6204670", Offset = "0x6203670", VA = "0x6204670", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x62046B0", Offset = "0x62036B0", VA = "0x62046B0")]
	public void Close()
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x6203AE0", Offset = "0x6202AE0", VA = "0x6203AE0")]
	private void EnsureState(State state)
	{
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x6204930", Offset = "0x6203930", VA = "0x6204930")]
	private void EnsureWatchingForExit()
	{
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x6201420", Offset = "0x6200420", VA = "0x6201420")]
	public static Process GetCurrentProcess()
	{
		return null;
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x6204B20", Offset = "0x6203B20", VA = "0x6204B20")]
	protected void OnExited()
	{
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x6203C00", Offset = "0x6202C00", VA = "0x6203C00")]
	private SafeProcessHandle GetProcessHandle(int access, bool throwIfExited)
	{
		return null;
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x6204DC0", Offset = "0x6203DC0", VA = "0x6204DC0")]
	private SafeProcessHandle GetProcessHandle(int access)
	{
		return null;
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x62040D0", Offset = "0x62030D0", VA = "0x62040D0")]
	private SafeProcessHandle OpenProcessHandle(int access)
	{
		return null;
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x62048E0", Offset = "0x62038E0", VA = "0x62048E0")]
	public void Refresh()
	{
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x6204DD0", Offset = "0x6203DD0", VA = "0x6204DD0")]
	private void SetProcessHandle(SafeProcessHandle processHandle)
	{
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x6204E00", Offset = "0x6203E00", VA = "0x6204E00")]
	private void SetProcessId(int processId)
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x6204E10", Offset = "0x6203E10", VA = "0x6204E10")]
	public bool Start()
	{
		return default(bool);
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x6206590", Offset = "0x6205590", VA = "0x6206590")]
	public static Process Start(string fileName)
	{
		return null;
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x6206630", Offset = "0x6205630", VA = "0x6206630")]
	public static Process Start(ProcessStartInfo startInfo)
	{
		return null;
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x6204540", Offset = "0x6203540", VA = "0x6204540")]
	private void StopWatchingForExit()
	{
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x6206750", Offset = "0x6205750", VA = "0x6206750", Slot = "3")]
	public override string ToString()
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x62068A0", Offset = "0x62058A0", VA = "0x62068A0")]
	private static extern string ProcessName_icall(IntPtr handle);

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x62068B0", Offset = "0x62058B0", VA = "0x62068B0")]
	private static string ProcessName_internal(SafeProcessHandle handle)
	{
		return null;
	}

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x6206990", Offset = "0x6205990", VA = "0x6206990")]
	private static extern bool ShellExecuteEx_internal(ProcessStartInfo startInfo, ref ProcInfo procInfo);

	[MethodImpl(MethodImplOptions.InternalCall)]
	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x62069A0", Offset = "0x62059A0", VA = "0x62069A0")]
	private static extern bool CreateProcess_internal(ProcessStartInfo startInfo, IntPtr stdin, IntPtr stdout, IntPtr stderr, ref ProcInfo procInfo);

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x6204F10", Offset = "0x6203F10", VA = "0x6204F10")]
	private bool StartWithShellExecuteEx(ProcessStartInfo startInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x6206AD0", Offset = "0x6205AD0", VA = "0x6206AD0")]
	private static void CreatePipe(out IntPtr read, out IntPtr write, bool writeDirection)
	{
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x6205230", Offset = "0x6204230", VA = "0x6205230")]
	private bool StartWithCreateProcess(ProcessStartInfo startInfo)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x62069E0", Offset = "0x62059E0", VA = "0x62069E0")]
	private static void FillUserInfo(ProcessStartInfo startInfo, ref ProcInfo procInfo)
	{
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x6203FD0", Offset = "0x6202FD0", VA = "0x6203FD0")]
	private void RaiseOnExited()
	{
	}
}
