// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.RawCodec
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/RawCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x200004F")]
public class RawCodec
{
	[Token(Token = "0x2000050")]
	public class Encoder<T> : IEncoderDirect<T[]>, IEncoder, IDisposable
	{
		[Token(Token = "0x400013D")]
		[FieldOffset(Offset = "0x0")]
		private int sizeofT;

		[Token(Token = "0x400013E")]
		[FieldOffset(Offset = "0x0")]
		private byte[] byteBuf;

		[Token(Token = "0x400013F")]
		[FieldOffset(Offset = "0x0")]
		private static readonly ArraySegment<byte> EmptyBuffer;

		[Token(Token = "0x17000066")]
		public string Error
		{
			[Token(Token = "0x60001A4")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60001A5")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x17000067")]
		public Action<ArraySegment<byte>, FrameFlags> Output
		{
			[Token(Token = "0x60001A7")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60001A6")]
			[CompilerGenerated]
			set
			{
			}
		}

		[Token(Token = "0x60001A8")]
		public ArraySegment<byte> DequeueOutput(out FrameFlags flags)
		{
			return default(ArraySegment<byte>);
		}

		[Token(Token = "0x60001A9")]
		public void EndOfStream()
		{
		}

		[Token(Token = "0x60001AA")]
		public I GetPlatformAPI<I>() where I : class
		{
			return null;
		}

		[Token(Token = "0x60001AB")]
		public void Dispose()
		{
		}

		[Token(Token = "0x60001AC")]
		public void Input(T[] buf)
		{
		}

		[Token(Token = "0x60001AD")]
		public Encoder()
		{
		}
	}

	[Token(Token = "0x2000051")]
	public class Decoder<T> : IDecoder, IDisposable
	{
		[Token(Token = "0x4000141")]
		[FieldOffset(Offset = "0x0")]
		private T[] buf;

		[Token(Token = "0x4000142")]
		[FieldOffset(Offset = "0x0")]
		private int sizeofT;

		[Token(Token = "0x4000143")]
		[FieldOffset(Offset = "0x0")]
		private Action<FrameOut<T>> output;

		[Token(Token = "0x17000068")]
		public string Error
		{
			[Token(Token = "0x60001AF")]
			[CompilerGenerated]
			get
			{
				return null;
			}
			[Token(Token = "0x60001B0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60001B1")]
		public Decoder(Action<FrameOut<T>> output)
		{
		}

		[Token(Token = "0x60001B2")]
		public void Open(VoiceInfo info)
		{
		}

		[Token(Token = "0x60001B3")]
		public void Input(ref FrameBuffer byteBuf)
		{
		}

		[Token(Token = "0x60001B4")]
		public void Dispose()
		{
		}
	}

	[Token(Token = "0x2000052")]
	public class ShortToFloat
	{
		[Token(Token = "0x4000144")]
		[FieldOffset(Offset = "0x10")]
		private Action<FrameOut<float>> output;

		[Token(Token = "0x4000145")]
		[FieldOffset(Offset = "0x18")]
		private float[] buf;

		[Token(Token = "0x60001B5")]
		[Address(RVA = "0x5705CD0", Offset = "0x5704CD0", VA = "0x5705CD0")]
		public ShortToFloat(Action<FrameOut<float>> output)
		{
		}

		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x5705D40", Offset = "0x5704D40", VA = "0x5705D40")]
		public void Output(FrameOut<short> shortBuf)
		{
		}
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x5705CC0", Offset = "0x5704CC0", VA = "0x5705CC0")]
	public RawCodec()
	{
	}
}
