// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedString512Bytes
// Update status: NEW in this game update
// No native C: this type has no methods, or its assembly is out of native scope.
// Prior real C# source: none (type is newer than the last public source snapshot)
// Bodies below are empty IL2CPP metadata stubs; the logic lives in the native C.
// ===============================================================
using System;
using System.Collections;
using System.ComponentModel;
using System.Diagnostics;
using System.Runtime.CompilerServices;
using Il2CppDummyDll;
using Unity.Collections.LowLevel.Unsafe;
using Unity.Properties;
using UnityEngine;

namespace Unity.Collections;

[Serializable]
[Token(Token = "0x2000072")]
[GenerateTestsForBurstCompatibility]
public struct FixedString512Bytes : INativeList<byte>, IIndexable<byte>, IUTF8Bytes, IComparable<string>, IEquatable<string>, IComparable<FixedString32Bytes>, IEquatable<FixedString32Bytes>, IComparable<FixedString64Bytes>, IEquatable<FixedString64Bytes>, IComparable<FixedString128Bytes>, IEquatable<FixedString128Bytes>, IComparable<FixedString512Bytes>, IEquatable<FixedString512Bytes>, IComparable<FixedString4096Bytes>, IEquatable<FixedString4096Bytes>
{
	[Token(Token = "0x2000073")]
	public struct Enumerator : IEnumerator
	{
		[Token(Token = "0x4000285")]
		[FieldOffset(Offset = "0x0")]
		private FixedString512Bytes target;

		[Token(Token = "0x4000286")]
		[FieldOffset(Offset = "0x200")]
		private int offset;

		[Token(Token = "0x4000287")]
		[FieldOffset(Offset = "0x204")]
		private Unicode.Rune current;

		[Token(Token = "0x1700009D")]
		public Unicode.Rune Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60004D2")]
			[Address(RVA = "0x299BE10", Offset = "0x299A410", VA = "0x18299BE10")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x1700009E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60004D3")]
			[Address(RVA = "0x299BC60", Offset = "0x299A260", VA = "0x18299BC60", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x299BCB0", Offset = "0x299A2B0", VA = "0x18299BCB0")]
		public Enumerator(FixedString512Bytes other)
		{
		}

		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x299B960", Offset = "0x2999F60", VA = "0x18299B960", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x299BAE0", Offset = "0x299A0E0", VA = "0x18299BAE0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000282")]
	internal const ushort utf8MaxLengthInBytes = 509;

	[Token(Token = "0x4000283")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal ushort utf8LengthInBytes;

	[Token(Token = "0x4000284")]
	[FieldOffset(Offset = "0x2")]
	[SerializeField]
	internal FixedBytes510 bytes;

	[Token(Token = "0x17000097")]
	public static int UTF8MaxLengthInBytes
	{
		[Token(Token = "0x600048B")]
		[Address(RVA = "0x29A2AD0", Offset = "0x29A10D0", VA = "0x1829A2AD0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000098")]
	[CreateProperty]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public string Value
	{
		[Token(Token = "0x600048C")]
		[Address(RVA = "0x29A2630", Offset = "0x29A0C30", VA = "0x1829A2630")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000099")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600048E")]
		[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600048F")]
		[Address(RVA = "0x299DC40", Offset = "0x299C240", VA = "0x18299DC40", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000490")]
		[Address(RVA = "0x29A2AD0", Offset = "0x29A10D0", VA = "0x1829A2AD0", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000491")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000493")]
		[Address(RVA = "0x299D490", Offset = "0x299BA90", VA = "0x18299D490", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700009C")]
	public byte this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000494")]
		[Address(RVA = "0x299D4A0", Offset = "0x299BAA0", VA = "0x18299D4A0", Slot = "7")]
		readonly get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000495")]
		[Address(RVA = "0x299DC30", Offset = "0x299C230", VA = "0x18299DC30", Slot = "8")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048D")]
	[Address(RVA = "0x1704750", Offset = "0x1702D50", VA = "0x181704750", Slot = "14")]
	public unsafe readonly byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x29A2670", Offset = "0x29A0C70", VA = "0x1829A2670", Slot = "15")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000496")]
	[Address(RVA = "0x299C4A0", Offset = "0x299AAA0", VA = "0x18299C4A0", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x299C2A0", Offset = "0x299A8A0", VA = "0x18299C2A0", Slot = "9")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x299BE30", Offset = "0x299A430", VA = "0x18299BE30")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x29A2050", Offset = "0x29A0650", VA = "0x1829A2050")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x29A19E0", Offset = "0x299FFE0", VA = "0x1829A19E0", Slot = "16")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x29A1FB0", Offset = "0x29A05B0", VA = "0x1829A1FB0", Slot = "17")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x29A1460", Offset = "0x299FA60", VA = "0x1829A1460")]
	public unsafe ref FixedList512Bytes<byte> AsFixedList()
	{
		return ref *(FixedList512Bytes<byte>*)null;
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x29A2810", Offset = "0x29A0E10", VA = "0x1829A2810")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public FixedString512Bytes(string source)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x29A24B0", Offset = "0x29A0AB0", VA = "0x1829A24B0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	internal CopyError Initialize(string source)
	{
		return default(CopyError);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x29A2A50", Offset = "0x29A1050", VA = "0x1829A2A50")]
	public FixedString512Bytes(Unicode.Rune rune, int count = 1)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x29A2230", Offset = "0x29A0830", VA = "0x1829A2230")]
	internal FormatError Initialize(Unicode.Rune rune, int count = 1)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x29A25B0", Offset = "0x29A0BB0", VA = "0x1829A25B0")]
	internal unsafe FormatError Initialize(byte* srcBytes, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x29A2930", Offset = "0x29A0F30", VA = "0x1829A2930")]
	public FixedString512Bytes(NativeText.ReadOnly other)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x29A26F0", Offset = "0x29A0CF0", VA = "0x1829A26F0")]
	public FixedString512Bytes(in UnsafeText other)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x29A1A40", Offset = "0x29A0040", VA = "0x1829A1A40", Slot = "18")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x29A28F0", Offset = "0x29A0EF0", VA = "0x1829A28F0")]
	public FixedString512Bytes(in FixedString32Bytes other)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x29A2350", Offset = "0x29A0950", VA = "0x1829A2350")]
	internal FormatError Initialize(in FixedString32Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x29A2E90", Offset = "0x29A1490", VA = "0x1829A2E90")]
	public static bool operator ==(in FixedString512Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x29A30B0", Offset = "0x29A16B0", VA = "0x1829A30B0")]
	public static bool operator !=(in FixedString512Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x29A1AB0", Offset = "0x29A00B0", VA = "0x1829A1AB0", Slot = "19")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x29A1940", Offset = "0x299FF40", VA = "0x1829A1940", Slot = "20")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x29A27D0", Offset = "0x29A0DD0", VA = "0x1829A27D0")]
	public FixedString512Bytes(in FixedString64Bytes other)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x29A2180", Offset = "0x29A0780", VA = "0x1829A2180")]
	internal FormatError Initialize(in FixedString64Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x29A2E00", Offset = "0x29A1400", VA = "0x1829A2E00")]
	public static bool operator ==(in FixedString512Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x29A3090", Offset = "0x29A1690", VA = "0x1829A3090")]
	public static bool operator !=(in FixedString512Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x29A1A90", Offset = "0x29A0090", VA = "0x1829A1A90", Slot = "21")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x29A18F0", Offset = "0x299FEF0", VA = "0x1829A18F0", Slot = "22")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x29A2A10", Offset = "0x29A1010", VA = "0x1829A2A10")]
	public FixedString512Bytes(in FixedString128Bytes other)
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x29A2500", Offset = "0x29A0B00", VA = "0x1829A2500")]
	internal FormatError Initialize(in FixedString128Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x29A2B60", Offset = "0x29A1160", VA = "0x1829A2B60")]
	public static bool operator ==(in FixedString512Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x29A3070", Offset = "0x29A1670", VA = "0x1829A3070")]
	public static bool operator !=(in FixedString512Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x29A1F70", Offset = "0x29A0570", VA = "0x1829A1F70", Slot = "23")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x29A18A0", Offset = "0x299FEA0", VA = "0x1829A18A0", Slot = "24")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x29A28B0", Offset = "0x29A0EB0", VA = "0x1829A28B0")]
	public FixedString512Bytes(in FixedString512Bytes other)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x29A22A0", Offset = "0x29A08A0", VA = "0x1829A22A0")]
	internal FormatError Initialize(in FixedString512Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x29A2AE0", Offset = "0x29A10E0", VA = "0x1829A2AE0")]
	public static bool operator ==(in FixedString512Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x29A31F0", Offset = "0x29A17F0", VA = "0x1829A31F0")]
	public static bool operator !=(in FixedString512Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x29A1F50", Offset = "0x29A0550", VA = "0x1829A1F50", Slot = "25")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x29A1990", Offset = "0x299FF90", VA = "0x1829A1990", Slot = "26")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x29A2870", Offset = "0x29A0E70", VA = "0x1829A2870")]
	public FixedString512Bytes(in FixedString4096Bytes other)
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x29A2400", Offset = "0x29A0A00", VA = "0x1829A2400")]
	internal FormatError Initialize(in FixedString4096Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x29A2D70", Offset = "0x29A1370", VA = "0x1829A2D70")]
	public static bool operator ==(in FixedString512Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x29A31D0", Offset = "0x29A17D0", VA = "0x1829A31D0")]
	public static bool operator !=(in FixedString512Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x29A1F90", Offset = "0x29A0590", VA = "0x1829A1F90", Slot = "27")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x29A2F20", Offset = "0x29A1520", VA = "0x1829A2F20")]
	public static implicit operator FixedString4096Bytes(in FixedString512Bytes fs)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x29A2BF0", Offset = "0x29A11F0", VA = "0x1829A2BF0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator ==(in FixedString512Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x29A30D0", Offset = "0x29A16D0", VA = "0x1829A30D0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator !=(in FixedString512Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x29A3010", Offset = "0x29A1610", VA = "0x1829A3010")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static implicit operator FixedString512Bytes(string b)
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x29A2630", Offset = "0x29A0C30", VA = "0x1829A2630", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x29A2140", Offset = "0x29A0740", VA = "0x1829A2140", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x29A1AD0", Offset = "0x29A00D0", VA = "0x1829A1AD0", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x29A1640", Offset = "0x299FC40", VA = "0x1829A1640")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private readonly void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x29A1770", Offset = "0x299FD70", VA = "0x1829A1770")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckLengthInRange(int length)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x29A1490", Offset = "0x299FA90", VA = "0x1829A1490")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckCapacityInRange(int capacity)
	{
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x29A1540", Offset = "0x299FB40", VA = "0x1829A1540")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x29A15E0", Offset = "0x299FBE0", VA = "0x1829A15E0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckFormatError(FormatError error)
	{
	}
}
