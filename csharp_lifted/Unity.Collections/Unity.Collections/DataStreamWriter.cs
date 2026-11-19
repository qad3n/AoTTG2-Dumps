// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.DataStreamWriter
// Update status: unchanged since the previous dump
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
		[Address(RVA = "0x6360780", Offset = "0x635F780", VA = "0x6360780")]
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
		[Address(RVA = "0x6362340", Offset = "0x6361340", VA = "0x6362340")]
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
		[Address(RVA = "0x6362350", Offset = "0x6361350", VA = "0x6362350")]
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
		[Address(RVA = "0x6362360", Offset = "0x6361360", VA = "0x6362360")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000035")]
	public int Length
	{
		[Token(Token = "0x60001B8")]
		[Address(RVA = "0x63622E0", Offset = "0x63612E0", VA = "0x63622E0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000036")]
	public int LengthInBits
	{
		[Token(Token = "0x60001B9")]
		[Address(RVA = "0x63623A0", Offset = "0x63613A0", VA = "0x63623A0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x60001AE")]
	[Address(RVA = "0x6362010", Offset = "0x6361010", VA = "0x6362010")]
	public DataStreamWriter(int length, AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x60001AF")]
	[Address(RVA = "0x6362130", Offset = "0x6361130", VA = "0x6362130")]
	public DataStreamWriter(NativeArray<byte> data)
	{
	}

	[Token(Token = "0x60001B0")]
	[Address(RVA = "0x63621A0", Offset = "0x63611A0", VA = "0x63621A0")]
	public unsafe DataStreamWriter(byte* data, int length)
	{
	}

	[Token(Token = "0x60001B1")]
	[Address(RVA = "0x6362250", Offset = "0x6361250", VA = "0x6362250")]
	public NativeArray<byte> AsNativeArray()
	{
		return default(NativeArray<byte>);
	}

	[Token(Token = "0x60001B2")]
	[Address(RVA = "0x63620C0", Offset = "0x63610C0", VA = "0x63620C0")]
	private static void Initialize(out DataStreamWriter self, NativeArray<byte> data)
	{
	}

	[Token(Token = "0x60001B3")]
	[Address(RVA = "0x6362320", Offset = "0x6361320", VA = "0x6362320")]
	private static short ByteSwap(short val)
	{
		return default(short);
	}

	[Token(Token = "0x60001B4")]
	[Address(RVA = "0x6362330", Offset = "0x6361330", VA = "0x6362330")]
	private static int ByteSwap(int val)
	{
		return default(int);
	}

	[Token(Token = "0x60001BA")]
	[Address(RVA = "0x6362370", Offset = "0x6361370", VA = "0x6362370")]
	private void SyncBitData()
	{
	}

	[Token(Token = "0x60001BB")]
	[Address(RVA = "0x63623E0", Offset = "0x63613E0", VA = "0x63623E0")]
	public void Flush()
	{
	}

	[Token(Token = "0x60001BC")]
	[Address(RVA = "0x6362430", Offset = "0x6361430", VA = "0x6362430")]
	private unsafe bool WriteBytesInternal(byte* data, int bytes)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BD")]
	[Address(RVA = "0x63624D0", Offset = "0x63614D0", VA = "0x63624D0")]
	public bool WriteByte(byte value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BE")]
	[Address(RVA = "0x6362570", Offset = "0x6361570", VA = "0x6362570")]
	public bool WriteBytes(NativeArray<byte> value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001BF")]
	[Address(RVA = "0x6362650", Offset = "0x6361650", VA = "0x6362650")]
	public bool WriteBytes(Span<byte> value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C0")]
	[Address(RVA = "0x6362750", Offset = "0x6361750", VA = "0x6362750")]
	public bool WriteShort(short value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C1")]
	[Address(RVA = "0x6362800", Offset = "0x6361800", VA = "0x6362800")]
	public bool WriteUShort(ushort value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C2")]
	[Address(RVA = "0x63628B0", Offset = "0x63618B0", VA = "0x63628B0")]
	public bool WriteInt(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C3")]
	[Address(RVA = "0x6362960", Offset = "0x6361960", VA = "0x6362960")]
	public bool WriteUInt(uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C4")]
	[Address(RVA = "0x6362A10", Offset = "0x6361A10", VA = "0x6362A10")]
	public bool WriteLong(long value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C5")]
	[Address(RVA = "0x6362AC0", Offset = "0x6361AC0", VA = "0x6362AC0")]
	public bool WriteULong(ulong value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C6")]
	[Address(RVA = "0x6362B70", Offset = "0x6361B70", VA = "0x6362B70")]
	public bool WriteShortNetworkByteOrder(short value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C7")]
	[Address(RVA = "0x6362C30", Offset = "0x6361C30", VA = "0x6362C30")]
	public bool WriteUShortNetworkByteOrder(ushort value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C8")]
	[Address(RVA = "0x6362CF0", Offset = "0x6361CF0", VA = "0x6362CF0")]
	public bool WriteIntNetworkByteOrder(int value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001C9")]
	[Address(RVA = "0x6362DB0", Offset = "0x6361DB0", VA = "0x6362DB0")]
	public bool WriteUIntNetworkByteOrder(uint value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CA")]
	[Address(RVA = "0x6362E70", Offset = "0x6361E70", VA = "0x6362E70")]
	public bool WriteFloat(float value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CB")]
	[Address(RVA = "0x6362F30", Offset = "0x6361F30", VA = "0x6362F30")]
	public bool WriteDouble(double value)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CC")]
	[Address(RVA = "0x6362FF0", Offset = "0x6361FF0", VA = "0x6362FF0")]
	private void FlushBits()
	{
	}

	[Token(Token = "0x60001CD")]
	[Address(RVA = "0x6363030", Offset = "0x6362030", VA = "0x6363030")]
	private void WriteRawBitsInternal(uint value, int numbits)
	{
	}

	[Token(Token = "0x60001CE")]
	[Address(RVA = "0x6363050", Offset = "0x6362050", VA = "0x6363050")]
	public bool WriteRawBits(uint value, int numbits)
	{
		return default(bool);
	}

	[Token(Token = "0x60001CF")]
	[Address(RVA = "0x63630D0", Offset = "0x63620D0", VA = "0x63630D0")]
	public bool WritePackedUInt(uint value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D0")]
	[Address(RVA = "0x63631D0", Offset = "0x63621D0", VA = "0x63631D0")]
	public bool WritePackedULong(ulong value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D1")]
	[Address(RVA = "0x6363210", Offset = "0x6362210", VA = "0x6363210")]
	public bool WritePackedInt(int value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D2")]
	[Address(RVA = "0x6363220", Offset = "0x6362220", VA = "0x6363220")]
	public bool WritePackedLong(long value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D3")]
	[Address(RVA = "0x6363270", Offset = "0x6362270", VA = "0x6363270")]
	public bool WritePackedFloat(float value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D4")]
	[Address(RVA = "0x63633E0", Offset = "0x63623E0", VA = "0x63633E0")]
	public bool WritePackedDouble(double value, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D5")]
	[Address(RVA = "0x6363500", Offset = "0x6362500", VA = "0x6363500")]
	public bool WritePackedUIntDelta(uint value, uint baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D6")]
	[Address(RVA = "0x6363520", Offset = "0x6362520", VA = "0x6363520")]
	public bool WritePackedIntDelta(int value, int baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D7")]
	[Address(RVA = "0x6363540", Offset = "0x6362540", VA = "0x6363540")]
	public bool WritePackedLongDelta(long value, long baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D8")]
	[Address(RVA = "0x6363590", Offset = "0x6362590", VA = "0x6363590")]
	public bool WritePackedULongDelta(ulong value, ulong baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001D9")]
	[Address(RVA = "0x6363320", Offset = "0x6362320", VA = "0x6363320")]
	public bool WritePackedFloatDelta(float value, float baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DA")]
	[Address(RVA = "0x63633F0", Offset = "0x63623F0", VA = "0x63633F0")]
	public bool WritePackedDoubleDelta(double value, double baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DB")]
	[Address(RVA = "0x63635E0", Offset = "0x63625E0", VA = "0x63635E0")]
	public bool WriteFixedString32(FixedString32Bytes str)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DC")]
	[Address(RVA = "0x6363690", Offset = "0x6362690", VA = "0x6363690")]
	public bool WriteFixedString64(FixedString64Bytes str)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DD")]
	[Address(RVA = "0x6363740", Offset = "0x6362740", VA = "0x6363740")]
	public bool WriteFixedString128(FixedString128Bytes str)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DE")]
	[Address(RVA = "0x63637F0", Offset = "0x63627F0", VA = "0x63637F0")]
	public bool WriteFixedString512(FixedString512Bytes str)
	{
		return default(bool);
	}

	[Token(Token = "0x60001DF")]
	[Address(RVA = "0x63638A0", Offset = "0x63628A0", VA = "0x63638A0")]
	public bool WriteFixedString4096(FixedString4096Bytes str)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E0")]
	[Address(RVA = "0x6363950", Offset = "0x6362950", VA = "0x6363950")]
	public bool WritePackedFixedString32Delta(FixedString32Bytes str, FixedString32Bytes baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E1")]
	[Address(RVA = "0x6363AF0", Offset = "0x6362AF0", VA = "0x6363AF0")]
	public bool WritePackedFixedString64Delta(FixedString64Bytes str, FixedString64Bytes baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E2")]
	[Address(RVA = "0x6363B10", Offset = "0x6362B10", VA = "0x6363B10")]
	public bool WritePackedFixedString128Delta(FixedString128Bytes str, FixedString128Bytes baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E3")]
	[Address(RVA = "0x6363B40", Offset = "0x6362B40", VA = "0x6363B40")]
	public bool WritePackedFixedString512Delta(FixedString512Bytes str, FixedString512Bytes baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E4")]
	[Address(RVA = "0x6363B70", Offset = "0x6362B70", VA = "0x6363B70")]
	public bool WritePackedFixedString4096Delta(FixedString4096Bytes str, FixedString4096Bytes baseline, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E5")]
	[Address(RVA = "0x6363970", Offset = "0x6362970", VA = "0x6363970")]
	private unsafe bool WritePackedFixedStringDelta(byte* data, uint length, byte* baseData, uint baseLength, in StreamCompressionModel model)
	{
		return default(bool);
	}

	[Token(Token = "0x60001E6")]
	[Address(RVA = "0x6363BA0", Offset = "0x6362BA0", VA = "0x6363BA0")]
	public void Clear()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E7")]
	[Address(RVA = "0x6363BB0", Offset = "0x6362BB0", VA = "0x6363BB0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private readonly void CheckRead()
	{
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60001E8")]
	[Address(RVA = "0x6363BC0", Offset = "0x6362BC0", VA = "0x6363BC0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	private void CheckWrite()
	{
	}

	[Token(Token = "0x60001E9")]
	[Address(RVA = "0x6363BD0", Offset = "0x6362BD0", VA = "0x6363BD0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckAllocator(AllocatorManager.AllocatorHandle allocator)
	{
	}

	[Token(Token = "0x60001EA")]
	[Address(RVA = "0x6363C20", Offset = "0x6362C20", VA = "0x6363C20")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckBits(uint value, int numBits)
	{
	}
}
