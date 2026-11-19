// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.AudioUtil
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/AudioUtil.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using System.Timers;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000013")]
public static class AudioUtil
{
	[Token(Token = "0x2000014")]
	public abstract class GeneratorReader<T> : IAudioReader<T>, IDataReader<T>, IDisposable, IAudioDesc
	{
		[Token(Token = "0x400007E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private long timeSamples;

		[Token(Token = "0x400007F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<double> clockSec;

		[Token(Token = "0x17000011")]
		public int Channels
		{
			[Token(Token = "0x600005C")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000012")]
		public int SamplingRate
		{
			[Token(Token = "0x600005D")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000013")]
		public string Error
		{
			[Token(Token = "0x600005E")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600005F")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x600005B")]
		public GeneratorReader([Optional] Func<double> clockSec, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x6000060")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000061")]
		public bool Read(T[] buf)
		{
			return default(bool);
		}

		[Token(Token = "0x6000062")]
		protected abstract int Gen(T[] buf, long timeSamples);
	}

	[Token(Token = "0x2000016")]
	public abstract class GeneratorPusher<T> : IAudioPusher<T>, IAudioDesc, IDisposable
	{
		[Token(Token = "0x4000082")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Timer timer;

		[Token(Token = "0x4000083")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Action<T[]> callback;

		[Token(Token = "0x4000084")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ObjectFactory<T[], int> bufferFactory;

		[Token(Token = "0x4000085")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected long timeSamples;

		[Token(Token = "0x4000086")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int bufSamples;

		[Token(Token = "0x17000014")]
		public int Channels
		{
			[Token(Token = "0x600006A")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000015")]
		public int SamplingRate
		{
			[Token(Token = "0x600006B")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000016")]
		public string Error
		{
			[Token(Token = "0x600006C")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600006D")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6000066")]
		public GeneratorPusher(int bufSizeMs = 100, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x6000067")]
		public void SetCallback(Action<T[]> callback, ObjectFactory<T[], int> bufferFactory)
		{
		}

		[Token(Token = "0x6000068")]
		private void OnTimedEvent(object source, ElapsedEventArgs e)
		{
		}

		[Token(Token = "0x6000069")]
		protected abstract int Gen(T[] buf, long timeSamples);

		[Token(Token = "0x600006E")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000017")]
	public class ToneAudioReader<T> : GeneratorReader<T>
	{
		[Token(Token = "0x400008A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private double k;

		[Token(Token = "0x600006F")]
		public ToneAudioReader([Optional] Func<double> clockSec, double frequency = 440.0, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x6000070")]
		protected override int Gen(T[] buf, long timeSamples)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000018")]
	public class ToneAudioPusher<T> : GeneratorPusher<T>
	{
		[Token(Token = "0x400008B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private double k;

		[Token(Token = "0x6000071")]
		public ToneAudioPusher(int frequency = 440, int bufSizeMs = 100, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x6000072")]
		protected override int Gen(T[] buf, long timeSamples)
		{
			return default(int);
		}
	}

	[Token(Token = "0x2000019")]
	public class WaveformAudioReader<T> : GeneratorReader<T>
	{
		[Token(Token = "0x17000017")]
		public T[] Waveform
		{
			[Token(Token = "0x6000075")]
			[CompilerGenerated]
			private get
			{
				return null;
			}
			[Token(Token = "0x6000076")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000073")]
		public WaveformAudioReader([Optional] Func<double> clockSec, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x6000074")]
		protected override int Gen(T[] buf, long timeSamples)
		{
			return default(int);
		}
	}

	[Token(Token = "0x200001A")]
	public class WaveformAudioPusher<T> : GeneratorPusher<T>
	{
		[Token(Token = "0x17000018")]
		public T[] Waveform
		{
			[Token(Token = "0x6000078")]
			[CompilerGenerated]
			private get
			{
				return null;
			}
			[Token(Token = "0x6000079")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000077")]
		public WaveformAudioPusher(int bufSizeMs = 100, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x600007A")]
		protected override int Gen(T[] buf, long timeSamples)
		{
			return default(int);
		}
	}

	[Token(Token = "0x200001B")]
	public class TempoUp<T>
	{
		[Token(Token = "0x400008E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly int sizeofT;

		[Token(Token = "0x400008F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int channels;

		[Token(Token = "0x4000090")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int skipGroup;

		[Token(Token = "0x4000091")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int skipFactor;

		[Token(Token = "0x4000092")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int sign;

		[Token(Token = "0x4000093")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int waveCnt;

		[Token(Token = "0x4000094")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool skipping;

		[Token(Token = "0x600007B")]
		public void Begin(int channels, int changePerc, int skipGroup)
		{
		}

		[Token(Token = "0x600007C")]
		public int Process(T[] s, T[] d)
		{
			return default(int);
		}

		[Token(Token = "0x600007D")]
		public int End(T[] s)
		{
			return default(int);
		}

		[Token(Token = "0x600007E")]
		private int processFloat(float[] s, float[] d)
		{
			return default(int);
		}

		[Token(Token = "0x600007F")]
		public int endFloat(float[] s)
		{
			return default(int);
		}

		[Token(Token = "0x6000080")]
		private int processShort(short[] s, short[] d)
		{
			return default(int);
		}

		[Token(Token = "0x6000081")]
		public int endShort(short[] s)
		{
			return default(int);
		}

		[Token(Token = "0x6000082")]
		public TempoUp()
		{
		}
	}

	[Token(Token = "0x200001C")]
	public class Resampler<T> : IProcessor<T>, IDisposable
	{
		[Token(Token = "0x4000095")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected T[] frameResampled;

		[Token(Token = "0x4000096")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int channels;

		[Token(Token = "0x6000083")]
		public Resampler(int dstSize, int channels)
		{
		}

		[Token(Token = "0x6000084")]
		public T[] Process(T[] buf)
		{
			return null;
		}

		[Token(Token = "0x6000085")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x200001D")]
	public interface ILevelMeter
	{
		[Token(Token = "0x17000019")]
		float CurrentAvgAmp
		{
			[Token(Token = "0x6000086")]
			get;
		}

		[Token(Token = "0x1700001A")]
		float CurrentPeakAmp
		{
			[Token(Token = "0x6000087")]
			get;
		}

		[Token(Token = "0x1700001B")]
		float AccumAvgPeakAmp
		{
			[Token(Token = "0x6000088")]
			get;
		}

		[Token(Token = "0x6000089")]
		void ResetAccumAvgPeakAmp();
	}

	[Token(Token = "0x200001E")]
	public class LevelMeterDummy : ILevelMeter
	{
		[Token(Token = "0x1700001C")]
		public float CurrentAvgAmp
		{
			[Token(Token = "0x600008A")]
			[Address(RVA = "0x5703840", Offset = "0x5702840", VA = "0x5703840", Slot = "4")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700001D")]
		public float CurrentPeakAmp
		{
			[Token(Token = "0x600008B")]
			[Address(RVA = "0x5703850", Offset = "0x5702850", VA = "0x5703850", Slot = "5")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700001E")]
		public float AccumAvgPeakAmp
		{
			[Token(Token = "0x600008C")]
			[Address(RVA = "0x5703860", Offset = "0x5702860", VA = "0x5703860", Slot = "6")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x600008D")]
		[Address(RVA = "0x5703870", Offset = "0x5702870", VA = "0x5703870", Slot = "7")]
		public void ResetAccumAvgPeakAmp()
		{
		}

		[Token(Token = "0x600008E")]
		[Address(RVA = "0x5703880", Offset = "0x5702880", VA = "0x5703880")]
		public LevelMeterDummy()
		{
		}
	}

	[Token(Token = "0x200001F")]
	public abstract class LevelMeter<T> : IProcessor<T>, IDisposable, ILevelMeter
	{
		[Token(Token = "0x4000097")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float ampSum;

		[Token(Token = "0x4000098")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float ampPeak;

		[Token(Token = "0x4000099")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int bufferSize;

		[Token(Token = "0x400009A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float[] prevValues;

		[Token(Token = "0x400009B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int prevValuesHead;

		[Token(Token = "0x400009C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float accumAvgPeakAmpSum;

		[Token(Token = "0x400009D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int accumAvgPeakAmpCount;

		[Token(Token = "0x400009E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float currentPeakAmp;

		[Token(Token = "0x400009F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float norm;

		[Token(Token = "0x1700001F")]
		public float CurrentAvgAmp
		{
			[Token(Token = "0x6000090")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000020")]
		public float CurrentPeakAmp
		{
			[Token(Token = "0x6000091")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x6000092")]
			protected set
			{
			}
		}

		[Token(Token = "0x17000021")]
		public float AccumAvgPeakAmp
		{
			[Token(Token = "0x6000093")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x600008F")]
		internal LevelMeter(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x6000094")]
		public void ResetAccumAvgPeakAmp()
		{
		}

		[Token(Token = "0x6000095")]
		public abstract T[] Process(T[] buf);

		[Token(Token = "0x6000096")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000020")]
	public class LevelMeterFloat : LevelMeter<float>
	{
		[Token(Token = "0x6000097")]
		[Address(RVA = "0x5703890", Offset = "0x5702890", VA = "0x5703890")]
		public LevelMeterFloat(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x6000098")]
		[Address(RVA = "0x57038E0", Offset = "0x57028E0", VA = "0x57038E0", Slot = "10")]
		public override float[] Process(float[] buf)
		{
			return null;
		}
	}

	[Token(Token = "0x2000021")]
	public class LevelMeterShort : LevelMeter<short>
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x57039B0", Offset = "0x57029B0", VA = "0x57039B0")]
		public LevelMeterShort(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x600009A")]
		[Address(RVA = "0x5703A00", Offset = "0x5702A00", VA = "0x5703A00", Slot = "10")]
		public override short[] Process(short[] buf)
		{
			return null;
		}
	}

	[Token(Token = "0x2000022")]
	public interface IVoiceDetector
	{
		[Token(Token = "0x17000022")]
		bool On
		{
			[Token(Token = "0x600009B")]
			get;
			[Token(Token = "0x600009C")]
			set;
		}

		[Token(Token = "0x17000023")]
		float Threshold
		{
			[Token(Token = "0x600009D")]
			get;
			[Token(Token = "0x600009E")]
			set;
		}

		[Token(Token = "0x17000024")]
		bool Detected
		{
			[Token(Token = "0x600009F")]
			get;
		}

		[Token(Token = "0x17000025")]
		DateTime DetectedTime
		{
			[Token(Token = "0x60000A0")]
			get;
		}

		[Token(Token = "0x17000026")]
		int ActivityDelayMs
		{
			[Token(Token = "0x60000A3")]
			get;
			[Token(Token = "0x60000A4")]
			set;
		}

		[Token(Token = "0x14000001")]
		event Action OnDetected;
	}

	[Token(Token = "0x2000023")]
	public class VoiceDetectorCalibration<T> : IProcessor<T>, IDisposable
	{
		[Token(Token = "0x40000A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IVoiceDetector voiceDetector;

		[Token(Token = "0x40000A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ILevelMeter levelMeter;

		[Token(Token = "0x40000A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int valuesPerSec;

		[Token(Token = "0x40000A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int calibrateCount;

		[Token(Token = "0x40000A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Action<float> onCalibrated;

		[Token(Token = "0x17000027")]
		public bool IsCalibrating
		{
			[Token(Token = "0x60000A5")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60000A6")]
		public VoiceDetectorCalibration(IVoiceDetector voiceDetector, ILevelMeter levelMeter, int samplingRate, int channels)
		{
		}

		[Token(Token = "0x60000A7")]
		public void Calibrate(int durationMs, [Optional] Action<float> onCalibrated)
		{
		}

		[Token(Token = "0x60000A8")]
		public T[] Process(T[] buf)
		{
			return null;
		}

		[Token(Token = "0x60000A9")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000024")]
	public class VoiceDetectorDummy : IVoiceDetector
	{
		[Token(Token = "0x17000028")]
		public bool On
		{
			[Token(Token = "0x60000AA")]
			[Address(RVA = "0x5703AE0", Offset = "0x5702AE0", VA = "0x5703AE0", Slot = "4")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60000AB")]
			[Address(RVA = "0x5703AF0", Offset = "0x5702AF0", VA = "0x5703AF0", Slot = "5")]
			set
			{
			}
		}

		[Token(Token = "0x17000029")]
		public float Threshold
		{
			[Token(Token = "0x60000AC")]
			[Address(RVA = "0x5703B00", Offset = "0x5702B00", VA = "0x5703B00", Slot = "6")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60000AD")]
			[Address(RVA = "0x5703B10", Offset = "0x5702B10", VA = "0x5703B10", Slot = "7")]
			set
			{
			}
		}

		[Token(Token = "0x1700002A")]
		public bool Detected
		{
			[Token(Token = "0x60000AE")]
			[Address(RVA = "0x5703B20", Offset = "0x5702B20", VA = "0x5703B20", Slot = "8")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700002B")]
		public int ActivityDelayMs
		{
			[Token(Token = "0x60000AF")]
			[Address(RVA = "0x5703B30", Offset = "0x5702B30", VA = "0x5703B30", Slot = "12")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60000B0")]
			[Address(RVA = "0x5703B40", Offset = "0x5702B40", VA = "0x5703B40", Slot = "13")]
			set
			{
			}
		}

		[Token(Token = "0x1700002C")]
		public DateTime DetectedTime
		{
			[Token(Token = "0x60000B1")]
			[Address(RVA = "0x5703B50", Offset = "0x5702B50", VA = "0x5703B50", Slot = "9")]
			[CompilerGenerated]
			get
			{
				return default(DateTime);
			}
			[Token(Token = "0x60000B2")]
			[Address(RVA = "0x5703B60", Offset = "0x5702B60", VA = "0x5703B60")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x14000002")]
		public event Action OnDetected
		{
			[Token(Token = "0x60000B3")]
			[Address(RVA = "0x5703B70", Offset = "0x5702B70", VA = "0x5703B70", Slot = "10")]
			add
			{
			}
			[Token(Token = "0x60000B4")]
			[Address(RVA = "0x5703B80", Offset = "0x5702B80", VA = "0x5703B80", Slot = "11")]
			remove
			{
			}
		}

		[Token(Token = "0x60000B5")]
		[Address(RVA = "0x5703B90", Offset = "0x5702B90", VA = "0x5703B90")]
		public VoiceDetectorDummy()
		{
		}
	}

	[Token(Token = "0x2000025")]
	public abstract class VoiceDetector<T> : IProcessor<T>, IDisposable, IVoiceDetector
	{
		[Token(Token = "0x40000A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float norm;

		[Token(Token = "0x40000A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float threshold;

		[Token(Token = "0x40000A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool detected;

		[Token(Token = "0x40000AB")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		[CompilerGenerated]
		private Action m_OnDetected;

		[Token(Token = "0x40000AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int activityDelay;

		[Token(Token = "0x40000AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int autoSilenceCounter;

		[Token(Token = "0x40000AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int valuesCountPerSec;

		[Token(Token = "0x40000AF")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int activityDelayValuesCount;

		[Token(Token = "0x1700002D")]
		public bool On
		{
			[Token(Token = "0x60000B6")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60000B7")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700002E")]
		public float Threshold
		{
			[Token(Token = "0x60000B8")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60000B9")]
			set
			{
			}
		}

		[Token(Token = "0x1700002F")]
		public bool Detected
		{
			[Token(Token = "0x60000BA")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60000BB")]
			protected set
			{
			}
		}

		[Token(Token = "0x17000030")]
		public DateTime DetectedTime
		{
			[Token(Token = "0x60000BC")]
			[CompilerGenerated]
			get
			{
				return default(DateTime);
			}
			[Token(Token = "0x60000BD")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000031")]
		public int ActivityDelayMs
		{
			[Token(Token = "0x60000BE")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60000BF")]
			set
			{
			}
		}

		[Token(Token = "0x14000003")]
		public event Action OnDetected
		{
			[Token(Token = "0x60000C0")]
			[CompilerGenerated]
			add
			{
			}
			[Token(Token = "0x60000C1")]
			[CompilerGenerated]
			remove
			{
			}
		}

		[Token(Token = "0x60000C2")]
		internal VoiceDetector(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x60000C3")]
		public abstract T[] Process(T[] buf);

		[Token(Token = "0x60000C4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000026")]
	public class VoiceDetectorFloat : VoiceDetector<float>
	{
		[Token(Token = "0x60000C5")]
		[Address(RVA = "0x5703BA0", Offset = "0x5702BA0", VA = "0x5703BA0")]
		public VoiceDetectorFloat(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x60000C6")]
		[Address(RVA = "0x5703BF0", Offset = "0x5702BF0", VA = "0x5703BF0", Slot = "16")]
		public override float[] Process(float[] buffer)
		{
			return null;
		}
	}

	[Token(Token = "0x2000027")]
	public class VoiceDetectorShort : VoiceDetector<short>
	{
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x5703CF0", Offset = "0x5702CF0", VA = "0x5703CF0")]
		public VoiceDetectorShort(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x5703D40", Offset = "0x5702D40", VA = "0x5703D40", Slot = "16")]
		public override short[] Process(short[] buffer)
		{
			return null;
		}
	}

	[Token(Token = "0x2000028")]
	public class VoiceLevelDetectCalibrate<T> : IProcessor<T>, IDisposable
	{
		[Token(Token = "0x40000B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private VoiceDetectorCalibration<T> calibration;

		[Token(Token = "0x17000032")]
		public ILevelMeter LevelMeter
		{
			[Token(Token = "0x60000C9")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60000CA")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000033")]
		public IVoiceDetector VoiceDetector
		{
			[Token(Token = "0x60000CB")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60000CC")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000034")]
		public bool IsCalibrating
		{
			[Token(Token = "0x60000CF")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60000CD")]
		public VoiceLevelDetectCalibrate(int samplingRate, int channels)
		{
		}

		[Token(Token = "0x60000CE")]
		public void Calibrate(int durationMs, [Optional] Action<float> onCalibrated)
		{
		}

		[Token(Token = "0x60000D0")]
		public T[] Process(T[] buf)
		{
			return null;
		}

		[Token(Token = "0x60000D1")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x600004F")]
	public static int ToneToBuf<T>(T[] buf, long timeSamples, int channels, double amp, double k, double phaseMod = 0.0)
	{
		return default(int);
	}

	[Token(Token = "0x6000050")]
	public static int ToneToBuf<T>(T[] buf, int offset, int length, long timeSamples, int channels, double amp, double k, double phaseMod = 0.0)
	{
		return default(int);
	}

	[Token(Token = "0x6000051")]
	public static int WaveformToBuf<T>(T[] buf, T[] waveform, long timePos)
	{
		return default(int);
	}

	[Token(Token = "0x6000052")]
	public static void Resample<T>(T[] src, T[] dst, int dstCount, int channels)
	{
	}

	[Token(Token = "0x6000053")]
	public static void Resample<T>(T[] src, int srcOffset, int srcCount, T[] dst, int dstOffset, int dstCount, int channels)
	{
	}

	[Token(Token = "0x6000054")]
	public static void Resample<T>(T[] src, int srcOffset, int srcCount, int srcChannels, T[] dst, int dstOffset, int dstCount, int dstChannels)
	{
	}

	[Token(Token = "0x6000055")]
	[Address(RVA = "0x5703370", Offset = "0x5702370", VA = "0x5703370")]
	public static void ResampleAndConvert(short[] src, float[] dst, int dstCount, int channels)
	{
	}

	[Token(Token = "0x6000056")]
	[Address(RVA = "0x5703580", Offset = "0x5702580", VA = "0x5703580")]
	public static void ResampleAndConvert(float[] src, short[] dst, int dstCount, int channels)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x5703780", Offset = "0x5702780", VA = "0x5703780")]
	public static void Convert(float[] src, short[] dst, int dstCount)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x57037E0", Offset = "0x57027E0", VA = "0x57037E0")]
	public static void Convert(short[] src, float[] dst, int dstCount)
	{
	}

	[Token(Token = "0x6000059")]
	public static void ForceToStereo<T>(T[] src, T[] dst, int srcChannels)
	{
	}

	[Token(Token = "0x600005A")]
	internal static string tostr<T>(T[] x, int lim = 10)
	{
		return null;
	}
}
