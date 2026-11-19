// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.xxHash3
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x638A800", Offset = "0x6389800", VA = "0x638A800")]
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
			[Address(RVA = "0x638AAD0", Offset = "0x6389AD0", VA = "0x638AAD0")]
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
			[Address(RVA = "0x638A810", Offset = "0x6389810", VA = "0x638A810")]
			[DebuggerStepThrough]
			get
			{
				//IL_0002: Expected I, but got O
				return (byte*)unchecked((nint)null);
			}
		}

		[Token(Token = "0x6000ABB")]
		[Address(RVA = "0x638A5F0", Offset = "0x63895F0", VA = "0x638A5F0")]
		public StreamingState(bool isHash64, ulong seed = 0uL)
		{
		}

		[Token(Token = "0x6000ABC")]
		[Address(RVA = "0x638A660", Offset = "0x6389660", VA = "0x638A660")]
		public void Reset(bool isHash64, ulong seed = 0uL)
		{
		}

		[Token(Token = "0x6000ABD")]
		[Address(RVA = "0x638A820", Offset = "0x6389820", VA = "0x638A820")]
		public unsafe void Update(void* input, int length)
		{
		}

		[Token(Token = "0x6000ABE")]
		[GenerateTestsForBurstCompatibility(GenericTypeArguments = new Type[] { typeof(int) })]
		public void Update<T>(in T input) where T : struct
		{
		}

		[Token(Token = "0x6000ABF")]
		[Address(RVA = "0x638AEA0", Offset = "0x6389EA0", VA = "0x638AEA0")]
		public uint4 DigestHash128()
		{
			return default(uint4);
		}

		[Token(Token = "0x6000AC0")]
		[Address(RVA = "0x638B380", Offset = "0x638A380", VA = "0x638B380")]
		public uint2 DigestHash64()
		{
			return default(uint2);
		}

		[Token(Token = "0x6000AC4")]
		[Address(RVA = "0x638B0F0", Offset = "0x638A0F0", VA = "0x638B0F0")]
		private unsafe void DigestLong(ulong* acc, byte* secret, int isHash64)
		{
		}

		[Token(Token = "0x6000AC5")]
		[Address(RVA = "0x638AAE0", Offset = "0x6389AE0", VA = "0x638AAE0")]
		private unsafe void ConsumeStripes(ulong* acc, ref int nbStripesSoFar, byte* input, long totalStripes, byte* secret, int isHash64)
		{
		}

		[Token(Token = "0x6000AC6")]
		[Address(RVA = "0x638B5A0", Offset = "0x638A5A0", VA = "0x638B5A0")]
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
		[Address(RVA = "0x63898F0", Offset = "0x63888F0", VA = "0x63898F0")]
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
		[Address(RVA = "0x638B7F0", Offset = "0x638A7F0", VA = "0x638B7F0")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000ACE")]
		[Address(RVA = "0x638B960", Offset = "0x638A960", VA = "0x638B960")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000ACF")]
		[Address(RVA = "0x63894B0", Offset = "0x63884B0", VA = "0x63894B0")]
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
		[Address(RVA = "0x638BB20", Offset = "0x638AB20", VA = "0x638BB20")]
		[BurstDiscard]
		private static void GetFunctionPointerDiscard(ref IntPtr P_0)
		{
		}

		[Token(Token = "0x6000AD5")]
		[Address(RVA = "0x638BC90", Offset = "0x638AC90", VA = "0x638BC90")]
		private static IntPtr GetFunctionPointer()
		{
			return default(IntPtr);
		}

		[Token(Token = "0x6000AD6")]
		[Address(RVA = "0x6389900", Offset = "0x6388900", VA = "0x6389900")]
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
	[Address(RVA = "0x6386D80", Offset = "0x6385D80", VA = "0x6386D80")]
	internal unsafe static void Avx2HashLongInternalLoop(ulong* acc, byte* input, byte* dest, long length, byte* secret, int isHash64)
	{
	}

	[Token(Token = "0x6000A86")]
	[Address(RVA = "0x6387680", Offset = "0x6386680", VA = "0x6387680")]
	internal unsafe static void Avx2ScrambleAcc(ulong* acc, byte* secret)
	{
	}

	[Token(Token = "0x6000A87")]
	[Address(RVA = "0x63875F0", Offset = "0x63865F0", VA = "0x63875F0")]
	internal unsafe static void Avx2Accumulate(ulong* acc, byte* input, byte* dest, byte* secret, long nbStripes, int isHash64)
	{
	}

	[Token(Token = "0x6000A88")]
	[Address(RVA = "0x6387BD0", Offset = "0x6386BD0", VA = "0x6387BD0")]
	internal unsafe static void Avx2Accumulate512(ulong* acc, byte* input, byte* dest, byte* secret)
	{
	}

	[Token(Token = "0x6000A89")]
	[Address(RVA = "0x6388180", Offset = "0x6387180", VA = "0x6388180")]
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
	[Address(RVA = "0x6388410", Offset = "0x6387410", VA = "0x6388410")]
	public unsafe static uint2 Hash64(void* input, long length, ulong seed)
	{
		return default(uint2);
	}

	[Token(Token = "0x6000A8C")]
	[Address(RVA = "0x63884C0", Offset = "0x63874C0", VA = "0x63884C0")]
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
	[Address(RVA = "0x6388880", Offset = "0x6387880", VA = "0x6388880")]
	public unsafe static uint4 Hash128(void* input, void* destination, long length)
	{
		return default(uint4);
	}

	[Token(Token = "0x6000A8F")]
	[Address(RVA = "0x6388930", Offset = "0x6387930", VA = "0x6388930")]
	public unsafe static uint4 Hash128(void* input, long length, ulong seed)
	{
		return default(uint4);
	}

	[Token(Token = "0x6000A90")]
	[Address(RVA = "0x63889E0", Offset = "0x63879E0", VA = "0x63889E0")]
	public unsafe static uint4 Hash128(void* input, void* destination, long length, ulong seed)
	{
		return default(uint4);
	}

	[Token(Token = "0x6000A91")]
	[Address(RVA = "0x6388270", Offset = "0x6387270", VA = "0x6388270")]
	internal unsafe static ulong Hash64Internal(byte* input, byte* dest, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A92")]
	[Address(RVA = "0x6388570", Offset = "0x6387570", VA = "0x6388570")]
	internal unsafe static void Hash128Internal(byte* input, byte* dest, long length, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A93")]
	[Address(RVA = "0x63892E0", Offset = "0x63882E0", VA = "0x63892E0")]
	private unsafe static ulong Hash64Len1To3(byte* input, long len, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A94")]
	[Address(RVA = "0x6389360", Offset = "0x6388360", VA = "0x6389360")]
	private unsafe static ulong Hash64Len4To8(byte* input, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A95")]
	[Address(RVA = "0x6389420", Offset = "0x6388420", VA = "0x6389420")]
	private unsafe static ulong Hash64Len9To16(byte* input, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A96")]
	[Address(RVA = "0x6388AA0", Offset = "0x6387AA0", VA = "0x6388AA0")]
	private unsafe static ulong Hash64Len0To16(byte* input, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A97")]
	[Address(RVA = "0x6388B40", Offset = "0x6387B40", VA = "0x6388B40")]
	private unsafe static ulong Hash64Len17To128(byte* input, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A98")]
	[Address(RVA = "0x6388C80", Offset = "0x6387C80", VA = "0x6388C80")]
	private unsafe static ulong Hash64Len129To240(byte* input, long length, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A99")]
	[Address(RVA = "0x6386C90", Offset = "0x6385C90", VA = "0x6386C90")]
	[BurstCompile]
	[MonoPInvokeCallback(typeof(Unity_002ECollections_002EHash64Long_00000A79_0024PostfixBurstDelegate))]
	private unsafe static ulong Hash64Long(byte* input, byte* dest, long length, byte* secret)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000A9A")]
	[Address(RVA = "0x6389640", Offset = "0x6388640", VA = "0x6389640")]
	private unsafe static void Hash128Len1To3(byte* input, long length, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A9B")]
	[Address(RVA = "0x6389700", Offset = "0x6388700", VA = "0x6389700")]
	private unsafe static void Hash128Len4To8(byte* input, long len, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A9C")]
	[Address(RVA = "0x63897E0", Offset = "0x63887E0", VA = "0x63897E0")]
	private unsafe static void Hash128Len9To16(byte* input, long len, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A9D")]
	[Address(RVA = "0x6388E70", Offset = "0x6387E70", VA = "0x6388E70")]
	private unsafe static void Hash128Len0To16(byte* input, long length, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A9E")]
	[Address(RVA = "0x6388F10", Offset = "0x6387F10", VA = "0x6388F10")]
	private unsafe static void Hash128Len17To128(byte* input, long length, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000A9F")]
	[Address(RVA = "0x6389080", Offset = "0x6388080", VA = "0x6389080")]
	private unsafe static void Hash128Len129To240(byte* input, long length, byte* secret, ulong seed, out uint4 result)
	{
	}

	[Token(Token = "0x6000AA0")]
	[Address(RVA = "0x6386CA0", Offset = "0x6385CA0", VA = "0x6386CA0")]
	[BurstCompile]
	[MonoPInvokeCallback(typeof(Unity_002ECollections_002EHash128Long_00000A80_0024PostfixBurstDelegate))]
	private unsafe static void Hash128Long(byte* input, byte* dest, long length, byte* secret, out uint4 result)
	{
	}

	[Token(Token = "0x6000AA1")]
	[Address(RVA = "0x6388400", Offset = "0x6387400", VA = "0x6388400")]
	internal static uint2 ToUint2(ulong u)
	{
		return default(uint2);
	}

	[Token(Token = "0x6000AA2")]
	[Address(RVA = "0x63896F0", Offset = "0x63886F0", VA = "0x63896F0")]
	internal static uint4 ToUint4(ulong ul0, ulong ul1)
	{
		return default(uint4);
	}

	[Token(Token = "0x6000AA3")]
	[Address(RVA = "0x6388E30", Offset = "0x6387E30", VA = "0x6388E30")]
	internal unsafe static void EncodeSecretKey(byte* dst, byte* secret, ulong seed)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA4")]
	[Address(RVA = "0x63899E0", Offset = "0x63889E0", VA = "0x63899E0")]
	private unsafe static ulong Read64LE(void* addr)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA5")]
	[Address(RVA = "0x63899F0", Offset = "0x63889F0", VA = "0x63899F0")]
	private unsafe static uint Read32LE(void* addr)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA6")]
	[Address(RVA = "0x6389A00", Offset = "0x6388A00", VA = "0x6389A00")]
	private unsafe static void Write64LE(void* addr, ulong value)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA7")]
	[Address(RVA = "0x6389A10", Offset = "0x6388A10", VA = "0x6389A10")]
	private static ulong Mul32To64(uint x, uint y)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA8")]
	[Address(RVA = "0x6389A20", Offset = "0x6388A20", VA = "0x6389A20")]
	private static ulong Swap64(ulong x)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AA9")]
	[Address(RVA = "0x6389A30", Offset = "0x6388A30", VA = "0x6389A30")]
	private static uint Swap32(uint x)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAA")]
	[Address(RVA = "0x6389A40", Offset = "0x6388A40", VA = "0x6389A40")]
	private static uint RotL32(uint x, int r)
	{
		return default(uint);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAB")]
	[Address(RVA = "0x6389A50", Offset = "0x6388A50", VA = "0x6389A50")]
	private static ulong RotL64(ulong x, int r)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAC")]
	[Address(RVA = "0x6389A60", Offset = "0x6388A60", VA = "0x6389A60")]
	private static ulong XorShift64(ulong v64, int shift)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAD")]
	[Address(RVA = "0x6389A70", Offset = "0x6388A70", VA = "0x6389A70")]
	private static ulong Mul128Fold64(ulong lhs, ulong rhs)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAE")]
	[Address(RVA = "0x6389A90", Offset = "0x6388A90", VA = "0x6389A90")]
	private unsafe static ulong Mix16(byte* input, byte* secret, ulong seed)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AAF")]
	[Address(RVA = "0x6389AD0", Offset = "0x6388AD0", VA = "0x6389AD0")]
	private unsafe static ulong2 Mix32(ulong2 acc, byte* input_1, byte* input_2, byte* secret, ulong seed)
	{
		return default(ulong2);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB0")]
	[Address(RVA = "0x6389B50", Offset = "0x6388B50", VA = "0x6389B50")]
	private static ulong Avalanche(ulong h64)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB1")]
	[Address(RVA = "0x6389B80", Offset = "0x6388B80", VA = "0x6389B80")]
	private static ulong AvalancheH64(ulong h64)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB2")]
	[Address(RVA = "0x6389BC0", Offset = "0x6388BC0", VA = "0x6389BC0")]
	private static ulong rrmxmx(ulong h64, ulong length)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB3")]
	[Address(RVA = "0x6389C00", Offset = "0x6388C00", VA = "0x6389C00")]
	private unsafe static ulong Mix2Acc(ulong acc0, ulong acc1, byte* secret)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000AB4")]
	[Address(RVA = "0x6389C20", Offset = "0x6388C20", VA = "0x6389C20")]
	internal unsafe static ulong MergeAcc(ulong* acc, byte* secret, ulong start)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000AB5")]
	[Address(RVA = "0x6389D20", Offset = "0x6388D20", VA = "0x6389D20")]
	private unsafe static void DefaultHashLongInternalLoop(ulong* acc, byte* input, byte* dest, long length, byte* secret, int isHash64)
	{
	}

	[Token(Token = "0x6000AB6")]
	[Address(RVA = "0x638A0F0", Offset = "0x63890F0", VA = "0x638A0F0")]
	internal unsafe static void DefaultAccumulate(ulong* acc, byte* input, byte* dest, byte* secret, long nbStripes, int isHash64)
	{
	}

	[Token(Token = "0x6000AB7")]
	[Address(RVA = "0x638A2B0", Offset = "0x63892B0", VA = "0x638A2B0")]
	internal unsafe static void DefaultAccumulate512(ulong* acc, byte* input, byte* dest, byte* secret, int isHash64)
	{
	}

	[Token(Token = "0x6000AB8")]
	[Address(RVA = "0x638A1D0", Offset = "0x63891D0", VA = "0x638A1D0")]
	internal unsafe static void DefaultScrambleAcc(ulong* acc, byte* secret)
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000AB9")]
	[Address(RVA = "0x638A3B0", Offset = "0x63893B0", VA = "0x638A3B0")]
	[BurstCompile]
	internal unsafe static ulong Hash64Long_0024BurstManaged(byte* input, byte* dest, long length, byte* secret)
	{
		return default(ulong);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000ABA")]
	[Address(RVA = "0x638A4B0", Offset = "0x63894B0", VA = "0x638A4B0")]
	[BurstCompile]
	internal unsafe static void Hash128Long_0024BurstManaged(byte* input, byte* dest, long length, byte* secret, out uint4 result)
	{
	}
}
