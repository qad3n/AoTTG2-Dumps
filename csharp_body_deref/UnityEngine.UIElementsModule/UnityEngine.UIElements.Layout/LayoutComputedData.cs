// ==================== AoTTG2 cross-reference ====================
// Type: UnityEngine.UIElements.Layout.LayoutComputedData
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System.Runtime.CompilerServices;
using Il2CppDummyDll;

namespace UnityEngine.UIElements.Layout;

[Token(Token = "0x20005FB")]
internal struct LayoutComputedData
{
	[Token(Token = "0x4001651")]
	[FieldOffset(Offset = "0x0")]
	public unsafe fixed float Position[4];

	[Token(Token = "0x4001652")]
	[FieldOffset(Offset = "0x10")]
	public unsafe fixed float Dimensions[2];

	[Token(Token = "0x4001653")]
	[FieldOffset(Offset = "0x18")]
	public unsafe fixed float Margin[6];

	[Token(Token = "0x4001654")]
	[FieldOffset(Offset = "0x30")]
	public unsafe fixed float Border[6];

	[Token(Token = "0x4001655")]
	[FieldOffset(Offset = "0x48")]
	public unsafe fixed float Padding[6];

	[Token(Token = "0x4001656")]
	[FieldOffset(Offset = "0x60")]
	public LayoutDirection Direction;

	[Token(Token = "0x4001657")]
	[FieldOffset(Offset = "0x64")]
	public uint ComputedFlexBasisGeneration;

	[Token(Token = "0x4001658")]
	[FieldOffset(Offset = "0x68")]
	public float ComputedFlexBasis;

	[Token(Token = "0x4001659")]
	[FieldOffset(Offset = "0x6C")]
	public bool HadOverflow;

	[Token(Token = "0x400165A")]
	[FieldOffset(Offset = "0x70")]
	public uint GenerationCount;

	[Token(Token = "0x400165B")]
	[FieldOffset(Offset = "0x74")]
	public LayoutDirection LastParentDirection;

	[Token(Token = "0x400165C")]
	[FieldOffset(Offset = "0x78")]
	public float LastPointScaleFactor;

	[Token(Token = "0x400165D")]
	[FieldOffset(Offset = "0x7C")]
	public unsafe fixed float MeasuredDimensions[2];

	[Token(Token = "0x17000AFD")]
	public static LayoutComputedData Default
	{
		[Token(Token = "0x6002C6F")]
		[Address(RVA = "0x31BCDE0", Offset = "0x31BB3E0", VA = "0x1831BCDE0")]
		get
		{
			return default(LayoutComputedData);
		}
	}

	[Token(Token = "0x17000AFE")]
	public unsafe float* MarginBuffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002C70")]
		[Address(RVA = "0x31AFD80", Offset = "0x31AE380", VA = "0x1831AFD80")]
		get
		{
			//IL_0002: Expected I, but got O
			return (float*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x17000AFF")]
	public unsafe float* BorderBuffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002C71")]
		[Address(RVA = "0x31BCDD0", Offset = "0x31BB3D0", VA = "0x1831BCDD0")]
		get
		{
			//IL_0002: Expected I, but got O
			return (float*)unchecked((nint)null);
		}
	}

	[Token(Token = "0x17000B00")]
	public unsafe float* PaddingBuffer
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6002C72")]
		[Address(RVA = "0x31BCF90", Offset = "0x31BB590", VA = "0x1831BCF90")]
		get
		{
			//IL_0002: Expected I, but got O
			return (float*)unchecked((nint)null);
		}
	}
}
