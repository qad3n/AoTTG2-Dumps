// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedString32Bytes
// Update status: unchanged since the previous dump
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
			[Address(RVA = "0x6366890", Offset = "0x6365890", VA = "0x6366890")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x17000086")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60003F5")]
			[Address(RVA = "0x63668A0", Offset = "0x63658A0", VA = "0x63668A0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60003F0")]
		[Address(RVA = "0x63642E0", Offset = "0x63632E0", VA = "0x63642E0")]
		public Enumerator(FixedString32Bytes other)
		{
		}

		[Token(Token = "0x60003F1")]
		[Address(RVA = "0x6366830", Offset = "0x6365830", VA = "0x6366830")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003F2")]
		[Address(RVA = "0x6366840", Offset = "0x6365840", VA = "0x6366840", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60003F3")]
		[Address(RVA = "0x6366880", Offset = "0x6365880", VA = "0x6366880", Slot = "6")]
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
		[Address(RVA = "0x6364110", Offset = "0x6363110", VA = "0x6364110")]
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
		[Address(RVA = "0x6364120", Offset = "0x6363120", VA = "0x6364120")]
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
		[Address(RVA = "0x63641B0", Offset = "0x63631B0", VA = "0x63641B0", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60003AE")]
		[Address(RVA = "0x63641C0", Offset = "0x63631C0", VA = "0x63641C0", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x17000082")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003AF")]
		[Address(RVA = "0x63641D0", Offset = "0x63631D0", VA = "0x63641D0", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x60003B0")]
		[Address(RVA = "0x63641E0", Offset = "0x63631E0", VA = "0x63641E0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x17000083")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B2")]
		[Address(RVA = "0x6364250", Offset = "0x6363250", VA = "0x6364250", Slot = "13")]
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
		[Address(RVA = "0x6364260", Offset = "0x6363260", VA = "0x6364260", Slot = "7")]
		readonly get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60003B4")]
		[Address(RVA = "0x6364270", Offset = "0x6363270", VA = "0x6364270", Slot = "8")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003AC")]
	[Address(RVA = "0x63641A0", Offset = "0x63631A0", VA = "0x63641A0", Slot = "14")]
	public unsafe readonly byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x60003B1")]
	[Address(RVA = "0x63641F0", Offset = "0x63631F0", VA = "0x63641F0", Slot = "15")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003B5")]
	[Address(RVA = "0x6364280", Offset = "0x6363280", VA = "0x6364280", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x60003B6")]
	[Address(RVA = "0x6364290", Offset = "0x6363290", VA = "0x6364290", Slot = "9")]
	public void Clear()
	{
	}

	[Token(Token = "0x60003B7")]
	[Address(RVA = "0x63642A0", Offset = "0x63632A0", VA = "0x63642A0")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x60003B8")]
	[Address(RVA = "0x63642C0", Offset = "0x63632C0", VA = "0x63642C0")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x60003B9")]
	[Address(RVA = "0x6364300", Offset = "0x6363300", VA = "0x6364300", Slot = "16")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x60003BA")]
	[Address(RVA = "0x6364360", Offset = "0x6363360", VA = "0x6364360", Slot = "17")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003BB")]
	[Address(RVA = "0x63643F0", Offset = "0x63633F0", VA = "0x63643F0")]
	public unsafe ref FixedList32Bytes<byte> AsFixedList()
	{
		return ref *(FixedList32Bytes<byte>*)null;
	}

	[Token(Token = "0x60003BC")]
	[Address(RVA = "0x6364420", Offset = "0x6363420", VA = "0x6364420")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public FixedString32Bytes(string source)
	{
	}

	[Token(Token = "0x60003BD")]
	[Address(RVA = "0x6364470", Offset = "0x6363470", VA = "0x6364470")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	internal CopyError Initialize(string source)
	{
		return default(CopyError);
	}

	[Token(Token = "0x60003BE")]
	[Address(RVA = "0x63644C0", Offset = "0x63634C0", VA = "0x63644C0")]
	public FixedString32Bytes(Unicode.Rune rune, int count = 1)
	{
	}

	[Token(Token = "0x60003BF")]
	[Address(RVA = "0x6364520", Offset = "0x6363520", VA = "0x6364520")]
	internal FormatError Initialize(Unicode.Rune rune, int count = 1)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003C0")]
	[Address(RVA = "0x6364570", Offset = "0x6363570", VA = "0x6364570")]
	internal unsafe FormatError Initialize(byte* srcBytes, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003C1")]
	[Address(RVA = "0x63645D0", Offset = "0x63635D0", VA = "0x63645D0")]
	public FixedString32Bytes(NativeText.ReadOnly other)
	{
	}

	[Token(Token = "0x60003C2")]
	[Address(RVA = "0x63646A0", Offset = "0x63636A0", VA = "0x63646A0")]
	public FixedString32Bytes(in UnsafeText other)
	{
	}

	[Token(Token = "0x60003C3")]
	[Address(RVA = "0x6364780", Offset = "0x6363780", VA = "0x6364780", Slot = "18")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60003C4")]
	[Address(RVA = "0x63647D0", Offset = "0x63637D0", VA = "0x63647D0")]
	public FixedString32Bytes(in FixedString32Bytes other)
	{
	}

	[Token(Token = "0x60003C5")]
	[Address(RVA = "0x6364870", Offset = "0x6363870", VA = "0x6364870")]
	internal FormatError Initialize(in FixedString32Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003C6")]
	[Address(RVA = "0x6364910", Offset = "0x6363910", VA = "0x6364910")]
	public static bool operator ==(in FixedString32Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C7")]
	[Address(RVA = "0x6364990", Offset = "0x6363990", VA = "0x6364990")]
	public static bool operator !=(in FixedString32Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C8")]
	[Address(RVA = "0x6364A10", Offset = "0x6363A10", VA = "0x6364A10", Slot = "19")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003C9")]
	[Address(RVA = "0x6364A90", Offset = "0x6363A90", VA = "0x6364A90", Slot = "20")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60003CA")]
	[Address(RVA = "0x6364AE0", Offset = "0x6363AE0", VA = "0x6364AE0")]
	public FixedString32Bytes(in FixedString64Bytes other)
	{
	}

	[Token(Token = "0x60003CB")]
	[Address(RVA = "0x6364B80", Offset = "0x6363B80", VA = "0x6364B80")]
	internal FormatError Initialize(in FixedString64Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003CC")]
	[Address(RVA = "0x6364C20", Offset = "0x6363C20", VA = "0x6364C20")]
	public static bool operator ==(in FixedString32Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CD")]
	[Address(RVA = "0x6364CC0", Offset = "0x6363CC0", VA = "0x6364CC0")]
	public static bool operator !=(in FixedString32Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CE")]
	[Address(RVA = "0x6364D70", Offset = "0x6363D70", VA = "0x6364D70", Slot = "21")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003CF")]
	[Address(RVA = "0x6364E20", Offset = "0x6363E20", VA = "0x6364E20")]
	public static implicit operator FixedString64Bytes(in FixedString32Bytes fs)
	{
		return default(FixedString64Bytes);
	}

	[Token(Token = "0x60003D0")]
	[Address(RVA = "0x6364F80", Offset = "0x6363F80", VA = "0x6364F80", Slot = "22")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60003D1")]
	[Address(RVA = "0x6364FD0", Offset = "0x6363FD0", VA = "0x6364FD0")]
	public FixedString32Bytes(in FixedString128Bytes other)
	{
	}

	[Token(Token = "0x60003D2")]
	[Address(RVA = "0x6365070", Offset = "0x6364070", VA = "0x6365070")]
	internal FormatError Initialize(in FixedString128Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003D3")]
	[Address(RVA = "0x6365110", Offset = "0x6364110", VA = "0x6365110")]
	public static bool operator ==(in FixedString32Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003D4")]
	[Address(RVA = "0x63651B0", Offset = "0x63641B0", VA = "0x63651B0")]
	public static bool operator !=(in FixedString32Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003D5")]
	[Address(RVA = "0x6365260", Offset = "0x6364260", VA = "0x6365260", Slot = "23")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003D6")]
	[Address(RVA = "0x6365310", Offset = "0x6364310", VA = "0x6365310")]
	public static implicit operator FixedString128Bytes(in FixedString32Bytes fs)
	{
		return default(FixedString128Bytes);
	}

	[Token(Token = "0x60003D7")]
	[Address(RVA = "0x63654B0", Offset = "0x63644B0", VA = "0x63654B0", Slot = "24")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60003D8")]
	[Address(RVA = "0x6365500", Offset = "0x6364500", VA = "0x6365500")]
	public FixedString32Bytes(in FixedString512Bytes other)
	{
	}

	[Token(Token = "0x60003D9")]
	[Address(RVA = "0x63655A0", Offset = "0x63645A0", VA = "0x63655A0")]
	internal FormatError Initialize(in FixedString512Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003DA")]
	[Address(RVA = "0x6365640", Offset = "0x6364640", VA = "0x6365640")]
	public static bool operator ==(in FixedString32Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003DB")]
	[Address(RVA = "0x63656E0", Offset = "0x63646E0", VA = "0x63656E0")]
	public static bool operator !=(in FixedString32Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003DC")]
	[Address(RVA = "0x6365790", Offset = "0x6364790", VA = "0x6365790", Slot = "25")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003DD")]
	[Address(RVA = "0x6365840", Offset = "0x6364840", VA = "0x6365840")]
	public static implicit operator FixedString512Bytes(in FixedString32Bytes fs)
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x60003DE")]
	[Address(RVA = "0x63659A0", Offset = "0x63649A0", VA = "0x63659A0", Slot = "26")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60003DF")]
	[Address(RVA = "0x63659F0", Offset = "0x63649F0", VA = "0x63659F0")]
	public FixedString32Bytes(in FixedString4096Bytes other)
	{
	}

	[Token(Token = "0x60003E0")]
	[Address(RVA = "0x6365A90", Offset = "0x6364A90", VA = "0x6365A90")]
	internal FormatError Initialize(in FixedString4096Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60003E1")]
	[Address(RVA = "0x6365B30", Offset = "0x6364B30", VA = "0x6365B30")]
	public static bool operator ==(in FixedString32Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E2")]
	[Address(RVA = "0x6365BD0", Offset = "0x6364BD0", VA = "0x6365BD0")]
	public static bool operator !=(in FixedString32Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E3")]
	[Address(RVA = "0x6365C80", Offset = "0x6364C80", VA = "0x6365C80", Slot = "27")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E4")]
	[Address(RVA = "0x6365D30", Offset = "0x6364D30", VA = "0x6365D30")]
	public static implicit operator FixedString4096Bytes(in FixedString32Bytes fs)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x60003E5")]
	[Address(RVA = "0x6365E90", Offset = "0x6364E90", VA = "0x6365E90")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator ==(in FixedString32Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E6")]
	[Address(RVA = "0x6365FE0", Offset = "0x6364FE0", VA = "0x6365FE0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator !=(in FixedString32Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60003E7")]
	[Address(RVA = "0x6365F90", Offset = "0x6364F90", VA = "0x6365F90")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static implicit operator FixedString32Bytes(string b)
	{
		return default(FixedString32Bytes);
	}

	[Token(Token = "0x60003E8")]
	[Address(RVA = "0x6364160", Offset = "0x6363160", VA = "0x6364160", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60003E9")]
	[Address(RVA = "0x63660B0", Offset = "0x63650B0", VA = "0x63660B0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60003EA")]
	[Address(RVA = "0x63660F0", Offset = "0x63650F0", VA = "0x63660F0", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60003EB")]
	[Address(RVA = "0x63664E0", Offset = "0x63654E0", VA = "0x63664E0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private readonly void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x60003EC")]
	[Address(RVA = "0x63665D0", Offset = "0x63655D0", VA = "0x63665D0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckLengthInRange(int length)
	{
	}

	[Token(Token = "0x60003ED")]
	[Address(RVA = "0x63666B0", Offset = "0x63656B0", VA = "0x63666B0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckCapacityInRange(int capacity)
	{
	}

	[Token(Token = "0x60003EE")]
	[Address(RVA = "0x6366750", Offset = "0x6365750", VA = "0x6366750")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x60003EF")]
	[Address(RVA = "0x63667E0", Offset = "0x63657E0", VA = "0x63667E0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckFormatError(FormatError error)
	{
	}
}
