// ==================== AoTTG2 cross-reference ====================
// Type: System.ComponentModel.BackgroundWorker
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace System.ComponentModel;

[Token(Token = "0x200024B")]
[DefaultEvent("DoWork")]
public class BackgroundWorker : Component
{
	[Token(Token = "0x4000CC0")]
	[FieldOffset(Offset = "0x28")]
	private bool _canCancelWorker;

	[Token(Token = "0x4000CC1")]
	[FieldOffset(Offset = "0x29")]
	private bool _workerReportsProgress;

	[Token(Token = "0x4000CC2")]
	[FieldOffset(Offset = "0x2A")]
	private bool _cancellationPending;

	[Token(Token = "0x4000CC3")]
	[FieldOffset(Offset = "0x2B")]
	private bool _isRunning;

	[Token(Token = "0x4000CC4")]
	[FieldOffset(Offset = "0x30")]
	private AsyncOperation _asyncOperation;

	[Token(Token = "0x4000CC5")]
	[FieldOffset(Offset = "0x38")]
	private readonly SendOrPostCallback _operationCompleted;

	[Token(Token = "0x4000CC6")]
	[FieldOffset(Offset = "0x40")]
	private readonly SendOrPostCallback _progressReporter;

	[Token(Token = "0x17000331")]
	public bool CancellationPending
	{
		[Token(Token = "0x6000E4E")]
		[Address(RVA = "0x4880350", Offset = "0x4880350", VA = "0x4880350")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000332")]
	public bool IsBusy
	{
		[Token(Token = "0x6000E52")]
		[Address(RVA = "0x48804E0", Offset = "0x48804E0", VA = "0x48804E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000333")]
	public bool WorkerReportsProgress
	{
		[Token(Token = "0x6000E5F")]
		[Address(RVA = "0x4880B70", Offset = "0x4880B70", VA = "0x4880B70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E60")]
		[Address(RVA = "0x4880B80", Offset = "0x4880B80", VA = "0x4880B80")]
		set
		{
		}
	}

	[Token(Token = "0x17000334")]
	public bool WorkerSupportsCancellation
	{
		[Token(Token = "0x6000E61")]
		[Address(RVA = "0x4880B90", Offset = "0x4880B90", VA = "0x4880B90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E62")]
		[Address(RVA = "0x4880BA0", Offset = "0x4880BA0", VA = "0x4880BA0")]
		set
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event DoWorkEventHandler DoWork
	{
		[Token(Token = "0x6000E50")]
		[Address(RVA = "0x48803C0", Offset = "0x48803C0", VA = "0x48803C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E51")]
		[Address(RVA = "0x4880450", Offset = "0x4880450", VA = "0x4880450")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event ProgressChangedEventHandler ProgressChanged
	{
		[Token(Token = "0x6000E56")]
		[Address(RVA = "0x4880550", Offset = "0x4880550", VA = "0x4880550")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E57")]
		[Address(RVA = "0x48805E0", Offset = "0x48805E0", VA = "0x48805E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event RunWorkerCompletedEventHandler RunWorkerCompleted
	{
		[Token(Token = "0x6000E5D")]
		[Address(RVA = "0x4880A50", Offset = "0x4880A50", VA = "0x4880A50")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E5E")]
		[Address(RVA = "0x4880AE0", Offset = "0x4880AE0", VA = "0x4880AE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x48801E0", Offset = "0x48801E0", VA = "0x48801E0")]
	public BackgroundWorker()
	{
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x48802C0", Offset = "0x48802C0", VA = "0x48802C0")]
	private void AsyncOperationCompleted(object arg)
	{
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x4880360", Offset = "0x4880360", VA = "0x4880360")]
	public void CancelAsync()
	{
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x48804F0", Offset = "0x48804F0", VA = "0x48804F0", Slot = "16")]
	protected virtual void OnDoWork(DoWorkEventArgs e)
	{
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x4880510", Offset = "0x4880510", VA = "0x4880510", Slot = "17")]
	protected virtual void OnRunWorkerCompleted(RunWorkerCompletedEventArgs e)
	{
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x4880530", Offset = "0x4880530", VA = "0x4880530", Slot = "18")]
	protected virtual void OnProgressChanged(ProgressChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x4880670", Offset = "0x4880670", VA = "0x4880670")]
	private void ProgressReporter(object arg)
	{
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x48806F0", Offset = "0x48806F0", VA = "0x48806F0")]
	public void ReportProgress(int percentProgress)
	{
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x4880700", Offset = "0x4880700", VA = "0x4880700")]
	public void ReportProgress(int percentProgress, object userState)
	{
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x48807E0", Offset = "0x48807E0", VA = "0x48807E0")]
	public void RunWorkerAsync()
	{
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x48807F0", Offset = "0x48807F0", VA = "0x48807F0")]
	public void RunWorkerAsync(object argument)
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x4880BB0", Offset = "0x4880BB0", VA = "0x4880BB0")]
	private void WorkerThreadStart(object argument)
	{
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x4880D20", Offset = "0x4880D20", VA = "0x4880D20", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}
}
