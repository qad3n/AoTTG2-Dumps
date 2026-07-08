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
		[Address(RVA = "0x3C58890", Offset = "0x3C58890", VA = "0x3C58890", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002E")]
	protected ILogger Logger
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0x3C49580", Offset = "0x3C49580", VA = "0x3C49580")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002F")]
	public VoiceLogger VoiceLogger
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x3C58D30", Offset = "0x3C58D30", VA = "0x3C58D30")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000030")]
	public new LoadBalancingTransport Client
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x3C58D50", Offset = "0x3C58D50", VA = "0x3C58D50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000031")]
	public VoiceClient VoiceClient
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x3C530F0", Offset = "0x3C530F0", VA = "0x3C530F0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000032")]
	public ClientState ClientState
	{
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x3C4B060", Offset = "0x3C4B060", VA = "0x3C4B060")]
		get
		{
			return default(ClientState);
		}
	}

	[Token(Token = "0x17000033")]
	public float FramesReceivedPerSecond
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x3C58D60", Offset = "0x3C58D60", VA = "0x3C58D60")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x3C58D70", Offset = "0x3C58D70", VA = "0x3C58D70")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public float FramesLostPerSecond
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0x3C58D80", Offset = "0x3C58D80", VA = "0x3C58D80")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0x3C58D90", Offset = "0x3C58D90", VA = "0x3C58D90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public float FramesLostPercent
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0x3C58DA0", Offset = "0x3C58DA0", VA = "0x3C58DA0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0x3C58DB0", Offset = "0x3C58DB0", VA = "0x3C58DB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public GameObject SpeakerPrefab
	{
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x3C58DC0", Offset = "0x3C58DC0", VA = "0x3C58DC0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x3C58DD0", Offset = "0x3C58DD0", VA = "0x3C58DD0")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public Recorder PrimaryRecorder
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x3C58DE0", Offset = "0x3C58DE0", VA = "0x3C58DE0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x3C58DF0", Offset = "0x3C58DF0", VA = "0x3C58DF0")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public bool UsePrimaryRecorder
	{
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x3C58E00", Offset = "0x3C58E00", VA = "0x3C58E00")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	public string BestRegionSummaryInPreferences
	{
		[Token(Token = "0x60000B4")]
		[Address(RVA = "0x3C58E10", Offset = "0x3C58E10", VA = "0x3C58E10")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x3C58E50", Offset = "0x3C58E50", VA = "0x3C58E50")]
		set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<Speaker> SpeakerLinked
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x3C58A70", Offset = "0x3C58A70", VA = "0x3C58A70")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x3C58B20", Offset = "0x3C58B20", VA = "0x3C58B20")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event Action<RemoteVoiceLink> RemoteVoiceAdded
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x3C58BD0", Offset = "0x3C58BD0", VA = "0x3C58BD0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x3C58C80", Offset = "0x3C58C80", VA = "0x3C58C80")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600009F")]
	[Address(RVA = "0x3C588A0", Offset = "0x3C588A0", VA = "0x3C588A0")]
	private void Init()
	{
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x3C57A70", Offset = "0x3C57A70", VA = "0x3C57A70", Slot = "7")]
	public virtual bool ConnectUsingSettings([Optional] AppSettings overwriteSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x3C58EA0", Offset = "0x3C58EA0", VA = "0x3C58EA0")]
	public bool AddSpeaker(Speaker speaker, object userData)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x3C59410", Offset = "0x3C59410", VA = "0x3C59410", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x3C59780", Offset = "0x3C59780", VA = "0x3C59780", Slot = "8")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x3C597B0", Offset = "0x3C597B0", VA = "0x3C597B0", Slot = "9")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x3C597F0", Offset = "0x3C597F0", VA = "0x3C597F0")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x3C497B0", Offset = "0x3C497B0", VA = "0x3C497B0", Slot = "10")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x3C599D0", Offset = "0x3C599D0", VA = "0x3C599D0", Slot = "11")]
	protected virtual Speaker InstantiateSpeakerForRemoteVoice(int playerId, byte voiceId, object userData)
	{
		return null;
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x3C58050", Offset = "0x3C58050", VA = "0x3C58050")]
	public Speaker InstantiateSpeakerPrefab(GameObject parent, bool destroyOnRemove)
	{
		return null;
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x3C59A30", Offset = "0x3C59A30", VA = "0x3C59A30")]
	private void OnRemoteVoiceInfo(int channelId, int playerId, byte voiceId, VoiceInfo voiceInfo, ref RemoteVoiceOptions options)
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x3C4A500", Offset = "0x3C4A500", VA = "0x3C4A500", Slot = "12")]
	protected virtual void OnVoiceStateChanged(ClientState fromState, ClientState toState)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x3C59910", Offset = "0x3C59910", VA = "0x3C59910")]
	protected void CalcStatistics()
	{
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x3C590B0", Offset = "0x3C590B0", VA = "0x3C590B0")]
	private void LinkSpeaker(Speaker speaker, RemoteVoiceLink remoteVoice)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x3C57780", Offset = "0x3C57780", VA = "0x3C57780")]
	public bool AddRecorder(Recorder rec)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x3C53840", Offset = "0x3C53840", VA = "0x3C53840")]
	public void RemoveRecorder(Recorder rec)
	{
	}

	[Token(Token = "0x60000C5")]
	[Address(RVA = "0x3C5A2F0", Offset = "0x3C5A2F0", VA = "0x3C5A2F0", Slot = "13")]
	protected virtual void OnOperationResponseReceived(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000C6")]
	[Address(RVA = "0x3C4B670", Offset = "0x3C4B670", VA = "0x3C4B670")]
	public VoiceConnection()
	{
	}
}
