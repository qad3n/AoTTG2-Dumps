using System.IO;
using System.Net.Sockets;
using System.Text;
using Il2CppDummyDll;

namespace System.Net;

[Token(Token = "0x2000120")]
internal class CommandStream : NetworkStreamWrapper
{
	[Token(Token = "0x2000121")]
	internal enum PipelineInstruction
	{
		[Token(Token = "0x4000597")]
		Abort,
		[Token(Token = "0x4000598")]
		Advance,
		[Token(Token = "0x4000599")]
		Pause,
		[Token(Token = "0x400059A")]
		Reread,
		[Token(Token = "0x400059B")]
		GiveStream
	}

	[Token(Token = "0x2000122")]
	[Flags]
	internal enum PipelineEntryFlags
	{
		[Token(Token = "0x400059D")]
		UserCommand = 1,
		[Token(Token = "0x400059E")]
		GiveDataStream = 2,
		[Token(Token = "0x400059F")]
		CreateDataConnection = 4,
		[Token(Token = "0x40005A0")]
		DontLogParameter = 8
	}

	[Token(Token = "0x2000123")]
	internal class PipelineEntry
	{
		[Token(Token = "0x40005A1")]
		[FieldOffset(Offset = "0x10")]
		internal string Command;

		[Token(Token = "0x40005A2")]
		[FieldOffset(Offset = "0x18")]
		internal PipelineEntryFlags Flags;

		[Token(Token = "0x6000707")]
		[Address(RVA = "0x4629670", Offset = "0x4629670", VA = "0x4629670")]
		internal PipelineEntry(string command)
		{
		}

		[Token(Token = "0x6000708")]
		[Address(RVA = "0x46296A0", Offset = "0x46296A0", VA = "0x46296A0")]
		internal PipelineEntry(string command, PipelineEntryFlags flags)
		{
		}

		[Token(Token = "0x6000709")]
		[Address(RVA = "0x4627F20", Offset = "0x4627F20", VA = "0x4627F20")]
		internal bool HasFlag(PipelineEntryFlags flags)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x4000587")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AsyncCallback s_writeCallbackDelegate;

	[Token(Token = "0x4000588")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AsyncCallback s_readCallbackDelegate;

	[Token(Token = "0x4000589")]
	[FieldOffset(Offset = "0x38")]
	private bool _recoverableFailure;

	[Token(Token = "0x400058A")]
	[FieldOffset(Offset = "0x40")]
	protected WebRequest _request;

	[Token(Token = "0x400058B")]
	[FieldOffset(Offset = "0x48")]
	protected bool _isAsync;

	[Token(Token = "0x400058C")]
	[FieldOffset(Offset = "0x49")]
	private bool _aborted;

	[Token(Token = "0x400058D")]
	[FieldOffset(Offset = "0x50")]
	protected PipelineEntry[] _commands;

	[Token(Token = "0x400058E")]
	[FieldOffset(Offset = "0x58")]
	protected int _index;

	[Token(Token = "0x400058F")]
	[FieldOffset(Offset = "0x5C")]
	private bool _doRead;

	[Token(Token = "0x4000590")]
	[FieldOffset(Offset = "0x5D")]
	private bool _doSend;

	[Token(Token = "0x4000591")]
	[FieldOffset(Offset = "0x60")]
	private ResponseDescription _currentResponseDescription;

	[Token(Token = "0x4000592")]
	[FieldOffset(Offset = "0x68")]
	protected string _abortReason;

	[Token(Token = "0x4000593")]
	[FieldOffset(Offset = "0x70")]
	private string _buffer;

	[Token(Token = "0x4000594")]
	[FieldOffset(Offset = "0x78")]
	private Encoding _encoding;

	[Token(Token = "0x4000595")]
	[FieldOffset(Offset = "0x80")]
	private Decoder _decoder;

	[Token(Token = "0x1700016C")]
	internal bool RecoverableFailure
	{
		[Token(Token = "0x60006F2")]
		[Address(RVA = "0x4627580", Offset = "0x4627580", VA = "0x4627580")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700016D")]
	protected Encoding Encoding
	{
		[Token(Token = "0x6000701")]
		[Address(RVA = "0x4629420", Offset = "0x4629420", VA = "0x4629420")]
		get
		{
			return null;
		}
		[Token(Token = "0x6000702")]
		[Address(RVA = "0x4629430", Offset = "0x4629430", VA = "0x4629430")]
		set
		{
		}
	}

	[Token(Token = "0x60006EE")]
	[Address(RVA = "0x4626F60", Offset = "0x4626F60", VA = "0x4626F60")]
	internal CommandStream(TcpClient client)
	{
	}

	[Token(Token = "0x60006EF")]
	[Address(RVA = "0x4627080", Offset = "0x4627080", VA = "0x4627080", Slot = "38")]
	internal virtual void Abort(Exception e)
	{
	}

	[Token(Token = "0x60006F0")]
	[Address(RVA = "0x4627330", Offset = "0x4627330", VA = "0x4627330", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60006F1")]
	[Address(RVA = "0x46274E0", Offset = "0x46274E0", VA = "0x46274E0")]
	protected void InvokeRequestCallback(object obj)
	{
	}

	[Token(Token = "0x60006F3")]
	[Address(RVA = "0x4627590", Offset = "0x4627590", VA = "0x4627590")]
	protected void MarkAsRecoverableFailure()
	{
	}

	[Token(Token = "0x60006F4")]
	[Address(RVA = "0x46275A0", Offset = "0x46275A0", VA = "0x46275A0")]
	internal Stream SubmitRequest(WebRequest request, bool isAsync, bool readInitalResponseOnConnect)
	{
		return null;
	}

	[Token(Token = "0x60006F5")]
	[Address(RVA = "0x4627CD0", Offset = "0x4627CD0", VA = "0x4627CD0", Slot = "39")]
	protected virtual void ClearState()
	{
	}

	[Token(Token = "0x60006F6")]
	[Address(RVA = "0x4627D50", Offset = "0x4627D50", VA = "0x4627D50", Slot = "40")]
	protected virtual PipelineEntry[] BuildCommandsList(WebRequest request)
	{
		return null;
	}

	[Token(Token = "0x60006F7")]
	[Address(RVA = "0x4627D60", Offset = "0x4627D60", VA = "0x4627D60")]
	protected Exception GenerateException(string message, WebExceptionStatus status, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x60006F8")]
	[Address(RVA = "0x4627DD0", Offset = "0x4627DD0", VA = "0x4627DD0")]
	protected Exception GenerateException(FtpStatusCode code, string statusDescription, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x60006F9")]
	[Address(RVA = "0x4627670", Offset = "0x4627670", VA = "0x4627670")]
	protected void InitCommandPipeline(WebRequest request, PipelineEntry[] commands, bool isAsync)
	{
	}

	[Token(Token = "0x60006FA")]
	[Address(RVA = "0x4627E60", Offset = "0x4627E60", VA = "0x4627E60")]
	internal void CheckContinuePipeline()
	{
	}

	[Token(Token = "0x60006FB")]
	[Address(RVA = "0x4627700", Offset = "0x4627700", VA = "0x4627700")]
	protected Stream ContinueCommandPipeline()
	{
		return null;
	}

	[Token(Token = "0x60006FC")]
	[Address(RVA = "0x4627F30", Offset = "0x4627F30", VA = "0x4627F30")]
	private bool PostSendCommandProcessing(ref Stream stream)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FD")]
	[Address(RVA = "0x4628440", Offset = "0x4628440", VA = "0x4628440")]
	private bool PostReadCommandProcessing(ref Stream stream)
	{
		return default(bool);
	}

	[Token(Token = "0x60006FE")]
	[Address(RVA = "0x4628680", Offset = "0x4628680", VA = "0x4628680", Slot = "41")]
	protected virtual PipelineInstruction PipelineCallback(PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x60006FF")]
	[Address(RVA = "0x4628690", Offset = "0x4628690", VA = "0x4628690")]
	private static void ReadCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000700")]
	[Address(RVA = "0x4629160", Offset = "0x4629160", VA = "0x4629160")]
	private static void WriteCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x6000703")]
	[Address(RVA = "0x4629480", Offset = "0x4629480", VA = "0x4629480", Slot = "42")]
	protected virtual bool CheckValid(ResponseDescription response, ref int validThrough, ref int completeLength)
	{
		return default(bool);
	}

	[Token(Token = "0x6000704")]
	[Address(RVA = "0x4628080", Offset = "0x4628080", VA = "0x4628080")]
	private ResponseDescription ReceiveCommandResponse()
	{
		return null;
	}

	[Token(Token = "0x6000705")]
	[Address(RVA = "0x4628A00", Offset = "0x4628A00", VA = "0x4628A00")]
	private void ReceiveCommandResponseCallback(ReceiveState state, int bytesRead)
	{
	}
}
