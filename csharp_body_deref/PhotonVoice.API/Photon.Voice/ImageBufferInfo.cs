// ==================== AoTTG2 cross-reference ====================
// Type: Photon.Voice.ImageBufferInfo
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source (older reference): Assets/Photon/PhotonVoice/PhotonVoiceApi/Core/VoiceCodec.cs
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace Photon.Voice;

[Token(Token = "0x2000087")]
public struct ImageBufferInfo
{
	[Token(Token = "0x2000088")]
	public struct StrideSet
	{
		[Token(Token = "0x400021A")]
		[FieldOffset(Offset = "0x0")]
		private int stride0;

		[Token(Token = "0x400021B")]
		[FieldOffset(Offset = "0x4")]
		private int stride1;

		[Token(Token = "0x400021C")]
		[FieldOffset(Offset = "0x8")]
		private int stride2;

		[Token(Token = "0x400021D")]
		[FieldOffset(Offset = "0xC")]
		private int stride3;

		[Token(Token = "0x170000C9")]
		public int this[int key]
		{
			[Token(Token = "0x60002DF")]
			[Address(RVA = "0x3F2F940", Offset = "0x3F2F940", VA = "0x3F2F940")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60002E0")]
			[Address(RVA = "0x3F2F970", Offset = "0x3F2F970", VA = "0x3F2F970")]
			set
			{
			}
		}

		[Token(Token = "0x170000CA")]
		public int Length
		{
			[Token(Token = "0x60002E1")]
			[Address(RVA = "0x3F2F9A0", Offset = "0x3F2F9A0", VA = "0x3F2F9A0")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60002E2")]
			[Address(RVA = "0x3F2F9B0", Offset = "0x3F2F9B0", VA = "0x3F2F9B0")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x3F2F920", Offset = "0x3F2F920", VA = "0x3F2F920")]
		public StrideSet(int length, int s0 = 0, int s1 = 0, int s2 = 0, int s3 = 0)
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public readonly int Width
	{
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x3F2F800", Offset = "0x3F2F800", VA = "0x3F2F800")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C4")]
	public readonly int Height
	{
		[Token(Token = "0x60002D6")]
		[Address(RVA = "0x3F2F810", Offset = "0x3F2F810", VA = "0x3F2F810")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C5")]
	public readonly StrideSet Stride
	{
		[Token(Token = "0x60002D7")]
		[Address(RVA = "0x3F2F820", Offset = "0x3F2F820", VA = "0x3F2F820")]
		[CompilerGenerated]
		get
		{
			return default(StrideSet);
		}
	}

	[Token(Token = "0x170000C6")]
	public readonly ImageFormat Format
	{
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x3F2F840", Offset = "0x3F2F840", VA = "0x3F2F840")]
		[CompilerGenerated]
		get
		{
			return default(ImageFormat);
		}
	}

	[Token(Token = "0x170000C7")]
	public Rotation Rotation
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x3F2F850", Offset = "0x3F2F850", VA = "0x3F2F850")]
		[CompilerGenerated]
		readonly get
		{
			return default(Rotation);
		}
		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x3F2F860", Offset = "0x3F2F860", VA = "0x3F2F860")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	public Flip Flip
	{
		[Token(Token = "0x60002DB")]
		[Address(RVA = "0x3F2F870", Offset = "0x3F2F870", VA = "0x3F2F870")]
		[CompilerGenerated]
		readonly get
		{
			return default(Flip);
		}
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x3F2F880", Offset = "0x3F2F880", VA = "0x3F2F880")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x3F2F890", Offset = "0x3F2F890", VA = "0x3F2F890")]
	public ImageBufferInfo(int width, int height, StrideSet stride, ImageFormat format)
	{
	}
}
