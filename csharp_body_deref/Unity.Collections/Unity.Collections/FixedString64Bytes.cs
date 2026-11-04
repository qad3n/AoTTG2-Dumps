// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedString64Bytes
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
[Token(Token = "0x200006C")]
[GenerateTestsForBurstCompatibility]
public struct FixedString64Bytes : INativeList<byte>, IIndexable<byte>, IUTF8Bytes, IComparable<string>, IEquatable<string>, IComparable<FixedString32Bytes>, IEquatable<FixedString32Bytes>, IComparable<FixedString64Bytes>, IEquatable<FixedString64Bytes>, IComparable<FixedString128Bytes>, IEquatable<FixedString128Bytes>, IComparable<FixedString512Bytes>, IEquatable<FixedString512Bytes>, IComparable<FixedString4096Bytes>, IEquatable<FixedString4096Bytes>
{
	[Token(Token = "0x200006D")]
	public struct Enumerator : IEnumerator
	{
		[Token(Token = "0x4000237")]
		[FieldOffset(Offset = "0x0")]
		private FixedString64Bytes target;

		[Token(Token = "0x4000238")]
		[FieldOffset(Offset = "0x40")]
		private int offset;

		[Token(Token = "0x4000239")]
		[FieldOffset(Offset = "0x44")]
		private Unicode.Rune current;

		[Token(Token = "0x1700008D")]
		public Unicode.Rune Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600043F")]
			[Address(RVA = "0x58A870", Offset = "0x588E70", VA = "0x18058A870")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x1700008E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x6000440")]
			[Address(RVA = "0x299BB70", Offset = "0x299A170", VA = "0x18299BB70", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x600043B")]
		[Address(RVA = "0x299BD90", Offset = "0x299A390", VA = "0x18299BD90")]
		public Enumerator(FixedString64Bytes other)
		{
		}

		[Token(Token = "0x600043C")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600043D")]
		[Address(RVA = "0x299BA40", Offset = "0x299A040", VA = "0x18299BA40", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x600043E")]
		[Address(RVA = "0x299BB00", Offset = "0x299A100", VA = "0x18299BB00", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000234")]
	internal const ushort utf8MaxLengthInBytes = 61;

	[Token(Token = "0x4000235")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal ushort utf8LengthInBytes;

	[Token(Token = "0x4000236")]
	[FieldOffset(Offset = "0x2")]
	[SerializeField]
	internal FixedBytes62 bytes;

	[Token(Token = "0x17000087")]
	public static int UTF8MaxLengthInBytes
	{
		[Token(Token = "0x60003F6")]
		[Address(RVA = "0x2441870", Offset = "0x243FE70", VA = "0x182441870")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000088")]
	[CreateProperty]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public string Value
	{
		[Token(Token = "0x60003F7")]
		[Address(RVA = "0x29A4320", Offset = "0x29A2920", VA = "0x1829A4320")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000089")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F9")]
		[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60003FA")]
		[Address(RVA = "0x299DC40", Offset = "0x299C240", VA = "0x18299DC40", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x1700008A")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003FB")]
		[Address(RVA = "0x2441870", Offset = "0x243FE70", VA = "0x182441870", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60003FC")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700008B")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003FE")]
		[Address(RVA = "0x299D490", Offset = "0x299BA90", VA = "0x18299D490", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x1700008C")]
	public byte this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003FF")]
		[Address(RVA = "0x299D4A0", Offset = "0x299BAA0", VA = "0x18299D4A0", Slot = "7")]
		readonly get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000400")]
		[Address(RVA = "0x299DC30", Offset = "0x299C230", VA = "0x18299DC30", Slot = "8")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003F8")]
	[Address(RVA = "0x1704750", Offset = "0x1702D50", VA = "0x181704750", Slot = "14")]
	public unsafe readonly byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60003FD")]
	[Address(RVA = "0x29A4360", Offset = "0x29A2960", VA = "0x1829A4360", Slot = "15")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000401")]
	[Address(RVA = "0x299C4A0", Offset = "0x299AAA0", VA = "0x18299C4A0", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x6000402")]
	[Address(RVA = "0x299C2A0", Offset = "0x299A8A0", VA = "0x18299C2A0", Slot = "9")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000403")]
	[Address(RVA = "0x299BE30", Offset = "0x299A430", VA = "0x18299BE30")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x6000404")]
	[Address(RVA = "0x29A3E10", Offset = "0x29A2410", VA = "0x1829A3E10")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000405")]
	[Address(RVA = "0x29A3750", Offset = "0x29A1D50", VA = "0x1829A3750", Slot = "16")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x6000406")]
	[Address(RVA = "0x29A3D30", Offset = "0x29A2330", VA = "0x1829A3D30", Slot = "17")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000407")]
	[Address(RVA = "0x29A3210", Offset = "0x29A1810", VA = "0x1829A3210")]
	public unsafe ref FixedList64Bytes<byte> AsFixedList()
	{
		return ref *(FixedList64Bytes<byte>*)null;
	}

	[Token(Token = "0x6000408")]
	[Address(RVA = "0x29A4640", Offset = "0x29A2C40", VA = "0x1829A4640")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public FixedString64Bytes(string source)
	{
	}

	[Token(Token = "0x6000409")]
	[Address(RVA = "0x29A4050", Offset = "0x29A2650", VA = "0x1829A4050")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	internal CopyError Initialize(string source)
	{
		return default(CopyError);
	}

	[Token(Token = "0x600040A")]
	[Address(RVA = "0x29A46A0", Offset = "0x29A2CA0", VA = "0x1829A46A0")]
	public FixedString64Bytes(Unicode.Rune rune, int count = 1)
	{
	}

	[Token(Token = "0x600040B")]
	[Address(RVA = "0x29A40A0", Offset = "0x29A26A0", VA = "0x1829A40A0")]
	internal FormatError Initialize(Unicode.Rune rune, int count = 1)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600040C")]
	[Address(RVA = "0x29A3E80", Offset = "0x29A2480", VA = "0x1829A3E80")]
	internal unsafe FormatError Initialize(byte* srcBytes, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600040D")]
	[Address(RVA = "0x29A4540", Offset = "0x29A2B40", VA = "0x1829A4540")]
	public FixedString64Bytes(NativeText.ReadOnly other)
	{
	}

	[Token(Token = "0x600040E")]
	[Address(RVA = "0x29A43D0", Offset = "0x29A29D0", VA = "0x1829A43D0")]
	public FixedString64Bytes(in UnsafeText other)
	{
	}

	[Token(Token = "0x600040F")]
	[Address(RVA = "0x29A37B0", Offset = "0x29A1DB0", VA = "0x1829A37B0", Slot = "18")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000410")]
	[Address(RVA = "0x29A4520", Offset = "0x29A2B20", VA = "0x1829A4520")]
	public FixedString64Bytes(in FixedString32Bytes other)
	{
	}

	[Token(Token = "0x6000411")]
	[Address(RVA = "0x29A4110", Offset = "0x29A2710", VA = "0x1829A4110")]
	internal FormatError Initialize(in FixedString32Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000412")]
	[Address(RVA = "0x29A4840", Offset = "0x29A2E40", VA = "0x1829A4840")]
	public static bool operator ==(in FixedString64Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000413")]
	[Address(RVA = "0x29A4E40", Offset = "0x29A3440", VA = "0x1829A4E40")]
	public static bool operator !=(in FixedString64Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000414")]
	[Address(RVA = "0x29A3CD0", Offset = "0x29A22D0", VA = "0x1829A3CD0", Slot = "19")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000415")]
	[Address(RVA = "0x29A3800", Offset = "0x29A1E00", VA = "0x1829A3800", Slot = "20")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000416")]
	[Address(RVA = "0x29A44C0", Offset = "0x29A2AC0", VA = "0x1829A44C0")]
	public FixedString64Bytes(in FixedString64Bytes other)
	{
	}

	[Token(Token = "0x6000417")]
	[Address(RVA = "0x29A41C0", Offset = "0x29A27C0", VA = "0x1829A41C0")]
	internal FormatError Initialize(in FixedString64Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000418")]
	[Address(RVA = "0x29A48D0", Offset = "0x29A2ED0", VA = "0x1829A48D0")]
	public static bool operator ==(in FixedString64Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000419")]
	[Address(RVA = "0x29A4E20", Offset = "0x29A3420", VA = "0x1829A4E20")]
	public static bool operator !=(in FixedString64Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600041A")]
	[Address(RVA = "0x29A3D10", Offset = "0x29A2310", VA = "0x1829A3D10", Slot = "21")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x600041B")]
	[Address(RVA = "0x29A36B0", Offset = "0x29A1CB0", VA = "0x1829A36B0", Slot = "22")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x600041C")]
	[Address(RVA = "0x29A44E0", Offset = "0x29A2AE0", VA = "0x1829A44E0")]
	public FixedString64Bytes(in FixedString128Bytes other)
	{
	}

	[Token(Token = "0x600041D")]
	[Address(RVA = "0x29A3EF0", Offset = "0x29A24F0", VA = "0x1829A3EF0")]
	internal FormatError Initialize(in FixedString128Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600041E")]
	[Address(RVA = "0x29A47B0", Offset = "0x29A2DB0", VA = "0x1829A47B0")]
	public static bool operator ==(in FixedString64Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600041F")]
	[Address(RVA = "0x29A4DE0", Offset = "0x29A33E0", VA = "0x1829A4DE0")]
	public static bool operator !=(in FixedString64Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000420")]
	[Address(RVA = "0x29A3CF0", Offset = "0x29A22F0", VA = "0x1829A3CF0", Slot = "23")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000421")]
	[Address(RVA = "0x29A4CC0", Offset = "0x29A32C0", VA = "0x1829A4CC0")]
	public static implicit operator FixedString128Bytes(in FixedString64Bytes fs)
	{
		return default(FixedString128Bytes);
	}

	[Token(Token = "0x6000422")]
	[Address(RVA = "0x29A3660", Offset = "0x29A1C60", VA = "0x1829A3660", Slot = "24")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000423")]
	[Address(RVA = "0x29A4500", Offset = "0x29A2B00", VA = "0x1829A4500")]
	public FixedString64Bytes(in FixedString512Bytes other)
	{
	}

	[Token(Token = "0x6000424")]
	[Address(RVA = "0x29A4270", Offset = "0x29A2870", VA = "0x1829A4270")]
	internal FormatError Initialize(in FixedString512Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000425")]
	[Address(RVA = "0x29A4720", Offset = "0x29A2D20", VA = "0x1829A4720")]
	public static bool operator ==(in FixedString64Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000426")]
	[Address(RVA = "0x29A4D00", Offset = "0x29A3300", VA = "0x1829A4D00")]
	public static bool operator !=(in FixedString64Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000427")]
	[Address(RVA = "0x29A3DD0", Offset = "0x29A23D0", VA = "0x1829A3DD0", Slot = "25")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000428")]
	[Address(RVA = "0x29A4C80", Offset = "0x29A3280", VA = "0x1829A4C80")]
	public static implicit operator FixedString512Bytes(in FixedString64Bytes fs)
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x6000429")]
	[Address(RVA = "0x29A3700", Offset = "0x29A1D00", VA = "0x1829A3700", Slot = "26")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x600042A")]
	[Address(RVA = "0x29A4620", Offset = "0x29A2C20", VA = "0x1829A4620")]
	public FixedString64Bytes(in FixedString4096Bytes other)
	{
	}

	[Token(Token = "0x600042B")]
	[Address(RVA = "0x29A3FA0", Offset = "0x29A25A0", VA = "0x1829A3FA0")]
	internal FormatError Initialize(in FixedString4096Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600042C")]
	[Address(RVA = "0x29A4AA0", Offset = "0x29A30A0", VA = "0x1829A4AA0")]
	public static bool operator ==(in FixedString64Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600042D")]
	[Address(RVA = "0x29A4E00", Offset = "0x29A3400", VA = "0x1829A4E00")]
	public static bool operator !=(in FixedString64Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600042E")]
	[Address(RVA = "0x29A3DF0", Offset = "0x29A23F0", VA = "0x1829A3DF0", Slot = "27")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x600042F")]
	[Address(RVA = "0x29A4B30", Offset = "0x29A3130", VA = "0x1829A4B30")]
	public static implicit operator FixedString4096Bytes(in FixedString64Bytes fs)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x6000430")]
	[Address(RVA = "0x29A4950", Offset = "0x29A2F50", VA = "0x1829A4950")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator ==(in FixedString64Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000431")]
	[Address(RVA = "0x29A4D20", Offset = "0x29A3320", VA = "0x1829A4D20")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator !=(in FixedString64Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000432")]
	[Address(RVA = "0x29A4C20", Offset = "0x29A3220", VA = "0x1829A4C20")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static implicit operator FixedString64Bytes(string b)
	{
		return default(FixedString64Bytes);
	}

	[Token(Token = "0x6000433")]
	[Address(RVA = "0x29A4320", Offset = "0x29A2920", VA = "0x1829A4320", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x6000434")]
	[Address(RVA = "0x29A3E40", Offset = "0x29A2440", VA = "0x1829A3E40", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000435")]
	[Address(RVA = "0x29A3850", Offset = "0x29A1E50", VA = "0x1829A3850", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000436")]
	[Address(RVA = "0x29A3400", Offset = "0x29A1A00", VA = "0x1829A3400")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private readonly void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x6000437")]
	[Address(RVA = "0x29A3530", Offset = "0x29A1B30", VA = "0x1829A3530")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckLengthInRange(int length)
	{
	}

	[Token(Token = "0x6000438")]
	[Address(RVA = "0x29A3240", Offset = "0x29A1840", VA = "0x1829A3240")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckCapacityInRange(int capacity)
	{
	}

	[Token(Token = "0x6000439")]
	[Address(RVA = "0x29A3300", Offset = "0x29A1900", VA = "0x1829A3300")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x600043A")]
	[Address(RVA = "0x29A33A0", Offset = "0x29A19A0", VA = "0x1829A33A0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckFormatError(FormatError error)
	{
	}
}
