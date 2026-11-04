// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.DataStreamWriter
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Scripting.APIUpdating;

namespace Unity.Collections;

[Token(Token = "0x2000045")]
[MovedFrom(true, "Unity.Networking.Transport", "Unity.Networking.Transport", null)]
[GenerateTestsForBurstCompatibility]
public struct DataStreamWriter
{
	[Token(Token = "0x2000046")]
	private struct StreamData
	{
		[Token(Token = "0x40000AC")]
		[FieldOffset(Offset = "0x0")]
		public unsafe byte* buffer;

		[Token(Token = "0x40000AD")]
		[FieldOffset(Offset = "0x8")]
		public int length;

		[Token(Token = "0x40000AE")]
		[FieldOffset(Offset = "0xC")]
		public int capacity;

		[Token(Token = "0x40000AF")]
		[FieldOffset(Offset = "0x10")]
		public ulong bitBuffer;

		[Token(Token = "0x40000B0")]
		[FieldOffset(Offset = "0x18")]
		public int bitIndex;

		[Token(Token = "0x40000B1")]
		[FieldOffset(Offset = "0x1C")]
		public int failedWrites;
	}

	[Token(Token = "0x40000AA")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	private StreamData m_Data;

	[Token(Token = "0x40000AB")]
	[FieldOffset(Offset = "0x20")]
	public IntPtr m_SendHandleData;

	[Token(Token = "0x17000031")]
	public static bool IsLittleEndian
	{
		[Token(Token = "0x60001AD")]
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000032")]
	public readonly bool IsCreated
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60001B5")]
		[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000033")]
	public readonly bool HasFailedWrites
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60001B6")]
		[Address(RVA = "0x299B180", Offset = "0x2999780", VA = "0x18299B180")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000034")]
	public readonly int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60001B7")]
		[Address(RVA = "0x57AEF0", Offset = "0x5794F0", VA = "0x18057AEF0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000035")]
	public int Length
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x299B1E0", Offset = "0x29997E0", VA = "0x18299B1E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000036")]
	public int LengthInBits
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x299B190", Offset = "0x2999790", VA = "0x18299B190")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x299AF60", Offset = "0x2999560", VA = "0x18299AF60")]
	public DataStreamWriter(int length, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x299B100", Offset = "0x2999700", VA = "0x18299B100")]
	public DataStreamWriter(NativeArray<byte> data)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x299B030", Offset = "0x2999630", VA = "0x18299B030")]
	public unsafe DataStreamWriter(byte* data, int length)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x2999ED0", Offset = "0x29984D0", VA = "0x182999ED0")]
	public NativeArray<byte> AsNativeArray()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x299A1F0", Offset = "0x29987F0", VA = "0x18299A1F0")]
	private static void Initialize(out DataStreamWriter self, NativeArray<byte> data)
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x1ACCF30", Offset = "0x1ACB530", VA = "0x181ACCF30")]
	private static short ByteSwap(short val)
	{
		return default(short);
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x1ACCF20", Offset = "0x1ACB520", VA = "0x181ACCF20")]
	private static int ByteSwap(int val)
	{
		return default(int);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x299A270", Offset = "0x2998870", VA = "0x18299A270")]
	private void SyncBitData()
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x299A1A0", Offset = "0x29987A0", VA = "0x18299A1A0")]
	public void Flush()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x299A350", Offset = "0x2998950", VA = "0x18299A350")]
	private unsafe bool WriteBytesInternal(byte* data, int bytes)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x299A2B0", Offset = "0x29988B0", VA = "0x18299A2B0")]
	public bool WriteByte(byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x299A3F0", Offset = "0x29989F0", VA = "0x18299A3F0")]
	public bool WriteBytes(NativeArray<byte> value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x299A460", Offset = "0x2998A60", VA = "0x18299A460")]
	public bool WriteBytes(Span<byte> value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x299AEA0", Offset = "0x29994A0", VA = "0x18299AEA0")]
	public bool WriteShort(short value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x299AEA0", Offset = "0x29994A0", VA = "0x18299AEA0")]
	public bool WriteUShort(ushort value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x299A630", Offset = "0x2998C30", VA = "0x18299A630")]
	public bool WriteInt(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x299A630", Offset = "0x2998C30", VA = "0x18299A630")]
	public bool WriteUInt(uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x299A6D0", Offset = "0x2998CD0", VA = "0x18299A6D0")]
	public bool WriteLong(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x299A6D0", Offset = "0x2998CD0", VA = "0x18299A6D0")]
	public bool WriteULong(ulong value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x299AE00", Offset = "0x2999400", VA = "0x18299AE00")]
	public bool WriteShortNetworkByteOrder(short value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x299AF50", Offset = "0x2999550", VA = "0x18299AF50")]
	public bool WriteUShortNetworkByteOrder(ushort value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x299A590", Offset = "0x2998B90", VA = "0x18299A590")]
	public bool WriteIntNetworkByteOrder(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x299AF40", Offset = "0x2999540", VA = "0x18299AF40")]
	public bool WriteUIntNetworkByteOrder(uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x299A580", Offset = "0x2998B80", VA = "0x18299A580")]
	public bool WriteFloat(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x299A4D0", Offset = "0x2998AD0", VA = "0x18299A4D0")]
	public bool WriteDouble(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x299A160", Offset = "0x2998760", VA = "0x18299A160")]
	private void FlushBits()
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x299AD70", Offset = "0x2999370", VA = "0x18299AD70")]
	private void WriteRawBitsInternal(uint value, int numbits)
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x299AD90", Offset = "0x2999390", VA = "0x18299AD90")]
	public bool WriteRawBits(uint value, int numbits)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x299AC00", Offset = "0x2999200", VA = "0x18299AC00")]
	public bool WritePackedUInt(uint value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x299AD20", Offset = "0x2999320", VA = "0x18299AD20")]
	public bool WritePackedULong(ulong value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x299AB20", Offset = "0x2999120", VA = "0x18299AB20")]
	public bool WritePackedInt(int value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x299ABA0", Offset = "0x29991A0", VA = "0x18299ABA0")]
	public bool WritePackedLong(long value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x299AAE0", Offset = "0x29990E0", VA = "0x18299AAE0")]
	public bool WritePackedFloat(float value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x299A870", Offset = "0x2998E70", VA = "0x18299A870")]
	public bool WritePackedDouble(double value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x299AB00", Offset = "0x2999100", VA = "0x18299AB00")]
	public bool WritePackedUIntDelta(uint value, uint baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x299AB00", Offset = "0x2999100", VA = "0x18299AB00")]
	public bool WritePackedIntDelta(int value, int baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x299AB40", Offset = "0x2999140", VA = "0x18299AB40")]
	public bool WritePackedLongDelta(long value, long baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x299AB40", Offset = "0x2999140", VA = "0x18299AB40")]
	public bool WritePackedULongDelta(ulong value, ulong baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x299AA30", Offset = "0x2999030", VA = "0x18299AA30")]
	public bool WritePackedFloatDelta(float value, float baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x299A770", Offset = "0x2998D70", VA = "0x18299A770")]
	public bool WritePackedDoubleDelta(double value, double baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x299A4E0", Offset = "0x2998AE0", VA = "0x18299A4E0")]
	public bool WriteFixedString32(FixedString32Bytes str)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x299A4E0", Offset = "0x2998AE0", VA = "0x18299A4E0")]
	public bool WriteFixedString64(FixedString64Bytes str)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x299A4E0", Offset = "0x2998AE0", VA = "0x18299A4E0")]
	public bool WriteFixedString128(FixedString128Bytes str)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x299A4E0", Offset = "0x2998AE0", VA = "0x18299A4E0")]
	public bool WriteFixedString512(FixedString512Bytes str)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x299A4E0", Offset = "0x2998AE0", VA = "0x18299A4E0")]
	public bool WriteFixedString4096(FixedString4096Bytes str)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x299A890", Offset = "0x2998E90", VA = "0x18299A890")]
	public bool WritePackedFixedString32Delta(FixedString32Bytes str, FixedString32Bytes baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x299A890", Offset = "0x2998E90", VA = "0x18299A890")]
	public bool WritePackedFixedString64Delta(FixedString64Bytes str, FixedString64Bytes baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x299A890", Offset = "0x2998E90", VA = "0x18299A890")]
	public bool WritePackedFixedString128Delta(FixedString128Bytes str, FixedString128Bytes baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x299A890", Offset = "0x2998E90", VA = "0x18299A890")]
	public bool WritePackedFixedString512Delta(FixedString512Bytes str, FixedString512Bytes baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x299A890", Offset = "0x2998E90", VA = "0x18299A890")]
	public bool WritePackedFixedString4096Delta(FixedString4096Bytes str, FixedString4096Bytes baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x299A8D0", Offset = "0x2998ED0", VA = "0x18299A8D0")]
	private unsafe bool WritePackedFixedStringDelta(byte* data, uint length, byte* baseData, uint baseLength, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x299A150", Offset = "0x2998750", VA = "0x18299A150")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckWrite()
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x2999F70", Offset = "0x2998570", VA = "0x182999F70")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckAllocator(AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x2999FE0", Offset = "0x29985E0", VA = "0x182999FE0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckBits(uint value, int numBits)
	{
	}
}
