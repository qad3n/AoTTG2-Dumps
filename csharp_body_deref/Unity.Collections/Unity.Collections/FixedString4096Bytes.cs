// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedString4096Bytes
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
[Token(Token = "0x2000075")]
[GenerateTestsForBurstCompatibility]
public struct FixedString4096Bytes : INativeList<byte>, IIndexable<byte>, IUTF8Bytes, IComparable<string>, IEquatable<string>, IComparable<FixedString32Bytes>, IEquatable<FixedString32Bytes>, IComparable<FixedString64Bytes>, IEquatable<FixedString64Bytes>, IComparable<FixedString128Bytes>, IEquatable<FixedString128Bytes>, IComparable<FixedString512Bytes>, IEquatable<FixedString512Bytes>, IComparable<FixedString4096Bytes>, IEquatable<FixedString4096Bytes>
{
	[Token(Token = "0x2000076")]
	public struct Enumerator : IEnumerator
	{
		[Token(Token = "0x4000398")]
		[FieldOffset(Offset = "0x0")]
		private FixedString4096Bytes target;

		[Token(Token = "0x4000399")]
		[FieldOffset(Offset = "0x1000")]
		private int offset;

		[Token(Token = "0x400039A")]
		[FieldOffset(Offset = "0x1004")]
		private Unicode.Rune current;

		[Token(Token = "0x170000A5")]
		public Unicode.Rune Current
		{
			[MethodImpl((MethodImplOptions)256)]
			[Token(Token = "0x600051A")]
			[Address(RVA = "0x299BE20", Offset = "0x299A420", VA = "0x18299BE20")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x170000A6")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x600051B")]
			[Address(RVA = "0x299BB20", Offset = "0x299A120", VA = "0x18299BB20", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x6000516")]
		[Address(RVA = "0x299BD40", Offset = "0x299A340", VA = "0x18299BD40")]
		public Enumerator(FixedString4096Bytes other)
		{
		}

		[Token(Token = "0x6000517")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000518")]
		[Address(RVA = "0x299B9F0", Offset = "0x2999FF0", VA = "0x18299B9F0", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x6000519")]
		[Address(RVA = "0x299BAF0", Offset = "0x299A0F0", VA = "0x18299BAF0", Slot = "6")]
		public void Reset()
		{
		}
	}

	[Token(Token = "0x4000395")]
	internal const ushort utf8MaxLengthInBytes = 4093;

	[Token(Token = "0x4000396")]
	[FieldOffset(Offset = "0x0")]
	[SerializeField]
	internal ushort utf8LengthInBytes;

	[Token(Token = "0x4000397")]
	[FieldOffset(Offset = "0x2")]
	[SerializeField]
	internal FixedBytes4094 bytes;

	[Token(Token = "0x1700009F")]
	public static int UTF8MaxLengthInBytes
	{
		[Token(Token = "0x60004D4")]
		[Address(RVA = "0x29A0DE0", Offset = "0x299F3E0", VA = "0x1829A0DE0")]
		get
		{
			return default(int);
		}
	}

	[Token(Token = "0x170000A0")]
	[CreateProperty]
	[EditorBrowsable(EditorBrowsableState.Never)]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public string Value
	{
		[Token(Token = "0x60004D5")]
		[Address(RVA = "0x29A0940", Offset = "0x299EF40", VA = "0x1829A0940")]
		get
		{
			return null;
		}
	}

	[Token(Token = "0x170000A1")]
	public int Length
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60004D7")]
		[Address(RVA = "0x846ED0", Offset = "0x8454D0", VA = "0x180846ED0", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60004D8")]
		[Address(RVA = "0x299DC40", Offset = "0x299C240", VA = "0x18299DC40", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x170000A2")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60004D9")]
		[Address(RVA = "0x29A0DE0", Offset = "0x299F3E0", VA = "0x1829A0DE0", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60004DA")]
		[Address(RVA = "0x547020", Offset = "0x545620", VA = "0x180547020", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x170000A3")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60004DC")]
		[Address(RVA = "0x299D490", Offset = "0x299BA90", VA = "0x18299D490", Slot = "13")]
		get
		{
			return default(bool);
		}
	}

	[Token(Token = "0x170000A4")]
	public byte this[int index]
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60004DD")]
		[Address(RVA = "0x299D4A0", Offset = "0x299BAA0", VA = "0x18299D4A0", Slot = "7")]
		readonly get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60004DE")]
		[Address(RVA = "0x299DC30", Offset = "0x299C230", VA = "0x18299DC30", Slot = "8")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004D6")]
	[Address(RVA = "0x1704750", Offset = "0x1702D50", VA = "0x181704750", Slot = "14")]
	public unsafe readonly byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60004DB")]
	[Address(RVA = "0x29A0980", Offset = "0x299EF80", VA = "0x1829A0980", Slot = "15")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004DF")]
	[Address(RVA = "0x299C4A0", Offset = "0x299AAA0", VA = "0x18299C4A0", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x60004E0")]
	[Address(RVA = "0x299C2A0", Offset = "0x299A8A0", VA = "0x18299C2A0", Slot = "9")]
	public void Clear()
	{
	}

	[Token(Token = "0x60004E1")]
	[Address(RVA = "0x299BE30", Offset = "0x299A430", VA = "0x18299BE30")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x60004E2")]
	[Address(RVA = "0x29A03B0", Offset = "0x299E9B0", VA = "0x1829A03B0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60004E3")]
	[Address(RVA = "0x299FD80", Offset = "0x299E380", VA = "0x18299FD80", Slot = "16")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x60004E4")]
	[Address(RVA = "0x299FE00", Offset = "0x299E400", VA = "0x18299FE00", Slot = "17")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004E5")]
	[Address(RVA = "0x299F7B0", Offset = "0x299DDB0", VA = "0x18299F7B0")]
	public unsafe ref FixedList4096Bytes<byte> AsFixedList()
	{
		return ref *(FixedList4096Bytes<byte>*)null;
	}

	[Token(Token = "0x60004E6")]
	[Address(RVA = "0x29A0A80", Offset = "0x299F080", VA = "0x1829A0A80")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public FixedString4096Bytes(string source)
	{
	}

	[Token(Token = "0x60004E7")]
	[Address(RVA = "0x29A08F0", Offset = "0x299EEF0", VA = "0x1829A08F0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	internal CopyError Initialize(string source)
	{
		return default(CopyError);
	}

	[Token(Token = "0x60004E8")]
	[Address(RVA = "0x29A0AE0", Offset = "0x299F0E0", VA = "0x1829A0AE0")]
	public FixedString4096Bytes(Unicode.Rune rune, int count = 1)
	{
	}

	[Token(Token = "0x60004E9")]
	[Address(RVA = "0x29A0880", Offset = "0x299EE80", VA = "0x1829A0880")]
	internal FormatError Initialize(Unicode.Rune rune, int count = 1)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004EA")]
	[Address(RVA = "0x29A0750", Offset = "0x299ED50", VA = "0x1829A0750")]
	internal unsafe FormatError Initialize(byte* srcBytes, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004EB")]
	[Address(RVA = "0x29A0C20", Offset = "0x299F220", VA = "0x1829A0C20")]
	public FixedString4096Bytes(NativeText.ReadOnly other)
	{
	}

	[Token(Token = "0x60004EC")]
	[Address(RVA = "0x29A0D00", Offset = "0x299F300", VA = "0x1829A0D00")]
	public FixedString4096Bytes(in UnsafeText other)
	{
	}

	[Token(Token = "0x60004ED")]
	[Address(RVA = "0x299FCE0", Offset = "0x299E2E0", VA = "0x18299FCE0", Slot = "18")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004EE")]
	[Address(RVA = "0x29A0A00", Offset = "0x299F000", VA = "0x1829A0A00")]
	public FixedString4096Bytes(in FixedString32Bytes other)
	{
	}

	[Token(Token = "0x60004EF")]
	[Address(RVA = "0x29A05F0", Offset = "0x299EBF0", VA = "0x1829A05F0")]
	internal FormatError Initialize(in FixedString32Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004F0")]
	[Address(RVA = "0x29A0F00", Offset = "0x299F500", VA = "0x1829A0F00")]
	public static bool operator ==(in FixedString4096Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F1")]
	[Address(RVA = "0x29A12E0", Offset = "0x299F8E0", VA = "0x1829A12E0")]
	public static bool operator !=(in FixedString4096Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F2")]
	[Address(RVA = "0x29A0370", Offset = "0x299E970", VA = "0x1829A0370", Slot = "19")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F3")]
	[Address(RVA = "0x299FD30", Offset = "0x299E330", VA = "0x18299FD30", Slot = "20")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004F4")]
	[Address(RVA = "0x29A0B60", Offset = "0x299F160", VA = "0x1829A0B60")]
	public FixedString4096Bytes(in FixedString64Bytes other)
	{
	}

	[Token(Token = "0x60004F5")]
	[Address(RVA = "0x29A0490", Offset = "0x299EA90", VA = "0x1829A0490")]
	internal FormatError Initialize(in FixedString64Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004F6")]
	[Address(RVA = "0x29A0E70", Offset = "0x299F470", VA = "0x1829A0E70")]
	public static bool operator ==(in FixedString4096Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F7")]
	[Address(RVA = "0x29A1320", Offset = "0x299F920", VA = "0x1829A1320")]
	public static bool operator !=(in FixedString4096Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F8")]
	[Address(RVA = "0x29A0390", Offset = "0x299E990", VA = "0x1829A0390", Slot = "21")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004F9")]
	[Address(RVA = "0x299FC90", Offset = "0x299E290", VA = "0x18299FC90", Slot = "22")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004FA")]
	[Address(RVA = "0x29A0A40", Offset = "0x299F040", VA = "0x1829A0A40")]
	public FixedString4096Bytes(in FixedString128Bytes other)
	{
	}

	[Token(Token = "0x60004FB")]
	[Address(RVA = "0x29A06A0", Offset = "0x299ECA0", VA = "0x1829A06A0")]
	internal FormatError Initialize(in FixedString128Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004FC")]
	[Address(RVA = "0x29A0F90", Offset = "0x299F590", VA = "0x1829A0F90")]
	public static bool operator ==(in FixedString4096Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FD")]
	[Address(RVA = "0x29A12C0", Offset = "0x299F8C0", VA = "0x1829A12C0")]
	public static bool operator !=(in FixedString4096Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FE")]
	[Address(RVA = "0x299FEA0", Offset = "0x299E4A0", VA = "0x18299FEA0", Slot = "23")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004FF")]
	[Address(RVA = "0x299FBF0", Offset = "0x299E1F0", VA = "0x18299FBF0", Slot = "24")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000500")]
	[Address(RVA = "0x29A0BE0", Offset = "0x299F1E0", VA = "0x1829A0BE0")]
	public FixedString4096Bytes(in FixedString512Bytes other)
	{
	}

	[Token(Token = "0x6000501")]
	[Address(RVA = "0x29A07D0", Offset = "0x299EDD0", VA = "0x1829A07D0")]
	internal FormatError Initialize(in FixedString512Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000502")]
	[Address(RVA = "0x29A1020", Offset = "0x299F620", VA = "0x1829A1020")]
	public static bool operator ==(in FixedString4096Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000503")]
	[Address(RVA = "0x29A1440", Offset = "0x299FA40", VA = "0x1829A1440")]
	public static bool operator !=(in FixedString4096Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000504")]
	[Address(RVA = "0x299FEC0", Offset = "0x299E4C0", VA = "0x18299FEC0", Slot = "25")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x6000505")]
	[Address(RVA = "0x299FC40", Offset = "0x299E240", VA = "0x18299FC40", Slot = "26")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x6000506")]
	[Address(RVA = "0x29A0BA0", Offset = "0x299F1A0", VA = "0x1829A0BA0")]
	public FixedString4096Bytes(in FixedString4096Bytes other)
	{
	}

	[Token(Token = "0x6000507")]
	[Address(RVA = "0x29A0540", Offset = "0x299EB40", VA = "0x1829A0540")]
	internal FormatError Initialize(in FixedString4096Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x6000508")]
	[Address(RVA = "0x29A0DF0", Offset = "0x299F3F0", VA = "0x1829A0DF0")]
	public static bool operator ==(in FixedString4096Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x6000509")]
	[Address(RVA = "0x29A1300", Offset = "0x299F900", VA = "0x1829A1300")]
	public static bool operator !=(in FixedString4096Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x600050A")]
	[Address(RVA = "0x299FDE0", Offset = "0x299E3E0", VA = "0x18299FDE0", Slot = "27")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x600050B")]
	[Address(RVA = "0x29A10B0", Offset = "0x299F6B0", VA = "0x1829A10B0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator ==(in FixedString4096Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600050C")]
	[Address(RVA = "0x29A1340", Offset = "0x299F940", VA = "0x1829A1340")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator !=(in FixedString4096Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x600050D")]
	[Address(RVA = "0x29A1230", Offset = "0x299F830", VA = "0x1829A1230")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static implicit operator FixedString4096Bytes(string b)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x600050E")]
	[Address(RVA = "0x29A0940", Offset = "0x299EF40", VA = "0x1829A0940", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x600050F")]
	[Address(RVA = "0x29A0450", Offset = "0x299EA50", VA = "0x1829A0450", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x6000510")]
	[Address(RVA = "0x299FEE0", Offset = "0x299E4E0", VA = "0x18299FEE0", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000511")]
	[Address(RVA = "0x299F990", Offset = "0x299DF90", VA = "0x18299F990")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private readonly void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x6000512")]
	[Address(RVA = "0x299FAC0", Offset = "0x299E0C0", VA = "0x18299FAC0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckLengthInRange(int length)
	{
	}

	[Token(Token = "0x6000513")]
	[Address(RVA = "0x299F7E0", Offset = "0x299DDE0", VA = "0x18299F7E0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckCapacityInRange(int capacity)
	{
	}

	[Token(Token = "0x6000514")]
	[Address(RVA = "0x299F890", Offset = "0x299DE90", VA = "0x18299F890")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x6000515")]
	[Address(RVA = "0x299F930", Offset = "0x299DF30", VA = "0x18299F930")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckFormatError(FormatError error)
	{
	}
}
