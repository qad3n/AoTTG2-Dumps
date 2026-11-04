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

[Token(Token = "0x20002A8")]
internal class CommandStream : NetworkStreamWrapper
{
	[Token(Token = "0x20002A9")]
	internal enum PipelineInstruction
	{
		[Token(Token = "0x40009AD")]
		Abort,
		[Token(Token = "0x40009AE")]
		Advance,
		[Token(Token = "0x40009AF")]
		Pause,
		[Token(Token = "0x40009B0")]
		Reread,
		[Token(Token = "0x40009B1")]
		GiveStream
	}

	[Token(Token = "0x20002AA")]
	[Flags]
	internal enum PipelineEntryFlags
	{
		[Token(Token = "0x40009B3")]
		UserCommand = 1,
		[Token(Token = "0x40009B4")]
		GiveDataStream = 2,
		[Token(Token = "0x40009B5")]
		CreateDataConnection = 4,
		[Token(Token = "0x40009B6")]
		DontLogParameter = 8
	}

	[Token(Token = "0x20002AB")]
	internal class PipelineEntry
	{
		[Token(Token = "0x40009B7")]
		[FieldOffset(Offset = "0x10")]
		internal string Command;

		[Token(Token = "0x40009B8")]
		[FieldOffset(Offset = "0x18")]
		internal PipelineEntryFlags Flags;

		[Token(Token = "0x60012C6")]
		[Address(RVA = "0x577FB0", Offset = "0x5765B0", VA = "0x180577FB0")]
		internal PipelineEntry(string command)
		{
		}

		[Token(Token = "0x60012C7")]
		[Address(RVA = "0x8FB340", Offset = "0x8F9940", VA = "0x1808FB340")]
		internal PipelineEntry(string command, PipelineEntryFlags flags)
		{
		}

		[Token(Token = "0x60012C8")]
		[Address(RVA = "0x2904DE0", Offset = "0x29033E0", VA = "0x182904DE0")]
		internal bool HasFlag(PipelineEntryFlags flags)
		{
			return default(bool);
		}
	}

	[Token(Token = "0x400099D")]
	[FieldOffset(Offset = "0x0")]
	private static readonly AsyncCallback s_writeCallbackDelegate;

	[Token(Token = "0x400099E")]
	[FieldOffset(Offset = "0x8")]
	private static readonly AsyncCallback s_readCallbackDelegate;

	[Token(Token = "0x400099F")]
	[FieldOffset(Offset = "0x38")]
	private bool _recoverableFailure;

	[Token(Token = "0x40009A0")]
	[FieldOffset(Offset = "0x40")]
	protected WebRequest _request;

	[Token(Token = "0x40009A1")]
	[FieldOffset(Offset = "0x48")]
	protected bool _isAsync;

	[Token(Token = "0x40009A2")]
	[FieldOffset(Offset = "0x49")]
	private bool _aborted;

	[Token(Token = "0x40009A3")]
	[FieldOffset(Offset = "0x50")]
	protected PipelineEntry[] _commands;

	[Token(Token = "0x40009A4")]
	[FieldOffset(Offset = "0x58")]
	protected int _index;

	[Token(Token = "0x40009A5")]
	[FieldOffset(Offset = "0x5C")]
	private bool _doRead;

	[Token(Token = "0x40009A6")]
	[FieldOffset(Offset = "0x5D")]
	private bool _doSend;

	[Token(Token = "0x40009A7")]
	[FieldOffset(Offset = "0x60")]
	private ResponseDescription _currentResponseDescription;

	[Token(Token = "0x40009A8")]
	[FieldOffset(Offset = "0x68")]
	protected string _abortReason;

	[Token(Token = "0x40009A9")]
	[FieldOffset(Offset = "0x70")]
	private string _buffer;

	[Token(Token = "0x40009AA")]
	[FieldOffset(Offset = "0x78")]
	private Encoding _encoding;

	[Token(Token = "0x40009AB")]
	[FieldOffset(Offset = "0x80")]
	private Decoder _decoder;

	[Token(Token = "0x170003C1")]
	internal bool RecoverableFailure
	{
		[Token(Token = "0x60012B1")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170003C2")]
	protected Encoding Encoding
	{
		[Token(Token = "0x60012C0")]
		[Address(RVA = "0xCDB5A0", Offset = "0xCD9BA0", VA = "0x180CDB5A0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60012C1")]
		[Address(RVA = "0x28ED110", Offset = "0x28EB710", VA = "0x1828ED110")]
		set
		{
		}
	}

	[Token(Token = "0x60012AD")]
	[Address(RVA = "0x28ED070", Offset = "0x28EB670", VA = "0x1828ED070")]
	internal CommandStream(TcpClient client)
	{
	}

	[Token(Token = "0x60012AE")]
	[Address(RVA = "0x28EB510", Offset = "0x28E9B10", VA = "0x1828EB510", Slot = "38")]
	internal virtual void Abort(Exception e)
	{
	}

	[Token(Token = "0x60012AF")]
	[Address(RVA = "0x28EBC60", Offset = "0x28EA260", VA = "0x1828EBC60", Slot = "19")]
	protected override void Dispose(bool disposing)
	{
	}

	[Token(Token = "0x60012B0")]
	[Address(RVA = "0x28EBF00", Offset = "0x28EA500", VA = "0x1828EBF00")]
	protected void InvokeRequestCallback(object obj)
	{
	}

	[Token(Token = "0x60012B2")]
	[Address(RVA = "0x28EBF90", Offset = "0x28EA590", VA = "0x1828EBF90")]
	protected void MarkAsRecoverableFailure()
	{
	}

	[Token(Token = "0x60012B3")]
	[Address(RVA = "0x28ECD80", Offset = "0x28EB380", VA = "0x1828ECD80")]
	internal Stream SubmitRequest(WebRequest request, bool isAsync, bool readInitalResponseOnConnect)
	{
		return null;
	}

	[Token(Token = "0x60012B4")]
	[Address(RVA = "0x28EB760", Offset = "0x28E9D60", VA = "0x1828EB760", Slot = "39")]
	protected virtual void ClearState()
	{
	}

	[Token(Token = "0x60012B5")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "40")]
	protected virtual PipelineEntry[] BuildCommandsList(WebRequest request)
	{
		return null;
	}

	[Token(Token = "0x60012B6")]
	[Address(RVA = "0x28EBDF0", Offset = "0x28EA3F0", VA = "0x1828EBDF0")]
	protected Exception GenerateException(string message, WebExceptionStatus status, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x60012B7")]
	[Address(RVA = "0x28EBD40", Offset = "0x28EA340", VA = "0x1828EBD40")]
	protected Exception GenerateException(FtpStatusCode code, string statusDescription, Exception innerException)
	{
		return null;
	}

	[Token(Token = "0x60012B8")]
	[Address(RVA = "0x28EBE60", Offset = "0x28EA460", VA = "0x1828EBE60")]
	protected void InitCommandPipeline(WebRequest request, PipelineEntry[] commands, bool isAsync)
	{
	}

	[Token(Token = "0x60012B9")]
	[Address(RVA = "0x28EB720", Offset = "0x28E9D20", VA = "0x1828EB720")]
	internal void CheckContinuePipeline()
	{
	}

	[Token(Token = "0x60012BA")]
	[Address(RVA = "0x28EB780", Offset = "0x28E9D80", VA = "0x1828EB780")]
	protected Stream ContinueCommandPipeline()
	{
		return null;
	}

	[Token(Token = "0x60012BB")]
	[Address(RVA = "0x28EC1B0", Offset = "0x28EA7B0", VA = "0x1828EC1B0")]
	private bool PostSendCommandProcessing(ref Stream stream)
	{
		return default(bool);
	}

	[Token(Token = "0x60012BC")]
	[Address(RVA = "0x28EBFA0", Offset = "0x28EA5A0", VA = "0x1828EBFA0")]
	private bool PostReadCommandProcessing(ref Stream stream)
	{
		return default(bool);
	}

	[Token(Token = "0x60012BD")]
	[Address(RVA = "0x59B2E0", Offset = "0x5998E0", VA = "0x18059B2E0", Slot = "41")]
	protected virtual PipelineInstruction PipelineCallback(PipelineEntry entry, ResponseDescription response, bool timeout, ref Stream stream)
	{
		return default(PipelineInstruction);
	}

	[Token(Token = "0x60012BE")]
	[Address(RVA = "0x28EC2A0", Offset = "0x28EA8A0", VA = "0x1828EC2A0")]
	private static void ReadCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60012BF")]
	[Address(RVA = "0x28ECE00", Offset = "0x28EB400", VA = "0x1828ECE00")]
	private static void WriteCallback(IAsyncResult asyncResult)
	{
	}

	[Token(Token = "0x60012C2")]
	[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "42")]
	protected virtual bool CheckValid(ResponseDescription response, ref int validThrough, ref int completeLength)
	{
		return default(bool);
	}

	[Token(Token = "0x60012C3")]
	[Address(RVA = "0x28ECA50", Offset = "0x28EB050", VA = "0x1828ECA50")]
	private ResponseDescription ReceiveCommandResponse()
	{
		return null;
	}

	[Token(Token = "0x60012C4")]
	[Address(RVA = "0x28EC440", Offset = "0x28EAA40", VA = "0x1828EC440")]
	private void ReceiveCommandResponseCallback(ReceiveState state, int bytesRead)
	{
	}
}
