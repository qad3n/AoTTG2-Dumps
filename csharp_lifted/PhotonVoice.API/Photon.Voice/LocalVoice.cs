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
		[Address(RVA = "0x5706CB0", Offset = "0x5705CB0", VA = "0x5706CB0")]
		get
		{
			return default(VoiceInfo);
		}
	}

	[Token(Token = "0x1700006E")]
	public bool TransmitEnabled
	{
		[Token(Token = "0x60001CE")]
		[Address(RVA = "0x5706CD0", Offset = "0x5705CD0", VA = "0x5706CD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001CF")]
		[Address(RVA = "0x5706CE0", Offset = "0x5705CE0", VA = "0x5706CE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public bool IsCurrentlyTransmitting
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x5706E50", Offset = "0x5705E50", VA = "0x5706E50")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000070")]
	public int FramesSent
	{
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x5706E70", Offset = "0x5705E70", VA = "0x5706E70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x5706E80", Offset = "0x5705E80", VA = "0x5706E80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public int FramesSentFragmented
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x5706E90", Offset = "0x5705E90", VA = "0x5706E90")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x5706EA0", Offset = "0x5705EA0", VA = "0x5706EA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public int FramesSentFragments
	{
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x5706EB0", Offset = "0x5705EB0", VA = "0x5706EB0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x5706EC0", Offset = "0x5705EC0", VA = "0x5706EC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public int FramesSentBytes
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x5706ED0", Offset = "0x5705ED0", VA = "0x5706ED0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x5706EE0", Offset = "0x5705EE0", VA = "0x5706EE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public bool Reliable
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x5706EF0", Offset = "0x5705EF0", VA = "0x5706EF0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x5706F00", Offset = "0x5705F00", VA = "0x5706F00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool Encrypt
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x5706F10", Offset = "0x5705F10", VA = "0x5706F10")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x5706F20", Offset = "0x5705F20", VA = "0x5706F20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool Fragment
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x5706F30", Offset = "0x5705F30", VA = "0x5706F30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x5706F40", Offset = "0x5705F40", VA = "0x5706F40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public int FEC
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x5706F50", Offset = "0x5705F50", VA = "0x5706F50")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x5706F60", Offset = "0x5705F60", VA = "0x5706F60")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public IServiceable LocalUserServiceable
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x5706F70", Offset = "0x5705F70", VA = "0x5706F70")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x5706F80", Offset = "0x5705F80", VA = "0x5706F80")]
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
		[Address(RVA = "0x5706F90", Offset = "0x5705F90", VA = "0x5706F90")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x5706FA0", Offset = "0x5705FA0", VA = "0x5706FA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public byte InterestGroup
	{
		[Token(Token = "0x60001E5")]
		[Address(RVA = "0x5706FB0", Offset = "0x5705FB0", VA = "0x5706FB0")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x5706FC0", Offset = "0x5705FC0", VA = "0x5706FC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public bool DebugEchoMode
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x5706FD0", Offset = "0x5705FD0", VA = "0x5706FD0")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x5706FE0", Offset = "0x5705FE0", VA = "0x5706FE0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public int[] TargetPlayers
	{
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x5707A90", Offset = "0x5706A90", VA = "0x5707A90")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x5707B00", Offset = "0x5706B00", VA = "0x5707B00")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public string SendSpacingProfileDump
	{
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x5707D10", Offset = "0x5706D10", VA = "0x5707D10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	public int SendSpacingProfileMax
	{
		[Token(Token = "0x60001ED")]
		[Address(RVA = "0x5707D30", Offset = "0x5706D30", VA = "0x5707D30")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	public byte ID
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x5707D50", Offset = "0x5706D50", VA = "0x5707D50")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000080")]
	public byte EvNumber
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x5707D60", Offset = "0x5706D60", VA = "0x5707D60")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000081")]
	protected string shortName
	{
		[Token(Token = "0x60001F2")]
		[Address(RVA = "0x57082B0", Offset = "0x57072B0", VA = "0x57082B0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000082")]
	public string Name
	{
		[Token(Token = "0x60001F3")]
		[Address(RVA = "0x5708450", Offset = "0x5707450", VA = "0x5708450")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public string LogPrefix
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x5708270", Offset = "0x5707270", VA = "0x5708270")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	protected bool isJoined
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x5707110", Offset = "0x5706110", VA = "0x5707110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001EB")]
	[Address(RVA = "0x5707CF0", Offset = "0x5706CF0", VA = "0x5707CF0")]
	public void SendSpacingProfileStart()
	{
	}

	[Token(Token = "0x60001F0")]
	[Address(RVA = "0x5707D70", Offset = "0x5706D70", VA = "0x5707D70")]
	internal LocalVoice()
	{
	}

	[Token(Token = "0x60001F1")]
	[Address(RVA = "0x5707EC0", Offset = "0x5706EC0", VA = "0x5707EC0")]
	internal LocalVoice(VoiceClient voiceClient, byte id, VoiceInfo voiceInfo, int channelId, VoiceCreateOptions opt)
	{
	}

	[Token(Token = "0x60001F5")]
	[Address(RVA = "0x57085E0", Offset = "0x57075E0", VA = "0x57085E0", Slot = "5")]
	internal virtual void service()
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x5708BF0", Offset = "0x5707BF0", VA = "0x5708BF0")]
	protected bool targetExits(bool targetMe, int[] targetPlayers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001F8")]
	[Address(RVA = "0x5708C10", Offset = "0x5707C10", VA = "0x5708C10")]
	internal void onJoinChannel()
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x5708C20", Offset = "0x5707C20", VA = "0x5708C20")]
	internal void onLeaveChannel()
	{
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x5708C30", Offset = "0x5707C30", VA = "0x5708C30")]
	internal void onPlayerJoin(int playerId)
	{
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x5708EC0", Offset = "0x5707EC0", VA = "0x5708EC0")]
	internal void sendVoiceInfoAndConfigFrame()
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x5708ED0", Offset = "0x5707ED0", VA = "0x5708ED0")]
	private string getTargetStr(bool targetMe, int[] targetPlayers)
	{
		return null;
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x57071D0", Offset = "0x57061D0", VA = "0x57071D0")]
	protected void sendVoiceInfoAndConfigFrame(bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x57077E0", Offset = "0x57067E0", VA = "0x57077E0")]
	protected void sendVoiceRemove(bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x57087A0", Offset = "0x57077A0", VA = "0x57087A0")]
	internal void sendFrame(ArraySegment<byte> compressed, FrameFlags flags)
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x57094B0", Offset = "0x57084B0", VA = "0x57094B0")]
	internal void sendFrame0(ArraySegment<byte> compressed, FrameFlags flags, bool targetMe, int[] targetPlayers, byte interestGroup, bool reliable)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x570A620", Offset = "0x5709620", VA = "0x570A620")]
	private void resetFEC()
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x5709EC0", Offset = "0x5708EC0", VA = "0x5709EC0")]
	private void sendFrameEvent(ArraySegment<byte> data, FrameFlags flags, SendFrameParams sendFramePar)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x570A660", Offset = "0x5709660", VA = "0x570A660")]
	public void RemoveSelf()
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x570A9A0", Offset = "0x57099A0", VA = "0x570A9A0", Slot = "6")]
	public virtual void Dispose()
	{
	}
}
