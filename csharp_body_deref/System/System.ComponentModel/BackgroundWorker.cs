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
		[Address(RVA = "0x455B250", Offset = "0x455B250", VA = "0x455B250")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000332")]
	public bool IsBusy
	{
		[Token(Token = "0x6000E52")]
		[Address(RVA = "0x455B3E0", Offset = "0x455B3E0", VA = "0x455B3E0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000333")]
	public bool WorkerReportsProgress
	{
		[Token(Token = "0x6000E5F")]
		[Address(RVA = "0x455BA70", Offset = "0x455BA70", VA = "0x455BA70")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E60")]
		[Address(RVA = "0x455BA80", Offset = "0x455BA80", VA = "0x455BA80")]
		set
		{
		}
	}

	[Token(Token = "0x17000334")]
	public bool WorkerSupportsCancellation
	{
		[Token(Token = "0x6000E61")]
		[Address(RVA = "0x455BA90", Offset = "0x455BA90", VA = "0x455BA90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000E62")]
		[Address(RVA = "0x455BAA0", Offset = "0x455BAA0", VA = "0x455BAA0")]
		set
		{
		}
	}

	[Token(Token = "0x14000002")]
	public event DoWorkEventHandler DoWork
	{
		[Token(Token = "0x6000E50")]
		[Address(RVA = "0x455B2C0", Offset = "0x455B2C0", VA = "0x455B2C0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E51")]
		[Address(RVA = "0x455B350", Offset = "0x455B350", VA = "0x455B350")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event ProgressChangedEventHandler ProgressChanged
	{
		[Token(Token = "0x6000E56")]
		[Address(RVA = "0x455B450", Offset = "0x455B450", VA = "0x455B450")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E57")]
		[Address(RVA = "0x455B4E0", Offset = "0x455B4E0", VA = "0x455B4E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event RunWorkerCompletedEventHandler RunWorkerCompleted
	{
		[Token(Token = "0x6000E5D")]
		[Address(RVA = "0x455B950", Offset = "0x455B950", VA = "0x455B950")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x6000E5E")]
		[Address(RVA = "0x455B9E0", Offset = "0x455B9E0", VA = "0x455B9E0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x6000E4C")]
	[Address(RVA = "0x455B0E0", Offset = "0x455B0E0", VA = "0x455B0E0")]
	public BackgroundWorker()
	{
	}

	[Token(Token = "0x6000E4D")]
	[Address(RVA = "0x455B1C0", Offset = "0x455B1C0", VA = "0x455B1C0")]
	private void AsyncOperationCompleted(object arg)
	{
	}

	[Token(Token = "0x6000E4F")]
	[Address(RVA = "0x455B260", Offset = "0x455B260", VA = "0x455B260")]
	public void CancelAsync()
	{
	}

	[Token(Token = "0x6000E53")]
	[Address(RVA = "0x455B3F0", Offset = "0x455B3F0", VA = "0x455B3F0", Slot = "16")]
	protected virtual void OnDoWork(DoWorkEventArgs e)
	{
	}

	[Token(Token = "0x6000E54")]
	[Address(RVA = "0x455B410", Offset = "0x455B410", VA = "0x455B410", Slot = "17")]
	protected virtual void OnRunWorkerCompleted(RunWorkerCompletedEventArgs e)
	{
	}

	[Token(Token = "0x6000E55")]
	[Address(RVA = "0x455B430", Offset = "0x455B430", VA = "0x455B430", Slot = "18")]
	protected virtual void OnProgressChanged(ProgressChangedEventArgs e)
	{
	}

	[Token(Token = "0x6000E58")]
	[Address(RVA = "0x455B570", Offset = "0x455B570", VA = "0x455B570")]
	private void ProgressReporter(object arg)
	{
	}

	[Token(Token = "0x6000E59")]
	[Address(RVA = "0x455B5F0", Offset = "0x455B5F0", VA = "0x455B5F0")]
	public void ReportProgress(int percentProgress)
	{
	}

	[Token(Token = "0x6000E5A")]
	[Address(RVA = "0x455B600", Offset = "0x455B600", VA = "0x455B600")]
	public void ReportProgress(int percentProgress, object userState)
	{
	}

	[Token(Token = "0x6000E5B")]
	[Address(RVA = "0x455B6E0", Offset = "0x455B6E0", VA = "0x455B6E0")]
	public void RunWorkerAsync()
	{
	}

	[Token(Token = "0x6000E5C")]
	[Address(RVA = "0x455B6F0", Offset = "0x455B6F0", VA = "0x455B6F0")]
	public void RunWorkerAsync(object argument)
	{
	}

	[Token(Token = "0x6000E63")]
	[Address(RVA = "0x455BAB0", Offset = "0x455BAB0", VA = "0x455BAB0")]
	private void WorkerThreadStart(object argument)
	{
	}

	[Token(Token = "0x6000E64")]
	[Address(RVA = "0x455BC20", Offset = "0x455BC20", VA = "0x455BC20", Slot = "14")]
	protected override void Dispose(bool disposing)
	{
	}
}
