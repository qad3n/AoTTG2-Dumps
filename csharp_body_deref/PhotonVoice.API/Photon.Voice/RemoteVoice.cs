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

[Token(Token = "0x200005E")]
internal class RemoteVoice : IDisposable
{
	[Token(Token = "0x200005F")]
	private class FragmentedPoolSlot : IDisposable
	{
		[Token(Token = "0x40001A7")]
		[FieldOffset(Offset = "0x18")]
		private byte[] buf;

		[Token(Token = "0x1700008E")]
		public bool IsFree
		{
			[Token(Token = "0x6000222")]
			[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x6000223")]
			[Address(RVA = "0x11124D0", Offset = "0x1110AD0", VA = "0x1811124D0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x1700008F")]
		public byte[] Buf
		{
			[Token(Token = "0x6000224")]
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90")]
			get
			{
				return null;
			}
			[Token(Token = "0x6000225")]
			[Address(RVA = "0x1D69F30", Offset = "0x1D68530", VA = "0x181D69F30")]
			set
			{
			}
		}

		[Token(Token = "0x6000226")]
		[Address(RVA = "0xB3C020", Offset = "0xB3A620", VA = "0x180B3C020", Slot = "4")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000227")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public FragmentedPoolSlot()
		{
		}
	}

	[Token(Token = "0x4000187")]
	[FieldOffset(Offset = "0x40")]
	internal RemoteVoiceOptions options;

	[Token(Token = "0x4000188")]
	[FieldOffset(Offset = "0x90")]
	internal int channelId;

	[Token(Token = "0x400018A")]
	[FieldOffset(Offset = "0x98")]
	private int playerId;

	[Token(Token = "0x400018B")]
	[FieldOffset(Offset = "0x9C")]
	private byte voiceId;

	[Token(Token = "0x400018C")]
	[FieldOffset(Offset = "0x9D")]
	protected bool threadingEnabled;

	[Token(Token = "0x400018D")]
	[FieldOffset(Offset = "0x9E")]
	private bool disposed;

	[Token(Token = "0x400018E")]
	[FieldOffset(Offset = "0xA0")]
	private object disposeLock;

	[Token(Token = "0x400018F")]
	[FieldOffset(Offset = "0xA8")]
	private int receiving;

	[Token(Token = "0x4000190")]
	[FieldOffset(Offset = "0xAC")]
	private bool decoding;

	[Token(Token = "0x4000192")]
	[FieldOffset(Offset = "0xB8")]
	private SpacingProfile receiveSpacingProfile;

	[Token(Token = "0x4000193")]
	[FieldOffset(Offset = "0xC0")]
	private VoiceClient voiceClient;

	[Token(Token = "0x4000194")]
	[FieldOffset(Offset = "0xC8")]
	private FrameBuffer[] eventQueue;

	[Token(Token = "0x4000195")]
	[FieldOffset(Offset = "0xD0")]
	private int[] eventQueueLock;

	[Token(Token = "0x4000196")]
	[FieldOffset(Offset = "0xD8")]
	private byte frameWritePos;

	[Token(Token = "0x4000197")]
	[FieldOffset(Offset = "0xD9")]
	private byte frameReadPos;

	[Token(Token = "0x4000198")]
	[FieldOffset(Offset = "0xDA")]
	private byte eventReadPos;

	[Token(Token = "0x4000199")]
	[FieldOffset(Offset = "0xE0")]
	private AutoResetEvent frameQueueReady;

	[Token(Token = "0x400019A")]
	[FieldOffset(Offset = "0xE8")]
	private int flushingFrameNum;

	[Token(Token = "0x400019B")]
	[FieldOffset(Offset = "0x0")]
	private static FrameBuffer nullFrame;

	[Token(Token = "0x400019C")]
	[FieldOffset(Offset = "0xF0")]
	private ConcurrentQueue<FrameBuffer> configFrameQueue;

	[Token(Token = "0x400019D")]
	[FieldOffset(Offset = "0xF8")]
	private bool started;

	[Token(Token = "0x400019E")]
	[FieldOffset(Offset = "0x100")]
	private FragmentedPoolSlot[] fragmentedPool;

	[Token(Token = "0x400019F")]
	[FieldOffset(Offset = "0x108")]
	private FrameBuffer[] fecQueue;

	[Token(Token = "0x40001A0")]
	[FieldOffset(Offset = "0x110")]
	private int[] fecQueueLock;

	[Token(Token = "0x40001A1")]
	[FieldOffset(Offset = "0x118")]
	private byte[] fecXoredEvents;

	[Token(Token = "0x40001A2")]
	private const int FEC_EVENT_TIMEOUT_INF = 127;

	[Token(Token = "0x40001A3")]
	[FieldOffset(Offset = "0x120")]
	private byte fecEventTimeout;

	[Token(Token = "0x40001A4")]
	private const int QUEUE_CLEAR_LAG = 64;

	[Token(Token = "0x40001A5")]
	[FieldOffset(Offset = "0x121")]
	private bool fragmentDetected;

	[Token(Token = "0x17000088")]
	internal VoiceInfo Info
	{
		[Token(Token = "0x600020E")]
		[Address(RVA = "0x155C6F0", Offset = "0x155ACF0", VA = "0x18155C6F0")]
		[CompilerGenerated]
		get
		{
			return default(VoiceInfo);
		}
		[Token(Token = "0x600020F")]
		[Address(RVA = "0x1D70980", Offset = "0x1D6EF80", VA = "0x181D70980")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000089")]
	internal int DelayFrames
	{
		[Token(Token = "0x6000210")]
		[Address(RVA = "0xB5B910", Offset = "0xB59F10", VA = "0x180B5B910")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000211")]
		[Address(RVA = "0xB5BC30", Offset = "0xB5A230", VA = "0x180B5BC30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	private string shortName
	{
		[Token(Token = "0x6000213")]
		[Address(RVA = "0x1D72050", Offset = "0x1D70650", VA = "0x181D72050")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008B")]
	public string LogPrefix
	{
		[Token(Token = "0x6000214")]
		[Address(RVA = "0x1537220", Offset = "0x1535820", VA = "0x181537220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x6000215")]
		[Address(RVA = "0x1537500", Offset = "0x1535B00", VA = "0x181537500")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x1700008C")]
	public string ReceiveSpacingProfileDump
	{
		[Token(Token = "0x6000217")]
		[Address(RVA = "0x1D71FF0", Offset = "0x1D705F0", VA = "0x181D71FF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700008D")]
	public int ReceiveSpacingProfileMax
	{
		[Token(Token = "0x6000218")]
		[Address(RVA = "0x1D72020", Offset = "0x1D70620", VA = "0x181D72020")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x6000212")]
	[Address(RVA = "0x1D71030", Offset = "0x1D6F630", VA = "0x181D71030")]
	internal RemoteVoice(VoiceClient client, RemoteVoiceOptions options, int channelId, int playerId, byte voiceId, VoiceInfo info, byte lastEventNumber)
	{
	}

	[Token(Token = "0x6000216")]
	[Address(RVA = "0x1D71000", Offset = "0x1D6F600", VA = "0x181D71000")]
	public void ReceiveSpacingProfileStart()
	{
	}

	[Token(Token = "0x6000219")]
	[Address(RVA = "0x1D73D50", Offset = "0x1D72350", VA = "0x181D73D50")]
	internal void receiveBytes(ref FrameBuffer receivedBytes, byte evNumber)
	{
	}

	[Token(Token = "0x600021A")]
	[Address(RVA = "0x1D716B0", Offset = "0x1D6FCB0", VA = "0x181D716B0")]
	private void decodeQueue()
	{
	}

	[Token(Token = "0x600021B")]
	[Address(RVA = "0x1D73910", Offset = "0x1D71F10", VA = "0x181D73910")]
	private void processLostEvent(byte lostEvNum, ref FrameBuffer lostEv)
	{
	}

	[Token(Token = "0x600021C")]
	[Address(RVA = "0x1D74CD0", Offset = "0x1D732D0", VA = "0x181D74CD0")]
	private bool recoverLostEvent(byte lostEvNum, ref FrameBuffer lostEv, byte fecEvNum, ref FrameBuffer fecEv)
	{
		return default(bool);
	}

	[Token(Token = "0x600021D")]
	[Address(RVA = "0x1D721B0", Offset = "0x1D707B0", VA = "0x181D721B0")]
	private byte processFrame(byte begEvNum)
	{
		return default(byte);
	}

	[Token(Token = "0x600021E")]
	[Address(RVA = "0x1D71B50", Offset = "0x1D70150", VA = "0x181D71B50")]
	private void decodeThread()
	{
	}

	[Token(Token = "0x600021F")]
	[Address(RVA = "0x1D75750", Offset = "0x1D73D50", VA = "0x181D75750")]
	internal void removeAndDispose()
	{
	}

	[Token(Token = "0x6000220")]
	[Address(RVA = "0x1D70C50", Offset = "0x1D6F250", VA = "0x181D70C50", Slot = "4")]
	public void Dispose()
	{
	}
}
