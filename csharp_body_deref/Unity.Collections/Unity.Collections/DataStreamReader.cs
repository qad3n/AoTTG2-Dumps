// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.DataStreamReader
// Update status: unchanged since the previous dump
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Diagnostics;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using UnityEngine.Scripting.APIUpdating;

namespace Unity.Collections;

[Token(Token = "0x2000043")]
[MovedFrom(true, "Unity.Networking.Transport", null, null)]
[GenerateTestsForBurstCompatibility]
public struct DataStreamReader
{
	[Token(Token = "0x2000044")]
	private struct Context
	{
		[Token(Token = "0x40000A6")]
		[FieldOffset(Offset = "0x0")]
		public int m_ReadByteIndex;

		[Token(Token = "0x40000A7")]
		[FieldOffset(Offset = "0x4")]
		public int m_BitIndex;

		[Token(Token = "0x40000A8")]
		[FieldOffset(Offset = "0x8")]
		public ulong m_BitBuffer;

		[Token(Token = "0x40000A9")]
		[FieldOffset(Offset = "0x10")]
		public int m_FailedReads;
	}

	[Token(Token = "0x40000A3")]
	[FieldOffset(Offset = "0x0")]
	[NativeDisableUnsafePtrRestriction]
	internal unsafe byte* m_BufferPtr;

	[Token(Token = "0x40000A4")]
	[FieldOffset(Offset = "0x8")]
	private Context m_Context;

	[Token(Token = "0x40000A5")]
	[FieldOffset(Offset = "0x20")]
	private int m_Length;

	[Token(Token = "0x1700002D")]
	public static bool IsLittleEndian
	{
		[Token(Token = "0x6000173")]
		[Address(RVA = "0x6360770", Offset = "0x635F770", VA = "0x6360770")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002E")]
	public readonly bool HasFailedReads
	{
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x63607B0", Offset = "0x635F7B0", VA = "0x63607B0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002F")]
	public readonly int Length
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0x63607C0", Offset = "0x635F7C0", VA = "0x63607C0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000030")]
	public readonly bool IsCreated
	{
		[Token(Token = "0x6000178")]
		[Address(RVA = "0x63607D0", Offset = "0x635F7D0", VA = "0x63607D0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x63606B0", Offset = "0x635F6B0", VA = "0x63606B0")]
	public DataStreamReader(NativeArray<byte> array)
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x6360710", Offset = "0x635F710", VA = "0x6360710")]
	private static void Initialize(out DataStreamReader self, NativeArray<byte> array)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x6360790", Offset = "0x635F790", VA = "0x6360790")]
	private static short ByteSwap(short val)
	{
		return default(short);
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x63607A0", Offset = "0x635F7A0", VA = "0x63607A0")]
	private static int ByteSwap(int val)
	{
		return default(int);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x63607E0", Offset = "0x635F7E0", VA = "0x63607E0")]
	private unsafe void ReadBytesInternal(byte* data, int length)
	{
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x6360880", Offset = "0x635F880", VA = "0x6360880")]
	public void ReadBytes(NativeArray<byte> array)
	{
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x6360920", Offset = "0x635F920", VA = "0x6360920")]
	public void ReadBytes(Span<byte> span)
	{
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x6360850", Offset = "0x635F850", VA = "0x6360850")]
	public int GetBytesRead()
	{
		return default(int);
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x63609E0", Offset = "0x635F9E0", VA = "0x63609E0")]
	public int GetBitsRead()
	{
		return default(int);
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x63609F0", Offset = "0x635F9F0", VA = "0x63609F0")]
	public void SeekSet(int pos)
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x6360A10", Offset = "0x635FA10", VA = "0x6360A10")]
	public byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x6360A90", Offset = "0x635FA90", VA = "0x6360A90")]
	public short ReadShort()
	{
		return default(short);
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x6360B10", Offset = "0x635FB10", VA = "0x6360B10")]
	public ushort ReadUShort()
	{
		return default(ushort);
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x6360B90", Offset = "0x635FB90", VA = "0x6360B90")]
	public int ReadInt()
	{
		return default(int);
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x6360C10", Offset = "0x635FC10", VA = "0x6360C10")]
	public uint ReadUInt()
	{
		return default(uint);
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x6360C90", Offset = "0x635FC90", VA = "0x6360C90")]
	public long ReadLong()
	{
		return default(long);
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x6360D10", Offset = "0x635FD10", VA = "0x6360D10")]
	public ulong ReadULong()
	{
		return default(ulong);
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x6360860", Offset = "0x635F860", VA = "0x6360860")]
	public void Flush()
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x6360D90", Offset = "0x635FD90", VA = "0x6360D90")]
	public short ReadShortNetworkByteOrder()
	{
		return default(short);
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x6360E10", Offset = "0x635FE10", VA = "0x6360E10")]
	public ushort ReadUShortNetworkByteOrder()
	{
		return default(ushort);
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x6360E90", Offset = "0x635FE90", VA = "0x6360E90")]
	public int ReadIntNetworkByteOrder()
	{
		return default(int);
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x6360F10", Offset = "0x635FF10", VA = "0x6360F10")]
	public uint ReadUIntNetworkByteOrder()
	{
		return default(uint);
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x6360F90", Offset = "0x635FF90", VA = "0x6360F90")]
	public float ReadFloat()
	{
		return default(float);
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x6361010", Offset = "0x6360010", VA = "0x6361010")]
	public double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x6361090", Offset = "0x6360090", VA = "0x6361090")]
	public uint ReadPackedUInt(in StreamCompressionModel model)
	{
		return default(uint);
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x6361150", Offset = "0x6360150", VA = "0x6361150")]
	private uint ReadPackedUIntInternal(int maxSymbolLength, in StreamCompressionModel model)
	{
		return default(uint);
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x6361220", Offset = "0x6360220", VA = "0x6361220")]
	private void FillBitBuffer()
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x6361260", Offset = "0x6360260", VA = "0x6361260")]
	private uint ReadRawBitsInternal(int numbits)
	{
		return default(uint);
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x6361290", Offset = "0x6360290", VA = "0x6361290")]
	public uint ReadRawBits(int numbits)
	{
		return default(uint);
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x6361320", Offset = "0x6360320", VA = "0x6361320")]
	public ulong ReadPackedULong(in StreamCompressionModel model)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x6361350", Offset = "0x6360350", VA = "0x6361350")]
	public int ReadPackedInt(in StreamCompressionModel model)
	{
		return default(int);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x6361370", Offset = "0x6360370", VA = "0x6361370")]
	public long ReadPackedLong(in StreamCompressionModel model)
	{
		return default(long);
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x63613B0", Offset = "0x63603B0", VA = "0x63613B0")]
	public float ReadPackedFloat(in StreamCompressionModel model)
	{
		return default(float);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x63614E0", Offset = "0x63604E0", VA = "0x63614E0")]
	public double ReadPackedDouble(in StreamCompressionModel model)
	{
		return default(double);
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x6361620", Offset = "0x6360620", VA = "0x6361620")]
	public int ReadPackedIntDelta(int baseline, in StreamCompressionModel model)
	{
		return default(int);
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x6361640", Offset = "0x6360640", VA = "0x6361640")]
	public uint ReadPackedUIntDelta(uint baseline, in StreamCompressionModel model)
	{
		return default(uint);
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x6361660", Offset = "0x6360660", VA = "0x6361660")]
	public long ReadPackedLongDelta(long baseline, in StreamCompressionModel model)
	{
		return default(long);
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x63616B0", Offset = "0x63606B0", VA = "0x63616B0")]
	public ulong ReadPackedULongDelta(ulong baseline, in StreamCompressionModel model)
	{
		return default(ulong);
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x6361450", Offset = "0x6360450", VA = "0x6361450")]
	public float ReadPackedFloatDelta(float baseline, in StreamCompressionModel model)
	{
		return default(float);
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x63614F0", Offset = "0x63604F0", VA = "0x63614F0")]
	public double ReadPackedDoubleDelta(double baseline, in StreamCompressionModel model)
	{
		return default(double);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x6361700", Offset = "0x6360700", VA = "0x6361700")]
	public FixedString32Bytes ReadFixedString32()
	{
		return default(FixedString32Bytes);
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x6361850", Offset = "0x6360850", VA = "0x6361850")]
	public FixedString64Bytes ReadFixedString64()
	{
		return default(FixedString64Bytes);
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x63618D0", Offset = "0x63608D0", VA = "0x63618D0")]
	public FixedString128Bytes ReadFixedString128()
	{
		return default(FixedString128Bytes);
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x6361990", Offset = "0x6360990", VA = "0x6361990")]
	public FixedString512Bytes ReadFixedString512()
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x63619F0", Offset = "0x63609F0", VA = "0x63619F0")]
	public FixedString4096Bytes ReadFixedString4096()
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x6361A50", Offset = "0x6360A50", VA = "0x6361A50")]
	public ushort ReadFixedString(NativeArray<byte> array)
	{
		return default(ushort);
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x6361760", Offset = "0x6360760", VA = "0x6361760")]
	private unsafe ushort ReadFixedStringInternal(byte* data, int maxLength)
	{
		return default(ushort);
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x6361AB0", Offset = "0x6360AB0", VA = "0x6361AB0")]
	public FixedString32Bytes ReadPackedFixedString32Delta(FixedString32Bytes baseline, in StreamCompressionModel model)
	{
		return default(FixedString32Bytes);
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x6361C80", Offset = "0x6360C80", VA = "0x6361C80")]
	public FixedString64Bytes ReadPackedFixedString64Delta(FixedString64Bytes baseline, in StreamCompressionModel model)
	{
		return default(FixedString64Bytes);
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x6361D10", Offset = "0x6360D10", VA = "0x6361D10")]
	public FixedString128Bytes ReadPackedFixedString128Delta(FixedString128Bytes baseline, in StreamCompressionModel model)
	{
		return default(FixedString128Bytes);
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x6361DF0", Offset = "0x6360DF0", VA = "0x6361DF0")]
	public FixedString512Bytes ReadPackedFixedString512Delta(FixedString512Bytes baseline, in StreamCompressionModel model)
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x6361E70", Offset = "0x6360E70", VA = "0x6361E70")]
	public FixedString4096Bytes ReadPackedFixedString4096Delta(FixedString4096Bytes baseline, in StreamCompressionModel model)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x6361EF0", Offset = "0x6360EF0", VA = "0x6361EF0")]
	public ushort ReadPackedFixedStringDelta(NativeArray<byte> data, NativeArray<byte> baseData, in StreamCompressionModel model)
	{
		return default(ushort);
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x6361B20", Offset = "0x6360B20", VA = "0x6361B20")]
	private unsafe ushort ReadPackedFixedStringDeltaInternal(byte* data, int maxLength, byte* baseData, ushort baseLength, in StreamCompressionModel model)
	{
		return default(ushort);
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x6361F80", Offset = "0x6360F80", VA = "0x6361F80")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	internal readonly void CheckRead()
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x6361F90", Offset = "0x6360F90", VA = "0x6361F90")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckBits(int numBits)
	{
	}
}
