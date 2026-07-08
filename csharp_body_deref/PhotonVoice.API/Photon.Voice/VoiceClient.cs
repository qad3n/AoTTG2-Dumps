using System;
using System.Collections;
using System.Collections.Generic;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000070")]
public class VoiceClient : IDisposable
{
	[Token(Token = "0x2000071")]
	public delegate void RemoteVoiceInfoDelegate(int channelId, int playerId, byte voiceId, VoiceInfo voiceInfo, ref RemoteVoiceOptions options);

	[Token(Token = "0x2000072")]
	public struct CreateOptions
	{
		[Token(Token = "0x40001DC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public byte VoiceIDMin;

		[Token(Token = "0x40001DD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x1")]
		public byte VoiceIDMax;

		[Token(Token = "0x40001DE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public static CreateOptions Default;
	}

	[Token(Token = "0x2000079")]
	[CompilerGenerated]
	private sealed class _003Cget_RemoteVoiceInfos_003Ed__82 : IEnumerable<RemoteVoiceInfo>, IEnumerable, IEnumerator<RemoteVoiceInfo>, IEnumerator, IDisposable
	{
		[Token(Token = "0x40001EC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
		private int _003C_003E1__state;

		[Token(Token = "0x40001ED")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
		private RemoteVoiceInfo _003C_003E2__current;

		[Token(Token = "0x40001EE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x20")]
		private int _003C_003El__initialThreadId;

		[Token(Token = "0x40001EF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x28")]
		public VoiceClient _003C_003E4__this;

		[Token(Token = "0x40001F0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x30")]
		private Dictionary<int, Dictionary<byte, RemoteVoice>>.Enumerator _003C_003E7__wrap1;

		[Token(Token = "0x40001F1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x58")]
		private KeyValuePair<int, Dictionary<byte, RemoteVoice>> _003CplayerVoices_003E5__3;

		[Token(Token = "0x40001F2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x68")]
		private Dictionary<byte, RemoteVoice>.Enumerator _003C_003E7__wrap3;

		[Token(Token = "0x170000BA")]
		private RemoteVoiceInfo System_002ECollections_002EGeneric_002EIEnumerator_003CPhoton_002EVoice_002ERemoteVoiceInfo_003E_002ECurrent
		{
			[Token(Token = "0x60002B7")]
			[Address(RVA = "0x3C39770", Offset = "0x3C39770", VA = "0x3C39770", Slot = "6")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x170000BB")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60002B9")]
			[Address(RVA = "0x3C397C0", Offset = "0x3C397C0", VA = "0x3C397C0", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x3C31D30", Offset = "0x3C31D30", VA = "0x3C31D30")]
		[DebuggerHidden]
		public _003Cget_RemoteVoiceInfos_003Ed__82(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x3C39100", Offset = "0x3C39100", VA = "0x3C39100", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x3C39240", Offset = "0x3C39240", VA = "0x3C39240", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x3C39730", Offset = "0x3C39730", VA = "0x3C39730")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x3C396F0", Offset = "0x3C396F0", VA = "0x3C396F0")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x3C39780", Offset = "0x3C39780", VA = "0x3C39780", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60002BA")]
		[Address(RVA = "0x3C397D0", Offset = "0x3C397D0", VA = "0x3C397D0", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<RemoteVoiceInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CPhoton_002EVoice_002ERemoteVoiceInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60002BB")]
		[Address(RVA = "0x3C39870", Offset = "0x3C39870", VA = "0x3C39870", Slot = "5")]
		[DebuggerHidden]
		private IEnumerator System_002ECollections_002EIEnumerable_002EGetEnumerator()
		{
			return null;
		}
	}

	[Token(Token = "0x40001C0")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x10")]
	internal IVoiceTransport transport;

	[Token(Token = "0x40001C1")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x18")]
	internal ILogger logger;

	[Token(Token = "0x40001D3")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x6C")]
	private int prevRtt;

	[Token(Token = "0x40001D4")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x70")]
	private Dictionary<Codec, int> remoteVoiceDelayFramesPerCodec;

	[Token(Token = "0x40001D5")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x78")]
	private byte voiceIDMin;

	[Token(Token = "0x40001D6")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x79")]
	private byte voiceIDMax;

	[Token(Token = "0x40001D7")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x7A")]
	private byte voiceIdLast;

	[Token(Token = "0x40001D8")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x80")]
	private Dictionary<byte, LocalVoice> localVoices;

	[Token(Token = "0x40001D9")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x88")]
	private Dictionary<int, List<LocalVoice>> localVoicesPerChannel;

	[Token(Token = "0x40001DA")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x90")]
	private Dictionary<int, Dictionary<byte, RemoteVoice>> remoteVoices;

	[Token(Token = "0x40001DB")]
	[Il2CppDummyDll.FieldOffset(Offset = "0x98")]
	private Random rnd;

	[Token(Token = "0x170000A4")]
	public bool ThreadingEnabled
	{
		[Token(Token = "0x600025B")]
		[Address(RVA = "0x3C315E0", Offset = "0x3C315E0", VA = "0x3C315E0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600025C")]
		[Address(RVA = "0x3C315F0", Offset = "0x3C315F0", VA = "0x3C315F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public int EventsLost
	{
		[Token(Token = "0x600025D")]
		[Address(RVA = "0x3C31600", Offset = "0x3C31600", VA = "0x3C31600")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x3C31610", Offset = "0x3C31610", VA = "0x3C31610")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public int FramesLost
	{
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x3C31620", Offset = "0x3C31620", VA = "0x3C31620")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x3C31630", Offset = "0x3C31630", VA = "0x3C31630")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public int FramesFragPart
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x3C31640", Offset = "0x3C31640", VA = "0x3C31640")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x3C31650", Offset = "0x3C31650", VA = "0x3C31650")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public int FramesRecovered
	{
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x3C31660", Offset = "0x3C31660", VA = "0x3C31660")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x3C31670", Offset = "0x3C31670", VA = "0x3C31670")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public int FramesMiss
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x3C31680", Offset = "0x3C31680", VA = "0x3C31680")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x3C31690", Offset = "0x3C31690", VA = "0x3C31690")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public int FramesLate
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x3C316A0", Offset = "0x3C316A0", VA = "0x3C316A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x3C316B0", Offset = "0x3C316B0", VA = "0x3C316B0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int FramesLateUsed
	{
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x3C316C0", Offset = "0x3C316C0", VA = "0x3C316C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AC")]
	public int FramesReceived
	{
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x3C316D0", Offset = "0x3C316D0", VA = "0x3C316D0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x3C316E0", Offset = "0x3C316E0", VA = "0x3C316E0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int FramesReceivedFEC
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x3C316F0", Offset = "0x3C316F0", VA = "0x3C316F0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x3C31700", Offset = "0x3C31700", VA = "0x3C31700")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public int FramesTryFEC
	{
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x3C31710", Offset = "0x3C31710", VA = "0x3C31710")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x3C31720", Offset = "0x3C31720", VA = "0x3C31720")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public int FramesReceivedFragments
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x3C31730", Offset = "0x3C31730", VA = "0x3C31730")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x3C31740", Offset = "0x3C31740", VA = "0x3C31740")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public int FramesReceivedFragmented
	{
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x3C31750", Offset = "0x3C31750", VA = "0x3C31750")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x3C31760", Offset = "0x3C31760", VA = "0x3C31760")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public int FramesSent
	{
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x3C31770", Offset = "0x3C31770", VA = "0x3C31770")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	public int FramesSentBytes
	{
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x3C318F0", Offset = "0x3C318F0", VA = "0x3C318F0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int RoundTripTime
	{
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x3C31A70", Offset = "0x3C31A70", VA = "0x3C31A70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x3C31A80", Offset = "0x3C31A80", VA = "0x3C31A80")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public int RoundTripTimeVariance
	{
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x3C31A90", Offset = "0x3C31A90", VA = "0x3C31A90")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x3C31AA0", Offset = "0x3C31AA0", VA = "0x3C31AA0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool SuppressInfoDuplicateWarning
	{
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x3C31AB0", Offset = "0x3C31AB0", VA = "0x3C31AB0")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x3C31AC0", Offset = "0x3C31AC0", VA = "0x3C31AC0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	public RemoteVoiceInfoDelegate OnRemoteVoiceInfoAction
	{
		[Token(Token = "0x600027C")]
		[Address(RVA = "0x3C31AD0", Offset = "0x3C31AD0", VA = "0x3C31AD0")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600027D")]
		[Address(RVA = "0x3C31AE0", Offset = "0x3C31AE0", VA = "0x3C31AE0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	public int DebugLostPercent
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x3C31AF0", Offset = "0x3C31AF0", VA = "0x3C31AF0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600027F")]
		[Address(RVA = "0x3C31B00", Offset = "0x3C31B00", VA = "0x3C31B00")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public IEnumerable<LocalVoice> LocalVoices
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x3C31B10", Offset = "0x3C31B10", VA = "0x3C31B10")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B9")]
	public IEnumerable<RemoteVoiceInfo> RemoteVoiceInfos
	{
		[Token(Token = "0x6000282")]
		[Address(RVA = "0x3C31CB0", Offset = "0x3C31CB0", VA = "0x3C31CB0")]
		[IteratorStateMachine(typeof(_003Cget_RemoteVoiceInfos_003Ed__82))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x3C31BD0", Offset = "0x3C31BD0", VA = "0x3C31BD0")]
	public IEnumerable<LocalVoice> LocalVoicesInChannel(int channelId)
	{
		return null;
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x3C31D60", Offset = "0x3C31D60", VA = "0x3C31D60")]
	public void LogSpacingProfiles()
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x3C32630", Offset = "0x3C32630", VA = "0x3C32630")]
	public void LogStats()
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x3C32B90", Offset = "0x3C32B90", VA = "0x3C32B90")]
	public void SetRemoteVoiceDelayFrames(Codec codec, int delayFrames)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x3C32EE0", Offset = "0x3C32EE0", VA = "0x3C32EE0")]
	public VoiceClient(IVoiceTransport transport, ILogger logger, [Optional] CreateOptions opt)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x3C33150", Offset = "0x3C33150", VA = "0x3C33150")]
	public void Service()
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x3C332E0", Offset = "0x3C332E0", VA = "0x3C332E0")]
	private LocalVoice createLocalVoice(int channelId, Func<byte, int, LocalVoice> voiceFactory)
	{
		return null;
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x3C33A20", Offset = "0x3C33A20", VA = "0x3C33A20")]
	public LocalVoice CreateLocalVoice(VoiceInfo voiceInfo, int channelId, [Optional] VoiceCreateOptions options)
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	public LocalVoiceAudio<T> CreateLocalVoiceAudio<T>(VoiceInfo voiceInfo, IAudioDesc audioSourceDesc, int channelId, [Optional] VoiceCreateOptions options)
	{
		return null;
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x3C33B40", Offset = "0x3C33B40", VA = "0x3C33B40")]
	public LocalVoice CreateLocalVoiceAudioFromSource(VoiceInfo voiceInfo, IAudioDesc source, AudioSampleType sampleType, int channelId, [Optional] VoiceCreateOptions options)
	{
		return null;
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x3C34F20", Offset = "0x3C34F20", VA = "0x3C34F20")]
	private byte idInc(byte id)
	{
		return default(byte);
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x3C33550", Offset = "0x3C33550", VA = "0x3C33550")]
	private byte getNewVoiceId()
	{
		return default(byte);
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x3C337F0", Offset = "0x3C337F0", VA = "0x3C337F0")]
	private void addVoice(byte newId, int channelId, LocalVoice v)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x3C2A1D0", Offset = "0x3C2A1D0", VA = "0x3C2A1D0")]
	public void RemoveLocalVoice(LocalVoice voice)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x3C34F30", Offset = "0x3C34F30", VA = "0x3C34F30")]
	private void clearRemoteVoices()
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x3C35410", Offset = "0x3C35410", VA = "0x3C35410")]
	private void clearRemoteVoicesInChannel(int channelId)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x3C35C30", Offset = "0x3C35C30", VA = "0x3C35C30")]
	private void clearRemoteVoicesInChannelForPlayer(int channelId, int playerId)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x3C36110", Offset = "0x3C36110", VA = "0x3C36110")]
	public void onJoinChannel(int channelId)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x3C362C0", Offset = "0x3C362C0", VA = "0x3C362C0")]
	public void onJoinAllChannels()
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x3C36450", Offset = "0x3C36450", VA = "0x3C36450")]
	public void onLeaveChannel(int channel)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x3C36460", Offset = "0x3C36460", VA = "0x3C36460")]
	public void onLeaveAllChannels()
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x3C36470", Offset = "0x3C36470", VA = "0x3C36470")]
	public void onPlayerJoin(int channelId, int playerId)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x3C36620", Offset = "0x3C36620", VA = "0x3C36620")]
	public void onPlayerJoin(int playerId)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x3C367A0", Offset = "0x3C367A0", VA = "0x3C367A0")]
	public void onPlayerLeave(int channelId, int playerId)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x3C367B0", Offset = "0x3C367B0", VA = "0x3C367B0")]
	public void onPlayerLeave(int playerId)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x3C36C70", Offset = "0x3C36C70", VA = "0x3C36C70")]
	public void onVoiceInfo(int channelId, int playerId, byte voiceId, byte eventNumber, VoiceInfo info)
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x3C37810", Offset = "0x3C37810", VA = "0x3C37810")]
	public void onVoiceRemove(int playerId, byte[] voiceIds)
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x3C37FF0", Offset = "0x3C37FF0", VA = "0x3C37FF0")]
	public void onFrame(int playerId, byte voiceId, byte evNumber, ref FrameBuffer receivedBytes, bool isLocalPlayer)
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x3C27E00", Offset = "0x3C27E00", VA = "0x3C27E00")]
	internal string channelStr(int channelId)
	{
		return null;
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x3C37700", Offset = "0x3C37700", VA = "0x3C37700")]
	internal string playerStr(int playerId)
	{
		return null;
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x3C386A0", Offset = "0x3C386A0", VA = "0x3C386A0", Slot = "4")]
	public void Dispose()
	{
	}
}
