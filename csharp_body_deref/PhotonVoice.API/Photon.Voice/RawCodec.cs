using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000051")]
public class RawCodec
{
	[Token(Token = "0x2000052")]
	public class Encoder<T> : IEncoderDirect<T[]>, IEncoder, IDisposable
	{
		[Token(Token = "0x4000142")]
		[FieldOffset(Offset = "0x0")]
		private int sizeofT;

		[Token(Token = "0x4000143")]
		[FieldOffset(Offset = "0x0")]
		private byte[] byteBuf;

		[Token(Token = "0x4000144")]
		[FieldOffset(Offset = "0x0")]
		private static readonly ArraySegment<byte> EmptyBuffer;

		[Token(Token = "0x17000066")]
		public string Error
		{
			[Token(Token = "0x60001A6")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60001A7")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000067")]
		public Action<ArraySegment<byte>, FrameFlags> Output
		{
			[Token(Token = "0x60001A9")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60001A8")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60001AA")]
		public ArraySegment<byte> DequeueOutput(out FrameFlags flags)
		{
			return default(ArraySegment<byte>);
		}

		[Token(Token = "0x60001AB")]
		public void EndOfStream()
		{
		}

		[Token(Token = "0x60001AC")]
		public I GetPlatformAPI<I>() where I : class
		{
			return null;
		}

		[Token(Token = "0x60001AD")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60001AE")]
		public void Input(T[] buf)
		{
		}

		[Token(Token = "0x60001AF")]
		public Encoder()
		{
		}
	}

	[Token(Token = "0x2000053")]
	public class Decoder<T> : IDecoder, IDisposable
	{
		[Token(Token = "0x4000146")]
		[FieldOffset(Offset = "0x0")]
		private T[] buf;

		[Token(Token = "0x4000147")]
		[FieldOffset(Offset = "0x0")]
		private int sizeofT;

		[Token(Token = "0x4000148")]
		[FieldOffset(Offset = "0x0")]
		private Action<FrameOut<T>> output;

		[Token(Token = "0x17000068")]
		public string Error
		{
			[Token(Token = "0x60001B1")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60001B2")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60001B3")]
		public Decoder(Action<FrameOut<T>> output)
		{
		}

		[Token(Token = "0x60001B4")]
		public void Open(VoiceInfo info)
		{
		}

		[Token(Token = "0x60001B5")]
		public void Input(ref FrameBuffer byteBuf)
		{
		}

		[Token(Token = "0x60001B6")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000054")]
	public class ShortToFloat
	{
		[Token(Token = "0x4000149")]
		[FieldOffset(Offset = "0x10")]
		private Action<FrameOut<float>> output;

		[Token(Token = "0x400014A")]
		[FieldOffset(Offset = "0x18")]
		private float[] buf;

		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x3C257D0", Offset = "0x3C257D0", VA = "0x3C257D0")]
		public ShortToFloat(Action<FrameOut<float>> output)
		{
		}

		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x3C25840", Offset = "0x3C25840", VA = "0x3C25840")]
		public void Output(FrameOut<short> shortBuf)
		{
		}
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x3C257C0", Offset = "0x3C257C0", VA = "0x3C257C0")]
	public RawCodec()
	{
	}
}
