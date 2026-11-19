// ==================== AoTTG2 cross-reference ====================
// Type: Unity.Collections.FixedString512Bytes
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
			[Address(RVA = "0x636D8D0", Offset = "0x636C8D0", VA = "0x636D8D0")]
			get
			{
				return default(Unicode.Rune);
			}
		}

		[Token(Token = "0x1700009E")]
		private object System_002ECollections_002EIEnumerator_002ECurrent
		{
			[Token(Token = "0x60004D3")]
			[Address(RVA = "0x636D8E0", Offset = "0x636C8E0", VA = "0x636D8E0", Slot = "5")]
			get
			{
				return null;
			}
		}

		[Token(Token = "0x60004CE")]
		[Address(RVA = "0x636B8B0", Offset = "0x636A8B0", VA = "0x636B8B0")]
		public Enumerator(FixedString512Bytes other)
		{
		}

		[Token(Token = "0x60004CF")]
		[Address(RVA = "0x636D870", Offset = "0x636C870", VA = "0x636D870")]
		public void Dispose()
		{
		}

		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x60004D0")]
		[Address(RVA = "0x636D880", Offset = "0x636C880", VA = "0x636D880", Slot = "4")]
		public bool MoveNext()
		{
			return default(bool);
		}

		[Token(Token = "0x60004D1")]
		[Address(RVA = "0x636D8C0", Offset = "0x636C8C0", VA = "0x636D8C0", Slot = "6")]
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
		[Address(RVA = "0x636B6E0", Offset = "0x636A6E0", VA = "0x636B6E0")]
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
		[Address(RVA = "0x636B6F0", Offset = "0x636A6F0", VA = "0x636B6F0")]
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
		[Address(RVA = "0x636B780", Offset = "0x636A780", VA = "0x636B780", Slot = "10")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x600048F")]
		[Address(RVA = "0x636B790", Offset = "0x636A790", VA = "0x636B790", Slot = "11")]
		set
		{
		}
	}

	[Token(Token = "0x1700009A")]
	public int Capacity
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000490")]
		[Address(RVA = "0x636B7A0", Offset = "0x636A7A0", VA = "0x636B7A0", Slot = "4")]
		readonly get
		{
			return default(int);
		}
		[Token(Token = "0x6000491")]
		[Address(RVA = "0x636B7B0", Offset = "0x636A7B0", VA = "0x636B7B0", Slot = "5")]
		set
		{
		}
	}

	[Token(Token = "0x1700009B")]
	public readonly bool IsEmpty
	{
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000493")]
		[Address(RVA = "0x636B820", Offset = "0x636A820", VA = "0x636B820", Slot = "13")]
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
		[Address(RVA = "0x636B830", Offset = "0x636A830", VA = "0x636B830", Slot = "7")]
		readonly get
		{
			return default(byte);
		}
		[MethodImpl((MethodImplOptions)256)]
		[Token(Token = "0x6000495")]
		[Address(RVA = "0x636B840", Offset = "0x636A840", VA = "0x636B840", Slot = "8")]
		set
		{
		}
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x600048D")]
	[Address(RVA = "0x636B770", Offset = "0x636A770", VA = "0x636B770", Slot = "14")]
	public unsafe readonly byte* GetUnsafePtr()
	{
		//IL_0002: Expected I, but got O
		return (byte*)unchecked((nint)null);
	}

	[Token(Token = "0x6000492")]
	[Address(RVA = "0x636B7C0", Offset = "0x636A7C0", VA = "0x636B7C0", Slot = "15")]
	public bool TryResize(int newLength, NativeArrayOptions clearOptions = NativeArrayOptions.ClearMemory)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x6000496")]
	[Address(RVA = "0x636B850", Offset = "0x636A850", VA = "0x636B850", Slot = "12")]
	public unsafe ref byte ElementAt(int index)
	{
		return ref *(byte*)null;
	}

	[Token(Token = "0x6000497")]
	[Address(RVA = "0x636B860", Offset = "0x636A860", VA = "0x636B860", Slot = "9")]
	public void Clear()
	{
	}

	[Token(Token = "0x6000498")]
	[Address(RVA = "0x636B870", Offset = "0x636A870", VA = "0x636B870")]
	public void Add(in byte value)
	{
	}

	[Token(Token = "0x6000499")]
	[Address(RVA = "0x636B890", Offset = "0x636A890", VA = "0x636B890")]
	public Enumerator GetEnumerator()
	{
		return default(Enumerator);
	}

	[Token(Token = "0x600049A")]
	[Address(RVA = "0x636B8D0", Offset = "0x636A8D0", VA = "0x636B8D0", Slot = "16")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public int CompareTo(string other)
	{
		return default(int);
	}

	[Token(Token = "0x600049B")]
	[Address(RVA = "0x636B930", Offset = "0x636A930", VA = "0x636B930", Slot = "17")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public bool Equals(string other)
	{
		return default(bool);
	}

	[Token(Token = "0x600049C")]
	[Address(RVA = "0x636B9C0", Offset = "0x636A9C0", VA = "0x636B9C0")]
	public unsafe ref FixedList512Bytes<byte> AsFixedList()
	{
		return ref *(FixedList512Bytes<byte>*)null;
	}

	[Token(Token = "0x600049D")]
	[Address(RVA = "0x636B9F0", Offset = "0x636A9F0", VA = "0x636B9F0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public FixedString512Bytes(string source)
	{
	}

	[Token(Token = "0x600049E")]
	[Address(RVA = "0x636BA40", Offset = "0x636AA40", VA = "0x636BA40")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	internal CopyError Initialize(string source)
	{
		return default(CopyError);
	}

	[Token(Token = "0x600049F")]
	[Address(RVA = "0x636BA90", Offset = "0x636AA90", VA = "0x636BA90")]
	public FixedString512Bytes(Unicode.Rune rune, int count = 1)
	{
	}

	[Token(Token = "0x60004A0")]
	[Address(RVA = "0x636BAF0", Offset = "0x636AAF0", VA = "0x636BAF0")]
	internal FormatError Initialize(Unicode.Rune rune, int count = 1)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004A1")]
	[Address(RVA = "0x636BB50", Offset = "0x636AB50", VA = "0x636BB50")]
	internal unsafe FormatError Initialize(byte* srcBytes, int srcLength)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004A2")]
	[Address(RVA = "0x636BBC0", Offset = "0x636ABC0", VA = "0x636BBC0")]
	public FixedString512Bytes(NativeText.ReadOnly other)
	{
	}

	[Token(Token = "0x60004A3")]
	[Address(RVA = "0x636BCA0", Offset = "0x636ACA0", VA = "0x636BCA0")]
	public FixedString512Bytes(in UnsafeText other)
	{
	}

	[Token(Token = "0x60004A4")]
	[Address(RVA = "0x636BD90", Offset = "0x636AD90", VA = "0x636BD90", Slot = "18")]
	public int CompareTo(FixedString32Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004A5")]
	[Address(RVA = "0x63658F0", Offset = "0x63648F0", VA = "0x63658F0")]
	public FixedString512Bytes(in FixedString32Bytes other)
	{
	}

	[Token(Token = "0x60004A6")]
	[Address(RVA = "0x636BDE0", Offset = "0x636ADE0", VA = "0x636BDE0")]
	internal FormatError Initialize(in FixedString32Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004A7")]
	[Address(RVA = "0x636BE80", Offset = "0x636AE80", VA = "0x636BE80")]
	public static bool operator ==(in FixedString512Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A8")]
	[Address(RVA = "0x636BF20", Offset = "0x636AF20", VA = "0x636BF20")]
	public static bool operator !=(in FixedString512Bytes a, in FixedString32Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004A9")]
	[Address(RVA = "0x636BFD0", Offset = "0x636AFD0", VA = "0x636BFD0", Slot = "19")]
	public bool Equals(FixedString32Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004AA")]
	[Address(RVA = "0x636C080", Offset = "0x636B080", VA = "0x636C080", Slot = "20")]
	public int CompareTo(FixedString64Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004AB")]
	[Address(RVA = "0x6367F70", Offset = "0x6366F70", VA = "0x6367F70")]
	public FixedString512Bytes(in FixedString64Bytes other)
	{
	}

	[Token(Token = "0x60004AC")]
	[Address(RVA = "0x636C0D0", Offset = "0x636B0D0", VA = "0x636C0D0")]
	internal FormatError Initialize(in FixedString64Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004AD")]
	[Address(RVA = "0x636C170", Offset = "0x636B170", VA = "0x636C170")]
	public static bool operator ==(in FixedString512Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004AE")]
	[Address(RVA = "0x636C210", Offset = "0x636B210", VA = "0x636C210")]
	public static bool operator !=(in FixedString512Bytes a, in FixedString64Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004AF")]
	[Address(RVA = "0x636C2C0", Offset = "0x636B2C0", VA = "0x636C2C0", Slot = "21")]
	public bool Equals(FixedString64Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B0")]
	[Address(RVA = "0x636C370", Offset = "0x636B370", VA = "0x636C370", Slot = "22")]
	public int CompareTo(FixedString128Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004B1")]
	[Address(RVA = "0x636A570", Offset = "0x6369570", VA = "0x636A570")]
	public FixedString512Bytes(in FixedString128Bytes other)
	{
	}

	[Token(Token = "0x60004B2")]
	[Address(RVA = "0x636C3C0", Offset = "0x636B3C0", VA = "0x636C3C0")]
	internal FormatError Initialize(in FixedString128Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004B3")]
	[Address(RVA = "0x636C460", Offset = "0x636B460", VA = "0x636C460")]
	public static bool operator ==(in FixedString512Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B4")]
	[Address(RVA = "0x636C500", Offset = "0x636B500", VA = "0x636C500")]
	public static bool operator !=(in FixedString512Bytes a, in FixedString128Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B5")]
	[Address(RVA = "0x636C5B0", Offset = "0x636B5B0", VA = "0x636C5B0", Slot = "23")]
	public bool Equals(FixedString128Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004B6")]
	[Address(RVA = "0x636C660", Offset = "0x636B660", VA = "0x636C660", Slot = "24")]
	public int CompareTo(FixedString512Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004B7")]
	[Address(RVA = "0x636C6B0", Offset = "0x636B6B0", VA = "0x636C6B0")]
	public FixedString512Bytes(in FixedString512Bytes other)
	{
	}

	[Token(Token = "0x60004B8")]
	[Address(RVA = "0x636C760", Offset = "0x636B760", VA = "0x636C760")]
	internal FormatError Initialize(in FixedString512Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004B9")]
	[Address(RVA = "0x636C800", Offset = "0x636B800", VA = "0x636C800")]
	public static bool operator ==(in FixedString512Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BA")]
	[Address(RVA = "0x636C880", Offset = "0x636B880", VA = "0x636C880")]
	public static bool operator !=(in FixedString512Bytes a, in FixedString512Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BB")]
	[Address(RVA = "0x636C900", Offset = "0x636B900", VA = "0x636C900", Slot = "25")]
	public bool Equals(FixedString512Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004BC")]
	[Address(RVA = "0x636C980", Offset = "0x636B980", VA = "0x636C980", Slot = "26")]
	public int CompareTo(FixedString4096Bytes other)
	{
		return default(int);
	}

	[Token(Token = "0x60004BD")]
	[Address(RVA = "0x636C9D0", Offset = "0x636B9D0", VA = "0x636C9D0")]
	public FixedString512Bytes(in FixedString4096Bytes other)
	{
	}

	[Token(Token = "0x60004BE")]
	[Address(RVA = "0x636CA80", Offset = "0x636BA80", VA = "0x636CA80")]
	internal FormatError Initialize(in FixedString4096Bytes other)
	{
		return default(FormatError);
	}

	[Token(Token = "0x60004BF")]
	[Address(RVA = "0x636CB20", Offset = "0x636BB20", VA = "0x636CB20")]
	public static bool operator ==(in FixedString512Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C0")]
	[Address(RVA = "0x636CBC0", Offset = "0x636BBC0", VA = "0x636CBC0")]
	public static bool operator !=(in FixedString512Bytes a, in FixedString4096Bytes b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C1")]
	[Address(RVA = "0x636CC70", Offset = "0x636BC70", VA = "0x636CC70", Slot = "27")]
	public bool Equals(FixedString4096Bytes other)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C2")]
	[Address(RVA = "0x636CD20", Offset = "0x636BD20", VA = "0x636CD20")]
	public static implicit operator FixedString4096Bytes(in FixedString512Bytes fs)
	{
		return default(FixedString4096Bytes);
	}

	[Token(Token = "0x60004C3")]
	[Address(RVA = "0x636CE80", Offset = "0x636BE80", VA = "0x636CE80")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator ==(in FixedString512Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C4")]
	[Address(RVA = "0x636CFF0", Offset = "0x636BFF0", VA = "0x636CFF0")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static bool operator !=(in FixedString512Bytes a, string b)
	{
		return default(bool);
	}

	[Token(Token = "0x60004C5")]
	[Address(RVA = "0x636CF90", Offset = "0x636BF90", VA = "0x636CF90")]
	[ExcludeFromBurstCompatTesting("Takes managed string")]
	public static implicit operator FixedString512Bytes(string b)
	{
		return default(FixedString512Bytes);
	}

	[Token(Token = "0x60004C6")]
	[Address(RVA = "0x636B730", Offset = "0x636A730", VA = "0x636B730", Slot = "3")]
	[ExcludeFromBurstCompatTesting("Returns managed string")]
	public override string ToString()
	{
		return null;
	}

	[Token(Token = "0x60004C7")]
	[Address(RVA = "0x636D0E0", Offset = "0x636C0E0", VA = "0x636D0E0", Slot = "2")]
	public override int GetHashCode()
	{
		return default(int);
	}

	[Token(Token = "0x60004C8")]
	[Address(RVA = "0x636D120", Offset = "0x636C120", VA = "0x636D120", Slot = "0")]
	[ExcludeFromBurstCompatTesting("Takes managed object")]
	public override bool Equals(object obj)
	{
		return default(bool);
	}

	[MethodImpl((MethodImplOptions)256)]
	[Token(Token = "0x60004C9")]
	[Address(RVA = "0x636D520", Offset = "0x636C520", VA = "0x636D520")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private readonly void CheckIndexInRange(int index)
	{
	}

	[Token(Token = "0x60004CA")]
	[Address(RVA = "0x636D610", Offset = "0x636C610", VA = "0x636D610")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckLengthInRange(int length)
	{
	}

	[Token(Token = "0x60004CB")]
	[Address(RVA = "0x636D6F0", Offset = "0x636C6F0", VA = "0x636D6F0")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private void CheckCapacityInRange(int capacity)
	{
	}

	[Token(Token = "0x60004CC")]
	[Address(RVA = "0x636D790", Offset = "0x636C790", VA = "0x636D790")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckCopyError(CopyError error, string source)
	{
	}

	[Token(Token = "0x60004CD")]
	[Address(RVA = "0x636D820", Offset = "0x636C820", VA = "0x636D820")]
	[Conditional("ENABLE_UNITY_COLLECTIONS_CHECKS")]
	[Conditional("UNITY_DOTS_DEBUG")]
	private static void CheckFormatError(FormatError error)
	{
	}
}
