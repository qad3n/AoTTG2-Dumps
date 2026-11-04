// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.OpusCodec
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/OpusCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using POpusCodec;

namespace Photon.Voice;

[Token(Token = "0x2000046")]
public class OpusCodec
{
	[Token(Token = "0x2000047")]
	public enum FrameDuration
	{
		[Token(Token = "0x400012C")]
		Frame2dot5ms = 2500,
		[Token(Token = "0x400012D")]
		Frame5ms = 5000,
		[Token(Token = "0x400012E")]
		Frame10ms = 10000,
		[Token(Token = "0x400012F")]
		Frame20ms = 20000,
		[Token(Token = "0x4000130")]
		Frame40ms = 40000,
		[Token(Token = "0x4000131")]
		Frame60ms = 60000
	}

	[Token(Token = "0x2000048")]
	public static class Factory
	{
		[Token(Token = "0x6000186")]
		public static IEncoder CreateEncoder<B>(VoiceInfo i, ILogger logger)
		{
			return null;
		}
	}

	[Token(Token = "0x2000049")]
	public abstract class Encoder<T> : IEncoderDirect<T[]>, IEncoder, IDisposable
	{
		[Token(Token = "0x4000132")]
		[FieldOffset(Offset = "0x0")]
		protected OpusEncoder encoder;

		[Token(Token = "0x4000133")]
		[FieldOffset(Offset = "0x0")]
		protected bool disposed;

		[Token(Token = "0x4000135")]
		[FieldOffset(Offset = "0x0")]
		private Action<ArraySegment<byte>, FrameFlags> output;

		[Token(Token = "0x4000136")]
		[FieldOffset(Offset = "0x0")]
		private static readonly ArraySegment<byte> EmptyBuffer;

		[Token(Token = "0x17000063")]
		public string Error
		{
			[Token(Token = "0x6000188")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x6000189")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000064")]
		public Action<ArraySegment<byte>, FrameFlags> Output
		{
			[Token(Token = "0x600018B")]
			get
			{
				return null;
			}
			[Token(Token = "0x600018A")]
			set
			{
			}
		}

		[Token(Token = "0x6000187")]
		protected Encoder(VoiceInfo i, ILogger logger)
		{
		}

		[Token(Token = "0x600018C")]
		public void Input(T[] buf)
		{
		}

		[Token(Token = "0x600018D")]
		public void EndOfStream()
		{
		}

		[Token(Token = "0x600018E")]
		public ArraySegment<byte> DequeueOutput(out FrameFlags flags)
		{
			return default(ArraySegment<byte>);
		}

		[Token(Token = "0x600018F")]
		protected abstract void encodeTyped(T[] buf);

		[Token(Token = "0x6000190")]
		public I GetPlatformAPI<I>() where I : class
		{
			return null;
		}

		[Token(Token = "0x6000191")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x200004A")]
	public class EncoderFloat : Encoder<float>
	{
		[Token(Token = "0x6000193")]
		[Address(RVA = "0x1D69910", Offset = "0x1D67F10", VA = "0x181D69910")]
		internal EncoderFloat(VoiceInfo i, ILogger logger)
		{
		}

		[Token(Token = "0x6000194")]
		[Address(RVA = "0x1D699B0", Offset = "0x1D67FB0", VA = "0x181D699B0", Slot = "11")]
		protected override void encodeTyped(float[] buf)
		{
		}
	}

	[Token(Token = "0x200004B")]
	public class EncoderShort : Encoder<short>
	{
		[Token(Token = "0x6000195")]
		[Address(RVA = "0x1D69A70", Offset = "0x1D68070", VA = "0x181D69A70")]
		internal EncoderShort(VoiceInfo i, ILogger logger)
		{
		}

		[Token(Token = "0x6000196")]
		[Address(RVA = "0x1D69B10", Offset = "0x1D68110", VA = "0x181D69B10", Slot = "11")]
		protected override void encodeTyped(short[] buf)
		{
		}
	}

	[Token(Token = "0x200004C")]
	public class Decoder<T> : IDecoder, IDisposable
	{
		[Token(Token = "0x4000137")]
		[FieldOffset(Offset = "0x0")]
		protected OpusDecoder<T> decoder;

		[Token(Token = "0x4000138")]
		[FieldOffset(Offset = "0x0")]
		private ILogger logger;

		[Token(Token = "0x400013A")]
		[FieldOffset(Offset = "0x0")]
		private Action<FrameOut<T>> output;

		[Token(Token = "0x17000065")]
		public string Error
		{
			[Token(Token = "0x6000199")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x600019A")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x6000197")]
		public Decoder(Action<FrameOut<T>> output, ILogger logger)
		{
		}

		[Token(Token = "0x6000198")]
		public void Open(VoiceInfo i)
		{
		}

		[Token(Token = "0x600019B")]
		public void Dispose()
		{
		}

		[Token(Token = "0x600019C")]
		public void Input(ref FrameBuffer buf)
		{
		}
	}

	[Token(Token = "0x200004D")]
	public class Util
	{
		[Token(Token = "0x600019D")]
		[Address(RVA = "0x1D76F00", Offset = "0x1D75500", VA = "0x181D76F00")]
		internal static int bestEncoderSampleRate(int f)
		{
			return default(int);
		}

		[Token(Token = "0x600019E")]
		[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
		public Util()
		{
		}
	}

	[Token(Token = "0x17000062")]
	public static string Version
	{
		[Token(Token = "0x6000184")]
		[Address(RVA = "0x1D6EFE0", Offset = "0x1D6D5E0", VA = "0x181D6EFE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x54C890", Offset = "0x54AE90", VA = "0x18054C890")]
	public OpusCodec()
	{
	}
}
