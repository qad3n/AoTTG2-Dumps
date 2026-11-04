// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedString128Bytes
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
[Token(Token = "0x200006F")]
[GenerateTestsForBurstCompatibility]
public struct FixedString128Bytes : INativeList<byte>, IIndexable<byte>, IUTF8Bytes, IComparable<string>, IEquatable<string>, IComparable<FixedString32Bytes>, IEquatable<FixedString32Bytes>, IComparable<FixedString64Bytes>, IEquatable<FixedString64Bytes>, IComparable<FixedString128Bytes>, IEquatable<FixedString128Bytes>, IComparable<FixedString512Bytes>, IEquatable<FixedString512Bytes>, IComparable<FixedString4096Bytes>, IEquatable<FixedString4096Bytes>
{
	[Token(Token = "0x2000070")]
	public struct Enumerator : IEnumerator
	{
		[Token(Token = "0x4000252")]
		[FieldOffset(Offset = "0x0")]
		private FixedString128Bytes target;

		[Token(Token = "0x4000253")]
		[FieldOffset(Offset = "0x80")]
		private int offset;

		[Token(Token = "0x4000254")]
		[FieldOffset(Offset = "0x84")]
		private Unicode.Rune current;

		[Token(Token = "0x17000095")]
		public Unicode.Rune Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x6000489")]
			[Address(RVA = "0xA4D4C0", Offset = "0xA4BAC0", VA = "0x180A4D4C0")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x17000096")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600048A")]
			[Address(RVA = "0x299BC10", Offset = "0x299A210", VA = "0x18299BC10", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000485")]
		[Address(RVA = "0x299BDC0", Offset = "0x299A3C0", VA = "0x18299BDC0")]
		public Enumerator(FixedString128Bytes other)
		{
		}

		[Token(Token = "0x6000486")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000487")]
		[Address(RVA = "0x299BA80", Offset = "0x299A080", VA = "0x18299BA80", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000488")]
		[Address(RVA = "0x299BAD0", Offset = "0x299A0D0", VA = "0x18299BAD0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x400024F")]
	internal const ushort utf8MaxLengthInBytes = 125;

	[Token(Token = "0x4000250")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal ushort utf8LengthInBytes;

	[Token(Token = "0x4000251")]
	[FieldOffset(Offset = "0x2")]
	[SerializeField]
	internal FixedBytes126 bytes;

	[Token(Token = "0x1700008F")]
	public static int UTF8MaxLengthInBytes
	{
		[Token(Token = "0x6000441")]
		[Address(RVA = "0x299D480", Offset = "0x299BA80", VA = "0x18299D480")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000090")]
	[CreateProperty]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public string Value
	{
		[Token(Token = "0x6000442")]
		[Address(RVA = "0x299D030", Offset = "0x299B630", VA = "0x18299D030")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000091")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000444")]
		[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000445")]
		[Address(RVA = "0x299DC40", Offset = "0x299C240", VA = "0x18299DC40", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000092")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000446")]
		[Address(RVA = "0x299D480", Offset = "0x299BA80", VA = "0x18299D480", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000447")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000093")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000449")]
		[Address(RVA = "0x299D490", Offset = "0x299BA90", VA = "0x18299D490", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000094")]
	public byte this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600044A")]
		[Address(RVA = "0x299D4A0", Offset = "0x299BAA0", VA = "0x18299D4A0", Slot = "7")]
		readonly get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x600044B")]
		[Address(RVA = "0x299DC30", Offset = "0x299C230", VA = "0x18299DC30", Slot = "8")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000443")]
	[Address(RVA = "0x1704750", Offset = "0x1702D50", VA = "0x181704750", Slot = "14")]
	public unsafe readonly byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x6000448")]
	[Address(RVA = "0x299D070", Offset = "0x299B670", VA = "0x18299D070", Slot = "15")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600044C")]
	[Address(RVA = "0x299C4A0", Offset = "0x299AAA0", VA = "0x18299C4A0", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x600044D")]
	[Address(RVA = "0x299C2A0", Offset = "0x299A8A0", VA = "0x18299C2A0", Slot = "9")]
	public void Clear()
	{
	}

	[Token(Token = "0x600044E")]
	[Address(RVA = "0x299BE30", Offset = "0x299A430", VA = "0x18299BE30")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x600044F")]
	[Address(RVA = "0x299CA70", Offset = "0x299B070", VA = "0x18299CA70")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x6000450")]
	[Address(RVA = "0x299C3A0", Offset = "0x299A9A0", VA = "0x18299C3A0", Slot = "16")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x6000451")]
	[Address(RVA = "0x299C530", Offset = "0x299AB30", VA = "0x18299C530", Slot = "17")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000452")]
	[Address(RVA = "0x299BE50", Offset = "0x299A450", VA = "0x18299BE50")]
	public unsafe ref FixedList128Bytes<byte> AsFixedList()
	{
		return ref *(FixedList128Bytes<byte>*)null;
	}

	[Token(Token = "0x6000453")]
	[Address(RVA = "0x299D2E0", Offset = "0x299B8E0", VA = "0x18299D2E0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public FixedString128Bytes(string source)
	{
	}

	[Token(Token = "0x6000454")]
	[Address(RVA = "0x299CEA0", Offset = "0x299B4A0", VA = "0x18299CEA0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	internal CopyError Initialize(string source)
	{
		return default(CopyError);
	}

	[Token(Token = "0x6000455")]
	[Address(RVA = "0x299D280", Offset = "0x299B880", VA = "0x18299D280")]
	public FixedString128Bytes(Unicode.Rune rune, int count = 1)
	{
	}

	[Token(Token = "0x6000456")]
	[Address(RVA = "0x299CFB0", Offset = "0x299B5B0", VA = "0x18299CFB0")]
	internal FormatError Initialize(Unicode.Rune rune, int count = 1)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000457")]
	[Address(RVA = "0x299CCA0", Offset = "0x299B2A0", VA = "0x18299CCA0")]
	internal unsafe FormatError Initialize(byte* srcBytes, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000458")]
	[Address(RVA = "0x299D350", Offset = "0x299B950", VA = "0x18299D350")]
	public FixedString128Bytes(NativeText.ReadOnly other)
	{
	}

	[Token(Token = "0x6000459")]
	[Address(RVA = "0x299D140", Offset = "0x299B740", VA = "0x18299D140")]
	public FixedString128Bytes(in UnsafeText other)
	{
	}

	[Token(Token = "0x600045A")]
	[Address(RVA = "0x299C450", Offset = "0x299AA50", VA = "0x18299C450", Slot = "18")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x600045B")]
	[Address(RVA = "0x299D250", Offset = "0x299B850", VA = "0x18299D250")]
	public FixedString128Bytes(in FixedString32Bytes other)
	{
	}

	[Token(Token = "0x600045C")]
	[Address(RVA = "0x299CDE0", Offset = "0x299B3E0", VA = "0x18299CDE0")]
	internal FormatError Initialize(in FixedString32Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600045D")]
	[Address(RVA = "0x299D6B0", Offset = "0x299BCB0", VA = "0x18299D6B0")]
	public static bool operator ==(in FixedString128Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600045E")]
	[Address(RVA = "0x299DC10", Offset = "0x299C210", VA = "0x18299DC10")]
	public static bool operator !=(in FixedString128Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600045F")]
	[Address(RVA = "0x299C510", Offset = "0x299AB10", VA = "0x18299C510", Slot = "19")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000460")]
	[Address(RVA = "0x299C400", Offset = "0x299AA00", VA = "0x18299C400", Slot = "20")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000461")]
	[Address(RVA = "0x299D450", Offset = "0x299BA50", VA = "0x18299D450")]
	public FixedString128Bytes(in FixedString64Bytes other)
	{
	}

	[Token(Token = "0x6000462")]
	[Address(RVA = "0x299CBE0", Offset = "0x299B1E0", VA = "0x18299CBE0")]
	internal FormatError Initialize(in FixedString64Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000463")]
	[Address(RVA = "0x299D7C0", Offset = "0x299BDC0", VA = "0x18299D7C0")]
	public static bool operator ==(in FixedString128Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000464")]
	[Address(RVA = "0x299DBD0", Offset = "0x299C1D0", VA = "0x18299DBD0")]
	public static bool operator !=(in FixedString128Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000465")]
	[Address(RVA = "0x299C5D0", Offset = "0x299ABD0", VA = "0x18299C5D0", Slot = "21")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000466")]
	[Address(RVA = "0x299C300", Offset = "0x299A900", VA = "0x18299C300", Slot = "22")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000467")]
	[Address(RVA = "0x299D110", Offset = "0x299B710", VA = "0x18299D110")]
	public FixedString128Bytes(in FixedString128Bytes other)
	{
	}

	[Token(Token = "0x6000468")]
	[Address(RVA = "0x299CB20", Offset = "0x299B120", VA = "0x18299CB20")]
	internal FormatError Initialize(in FixedString128Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000469")]
	[Address(RVA = "0x299D740", Offset = "0x299BD40", VA = "0x18299D740")]
	public static bool operator ==(in FixedString128Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600046A")]
	[Address(RVA = "0x299DA80", Offset = "0x299C080", VA = "0x18299DA80")]
	public static bool operator !=(in FixedString128Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600046B")]
	[Address(RVA = "0x299C4F0", Offset = "0x299AAF0", VA = "0x18299C4F0", Slot = "23")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x600046C")]
	[Address(RVA = "0x299C350", Offset = "0x299A950", VA = "0x18299C350", Slot = "24")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x600046D")]
	[Address(RVA = "0x299D0E0", Offset = "0x299B6E0", VA = "0x18299D0E0")]
	public FixedString128Bytes(in FixedString512Bytes other)
	{
	}

	[Token(Token = "0x600046E")]
	[Address(RVA = "0x299CEF0", Offset = "0x299B4F0", VA = "0x18299CEF0")]
	internal FormatError Initialize(in FixedString512Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x600046F")]
	[Address(RVA = "0x299D620", Offset = "0x299BC20", VA = "0x18299D620")]
	public static bool operator ==(in FixedString128Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000470")]
	[Address(RVA = "0x299DBF0", Offset = "0x299C1F0", VA = "0x18299DBF0")]
	public static bool operator !=(in FixedString128Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000471")]
	[Address(RVA = "0x299C4B0", Offset = "0x299AAB0", VA = "0x18299C4B0", Slot = "25")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000472")]
	[Address(RVA = "0x299D8E0", Offset = "0x299BEE0", VA = "0x18299D8E0")]
	public static implicit operator FixedString512Bytes(in FixedString128Bytes fs)
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x6000473")]
	[Address(RVA = "0x299C2B0", Offset = "0x299A8B0", VA = "0x18299C2B0", Slot = "26")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000474")]
	[Address(RVA = "0x299D2B0", Offset = "0x299B8B0", VA = "0x18299D2B0")]
	public FixedString128Bytes(in FixedString4096Bytes other)
	{
	}

	[Token(Token = "0x6000475")]
	[Address(RVA = "0x299CD20", Offset = "0x299B320", VA = "0x18299CD20")]
	internal FormatError Initialize(in FixedString4096Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000476")]
	[Address(RVA = "0x299D850", Offset = "0x299BE50", VA = "0x18299D850")]
	public static bool operator ==(in FixedString128Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000477")]
	[Address(RVA = "0x299DAA0", Offset = "0x299C0A0", VA = "0x18299DAA0")]
	public static bool operator !=(in FixedString128Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000478")]
	[Address(RVA = "0x299C4D0", Offset = "0x299AAD0", VA = "0x18299C4D0", Slot = "27")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000479")]
	[Address(RVA = "0x299D920", Offset = "0x299BF20", VA = "0x18299D920")]
	public static implicit operator FixedString4096Bytes(in FixedString128Bytes fs)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x600047A")]
	[Address(RVA = "0x299D4B0", Offset = "0x299BAB0", VA = "0x18299D4B0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator ==(in FixedString128Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600047B")]
	[Address(RVA = "0x299DAC0", Offset = "0x299C0C0", VA = "0x18299DAC0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator !=(in FixedString128Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600047C")]
	[Address(RVA = "0x299DA10", Offset = "0x299C010", VA = "0x18299DA10")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static implicit operator FixedString128Bytes(string b)
	{
		return default(FixedString128Bytes);
	}

	[Token(Token = "0x600047D")]
	[Address(RVA = "0x299D030", Offset = "0x299B630", VA = "0x18299D030", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600047E")]
	[Address(RVA = "0x299CAE0", Offset = "0x299B0E0", VA = "0x18299CAE0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x600047F")]
	[Address(RVA = "0x299C5F0", Offset = "0x299ABF0", VA = "0x18299C5F0", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000480")]
	[Address(RVA = "0x299C040", Offset = "0x299A640", VA = "0x18299C040")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private readonly void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x6000481")]
	[Address(RVA = "0x299C170", Offset = "0x299A770", VA = "0x18299C170")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckLengthInRange(int length)
	{
	}

	[Token(Token = "0x6000482")]
	[Address(RVA = "0x299BE80", Offset = "0x299A480", VA = "0x18299BE80")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckCapacityInRange(int capacity)
	{
	}

	[Token(Token = "0x6000483")]
	[Address(RVA = "0x299BF40", Offset = "0x299A540", VA = "0x18299BF40")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x6000484")]
	[Address(RVA = "0x299BFE0", Offset = "0x299A5E0", VA = "0x18299BFE0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckFormatError(FormatError error)
	{
	}
}
