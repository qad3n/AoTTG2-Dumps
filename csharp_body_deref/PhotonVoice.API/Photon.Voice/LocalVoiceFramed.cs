using System.Collections.Generic;
using System.Threading;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200008F")]
public class LocalVoiceFramed<T> : LocalVoice
{
	[Token(Token = "0x400022C")]
	[FieldOffset(Offset = "0x0")]
	private Framer<T> framer;

	[Token(Token = "0x400022D")]
	[FieldOffset(Offset = "0x0")]
	private int preProcessorsCnt;

	[Token(Token = "0x400022E")]
	[FieldOffset(Offset = "0x0")]
	private List<IProcessor<T>> processors;

	[Token(Token = "0x400022F")]
	[FieldOffset(Offset = "0x0")]
	private bool dataEncodeThreadStarted;

	[Token(Token = "0x4000230")]
	[FieldOffset(Offset = "0x0")]
	private Queue<T[]> pushDataQueue;

	[Token(Token = "0x4000231")]
	[FieldOffset(Offset = "0x0")]
	private AutoResetEvent pushDataQueueReady;

	[Token(Token = "0x4000232")]
	[FieldOffset(Offset = "0x0")]
	private FactoryPrimitiveArrayPool<T> bufferFactory;

	[Token(Token = "0x4000233")]
	[FieldOffset(Offset = "0x0")]
	private int framesSkippedNextLog;

	[Token(Token = "0x4000234")]
	[FieldOffset(Offset = "0x0")]
	private int framesSkipped;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x0")]
	private bool exitThread;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x0")]
	private int processNullFramesCnt;

	[Token(Token = "0x170000CE")]
	public FactoryPrimitiveArrayPool<T> BufferFactory
	{
		[Token(Token = "0x60002FE")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000CF")]
	public bool PushDataAsyncReady
	{
		[Token(Token = "0x60002FF")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60002F8")]
	protected T[] processFrame(T[] buf, int p0, int p1)
	{
		return null;
	}

	[Token(Token = "0x60002F9")]
	public void AddPostProcessor(params IProcessor<T>[] processors)
	{
	}

	[Token(Token = "0x60002FA")]
	public void AddPreProcessor(params IProcessor<T>[] processors)
	{
	}

	[Token(Token = "0x60002FB")]
	public void RemoveProcessor(params IProcessor<T>[] processors)
	{
	}

	[Token(Token = "0x60002FC")]
	public void ClearProcessors()
	{
	}

	[Token(Token = "0x60002FD")]
	internal LocalVoiceFramed(VoiceClient voiceClient, byte id, VoiceInfo voiceInfo, int inSampleRate, int channelId, VoiceCreateOptions opt)
	{
	}

	[Token(Token = "0x6000300")]
	public void PushDataAsync(T[] buf)
	{
	}

	[Token(Token = "0x6000301")]
	private void PushDataAsyncThread()
	{
	}

	[Token(Token = "0x6000302")]
	public void PushData(T[] buf)
	{
	}

	[Token(Token = "0x6000303")]
	public override void Dispose()
	{
	}
}
