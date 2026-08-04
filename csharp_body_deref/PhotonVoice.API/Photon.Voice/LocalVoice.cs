// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.LocalVoice
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/Voice.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200005E")]
public class LocalVoice : IDisposable
{
	[Token(Token = "0x4000163")]
	public const int DATA_POOL_CAPACITY = 50;

	[Token(Token = "0x4000164")]
	[FieldOffset(Offset = "0x10")]
	private bool transmitEnabled;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x39")]
	private bool debugEchoMode;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x40")]
	protected int[] targetPlayers_;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x48")]
	protected VoiceInfo info;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x78")]
	protected IEncoder encoder;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0x80")]
	internal byte id;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0x84")]
	internal int channelId;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0x88")]
	internal byte evNumber;

	[Token(Token = "0x4000176")]
	[FieldOffset(Offset = "0x90")]
	protected VoiceClient voiceClient;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0x98")]
	protected bool threadingEnabled;

	[Token(Token = "0x4000178")]
	[FieldOffset(Offset = "0xA0")]
	protected ArraySegment<byte> configFrame;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0xB0")]
	protected bool disposed;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0xB8")]
	protected object disposeLock;

	[Token(Token = "0x400017B")]
	private const int NO_TRANSMIT_TIMEOUT_MS = 100;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0xC0")]
	private int lastTransmitTime;

	[Token(Token = "0x400017D")]
	private const int FEC_INFO_SIZE = 5;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0xC8")]
	private byte[] fecBuffer;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0xD0")]
	private FrameFlags fecFlags;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0xD1")]
	private byte fecFrameNumber;

	[Token(Token = "0x4000181")]
	[FieldOffset(Offset = "0xD4")]
	private int fecTotSize;

	[Token(Token = "0x4000182")]
	[FieldOffset(Offset = "0xD8")]
	private int fecMaxSize;

	[Token(Token = "0x4000183")]
	[FieldOffset(Offset = "0xDC")]
	private byte fecCnt;

	[Token(Token = "0x4000184")]
	[FieldOffset(Offset = "0xE0")]
	internal Dictionary<byte, int> eventTimestamps;

	[Token(Token = "0x4000185")]
	[FieldOffset(Offset = "0xE8")]
	private SpacingProfile sendSpacingProfile;

	[Token(Token = "0x1700006D")]
	public VoiceInfo Info
	{
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x3F1C0B0", Offset = "0x3F1C0B0", VA = "0x3F1C0B0")]
		get
		{
			return default(VoiceInfo);
		}
	}

	[Token(Token = "0x1700006E")]
	public bool TransmitEnabled
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x3F1C0D0", Offset = "0x3F1C0D0", VA = "0x3F1C0D0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x3F1C0E0", Offset = "0x3F1C0E0", VA = "0x3F1C0E0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public bool IsCurrentlyTransmitting
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x3F1C260", Offset = "0x3F1C260", VA = "0x3F1C260")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000070")]
	public int FramesSent
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x3F1C280", Offset = "0x3F1C280", VA = "0x3F1C280")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x3F1C290", Offset = "0x3F1C290", VA = "0x3F1C290")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public int FramesSentFragmented
	{
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x3F1C2A0", Offset = "0x3F1C2A0", VA = "0x3F1C2A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x3F1C2B0", Offset = "0x3F1C2B0", VA = "0x3F1C2B0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public int FramesSentFragments
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x3F1C2C0", Offset = "0x3F1C2C0", VA = "0x3F1C2C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x3F1C2D0", Offset = "0x3F1C2D0", VA = "0x3F1C2D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public int FramesSentBytes
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x3F1C2E0", Offset = "0x3F1C2E0", VA = "0x3F1C2E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x3F1C2F0", Offset = "0x3F1C2F0", VA = "0x3F1C2F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public bool Reliable
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x3F1C300", Offset = "0x3F1C300", VA = "0x3F1C300")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x3F1C310", Offset = "0x3F1C310", VA = "0x3F1C310")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool Encrypt
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x3F1C320", Offset = "0x3F1C320", VA = "0x3F1C320")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x3F1C330", Offset = "0x3F1C330", VA = "0x3F1C330")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool Fragment
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x3F1C340", Offset = "0x3F1C340", VA = "0x3F1C340")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x3F1C350", Offset = "0x3F1C350", VA = "0x3F1C350")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public int FEC
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x3F1C360", Offset = "0x3F1C360", VA = "0x3F1C360")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x3F1C370", Offset = "0x3F1C370", VA = "0x3F1C370")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public IServiceable LocalUserServiceable
	{
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x3F1C380", Offset = "0x3F1C380", VA = "0x3F1C380")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x3F1C390", Offset = "0x3F1C390", VA = "0x3F1C390")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	[Obsolete("Use InterestGroup.")]
	public byte Group
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x3F1C3A0", Offset = "0x3F1C3A0", VA = "0x3F1C3A0")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x3F1C3B0", Offset = "0x3F1C3B0", VA = "0x3F1C3B0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public byte InterestGroup
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x3F1C3C0", Offset = "0x3F1C3C0", VA = "0x3F1C3C0")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x3F1C3D0", Offset = "0x3F1C3D0", VA = "0x3F1C3D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public bool DebugEchoMode
	{
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x3F1C3E0", Offset = "0x3F1C3E0", VA = "0x3F1C3E0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x3F1C3F0", Offset = "0x3F1C3F0", VA = "0x3F1C3F0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public int[] TargetPlayers
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x3F1CEA0", Offset = "0x3F1CEA0", VA = "0x3F1CEA0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x3F1CF10", Offset = "0x3F1CF10", VA = "0x3F1CF10")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public string SendSpacingProfileDump
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x3F1D120", Offset = "0x3F1D120", VA = "0x3F1D120")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	public int SendSpacingProfileMax
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x3F1D140", Offset = "0x3F1D140", VA = "0x3F1D140")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	public byte ID
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x3F1D160", Offset = "0x3F1D160", VA = "0x3F1D160")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000080")]
	public byte EvNumber
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x3F1D170", Offset = "0x3F1D170", VA = "0x3F1D170")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000081")]
	protected string shortName
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x3F1D6C0", Offset = "0x3F1D6C0", VA = "0x3F1D6C0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000082")]
	public string Name
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x3F1D860", Offset = "0x3F1D860", VA = "0x3F1D860")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public string LogPrefix
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x3F1D680", Offset = "0x3F1D680", VA = "0x3F1D680")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	protected bool isJoined
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x3F1C520", Offset = "0x3F1C520", VA = "0x3F1C520")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x3F1D100", Offset = "0x3F1D100", VA = "0x3F1D100")]
	public void SendSpacingProfileStart()
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x3F1D180", Offset = "0x3F1D180", VA = "0x3F1D180")]
	internal LocalVoice()
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x3F1D2D0", Offset = "0x3F1D2D0", VA = "0x3F1D2D0")]
	internal LocalVoice(VoiceClient voiceClient, byte id, VoiceInfo voiceInfo, int channelId, VoiceCreateOptions opt)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x3F1D9F0", Offset = "0x3F1D9F0", VA = "0x3F1D9F0", Slot = "5")]
	internal virtual void service()
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x3F1E010", Offset = "0x3F1E010", VA = "0x3F1E010")]
	protected bool targetExits(bool targetMe, int[] targetPlayers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x3F1E030", Offset = "0x3F1E030", VA = "0x3F1E030")]
	internal void onJoinChannel()
	{
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x3F1E040", Offset = "0x3F1E040", VA = "0x3F1E040")]
	internal void onLeaveChannel()
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x3F1E050", Offset = "0x3F1E050", VA = "0x3F1E050")]
	internal void onPlayerJoin(int playerId)
	{
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x3F1E2E0", Offset = "0x3F1E2E0", VA = "0x3F1E2E0")]
	internal void sendVoiceInfoAndConfigFrame()
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x3F1E2F0", Offset = "0x3F1E2F0", VA = "0x3F1E2F0")]
	private string getTargetStr(bool targetMe, int[] targetPlayers)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x3F1C5E0", Offset = "0x3F1C5E0", VA = "0x3F1C5E0")]
	protected void sendVoiceInfoAndConfigFrame(bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x3F1CBF0", Offset = "0x3F1CBF0", VA = "0x3F1CBF0")]
	protected void sendVoiceRemove(bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x3F1DBB0", Offset = "0x3F1DBB0", VA = "0x3F1DBB0")]
	internal void sendFrame(ArraySegment<byte> compressed, FrameFlags flags)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x3F1E8C0", Offset = "0x3F1E8C0", VA = "0x3F1E8C0")]
	internal void sendFrame0(ArraySegment<byte> compressed, FrameFlags flags, bool targetMe, int[] targetPlayers, byte interestGroup, bool reliable)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x3F1FAC0", Offset = "0x3F1FAC0", VA = "0x3F1FAC0")]
	private void resetFEC()
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x3F1F340", Offset = "0x3F1F340", VA = "0x3F1F340")]
	private void sendFrameEvent(ArraySegment<byte> data, FrameFlags flags, SendFrameParams sendFramePar)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x3F1FB00", Offset = "0x3F1FB00", VA = "0x3F1FB00")]
	public void RemoveSelf()
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x3F1FE40", Offset = "0x3F1FE40", VA = "0x3F1FE40", Slot = "6")]
	public virtual void Dispose()
	{
	}
}
