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
		[Address(RVA = "0x668280", Offset = "0x666880", VA = "0x180668280", Slot = "6")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002E")]
	protected ILogger Logger
	{
		[Token(Token = "0x60000A2")]
		[Address(RVA = "0x1D98210", Offset = "0x1D96810", VA = "0x181D98210")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x1700002F")]
	public VoiceLogger VoiceLogger
	{
		[Token(Token = "0x60000A3")]
		[Address(RVA = "0x1D98250", Offset = "0x1D96850", VA = "0x181D98250")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000030")]
	public new LoadBalancingTransport Client
	{
		[Token(Token = "0x60000A4")]
		[Address(RVA = "0xC7FB50", Offset = "0xC7E150", VA = "0x180C7FB50")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000031")]
	public VoiceClient VoiceClient
	{
		[Token(Token = "0x60000A5")]
		[Address(RVA = "0x1D98230", Offset = "0x1D96830", VA = "0x181D98230")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000032")]
	public ClientState ClientState
	{
		[Token(Token = "0x60000A6")]
		[Address(RVA = "0x1D981D0", Offset = "0x1D967D0", VA = "0x181D981D0")]
		get
		{
			return default(ClientState);
		}
	}

	[Token(Token = "0x17000033")]
	public float FramesReceivedPerSecond
	{
		[Token(Token = "0x60000A7")]
		[Address(RVA = "0x1D98200", Offset = "0x1D96800", VA = "0x181D98200")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000A8")]
		[Address(RVA = "0x1D98440", Offset = "0x1D96A40", VA = "0x181D98440")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000034")]
	public float FramesLostPerSecond
	{
		[Token(Token = "0x60000A9")]
		[Address(RVA = "0x1D981F0", Offset = "0x1D967F0", VA = "0x181D981F0")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AA")]
		[Address(RVA = "0x1D98430", Offset = "0x1D96A30", VA = "0x181D98430")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000035")]
	public float FramesLostPercent
	{
		[Token(Token = "0x60000AB")]
		[Address(RVA = "0xB5B950", Offset = "0xB59F50", VA = "0x180B5B950")]
		[CompilerGenerated]
		get
		{
			return default(float);
		}
		[Token(Token = "0x60000AC")]
		[Address(RVA = "0xB5BD90", Offset = "0xB5A390", VA = "0x180B5BD90")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x17000036")]
	public GameObject SpeakerPrefab
	{
		[Token(Token = "0x60000AD")]
		[Address(RVA = "0xB48770", Offset = "0xB46D70", VA = "0x180B48770")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000AE")]
		[Address(RVA = "0xB48780", Offset = "0xB46D80", VA = "0x180B48780")]
		set
		{
		}
	}

	[Token(Token = "0x17000037")]
	public Recorder PrimaryRecorder
	{
		[Token(Token = "0x60000AF")]
		[Address(RVA = "0x58A5D0", Offset = "0x588BD0", VA = "0x18058A5D0")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B0")]
		[Address(RVA = "0x58A960", Offset = "0x588F60", VA = "0x18058A960")]
		set
		{
		}
	}

	[Token(Token = "0x17000038")]
	public bool UsePrimaryRecorder
	{
		[Token(Token = "0x60000B1")]
		[Address(RVA = "0x1C40680", Offset = "0x1C3EC80", VA = "0x181C40680")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000039")]
	public string BestRegionSummaryInPreferences
	{
		[Token(Token = "0x60000B2")]
		[Address(RVA = "0x1D98190", Offset = "0x1D96790", VA = "0x181D98190")]
		get
		{
			return null;
		}
		[Token(Token = "0x60000B3")]
		[Address(RVA = "0x1D983D0", Offset = "0x1D969D0", VA = "0x181D983D0")]
		set
		{
		}
	}

	[Token(Token = "0x14000003")]
	public event Action<Speaker> SpeakerLinked
	{
		[Token(Token = "0x600009E")]
		[Address(RVA = "0x1D980E0", Offset = "0x1D966E0", VA = "0x181D980E0")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x600009F")]
		[Address(RVA = "0x1D98320", Offset = "0x1D96920", VA = "0x181D98320")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x14000004")]
	public event Action<RemoteVoiceLink> RemoteVoiceAdded
	{
		[Token(Token = "0x60000A0")]
		[Address(RVA = "0x1D98030", Offset = "0x1D96630", VA = "0x181D98030")]
		[CompilerGenerated]
		add
		{
		}
		[Token(Token = "0x60000A1")]
		[Address(RVA = "0x1D98270", Offset = "0x1D96870", VA = "0x181D98270")]
		[CompilerGenerated]
		remove
		{
		}
	}

	[Token(Token = "0x600009D")]
	[Address(RVA = "0x1D96540", Offset = "0x1D94B40", VA = "0x181D96540")]
	private void Init()
	{
	}

	[Token(Token = "0x60000B4")]
	[Address(RVA = "0x1D96160", Offset = "0x1D94760", VA = "0x181D96160", Slot = "7")]
	public virtual bool ConnectUsingSettings([Optional] AppSettings overwriteSettings)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B5")]
	[Address(RVA = "0x1D95D30", Offset = "0x1D94330", VA = "0x181D95D30")]
	public bool AddSpeaker(Speaker speaker, object userData)
	{
		return default(bool);
	}

	[Token(Token = "0x60000B6")]
	[Address(RVA = "0x1D95F00", Offset = "0x1D94500", VA = "0x181D95F00", Slot = "4")]
	protected override void Awake()
	{
	}

	[Token(Token = "0x60000B7")]
	[Address(RVA = "0x1D97EA0", Offset = "0x1D964A0", VA = "0x181D97EA0", Slot = "8")]
	protected virtual void Update()
	{
	}

	[Token(Token = "0x60000B8")]
	[Address(RVA = "0x1D964F0", Offset = "0x1D94AF0", VA = "0x181D964F0", Slot = "9")]
	protected virtual void FixedUpdate()
	{
	}

	[Token(Token = "0x60000B9")]
	[Address(RVA = "0x1D96B90", Offset = "0x1D95190", VA = "0x181D96B90")]
	private void LateUpdate()
	{
	}

	[Token(Token = "0x60000BA")]
	[Address(RVA = "0x1D96F50", Offset = "0x1D95550", VA = "0x181D96F50", Slot = "10")]
	protected virtual void OnDestroy()
	{
	}

	[Token(Token = "0x60000BB")]
	[Address(RVA = "0x1D96740", Offset = "0x1D94D40", VA = "0x181D96740", Slot = "11")]
	protected virtual Speaker InstantiateSpeakerForRemoteVoice(int playerId, byte voiceId, object userData)
	{
		return null;
	}

	[Token(Token = "0x60000BC")]
	[Address(RVA = "0x1D96790", Offset = "0x1D94D90", VA = "0x181D96790")]
	public Speaker InstantiateSpeakerPrefab(GameObject parent, bool destroyOnRemove)
	{
		return null;
	}

	[Token(Token = "0x60000BD")]
	[Address(RVA = "0x1D97290", Offset = "0x1D95890", VA = "0x181D97290")]
	private void OnRemoteVoiceInfo(int channelId, int playerId, byte voiceId, VoiceInfo voiceInfo, ref RemoteVoiceOptions options)
	{
	}

	[Token(Token = "0x60000BE")]
	[Address(RVA = "0x1D97A20", Offset = "0x1D96020", VA = "0x181D97A20", Slot = "12")]
	protected virtual void OnVoiceStateChanged(ClientState fromState, ClientState toState)
	{
	}

	[Token(Token = "0x60000BF")]
	[Address(RVA = "0x1D96060", Offset = "0x1D94660", VA = "0x181D96060")]
	protected void CalcStatistics()
	{
	}

	[Token(Token = "0x60000C0")]
	[Address(RVA = "0x1D96CF0", Offset = "0x1D952F0", VA = "0x181D96CF0")]
	private void LinkSpeaker(Speaker speaker, RemoteVoiceLink remoteVoice)
	{
	}

	[Token(Token = "0x60000C1")]
	[Address(RVA = "0x1D95A40", Offset = "0x1D94040", VA = "0x181D95A40")]
	public bool AddRecorder(Recorder rec)
	{
		return default(bool);
	}

	[Token(Token = "0x60000C2")]
	[Address(RVA = "0x1D97DF0", Offset = "0x1D963F0", VA = "0x181D97DF0")]
	public void RemoveRecorder(Recorder rec)
	{
	}

	[Token(Token = "0x60000C3")]
	[Address(RVA = "0x1D97090", Offset = "0x1D95690", VA = "0x181D97090", Slot = "13")]
	protected virtual void OnOperationResponseReceived(OperationResponse operationResponse)
	{
	}

	[Token(Token = "0x60000C4")]
	[Address(RVA = "0x1D97ED0", Offset = "0x1D964D0", VA = "0x181D97ED0")]
	public VoiceConnection()
	{
	}
}
