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
			[Address(RVA = "0x3F2F0C0", Offset = "0x3F2F0C0", VA = "0x3F2F0C0", Slot = "6")]
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
			[Address(RVA = "0x3F2F110", Offset = "0x3F2F110", VA = "0x3F2F110", Slot = "9")]
			[DebuggerHidden]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60002B2")]
		[Address(RVA = "0x3F27680", Offset = "0x3F27680", VA = "0x3F27680")]
		[DebuggerHidden]
		public _003Cget_RemoteVoiceInfos_003Ed__82(int _003C_003E1__state)
		{
		}

		[Token(Token = "0x60002B3")]
		[Address(RVA = "0x3F2EA50", Offset = "0x3F2EA50", VA = "0x3F2EA50", Slot = "7")]
		[DebuggerHidden]
		private void System_002EIDisposable_002EDispose()
		{
		}

		[Token(Token = "0x60002B4")]
		[Address(RVA = "0x3F2EB90", Offset = "0x3F2EB90", VA = "0x3F2EB90", Slot = "8")]
		private bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60002B5")]
		[Address(RVA = "0x3F2F080", Offset = "0x3F2F080", VA = "0x3F2F080")]
		private void _003C_003Em__Finally1()
		{
		}

		[Token(Token = "0x60002B6")]
		[Address(RVA = "0x3F2F040", Offset = "0x3F2F040", VA = "0x3F2F040")]
		private void _003C_003Em__Finally2()
		{
		}

		[Token(Token = "0x60002B8")]
		[Address(RVA = "0x3F2F0D0", Offset = "0x3F2F0D0", VA = "0x3F2F0D0", Slot = "10")]
		[DebuggerHidden]
		private void System_002ECollections_002EIEnumerator_002EReset()
		{
		}

		[Token(Token = "0x60002BA")]
		[Address(RVA = "0x3F2F120", Offset = "0x3F2F120", VA = "0x3F2F120", Slot = "4")]
		[DebuggerHidden]
		private IEnumerator<RemoteVoiceInfo> System_002ECollections_002EGeneric_002EIEnumerable_003CPhoton_002EVoice_002ERemoteVoiceInfo_003E_002EGetEnumerator()
		{
			return null;
		}

		[Token(Token = "0x60002BB")]
		[Address(RVA = "0x3F2F1C0", Offset = "0x3F2F1C0", VA = "0x3F2F1C0", Slot = "5")]
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
		[Address(RVA = "0x3F26F30", Offset = "0x3F26F30", VA = "0x3F26F30")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600025C")]
		[Address(RVA = "0x3F26F40", Offset = "0x3F26F40", VA = "0x3F26F40")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000A5")]
	public int EventsLost
	{
		[Token(Token = "0x600025D")]
		[Address(RVA = "0x3F26F50", Offset = "0x3F26F50", VA = "0x3F26F50")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600025E")]
		[Address(RVA = "0x3F26F60", Offset = "0x3F26F60", VA = "0x3F26F60")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A6")]
	public int FramesLost
	{
		[Token(Token = "0x600025F")]
		[Address(RVA = "0x3F26F70", Offset = "0x3F26F70", VA = "0x3F26F70")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000260")]
		[Address(RVA = "0x3F26F80", Offset = "0x3F26F80", VA = "0x3F26F80")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A7")]
	public int FramesFragPart
	{
		[Token(Token = "0x6000261")]
		[Address(RVA = "0x3F26F90", Offset = "0x3F26F90", VA = "0x3F26F90")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000262")]
		[Address(RVA = "0x3F26FA0", Offset = "0x3F26FA0", VA = "0x3F26FA0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A8")]
	public int FramesRecovered
	{
		[Token(Token = "0x6000263")]
		[Address(RVA = "0x3F26FB0", Offset = "0x3F26FB0", VA = "0x3F26FB0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000264")]
		[Address(RVA = "0x3F26FC0", Offset = "0x3F26FC0", VA = "0x3F26FC0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000A9")]
	public int FramesMiss
	{
		[Token(Token = "0x6000265")]
		[Address(RVA = "0x3F26FD0", Offset = "0x3F26FD0", VA = "0x3F26FD0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000266")]
		[Address(RVA = "0x3F26FE0", Offset = "0x3F26FE0", VA = "0x3F26FE0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AA")]
	public int FramesLate
	{
		[Token(Token = "0x6000267")]
		[Address(RVA = "0x3F26FF0", Offset = "0x3F26FF0", VA = "0x3F26FF0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000268")]
		[Address(RVA = "0x3F27000", Offset = "0x3F27000", VA = "0x3F27000")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AB")]
	public int FramesLateUsed
	{
		[Token(Token = "0x6000269")]
		[Address(RVA = "0x3F27010", Offset = "0x3F27010", VA = "0x3F27010")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000AC")]
	public int FramesReceived
	{
		[Token(Token = "0x600026A")]
		[Address(RVA = "0x3F27020", Offset = "0x3F27020", VA = "0x3F27020")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026B")]
		[Address(RVA = "0x3F27030", Offset = "0x3F27030", VA = "0x3F27030")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000AD")]
	public int FramesReceivedFEC
	{
		[Token(Token = "0x600026C")]
		[Address(RVA = "0x3F27040", Offset = "0x3F27040", VA = "0x3F27040")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026D")]
		[Address(RVA = "0x3F27050", Offset = "0x3F27050", VA = "0x3F27050")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AE")]
	public int FramesTryFEC
	{
		[Token(Token = "0x600026E")]
		[Address(RVA = "0x3F27060", Offset = "0x3F27060", VA = "0x3F27060")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600026F")]
		[Address(RVA = "0x3F27070", Offset = "0x3F27070", VA = "0x3F27070")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000AF")]
	public int FramesReceivedFragments
	{
		[Token(Token = "0x6000270")]
		[Address(RVA = "0x3F27080", Offset = "0x3F27080", VA = "0x3F27080")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000271")]
		[Address(RVA = "0x3F27090", Offset = "0x3F27090", VA = "0x3F27090")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000B0")]
	public int FramesReceivedFragmented
	{
		[Token(Token = "0x6000272")]
		[Address(RVA = "0x3F270A0", Offset = "0x3F270A0", VA = "0x3F270A0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000273")]
		[Address(RVA = "0x3F270B0", Offset = "0x3F270B0", VA = "0x3F270B0")]
		[CompilerGenerated]
		internal set
		{
		}
	}

	[Token(Token = "0x170000B1")]
	public int FramesSent
	{
		[Token(Token = "0x6000274")]
		[Address(RVA = "0x3F270C0", Offset = "0x3F270C0", VA = "0x3F270C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B2")]
	public int FramesSentBytes
	{
		[Token(Token = "0x6000275")]
		[Address(RVA = "0x3F27240", Offset = "0x3F27240", VA = "0x3F27240")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000B3")]
	public int RoundTripTime
	{
		[Token(Token = "0x6000276")]
		[Address(RVA = "0x3F273C0", Offset = "0x3F273C0", VA = "0x3F273C0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000277")]
		[Address(RVA = "0x3F273D0", Offset = "0x3F273D0", VA = "0x3F273D0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B4")]
	public int RoundTripTimeVariance
	{
		[Token(Token = "0x6000278")]
		[Address(RVA = "0x3F273E0", Offset = "0x3F273E0", VA = "0x3F273E0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x6000279")]
		[Address(RVA = "0x3F273F0", Offset = "0x3F273F0", VA = "0x3F273F0")]
		[CompilerGenerated]
		private set
		{
		}
	}

	[Token(Token = "0x170000B5")]
	public bool SuppressInfoDuplicateWarning
	{
		[Token(Token = "0x600027A")]
		[Address(RVA = "0x3F27400", Offset = "0x3F27400", VA = "0x3F27400")]
		[CompilerGenerated]
		get
		{
			return default(bool);
		}
		[Token(Token = "0x600027B")]
		[Address(RVA = "0x3F27410", Offset = "0x3F27410", VA = "0x3F27410")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B6")]
	public RemoteVoiceInfoDelegate OnRemoteVoiceInfoAction
	{
		[Token(Token = "0x600027C")]
		[Address(RVA = "0x3F27420", Offset = "0x3F27420", VA = "0x3F27420")]
		[CompilerGenerated]
		get
		{
			return null;
		}
		[Token(Token = "0x600027D")]
		[Address(RVA = "0x3F27430", Offset = "0x3F27430", VA = "0x3F27430")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B7")]
	public int DebugLostPercent
	{
		[Token(Token = "0x600027E")]
		[Address(RVA = "0x3F27440", Offset = "0x3F27440", VA = "0x3F27440")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
		[Token(Token = "0x600027F")]
		[Address(RVA = "0x3F27450", Offset = "0x3F27450", VA = "0x3F27450")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000B8")]
	public IEnumerable<LocalVoice> LocalVoices
	{
		[Token(Token = "0x6000280")]
		[Address(RVA = "0x3F27460", Offset = "0x3F27460", VA = "0x3F27460")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000B9")]
	public IEnumerable<RemoteVoiceInfo> RemoteVoiceInfos
	{
		[Token(Token = "0x6000282")]
		[Address(RVA = "0x3F27600", Offset = "0x3F27600", VA = "0x3F27600")]
		[IteratorStateMachine(typeof(_003Cget_RemoteVoiceInfos_003Ed__82))]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000281")]
	[Address(RVA = "0x3F27520", Offset = "0x3F27520", VA = "0x3F27520")]
	public IEnumerable<LocalVoice> LocalVoicesInChannel(int channelId)
	{
		return null;
	}

	[Token(Token = "0x6000283")]
	[Address(RVA = "0x3F276B0", Offset = "0x3F276B0", VA = "0x3F276B0")]
	public void LogSpacingProfiles()
	{
	}

	[Token(Token = "0x6000284")]
	[Address(RVA = "0x3F27F80", Offset = "0x3F27F80", VA = "0x3F27F80")]
	public void LogStats()
	{
	}

	[Token(Token = "0x6000285")]
	[Address(RVA = "0x3F284E0", Offset = "0x3F284E0", VA = "0x3F284E0")]
	public void SetRemoteVoiceDelayFrames(Codec codec, int delayFrames)
	{
	}

	[Token(Token = "0x6000286")]
	[Address(RVA = "0x3F28830", Offset = "0x3F28830", VA = "0x3F28830")]
	public VoiceClient(IVoiceTransport transport, ILogger logger, [Optional] CreateOptions opt)
	{
	}

	[Token(Token = "0x6000287")]
	[Address(RVA = "0x3F28AA0", Offset = "0x3F28AA0", VA = "0x3F28AA0")]
	public void Service()
	{
	}

	[Token(Token = "0x6000288")]
	[Address(RVA = "0x3F28C30", Offset = "0x3F28C30", VA = "0x3F28C30")]
	private LocalVoice createLocalVoice(int channelId, Func<byte, int, LocalVoice> voiceFactory)
	{
		return null;
	}

	[Token(Token = "0x6000289")]
	[Address(RVA = "0x3F29370", Offset = "0x3F29370", VA = "0x3F29370")]
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
	[Address(RVA = "0x3F29490", Offset = "0x3F29490", VA = "0x3F29490")]
	public LocalVoice CreateLocalVoiceAudioFromSource(VoiceInfo voiceInfo, IAudioDesc source, AudioSampleType sampleType, int channelId, [Optional] VoiceCreateOptions options)
	{
		return null;
	}

	[Token(Token = "0x600028C")]
	[Address(RVA = "0x3F2A870", Offset = "0x3F2A870", VA = "0x3F2A870")]
	private byte idInc(byte id)
	{
		return default(byte);
	}

	[Token(Token = "0x600028D")]
	[Address(RVA = "0x3F28EA0", Offset = "0x3F28EA0", VA = "0x3F28EA0")]
	private byte getNewVoiceId()
	{
		return default(byte);
	}

	[Token(Token = "0x600028E")]
	[Address(RVA = "0x3F29140", Offset = "0x3F29140", VA = "0x3F29140")]
	private void addVoice(byte newId, int channelId, LocalVoice v)
	{
	}

	[Token(Token = "0x600028F")]
	[Address(RVA = "0x3F1FB20", Offset = "0x3F1FB20", VA = "0x3F1FB20")]
	public void RemoveLocalVoice(LocalVoice voice)
	{
	}

	[Token(Token = "0x6000290")]
	[Address(RVA = "0x3F2A880", Offset = "0x3F2A880", VA = "0x3F2A880")]
	private void clearRemoteVoices()
	{
	}

	[Token(Token = "0x6000291")]
	[Address(RVA = "0x3F2AD60", Offset = "0x3F2AD60", VA = "0x3F2AD60")]
	private void clearRemoteVoicesInChannel(int channelId)
	{
	}

	[Token(Token = "0x6000292")]
	[Address(RVA = "0x3F2B580", Offset = "0x3F2B580", VA = "0x3F2B580")]
	private void clearRemoteVoicesInChannelForPlayer(int channelId, int playerId)
	{
	}

	[Token(Token = "0x6000293")]
	[Address(RVA = "0x3F2BA60", Offset = "0x3F2BA60", VA = "0x3F2BA60")]
	public void onJoinChannel(int channelId)
	{
	}

	[Token(Token = "0x6000294")]
	[Address(RVA = "0x3F2BC10", Offset = "0x3F2BC10", VA = "0x3F2BC10")]
	public void onJoinAllChannels()
	{
	}

	[Token(Token = "0x6000295")]
	[Address(RVA = "0x3F2BDA0", Offset = "0x3F2BDA0", VA = "0x3F2BDA0")]
	public void onLeaveChannel(int channel)
	{
	}

	[Token(Token = "0x6000296")]
	[Address(RVA = "0x3F2BDB0", Offset = "0x3F2BDB0", VA = "0x3F2BDB0")]
	public void onLeaveAllChannels()
	{
	}

	[Token(Token = "0x6000297")]
	[Address(RVA = "0x3F2BDC0", Offset = "0x3F2BDC0", VA = "0x3F2BDC0")]
	public void onPlayerJoin(int channelId, int playerId)
	{
	}

	[Token(Token = "0x6000298")]
	[Address(RVA = "0x3F2BF70", Offset = "0x3F2BF70", VA = "0x3F2BF70")]
	public void onPlayerJoin(int playerId)
	{
	}

	[Token(Token = "0x6000299")]
	[Address(RVA = "0x3F2C0F0", Offset = "0x3F2C0F0", VA = "0x3F2C0F0")]
	public void onPlayerLeave(int channelId, int playerId)
	{
	}

	[Token(Token = "0x600029A")]
	[Address(RVA = "0x3F2C100", Offset = "0x3F2C100", VA = "0x3F2C100")]
	public void onPlayerLeave(int playerId)
	{
	}

	[Token(Token = "0x600029B")]
	[Address(RVA = "0x3F2C5C0", Offset = "0x3F2C5C0", VA = "0x3F2C5C0")]
	public void onVoiceInfo(int channelId, int playerId, byte voiceId, byte eventNumber, VoiceInfo info)
	{
	}

	[Token(Token = "0x600029C")]
	[Address(RVA = "0x3F2D160", Offset = "0x3F2D160", VA = "0x3F2D160")]
	public void onVoiceRemove(int playerId, byte[] voiceIds)
	{
	}

	[Token(Token = "0x600029D")]
	[Address(RVA = "0x3F2D940", Offset = "0x3F2D940", VA = "0x3F2D940")]
	public void onFrame(int playerId, byte voiceId, byte evNumber, ref FrameBuffer receivedBytes, bool isLocalPlayer)
	{
	}

	[Token(Token = "0x600029E")]
	[Address(RVA = "0x3F1D750", Offset = "0x3F1D750", VA = "0x3F1D750")]
	internal string channelStr(int channelId)
	{
		return null;
	}

	[Token(Token = "0x600029F")]
	[Address(RVA = "0x3F2D050", Offset = "0x3F2D050", VA = "0x3F2D050")]
	internal string playerStr(int playerId)
	{
		return null;
	}

	[Token(Token = "0x60002A0")]
	[Address(RVA = "0x3F2DFF0", Offset = "0x3F2DFF0", VA = "0x3F2DFF0", Slot = "4")]
	public void Dispose()
	{
	}
}
