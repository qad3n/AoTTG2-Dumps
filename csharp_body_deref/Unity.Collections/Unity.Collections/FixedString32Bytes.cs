// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedString32Bytes
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
[Token(Token = "0x2000069")]
[GenerateTestsForBurstCompatibility]
public struct FixedString32Bytes : INativeList<byte>, IIndexable<byte>, IUTF8Bytes, IComparable<string>, IEquatable<string>, IComparable<FixedString32Bytes>, IEquatable<FixedString32Bytes>, IComparable<FixedString64Bytes>, IEquatable<FixedString64Bytes>, IComparable<FixedString128Bytes>, IEquatable<FixedString128Bytes>, IComparable<FixedString512Bytes>, IEquatable<FixedString512Bytes>, IComparable<FixedString4096Bytes>, IEquatable<FixedString4096Bytes>
{
	[Token(Token = "0x200006A")]
	public struct Enumerator : IEnumerator
	{
		[Token(Token = "0x4000220")]
		[FieldOffset(Offset = "0x0")]
		private FixedString32Bytes target;

		[Token(Token = "0x4000221")]
		[FieldOffset(Offset = "0x20")]
		private int offset;

		[Token(Token = "0x4000222")]
		[FieldOffset(Offset = "0x24")]
		private Unicode.Rune current;

		[Token(Token = "0x17000085")]
		public Unicode.Rune Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x60003F4")]
			[Address(RVA = "0xBDB280", Offset = "0xBD9880", VA = "0x180BDB280")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x17000086")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60003F5")]
			[Address(RVA = "0x299BBC0", Offset = "0x299A1C0", VA = "0x18299BBC0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003F0")]
		[Address(RVA = "0x299BD20", Offset = "0x299A320", VA = "0x18299BD20")]
		public Enumerator(FixedString32Bytes other)
		{
		}

		[Token(Token = "0x60003F1")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F2")]
		[Address(RVA = "0x299B9B0", Offset = "0x2999FB0", VA = "0x18299B9B0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x299BB10", Offset = "0x299A110", VA = "0x18299BB10", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x400021D")]
	internal const ushort utf8MaxLengthInBytes = 29;

	[Token(Token = "0x400021E")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal ushort utf8LengthInBytes;

	[Token(Token = "0x400021F")]
	[FieldOffset(Offset = "0x2")]
	[SerializeField]
	internal FixedBytes30 bytes;

	[Token(Token = "0x1700007F")]
	public static int UTF8MaxLengthInBytes
	{
		[Token(Token = "0x60003AA")]
		[Address(RVA = "0x279B320", Offset = "0x2799920", VA = "0x18279B320")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x17000080")]
	[CreateProperty]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public string Value
	{
		[Token(Token = "0x60003AB")]
		[Address(RVA = "0x299ECE0", Offset = "0x299D2E0", VA = "0x18299ECE0")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x17000081")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003AD")]
		[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x299DC40", Offset = "0x299C240", VA = "0x18299DC40", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x279B320", Offset = "0x2799920", VA = "0x18279B320", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x299D490", Offset = "0x299BA90", VA = "0x18299D490", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x17000084")]
	public byte this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B3")]
		[Address(RVA = "0x299D4A0", Offset = "0x299BAA0", VA = "0x18299D4A0", Slot = "7")]
		readonly get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B4")]
		[Address(RVA = "0x299DC30", Offset = "0x299C230", VA = "0x18299DC30", Slot = "8")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x1704750", Offset = "0x1702D50", VA = "0x181704750", Slot = "14")]
	public unsafe readonly byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x299ED20", Offset = "0x299D320", VA = "0x18299ED20", Slot = "15")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x299C4A0", Offset = "0x299AAA0", VA = "0x18299C4A0", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x299C2A0", Offset = "0x299A8A0", VA = "0x18299C2A0", Slot = "9")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x299BE30", Offset = "0x299A430", VA = "0x18299BE30")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x299E850", Offset = "0x299CE50", VA = "0x18299E850")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x299E140", Offset = "0x299C740", VA = "0x18299E140", Slot = "16")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x299E290", Offset = "0x299C890", VA = "0x18299E290", Slot = "17")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x299DC50", Offset = "0x299C250", VA = "0x18299DC50")]
	public unsafe ref FixedList32Bytes<byte> AsFixedList()
	{
		return ref *(FixedList32Bytes<byte>*)null;
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x299ED90", Offset = "0x299D390", VA = "0x18299ED90")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public FixedString32Bytes(string source)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x299E8B0", Offset = "0x299CEB0", VA = "0x18299E8B0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	internal CopyError Initialize(string source)
	{
		return default(CopyError);
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x299F000", Offset = "0x299D600", VA = "0x18299F000")]
	public FixedString32Bytes(Unicode.Rune rune, int count = 1)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x299E900", Offset = "0x299CF00", VA = "0x18299E900")]
	internal FormatError Initialize(Unicode.Rune rune, int count = 1)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x299EA00", Offset = "0x299D000", VA = "0x18299EA00")]
	internal unsafe FormatError Initialize(byte* srcBytes, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x299EF30", Offset = "0x299D530", VA = "0x18299EF30")]
	public FixedString32Bytes(NativeText.ReadOnly other)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x299EE30", Offset = "0x299D430", VA = "0x18299EE30")]
	public FixedString32Bytes(in UnsafeText other)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x299E1F0", Offset = "0x299C7F0", VA = "0x18299E1F0", Slot = "18")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x299EF10", Offset = "0x299D510", VA = "0x18299EF10")]
	public FixedString32Bytes(in FixedString32Bytes other)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x299E960", Offset = "0x299CF60", VA = "0x18299E960")]
	internal FormatError Initialize(in FixedString32Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x299F140", Offset = "0x299D740", VA = "0x18299F140")]
	public static bool operator ==(in FixedString32Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x299F6C0", Offset = "0x299DCC0", VA = "0x18299F6C0")]
	public static bool operator !=(in FixedString32Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x299E370", Offset = "0x299C970", VA = "0x18299E370", Slot = "19")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x299E240", Offset = "0x299C840", VA = "0x18299E240", Slot = "20")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x299EDF0", Offset = "0x299D3F0", VA = "0x18299EDF0")]
	public FixedString32Bytes(in FixedString64Bytes other)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x299EB00", Offset = "0x299D100", VA = "0x18299EB00")]
	internal FormatError Initialize(in FixedString64Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x299F0B0", Offset = "0x299D6B0", VA = "0x18299F0B0")]
	public static bool operator ==(in FixedString32Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x299F790", Offset = "0x299DD90", VA = "0x18299F790")]
	public static bool operator !=(in FixedString32Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x299E350", Offset = "0x299C950", VA = "0x18299E350", Slot = "21")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x299F4C0", Offset = "0x299DAC0", VA = "0x18299F4C0")]
	public static implicit operator FixedString64Bytes(in FixedString32Bytes fs)
	{
		return default(FixedString64Bytes);
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x299E0F0", Offset = "0x299C6F0", VA = "0x18299E0F0", Slot = "22")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x299F090", Offset = "0x299D690", VA = "0x18299F090")]
	public FixedString32Bytes(in FixedString128Bytes other)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x299EC40", Offset = "0x299D240", VA = "0x18299EC40")]
	internal FormatError Initialize(in FixedString128Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x299F250", Offset = "0x299D850", VA = "0x18299F250")]
	public static bool operator ==(in FixedString32Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x299F6A0", Offset = "0x299DCA0", VA = "0x18299F6A0")]
	public static bool operator !=(in FixedString32Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x299E390", Offset = "0x299C990", VA = "0x18299E390", Slot = "23")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x299F640", Offset = "0x299DC40", VA = "0x18299F640")]
	public static implicit operator FixedString128Bytes(in FixedString32Bytes fs)
	{
		return default(FixedString128Bytes);
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x299E0A0", Offset = "0x299C6A0", VA = "0x18299E0A0", Slot = "24")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x299F070", Offset = "0x299D670", VA = "0x18299F070")]
	public FixedString32Bytes(in FixedString512Bytes other)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x299EBA0", Offset = "0x299D1A0", VA = "0x18299EBA0")]
	internal FormatError Initialize(in FixedString512Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x299F1C0", Offset = "0x299D7C0", VA = "0x18299F1C0")]
	public static bool operator ==(in FixedString32Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x299F6E0", Offset = "0x299DCE0", VA = "0x18299F6E0")]
	public static bool operator !=(in FixedString32Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x299E330", Offset = "0x299C930", VA = "0x18299E330", Slot = "25")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x299F480", Offset = "0x299DA80", VA = "0x18299F480")]
	public static implicit operator FixedString512Bytes(in FixedString32Bytes fs)
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x299E1A0", Offset = "0x299C7A0", VA = "0x18299E1A0", Slot = "26")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x299EE10", Offset = "0x299D410", VA = "0x18299EE10")]
	public FixedString32Bytes(in FixedString4096Bytes other)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x299EA60", Offset = "0x299D060", VA = "0x18299EA60")]
	internal FormatError Initialize(in FixedString4096Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x299F3F0", Offset = "0x299D9F0", VA = "0x18299F3F0")]
	public static bool operator ==(in FixedString32Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x299F680", Offset = "0x299DC80", VA = "0x18299F680")]
	public static bool operator !=(in FixedString32Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x299E830", Offset = "0x299CE30", VA = "0x18299E830", Slot = "27")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x299F4F0", Offset = "0x299DAF0", VA = "0x18299F4F0")]
	public static implicit operator FixedString4096Bytes(in FixedString32Bytes fs)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x299F2E0", Offset = "0x299D8E0", VA = "0x18299F2E0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator ==(in FixedString32Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x299F700", Offset = "0x299DD00", VA = "0x18299F700")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator !=(in FixedString32Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x299F5E0", Offset = "0x299DBE0", VA = "0x18299F5E0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static implicit operator FixedString32Bytes(string b)
	{
		return default(FixedString32Bytes);
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x299ECE0", Offset = "0x299D2E0", VA = "0x18299ECE0", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x299E870", Offset = "0x299CE70", VA = "0x18299E870", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x299E3B0", Offset = "0x299C9B0", VA = "0x18299E3B0", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x299DE40", Offset = "0x299C440", VA = "0x18299DE40")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private readonly void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x299DF70", Offset = "0x299C570", VA = "0x18299DF70")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckLengthInRange(int length)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x299DC80", Offset = "0x299C280", VA = "0x18299DC80")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckCapacityInRange(int capacity)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x299DD40", Offset = "0x299C340", VA = "0x18299DD40")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x299DDE0", Offset = "0x299C3E0", VA = "0x18299DDE0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckFormatError(FormatError error)
	{
	}
}
