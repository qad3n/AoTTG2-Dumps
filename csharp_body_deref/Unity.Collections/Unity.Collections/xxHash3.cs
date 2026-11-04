// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.xxHash3
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using System.Runtime.InteropServices;
using AOT;
using Il2CppDummyDll;
using Unity.Burst;
using Unity.Mathematics;

namespace Unity.Collections;

[Token(Token = "0x20000F2")]
[GenerateTestsForBurstCompatibility]
[GenerateTestsForBurstCompatibility]
[BurstCompile]
[GenerateTestsForBurstCompatibility]
public static class xxHash3
{
	[Token(Token = "0x20000F3")]
	[GenerateTestsForBurstCompatibility]
	public struct StreamingState
	{
		[StructLayout((LayoutKind)2)]
		[Token(Token = "0x20000F4")]
		private struct StreamingStateData
		{
			[Token(Token = "0x400048C")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
			public ulong Acc;

			[Token(Token = "0x400048D")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x40")]
			public byte Buffer;

			[Token(Token = "0x400048E")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x140")]
			public int IsHash64;

			[Token(Token = "0x400048F")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x144")]
			public int BufferedSize;

			[Token(Token = "0x4000490")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x148")]
			public int NbStripesSoFar;

			[Token(Token = "0x4000491")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x150")]
			public long TotalLength;

			[Token(Token = "0x4000492")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x158")]
			public ulong Seed;

			[Token(Token = "0x4000493")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x160")]
			public byte SecretKey;

			[Token(Token = "0x4000494")]
			[Il2CppDummyDll.FieldOffset(Offset = "0x21C")]
			public byte _PadEnd;
		}

		[Token(Token = "0x4000487")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static readonly int SECRET_LIMIT;

		[Token(Token = "0x4000488")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x4")]
		private static readonly int NB_STRIPES_PER_BLOCK;

		[Token(Token = "0x4000489")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		private static readonly int INTERNAL_BUFFER_SIZE;

		[Token(Token = "0x400048A")]
		[Il2CppDummyDll.FieldOffset(Offset = "0xC")]
		private static readonly int INTERNAL_BUFFER_STRIPES;

		[Token(Token = "0x400048B")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private StreamingStateData State;

		[Token(Token = "0x17000136")]
		private unsafe ulong* Acc
		{
			[Token(Token = "0x6000AC1")]
			[Address(RVA = "0x611510", Offset = "0x60FB10", VA = "0x180611510")]
			[DebuggerStepThrough]
			get
			{
				//IL_0002: Expected I, but got O
				return (ulong*)unchecked((nint)null);
			}
		}

		[Token(Token = "0x17000137")]
		private unsafe byte* Buffer
		{
			[Token(Token = "0x6000AC2")]
			[Address(RVA = "0x29BC050", Offset = "0x29BA650", VA = "0x1829BC050")]
			[DebuggerStepThrough]
			get
			{
				//IL_0002: Expected I, but got O
				return (byte*)unchecked((nint)null);
			}
		}

		[Token(Token = "0x17000138")]
		private unsafe byte* SecretKey
		{
			[Token(Token = "0x6000AC3")]
			[Address(RVA = "0x29BC060", Offset = "0x29BA660", VA = "0x1829BC060")]
			[DebuggerStepThrough]
			get
			{
				//IL_0002: Expected I, but got O
				return (byte*)unchecked((nint)null);
			}
		}

		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x29BBFD0", Offset = "0x29BA5D0", VA = "0x1829BBFD0")]
		public StreamingState(bool isHash64, ulong seed = 0uL)
		{
		}

		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x29BBAE0", Offset = "0x29BA0E0", VA = "0x1829BBAE0")]
		public void Reset(bool isHash64, ulong seed = 0uL)
		{
		}

		[Token(Token = "0x6000ABD")]
		[Address(RVA = "0x29BBC80", Offset = "0x29BA280", VA = "0x1829BBC80")]
		public unsafe void Update(void* input, int length)
		{
		}

		[Token(Token = "0x6000ABE")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public void Update<T>(in T input) where T : struct
		{
		}

		[Token(Token = "0x6000ABF")]
		[Address(RVA = "0x29BB2F0", Offset = "0x29B98F0", VA = "0x1829BB2F0")]
		public uint4 DigestHash128()
		{
			return default(uint4);
		}

		[Token(Token = "0x6000AC0")]
		[Address(RVA = "0x29BB5D0", Offset = "0x29B9BD0", VA = "0x1829BB5D0")]
		public uint2 DigestHash64()
		{
			return default(uint2);
		}

		[Token(Token = "0x6000AC4")]
		[Address(RVA = "0x29BB850", Offset = "0x29B9E50", VA = "0x1829BB850")]
		private unsafe void DigestLong(ulong* acc, byte* secret, int isHash64)
		{
		}

		[Token(Token = "0x6000AC5")]
		[Address(RVA = "0x29BAF30", Offset = "0x29B9530", VA = "0x1829BAF30")]
		private unsafe void ConsumeStripes(ulong* acc, ref int nbStripesSoFar, byte* input, long totalStripes, byte* secret, int isHash64)
		{
		}

		[Token(Token = "0x6000AC6")]
		[Address(RVA = "0x29BAE70", Offset = "0x29B9470", VA = "0x1829BAE70")]
		[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
		[Conditional("UNITY_DOTS_DEBUG")]
		private void CheckKeySize(int isHash64)
		{
		}
	}

	[Token(Token = "0x20000F5")]
	private struct ulong2
	{
		[Token(Token = "0x4000495")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		public ulong x;

		[Token(Token = "0x4000496")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x8")]
		public ulong y;

		[Token(Token = "0x6000AC8")]
		[Address(RVA = "0xB546F0", Offset = "0xB52CF0", VA = "0x180B546F0")]
		public ulong2(ulong x, ulong y)
		{
		}
	}

	[Token(Token = "0x20000F6")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal unsafe delegate ulong Hash64Long_00000A79_0024PostfixBurstDelegate(byte* input, byte* dest, long length, byte* secret);

	[Token(Token = "0x20000F7")]
	internal static class Hash64Long_00000A79_0024BurstDirectCall
	{
		[Token(Token = "0x4000497")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x6000ACD")]
		[Address(RVA = "0x29B43E0", Offset = "0x29B29E0", VA = "0x1829B43E0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x29B4570", Offset = "0x29B2B70", VA = "0x1829B4570")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x29B46F0", Offset = "0x29B2CF0", VA = "0x1829B46F0")]
		public unsafe static ulong Invoke(byte* input, byte* dest, long length, byte* secret)
		{
			return default(ulong);
		}
	}

	[Token(Token = "0x20000F8")]
	[UnmanagedFunctionPointer(CallingConvention.Cdecl)]
	internal unsafe delegate void Hash128Long_00000A80_0024PostfixBurstDelegate(byte* input, byte* dest, long length, byte* secret, out uint4 result);

	[Token(Token = "0x20000F9")]
	internal static class Hash128Long_00000A80_0024BurstDirectCall
	{
		[Token(Token = "0x4000498")]
		[Il2CppDummyDll.FieldOffset(Offset = "0x0")]
		private static IntPtr Pointer;

		[Token(Token = "0x6000AD4")]
		[Address(RVA = "0x29B3BF0", Offset = "0x29B21F0", VA = "0x1829B3BF0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x29B3D80", Offset = "0x29B2380", VA = "0x1829B3D80")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000AD6")]
		[Address(RVA = "0x29B3F00", Offset = "0x29B2500", VA = "0x1829B3F00")]
		public unsafe static void Invoke(byte* input, byte* dest, long length, byte* secret, out uint4 result)
		{
		}
	}

	[Token(Token = "0x4000472")]
	private const int STRIPE_LEN = 64;

	[Token(Token = "0x4000473")]
	private const int ACC_NB = 8;

	[Token(Token = "0x4000474")]
	private const int SECRET_CONSUME_RATE = 8;

	[Token(Token = "0x4000475")]
	private const int SECRET_KEY_SIZE = 192;

	[Token(Token = "0x4000476")]
	private const int SECRET_KEY_MIN_SIZE = 136;

	[Token(Token = "0x4000477")]
	private const int SECRET_LASTACC_START = 7;

	[Token(Token = "0x4000478")]
	private const int NB_ROUNDS = 16;

	[Token(Token = "0x4000479")]
	private const int BLOCK_LEN = 1024;

	[Token(Token = "0x400047A")]
	private const uint PRIME32_1 = 2654435761u;

	[Token(Token = "0x400047B")]
	private const uint PRIME32_2 = 2246822519u;

	[Token(Token = "0x400047C")]
	private const uint PRIME32_3 = 3266489917u;

	[Token(Token = "0x400047D")]
	private const uint PRIME32_5 = 374761393u;

	[Token(Token = "0x400047E")]
	private const ulong PRIME64_1 = 11400714785074694791uL;

	[Token(Token = "0x400047F")]
	private const ulong PRIME64_2 = 14029467366897019727uL;

	[Token(Token = "0x4000480")]
	private const ulong PRIME64_3 = 1609587929392839161uL;

	[Token(Token = "0x4000481")]
	private const ulong PRIME64_4 = 9650029242287828579uL;

	[Token(Token = "0x4000482")]
	private const ulong PRIME64_5 = 2870177450012600261uL;

	[Token(Token = "0x4000483")]
	private const int MIDSIZE_MAX = 240;

	[Token(Token = "0x4000484")]
	private const int MIDSIZE_STARTOFFSET = 3;

	[Token(Token = "0x4000485")]
	private const int MIDSIZE_LASTOFFSET = 17;

	[Token(Token = "0x4000486")]
	private const int SECRET_MERGEACCS_START = 11;

	[Token(Token = "0x6000A85")]
	[Address(RVA = "0x29C1BD0", Offset = "0x29C01D0", VA = "0x1829C1BD0")]
	internal unsafe static void Avx2HashLongInternalLoop(ulong* acc, byte* input, byte* dest, long length, byte* secret, int isHash64)
	{
	}

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x29C1E30", Offset = "0x29C0430", VA = "0x1829C1E30")]
	internal unsafe static void Avx2ScrambleAcc(ulong* acc, byte* secret)
	{
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x29C1AE0", Offset = "0x29C00E0", VA = "0x1829C1AE0")]
	internal unsafe static void Avx2Accumulate(ulong* acc, byte* input, byte* dest, byte* secret, long nbStripes, int isHash64)
	{
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x29C1720", Offset = "0x29BFD20", VA = "0x1829C1720")]
	internal unsafe static void Avx2Accumulate512(ulong* acc, byte* input, byte* dest, byte* secret)
	{
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x29C65F0", Offset = "0x29C4BF0", VA = "0x1829C65F0")]
	public unsafe static uint2 Hash64(void* input, long length)
	{
		return default(uint2);
	}

	[Token(Token = "0x6000A8A")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static uint2 Hash64<T>(in T input) where T : struct
	{
		return default(uint2);
	}

	[Token(Token = "0x6000A8B")]
	[Address(RVA = "0x29C6530", Offset = "0x29C4B30", VA = "0x1829C6530")]
	public unsafe static uint2 Hash64(void* input, long length, ulong seed)
	{
		return default(uint2);
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x29C5220", Offset = "0x29C3820", VA = "0x1829C5220")]
	public unsafe static uint4 Hash128(void* input, long length)
	{
		return default(uint4);
	}

	[Token(Token = "0x6000A8D")]
	[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
	public static uint4 Hash128<T>(in T input) where T : struct
	{
		return default(uint4);
	}

	[Token(Token = "0x6000A8E")]
	[Address(RVA = "0x29C50B0", Offset = "0x29C36B0", VA = "0x1829C50B0")]
	public unsafe static uint4 Hash128(void* input, void* destination, long length)
	{
		return default(uint4);
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x29C5000", Offset = "0x29C3600", VA = "0x1829C5000")]
	public unsafe static uint4 Hash128(void* input, long length, ulong seed)
	{
		return default(uint4);
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x29C5160", Offset = "0x29C3760", VA = "0x1829C5160")]
	public unsafe static uint4 Hash128(void* input, void* destination, long length, ulong seed)
	{
		return default(uint4);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x29C52D0", Offset = "0x29C38D0", VA = "0x1829C52D0")]
	internal unsafe static ulong Hash64Internal(byte* input, byte* dest, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x29C38D0", Offset = "0x29C1ED0", VA = "0x1829C38D0")]
	internal unsafe static void Hash128Internal(byte* input, byte* dest, long length, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x29C5E70", Offset = "0x29C4470", VA = "0x1829C5E70")]
	private unsafe static ulong Hash64Len1To3(byte* input, long len, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x29C5F30", Offset = "0x29C4530", VA = "0x1829C5F30")]
	private unsafe static ulong Hash64Len4To8(byte* input, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x29C60D0", Offset = "0x29C46D0", VA = "0x1829C60D0")]
	private unsafe static ulong Hash64Len9To16(byte* input, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x29C5530", Offset = "0x29C3B30", VA = "0x1829C5530")]
	private unsafe static ulong Hash64Len0To16(byte* input, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x29C5D40", Offset = "0x29C4340", VA = "0x1829C5D40")]
	private unsafe static ulong Hash64Len17To128(byte* input, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x29C5890", Offset = "0x29C3E90", VA = "0x1829C5890")]
	private unsafe static ulong Hash64Len129To240(byte* input, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x29C6520", Offset = "0x29C4B20", VA = "0x1829C6520")]
	[BurstCompile]
	[MonoPInvokeCallback(typeof(Unity_002ECollections_002EHash64Long_00000A79_0024PostfixBurstDelegate))]
	private unsafe static ulong Hash64Long(byte* input, byte* dest, long length, byte* secret)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x29C4780", Offset = "0x29C2D80", VA = "0x1829C4780")]
	private unsafe static void Hash128Len1To3(byte* input, long length, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x29C48F0", Offset = "0x29C2EF0", VA = "0x1829C48F0")]
	private unsafe static void Hash128Len4To8(byte* input, long len, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x29C4AD0", Offset = "0x29C30D0", VA = "0x1829C4AD0")]
	private unsafe static void Hash128Len9To16(byte* input, long len, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x29C3BF0", Offset = "0x29C21F0", VA = "0x1829C3BF0")]
	private unsafe static void Hash128Len0To16(byte* input, long length, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x29C45B0", Offset = "0x29C2BB0", VA = "0x1829C45B0")]
	private unsafe static void Hash128Len17To128(byte* input, long length, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x29C3FB0", Offset = "0x29C25B0", VA = "0x1829C3FB0")]
	private unsafe static void Hash128Len129To240(byte* input, long length, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x29C4FF0", Offset = "0x29C35F0", VA = "0x1829C4FF0")]
	[BurstCompile]
	[MonoPInvokeCallback(typeof(Unity_002ECollections_002EHash128Long_00000A80_0024PostfixBurstDelegate))]
	private unsafe static void Hash128Long(byte* input, byte* dest, long length, byte* secret, out uint4 result)
	{
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x29C6810", Offset = "0x29C4E10", VA = "0x1829C6810")]
	internal static uint2 ToUint2(ulong u)
	{
		return default(uint2);
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x29C6830", Offset = "0x29C4E30", VA = "0x1829C6830")]
	internal static uint4 ToUint4(ulong ul0, ulong ul1)
	{
		return default(uint4);
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x29C3730", Offset = "0x29C1D30", VA = "0x1829C3730")]
	internal unsafe static void EncodeSecretKey(byte* dst, byte* secret, ulong seed)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x29C6780", Offset = "0x29C4D80", VA = "0x1829C6780")]
	private unsafe static ulong Read64LE(void* addr)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x1A51A20", Offset = "0x1A50020", VA = "0x181A51A20")]
	private unsafe static uint Read32LE(void* addr)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x29C6850", Offset = "0x29C4E50", VA = "0x1829C6850")]
	private unsafe static void Write64LE(void* addr, ulong value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x1B31900", Offset = "0x1B2FF00", VA = "0x181B31900")]
	private static ulong Mul32To64(uint x, uint y)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x29C6800", Offset = "0x29C4E00", VA = "0x1829C6800")]
	private static ulong Swap64(ulong x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x1ACCF20", Offset = "0x1ACB520", VA = "0x181ACCF20")]
	private static uint Swap32(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x1B27A20", Offset = "0x1B26020", VA = "0x181B27A20")]
	private static uint RotL32(uint x, int r)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x29C67E0", Offset = "0x29C4DE0", VA = "0x1829C67E0")]
	private static ulong RotL64(ulong x, int r)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x29C68A0", Offset = "0x29C4EA0", VA = "0x1829C68A0")]
	private static ulong XorShift64(ulong v64, int shift)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x29C6750", Offset = "0x29C4D50", VA = "0x1829C6750")]
	private static ulong Mul128Fold64(ulong lhs, ulong rhs)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x29B2BB0", Offset = "0x29B11B0", VA = "0x1829B2BB0")]
	private unsafe static ulong Mix16(byte* input, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x29B2E20", Offset = "0x29B1420", VA = "0x1829B2E20")]
	private unsafe static ulong2 Mix32(ulong2 acc, byte* input_1, byte* input_2, byte* secret, ulong seed)
	{
		return default(ulong2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x29C16F0", Offset = "0x29BFCF0", VA = "0x1829C16F0")]
	private static ulong Avalanche(ulong h64)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x29C16B0", Offset = "0x29BFCB0", VA = "0x1829C16B0")]
	private static ulong AvalancheH64(ulong h64)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x29C68C0", Offset = "0x29C4EC0", VA = "0x1829C68C0")]
	private static ulong rrmxmx(ulong h64, ulong length)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x29B2D40", Offset = "0x29B1340", VA = "0x1829B2D40")]
	private unsafe static ulong Mix2Acc(ulong acc0, ulong acc1, byte* secret)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x29C66A0", Offset = "0x29C4CA0", VA = "0x1829C66A0")]
	internal unsafe static ulong MergeAcc(ulong* acc, byte* secret, ulong start)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x29C3150", Offset = "0x29C1750", VA = "0x1829C3150")]
	private unsafe static void DefaultHashLongInternalLoop(ulong* acc, byte* input, byte* dest, long length, byte* secret, int isHash64)
	{
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x29C3050", Offset = "0x29C1650", VA = "0x1829C3050")]
	internal unsafe static void DefaultAccumulate(ulong* acc, byte* input, byte* dest, byte* secret, long nbStripes, int isHash64)
	{
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x29C2220", Offset = "0x29C0820", VA = "0x1829C2220")]
	internal unsafe static void DefaultAccumulate512(ulong* acc, byte* input, byte* dest, byte* secret, int isHash64)
	{
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x29C33A0", Offset = "0x29C19A0", VA = "0x1829C33A0")]
	internal unsafe static void DefaultScrambleAcc(ulong* acc, byte* secret)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x29C6380", Offset = "0x29C4980", VA = "0x1829C6380")]
	[BurstCompile]
	internal unsafe static ulong Hash64Long_0024BurstManaged(byte* input, byte* dest, long length, byte* secret)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x29C4E10", Offset = "0x29C3410", VA = "0x1829C4E10")]
	[BurstCompile]
	internal unsafe static void Hash128Long_0024BurstManaged(byte* input, byte* dest, long length, byte* secret, out uint4 result)
	{
	}
}
