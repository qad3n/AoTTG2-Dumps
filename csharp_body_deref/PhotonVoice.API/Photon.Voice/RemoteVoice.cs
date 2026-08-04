// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.RemoteVoice
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Voice.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Concurrent;
using System.Runtime.CompilerServices;
using System.Threading;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000060")]
internal class RemoteVoice : IDisposable
{
	[Token(Token = "0x2000061")]
	private class FragmentedPoolSlot : IDisposable
	{
		[Token(Token = "0x40001AC")]
		[FieldOffset(Offset = "0x18")]
		private byte[] buf;

		[Token(Token = "0x1700008E")]
		public bool IsFree
		{
			[Token(Token = "0x6000224")]
			[Address(RVA = "0x3F26920", Offset = "0x3F26920", VA = "0x3F26920")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000225")]
			[Address(RVA = "0x3F26930", Offset = "0x3F26930", VA = "0x3F26930")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700008F")]
		public byte[] Buf
		{
			[Token(Token = "0x6000226")]
			[Address(RVA = "0x3F26940", Offset = "0x3F26940", VA = "0x3F26940")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000227")]
			[Address(RVA = "0x3F261E0", Offset = "0x3F261E0", VA = "0x3F261E0")]
			set
			{
			}
		}

		[Token(Token = "0x6000228")]
		[Address(RVA = "0x3F26950", Offset = "0x3F26950", VA = "0x3F26950", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000229")]
		[Address(RVA = "0x3F261D0", Offset = "0x3F261D0", VA = "0x3F261D0")]
		public FragmentedPoolSlot()
		{
		}
	}

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x40")]
	internal RemoteVoiceOptions options;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x90")]
	internal int channelId;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0x98")]
	private int playerId;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0x9C")]
	private byte voiceId;

	[Token(Token = "0x4000191")]
	[FieldOffset(Offset = "0x9D")]
	protected bool threadingEnabled;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0x9E")]
	private bool disposed;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0xA0")]
	private object disposeLock;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0xA8")]
	private int receiving;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0xAC")]
	private bool decoding;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0xB8")]
	private SpacingProfile receiveSpacingProfile;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0xC0")]
	private VoiceClient voiceClient;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0xC8")]
	private FrameBuffer[] eventQueue;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0xD0")]
	private int[] eventQueueLock;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0xD8")]
	private byte frameWritePos;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0xD9")]
	private byte frameReadPos;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0xDA")]
	private byte eventReadPos;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0xE0")]
	private AutoResetEvent frameQueueReady;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0xE8")]
	private int flushingFrameNum;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x0")]
	private static FrameBuffer nullFrame;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0xF0")]
	private ConcurrentQueue<FrameBuffer> configFrameQueue;

	[Token(Token = "0x40001A2")]
	[FieldOffset(Offset = "0xF8")]
	private bool started;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x100")]
	private FragmentedPoolSlot[] fragmentedPool;

	[Token(Token = "0x40001A4")]
	[FieldOffset(Offset = "0x108")]
	private FrameBuffer[] fecQueue;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x110")]
	private int[] fecQueueLock;

	[Token(Token = "0x40001A6")]
	[FieldOffset(Offset = "0x118")]
	private byte[] fecXoredEvents;

	[Token(Token = "0x40001A7")]
	private const int FEC_EVENT_TIMEOUT_INF = 127;

	[Token(Token = "0x40001A8")]
	[FieldOffset(Offset = "0x120")]
	private byte fecEventTimeout;

	[Token(Token = "0x40001A9")]
	private const int QUEUE_CLEAR_LAG = 64;

	[Token(Token = "0x40001AA")]
	[FieldOffset(Offset = "0x121")]
	private bool fragmentDetected;

	[Token(Token = "0x17000088")]
	internal VoiceInfo Info
	{
		[Token(Token = "0x6000210")]
		[Address(RVA = "0x3F201F0", Offset = "0x3F201F0", VA = "0x3F201F0")]
		[CompilerGenerated]
		get
		{
			return default(VoiceInfo);
		}
		[Token(Token = "0x6000211")]
		[Address(RVA = "0x3F20210", Offset = "0x3F20210", VA = "0x3F20210")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000089")]
	internal int DelayFrames
	{
		[Token(Token = "0x6000212")]
		[Address(RVA = "0x3F20240", Offset = "0x3F20240", VA = "0x3F20240")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x3F20250", Offset = "0x3F20250", VA = "0x3F20250")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	private string shortName
	{
		[Token(Token = "0x6000215")]
		[Address(RVA = "0x3F20A60", Offset = "0x3F20A60", VA = "0x3F20A60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008B")]
	public string LogPrefix
	{
		[Token(Token = "0x6000216")]
		[Address(RVA = "0x3F20BD0", Offset = "0x3F20BD0", VA = "0x3F20BD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000217")]
		[Address(RVA = "0x3F20BE0", Offset = "0x3F20BE0", VA = "0x3F20BE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public string ReceiveSpacingProfileDump
	{
		[Token(Token = "0x6000219")]
		[Address(RVA = "0x3F20C20", Offset = "0x3F20C20", VA = "0x3F20C20")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	public int ReceiveSpacingProfileMax
	{
		[Token(Token = "0x600021A")]
		[Address(RVA = "0x3F20C40", Offset = "0x3F20C40", VA = "0x3F20C40")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000214")]
	[Address(RVA = "0x3F20260", Offset = "0x3F20260", VA = "0x3F20260")]
	internal RemoteVoice(VoiceClient client, RemoteVoiceOptions options, int channelId, int playerId, byte voiceId, VoiceInfo info, byte lastEventNumber)
	{
	}

	[Token(Token = "0x6000218")]
	[Address(RVA = "0x3F20C00", Offset = "0x3F20C00", VA = "0x3F20C00")]
	public void ReceiveSpacingProfileStart()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x3F20C60", Offset = "0x3F20C60", VA = "0x3F20C60")]
	internal void receiveBytes(ref FrameBuffer receivedBytes, byte evNumber)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x3F222A0", Offset = "0x3F222A0", VA = "0x3F222A0")]
	private void decodeQueue()
	{
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x3F24CE0", Offset = "0x3F24CE0", VA = "0x3F24CE0")]
	private void processLostEvent(byte lostEvNum, ref FrameBuffer lostEv)
	{
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x3F25260", Offset = "0x3F25260", VA = "0x3F25260")]
	private bool recoverLostEvent(byte lostEvNum, ref FrameBuffer lostEv, byte fecEvNum, ref FrameBuffer fecEv)
	{
		return default(bool);
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x3F22EB0", Offset = "0x3F22EB0", VA = "0x3F22EB0")]
	private byte processFrame(byte begEvNum)
	{
		return default(byte);
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x3F26200", Offset = "0x3F26200", VA = "0x3F26200")]
	private void decodeThread()
	{
	}

	[Token(Token = "0x6000221")]
	[Address(RVA = "0x3F268E0", Offset = "0x3F268E0", VA = "0x3F268E0")]
	internal void removeAndDispose()
	{
	}

	[Token(Token = "0x6000222")]
	[Address(RVA = "0x3F22940", Offset = "0x3F22940", VA = "0x3F22940", Slot = "4")]
	public void Dispose()
	{
	}
}
