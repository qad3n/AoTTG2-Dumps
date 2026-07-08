using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x2000504")]
internal struct LayoutComputedData
{
	[Token(Token = "0x40010BB")]
	[FieldOffset(Offset = "0x0")]
	public unsafe fixed float Position[4];

	[Token(Token = "0x40010BC")]
	[FieldOffset(Offset = "0x10")]
	public unsafe fixed float Dimensions[2];

	[Token(Token = "0x40010BD")]
	[FieldOffset(Offset = "0x18")]
	public unsafe fixed float Margin[6];

	[Token(Token = "0x40010BE")]
	[FieldOffset(Offset = "0x30")]
	public unsafe fixed float Border[6];

	[Token(Token = "0x40010BF")]
	[FieldOffset(Offset = "0x48")]
	public unsafe fixed float Padding[6];

	[Token(Token = "0x40010C0")]
	[FieldOffset(Offset = "0x60")]
	public LayoutDirection Direction;

	[Token(Token = "0x40010C1")]
	[FieldOffset(Offset = "0x64")]
	public uint ComputedFlexBasisGeneration;

	[Token(Token = "0x40010C2")]
	[FieldOffset(Offset = "0x68")]
	public float ComputedFlexBasis;

	[Token(Token = "0x40010C3")]
	[FieldOffset(Offset = "0x6C")]
	public bool HadOverflow;

	[Token(Token = "0x40010C4")]
	[FieldOffset(Offset = "0x70")]
	public uint GenerationCount;

	[Token(Token = "0x40010C5")]
	[FieldOffset(Offset = "0x74")]
	public LayoutDirection LastParentDirection;

	[Token(Token = "0x40010C6")]
	[FieldOffset(Offset = "0x78")]
	public float LastPointScaleFactor;

	[Token(Token = "0x40010C7")]
	[FieldOffset(Offset = "0x7C")]
	public unsafe fixed float MeasuredDimensions[2];

	[Token(Token = "0x170007ED")]
	public static LayoutComputedData Default
	{
		[Token(Token = "0x6001F22")]
		[Address(RVA = "0x4C8E280", Offset = "0x4C8E280", VA = "0x4C8E280")]
		get
		{
			return default(LayoutComputedData);
		}
	}

	[Token(Token = "0x170007EE")]
	public unsafe float* MarginBuffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001F23")]
		[Address(RVA = "0x4C939C0", Offset = "0x4C939C0", VA = "0x4C939C0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (float*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x170007EF")]
	public unsafe float* BorderBuffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001F24")]
		[Address(RVA = "0x4C939D0", Offset = "0x4C939D0", VA = "0x4C939D0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (float*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x170007F0")]
	public unsafe float* PaddingBuffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6001F25")]
		[Address(RVA = "0x4C939E0", Offset = "0x4C939E0", VA = "0x4C939E0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (float*)unchecked((nint)null);
		}
	}
}
