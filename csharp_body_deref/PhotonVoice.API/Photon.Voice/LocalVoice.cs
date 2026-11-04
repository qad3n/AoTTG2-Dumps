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

[Token(Token = "0x200005C")]
public class LocalVoice : IDisposable
{
	[Token(Token = "0x400015E")]
	public const int DATA_POOL_CAPACITY = 50;

	[Token(Token = "0x400015F")]
	[FieldOffset(Offset = "0x10")]
	private bool transmitEnabled;

	[Token(Token = "0x400016A")]
	[FieldOffset(Offset = "0x39")]
	private bool debugEchoMode;

	[Token(Token = "0x400016B")]
	[FieldOffset(Offset = "0x40")]
	protected int[] targetPlayers_;

	[Token(Token = "0x400016C")]
	[FieldOffset(Offset = "0x48")]
	protected VoiceInfo info;

	[Token(Token = "0x400016D")]
	[FieldOffset(Offset = "0x78")]
	protected IEncoder encoder;

	[Token(Token = "0x400016E")]
	[FieldOffset(Offset = "0x80")]
	internal byte id;

	[Token(Token = "0x400016F")]
	[FieldOffset(Offset = "0x84")]
	internal int channelId;

	[Token(Token = "0x4000170")]
	[FieldOffset(Offset = "0x88")]
	internal byte evNumber;

	[Token(Token = "0x4000171")]
	[FieldOffset(Offset = "0x90")]
	protected VoiceClient voiceClient;

	[Token(Token = "0x4000172")]
	[FieldOffset(Offset = "0x98")]
	protected bool threadingEnabled;

	[Token(Token = "0x4000173")]
	[FieldOffset(Offset = "0xA0")]
	protected ArraySegment<byte> configFrame;

	[Token(Token = "0x4000174")]
	[FieldOffset(Offset = "0xB0")]
	protected bool disposed;

	[Token(Token = "0x4000175")]
	[FieldOffset(Offset = "0xB8")]
	protected object disposeLock;

	[Token(Token = "0x4000176")]
	private const int NO_TRANSMIT_TIMEOUT_MS = 100;

	[Token(Token = "0x4000177")]
	[FieldOffset(Offset = "0xC0")]
	private int lastTransmitTime;

	[Token(Token = "0x4000178")]
	private const int FEC_INFO_SIZE = 5;

	[Token(Token = "0x4000179")]
	[FieldOffset(Offset = "0xC8")]
	private byte[] fecBuffer;

	[Token(Token = "0x400017A")]
	[FieldOffset(Offset = "0xD0")]
	private FrameFlags fecFlags;

	[Token(Token = "0x400017B")]
	[FieldOffset(Offset = "0xD1")]
	private byte fecFrameNumber;

	[Token(Token = "0x400017C")]
	[FieldOffset(Offset = "0xD4")]
	private int fecTotSize;

	[Token(Token = "0x400017D")]
	[FieldOffset(Offset = "0xD8")]
	private int fecMaxSize;

	[Token(Token = "0x400017E")]
	[FieldOffset(Offset = "0xDC")]
	private byte fecCnt;

	[Token(Token = "0x400017F")]
	[FieldOffset(Offset = "0xE0")]
	internal Dictionary<byte, int> eventTimestamps;

	[Token(Token = "0x4000180")]
	[FieldOffset(Offset = "0xE8")]
	private SpacingProfile sendSpacingProfile;

	[Token(Token = "0x1700006D")]
	public VoiceInfo Info
	{
		[Token(Token = "0x60001CD")]
		[Address(RVA = "0x1D6CCE0", Offset = "0x1D6B2E0", VA = "0x181D6CCE0")]
		get
		{
			return default(VoiceInfo);
		}
	}

	[Token(Token = "0x1700006E")]
	public bool TransmitEnabled
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0xE5A320", Offset = "0xE58920", VA = "0x180E5A320")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x1D6EF10", Offset = "0x1D6D510", VA = "0x181D6EF10")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public bool IsCurrentlyTransmitting
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x1D6CD00", Offset = "0x1D6B300", VA = "0x181D6CD00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000070")]
	public int FramesSent
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x8E79A0", Offset = "0x8E5FA0", VA = "0x1808E79A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0xD23EE0", Offset = "0xD224E0", VA = "0x180D23EE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public int FramesSentFragmented
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x8FB390", Offset = "0x8F9990", VA = "0x1808FB390")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x111C9C0", Offset = "0x111AFC0", VA = "0x18111C9C0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public int FramesSentFragments
	{
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0xD23F80", Offset = "0xD22580", VA = "0x180D23F80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public int FramesSentBytes
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public bool Reliable
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x584270", Offset = "0x582870", VA = "0x180584270")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x584290", Offset = "0x582890", VA = "0x180584290")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool Encrypt
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x1C3C7E0", Offset = "0x1C3ADE0", VA = "0x181C3C7E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x1C3C860", Offset = "0x1C3AE60", VA = "0x181C3C860")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool Fragment
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x1C3C7D0", Offset = "0x1C3ADD0", VA = "0x181C3C7D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x1C3C850", Offset = "0x1C3AE50", VA = "0x181C3C850")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public int FEC
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public IServiceable LocalUserServiceable
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x5853F0", Offset = "0x5839F0", VA = "0x1805853F0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x58AA00", Offset = "0x589000", VA = "0x18058AA00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000079")]
	[Obsolete("Use InterestGroup.")]
	public byte Group
	{
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public byte InterestGroup
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0xF1D190", Offset = "0xF1B790", VA = "0x180F1D190")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0xF1D640", Offset = "0xF1BC40", VA = "0x180F1D640")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public bool DebugEchoMode
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0xF1D4C0", Offset = "0xF1BAC0", VA = "0x180F1D4C0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x1D6EC70", Offset = "0x1D6D270", VA = "0x181D6EC70")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public int[] TargetPlayers
	{
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x1D6D0E0", Offset = "0x1D6B6E0", VA = "0x181D6D0E0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x1D6ED50", Offset = "0x1D6D350", VA = "0x181D6ED50")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public string SendSpacingProfileDump
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x1D6D080", Offset = "0x1D6B680", VA = "0x181D6D080")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	public int SendSpacingProfileMax
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x1D6D0B0", Offset = "0x1D6B6B0", VA = "0x181D6D0B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	public byte ID
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x1720FF0", Offset = "0x171F5F0", VA = "0x181720FF0")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000080")]
	public byte EvNumber
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x1C40680", Offset = "0x1C3EC80", VA = "0x181C40680")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000081")]
	protected string shortName
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x1D6D1D0", Offset = "0x1D6B7D0", VA = "0x181D6D1D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000082")]
	public string Name
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x1D6CEF0", Offset = "0x1D6B4F0", VA = "0x181D6CEF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public string LogPrefix
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x1D6CD30", Offset = "0x1D6B330", VA = "0x181D6CD30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	protected bool isJoined
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x1D6D160", Offset = "0x1D6B760", VA = "0x181D6D160")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x1D6C660", Offset = "0x1D6AC60", VA = "0x181D6C660")]
	public void SendSpacingProfileStart()
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x1D6CAD0", Offset = "0x1D6B0D0", VA = "0x181D6CAD0")]
	internal LocalVoice()
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x1D6C690", Offset = "0x1D6AC90", VA = "0x181D6C690")]
	internal LocalVoice(VoiceClient voiceClient, byte id, VoiceInfo voiceInfo, int channelId, VoiceCreateOptions opt)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x1D6EA90", Offset = "0x1D6D090", VA = "0x181D6EA90", Slot = "5")]
	internal virtual void service()
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x1D6EFC0", Offset = "0x1D6D5C0", VA = "0x181D6EFC0")]
	protected bool targetExits(bool targetMe, int[] targetPlayers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x1D6D270", Offset = "0x1D6B870", VA = "0x181D6D270")]
	internal void onJoinChannel()
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x1D6D280", Offset = "0x1D6B880", VA = "0x181D6D280")]
	internal void onLeaveChannel()
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x1D6D290", Offset = "0x1D6B890", VA = "0x181D6D290")]
	internal void onPlayerJoin(int playerId)
	{
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x1D6D270", Offset = "0x1D6B870", VA = "0x181D6D270")]
	internal void sendVoiceInfoAndConfigFrame()
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x1D6CC10", Offset = "0x1D6B210", VA = "0x181D6CC10")]
	private string getTargetStr(bool targetMe, int[] targetPlayers)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x1D6E5F0", Offset = "0x1D6CBF0", VA = "0x181D6E5F0")]
	protected void sendVoiceInfoAndConfigFrame(bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x1D6E940", Offset = "0x1D6CF40", VA = "0x181D6E940")]
	protected void sendVoiceRemove(bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x1D6E2F0", Offset = "0x1D6C8F0", VA = "0x181D6E2F0")]
	internal void sendFrame(ArraySegment<byte> compressed, FrameFlags flags)
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x1D6D450", Offset = "0x1D6BA50", VA = "0x181D6D450")]
	internal void sendFrame0(ArraySegment<byte> compressed, FrameFlags flags, bool targetMe, int[] targetPlayers, byte interestGroup, bool reliable)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x1D6D400", Offset = "0x1D6BA00", VA = "0x181D6D400")]
	private void resetFEC()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x1D6DC40", Offset = "0x1D6C240", VA = "0x181D6DC40")]
	private void sendFrameEvent(ArraySegment<byte> data, FrameFlags flags, SendFrameParams sendFramePar)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x1D6C4C0", Offset = "0x1D6AAC0", VA = "0x181D6C4C0")]
	public void RemoveSelf()
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x1D6C450", Offset = "0x1D6AA50", VA = "0x181D6C450", Slot = "6")]
	public virtual void Dispose()
	{
	}
}
