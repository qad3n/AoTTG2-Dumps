using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using POpusCodec;

namespace Photon.Voice;

[Token(Token = "0x2000048")]
public class OpusCodec
{
	[Token(Token = "0x2000049")]
	public enum FrameDuration
	{
		[Token(Token = "0x4000131")]
		Frame2dot5ms = 2500,
		[Token(Token = "0x4000132")]
		Frame5ms = 5000,
		[Token(Token = "0x4000133")]
		Frame10ms = 10000,
		[Token(Token = "0x4000134")]
		Frame20ms = 20000,
		[Token(Token = "0x4000135")]
		Frame40ms = 40000,
		[Token(Token = "0x4000136")]
		Frame60ms = 60000
	}

	[Token(Token = "0x200004A")]
	public static class Factory
	{
		[Token(Token = "0x6000188")]
		public static IEncoder CreateEncoder<B>(VoiceInfo i, ILogger logger)
		{
			return null;
		}
	}

	[Token(Token = "0x200004B")]
	public abstract class Encoder<T> : IEncoderDirect<T[]>, IEncoder, IDisposable
	{
		[Token(Token = "0x4000137")]
		[FieldOffset(Offset = "0x0")]
		protected OpusEncoder encoder;

		[Token(Token = "0x4000138")]
		[FieldOffset(Offset = "0x0")]
		protected bool disposed;

		[Token(Token = "0x400013A")]
		[FieldOffset(Offset = "0x0")]
		private Action<ArraySegment<byte>, FrameFlags> output;

		[Token(Token = "0x400013B")]
		[FieldOffset(Offset = "0x0")]
		private static readonly ArraySegment<byte> EmptyBuffer;

		[Token(Token = "0x17000063")]
		public string Error
		{
			[Token(Token = "0x600018A")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600018B")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000064")]
		public Action<ArraySegment<byte>, FrameFlags> Output
		{
			[Token(Token = "0x600018D")]
			get
			{
				return null;
			}
			[Token(Token = "0x600018C")]
			set
			{
			}
		}

		[Token(Token = "0x6000189")]
		protected Encoder(VoiceInfo i, ILogger logger)
		{
		}

		[Token(Token = "0x600018E")]
		public void Input(T[] buf)
		{
		}

		[Token(Token = "0x600018F")]
		public void EndOfStream()
		{
		}

		[Token(Token = "0x6000190")]
		public ArraySegment<byte> DequeueOutput(out FrameFlags flags)
		{
			return default(ArraySegment<byte>);
		}

		[Token(Token = "0x6000191")]
		protected abstract void encodeTyped(T[] buf);

		[Token(Token = "0x6000192")]
		public I GetPlatformAPI<I>() where I : class
		{
			return null;
		}

		[Token(Token = "0x6000193")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x200004C")]
	public class EncoderFloat : Encoder<float>
	{
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x3C25090", Offset = "0x3C25090", VA = "0x3C25090")]
		internal EncoderFloat(VoiceInfo i, ILogger logger)
		{
		}

		[Token(Token = "0x6000196")]
		[Address(RVA = "0x3C25140", Offset = "0x3C25140", VA = "0x3C25140", Slot = "11")]
		protected override void encodeTyped(float[] buf)
		{
		}
	}

	[Token(Token = "0x200004D")]
	public class EncoderShort : Encoder<short>
	{
		[Token(Token = "0x6000197")]
		[Address(RVA = "0x3C25160", Offset = "0x3C25160", VA = "0x3C25160")]
		internal EncoderShort(VoiceInfo i, ILogger logger)
		{
		}

		[Token(Token = "0x6000198")]
		[Address(RVA = "0x3C25210", Offset = "0x3C25210", VA = "0x3C25210", Slot = "11")]
		protected override void encodeTyped(short[] buf)
		{
		}
	}

	[Token(Token = "0x200004E")]
	public class Decoder<T> : IDecoder, IDisposable
	{
		[Token(Token = "0x400013C")]
		[FieldOffset(Offset = "0x0")]
		protected OpusDecoder<T> decoder;

		[Token(Token = "0x400013D")]
		[FieldOffset(Offset = "0x0")]
		private ILogger logger;

		[Token(Token = "0x400013F")]
		[FieldOffset(Offset = "0x0")]
		private Action<FrameOut<T>> output;

		[Token(Token = "0x17000065")]
		public string Error
		{
			[Token(Token = "0x600019B")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600019C")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6000199")]
		public Decoder(Action<FrameOut<T>> output, ILogger logger)
		{
		}

		[Token(Token = "0x600019A")]
		public void Open(VoiceInfo i)
		{
		}

		[Token(Token = "0x600019D")]
		public void Dispose()
		{
		}

		[Token(Token = "0x600019E")]
		public void Input(ref FrameBuffer buf)
		{
		}
	}

	[Token(Token = "0x200004F")]
	public class Util
	{
		[Token(Token = "0x600019F")]
		[Address(RVA = "0x3C25230", Offset = "0x3C25230", VA = "0x3C25230")]
		internal static int bestEncoderSampleRate(int f)
		{
			return default(int);
		}

		[Token(Token = "0x60001A0")]
		[Address(RVA = "0x3C25650", Offset = "0x3C25650", VA = "0x3C25650")]
		public Util()
		{
		}
	}

	[Token(Token = "0x17000062")]
	public static string Version
	{
		[Token(Token = "0x6000186")]
		[Address(RVA = "0x3C25070", Offset = "0x3C25070", VA = "0x3C25070")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x3C25080", Offset = "0x3C25080", VA = "0x3C25080")]
	public OpusCodec()
	{
	}
}
