// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.VoiceClient
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceClient.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200006E")]
public class VoiceClient : IDisposable
{
	[Token(Token = "0x200006F")]
	public delegate void RemoteVoiceInfoDelegate(int channelId, int playerId, byte voiceId, VoiceInfo voiceInfo, ref RemoteVoiceOptions options);

	[Token(Token = "0x2000070")]
	public struct CreateOptions
	{
		[Token(Token = "0x40001D7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public byte VoiceIDMin;

		[Token(Token = "0x40001D8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
		public byte VoiceIDMax;

		[Token(Token = "0x40001D9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static CreateOptions Default;
	}

	[Token(Token = "0x2000077")]
	[CompilerGenerated]
	private sealed class _003Cget_RemoteVoiceInfos_003Ed__82 : IEnumerable<RemoteVoiceInfo>, IEnumerable, IEnumerator<RemoteVoiceInfo>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001E7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001E8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private RemoteVoiceInfo _003C_003E2__current;

		[Token(Token = "0x40001E9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001EA")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public VoiceClient _003C_003E4__this;

		[Token(Token = "0x40001EB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Dictionary<int, Dictionary<byte, RemoteVoice>>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x40001EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private KeyValuePair<int, Dictionary<byte, RemoteVoice>> _003CplayerVoices_003E5__3;

		[Token(Token = "0x40001ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private Dictionary<byte, RemoteVoice>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x170000BA")]
		private RemoteVoiceInfo System_002ECollections_002EGeneric_002EIEnumerator_003CPhoton_002EVoice_002ERemoteVoiceInfo_003E_002ECurrent
		{
			[Token(Token = "0x60002B5")]
			[Address(RVA = "0x5719450", Offset = "0x5718450", VA = "0x5719450", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000BB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002B7")]
			[Address(RVA = "0x57194A0", Offset = "0x57184A0", VA = "0x57194A0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x5711FD0", Offset = "0x5710FD0", VA = "0x5711FD0")]
		[DebuggerHidden]
		public _003Cget_RemoteVoiceInfos_003Ed__82(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x5718E30", Offset = "0x5717E30", VA = "0x5718E30", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x5718F60", Offset = "0x5717F60", VA = "0x5718F60", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x5719410", Offset = "0x5718410", VA = "0x5719410")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x57193D0", Offset = "0x57183D0", VA = "0x57193D0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x5719460", Offset = "0x5718460", VA = "0x5719460", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x57194B0", Offset = "0x57184B0", VA = "0x57194B0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<RemoteVoiceInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CPhoton_002EVoice_002ERemoteVoiceInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x5719550", Offset = "0x5718550", VA = "0x5719550", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001BB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IVoiceTransport transport;

	[Token(Token = "0x40001BC")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal ILogger logger;

	[Token(Token = "0x40001CE")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private int prevRtt;

	[Token(Token = "0x40001CF")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Dictionary<Codec, int> remoteVoiceDelayFramesPerCodec;

	[Token(Token = "0x40001D0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private byte voiceIDMin;

	[Token(Token = "0x40001D1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x79")]
	private byte voiceIDMax;

	[Token(Token = "0x40001D2")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7A")]
	private byte voiceIdLast;

	[Token(Token = "0x40001D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Dictionary<byte, LocalVoice> localVoices;

	[Token(Token = "0x40001D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Dictionary<int, List<LocalVoice>> localVoicesPerChannel;

	[Token(Token = "0x40001D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Dictionary<int, Dictionary<byte, RemoteVoice>> remoteVoices;

	[Token(Token = "0x40001D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Random rnd;

	[Token(Token = "0x170000A4")]
	public bool ThreadingEnabled
	{
		[Token(Token = "0x6000259")]
		[Address(RVA = "0x57118D0", Offset = "0x57108D0", VA = "0x57118D0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600025A")]
		[Address(RVA = "0x57118E0", Offset = "0x57108E0", VA = "0x57118E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public int EventsLost
	{
		[Token(Token = "0x600025B")]
		[Address(RVA = "0x57118F0", Offset = "0x57108F0", VA = "0x57118F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600025C")]
		[Address(RVA = "0x5711900", Offset = "0x5710900", VA = "0x5711900")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public int FramesLost
	{
		[Token(Token = "0x600025D")]
		[Address(RVA = "0x5711910", Offset = "0x5710910", VA = "0x5711910")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x5711920", Offset = "0x5710920", VA = "0x5711920")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public int FramesFragPart
	{
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x5711930", Offset = "0x5710930", VA = "0x5711930")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x5711940", Offset = "0x5710940", VA = "0x5711940")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public int FramesRecovered
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x5711950", Offset = "0x5710950", VA = "0x5711950")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x5711960", Offset = "0x5710960", VA = "0x5711960")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public int FramesMiss
	{
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x5711970", Offset = "0x5710970", VA = "0x5711970")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x5711980", Offset = "0x5710980", VA = "0x5711980")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public int FramesLate
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x5711990", Offset = "0x5710990", VA = "0x5711990")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x57119A0", Offset = "0x57109A0", VA = "0x57119A0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int FramesLateUsed
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x57119B0", Offset = "0x57109B0", VA = "0x57119B0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AC")]
	public int FramesReceived
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x57119C0", Offset = "0x57109C0", VA = "0x57119C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x57119D0", Offset = "0x57109D0", VA = "0x57119D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int FramesReceivedFEC
	{
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x57119E0", Offset = "0x57109E0", VA = "0x57119E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x57119F0", Offset = "0x57109F0", VA = "0x57119F0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public int FramesTryFEC
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x5711A00", Offset = "0x5710A00", VA = "0x5711A00")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x5711A10", Offset = "0x5710A10", VA = "0x5711A10")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public int FramesReceivedFragments
	{
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x5711A20", Offset = "0x5710A20", VA = "0x5711A20")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x5711A30", Offset = "0x5710A30", VA = "0x5711A30")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public int FramesReceivedFragmented
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x5711A40", Offset = "0x5710A40", VA = "0x5711A40")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x5711A50", Offset = "0x5710A50", VA = "0x5711A50")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public int FramesSent
	{
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x5711A60", Offset = "0x5710A60", VA = "0x5711A60")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	public int FramesSentBytes
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x5711BC0", Offset = "0x5710BC0", VA = "0x5711BC0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int RoundTripTime
	{
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x5711D20", Offset = "0x5710D20", VA = "0x5711D20")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x5711D30", Offset = "0x5710D30", VA = "0x5711D30")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public int RoundTripTimeVariance
	{
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x5711D40", Offset = "0x5710D40", VA = "0x5711D40")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x5711D50", Offset = "0x5710D50", VA = "0x5711D50")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool SuppressInfoDuplicateWarning
	{
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x5711D60", Offset = "0x5710D60", VA = "0x5711D60")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x5711D70", Offset = "0x5710D70", VA = "0x5711D70")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	public RemoteVoiceInfoDelegate OnRemoteVoiceInfoAction
	{
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x5711D80", Offset = "0x5710D80", VA = "0x5711D80")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x5711D90", Offset = "0x5710D90", VA = "0x5711D90")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	public int DebugLostPercent
	{
		[Token(Token = "0x600027C")]
		[Address(RVA = "0x5711DA0", Offset = "0x5710DA0", VA = "0x5711DA0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600027D")]
		[Address(RVA = "0x5711DB0", Offset = "0x5710DB0", VA = "0x5711DB0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public IEnumerable<LocalVoice> LocalVoices
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x5711DC0", Offset = "0x5710DC0", VA = "0x5711DC0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B9")]
	public IEnumerable<RemoteVoiceInfo> RemoteVoiceInfos
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x5711F60", Offset = "0x5710F60", VA = "0x5711F60")]
		[IteratorStateMachine(typeof(_003Cget_RemoteVoiceInfos_003Ed__82))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x5711E80", Offset = "0x5710E80", VA = "0x5711E80")]
	public IEnumerable<LocalVoice> LocalVoicesInChannel(int channelId)
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x5712000", Offset = "0x5711000", VA = "0x5712000")]
	public void LogSpacingProfiles()
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x5712850", Offset = "0x5711850", VA = "0x5712850")]
	public void LogStats()
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x5712DB0", Offset = "0x5711DB0", VA = "0x5712DB0")]
	public void SetRemoteVoiceDelayFrames(Codec codec, int delayFrames)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x57130B0", Offset = "0x57120B0", VA = "0x57130B0")]
	public VoiceClient(IVoiceTransport transport, ILogger logger, [Optional] CreateOptions opt)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x5713320", Offset = "0x5712320", VA = "0x5713320")]
	public void Service()
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x5713480", Offset = "0x5712480", VA = "0x5713480")]
	private LocalVoice createLocalVoice(int channelId, Func<byte, int, LocalVoice> voiceFactory)
	{
		return null;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x5713B60", Offset = "0x5712B60", VA = "0x5713B60")]
	public LocalVoice CreateLocalVoice(VoiceInfo voiceInfo, int channelId, [Optional] VoiceCreateOptions options)
	{
		return null;
	}

	[Token(Token = "0x6000288")]
	public LocalVoiceAudio<T> CreateLocalVoiceAudio<T>(VoiceInfo voiceInfo, IAudioDesc audioSourceDesc, int channelId, [Optional] VoiceCreateOptions options)
	{
		return null;
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x5713C80", Offset = "0x5712C80", VA = "0x5713C80")]
	public LocalVoice CreateLocalVoiceAudioFromSource(VoiceInfo voiceInfo, IAudioDesc source, AudioSampleType sampleType, int channelId, [Optional] VoiceCreateOptions options)
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x5714F00", Offset = "0x5713F00", VA = "0x5714F00")]
	private byte idInc(byte id)
	{
		return default(byte);
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x57136E0", Offset = "0x57126E0", VA = "0x57136E0")]
	private byte getNewVoiceId()
	{
		return default(byte);
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x5713930", Offset = "0x5712930", VA = "0x5713930")]
	private void addVoice(byte newId, int channelId, LocalVoice v)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x570A680", Offset = "0x5709680", VA = "0x570A680")]
	public void RemoveLocalVoice(LocalVoice voice)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x5714F10", Offset = "0x5713F10", VA = "0x5714F10")]
	private void clearRemoteVoices()
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x57153B0", Offset = "0x57143B0", VA = "0x57153B0")]
	private void clearRemoteVoicesInChannel(int channelId)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x5715AF0", Offset = "0x5714AF0", VA = "0x5715AF0")]
	private void clearRemoteVoicesInChannelForPlayer(int channelId, int playerId)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x5715F30", Offset = "0x5714F30", VA = "0x5715F30")]
	public void onJoinChannel(int channelId)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x57160C0", Offset = "0x57150C0", VA = "0x57160C0")]
	public void onJoinAllChannels()
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x5716220", Offset = "0x5715220", VA = "0x5716220")]
	public void onLeaveChannel(int channel)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x5716230", Offset = "0x5715230", VA = "0x5716230")]
	public void onLeaveAllChannels()
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x5716240", Offset = "0x5715240", VA = "0x5716240")]
	public void onPlayerJoin(int channelId, int playerId)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x57163D0", Offset = "0x57153D0", VA = "0x57163D0")]
	public void onPlayerJoin(int playerId)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x5716530", Offset = "0x5715530", VA = "0x5716530")]
	public void onPlayerLeave(int channelId, int playerId)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x5716540", Offset = "0x5715540", VA = "0x5716540")]
	public void onPlayerLeave(int playerId)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x5716960", Offset = "0x5715960", VA = "0x5716960")]
	public void onVoiceInfo(int channelId, int playerId, byte voiceId, byte eventNumber, VoiceInfo info)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x5717510", Offset = "0x5716510", VA = "0x5717510")]
	public void onVoiceRemove(int playerId, byte[] voiceIds)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x5717CE0", Offset = "0x5716CE0", VA = "0x5717CE0")]
	public void onFrame(int playerId, byte voiceId, byte evNumber, ref FrameBuffer receivedBytes, bool isLocalPlayer)
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x5708340", Offset = "0x5707340", VA = "0x5708340")]
	internal string channelStr(int channelId)
	{
		return null;
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x5717400", Offset = "0x5716400", VA = "0x5717400")]
	internal string playerStr(int playerId)
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x5718360", Offset = "0x5717360", VA = "0x5718360", Slot = "4")]
	public void Dispose()
	{
	}
}
