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
		[Address(RVA = "0x3C26760", Offset = "0x3C26760", VA = "0x3C26760")]
		get
		{
			return default(VoiceInfo);
		}
	}

	[Token(Token = "0x1700006E")]
	public bool TransmitEnabled
	{
		[Token(Token = "0x60001D0")]
		[Address(RVA = "0x3C26780", Offset = "0x3C26780", VA = "0x3C26780")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001D1")]
		[Address(RVA = "0x3C26790", Offset = "0x3C26790", VA = "0x3C26790")]
		set
		{
		}
	}

	[Token(Token = "0x1700006F")]
	public bool IsCurrentlyTransmitting
	{
		[Token(Token = "0x60001D2")]
		[Address(RVA = "0x3C26910", Offset = "0x3C26910", VA = "0x3C26910")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000070")]
	public int FramesSent
	{
		[Token(Token = "0x60001D3")]
		[Address(RVA = "0x3C26930", Offset = "0x3C26930", VA = "0x3C26930")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D4")]
		[Address(RVA = "0x3C26940", Offset = "0x3C26940", VA = "0x3C26940")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000071")]
	public int FramesSentFragmented
	{
		[Token(Token = "0x60001D5")]
		[Address(RVA = "0x3C26950", Offset = "0x3C26950", VA = "0x3C26950")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D6")]
		[Address(RVA = "0x3C26960", Offset = "0x3C26960", VA = "0x3C26960")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000072")]
	public int FramesSentFragments
	{
		[Token(Token = "0x60001D7")]
		[Address(RVA = "0x3C26970", Offset = "0x3C26970", VA = "0x3C26970")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001D8")]
		[Address(RVA = "0x3C26980", Offset = "0x3C26980", VA = "0x3C26980")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000073")]
	public int FramesSentBytes
	{
		[Token(Token = "0x60001D9")]
		[Address(RVA = "0x3C26990", Offset = "0x3C26990", VA = "0x3C26990")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001DA")]
		[Address(RVA = "0x3C269A0", Offset = "0x3C269A0", VA = "0x3C269A0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000074")]
	public bool Reliable
	{
		[Token(Token = "0x60001DB")]
		[Address(RVA = "0x3C269B0", Offset = "0x3C269B0", VA = "0x3C269B0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DC")]
		[Address(RVA = "0x3C269C0", Offset = "0x3C269C0", VA = "0x3C269C0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000075")]
	public bool Encrypt
	{
		[Token(Token = "0x60001DD")]
		[Address(RVA = "0x3C269D0", Offset = "0x3C269D0", VA = "0x3C269D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001DE")]
		[Address(RVA = "0x3C269E0", Offset = "0x3C269E0", VA = "0x3C269E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000076")]
	public bool Fragment
	{
		[Token(Token = "0x60001DF")]
		[Address(RVA = "0x3C269F0", Offset = "0x3C269F0", VA = "0x3C269F0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001E0")]
		[Address(RVA = "0x3C26A00", Offset = "0x3C26A00", VA = "0x3C26A00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000077")]
	public int FEC
	{
		[Token(Token = "0x60001E1")]
		[Address(RVA = "0x3C26A10", Offset = "0x3C26A10", VA = "0x3C26A10")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x60001E2")]
		[Address(RVA = "0x3C26A20", Offset = "0x3C26A20", VA = "0x3C26A20")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x17000078")]
	public IServiceable LocalUserServiceable
	{
		[Token(Token = "0x60001E3")]
		[Address(RVA = "0x3C26A30", Offset = "0x3C26A30", VA = "0x3C26A30")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x60001E4")]
		[Address(RVA = "0x3C26A40", Offset = "0x3C26A40", VA = "0x3C26A40")]
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
		[Address(RVA = "0x3C26A50", Offset = "0x3C26A50", VA = "0x3C26A50")]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60001E6")]
		[Address(RVA = "0x3C26A60", Offset = "0x3C26A60", VA = "0x3C26A60")]
		set
		{
		}
	}

	[Token(Token = "0x1700007A")]
	public byte InterestGroup
	{
		[Token(Token = "0x60001E7")]
		[Address(RVA = "0x3C26A70", Offset = "0x3C26A70", VA = "0x3C26A70")]
		[CompilerGenerated]
		get
		{
			return default(byte);
		}
		[Token(Token = "0x60001E8")]
		[Address(RVA = "0x3C26A80", Offset = "0x3C26A80", VA = "0x3C26A80")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x1700007B")]
	public bool DebugEchoMode
	{
		[Token(Token = "0x60001E9")]
		[Address(RVA = "0x3C26A90", Offset = "0x3C26A90", VA = "0x3C26A90")]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x60001EA")]
		[Address(RVA = "0x3C26AA0", Offset = "0x3C26AA0", VA = "0x3C26AA0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007C")]
	public int[] TargetPlayers
	{
		[Token(Token = "0x60001EB")]
		[Address(RVA = "0x3C27550", Offset = "0x3C27550", VA = "0x3C27550")]
		get
		{
			return null;
		}
		[Token(Token = "0x60001EC")]
		[Address(RVA = "0x3C275C0", Offset = "0x3C275C0", VA = "0x3C275C0")]
		set
		{
		}
	}

	[Token(Token = "0x1700007D")]
	public string SendSpacingProfileDump
	{
		[Token(Token = "0x60001EE")]
		[Address(RVA = "0x3C277D0", Offset = "0x3C277D0", VA = "0x3C277D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700007E")]
	public int SendSpacingProfileMax
	{
		[Token(Token = "0x60001EF")]
		[Address(RVA = "0x3C277F0", Offset = "0x3C277F0", VA = "0x3C277F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x1700007F")]
	public byte ID
	{
		[Token(Token = "0x60001F0")]
		[Address(RVA = "0x3C27810", Offset = "0x3C27810", VA = "0x3C27810")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000080")]
	public byte EvNumber
	{
		[Token(Token = "0x60001F1")]
		[Address(RVA = "0x3C27820", Offset = "0x3C27820", VA = "0x3C27820")]
		get
		{
			return default(byte);
		}
	}

	[Token(Token = "0x17000081")]
	protected string shortName
	{
		[Token(Token = "0x60001F4")]
		[Address(RVA = "0x3C27D70", Offset = "0x3C27D70", VA = "0x3C27D70")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000082")]
	public string Name
	{
		[Token(Token = "0x60001F5")]
		[Address(RVA = "0x3C27F10", Offset = "0x3C27F10", VA = "0x3C27F10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000083")]
	public string LogPrefix
	{
		[Token(Token = "0x60001F6")]
		[Address(RVA = "0x3C27D30", Offset = "0x3C27D30", VA = "0x3C27D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000084")]
	protected bool isJoined
	{
		[Token(Token = "0x60001F8")]
		[Address(RVA = "0x3C26BD0", Offset = "0x3C26BD0", VA = "0x3C26BD0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x60001ED")]
	[Address(RVA = "0x3C277B0", Offset = "0x3C277B0", VA = "0x3C277B0")]
	public void SendSpacingProfileStart()
	{
	}

	[Token(Token = "0x60001F2")]
	[Address(RVA = "0x3C27830", Offset = "0x3C27830", VA = "0x3C27830")]
	internal LocalVoice()
	{
	}

	[Token(Token = "0x60001F3")]
	[Address(RVA = "0x3C27980", Offset = "0x3C27980", VA = "0x3C27980")]
	internal LocalVoice(VoiceClient voiceClient, byte id, VoiceInfo voiceInfo, int channelId, VoiceCreateOptions opt)
	{
	}

	[Token(Token = "0x60001F7")]
	[Address(RVA = "0x3C280A0", Offset = "0x3C280A0", VA = "0x3C280A0", Slot = "5")]
	internal virtual void service()
	{
	}

	[Token(Token = "0x60001F9")]
	[Address(RVA = "0x3C286C0", Offset = "0x3C286C0", VA = "0x3C286C0")]
	protected bool targetExits(bool targetMe, int[] targetPlayers)
	{
		return default(bool);
	}

	[Token(Token = "0x60001FA")]
	[Address(RVA = "0x3C286E0", Offset = "0x3C286E0", VA = "0x3C286E0")]
	internal void onJoinChannel()
	{
	}

	[Token(Token = "0x60001FB")]
	[Address(RVA = "0x3C286F0", Offset = "0x3C286F0", VA = "0x3C286F0")]
	internal void onLeaveChannel()
	{
	}

	[Token(Token = "0x60001FC")]
	[Address(RVA = "0x3C28700", Offset = "0x3C28700", VA = "0x3C28700")]
	internal void onPlayerJoin(int playerId)
	{
	}

	[Token(Token = "0x60001FD")]
	[Address(RVA = "0x3C28990", Offset = "0x3C28990", VA = "0x3C28990")]
	internal void sendVoiceInfoAndConfigFrame()
	{
	}

	[Token(Token = "0x60001FE")]
	[Address(RVA = "0x3C289A0", Offset = "0x3C289A0", VA = "0x3C289A0")]
	private string getTargetStr(bool targetMe, int[] targetPlayers)
	{
		return null;
	}

	[Token(Token = "0x60001FF")]
	[Address(RVA = "0x3C26C90", Offset = "0x3C26C90", VA = "0x3C26C90")]
	protected void sendVoiceInfoAndConfigFrame(bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x6000200")]
	[Address(RVA = "0x3C272A0", Offset = "0x3C272A0", VA = "0x3C272A0")]
	protected void sendVoiceRemove(bool targetMe, int[] targetPlayers)
	{
	}

	[Token(Token = "0x6000201")]
	[Address(RVA = "0x3C28260", Offset = "0x3C28260", VA = "0x3C28260")]
	internal void sendFrame(ArraySegment<byte> compressed, FrameFlags flags)
	{
	}

	[Token(Token = "0x6000202")]
	[Address(RVA = "0x3C28F70", Offset = "0x3C28F70", VA = "0x3C28F70")]
	internal void sendFrame0(ArraySegment<byte> compressed, FrameFlags flags, bool targetMe, int[] targetPlayers, byte interestGroup, bool reliable)
	{
	}

	[Token(Token = "0x6000203")]
	[Address(RVA = "0x3C2A170", Offset = "0x3C2A170", VA = "0x3C2A170")]
	private void resetFEC()
	{
	}

	[Token(Token = "0x6000204")]
	[Address(RVA = "0x3C299F0", Offset = "0x3C299F0", VA = "0x3C299F0")]
	private void sendFrameEvent(ArraySegment<byte> data, FrameFlags flags, SendFrameParams sendFramePar)
	{
	}

	[Token(Token = "0x6000205")]
	[Address(RVA = "0x3C2A1B0", Offset = "0x3C2A1B0", VA = "0x3C2A1B0")]
	public void RemoveSelf()
	{
	}

	[Token(Token = "0x6000206")]
	[Address(RVA = "0x3C2A4F0", Offset = "0x3C2A4F0", VA = "0x3C2A4F0", Slot = "6")]
	public virtual void Dispose()
	{
	}
}
