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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "6")]
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
			[Address(RVA = "0x573E90", Offset = "0x572490", VA = "0x180573E90", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002B0")]
		[Address(RVA = "0x8E2870", Offset = "0x8E0E70", VA = "0x1808E2870")]
		[DebuggerHidden]
		public _003Cget_RemoteVoiceInfos_003Ed__82(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002B1")]
		[Address(RVA = "0x1D769E0", Offset = "0x1D74FE0", VA = "0x181D769E0", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x1D764D0", Offset = "0x1D74AD0", VA = "0x181D764D0", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x1D76B20", Offset = "0x1D75120", VA = "0x181D76B20")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x1D76B70", Offset = "0x1D75170", VA = "0x181D76B70")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x1D769A0", Offset = "0x1D74FA0", VA = "0x181D769A0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x1D76900", Offset = "0x1D74F00", VA = "0x181D76900", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<RemoteVoiceInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CPhoton_002EVoice_002ERemoteVoiceInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60002B9")]
		[Address(RVA = "0x1D76900", Offset = "0x1D74F00", VA = "0x181D76900", Slot = "5")]
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
		[Address(RVA = "0xF40050", Offset = "0xF3E650", VA = "0x180F40050")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600025A")]
		[Address(RVA = "0x138BAA0", Offset = "0x138A0A0", VA = "0x18138BAA0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public int EventsLost
	{
		[Token(Token = "0x600025B")]
		[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600025C")]
		[Address(RVA = "0xD23EF0", Offset = "0xD224F0", VA = "0x180D23EF0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public int FramesLost
	{
		[Token(Token = "0x600025D")]
		[Address(RVA = "0x585030", Offset = "0x583630", VA = "0x180585030")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x585090", Offset = "0x583690", VA = "0x180585090")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public int FramesFragPart
	{
		[Token(Token = "0x600025F")]
		[Address(RVA = "0xB3E080", Offset = "0xB3C680", VA = "0x180B3E080")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000260")]
		[Address(RVA = "0xB3E0E0", Offset = "0xB3C6E0", VA = "0x180B3E0E0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public int FramesRecovered
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0xAB9F60", Offset = "0xAB8560", VA = "0x180AB9F60")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x1826560", Offset = "0x1824B60", VA = "0x181826560")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public int FramesMiss
	{
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x16EF8A0", Offset = "0x16EDEA0", VA = "0x1816EF8A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x16EFA10", Offset = "0x16EE010", VA = "0x1816EFA10")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public int FramesLate
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x172E4A0", Offset = "0x172CAA0", VA = "0x18172E4A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x1A40490", Offset = "0x1A3EA90", VA = "0x181A40490")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int FramesLateUsed
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x1D7A820", Offset = "0x1D78E20", VA = "0x181D7A820")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AC")]
	public int FramesReceived
	{
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x19CF1C0", Offset = "0x19CD7C0", VA = "0x1819CF1C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x1CFE070", Offset = "0x1CFC670", VA = "0x181CFE070")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int FramesReceivedFEC
	{
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x58A8B0", Offset = "0x588EB0", VA = "0x18058A8B0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x58AA60", Offset = "0x589060", VA = "0x18058AA60")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public int FramesTryFEC
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x58AA10", Offset = "0x589010", VA = "0x18058AA10")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public int FramesReceivedFragments
	{
		[Token(Token = "0x600026E")]
		[Address(RVA = "0xB3DFC0", Offset = "0xB3C5C0", VA = "0x180B3DFC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026F")]
		[Address(RVA = "0xB3E0D0", Offset = "0xB3C6D0", VA = "0x180B3E0D0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public int FramesReceivedFragmented
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x58A610", Offset = "0x588C10", VA = "0x18058A610")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x58A9A0", Offset = "0x588FA0", VA = "0x18058A9A0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public int FramesSent
	{
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x1D7A990", Offset = "0x1D78F90", VA = "0x181D7A990")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	public int FramesSentBytes
	{
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x1D7A830", Offset = "0x1D78E30", VA = "0x181D7A830")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int RoundTripTime
	{
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x58A540", Offset = "0x588B40", VA = "0x18058A540")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x58A8D0", Offset = "0x588ED0", VA = "0x18058A8D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public int RoundTripTimeVariance
	{
		[Token(Token = "0x6000276")]
		[Address(RVA = "0xB57820", Offset = "0xB55E20", VA = "0x180B57820")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x1CFDDB0", Offset = "0x1CFC3B0", VA = "0x181CFDDB0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool SuppressInfoDuplicateWarning
	{
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x1937790", Offset = "0x1935D90", VA = "0x181937790")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x19377D0", Offset = "0x1935DD0", VA = "0x1819377D0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	public RemoteVoiceInfoDelegate OnRemoteVoiceInfoAction
	{
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x152F220", Offset = "0x152D820", VA = "0x18152F220")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x152F2F0", Offset = "0x152D8F0", VA = "0x18152F2F0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	public int DebugLostPercent
	{
		[Token(Token = "0x600027C")]
		[Address(RVA = "0xA4D530", Offset = "0xA4BB30", VA = "0x180A4D530")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600027D")]
		[Address(RVA = "0xA4D6E0", Offset = "0xA4BCE0", VA = "0x180A4D6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public IEnumerable<LocalVoice> LocalVoices
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x1D7AAF0", Offset = "0x1D790F0", VA = "0x181D7AAF0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B9")]
	public IEnumerable<RemoteVoiceInfo> RemoteVoiceInfos
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x1D7ABB0", Offset = "0x1D791B0", VA = "0x181D7ABB0")]
		[IteratorStateMachine(typeof(_003Cget_RemoteVoiceInfos_003Ed__82))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x600027F")]
	[Address(RVA = "0x1D784D0", Offset = "0x1D76AD0", VA = "0x181D784D0")]
	public IEnumerable<LocalVoice> LocalVoicesInChannel(int channelId)
	{
		return null;
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x1D785B0", Offset = "0x1D76BB0", VA = "0x181D785B0")]
	public void LogSpacingProfiles()
	{
	}

	[Token(Token = "0x6000282")]
	[Address(RVA = "0x1D78B60", Offset = "0x1D77160", VA = "0x181D78B60")]
	public void LogStats()
	{
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x1D79190", Offset = "0x1D77790", VA = "0x181D79190")]
	public void SetRemoteVoiceDelayFrames(Codec codec, int delayFrames)
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x1D79450", Offset = "0x1D77A50", VA = "0x181D79450")]
	public VoiceClient(IVoiceTransport transport, ILogger logger, [Optional] CreateOptions opt)
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x1D79050", Offset = "0x1D77650", VA = "0x181D79050")]
	public void Service()
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x1D7A4C0", Offset = "0x1D78AC0", VA = "0x181D7A4C0")]
	private LocalVoice createLocalVoice(int channelId, Func<byte, int, LocalVoice> voiceFactory)
	{
		return null;
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x1D77F10", Offset = "0x1D76510", VA = "0x181D77F10")]
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
	[Address(RVA = "0x1D77230", Offset = "0x1D75830", VA = "0x181D77230")]
	public LocalVoice CreateLocalVoiceAudioFromSource(VoiceInfo voiceInfo, IAudioDesc source, AudioSampleType sampleType, int channelId, [Optional] VoiceCreateOptions options)
	{
		return null;
	}

	[Token(Token = "0x600028A")]
	[Address(RVA = "0x1D7AC30", Offset = "0x1D79230", VA = "0x181D7AC30")]
	private byte idInc(byte id)
	{
		return default(byte);
	}

	[Token(Token = "0x600028B")]
	[Address(RVA = "0x1D7A610", Offset = "0x1D78C10", VA = "0x181D7A610")]
	private byte getNewVoiceId()
	{
		return default(byte);
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x1D796C0", Offset = "0x1D77CC0", VA = "0x181D796C0")]
	private void addVoice(byte newId, int channelId, LocalVoice v)
	{
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x1D78EC0", Offset = "0x1D774C0", VA = "0x181D78EC0")]
	public void RemoveLocalVoice(LocalVoice voice)
	{
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x1D7A1A0", Offset = "0x1D787A0", VA = "0x181D7A1A0")]
	private void clearRemoteVoices()
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x1D79C90", Offset = "0x1D78290", VA = "0x181D79C90")]
	private void clearRemoteVoicesInChannel(int channelId)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x1D79940", Offset = "0x1D77F40", VA = "0x181D79940")]
	private void clearRemoteVoicesInChannelForPlayer(int channelId, int playerId)
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x1D7B0D0", Offset = "0x1D796D0", VA = "0x181D7B0D0")]
	public void onJoinChannel(int channelId)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x1D7AF90", Offset = "0x1D79590", VA = "0x181D7AF90")]
	public void onJoinAllChannels()
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x1D7B250", Offset = "0x1D79850", VA = "0x181D7B250")]
	public void onLeaveChannel(int channel)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x1D7B240", Offset = "0x1D79840", VA = "0x181D7B240")]
	public void onLeaveAllChannels()
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x1D7B3B0", Offset = "0x1D799B0", VA = "0x181D7B3B0")]
	public void onPlayerJoin(int channelId, int playerId)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x1D7B260", Offset = "0x1D79860", VA = "0x181D7B260")]
	public void onPlayerJoin(int playerId)
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x1D7B8C0", Offset = "0x1D79EC0", VA = "0x181D7B8C0")]
	public void onPlayerLeave(int channelId, int playerId)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x1D7B520", Offset = "0x1D79B20", VA = "0x181D7B520")]
	public void onPlayerLeave(int playerId)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x1D7B8D0", Offset = "0x1D79ED0", VA = "0x181D7B8D0")]
	public void onVoiceInfo(int channelId, int playerId, byte voiceId, byte eventNumber, VoiceInfo info)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x1D7C100", Offset = "0x1D7A700", VA = "0x181D7C100")]
	public void onVoiceRemove(int playerId, byte[] voiceIds)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x1D7AC40", Offset = "0x1D79240", VA = "0x181D7AC40")]
	public void onFrame(int playerId, byte voiceId, byte evNumber, ref FrameBuffer receivedBytes, bool isLocalPlayer)
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x1D79890", Offset = "0x1D77E90", VA = "0x181D79890")]
	internal string channelStr(int channelId)
	{
		return null;
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x1D7C5A0", Offset = "0x1D7ABA0", VA = "0x181D7C5A0")]
	internal string playerStr(int playerId)
	{
		return null;
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x1D78120", Offset = "0x1D76720", VA = "0x181D78120", Slot = "4")]
	public void Dispose()
	{
	}
}
