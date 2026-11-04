// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.DataStreamReader
// Update status: NEW in this game update
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
		[Address(RVA = "0x8ED110", Offset = "0x8EB710", VA = "0x1808ED110")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002E")]
	public readonly bool HasFailedReads
	{
		[Token(Token = "0x6000176")]
		[Address(RVA = "0x2999EC0", Offset = "0x29984C0", VA = "0x182999EC0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700002F")]
	public readonly int Length
	{
		[Token(Token = "0x6000177")]
		[Address(RVA = "0xA4C170", Offset = "0xA4A770", VA = "0x180A4C170")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000030")]
	public readonly bool IsCreated
	{
		[Token(Token = "0x6000178")]
		[Address(RVA = "0xA507A0", Offset = "0xA4EDA0", VA = "0x180A507A0")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x6000171")]
	[Address(RVA = "0x2999E50", Offset = "0x2998450", VA = "0x182999E50")]
	public DataStreamReader(NativeArray<byte> array)
	{
	}

	[Token(Token = "0x6000172")]
	[Address(RVA = "0x2998BD0", Offset = "0x29971D0", VA = "0x182998BD0")]
	private static void Initialize(out DataStreamReader self, NativeArray<byte> array)
	{
	}

	[Token(Token = "0x6000174")]
	[Address(RVA = "0x1ACCF30", Offset = "0x1ACB530", VA = "0x181ACCF30")]
	private static short ByteSwap(short val)
	{
		return default(short);
	}

	[Token(Token = "0x6000175")]
	[Address(RVA = "0x1ACCF20", Offset = "0x1ACB520", VA = "0x181ACCF20")]
	private static int ByteSwap(int val)
	{
		return default(int);
	}

	[Token(Token = "0x6000179")]
	[Address(RVA = "0x2998CC0", Offset = "0x29972C0", VA = "0x182998CC0")]
	private unsafe void ReadBytesInternal(byte* data, int length)
	{
	}

	[Token(Token = "0x600017A")]
	[Address(RVA = "0x2998DB0", Offset = "0x29973B0", VA = "0x182998DB0")]
	public void ReadBytes(NativeArray<byte> array)
	{
	}

	[Token(Token = "0x600017B")]
	[Address(RVA = "0x2998D40", Offset = "0x2997340", VA = "0x182998D40")]
	public void ReadBytes(Span<byte> span)
	{
	}

	[Token(Token = "0x600017C")]
	[Address(RVA = "0x2998BC0", Offset = "0x29971C0", VA = "0x182998BC0")]
	public int GetBytesRead()
	{
		return default(int);
	}

	[Token(Token = "0x600017D")]
	[Address(RVA = "0x2998BB0", Offset = "0x29971B0", VA = "0x182998BB0")]
	public int GetBitsRead()
	{
		return default(int);
	}

	[Token(Token = "0x600017E")]
	[Address(RVA = "0x2999E30", Offset = "0x2998430", VA = "0x182999E30")]
	public void SeekSet(int pos)
	{
	}

	[Token(Token = "0x600017F")]
	[Address(RVA = "0x2998C40", Offset = "0x2997240", VA = "0x182998C40")]
	public byte ReadByte()
	{
		return default(byte);
	}

	[Token(Token = "0x6000180")]
	[Address(RVA = "0x2999D90", Offset = "0x2998390", VA = "0x182999D90")]
	public short ReadShort()
	{
		return default(short);
	}

	[Token(Token = "0x6000181")]
	[Address(RVA = "0x2999D90", Offset = "0x2998390", VA = "0x182999D90")]
	public ushort ReadUShort()
	{
		return default(ushort);
	}

	[Token(Token = "0x6000182")]
	[Address(RVA = "0x2999280", Offset = "0x2997880", VA = "0x182999280")]
	public int ReadInt()
	{
		return default(int);
	}

	[Token(Token = "0x6000183")]
	[Address(RVA = "0x2999280", Offset = "0x2997880", VA = "0x182999280")]
	public uint ReadUInt()
	{
		return default(uint);
	}

	[Token(Token = "0x6000184")]
	[Address(RVA = "0x2999300", Offset = "0x2997900", VA = "0x182999300")]
	public long ReadLong()
	{
		return default(long);
	}

	[Token(Token = "0x6000185")]
	[Address(RVA = "0x2999300", Offset = "0x2997900", VA = "0x182999300")]
	public ulong ReadULong()
	{
		return default(ulong);
	}

	[Token(Token = "0x6000186")]
	[Address(RVA = "0x2998B90", Offset = "0x2997190", VA = "0x182998B90")]
	public void Flush()
	{
	}

	[Token(Token = "0x6000187")]
	[Address(RVA = "0x2999D00", Offset = "0x2998300", VA = "0x182999D00")]
	public short ReadShortNetworkByteOrder()
	{
		return default(short);
	}

	[Token(Token = "0x6000188")]
	[Address(RVA = "0x2999E20", Offset = "0x2998420", VA = "0x182999E20")]
	public ushort ReadUShortNetworkByteOrder()
	{
		return default(ushort);
	}

	[Token(Token = "0x6000189")]
	[Address(RVA = "0x2999200", Offset = "0x2997800", VA = "0x182999200")]
	public int ReadIntNetworkByteOrder()
	{
		return default(int);
	}

	[Token(Token = "0x600018A")]
	[Address(RVA = "0x2999E10", Offset = "0x2998410", VA = "0x182999E10")]
	public uint ReadUIntNetworkByteOrder()
	{
		return default(uint);
	}

	[Token(Token = "0x600018B")]
	[Address(RVA = "0x29991E0", Offset = "0x29977E0", VA = "0x1829991E0")]
	public float ReadFloat()
	{
		return default(float);
	}

	[Token(Token = "0x600018C")]
	[Address(RVA = "0x2998E20", Offset = "0x2997420", VA = "0x182998E20")]
	public double ReadDouble()
	{
		return default(double);
	}

	[Token(Token = "0x600018D")]
	[Address(RVA = "0x2999BD0", Offset = "0x29981D0", VA = "0x182999BD0")]
	public uint ReadPackedUInt(in StreamCompressionModel model)
	{
		return default(uint);
	}

	[Token(Token = "0x600018E")]
	[Address(RVA = "0x2999B00", Offset = "0x2998100", VA = "0x182999B00")]
	private uint ReadPackedUIntInternal(int maxSymbolLength, in StreamCompressionModel model)
	{
		return default(uint);
	}

	[Token(Token = "0x600018F")]
	[Address(RVA = "0x2998B50", Offset = "0x2997150", VA = "0x182998B50")]
	private void FillBitBuffer()
	{
	}

	[Token(Token = "0x6000190")]
	[Address(RVA = "0x2999C40", Offset = "0x2998240", VA = "0x182999C40")]
	private uint ReadRawBitsInternal(int numbits)
	{
		return default(uint);
	}

	[Token(Token = "0x6000191")]
	[Address(RVA = "0x2999C80", Offset = "0x2998280", VA = "0x182999C80")]
	public uint ReadRawBits(int numbits)
	{
		return default(uint);
	}

	[Token(Token = "0x6000192")]
	[Address(RVA = "0x2999BE0", Offset = "0x29981E0", VA = "0x182999BE0")]
	public ulong ReadPackedULong(in StreamCompressionModel model)
	{
		return default(ulong);
	}

	[Token(Token = "0x6000193")]
	[Address(RVA = "0x2999A00", Offset = "0x2998000", VA = "0x182999A00")]
	public int ReadPackedInt(in StreamCompressionModel model)
	{
		return default(int);
	}

	[Token(Token = "0x6000194")]
	[Address(RVA = "0x2999A90", Offset = "0x2998090", VA = "0x182999A90")]
	public long ReadPackedLong(in StreamCompressionModel model)
	{
		return default(long);
	}

	[Token(Token = "0x6000195")]
	[Address(RVA = "0x29999C0", Offset = "0x2997FC0", VA = "0x1829999C0")]
	public float ReadPackedFloat(in StreamCompressionModel model)
	{
		return default(float);
	}

	[Token(Token = "0x6000196")]
	[Address(RVA = "0x29994A0", Offset = "0x2997AA0", VA = "0x1829994A0")]
	public double ReadPackedDouble(in StreamCompressionModel model)
	{
		return default(double);
	}

	[Token(Token = "0x6000197")]
	[Address(RVA = "0x29999D0", Offset = "0x2997FD0", VA = "0x1829999D0")]
	public int ReadPackedIntDelta(int baseline, in StreamCompressionModel model)
	{
		return default(int);
	}

	[Token(Token = "0x6000198")]
	[Address(RVA = "0x29999D0", Offset = "0x2997FD0", VA = "0x1829999D0")]
	public uint ReadPackedUIntDelta(uint baseline, in StreamCompressionModel model)
	{
		return default(uint);
	}

	[Token(Token = "0x6000199")]
	[Address(RVA = "0x2999A30", Offset = "0x2998030", VA = "0x182999A30")]
	public long ReadPackedLongDelta(long baseline, in StreamCompressionModel model)
	{
		return default(long);
	}

	[Token(Token = "0x600019A")]
	[Address(RVA = "0x2999A30", Offset = "0x2998030", VA = "0x182999A30")]
	public ulong ReadPackedULongDelta(ulong baseline, in StreamCompressionModel model)
	{
		return default(ulong);
	}

	[Token(Token = "0x600019B")]
	[Address(RVA = "0x2999920", Offset = "0x2997F20", VA = "0x182999920")]
	public float ReadPackedFloatDelta(float baseline, in StreamCompressionModel model)
	{
		return default(float);
	}

	[Token(Token = "0x600019C")]
	[Address(RVA = "0x2999380", Offset = "0x2997980", VA = "0x182999380")]
	public double ReadPackedDoubleDelta(double baseline, in StreamCompressionModel model)
	{
		return default(double);
	}

	[Token(Token = "0x600019D")]
	[Address(RVA = "0x2998ED0", Offset = "0x29974D0", VA = "0x182998ED0")]
	public FixedString32Bytes ReadFixedString32()
	{
		return default(FixedString32Bytes);
	}

	[Token(Token = "0x600019E")]
	[Address(RVA = "0x2999080", Offset = "0x2997680", VA = "0x182999080")]
	public FixedString64Bytes ReadFixedString64()
	{
		return default(FixedString64Bytes);
	}

	[Token(Token = "0x600019F")]
	[Address(RVA = "0x2998E40", Offset = "0x2997440", VA = "0x182998E40")]
	public FixedString128Bytes ReadFixedString128()
	{
		return default(FixedString128Bytes);
	}

	[Token(Token = "0x60001A0")]
	[Address(RVA = "0x2999000", Offset = "0x2997600", VA = "0x182999000")]
	public FixedString512Bytes ReadFixedString512()
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x60001A1")]
	[Address(RVA = "0x2998F50", Offset = "0x2997550", VA = "0x182998F50")]
	public FixedString4096Bytes ReadFixedString4096()
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x60001A2")]
	[Address(RVA = "0x2999150", Offset = "0x2997750", VA = "0x182999150")]
	public ushort ReadFixedString(NativeArray<byte> array)
	{
		return default(ushort);
	}

	[Token(Token = "0x60001A3")]
	[Address(RVA = "0x2999100", Offset = "0x2997700", VA = "0x182999100")]
	private unsafe ushort ReadFixedStringInternal(byte* data, int maxLength)
	{
		return default(ushort);
	}

	[Token(Token = "0x60001A4")]
	[Address(RVA = "0x2999520", Offset = "0x2997B20", VA = "0x182999520")]
	public FixedString32Bytes ReadPackedFixedString32Delta(FixedString32Bytes baseline, in StreamCompressionModel model)
	{
		return default(FixedString32Bytes);
	}

	[Token(Token = "0x60001A5")]
	[Address(RVA = "0x2999680", Offset = "0x2997C80", VA = "0x182999680")]
	public FixedString64Bytes ReadPackedFixedString64Delta(FixedString64Bytes baseline, in StreamCompressionModel model)
	{
		return default(FixedString64Bytes);
	}

	[Token(Token = "0x60001A6")]
	[Address(RVA = "0x29994B0", Offset = "0x2997AB0", VA = "0x1829994B0")]
	public FixedString128Bytes ReadPackedFixedString128Delta(FixedString128Bytes baseline, in StreamCompressionModel model)
	{
		return default(FixedString128Bytes);
	}

	[Token(Token = "0x60001A7")]
	[Address(RVA = "0x2999620", Offset = "0x2997C20", VA = "0x182999620")]
	public FixedString512Bytes ReadPackedFixedString512Delta(FixedString512Bytes baseline, in StreamCompressionModel model)
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x60001A8")]
	[Address(RVA = "0x2999580", Offset = "0x2997B80", VA = "0x182999580")]
	public FixedString4096Bytes ReadPackedFixedString4096Delta(FixedString4096Bytes baseline, in StreamCompressionModel model)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x60001A9")]
	[Address(RVA = "0x2999880", Offset = "0x2997E80", VA = "0x182999880")]
	public ushort ReadPackedFixedStringDelta(NativeArray<byte> data, NativeArray<byte> baseData, in StreamCompressionModel model)
	{
		return default(ushort);
	}

	[Token(Token = "0x60001AA")]
	[Address(RVA = "0x29996E0", Offset = "0x2997CE0", VA = "0x1829996E0")]
	private unsafe ushort ReadPackedFixedStringDeltaInternal(byte* data, int maxLength, byte* baseData, ushort baseLength, in StreamCompressionModel model)
	{
		return default(ushort);
	}

	[Token(Token = "0x60001AB")]
	[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	internal readonly void CheckRead()
	{
	}

	[Token(Token = "0x60001AC")]
	[Address(RVA = "0x2998AB0", Offset = "0x29970B0", VA = "0x182998AB0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckBits(int numBits)
	{
	}
}
