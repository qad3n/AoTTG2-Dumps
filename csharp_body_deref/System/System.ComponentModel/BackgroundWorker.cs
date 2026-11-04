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

[Token(Token = "0x2000156")]
[DefaultEvent("DoWork")]
public class BackgroundWorker : Component
{
	[Token(Token = "0x40005F7")]
	[FieldOffset(Offset = "0x28")]
	private bool _canCancelWorker;

	[Token(Token = "0x40005F8")]
	[FieldOffset(Offset = "0x29")]
	private bool _workerReportsProgress;

	[Token(Token = "0x40005F9")]
	[FieldOffset(Offset = "0x2A")]
	private bool _cancellationPending;

	[Token(Token = "0x40005FA")]
	[FieldOffset(Offset = "0x2B")]
	private bool _isRunning;

	[Token(Token = "0x40005FB")]
	[FieldOffset(Offset = "0x30")]
	private AsyncOperation _asyncOperation;

	[Token(Token = "0x40005FC")]
	[FieldOffset(Offset = "0x38")]
	private readonly SendOrPostCallback _operationCompleted;

	[Token(Token = "0x40005FD")]
	[FieldOffset(Offset = "0x40")]
	private readonly SendOrPostCallback _progressReporter;

	[Token(Token = "0x40005FE")]
	[FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	private DoWorkEventHandler m_DoWork;

	[Token(Token = "0x40005FF")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private ProgressChangedEventHandler m_ProgressChanged;

	[Token(Token = "0x4000600")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private RunWorkerCompletedEventHandler m_RunWorkerCompleted;

	[Token(Token = "0x170001A0")]
	public bool CancellationPending
	{
		[Token(Token = "0x6000896")]
		[Address(RVA = "0x1573430", Offset = "0x1571A30", VA = "0x181573430")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A1")]
	public bool IsBusy
	{
		[Token(Token = "0x600089A")]
		[Address(RVA = "0x20FB1B0", Offset = "0x20F97B0", VA = "0x1820FB1B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170001A2")]
	public bool WorkerReportsProgress
	{
		[Token(Token = "0x60008A7")]
		[Address(RVA = "0x1573470", Offset = "0x1571A70", VA = "0x181573470")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008A8")]
		[Address(RVA = "0x15736C0", Offset = "0x1571CC0", VA = "0x1815736C0")]
		set
		{
		}
	}

	[Token(Token = "0x170001A3")]
	public bool WorkerSupportsCancellation
	{
		[Token(Token = "0x60008A9")]
		[Address(RVA = "0xF1D480", Offset = "0xF1BA80", VA = "0x180F1D480")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60008AA")]
		[Address(RVA = "0xF1D940", Offset = "0xF1BF40", VA = "0x180F1D940")]
		set
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event DoWorkEventHandler DoWork
	{
		[Token(Token = "0x6000898")]
		[Address(RVA = "0x287BBC0", Offset = "0x287A1C0", VA = "0x18287BBC0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000899")]
		[Address(RVA = "0x287BDA0", Offset = "0x287A3A0", VA = "0x18287BDA0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event ProgressChangedEventHandler ProgressChanged
	{
		[Token(Token = "0x600089E")]
		[Address(RVA = "0x287BC60", Offset = "0x287A260", VA = "0x18287BC60")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600089F")]
		[Address(RVA = "0x287BE40", Offset = "0x287A440", VA = "0x18287BE40")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event RunWorkerCompletedEventHandler RunWorkerCompleted
	{
		[Token(Token = "0x60008A5")]
		[Address(RVA = "0x287BD00", Offset = "0x287A300", VA = "0x18287BD00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60008A6")]
		[Address(RVA = "0x287BEE0", Offset = "0x287A4E0", VA = "0x18287BEE0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000894")]
	[Address(RVA = "0x287BAE0", Offset = "0x287A0E0", VA = "0x18287BAE0")]
	public BackgroundWorker()
	{
	}

	[Token(Token = "0x6000895")]
	[Address(RVA = "0x287B050", Offset = "0x2879650", VA = "0x18287B050")]
	private void AsyncOperationCompleted(object arg)
	{
	}

	[Token(Token = "0x6000897")]
	[Address(RVA = "0x287B0E0", Offset = "0x28796E0", VA = "0x18287B0E0")]
	public void CancelAsync()
	{
	}

	[Token(Token = "0x600089B")]
	[Address(RVA = "0x287B150", Offset = "0x2879750", VA = "0x18287B150", Slot = "16")]
	protected virtual void OnDoWork(DoWorkEventArgs e)
	{
	}

	[Token(Token = "0x600089C")]
	[Address(RVA = "0x24EC950", Offset = "0x24EAF50", VA = "0x1824EC950", Slot = "17")]
	protected virtual void OnRunWorkerCompleted(RunWorkerCompletedEventArgs e)
	{
	}

	[Token(Token = "0x600089D")]
	[Address(RVA = "0x287B170", Offset = "0x2879770", VA = "0x18287B170", Slot = "18")]
	protected virtual void OnProgressChanged(ProgressChangedEventArgs e)
	{
	}

	[Token(Token = "0x60008A0")]
	[Address(RVA = "0x287B190", Offset = "0x2879790", VA = "0x18287B190")]
	private void ProgressReporter(object arg)
	{
	}

	[Token(Token = "0x60008A1")]
	[Address(RVA = "0x287B3F0", Offset = "0x28799F0", VA = "0x18287B3F0")]
	public void ReportProgress(int percentProgress)
	{
	}

	[Token(Token = "0x60008A2")]
	[Address(RVA = "0x287B220", Offset = "0x2879820", VA = "0x18287B220")]
	public void ReportProgress(int percentProgress, object userState)
	{
	}

	[Token(Token = "0x60008A3")]
	[Address(RVA = "0x287B5C0", Offset = "0x2879BC0", VA = "0x18287B5C0")]
	public void RunWorkerAsync()
	{
	}

	[Token(Token = "0x60008A4")]
	[Address(RVA = "0x287B5D0", Offset = "0x2879BD0", VA = "0x18287B5D0")]
	public void RunWorkerAsync(object argument)
	{
	}

	[Token(Token = "0x60008AB")]
	[Address(RVA = "0x287B8D0", Offset = "0x2879ED0", VA = "0x18287B8D0")]
	private void WorkerThreadStart(object argument)
	{
	}

	[Token(Token = "0x60008AC")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}
}
