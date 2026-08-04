// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.Unity.VoiceConnection
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/Code/UnityVoiceClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections.Generic;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using ExitGames.Client.Photon;
using Il2CppDummyDll;
using Photon.Realtime;
using UnityEngine;
using UnityEngine.Serialization;

namespace Photon.Voice.Unity;

[Token(Token = "0x2000012")]
[DisallowMultipleComponent]
public class VoiceConnection : ConnectionHandler
{
	[Token(Token = "0x4000056")]
	public const int ChannelAudio = 1;

	[Token(Token = "0x4000057")]
	public const int ChannelVideo = 2;

	[Token(Token = "0x4000058")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private VoiceComponentImpl voiceComponentImpl;

	[Token(Token = "0x4000059")]
	private const string PlayerPrefsKey = "VoiceCloudBestRegion";

	[Token(Token = "0x400005A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private LoadBalancingTransport client;

	[Token(Token = "0x400005B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private SupportLogger supportLoggerComponent;

	[Token(Token = "0x400005C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	private bool runInBackground;

	[Token(Token = "0x400005D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private int statsResetInterval;

	[Token(Token = "0x400005E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int nextStatsTickCount;

	[Token(Token = "0x400005F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private float statsReferenceTime;

	[Token(Token = "0x4000060")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private int referenceFramesLost;

	[Token(Token = "0x4000061")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private int referenceFramesReceived;

	[Token(Token = "0x4000062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[SerializeField]
	private GameObject speakerPrefab;

	[Token(Token = "0x4000063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private List<RemoteVoiceLink> cachedRemoteVoices;

	[Token(Token = "0x4000064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[SerializeField]
	[FormerlySerializedAs("PrimaryRecorder")]
	private Recorder primaryRecorder;

	[Token(Token = "0x4000065")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[SerializeField]
	[Tooltip("Use primary recorder directly by Voice Client")]
	private bool usePrimaryRecorder;

	[Token(Token = "0x4000066")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
	[SerializeField]
	[Tooltip("Use the protocol compatible with Photon Voice C++ API")]
	private bool cppCompatibilityMode;

	[Token(Token = "0x4000067")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private List<Speaker> linkedSpeakers;

	[Token(Token = "0x4000068")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private List<Recorder> recorders;

	[Token(Token = "0x4000069")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public AppSettings Settings;

	[Token(Token = "0x1700002D")]
	public virtual bool AlwaysUsePrimaryRecorder
	{
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x3F4AE40", Offset = "0x3F4AE40", VA = "0x3F4AE40", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002E")]
	protected ILogger Logger
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x3F3BB30", Offset = "0x3F3BB30", VA = "0x3F3BB30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002F")]
	public VoiceLogger VoiceLogger
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x3F4B2E0", Offset = "0x3F4B2E0", VA = "0x3F4B2E0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000030")]
	public new LoadBalancingTransport Client
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x3F4B300", Offset = "0x3F4B300", VA = "0x3F4B300")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000031")]
	public VoiceClient VoiceClient
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x3F456A0", Offset = "0x3F456A0", VA = "0x3F456A0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000032")]
	public ClientState ClientState
	{
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x3F3D610", Offset = "0x3F3D610", VA = "0x3F3D610")]
		get
		{
			return default(ClientState);
		}
	}

	[Token(Token = "0x17000033")]
	public float FramesReceivedPerSecond
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x3F4B310", Offset = "0x3F4B310", VA = "0x3F4B310")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x3F4B320", Offset = "0x3F4B320", VA = "0x3F4B320")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public float FramesLostPerSecond
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x3F4B330", Offset = "0x3F4B330", VA = "0x3F4B330")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x3F4B340", Offset = "0x3F4B340", VA = "0x3F4B340")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public float FramesLostPercent
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x3F4B350", Offset = "0x3F4B350", VA = "0x3F4B350")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x3F4B360", Offset = "0x3F4B360", VA = "0x3F4B360")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public GameObject SpeakerPrefab
	{
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x3F4B370", Offset = "0x3F4B370", VA = "0x3F4B370")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x3F4B380", Offset = "0x3F4B380", VA = "0x3F4B380")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public Recorder PrimaryRecorder
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x3F4B390", Offset = "0x3F4B390", VA = "0x3F4B390")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x3F4B3A0", Offset = "0x3F4B3A0", VA = "0x3F4B3A0")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public bool UsePrimaryRecorder
	{
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x3F4B3B0", Offset = "0x3F4B3B0", VA = "0x3F4B3B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	public string BestRegionSummaryInPreferences
	{
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x3F4B3C0", Offset = "0x3F4B3C0", VA = "0x3F4B3C0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x3F4B400", Offset = "0x3F4B400", VA = "0x3F4B400")]
		set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<Speaker> SpeakerLinked
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x3F4B020", Offset = "0x3F4B020", VA = "0x3F4B020")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x3F4B0D0", Offset = "0x3F4B0D0", VA = "0x3F4B0D0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event Action<RemoteVoiceLink> RemoteVoiceAdded
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x3F4B180", Offset = "0x3F4B180", VA = "0x3F4B180")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x3F4B230", Offset = "0x3F4B230", VA = "0x3F4B230")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x3F4AE50", Offset = "0x3F4AE50", VA = "0x3F4AE50")]
	private void Init()
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x3F4A020", Offset = "0x3F4A020", VA = "0x3F4A020", Slot = "7")]
	public virtual bool ConnectUsingSettings([Optional] AppSettings overwriteSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x3F4B450", Offset = "0x3F4B450", VA = "0x3F4B450")]
	public bool AddSpeaker(Speaker speaker, object userData)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3F4B9C0", Offset = "0x3F4B9C0", VA = "0x3F4B9C0", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3F4BD30", Offset = "0x3F4BD30", VA = "0x3F4BD30", Slot = "8")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x3F4BD60", Offset = "0x3F4BD60", VA = "0x3F4BD60", Slot = "9")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3F4BDA0", Offset = "0x3F4BDA0", VA = "0x3F4BDA0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3F3BD60", Offset = "0x3F3BD60", VA = "0x3F3BD60", Slot = "10")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x3F4BF80", Offset = "0x3F4BF80", VA = "0x3F4BF80", Slot = "11")]
	protected virtual Speaker InstantiateSpeakerForRemoteVoice(int playerId, byte voiceId, object userData)
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x3F4A600", Offset = "0x3F4A600", VA = "0x3F4A600")]
	public Speaker InstantiateSpeakerPrefab(GameObject parent, bool destroyOnRemove)
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x3F4BFE0", Offset = "0x3F4BFE0", VA = "0x3F4BFE0")]
	private void OnRemoteVoiceInfo(int channelId, int playerId, byte voiceId, VoiceInfo voiceInfo, ref RemoteVoiceOptions options)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x3F3CAB0", Offset = "0x3F3CAB0", VA = "0x3F3CAB0", Slot = "12")]
	protected virtual void OnVoiceStateChanged(ClientState fromState, ClientState toState)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x3F4BEC0", Offset = "0x3F4BEC0", VA = "0x3F4BEC0")]
	protected void CalcStatistics()
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x3F4B660", Offset = "0x3F4B660", VA = "0x3F4B660")]
	private void LinkSpeaker(Speaker speaker, RemoteVoiceLink remoteVoice)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x3F49D30", Offset = "0x3F49D30", VA = "0x3F49D30")]
	public bool AddRecorder(Recorder rec)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x3F45DF0", Offset = "0x3F45DF0", VA = "0x3F45DF0")]
	public void RemoveRecorder(Recorder rec)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x3F4C8A0", Offset = "0x3F4C8A0", VA = "0x3F4C8A0", Slot = "13")]
	protected virtual void OnOperationResponseReceived(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3F3DC20", Offset = "0x3F3DC20", VA = "0x3F3DC20")]
	public VoiceConnection()
	{
	}
}
