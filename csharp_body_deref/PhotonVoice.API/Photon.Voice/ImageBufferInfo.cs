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
			[Address(RVA = "0x3C39FF0", Offset = "0x3C39FF0", VA = "0x3C39FF0")]
			get
			{
				return default(int);
			}
			[Token(Token = "0x60002E0")]
			[Address(RVA = "0x3C3A020", Offset = "0x3C3A020", VA = "0x3C3A020")]
			set
			{
			}
		}

		[Token(Token = "0x170000CA")]
		public int Length
		{
			[Token(Token = "0x60002E1")]
			[Address(RVA = "0x3C3A050", Offset = "0x3C3A050", VA = "0x3C3A050")]
			[CompilerGenerated]
			readonly get
			{
				return default(int);
			}
			[Token(Token = "0x60002E2")]
			[Address(RVA = "0x3C3A060", Offset = "0x3C3A060", VA = "0x3C3A060")]
			[CompilerGenerated]
			private set
			{
			}
		}

		[Token(Token = "0x60002DE")]
		[Address(RVA = "0x3C39FD0", Offset = "0x3C39FD0", VA = "0x3C39FD0")]
		public StrideSet(int length, int s0 = 0, int s1 = 0, int s2 = 0, int s3 = 0)
		{
		}
	}

	[Token(Token = "0x170000C3")]
	public readonly int Width
	{
		[Token(Token = "0x60002D5")]
		[Address(RVA = "0x3C39EB0", Offset = "0x3C39EB0", VA = "0x3C39EB0")]
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
		[Address(RVA = "0x3C39EC0", Offset = "0x3C39EC0", VA = "0x3C39EC0")]
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
		[Address(RVA = "0x3C39ED0", Offset = "0x3C39ED0", VA = "0x3C39ED0")]
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
		[Address(RVA = "0x3C39EF0", Offset = "0x3C39EF0", VA = "0x3C39EF0")]
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
		[Address(RVA = "0x3C39F00", Offset = "0x3C39F00", VA = "0x3C39F00")]
		[CompilerGenerated]
		readonly get
		{
			return default(Rotation);
		}
		[Token(Token = "0x60002DA")]
		[Address(RVA = "0x3C39F10", Offset = "0x3C39F10", VA = "0x3C39F10")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x170000C8")]
	public Flip Flip
	{
		[Token(Token = "0x60002DB")]
		[Address(RVA = "0x3C39F20", Offset = "0x3C39F20", VA = "0x3C39F20")]
		[CompilerGenerated]
		readonly get
		{
			return default(Flip);
		}
		[Token(Token = "0x60002DC")]
		[Address(RVA = "0x3C39F30", Offset = "0x3C39F30", VA = "0x3C39F30")]
		[CompilerGenerated]
		set
		{
		}
	}

	[Token(Token = "0x60002DD")]
	[Address(RVA = "0x3C39F40", Offset = "0x3C39F40", VA = "0x3C39F40")]
	public ImageBufferInfo(int width, int height, StrideSet stride, ImageFormat format)
	{
	}
}
