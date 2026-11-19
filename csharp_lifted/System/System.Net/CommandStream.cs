// ==================== AoTTG2 cross-reference ====================
// Type: System.Net.CommandStream
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.IO;
using System.Net.Sockets;
using System.Text;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000269")]
internal class CommandStream : NetworkStreamWrapper
{
	[Token(Token = "0x200026A")]
	internal enum PipelineInstruction
	{
		[Token(Token = "0x40008DE")]
		Abort,
		[Token(Token = "0x40008DF")]
		Advance,
		[Token(Token = "0x40008E0")]
		Pause,
		[Token(Token = "0x40008E1")]
		Reread,
		[Token(Token = "0x40008E2")]
		GiveStream
	}

	[Token(Token = "0x200026B")]
	[Flags]
	internal enum PipelineEntryFlags
	{
		[Token(Token = "0x40008E4")]
		UserCommand = 1,
		[Token(Token = "0x40008E5")]
		GiveDataStream = 2,
		[Token(Token = "0x40008E6")]
		CreateDataConnection = 4,
		[Token(Token = "0x40008E7")]
		DontLogParameter = 8
	}

	[Token(Token = "0x200026C")]
	internal class PipelineEntry
	{
		[Token(Token = "0x40008E8")]
		[FieldOffset(Offset = "0x10")]
		internal string Command;

		[Token(Token = "0x40008E9")]
		[FieldOffset(Offset = "0x18")]
		internal PipelineEntryFlags Flags;

		[Token(Token = "0x6001108")]
		[Address(RVA = "0x6297560", Offset = "0x6296560", VA = "0x6297560")]
		internal PipelineEntry(string command)
		{
		}

		[Token(Token = "0x6001109")]
		[Address(RVA = "0x6297590", Offset = "0x6296590", VA = "0x6297590")]
		internal PipelineEntry(string command, PipelineEntryFlags flags)
		{
		}

		[Token(Token = "0x600110A")]
		[Address(RVA = "0x6295FB0", Offset = "0x6294FB0", VA = "0x6295FB0")]
		internal bool HasFlag(PipelineEntryFlags flags)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x40008CE")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AsyncCallback s_writeCallbackDelegate;

	[Token(Token = "0x40008CF")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AsyncCallback s_readCallbackDelegate;

	[Token(Token = "0x40008D0")]
	[FieldOffset(Offset = "0x38")]
	private bool _recoverableFailure;

	[Token(Token = "0x40008D1")]
	[FieldOffset(Offset = "0x40")]
	protected WebRequest _request;

	[Token(Token = "0x40008D2")]
	[FieldOffset(Offset = "0x48")]
	protected bool _isAsync;

	[Token(Token = "0x40008D3")]
	[FieldOffset(Offset = "0x49")]
	private bool _aborted;

	[Token(Token = "0x40008D4")]
	[FieldOffset(Offset = "0x50")]
	protected PipelineEntry[] _commands;

	[Token(Token = "0x40008D5")]
	[FieldOffset(Offset = "0x58")]
	protected int _index;

	[Token(Token = "0x40008D6")]
	[FieldOffset(Offset = "0x5C")]
	private bool _doRead;

	[Token(Token = "0x40008D7")]
	[FieldOffset(Offset = "0x5D")]
	private bool _doSend;

	[Token(Token = "0x40008D8")]
	[FieldOffset(Offset = "0x60")]
	private ResponseDescription _currentResponseDescription;

	[Token(Token = "0x40008D9")]
	[FieldOffset(Offset = "0x68")]
	protected string _abortReason;

	[Token(Token = "0x40008DA")]
	[FieldOffset(Offset = "0x70")]
	private string _buffer;

	[Token(Token = "0x40008DB")]
	[FieldOffset(Offset = "0x78")]
	private Encoding _encoding;

	[Token(Token = "0x40008DC")]
	[FieldOffset(Offset = "0x80")]
	private Decoder _decoder;

	[Token(Token = "0x17000392")]
	internal bool RecoverableFailure
	{
		[Token(Token = "0x60010F3")]
		[Address(RVA = "0x6295650", Offset = "0x6294650", VA = "0x6295650")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000393")]
	protected Encoding Encoding
	{
		[Token(Token = "0x6001102")]
		[Address(RVA = "0x6297310", Offset = "0x6296310", VA = "0x6297310")]
		get
		{
			return null;
		}
		[Token(Token = "0x6001103")]
		[Address(RVA = "0x6297320", Offset = "0x6296320", VA = "0x6297320")]
		set
		{
		}
	}

	[Token(Token = "0x60010EF")]
	[Address(RVA = "0x6295100", Offset = "0x6294100", VA = "0x6295100")]
	internal CommandStream(TcpClient client)
	{
	}

	[Token(Token = "0x60010F0")]
	[Address(RVA = "0x6295190", Offset = "0x6294190", VA = "0x6295190", Slot = "39")]
	internal virtual void Abort(Exception e)
	{
	}

	[Token(Token = "0x60010F1")]
	[Address(RVA = "0x6295400", Offset = "0x6294400", VA = "0x6295400", Slot = "20")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60010F2")]
	[Address(RVA = "0x62955B0", Offset = "0x62945B0", VA = "0x62955B0")]
	protected void InvokeRequestCallback(object obj)
	{
	}

	[Token(Token = "0x60010F4")]
	[Address(RVA = "0x6295660", Offset = "0x6294660", VA = "0x6295660")]
	protected void MarkAsRecoverableFailure()
	{
	}

	[Token(Token = "0x60010F5")]
	[Address(RVA = "0x6295670", Offset = "0x6294670", VA = "0x6295670")]
	internal Stream SubmitRequest(WebRequest request, bool isAsync, bool readInitalResponseOnConnect)
	{
		return null;
	}

	[Token(Token = "0x60010F6")]
	[Address(RVA = "0x6295D70", Offset = "0x6294D70", VA = "0x6295D70", Slot = "40")]
	protected virtual void ClearState()
	{
	}

	[Token(Token = "0x60010F7")]
	[Address(RVA = "0x6295DF0", Offset = "0x6294DF0", VA = "0x6295DF0", Slot = "41")]
	protected virtual PipelineEntry[] BuildCommandsList(WebRequest request)
	{
		return null;
	}

	[Token(Token = "0x60010F8")]
	[Address(RVA = "0x6295E00", Offset = "0x6294E00", VA = "0x6295E00")]
	protected Exception GenerateException(string message, WebExceptionStatus status, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x60010F9")]
	[Address(RVA = "0x6295E70", Offset = "0x6294E70", VA = "0x6295E70")]
	protected Exception GenerateException(FtpStatusCode code, string statusDescription, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x60010FA")]
	[Address(RVA = "0x6295740", Offset = "0x6294740", VA = "0x6295740")]
	protected void InitCommandPipeline(WebRequest request, PipelineEntry[] commands, bool isAsync)
	{
	}

	[Token(Token = "0x60010FB")]
	[Address(RVA = "0x6295F00", Offset = "0x6294F00", VA = "0x6295F00")]
	internal void CheckContinuePipeline()
	{
	}

	[Token(Token = "0x60010FC")]
	[Address(RVA = "0x62957D0", Offset = "0x62947D0", VA = "0x62957D0")]
	protected Stream ContinueCommandPipeline()
	{
		return null;
	}

	[Token(Token = "0x60010FD")]
	[Address(RVA = "0x6295FC0", Offset = "0x6294FC0", VA = "0x6295FC0")]
	private bool PostSendCommandProcessing(ref Stream stream)
	{
		return default(bool);
	}

	[Token(Token = "0x60010FE")]
	[Address(RVA = "0x6296430", Offset = "0x6295430", VA = "0x6296430")]
	private bool PostReadCommandProcessing(ref Stream stream)
	{
		return default(bool);
	}

	[Token(Token = "0x60010FF")]
	[Address(RVA = "0x6296690", Offset = "0x6295690", VA = "0x6296690", Slot = "42")]
	protected virtual PipelineInstruction PipelineCallback(PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x6001100")]
	[Address(RVA = "0x62966A0", Offset = "0x62956A0", VA = "0x62966A0")]
	private static void ReadCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001101")]
	[Address(RVA = "0x6297060", Offset = "0x6296060", VA = "0x6297060")]
	private static void WriteCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6001104")]
	[Address(RVA = "0x6297370", Offset = "0x6296370", VA = "0x6297370", Slot = "43")]
	protected virtual bool CheckValid(ResponseDescription response, ref int validThrough, ref int completeLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6001105")]
	[Address(RVA = "0x6296100", Offset = "0x6295100", VA = "0x6296100")]
	private ResponseDescription ReceiveCommandResponse()
	{
		return null;
	}

	[Token(Token = "0x6001106")]
	[Address(RVA = "0x6296970", Offset = "0x6295970", VA = "0x6296970")]
	private void ReceiveCommandResponseCallback(ReceiveState state, int bytesRead)
	{
	}
}
