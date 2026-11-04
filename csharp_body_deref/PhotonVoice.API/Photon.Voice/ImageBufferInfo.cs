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

[Token(Token = "0x2000085")]
public struct ImageBufferInfo
{
	[Token(Token = "0x2000086")]
	public struct StrideSet
	{
		[Token(Token = "0x4000215")]
		[FieldOffset(Offset = "0x0")]
		private int stride0;

		[Token(Token = "0x4000216")]
		[FieldOffset(Offset = "0x4")]
		private int stride1;

		[Token(Token = "0x4000217")]
		[FieldOffset(Offset = "0x8")]
		private int stride2;

		[Token(Token = "0x4000218")]
		[FieldOffset(Offset = "0xC")]
		private int stride3;

		[Token(Token = "0x170000C9")]
		public int this[int key]
		{
			[Token(Token = "0x60002DD")]
			[Address(RVA = "0x1D76000", Offset = "0x1D74600", VA = "0x181D76000")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60002DE")]
			[Address(RVA = "0x1D76030", Offset = "0x1D74630", VA = "0x181D76030")]
			set
			{
			}
		}

		[Token(Token = "0x170000CA")]
		public int Length
		{
			[Token(Token = "0x60002DF")]
			[Address(RVA = "0x546860", Offset = "0x544E60", VA = "0x180546860")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60002E0")]
			[Address(RVA = "0x560B20", Offset = "0x55F120", VA = "0x180560B20")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x1D75FE0", Offset = "0x1D745E0", VA = "0x181D75FE0")]
		public StrideSet(int length, int s0 = 0, int s1 = 0, int s2 = 0, int s3 = 0)
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public readonly int Width
	{
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x57AED0", Offset = "0x5794D0", VA = "0x18057AED0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C4")]
	public readonly int Height
	{
		[Token(Token = "0x60002D4")]
		[Address(RVA = "0x57AEC0", Offset = "0x5794C0", VA = "0x18057AEC0")]
		[CompilerGenerated]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000C5")]
	public readonly StrideSet Stride
	{
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x1797280", Offset = "0x1795880", VA = "0x181797280")]
		[CompilerGenerated]
		get
		{
			return default(StrideSet);
		}
	}

	[Token(Token = "0x170000C6")]
	public readonly ImageFormat Format
	{
		[Token(Token = "0x60002D6")]
		[Address(RVA = "0xD23EC0", Offset = "0xD224C0", VA = "0x180D23EC0")]
		[CompilerGenerated]
		get
		{
			return default(ImageFormat);
		}
	}

	[Token(Token = "0x170000C7")]
	public Rotation Rotation
	{
		[Token(Token = "0x60002D7")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		[CompilerGenerated]
		readonly get
		{
			return default(Rotation);
		}
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0xE4C6E0", Offset = "0xE4ACE0", VA = "0x180E4C6E0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	public Flip Flip
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x1C612C0", Offset = "0x1C5F8C0", VA = "0x181C612C0")]
		[CompilerGenerated]
		readonly get
		{
			return default(Flip);
		}
		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x1C613A0", Offset = "0x1C5F9A0", VA = "0x181C613A0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x1D6A6B0", Offset = "0x1D68CB0", VA = "0x181D6A6B0")]
	public ImageBufferInfo(int width, int height, StrideSet stride, ImageFormat format)
	{
	}
}
