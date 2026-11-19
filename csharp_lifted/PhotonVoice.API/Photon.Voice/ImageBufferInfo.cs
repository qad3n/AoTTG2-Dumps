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
			[Address(RVA = "0x5719CD0", Offset = "0x5718CD0", VA = "0x5719CD0")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60002DE")]
			[Address(RVA = "0x5719D00", Offset = "0x5718D00", VA = "0x5719D00")]
			set
			{
			}
		}

		[Token(Token = "0x170000CA")]
		public int Length
		{
			[Token(Token = "0x60002DF")]
			[Address(RVA = "0x5719D30", Offset = "0x5718D30", VA = "0x5719D30")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60002E0")]
			[Address(RVA = "0x5719D40", Offset = "0x5718D40", VA = "0x5719D40")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x5719CB0", Offset = "0x5718CB0", VA = "0x5719CB0")]
		public StrideSet(int length, int s0 = 0, int s1 = 0, int s2 = 0, int s3 = 0)
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public readonly int Width
	{
		[Token(Token = "0x60002D3")]
		[Address(RVA = "0x5719B90", Offset = "0x5718B90", VA = "0x5719B90")]
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
		[Address(RVA = "0x5719BA0", Offset = "0x5718BA0", VA = "0x5719BA0")]
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
		[Address(RVA = "0x5719BB0", Offset = "0x5718BB0", VA = "0x5719BB0")]
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
		[Address(RVA = "0x5719BD0", Offset = "0x5718BD0", VA = "0x5719BD0")]
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
		[Address(RVA = "0x5719BE0", Offset = "0x5718BE0", VA = "0x5719BE0")]
		[CompilerGenerated]
		readonly get
		{
			return default(Rotation);
		}
		[Token(Token = "0x60002D8")]
		[Address(RVA = "0x5719BF0", Offset = "0x5718BF0", VA = "0x5719BF0")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	public Flip Flip
	{
		[Token(Token = "0x60002D9")]
		[Address(RVA = "0x5719C00", Offset = "0x5718C00", VA = "0x5719C00")]
		[CompilerGenerated]
		readonly get
		{
			return default(Flip);
		}
		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x5719C10", Offset = "0x5718C10", VA = "0x5719C10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60002DB")]
	[Address(RVA = "0x5719C20", Offset = "0x5718C20", VA = "0x5719C20")]
	public ImageBufferInfo(int width, int height, StrideSet stride, ImageFormat format)
	{
	}
}
