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

[Token(Token = "0x2000015")]
public static class AudioUtil
{
	[Token(Token = "0x2000016")]
	public abstract class GeneratorReader<T> : IAudioReader<T>, IDataReader<T>, IDisposable, IAudioDesc
	{
		[Token(Token = "0x4000083")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private long timeSamples;

		[Token(Token = "0x4000084")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Func<double> clockSec;

		[Token(Token = "0x17000011")]
		public int Channels
		{
			[Token(Token = "0x600005E")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000012")]
		public int SamplingRate
		{
			[Token(Token = "0x600005F")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000013")]
		public string Error
		{
			[Token(Token = "0x6000060")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000061")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x600005D")]
		public GeneratorReader([Optional] Func<double> clockSec, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x6000062")]
		public void Dispose()
		{
		}

		[Token(Token = "0x6000063")]
		public bool Read(T[] buf)
		{
			return default(bool);
		}

		[Token(Token = "0x6000064")]
		protected abstract int Gen(T[] buf, long timeSamples);
	}

	[Token(Token = "0x2000018")]
	public abstract class GeneratorPusher<T> : IAudioPusher<T>, IAudioDesc, IDisposable
	{
		[Token(Token = "0x4000087")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Timer timer;

		[Token(Token = "0x4000088")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Action<T[]> callback;

		[Token(Token = "0x4000089")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ObjectFactory<T[], int> bufferFactory;

		[Token(Token = "0x400008A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected long timeSamples;

		[Token(Token = "0x400008B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int bufSamples;

		[Token(Token = "0x17000014")]
		public int Channels
		{
			[Token(Token = "0x600006C")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000015")]
		public int SamplingRate
		{
			[Token(Token = "0x600006D")]
			[CompilerGenerated]
			get
			{
				return default(int);
			}
		}

		[Token(Token = "0x17000016")]
		public string Error
		{
			[Token(Token = "0x600006E")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600006F")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6000068")]
		public GeneratorPusher(int bufSizeMs = 100, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x6000069")]
		public void SetCallback(Action<T[]> callback, ObjectFactory<T[], int> bufferFactory)
		{
		}

		[Token(Token = "0x600006A")]
		private void OnTimedEvent(object source, ElapsedEventArgs e)
		{
		}

		[Token(Token = "0x600006B")]
		protected abstract int Gen(T[] buf, long timeSamples);

		[Token(Token = "0x6000070")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000019")]
	public class ToneAudioReader<T> : GeneratorReader<T>
	{
		[Token(Token = "0x400008F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private double k;

		[Token(Token = "0x6000071")]
		public ToneAudioReader([Optional] Func<double> clockSec, double frequency = 440.0, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x6000072")]
		protected override int Gen(T[] buf, long timeSamples)
		{
			return default(int);
		}
	}

	[Token(Token = "0x200001A")]
	public class ToneAudioPusher<T> : GeneratorPusher<T>
	{
		[Token(Token = "0x4000090")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private double k;

		[Token(Token = "0x6000073")]
		public ToneAudioPusher(int frequency = 440, int bufSizeMs = 100, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x6000074")]
		protected override int Gen(T[] buf, long timeSamples)
		{
			return default(int);
		}
	}

	[Token(Token = "0x200001B")]
	public class WaveformAudioReader<T> : GeneratorReader<T>
	{
		[Token(Token = "0x17000017")]
		public T[] Waveform
		{
			[Token(Token = "0x6000077")]
			[CompilerGenerated]
			private get
			{
				return null;
			}
			[Token(Token = "0x6000078")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000075")]
		public WaveformAudioReader([Optional] Func<double> clockSec, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x6000076")]
		protected override int Gen(T[] buf, long timeSamples)
		{
			return default(int);
		}
	}

	[Token(Token = "0x200001C")]
	public class WaveformAudioPusher<T> : GeneratorPusher<T>
	{
		[Token(Token = "0x17000018")]
		public T[] Waveform
		{
			[Token(Token = "0x600007A")]
			[CompilerGenerated]
			private get
			{
				return null;
			}
			[Token(Token = "0x600007B")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x6000079")]
		public WaveformAudioPusher(int bufSizeMs = 100, int samplingRate = 48000, int channels = 1)
		{
		}

		[Token(Token = "0x600007C")]
		protected override int Gen(T[] buf, long timeSamples)
		{
			return default(int);
		}
	}

	[Token(Token = "0x200001D")]
	public class TempoUp<T>
	{
		[Token(Token = "0x4000093")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private readonly int sizeofT;

		[Token(Token = "0x4000094")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int channels;

		[Token(Token = "0x4000095")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int skipGroup;

		[Token(Token = "0x4000096")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int skipFactor;

		[Token(Token = "0x4000097")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int sign;

		[Token(Token = "0x4000098")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int waveCnt;

		[Token(Token = "0x4000099")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool skipping;

		[Token(Token = "0x600007D")]
		public void Begin(int channels, int changePerc, int skipGroup)
		{
		}

		[Token(Token = "0x600007E")]
		public int Process(T[] s, T[] d)
		{
			return default(int);
		}

		[Token(Token = "0x600007F")]
		public int End(T[] s)
		{
			return default(int);
		}

		[Token(Token = "0x6000080")]
		private int processFloat(float[] s, float[] d)
		{
			return default(int);
		}

		[Token(Token = "0x6000081")]
		public int endFloat(float[] s)
		{
			return default(int);
		}

		[Token(Token = "0x6000082")]
		private int processShort(short[] s, short[] d)
		{
			return default(int);
		}

		[Token(Token = "0x6000083")]
		public int endShort(short[] s)
		{
			return default(int);
		}

		[Token(Token = "0x6000084")]
		public TempoUp()
		{
		}
	}

	[Token(Token = "0x200001E")]
	public class Resampler<T> : IProcessor<T>, IDisposable
	{
		[Token(Token = "0x400009A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected T[] frameResampled;

		[Token(Token = "0x400009B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int channels;

		[Token(Token = "0x6000085")]
		public Resampler(int dstSize, int channels)
		{
		}

		[Token(Token = "0x6000086")]
		public T[] Process(T[] buf)
		{
			return null;
		}

		[Token(Token = "0x6000087")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x200001F")]
	public interface ILevelMeter
	{
		[Token(Token = "0x17000019")]
		float CurrentAvgAmp
		{
			[Token(Token = "0x6000088")]
			get;
		}

		[Token(Token = "0x1700001A")]
		float CurrentPeakAmp
		{
			[Token(Token = "0x6000089")]
			get;
		}

		[Token(Token = "0x1700001B")]
		float AccumAvgPeakAmp
		{
			[Token(Token = "0x600008A")]
			get;
		}

		[Token(Token = "0x600008B")]
		void ResetAccumAvgPeakAmp();
	}

	[Token(Token = "0x2000020")]
	public class LevelMeterDummy : ILevelMeter
	{
		[Token(Token = "0x1700001C")]
		public float CurrentAvgAmp
		{
			[Token(Token = "0x600008C")]
			[Address(RVA = "0x3F18B50", Offset = "0x3F18B50", VA = "0x3F18B50", Slot = "4")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700001D")]
		public float CurrentPeakAmp
		{
			[Token(Token = "0x600008D")]
			[Address(RVA = "0x3F18B60", Offset = "0x3F18B60", VA = "0x3F18B60", Slot = "5")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x1700001E")]
		public float AccumAvgPeakAmp
		{
			[Token(Token = "0x600008E")]
			[Address(RVA = "0x3F18B70", Offset = "0x3F18B70", VA = "0x3F18B70", Slot = "6")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x600008F")]
		[Address(RVA = "0x3F18B80", Offset = "0x3F18B80", VA = "0x3F18B80", Slot = "7")]
		public void ResetAccumAvgPeakAmp()
		{
		}

		[Token(Token = "0x6000090")]
		[Address(RVA = "0x3F18B90", Offset = "0x3F18B90", VA = "0x3F18B90")]
		public LevelMeterDummy()
		{
		}
	}

	[Token(Token = "0x2000021")]
	public abstract class LevelMeter<T> : IProcessor<T>, IDisposable, ILevelMeter
	{
		[Token(Token = "0x400009C")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float ampSum;

		[Token(Token = "0x400009D")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float ampPeak;

		[Token(Token = "0x400009E")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int bufferSize;

		[Token(Token = "0x400009F")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float[] prevValues;

		[Token(Token = "0x40000A0")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int prevValuesHead;

		[Token(Token = "0x40000A1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float accumAvgPeakAmpSum;

		[Token(Token = "0x40000A2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int accumAvgPeakAmpCount;

		[Token(Token = "0x40000A3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float currentPeakAmp;

		[Token(Token = "0x40000A4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float norm;

		[Token(Token = "0x1700001F")]
		public float CurrentAvgAmp
		{
			[Token(Token = "0x6000092")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x17000020")]
		public float CurrentPeakAmp
		{
			[Token(Token = "0x6000093")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x6000094")]
			protected set
			{
			}
		}

		[Token(Token = "0x17000021")]
		public float AccumAvgPeakAmp
		{
			[Token(Token = "0x6000095")]
			get
			{
				return default(float);
			}
		}

		[Token(Token = "0x6000091")]
		internal LevelMeter(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x6000096")]
		public void ResetAccumAvgPeakAmp()
		{
		}

		[Token(Token = "0x6000097")]
		public abstract T[] Process(T[] buf);

		[Token(Token = "0x6000098")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000022")]
	public class LevelMeterFloat : LevelMeter<float>
	{
		[Token(Token = "0x6000099")]
		[Address(RVA = "0x3F18BA0", Offset = "0x3F18BA0", VA = "0x3F18BA0")]
		public LevelMeterFloat(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x600009A")]
		[Address(RVA = "0x3F18BF0", Offset = "0x3F18BF0", VA = "0x3F18BF0", Slot = "10")]
		public override float[] Process(float[] buf)
		{
			return null;
		}
	}

	[Token(Token = "0x2000023")]
	public class LevelMeterShort : LevelMeter<short>
	{
		[Token(Token = "0x600009B")]
		[Address(RVA = "0x3F18CF0", Offset = "0x3F18CF0", VA = "0x3F18CF0")]
		public LevelMeterShort(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x600009C")]
		[Address(RVA = "0x3F18D40", Offset = "0x3F18D40", VA = "0x3F18D40", Slot = "10")]
		public override short[] Process(short[] buf)
		{
			return null;
		}
	}

	[Token(Token = "0x2000024")]
	public interface IVoiceDetector
	{
		[Token(Token = "0x17000022")]
		bool On
		{
			[Token(Token = "0x600009D")]
			get;
			[Token(Token = "0x600009E")]
			set;
		}

		[Token(Token = "0x17000023")]
		float Threshold
		{
			[Token(Token = "0x600009F")]
			get;
			[Token(Token = "0x60000A0")]
			set;
		}

		[Token(Token = "0x17000024")]
		bool Detected
		{
			[Token(Token = "0x60000A1")]
			get;
		}

		[Token(Token = "0x17000025")]
		DateTime DetectedTime
		{
			[Token(Token = "0x60000A2")]
			get;
		}

		[Token(Token = "0x17000026")]
		int ActivityDelayMs
		{
			[Token(Token = "0x60000A5")]
			get;
			[Token(Token = "0x60000A6")]
			set;
		}

		[Token(Token = "0x14000001")]
		event Action OnDetected;
	}

	[Token(Token = "0x2000025")]
	public class VoiceDetectorCalibration<T> : IProcessor<T>, IDisposable
	{
		[Token(Token = "0x40000A5")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private IVoiceDetector voiceDetector;

		[Token(Token = "0x40000A6")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private ILevelMeter levelMeter;

		[Token(Token = "0x40000A7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private int valuesPerSec;

		[Token(Token = "0x40000A8")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int calibrateCount;

		[Token(Token = "0x40000A9")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private Action<float> onCalibrated;

		[Token(Token = "0x17000027")]
		public bool IsCalibrating
		{
			[Token(Token = "0x60000A7")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60000A8")]
		public VoiceDetectorCalibration(IVoiceDetector voiceDetector, ILevelMeter levelMeter, int samplingRate, int channels)
		{
		}

		[Token(Token = "0x60000A9")]
		public void Calibrate(int durationMs, [Optional] Action<float> onCalibrated)
		{
		}

		[Token(Token = "0x60000AA")]
		public T[] Process(T[] buf)
		{
			return null;
		}

		[Token(Token = "0x60000AB")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000026")]
	public class VoiceDetectorDummy : IVoiceDetector
	{
		[Token(Token = "0x17000028")]
		public bool On
		{
			[Token(Token = "0x60000AC")]
			[Address(RVA = "0x3F18E20", Offset = "0x3F18E20", VA = "0x3F18E20", Slot = "4")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60000AD")]
			[Address(RVA = "0x3F18E30", Offset = "0x3F18E30", VA = "0x3F18E30", Slot = "5")]
			set
			{
			}
		}

		[Token(Token = "0x17000029")]
		public float Threshold
		{
			[Token(Token = "0x60000AE")]
			[Address(RVA = "0x3F18E40", Offset = "0x3F18E40", VA = "0x3F18E40", Slot = "6")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60000AF")]
			[Address(RVA = "0x3F18E50", Offset = "0x3F18E50", VA = "0x3F18E50", Slot = "7")]
			set
			{
			}
		}

		[Token(Token = "0x1700002A")]
		public bool Detected
		{
			[Token(Token = "0x60000B0")]
			[Address(RVA = "0x3F18E60", Offset = "0x3F18E60", VA = "0x3F18E60", Slot = "8")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x1700002B")]
		public int ActivityDelayMs
		{
			[Token(Token = "0x60000B1")]
			[Address(RVA = "0x3F18E70", Offset = "0x3F18E70", VA = "0x3F18E70", Slot = "12")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60000B2")]
			[Address(RVA = "0x3F18E80", Offset = "0x3F18E80", VA = "0x3F18E80", Slot = "13")]
			set
			{
			}
		}

		[Token(Token = "0x1700002C")]
		public DateTime DetectedTime
		{
			[Token(Token = "0x60000B3")]
			[Address(RVA = "0x3F18E90", Offset = "0x3F18E90", VA = "0x3F18E90", Slot = "9")]
			[CompilerGenerated]
			get
			{
				return default(DateTime);
			}
			[Token(Token = "0x60000B4")]
			[Address(RVA = "0x3F18EA0", Offset = "0x3F18EA0", VA = "0x3F18EA0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x14000002")]
		public event Action OnDetected
		{
			[Token(Token = "0x60000B5")]
			[Address(RVA = "0x3F18EB0", Offset = "0x3F18EB0", VA = "0x3F18EB0", Slot = "10")]
			add
			{
			}
			[Token(Token = "0x60000B6")]
			[Address(RVA = "0x3F18EC0", Offset = "0x3F18EC0", VA = "0x3F18EC0", Slot = "11")]
			remove
			{
			}
		}

		[Token(Token = "0x60000B7")]
		[Address(RVA = "0x3F18ED0", Offset = "0x3F18ED0", VA = "0x3F18ED0")]
		public VoiceDetectorDummy()
		{
		}
	}

	[Token(Token = "0x2000027")]
	public abstract class VoiceDetector<T> : IProcessor<T>, IDisposable, IVoiceDetector
	{
		[Token(Token = "0x40000AC")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float norm;

		[Token(Token = "0x40000AD")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected float threshold;

		[Token(Token = "0x40000AE")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private bool detected;

		[Token(Token = "0x40000B1")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int activityDelay;

		[Token(Token = "0x40000B2")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int autoSilenceCounter;

		[Token(Token = "0x40000B3")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int valuesCountPerSec;

		[Token(Token = "0x40000B4")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		protected int activityDelayValuesCount;

		[Token(Token = "0x1700002D")]
		public bool On
		{
			[Token(Token = "0x60000B8")]
			[CompilerGenerated]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60000B9")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x1700002E")]
		public float Threshold
		{
			[Token(Token = "0x60000BA")]
			get
			{
				return default(float);
			}
			[Token(Token = "0x60000BB")]
			set
			{
			}
		}

		[Token(Token = "0x1700002F")]
		public bool Detected
		{
			[Token(Token = "0x60000BC")]
			get
			{
				return default(bool);
			}
			[Token(Token = "0x60000BD")]
			protected set
			{
			}
		}

		[Token(Token = "0x17000030")]
		public DateTime DetectedTime
		{
			[Token(Token = "0x60000BE")]
			[CompilerGenerated]
			get
			{
				return default(DateTime);
			}
			[Token(Token = "0x60000BF")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000031")]
		public int ActivityDelayMs
		{
			[Token(Token = "0x60000C0")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60000C1")]
			set
			{
			}
		}

		[Token(Token = "0x14000003")]
		public event Action OnDetected
		{
			[Token(Token = "0x60000C2")]
			[CompilerGenerated]
			add
			{
			}
			[Token(Token = "0x60000C3")]
			[CompilerGenerated]
			remove
			{
			}
		}

		[Token(Token = "0x60000C4")]
		internal VoiceDetector(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x60000C5")]
		public abstract T[] Process(T[] buf);

		[Token(Token = "0x60000C6")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000028")]
	public class VoiceDetectorFloat : VoiceDetector<float>
	{
		[Token(Token = "0x60000C7")]
		[Address(RVA = "0x3F18EE0", Offset = "0x3F18EE0", VA = "0x3F18EE0")]
		public VoiceDetectorFloat(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x60000C8")]
		[Address(RVA = "0x3F18F30", Offset = "0x3F18F30", VA = "0x3F18F30", Slot = "16")]
		public override float[] Process(float[] buffer)
		{
			return null;
		}
	}

	[Token(Token = "0x2000029")]
	public class VoiceDetectorShort : VoiceDetector<short>
	{
		[Token(Token = "0x60000C9")]
		[Address(RVA = "0x3F19040", Offset = "0x3F19040", VA = "0x3F19040")]
		public VoiceDetectorShort(int samplingRate, int numChannels)
		{
		}

		[Token(Token = "0x60000CA")]
		[Address(RVA = "0x3F19090", Offset = "0x3F19090", VA = "0x3F19090", Slot = "16")]
		public override short[] Process(short[] buffer)
		{
			return null;
		}
	}

	[Token(Token = "0x200002A")]
	public class VoiceLevelDetectCalibrate<T> : IProcessor<T>, IDisposable
	{
		[Token(Token = "0x40000B7")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private VoiceDetectorCalibration<T> calibration;

		[Token(Token = "0x17000032")]
		public ILevelMeter LevelMeter
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

		[Token(Token = "0x17000033")]
		public IVoiceDetector VoiceDetector
		{
			[Token(Token = "0x60000CD")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60000CE")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000034")]
		public bool IsCalibrating
		{
			[Token(Token = "0x60000D1")]
			get
			{
				return default(bool);
			}
		}

		[Token(Token = "0x60000CF")]
		public VoiceLevelDetectCalibrate(int samplingRate, int channels)
		{
		}

		[Token(Token = "0x60000D0")]
		public void Calibrate(int durationMs, [Optional] Action<float> onCalibrated)
		{
		}

		[Token(Token = "0x60000D2")]
		public T[] Process(T[] buf)
		{
			return null;
		}

		[Token(Token = "0x60000D3")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x6000051")]
	public static int ToneToBuf<T>(T[] buf, long timeSamples, int channels, double amp, double k, double phaseMod = 0.0)
	{
		return default(int);
	}

	[Token(Token = "0x6000052")]
	public static int ToneToBuf<T>(T[] buf, int offset, int length, long timeSamples, int channels, double amp, double k, double phaseMod = 0.0)
	{
		return default(int);
	}

	[Token(Token = "0x6000053")]
	public static int WaveformToBuf<T>(T[] buf, T[] waveform, long timePos)
	{
		return default(int);
	}

	[Token(Token = "0x6000054")]
	public static void Resample<T>(T[] src, T[] dst, int dstCount, int channels)
	{
	}

	[Token(Token = "0x6000055")]
	public static void Resample<T>(T[] src, int srcOffset, int srcCount, T[] dst, int dstOffset, int dstCount, int channels)
	{
	}

	[Token(Token = "0x6000056")]
	public static void Resample<T>(T[] src, int srcOffset, int srcCount, int srcChannels, T[] dst, int dstOffset, int dstCount, int dstChannels)
	{
	}

	[Token(Token = "0x6000057")]
	[Address(RVA = "0x3F18690", Offset = "0x3F18690", VA = "0x3F18690")]
	public static void ResampleAndConvert(short[] src, float[] dst, int dstCount, int channels)
	{
	}

	[Token(Token = "0x6000058")]
	[Address(RVA = "0x3F18890", Offset = "0x3F18890", VA = "0x3F18890")]
	public static void ResampleAndConvert(float[] src, short[] dst, int dstCount, int channels)
	{
	}

	[Token(Token = "0x6000059")]
	[Address(RVA = "0x3F18A90", Offset = "0x3F18A90", VA = "0x3F18A90")]
	public static void Convert(float[] src, short[] dst, int dstCount)
	{
	}

	[Token(Token = "0x600005A")]
	[Address(RVA = "0x3F18AF0", Offset = "0x3F18AF0", VA = "0x3F18AF0")]
	public static void Convert(short[] src, float[] dst, int dstCount)
	{
	}

	[Token(Token = "0x600005B")]
	public static void ForceToStereo<T>(T[] src, T[] dst, int srcChannels)
	{
	}

	[Token(Token = "0x600005C")]
	internal static string tostr<T>(T[] x, int lim = 10)
	{
		return null;
	}
}
