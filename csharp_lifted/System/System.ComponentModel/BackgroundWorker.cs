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

[Token(Token = "0x2000117")]
[DefaultEvent("DoWork")]
public class BackgroundWorker : Component
{
	[Token(Token = "0x4000528")]
	[FieldOffset(Offset = "0x28")]
	private bool _canCancelWorker;

	[Token(Token = "0x4000529")]
	[FieldOffset(Offset = "0x29")]
	private bool _workerReportsProgress;

	[Token(Token = "0x400052A")]
	[FieldOffset(Offset = "0x2A")]
	private bool _cancellationPending;

	[Token(Token = "0x400052B")]
	[FieldOffset(Offset = "0x2B")]
	private bool _isRunning;

	[Token(Token = "0x400052C")]
	[FieldOffset(Offset = "0x30")]
	private AsyncOperation _asyncOperation;

	[Token(Token = "0x400052D")]
	[FieldOffset(Offset = "0x38")]
	private readonly SendOrPostCallback _operationCompleted;

	[Token(Token = "0x400052E")]
	[FieldOffset(Offset = "0x40")]
	private readonly SendOrPostCallback _progressReporter;

	[Token(Token = "0x400052F")]
	[FieldOffset(Offset = "0x48")]
	[CompilerGenerated]
	private DoWorkEventHandler m_DoWork;

	[Token(Token = "0x4000530")]
	[FieldOffset(Offset = "0x50")]
	[CompilerGenerated]
	private ProgressChangedEventHandler m_ProgressChanged;

	[Token(Token = "0x4000531")]
	[FieldOffset(Offset = "0x58")]
	[CompilerGenerated]
	private RunWorkerCompletedEventHandler m_RunWorkerCompleted;

	[Token(Token = "0x17000171")]
	public bool CancellationPending
	{
		[Token(Token = "0x60006D6")]
		[Address(RVA = "0x6220F60", Offset = "0x621FF60", VA = "0x6220F60")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000172")]
	public bool IsBusy
	{
		[Token(Token = "0x60006DA")]
		[Address(RVA = "0x62210F0", Offset = "0x62200F0", VA = "0x62210F0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000173")]
	public bool WorkerReportsProgress
	{
		[Token(Token = "0x60006E7")]
		[Address(RVA = "0x6221780", Offset = "0x6220780", VA = "0x6221780")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006E8")]
		[Address(RVA = "0x6221790", Offset = "0x6220790", VA = "0x6221790")]
		set
		{
		}
	}

	[Token(Token = "0x17000174")]
	public bool WorkerSupportsCancellation
	{
		[Token(Token = "0x60006E9")]
		[Address(RVA = "0x62217A0", Offset = "0x62207A0", VA = "0x62217A0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60006EA")]
		[Address(RVA = "0x62217B0", Offset = "0x62207B0", VA = "0x62217B0")]
		set
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event DoWorkEventHandler DoWork
	{
		[Token(Token = "0x60006D8")]
		[Address(RVA = "0x6220FD0", Offset = "0x621FFD0", VA = "0x6220FD0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60006D9")]
		[Address(RVA = "0x6221060", Offset = "0x6220060", VA = "0x6221060")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event ProgressChangedEventHandler ProgressChanged
	{
		[Token(Token = "0x60006DE")]
		[Address(RVA = "0x6221160", Offset = "0x6220160", VA = "0x6221160")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60006DF")]
		[Address(RVA = "0x62211F0", Offset = "0x62201F0", VA = "0x62211F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event RunWorkerCompletedEventHandler RunWorkerCompleted
	{
		[Token(Token = "0x60006E5")]
		[Address(RVA = "0x6221660", Offset = "0x6220660", VA = "0x6221660")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60006E6")]
		[Address(RVA = "0x62216F0", Offset = "0x62206F0", VA = "0x62216F0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x60006D4")]
	[Address(RVA = "0x6220DF0", Offset = "0x621FDF0", VA = "0x6220DF0")]
	public BackgroundWorker()
	{
	}

	[Token(Token = "0x60006D5")]
	[Address(RVA = "0x6220ED0", Offset = "0x621FED0", VA = "0x6220ED0")]
	private void AsyncOperationCompleted(object arg)
	{
	}

	[Token(Token = "0x60006D7")]
	[Address(RVA = "0x6220F70", Offset = "0x621FF70", VA = "0x6220F70")]
	public void CancelAsync()
	{
	}

	[Token(Token = "0x60006DB")]
	[Address(RVA = "0x6221100", Offset = "0x6220100", VA = "0x6221100", Slot = "16")]
	protected virtual void OnDoWork(DoWorkEventArgs e)
	{
	}

	[Token(Token = "0x60006DC")]
	[Address(RVA = "0x6221120", Offset = "0x6220120", VA = "0x6221120", Slot = "17")]
	protected virtual void OnRunWorkerCompleted(RunWorkerCompletedEventArgs e)
	{
	}

	[Token(Token = "0x60006DD")]
	[Address(RVA = "0x6221140", Offset = "0x6220140", VA = "0x6221140", Slot = "18")]
	protected virtual void OnProgressChanged(ProgressChangedEventArgs e)
	{
	}

	[Token(Token = "0x60006E0")]
	[Address(RVA = "0x6221280", Offset = "0x6220280", VA = "0x6221280")]
	private void ProgressReporter(object arg)
	{
	}

	[Token(Token = "0x60006E1")]
	[Address(RVA = "0x6221300", Offset = "0x6220300", VA = "0x6221300")]
	public void ReportProgress(int percentProgress)
	{
	}

	[Token(Token = "0x60006E2")]
	[Address(RVA = "0x6221310", Offset = "0x6220310", VA = "0x6221310")]
	public void ReportProgress(int percentProgress, object userState)
	{
	}

	[Token(Token = "0x60006E3")]
	[Address(RVA = "0x62213F0", Offset = "0x62203F0", VA = "0x62213F0")]
	public void RunWorkerAsync()
	{
	}

	[Token(Token = "0x60006E4")]
	[Address(RVA = "0x6221400", Offset = "0x6220400", VA = "0x6221400")]
	public void RunWorkerAsync(object argument)
	{
	}

	[Token(Token = "0x60006EB")]
	[Address(RVA = "0x62217C0", Offset = "0x62207C0", VA = "0x62217C0")]
	private void WorkerThreadStart(object argument)
	{
	}

	[Token(Token = "0x60006EC")]
	[Address(RVA = "0x6221930", Offset = "0x6220930", VA = "0x6221930", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}
}
