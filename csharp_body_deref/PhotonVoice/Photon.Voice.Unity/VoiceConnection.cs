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

[Token(Token = "0x2000010")]
[DisallowMultipleComponent]
public class VoiceConnection : ConnectionHandler
{
	[Token(Token = "0x4000051")]
	public const int ChannelAudio = 1;

	[Token(Token = "0x4000052")]
	public const int ChannelVideo = 2;

	[Token(Token = "0x4000053")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
	private VoiceComponentImpl voiceComponentImpl;

	[Token(Token = "0x4000054")]
	private const string PlayerPrefsKey = "VoiceCloudBestRegion";

	[Token(Token = "0x4000055")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x48")]
	private LoadBalancingTransport client;

	[Token(Token = "0x4000056")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x50")]
	private SupportLogger supportLoggerComponent;

	[Token(Token = "0x4000057")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
	[SerializeField]
	private bool runInBackground;

	[Token(Token = "0x4000058")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x5C")]
	[SerializeField]
	private int statsResetInterval;

	[Token(Token = "0x4000059")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x60")]
	private int nextStatsTickCount;

	[Token(Token = "0x400005A")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x64")]
	private float statsReferenceTime;

	[Token(Token = "0x400005B")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
	private int referenceFramesLost;

	[Token(Token = "0x400005C")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private int referenceFramesReceived;

	[Token(Token = "0x400005D")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	[SerializeField]
	private GameObject speakerPrefab;

	[Token(Token = "0x400005E")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private List<RemoteVoiceLink> cachedRemoteVoices;

	[Token(Token = "0x400005F")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	[SerializeField]
	[FormerlySerializedAs("PrimaryRecorder")]
	private Recorder primaryRecorder;

	[Token(Token = "0x4000060")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	[SerializeField]
	[Tooltip("Use primary recorder directly by Voice Client")]
	private bool usePrimaryRecorder;

	[Token(Token = "0x4000061")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x89")]
	[SerializeField]
	[Tooltip("Use the protocol compatible with Photon Voice C++ API")]
	private bool cppCompatibilityMode;

	[Token(Token = "0x4000062")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private List<Speaker> linkedSpeakers;

	[Token(Token = "0x4000063")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private List<Recorder> recorders;

	[Token(Token = "0x4000064")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA0")]
	public AppSettings Settings;

	[Token(Token = "0x4000065")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xA8")]
	[CompilerGenerated]
	private Action<Speaker> m_SpeakerLinked;

	[Token(Token = "0x4000066")]
	[Il2CppDummyDll.FieldOffset(Offset = "0xB0")]
	[CompilerGenerated]
	private Action<RemoteVoiceLink> m_RemoteVoiceAdded;

	[Token(Token = "0x1700002D")]
	public virtual bool AlwaysUsePrimaryRecorder
	{
		[Token(Token = "0x600009C")]
		[Address(RVA = "0x57348C0", Offset = "0x57338C0", VA = "0x57348C0", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002E")]
	protected ILogger Logger
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x5725540", Offset = "0x5724540", VA = "0x5725540")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002F")]
	public VoiceLogger VoiceLogger
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x5734D60", Offset = "0x5733D60", VA = "0x5734D60")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000030")]
	public new LoadBalancingTransport Client
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x5734D80", Offset = "0x5733D80", VA = "0x5734D80")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000031")]
	public VoiceClient VoiceClient
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x572F0D0", Offset = "0x572E0D0", VA = "0x572F0D0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000032")]
	public ClientState ClientState
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x5727020", Offset = "0x5726020", VA = "0x5727020")]
		get
		{
			return default(ClientState);
		}
	}

	[Token(Token = "0x17000033")]
	public float FramesReceivedPerSecond
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x5734D90", Offset = "0x5733D90", VA = "0x5734D90")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x5734DA0", Offset = "0x5733DA0", VA = "0x5734DA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public float FramesLostPerSecond
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x5734DB0", Offset = "0x5733DB0", VA = "0x5734DB0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x5734DC0", Offset = "0x5733DC0", VA = "0x5734DC0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public float FramesLostPercent
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x5734DD0", Offset = "0x5733DD0", VA = "0x5734DD0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x5734DE0", Offset = "0x5733DE0", VA = "0x5734DE0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public GameObject SpeakerPrefab
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x5734DF0", Offset = "0x5733DF0", VA = "0x5734DF0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x5734E00", Offset = "0x5733E00", VA = "0x5734E00")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public Recorder PrimaryRecorder
	{
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x5734E10", Offset = "0x5733E10", VA = "0x5734E10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x5734E20", Offset = "0x5733E20", VA = "0x5734E20")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public bool UsePrimaryRecorder
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x5734E30", Offset = "0x5733E30", VA = "0x5734E30")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	public string BestRegionSummaryInPreferences
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x5734E40", Offset = "0x5733E40", VA = "0x5734E40")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x5734E80", Offset = "0x5733E80", VA = "0x5734E80")]
		set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<Speaker> SpeakerLinked
	{
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x5734AA0", Offset = "0x5733AA0", VA = "0x5734AA0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x5734B50", Offset = "0x5733B50", VA = "0x5734B50")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event Action<RemoteVoiceLink> RemoteVoiceAdded
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x5734C00", Offset = "0x5733C00", VA = "0x5734C00")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x5734CB0", Offset = "0x5733CB0", VA = "0x5734CB0")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x57348D0", Offset = "0x57338D0", VA = "0x57348D0")]
	private void Init()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x5733AA0", Offset = "0x5732AA0", VA = "0x5733AA0", Slot = "7")]
	public virtual bool ConnectUsingSettings([Optional] AppSettings overwriteSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x5734ED0", Offset = "0x5733ED0", VA = "0x5734ED0")]
	public bool AddSpeaker(Speaker speaker, object userData)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x5735410", Offset = "0x5734410", VA = "0x5735410", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x5735780", Offset = "0x5734780", VA = "0x5735780", Slot = "8")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x57357B0", Offset = "0x57347B0", VA = "0x57357B0", Slot = "9")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x57357F0", Offset = "0x57347F0", VA = "0x57357F0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x5725770", Offset = "0x5724770", VA = "0x5725770", Slot = "10")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x57359D0", Offset = "0x57349D0", VA = "0x57359D0", Slot = "11")]
	protected virtual Speaker InstantiateSpeakerForRemoteVoice(int playerId, byte voiceId, object userData)
	{
		return null;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x5734080", Offset = "0x5733080", VA = "0x5734080")]
	public Speaker InstantiateSpeakerPrefab(GameObject parent, bool destroyOnRemove)
	{
		return null;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x5735A30", Offset = "0x5734A30", VA = "0x5735A30")]
	private void OnRemoteVoiceInfo(int channelId, int playerId, byte voiceId, VoiceInfo voiceInfo, ref RemoteVoiceOptions options)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x57264D0", Offset = "0x57254D0", VA = "0x57264D0", Slot = "12")]
	protected virtual void OnVoiceStateChanged(ClientState fromState, ClientState toState)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x5735910", Offset = "0x5734910", VA = "0x5735910")]
	protected void CalcStatistics()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x57350E0", Offset = "0x57340E0", VA = "0x57350E0")]
	private void LinkSpeaker(Speaker speaker, RemoteVoiceLink remoteVoice)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x57337B0", Offset = "0x57327B0", VA = "0x57337B0")]
	public bool AddRecorder(Recorder rec)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x572F8F0", Offset = "0x572E8F0", VA = "0x572F8F0")]
	public void RemoveRecorder(Recorder rec)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x57362D0", Offset = "0x57352D0", VA = "0x57362D0", Slot = "13")]
	protected virtual void OnOperationResponseReceived(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x5727630", Offset = "0x5726630", VA = "0x5727630")]
	public VoiceConnection()
	{
	}
}
